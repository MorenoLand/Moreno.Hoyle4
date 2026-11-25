import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
secs=[]
for i in range(n):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,0x400000+va,vsz,ro,rsz))
def rd(va,ln):
    for nm,v,vsz,ro,rsz in secs:
        if v<=va<v+max(vsz,rsz): oo=ro+(va-v); return d[oo:oo+ln]
    return b""
md=Cs(CS_ARCH_X86,CS_MODE_32)
for lo,hi in ((0x455000,0x45c000),(0x5b8000,0x5bc000),(0x400000,0x401000)):
    i0=lo; buf=rd(lo,hi-lo)
    for ins in md.disasm(buf,lo):
        t=ins.op_str
        if "0x6870b0" in t or "0x6870c0" in t or "0x6f6878" in t:
            kind="WRITE" if (ins.mnemonic.startswith("mov") and t.split(",")[0].strip().startswith("dword ptr [") ) else "read"
            print(hex(ins.address),kind,ins.mnemonic,t)
