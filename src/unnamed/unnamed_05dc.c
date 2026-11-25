#include "protos.h"

void f_005dc4a2(void) /* GetIScheduler */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc4a2);
    /* 005dc4a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc4a3: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc4a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc4a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc4a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc4ac: mov eax, dword ptr [eax + 0x130] */ r_eax = R32((u32)(r_eax+0x130u));
    /* 005dc4b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc4b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc4b5: ret  */ FN_RET(0x005dc4a2); r_esp += 4; return;
}

