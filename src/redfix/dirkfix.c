/* Title-screen Dirk standee fix.
 *
 * On the title screen (and the transitions into and out of it) the Dirk standee was cut out with two
 * gaps left white: under his left arm and between his right arm and the sword hilt. Those pixels should
 * show the dark standee board. Dirk is part of the movies, so each affected frame is decoded, the gap
 * pixels are blended to the board's tone (sampled from the same frame, so fades keep working), and the
 * movie is re-encoded with the same encoder as the red ENERGIZE scenes.
 *
 * The fixed title frame is the retail frame with darkuni's touch-up blended in (dirkedit.inc). In the Game Selection transitions the camera zooms
 * in on the cabinets; per-frame scale/offset (tracked from the retail frames) map the mask onto Dirk.
 */
#include "dirkfix.h"
#include "moc5.h"
#include "mobidec.h"
#include "mobienc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct { short x, y; unsigned char a; } mpx;
static const mpx MASK[] = {
#include "dirkmask.inc"
};
#define NMASK ((int)(sizeof MASK / sizeof MASK[0]))
/* The fixed title frame: the retail frame with this touch-up blended in (alpha, target Y/Cb/Cr). */
typedef struct { short x, y; unsigned char a, Y, U, V; } epx;
static const epx EDIT[] = {
#include "dirkedit.inc"
};
#define NEDIT ((int)(sizeof EDIT / sizeof EDIT[0]))
#define TX0 80.0   /* template origin: frame point = (cx + s*(x-TX0), cy + s*(y-TY0)) */
#define TY0 150.0
#define REFX 96.0  /* a point on the dark standee board in the title frame */
#define REFY 248.0

typedef struct { int frame; float s, cx, cy; } xform;
/* 02 - TRANS Game Selection: camera zooms in from the title; tracked against the title frame */
static const xform ZOOM[] = {
    {0, 1.0f, 80.f, 150.f}, {1, 1.0f, 80.f, 150.f}, {2, 1.0f, 80.f, 150.f}, {3, 1.0025f, 80.f, 150.f},
    {4, 1.0075f, 80.f, 150.f}, {5, 1.02f, 79.5f, 150.f}, {6, 1.03f, 79.5f, 150.f}, {7, 1.045f, 79.f, 150.f},
    {8, 1.065f, 78.5f, 150.f}, {9, 1.085f, 77.5f, 150.5f}, {10, 1.1125f, 76.f, 151.f}, {11, 1.1475f, 73.5f, 151.f},
    {12, 1.185f, 70.5f, 151.f}, {13, 1.22f, 67.f, 152.5f}, {14, 1.2725f, 61.5f, 153.f}, {15, 1.3375f, 53.5f, 153.5f},
    {16, 1.3975f, 45.f, 155.f}, {17, 1.4825f, 32.5f, 155.5f}, {18, 1.57f, 17.5f, 157.5f}, {19, 1.68f, -2.f, 159.5f},
    {20, 1.81f, -27.f, 161.5f}, {21, 1.895f, -52.5f, 168.f}, {22, 2.015f, -84.5f, 174.5f}, {23, 2.2725f, -138.f, 178.f},
    {24, 2.545f, -202.5f, 182.f},
};
#define NZOOM ((int)(sizeof ZOOM / sizeof ZOOM[0]))

#include "dirkfix.h"
enum { STATIC = 0, ZOOM_FWD = 1, ZOOM_REV = 2 };
const dirk_file DIRK_FILES[] = {
    {"01 - Opening",                       114876,  "70cf4a30b841db09926f28ccbcd3aa0cdbfc4e41", STATIC, "cb12f34f2fb60830b401d2914c053c5bfe09f0dc"},
    {"01 - TRANS Opening",                 214496,  "1f9fca55763e19950fc040a77ec60c4e5f51d6f5", STATIC, "a40746338cbdd930376048177037eacd99754c68"},
    {"02 - TRANS Game Selection",          1361520, "97118702f3dada0625601cc58379204b508d8096", ZOOM_FWD, "b64084dae6c855ed3919e9659279d7385e4ec745"},
    {"02 - TRANS Game Selection Reverse",  1342500, "fb499fd67dbb37be954d15d290263fb963978bc0", ZOOM_REV, "493502a64d62687e1d622ec4467896e35fd947c6"},
};
const int DIRK_NFILES = 4;

static int frame_xform(int kind, int i, int n, float *s, float *cx, float *cy) {
    if (kind == STATIC) { *s = 1.f; *cx = (float)TX0; *cy = (float)TY0; return 1; }
    int k = kind == ZOOM_FWD ? i : n - i;              /* reverse frame i shows forward frame n-i (tracked) */
    for (int j = 0; j < NZOOM; j++) if (ZOOM[j].frame == k) { *s = ZOOM[j].s; *cx = ZOOM[j].cx; *cy = ZOOM[j].cy; return 1; }
    return 0;
}

/* Patch one decoded frame in place. Returns 1 if anything changed. */
static int patch_frame(uint8_t *yuv, int w, int h, float s, float cx, float cy, float *last_ref) {
    uint8_t *Y = yuv, *U = yuv + w * h, *V = U + (w / 2) * (h / 2);
    /* dense alpha in template coords for bilinear lookups */
    static float A[480][640]; static int built = 0;
    if (!built) { memset(A, 0, sizeof A); for (int k = 0; k < NMASK; k++) A[MASK[k].y][MASK[k].x] = MASK[k].a / 255.f; built = 1; }
    /* board tone: 5x5 median-ish (mean of middle values) around the mapped reference point */
    int rx = (int)lroundf(cx + s * (float)(REFX - TX0)), ry = (int)lroundf(cy + s * (float)(REFY - TY0));
    float ref = *last_ref;
    if (rx >= 2 && ry >= 2 && rx < w - 2 && ry < h - 2) {
        int v[25], n = 0;
        for (int dy = -2; dy <= 2; dy++) for (int dx = -2; dx <= 2; dx++) v[n++] = Y[(ry + dy) * w + rx + dx];
        for (int a = 0; a < 25; a++) for (int b = a + 1; b < 25; b++) if (v[b] < v[a]) { int t = v[a]; v[a] = v[b]; v[b] = t; }
        ref = (float)v[12]; *last_ref = ref;
    }
    if (ref < 0) return 0;
    /* frame-space bounding box of the mask */
    float x0 = 1e9f, y0 = 1e9f, x1 = -1e9f, y1 = -1e9f;
    for (int k = 0; k < NMASK; k++) {
        float fx = cx + s * (MASK[k].x - (float)TX0), fy = cy + s * (MASK[k].y - (float)TY0);
        if (fx < x0) x0 = fx; if (fx > x1) x1 = fx; if (fy < y0) y0 = fy; if (fy > y1) y1 = fy;
    }
    int bx0 = (int)floorf(x0 - s) - 1, bx1 = (int)ceilf(x1 + s) + 1, by0 = (int)floorf(y0 - s) - 1, by1 = (int)ceilf(y1 + s) + 1;
    if (bx0 < 0) bx0 = 0; if (by0 < 0) by0 = 0; if (bx1 > w - 1) bx1 = w - 1; if (by1 > h - 1) by1 = h - 1;
    if (bx0 > bx1 || by0 > by1) return 0;
    int changed = 0;
    static float CA[240][320];
    for (int y = by0 / 2; y <= by1 / 2; y++) for (int x = bx0 / 2; x <= bx1 / 2; x++) CA[y][x] = 0;
    for (int y = by0; y <= by1; y++) for (int x = bx0; x <= bx1; x++) {
        float tx = (float)TX0 + (x - cx) / s, ty = (float)TY0 + (y - cy) / s;
        int ix = (int)floorf(tx), iy = (int)floorf(ty);
        if (ix < 0 || iy < 0 || ix >= 639 || iy >= 479) continue;
        float fx = tx - ix, fy = ty - iy;
        float a = A[iy][ix] * (1 - fx) * (1 - fy) + A[iy][ix + 1] * fx * (1 - fy) + A[iy + 1][ix] * (1 - fx) * fy + A[iy + 1][ix + 1] * fx * fy;
        if (a <= 0.f) continue;
        if (a > 1.f) a = 1.f;
        int o = Y[y * w + x];
        if (o <= ref) continue;                       /* only lighten-to-board: never darken below the board */
        int nv = (int)lroundf(o * (1 - a) + ref * a);
        if (nv != o) { Y[y * w + x] = (uint8_t)nv; changed = 1; }
        if (a > CA[y / 2][x / 2]) CA[y / 2][x / 2] = a;
    }
    for (int y = by0 / 2; y <= by1 / 2; y++) for (int x = bx0 / 2; x <= bx1 / 2; x++) {
        float a = CA[y][x]; if (a <= 0) continue;
        int i = y * (w / 2) + x;
        U[i] = (uint8_t)lroundf(U[i] * (1 - a) + 128 * a);
        V[i] = (uint8_t)lroundf(V[i] * (1 - a) + 128 * a);
    }
    return changed;
}

/* ---- blurred-delta model ------------------------------------------------------------------------
 * Template: title frame 0 luma (TYo) and the fix as a difference (TD = fixed - original, luma and
 * chroma). For a frame, the template is warped with the frame's zoom, and the blur sigma + gain/offset
 * that best explain the frame (frame ~ g * blur(template) + o) are fitted on a box around Dirk's torso.
 * The fix is then added as g * blur(delta): fades, the focus pull and the zoom's softness all carry
 * over to the patch, and pixels that don't show the gap are left alone. */
#define BX0 84
#define BX1 212
#define BY0 140
#define BY1 236
static float TYo[480][640], TD[480][640], TA[480][640], TDU[240][320], TDV[240][320];
static int have_template = 0;

void dlt_dirkfix_set_template(const uint8_t *title_frame0) {
    const int w = 640, h = 480;
    static uint8_t fixed[640 * 480 * 3 / 2];
    memcpy(fixed, title_frame0, sizeof fixed);
    {   /* apply the touch-up: luma per pixel, chroma per 2x2 block (alpha-weighted target, max alpha) */
        static float cu[240][320], cv[240][320], cw[240][320], ca[240][320];
        memset(cu, 0, sizeof cu); memset(cv, 0, sizeof cv); memset(cw, 0, sizeof cw); memset(ca, 0, sizeof ca);
        for (int k = 0; k < NEDIT; k++) {
            const epx *e = &EDIT[k]; float a = e->a / 255.f; int i = e->y * w + e->x;
            fixed[i] = (uint8_t)lroundf(fixed[i] * (1 - a) + e->Y * a);
            int cx = e->x / 2, cy = e->y / 2;
            cu[cy][cx] += a * e->U; cv[cy][cx] += a * e->V; cw[cy][cx] += a; if (a > ca[cy][cx]) ca[cy][cx] = a;
        }
        uint8_t *U = fixed + w * h, *V = U + (w / 2) * (h / 2);
        for (int y = 0; y < h / 2; y++) for (int x = 0; x < w / 2; x++) if (cw[y][x] > 0) {
            float a = ca[y][x]; int i = y * (w / 2) + x;
            U[i] = (uint8_t)lroundf(U[i] * (1 - a) + (cu[y][x] / cw[y][x]) * a);
            V[i] = (uint8_t)lroundf(V[i] * (1 - a) + (cv[y][x] / cw[y][x]) * a);
        }
    }
    const uint8_t *Y = title_frame0, *U = Y + w * h, *V = U + (w / 2) * (h / 2);
    const uint8_t *Yf = fixed, *Uf = Yf + w * h, *Vf = Uf + (w / 2) * (h / 2);
    for (int y = 0; y < h; y++) for (int x = 0; x < w; x++) { TYo[y][x] = Y[y * w + x]; TD[y][x] = (float)Yf[y * w + x] - Y[y * w + x]; TA[y][x] = 0; }
    for (int k = 0; k < NEDIT; k++) TA[EDIT[k].y][EDIT[k].x] = EDIT[k].a / 255.f;
    for (int y = 0; y < h / 2; y++) for (int x = 0; x < w / 2; x++) {
        TDU[y][x] = (float)Uf[y * (w / 2) + x] - U[y * (w / 2) + x];
        TDV[y][x] = (float)Vf[y * (w / 2) + x] - V[y * (w / 2) + x];
    }
    have_template = 1;
}

static float bil(const float *a, int stride, int W, int H, float x, float y) {
    int ix = (int)floorf(x), iy = (int)floorf(y);
    if (ix < 0 || iy < 0 || ix >= W - 1 || iy >= H - 1) return 0.f;
    float fx = x - ix, fy = y - iy; const float *p = a + iy * stride + ix;
    return p[0] * (1 - fx) * (1 - fy) + p[1] * fx * (1 - fy) + p[stride] * (1 - fx) * fy + p[stride + 1] * fx * fy;
}
/* separable gaussian on a W x H float image (in place via tmp) */
static void gauss(float *img, int W, int H, float sigma, float *tmp) {
    if (sigma < 0.3f) return;
    int r = (int)ceilf(sigma * 3.f); if (r > 24) r = 24;
    float k[49], sum = 0; for (int i = -r; i <= r; i++) { k[i + r] = expf(-(float)(i * i) / (2 * sigma * sigma)); sum += k[i + r]; }
    for (int i = 0; i < 2 * r + 1; i++) k[i] /= sum;
    for (int y = 0; y < H; y++) for (int x = 0; x < W; x++) {
        float a = 0; for (int i = -r; i <= r; i++) { int xx = x + i; if (xx < 0) xx = 0; if (xx >= W) xx = W - 1; a += k[i + r] * img[y * W + xx]; }
        tmp[y * W + x] = a;
    }
    for (int y = 0; y < H; y++) for (int x = 0; x < W; x++) {
        float a = 0; for (int i = -r; i <= r; i++) { int yy = y + i; if (yy < 0) yy = 0; if (yy >= H) yy = H - 1; a += k[i + r] * tmp[yy * W + x]; }
        img[y * W + x] = a;
    }
}

static void patch_frame_model(uint8_t *yuv, int w, int h, float s, float cx, float cy) {
    if (!have_template) return;
    uint8_t *Y = yuv, *U = yuv + w * h, *V = U + (w / 2) * (h / 2);
    /* frame-space box = template box mapped through the frame's transform */
    int fx0 = (int)floorf(cx + s * (BX0 - (float)TX0)), fx1 = (int)ceilf(cx + s * (BX1 - (float)TX0));
    int fy0 = (int)floorf(cy + s * (BY0 - (float)TY0)), fy1 = (int)ceilf(cy + s * (BY1 - (float)TY0));
    if (fx0 < 0) fx0 = 0; if (fy0 < 0) fy0 = 0; if (fx1 > w - 1) fx1 = w - 1; if (fy1 > h - 1) fy1 = h - 1;
    int W = fx1 - fx0 + 1, H = fy1 - fy0 + 1;
    if (W < 8 || H < 8) return;
    float *T = (float *)malloc(sizeof(float) * W * H * 6), *B = T + W * H, *Dl = B + W * H, *tmp = Dl + W * H, *Al = tmp + W * H, *Fx = Al + W * H;
    for (int y = 0; y < H; y++) for (int x = 0; x < W; x++) {
        float tx = (float)TX0 + (fx0 + x - cx) / s, ty = (float)TY0 + (fy0 + y - cy) / s;
        T[y * W + x] = bil(&TYo[0][0], 640, 640, 480, tx, ty);
        Dl[y * W + x] = bil(&TD[0][0], 640, 640, 480, tx, ty);
        Al[y * W + x] = bil(&TA[0][0], 640, 640, 480, tx, ty);
    }
    /* fit sigma, then g/o by least squares */
    float best = 1e30f, bs = 0, bg = 1, bo = 0;
    for (float sg = 0.f; sg <= 9.01f; sg += 0.5f) {
        memcpy(B, T, sizeof(float) * W * H);
        gauss(B, W, H, sg, tmp);
        double sb = 0, sf = 0, sbb = 0, sbf = 0, sff = 0; int n = 0;
        for (int y = 0; y < H; y++) for (int x = 0; x < W; x++) {
            double b = B[y * W + x], f = Y[(fy0 + y) * w + fx0 + x];
            sb += b; sf += f; sbb += b * b; sbf += b * f; sff += f * f; n++;
        }
        double den = n * sbb - sb * sb; if (den < 1e-6) continue;
        double g = (n * sbf - sb * sf) / den, o = (sf - g * sb) / n;
        double res = sff - 2 * g * sbf - 2 * o * sf + g * g * sbb + 2 * g * o * sb + o * o * n;
        if (res < best) { best = (float)res; bs = sg; bg = (float)g; bo = (float)o; }
    }
    if (getenv("DIRKLOG")) fprintf(stderr, "[dirk] s %.3f sigma %.1f g %.3f o %.1f\n", s, bs, bg, bo);
    if (bg <= 0.02f) { free(T); return; }          /* faded to black: nothing to fix */
    /* inside the gap: the model's clean prediction of the fixed frame (removes the white area's grain);
       towards the edges: the original plus the blurred difference */
    for (int i = 0; i < W * H; i++) Fx[i] = T[i] + Dl[i];
    gauss(Fx, W, H, bs, tmp);
    gauss(Dl, W, H, bs, tmp);
    gauss(Al, W, H, bs, tmp);
    for (int y = 0; y < H; y++) for (int x = 0; x < W; x++) {
        float d = bg * Dl[y * W + x]; if (fabsf(d) < 0.5f) continue;
        int i = (fy0 + y) * w + fx0 + x;
        float add = Y[i] + d, rep = bg * Fx[y * W + x] + bo, a = Al[y * W + x] * 1.5f;
        if (a > 1.f) a = 1.f;
        float v = add * (1 - a) + rep * a;
        int iv = (int)lroundf(v); Y[i] = (uint8_t)(iv < 0 ? 0 : iv > 255 ? 255 : iv);
    }
    /* chroma at half resolution, same model (sigma halves) */
    int cx0 = fx0 / 2, cy0 = fy0 / 2, CW = fx1 / 2 - cx0 + 1, CH = fy1 / 2 - cy0 + 1;
    float *Cu = (float *)malloc(sizeof(float) * CW * CH * 3), *Cv = Cu + CW * CH, *ct = Cv + CW * CH;
    for (int y = 0; y < CH; y++) for (int x = 0; x < CW; x++) {
        float tx = ((float)TX0 + (2 * (cx0 + x) + 0.5f - cx) / s) / 2.f, ty = ((float)TY0 + (2 * (cy0 + y) + 0.5f - cy) / s) / 2.f;
        Cu[y * CW + x] = bil(&TDU[0][0], 320, 320, 240, tx, ty);
        Cv[y * CW + x] = bil(&TDV[0][0], 320, 320, 240, tx, ty);
    }
    gauss(Cu, CW, CH, bs / 2, ct); gauss(Cv, CW, CH, bs / 2, ct);
    for (int y = 0; y < CH; y++) for (int x = 0; x < CW; x++) {
        int i = (cy0 + y) * (w / 2) + cx0 + x;
        float du = bg * Cu[y * CW + x], dv = bg * Cv[y * CW + x];
        if (fabsf(du) >= 0.5f) { int v = (int)lroundf(U[i] + du); U[i] = (uint8_t)(v < 0 ? 0 : v > 255 ? 255 : v); }
        if (fabsf(dv) >= 0.5f) { int v = (int)lroundf(V[i] + dv); V[i] = (uint8_t)(v < 0 ? 0 : v > 255 ? 255 : v); }
    }
    free(Cu); free(T);
}

static uint32_t iframe_q(const uint8_t *pkt) {
    uint32_t v = ((uint32_t)pkt[1] << 24) | ((uint32_t)pkt[0] << 16) | ((uint32_t)pkt[3] << 8) | pkt[2];
    return (v >> 23) & 63;
}
static uint32_t bits_at(const uint8_t *pkt, int size, int pos) {
    uint32_t v = 0;
    for (int i = 0; i < 32; i++, pos++) {
        int byte = pos >> 3, sb = byte ^ 1;
        int bit = sb < size ? (pkt[sb] >> (7 - (pos & 7))) & 1 : 0;
        v = (v << 1) | (uint32_t)bit;
    }
    return v;
}
static int cmp_u32(const void *a, const void *b) { uint32_t x = *(const uint32_t *)a, y = *(const uint32_t *)b; return x < y ? -1 : x > y; }

uint8_t *dlt_dirkfix(int idx, const uint8_t *orig, size_t olen, size_t *outlen, uint8_t **preview, int preview_frame) {
    const dirk_file *df = &DIRK_FILES[idx];
    moc5 m; if (!moc5_parse(&m, orig, olen)) return NULL;
    int w = (int)m.width, h = (int)m.height, n = (int)m.nframes; size_t fs = (size_t)w * h * 3 / 2;
    uint8_t *tgt = (uint8_t *)malloc(fs * (size_t)n), *out = NULL;
    char *types = (char *)malloc((size_t)n + 1);
    uint32_t *words = (uint32_t *)calloc((size_t)n, 4), *iq = (uint32_t *)malloc(4 * (size_t)n); int niq = 0;
    mobidec *dec = mobidec_new(w, h); int ok = dec != NULL && w == 640 && h == 480 && moc5_is_key(&m, 0);
    for (int k = 0; k < n && ok; k++) {
        const uint8_t *pkt = moc5_video(&m, (uint32_t)k); int vs = (int)m.fr[k].vsize;
        const uint8_t *yuv; if (!mobidec_decode(dec, pkt, vs, &yuv)) { ok = 0; break; }
        types[k] = moc5_is_key(&m, (uint32_t)k) ? 'I' : 'P';
        if (types[k] == 'I') {
            int end = mobidec_iframe_end_bits(dec); int a = end + ((16 - end % 16) % 16);
            words[k] = bits_at(pkt, vs, a); iq[niq++] = iframe_q(pkt);
        }
        uint8_t *f = tgt + fs * (size_t)k;
        memcpy(f, yuv, fs);
        float s, cx, cy;
        if (frame_xform(df->kind, k, n, &s, &cx, &cy)) patch_frame_model(f, w, h, s, cx, cy);
        if (preview && k == preview_frame) { *preview = (uint8_t *)malloc(fs); memcpy(*preview, f, fs); }
    }
    types[n] = 0;
    if (ok && niq) {
        qsort(iq, (size_t)niq, 4, cmp_u32);
        int q = niq % 2 ? (int)iq[niq / 2] : (int)((iq[niq / 2 - 1] + iq[niq / 2]) / 2);
        uint8_t **pk = (uint8_t **)calloc((size_t)n, sizeof(uint8_t *)); uint32_t *pl = (uint32_t *)calloc((size_t)n, 4);
        int attempt;
        for (attempt = 0; attempt < 8; attempt++) {
            if (!mobienc_encode(tgt, n, w, h, types, words, q, 5, NULL, pk, pl, NULL)) { ok = 0; break; }
            int big = 0;
            for (int k = 0; k < n; k++) if (pl[k] + 8 + 600 > m.max_frame) big = 1;
            if (!big) break;
            for (int k = 0; k < n; k++) { free(pk[k]); pk[k] = NULL; }
            q++;
        }
        if (ok && attempt < 8) out = moc5_build(&m, 0, (uint32_t)n, pk, pl, outlen);
        for (int k = 0; k < n; k++) free(pk[k]);
        free(pk); free(pl);
    }
    mobidec_free(dec); free(tgt); free(types); free(words); free(iq); moc5_free(&m);
    return out;
}

/* Template from the retail 01 - Opening.mo bytes (decodes its first frame). */
int dlt_dirkfix_template_from_movie(const uint8_t *mo, size_t len) {
    moc5 m; if (!moc5_parse(&m, mo, len)) return 0;
    int ok = 0;
    if (m.width == 640 && m.height == 480 && m.nframes > 0) {
        mobidec *dec = mobidec_new(640, 480); const uint8_t *yuv;
        if (dec && mobidec_decode(dec, moc5_video(&m, 0), (int)m.fr[0].vsize, &yuv)) { dlt_dirkfix_set_template(yuv); ok = 1; }
        if (dec) mobidec_free(dec);
    }
    moc5_free(&m);
    return ok;
}
