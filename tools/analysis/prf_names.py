import struct,re
d=open(r"D:\Games\CASINO4\Casino4.prf","rb").read()
print("head:",d[:64])
# find all RIFF chunks and WAVE fmt sizes
i=0; wavs=[]
while True:
    i=d.find(b"RIFF",i)
    if i<0: break
    sz=struct.unpack_from("<I",d,i+4)[0]
    typ=d[i+8:i+12]
    wavs.append((i,sz,typ))
    i+=4
print("chunks",len(wavs))
big=[w for w in wavs if w[1]>20000]
print("big",len(big))
for i,sz,typ in big[:10]:
    print(hex(i),sz,typ,d[max(0,i-48):i].replace(b"\0",b"."))
# ascii strings near big chunks
for i,sz,typ in big[:5]:
    print("---",hex(i))
    print(d[max(0,i-80):i+32].replace(b"\0",b"."))
