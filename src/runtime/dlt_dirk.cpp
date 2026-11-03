// Dragon's Lair Trilogy: title-screen Dirk standee fix (once). The standee on the title screen and the
// transitions into and out of it was cut out with two white gaps; src/redfix/dirkfix.c rebuilds those
// four movies with darkuni's touch-up. Each retail movie is kept as "<name>.mo.retail", so a later
// revision of the fix can be applied again; game/title_standee.ok records the revision applied.
extern "C" {
#include "redfix/dirkfix.h"
#include "redfix/crypto.h"
#include "redfix/mobienc.h"
}
#include <cstdio>
#include <cstring>
#include <string>
#include <thread>
#include <vector>
#include <atomic>
#include <filesystem>
#include "setup_ui.h"

static bool slurp(const std::string& p, std::vector<uint8_t>& d) {
    FILE* f = fopen(p.c_str(), "rb"); if (!f) return false;
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    d.resize(n > 0 ? (size_t)n : 0);
    bool ok = n >= 0 && fread(d.data(), 1, d.size(), f) == d.size();
    fclose(f); return ok;
}
static bool spill(const std::string& p, const uint8_t* d, size_t n) {
    FILE* f = fopen(p.c_str(), "wb"); if (!f) return false;
    bool ok = fwrite(d, 1, n, f) == n; ok &= fclose(f) == 0; return ok;
}
static std::string sha(const uint8_t* d, size_t n) { uint8_t h[20]; char hx[41]; sha1(d, n, h); sha1_hex(h, hx); return hx; }

void dlt_dirk_standee(const std::string& root) {
    namespace fs = std::filesystem;
    std::error_code ec;
    std::string marker = root + "/title_standee.ok", dir = root + "/files/Content16";
    static const char* REV = "standee fix revision 3";
    {   // done already with this revision?
        std::vector<uint8_t> m;
        if (slurp(marker, m) && std::string(m.begin(), m.end()).find(REV) != std::string::npos) return;
    }
    // retail source of every movie: the .retail backup, or the file itself while it is still retail
    std::vector<std::vector<uint8_t>> src(DIRK_NFILES);
    int missing = 0;
    for (int i = 0; i < DIRK_NFILES; i++) {
        std::string p = dir + "/" + DIRK_FILES[i].name + ".mo", b = p + ".retail";
        std::vector<uint8_t>& d = src[i];
        if (slurp(b, d) && sha(d.data(), d.size()) == DIRK_FILES[i].sha1) continue;
        if (slurp(p, d) && sha(d.data(), d.size()) == DIRK_FILES[i].sha1) { spill(b, d.data(), d.size()); continue; }
        d.clear(); missing++;
        setup_say("[dirk] %s: no retail copy (rebuilt by an older version?) - delete the game folder to rebuild it from the disc", DIRK_FILES[i].name);
    }
    if (missing == DIRK_NFILES || src[0].empty()) return;
    const std::vector<uint8_t>& t = src[0];
    if (!dlt_dirkfix_template_from_movie(t.data(), t.size())) { fprintf(stderr, "[dirk] cannot decode the title movie\n"); return; }
    mobienc_init();
    setup_closable(true);
    setup_stage("Fixing the title screen's Dirk standee");
    setup_say("Fixing the white gaps in the title screen's Dirk standee (first start only)...");
    std::atomic<int> fixed{0}, already{0}, failed{0}, mismatch{0}, ndone{0};
    setup_progress(0, DIRK_NFILES);
    std::vector<std::thread> th;
    for (int i = 0; i < DIRK_NFILES; i++) th.emplace_back([&, i] {
        const dirk_file& df = DIRK_FILES[i];
        std::string p = dir + "/" + df.name + ".mo";
        std::vector<uint8_t> cur;
        if (slurp(p, cur) && sha(cur.data(), cur.size()) == df.ref) { already++; return; }
        const std::vector<uint8_t>& d = src[i];
        if (d.empty()) { failed++; return; }
        size_t ol = 0; uint8_t* o = dlt_dirkfix(i, d.data(), d.size(), &ol, nullptr, 0);
        if (!o) { setup_say("[dirk] %s: FAILED", df.name); failed++; return; }
        if (sha(o, ol) != df.ref) mismatch++;
        std::string tmp = p + ".tmp";
        bool ok = spill(tmp, o, ol);
        free(o);
        if (ok) { fs::remove(p, ec); fs::rename(tmp, p, ec); ok = !ec; }
        if (ok) { fixed++; setup_say("[dirk] %s fixed", df.name); } else failed++;
        setup_progress(++ndone, DIRK_NFILES);
    });
    for (auto& x : th) x.join();
    setup_say("[dirk] %d fixed, %d already fixed, %d failed%s", (int)fixed, (int)already, (int)failed,
            mismatch ? " (output differs from the reference build: please report)" : "");
    if (!failed)
        if (FILE* f = fopen(marker.c_str(), "w")) {
            fprintf(f, "Title-screen Dirk standee fixed (%s). Delete this file to check the movies again on the next start.\n", REV);
            fclose(f);
        }
}
