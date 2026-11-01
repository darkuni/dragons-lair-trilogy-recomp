// Dragon's Lair Trilogy: restore Space Ace's red ENERGIZE scenes in the game folder (once).
// The Wii release re-graded 32 Space Ace scenes blue; the arcade original is red. On the first start
// (or when the marker file is missing) the scenes are rebuilt from the player's own files with the
// same code as the dltfix disc patcher (src/redfix), then game/red_energize.ok is written.
#include "redfix/redfix.h"
#include <cstdio>
#include <string>
#include <thread>
#include <chrono>
#include <filesystem>

static void progress(int done, int total, const char* name, const char* what, void*) {
    fprintf(stderr, "[red] %2d/%d  %-11s %s\n", done, total, name, what);
}

void dlt_red_energize(const std::string& root) {
    namespace fs = std::filesystem;
    std::string marker = root + "/red_energize.ok";
    std::error_code ec;
    if (fs::exists(marker, ec)) return;
    std::string content = root + "/files/Content16";
    if (!fs::exists(content + "/SAScene4.mo", ec)) return;   // not this game's folder layout
    unsigned th = std::thread::hardware_concurrency();
    if (th == 0) th = 4;
    fprintf(stderr, "\nRestoring Space Ace's red ENERGIZE scenes (first start only, about a minute)...\n");
    auto t0 = std::chrono::steady_clock::now();
    dlt_redfix_result r{};
    int n = dlt_redfix(content.c_str(), (int)th, progress, nullptr, &r);
    double s = std::chrono::duration<double>(std::chrono::steady_clock::now() - t0).count();
    fprintf(stderr, "[red] done in %.0f s: %d restored, %d already red, %d skipped, %d failed%s\n\n", s, r.rebuilt, r.already,
            r.skipped, r.failed, r.mismatch ? " (output differs from the reference build: please report)" : "");
    if (n >= 0 && r.skipped == 0) {
        if (FILE* f = fopen(marker.c_str(), "w")) {
            fprintf(f, "Space Ace ENERGIZE scenes restored to red (%d rebuilt, %d already red).\n"
                       "Delete this file to check them again on the next start.\n", r.rebuilt, r.already);
            fclose(f);
        }
    }
}
