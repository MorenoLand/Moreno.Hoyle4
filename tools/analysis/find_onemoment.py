d=open("orig/Casino4.exe","rb").read()
for pat in (b"One Moment Please", b"One moment please"):
    i=0
    while True:
        i=d.find(pat,i)
        if i<0: break
        print(pat,hex(i),hex(i+0x400c00)); i+=1
