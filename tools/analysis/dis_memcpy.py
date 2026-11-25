import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
def rd(va,ln): return d[0x400+(va-0x401000):0x400+(va-0x401000)+ln]
for i in Cs(CS_ARCH_X86,CS_MODE_32).disasm(rd(0x62f420,0x60),0x62f420):
    print(hex(i.address),i.mnemonic,i.op_str)
