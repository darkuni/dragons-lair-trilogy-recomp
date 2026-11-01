"""usage: callers.py gen_dir ADDR [ADDR..] : list functions calling each address, plus call-count of target"""
import sys,re,glob,collections
FN=re.compile(r'^// ([^\n]*)\nvoid f_([0-9A-F]{8})\(Ctx\* __restrict c\) \{\n(.*?)^\}',re.S|re.M)
calls=collections.defaultdict(list);names={}
for p in glob.glob(sys.argv[1]+'/code_*.cpp'):
    for m in FN.finditer(open(p).read()):
        names[m.group(2)]=m.group(1)
        for t in re.findall(r'f_([0-9A-F]{8})\(c\)',m.group(3)): calls[t].append(m.group(2))
for a in sys.argv[2:]:
    a=a.upper()
    print(a,names.get(a),'<-',sorted(set(f'{x}({names.get(x)})' for x in calls[a])))
