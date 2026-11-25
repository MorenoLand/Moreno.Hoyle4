import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
def rd(va,n): return d[0x400+(va-0x401000):0x400+(va-0x401000)+n]
va=0x61dc40
for ins in Cs(CS_ARCH_X86,CS_MODE_32).disasm(rd(va,140),va):
    print(hex(ins.address),ins.mnemonic,ins.op_str)
