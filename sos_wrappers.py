import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
def rd(va,ln): return d[0x400+(va-0x401000):0x400+(va-0x401000)+ln]
tb=d[0x400:0x400+0x231800]
for name,slot in (("AddBuffer",0x7111f0),("PrepareBuffer",0x7111d4),("Start",0x7111fc),("GetSampleHandle",0x711204),("Stop",0x71120c),("Pause",0x711214)):
    pat=b"\xff\x15"+struct.pack("<I",slot); i=tb.find(pat)
    print(name, hex(slot), "wrapper", hex(0x401000+i) if i>=0 else None)
    if i>=0:
        va=0x401000+i-16
        for ins in Cs(CS_ARCH_X86,CS_MODE_32).disasm(rd(va,40),va):
            print("   ",hex(ins.address),ins.mnemonic,ins.op_str)
            if ins.address>=0x401000+i+6: break
