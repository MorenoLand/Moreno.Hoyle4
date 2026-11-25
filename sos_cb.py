import struct
from capstone import *
d=open(r"D:\Games\CASINO4\SOS9503.DLL","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; nsec=struct.unpack_from("<H",d,pe+6)[0]; opt=struct.unpack_from("<H",d,pe+20)[0]
so=pe+24+opt; secs=[]
for i in range(nsec):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,va,vsz,ro,rsz))
text=[s for s in secs if s[0]==".text"][0]
nm,va,vsz,ro,rsz=text
code=d[ro:ro+rsz]
md=Cs(CS_ARCH_X86,CS_MODE_32)
hits=[]
for ins in md.disasm(code,va):
    if ins.mnemonic=="call" and ("0x110]" in ins.op_str or "0x114]" in ins.op_str):
        hits.append((ins.address,ins.op_str))
print(hits)
for a,o in hits:
    print("=====",hex(a),o)
    start=a-40
    for ins in md.disasm(d[ro+(start-va):ro+(start-va)+90],start):
        print("  ",hex(ins.address),ins.mnemonic,ins.op_str)
        if ins.address>a+8: break
