import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
secs=[]
for i in range(n):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,0x400000+va,vsz,ro,rsz))
def v2o(va):
    for nm,v,vsz,ro,rsz in secs:
        if v<=va<v+max(vsz,rsz): return ro+(va-v)
slotname={}
for a in range(0x6f1380,0x6f2200,0x24):
    oo=v2o(a); flag,slot=struct.unpack_from("<II",d,oo); nm=d[oo+8:oo+8+28].split(b"\0")[0].decode("latin1")
    if nm.startswith("sos"): slotname[slot]=nm
lo=0x623880
o=0x400+(lo-0x401000)
for ins in Cs(CS_ARCH_X86,CS_MODE_32).disasm(d[o:o+0x30],lo):
    print(hex(ins.address),ins.mnemonic,ins.op_str)
    if "0x71" in ins.op_str:
        try:
            val=int(ins.op_str.split("[")[1].split("]")[0],16); print("   slot",hex(val),slotname.get(val))
        except Exception: pass
