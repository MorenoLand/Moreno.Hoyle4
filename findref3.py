import struct
d=open("orig/Casino4.exe","rb").read()
def va(o): return o + 0x400c00
for t in (0x5e8296,0x5ffb01,0x5e8220):
    b=struct.pack("<I",t); hits=[]; i=0
    while True:
        i=d.find(b,i)
        if i<0: break
        hits.append(hex(va(i))); i+=1
    print(hex(t),hits[:16])
