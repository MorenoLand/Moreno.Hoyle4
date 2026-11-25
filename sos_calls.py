import struct, bisect
from capstone import *
d=open("orig/Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
secs=[]
for i in range(n):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,0x400000+va,vsz,ro,rsz))
def v2o(va):
    for nm,v,vsz,ro,rsz in secs:
        if v<=va<v+max(vsz,rsz): return ro+(va-v)
text=[s for s in secs if s[0]==".text"][0]
tb=d[text[3]:text[3]+text[4]]
base=text[1]
# functions
funcs=[]
import csv
for r in csv.DictReader(open("ida/functions.tsv",encoding="utf-8"),delimiter="\t"):
    funcs.append((int(r["address"],16),r["name"],int(r["size"])))
funcs.sort(); fadd=[f[0] for f in funcs]
def fnof(va):
    i=bisect.bisect_right(fadd,va)-1
    return funcs[i] if i>=0 else (0,"?",0)
records=[]
for a in range(0x6f13ac,0x6f16c0+1,0x24):
    oo=v2o(a-8)
    flag,slot=struct.unpack_from("<II",d,oo)
    nm=d[oo+8:oo+8+28].split(b"\0")[0].decode("latin1")
    if not nm.startswith("sos"): continue
    records.append((nm,slot))
print(len(records),"sos slots")
md=Cs(CS_ARCH_X86,CS_MODE_32)
for nm,slot in records:
    pat=b"\xff\x15"+struct.pack("<I",slot)
    hits=[]; st=0
    while True:
        i=tb.find(pat,st)
        if i<0: break
        hits.append(base+i); st=i+1
    if not hits: 
        print(nm,hex(slot),"NO DIRECT CALL")
        continue
    print(nm,hex(slot),"calls:",[hex(h) for h in hits][:4])
    for h in hits[:2]:
        f=fnof(h)
        # disassemble the 8 instructions before h
        start=max(f[0],h-40)
        ins=list(md.disasm(d[v2o(start):v2o(h)+6],start))
        ctx=[x for x in ins if x.address<=h][-7:]
        print("   ",f[1],":", " ; ".join("%s %s"%(x.mnemonic,x.op_str) for x in ctx))
