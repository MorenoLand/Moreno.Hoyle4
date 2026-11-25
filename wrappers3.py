import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
def rd(va,n): return d[0x400+(va-0x401000):0x400+(va-0x401000)+n]
for lo in (0x623500,0x623522,0x6234e3,0x623500,0x6233be,0x6233e9,0x623437,0x623474,0x623495,0x6234ab):
    print("=====",hex(lo))
    for ins in Cs(CS_ARCH_X86,CS_MODE_32).disasm(rd(lo,44),lo):
        print("  ",hex(ins.address),ins.mnemonic,ins.op_str)
        if ins.mnemonic=="ret": break
