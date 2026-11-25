#include "protos.h"

void f_0050f430(void) /* moneypunct<> */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f430);
    /* 0050f430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f431: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f437: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f439: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050f43c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f43d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050f440: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f441: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f444: call 0x41e7f0 */ r_esp -= 4; W32(r_esp, 0x50f449u); f_0041e7f0();
    /* 0050f449: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f44c: mov dword ptr [edx], 0x63883c */ W32((u32)(r_edx), 0x63883cu);
    /* 0050f452: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f455: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f457: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f458: ret 0x14 */ FN_RET(0x0050f430); r_esp += 24; return;
}

