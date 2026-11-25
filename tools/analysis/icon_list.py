import pefile
pe=pefile.PE("orig/Casino4.exe")
print("has resources", hasattr(pe,"DIRECTORY_ENTRY_RESOURCE"))
for t in pe.DIRECTORY_ENTRY_RESOURCE.entries:
    if t.struct.Id in (3,14):
        print("type",t.struct.Id,t.name)
        for e in t.directory.entries:
            for l in e.directory.entries:
                d=l.data.struct
                print("  id",e.id,"lang",l.id,"size",d.Size,"rva",hex(d.OffsetToData))
