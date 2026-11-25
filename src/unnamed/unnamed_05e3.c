#include "protos.h"

void f_005e3fb0(void) /* CDC */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3fb0);
    /* 005e3fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3fb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3fba: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5e3fbfu); f_005e9d30();
    /* 005e3fbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3fc2: mov dword ptr [eax], 0x63bcec */ W32((u32)(r_eax), 0x63bcecu);
    /* 005e3fc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3fcb: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 005e3fd2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3fd5: mov dword ptr [edx + 0x74], 0 */ W32((u32)(r_edx+0x74u), 0x0u);
    /* 005e3fdc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3fdf: mov dword ptr [eax + 0x6c], 4 */ W32((u32)(r_eax+0x6cu), 0x4u);
    /* 005e3fe6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3fe9: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3feb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3fec: ret  */ FN_RET(0x005e3fb0); r_esp += 4; return;
}

