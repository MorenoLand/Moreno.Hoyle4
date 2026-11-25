#include "protos.h"

void f_0047fcaf(void) /* ReleaseAccessors */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047fcaf);
    /* 0047fcaf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047fcb0: mov ebp, esp */ r_ebp = r_esp;
    /* 0047fcb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047fcb3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047fcb6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047fcb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047fcba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fcbd: call 0x5e761e */ r_esp -= 4; W32(r_esp, 0x47fcc2u); f_005e761e();
    /* 0047fcc2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047fcc5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047fcc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fcc9: call 0x47fa34 */ r_esp -= 4; W32(r_esp, 0x47fcceu); f_0047fa34();
    /* 0047fcce: mov esp, ebp */ r_esp = r_ebp;
    /* 0047fcd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047fcd1: ret 4 */ FN_RET(0x0047fcaf); r_esp += 8; return;
}

