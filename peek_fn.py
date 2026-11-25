from capstone import *
d=open(r"orig/Casino4.exe","rb").read()
# .text VA 0x401000 file 0x400
def rd(va,n=48):
    o=0x400+(va-0x401000); return d[o:o+n]
md=Cs(CS_ARCH_X86,CS_MODE_32)
for va in (0x624a90,0x624ab0,0x624a00):
    print(hex(va), rd(va,24).hex())
    for i in md.disasm(rd(va,40),va):
        print(" ",hex(i.address),i.mnemonic,i.op_str)
        if i.address>va+30: break
