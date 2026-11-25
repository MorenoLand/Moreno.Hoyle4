import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
def rd(va,ln): return d[0x400+(va-0x401000):0x400+(va-0x401000)+ln]
md=Cs(CS_ARCH_X86,CS_MODE_32)
for lo,ln in ((0x48aa18,0x90),(0x48aaca,0x90)):
    print("=====",hex(lo))
    for i in md.disasm(rd(lo,ln),lo):
        print(hex(i.address),i.mnemonic,i.op_str)
