import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
def rd(va,ln): return d[0x400+(va-0x401000):0x400+(va-0x401000)+ln]
# map slots to names
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
for lo in (0x623e40,0x6235c0):
    print("=====",hex(lo))
    for ins in Cs(CS_ARCH_X86,CS_MODE_32).disasm(rd(lo,0x50),lo):
        print(hex(ins.address),ins.mnemonic,ins.op_str)
        if "0x71" in ins.op_str:
            try:
                val=int(ins.op_str.split("[")[1].split("]")[0],16)
                print("   slot",hex(val),slotname.get(val))
            except Exception: pass
