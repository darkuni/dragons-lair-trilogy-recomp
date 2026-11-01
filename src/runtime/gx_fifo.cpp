// GX command processor: parses the FIFO stream written by the game/SDK to
// 0xCC008000, tracks CP/XF/BP state, and raises PE (draw done / token)
// interrupts. Rendering hooks in at gx_draw().
#include "hle.h"
#include "gx_state.h"
#include "gx_render.h"
void gx_cp_written();
#include <vector>

GXState g_gx;
static std::vector<uint8_t> g_fifo;    // pending, unparsed bytes
static size_t g_rd = 0;
void raise_interrupt(Ctx* c, int n);
void mmio_poke(uint32_t a, uint32_t v);
uint32_t mmio_peek(uint32_t a);

static const int kFmtSize[8] = {1, 1, 2, 2, 4, 0, 0, 0};
static const int kClrSize[8] = {2, 3, 4, 2, 3, 4, 0, 0};

int gx_vertex_size(int vat) {
    const uint32_t lo = g_gx.cp[0x50], hi = g_gx.cp[0x60];
    const uint32_t A = g_gx.cp[0x70 + vat], B = g_gx.cp[0x80 + vat], C = g_gx.cp[0x90 + vat];
    int size = 0;
    auto idx = [](int t) { return t == 2 ? 1 : t == 3 ? 2 : 0; };
    if (lo & 1) size++;                                     // PNMTXIDX
    for (int i = 0; i < 8; i++) if (lo & (2 << i)) size++;  // TEXnMTXIDX
    int pos = (lo >> 9) & 3;
    if (pos == 1) size += (((A >> 0) & 1) ? 3 : 2) * kFmtSize[(A >> 1) & 7]; else size += idx(pos);
    int nrm = (lo >> 11) & 3;
    if (nrm == 1) size += (((A >> 9) & 1) ? 9 : 3) * kFmtSize[(A >> 10) & 7];
    else if (nrm) size += idx(nrm) * ((((A >> 9) & 1) && ((A >> 31) & 1)) ? 3 : 1);
    for (int k = 0; k < 2; k++) {
        int t = (lo >> (13 + 2 * k)) & 3;
        int fmt = (A >> (14 + 4 * k)) & 7;
        size += t == 1 ? kClrSize[fmt] : idx(t);
    }
    // texcoord count/format bits
    int tcnt[8] = {(int)((A >> 21) & 1), (int)(B & 1), (int)((B >> 9) & 1), (int)((B >> 18) & 1), (int)((B >> 27) & 1),
                   (int)((C >> 5) & 1), (int)((C >> 14) & 1), (int)((C >> 23) & 1)};
    int tfmt[8] = {(int)((A >> 22) & 7), (int)((B >> 1) & 7), (int)((B >> 10) & 7), (int)((B >> 19) & 7), (int)((B >> 28) & 7),
                   (int)((C >> 6) & 7), (int)((C >> 15) & 7), (int)((C >> 24) & 7)};
    for (int i = 0; i < 8; i++) {
        int t = (hi >> (2 * i)) & 3;
        size += t == 1 ? (tcnt[i] ? 2 : 1) * kFmtSize[tfmt[i]] : idx(t);
    }
    return size;
}

static void bp_write(uint32_t v) {
    uint32_t reg = v >> 24, val = v & 0xFFFFFF;
    // BP mask register (0xFE) applies to the next write
    if (reg != 0xFE) {
        uint32_t m = g_gx.bp_mask;
        uint32_t nv = (g_gx.bp[reg] & ~m) | (val & m);
        if (nv != g_gx.bp[reg] || reg == 0x64 || reg == 0x65) gx_state_changing();
        g_gx.bp[reg] = nv;
        g_gx.bp_mask = 0xFFFFFF;
    } else {
        g_gx.bp_mask = val;
        return;
    }
    gx_bp_hook(reg, g_gx.bp[reg]);
    if (reg == 0x45) {                // PE_DONE: draw done
        g_gx.stats.draw_done++;
        post_irq([](Ctx* c) {
            mmio_poke(0xCC00100Au, mmio_peek(0xCC00100Au) | 0x8);
            raise_interrupt(c, 19);   // PI_PE_FINISH
        });
    } else if (reg == 0x47 || reg == 0x48) {   // PE token (0x47 = with interrupt)
        uint32_t tok = val & 0xFFFF;
        mmio_poke(0xCC00100Eu, tok);
        static bool cplog = getenv("CPLOG") != nullptr;
        extern uint64_t g_vi_count;
        if (cplog) fprintf(g_log, "[cp] token %04X (reg %02X) VI %llu tev %06X %06X %06X %06X\n", tok, reg, (unsigned long long)g_vi_count,
                           g_gx.bp[0xE0], g_gx.bp[0xE1], g_gx.bp[0xE2], g_gx.bp[0xE3]);
        g_gx.stats.tokens++;
        if (reg == 0x47)
            post_irq([](Ctx* c) {
                mmio_poke(0xCC00100Au, mmio_peek(0xCC00100Au) | 0x4);
                raise_interrupt(c, 18);   // PI_PE_TOKEN
            });
    }
}

static inline uint16_t rd16(const uint8_t* p) { return (p[0] << 8) | p[1]; }
static inline uint32_t rd32(const uint8_t* p) { return (p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3]; }

// Parse one command at p (n bytes available). Returns bytes consumed, 0 if incomplete, -1 on error.
static long parse_cmd(const uint8_t* p, size_t n, bool in_dl);

static void run_display_list(uint32_t addr, uint32_t size) {
    g_gx.stats.dl_calls++;
    uint32_t pa = addr & 0x3FFFFFFFu;
    bool ok = (pa + size <= 0x01800000u) || (pa >= 0x10000000u && pa + size <= 0x14000000u);
    if (!ok || size > 0x400000u) {
        static int n = 0;
        if (n++ < 20) fprintf(g_log, "[gx] bad display list call %08X size %X\n", addr, size);
        return;
    }
    std::vector<uint8_t> buf(size);
    for (uint32_t i = 0; i < size; i++) buf[i] = R8(0x80000000u | (pa + i));
    size_t pos = 0;
    while (pos < size) {
        long k = parse_cmd(buf.data() + pos, size - pos, true);
        if (k <= 0) break;
        pos += k;
    }
}

static long parse_cmd(const uint8_t* p, size_t n, bool in_dl) {
    if (n < 1) return 0;
    uint8_t op = p[0];
    switch (op) {
        case 0x00: return 1;                                   // NOP
        case 0x08:                                             // load CP
            if (n < 6) return 0;
            g_gx.cp[p[1]] = rd32(p + 2); gx_cp_written();
            return 6;
        case 0x10: {                                           // load XF
            if (n < 5) return 0;
            uint32_t cnt = rd16(p + 1) + 1, addr = rd16(p + 3);
            if (n < 5 + 4 * cnt) return 0;
            for (uint32_t i = 0; i < cnt; i++) gx_xf_write(addr + i, rd32(p + 5 + 4 * i));
            return 5 + 4 * cnt;
        }
        case 0x20: case 0x28: case 0x30: case 0x38:           // indexed XF loads
            if (n < 5) return 0;
            gx_xf_indexed(op, rd32(p + 1));
            return 5;
        case 0x40:                                             // call display list
            if (n < 9) return 0;
            if (!in_dl) run_display_list(rd32(p + 1), rd32(p + 5));
            return 9;
        case 0x44: case 0x48: return 1;                        // invalidate vertex cache
        case 0x61:                                             // load BP
            if (n < 5) return 0;
            bp_write(rd32(p + 1));
            return 5;
        default:
            if (op >= 0x80 && op < 0xC0) {                     // draw primitive
                if (n < 3) return 0;
                int vat = op & 7;
                uint32_t count = rd16(p + 1);
                int vs = gx_vertex_size(vat);
                size_t need = 3 + (size_t)count * vs;
                static bool cplog = getenv("CPLOG") != nullptr;
                if (cplog && n < need) { static size_t lastneed = 0; if (need != lastneed) fprintf(g_log, "[gx] prim %02X vat %d count %u vsize %d waiting (vcd %08X %08X vat %08X %08X %08X)\n", op, vat, count, vs, g_gx.cp[0x50], g_gx.cp[0x60], g_gx.cp[0x70 + vat], g_gx.cp[0x80 + vat], g_gx.cp[0x90 + vat]); lastneed = need; }
                if (n < need) return 0;
                g_gx.stats.prims++;
                g_gx.stats.verts += count;
                gx_draw(op & 0xF8, vat, count, p + 3, vs);
                return (long)need;
            }
            g_gx.stats.bad++;
            if (g_gx.stats.bad < 20) fprintf(g_log, "[gx] unknown FIFO opcode %02X\n", op);
            return -1;
    }
}

// ---------------------------------------------------------------- FIFO pointers and breakpoints
// The write-gather pipe sends 32-byte bursts to the CPU FIFO in memory (PI FIFO base/end/write
// pointer at CC00300C/10/14). We keep those pointers moving so GXGetFifoPtrs is right, tag each
// burst with its address, and let the "GP" consume bursts in order. A GX breakpoint
// (CP control bit 1, address in CP 3C/3E) stops the GP when its read pointer reaches the address;
// with CP control bit 5 that raises the CP interrupt (GXSetBreakPtCallback). Games that pipeline
// frames with breakpoints (Geometry Wars: Galaxies) rely on the GP holding there.
#include <deque>
#include <functional>
#include <array>
struct Burst { uint32_t addr, next; std::array<uint8_t, 32> b; };
static std::deque<Burst> g_bursts;
static uint8_t g_part[32]; static int g_partn = 0;
static uint32_t g_rptr = 0;          // physical address of the next burst the GP reads
static bool g_bp_latched = false;    // interrupt raised for the current stall
static uint32_t pi_reg(uint32_t a) { return mmio_peek(a); }

static void gp_parse(const uint8_t* p, size_t n) {
    g_fifo.insert(g_fifo.end(), p, p + n);
    for (;;) {
        long k = parse_cmd(g_fifo.data() + g_rd, g_fifo.size() - g_rd, false);
        if (k == 0) break;
        if (k < 0) { g_rd++; continue; }                       // resync on garbage
        g_rd += k;
    }
    if (g_rd > 65536) { g_fifo.erase(g_fifo.begin(), g_fifo.begin() + g_rd); g_rd = 0; }
}

static bool bp_stalled() {
    uint32_t ctl = mmio_peek(0xCC000002u);
    if ((ctl & 0x3) != 0x3) return false;                      // breakpoint off or GP reads disabled
    uint32_t bp = ((mmio_peek(0xCC00003Eu) & 0x3FFF) << 16 | (mmio_peek(0xCC00003Cu) & 0xFFFF)) & 0x1FFFFFE0u;   // drop the wrap bit
    return (g_rptr & 0x1FFFFFE0u) == bp;
}

// FIFO watermarks (linked mode): when the CPU gets too far ahead of a stalled GP, the CP raises the
// overflow interrupt and the SDK suspends the writing thread until the underflow interrupt.
static void cp_watermarks() {
    uint32_t ctl = mmio_peek(0xCC000002u);
    uint32_t hi = (mmio_peek(0xCC00002Au) & 0x3FFF) << 16 | (mmio_peek(0xCC000028u) & 0xFFFF);
    uint32_t lo = (mmio_peek(0xCC00002Eu) & 0x3FFF) << 16 | (mmio_peek(0xCC00002Cu) & 0xFFFF);
    uint32_t dist = (uint32_t)g_bursts.size() * 32;
    bool linked = ctl & 0x10;
    uint32_t st = mmio_peek(0xCC000000u) & ~3u;
    if (linked && hi && dist > hi) st |= 1;                    // overflow (above high watermark)
    if (dist < lo) st |= 2;                                    // underflow (below low watermark)
    mmio_poke(0xCC000000u, st);
    (void)ctl;
}

static bool gp_reading() { return mmio_peek(0xCC000002u) & 1; }   // CP control bit 0: GP reads the FIFO

static void gp_run() {
    for (;;) {
        if (!gp_reading()) return;                             // GXEnableBreakPt turns reads off while it moves the breakpoint
        if (bp_stalled()) {
            mmio_poke(0xCC000000u, mmio_peek(0xCC000000u) | 0x10);   // CP status: breakpoint
            if (!g_bp_latched && (mmio_peek(0xCC000002u) & 0x20)) {
                g_bp_latched = true;
                post_irq([](Ctx* c) {
                    if ((mmio_peek(0xCC000000u) & 0x10) && (mmio_peek(0xCC000002u) & 0x20)) raise_interrupt(c, 17);   // PI_CP
                });
            }
            return;
        }
        g_bp_latched = false;
        mmio_poke(0xCC000000u, mmio_peek(0xCC000000u) & ~0x10u);
        if (g_bursts.empty()) return;
        Burst bu = g_bursts.front(); g_bursts.pop_front();
        g_rptr = bu.next;
        gp_parse(bu.b.data(), 32);
    }
}

// CP/PI register write hook (control, breakpoint address, FIFO pointers).
void gx_fifo_reg_write(uint32_t a, uint32_t v) {
    if (a == 0xCC003014u) {                                    // CPU FIFO write pointer set (GXSetCPUFifo)
        // writes after this land here; if our GP has consumed everything, it continues from there
        if (g_bursts.empty() && !bp_stalled()) g_rptr = v & 0x1FFFFFE0u;
        return;
    }
    if (a == 0xCC000038u || a == 0xCC00003Au) {                // GP read pointer set (GXSetGPFifo)
        g_rptr = ((mmio_peek(0xCC00003Au) & 0x3FFF) << 16 | (mmio_peek(0xCC000038u) & 0xFFFF)) & 0x1FFFFFE0u;
        if (!g_bursts.empty() && g_bursts.front().addr != g_rptr) g_rptr = g_bursts.front().addr;
        return;
    }
    if (a == 0xCC000002u || a == 0xCC00003Cu || a == 0xCC00003Eu) {
        static bool cplog = getenv("CPLOG") != nullptr;
        if (cplog && a == 0xCC000002u && (v & 0x23) == 0x23)
            fprintf(g_log, "[cp] bp armed at %04X%04X, GP at %08X, %zu bursts pending, PI w %08X base %08X end %08X\n",
                    mmio_peek(0xCC00003Eu), mmio_peek(0xCC00003Cu), g_rptr, g_bursts.size(), mmio_peek(0xCC003014u), mmio_peek(0xCC00300Cu), mmio_peek(0xCC003010u));
        if (a != 0xCC000002u) g_bp_latched = false;
        gp_run();
        cp_watermarks();
    }
}

void fifo_write(uint32_t v, int size) {
    uint8_t b[4]; int n = 0;
    if (size == 4) { b[0] = v >> 24; b[1] = v >> 16; b[2] = v >> 8; b[3] = v; n = 4; }
    else if (size == 2) { b[0] = v >> 8; b[1] = v; n = 2; }
    else { b[0] = v; n = 1; }
    g_gx.stats.fifo_bytes += size;
    for (int i = 0; i < n; i++) {
        g_part[g_partn++] = b[i];
        if (g_partn < 32) continue;
        g_partn = 0;
        uint32_t base = pi_reg(0xCC00300Cu) & 0x1FFFFFE0u, end = pi_reg(0xCC003010u) & 0x1FFFFFFFu;   // end = last word
        uint32_t w = pi_reg(0xCC003014u);
        Burst bu;
        bu.addr = w & 0x1FFFFFE0u;
        uint32_t nw = bu.addr + 32;
        uint32_t wrap = w & 0x20000000u;
        if (end && nw > end) { nw = base; wrap = 0x20000000u; }
        bu.next = nw;
        mmio_poke(0xCC003014u, nw | wrap);
        memcpy(bu.b.data(), g_part, 32);
        memcpy(MEM + (0x80000000u | bu.addr), g_part, 32);     // the burst lands in the FIFO buffer in memory
        if (!(mmio_peek(0xCC000002u) & 0x10)) continue;        // GP link off (GXBeginDisplayList): memory only
        if (g_bursts.empty() && gp_reading() && !bp_stalled() && bu.addr == g_rptr) {   // fast path: GP idle and caught up
            g_rptr = bu.next;
            gp_parse(bu.b.data(), 32);
            gp_run();
        } else {
            if (g_bursts.empty() && bu.addr != g_rptr && !bp_stalled()) g_rptr = bu.addr;
            g_bursts.push_back(bu);
            gp_run();
            cp_watermarks();
            if (mmio_peek(0xCC000000u) & 1) {
                // FIFO overflow: on hardware the CP interrupt suspends the writing thread until the GP
                // drains to the low watermark. Do the same by taking interrupts here (the breakpoint
                // that holds the GP is released from the VI callbacks).
                extern bool wait_with_interrupts(const std::function<bool()>&, int);
                wait_with_interrupts([] { cp_watermarks(); return (mmio_peek(0xCC000000u) & 2) != 0; }, 2000);
            }
        }
    }
}

// State for the hang report (runtime.cpp watchdog).
void gx_fifo_dump(FILE* f) {
    fprintf(f, "[fifo] GP at %08X, %zu bursts pending, %d bytes in pipe, bp %04X%04X latched %d, stalled %d, reading %d\n",
            g_rptr, g_bursts.size(), g_partn, mmio_peek(0xCC00003Eu), mmio_peek(0xCC00003Cu), (int)g_bp_latched,
            (int)bp_stalled(), (int)gp_reading());
    fprintf(f, "[fifo] CP status %04X control %04X, PI base %08X end %08X wptr %08X, token %04X\n",
            mmio_peek(0xCC000000u), mmio_peek(0xCC000002u), mmio_peek(0xCC00300Cu), mmio_peek(0xCC003010u),
            mmio_peek(0xCC003014u), mmio_peek(0xCC00100Eu));
    if (!g_bursts.empty()) fprintf(f, "[fifo] first pending burst %08X, last %08X\n", g_bursts.front().addr, g_bursts.back().addr);
}
