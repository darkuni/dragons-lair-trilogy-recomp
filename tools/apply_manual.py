"""Apply tools/manual_names.txt (addr name) to config/symbols.txt."""
import re
names={}
for l in open('tools/manual_names.txt'):
    l=l.split('#')[0].split()
    if len(l)==2: names[l[0].upper()]=l[1]
p='config/symbols.txt';out=[];n=0
for l in open(p):
    m=re.match(r'(\S+) = \.(\w+):0x([0-9A-F]+);(.*)',l)
    if m and m.group(3) in names and m.group(1)!=names[m.group(3)]:
        l=f'{names[m.group(3)]} = .{m.group(2)}:0x{m.group(3)};{m.group(4)}\n';n+=1
    out.append(l)
open(p,'w').writelines(out);print('renamed',n)
