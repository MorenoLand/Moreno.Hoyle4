import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
base=0x400; va0=0x401000
start=0x400; end=0x231800
for target in (0x5ff06b,0x5ff6d1,0x5ff9fe,0x5ffb01,0x6004d0,0x5fedff):
    hits=[]
    i=start
    while i<end-5:
        if d[i]==0xE8:
            rel=struct.unpack_from("<i",d,i+1)[0]
            if (va0+(i-base))+5+rel==target: hits.append(va0+(i-base))
        i+=1
    print(hex(target),len(hits),[hex(x) for x in hits[:10]])
