import pefile, struct
pe=pefile.PE("orig/Casino4.exe")
res=pe.DIRECTORY_ENTRY_RESOURCE
def entry(tid):
    for t in res.entries:
        if t.struct.Id==tid:
            for e in t.directory.entries:
                for l in e.directory.entries:
                    return e.id, l.data.struct
    return None, None
gid,grp=entry(14)
data=pe.get_data(grp.OffsetToData,grp.Size)
reserved,typ,count=struct.unpack_from("<HHH",data,0)
print("group",gid,"type",typ,"count",count)
items=[]
for i in range(count):
    w,h,cc,r,planes,bits,size,idx=struct.unpack_from("<BBBBHHIH",data,6+14*i)
    _,ic=entry(3)  # placeholder
    # find RT_ICON by id
    obj=None
    for t in res.entries:
        if t.struct.Id==3:
            for e in t.directory.entries:
                if e.id==idx:
                    for l in e.directory.entries: obj=l.data.struct
    blob=pe.get_data(obj.OffsetToData,obj.Size)
    items.append((w or 256,h or 256,cc,planes,bits,blob))
    print(" entry",idx,w,h,"bpp",bits,"bytes",len(blob))
items.sort(key=lambda x:(x[0]*x[1]), reverse=True)
out=bytearray(struct.pack("<HHH",0,1,len(items)))
off=6+16*len(items)
for w,h,cc,planes,bits,blob in items:
    out+=struct.pack("<BBBBHHII",w&255,h&255,cc,0,planes,bits,len(blob),off)
    off+=len(blob)
for *_,blob in items: out+=blob
open("web/favicon.ico","wb").write(out)
print("wrote",len(out),"bytes, sizes",[(i[0],i[1]) for i in items])
