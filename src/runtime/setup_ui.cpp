// First-start setup window (see setup_ui.h). SDL2 renderer + the overlay's built-in font, no GL.
#include "setup_ui.h"
#include "game.h"
#include <cstdio>
#include <cstdarg>
#include <cstring>
#include <string>
#include <vector>
#include <mutex>
#include <atomic>
#include <thread>
#include <chrono>
#include <algorithm>

static std::mutex g_mu;
static std::vector<std::string> g_lines;
static std::string g_stage;
static int g_done = 0, g_total = 0;
static std::atomic<bool> g_active{false}, g_reported{false}, g_closable{true};

static std::string vfmt(const char* fmt, va_list ap) {
    char buf[1024];
    vsnprintf(buf, sizeof buf, fmt, ap);
    return buf;
}

void setup_say(const char* fmt, ...) {
    va_list ap; va_start(ap, fmt); std::string s = vfmt(fmt, ap); va_end(ap);
    fprintf(stderr, "%s\n", s.c_str());
    if (!g_active) return;
    std::lock_guard<std::mutex> lk(g_mu);
    size_t a = 0;   // one entry per line, blank lines dropped
    while (a <= s.size()) {
        size_t b = s.find('\n', a); if (b == std::string::npos) b = s.size();
        if (b > a) g_lines.push_back(s.substr(a, b - a));
        a = b + 1;
    }
    if (g_lines.size() > 200) g_lines.erase(g_lines.begin(), g_lines.end() - 200);
    g_reported = true;
}

void setup_stage(const char* fmt, ...) {
    va_list ap; va_start(ap, fmt); std::string s = vfmt(fmt, ap); va_end(ap);
    if (!g_active) return;   // (the step's own first setup_say line goes to the console)
    std::lock_guard<std::mutex> lk(g_mu);
    g_stage = s; g_done = 0; g_total = 0;
    g_reported = true;
}

void setup_progress(int done, int total) {
    std::lock_guard<std::mutex> lk(g_mu);
    g_done = done; g_total = total;
}

void setup_closable(bool yes) { g_closable = yes; }

#if defined(_WIN32) || defined(USE_SDL)
#include <SDL2/SDL.h>
#include "font_atlas.h"

struct Ui {
    SDL_Window* win = nullptr;
    SDL_Renderer* ren = nullptr;
    SDL_Texture* font = nullptr;
    int w = 760, h = 380;
    bool open() {
        if (SDL_InitSubSystem(SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0) return false;
        win = SDL_CreateWindow(GAME_NAME " - first start", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h,
                               SDL_WINDOW_SHOWN | SDL_WINDOW_ALLOW_HIGHDPI);
        if (!win) { SDL_QuitSubSystem(SDL_INIT_VIDEO | SDL_INIT_EVENTS); return false; }
        ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_PRESENTVSYNC);
        if (!ren) ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_SOFTWARE);
        if (!ren) { close(); return false; }
        SDL_RenderSetLogicalSize(ren, w, h);
        std::vector<uint32_t> px(FONT_W * FONT_H);
        for (int i = 0; i < FONT_W * FONT_H; i++) px[i] = ((uint32_t)FONT_PIXELS[i] << 24) | 0xFFFFFF;
        font = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STATIC, FONT_W, FONT_H);
        if (font) {
            SDL_UpdateTexture(font, nullptr, px.data(), FONT_W * 4);
            SDL_SetTextureBlendMode(font, SDL_BLENDMODE_BLEND);
            SDL_SetTextureScaleMode(font, SDL_ScaleModeLinear);
        }
        return true;
    }
    void close() {
        if (font) SDL_DestroyTexture(font);
        if (ren) SDL_DestroyRenderer(ren);
        if (win) SDL_DestroyWindow(win);
        font = nullptr; ren = nullptr; win = nullptr;
        SDL_QuitSubSystem(SDL_INIT_VIDEO | SDL_INIT_EVENTS);
    }
    // text at (x, y), cell height ch; clipped to maxch characters
    void text(int x, int y, const std::string& s, int ch, SDL_Color c, size_t maxch = 200) {
        if (!font) return;
        float sc = ch / (float)FONT_CH;
        int cw = (int)(FONT_CW * sc + 0.5f);
        SDL_SetTextureColorMod(font, c.r, c.g, c.b);
        std::string t = s.size() > maxch ? s.substr(0, maxch - 3) + "..." : s;
        for (size_t i = 0; i < t.size(); i++) {
            int k = (unsigned char)t[i];
            if (k < 32 || k > 127) k = '?';
            k -= 32;
            SDL_Rect src{(k % 16) * FONT_CW, (k / 16) * FONT_CH, FONT_CW, FONT_CH};
            SDL_Rect dst{x + (int)i * cw, y, cw, ch};
            SDL_RenderCopy(ren, font, &src, &dst);
        }
    }
    void frame(double secs) {
        std::string stage; std::vector<std::string> lines; int done, total;
        {
            std::lock_guard<std::mutex> lk(g_mu);
            stage = g_stage; done = g_done; total = g_total;
            size_t n = g_lines.size(), k = n > 9 ? n - 9 : 0;
            lines.assign(g_lines.begin() + k, g_lines.end());
        }
        SDL_SetRenderDrawColor(ren, 18, 20, 26, 255);
        SDL_RenderClear(ren);
        const SDL_Color white{235, 235, 240, 255}, grey{150, 155, 165, 255}, gold{240, 200, 90, 255};
        text(24, 18, GAME_NAME " - setting up (first start only)", 22, gold, 60);
        text(24, 52, stage.empty() ? std::string("Working...") : stage, 18, white, 64);
        // progress bar: real fraction when known, else a block sliding back and forth
        SDL_Rect bar{24, 84, w - 48, 22};
        SDL_SetRenderDrawColor(ren, 45, 50, 62, 255); SDL_RenderFillRect(ren, &bar);
        SDL_SetRenderDrawColor(ren, 200, 60, 50, 255);
        if (total > 0) {
            int fw = (int)(bar.w * (double)done / total);
            SDL_Rect f{bar.x, bar.y, fw, bar.h};
            SDL_RenderFillRect(ren, &f);
            // a faint pulse moving through the unfinished part: still working between steps
            int rest = bar.w - fw, pw = std::min(rest, bar.w / 8);
            if (pw > 0) {
                double ph = secs * 0.4 - (int)(secs * 0.4);
                SDL_SetRenderDrawBlendMode(ren, SDL_BLENDMODE_BLEND);
                SDL_SetRenderDrawColor(ren, 200, 60, 50, 110);
                SDL_Rect q{bar.x + fw + (int)((rest - pw) * ph), bar.y, pw, bar.h};
                SDL_RenderFillRect(ren, &q);
                SDL_SetRenderDrawBlendMode(ren, SDL_BLENDMODE_NONE);
            }
        } else {
            int bw = bar.w / 5; double ph = secs * 0.6 - (int)(secs * 0.6);
            double p = ph < 0.5 ? ph * 2 : 2 - ph * 2;
            SDL_Rect f{bar.x + (int)((bar.w - bw) * p), bar.y, bw, bar.h};
            SDL_RenderFillRect(ren, &f);
        }
        char tbuf[96];
        int m = (int)secs / 60, s = (int)secs % 60;
        if (total > 0) snprintf(tbuf, sizeof tbuf, "%d of %d    elapsed %d:%02d", done, total, m, s);
        else snprintf(tbuf, sizeof tbuf, "elapsed %d:%02d", m, s);
        text(24, 112, tbuf, 16, grey);
        int y = 146;
        for (auto& l : lines) { text(24, y, l, 15, grey, 86); y += 19; }
        text(24, h - 30, "This can take several minutes on a Steam Deck. The game starts by itself when done.", 13, grey, 100);
        SDL_RenderPresent(ren);
    }
};

void setup_ui_run(const std::function<void()>& work) {
    g_active = true;
    std::atomic<bool> finished{false};
    std::thread t([&] { work(); finished = true; });
    auto t0 = std::chrono::steady_clock::now();
    Ui ui; bool opened = false, failed = false;
    int beat = 0;
    while (!finished) {
        double secs = std::chrono::duration<double>(std::chrono::steady_clock::now() - t0).count();
        if (!opened && !failed && g_reported) { opened = ui.open(); failed = !opened; }
        if (opened) {
            SDL_Event e;
            while (SDL_PollEvent(&e)) {
                bool quit = e.type == SDL_QUIT ||
                            (e.type == SDL_WINDOWEVENT && e.window.event == SDL_WINDOWEVENT_CLOSE);
                if (quit && g_closable) {
                    fprintf(stderr, "[setup] window closed: stopping; the rest is done on the next start\n");
                    fflush(stderr);
                    _Exit(0);
                }
            }
            ui.frame(secs);
            SDL_Delay(30);
        } else {
            std::this_thread::sleep_for(std::chrono::milliseconds(20));
        }
        // console heartbeat, so a terminal does not look stuck between progress lines either
        if (g_reported && (int)(secs / 30) > beat) {
            beat = (int)(secs / 30);
            fprintf(stderr, "[setup] still working... %d:%02d\n", (int)secs / 60, (int)secs % 60);
        }
    }
    t.join();
    if (opened) ui.close();
    g_active = false;
}
#else
void setup_ui_run(const std::function<void()>& work) { work(); }
#endif
