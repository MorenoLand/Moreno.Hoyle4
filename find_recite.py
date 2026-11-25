d=open("orig/Casino4.exe","rb").read()
for pat in (b"recite",b"Recite",b"RECITE",b"SYNC",b"WAVE"):
    i=0; hits=[]
    while True:
        i=d.find(pat,i)
        if i<0: break
        hits.append(i); i+=1
    print(pat,len(hits),[hex(h) for h in hits[:6]])
    for o in hits[:3]:
        print("   ",d[max(0,o-50):o+50].replace(b"\0",b"."))
