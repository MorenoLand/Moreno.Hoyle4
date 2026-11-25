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
o=r2o(struct.unpack_from("<I",d,pe+24+96)[0])
nn,=struct.unpack_from("<I",d,o+20); anames,=struct.unpack_from("<I",d,o+0x20); afuncs,=struct.unpack_from("<I",d,o+0x1c); aords,=struct.unpack_from("<I",d,o+0x24)
md=Cs(CS_ARCH_X86,CS_MODE_32)
for i in range(nn):
    nr,=struct.unpack_from("<I",d,r2o(anames)+4*i); p=r2o(nr); e=d.find(b"\0",p); name=d[p:e].decode()
    if name not in ("sosDIGIStreamAcquire",): continue
    idx,=struct.unpack_from("<H",d,r2o(aords)+2*i); frva,=struct.unpack_from("<I",d,r2o(afuncs)+4*idx)
    print("=====",hex(frva),name)
    code=d[r2o(frva):r2o(frva)+400]
    for ins in md.disasm(code,frva):
        print("  ",hex(ins.address),ins.mnemonic,ins.op_str)
        if ins.mnemonic=="ret" and ins.address>frva+4: break
