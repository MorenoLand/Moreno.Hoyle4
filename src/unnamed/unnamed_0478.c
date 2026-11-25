#include "protos.h"

void f_004780f0(void) /* CDragListBox */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004780f0);
    /* 004780f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004780f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004780f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004780f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004780f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004780fa: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x4780ffu); f_005dfbf0();
    /* 004780ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00478102: mov dword ptr [eax], 0x6364a4 */ W32((u32)(r_eax), 0x6364a4u);
    /* 00478108: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047810b: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00478112: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00478115: mov esp, ebp */ r_esp = r_ebp;
    /* 00478117: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00478118: ret  */ FN_RET(0x004780f0); r_esp += 4; return;
}

