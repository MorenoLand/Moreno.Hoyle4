#include "protos.h"

void f_0062c685(void) /* __fload_withFB */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c685);
    /* 0062c685: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0062c688: and eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062c68d: cmp eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c692: je 0x62c697 */ if (fZ) goto L_0062c697;
L_0062c694:; BB(0x0062c694);
    /* 0062c694: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0062c696: ret  */ FN_RET(0x0062c685); r_esp += 4; return;
L_0062c697:; BB(0x0062c697);
    /* 0062c697: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0062c69a: sub esp, 0xa */ {  u32 a = r_esp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062c69d: or eax, 0x7fff0000 */ {  u32 a = r_eax; u32 b = 0x7fff0000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062c6a2: mov dword ptr [esp + 6], eax */ W32((u32)(r_esp+0x6u), r_eax);
    /* 0062c6a6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0062c6a9: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0062c6ab: shld eax, ecx, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_ecx; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 0062c6af: shl ecx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062c6b2: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0062c6b6: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0062c6b9: fld xword ptr [esp] */ FPUSH(R_F80((u32)(r_esp)));
    /* 0062c6bc: add esp, 0xa */ {  u32 a = r_esp; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c6bf: test eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu;   }
    /* 0062c6c4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0062c6c7: ret  */ FN_RET(0x0062c685); r_esp += 4; return;
}

