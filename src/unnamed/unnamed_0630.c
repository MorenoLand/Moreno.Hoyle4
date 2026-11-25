#include "protos.h"

void f_00630410(void) /* __allshl */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630410);
    /* 00630410: cmp cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 00630413: jae 0x63042a */ if (!fC) goto L_0063042a;
L_00630415:; BB(0x00630415);
    /* 00630415: cmp cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00630418: jae 0x630420 */ if (!fC) goto L_00630420;
L_0063041a:; BB(0x0063041a);
    /* 0063041a: shld edx, eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; fZ = (r == 0); fS = r >> 31; fP = !__builtin_parity(r & 0xffu); fO = ((r ^ a) >> 31) & 1; } }
    /* 0063041d: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0063041f: ret  */ FN_RET(0x00630410); r_esp += 4; return;
L_00630420:; BB(0x00630420);
    /* 00630420: mov edx, eax */ r_edx = r_eax;
    /* 00630422: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630424: and cl, 0x1f */ {  u32 a = (u8)r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00630427: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00630429: ret  */ FN_RET(0x00630410); r_esp += 4; return;
L_0063042a:; BB(0x0063042a);
    /* 0063042a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063042c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063042e: ret  */ FN_RET(0x00630410); r_esp += 4; return;
}

void f_00630520(void) /* sub_00630520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630520);
    /* 00630520: push 0x6304c0 */ { u32 v = 0x6304c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00630525: call dword ptr [0x633148] */ { u32 t = R32((u32)(0x633148u)); r_esp -= 4; W32(r_esp, 0x63052bu); call_ind(t); }
    /* 0063052b: mov dword ptr [0x711864], eax */ W32((u32)(0x711864u), r_eax);
    /* 00630530: ret  */ FN_RET(0x00630520); r_esp += 4; return;
}

void f_00630540(void) /* sub_00630540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630540);
    /* 00630540: mov eax, dword ptr [0x711864] */ r_eax = R32((u32)(0x711864u));
    /* 00630545: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630546: call dword ptr [0x633148] */ { u32 t = R32((u32)(0x633148u)); r_esp -= 4; W32(r_esp, 0x63054cu); call_ind(t); }
    /* 0063054c: ret  */ FN_RET(0x00630540); r_esp += 4; return;
}

