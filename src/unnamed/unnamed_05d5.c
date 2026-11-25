#include "protos.h"

void f_005d5a34(void) /* GetBufferSetLength */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5a34);
    /* 005d5a34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a35: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5a37: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5a3a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d5a3d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5a40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a41: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5a44: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x5d5a49u); f_005d50ed();
    /* 005d5a49: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d5a4c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5a4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5a53: call 0x5d58c5 */ r_esp -= 4; W32(r_esp, 0x5d5a58u); f_005d58c5();
    /* 005d5a58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5a5b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5a5e: ret 4 */ FN_RET(0x005d5a34); r_esp += 8; return;
}

