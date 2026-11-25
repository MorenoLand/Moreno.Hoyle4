p="src/misc/FUN_48.c"
s=open(p,encoding="utf-8").read()
marks=[
("    /* 006100f8: mov edx, dword ptr [ebp - 0x40] */","    /* B */ { static int q; if(!q++) fprintf(stderr,\"ssdbg B\\n\"); }\n    /* 006100f8: mov edx, dword ptr [ebp - 0x40] */"),
("    /* 0061012b: mov ecx, dword ptr [ebp - 0x40] */","    /* C */ { static int q; if(!q++) fprintf(stderr,\"ssdbg C\\n\"); }\n    /* 0061012b: mov ecx, dword ptr [ebp - 0x40] */"),
("    /* 0061015e: mov eax, dword ptr [ebp - 0x40] */","    /* D */ { static int q; if(!q++) fprintf(stderr,\"ssdbg D\\n\"); }\n    /* 0061015e: mov eax, dword ptr [ebp - 0x40] */"),
("    /* 00610191: mov edx, dword ptr [ebp - 0x54] */","    /* E */ { static int q; if(!q++) fprintf(stderr,\"ssdbg E\\n\"); }\n    /* 00610191: mov edx, dword ptr [ebp - 0x54] */"),
]
for a,b in marks:
    assert a in s, a
    s=s.replace(a,b,1)
open(p,"w",encoding="utf-8",newline="").write(s)
print("marks added")
