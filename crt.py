from capstone import *
d=open("orig/Casino4.exe","rb").read()
def rd(va,n=64):
    o=0x400+(va-0x401000); return d[o:o+n]
for va in (0x624510,0x624520,0x6243c0,0x6241d0):
    print("==",hex(va))
    for i in Cs(CS_ARCH_X86,CS_MODE_32).disasm(rd(va,48),va):
        print(" ",hex(i.address),i.mnemonic,i.op_str)
        if i.mnemonic in ("ret","jmp") and i.address>va: break
