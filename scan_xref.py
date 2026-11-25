import struct
d=open("orig/Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
secs=[]
for i in range(n):
    off=so+40*i; name=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((name,va,vsz,ro,rsz))
text=[x for x in secs if x[0]==".text"][0]
name,va,vsz,ro,rsz=text
tb=d[ro:ro+rsz]
for target in (0x6870b0,0x6870c0,0x687150,0x687140,0x6fc028,0x6873ac):
    pat=struct.pack("<I",target); hits=[]; st=0
    while True:
        i=tb.find(pat,st)
        if i<0: break
        hits.append(0x400000+va+i); st=i+1
    print(hex(target),[hex(h) for h in hits][:12])
