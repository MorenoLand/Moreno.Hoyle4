import struct
d=open("orig/Casino4.exe","rb").read()
def rd(va,n): return d[0x400+(va-0x401000):0x400+(va-0x401000)+n]
for i in range(24):
    v=struct.unpack_from("<I",rd(0x63bc0c+4*i,4))[0]
    print(i,hex(0x63bc0c+4*i),hex(v))
