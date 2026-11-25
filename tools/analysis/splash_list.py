import struct
d=open("orig/Casino4.exe","rb").read()
def rd(va,n): return d[0x400+(va-0x401000):0x400+(va-0x401000)+n]
cnt=struct.unpack_from("<I",rd(0x698684,4))[0]
print("count",cnt)
for i in range(min(cnt,8)):
    v=struct.unpack_from("<I",rd(0x698678+4*i,4))[0]
    print(i,hex(v))
