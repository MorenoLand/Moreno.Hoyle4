import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
base=0x400; va0=0x401000
code=d[base:base+0x231800]
md=Cs(CS_ARCH_X86,CS_MODE_32)
hits=[]
for ins in md.disasm(code,va0):
    o=ins.op_str
    if "0x7530" in o or "0x1e" == o.split(", ")[-1] or "0x41f00000" in o or "30000" in o:
        hits.append((ins.address,ins.mnemonic,o))
print(len(hits))
for h in hits[:60]: print(hex(h[0]),h[1],h[2])
