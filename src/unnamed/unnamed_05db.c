#include "protos.h"

void f_005db1d0(void) /* GetScheduler */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db1d0);
    /* 005db1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005db1d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db1d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db1d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db1da: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005db1dd: call 0x5dc4a2 */ r_esp -= 4; W32(r_esp, 0x5db1e2u); f_005dc4a2();
    /* 005db1e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005db1e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db1e5: ret  */ FN_RET(0x005db1d0); r_esp += 4; return;
}

