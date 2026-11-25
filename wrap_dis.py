import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
def rd(va,ln):
    o=0x400+(va-0x401000); return d[o:o+ln]
md=Cs(CS_ARCH_X86,CS_MODE_32)
for lo,hi in ((0x623474,0x6234cc),(0x623258,0x6232c8)):
    print("=====",hex(lo))
    for i in md.disasm(rd(lo,hi-lo),lo):
        print(" ",hex(i.address),i.mnemonic,i.op_str)
