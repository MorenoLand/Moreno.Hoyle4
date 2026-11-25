import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
def rd(va,ln):
    return d[0x400+(va-0x401000):0x400+(va-0x401000)+ln]
md=Cs(CS_ARCH_X86,CS_MODE_32)
lo=0x60fcd0
for i in md.disasm(rd(lo,0x300),lo):
    print(hex(i.address),i.mnemonic,i.op_str)
