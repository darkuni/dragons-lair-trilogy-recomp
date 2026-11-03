// Dragon's Lair Trilogy: title-screen Dirk standee fix (once). The standee on the title screen and the
// transitions into and out of it was cut out with two white gaps; src/redfix/dirkfix.c rebuilds those
// four movies with the gaps showing the dark standee board. The retail title movie is kept as
// "01 - Opening.mo.retail" (the fix is modelled on its first frame); game/title_standee.ok marks it done.
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
    if (fs::exists(marker, ec)) return;
    std::string title = dir + "/01 - Opening.mo", retail = title + ".retail";
    std::vector<uint8_t> t;
    if (!(slurp(retail, t) && sha(t.data(), t.size()) == DIRK_FILES[0].sha1)) {
        if (!(slurp(title, t) && sha(t.data(), t.size()) == DIRK_FILES[0].sha1)) {
            fprintf(stderr, "[dirk] title movie is not the retail version: standee fix skipped\n");
            return;
        }
        spill(retail, t.data(), t.size());
    }
    if (!dlt_dirkfix_template_from_movie(t.data(), t.size())) { fprintf(stderr, "[dirk] cannot decode the title movie\n"); return; }
    mobienc_init();
    fprintf(stderr, "Fixing the white gaps in the title screen's Dirk standee (first start only)...\n");
    std::atomic<int> fixed{0}, already{0}, failed{0}, mismatch{0};
    std::vector<std::thread> th;
    for (int i = 0; i < DIRK_NFILES; i++) th.emplace_back([&, i] {
        const dirk_file& df = DIRK_FILES[i];
        std::string p = dir + "/" + df.name + ".mo";
        std::vector<uint8_t> d;
        if (!slurp(p, d)) { failed++; return; }
        std::string h = sha(d.data(), d.size());
        if (h == df.ref) { already++; return; }
        if (i == 0) d = t;                                  // the title: always from the retail bytes
        else if (h != df.sha1) { fprintf(stderr, "[dirk] %s: unknown version, left as is\n", df.name); failed++; return; }
        size_t ol = 0; uint8_t* o = dlt_dirkfix(i, d.data(), d.size(), &ol, nullptr, 0);
        if (!o) { fprintf(stderr, "[dirk] %s: FAILED\n", df.name); failed++; return; }
        if (sha(o, ol) != df.ref) mismatch++;
        std::string tmp = p + ".tmp";
        bool ok = spill(tmp, o, ol);
        free(o);
        if (ok) { fs::remove(p, ec); fs::rename(tmp, p, ec); ok = !ec; }
        if (ok) { fixed++; fprintf(stderr, "[dirk] %s fixed\n", df.name); } else failed++;
    });
    for (auto& x : th) x.join();
    fprintf(stderr, "[dirk] %d fixed, %d already fixed, %d failed%s\n", (int)fixed, (int)already, (int)failed,
            mismatch ? " (output differs from the reference build: please report)" : "");
    if (!failed)
        if (FILE* f = fopen(marker.c_str(), "w")) {
            fprintf(f, "Title-screen Dirk standee gaps fixed. Delete this file to check the movies again on the next start.\n");
            fclose(f);
        }
}
