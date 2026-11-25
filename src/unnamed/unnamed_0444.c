#include "protos.h"

void f_00444bc5(void) /* moneypunct<> */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444bc5);
    /* 00444bc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444bc6: mov ebp, esp */ r_ebp = r_esp;
    /* 00444bc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444bc9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444bcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444bce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444bd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444bd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444bd5: call 0x5e0b50 */ r_esp -= 4; W32(r_esp, 0x444bdau); f_005e0b50();
    /* 00444bda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444bdd: mov dword ptr [ecx], 0x634c64 */ W32((u32)(r_ecx), 0x634c64u);
    /* 00444be3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444be6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444be8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444be9: ret 4 */ FN_RET(0x00444bc5); r_esp += 8; return;
}

