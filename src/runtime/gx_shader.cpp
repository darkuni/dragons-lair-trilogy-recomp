// TEV -> GLSL fragment shader generation.
#include "gx_render.h"
#include <string>
#include <sstream>
#include <unordered_map>
#include <cstdio>

static const char* kColorIn[16] = {"prev.rgb", "prev.aaa", "c0.rgb", "c0.aaa", "c1.rgb", "c1.aaa", "c2.rgb", "c2.aaa",
                                   "tex.rgb", "tex.aaa", "ras.rgb", "ras.aaa", "vec3(1.0)", "vec3(0.5)", "kc", "vec3(0.0)"};
static const char* kAlphaIn[8] = {"prev.a", "c0.a", "c1.a", "c2.a", "tex.a", "ras.a", "ka", "0.0"};
static const char* kDest[4] = {"prev", "c0", "c1", "c2"};
static const char* kKFrac[8] = {"1.0", "0.875", "0.75", "0.625", "0.5", "0.375", "0.25", "0.125"};

static std::string kcolor(int sel) {
    if (sel < 8) return std::string("vec3(") + kKFrac[sel] + ")";
    if (sel >= 12 && sel <= 15) return "u_konst[" + std::to_string(sel - 12) + "].rgb";
    if (sel >= 16) { int k = (sel - 16) & 3, c = (sel - 16) >> 2; return std::string("vec3(u_konst[") + std::to_string(k) + "]." + "rgba"[c] + ")"; }
    return "vec3(1.0)";
}
static std::string kalpha(int sel) {
    if (sel < 8) return kKFrac[sel];
    if (sel >= 16) { int k = (sel - 16) & 3, c = (sel - 16) >> 2; return std::string("u_konst[") + std::to_string(k) + "]." + "rgba"[c]; }
    return "1.0";
}
static std::string swizzle(const uint32_t* bp, int table) {
    uint32_t a = bp[0xF6 + 2 * table], b = bp[0xF6 + 2 * table + 1];
    std::string s = ".";
    s += "rgba"[a & 3]; s += "rgba"[(a >> 2) & 3]; s += "rgba"[b & 3]; s += "rgba"[(b >> 2) & 3];
    return s;
}

static const char* kAlphaCmp[8] = {"false", "(A < R)", "(A == R)", "(A <= R)", "(A > R)", "(A != R)", "(A >= R)", "true"};

std::string tev_shader_source(const uint32_t* bp) {
    int nstages = ((bp[0x00] >> 10) & 15) + 1;
    std::ostringstream o;
    o << "#version 330 core\n"
         "in vec4 v_c0; in vec4 v_c1; in vec3 v_tc[8];\n"
         "out vec4 o_color;\n"
         "uniform sampler2D u_tex[8];\n"
         "uniform vec4 u_reg[4];\n"
         "uniform vec4 u_konst[4];\n"
         "uniform vec2 u_aref;\n"
         "uniform vec2 u_tcsize[8];\n"      // SU texcoord scale (texels) per texcoord
         "uniform vec4 u_texsize[8];\n"     // per texmap: GX width/height, wrap S/T (0 clamp, 1 repeat, 2 mirror)
         "uniform ivec4 u_indmtx[6];\n"     // indirect matrices: rows (s, t) of 3, .w = right shift
         "ivec2 fixuv(int i){ vec2 uv = v_tc[i].xy / (v_tc[i].z == 0.0 ? 1.0 : v_tc[i].z); return ivec2(uv * u_tcsize[i] * 128.0); }\n"
         "int wrapc(int t, int n, float mode){ if (mode < 0.5) return clamp(t, 0, n - 1); if (mode < 1.5) return ((t % n) + n) % n;"
         " int p = ((t % (2 * n)) + 2 * n) % (2 * n); return p < n ? p : 2 * n - 1 - p; }\n"
         "vec4 fetchfix(sampler2D smp, int m, ivec2 f){ ivec2 sz = ivec2(u_texsize[m].xy); ivec2 t = f >> 7;"
         " t = ivec2(wrapc(t.x, sz.x, u_texsize[m].z), wrapc(t.y, sz.y, u_texsize[m].w));"
         " ivec2 real = textureSize(smp, 0); if (real != sz) t = t * real / sz; return texelFetch(smp, t, 0); }\n"
         "vec3 q8(vec3 v){ return floor(v*255.0+0.5); }\n"
         "float q8(float v){ return floor(v*255.0+0.5); }\n"
         "void main(){\n"
         "  vec4 prev=u_reg[0], c0=u_reg[1], c1=u_reg[2], c2=u_reg[3];\n"
         "  vec4 tex=vec4(1.0), ras=vec4(0.0); vec3 kc; float ka;\n";
    // indirect texture stages: look up offsets (A, B, G as s, t, u) for the TEV stages that use them
    int nbump = (bp[0x00] >> 16) & 7;
    for (int i = 0; i < nbump && i < 4; i++) {
        int bi = (bp[0x27] >> (6 * i)) & 7, bc = (bp[0x27] >> (6 * i + 3)) & 7;
        uint32_t ss = bp[0x25 + i / 2] >> ((i & 1) * 8);
        int sh_s = ss & 15, sh_t = (ss >> 4) & 15;
        o << "  ivec2 ic" << i << " = fixuv(" << bc << "); ic" << i << " = ivec2(ic" << i << ".x >> " << sh_s << ", ic" << i << ".y >> " << sh_t << ");\n";
        o << "  ivec3 iind" << i << " = ivec3(floor(fetchfix(u_tex[" << bi << "], " << bi << ", ic" << i << ").abg * 255.0 + 0.5));\n";
    }
    o << "  ivec2 tevc = ivec2(0);\n";
    for (int s = 0; s < nstages; s++) {
        uint32_t order = bp[0x28 + s / 2] >> ((s & 1) * 12);
        int texmap = order & 7, texcoord = (order >> 3) & 7, enable = (order >> 6) & 1, chan = (order >> 7) & 7;
        uint32_t cenv = bp[0xC0 + 2 * s], aenv = bp[0xC1 + 2 * s];
        uint32_t ksel = bp[0xF6 + s / 2] >> ((s & 1) ? 14 : 4);
        int kcs = ksel & 31, kas = (ksel >> 5) & 31;
        int rswap = aenv & 3, tswap = (aenv >> 2) & 3;
        o << "  // stage " << s << "\n";
        uint32_t ind = bp[0x10 + s];
        int ibt = ind & 3, ifmt = (ind >> 2) & 3, ibias = (ind >> 4) & 7, imid = (ind >> 9) & 15, isw = (ind >> 13) & 7, itw = (ind >> 16) & 7, iprev = (ind >> 20) & 1;
        bool indirect = nbump > 0 && (imid != 0 || isw != 0 || itw != 0 || iprev);
        if (indirect) {
            // GX indirect texturing in fixed point (texel units * 128), as the hardware does it
            static const char* kMask[4] = {"0xff", "0x1f", "0x0f", "0x07"};
            static const int kWrap[8] = {0, 256, 128, 64, 32, 16, 0, 0};
            o << "  { ivec3 crd = iind" << (ibt < nbump ? ibt : 0) << " & " << kMask[ifmt] << ";\n";
            int bias = ifmt == 0 ? -128 : 1;
            if (ibias & 1) o << "    crd.x += " << bias << ";\n";
            if (ibias & 2) o << "    crd.y += " << bias << ";\n";
            if (ibias & 4) o << "    crd.z += " << bias << ";\n";
            o << "    ivec2 tr = ivec2(0);\n";
            if (imid >= 1 && imid <= 3) {
                int r = (imid - 1) * 2;
                o << "    tr = ivec2(u_indmtx[" << r << "].x * crd.x + u_indmtx[" << r << "].y * crd.y + u_indmtx[" << r << "].z * crd.z,"
                  << " u_indmtx[" << r + 1 << "].x * crd.x + u_indmtx[" << r + 1 << "].y * crd.y + u_indmtx[" << r + 1 << "].z * crd.z) >> 3;\n"
                  << "    int sh = u_indmtx[" << r << "].w; tr = sh >= 0 ? (tr >> sh) : (tr << (-sh));\n";
            } else if ((imid >= 5 && imid <= 7) || (imid >= 9 && imid <= 11)) {
                int r = ((imid & 3) - 1) * 2;
                o << "    ivec2 fu = fixuv(" << texcoord << ");\n";
                if (imid < 8) o << "    tr = (fu * crd.xx) >> 8;\n"; else o << "    tr = (fu * crd.yy) >> 8;\n";
                o << "    int sh = u_indmtx[" << r << "].w; tr = sh >= 0 ? (tr >> sh) : (tr << (-sh));\n";
            }
            o << "    ivec2 wc = fixuv(" << texcoord << ");\n";
            if (isw) o << "    wc.x = " << (kWrap[isw] ? "wc.x & " + std::to_string((kWrap[isw] << 7) - 1) : std::string("0")) << ";\n";
            if (itw) o << "    wc.y = " << (kWrap[itw] ? "wc.y & " + std::to_string((kWrap[itw] << 7) - 1) : std::string("0")) << ";\n";
            o << "    tevc = " << (iprev ? "tevc + " : "") << "wc + tr; }\n";
        }
        if (enable && indirect)
            o << "  tex = fetchfix(u_tex[" << texmap << "], " << texmap << ", tevc)" << swizzle(bp, tswap) << ";\n";
        else if (enable)
            o << "  tex = texture(u_tex[" << texmap << "], v_tc[" << texcoord << "].xy / (v_tc[" << texcoord << "].z == 0.0 ? 1.0 : v_tc[" << texcoord << "].z))" << swizzle(bp, tswap) << ";\n";
        else
            o << "  tex = vec4(1.0);\n";
        if (chan == 0) o << "  ras = v_c0" << swizzle(bp, rswap) << ";\n";
        else if (chan == 1) o << "  ras = v_c1" << swizzle(bp, rswap) << ";\n";
        else o << "  ras = vec4(0.0);\n";
        o << "  kc = " << kcolor(kcs) << "; ka = " << kalpha(kas) << ";\n";
        // color combiner
        {
            const char *d = kColorIn[cenv & 15], *c = kColorIn[(cenv >> 4) & 15], *b = kColorIn[(cenv >> 8) & 15], *a = kColorIn[(cenv >> 12) & 15];
            int bias = (cenv >> 16) & 3, op = (cenv >> 18) & 1, clamp = (cenv >> 19) & 1, scale = (cenv >> 20) & 3, dest = (cenv >> 22) & 3;
            std::string r;
            if (bias != 3) {
                static const char* kb[3] = {"0.0", "0.5", "-0.5"};
                static const char* ks[4] = {"1.0", "2.0", "4.0", "0.5"};
                r = std::string("((") + d + (op ? " - " : " + ") + "mix(" + a + ", " + b + ", " + c + ") + vec3(" + kb[bias] + ")) * " + ks[scale] + ")";
            } else {
                int mode = (scale << 1) | op;
                std::string A = a, B = b;
                switch (mode) {
                    case 0: r = std::string(d) + " + ((q8((" + A + ").r) > q8((" + B + ").r)) ? " + c + " : vec3(0.0))"; break;
                    case 1: r = std::string(d) + " + ((q8((" + A + ").r) == q8((" + B + ").r)) ? " + c + " : vec3(0.0))"; break;
                    case 2: r = std::string(d) + " + ((dot(q8((" + A + ").rg), vec2(1.0,256.0)) > dot(q8((" + B + ").rg), vec2(1.0,256.0))) ? " + c + " : vec3(0.0))"; break;
                    case 3: r = std::string(d) + " + ((dot(q8((" + A + ").rg), vec2(1.0,256.0)) == dot(q8((" + B + ").rg), vec2(1.0,256.0))) ? " + c + " : vec3(0.0))"; break;
                    case 4: r = std::string(d) + " + ((dot(q8(" + A + "), vec3(1.0,256.0,65536.0)) > dot(q8(" + B + "), vec3(1.0,256.0,65536.0))) ? " + c + " : vec3(0.0))"; break;
                    case 5: r = std::string(d) + " + ((dot(q8(" + A + "), vec3(1.0,256.0,65536.0)) == dot(q8(" + B + "), vec3(1.0,256.0,65536.0))) ? " + c + " : vec3(0.0))"; break;
                    case 6: r = std::string(d) + " + " + c + " * vec3(greaterThan(q8(" + A + "), q8(" + B + ")))"; break;
                    default: r = std::string(d) + " + " + c + " * vec3(equal(q8(" + A + "), q8(" + B + ")))"; break;
                }
            }
            o << "  " << kDest[dest] << ".rgb = " << (clamp ? "clamp(" + r + ", 0.0, 1.0)" : "clamp(" + r + ", -4.0, 4.0)") << ";\n";
        }
        // alpha combiner
        {
            const char *d = kAlphaIn[(aenv >> 4) & 7], *c = kAlphaIn[(aenv >> 7) & 7], *b = kAlphaIn[(aenv >> 10) & 7], *a = kAlphaIn[(aenv >> 13) & 7];
            int bias = (aenv >> 16) & 3, op = (aenv >> 18) & 1, clamp = (aenv >> 19) & 1, scale = (aenv >> 20) & 3, dest = (aenv >> 22) & 3;
            std::string r;
            if (bias != 3) {
                static const char* kb[3] = {"0.0", "0.5", "-0.5"};
                static const char* ks[4] = {"1.0", "2.0", "4.0", "0.5"};
                r = std::string("((") + d + (op ? " - " : " + ") + "mix(" + a + ", " + b + ", " + c + ") + " + kb[bias] + ") * " + ks[scale] + ")";
            } else {
                int mode = (scale << 1) | op;
                const char* cmp = (mode & 1) ? " == " : " > ";
                r = std::string(d) + " + ((q8(" + a + ")" + cmp + "q8(" + b + ")) ? " + c + " : 0.0)";
            }
            o << "  " << kDest[dest] << ".a = " << (clamp ? "clamp(" + r + ", 0.0, 1.0)" : "clamp(" + r + ", -4.0, 4.0)") << ";\n";
        }
    }
    // alpha test
    uint32_t ac = bp[0xF3];
    int comp0 = (ac >> 16) & 7, comp1 = (ac >> 19) & 7, logic = (ac >> 22) & 3;
    auto cmp = [&](int f, const char* ref) {
        std::string s = kAlphaCmp[f];
        size_t p;
        while ((p = s.find('A')) != std::string::npos) s.replace(p, 1, "pa");
        while ((p = s.find('R')) != std::string::npos) s.replace(p, 1, ref);
        return s;
    };
    o << "  vec4 outc = clamp(prev, 0.0, 1.0);\n";
    if (!(comp0 == 7 && comp1 == 7 && logic == 0)) {
        static const char* kl[4] = {" && ", " || ", " != ", " == "};
        o << "  float pa = q8(outc.a);\n"
          << "  bool t0 = " << cmp(comp0, "u_aref.x") << "; bool t1 = " << cmp(comp1, "u_aref.y") << ";\n"
          << "  if (!(t0" << kl[logic] << "t1)) discard;\n";
    }
    o << "  o_color = outc;\n}\n";
    return o.str();
}

uint64_t tev_shader_key(const uint32_t* bp) {
    int nstages = ((bp[0x00] >> 10) & 15) + 1;
    uint64_t h = 1469598103934665603ull;
    auto mix = [&](uint32_t v) { h ^= v; h *= 1099511628211ull; };
    mix(nstages);
    for (int s = 0; s < nstages; s++) {
        mix(bp[0xC0 + 2 * s]); mix(bp[0xC1 + 2 * s]);
        mix(bp[0x28 + s / 2]);
    }
    int nbump = (bp[0x00] >> 16) & 7;
    mix(nbump);
    if (nbump) {
        mix(bp[0x27]); mix(bp[0x25]); mix(bp[0x26]);
        for (int s = 0; s < nstages; s++) mix(bp[0x10 + s]);
    }
    for (int i = 0; i < 8; i++) mix(bp[0xF6 + i]);
    mix(bp[0xF3] >> 16);
    return h;
}
