import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
secs=[]
for i in range(n):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,0x400000+va,vsz,ro,rsz))
def rd(va,ln=160):
    for nm,v,vsz,ro,rsz in secs:
        if v<=va<v+max(vsz,rsz): o=ro+(va-v); return d[o:o+ln]
    return b""
md=Cs(CS_ARCH_X86,CS_MODE_32)
for va in (0x4594e0,0x5baa00):
    print("=====",hex(va))
    for i in md.disasm(rd(va),va):
        print(" ",hex(i.address),i.mnemonic,i.op_str)
        if i.address>=va+0xA0: break
