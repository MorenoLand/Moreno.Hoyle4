from capstone import *
d=open("orig/Casino4.exe","rb").read()
o=0x400+(0x624581-0x401000)
for i in Cs(CS_ARCH_X86,CS_MODE_32).disasm(d[o:o+80],0x624581):
    print(hex(i.address),i.mnemonic,i.op_str)
    if i.mnemonic in ("ret","jmp") and i.address>0x624581: break
