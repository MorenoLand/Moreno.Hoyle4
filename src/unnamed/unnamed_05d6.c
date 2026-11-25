#include "protos.h"

void f_005d65b7(void) /* GetIScheduler */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d65b7);
    /* 005d65b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d65b8: mov ebp, esp */ r_ebp = r_esp;
    /* 005d65ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d65bb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d65be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d65c1: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 005d65c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005d65c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d65ca: ret  */ FN_RET(0x005d65b7); r_esp += 4; return;
}

