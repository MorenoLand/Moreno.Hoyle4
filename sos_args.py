import struct, csv
from capstone import *
d=open("orig/Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
secs=[]
for i in range(n):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,0x400000+va,vsz,ro,rsz))
def v2o(va):
    for nm,v,vsz,ro,rsz in secs:
        if v<=va<v+max(vsz,rsz): return ro+(va-v)
text=[s for s in secs if s[0]==".text"][0]; tb=d[text[3]:text[3]+text[4]]
funcs={}
for r in csv.DictReader(open("ida/functions.tsv",encoding="utf-8"),delimiter="\t"):
    funcs[int(r["address"],16)]=int(r["size"])
fadd=sorted(funcs)
import bisect
md=Cs(CS_ARCH_X86,CS_MODE_32)
out=[]
for a in range(0x6f1380,0x6f2200,0x24):
    oo=v2o(a); flag,slot=struct.unpack_from("<II",d,oo)
    nm=d[oo+8:oo+8+28].split(b"\0")[0].decode("latin1")
    if not nm.startswith("sos"): continue
    pat=b"\xff\x15"+struct.pack("<I",slot); i=tb.find(pat)
    if i<0: out.append((nm,-1,"no call")); continue
    call=text[1]+i
    fi=bisect.bisect_right(fadd,call)-1; fs=fadd[fi]
    code=d[v2o(fs):v2o(fs)+ (call-fs)+8]
    ins=list(md.disasm(code,fs))
    # find mov ebp, esp then skip prologue pushes of ebx/esi/edi
    args=0; seen_frame=False; prologue=True
    for x in ins:
        if x.address>=call: break
        if x.mnemonic=="mov" and x.op_str.replace(" ","")=="ebp,esp": seen_frame=True; continue
        if not seen_frame: continue
        if x.mnemonic=="push" and prologue and x.op_str in ("ebx","esi","edi","ebp"): continue
        prologue=False
        if x.mnemonic=="push": args+=1
    out.append((nm,args,"%s" % ", ".join("%s %s"%(x.mnemonic,x.op_str) for x in ins if x.address<call)))
for nm,args,ctx in out:
    print("%-32s %2d" % (nm,args))
print("total",len(out))
import json
json.dump({nm:args for nm,args,ctx in out}, open("build/sos_args.json","w"), indent=0)
