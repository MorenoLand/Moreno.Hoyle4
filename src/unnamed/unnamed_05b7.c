#include "protos.h"

void f_005b7b00(void) /* CMFCToolBarEditCtrl */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7b00);
    /* 005b7b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b01: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7b07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7b0a: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5b7b0fu); f_005d5d20();
    /* 005b7b0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7b12: mov dword ptr [eax], 0x639bcc */ W32((u32)(r_eax), 0x639bccu);
    /* 005b7b18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7b1b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7b1e: mov dword ptr [ecx + 0xd4], edx */ W32((u32)(r_ecx+0xd4u), r_edx);
    /* 005b7b24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7b27: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 005b7b31: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7b34: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7b36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7b37: ret 4 */ FN_RET(0x005b7b00); r_esp += 8; return;
}

