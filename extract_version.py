import pefile
for p in ("orig/Casino4.exe", r"D:\Games\CASINO4\HoyleCasino4.exe"):
    print("==",p)
    pe=pefile.PE(p)
    for t in pe.DIRECTORY_ENTRY_RESOURCE.entries:
        if t.struct.Id==16:
            for e in t.directory.entries:
                for l in e.directory.entries:
                    d=l.data.struct
                    print(" RT_VERSION id",e.id,"size",d.Size,"rva",hex(d.OffsetToData))
                    open("assets/version_%s.bin" % ("game" if "Casino4" in p else "host"),"wb").write(pe.get_data(d.OffsetToData,d.Size))
    if hasattr(pe,"VS_VERSIONINFO") and pe.VS_VERSIONINFO:
        for fi in pe.FileInfo or []:
            for st in fi:
                if hasattr(st,"StringTable"):
                    for s in st.StringTable:
                        print(" ",s.Key.decode(errors="replace"),"=",s.Value.decode(errors="replace"))
