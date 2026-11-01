// Wii Remote replacement for a light-gun game. KPADRead is answered from host input
// (mouse/gamepad/keyboard via the platform layer) or from a script (POINTER/AUTOPRESS) for
// automated runs. See lightgun_buttons() below for the mapping.
#include "hle.h"
#include "hostinput.h"
#include "config.h"
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <cstdlib>

extern uint64_t g_vi_count;
HostInput g_host_input;
uint32_t g_host_buttons = 0;   // legacy raw remote mask (unused by the SDL layer now)

enum : uint32_t { W_LEFT = 0x0001, W_RIGHT = 0x0002, W_DOWN = 0x0004, W_UP = 0x0008, W_PLUS = 0x0010, W_2 = 0x0100,
                  W_1 = 0x0200, W_B = 0x0400, W_A = 0x0800, W_MINUS = 0x1000, W_Z = 0x2000, W_C = 0x4000, W_HOME = 0x8000 };

static const std::map<std::string, uint32_t> kButtons = {
    {"LEFT", W_LEFT}, {"RIGHT", W_RIGHT}, {"DOWN", W_DOWN}, {"UP", W_UP}, {"PLUS", W_PLUS}, {"2", W_2}, {"1", W_1},
    {"B", W_B}, {"A", W_A}, {"MINUS", W_MINUS}, {"Z", W_Z}, {"C", W_C}, {"HOME", W_HOME},
    // scripted Classic Controller sticks (test runs): left/right stick up/down/left/right
    {"LSU", 1u << 16}, {"LSD", 1u << 17}, {"LSL", 1u << 18}, {"LSR", 1u << 19},
    {"RSU", 1u << 20}, {"RSD", 1u << 21}, {"RSL", 1u << 22}, {"RSR", 1u << 23}};

struct Press { uint32_t mask; uint64_t from, to; };
// AUTOPRESS times are VI retraces, or rendered frames with AUTOPRESS_FRAMES=1 (steadier when rendering is slow)
uint64_t gx_frame_count();
static uint64_t script_clock() {
    static bool frames = getenv("AUTOPRESS_FRAMES") != nullptr;
    return frames ? gx_frame_count() : g_vi_count;
}
static std::vector<Press> g_script;
static bool g_script_loaded = false;

static void load_script() {
    g_script_loaded = true;
    const char* s = getenv("AUTOPRESS");
    if (!s) return;
    std::string all = s;
    size_t pos = 0;
    while (pos < all.size()) {
        size_t comma = all.find(',', pos);
        std::string item = all.substr(pos, comma == std::string::npos ? std::string::npos : comma - pos);
        pos = comma == std::string::npos ? all.size() : comma + 1;
        size_t at = item.find('@'), dash = item.find('-', at);
        if (at == std::string::npos) continue;
        auto it = kButtons.find(item.substr(0, at));
        if (it == kButtons.end()) continue;
        uint64_t a = std::stoull(item.substr(at + 1, dash - at - 1));
        uint64_t b = dash == std::string::npos ? a + 6 : std::stoull(item.substr(dash + 1));
        g_script.push_back({it->second, a, b});
    }
}

static bool nunchuk_mode() { return g_cfg.controls == "nunchuk"; }
static bool classic_mode() { return g_cfg.controls == "classic"; }

// Classic Controller button bits (KPAD ex_status.cl.hold)
enum : uint32_t { CL_UP = 0x0001, CL_LEFT = 0x0002, CL_ZR = 0x0004, CL_X = 0x0008, CL_A = 0x0010, CL_Y = 0x0020, CL_B = 0x0040,
                  CL_ZL = 0x0080, CL_R = 0x0200, CL_PLUS = 0x0400, CL_HOME = 0x0800, CL_MINUS = 0x1000, CL_L = 0x2000,
                  CL_DOWN = 0x4000, CL_RIGHT = 0x8000 };
static uint32_t classic_buttons() {
    if (!g_script_loaded) load_script();
    const HostInput& in = g_host_input;
    uint32_t b = in.buttons, m = 0;
    if (b & (IN_UP | IN_ALT_UP)) m |= CL_UP;
    if (b & (IN_DOWN | IN_ALT_DOWN)) m |= CL_DOWN;
    if (b & (IN_LEFT | IN_ALT_LEFT)) m |= CL_LEFT;
    if (b & (IN_RIGHT | IN_ALT_RIGHT)) m |= CL_RIGHT;
    if (b & IN_SOUTH) m |= CL_A;
    if (b & IN_EAST) m |= CL_B;
    if (b & IN_WEST) m |= CL_X;
    if (b & IN_NORTH) m |= CL_Y;
    if (b & IN_L1) m |= CL_L;
    if (b & IN_R1) m |= CL_R;
    if (b & IN_L2) m |= CL_ZL;
    if (b & IN_R2) m |= CL_ZR;
    if (b & IN_START) m |= CL_PLUS;
    if (b & IN_BACK) m |= CL_MINUS;
    if (b & IN_GUIDE) m |= CL_HOME;
    // scripted presses (AUTOPRESS) use remote names; map the common ones
    for (auto& p : g_script) if (script_clock() >= p.from && script_clock() <= p.to) {
        if (p.mask & W_A) m |= CL_A;
        if (p.mask & W_B) m |= CL_B;
        if (p.mask & W_PLUS) m |= CL_PLUS;
        if (p.mask & W_MINUS) m |= CL_MINUS;
        if (p.mask & W_HOME) m |= CL_HOME;
        if (p.mask & W_1) m |= CL_X;          // script "1"/"2" = Classic X/Y
        if (p.mask & W_2) m |= CL_Y;
        if (p.mask & W_UP) m |= CL_UP;
        if (p.mask & W_DOWN) m |= CL_DOWN;
        if (p.mask & W_LEFT) m |= CL_LEFT;
        if (p.mask & W_RIGHT) m |= CL_RIGHT;
        if (p.mask & W_Z) m |= CL_ZR;
    }
    return m;
}

// Build the Wii Remote button mask and nunchuk stick from host input.
static uint32_t remote_buttons(float& sx, float& sy) {
    if (!g_script_loaded) load_script();
    const HostInput& in = g_host_input;
    uint32_t b = in.buttons, m = g_host_buttons;
    sx = 0; sy = 0;
    if (!nunchuk_mode()) {
        // directions: d-pad, arrows, or left stick
        bool up = (b & IN_UP) || in.ly > 0.5f, down = (b & IN_DOWN) || in.ly < -0.5f;
        bool left = (b & IN_LEFT) || in.lx < -0.5f, right = (b & IN_RIGHT) || in.lx > 0.5f;
        if (up) m |= W_RIGHT;
        if (down) m |= W_LEFT;
        if (left) m |= W_UP;
        if (right) m |= W_DOWN;
        if (b & IN_SOUTH) m |= W_2;
        if (b & IN_EAST) m |= W_1;
        if (b & IN_WEST) m |= W_A;
        if (b & IN_NORTH) m |= W_B;
    } else {
        sx = in.lx; sy = in.ly;
        if (b & IN_KB_ARROWS) {     // keyboard arrows drive the stick
            if (b & IN_LEFT) sx = -1; if (b & IN_RIGHT) sx = 1;
            if (b & IN_UP) sy = 1; if (b & IN_DOWN) sy = -1;
        } else {
            if (b & IN_UP) m |= W_UP;
            if (b & IN_DOWN) m |= W_DOWN;
            if (b & IN_LEFT) m |= W_LEFT;
            if (b & IN_RIGHT) m |= W_RIGHT;
        }
        if (b & IN_ALT_UP) m |= W_UP;
        if (b & IN_ALT_DOWN) m |= W_DOWN;
        if (b & IN_ALT_LEFT) m |= W_LEFT;
        if (b & IN_ALT_RIGHT) m |= W_RIGHT;
        if (b & IN_SOUTH) m |= W_A;
        if (b & IN_EAST) m |= W_B;
        if (b & IN_WEST) m |= W_1;
        if (b & IN_NORTH) m |= W_2;
        if (b & (IN_L1 | IN_L2)) m |= W_Z;
        if (b & (IN_R1 | IN_R2)) m |= W_C;
    }
    if (b & IN_START) m |= W_PLUS;
    if (b & IN_BACK) m |= W_MINUS;
    if (b & IN_GUIDE) m |= W_HOME;
    for (auto& p : g_script) if (script_clock() >= p.from && script_clock() <= p.to) m |= p.mask & 0xFFFF;
    float len = std::sqrt(sx * sx + sy * sy);
    if (len > 1) { sx /= len; sy /= len; }
    return m;
}

void hle_WPADProbe(Ctx* c) {
    uint32_t chan = c->r[3], type = c->r[4];
    if (chan == 0) { if (type) W32(type, 0); c->r[3] = 0; }   // WPAD_DEV_CORE   // WPAD_DEV_CORE / FREESTYLE / CLASSIC
    else c->r[3] = (uint32_t)-1;                                                    // WPAD_ERR_NO_CONTROLLER
}

// Light gun (Wii Zapper / pointing Wii Remote). The game reads KPADRead and uses pos (0x20),
// dpd_valid_fg (0x5E) and the core buttons: B = trigger, A, d-pad, +/-, 1/2, HOME.
//   Mouse: position = pointer, left = B (trigger), right = A (swapped with controls = mouse_swap),
//          middle = reload (fires off screen). Moving off the picture = pointing off screen.
//   Gamepad: either stick moves the pointer, RT/RB/B = trigger, A = A, LB/LT = reload, d-pad = d-pad,
//          X/Y = 1/2. Keyboard: arrows = d-pad, Space/Z = trigger (B), X = A, R = reload, A/S = 1/2.
//   Both: Start/Enter = +, Back/Backspace = -, Guide/H = HOME.
// Test runs: POINTER=x,y (0..1 in the picture) fixes the pointer; AUTOPRESS presses buttons.
static bool g_dump_pointer = getenv("POINTERLOG") != nullptr;
static uint32_t lightgun_buttons() {
    if (!g_script_loaded) load_script();
    const HostInput& in = g_host_input;
    uint32_t b = in.buttons, m = 0;
    bool swap = g_cfg.controls == "mouse_swap";
    if (in.mouse & (swap ? MOUSE_R : MOUSE_L)) m |= W_B;
    if (in.mouse & (swap ? MOUSE_L : MOUSE_R)) m |= W_A;
    if (in.reload) m |= W_B;
    if (b & (IN_R2 | IN_R1 | IN_EAST)) m |= W_B;
    if (b & IN_SOUTH) m |= W_A;
    if (b & IN_WEST) m |= W_1;
    if (b & IN_NORTH) m |= W_2;
    if (b & IN_UP) m |= W_UP;
    if (b & IN_DOWN) m |= W_DOWN;
    if (b & IN_LEFT) m |= W_LEFT;
    if (b & IN_RIGHT) m |= W_RIGHT;
    if (b & IN_START) m |= W_PLUS;
    if (b & IN_BACK) m |= W_MINUS;
    if (b & IN_GUIDE) m |= W_HOME;
    for (auto& p : g_script) if (script_clock() >= p.from && script_clock() <= p.to) m |= p.mask & 0xFFFF;
    return m;
}

// Dragon's Lair Trilogy: Wii Remote held sideways (d-pad = moves, 2 = sword / confirm, 1 = back).
//   Gamepad: d-pad or left stick = moves, A = 2 (sword), B = 1, X = A, Y = B, Start = +, Back = -, Guide = HOME.
//   Keyboard: arrows = moves, Space / X / 2 = 2 (sword), Z / 1 = 1, Enter = +, Backspace = -, H = HOME.
// Directions are given as the player sees them; they are rotated onto the sideways remote's d-pad
// (screen up = remote RIGHT) in remote_buttons().
static uint32_t dlt_buttons() {
    float sx, sy;
    uint32_t m = remote_buttons(sx, sy);
    const HostInput& in = g_host_input;
    if (in.buttons & (IN_R2 | IN_R1)) m |= W_2;      // Space, key 2 (and RT/RB) = sword too
    if (in.buttons & IN_L2) m |= W_1;                // key 1 (and LT) = 1
    bool swap = g_cfg.controls == "mouse_swap";
    if (in.mouse & MOUSE_L) m |= swap ? W_1 : W_2;
    if (in.mouse & MOUSE_R) m |= swap ? W_2 : W_1;
    return m;
}

// s32 KPADRead(s32 chan, KPADStatus* samples, u32 length)
//   KPADStatus (May 2007 KPAD): hold/trig/release, acc @0x0C, pos @0x20, vec @0x28, speed @0x30,
//   horizon @0x34, dist @0x48, acc_vertical @0x54, dev_type @0x5C, wpad_err @0x5D,
//   dpd_valid_fg @0x5E, data_format @0x5F, ex_status @0x60; 0x84 bytes.
void hle_KPADRead(Ctx* c) {
    uint32_t chan = c->r[3], buf = c->r[4], len = c->r[5];
    if (chan != 0 || !buf || !len) { c->r[3] = 0; return; }
    // The game polls twice per frame into the same buffer. The real remote sends a sample every
    // 5 ms, so the second read finds nothing new and the buffer (with its trigger bits) stays as
    // it was. Do the same: at most one new sample per video frame.
    static uint64_t last_vi = ~0ull;
    if (g_vi_count == last_vi) { c->r[3] = 0; return; }
    last_vi = g_vi_count;
    static uint32_t prev = 0;
    static float ppx = 0, ppy = 0;
    uint32_t hold = dlt_buttons();
    const HostInput& in = g_host_input;
    float px = in.px, py = in.py;
    bool valid = false;   // no pointer: the game is played with the d-pad
    static const char* fixed = getenv("POINTER");
    if (fixed) { valid = sscanf(fixed, "%f,%f", &px, &py) == 2; }
    if (in.reload) valid = false;   // reload = pull the trigger pointing away from the screen
    float x = px * 2.f - 1.f, y = py * 2.f - 1.f;   // KPAD pos: -1..1 across the picture, y down
    for (uint32_t i = 0; i < 0x84; i++) W8(buf + i, 0);
    W32(buf + 0x00, hold);
    W32(buf + 0x04, hold & ~prev);
    W32(buf + 0x08, prev & ~hold);
    WF32(buf + 0x0C, 0.0); WF32(buf + 0x10, -1.0); WF32(buf + 0x14, 0.0);   // acc: resting, pointing at the TV
    WF32(buf + 0x18, 1.0);
    if (valid) {
        WF32(buf + 0x20, x); WF32(buf + 0x24, y);
        WF32(buf + 0x28, x - ppx); WF32(buf + 0x2C, y - ppy);
        WF32(buf + 0x30, std::sqrt((x - ppx) * (x - ppx) + (y - ppy) * (y - ppy)));
        ppx = x; ppy = y;
        WF32(buf + 0x48, 2.0f);                // dist: about 2 m from the TV
    }
    WF32(buf + 0x34, 1.0);                     // horizon
    WF32(buf + 0x58, -1.0);
    W8(buf + 0x5C, 0);                         // WPAD_DEV_CORE
    W8(buf + 0x5D, 0);                         // WPAD_ERR_NONE
    W8(buf + 0x5E, valid ? 2 : 0);             // both IR points seen / none
    W8(buf + 0x5F, 3);                         // WPAD_FMT_CORE_ACC_DPD
    if (g_dump_pointer) {
        static uint32_t n = 0;
        if ((n++ % 60) == 0 || (hold & ~prev) || (prev & ~hold)) {
            fprintf(stderr, "[ptr] %d %.3f %.3f hold %04X\n", valid, x, y, hold);
        }
    }
    prev = hold;
    c->r[3] = 1;
}

void hle_SCGetAspectRatio(Ctx* c) { c->r[3] = g_cfg.widescreen ? 1 : 0; }

// 2009 KPAD: KPADReadEx(chan, samples, len, s32* err) -> same as KPADRead, plus error code.
void hle_KPADReadEx(Ctx* c) {
    uint32_t err = c->r[6];
    hle_KPADRead(c);
    if (err) W32(err, 0);   // KPAD_READ_ERR_NONE
}

// void WPADRead(s32 chan, void* status): raw WPAD status. Geometry Wars: Galaxies reads the
// Classic Controller (WPADCLStatus, 0x36 bytes) and Nunchuk (WPADFSStatus, 0x32 bytes) this way.
//   WPADStatus: u16 button, s16 acc[3], DPDObject obj[4] (8 bytes each), u8 dev @0x28, s8 err @0x29
//   WPADFSStatus: + s16 fsAcc[3] @0x2A, s8 fsStickX @0x30, fsStickY @0x31
//   WPADCLStatus: + u16 clButton @0x2A, s16 clLStick X/Y @0x2C, clRStick X/Y @0x30, u8 trigL/R @0x34
void hle_WPADRead(Ctx* c) {
    uint32_t chan = c->r[3], st = c->r[4];
    if (!st) return;
    bool cl = classic_mode(), nun = !cl && nunchuk_mode();
    uint32_t len = cl ? 0x36 : nun ? 0x32 : 0x2A;
    for (uint32_t i = 0; i < len; i++) W8(st + i, 0);
    if (chan != 0) { W8(st + 0x28, 0xFF); W8(st + 0x29, (uint8_t)-1); return; }   // no controller
    float sx = 0, sy = 0;
    uint32_t hold = cl ? 0 : remote_buttons(sx, sy);
    W16(st + 0x00, (uint16_t)hold);
    W16(st + 0x02, 0); W16(st + 0x04, 0); W16(st + 0x06, (uint16_t)100);   // resting, roughly 1 g on Z
    for (int i = 0; i < 4; i++) { W16(st + 0x08 + 8 * i, 0x3FF); W16(st + 0x0A + 8 * i, 0x3FF); }   // no IR points
    W8(st + 0x28, cl ? 2 : nun ? 1 : 0);
    W8(st + 0x29, 0);
    auto clampv = [](float& x, float& y) { float l = std::sqrt(x * x + y * y); if (l > 1) { x /= l; y /= l; } };
    if (cl) {
        const HostInput& in = g_host_input;
        uint32_t ch = classic_buttons();
        float lx = in.lx, ly = in.ly, rx = in.rx, ry = in.ry;
        if (in.buttons & IN_KB_ARROWS) {   // keyboard: arrows move (left stick)
            if (in.buttons & IN_LEFT) lx = -1; if (in.buttons & IN_RIGHT) lx = 1;
            if (in.buttons & IN_UP) ly = 1; if (in.buttons & IN_DOWN) ly = -1;
        }
        if (in.buttons & IN_ALT_LEFT) rx = -1; if (in.buttons & IN_ALT_RIGHT) rx = 1;   // I/J/K/L: right stick
        if (in.buttons & IN_ALT_UP) ry = 1; if (in.buttons & IN_ALT_DOWN) ry = -1;
        for (auto& p : g_script) if (script_clock() >= p.from && script_clock() <= p.to) {
            if (p.mask & (1u << 16)) ly = 1; if (p.mask & (1u << 17)) ly = -1;
            if (p.mask & (1u << 18)) lx = -1; if (p.mask & (1u << 19)) lx = 1;
            if (p.mask & (1u << 20)) ry = 1; if (p.mask & (1u << 21)) ry = -1;
            if (p.mask & (1u << 22)) rx = -1; if (p.mask & (1u << 23)) rx = 1;
        }
        clampv(lx, ly); clampv(rx, ry);
        W16(st + 0x2A, (uint16_t)ch);
        const float S = 220.f;   // inside the SDK clamp (dead zone 60, max 288)
        W16(st + 0x2C, (uint16_t)(int16_t)(lx * S)); W16(st + 0x2E, (uint16_t)(int16_t)(ly * S));
        W16(st + 0x30, (uint16_t)(int16_t)(rx * S)); W16(st + 0x32, (uint16_t)(int16_t)(ry * S));
        W8(st + 0x34, (ch & CL_L) ? 255 : 0); W8(st + 0x35, (ch & CL_R) ? 255 : 0);
    } else if (nun) {
        W16(st + 0x2A, 0); W16(st + 0x2C, 0); W16(st + 0x2E, (uint16_t)100);
        W8(st + 0x30, (uint8_t)(int8_t)(sx * 64)); W8(st + 0x31, (uint8_t)(int8_t)(sy * 64));
    }
}

// WPADInit is skipped (no Bluetooth stack), so the WPAD control blocks don't exist:
// keep the data format the game selects on the host.
static uint32_t g_wpad_fmt[4];
void hle_WPADSetDataFormat(Ctx* c) { if (c->r[3] < 4) g_wpad_fmt[c->r[3]] = c->r[4]; c->r[3] = 0; }
void hle_WPADGetDataFormat(Ctx* c) { c->r[3] = c->r[3] < 4 ? g_wpad_fmt[c->r[3]] : 0; }

#include "game.h"
#ifdef G_WPAD_CB
void hle_WPADInit(Ctx* c) {
    (void)c;
    for (uint32_t ch = 0; ch < 4; ch++) {
        uint32_t b = 0x93800000u + ch * 0x1000u;   // unused MEM2 above the IOS heap
        for (uint32_t i = 0; i < 0x1000u; i += 4) W32(b + i, 0);
        W32(b + G_WPAD_CB_STATUS, 0xFFFFFFFFu);   // WPAD_ERR_NO_CONTROLLER
        W32(G_WPAD_CB + 4 * ch, b);
    }
}
#endif
