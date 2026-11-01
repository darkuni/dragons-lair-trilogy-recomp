"""apply tools/xmatch_refs.json + tools/manual_names.txt (addr name) to config/symbols.txt (fn_ names only)"""
import json,re,os,collections
d=json.load(open('tools/xmatch_refs.json'))
man={}
if os.path.exists('tools/manual_names.txt'):
    for l in open('tools/manual_names.txt'):
        l=l.split('#')[0].split()
        if len(l)>=2: man[l[0].upper()]=l[1]
rx=re.compile(r'(\S+) = \.(\w+):0x([0-9A-F]+);(.*)')
L=open('config/symbols.txt').read().splitlines(True);used=collections.Counter();out=[];n=0
for l in L:
    m=rx.match(l)
    if m and 'type:function' in l:
        a=m.group(3); nm=man.get(a) or (d[a][1] if a in d else None)
        if nm and m.group(1).startswith('fn_'):
            used[nm]+=1; nm=nm if used[nm]==1 else f'{nm}_{a}'
            l=f'{nm} = .{m.group(2)}:0x{a};{m.group(4)}\n';n+=1
    out.append(l)
open('config/symbols.txt','w').writelines(out);print('named',n)
