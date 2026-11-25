import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
def rd(va,n): return d[0x400+(va-0x401000):0x400+(va-0x401000)+n]
for f in (0x61b5da,0x61b6df,0x61b71f,0x61b626,0x61b836,0x61b6c7,0x61b764,0x61b81c):
    print("=====",hex(f))
    for ins in Cs(CS_ARCH_X86,CS_MODE_32).disasm(rd(f,48),f):
        print(" ",hex(ins.address),ins.mnemonic,ins.op_str)
        if ins.mnemonic=="ret": break
