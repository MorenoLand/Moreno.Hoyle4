import struct
d=open("orig/Casino4.exe","rb").read()
target=struct.pack("<I",0x5ff06b)
i=0; hits=[]
while True:
    i=d.find(target,i)
    if i<0: break
    hits.append(i); i+=1
print("raw hits",len(hits))
base=0x400
for o in hits:
    print(hex(0x400000 + (o-base) if o>=base else o), hex(o))
target2=struct.pack("<I",0x5ffb01)
print("fb01 hits",[hex(x) for x in range(len(d)) if d.startswith(target2,x)][:20])
