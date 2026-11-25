p="src/misc/FUN_48.c"
s=open(p,encoding="utf-8").read()
old='u32 tg = vt ? R32(vt + 4) : 0; fprintf(stderr, "ssdbg F obj=%08x f8=%08x f10=%08x f14=%08x fc=%08x vt=%08x tgt4=%08x\\n", o, o?R32(o+8):0, p10, o?R32(o+0x14):0, o?R32(o+0xc):0, vt, tg); }'
new='u32 tg = vt ? R32(vt + 4) : 0; u32 p8=o?R32(o+8):0, p14=o?R32(o+0x14):0, pc=o?R32(o+0xc):0; u32 v8=p8?R32(p8):0, v14=p14?R32(p14):0, vc=pc?R32(pc):0; fprintf(stderr, "ssdbg F obj=%08x f8=%08x/%08x f10=%08x/%08x/%08x f14=%08x/%08x fc=%08x/%08x\\n", o, p8, v8, p10, vt, tg, p14, v14, pc, vc); }'
assert old in s
s=s.replace(old,new)
marks=[
("    /* 006101b6: mov eax, dword ptr [ebp - 0x40] */","    { static int q; if(!q++) fprintf(stderr,\"ssdbg G\\n\"); }\n    /* 006101b6: mov eax, dword ptr [ebp - 0x40] */"),
("    /* 006101e0: mov dword ptr [ebp - 0x58], eax */","    { static int q; if(!q++) fprintf(stderr,\"ssdbg H\\n\"); }\n    /* 006101e0: mov dword ptr [ebp - 0x58], eax */"),
("    /* 00610217: mov dword ptr [ebp - 0x5c], eax */","    { static int q; if(!q++) fprintf(stderr,\"ssdbg I\\n\"); }\n    /* 00610217: mov dword ptr [ebp - 0x5c], eax */"),
("    /* 00610244: mov dword ptr [ebp - 0x60], eax */","    { static int q; if(!q++) fprintf(stderr,\"ssdbg J\\n\"); }\n    /* 00610244: mov dword ptr [ebp - 0x60], eax */"),
("    /* 00610271: mov dword ptr [ebp - 0x64], eax */","    { static int q; if(!q++) fprintf(stderr,\"ssdbg K\\n\"); }\n    /* 00610271: mov dword ptr [ebp - 0x64], eax */"),
]
for a,b in marks:
    assert a in s, a
    s=s.replace(a,b,1)
open(p,"w",encoding="utf-8",newline="").write(s)
print("marks G-K added")
