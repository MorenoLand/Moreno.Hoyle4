d=open("orig/Casino4.exe","rb").read()
import re
for pat in (b"Splash",b"splash",b"SPLASH",b"logo",b"Logo",b"OneMoment",b"moment"):
    i=0; hits=[]
    while True:
        i=d.find(pat,i)
        if i<0: break
        hits.append(i); i+=1
    print(pat,len(hits),[hex(h+0x400c00) for h in hits[:6]])
    for o in hits[:3]: print("   ",d[max(0,o-40):o+50].replace(b"\0",b"."))
