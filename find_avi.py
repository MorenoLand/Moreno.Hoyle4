import os
d=open(r"D:\Games\CASINO4\Casino4.prf","rb").read()
print("prf size",len(d),"RIFF",d.count(b"RIFF"),"AVI ",d.count(b"AVI "))
i=d.find(b"RIFF")
for k in range(5):
    j=d.find(b"RIFF", 0 if k==0 else j+4)
    if j<0: break
    print("RIFF at",hex(j),d[j:j+16])
e=open("orig/Casino4.exe","rb").read()
print("exe RIFF",e.count(b"RIFF"),"AVI ",e.count(b"AVI "),"casino4.avi",e.count(b"casino4.avi"))
