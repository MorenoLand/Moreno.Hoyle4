#include "protos.h"

void f_005eda58(void) /* CStringT<> */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eda58);
    /* 005eda58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eda59: mov ebp, esp */ r_ebp = r_esp;
    /* 005eda5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eda5c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eda5f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005eda62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eda63: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005eda66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eda67: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005eda6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eda6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eda6e: call 0x5ed910 */ r_esp -= 4; W32(r_esp, 0x5eda73u); f_005ed910();
    /* 005eda73: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005eda76: mov esp, ebp */ r_esp = r_ebp;
    /* 005eda78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eda79: ret 0xc */ FN_RET(0x005eda58); r_esp += 16; return;
}

