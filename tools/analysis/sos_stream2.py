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
for frva,name,ln in ((0x4b26,"Prepare",0x120),(0x4c74,"Add",0x120),(0x4f14,"GetHandle",0x100),(0x4e05,"Start",0x120)):
    print("=====",name)
    code=d[r2o(frva):r2o(frva)+ln]
    for ins in md.disasm(code,frva):
        t=ins.op_str
        if "dword ptr [eax" in t or "dword ptr [ecx" in t or "dword ptr [edx" in t or "word ptr [eax" in t or "call" in t:
            print("  ",hex(ins.address),ins.mnemonic,t)
