#!/usr/bin/env python3
"""Find function boundaries and switch tables in a main.dol without dtk.

usage: discover.py main.dol out_symbols.txt

Seeds: entry point, every bl target, code pointers found in data sections, and
prologues (stwu r1,-N(r1) / mflr r0) that follow an unconditional end of code.
Each function is swept linearly; it ends at an unconditional exit (blr, b, bctr,
rfi) once no forward branch target or switch-table target lies past it.
Writes dtk-style symbols (functions as fn_XXXXXXXX, tables as jumptable_XXXXXXXX)
so the recompiler and the naming tools can read it.
"""
import sys, os, bisect, collections
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'src'))
from dol import Dol
from ppcdec import decode

dol = Dol(sys.argv[1])
text = [(ad, ad + s) for o, ad, s, t in dol.sections if t]
data = [(ad, ad + s) for o, ad, s, t in dol.sections if not t]

def in_text(a):
    return any(s <= a < e for s, e in text)

def sec_end(a):
    for s, e in text:
        if s <= a < e:
            return e
    return a

W = {}
for s, e in text:
    for a in range(s, e, 4):
        W[a] = dol.word(a)

def br_target(pc, w):
    m, f = decode(w)
    if m == 'b':
        return m, f, (f['li'] if f['aa'] else pc + f['li']) & 0xffffffff
    if m == 'bc':
        return m, f, (f['bd'] if f['aa'] else pc + f['bd']) & 0xffffffff
    return m, f, None

# --- seeds -------------------------------------------------------------
seeds = {dol.entry}
for s, e in text:
    seeds.add(s)
bl_targets = set()
for a, w in W.items():
    m, f, t = br_target(a, w)
    if m == 'b' and f['lk'] and t is not None and in_text(t):
        bl_targets.add(t)
seeds |= bl_targets

# code pointers stored in data (vtables, callbacks, ctors)
data_ptrs = set()
for s, e in data:
    for a in range(s, e, 4):
        v = dol.word(a)
        if v is not None and not v & 3 and in_text(v):
            data_ptrs.add(v)

# switch tables: lis rX,hi / addi rY,rX,lo near a bctr; entries all inside the same code run
def find_tables():
    tables = {}   # table addr -> (bctr pc, [targets])
    for pc, w in W.items():
        m, f = decode(w)
        if m != 'bcctr' or f['lk'] or f['bo'] & 0x14 != 0x14:
            continue
        hi = {}
        for q in range(pc - 4 * 40, pc, 4):
            if q not in W:
                continue
            mm, ff = decode(W[q])
            if mm == 'addis' and ff['ra'] == 0:
                hi[ff['rd']] = (ff['simm'] << 16) & 0xffffffff
            elif mm == 'addi' and ff['ra'] in hi:
                base = (hi[ff['ra']] + ff['simm']) & 0xffffffff
                if in_text(base):
                    continue
                ts = []
                for k in range(1024):
                    t = dol.word(base + 4 * k)
                    if t is None or t & 3 or not in_text(t) or abs(t - pc) > 0x8000:
                        break
                    ts.append(t)
                if ts:
                    tables[base] = (pc, ts)
    return tables

tables = find_tables()
table_targets = set()
for base, (pc, ts) in tables.items():
    table_targets |= set(ts)
# data pointers that are switch-table entries are not function starts

# prologues after an unconditional exit or padding
def is_exit(w):
    m, f = decode(w)
    if m == 'bclr' and f['bo'] & 0x14 == 0x14 and not f['lk']:
        return True
    if m == 'bcctr' and f['bo'] & 0x14 == 0x14 and not f['lk']:
        return True
    if m == 'b' and not f['lk']:
        return True
    if m == 'rfi':
        return True
    return False

# code addresses formed in code (lis rX,hi ; addi/ori rY,rX,lo): callbacks passed to OS/SDK functions.
# Only taken when the target follows an unconditional exit or padding (never a mid-function label).
code_ptrs = set()
for a, w in W.items():
    m, f = decode(w)
    if m != 'addis' or f['ra'] != 0:
        continue
    hi = (f['simm'] << 16) & 0xffffffff
    for q in range(a + 4, a + 4 * 12, 4):
        if q not in W:
            break
        mm, ff = decode(W[q])
        if mm in ('addi', 'ori') and ff['ra'] == f['rd']:
            t = (hi + (ff['simm'] if mm == 'addi' else ff['uimm'])) & 0xffffffff
            if not t & 3 and in_text(t) and t not in table_targets:
                p = W.get(t - 4)
                if p is None or p == 0 or is_exit(p):
                    code_ptrs.add(t)
            break
        if ff.get('rd') == f['rd'] and mm not in ('stw', 'stb', 'sth', 'stfs', 'stfd', 'cmpi', 'cmpli'):
            break
seeds |= code_ptrs

# code pointers stored in data (vtables, callbacks): same test. A data word that merely equals a code
# address (a constant, a float) must not split a function (0x8000A000 in Dragon's Lair Trilogy).
def plausible_start(t):
    p = W.get(t - 4)
    return p is None or p == 0 or is_exit(p) or (W.get(t, 0) & 0xFFFF0000) == 0x94210000
dp = {p for p in data_ptrs if p not in table_targets and plausible_start(p)}
print('data pointers kept', len(dp), 'of', len(data_ptrs))
seeds |= dp
print('code pointers from lis/addi', len(code_ptrs), 'has 8000A2AC', 0x8000A2AC in code_ptrs)

for a, w in W.items():
    if (w & 0xFFFF0000) == 0x94210000 and (w & 0x8000):       # stwu r1,-N(r1)
        p = W.get(a - 4)
        if p is None or p == 0 or is_exit(p):
            seeds.add(a)
    if w == 0x7C0802A6:                                       # mflr r0 first
        p = W.get(a - 4)
        if p is None or p == 0 or is_exit(p):
            seeds.add(a)

# --- sweep ----------------------------------------------------------------
bctr_tables = collections.defaultdict(list)
for base, (pc, ts) in tables.items():
    bctr_tables[pc].append(ts)

def sweep(start, stop_at):
    """return end address (exclusive) of the function starting at start"""
    pc = start
    reach = start
    end_lim = sec_end(start)
    while pc < end_lim:
        if pc != start and pc in stop_at and pc > reach:
            return pc
        w = W[pc]
        if w == 0 and pc >= reach:
            return pc
        m, f, t = br_target(pc, w)
        if t is not None and not (m == 'b' and f['lk']):
            if start <= t < end_lim and t > reach and t - pc < 0x10000:
                if m == 'bc' or t not in stop_at:
                    reach = t
        for ts in bctr_tables.get(pc, []):
            for x in ts:
                if x > reach:
                    reach = x
        if pc >= reach and is_exit(w):
            return pc + 4
        pc += 4
    return pc

changed = True
starts = set(a for a in seeds if in_text(a))
while changed:
    changed = False
    ordered = sorted(starts)
    ss = set(ordered)
    ends = {}
    for k, a in enumerate(ordered):
        e = sweep(a, ss)
        if k + 1 < len(ordered):
            e = min(e, ordered[k + 1])   # a far forward b can make the sweep overrun the next start
        ends[a] = e
    # code after a function's end that is not padding and not covered: new function
    for a in ordered:
        e = ends[a]
        nxt = e
        while nxt in W and W[nxt] == 0:
            nxt += 4
        if nxt in W and nxt not in ss:
            # covered by an earlier function?
            starts.add(nxt)
            changed = True
    # b (no link) targets outside the branching function are entry points: tail calls, and shared
    # tails inside another function (CodeWarrior cross-jumping; the recompiler falls through into them)
    for a in ordered:
        for pc in range(a, ends[a], 4):
            m, f, t = br_target(pc, W[pc])
            if m == 'b' and not f['lk'] and t is not None and in_text(t) and not (a <= t < ends[a]) and t not in ss:
                starts.add(t)
                changed = True

# CodeWarrior _savegpr_N/_restgpr_N/_savefpr_N/_restfpr_N: runs of stw/lwz/stfd/lfd rN,off(r11) ending in
# blr (restgpr_x variants end with mtlr/mr r1,r11). Their entry points are labels, not functions: the
# recompiler inlines the sequence at each call, so drop them from the function list.
def r11_run(a):
    pc = a
    for _ in range(40):
        w = W.get(pc)
        if w is None:
            return False
        m, f = decode(w)
        if m in ('stw', 'lwz', 'stfd', 'lfd') and f['ra'] == 11:
            pc += 4; continue
        if m == 'bclr' and f['bo'] & 0x14 == 0x14 and not f['lk']:
            return pc > a
        if w in (0x7C0803A6, 0x7D615B78):      # mtlr r0 / mr r1,r11 (_restgpr_x)
            pc += 4; continue
        return False
    return False
labels = {a for a in starts if r11_run(a)}
starts -= labels
for a in sorted(labels):
    pass
print('save/restore helper labels', len(labels))

ordered = sorted(starts)
ss = set(ordered)
out = []
names = {}
for i, a in enumerate(ordered):
    e = sweep(a, ss)
    nxt = ordered[i + 1] if i + 1 < len(ordered) else sec_end(a)
    e = min(e, nxt)
    sec = 'init' if a < 0x80006720 else 'text'
    out.append((a, e - a, sec))

with open(sys.argv[2], 'w') as fo:
    fo.write('// generated by tools/discover.py\n')
    for a, s, sec in out:
        nm = '__start' if a == dol.entry else f'fn_{a:08X}'
        fo.write(f'{nm} = .{sec}:0x{a:08X}; // type:function size:0x{s:X}\n')
    for a in sorted(labels):
        fo.write(f'lbl_{a:08X} = .text:0x{a:08X}; // type:label scope:global\n')
    for base, (pc, ts) in sorted(tables.items()):
        fo.write(f'jumptable_{base:08X} = .data:0x{base:08X}; // type:object size:0x{4*len(ts):X} scope:local\n')
cov = sum(s for a, s, _ in out)
tot = sum(e - s for s, e in text)
print(f'functions {len(out)}  tables {len(tables)}  coverage {cov}/{tot} bytes ({100*cov/tot:.1f}%)  bl-targets {len(bl_targets)} data-ptrs {len(data_ptrs)}')
