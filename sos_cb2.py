import struct
from capstone import *
d=open(r"D:\Games\CASINO4\SOS9503.DLL","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; nsec=struct.unpack_from("<H",d,pe+6)[0]; opt=struct.unpack_from("<H",d,pe+20)[0]
so=pe+24+opt; secs=[]
for i in range(nsec):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,va,vsz,ro,rsz))
def r2o(rva):
    for nm,va,vsz,ro,rsz in secs:
        if va<=rva<va+max(vsz,rsz): return ro+(rva-va)
md=Cs(CS_ARCH_X86,CS_MODE_32)
for lo in (0x53f0,0x54e0):
    print("=====",hex(lo))
    for ins in md.disasm(d[r2o(lo):r2o(lo)+130],lo):
        print("  ",hex(ins.address),ins.mnemonic,ins.op_str)
        if ins.mnemonic=="ret": break
