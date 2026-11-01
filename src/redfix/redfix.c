/* Red ENERGIZE restoration for the native build.
 *
 * Same work as dltfix stage 1 (github.com/darkuni/dragons-lair-trilogy-wii-fix), done on the extracted
 * game folder instead of a disc image: each of the 32 Space Ace segments the Wii release re-graded blue
 * is decoded, colour-restored to the arcade red, re-encoded and put back into its .mo file; SAScene1 is
 * replaced by the developers' unused red original that ships on the same disc.
 *
 * Every file is identified by SHA-1 first: a retail (blue) file is rebuilt, a file that already matches
 * the reference red output (a disc patched with dltfix, or an earlier run) is left alone, and anything
 * else is skipped and reported. The encoder is deterministic, so the result is checked against the
 * reference SHA-1s from the dltfix release.
 */
#include "redfix.h"
#include "segments.h"
#include "moc5.h"
#include "mobidec.h"
#include "mobienc.h"
#include "color.h"
#include "crypto.h"
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { const char *name; const char *sha1; } refhash;
static const refhash REF_OUT[] = {
#include "refhashes.inc"
};

static const char *ref_for(const char *name) {
    for (size_t i = 0; i < sizeof REF_OUT / sizeof REF_OUT[0]; i++)
        if (!strcmp(REF_OUT[i].name, name)) return REF_OUT[i].sha1;
    return NULL;
}

static uint8_t *read_all(const char *p, size_t *len) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL;
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    if (n < 0) { fclose(f); return NULL; }
    uint8_t *d = (uint8_t *)malloc((size_t)n + 1);
    if (d && fread(d, 1, (size_t)n, f) != (size_t)n) { free(d); d = NULL; }
    fclose(f); if (d) *len = (size_t)n; return d;
}
static int write_all(const char *p, const void *d, size_t n) {
    FILE *f = fopen(p, "wb"); if (!f) return 0;
    int ok = fwrite(d, 1, n, f) == n; ok &= fclose(f) == 0; return ok;
}
static void sha1_of(const void *d, size_t n, char hx[41]) { uint8_t h[20]; sha1(d, n, h); sha1_hex(h, hx); }

static uint32_t iframe_q(const uint8_t *pkt) {
    uint32_t v = ((uint32_t)pkt[1] << 24) | ((uint32_t)pkt[0] << 16) | ((uint32_t)pkt[3] << 8) | pkt[2];
    return (v >> 23) & 63;
}
static uint32_t bits_at(const uint8_t *pkt, int size, int pos) {   /* 32 bits at bit pos of the 16-bit-swapped stream */
    uint32_t v = 0;
    for (int i = 0; i < 32; i++, pos++) {
        int byte = pos >> 3, sb = byte ^ 1;   /* swapped byte index */
        int bit = sb < size ? (pkt[sb] >> (7 - (pos & 7))) & 1 : 0;
        v = (v << 1) | (uint32_t)bit;
    }
    return v;
}
static int cmp_u32(const void *a, const void *b) { uint32_t x = *(const uint32_t *)a, y = *(const uint32_t *)b; return x < y ? -1 : x > y; }

/* Rebuild one segment from the retail file bytes. Returns a malloc'd .mo or NULL. */
static uint8_t *rebuild(const dlt_segment *sg, const uint8_t *orig, size_t olen, size_t *outlen) {
    moc5 m; if (!moc5_parse(&m, orig, olen)) return NULL;
    int w = (int)m.width, h = (int)m.height, n = sg->last - sg->first + 1; size_t fs = (size_t)w * h * 3 / 2;
    uint8_t *src = (uint8_t *)malloc(fs), *tgt = (uint8_t *)malloc(fs * (size_t)n), *out = NULL;
    char *types = (char *)malloc((size_t)n + 1);
    uint32_t *words = (uint32_t *)calloc((size_t)n, 4), *iq = (uint32_t *)malloc(4 * (size_t)n); int niq = 0;
    mobidec *dec = mobidec_new(w, h); int ok = dec != NULL && moc5_is_key(&m, (uint32_t)sg->first);
    for (int k = 0; k < n && ok; k++) {
        uint32_t i = (uint32_t)(sg->first + k); const uint8_t *pkt = moc5_video(&m, i); int vs = (int)m.fr[i].vsize;
        const uint8_t *yuv; if (!mobidec_decode(dec, pkt, vs, &yuv)) { ok = 0; break; }
        types[k] = moc5_is_key(&m, i) ? 'I' : 'P';
        if (types[k] == 'I') {
            int end = mobidec_iframe_end_bits(dec); int a = end + ((16 - end % 16) % 16);
            words[k] = bits_at(pkt, vs, a); iq[niq++] = iframe_q(pkt);
        }
        memcpy(src, yuv, fs);
        color_restore_frame(src, tgt + fs * (size_t)k, w, h, sg->clamp);
    }
    types[n] = 0;
    if (ok && niq) {
        qsort(iq, (size_t)niq, 4, cmp_u32);
        int q = niq % 2 ? (int)iq[niq / 2] : (int)((iq[niq / 2 - 1] + iq[niq / 2]) / 2);
        uint8_t **pk = (uint8_t **)calloc((size_t)n, sizeof(uint8_t *)); uint32_t *pl = (uint32_t *)calloc((size_t)n, 4);
        int attempt;
        for (attempt = 0; attempt < 8; attempt++) {
            if (!mobienc_encode(tgt, n, w, h, types, words, q, sg->maxref, sg->intra, pk, pl, NULL)) { ok = 0; break; }
            int big = 0;
            for (int k = 0; k < n; k++) if (pl[k] + 8 + 600 > m.max_frame) big = 1;
            if (!big) break;
            for (int k = 0; k < n; k++) { free(pk[k]); pk[k] = NULL; }
            q++;
        }
        if (ok && attempt < 8) out = moc5_build(&m, (uint32_t)sg->first, (uint32_t)n, pk, pl, outlen);
        for (int k = 0; k < n; k++) free(pk[k]);
        free(pk); free(pl);
    }
    mobidec_free(dec); free(src); free(tgt); free(types); free(words); free(iq); moc5_free(&m);
    return out;
}

typedef struct {
    const char *dir;
    dlt_redfix_progress cb; void *user;
    pthread_mutex_t mu; int next, done, rebuilt, already, skipped, failed, mismatch;
} job;

static void report(job *J, const char *name, const char *what) {
    pthread_mutex_lock(&J->mu);
    J->done++;
    if (J->cb) J->cb(J->done, dlt_nsegments, name, what, J->user);
    pthread_mutex_unlock(&J->mu);
}

static void do_segment(job *J, const dlt_segment *sg) {
    char path[1200], tmp[1300], hx[41];
    snprintf(path, sizeof path, "%s/%s.mo", J->dir, sg->name);
    size_t len = 0; uint8_t *orig = read_all(path, &len);
    if (!orig) { pthread_mutex_lock(&J->mu); J->failed++; pthread_mutex_unlock(&J->mu); report(J, sg->name, "missing"); return; }
    sha1_of(orig, len, hx);
    const char *ref = ref_for(sg->name);
    if (ref && !strcmp(hx, ref)) {
        free(orig); pthread_mutex_lock(&J->mu); J->already++; pthread_mutex_unlock(&J->mu); report(J, sg->name, "already red"); return;
    }
    if (len != sg->size || strcmp(hx, sg->sha1)) {
        free(orig); pthread_mutex_lock(&J->mu); J->skipped++; pthread_mutex_unlock(&J->mu); report(J, sg->name, "unknown version, left as is"); return;
    }
    uint8_t *out = NULL; size_t olen = 0;
    if (!strcmp(sg->name, "SAScene1")) {   /* the developers' red original ships unused on the disc */
        char op[1200]; snprintf(op, sizeof op, "%s/%s.mo", J->dir, "SAScene1_original");
        out = read_all(op, &olen);
    } else {
        out = rebuild(sg, orig, len, &olen);
    }
    free(orig);
    int ok = out != NULL;
    if (ok) {
        sha1_of(out, olen, hx);
        if (ref && strcmp(hx, ref)) { pthread_mutex_lock(&J->mu); J->mismatch++; pthread_mutex_unlock(&J->mu); }
        snprintf(tmp, sizeof tmp, "%s.red.tmp", path);
        ok = write_all(tmp, out, olen);
        if (ok) { remove(path); ok = rename(tmp, path) == 0; }
    }
    free(out);
    pthread_mutex_lock(&J->mu); if (ok) J->rebuilt++; else J->failed++; pthread_mutex_unlock(&J->mu);
    report(J, sg->name, ok ? "restored" : "FAILED");
}

static void *worker(void *arg) {
    job *J = (job *)arg;
    for (;;) {
        pthread_mutex_lock(&J->mu); int j = J->next++; pthread_mutex_unlock(&J->mu);
        if (j >= dlt_nsegments) break;
        do_segment(J, &dlt_segments[j]);
    }
    return NULL;
}

int dlt_redfix(const char *content_dir, int threads, dlt_redfix_progress cb, void *user, dlt_redfix_result *res) {
    color_init();
    mobienc_init();
    job J; memset(&J, 0, sizeof J);
    J.dir = content_dir; J.cb = cb; J.user = user;
    pthread_mutex_init(&J.mu, NULL);
    if (threads < 1) threads = 1;
    if (threads > 32) threads = 32;
    pthread_t th[32];
    int started = 0;
    for (int i = 0; i < threads; i++) if (pthread_create(&th[i], NULL, worker, &J) == 0) started++;
    if (!started) worker(&J);
    for (int i = 0; i < started; i++) pthread_join(th[i], NULL);
    pthread_mutex_destroy(&J.mu);
    if (res) { res->rebuilt = J.rebuilt; res->already = J.already; res->skipped = J.skipped; res->failed = J.failed; res->mismatch = J.mismatch; }
    return J.failed ? -1 : J.rebuilt + J.already;
}
