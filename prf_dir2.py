import struct
d=open(r"D:\Games\CASINO4\Casino4.prf","rb").read()
pat=b"WAVE"+struct.pack("<I",0xdaf)
i=0; hits=[]
while True:
    i=d.find(pat,i)
    if i<0: break
    hits.append(i); i+=1
print("WAVE id 00000daf hits",[hex(x) for x in hits])
pat2=b"WAVE"+struct.pack("<I",0x18a89)
i=0; hits2=[]
while True:
    i=d.find(pat2,i)
    if i<0: break
    hits2.append(i); i+=1
print("WAVE id 00018a89 hits",[hex(x) for x in hits2])
for o in hits2[:3]:
    tag,idv,off,sz=struct.unpack_from("<4sIII",d,o)
    print(hex(o),tag,hex(idv),hex(off),sz)
