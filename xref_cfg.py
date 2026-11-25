import struct
d=open("orig/Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
secs=[]
for i in range(n):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,0x400000+va,vsz,ro,rsz))
text=[s for s in secs if s[0]==".text"][0]; tb=d[text[3]:text[3]+text[4]]
for target in (0x711140,0x711138,0x711134,0x71113c,0x71115c):
    pat=struct.pack("<I",target); hits=[]; st=0
    while True:
        i=tb.find(pat,st)
        if i<0: break
        hits.append(text[1]+i); st=i+1
    print(hex(target),[hex(h) for h in hits][:20])
