import pefile
pe=pefile.PE("orig/Casino4.exe")
for t in pe.DIRECTORY_ENTRY_RESOURCE.entries:
    if t.struct.Id in (2,3,10,14):
        for e in t.directory.entries:
            for l in e.directory.entries:
                d=l.data.struct
                print("type",t.struct.Id,"id",e.id,"size",d.Size)
