#!/usr/bin/env python3
"""Name functions by matching generated C++ bodies against other recomps' src/gen.

usage: genmatch.py our_gen_dir out.json ref_repo [ref_repo ...]

Each function body is normalised (address comments, labels relative to the
function start, call targets and address-like constants masked) and hashed.
Strict hashes keep small immediates; loose hashes mask every hex constant.
Unique strict matches first, then unique loose matches, then call-graph
propagation (matched callers' n-th call target -> callee).
"""
import sys, re, os, glob, hashlib, json, collections

FN = re.compile(r'^// ([^\n]*)\nvoid f_([0-9A-F]{8})\(Ctx\* __restrict c\) \{\n(.*?)^\}', re.S | re.M)
CALL = re.compile(r'f_([0-9A-F]{8})\(c\)')

def parse(gendir):
    out = {}
    for p in sorted(glob.glob(os.path.join(gendir, 'code_*.cpp'))):
        t = open(p).read()
        for m in FN.finditer(t):
            name, a, body = m.group(1), int(m.group(2), 16), m.group(3)
            out[a] = (name, body)
    return out

def norm(a, body, loose):
    b = re.sub(r' // [0-9A-F]{8}\n', '\n', body)
    b = re.sub(r'(?m)^\s*trace_call\(0x[0-9A-F]{8}u\);\n', '', b)
    b = re.sub(r'L_([0-9A-F]{8})', lambda m: 'L%x' % (int(m.group(1), 16) - a), b)
    b = re.sub(r'dispatch\(c,0x[0-9A-F]{8}u\)', 'dispatch(c,A)', b)
    calls = CALL.findall(b)
    b = CALL.sub('F(c)', b)
    b = re.sub(r'0x8[0-1][0-9A-F]{6}u', 'A', b)
    b = re.sub(r'unimpl\(c,0x[0-9A-F]{8}u', 'unimpl(c,A', b)
    if loose:
        b = re.sub(r'0x[0-9A-F]{8}u', 'K', b)
    return hashlib.sha1(b.encode()).hexdigest(), [int(x, 16) for x in calls], b.count('\n')

generic = re.compile(r'^(fn_|func_|lbl_|sub_|@|\$\$|zz_|\.|__sinit_|dtor_|ctor_)')

ours = parse(sys.argv[1])
refs = []
for r in sys.argv[3:]:
    g = parse(os.path.join(r, 'src', 'gen'))
    refs.append((os.path.basename(r.rstrip('/')), g))
    print(os.path.basename(r), len(g), 'functions', file=sys.stderr)

result = {}
def run(loose):
    oh = {}
    for a, (n, b) in ours.items():
        oh[a] = norm(a, b, loose)
    byh = collections.defaultdict(list)
    for a, (h, c, L) in oh.items():
        byh[h].append(a)
    got = 0
    for ref, g in refs:
        rh = collections.defaultdict(list)
        for a, (n, b) in g.items():
            if generic.match(n):
                continue
            h, c, L = norm(a, b, loose)
            rh[h].append((n, a))
        for h, oas in byh.items():
            if len(oas) != 1 or oas[0] in result:
                continue
            cand = {n.split('_8')[0] if re.search(r'_8[0-9A-F]{7}$', n) else n for n, _ in rh.get(h, [])}
            if len(cand) == 1 and oh[oas[0]][2] >= 3:
                result[oas[0]] = (cand.pop(), ref, 'loose' if loose else 'strict')
                got += 1
    return oh, got

oh, g1 = run(False)
oh2, g2 = run(True)
print('strict', g1, 'loose', g2, file=sys.stderr)

# call-graph propagation: matched (ours, ref) pairs with the same number of calls
refidx = {}
for ref, g in refs:
    refidx[ref] = (g, {n: a for a, (n, b) in g.items()})
prop = 0
changed = True
while changed:
    changed = False
    for oa, (nm, ref, how) in list(result.items()):
        g, byname = refidx[ref]
        ra = byname.get(nm)
        if ra is None:
            continue
        rc = norm(ra, g[ra][1], True)[1]
        oc = oh2[oa][1]
        if len(rc) != len(oc):
            continue
        for o_t, r_t in zip(oc, rc):
            if o_t in result or o_t not in ours:
                continue
            rn = g[r_t][0] if r_t in g else None
            if not rn or generic.match(rn):
                continue
            # callee bodies must match loosely too (or the ref callee was replaced by host code)
            rb = g[r_t][1]
            replaced = ('hle_' in rb or 'stub_log' in rb) and rb.count('\n') <= 3
            if replaced or norm(o_t, ours[o_t][1], True)[0] == norm(r_t, rb, True)[0]:
                result[o_t] = (rn, ref, 'prop')
                prop += 1
                changed = True
print('propagated', prop, 'total', len(result), 'of', len(ours), file=sys.stderr)
json.dump({f'{a:08X}': [f'{a:08X}', v[0], v[1], v[2]] for a, v in sorted(result.items())}, open(sys.argv[2], 'w'), indent=0)
