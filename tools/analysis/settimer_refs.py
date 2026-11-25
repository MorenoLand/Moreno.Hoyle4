import pefile, struct
from capstone import *
pe=pefile.PE("orig/Casino4.exe")
slot=None
for e in pe.DIRECTORY_ENTRY_IMPORT:
    if e.dll.lower()==b"user32.dll":
        for i in e.imports:
            if i.name and i.name.decode().lower()=="settimer":
                slot=i.address
print("SetTimer IAT",hex(slot))
d=open("orig/Casino4.exe","rb").read()
base=0x400; va0=0x401000
for i in range(0x400,0x231800-6):
    if d[i]==0xff and d[i+1]==0x15 and struct.unpack_from("<I",d,i+2)[0]==slot:
        print("call at",hex(va0+(i-base)))
