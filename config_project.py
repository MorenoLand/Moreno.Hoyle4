import re
p="project.toml"
s=open(p,encoding="utf-8").read()
repl={
 'name        = "Target"':'name        = "Hoyle Casino 4"',
 'exe         = "target.exe"':'exe         = "orig/Casino4.exe"',
 'host_exe    = "TargetHost.exe"':'host_exe    = "HoyleCasino4.exe"',
 'host_name   = "Target"':'host_name   = "Hoyle Casino 4"',
 'entry       = 0x401000':'entry       = 0x626fb0',
 'code_lo     = 0x401000':'code_lo     = 0x401000',
 'code_hi     = 0x680000':'code_hi     = 0x633000',
 'image_end   = 0xA40000':'image_end   = 0x715000',
 'guest_size  = 0x1000000':'guest_size  = 0x320000',
 'cdecl_modules = ["msvcr80", "msvcp80", "openal32", "freetype6"]':'cdecl_modules = ["msvcrt"]',
 'emcc           = ""':'emcc           = "G:/Development/C/emsdk/upstream/emscripten/emcc.exe"',
 'data_dir       = ""':'data_dir       = "D:/Games/CASINO4"',
}
for a,b in repl.items():
    if a not in s: print("MISS",a)
    s=s.replace(a,b)
open(p,"w",encoding="utf-8").write(s)
print("ok")
