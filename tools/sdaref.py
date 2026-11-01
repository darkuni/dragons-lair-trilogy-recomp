"""find functions that load a pointer to a given string via r13/r2 SDA or lis/addi.
usage: sdaref.py main.dol symbols.txt 'substring'"""
import sys,os,bisect
sys.path.insert(0,os.path.join(os.path.dirname(os.path.abspath(__file__)),'..','src'))
from dol import Dol,load_symbols
from ppcdec import decode
d=Dol(sys.argv[1]);funcs,_=load_symbols(sys.argv[2]);sub=sys.argv[3].encode()
starts=[a for a,s,n in funcs]
def fn(a):
    i=bisect.bisect_right(starts,a)-1
    return funcs[i] if i>=0 else None
# string addresses
saddrs=[]
for o,ad,s,t in d.sections:
    blob=d.d[o:o+s];p=blob.find(sub)
    while p>=0:
        q=p
        while q>0 and blob[q-1]!=0: q-=1
        saddrs.append(ad+q);p=blob.find(sub,p+1)
saddrs=sorted(set(saddrs))
# r13 = _SDA_BASE_: find from __init_registers (lis r13 / ori r13)
r13=r2=None
for a in range(0x80004000,0x80006720,4):
    m,f=decode(d.word(a))
    if m=='addis' and f['rd'] in(2,13) and f['ra']==0:
        hi=f['simm']<<16
        m2,f2=decode(d.word(a+4))
        if m2=='ori' and f2['ra']==f['rd']:
            v=(hi|f2['uimm'])&0xffffffff
            if f['rd']==13: r13=v
            else: r2=v
print('r13',hex(r13 or 0),'r2',hex(r2 or 0),'strings',[hex(x) for x in saddrs])
# pointers to string in data
ptrs=set(saddrs)
for o,ad,s,t in d.sections:
    if t: continue
    for a in range(ad,ad+s,4):
        if d.word(a) in saddrs: ptrs.add(a); print('ptr at',hex(a))
for a,s,n in funcs:
    hi={}
    for pc in range(a,a+s,4):
        m,f=decode(d.word(pc))
        if m=='addis' and f['ra']==0: hi[f['rd']]=(f['simm']<<16)&0xffffffff
        ea=None
        if m in('addi','lwz') and f['ra']==13 and r13: ea=(r13+f['simm'])&0xffffffff
        elif m in('addi','lwz') and f['ra'] in hi: ea=(hi[f['ra']]+f['simm'])&0xffffffff
        if ea in ptrs: print(f'{n} @{pc:08X}')
