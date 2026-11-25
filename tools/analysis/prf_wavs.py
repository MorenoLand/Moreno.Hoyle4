import struct
d=open(r"D:\Games\CASINO4\Casino4.prf","rb").read()
wavs=[]; i=0
while True:
    i=d.find(b"RIFF",i)
    if i<0: break
    if i+12<=len(d):
        sz,typ=struct.unpack_from("<I",d,i+4)[0],d[i+8:i+12]
        if typ==b"WAVE" and 12<=sz<0x800000 and i+8+sz<=len(d):
            p=i+12; fmt=None; data=None
            while p+8<=i+8+sz:
                cid=d[p:p+4]; csz=struct.unpack_from("<I",d,p+4)[0]
                if cid==b"fmt " and csz>=16 and p+8+csz<=len(d):
                    tag,ch,rate,avg,align,bits=struct.unpack_from("<HHIIHH",d,p+8)
                    fmt=(tag,ch,rate,bits,csz)
                if cid==b"data": data=csz
                p+=8+csz+(csz&1)
            if fmt and data is not None: wavs.append((i,sz,fmt,data))
    i+=4
print("valid wavs",len(wavs))
from collections import Counter
print(Counter((w[2][0],w[2][1],w[2][3]) for w in wavs))
sizes=sorted(w[3] for w in wavs)
print("data sizes min/med/max",sizes[0],sizes[len(sizes)//2],sizes[-1])
print("total bytes",sum(sizes))
big=[w for w in wavs if w[3]>30000]
print("over 30k",len(big))
for w in big[:12]: print(hex(w[0]),w[1],w[2],w[3])
