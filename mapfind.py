d=open("orig/Casino4.exe","rb").read()
for s in (b"1234", b"4321"):
    print(s, d.count(s))
# parse map: find nearest symbol for addresses
import re
best={}
pat=re.compile(r"^\s*(0x[0-9a-fA-F]+)\s+(\S.*)$")
lines=open("bin/lift.map",encoding="utf-8",errors="replace").read().splitlines()
syms=[]
for l in lines:
    m=pat.match(l)
    if m:
        try: a=int(m.group(1),16)
        except: continue
        syms.append((a,m.group(2).strip()))
syms.sort()
import bisect
addrs=[a for a,_ in syms]
for t in (0x00dda2ec,0x1040ca56,0x1040ccc2):
    i=bisect.bisect_right(addrs,t)-1
    print(hex(t), hex(syms[i][0]), syms[i][1] if i>=0 else "?")
