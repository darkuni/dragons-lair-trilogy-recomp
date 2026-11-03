// First-start setup window: shows what the one-time setup steps (disc extraction, red ENERGIZE
// scenes, title standee) are doing, so a player who started the game from a file manager or from
// Steam (no console) sees progress instead of nothing. The window only opens if a step reports.
#pragma once
#include <functional>

// Print a line to the console and, while setup_ui_run is active, to the setup window.
void setup_say(const char* fmt, ...);
// Progress of the current step (done of total); total 0 = no known end (bar just moves).
void setup_progress(int done, int total);
// New step: heading shown above the log, progress reset.
void setup_stage(const char* fmt, ...);
// Can the step be stopped by closing the window? (every step writes its files atomically except
// the disc extraction, which must finish or the folder is left half made)
void setup_closable(bool yes);
// Run work on a helper thread; the calling (main) thread shows the window while work reports.
void setup_ui_run(const std::function<void()>& work);
