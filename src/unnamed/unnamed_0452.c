#include "protos.h"

void f_004521aa(void) /* CMetaFileDC */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004521aa);
    /* 004521aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004521ab: mov ebp, esp */ r_ebp = r_esp;
    /* 004521ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004521ae: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004521b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004521b4: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x4521b9u); f_005e3fb0();
    /* 004521b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004521bc: mov dword ptr [eax], 0x6352a4 */ W32((u32)(r_eax), 0x6352a4u);
    /* 004521c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004521c5: mov esp, ebp */ r_esp = r_ebp;
    /* 004521c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004521c8: ret  */ FN_RET(0x004521aa); r_esp += 4; return;
}

