import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
def rd(va,n): return d[0x400+(va-0x401000):0x400+(va-0x401000)+n]
for lo in (0x623547,0x623557,0x62358b,0x6235d7,0x6235fd,0x62360d,0x623620):
    print("=====",hex(lo))
    for ins in Cs(CS_ARCH_X86,CS_MODE_32).disasm(rd(lo,40),lo):
        print("  ",hex(ins.address),ins.mnemonic,ins.op_str)
        if ins.mnemonic=="ret": break
