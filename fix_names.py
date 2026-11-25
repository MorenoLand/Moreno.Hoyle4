p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
s=s.replace('"C:\\\\game\\\\Hoyle Casino Classic.exe"','"C:\\\\game\\\\Casino4.exe"')
s=s.replace('"hoyle.exe"','"Casino4.exe"')
s=s.replace('"C:/game/Hoyle Casino Classic.exe"','"C:/game/Casino4.exe"')
open(p,"w",encoding="utf-8",newline="").write(s)
print("done", 'Casino4.exe' in s)
