#include "protos.h"

void f_0062f7f0(void) /* __aulldiv */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f7f0);
    /* 0062f7f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7f2: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0062f7f6: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0062f7f8: jne 0x62f812 */ if (!fZ) goto L_0062f812;
L_0062f7fa:; BB(0x0062f7fa);
    /* 0062f7fa: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0062f7fe: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062f802: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062f804: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x0062f804, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0062f804, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0062f806: mov ebx, eax */ r_ebx = r_eax;
    /* 0062f808: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0062f80c: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x0062f80c, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0062f80c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0062f80e: mov edx, ebx */ r_edx = r_ebx;
    /* 0062f810: jmp 0x62f853 */ goto L_0062f853;
L_0062f812:; BB(0x0062f812);
    /* 0062f812: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f814: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062f818: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0062f81c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
L_0062f820:; BB(0x0062f820);
    /* 0062f820: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0062f822: rcr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_ebx = a; }
    /* 0062f824: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0062f826: rcr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_eax = a; }
    /* 0062f828: or ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0062f82a: jne 0x62f820 */ if (!fZ) goto L_0062f820;
L_0062f82c:; BB(0x0062f82c);
    /* 0062f82c: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x0062f82c, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0062f82c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0062f82e: mov esi, eax */ r_esi = r_eax;
    /* 0062f830: mul dword ptr [esp + 0x18] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x18u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0062f834: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f836: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062f83a: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0062f83c: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 0062f83e: jb 0x62f84e */ if (fC) goto L_0062f84e;
L_0062f840:; BB(0x0062f840);
    /* 0062f840: cmp edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062f844: ja 0x62f84e */ if ((!fC&&!fZ)) goto L_0062f84e;
L_0062f846:; BB(0x0062f846);
    /* 0062f846: jb 0x62f84f */ if (fC) goto L_0062f84f;
L_0062f848:; BB(0x0062f848);
    /* 0062f848: cmp eax, dword ptr [esp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062f84c: jbe 0x62f84f */ if ((fC||fZ)) goto L_0062f84f;
L_0062f84e:; BB(0x0062f84e);
    /* 0062f84e: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_0062f84f:; BB(0x0062f84f);
    /* 0062f84f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062f851: mov eax, esi */ r_eax = r_esi;
L_0062f853:; BB(0x0062f853);
    /* 0062f853: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f854: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f855: ret 0x10 */ FN_RET(0x0062f7f0); r_esp += 20; return;
}

void f_0062f860(void) /* __aullrem */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f860);
    /* 0062f860: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f861: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062f865: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0062f867: jne 0x62f881 */ if (!fZ) goto L_0062f881;
L_0062f869:; BB(0x0062f869);
    /* 0062f869: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0062f86d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0062f871: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062f873: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x0062f873, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0062f873, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0062f875: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062f879: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x0062f879, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0062f879, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0062f87b: mov eax, edx */ r_eax = r_edx;
    /* 0062f87d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062f87f: jmp 0x62f8d1 */ goto L_0062f8d1;
L_0062f881:; BB(0x0062f881);
    /* 0062f881: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f883: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0062f887: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0062f88b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
L_0062f88f:; BB(0x0062f88f);
    /* 0062f88f: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0062f891: rcr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_ebx = a; }
    /* 0062f893: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0062f895: rcr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_eax = a; }
    /* 0062f897: or ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0062f899: jne 0x62f88f */ if (!fZ) goto L_0062f88f;
L_0062f89b:; BB(0x0062f89b);
    /* 0062f89b: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x0062f89b, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0062f89b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0062f89d: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f89f: mul dword ptr [esp + 0x14] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x14u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0062f8a3: xchg ecx, eax */ { u32 x = r_ecx; u32 y = r_eax; r_ecx = y; r_eax = x; }
    /* 0062f8a4: mul dword ptr [esp + 0x10] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x10u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0062f8a8: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 0062f8aa: jb 0x62f8ba */ if (fC) goto L_0062f8ba;
L_0062f8ac:; BB(0x0062f8ac);
    /* 0062f8ac: cmp edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062f8b0: ja 0x62f8ba */ if ((!fC&&!fZ)) goto L_0062f8ba;
L_0062f8b2:; BB(0x0062f8b2);
    /* 0062f8b2: jb 0x62f8c2 */ if (fC) goto L_0062f8c2;
L_0062f8b4:; BB(0x0062f8b4);
    /* 0062f8b4: cmp eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062f8b8: jbe 0x62f8c2 */ if ((fC||fZ)) goto L_0062f8c2;
L_0062f8ba:; BB(0x0062f8ba);
    /* 0062f8ba: sub eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 0062f8be: sbb edx, dword ptr [esp + 0x14] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
L_0062f8c2:; BB(0x0062f8c2);
    /* 0062f8c2: sub eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 0062f8c6: sbb edx, dword ptr [esp + 0xc] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0062f8ca: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062f8cc: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0062f8ce: sbb edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
L_0062f8d1:; BB(0x0062f8d1);
    /* 0062f8d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f8d2: ret 0x10 */ FN_RET(0x0062f860); r_esp += 20; return;
}

