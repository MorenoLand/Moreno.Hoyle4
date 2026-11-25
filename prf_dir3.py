import struct,collections
d=open(r"D:\Games\CASINO4\Casino4.prf","rb").read()
start=0x5d26804
n=0x5978
print("record at start",struct.unpack_from("<4sIII",d,start))
print("end",hex(start+n*16))
tags=collections.Counter(); waves=[]
for i in range(n):
    tag,idv,off,sz=struct.unpack_from("<4sIII",d,start+i*16)
    tags[tag]+=1
    if tag==b"WAVE" and sz>100000: waves.append((idv,off,sz))
print("tags",tags)
print("large waves",len(waves))
for w in sorted(waves,key=lambda x:-x[2])[:30]: print(hex(w[0]),hex(w[1]),w[2])
