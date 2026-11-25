import struct
d=open("orig/Casino4.exe","rb").read()
def s(va):
    o=0x400+(va-0x401000); e=d.find(b"\0",o); return d[o:e]
for va in (0x6ed200,0x6ed20c,0x6ed270,0x687120,0x6f6cb8):
    print(hex(va),s(va))
