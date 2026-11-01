// Debug: report which recompiled functions write a guest address range (build with -DMEMWATCH,
// run with MEMWATCH=lo,hi). Each distinct host caller is printed once.
#ifdef MEMWATCH
#include <execinfo.h>
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <set>
#include <mutex>
#include "ppc.h"
extern thread_local Ctx* t_cur_ctx;
uint32_t g_watch_lo = 1, g_watch_hi = 0;
static struct WInit { WInit() { if (const char* e = getenv("MEMWATCH")) { unsigned a, b; if (sscanf(e, "%x,%x", &a, &b) == 2) { g_watch_lo = a; g_watch_hi = b; } } } } s_winit;
uint32_t g_watch_last = 0;
__attribute__((noinline)) void memwatch_hit(uint32_t a) {
    g_watch_last = a;
    if (getenv("MEMWATCH_QUIET")) return;
    static std::mutex m; static std::set<void*> seen;
    void* bt[14]; int n = backtrace(bt, 14);
    if (n < 2) return;
    std::lock_guard<std::mutex> g(m);
    extern uint64_t g_vi_count;
    static uint64_t from_vi = getenv("MEMWATCH_VI") ? strtoull(getenv("MEMWATCH_VI"), nullptr, 10) : 0;
    if (g_vi_count < from_vi) return;
    static std::set<uint32_t> lrs;
    uint32_t lr = t_cur_ctx ? t_cur_ctx->lr : 0;
    if (!seen.insert(bt[1]).second && !lrs.insert(lr).second) return;
    lrs.insert(lr);
    fprintf(stderr, "[memwatch] VI %llu write %08X guest lr %08X r3 %08X r4 %08X r5 %08X from ", (unsigned long long)g_vi_count, a, lr, t_cur_ctx ? t_cur_ctx->r[3] : 0, t_cur_ctx ? t_cur_ctx->r[4] : 0, t_cur_ctx ? t_cur_ctx->r[5] : 0); fflush(stderr);
    backtrace_symbols_fd(bt + 1, n - 1, 2);
}
#endif
