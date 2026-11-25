import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
def rd(va,ln): return d[0x400+(va-0x401000):0x400+(va-0x401000)+ln]
md=Cs(CS_ARCH_X86,CS_MODE_32)
for i in md.disasm(rd(0x48ab58,0x40),0x48ab58):
    print(hex(i.address),i.mnemonic,i.op_str)
