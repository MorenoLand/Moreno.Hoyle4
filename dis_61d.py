import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
def rd(va,ln):
    o=0x400+(va-0x401000); return d[o:o+ln]
md=Cs(CS_ARCH_X86,CS_MODE_32)
lo=0x61d6b0
for i in md.disasm(rd(lo,0x70),lo):
    print(hex(i.address),i.mnemonic,i.op_str)
