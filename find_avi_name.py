d=open("orig/Casino4.exe","rb").read()
i=d.find(b"casino4.avi")
print(hex(i),hex(i+0x400c00),d[i-64:i+64])
