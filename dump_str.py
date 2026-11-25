import struct
d=open("orig/Casino4.exe","rb").read()
def rd(va,n): return d[0x400+(va-0x401000):0x400+(va-0x401000)+n]
for a in (0x649618,0x649680,0x6496d0,0x649730):
    s=rd(a,64).split(b"\0")[0]
    print(hex(a),s)
print("around 0x63bc00 strings:")
o=0x400+(0x63bc00-0x401000)
print(d[o:o+0x180])
