#include "protos.h"

void f_0062c6eb(void) /* __math_exit */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c6eb);
    /* 0062c6eb: mov ax, word ptr [esp] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esp))) & 0xffffu);
    /* 0062c6ef: cmp ax, 0x27f */ {  u32 a = (u16)r_eax; u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062c6f3: je 0x62c713 */ if (fZ) goto L_0062c713;
L_0062c6f5:; BB(0x0062c6f5);
    /* 0062c6f5: and ax, 0x20 */ {  u32 a = (u16)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); }
    /* 0062c6f9: je 0x62c710 */ if (fZ) goto L_0062c710;
L_0062c6fb:; BB(0x0062c6fb);
    /* 0062c6fb: wait  */ ;
    /* 0062c6fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c6fe: and ax, 0x20 */ {  u32 a = (u16)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); }
    /* 0062c702: je 0x62c710 */ if (fZ) goto L_0062c710;
L_0062c704:; BB(0x0062c704);
    /* 0062c704: mov eax, 8 */ r_eax = 0x8u;
    /* 0062c709: call 0x62c7e7 */ r_esp -= 4; W32(r_esp, 0x62c70eu); f_0062c7e7();
    /* 0062c70e: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062c70f: ret  */ FN_RET(0x0062c6eb); r_esp += 4; return;
L_0062c710:; BB(0x0062c710);
    /* 0062c710: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
L_0062c713:; BB(0x0062c713);
    /* 0062c713: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062c714: ret  */ FN_RET(0x0062c6eb); r_esp += 4; return;
}

