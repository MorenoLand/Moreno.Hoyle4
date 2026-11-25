#include "protos.h"

void f_00453549(void) /* OnMoving */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453549);
    /* 00453549: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045354a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045354c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045354d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453550: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00453553: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453554: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453557: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453558: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045355b: call 0x5e4f55 */ r_esp -= 4; W32(r_esp, 0x453560u); f_005e4f55();
    /* 00453560: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453563: call 0x4536f8 */ r_esp -= 4; W32(r_esp, 0x453568u); f_004536f8();
    /* 00453568: mov esp, ebp */ r_esp = r_ebp;
    /* 0045356a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045356b: ret 8 */ FN_RET(0x00453549); r_esp += 12; return;
}

