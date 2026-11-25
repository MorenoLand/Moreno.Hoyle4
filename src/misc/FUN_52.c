#include "protos.h"

void f_0062eec0(void) /* FUN_0062eec0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062eec0);
    /* 0062eec0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062eec4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062eec6: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0062eec8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062eecb: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0062eece: ret  */ FN_RET(0x0062eec0); r_esp += 4; return;
}

void f_0062eed0(void) /* FUN_0062eed0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062eed0);
    /* 0062eed0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062eed4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062eed6:; BB(0x0062eed6);
    /* 0062eed6: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062eed9: jne 0x62eeea */ if (!fZ) goto L_0062eeea;
L_0062eedb:; BB(0x0062eedb);
    /* 0062eedb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062eedc: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eedf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062eee2: jl 0x62eed6 */ if ((fS!=fO)) goto L_0062eed6;
L_0062eee4:; BB(0x0062eee4);
    /* 0062eee4: mov eax, 1 */ r_eax = 0x1u;
    /* 0062eee9: ret  */ FN_RET(0x0062eed0); r_esp += 4; return;
L_0062eeea:; BB(0x0062eeea);
    /* 0062eeea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062eeec: ret  */ FN_RET(0x0062eed0); r_esp += 4; return;
}

void f_0062eef0(void) /* FUN_0062eef0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062eef0);
    /* 0062eef0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062eef3: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0062eef7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062eef8: mov eax, ecx */ r_eax = r_ecx;
    /* 0062eefa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062eefb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0062eefc: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062eeff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ef00: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062ef02: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ef03: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0062ef06: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0062ef0a: mov eax, ecx */ r_eax = r_ecx;
    /* 0062ef0c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0062ef0d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ef0f: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0062ef13: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062ef15: or edi, 0xffffffff */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0062ef18: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062ef1b: mov ebp, 0x20 */ r_ebp = 0x20u;
    /* 0062ef20: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ef22: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0062ef24: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062ef26: mov dword ptr [esp + 0x20], 3 */ W32((u32)(r_esp+0x20u), 0x3u);
    /* 0062ef2e: mov ecx, eax */ r_ecx = r_eax;
    /* 0062ef30: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0062ef32: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0062ef34: not edi */ r_edi = ~r_edi;
L_0062ef36:; BB(0x0062ef36);
    /* 0062ef36: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0062ef38: mov ecx, edi */ r_ecx = r_edi;
    /* 0062ef3a: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ef3c: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062ef3f: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0062ef43: mov ecx, eax */ r_ecx = r_eax;
    /* 0062ef45: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0062ef47: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062ef49: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0062ef4b: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0062ef4f: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0062ef51: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0062ef55: mov dword ptr [esi - 4], edx */ W32((u32)(r_esi+0xfffffffcu), r_edx);
    /* 0062ef58: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062ef59: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0062ef5d: jne 0x62ef36 */ if (!fZ) goto L_0062ef36;
L_0062ef5f:; BB(0x0062ef5f);
    /* 0062ef5f: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062ef63: mov esi, 2 */ r_esi = 0x2u;
    /* 0062ef68: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0062ef6d: lea edi, [ebx*4] */ r_edi = (u32)(r_ebx*4);
L_0062ef74:; BB(0x0062ef74);
    /* 0062ef74: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ef76: jl 0x62ef88 */ if ((fS!=fO)) goto L_0062ef88;
L_0062ef78:; BB(0x0062ef78);
    /* 0062ef78: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0062ef7c: mov eax, ecx */ r_eax = r_ecx;
    /* 0062ef7e: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062ef80: mov eax, dword ptr [edx + eax] */ r_eax = R32((u32)(r_edx+r_eax));
    /* 0062ef83: mov dword ptr [edx + ecx], eax */ W32((u32)(r_edx+r_ecx), r_eax);
    /* 0062ef86: jmp 0x62ef93 */ goto L_0062ef93;
L_0062ef88:; BB(0x0062ef88);
    /* 0062ef88: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0062ef8c: mov dword ptr [edx + ecx], 0 */ W32((u32)(r_edx+r_ecx), 0x0u);
L_0062ef93:; BB(0x0062ef93);
    /* 0062ef93: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062ef94: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0062ef97: jns 0x62ef74 */ if (!fS) goto L_0062ef74;
L_0062ef99:; BB(0x0062ef99);
    /* 0062ef99: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062ef9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ef9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ef9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ef9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062efa0: ret  */ FN_RET(0x0062eef0); r_esp += 4; return;
}

void f_0062efb0(void) /* FUN_0062efb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062efb0);
    /* 0062efb0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062efb3: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0062efb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062efb9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062efba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062efbb: mov ax, word ptr [ecx + 0xa] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0xau))) & 0xffffu);
    /* 0062efbf: mov edx, dword ptr [ecx + 2] */ r_edx = R32((u32)(r_ecx+0x2u));
    /* 0062efc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0062efc4: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062efc9: mov ebp, eax */ r_ebp = r_eax;
    /* 0062efcb: mov eax, dword ptr [ecx + 6] */ r_eax = R32((u32)(r_ecx+0x6u));
    /* 0062efce: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0062efd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062efd4: mov ax, word ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0062efd7: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0062efdd: sub ebx, 0x3fff */ {  u32 a = r_ebx; u32 b = 0x3fffu; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0062efe3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062efe4: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062efe7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062efe8: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0062efec: cmp ebx, 0xffffc001 */ {  u32 a = r_ebx; u32 b = 0xffffc001u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062eff2: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0062eff6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0062effa: jne 0x62f02a */ if (!fZ) goto L_0062f02a;
L_0062effc:; BB(0x0062effc);
    /* 0062effc: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0062f000: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0062f002: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f003: call 0x62eed0 */ r_esp -= 4; W32(r_esp, 0x62f008u); f_0062eed0();
    /* 0062f008: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f00b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f00d: jne 0x62f12f */ if (!fZ) goto L_0062f12f;
L_0062f013:; BB(0x0062f013);
    /* 0062f013: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0062f017: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f018: call 0x62eec0 */ r_esp -= 4; W32(r_esp, 0x62f01du); f_0062eec0();
    /* 0062f01d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f020: mov eax, 2 */ r_eax = 0x2u;
    /* 0062f025: jmp 0x62f131 */ goto L_0062f131;
L_0062f02a:; BB(0x0062f02a);
    /* 0062f02a: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0062f02e: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0062f032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f034: call 0x62eea0 */ r_esp -= 4; W32(r_esp, 0x62f039u); f_0062eea0();
    /* 0062f039: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0062f03c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f03f: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0062f043: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f044: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f045: call 0x62ee00 */ r_esp -= 4; W32(r_esp, 0x62f04au); f_0062ee00();
    /* 0062f04a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f04d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f04f: je 0x62f052 */ if (fZ) goto L_0062f052;
L_0062f051:; BB(0x0062f051);
    /* 0062f051: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0062f052:; BB(0x0062f052);
    /* 0062f052: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0062f055: mov esi, dword ptr [edi + 8] */ r_esi = R32((u32)(r_edi+0x8u));
    /* 0062f058: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f05a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f05c: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f05e: jge 0x62f079 */ if ((fS==fO)) goto L_0062f079;
L_0062f060:; BB(0x0062f060);
    /* 0062f060: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0062f064: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f065: call 0x62eec0 */ r_esp -= 4; W32(r_esp, 0x62f06au); f_0062eec0();
    /* 0062f06a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f06d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0062f06f: mov eax, 2 */ r_eax = 0x2u;
    /* 0062f074: jmp 0x62f131 */ goto L_0062f131;
L_0062f079:; BB(0x0062f079);
    /* 0062f079: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f07b: jg 0x62f0cd */ if ((!fZ&&fS==fO)) goto L_0062f0cd;
L_0062f07d:; BB(0x0062f07d);
    /* 0062f07d: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062f07f: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0062f083: mov esi, eax */ r_esi = r_eax;
    /* 0062f085: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0062f089: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f08a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f08b: call 0x62eea0 */ r_esp -= 4; W32(r_esp, 0x62f090u); f_0062eea0();
    /* 0062f090: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f093: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0062f097: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f098: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f099: call 0x62eef0 */ r_esp -= 4; W32(r_esp, 0x62f09eu); f_0062eef0();
    /* 0062f09e: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0062f0a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f0a4: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0062f0a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0aa: call 0x62ee00 */ r_esp -= 4; W32(r_esp, 0x62f0afu); f_0062ee00();
    /* 0062f0af: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0062f0b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f0b5: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062f0b6: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0062f0ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0bc: call 0x62eef0 */ r_esp -= 4; W32(r_esp, 0x62f0c1u); f_0062eef0();
    /* 0062f0c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f0c4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0062f0c6: mov eax, 2 */ r_eax = 0x2u;
    /* 0062f0cb: jmp 0x62f131 */ goto L_0062f131;
L_0062f0cd:; BB(0x0062f0cd);
    /* 0062f0cd: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f0cf: jl 0x62f10b */ if ((fS!=fO)) goto L_0062f10b;
L_0062f0d1:; BB(0x0062f0d1);
    /* 0062f0d1: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0062f0d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0d6: call 0x62eec0 */ r_esp -= 4; W32(r_esp, 0x62f0dbu); f_0062eec0();
    /* 0062f0db: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062f0df: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0062f0e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f0e5: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0062f0e9: or ebx, 0x80000000 */ {  u32 a = r_ebx; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0062f0ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0f1: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062f0f5: call 0x62eef0 */ r_esp -= 4; W32(r_esp, 0x62f0fau); f_0062eef0();
    /* 0062f0fa: mov esi, dword ptr [edi + 0x14] */ r_esi = R32((u32)(r_edi+0x14u));
    /* 0062f0fd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062f0ff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f102: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062f104: mov eax, 1 */ r_eax = 0x1u;
    /* 0062f109: jmp 0x62f131 */ goto L_0062f131;
L_0062f10b:; BB(0x0062f10b);
    /* 0062f10b: mov esi, dword ptr [edi + 0x14] */ r_esi = R32((u32)(r_edi+0x14u));
    /* 0062f10e: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0062f111: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062f113: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0062f117: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0062f11b: and ebx, 0x7fffffff */ {  u32 a = r_ebx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0062f121: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f122: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f123: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062f127: call 0x62eef0 */ r_esp -= 4; W32(r_esp, 0x62f12cu); f_0062eef0();
    /* 0062f12c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062f12f:; BB(0x0062f12f);
    /* 0062f12f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062f131:; BB(0x0062f131);
    /* 0062f131: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0062f134: mov ecx, 0x1f */ r_ecx = 0x1fu;
    /* 0062f139: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062f13b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0062f13f: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0062f141: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 0062f144: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fC = (a < b); fC = (b != 0); }
    /* 0062f146: sbb ebp, ebp */ { u32 c = fC; u32 a = r_ebp; u32 b = r_ebp; u32 r = (a - b - c) & 0xffffffffu; r_ebp = r;  }
    /* 0062f148: and ebp, 0x80000000 */ {  u32 a = r_ebp; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0062f14e: or esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0062f150: or esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0062f152: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f155: jne 0x62f16c */ if (!fZ) goto L_0062f16c;
L_0062f157:; BB(0x0062f157);
    /* 0062f157: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0062f15b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0062f15f: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 0062f162: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0062f164: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f165: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f166: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f167: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f168: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f16b: ret  */ FN_RET(0x0062efb0); r_esp += 4; return;
L_0062f16c:; BB(0x0062f16c);
    /* 0062f16c: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f16f: jne 0x62f177 */ if (!fZ) goto L_0062f177;
L_0062f171:; BB(0x0062f171);
    /* 0062f171: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0062f175: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
L_0062f177:; BB(0x0062f177);
    /* 0062f177: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f178: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f17a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f17b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f17e: ret  */ FN_RET(0x0062efb0); r_esp += 4; return;
}

void f_0062f180(void) /* FUN_0062f180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f180);
    /* 0062f180: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062f184: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062f188: push 0x6f4f98 */ { u32 v = 0x6f4f98u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f18e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f18f: call 0x62efb0 */ r_esp -= 4; W32(r_esp, 0x62f194u); f_0062efb0();
    /* 0062f194: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f197: ret  */ FN_RET(0x0062f180); r_esp += 4; return;
}

void f_0062f1a0(void) /* FUN_0062f1a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f1a0);
    /* 0062f1a0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062f1a4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062f1a8: push 0x6f4fb0 */ { u32 v = 0x6f4fb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1af: call 0x62efb0 */ r_esp -= 4; W32(r_esp, 0x62f1b4u); f_0062efb0();
    /* 0062f1b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f1b7: ret  */ FN_RET(0x0062f1a0); r_esp += 4; return;
}

void f_0062f1c0(void) /* FUN_0062f1c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f1c0);
    /* 0062f1c0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062f1c4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f1c7: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0062f1cb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0062f1cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1da: call 0x630780 */ r_esp -= 4; W32(r_esp, 0x62f1dfu); f_00630780();
    /* 0062f1df: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0062f1e3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f1e6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0062f1ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1ec: call 0x62f180 */ r_esp -= 4; W32(r_esp, 0x62f1f1u); f_0062f180();
    /* 0062f1f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f1f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f1f7: ret  */ FN_RET(0x0062f1c0); r_esp += 4; return;
}

void f_0062f200(void) /* FUN_0062f200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f200);
    /* 0062f200: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062f204: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f207: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0062f20b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0062f20f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f211: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f213: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f215: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f217: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f218: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f219: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f21a: call 0x630780 */ r_esp -= 4; W32(r_esp, 0x62f21fu); f_00630780();
    /* 0062f21f: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0062f223: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f226: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0062f22a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f22b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f22c: call 0x62f1a0 */ r_esp -= 4; W32(r_esp, 0x62f231u); f_0062f1a0();
    /* 0062f231: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f234: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f237: ret  */ FN_RET(0x0062f200); r_esp += 4; return;
}

void f_0062f240(void) /* FUN_0062f240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f240);
    /* 0062f240: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0062f244: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f245: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f246: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0062f24a: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062f24d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f24e: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0062f252: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f253: lea edi, [ebp + 1] */ r_edi = (u32)(r_ebp+0x1u);
    /* 0062f256: mov byte ptr [ebp], 0x30 */ W8((u32)(r_ebp), 0x30u);
    /* 0062f25a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062f25c: mov eax, edi */ r_eax = r_edi;
    /* 0062f25e: jle 0x62f27e */ if ((fZ||fS!=fO)) goto L_0062f27e;
L_0062f260:; BB(0x0062f260);
    /* 0062f260: mov ebx, esi */ r_ebx = r_esi;
L_0062f262:; BB(0x0062f262);
    /* 0062f262: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0062f264: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062f266: je 0x62f26e */ if (fZ) goto L_0062f26e;
L_0062f268:; BB(0x0062f268);
    /* 0062f268: movsx ecx, cl */ r_ecx = (u32)(i32)(i8)(u8)r_ecx;
    /* 0062f26b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062f26c: jmp 0x62f273 */ goto L_0062f273;
L_0062f26e:; BB(0x0062f26e);
    /* 0062f26e: mov ecx, 0x30 */ r_ecx = 0x30u;
L_0062f273:; BB(0x0062f273);
    /* 0062f273: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0062f275: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062f276: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062f277: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0062f278: jne 0x62f262 */ if (!fZ) goto L_0062f262;
L_0062f27a:; BB(0x0062f27a);
    /* 0062f27a: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
L_0062f27e:; BB(0x0062f27e);
    /* 0062f27e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062f280: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0062f283: jl 0x62f2a1 */ if ((fS!=fO)) goto L_0062f2a1;
L_0062f285:; BB(0x0062f285);
    /* 0062f285: cmp byte ptr [edx], 0x35 */ {  u32 a = R8((u32)(r_edx)); u32 b = 0x35u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0062f288: jl 0x62f2a1 */ if ((fS!=fO)) goto L_0062f2a1;
L_0062f28a:; BB(0x0062f28a);
    /* 0062f28a: mov dl, byte ptr [eax - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0xffffffffu))) & 0xffu);
    /* 0062f28d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062f28e: cmp dl, 0x39 */ {  u32 a = (u8)r_edx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062f291: jne 0x62f29f */ if (!fZ) goto L_0062f29f;
L_0062f293:; BB(0x0062f293);
    /* 0062f293: mov byte ptr [eax], 0x30 */ W8((u32)(r_eax), 0x30u);
    /* 0062f296: mov dl, byte ptr [eax - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0xffffffffu))) & 0xffu);
    /* 0062f299: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062f29a: cmp dl, 0x39 */ {  u32 a = (u8)r_edx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062f29d: je 0x62f293 */ if (fZ) goto L_0062f293;
L_0062f29f:; BB(0x0062f29f);
    /* 0062f29f: inc byte ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0062f2a1:; BB(0x0062f2a1);
    /* 0062f2a1: cmp byte ptr [ebp], 0x31 */ {  u32 a = R8((u32)(r_ebp)); u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062f2a5: jne 0x62f2af */ if (!fZ) goto L_0062f2af;
L_0062f2a7:; BB(0x0062f2a7);
    /* 0062f2a7: inc dword ptr [ecx + 4] */ { u32 ad = (u32)(r_ecx+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0062f2aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f2ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f2ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f2ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f2ae: ret  */ FN_RET(0x0062f240); r_esp += 4; return;
L_0062f2af:; BB(0x0062f2af);
    /* 0062f2af: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f2b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062f2b4: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062f2b6: not ecx */ r_ecx = ~r_ecx;
    /* 0062f2b8: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062f2ba: mov eax, ecx */ r_eax = r_ecx;
    /* 0062f2bc: mov esi, edi */ r_esi = r_edi;
    /* 0062f2be: mov edi, ebp */ r_edi = r_ebp;
    /* 0062f2c0: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0062f2c3: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062f2c5: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f2c7: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f2ca: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0062f2cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f2cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f2ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f2cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f2d0: ret  */ FN_RET(0x0062f240); r_esp += 4; return;
}

void f_0062f2e0(void) /* FUN_0062f2e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f2e0);
    /* 0062f2e0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f2e3: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0062f2e7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0062f2eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f2ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f2ed: call 0x62f360 */ r_esp -= 4; W32(r_esp, 0x62f2f2u); f_0062f360();
    /* 0062f2f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f2f5: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0062f2f9: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062f2fd: push 0x711828 */ { u32 v = 0x711828u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f302: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f304: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f306: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f309: mov edx, esp */ r_edx = r_esp;
    /* 0062f30b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062f30d: mov ax, word ptr [esp + 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esp+0x20u))) & 0xffffu);
    /* 0062f312: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0062f315: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0062f319: call 0x631260 */ r_esp -= 4; W32(r_esp, 0x62f31eu); f_00631260();
    /* 0062f31e: movsx ecx, byte ptr [0x71182a] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x71182au));
    /* 0062f325: movsx edx, word ptr [0x711828] */ r_edx = (u32)(i32)(i16)R16((u32)(0x711828u));
    /* 0062f32c: mov dword ptr [0x711850], eax */ W32((u32)(0x711850u), r_eax);
    /* 0062f331: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f334: mov dword ptr [0x711848], ecx */ W32((u32)(0x711848u), r_ecx);
    /* 0062f33a: mov dword ptr [0x71184c], edx */ W32((u32)(0x71184cu), r_edx);
    /* 0062f340: mov dword ptr [0x711854], 0x71182c */ W32((u32)(0x711854u), 0x71182cu);
    /* 0062f34a: mov eax, 0x711848 */ r_eax = 0x711848u;
    /* 0062f34f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f352: ret  */ FN_RET(0x0062f2e0); r_esp += 4; return;
}

void f_0062f360(void) /* FUN_0062f360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f360);
    /* 0062f360: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f361: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f362: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f363: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0062f367: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f368: mov ebx, 0x80000000 */ r_ebx = 0x80000000u;
    /* 0062f36d: mov cx, word ptr [esi + 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x6u))) & 0xffffu);
    /* 0062f371: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0062f374: mov eax, ecx */ r_eax = r_ecx;
    /* 0062f376: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0062f378: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0062f37b: and ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f381: and eax, 0x7ff */ {  u32 a = r_eax; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062f386: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062f388: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f38a: and edx, 0xfffff */ {  u32 a = r_edx; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062f390: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062f396: je 0x62f3af */ if (fZ) goto L_0062f3af;
L_0062f398:; BB(0x0062f398);
    /* 0062f398: cmp ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f39e: je 0x62f3a8 */ if (fZ) goto L_0062f3a8;
L_0062f3a0:; BB(0x0062f3a0);
    /* 0062f3a0: lea esi, [eax + 0x3c00] */ r_esi = (u32)(r_eax+0x3c00u);
    /* 0062f3a6: jmp 0x62f3d1 */ goto L_0062f3d1;
L_0062f3a8:; BB(0x0062f3a8);
    /* 0062f3a8: mov esi, 0x7fff */ r_esi = 0x7fffu;
    /* 0062f3ad: jmp 0x62f3d1 */ goto L_0062f3d1;
L_0062f3af:; BB(0x0062f3af);
    /* 0062f3af: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0062f3b1: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f3b3: jne 0x62f3cb */ if (!fZ) goto L_0062f3cb;
L_0062f3b5:; BB(0x0062f3b5);
    /* 0062f3b5: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f3b7: jne 0x62f3cb */ if (!fZ) goto L_0062f3cb;
L_0062f3b9:; BB(0x0062f3b9);
    /* 0062f3b9: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062f3bd: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 0062f3c0: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0062f3c2: mov word ptr [eax + 8], bx */ W16((u32)(r_eax+0x8u), (u16)r_ebx);
    /* 0062f3c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f3c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f3c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f3c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f3ca: ret  */ FN_RET(0x0062f360); r_esp += 4; return;
L_0062f3cb:; BB(0x0062f3cb);
    /* 0062f3cb: lea esi, [eax + 0x3c01] */ r_esi = (u32)(r_eax+0x3c01u);
L_0062f3d1:; BB(0x0062f3d1);
    /* 0062f3d1: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062f3d5: mov ecx, edi */ r_ecx = r_edi;
    /* 0062f3d7: shr ecx, 0x15 */ { u32 c = (21u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0062f3da: shl edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062f3dd: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f3df: or ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f3e1: shl edi, 0xb */ { u32 c = (11u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0062f3e4: test ecx, 0x80000000 */ {  u32 a = r_ecx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f3ea: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0062f3ed: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 0062f3ef: jne 0x62f413 */ if (!fZ) goto L_0062f413;
L_0062f3f1:; BB(0x0062f3f1);
    /* 0062f3f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062f3f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f3f5: mov edi, edx */ r_edi = r_edx;
    /* 0062f3f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062f3f9: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0062f3fc: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0062f3fe: add esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062f404: mov ecx, edi */ r_ecx = r_edi;
    /* 0062f406: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 0062f409: test ecx, 0x80000000 */ {  u32 a = r_ecx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f40f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0062f411: je 0x62f3f1 */ if (fZ) goto L_0062f3f1;
L_0062f413:; BB(0x0062f413);
    /* 0062f413: or esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0062f415: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f416: mov word ptr [eax + 8], si */ W16((u32)(r_eax+0x8u), (u16)r_esi);
    /* 0062f41a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f41b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f41c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f41d: ret  */ FN_RET(0x0062f360); r_esp += 4; return;
}

void f_0062f420(void) /* FUN_0062f420: CRT memcpy/memmove (hand-written switch tails are not liftable) */
{
    FN_ENTER(0x0062f420);
    u32 dst = R32(r_esp + 4), src = R32(r_esp + 8), n = R32(r_esp + 0xc);
    if (n) memmove((void *)(uintptr_t)dst, (const void *)(uintptr_t)src, n);
    r_eax = dst;
    r_esp += 4;
}
void f_0062f760(void) /* FUN_0062f760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f760);
    /* 0062f760: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f762: call 0x627150 */ r_esp -= 4; W32(r_esp, 0x62f767u); f_00627150();
    /* 0062f767: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f76a: ret  */ FN_RET(0x0062f760); r_esp += 4; return;
}

void f_0062f770(void) /* FUN_0062f770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f770);
    /* 0062f770: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062f774: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f776: jne 0x62f779 */ if (!fZ) goto L_0062f779;
L_0062f778:; BB(0x0062f778);
    /* 0062f778: ret  */ FN_RET(0x0062f770); r_esp += 4; return;
L_0062f779:; BB(0x0062f779);
    /* 0062f779: mov ecx, dword ptr [0x711360] */ r_ecx = R32((u32)(0x711360u));
    /* 0062f77f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f781: jne 0x62f797 */ if (!fZ) goto L_0062f797;
L_0062f783:; BB(0x0062f783);
    /* 0062f783: mov cx, word ptr [esp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esp+0x8u))) & 0xffffu);
    /* 0062f788: cmp cx, 0xff */ {  u32 a = (u16)r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062f78d: ja 0x62f7d3 */ if ((!fC&&!fZ)) goto L_0062f7d3;
L_0062f78f:; BB(0x0062f78f);
    /* 0062f78f: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0062f791: mov eax, 1 */ r_eax = 0x1u;
    /* 0062f796: ret  */ FN_RET(0x0062f770); r_esp += 4; return;
L_0062f797:; BB(0x0062f797);
    /* 0062f797: mov edx, dword ptr [0x6f2564] */ r_edx = R32((u32)(0x6f2564u));
    /* 0062f79d: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0062f7a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7a2: mov ecx, dword ptr [0x711370] */ r_ecx = R32((u32)(0x711370u));
    /* 0062f7a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7ac: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0062f7b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7b3: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7b9: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 0062f7c1: call dword ptr [0x6330bc] */ { u32 t = R32((u32)(0x6330bcu)); r_esp -= 4; W32(r_esp, 0x62f7c7u); call_ind(t); }
    /* 0062f7c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f7c9: je 0x62f7d3 */ if (fZ) goto L_0062f7d3;
L_0062f7cb:; BB(0x0062f7cb);
    /* 0062f7cb: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062f7cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f7d1: je 0x62f7e0 */ if (fZ) goto L_0062f7e0;
L_0062f7d3:; BB(0x0062f7d3);
    /* 0062f7d3: mov dword ptr [0x71145c], 0x2a */ W32((u32)(0x71145cu), 0x2au);
    /* 0062f7dd: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0062f7e0:; BB(0x0062f7e0);
    /* 0062f7e0: ret  */ FN_RET(0x0062f770); r_esp += 4; return;
}

void f_0062f8e0(void) /* FUN_0062f8e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f8e0);
    /* 0062f8e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f8e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f8e2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f8e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f8e4: or ebp, 0xffffffff */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0062f8e7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0062f8e9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0062f8eb: mov ecx, 0x7128e0 */ r_ecx = 0x7128e0u;
    /* 0062f8f0: mov bl, 1 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x1u) & 0xffu);
L_0062f8f2:; BB(0x0062f8f2);
    /* 0062f8f2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0062f8f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f8f6: je 0x62f93c */ if (fZ) goto L_0062f93c;
L_0062f8f8:; BB(0x0062f8f8);
    /* 0062f8f8: lea edx, [eax + 0x100] */ r_edx = (u32)(r_eax+0x100u);
    /* 0062f8fe: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062f900: jae 0x62f921 */ if (!fC) goto L_0062f921;
L_0062f902:; BB(0x0062f902);
    /* 0062f902: test byte ptr [eax + 4], bl */ {  u32 a = R8((u32)(r_eax+0x4u)); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062f905: je 0x62f910 */ if (fZ) goto L_0062f910;
L_0062f907:; BB(0x0062f907);
    /* 0062f907: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062f90a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062f90c: jb 0x62f902 */ if (fC) goto L_0062f902;
L_0062f90e:; BB(0x0062f90e);
    /* 0062f90e: jmp 0x62f921 */ goto L_0062f921;
L_0062f910:; BB(0x0062f910);
    /* 0062f910: mov dword ptr [eax], 0xffffffff */ W32((u32)(r_eax), 0xffffffffu);
    /* 0062f916: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f918: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062f91a: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0062f91d: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062f91f: mov ebp, eax */ r_ebp = r_eax;
L_0062f921:; BB(0x0062f921);
    /* 0062f921: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f924: jne 0x62f995 */ if (!fZ) goto L_0062f995;
L_0062f926:; BB(0x0062f926);
    /* 0062f926: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f929: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062f92a: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062f92d: cmp ecx, 0x7129e0 */ {  u32 a = r_ecx; u32 b = 0x7129e0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f933: jl 0x62f8f2 */ if ((fS!=fO)) goto L_0062f8f2;
L_0062f935:; BB(0x0062f935);
    /* 0062f935: mov eax, ebp */ r_eax = r_ebp;
    /* 0062f937: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f938: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f939: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f93a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f93b: ret  */ FN_RET(0x0062f8e0); r_esp += 4; return;
L_0062f93c:; BB(0x0062f93c);
    /* 0062f93c: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f941: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x62f946u); f_00626230();
    /* 0062f946: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f949: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f94b: je 0x62f995 */ if (fZ) goto L_0062f995;
L_0062f94d:; BB(0x0062f94d);
    /* 0062f94d: mov edi, dword ptr [0x7129e0] */ r_edi = R32((u32)(0x7129e0u));
    /* 0062f953: lea ecx, [eax + 0x100] */ r_ecx = (u32)(r_eax+0x100u);
    /* 0062f959: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062f95c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062f95e: mov dword ptr [esi*4 + 0x7128e0], eax */ W32((u32)(r_esi*4+0x7128e0u), r_eax);
    /* 0062f965: mov dword ptr [0x7129e0], edi */ W32((u32)(0x7129e0u), r_edi);
    /* 0062f96b: jae 0x62f990 */ if (!fC) goto L_0062f990;
L_0062f96d:; BB(0x0062f96d);
    /* 0062f96d: mov cl, 0xa */ r_ecx = (r_ecx & 0xffffff00u) | ((0xau) & 0xffu);
L_0062f96f:; BB(0x0062f96f);
    /* 0062f96f: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 0062f973: mov dword ptr [eax], 0xffffffff */ W32((u32)(r_eax), 0xffffffffu);
    /* 0062f979: mov byte ptr [eax + 5], cl */ W8((u32)(r_eax+0x5u), (u8)r_ecx);
    /* 0062f97c: mov edx, dword ptr [esi*4 + 0x7128e0] */ r_edx = R32((u32)(r_esi*4+0x7128e0u));
    /* 0062f983: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062f986: add edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062f98c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062f98e: jb 0x62f96f */ if (fC) goto L_0062f96f;
L_0062f990:; BB(0x0062f990);
    /* 0062f990: shl esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0062f993: mov ebp, esi */ r_ebp = r_esi;
L_0062f995:; BB(0x0062f995);
    /* 0062f995: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f996: mov eax, ebp */ r_eax = r_ebp;
    /* 0062f998: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f999: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f99a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f99b: ret  */ FN_RET(0x0062f8e0); r_esp += 4; return;
}

void f_0062f9a0(void) /* FUN_0062f9a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f9a0);
    /* 0062f9a0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062f9a4: mov ecx, dword ptr [0x7129e0] */ r_ecx = R32((u32)(0x7129e0u));
    /* 0062f9aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f9ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f9ac: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062f9ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f9af: jae 0x62fa28 */ if (!fC) goto L_0062fa28;
L_0062f9b1:; BB(0x0062f9b1);
    /* 0062f9b1: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f9b3: mov esi, eax */ r_esi = r_eax;
    /* 0062f9b5: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062f9b8: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0062f9bb: mov edx, dword ptr [ecx*4 + 0x7128e0] */ r_edx = R32((u32)(r_ecx*4+0x7128e0u));
    /* 0062f9c2: lea edi, [ecx*4 + 0x7128e0] */ r_edi = (u32)(r_ecx*4+0x7128e0u);
    /* 0062f9c9: shl esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0062f9cc: cmp dword ptr [edx + esi], -1 */ {  u32 a = R32((u32)(r_edx+r_esi)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f9d0: jne 0x62fa28 */ if (!fZ) goto L_0062fa28;
L_0062f9d2:; BB(0x0062f9d2);
    /* 0062f9d2: mov ecx, dword ptr [0x6f2330] */ r_ecx = R32((u32)(0x6f2330u));
    /* 0062f9d8: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062f9dc: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f9df: jne 0x62fa1d */ if (!fZ) goto L_0062fa1d;
L_0062f9e1:; BB(0x0062f9e1);
    /* 0062f9e1: sub eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062f9e4: je 0x62fa14 */ if (fZ) goto L_0062fa14;
L_0062f9e6:; BB(0x0062f9e6);
    /* 0062f9e6: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062f9e7: je 0x62fa00 */ if (fZ) goto L_0062fa00;
L_0062f9e9:; BB(0x0062f9e9);
    /* 0062f9e9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062f9ea: jne 0x62fa1d */ if (!fZ) goto L_0062fa1d;
L_0062f9ec:; BB(0x0062f9ec);
    /* 0062f9ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f9ed: push -0xc */ { u32 v = 0xfffffff4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f9ef: call dword ptr [0x63313c] */ { u32 t = R32((u32)(0x63313cu)); r_esp -= 4; W32(r_esp, 0x62f9f5u); call_ind(t); }
    /* 0062f9f5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062f9f7: mov dword ptr [eax + esi], ebx */ W32((u32)(r_eax+r_esi), r_ebx);
    /* 0062f9fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062f9fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f9fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f9fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f9ff: ret  */ FN_RET(0x0062f9a0); r_esp += 4; return;
L_0062fa00:; BB(0x0062fa00);
    /* 0062fa00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fa01: push -0xb */ { u32 v = 0xfffffff5u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fa03: call dword ptr [0x63313c] */ { u32 t = R32((u32)(0x63313cu)); r_esp -= 4; W32(r_esp, 0x62fa09u); call_ind(t); }
    /* 0062fa09: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062fa0b: mov dword ptr [eax + esi], ebx */ W32((u32)(r_eax+r_esi), r_ebx);
    /* 0062fa0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062fa10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062fa11: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062fa12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fa13: ret  */ FN_RET(0x0062f9a0); r_esp += 4; return;
L_0062fa14:; BB(0x0062fa14);
    /* 0062fa14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fa15: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fa17: call dword ptr [0x63313c] */ { u32 t = R32((u32)(0x63313cu)); r_esp -= 4; W32(r_esp, 0x62fa1du); call_ind(t); }
L_0062fa1d:; BB(0x0062fa1d);
    /* 0062fa1d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062fa1f: mov dword ptr [eax + esi], ebx */ W32((u32)(r_eax+r_esi), r_ebx);
    /* 0062fa22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062fa24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062fa25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062fa26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fa27: ret  */ FN_RET(0x0062f9a0); r_esp += 4; return;
L_0062fa28:; BB(0x0062fa28);
    /* 0062fa28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062fa29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062fa2a: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
    /* 0062fa34: mov dword ptr [0x711460], 0 */ W32((u32)(0x711460u), 0x0u);
    /* 0062fa3e: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062fa41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fa42: ret  */ FN_RET(0x0062f9a0); r_esp += 4; return;
}

void f_0062fa50(void) /* FUN_0062fa50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062fa50);
    /* 0062fa50: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062fa54: mov ecx, dword ptr [0x7129e0] */ r_ecx = R32((u32)(0x7129e0u));
    /* 0062fa5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fa5b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fa5c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062fa5e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fa5f: jae 0x62fac9 */ if (!fC) goto L_0062fac9;
L_0062fa61:; BB(0x0062fa61);
    /* 0062fa61: mov ecx, eax */ r_ecx = r_eax;
    /* 0062fa63: mov esi, eax */ r_esi = r_eax;
    /* 0062fa65: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062fa68: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0062fa6b: mov edx, dword ptr [ecx*4 + 0x7128e0] */ r_edx = R32((u32)(r_ecx*4+0x7128e0u));
    /* 0062fa72: lea edi, [ecx*4 + 0x7128e0] */ r_edi = (u32)(r_ecx*4+0x7128e0u);
    /* 0062fa79: shl esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0062fa7c: mov bl, byte ptr [edx + esi + 4] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx+r_esi+0x4u))) & 0xffu);
    /* 0062fa80: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 0062fa83: mov edx, 1 */ r_edx = 0x1u;
    /* 0062fa88: test dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fa8a: je 0x62fac9 */ if (fZ) goto L_0062fac9;
L_0062fa8c:; BB(0x0062fa8c);
    /* 0062fa8c: cmp dword ptr [ecx], -1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fa8f: je 0x62fac9 */ if (fZ) goto L_0062fac9;
L_0062fa91:; BB(0x0062fa91);
    /* 0062fa91: cmp dword ptr [0x6f2330], edx */ {  u32 a = R32((u32)(0x6f2330u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fa97: jne 0x62faba */ if (!fZ) goto L_0062faba;
L_0062fa99:; BB(0x0062fa99);
    /* 0062fa99: sub eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062fa9c: je 0x62fab0 */ if (fZ) goto L_0062fab0;
L_0062fa9e:; BB(0x0062fa9e);
    /* 0062fa9e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062fa9f: je 0x62faaa */ if (fZ) goto L_0062faaa;
L_0062faa1:; BB(0x0062faa1);
    /* 0062faa1: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062faa2: jne 0x62faba */ if (!fZ) goto L_0062faba;
L_0062faa4:; BB(0x0062faa4);
    /* 0062faa4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062faa6: push -0xc */ { u32 v = 0xfffffff4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062faa8: jmp 0x62fab4 */ goto L_0062fab4;
L_0062faaa:; BB(0x0062faaa);
    /* 0062faaa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062faac: push -0xb */ { u32 v = 0xfffffff5u; r_esp -= 4; W32(r_esp, v); }
    /* 0062faae: jmp 0x62fab4 */ goto L_0062fab4;
L_0062fab0:; BB(0x0062fab0);
    /* 0062fab0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fab2: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
L_0062fab4:; BB(0x0062fab4);
    /* 0062fab4: call dword ptr [0x63313c] */ { u32 t = R32((u32)(0x63313cu)); r_esp -= 4; W32(r_esp, 0x62fabau); call_ind(t); }
L_0062faba:; BB(0x0062faba);
    /* 0062faba: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062fabc: mov dword ptr [eax + esi], 0xffffffff */ W32((u32)(r_eax+r_esi), 0xffffffffu);
    /* 0062fac3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062fac5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062fac6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062fac7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fac8: ret  */ FN_RET(0x0062fa50); r_esp += 4; return;
L_0062fac9:; BB(0x0062fac9);
    /* 0062fac9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062faca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062facb: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
    /* 0062fad5: mov dword ptr [0x711460], 0 */ W32((u32)(0x711460u), 0x0u);
    /* 0062fadf: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062fae2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fae3: ret  */ FN_RET(0x0062fa50); r_esp += 4; return;
}

void f_0062faf0(void) /* FUN_0062faf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062faf0);
    /* 0062faf0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062faf4: mov ecx, dword ptr [0x7129e0] */ r_ecx = R32((u32)(0x7129e0u));
    /* 0062fafa: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062fafc: jae 0x62fb1c */ if (!fC) goto L_0062fb1c;
L_0062fafe:; BB(0x0062fafe);
    /* 0062fafe: mov ecx, eax */ r_ecx = r_eax;
    /* 0062fb00: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062fb03: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062fb06: mov edx, dword ptr [ecx*4 + 0x7128e0] */ r_edx = R32((u32)(r_ecx*4+0x7128e0u));
    /* 0062fb0d: mov cl, byte ptr [edx + eax*8 + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax*8+0x4u))) & 0xffu);
    /* 0062fb11: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fb14: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 0062fb17: je 0x62fb1c */ if (fZ) goto L_0062fb1c;
L_0062fb19:; BB(0x0062fb19);
    /* 0062fb19: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0062fb1b: ret  */ FN_RET(0x0062faf0); r_esp += 4; return;
L_0062fb1c:; BB(0x0062fb1c);
    /* 0062fb1c: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
    /* 0062fb26: mov dword ptr [0x711460], 0 */ W32((u32)(0x711460u), 0x0u);
    /* 0062fb30: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062fb33: ret  */ FN_RET(0x0062faf0); r_esp += 4; return;
}

void f_0062fb40(void) /* FUN_0062fb40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062fb40);
    /* 0062fb40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062fb43: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0062fb47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fb48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062fb49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fb4a: mov dl, 0x80 */ r_edx = (r_edx & 0xffffff00u) | ((0x80u) & 0xffu);
    /* 0062fb4c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0062fb4e: test dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fb50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fb51: mov dword ptr [esp + 0x18], 0xc */ W32((u32)(r_esp+0x18u), 0xcu);
    /* 0062fb59: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0062fb5d: je 0x62fb6a */ if (fZ) goto L_0062fb6a;
L_0062fb5f:; BB(0x0062fb5f);
    /* 0062fb5f: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0062fb63: mov byte ptr [esp + 0x13], 0x10 */ W8((u32)(r_esp+0x13u), 0x10u);
    /* 0062fb68: jmp 0x62fb77 */ goto L_0062fb77;
L_0062fb6a:; BB(0x0062fb6a);
    /* 0062fb6a: mov dword ptr [esp + 0x20], 1 */ W32((u32)(r_esp+0x20u), 0x1u);
    /* 0062fb72: mov byte ptr [esp + 0x13], 0 */ W8((u32)(r_esp+0x13u), 0x0u);
L_0062fb77:; BB(0x0062fb77);
    /* 0062fb77: test ch, 0x80 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fb7a: jne 0x62fb91 */ if (!fZ) goto L_0062fb91;
L_0062fb7c:; BB(0x0062fb7c);
    /* 0062fb7c: test ch, 0x40 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fb7f: jne 0x62fb8d */ if (!fZ) goto L_0062fb8d;
L_0062fb81:; BB(0x0062fb81);
    /* 0062fb81: cmp dword ptr [0x711874], 0x8000 */ {  u32 a = R32((u32)(0x711874u)); u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fb8b: je 0x62fb91 */ if (fZ) goto L_0062fb91;
L_0062fb8d:; BB(0x0062fb8d);
    /* 0062fb8d: or byte ptr [esp + 0x13], dl */ { u32 ad = (u32)(r_esp+0x13u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0062fb91:; BB(0x0062fb91);
    /* 0062fb91: mov eax, ecx */ r_eax = r_ecx;
    /* 0062fb93: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062fb96: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062fb98: je 0x62fbb8 */ if (fZ) goto L_0062fbb8;
L_0062fb9a:; BB(0x0062fb9a);
    /* 0062fb9a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062fb9b: je 0x62fbae */ if (fZ) goto L_0062fbae;
L_0062fb9d:; BB(0x0062fb9d);
    /* 0062fb9d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062fb9e: jne 0x62fe91 */ if (!fZ) goto L_0062fe91;
L_0062fba4:; BB(0x0062fba4);
    /* 0062fba4: mov dword ptr [esp + 0x14], 0xc0000000 */ W32((u32)(r_esp+0x14u), 0xc0000000u);
    /* 0062fbac: jmp 0x62fbc0 */ goto L_0062fbc0;
L_0062fbae:; BB(0x0062fbae);
    /* 0062fbae: mov dword ptr [esp + 0x14], 0x40000000 */ W32((u32)(r_esp+0x14u), 0x40000000u);
    /* 0062fbb6: jmp 0x62fbc0 */ goto L_0062fbc0;
L_0062fbb8:; BB(0x0062fbb8);
    /* 0062fbb8: mov dword ptr [esp + 0x14], 0x80000000 */ W32((u32)(r_esp+0x14u), 0x80000000u);
L_0062fbc0:; BB(0x0062fbc0);
    /* 0062fbc0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0062fbc4: add eax, -0x10 */ {  u32 a = r_eax; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062fbc7: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062fbca: ja 0x62fe91 */ if ((!fC&&!fZ)) goto L_0062fe91;
L_0062fbd0:; BB(0x0062fbd0);
    /* 0062fbd0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0062fbd2: mov bl, byte ptr [eax + 0x62fec0] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+0x62fec0u))) & 0xffu);
    /* 0062fbd8: jmp dword ptr [ebx*4 + 0x62feac] */ { u32 t = R32((u32)(r_ebx*4+0x62feacu)); switch (t) { case 0x62fbdfu: goto L_0062fbdf; case 0x62fbe3u: goto L_0062fbe3; case 0x62fbeau: goto L_0062fbea; case 0x62fbf1u: goto L_0062fbf1; case 0x62fe91u: goto L_0062fe91; default: UNSUP(0x0062fbd8, "jump table entry is not a known target"); } }
L_0062fbdf:; BB(0x0062fbdf);
    /* 0062fbdf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0062fbe1: jmp 0x62fbf6 */ goto L_0062fbf6;
L_0062fbe3:; BB(0x0062fbe3);
    /* 0062fbe3: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0062fbe8: jmp 0x62fbf6 */ goto L_0062fbf6;
L_0062fbea:; BB(0x0062fbea);
    /* 0062fbea: mov ebx, 2 */ r_ebx = 0x2u;
    /* 0062fbef: jmp 0x62fbf6 */ goto L_0062fbf6;
L_0062fbf1:; BB(0x0062fbf1);
    /* 0062fbf1: mov ebx, 3 */ r_ebx = 0x3u;
L_0062fbf6:; BB(0x0062fbf6);
    /* 0062fbf6: mov eax, ecx */ r_eax = r_ecx;
    /* 0062fbf8: and eax, 0x700 */ {  u32 a = r_eax; u32 b = 0x700u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062fbfd: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062fc02: jg 0x62fc16 */ if ((!fZ&&fS==fO)) goto L_0062fc16;
L_0062fc04:; BB(0x0062fc04);
    /* 0062fc04: je 0x62fc0f */ if (fZ) goto L_0062fc0f;
L_0062fc06:; BB(0x0062fc06);
    /* 0062fc06: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fc08: je 0x62fc46 */ if (fZ) goto L_0062fc46;
L_0062fc0a:; BB(0x0062fc0a);
    /* 0062fc0a: jmp 0x62fe91 */ goto L_0062fe91;
L_0062fc0f:; BB(0x0062fc0f);
    /* 0062fc0f: mov ebp, 4 */ r_ebp = 0x4u;
    /* 0062fc14: jmp 0x62fc6b */ goto L_0062fc6b;
L_0062fc16:; BB(0x0062fc16);
    /* 0062fc16: cmp eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062fc1b: jg 0x62fc32 */ if ((!fZ&&fS==fO)) goto L_0062fc32;
L_0062fc1d:; BB(0x0062fc1d);
    /* 0062fc1d: je 0x62fc2b */ if (fZ) goto L_0062fc2b;
L_0062fc1f:; BB(0x0062fc1f);
    /* 0062fc1f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fc24: je 0x62fc66 */ if (fZ) goto L_0062fc66;
L_0062fc26:; BB(0x0062fc26);
    /* 0062fc26: jmp 0x62fe91 */ goto L_0062fe91;
L_0062fc2b:; BB(0x0062fc2b);
    /* 0062fc2b: mov ebp, 2 */ r_ebp = 0x2u;
    /* 0062fc30: jmp 0x62fc6b */ goto L_0062fc6b;
L_0062fc32:; BB(0x0062fc32);
    /* 0062fc32: cmp eax, 0x500 */ {  u32 a = r_eax; u32 b = 0x500u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062fc37: jg 0x62fc4d */ if ((!fZ&&fS==fO)) goto L_0062fc4d;
L_0062fc39:; BB(0x0062fc39);
    /* 0062fc39: je 0x62fc5f */ if (fZ) goto L_0062fc5f;
L_0062fc3b:; BB(0x0062fc3b);
    /* 0062fc3b: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fc40: jne 0x62fe91 */ if (!fZ) goto L_0062fe91;
L_0062fc46:; BB(0x0062fc46);
    /* 0062fc46: mov ebp, 3 */ r_ebp = 0x3u;
    /* 0062fc4b: jmp 0x62fc6b */ goto L_0062fc6b;
L_0062fc4d:; BB(0x0062fc4d);
    /* 0062fc4d: cmp eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fc52: je 0x62fc66 */ if (fZ) goto L_0062fc66;
L_0062fc54:; BB(0x0062fc54);
    /* 0062fc54: cmp eax, 0x700 */ {  u32 a = r_eax; u32 b = 0x700u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fc59: jne 0x62fe91 */ if (!fZ) goto L_0062fe91;
L_0062fc5f:; BB(0x0062fc5f);
    /* 0062fc5f: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0062fc64: jmp 0x62fc6b */ goto L_0062fc6b;
L_0062fc66:; BB(0x0062fc66);
    /* 0062fc66: mov ebp, 5 */ r_ebp = 0x5u;
L_0062fc6b:; BB(0x0062fc6b);
    /* 0062fc6b: test ch, 1 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fc6e: mov edi, 0x80 */ r_edi = 0x80u;
    /* 0062fc73: je 0x62fc8c */ if (fZ) goto L_0062fc8c;
L_0062fc75:; BB(0x0062fc75);
    /* 0062fc75: mov esi, dword ptr [0x711464] */ r_esi = R32((u32)(0x711464u));
    /* 0062fc7b: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0062fc7f: not esi */ r_esi = ~r_esi;
    /* 0062fc81: and eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062fc83: test dl, al */ {  u32 a = (u8)r_edx; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fc85: jne 0x62fc8c */ if (!fZ) goto L_0062fc8c;
L_0062fc87:; BB(0x0062fc87);
    /* 0062fc87: mov edi, 1 */ r_edi = 0x1u;
L_0062fc8c:; BB(0x0062fc8c);
    /* 0062fc8c: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fc8f: je 0x62fca4 */ if (fZ) goto L_0062fca4;
L_0062fc91:; BB(0x0062fc91);
    /* 0062fc91: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062fc95: or edi, 0x4000000 */ {  u32 a = r_edi; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0062fc9b: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062fca0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_0062fca4:; BB(0x0062fca4);
    /* 0062fca4: test ch, 0x10 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fca7: je 0x62fcaf */ if (fZ) goto L_0062fcaf;
L_0062fca9:; BB(0x0062fca9);
    /* 0062fca9: or edi, 0x100 */ {  u32 a = r_edi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_0062fcaf:; BB(0x0062fcaf);
    /* 0062fcaf: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fcb2: je 0x62fcbc */ if (fZ) goto L_0062fcbc;
L_0062fcb4:; BB(0x0062fcb4);
    /* 0062fcb4: or edi, 0x8000000 */ {  u32 a = r_edi; u32 b = 0x8000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0062fcba: jmp 0x62fcc7 */ goto L_0062fcc7;
L_0062fcbc:; BB(0x0062fcbc);
    /* 0062fcbc: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fcbf: je 0x62fcc7 */ if (fZ) goto L_0062fcc7;
L_0062fcc1:; BB(0x0062fcc1);
    /* 0062fcc1: or edi, 0x10000000 */ {  u32 a = r_edi; u32 b = 0x10000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_0062fcc7:; BB(0x0062fcc7);
    /* 0062fcc7: call 0x62f8e0 */ r_esp -= 4; W32(r_esp, 0x62fcccu); f_0062f8e0();
    /* 0062fccc: mov esi, eax */ r_esi = r_eax;
    /* 0062fcce: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fcd1: jne 0x62fcf1 */ if (!fZ) goto L_0062fcf1;
L_0062fcd3:; BB(0x0062fcd3);
    /* 0062fcd3: mov dword ptr [0x71145c], 0x18 */ W32((u32)(0x71145cu), 0x18u);
    /* 0062fcdd: mov dword ptr [0x711460], 0 */ W32((u32)(0x711460u), 0x0u);
    /* 0062fce7: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062fce9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062fcea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062fceb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fcec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fced: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fcf0: ret  */ FN_RET(0x0062fb40); r_esp += 4; return;
L_0062fcf1:; BB(0x0062fcf1);
    /* 0062fcf1: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0062fcf5: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0062fcf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fcfb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fcfc: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0062fd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd05: call dword ptr [0x633044] */ { u32 t = R32((u32)(0x633044u)); r_esp -= 4; W32(r_esp, 0x62fd0bu); call_ind(t); }
    /* 0062fd0b: mov edi, eax */ r_edi = r_eax;
    /* 0062fd0d: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fd10: jne 0x62fd2b */ if (!fZ) goto L_0062fd2b;
L_0062fd12:; BB(0x0062fd12);
    /* 0062fd12: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x62fd18u); call_ind(t); }
    /* 0062fd18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd19: call 0x62b3e0 */ r_esp -= 4; W32(r_esp, 0x62fd1eu); f_0062b3e0();
    /* 0062fd1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fd21: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062fd23: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062fd24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062fd25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fd26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fd27: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fd2a: ret  */ FN_RET(0x0062fb40); r_esp += 4; return;
L_0062fd2b:; BB(0x0062fd2b);
    /* 0062fd2b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd2c: call dword ptr [0x63310c] */ { u32 t = R32((u32)(0x63310cu)); r_esp -= 4; W32(r_esp, 0x62fd32u); call_ind(t); }
    /* 0062fd32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fd34: jne 0x62fd57 */ if (!fZ) goto L_0062fd57;
L_0062fd36:; BB(0x0062fd36);
    /* 0062fd36: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd37: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x62fd3du); call_ind(t); }
    /* 0062fd3d: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x62fd43u); call_ind(t); }
    /* 0062fd43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd44: call 0x62b3e0 */ r_esp -= 4; W32(r_esp, 0x62fd49u); f_0062b3e0();
    /* 0062fd49: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fd4c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062fd4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062fd50: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062fd51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fd52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fd53: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fd56: ret  */ FN_RET(0x0062fb40); r_esp += 4; return;
L_0062fd57:; BB(0x0062fd57);
    /* 0062fd57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fd5a: jne 0x62fd64 */ if (!fZ) goto L_0062fd64;
L_0062fd5c:; BB(0x0062fd5c);
    /* 0062fd5c: mov al, byte ptr [esp + 0x13] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x13u))) & 0xffu);
    /* 0062fd60: or al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062fd62: jmp 0x62fd6f */ goto L_0062fd6f;
L_0062fd64:; BB(0x0062fd64);
    /* 0062fd64: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fd67: jne 0x62fd73 */ if (!fZ) goto L_0062fd73;
L_0062fd69:; BB(0x0062fd69);
    /* 0062fd69: mov al, byte ptr [esp + 0x13] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x13u))) & 0xffu);
    /* 0062fd6d: or al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062fd6f:; BB(0x0062fd6f);
    /* 0062fd6f: mov byte ptr [esp + 0x13], al */ W8((u32)(r_esp+0x13u), (u8)r_eax);
L_0062fd73:; BB(0x0062fd73);
    /* 0062fd73: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd75: call 0x62f9a0 */ r_esp -= 4; W32(r_esp, 0x62fd7au); f_0062f9a0();
    /* 0062fd7a: mov bl, byte ptr [esp + 0x1b] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esp+0x1bu))) & 0xffu);
    /* 0062fd7e: mov ecx, esi */ r_ecx = r_esi;
    /* 0062fd80: or bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062fd83: mov edi, esi */ r_edi = r_esi;
    /* 0062fd85: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062fd88: mov byte ptr [esp + 0x1b], bl */ W8((u32)(r_esp+0x1bu), (u8)r_ebx);
    /* 0062fd8c: and edi, 0x1f */ {  u32 a = r_edi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0062fd8f: mov al, byte ptr [esp + 0x1b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x1bu))) & 0xffu);
    /* 0062fd93: mov edx, dword ptr [ecx*4 + 0x7128e0] */ r_edx = R32((u32)(r_ecx*4+0x7128e0u));
    /* 0062fd9a: lea ebx, [ecx*4 + 0x7128e0] */ r_ebx = (u32)(r_ecx*4+0x7128e0u);
    /* 0062fda1: mov cl, al */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 0062fda3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fda6: shl edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0062fda9: and cl, 0x48 */ {  u32 a = (u8)r_ecx; u32 b = 0x48u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0062fdac: mov byte ptr [edi + edx + 4], al */ W8((u32)(r_edi+r_edx+0x4u), (u8)r_eax);
    /* 0062fdb0: mov byte ptr [esp + 0x28], cl */ W8((u32)(r_esp+0x28u), (u8)r_ecx);
    /* 0062fdb4: jne 0x62fe69 */ if (!fZ) goto L_0062fe69;
L_0062fdba:; BB(0x0062fdba);
    /* 0062fdba: test al, 0x80 */ {  u32 a = (u8)r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fdbc: je 0x62fe69 */ if (fZ) goto L_0062fe69;
L_0062fdc2:; BB(0x0062fdc2);
    /* 0062fdc2: test byte ptr [esp + 0x2c], 2 */ {  u32 a = R8((u32)(r_esp+0x2cu)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fdc7: je 0x62fe69 */ if (fZ) goto L_0062fe69;
L_0062fdcd:; BB(0x0062fdcd);
    /* 0062fdcd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fdcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062fdd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fdd2: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x62fdd7u); f_0062bfe0();
    /* 0062fdd7: mov ebp, eax */ r_ebp = r_eax;
    /* 0062fdd9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fddc: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fddf: jne 0x62fe00 */ if (!fZ) goto L_0062fe00;
L_0062fde1:; BB(0x0062fde1);
    /* 0062fde1: cmp dword ptr [0x711460], 0x83 */ {  u32 a = R32((u32)(0x711460u)); u32 b = 0x83u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fdeb: je 0x62fe69 */ if (fZ) goto L_0062fe69;
L_0062fded:; BB(0x0062fded);
    /* 0062fded: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fdee: call 0x628250 */ r_esp -= 4; W32(r_esp, 0x62fdf3u); f_00628250();
    /* 0062fdf3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fdf6: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062fdf8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062fdf9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062fdfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fdfb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fdfc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fdff: ret  */ FN_RET(0x0062fb40); r_esp += 4; return;
L_0062fe00:; BB(0x0062fe00);
    /* 0062fe00: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0062fe04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe08: mov byte ptr [esp + 0x3c], 0 */ W8((u32)(r_esp+0x3cu), 0x0u);
    /* 0062fe0d: call 0x628460 */ r_esp -= 4; W32(r_esp, 0x62fe12u); f_00628460();
    /* 0062fe12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fe15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fe17: jne 0x62fe43 */ if (!fZ) goto L_0062fe43;
L_0062fe19:; BB(0x0062fe19);
    /* 0062fe19: cmp byte ptr [esp + 0x30], 0x1a */ {  u32 a = R8((u32)(r_esp+0x30u)); u32 b = 0x1au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062fe1e: jne 0x62fe43 */ if (!fZ) goto L_0062fe43;
L_0062fe20:; BB(0x0062fe20);
    /* 0062fe20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe22: call 0x6315f0 */ r_esp -= 4; W32(r_esp, 0x62fe27u); f_006315f0();
    /* 0062fe27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fe2a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fe2d: jne 0x62fe43 */ if (!fZ) goto L_0062fe43;
L_0062fe2f:; BB(0x0062fe2f);
    /* 0062fe2f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe30: call 0x628250 */ r_esp -= 4; W32(r_esp, 0x62fe35u); f_00628250();
    /* 0062fe35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fe38: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062fe3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062fe3c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062fe3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fe3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fe3f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fe42: ret  */ FN_RET(0x0062fb40); r_esp += 4; return;
L_0062fe43:; BB(0x0062fe43);
    /* 0062fe43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe47: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe48: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x62fe4du); f_0062bfe0();
    /* 0062fe4d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fe50: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fe53: jne 0x62fe69 */ if (!fZ) goto L_0062fe69;
L_0062fe55:; BB(0x0062fe55);
    /* 0062fe55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe56: call 0x628250 */ r_esp -= 4; W32(r_esp, 0x62fe5bu); f_00628250();
    /* 0062fe5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fe5e: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062fe61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062fe62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062fe63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fe64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fe65: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fe68: ret  */ FN_RET(0x0062fb40); r_esp += 4; return;
L_0062fe69:; BB(0x0062fe69);
    /* 0062fe69: mov al, byte ptr [esp + 0x28] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x28u))) & 0xffu);
    /* 0062fe6d: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fe6f: jne 0x62fe87 */ if (!fZ) goto L_0062fe87;
L_0062fe71:; BB(0x0062fe71);
    /* 0062fe71: test byte ptr [esp + 0x2c], 8 */ {  u32 a = R8((u32)(r_esp+0x2cu)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062fe76: je 0x62fe87 */ if (fZ) goto L_0062fe87;
L_0062fe78:; BB(0x0062fe78);
    /* 0062fe78: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0062fe7a: lea eax, [edi + ecx + 4] */ r_eax = (u32)(r_edi+r_ecx+0x4u);
    /* 0062fe7e: mov cl, byte ptr [edi + ecx + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+r_ecx+0x4u))) & 0xffu);
    /* 0062fe82: or cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062fe85: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
L_0062fe87:; BB(0x0062fe87);
    /* 0062fe87: mov eax, esi */ r_eax = r_esi;
    /* 0062fe89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062fe8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062fe8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fe8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fe8d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fe90: ret  */ FN_RET(0x0062fb40); r_esp += 4; return;
L_0062fe91:; BB(0x0062fe91);
    /* 0062fe91: mov dword ptr [0x711460], esi */ W32((u32)(0x711460u), r_esi);
    /* 0062fe97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062fe98: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062fe99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fe9a: mov dword ptr [0x71145c], 0x16 */ W32((u32)(0x71145cu), 0x16u);
    /* 0062fea4: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062fea7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fea8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062feab: ret  */ FN_RET(0x0062fb40); r_esp += 4; return;
}

void f_0062ff00(void) /* FUN_0062ff00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ff00);
    /* 0062ff00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff01: mov eax, dword ptr [0x711860] */ r_eax = R32((u32)(0x711860u));
    /* 0062ff06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff07: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff09: mov esi, dword ptr [0x633140] */ r_esi = R32((u32)(0x633140u));
    /* 0062ff0f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff10: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0062ff12: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ff14: jne 0x62ff3c */ if (!fZ) goto L_0062ff3c;
L_0062ff16:; BB(0x0062ff16);
    /* 0062ff16: lea eax, [esp + 0x12] */ r_eax = (u32)(r_esp+0x12u);
    /* 0062ff1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff1d: push 0x63d1c0 */ { u32 v = 0x63d1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff24: call dword ptr [0x633144] */ { u32 t = R32((u32)(0x633144u)); r_esp -= 4; W32(r_esp, 0x62ff2au); call_ind(t); }
    /* 0062ff2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ff2c: je 0x63000c */ if (fZ) goto L_0063000c;
L_0062ff32:; BB(0x0062ff32);
    /* 0062ff32: mov eax, 1 */ r_eax = 0x1u;
    /* 0062ff37: mov dword ptr [0x711860], eax */ W32((u32)(0x711860u), r_eax);
L_0062ff3c:; BB(0x0062ff3c);
    /* 0062ff3c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ff3f: jne 0x62ff6b */ if (!fZ) goto L_0062ff6b;
L_0062ff41:; BB(0x0062ff41);
    /* 0062ff41: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0062ff45: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ff47: jne 0x62ff4e */ if (!fZ) goto L_0062ff4e;
L_0062ff49:; BB(0x0062ff49);
    /* 0062ff49: mov eax, dword ptr [0x711360] */ r_eax = R32((u32)(0x711360u));
L_0062ff4e:; BB(0x0062ff4e);
    /* 0062ff4e: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0062ff52: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0062ff56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff57: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0062ff5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff5c: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0062ff60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff63: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x62ff65u); call_ind(t); }
    /* 0062ff65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062ff66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ff67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ff68: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ff69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062ff6a: ret  */ FN_RET(0x0062ff00); r_esp += 4; return;
L_0062ff6b:; BB(0x0062ff6b);
    /* 0062ff6b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ff6e: jne 0x630006 */ if (!fZ) goto L_00630006;
L_0062ff74:; BB(0x0062ff74);
    /* 0062ff74: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0062ff78: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0062ff7c: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ff7e: jne 0x62ff86 */ if (!fZ) goto L_0062ff86;
L_0062ff80:; BB(0x0062ff80);
    /* 0062ff80: mov ebx, dword ptr [0x711370] */ r_ebx = R32((u32)(0x711370u));
L_0062ff86:; BB(0x0062ff86);
    /* 0062ff86: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0062ff8a: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0062ff8e: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0062ff92: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff93: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0062ff95: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0062ff97: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff98: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062ff9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff9c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062ff9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff9f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffa0: call dword ptr [0x6330cc] */ { u32 t = R32((u32)(0x6330ccu)); r_esp -= 4; W32(r_esp, 0x62ffa6u); call_ind(t); }
    /* 0062ffa6: mov esi, eax */ r_esi = r_eax;
    /* 0062ffa8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ffaa: je 0x62fff7 */ if (fZ) goto L_0062fff7;
L_0062ffac:; BB(0x0062ffac);
    /* 0062ffac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffad: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffaf: call 0x630550 */ r_esp -= 4; W32(r_esp, 0x62ffb4u); f_00630550();
    /* 0062ffb4: mov edi, eax */ r_edi = r_eax;
    /* 0062ffb6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ffb9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ffbb: je 0x62fff7 */ if (fZ) goto L_0062fff7;
L_0062ffbd:; BB(0x0062ffbd);
    /* 0062ffbd: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0062ffc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffc2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffc3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffc5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffc7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffc8: call dword ptr [0x6330cc] */ { u32 t = R32((u32)(0x6330ccu)); r_esp -= 4; W32(r_esp, 0x62ffceu); call_ind(t); }
    /* 0062ffce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ffd0: je 0x62fff7 */ if (fZ) goto L_0062fff7;
L_0062ffd2:; BB(0x0062ffd2);
    /* 0062ffd2: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0062ffd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffd8: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0062ffdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffde: call dword ptr [0x633144] */ { u32 t = R32((u32)(0x633144u)); r_esp -= 4; W32(r_esp, 0x62ffe4u); call_ind(t); }
    /* 0062ffe4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffe5: mov esi, eax */ r_esi = r_eax;
    /* 0062ffe7: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x62ffecu); f_006262e0();
    /* 0062ffec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ffef: mov eax, esi */ r_eax = r_esi;
    /* 0062fff1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062fff2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062fff3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fff4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fff5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062fff6: ret  */ FN_RET(0x0062ff00); r_esp += 4; return;
L_0062fff7:; BB(0x0062fff7);
    /* 0062fff7: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0062fffb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fffc: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x630001u); f_006262e0();
    /* 00630001: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630004: mov eax, esi */ r_eax = r_esi;
L_00630006:; BB(0x00630006);
    /* 00630006: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630007: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630008: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630009: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063000a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063000b: ret  */ FN_RET(0x0062ff00); r_esp += 4; return;
L_0063000c:; BB(0x0063000c);
    /* 0063000c: lea ecx, [esp + 0x12] */ r_ecx = (u32)(r_esp+0x12u);
    /* 00630010: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630011: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00630013: push 0x63d1bc */ { u32 v = 0x63d1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00630018: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063001a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063001b: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x63001du); call_ind(t); }
    /* 0063001d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063001f: je 0x630030 */ if (fZ) goto L_00630030;
L_00630021:; BB(0x00630021);
    /* 00630021: mov eax, 2 */ r_eax = 0x2u;
    /* 00630026: mov dword ptr [0x711860], eax */ W32((u32)(0x711860u), r_eax);
    /* 0063002b: jmp 0x62ff3c */ goto L_0062ff3c;
L_00630030:; BB(0x00630030);
    /* 00630030: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630031: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630032: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630033: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630035: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00630036: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630037: ret  */ FN_RET(0x0062ff00); r_esp += 4; return;
}

void f_00630040(void) /* FUN_00630040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630040);
    /* 00630040: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630041: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630042: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630043: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00630047: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630048: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00630049: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0063004d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063004f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630051: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00630055: je 0x630061 */ if (fZ) goto L_00630061;
L_00630057:; BB(0x00630057);
    /* 00630057: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630059: jne 0x630061 */ if (!fZ) goto L_00630061;
L_0063005b:; BB(0x0063005b);
    /* 0063005b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063005c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063005d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063005e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063005f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630060: ret  */ FN_RET(0x00630040); r_esp += 4; return;
L_00630061:; BB(0x00630061);
    /* 00630061: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630063: je 0x6301c4 */ if (fZ) goto L_006301c4;
L_00630069:; BB(0x00630069);
    /* 00630069: mov ecx, dword ptr [0x711360] */ r_ecx = R32((u32)(0x711360u));
    /* 0063006f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630071: jne 0x6300aa */ if (!fZ) goto L_006300aa;
L_00630073:; BB(0x00630073);
    /* 00630073: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00630075: jbe 0x630223 */ if ((fC||fZ)) goto L_00630223;
L_0063007b:; BB(0x0063007b);
    /* 0063007b: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
L_0063007f:; BB(0x0063007f);
    /* 0063007f: cmp word ptr [ecx], 0xff */ {  u32 a = R16((u32)(r_ecx)); u32 b = 0xffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00630084: ja 0x630216 */ if ((!fC&&!fZ)) goto L_00630216;
L_0063008a:; BB(0x0063008a);
    /* 0063008a: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0063008c: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063008f: mov byte ptr [eax + edi], dl */ W8((u32)(r_eax+r_edi), (u8)r_edx);
    /* 00630092: mov dx, word ptr [ecx - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0xfffffffeu))) & 0xffffu);
    /* 00630096: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00630099: je 0x630223 */ if (fZ) goto L_00630223;
L_0063009f:; BB(0x0063009f);
    /* 0063009f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006300a0: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006300a2: jb 0x63007f */ if (fC) goto L_0063007f;
L_006300a4:; BB(0x006300a4);
    /* 006300a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006300a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006300a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006300a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006300a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006300a9: ret  */ FN_RET(0x00630040); r_esp += 4; return;
L_006300aa:; BB(0x006300aa);
    /* 006300aa: cmp dword ptr [0x6f2564], 1 */ {  u32 a = R32((u32)(0x6f2564u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006300b1: jne 0x63010b */ if (!fZ) goto L_0063010b;
L_006300b3:; BB(0x006300b3);
    /* 006300b3: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 006300b7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006300b9: jbe 0x6300c7 */ if ((fC||fZ)) goto L_006300c7;
L_006300bb:; BB(0x006300bb);
    /* 006300bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006300bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006300bd: call 0x630230 */ r_esp -= 4; W32(r_esp, 0x6300c2u); f_00630230();
    /* 006300c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006300c5: mov ebp, eax */ r_ebp = r_eax;
L_006300c7:; BB(0x006300c7);
    /* 006300c7: mov ecx, dword ptr [0x711370] */ r_ecx = R32((u32)(0x711370u));
    /* 006300cd: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006300d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006300d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006300d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006300d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006300d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006300d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006300d8: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 006300dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006300de: call dword ptr [0x6330bc] */ { u32 t = R32((u32)(0x6330bcu)); r_esp -= 4; W32(r_esp, 0x6300e4u); call_ind(t); }
    /* 006300e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006300e6: je 0x630216 */ if (fZ) goto L_00630216;
L_006300ec:; BB(0x006300ec);
    /* 006300ec: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006300f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006300f2: jne 0x630216 */ if (!fZ) goto L_00630216;
L_006300f8:; BB(0x006300f8);
    /* 006300f8: mov cl, byte ptr [eax + edi - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+r_edi+0xffffffffu))) & 0xffu);
    /* 006300fc: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006300fe: jne 0x630223 */ if (!fZ) goto L_00630223;
L_00630104:; BB(0x00630104);
    /* 00630104: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00630105: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630106: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630107: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630108: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00630109: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063010a: ret  */ FN_RET(0x00630040); r_esp += 4; return;
L_0063010b:; BB(0x0063010b);
    /* 0063010b: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0063010f: mov eax, dword ptr [0x711370] */ r_eax = R32((u32)(0x711370u));
    /* 00630114: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00630118: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630119: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063011b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063011c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063011d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063011f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630120: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00630125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630126: call dword ptr [0x6330bc] */ { u32 t = R32((u32)(0x6330bcu)); r_esp -= 4; W32(r_esp, 0x63012cu); call_ind(t); }
    /* 0063012c: mov esi, eax */ r_esi = r_eax;
    /* 0063012e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00630132: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630134: je 0x630147 */ if (fZ) goto L_00630147;
L_00630136:; BB(0x00630136);
    /* 00630136: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630138: jne 0x630216 */ if (!fZ) goto L_00630216;
L_0063013e:; BB(0x0063013e);
    /* 0063013e: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 00630141: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630142: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630143: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630144: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00630145: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630146: ret  */ FN_RET(0x00630040); r_esp += 4; return;
L_00630147:; BB(0x00630147);
    /* 00630147: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630149: jne 0x630216 */ if (!fZ) goto L_00630216;
L_0063014f:; BB(0x0063014f);
    /* 0063014f: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x630155u); call_ind(t); }
    /* 00630155: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630158: jne 0x630216 */ if (!fZ) goto L_00630216;
L_0063015e:; BB(0x0063015e);
    /* 0063015e: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00630160: jae 0x6301bc */ if (!fC) goto L_006301bc;
L_00630162:; BB(0x00630162);
    /* 00630162: mov edx, dword ptr [0x6f2564] */ r_edx = R32((u32)(0x6f2564u));
    /* 00630168: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0063016c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063016d: mov ecx, dword ptr [0x711370] */ r_ecx = R32((u32)(0x711370u));
    /* 00630173: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00630175: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00630179: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063017a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063017b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063017d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063017e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00630180: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630181: call dword ptr [0x6330bc] */ { u32 t = R32((u32)(0x6330bcu)); r_esp -= 4; W32(r_esp, 0x630187u); call_ind(t); }
    /* 00630187: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630189: je 0x630216 */ if (fZ) goto L_00630216;
L_0063018f:; BB(0x0063018f);
    /* 0063018f: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00630193: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630195: jne 0x630216 */ if (!fZ) goto L_00630216;
L_00630197:; BB(0x00630197);
    /* 00630197: lea edx, [eax + esi] */ r_edx = (u32)(r_eax+r_esi);
    /* 0063019a: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063019c: ja 0x6301bc */ if ((!fC&&!fZ)) goto L_006301bc;
L_0063019e:; BB(0x0063019e);
    /* 0063019e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006301a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006301a2: jle 0x6301b5 */ if ((fZ||fS!=fO)) goto L_006301b5;
L_006301a4:; BB(0x006301a4);
    /* 006301a4: mov cl, byte ptr [esp + edx + 0x1c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+r_edx+0x1cu))) & 0xffu);
    /* 006301a8: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006301aa: mov byte ptr [esi + edi], cl */ W8((u32)(r_esi+r_edi), (u8)r_ecx);
    /* 006301ad: je 0x6301bc */ if (fZ) goto L_006301bc;
L_006301af:; BB(0x006301af);
    /* 006301af: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006301b0: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006301b1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006301b3: jl 0x6301a4 */ if ((fS!=fO)) goto L_006301a4;
L_006301b5:; BB(0x006301b5);
    /* 006301b5: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006301b8: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006301ba: jb 0x630162 */ if (fC) goto L_00630162;
L_006301bc:; BB(0x006301bc);
    /* 006301bc: mov eax, esi */ r_eax = r_esi;
    /* 006301be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006301bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006301c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006301c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006301c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006301c3: ret  */ FN_RET(0x00630040); r_esp += 4; return;
L_006301c4:; BB(0x006301c4);
    /* 006301c4: mov eax, dword ptr [0x711360] */ r_eax = R32((u32)(0x711360u));
    /* 006301c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006301cb: jne 0x6301e0 */ if (!fZ) goto L_006301e0;
L_006301cd:; BB(0x006301cd);
    /* 006301cd: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006301d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006301d2: call 0x630fb0 */ r_esp -= 4; W32(r_esp, 0x6301d7u); f_00630fb0();
    /* 006301d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006301da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006301db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006301dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006301dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006301de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006301df: ret  */ FN_RET(0x00630040); r_esp += 4; return;
L_006301e0:; BB(0x006301e0);
    /* 006301e0: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 006301e4: mov eax, dword ptr [0x711370] */ r_eax = R32((u32)(0x711370u));
    /* 006301e9: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 006301ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006301ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006301f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006301f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006301f4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006301f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006301f7: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 006301fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006301fd: call dword ptr [0x6330bc] */ { u32 t = R32((u32)(0x6330bcu)); r_esp -= 4; W32(r_esp, 0x630203u); call_ind(t); }
    /* 00630203: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630205: je 0x630216 */ if (fZ) goto L_00630216;
L_00630207:; BB(0x00630207);
    /* 00630207: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0063020b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063020d: jne 0x630216 */ if (!fZ) goto L_00630216;
L_0063020f:; BB(0x0063020f);
    /* 0063020f: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00630210: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630211: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630212: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630213: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00630214: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630215: ret  */ FN_RET(0x00630040); r_esp += 4; return;
L_00630216:; BB(0x00630216);
    /* 00630216: mov dword ptr [0x71145c], 0x2a */ W32((u32)(0x71145cu), 0x2au);
    /* 00630220: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00630223:; BB(0x00630223);
    /* 00630223: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630224: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630225: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630226: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00630227: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630228: ret  */ FN_RET(0x00630040); r_esp += 4; return;
}

void f_00630230(void) /* FUN_00630230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630230);
    /* 00630230: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00630234: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630235: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00630239: mov eax, edx */ r_eax = r_edx;
    /* 0063023b: mov ecx, esi */ r_ecx = r_esi;
    /* 0063023d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063023f: je 0x63025e */ if (fZ) goto L_0063025e;
L_00630241:; BB(0x00630241);
    /* 00630241: cmp word ptr [eax], 0 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00630245: je 0x63024d */ if (fZ) goto L_0063024d;
L_00630247:; BB(0x00630247);
    /* 00630247: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063024a: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0063024b: jne 0x630241 */ if (!fZ) goto L_00630241;
L_0063024d:; BB(0x0063024d);
    /* 0063024d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063024f: je 0x63025e */ if (fZ) goto L_0063025e;
L_00630251:; BB(0x00630251);
    /* 00630251: cmp word ptr [eax], 0 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00630255: jne 0x63025e */ if (!fZ) goto L_0063025e;
L_00630257:; BB(0x00630257);
    /* 00630257: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00630259: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0063025b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063025c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063025d: ret  */ FN_RET(0x00630230); r_esp += 4; return;
L_0063025e:; BB(0x0063025e);
    /* 0063025e: mov eax, esi */ r_eax = r_esi;
    /* 00630260: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630261: ret  */ FN_RET(0x00630230); r_esp += 4; return;
}

void f_00630270(void) /* FUN_00630270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630270);
    /* 00630270: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630271: mov ebx, dword ptr [0x711484] */ r_ebx = R32((u32)(0x711484u));
    /* 00630277: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630278: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630279: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063027b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063027c: jne 0x63029a */ if (!fZ) goto L_0063029a;
L_0063027e:; BB(0x0063027e);
    /* 0063027e: mov eax, dword ptr [0x71148c] */ r_eax = R32((u32)(0x71148cu));
    /* 00630283: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630285: je 0x630296 */ if (fZ) goto L_00630296;
L_00630287:; BB(0x00630287);
    /* 00630287: call 0x6317b0 */ r_esp -= 4; W32(r_esp, 0x63028cu); f_006317b0();
    /* 0063028c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063028e: jne 0x6302f7 */ if (!fZ) goto L_006302f7;
L_00630290:; BB(0x00630290);
    /* 00630290: mov ebx, dword ptr [0x711484] */ r_ebx = R32((u32)(0x711484u));
L_00630296:; BB(0x00630296);
    /* 00630296: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630298: je 0x6302f7 */ if (fZ) goto L_006302f7;
L_0063029a:; BB(0x0063029a);
    /* 0063029a: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0063029e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006302a0: je 0x6302f7 */ if (fZ) goto L_006302f7;
L_006302a2:; BB(0x006302a2);
    /* 006302a2: mov edi, ebp */ r_edi = r_ebp;
    /* 006302a4: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006302a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006302a9: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006302ab: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 006302ad: not ecx */ r_ecx = ~r_ecx;
    /* 006302af: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006302b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006302b2: mov esi, ecx */ r_esi = r_ecx;
    /* 006302b4: je 0x6302f7 */ if (fZ) goto L_006302f7;
L_006302b6:; BB(0x006302b6);
    /* 006302b6: mov edi, edx */ r_edi = r_edx;
    /* 006302b8: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006302bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006302bd: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 006302bf: not ecx */ r_ecx = ~r_ecx;
    /* 006302c1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006302c2: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006302c4: jbe 0x6302db */ if ((fC||fZ)) goto L_006302db;
L_006302c6:; BB(0x006302c6);
    /* 006302c6: cmp byte ptr [esi + edx], 0x3d */ {  u32 a = R8((u32)(r_esi+r_edx)); u32 b = 0x3du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006302ca: jne 0x6302db */ if (!fZ) goto L_006302db;
L_006302cc:; BB(0x006302cc);
    /* 006302cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006302cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006302ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006302cf: call 0x631770 */ r_esp -= 4; W32(r_esp, 0x6302d4u); f_00631770();
    /* 006302d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006302d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006302d9: je 0x6302ec */ if (fZ) goto L_006302ec;
L_006302db:; BB(0x006302db);
    /* 006302db: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006302de: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006302e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006302e3: jne 0x6302b6 */ if (!fZ) goto L_006302b6;
L_006302e5:; BB(0x006302e5);
    /* 006302e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006302e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006302e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006302e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006302ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006302eb: ret  */ FN_RET(0x00630270); r_esp += 4; return;
L_006302ec:; BB(0x006302ec);
    /* 006302ec: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006302ee: lea eax, [esi + eax + 1] */ r_eax = (u32)(r_esi+r_eax+0x1u);
    /* 006302f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006302f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006302f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006302f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006302f6: ret  */ FN_RET(0x00630270); r_esp += 4; return;
L_006302f7:; BB(0x006302f7);
    /* 006302f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006302f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006302f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006302fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006302fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006302fd: ret  */ FN_RET(0x00630270); r_esp += 4; return;
}

void f_00630300(void) /* FUN_00630300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630300);
    /* 00630300: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630302: ret  */ FN_RET(0x00630300); r_esp += 4; return;
}

void f_00630310(void) /* FUN_00630310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630310);
    /* 00630310: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630311: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00630315: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630317: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00630318: je 0x630407 */ if (fZ) goto L_00630407;
L_0063031e:; BB(0x0063031e);
    /* 0063031e: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00630322: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630324: je 0x630407 */ if (fZ) goto L_00630407;
L_0063032a:; BB(0x0063032a);
    /* 0063032a: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0063032c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0063032e: jne 0x630346 */ if (!fZ) goto L_00630346;
L_00630330:; BB(0x00630330);
    /* 00630330: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00630334: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630336: je 0x630407 */ if (fZ) goto L_00630407;
L_0063033c:; BB(0x0063033c);
    /* 0063033c: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 00630341: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630343: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630344: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630345: ret  */ FN_RET(0x00630310); r_esp += 4; return;
L_00630346:; BB(0x00630346);
    /* 00630346: mov ecx, dword ptr [0x711360] */ r_ecx = R32((u32)(0x711360u));
    /* 0063034c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063034e: jne 0x63036b */ if (!fZ) goto L_0063036b;
L_00630350:; BB(0x00630350);
    /* 00630350: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00630354: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630356: je 0x6303ff */ if (fZ) goto L_006303ff;
L_0063035c:; BB(0x0063035c);
    /* 0063035c: movzx ax, al */ r_eax = (r_eax & 0xffff0000u) | (((u32)(u8)r_eax) & 0xffffu);
    /* 00630360: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00630363: mov eax, 1 */ r_eax = 0x1u;
    /* 00630368: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630369: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063036a: ret  */ FN_RET(0x00630310); r_esp += 4; return;
L_0063036b:; BB(0x0063036b);
    /* 0063036b: mov ecx, dword ptr [0x6f2358] */ r_ecx = R32((u32)(0x6f2358u));
    /* 00630371: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00630376: test byte ptr [ecx + eax*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ecx+r_eax*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0063037b: je 0x6303cc */ if (fZ) goto L_006303cc;
L_0063037d:; BB(0x0063037d);
    /* 0063037d: mov eax, dword ptr [0x6f2564] */ r_eax = R32((u32)(0x6f2564u));
    /* 00630382: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630385: jle 0x6303b1 */ if ((fZ||fS!=fO)) goto L_006303b1;
L_00630387:; BB(0x00630387);
    /* 00630387: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00630389: jl 0x6303b3 */ if ((fS!=fO)) goto L_006303b3;
L_0063038b:; BB(0x0063038b);
    /* 0063038b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0063038f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00630391: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630393: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00630396: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630397: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630399: mov eax, dword ptr [0x711370] */ r_eax = R32((u32)(0x711370u));
    /* 0063039e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063039f: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006303a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006303a2: call dword ptr [0x6330cc] */ { u32 t = R32((u32)(0x6330ccu)); r_esp -= 4; W32(r_esp, 0x6303a8u); call_ind(t); }
    /* 006303a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006303aa: mov eax, dword ptr [0x6f2564] */ r_eax = R32((u32)(0x6f2564u));
    /* 006303af: jne 0x630409 */ if (!fZ) goto L_00630409;
L_006303b1:; BB(0x006303b1);
    /* 006303b1: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
L_006303b3:; BB(0x006303b3);
    /* 006303b3: jb 0x6303ef */ if (fC) goto L_006303ef;
L_006303b5:; BB(0x006303b5);
    /* 006303b5: mov cl, byte ptr [esi + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 006303b8: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006303ba: jne 0x630409 */ if (!fZ) goto L_00630409;
L_006303bc:; BB(0x006303bc);
    /* 006303bc: mov dword ptr [0x71145c], 0x2a */ W32((u32)(0x71145cu), 0x2au);
    /* 006303c6: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006303c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006303ca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006303cb: ret  */ FN_RET(0x00630310); r_esp += 4; return;
L_006303cc:; BB(0x006303cc);
    /* 006303cc: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006303d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006303d2: mov edx, dword ptr [0x711370] */ r_edx = R32((u32)(0x711370u));
    /* 006303d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006303da: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 006303dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006303de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006303df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006303e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006303e2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006303e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006303e5: call dword ptr [0x6330cc] */ { u32 t = R32((u32)(0x6330ccu)); r_esp -= 4; W32(r_esp, 0x6303ebu); call_ind(t); }
    /* 006303eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006303ed: jne 0x6303ff */ if (!fZ) goto L_006303ff;
L_006303ef:; BB(0x006303ef);
    /* 006303ef: mov dword ptr [0x71145c], 0x2a */ W32((u32)(0x71145cu), 0x2au);
    /* 006303f9: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006303fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006303fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006303fe: ret  */ FN_RET(0x00630310); r_esp += 4; return;
L_006303ff:; BB(0x006303ff);
    /* 006303ff: mov eax, 1 */ r_eax = 0x1u;
    /* 00630404: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630405: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630406: ret  */ FN_RET(0x00630310); r_esp += 4; return;
L_00630407:; BB(0x00630407);
    /* 00630407: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00630409:; BB(0x00630409);
    /* 00630409: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063040a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063040b: ret  */ FN_RET(0x00630310); r_esp += 4; return;
}

void f_00630430(void) /* FUN_00630430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630430);
    /* 00630430: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630431: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00630435: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630438: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630439: je 0x6304ad */ if (fZ) goto L_006304ad;
L_0063043b:; BB(0x0063043b);
    /* 0063043b: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0063043f: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00630442: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00630444: jne 0x63044e */ if (!fZ) goto L_0063044e;
L_00630446:; BB(0x00630446);
    /* 00630446: test al, 0x80 */ {  u32 a = (u8)r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00630448: je 0x6304ad */ if (fZ) goto L_006304ad;
L_0063044a:; BB(0x0063044a);
    /* 0063044a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0063044c: jne 0x6304ad */ if (!fZ) goto L_006304ad;
L_0063044e:; BB(0x0063044e);
    /* 0063044e: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00630451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630453: jne 0x63045e */ if (!fZ) goto L_0063045e;
L_00630455:; BB(0x00630455);
    /* 00630455: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630456: call 0x62c2a0 */ r_esp -= 4; W32(r_esp, 0x63045bu); f_0062c2a0();
    /* 0063045b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063045e:; BB(0x0063045e);
    /* 0063045e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00630460: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00630463: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630465: jne 0x630471 */ if (!fZ) goto L_00630471;
L_00630467:; BB(0x00630467);
    /* 00630467: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0063046a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063046c: jne 0x6304ad */ if (!fZ) goto L_006304ad;
L_0063046e:; BB(0x0063046e);
    /* 0063046e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063046f: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_00630471:; BB(0x00630471);
    /* 00630471: test byte ptr [esi + 0xc], 0x40 */ {  u32 a = R8((u32)(r_esi+0xcu)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00630475: je 0x63048b */ if (fZ) goto L_0063048b;
L_00630477:; BB(0x00630477);
    /* 00630477: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00630479: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0063047a: mov eax, edx */ r_eax = r_edx;
    /* 0063047c: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0063047e: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00630480: je 0x630492 */ if (fZ) goto L_00630492;
L_00630482:; BB(0x00630482);
    /* 00630482: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00630483: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00630485: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00630488: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630489: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063048a: ret  */ FN_RET(0x00630430); r_esp += 4; return;
L_0063048b:; BB(0x0063048b);
    /* 0063048b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063048d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063048e: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00630490: mov byte ptr [eax], bl */ W8((u32)(r_eax), (u8)r_ebx);
L_00630492:; BB(0x00630492);
    /* 00630492: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00630495: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00630498: and al, 0xef */ {  u32 a = (u8)r_eax; u32 b = 0xefu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0063049a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063049b: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0063049d: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 006304a0: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 006304a3: mov eax, ebx */ r_eax = r_ebx;
    /* 006304a5: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006304aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006304ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006304ac: ret  */ FN_RET(0x00630430); r_esp += 4; return;
L_006304ad:; BB(0x006304ad);
    /* 006304ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006304ae: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006304b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006304b2: ret  */ FN_RET(0x00630430); r_esp += 4; return;
}

void f_006304c0(void) /* FUN_006304c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006304c0);
    /* 006304c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006304c1: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006304c5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006304c7: cmp dword ptr [eax], 0xe06d7363 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xe06d7363u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006304cd: jne 0x6304ec */ if (!fZ) goto L_006304ec;
L_006304cf:; BB(0x006304cf);
    /* 006304cf: cmp dword ptr [eax + 0x10], 3 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006304d3: jne 0x6304ec */ if (!fZ) goto L_006304ec;
L_006304d5:; BB(0x006304d5);
    /* 006304d5: cmp dword ptr [eax + 0x14], 0x19930520 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x19930520u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006304dc: jne 0x6304ec */ if (!fZ) goto L_006304ec;
L_006304de:; BB(0x006304de);
    /* 006304de: call 0x631850 */ r_esp -= 4; W32(r_esp, 0x6304e3u); f_00631850();
    /* 006304e3: mov eax, 1 */ r_eax = 0x1u;
    /* 006304e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006304e9: ret 4 */ FN_RET(0x006304c0); r_esp += 8; return;
L_006304ec:; BB(0x006304ec);
    /* 006304ec: mov eax, dword ptr [0x711864] */ r_eax = R32((u32)(0x711864u));
    /* 006304f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006304f3: je 0x63050d */ if (fZ) goto L_0063050d;
L_006304f5:; BB(0x006304f5);
    /* 006304f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006304f6: call 0x631830 */ r_esp -= 4; W32(r_esp, 0x6304fbu); f_00631830();
    /* 006304fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006304fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630500: je 0x63050d */ if (fZ) goto L_0063050d;
L_00630502:; BB(0x00630502);
    /* 00630502: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630503: call dword ptr [0x711864] */ { u32 t = R32((u32)(0x711864u)); r_esp -= 4; W32(r_esp, 0x630509u); call_ind(t); }
    /* 00630509: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063050a: ret 4 */ FN_RET(0x006304c0); r_esp += 8; return;
L_0063050d:; BB(0x0063050d);
    /* 0063050d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063050f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630510: ret 4 */ FN_RET(0x006304c0); r_esp += 8; return;
}

void f_00630550(void) /* FUN_00630550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630550);
    /* 00630550: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630551: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630552: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630553: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00630557: imul esi, dword ptr [esp + 0x10] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_esp+0x10u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063055c: cmp esi, -0x20 */ {  u32 a = r_esi; u32 b = 0xffffffe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063055f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00630560: ja 0x630573 */ if ((!fC&&!fZ)) goto L_00630573;
L_00630562:; BB(0x00630562);
    /* 00630562: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00630564: jbe 0x63056e */ if ((fC||fZ)) goto L_0063056e;
L_00630566:; BB(0x00630566);
    /* 00630566: add esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630569: and esi, 0xfffffff0 */ {  u32 a = r_esi; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0063056c: jmp 0x630573 */ goto L_00630573;
L_0063056e:; BB(0x0063056e);
    /* 0063056e: mov esi, 0x10 */ r_esi = 0x10u;
L_00630573:; BB(0x00630573);
    /* 00630573: mov ebx, dword ptr [0x6330dc] */ r_ebx = R32((u32)(0x6330dcu));
L_00630579:; BB(0x00630579);
    /* 00630579: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063057b: cmp esi, -0x20 */ {  u32 a = r_esi; u32 b = 0xffffffe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063057e: ja 0x6305c2 */ if ((!fC&&!fZ)) goto L_006305c2;
L_00630580:; BB(0x00630580);
    /* 00630580: cmp esi, dword ptr [0x6f48f4] */ {  u32 a = r_esi; u32 b = R32((u32)(0x6f48f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00630586: ja 0x6305b0 */ if ((!fC&&!fZ)) goto L_006305b0;
L_00630588:; BB(0x00630588);
    /* 00630588: mov eax, esi */ r_eax = r_esi;
    /* 0063058a: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0063058d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063058e: call 0x62bb50 */ r_esp -= 4; W32(r_esp, 0x630593u); f_0062bb50();
    /* 00630593: mov edx, eax */ r_edx = r_eax;
    /* 00630595: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630598: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063059a: je 0x6305b4 */ if (fZ) goto L_006305b4;
L_0063059c:; BB(0x0063059c);
    /* 0063059c: mov ecx, esi */ r_ecx = r_esi;
    /* 0063059e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006305a0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006305a2: mov edi, edx */ r_edi = r_edx;
    /* 006305a4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006305a7: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006305a9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006305ab: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006305ae: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
L_006305b0:; BB(0x006305b0);
    /* 006305b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006305b2: jne 0x6305e1 */ if (!fZ) goto L_006305e1;
L_006305b4:; BB(0x006305b4);
    /* 006305b4: mov ecx, dword ptr [0x7129e4] */ r_ecx = R32((u32)(0x7129e4u));
    /* 006305ba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006305bb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006305bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006305be: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x6305c0u); call_ind(t); }
    /* 006305c0: mov edx, eax */ r_edx = r_eax;
L_006305c2:; BB(0x006305c2);
    /* 006305c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006305c4: jne 0x6305e1 */ if (!fZ) goto L_006305e1;
L_006305c6:; BB(0x006305c6);
    /* 006305c6: mov eax, dword ptr [0x7114a8] */ r_eax = R32((u32)(0x7114a8u));
    /* 006305cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006305cd: je 0x6305e1 */ if (fZ) goto L_006305e1;
L_006305cf:; BB(0x006305cf);
    /* 006305cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006305d0: call 0x62b790 */ r_esp -= 4; W32(r_esp, 0x6305d5u); f_0062b790();
    /* 006305d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006305d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006305da: jne 0x630579 */ if (!fZ) goto L_00630579;
L_006305dc:; BB(0x006305dc);
    /* 006305dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006305dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006305de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006305df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006305e0: ret  */ FN_RET(0x00630550); r_esp += 4; return;
L_006305e1:; BB(0x006305e1);
    /* 006305e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006305e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006305e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006305e4: mov eax, edx */ r_eax = r_edx;
    /* 006305e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006305e7: ret  */ FN_RET(0x00630550); r_esp += 4; return;
}

void f_00630660(void) /* FUN_00630660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630660);
    /* 00630660: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630663: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 00630667: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630668: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630669: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 0063066d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063066f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00630670: mov ax, word ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00630673: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00630675: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00630676: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0063067a: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063067d: ja 0x6306f0 */ if ((!fC&&!fZ)) goto L_006306f0;
L_0063067f:; BB(0x0063067f);
    /* 0063067f: jmp dword ptr [ecx*4 + 0x630760] */ { u32 t = R32((u32)(r_ecx*4+0x630760u)); switch (t) { case 0x630686u: goto L_00630686; case 0x630744u: goto L_00630744; case 0x630730u: goto L_00630730; case 0x63073au: goto L_0063073a; case 0x6306f0u: goto L_006306f0; case 0x630758u: goto L_00630758; case 0x63074eu: goto L_0063074e; default: UNSUP(0x0063067f, "jump table entry is not a known target"); } }
L_00630686:; BB(0x00630686);
    /* 00630686: mov edi, 8 */ r_edi = 0x8u;
L_0063068b:; BB(0x0063068b);
    /* 0063068b: lea ebx, [esi + 0x18] */ r_ebx = (u32)(r_esi+0x18u);
    /* 0063068e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063068f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630690: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00630691: call 0x629cb0 */ r_esp -= 4; W32(r_esp, 0x630696u); f_00629cb0();
    /* 00630696: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630699: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063069b: jne 0x6306ec */ if (!fZ) goto L_006306ec;
L_0063069d:; BB(0x0063069d);
    /* 0063069d: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 006306a1: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006306a4: je 0x6306b7 */ if (fZ) goto L_006306b7;
L_006306a6:; BB(0x006306a6);
    /* 006306a6: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006306a9: je 0x6306b7 */ if (fZ) goto L_006306b7;
L_006306ab:; BB(0x006306ab);
    /* 006306ab: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006306ae: je 0x6306b7 */ if (fZ) goto L_006306b7;
L_006306b0:; BB(0x006306b0);
    /* 006306b0: and dword ptr [esp + 0x44], 0xfffffffe */ { u32 ad = (u32)(r_esp+0x44u);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006306b5: jmp 0x6306d3 */ goto L_006306d3;
L_006306b7:; BB(0x006306b7);
    /* 006306b7: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 006306bb: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 006306be: and edx, 0xffffffe3 */ {  u32 a = r_edx; u32 b = 0xffffffe3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006306c1: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 006306c5: or edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006306c8: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 006306cc: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 006306cf: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
L_006306d3:; BB(0x006306d3);
    /* 006306d3: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 006306d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006306d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006306d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006306d9: lea edx, [esp + 0x7c] */ r_edx = (u32)(r_esp+0x7cu);
    /* 006306dd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006306de: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 006306e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006306e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006306e4: call 0x629970 */ r_esp -= 4; W32(r_esp, 0x6306e9u); f_00629970();
    /* 006306e9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006306ec:; BB(0x006306ec);
    /* 006306ec: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
L_006306f0:; BB(0x006306f0);
    /* 006306f0: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006306f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006306f6: call 0x62a310 */ r_esp -= 4; W32(r_esp, 0x6306fbu); f_0062a310();
    /* 006306fb: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 006306fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630700: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630702: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630705: je 0x63071a */ if (fZ) goto L_0063071a;
L_00630707:; BB(0x00630707);
    /* 00630707: mov ecx, dword ptr [0x6f503c] */ r_ecx = R32((u32)(0x6f503cu));
    /* 0063070d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063070f: jne 0x63071a */ if (!fZ) goto L_0063071a;
L_00630711:; BB(0x00630711);
    /* 00630711: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630712: call 0x630300 */ r_esp -= 4; W32(r_esp, 0x630717u); f_00630300();
    /* 00630717: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063071a:; BB(0x0063071a);
    /* 0063071a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063071c: jne 0x630729 */ if (!fZ) goto L_00630729;
L_0063071e:; BB(0x0063071e);
    /* 0063071e: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00630720: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630721: call 0x62a090 */ r_esp -= 4; W32(r_esp, 0x630726u); f_0062a090();
    /* 00630726: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00630729:; BB(0x00630729);
    /* 00630729: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063072a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063072b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063072c: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063072f: ret  */ FN_RET(0x00630660); r_esp += 4; return;
L_00630730:; BB(0x00630730);
    /* 00630730: mov edi, 0x11 */ r_edi = 0x11u;
    /* 00630735: jmp 0x63068b */ goto L_0063068b;
L_0063073a:; BB(0x0063073a);
    /* 0063073a: mov edi, 0x12 */ r_edi = 0x12u;
    /* 0063073f: jmp 0x63068b */ goto L_0063068b;
L_00630744:; BB(0x00630744);
    /* 00630744: mov edi, 4 */ r_edi = 0x4u;
    /* 00630749: jmp 0x63068b */ goto L_0063068b;
L_0063074e:; BB(0x0063074e);
    /* 0063074e: mov edi, 0x10 */ r_edi = 0x10u;
    /* 00630753: jmp 0x63068b */ goto L_0063068b;
L_00630758:; BB(0x00630758);
    /* 00630758: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
    /* 0063075e: jmp 0x6306f0 */ goto L_006306f0;
}

void f_00630780(void) /* FUN_00630780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630780);
    /* 00630780: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630783: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00630787: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630788: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 0063078c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063078d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063078e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00630792: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00630793: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630795: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00630797: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00630799: mov edi, ecx */ r_edi = r_ecx;
    /* 0063079b: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0063079f: mov dword ptr [esp + 0x24], 1 */ W32((u32)(r_esp+0x24u), 0x1u);
    /* 006307a7: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 006307ab: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006307af: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006307b3: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006307b7: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006307bb: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006307bf: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006307c3: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006307c7: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006307cb: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006307cd: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
L_006307d1:; BB(0x006307d1);
    /* 006307d1: mov cl, byte ptr [ebp] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 006307d4: cmp cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006307d7: je 0x6307e8 */ if (fZ) goto L_006307e8;
L_006307d9:; BB(0x006307d9);
    /* 006307d9: cmp cl, 9 */ {  u32 a = (u8)r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006307dc: je 0x6307e8 */ if (fZ) goto L_006307e8;
L_006307de:; BB(0x006307de);
    /* 006307de: cmp cl, 0xa */ {  u32 a = (u8)r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006307e1: je 0x6307e8 */ if (fZ) goto L_006307e8;
L_006307e3:; BB(0x006307e3);
    /* 006307e3: cmp cl, 0xd */ {  u32 a = (u8)r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006307e6: jne 0x6307eb */ if (!fZ) goto L_006307eb;
L_006307e8:; BB(0x006307e8);
    /* 006307e8: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006307e9: jmp 0x6307d1 */ goto L_006307d1;
L_006307eb:; BB(0x006307eb);
    /* 006307eb: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006307f0: jmp 0x6307f6 */ goto L_006307f6;
L_006307f2:; BB(0x006307f2);
    /* 006307f2: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_006307f6:; BB(0x006307f6);
    /* 006307f6: mov bl, byte ptr [ebp] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 006307f9: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006307fa: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006307fd: mov byte ptr [esp + 0x7c], bl */ W8((u32)(r_esp+0x7cu), (u8)r_ebx);
    /* 00630801: ja 0x630c53 */ if ((!fC&&!fZ)) goto L_00630c53;
L_00630807:; BB(0x00630807);
    /* 00630807: jmp dword ptr [eax*4 + 0x630de0] */ { u32 t = R32((u32)(r_eax*4+0x630de0u)); switch (t) { case 0x63080eu: goto L_0063080e; case 0x630875u: goto L_00630875; case 0x6308bdu: goto L_006308bd; case 0x6308fbu: goto L_006308fb; case 0x6309a1u: goto L_006309a1; case 0x630a5eu: goto L_00630a5e; case 0x630abcu: goto L_00630abc; case 0x630b1fu: goto L_00630b1f; case 0x630af1u: goto L_00630af1; case 0x630b4eu: goto L_00630b4e; case 0x630c53u: goto L_00630c53; case 0x630c0fu: goto L_00630c0f; case 0x630a53u: goto L_00630a53; case 0x6308f4u: goto L_006308f4; case 0x630a49u: goto L_00630a49; case 0x630c4du: goto L_00630c4d; default: UNSUP(0x00630807, "jump table entry is not a known target"); } }
L_0063080e:; BB(0x0063080e);
    /* 0063080e: cmp bl, 0x31 */ {  u32 a = (u8)r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00630811: jl 0x630822 */ if ((fS!=fO)) goto L_00630822;
L_00630813:; BB(0x00630813);
    /* 00630813: cmp bl, 0x39 */ {  u32 a = (u8)r_ebx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00630816: jg 0x630822 */ if ((!fZ&&fS==fO)) goto L_00630822;
L_00630818:; BB(0x00630818);
    /* 00630818: mov eax, 3 */ r_eax = 0x3u;
    /* 0063081d: jmp 0x630c52 */ goto L_00630c52;
L_00630822:; BB(0x00630822);
    /* 00630822: cmp bl, byte ptr [0x6f2568] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(0x6f2568u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00630828: jne 0x630834 */ if (!fZ) goto L_00630834;
L_0063082a:; BB(0x0063082a);
    /* 0063082a: mov eax, 5 */ r_eax = 0x5u;
    /* 0063082f: jmp 0x630c53 */ goto L_00630c53;
L_00630834:; BB(0x00630834);
    /* 00630834: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 00630837: sub eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0063083a: je 0x630863 */ if (fZ) goto L_00630863;
L_0063083c:; BB(0x0063083c);
    /* 0063083c: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0063083f: je 0x630851 */ if (fZ) goto L_00630851;
L_00630841:; BB(0x00630841);
    /* 00630841: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00630844: jne 0x630c4d */ if (!fZ) goto L_00630c4d;
L_0063084a:; BB(0x0063084a);
    /* 0063084a: mov eax, ecx */ r_eax = r_ecx;
    /* 0063084c: jmp 0x630c53 */ goto L_00630c53;
L_00630851:; BB(0x00630851);
    /* 00630851: mov eax, 2 */ r_eax = 0x2u;
    /* 00630856: mov dword ptr [esp + 0x34], 0x8000 */ W32((u32)(r_esp+0x34u), 0x8000u);
    /* 0063085e: jmp 0x630c53 */ goto L_00630c53;
L_00630863:; BB(0x00630863);
    /* 00630863: mov eax, 2 */ r_eax = 0x2u;
    /* 00630868: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 00630870: jmp 0x630c53 */ goto L_00630c53;
L_00630875:; BB(0x00630875);
    /* 00630875: cmp bl, 0x31 */ {  u32 a = (u8)r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00630878: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0063087c: jl 0x63088d */ if ((fS!=fO)) goto L_0063088d;
L_0063087e:; BB(0x0063087e);
    /* 0063087e: cmp bl, 0x39 */ {  u32 a = (u8)r_ebx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00630881: jg 0x63088d */ if ((!fZ&&fS==fO)) goto L_0063088d;
L_00630883:; BB(0x00630883);
    /* 00630883: mov eax, 3 */ r_eax = 0x3u;
    /* 00630888: jmp 0x630c52 */ goto L_00630c52;
L_0063088d:; BB(0x0063088d);
    /* 0063088d: cmp bl, byte ptr [0x6f2568] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(0x6f2568u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00630893: jne 0x63089f */ if (!fZ) goto L_0063089f;
L_00630895:; BB(0x00630895);
    /* 00630895: mov eax, 4 */ r_eax = 0x4u;
    /* 0063089a: jmp 0x630c53 */ goto L_00630c53;
L_0063089f:; BB(0x0063089f);
    /* 0063089f: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 006308a2: add eax, -0x2b */ {  u32 a = r_eax; u32 b = 0xffffffd5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006308a5: cmp eax, 0x3a */ {  u32 a = r_eax; u32 b = 0x3au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006308a8: ja 0x630c4d */ if ((!fC&&!fZ)) goto L_00630c4d;
L_006308ae:; BB(0x006308ae);
    /* 006308ae: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006308b0: mov dl, byte ptr [eax + 0x630e28] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x630e28u))) & 0xffu);
    /* 006308b6: jmp dword ptr [edx*4 + 0x630e10] */ { u32 t = R32((u32)(r_edx*4+0x630e10u)); switch (t) { case 0x630c0fu: goto L_00630c0f; case 0x630c53u: goto L_00630c53; case 0x630b4eu: goto L_00630b4e; case 0x630af1u: goto L_00630af1; case 0x630b1fu: goto L_00630b1f; case 0x630abcu: goto L_00630abc; case 0x630a5eu: goto L_00630a5e; case 0x6309a1u: goto L_006309a1; case 0x6308fbu: goto L_006308fb; case 0x6308bdu: goto L_006308bd; case 0x630875u: goto L_00630875; case 0x63080eu: goto L_0063080e; case 0x630a53u: goto L_00630a53; case 0x6308f4u: goto L_006308f4; case 0x630a49u: goto L_00630a49; case 0x630c4du: goto L_00630c4d; default: UNSUP(0x006308b6, "jump table entry is not a known target"); } }
L_006308bd:; BB(0x006308bd);
    /* 006308bd: cmp bl, 0x31 */ {  u32 a = (u8)r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 006308c0: jl 0x6308d1 */ if ((fS!=fO)) goto L_006308d1;
L_006308c2:; BB(0x006308c2);
    /* 006308c2: cmp bl, 0x39 */ {  u32 a = (u8)r_ebx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 006308c5: jg 0x6308d1 */ if ((!fZ&&fS==fO)) goto L_006308d1;
L_006308c7:; BB(0x006308c7);
    /* 006308c7: mov eax, 3 */ r_eax = 0x3u;
    /* 006308cc: jmp 0x630c52 */ goto L_00630c52;
L_006308d1:; BB(0x006308d1);
    /* 006308d1: cmp bl, byte ptr [0x6f2568] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(0x6f2568u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006308d7: jne 0x6308e3 */ if (!fZ) goto L_006308e3;
L_006308d9:; BB(0x006308d9);
    /* 006308d9: mov eax, 5 */ r_eax = 0x5u;
    /* 006308de: jmp 0x630c53 */ goto L_00630c53;
L_006308e3:; BB(0x006308e3);
    /* 006308e3: cmp bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006308e6: je 0x6308f4 */ if (fZ) goto L_006308f4;
L_006308e8:; BB(0x006308e8);
    /* 006308e8: mov eax, 0xa */ r_eax = 0xau;
    /* 006308ed: mov ebp, edi */ r_ebp = r_edi;
    /* 006308ef: jmp 0x630c53 */ goto L_00630c53;
L_006308f4:; BB(0x006308f4);
    /* 006308f4: mov eax, ecx */ r_eax = r_ecx;
    /* 006308f6: jmp 0x630c53 */ goto L_00630c53;
L_006308fb:; BB(0x006308fb);
    /* 006308fb: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
L_006308ff:; BB(0x006308ff);
    /* 006308ff: cmp dword ptr [0x6f2564], ecx */ {  u32 a = R32((u32)(0x6f2564u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630905: jle 0x630922 */ if ((fZ||fS!=fO)) goto L_00630922;
L_00630907:; BB(0x00630907);
    /* 00630907: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 0063090b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063090d: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00630912: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630913: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x630918u); f_00628c40();
    /* 00630918: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063091b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00630920: jmp 0x630937 */ goto L_00630937;
L_00630922:; BB(0x00630922);
    /* 00630922: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 00630926: mov eax, dword ptr [0x6f2358] */ r_eax = R32((u32)(0x6f2358u));
    /* 0063092b: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00630931: mov al, byte ptr [eax + edx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_edx*2))) & 0xffu);
    /* 00630934: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00630937:; BB(0x00630937);
    /* 00630937: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630939: je 0x63096c */ if (fZ) goto L_0063096c;
L_0063093b:; BB(0x0063093b);
    /* 0063093b: cmp esi, 0x19 */ {  u32 a = r_esi; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0063093e: jae 0x630959 */ if (!fC) goto L_00630959;
L_00630940:; BB(0x00630940);
    /* 00630940: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00630944: sub bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00630947: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630948: mov byte ptr [eax], bl */ W8((u32)(r_eax), (u8)r_ebx);
    /* 0063094a: mov bl, byte ptr [ebp] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 0063094d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063094e: mov byte ptr [esp + 0x7c], bl */ W8((u32)(r_esp+0x7cu), (u8)r_ebx);
    /* 00630952: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00630956: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00630957: jmp 0x6308ff */ goto L_006308ff;
L_00630959:; BB(0x00630959);
    /* 00630959: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0063095d: mov bl, byte ptr [ebp] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 00630960: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00630961: mov byte ptr [esp + 0x7c], bl */ W8((u32)(r_esp+0x7cu), (u8)r_ebx);
    /* 00630965: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00630969: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0063096a: jmp 0x6308ff */ goto L_006308ff;
L_0063096c:; BB(0x0063096c);
    /* 0063096c: mov al, byte ptr [0x6f2568] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x6f2568u))) & 0xffu);
    /* 00630971: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00630975: cmp bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00630977: jne 0x630983 */ if (!fZ) goto L_00630983;
L_00630979:; BB(0x00630979);
    /* 00630979: mov eax, 4 */ r_eax = 0x4u;
    /* 0063097e: jmp 0x630c53 */ goto L_00630c53;
L_00630983:; BB(0x00630983);
    /* 00630983: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 00630986: add eax, -0x2b */ {  u32 a = r_eax; u32 b = 0xffffffd5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00630989: cmp eax, 0x3a */ {  u32 a = r_eax; u32 b = 0x3au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063098c: ja 0x630c4d */ if ((!fC&&!fZ)) goto L_00630c4d;
L_00630992:; BB(0x00630992);
    /* 00630992: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00630994: mov dl, byte ptr [eax + 0x630e78] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x630e78u))) & 0xffu);
    /* 0063099a: jmp dword ptr [edx*4 + 0x630e64] */ { u32 t = R32((u32)(r_edx*4+0x630e64u)); switch (t) { case 0x630a53u: goto L_00630a53; case 0x630a49u: goto L_00630a49; case 0x630c4du: goto L_00630c4d; default: UNSUP(0x0063099a, "jump table entry is not a known target"); } }
L_006309a1:; BB(0x006309a1);
    /* 006309a1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006309a3: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 006309a7: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 006309ab: jne 0x6309c4 */ if (!fZ) goto L_006309c4;
L_006309ad:; BB(0x006309ad);
    /* 006309ad: cmp bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006309b0: jne 0x6309c4 */ if (!fZ) goto L_006309c4;
L_006309b2:; BB(0x006309b2);
    /* 006309b2: mov bl, byte ptr [ebp] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 006309b5: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006309b6: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006309b7: cmp bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006309ba: mov byte ptr [esp + 0x7c], bl */ W8((u32)(r_esp+0x7cu), (u8)r_ebx);
    /* 006309be: je 0x6309b2 */ if (fZ) goto L_006309b2;
L_006309c0:; BB(0x006309c0);
    /* 006309c0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_006309c4:; BB(0x006309c4);
    /* 006309c4: cmp dword ptr [0x6f2564], ecx */ {  u32 a = R32((u32)(0x6f2564u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006309ca: jle 0x6309e7 */ if ((fZ||fS!=fO)) goto L_006309e7;
L_006309cc:; BB(0x006309cc);
    /* 006309cc: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 006309d0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006309d2: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006309d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006309d8: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x6309ddu); f_00628c40();
    /* 006309dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006309e0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006309e5: jmp 0x6309fc */ goto L_006309fc;
L_006309e7:; BB(0x006309e7);
    /* 006309e7: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 006309eb: mov eax, dword ptr [0x6f2358] */ r_eax = R32((u32)(0x6f2358u));
    /* 006309f0: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006309f6: mov al, byte ptr [eax + edx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_edx*2))) & 0xffu);
    /* 006309f9: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_006309fc:; BB(0x006309fc);
    /* 006309fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006309fe: je 0x630a27 */ if (fZ) goto L_00630a27;
L_00630a00:; BB(0x00630a00);
    /* 00630a00: cmp esi, 0x19 */ {  u32 a = r_esi; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00630a03: jae 0x630a1d */ if (!fC) goto L_00630a1d;
L_00630a05:; BB(0x00630a05);
    /* 00630a05: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00630a09: sub bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00630a0c: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630a0d: mov byte ptr [eax], bl */ W8((u32)(r_eax), (u8)r_ebx);
    /* 00630a0f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00630a10: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00630a14: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00630a18: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00630a19: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
L_00630a1d:; BB(0x00630a1d);
    /* 00630a1d: mov bl, byte ptr [ebp] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 00630a20: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00630a21: mov byte ptr [esp + 0x7c], bl */ W8((u32)(r_esp+0x7cu), (u8)r_ebx);
    /* 00630a25: jmp 0x6309c4 */ goto L_006309c4;
L_00630a27:; BB(0x00630a27);
    /* 00630a27: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 00630a2a: add eax, -0x2b */ {  u32 a = r_eax; u32 b = 0xffffffd5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00630a2d: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00630a31: cmp eax, 0x3a */ {  u32 a = r_eax; u32 b = 0x3au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00630a34: ja 0x630c4d */ if ((!fC&&!fZ)) goto L_00630c4d;
L_00630a3a:; BB(0x00630a3a);
    /* 00630a3a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00630a3c: mov dl, byte ptr [eax + 0x630ec8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x630ec8u))) & 0xffu);
    /* 00630a42: jmp dword ptr [edx*4 + 0x630eb4] */ { u32 t = R32((u32)(r_edx*4+0x630eb4u)); switch (t) { case 0x630a53u: goto L_00630a53; case 0x630a49u: goto L_00630a49; case 0x630c4du: goto L_00630c4d; default: UNSUP(0x00630a42, "jump table entry is not a known target"); } }
L_00630a49:; BB(0x00630a49);
    /* 00630a49: mov eax, 6 */ r_eax = 0x6u;
    /* 00630a4e: jmp 0x630c53 */ goto L_00630c53;
L_00630a53:; BB(0x00630a53);
    /* 00630a53: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00630a54: mov eax, 0xb */ r_eax = 0xbu;
    /* 00630a59: jmp 0x630c53 */ goto L_00630c53;
L_00630a5e:; BB(0x00630a5e);
    /* 00630a5e: mov eax, dword ptr [0x6f2564] */ r_eax = R32((u32)(0x6f2564u));
    /* 00630a63: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00630a67: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630a69: jle 0x630a81 */ if ((fZ||fS!=fO)) goto L_00630a81;
L_00630a6b:; BB(0x00630a6b);
    /* 00630a6b: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 00630a6f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00630a71: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00630a76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630a77: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x630a7cu); f_00628c40();
    /* 00630a7c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630a7f: jmp 0x630a97 */ goto L_00630a97;
L_00630a81:; BB(0x00630a81);
    /* 00630a81: mov ecx, dword ptr [esp + 0x7c] */ r_ecx = R32((u32)(r_esp+0x7cu));
    /* 00630a85: mov edx, dword ptr [0x6f2358] */ r_edx = R32((u32)(0x6f2358u));
    /* 00630a8b: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00630a91: mov al, byte ptr [edx + ecx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx*2))) & 0xffu);
    /* 00630a94: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00630a97:; BB(0x00630a97);
    /* 00630a97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630a99: je 0x630aab */ if (fZ) goto L_00630aab;
L_00630a9b:; BB(0x00630a9b);
    /* 00630a9b: mov eax, 4 */ r_eax = 0x4u;
    /* 00630aa0: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00630aa1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00630aa6: jmp 0x630c53 */ goto L_00630c53;
L_00630aab:; BB(0x00630aab);
    /* 00630aab: mov eax, 0xa */ r_eax = 0xau;
    /* 00630ab0: mov ebp, edi */ r_ebp = r_edi;
    /* 00630ab2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00630ab7: jmp 0x630c53 */ goto L_00630c53;
L_00630abc:; BB(0x00630abc);
    /* 00630abc: lea edi, [ebp - 2] */ r_edi = (u32)(r_ebp+0xfffffffeu);
    /* 00630abf: cmp bl, 0x31 */ {  u32 a = (u8)r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00630ac2: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00630ac6: jl 0x630ad7 */ if ((fS!=fO)) goto L_00630ad7;
L_00630ac8:; BB(0x00630ac8);
    /* 00630ac8: cmp bl, 0x39 */ {  u32 a = (u8)r_ebx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00630acb: jg 0x630ad7 */ if ((!fZ&&fS==fO)) goto L_00630ad7;
L_00630acd:; BB(0x00630acd);
    /* 00630acd: mov eax, 9 */ r_eax = 0x9u;
    /* 00630ad2: jmp 0x630c52 */ goto L_00630c52;
L_00630ad7:; BB(0x00630ad7);
    /* 00630ad7: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 00630ada: sub eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00630add: je 0x630c46 */ if (fZ) goto L_00630c46;
L_00630ae3:; BB(0x00630ae3);
    /* 00630ae3: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00630ae6: je 0x630c37 */ if (fZ) goto L_00630c37;
L_00630aec:; BB(0x00630aec);
    /* 00630aec: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00630aef: jmp 0x630b36 */ goto L_00630b36;
L_00630af1:; BB(0x00630af1);
    /* 00630af1: cmp bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00630af4: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00630af8: jne 0x630b03 */ if (!fZ) goto L_00630b03;
L_00630afa:; BB(0x00630afa);
    /* 00630afa: mov bl, byte ptr [ebp] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 00630afd: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00630afe: cmp bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00630b01: je 0x630afa */ if (fZ) goto L_00630afa;
L_00630b03:; BB(0x00630b03);
    /* 00630b03: cmp bl, 0x31 */ {  u32 a = (u8)r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00630b06: jl 0x630c4d */ if ((fS!=fO)) goto L_00630c4d;
L_00630b0c:; BB(0x00630b0c);
    /* 00630b0c: cmp bl, 0x39 */ {  u32 a = (u8)r_ebx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00630b0f: jg 0x630c4d */ if ((!fZ&&fS==fO)) goto L_00630c4d;
L_00630b15:; BB(0x00630b15);
    /* 00630b15: mov eax, 9 */ r_eax = 0x9u;
    /* 00630b1a: jmp 0x630c52 */ goto L_00630c52;
L_00630b1f:; BB(0x00630b1f);
    /* 00630b1f: cmp bl, 0x31 */ {  u32 a = (u8)r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00630b22: jl 0x630b33 */ if ((fS!=fO)) goto L_00630b33;
L_00630b24:; BB(0x00630b24);
    /* 00630b24: cmp bl, 0x39 */ {  u32 a = (u8)r_ebx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00630b27: jg 0x630b33 */ if ((!fZ&&fS==fO)) goto L_00630b33;
L_00630b29:; BB(0x00630b29);
    /* 00630b29: mov eax, 9 */ r_eax = 0x9u;
    /* 00630b2e: jmp 0x630c52 */ goto L_00630c52;
L_00630b33:; BB(0x00630b33);
    /* 00630b33: cmp bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
L_00630b36:; BB(0x00630b36);
    /* 00630b36: je 0x630b44 */ if (fZ) goto L_00630b44;
L_00630b38:; BB(0x00630b38);
    /* 00630b38: mov eax, 0xa */ r_eax = 0xau;
    /* 00630b3d: mov ebp, edi */ r_ebp = r_edi;
    /* 00630b3f: jmp 0x630c53 */ goto L_00630c53;
L_00630b44:; BB(0x00630b44);
    /* 00630b44: mov eax, 8 */ r_eax = 0x8u;
    /* 00630b49: jmp 0x630c53 */ goto L_00630c53;
L_00630b4e:; BB(0x00630b4e);
    /* 00630b4e: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00630b52: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00630b54:; BB(0x00630b54);
    /* 00630b54: cmp dword ptr [0x6f2564], ecx */ {  u32 a = R32((u32)(0x6f2564u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630b5a: jle 0x630b74 */ if ((fZ||fS!=fO)) goto L_00630b74;
L_00630b5c:; BB(0x00630b5c);
    /* 00630b5c: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 00630b60: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00630b62: mov eax, esi */ r_eax = r_esi;
    /* 00630b64: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00630b69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630b6a: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x630b6fu); f_00628c40();
    /* 00630b6f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630b72: jmp 0x630b8c */ goto L_00630b8c;
L_00630b74:; BB(0x00630b74);
    /* 00630b74: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 00630b78: mov edx, dword ptr [0x6f2358] */ r_edx = R32((u32)(0x6f2358u));
    /* 00630b7e: mov ecx, esi */ r_ecx = r_esi;
    /* 00630b80: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00630b86: mov al, byte ptr [edx + ecx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx*2))) & 0xffu);
    /* 00630b89: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00630b8c:; BB(0x00630b8c);
    /* 00630b8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630b8e: je 0x630bb6 */ if (fZ) goto L_00630bb6;
L_00630b90:; BB(0x00630b90);
    /* 00630b90: movsx ecx, bl */ r_ecx = (u32)(i32)(i8)(u8)r_ebx;
    /* 00630b93: lea eax, [edi + edi*4] */ r_eax = (u32)(r_edi+r_edi*4);
    /* 00630b96: lea edi, [ecx + eax*2 - 0x30] */ r_edi = (u32)(r_ecx+r_eax*2+0xffffffd0u);
    /* 00630b9a: cmp edi, 0x1450 */ {  u32 a = r_edi; u32 b = 0x1450u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630ba0: jg 0x630bb1 */ if ((!fZ&&fS==fO)) goto L_00630bb1;
L_00630ba2:; BB(0x00630ba2);
    /* 00630ba2: mov bl, byte ptr [ebp] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 00630ba5: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00630ba6: mov byte ptr [esp + 0x7c], bl */ W8((u32)(r_esp+0x7cu), (u8)r_ebx);
    /* 00630baa: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00630baf: jmp 0x630b54 */ goto L_00630b54;
L_00630bb1:; BB(0x00630bb1);
    /* 00630bb1: mov edi, 0x1451 */ r_edi = 0x1451u;
L_00630bb6:; BB(0x00630bb6);
    /* 00630bb6: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
L_00630bba:; BB(0x00630bba);
    /* 00630bba: cmp dword ptr [0x6f2564], 1 */ {  u32 a = R32((u32)(0x6f2564u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630bc1: jle 0x630bd6 */ if ((fZ||fS!=fO)) goto L_00630bd6;
L_00630bc3:; BB(0x00630bc3);
    /* 00630bc3: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00630bc9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00630bcb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630bcc: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x630bd1u); f_00628c40();
    /* 00630bd1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630bd4: jmp 0x630be8 */ goto L_00630be8;
L_00630bd6:; BB(0x00630bd6);
    /* 00630bd6: mov edx, dword ptr [0x6f2358] */ r_edx = R32((u32)(0x6f2358u));
    /* 00630bdc: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00630be2: mov al, byte ptr [edx + esi*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_esi*2))) & 0xffu);
    /* 00630be5: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00630be8:; BB(0x00630be8);
    /* 00630be8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630bea: je 0x630bfa */ if (fZ) goto L_00630bfa;
L_00630bec:; BB(0x00630bec);
    /* 00630bec: mov al, byte ptr [ebp] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 00630bef: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00630bf0: mov byte ptr [esp + 0x7c], al */ W8((u32)(r_esp+0x7cu), (u8)r_eax);
    /* 00630bf4: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 00630bf8: jmp 0x630bba */ goto L_00630bba;
L_00630bfa:; BB(0x00630bfa);
    /* 00630bfa: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00630bfe: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00630c02: mov eax, 0xa */ r_eax = 0xau;
    /* 00630c07: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00630c08: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00630c0d: jmp 0x630c53 */ goto L_00630c53;
L_00630c0f:; BB(0x00630c0f);
    /* 00630c0f: mov eax, dword ptr [esp + 0x8c] */ r_eax = R32((u32)(r_esp+0x8cu));
    /* 00630c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630c18: je 0x630c4d */ if (fZ) goto L_00630c4d;
L_00630c1a:; BB(0x00630c1a);
    /* 00630c1a: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 00630c1d: lea edi, [ebp - 1] */ r_edi = (u32)(r_ebp+0xffffffffu);
    /* 00630c20: sub eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00630c23: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00630c27: je 0x630c46 */ if (fZ) goto L_00630c46;
L_00630c29:; BB(0x00630c29);
    /* 00630c29: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00630c2c: je 0x630c37 */ if (fZ) goto L_00630c37;
L_00630c2e:; BB(0x00630c2e);
    /* 00630c2e: mov eax, 0xa */ r_eax = 0xau;
    /* 00630c33: mov ebp, edi */ r_ebp = r_edi;
    /* 00630c35: jmp 0x630c53 */ goto L_00630c53;
L_00630c37:; BB(0x00630c37);
    /* 00630c37: mov eax, 7 */ r_eax = 0x7u;
    /* 00630c3c: mov dword ptr [esp + 0x24], 0xffffffff */ W32((u32)(r_esp+0x24u), 0xffffffffu);
    /* 00630c44: jmp 0x630c53 */ goto L_00630c53;
L_00630c46:; BB(0x00630c46);
    /* 00630c46: mov eax, 7 */ r_eax = 0x7u;
    /* 00630c4b: jmp 0x630c53 */ goto L_00630c53;
L_00630c4d:; BB(0x00630c4d);
    /* 00630c4d: mov eax, 0xa */ r_eax = 0xau;
L_00630c52:; BB(0x00630c52);
    /* 00630c52: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_00630c53:; BB(0x00630c53);
    /* 00630c53: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630c56: jne 0x6307f2 */ if (!fZ) goto L_006307f2;
L_00630c5c:; BB(0x00630c5c);
    /* 00630c5c: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 00630c60: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00630c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630c66: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 00630c68: je 0x630d14 */ if (fZ) goto L_00630d14;
L_00630c6e:; BB(0x00630c6e);
    /* 00630c6e: cmp esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00630c71: jbe 0x630c96 */ if ((fC||fZ)) goto L_00630c96;
L_00630c73:; BB(0x00630c73);
    /* 00630c73: mov al, byte ptr [esp + 0x6b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x6bu))) & 0xffu);
    /* 00630c77: cmp al, 5 */ {  u32 a = (u8)r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00630c79: jl 0x630c81 */ if ((fS!=fO)) goto L_00630c81;
L_00630c7b:; BB(0x00630c7b);
    /* 00630c7b: inc al */ { u32 x = (u8)r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00630c7d: mov byte ptr [esp + 0x6b], al */ W8((u32)(r_esp+0x6bu), (u8)r_eax);
L_00630c81:; BB(0x00630c81);
    /* 00630c81: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00630c85: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00630c89: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00630c8a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00630c8b: mov esi, 0x18 */ r_esi = 0x18u;
    /* 00630c90: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00630c94: jmp 0x630c9e */ goto L_00630c9e;
L_00630c96:; BB(0x00630c96);
    /* 00630c96: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00630c9a: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
L_00630c9e:; BB(0x00630c9e);
    /* 00630c9e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00630ca0: jbe 0x630dd3 */ if ((fC||fZ)) goto L_00630dd3;
L_00630ca6:; BB(0x00630ca6);
    /* 00630ca6: mov dl, byte ptr [eax - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0xffffffffu))) & 0xffu);
    /* 00630ca9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00630caa: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00630cac: jne 0x630cbc */ if (!fZ) goto L_00630cbc;
L_00630cae:; BB(0x00630cae);
    /* 00630cae: mov dl, byte ptr [eax - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0xffffffffu))) & 0xffu);
    /* 00630cb1: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00630cb2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00630cb3: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00630cb4: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00630cb6: je 0x630cae */ if (fZ) goto L_00630cae;
L_00630cb8:; BB(0x00630cb8);
    /* 00630cb8: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
L_00630cbc:; BB(0x00630cbc);
    /* 00630cbc: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00630cc0: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 00630cc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630cc5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630cc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630cc7: call 0x631160 */ r_esp -= 4; W32(r_esp, 0x630cccu); f_00631160();
    /* 00630ccc: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00630cd0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630cd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00630cd5: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00630cd9: jge 0x630cdd */ if ((fS==fO)) goto L_00630cdd;
L_00630cdb:; BB(0x00630cdb);
    /* 00630cdb: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_00630cdd:; BB(0x00630cdd);
    /* 00630cdd: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00630ce1: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00630ce5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00630ce7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630ce9: jne 0x630cf2 */ if (!fZ) goto L_00630cf2;
L_00630ceb:; BB(0x00630ceb);
    /* 00630ceb: add eax, dword ptr [esp + 0x84] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x84u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00630cf2:; BB(0x00630cf2);
    /* 00630cf2: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00630cf6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630cf8: jne 0x630d01 */ if (!fZ) goto L_00630d01;
L_00630cfa:; BB(0x00630cfa);
    /* 00630cfa: sub eax, dword ptr [esp + 0x88] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x88u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_00630d01:; BB(0x00630d01);
    /* 00630d01: cmp eax, 0x1450 */ {  u32 a = r_eax; u32 b = 0x1450u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630d06: jle 0x630d94 */ if ((fZ||fS!=fO)) goto L_00630d94;
L_00630d0c:; BB(0x00630d0c);
    /* 00630d0c: mov dword ptr [esp + 0x38], 1 */ W32((u32)(r_esp+0x38u), 0x1u);
L_00630d14:; BB(0x00630d14);
    /* 00630d14: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 00630d18: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 00630d1c: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 00630d20: mov ecx, dword ptr [esp + 0x7c] */ r_ecx = R32((u32)(r_esp+0x7cu));
L_00630d24:; BB(0x00630d24);
    /* 00630d24: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00630d28: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630d2a: jne 0x630d3b */ if (!fZ) goto L_00630d3b;
L_00630d2c:; BB(0x00630d2c);
    /* 00630d2c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00630d2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630d30: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00630d32: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00630d34: mov ebx, 4 */ r_ebx = 0x4u;
    /* 00630d39: jmp 0x630d73 */ goto L_00630d73;
L_00630d3b:; BB(0x00630d3b);
    /* 00630d3b: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 00630d3f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630d41: je 0x630d58 */ if (fZ) goto L_00630d58;
L_00630d43:; BB(0x00630d43);
    /* 00630d43: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00630d45: mov eax, 0x7fff */ r_eax = 0x7fffu;
    /* 00630d4a: mov edx, 0x80000000 */ r_edx = 0x80000000u;
    /* 00630d4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00630d51: mov ebx, 2 */ r_ebx = 0x2u;
    /* 00630d56: jmp 0x630d73 */ goto L_00630d73;
L_00630d58:; BB(0x00630d58);
    /* 00630d58: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00630d5c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630d5e: je 0x630d6f */ if (fZ) goto L_00630d6f;
L_00630d60:; BB(0x00630d60);
    /* 00630d60: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00630d62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630d64: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00630d66: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00630d68: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00630d6d: jmp 0x630d73 */ goto L_00630d73;
L_00630d6f:; BB(0x00630d6f);
    /* 00630d6f: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
L_00630d73:; BB(0x00630d73);
    /* 00630d73: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
    /* 00630d77: mov word ptr [edi], cx */ W16((u32)(r_edi), (u16)r_ecx);
    /* 00630d7a: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00630d7e: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00630d80: mov dword ptr [edi + 2], esi */ W32((u32)(r_edi+0x2u), r_esi);
    /* 00630d83: mov dword ptr [edi + 6], edx */ W32((u32)(r_edi+0x6u), r_edx);
    /* 00630d86: mov word ptr [edi + 0xa], ax */ W16((u32)(r_edi+0xau), (u16)r_eax);
    /* 00630d8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630d8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630d8c: mov eax, ebx */ r_eax = r_ebx;
    /* 00630d8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630d8f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00630d90: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630d93: ret  */ FN_RET(0x00630780); r_esp += 4; return;
L_00630d94:; BB(0x00630d94);
    /* 00630d94: cmp eax, 0xffffebb0 */ {  u32 a = r_eax; u32 b = 0xffffebb0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630d99: jge 0x630da8 */ if ((fS==fO)) goto L_00630da8;
L_00630d9b:; BB(0x00630d9b);
    /* 00630d9b: mov dword ptr [esp + 0x3c], 1 */ W32((u32)(r_esp+0x3cu), 0x1u);
    /* 00630da3: jmp 0x630d14 */ goto L_00630d14;
L_00630da8:; BB(0x00630da8);
    /* 00630da8: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 00630daf: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00630db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630db4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630db5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630db6: call 0x631ba0 */ r_esp -= 4; W32(r_esp, 0x630dbbu); f_00631ba0();
    /* 00630dbb: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00630dbf: mov esi, dword ptr [esp + 0x52] */ r_esi = R32((u32)(r_esp+0x52u));
    /* 00630dc3: mov edx, dword ptr [esp + 0x56] */ r_edx = R32((u32)(r_esp+0x56u));
    /* 00630dc7: mov eax, dword ptr [esp + 0x5a] */ r_eax = R32((u32)(r_esp+0x5au));
    /* 00630dcb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630dce: jmp 0x630d24 */ goto L_00630d24;
L_00630dd3:; BB(0x00630dd3);
    /* 00630dd3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00630dd5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630dd7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00630dd9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00630ddb: jmp 0x630d24 */ goto L_00630d24;
}

void f_00630f10(void) /* FUN_00630f10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630f10);
    /* 00630f10: mov eax, dword ptr [esp + 0xa] */ r_eax = R32((u32)(r_esp+0xau));
    /* 00630f14: mov ecx, eax */ r_ecx = r_eax;
    /* 00630f16: and ecx, 0x7ff0 */ {  u32 a = r_ecx; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00630f1c: cmp cx, 0x7ff0 */ {  u32 a = (u16)r_ecx; u32 b = 0x7ff0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00630f21: jne 0x630f56 */ if (!fZ) goto L_00630f56;
L_00630f23:; BB(0x00630f23);
    /* 00630f23: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00630f27: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00630f2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630f2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630f2d: call 0x62a170 */ r_esp -= 4; W32(r_esp, 0x630f32u); f_0062a170();
    /* 00630f32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630f35: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00630f36: je 0x630f50 */ if (fZ) goto L_00630f50;
L_00630f38:; BB(0x00630f38);
    /* 00630f38: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00630f39: je 0x630f4a */ if (fZ) goto L_00630f4a;
L_00630f3b:; BB(0x00630f3b);
    /* 00630f3b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00630f3c: je 0x630f44 */ if (fZ) goto L_00630f44;
L_00630f3e:; BB(0x00630f3e);
    /* 00630f3e: mov eax, 1 */ r_eax = 0x1u;
    /* 00630f43: ret  */ FN_RET(0x00630f10); r_esp += 4; return;
L_00630f44:; BB(0x00630f44);
    /* 00630f44: mov eax, 2 */ r_eax = 0x2u;
    /* 00630f49: ret  */ FN_RET(0x00630f10); r_esp += 4; return;
L_00630f4a:; BB(0x00630f4a);
    /* 00630f4a: mov eax, 4 */ r_eax = 0x4u;
    /* 00630f4f: ret  */ FN_RET(0x00630f10); r_esp += 4; return;
L_00630f50:; BB(0x00630f50);
    /* 00630f50: mov eax, 0x200 */ r_eax = 0x200u;
    /* 00630f55: ret  */ FN_RET(0x00630f10); r_esp += 4; return;
L_00630f56:; BB(0x00630f56);
    /* 00630f56: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00630f5b: test cx, cx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00630f5e: mov edx, eax */ r_edx = r_eax;
    /* 00630f60: jne 0x630f82 */ if (!fZ) goto L_00630f82;
L_00630f62:; BB(0x00630f62);
    /* 00630f62: test dword ptr [esp + 8], 0xfffff */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630f6a: jne 0x630f74 */ if (!fZ) goto L_00630f74;
L_00630f6c:; BB(0x00630f6c);
    /* 00630f6c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00630f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630f72: je 0x630f82 */ if (fZ) goto L_00630f82;
L_00630f74:; BB(0x00630f74);
    /* 00630f74: mov eax, edx */ r_eax = r_edx;
    /* 00630f76: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00630f78: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00630f7a: and al, 0x90 */ {  u32 a = (u8)r_eax; u32 b = 0x90u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00630f7c: add eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00630f81: ret  */ FN_RET(0x00630f10); r_esp += 4; return;
L_00630f82:; BB(0x00630f82);
    /* 00630f82: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 00630f86: fcomp qword ptr [0x63d6a0] */ fx_compare(ST(0), R_F64((u32)(0x63d6a0u))); FPOP();
    /* 00630f8c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00630f8e: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00630f91: mov eax, edx */ r_eax = r_edx;
    /* 00630f93: je 0x630f9f */ if (fZ) goto L_00630f9f;
L_00630f95:; BB(0x00630f95);
    /* 00630f95: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00630f97: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00630f99: and al, 0xe0 */ {  u32 a = (u8)r_eax; u32 b = 0xe0u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00630f9b: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00630f9e: ret  */ FN_RET(0x00630f10); r_esp += 4; return;
L_00630f9f:; BB(0x00630f9f);
    /* 00630f9f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00630fa1: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00630fa3: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00630fa5: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00630faa: ret  */ FN_RET(0x00630f10); r_esp += 4; return;
}

void f_00630fb0(void) /* FUN_00630fb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630fb0);
    /* 00630fb0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00630fb4: cmp word ptr [ecx], 0 */ {  u32 a = R16((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00630fb8: lea eax, [ecx + 2] */ r_eax = (u32)(r_ecx+0x2u);
    /* 00630fbb: je 0x630fc8 */ if (fZ) goto L_00630fc8;
L_00630fbd:; BB(0x00630fbd);
    /* 00630fbd: mov dx, word ptr [eax] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 00630fc0: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00630fc3: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00630fc6: jne 0x630fbd */ if (!fZ) goto L_00630fbd;
L_00630fc8:; BB(0x00630fc8);
    /* 00630fc8: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00630fca: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00630fcc: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00630fcd: ret  */ FN_RET(0x00630fb0); r_esp += 4; return;
}

void f_00630fd0(void) /* FUN_00630fd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630fd0);
    /* 00630fd0: mov eax, dword ptr [0x711868] */ r_eax = R32((u32)(0x711868u));
    /* 00630fd5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630fd6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00630fd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630fd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630fdb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00630fdc: jne 0x631020 */ if (!fZ) goto L_00631020;
L_00630fde:; BB(0x00630fde);
    /* 00630fde: push 0x63d6d8 */ { u32 v = 0x63d6d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00630fe3: call dword ptr [0x63305c] */ { u32 t = R32((u32)(0x63305cu)); r_esp -= 4; W32(r_esp, 0x630fe9u); call_ind(t); }
    /* 00630fe9: mov esi, eax */ r_esi = r_eax;
    /* 00630feb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630fed: je 0x631059 */ if (fZ) goto L_00631059;
L_00630fef:; BB(0x00630fef);
    /* 00630fef: mov edi, dword ptr [0x633058] */ r_edi = R32((u32)(0x633058u));
    /* 00630ff5: push 0x63d6cc */ { u32 v = 0x63d6ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00630ffa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630ffb: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x630ffdu); call_ind(t); }
    /* 00630ffd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630fff: mov dword ptr [0x711868], eax */ W32((u32)(0x711868u), r_eax);
    /* 00631004: je 0x631059 */ if (fZ) goto L_00631059;
L_00631006:; BB(0x00631006);
    /* 00631006: push 0x63d6bc */ { u32 v = 0x63d6bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0063100b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063100c: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x63100eu); call_ind(t); }
    /* 0063100e: push 0x63d6a8 */ { u32 v = 0x63d6a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00631013: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631014: mov dword ptr [0x71186c], eax */ W32((u32)(0x71186cu), r_eax);
    /* 00631019: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x63101bu); call_ind(t); }
    /* 0063101b: mov dword ptr [0x711870], eax */ W32((u32)(0x711870u), r_eax);
L_00631020:; BB(0x00631020);
    /* 00631020: mov eax, dword ptr [0x71186c] */ r_eax = R32((u32)(0x71186cu));
    /* 00631025: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631027: je 0x63102d */ if (fZ) goto L_0063102d;
L_00631029:; BB(0x00631029);
    /* 00631029: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63102bu); call_ind(t); }
    /* 0063102b: mov ebx, eax */ r_ebx = r_eax;
L_0063102d:; BB(0x0063102d);
    /* 0063102d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063102f: je 0x63103f */ if (fZ) goto L_0063103f;
L_00631031:; BB(0x00631031);
    /* 00631031: mov eax, dword ptr [0x711870] */ r_eax = R32((u32)(0x711870u));
    /* 00631036: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631038: je 0x63103f */ if (fZ) goto L_0063103f;
L_0063103a:; BB(0x0063103a);
    /* 0063103a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063103b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63103du); call_ind(t); }
    /* 0063103d: mov ebx, eax */ r_ebx = r_eax;
L_0063103f:; BB(0x0063103f);
    /* 0063103f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00631043: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00631047: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0063104b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063104c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063104d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063104e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063104f: call dword ptr [0x711868] */ { u32 t = R32((u32)(0x711868u)); r_esp -= 4; W32(r_esp, 0x631055u); call_ind(t); }
    /* 00631055: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631056: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631057: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631058: ret  */ FN_RET(0x00630fd0); r_esp += 4; return;
L_00631059:; BB(0x00631059);
    /* 00631059: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063105a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063105b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063105d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063105e: ret  */ FN_RET(0x00630fd0); r_esp += 4; return;
}

void f_00631060(void) /* FUN_00631060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631060);
    /* 00631060: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00631064: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631065: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00631069: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063106b: lea ecx, [esi + edx] */ r_ecx = (u32)(r_esi+r_edx);
    /* 0063106e: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00631070: jb 0x631076 */ if (fC) goto L_00631076;
L_00631072:; BB(0x00631072);
    /* 00631072: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00631074: jae 0x63107b */ if (!fC) goto L_0063107b;
L_00631076:; BB(0x00631076);
    /* 00631076: mov eax, 1 */ r_eax = 0x1u;
L_0063107b:; BB(0x0063107b);
    /* 0063107b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0063107f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631080: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00631082: ret  */ FN_RET(0x00631060); r_esp += 4; return;
}

void f_00631090(void) /* FUN_00631090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631090);
    /* 00631090: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631091: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00631095: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631096: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0063109a: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0063109c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063109d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063109f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006310a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006310a1: call 0x631060 */ r_esp -= 4; W32(r_esp, 0x6310a6u); f_00631060();
    /* 006310a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006310a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006310ab: je 0x6310c6 */ if (fZ) goto L_006310c6;
L_006310ad:; BB(0x006310ad);
    /* 006310ad: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006310b0: lea eax, [esi + 4] */ r_eax = (u32)(r_esi+0x4u);
    /* 006310b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006310b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006310b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006310b7: call 0x631060 */ r_esp -= 4; W32(r_esp, 0x6310bcu); f_00631060();
    /* 006310bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006310bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006310c1: je 0x6310c6 */ if (fZ) goto L_006310c6;
L_006310c3:; BB(0x006310c3);
    /* 006310c3: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006310c6:; BB(0x006310c6);
    /* 006310c6: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 006310c9: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006310cc: lea eax, [esi + 4] */ r_eax = (u32)(r_esi+0x4u);
    /* 006310cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006310d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006310d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006310d2: call 0x631060 */ r_esp -= 4; W32(r_esp, 0x6310d7u); f_00631060();
    /* 006310d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006310da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006310dc: je 0x6310e1 */ if (fZ) goto L_006310e1;
L_006310de:; BB(0x006310de);
    /* 006310de: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006310e1:; BB(0x006310e1);
    /* 006310e1: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 006310e4: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 006310e7: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 006310ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006310eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006310ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006310ed: call 0x631060 */ r_esp -= 4; W32(r_esp, 0x6310f2u); f_00631060();
    /* 006310f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006310f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006310f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006310f7: ret  */ FN_RET(0x00631090); r_esp += 4; return;
}

void f_00631100(void) /* FUN_00631100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631100);
    /* 00631100: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00631104: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631105: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631106: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00631108: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0063110b: mov ecx, esi */ r_ecx = r_esi;
    /* 0063110d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0063110f: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00631111: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 00631114: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00631117: or esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00631119: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0063111c: mov edx, edi */ r_edx = r_edi;
    /* 0063111e: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00631121: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00631124: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00631126: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00631128: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631129: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0063112c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063112d: ret  */ FN_RET(0x00631100); r_esp += 4; return;
}

void f_00631130(void) /* FUN_00631130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631130);
    /* 00631130: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00631134: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631135: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631136: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00631139: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0063113c: mov esi, edx */ r_esi = r_edx;
    /* 0063113e: mov edi, ecx */ r_edi = r_ecx;
    /* 00631140: shl esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00631143: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00631145: or ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00631147: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0063114a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0063114c: shl edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0063114f: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00631151: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00631153: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00631155: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631156: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00631159: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0063115b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063115c: ret  */ FN_RET(0x00631130); r_esp += 4; return;
}

void f_00631160(void) /* FUN_00631160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631160);
    /* 00631160: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00631164: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631167: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631168: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631169: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063116a: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0063116e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00631170: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631171: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00631173: mov edi, 0x404e */ r_edi = 0x404eu;
    /* 00631178: mov dword ptr [esi], ebp */ W32((u32)(r_esi), r_ebp);
    /* 0063117a: mov dword ptr [esi + 4], ebp */ W32((u32)(r_esi+0x4u), r_ebp);
    /* 0063117d: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 00631180: jbe 0x6311f2 */ if ((fC||fZ)) goto L_006311f2;
L_00631182:; BB(0x00631182);
    /* 00631182: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00631186: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
L_0063118a:; BB(0x0063118a);
    /* 0063118a: mov eax, esi */ r_eax = r_esi;
    /* 0063118c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063118d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0063118f: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00631193: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00631196: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0063119a: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0063119d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006311a1: call 0x631100 */ r_esp -= 4; W32(r_esp, 0x6311a6u); f_00631100();
    /* 006311a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006311a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006311aa: call 0x631100 */ r_esp -= 4; W32(r_esp, 0x6311afu); f_00631100();
    /* 006311af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006311b2: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 006311b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006311b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006311b8: call 0x631090 */ r_esp -= 4; W32(r_esp, 0x6311bdu); f_00631090();
    /* 006311bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006311c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006311c1: call 0x631100 */ r_esp -= 4; W32(r_esp, 0x6311c6u); f_00631100();
    /* 006311c6: movsx edx, byte ptr [ebx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx));
    /* 006311c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006311cc: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006311d0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006311d4: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 006311d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006311d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006311da: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 006311de: call 0x631090 */ r_esp -= 4; W32(r_esp, 0x6311e3u); f_00631090();
    /* 006311e3: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 006311e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006311ea: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006311eb: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006311ec: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006311f0: jne 0x63118a */ if (!fZ) goto L_0063118a;
L_006311f2:; BB(0x006311f2);
    /* 006311f2: cmp dword ptr [esi + 8], ebp */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006311f5: jne 0x631223 */ if (!fZ) goto L_00631223;
L_006311f7:; BB(0x006311f7);
    /* 006311f7: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006311fa: add edi, 0xfff0 */ {  u32 a = r_edi; u32 b = 0xfff0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00631200: mov ecx, eax */ r_ecx = r_eax;
    /* 00631202: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00631205: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 00631208: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0063120a: mov edx, ecx */ r_edx = r_ecx;
    /* 0063120c: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0063120f: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00631212: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00631214: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00631217: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0063121a: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063121c: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0063121f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00631221: je 0x6311f7 */ if (fZ) goto L_006311f7;
L_00631223:; BB(0x00631223);
    /* 00631223: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00631226: mov ebx, 0x8000 */ r_ebx = 0x8000u;
    /* 0063122b: test ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063122d: jne 0x631245 */ if (!fZ) goto L_00631245;
L_0063122f:; BB(0x0063122f);
    /* 0063122f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631230: call 0x631100 */ r_esp -= 4; W32(r_esp, 0x631235u); f_00631100();
    /* 00631235: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00631238: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063123b: add edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00631241: test ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631243: je 0x63122f */ if (fZ) goto L_0063122f;
L_00631245:; BB(0x00631245);
    /* 00631245: mov word ptr [esi + 0xa], di */ W16((u32)(r_esi+0xau), (u16)r_edi);
    /* 00631249: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063124a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063124b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063124c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063124d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631250: ret  */ FN_RET(0x00631160); r_esp += 4; return;
}

void f_00631260(void) /* FUN_00631260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631260);
    /* 00631260: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631263: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00631267: mov al, 0xcc */ r_eax = (r_eax & 0xffffff00u) | ((0xccu) & 0xffu);
    /* 00631269: mov byte ptr [esp + 4], al */ W8((u32)(r_esp+0x4u), (u8)r_eax);
    /* 0063126d: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 00631271: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 00631275: mov byte ptr [esp + 7], al */ W8((u32)(r_esp+0x7u), (u8)r_eax);
    /* 00631279: mov byte ptr [esp + 8], al */ W8((u32)(r_esp+0x8u), (u8)r_eax);
    /* 0063127d: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 00631281: mov byte ptr [esp + 0xa], al */ W8((u32)(r_esp+0xau), (u8)r_eax);
    /* 00631285: mov byte ptr [esp + 0xb], al */ W8((u32)(r_esp+0xbu), (u8)r_eax);
    /* 00631289: mov byte ptr [esp + 0xc], al */ W8((u32)(r_esp+0xcu), (u8)r_eax);
    /* 0063128d: mov byte ptr [esp + 0xd], al */ W8((u32)(r_esp+0xdu), (u8)r_eax);
    /* 00631291: mov eax, ecx */ r_eax = r_ecx;
    /* 00631293: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631294: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00631299: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063129a: and ecx, 0x7fff */ {  u32 a = r_ecx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006312a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006312a1: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 006312a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006312a5: mov byte ptr [esp + 0x1e], 0xfb */ W8((u32)(r_esp+0x1eu), 0xfbu);
    /* 006312aa: mov byte ptr [esp + 0x1f], 0x3f */ W8((u32)(r_esp+0x1fu), 0x3fu);
    /* 006312af: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 006312b7: je 0x6312c3 */ if (fZ) goto L_006312c3;
L_006312b9:; BB(0x006312b9);
    /* 006312b9: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 006312bd: mov byte ptr [edi + 2], 0x2d */ W8((u32)(r_edi+0x2u), 0x2du);
    /* 006312c1: jmp 0x6312cd */ goto L_006312cd;
L_006312c3:; BB(0x006312c3);
    /* 006312c3: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 006312c7: mov edi, edx */ r_edi = r_edx;
    /* 006312c9: mov byte ptr [edx + 2], 0x20 */ W8((u32)(r_edx+0x2u), 0x20u);
L_006312cd:; BB(0x006312cd);
    /* 006312cd: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 006312d1: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 006312d5: test cx, cx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 006312d8: jne 0x6312ea */ if (!fZ) goto L_006312ea;
L_006312da:; BB(0x006312da);
    /* 006312da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006312dc: jne 0x6312ea */ if (!fZ) goto L_006312ea;
L_006312de:; BB(0x006312de);
    /* 006312de: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006312e0: jne 0x6312ea */ if (!fZ) goto L_006312ea;
L_006312e2:; BB(0x006312e2);
    /* 006312e2: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 006312e5: jmp 0x63146f */ goto L_0063146f;
L_006312ea:; BB(0x006312ea);
    /* 006312ea: cmp cx, 0x7fff */ {  u32 a = (u16)r_ecx; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 006312ef: jne 0x6313cd */ if (!fZ) goto L_006313cd;
L_006312f5:; BB(0x006312f5);
    /* 006312f5: cmp edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006312fb: mov word ptr [edi], 1 */ W16((u32)(r_edi), 0x1u);
    /* 00631300: jne 0x631306 */ if (!fZ) goto L_00631306;
L_00631302:; BB(0x00631302);
    /* 00631302: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631304: je 0x63133c */ if (fZ) goto L_0063133c;
L_00631306:; BB(0x00631306);
    /* 00631306: test edx, 0x40000000 */ {  u32 a = r_edx; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063130c: jne 0x63133c */ if (!fZ) goto L_0063133c;
L_0063130e:; BB(0x0063130e);
    /* 0063130e: mov ecx, dword ptr [0x63d6fc] */ r_ecx = R32((u32)(0x63d6fcu));
    /* 00631314: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 00631317: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 0063131a: mov dx, word ptr [0x63d700] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x63d700u))) & 0xffffu);
    /* 00631321: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00631325: mov cl, byte ptr [0x63d702] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x63d702u))) & 0xffu);
    /* 0063132b: mov byte ptr [edi + 3], 6 */ W8((u32)(r_edi+0x3u), 0x6u);
    /* 0063132f: mov byte ptr [eax + 6], cl */ W8((u32)(r_eax+0x6u), (u8)r_ecx);
    /* 00631332: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631334: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631335: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631336: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631337: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631338: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063133b: ret  */ FN_RET(0x00631260); r_esp += 4; return;
L_0063133c:; BB(0x0063133c);
    /* 0063133c: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0063133f: je 0x631371 */ if (fZ) goto L_00631371;
L_00631341:; BB(0x00631341);
    /* 00631341: cmp edx, 0xc0000000 */ {  u32 a = r_edx; u32 b = 0xc0000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631347: jne 0x631371 */ if (!fZ) goto L_00631371;
L_00631349:; BB(0x00631349);
    /* 00631349: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063134b: jne 0x631371 */ if (!fZ) goto L_00631371;
L_0063134d:; BB(0x0063134d);
    /* 0063134d: mov eax, dword ptr [0x63d6f4] */ r_eax = R32((u32)(0x63d6f4u));
    /* 00631352: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 00631355: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00631358: mov cx, word ptr [0x63d6f8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x63d6f8u))) & 0xffffu);
    /* 0063135f: mov byte ptr [edi + 3], 5 */ W8((u32)(r_edi+0x3u), 0x5u);
    /* 00631363: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631365: mov word ptr [edx + 4], cx */ W16((u32)(r_edx+0x4u), (u16)r_ecx);
    /* 00631369: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063136a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063136b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063136c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063136d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631370: ret  */ FN_RET(0x00631260); r_esp += 4; return;
L_00631371:; BB(0x00631371);
    /* 00631371: cmp edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631377: jne 0x6313a1 */ if (!fZ) goto L_006313a1;
L_00631379:; BB(0x00631379);
    /* 00631379: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063137b: jne 0x6313a1 */ if (!fZ) goto L_006313a1;
L_0063137d:; BB(0x0063137d);
    /* 0063137d: mov eax, dword ptr [0x63d6ec] */ r_eax = R32((u32)(0x63d6ecu));
    /* 00631382: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 00631385: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00631388: mov cx, word ptr [0x63d6f0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x63d6f0u))) & 0xffffu);
    /* 0063138f: mov byte ptr [edi + 3], 5 */ W8((u32)(r_edi+0x3u), 0x5u);
    /* 00631393: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631395: mov word ptr [edx + 4], cx */ W16((u32)(r_edx+0x4u), (u16)r_ecx);
    /* 00631399: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063139a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063139b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063139c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063139d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006313a0: ret  */ FN_RET(0x00631260); r_esp += 4; return;
L_006313a1:; BB(0x006313a1);
    /* 006313a1: mov eax, dword ptr [0x63d6e4] */ r_eax = R32((u32)(0x63d6e4u));
    /* 006313a6: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 006313a9: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006313ac: mov cx, word ptr [0x63d6e8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x63d6e8u))) & 0xffffu);
    /* 006313b3: mov word ptr [edx + 4], cx */ W16((u32)(r_edx+0x4u), (u16)r_ecx);
    /* 006313b7: mov al, byte ptr [0x63d6ea] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x63d6eau))) & 0xffu);
    /* 006313bc: mov byte ptr [edi + 3], 6 */ W8((u32)(r_edi+0x3u), 0x6u);
    /* 006313c0: mov byte ptr [edx + 6], al */ W8((u32)(r_edx+0x6u), (u8)r_eax);
    /* 006313c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006313c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006313c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006313c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006313c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006313c9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006313cc: ret  */ FN_RET(0x00631260); r_esp += 4; return;
L_006313cd:; BB(0x006313cd);
    /* 006313cd: mov eax, edx */ r_eax = r_edx;
    /* 006313cf: mov esi, ecx */ r_esi = r_ecx;
    /* 006313d1: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006313d4: and esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006313da: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006313df: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 006313e2: mov word ptr [esp + 0x2a], cx */ W16((u32)(r_esp+0x2au), (u16)r_ecx);
    /* 006313e7: mov dword ptr [esp + 0x26], edx */ W32((u32)(r_esp+0x26u), r_edx);
    /* 006313eb: lea eax, [esi + eax*2] */ r_eax = (u32)(r_esi+r_eax*2);
    /* 006313ee: mov dword ptr [esp + 0x22], ebx */ W32((u32)(r_esp+0x22u), r_ebx);
    /* 006313f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006313f4: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 006313f8: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 006313fb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006313fd: mov word ptr [esp + 0x24], bx */ W16((u32)(r_esp+0x24u), (u16)r_ebx);
    /* 00631402: lea esi, [eax + esi*2] */ r_esi = (u32)(r_eax+r_esi*2);
    /* 00631405: lea esi, [eax + esi*4] */ r_esi = (u32)(r_eax+r_esi*4);
    /* 00631408: mov eax, ecx */ r_eax = r_ecx;
    /* 0063140a: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0063140f: mov ebp, eax */ r_ebp = r_eax;
    /* 00631411: shl ebp, 4 */ { u32 c = (4u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00631414: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00631416: lea eax, [eax + ebp*8] */ r_eax = (u32)(r_eax+r_ebp*8);
    /* 00631419: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 0063141c: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0063141f: lea esi, [esi + eax - 0x134312f4] */ r_esi = (u32)(r_esi+r_eax+0xecbced0cu);
    /* 00631426: sar esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00631429: movsx ecx, si */ r_ecx = (u32)(i32)(i16)(u16)r_esi;
    /* 0063142c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0063142e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063142f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631430: call 0x631ba0 */ r_esp -= 4; W32(r_esp, 0x631435u); f_00631ba0();
    /* 00631435: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631438: cmp word ptr [esp + 0x2a], 0x3fff */ {  u32 a = R16((u32)(r_esp+0x2au)); u32 b = 0x3fffu; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0063143f: jb 0x631454 */ if (fC) goto L_00631454;
L_00631441:; BB(0x00631441);
    /* 00631441: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00631445: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00631449: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063144a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063144b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0063144c: call 0x6318e0 */ r_esp -= 4; W32(r_esp, 0x631451u); f_006318e0();
    /* 00631451: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00631454:; BB(0x00631454);
    /* 00631454: mov al, byte ptr [esp + 0x44] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x44u))) & 0xffu);
    /* 00631458: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0063145b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0063145d: je 0x63148c */ if (fZ) goto L_0063148c;
L_0063145f:; BB(0x0063145f);
    /* 0063145f: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 00631463: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 00631466: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00631468: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063146a: jg 0x631490 */ if ((!fZ&&fS==fO)) goto L_00631490;
L_0063146c:; BB(0x0063146c);
    /* 0063146c: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
L_0063146f:; BB(0x0063146f);
    /* 0063146f: mov byte ptr [edi + 2], 0x20 */ W8((u32)(r_edi+0x2u), 0x20u);
    /* 00631473: mov byte ptr [edi + 3], 1 */ W8((u32)(r_edi+0x3u), 0x1u);
    /* 00631477: mov byte ptr [edi + 4], 0x30 */ W8((u32)(r_edi+0x4u), 0x30u);
    /* 0063147b: mov byte ptr [edi + 5], 0 */ W8((u32)(r_edi+0x5u), 0x0u);
    /* 0063147f: mov eax, 1 */ r_eax = 0x1u;
    /* 00631484: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631485: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631486: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631487: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631488: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063148b: ret  */ FN_RET(0x00631260); r_esp += 4; return;
L_0063148c:; BB(0x0063148c);
    /* 0063148c: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
L_00631490:; BB(0x00631490);
    /* 00631490: cmp ebp, 0x15 */ {  u32 a = r_ebp; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631493: jle 0x63149a */ if ((fZ||fS!=fO)) goto L_0063149a;
L_00631495:; BB(0x00631495);
    /* 00631495: mov ebp, 0x15 */ r_ebp = 0x15u;
L_0063149a:; BB(0x0063149a);
    /* 0063149a: mov esi, dword ptr [esp + 0x2a] */ r_esi = R32((u32)(r_esp+0x2au));
    /* 0063149e: mov word ptr [esp + 0x2a], bx */ W16((u32)(r_esp+0x2au), (u16)r_ebx);
    /* 006314a3: and esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006314a9: mov ebx, 8 */ r_ebx = 0x8u;
    /* 006314ae: sub esi, 0x3ffe */ {  u32 a = r_esi; u32 b = 0x3ffeu; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_006314b4:; BB(0x006314b4);
    /* 006314b4: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 006314b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006314b9: call 0x631100 */ r_esp -= 4; W32(r_esp, 0x6314beu); f_00631100();
    /* 006314be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006314c1: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 006314c2: jne 0x6314b4 */ if (!fZ) goto L_006314b4;
L_006314c4:; BB(0x006314c4);
    /* 006314c4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006314c6: jge 0x6314e2 */ if ((fS==fO)) goto L_006314e2;
L_006314c8:; BB(0x006314c8);
    /* 006314c8: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006314ca: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006314d0: jle 0x6314e2 */ if ((fZ||fS!=fO)) goto L_006314e2;
L_006314d2:; BB(0x006314d2);
    /* 006314d2: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 006314d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006314d7: call 0x631130 */ r_esp -= 4; W32(r_esp, 0x6314dcu); f_00631130();
    /* 006314dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006314df: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006314e0: jne 0x6314d2 */ if (!fZ) goto L_006314d2;
L_006314e2:; BB(0x006314e2);
    /* 006314e2: lea esi, [edi + 4] */ r_esi = (u32)(r_edi+0x4u);
    /* 006314e5: lea edi, [ebp + 1] */ r_edi = (u32)(r_ebp+0x1u);
    /* 006314e8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006314ea: mov ebx, esi */ r_ebx = r_esi;
    /* 006314ec: jle 0x631551 */ if ((fZ||fS!=fO)) goto L_00631551;
L_006314ee:; BB(0x006314ee);
    /* 006314ee: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006314f2: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006314f6: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 006314fa: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006314fe: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00631502: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00631506: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631507: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0063150b: call 0x631100 */ r_esp -= 4; W32(r_esp, 0x631510u); f_00631100();
    /* 00631510: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631513: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00631517: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631518: call 0x631100 */ r_esp -= 4; W32(r_esp, 0x63151du); f_00631100();
    /* 0063151d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631520: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 00631524: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00631528: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631529: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063152a: call 0x631090 */ r_esp -= 4; W32(r_esp, 0x63152fu); f_00631090();
    /* 0063152f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631532: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00631536: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631537: call 0x631100 */ r_esp -= 4; W32(r_esp, 0x63153cu); f_00631100();
    /* 0063153c: mov cl, byte ptr [esp + 0x2f] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0x2fu))) & 0xffu);
    /* 00631540: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631543: add cl, 0x30 */ {  u32 a = (u8)r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00631546: mov byte ptr [esp + 0x2b], 0 */ W8((u32)(r_esp+0x2bu), 0x0u);
    /* 0063154b: mov byte ptr [ebx], cl */ W8((u32)(r_ebx), (u8)r_ecx);
    /* 0063154d: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063154e: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0063154f: jne 0x6314ee */ if (!fZ) goto L_006314ee;
L_00631551:; BB(0x00631551);
    /* 00631551: mov al, byte ptr [ebx - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebx+0xffffffffu))) & 0xffu);
    /* 00631554: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00631555: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00631556: cmp al, 0x35 */ {  u32 a = (u8)r_eax; u32 b = 0x35u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00631558: jl 0x63158b */ if ((fS!=fO)) goto L_0063158b;
L_0063155a:; BB(0x0063155a);
    /* 0063155a: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0063155c: jb 0x63156f */ if (fC) goto L_0063156f;
L_0063155e:; BB(0x0063155e);
    /* 0063155e: cmp byte ptr [ebx], 0x39 */ {  u32 a = R8((u32)(r_ebx)); u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00631561: jne 0x63156b */ if (!fZ) goto L_0063156b;
L_00631563:; BB(0x00631563);
    /* 00631563: mov byte ptr [ebx], 0x30 */ W8((u32)(r_ebx), 0x30u);
    /* 00631566: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00631567: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00631569: jae 0x63155e */ if (!fC) goto L_0063155e;
L_0063156b:; BB(0x0063156b);
    /* 0063156b: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0063156d: jae 0x63157f */ if (!fC) goto L_0063157f;
L_0063156f:; BB(0x0063156f);
    /* 0063156f: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00631573: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00631574: inc word ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R16(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00631577: mov cl, byte ptr [ebx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebx))) & 0xffu);
    /* 00631579: inc cl */ { u32 x = (u8)r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0063157b: mov byte ptr [ebx], cl */ W8((u32)(r_ebx), (u8)r_ecx);
    /* 0063157d: jmp 0x6315c6 */ goto L_006315c6;
L_0063157f:; BB(0x0063157f);
    /* 0063157f: mov cl, byte ptr [ebx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebx))) & 0xffu);
    /* 00631581: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00631585: inc cl */ { u32 x = (u8)r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00631587: mov byte ptr [ebx], cl */ W8((u32)(r_ebx), (u8)r_ecx);
    /* 00631589: jmp 0x6315c6 */ goto L_006315c6;
L_0063158b:; BB(0x0063158b);
    /* 0063158b: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0063158d: jb 0x63159d */ if (fC) goto L_0063159d;
L_0063158f:; BB(0x0063158f);
    /* 0063158f: cmp byte ptr [ebx], 0x30 */ {  u32 a = R8((u32)(r_ebx)); u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00631592: jne 0x631599 */ if (!fZ) goto L_00631599;
L_00631594:; BB(0x00631594);
    /* 00631594: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00631595: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00631597: jae 0x63158f */ if (!fC) goto L_0063158f;
L_00631599:; BB(0x00631599);
    /* 00631599: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0063159b: jae 0x6315c2 */ if (!fC) goto L_006315c2;
L_0063159d:; BB(0x0063159d);
    /* 0063159d: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 006315a1: mov byte ptr [esi], 0x30 */ W8((u32)(r_esi), 0x30u);
    /* 006315a4: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 006315a9: mov byte ptr [eax + 2], 0x20 */ W8((u32)(r_eax+0x2u), 0x20u);
    /* 006315ad: mov byte ptr [eax + 3], 1 */ W8((u32)(r_eax+0x3u), 0x1u);
    /* 006315b1: mov byte ptr [eax + 5], 0 */ W8((u32)(r_eax+0x5u), 0x0u);
    /* 006315b5: mov eax, 1 */ r_eax = 0x1u;
    /* 006315ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006315bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006315bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006315bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006315be: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006315c1: ret  */ FN_RET(0x00631260); r_esp += 4; return;
L_006315c2:; BB(0x006315c2);
    /* 006315c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
L_006315c6:; BB(0x006315c6);
    /* 006315c6: sub bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006315c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006315c9: sub bl, 3 */ {  u32 a = (u8)r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006315cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006315cd: movsx edx, bl */ r_edx = (u32)(i32)(i8)(u8)r_ebx;
    /* 006315d0: mov byte ptr [eax + 3], bl */ W8((u32)(r_eax+0x3u), (u8)r_ebx);
    /* 006315d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006315d4: mov byte ptr [eax + edx + 4], 0 */ W8((u32)(r_eax+r_edx+0x4u), 0x0u);
    /* 006315d9: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006315dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006315de: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006315e1: ret  */ FN_RET(0x00631260); r_esp += 4; return;
}

void f_006315f0(void) /* FUN_006315f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006315f0);
    /* 006315f0: mov eax, 0x1004 */ r_eax = 0x1004u;
    /* 006315f5: call 0x626050 */ r_esp -= 4; W32(r_esp, 0x6315fau); f_00626050();
    /* 006315fa: mov eax, dword ptr [0x7129e0] */ r_eax = R32((u32)(0x7129e0u));
    /* 006315ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631600: mov ebx, dword ptr [esp + 0x100c] */ r_ebx = R32((u32)(r_esp+0x100cu));
    /* 00631607: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631608: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0063160a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063160b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0063160d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063160e: jae 0x631752 */ if (!fC) goto L_00631752;
L_00631614:; BB(0x00631614);
    /* 00631614: mov eax, ebx */ r_eax = r_ebx;
    /* 00631616: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00631618: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0063161b: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0063161e: mov edx, dword ptr [eax*4 + 0x7128e0] */ r_edx = R32((u32)(r_eax*4+0x7128e0u));
    /* 00631625: test byte ptr [edx + ecx*8 + 4], 1 */ {  u32 a = R8((u32)(r_edx+r_ecx*8+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0063162a: je 0x631752 */ if (fZ) goto L_00631752;
L_00631630:; BB(0x00631630);
    /* 00631630: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631632: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631633: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631634: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x631639u); f_0062bfe0();
    /* 00631639: mov edi, eax */ r_edi = r_eax;
    /* 0063163b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063163e: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631641: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00631645: je 0x63175c */ if (fZ) goto L_0063175c;
L_0063164b:; BB(0x0063164b);
    /* 0063164b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063164d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063164e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063164f: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x631654u); f_0062bfe0();
    /* 00631654: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631657: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063165a: je 0x63175c */ if (fZ) goto L_0063175c;
L_00631660:; BB(0x00631660);
    /* 00631660: mov ecx, dword ptr [esp + 0x101c] */ r_ecx = R32((u32)(r_esp+0x101cu));
    /* 00631667: mov esi, ecx */ r_esi = r_ecx;
    /* 00631669: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0063166b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063166d: jle 0x6316f8 */ if ((fZ||fS!=fO)) goto L_006316f8;
L_00631673:; BB(0x00631673);
    /* 00631673: mov ecx, 0x400 */ r_ecx = 0x400u;
    /* 00631678: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063167a: lea edi, [esp + 0x14] */ r_edi = (u32)(r_esp+0x14u);
    /* 0063167e: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 00631683: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00631685: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631686: call 0x631c30 */ r_esp -= 4; W32(r_esp, 0x63168bu); f_00631c30();
    /* 0063168b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063168e: mov edi, eax */ r_edi = r_eax;
L_00631690:; BB(0x00631690);
    /* 00631690: cmp esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631696: mov eax, 0x1000 */ r_eax = 0x1000u;
    /* 0063169b: jge 0x63169f */ if ((fS==fO)) goto L_0063169f;
L_0063169d:; BB(0x0063169d);
    /* 0063169d: mov eax, esi */ r_eax = r_esi;
L_0063169f:; BB(0x0063169f);
    /* 0063169f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006316a0: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006316a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006316a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006316a6: call 0x62a3a0 */ r_esp -= 4; W32(r_esp, 0x6316abu); f_0062a3a0();
    /* 006316ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006316ae: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006316b1: je 0x6316bb */ if (fZ) goto L_006316bb;
L_006316b3:; BB(0x006316b3);
    /* 006316b3: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006316b5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006316b7: jle 0x6316d1 */ if ((fZ||fS!=fO)) goto L_006316d1;
L_006316b9:; BB(0x006316b9);
    /* 006316b9: jmp 0x631690 */ goto L_00631690;
L_006316bb:; BB(0x006316bb);
    /* 006316bb: cmp dword ptr [0x711460], 5 */ {  u32 a = R32((u32)(0x711460u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006316c2: jne 0x6316ce */ if (!fZ) goto L_006316ce;
L_006316c4:; BB(0x006316c4);
    /* 006316c4: mov dword ptr [0x71145c], 0xd */ W32((u32)(0x71145cu), 0xdu);
L_006316ce:; BB(0x006316ce);
    /* 006316ce: or ebp, 0xffffffff */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_006316d1:; BB(0x006316d1);
    /* 006316d1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006316d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006316d3: call 0x631c30 */ r_esp -= 4; W32(r_esp, 0x6316d8u); f_00631c30();
    /* 006316d8: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 006316dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006316df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006316e1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006316e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006316e3: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x6316e8u); f_0062bfe0();
    /* 006316e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006316eb: mov eax, ebp */ r_eax = r_ebp;
    /* 006316ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006316ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006316ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006316f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006316f1: add esp, 0x1004 */ {  u32 a = r_esp; u32 b = 0x1004u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006316f7: ret  */ FN_RET(0x006315f0); r_esp += 4; return;
L_006316f8:; BB(0x006316f8);
    /* 006316f8: jge 0x631739 */ if ((fS==fO)) goto L_00631739;
L_006316fa:; BB(0x006316fa);
    /* 006316fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006316fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006316fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006316fe: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x631703u); f_0062bfe0();
    /* 00631703: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631706: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631707: call 0x62faf0 */ r_esp -= 4; W32(r_esp, 0x63170cu); f_0062faf0();
    /* 0063170c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063170f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631710: call dword ptr [0x63314c] */ { u32 t = R32((u32)(0x63314cu)); r_esp -= 4; W32(r_esp, 0x631716u); call_ind(t); }
    /* 00631716: mov ebp, eax */ r_ebp = r_eax;
    /* 00631718: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fC = (a < b); fC = (b != 0); }
    /* 0063171a: sbb ebp, ebp */ { u32 c = fC; u32 a = r_ebp; u32 b = r_ebp; u32 r = (a - b - c) & 0xffffffffu; r_ebp = r;  }
    /* 0063171c: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0063171e: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0063171f: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631722: jne 0x631739 */ if (!fZ) goto L_00631739;
L_00631724:; BB(0x00631724);
    /* 00631724: mov dword ptr [0x71145c], 0xd */ W32((u32)(0x71145cu), 0xdu);
    /* 0063172e: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x631734u); call_ind(t); }
    /* 00631734: mov dword ptr [0x711460], eax */ W32((u32)(0x711460u), r_eax);
L_00631739:; BB(0x00631739);
    /* 00631739: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063173b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063173c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063173d: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x631742u); f_0062bfe0();
    /* 00631742: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631745: mov eax, ebp */ r_eax = r_ebp;
    /* 00631747: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631748: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063174a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063174b: add esp, 0x1004 */ {  u32 a = r_esp; u32 b = 0x1004u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631751: ret  */ FN_RET(0x006315f0); r_esp += 4; return;
L_00631752:; BB(0x00631752);
    /* 00631752: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
L_0063175c:; BB(0x0063175c);
    /* 0063175c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063175d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063175e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063175f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00631762: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631763: add esp, 0x1004 */ {  u32 a = r_esp; u32 b = 0x1004u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631769: ret  */ FN_RET(0x006315f0); r_esp += 4; return;
}

void f_00631770(void) /* FUN_00631770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631770);
    /* 00631770: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00631774: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631776: jne 0x631779 */ if (!fZ) goto L_00631779;
L_00631778:; BB(0x00631778);
    /* 00631778: ret  */ FN_RET(0x00631770); r_esp += 4; return;
L_00631779:; BB(0x00631779);
    /* 00631779: mov ecx, dword ptr [0x711808] */ r_ecx = R32((u32)(0x711808u));
    /* 0063177f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00631783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631784: mov ecx, dword ptr [0x71180c] */ r_ecx = R32((u32)(0x71180cu));
    /* 0063178a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063178b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063178c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063178d: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00631791: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631792: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631794: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631795: call 0x631cb0 */ r_esp -= 4; W32(r_esp, 0x63179au); f_00631cb0();
    /* 0063179a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063179d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063179f: jne 0x6317a7 */ if (!fZ) goto L_006317a7;
L_006317a1:; BB(0x006317a1);
    /* 006317a1: mov eax, 0x7fffffff */ r_eax = 0x7fffffffu;
    /* 006317a6: ret  */ FN_RET(0x00631770); r_esp += 4; return;
L_006317a7:; BB(0x006317a7);
    /* 006317a7: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006317aa: ret  */ FN_RET(0x00631770); r_esp += 4; return;
}

void f_006317b0(void) /* FUN_006317b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006317b0);
    /* 006317b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006317b1: mov ebx, dword ptr [0x71148c] */ r_ebx = R32((u32)(0x71148cu));
    /* 006317b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006317b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006317b9: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006317bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006317bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006317be: je 0x631823 */ if (fZ) goto L_00631823;
L_006317c0:; BB(0x006317c0);
    /* 006317c0: mov ebp, dword ptr [0x6330bc] */ r_ebp = R32((u32)(0x6330bcu));
L_006317c6:; BB(0x006317c6);
    /* 006317c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006317c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006317ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006317cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006317ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006317d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006317d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006317d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006317d5: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x6317d7u); call_ind(t); }
    /* 006317d7: mov esi, eax */ r_esi = r_eax;
    /* 006317d9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006317db: je 0x63181b */ if (fZ) goto L_0063181b;
L_006317dd:; BB(0x006317dd);
    /* 006317dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006317de: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x6317e3u); f_00626230();
    /* 006317e3: mov edi, eax */ r_edi = r_eax;
    /* 006317e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006317e8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006317ea: je 0x63181b */ if (fZ) goto L_0063181b;
L_006317ec:; BB(0x006317ec);
    /* 006317ec: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006317ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006317f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006317f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006317f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006317f4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006317f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006317f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006317f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006317fb: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x6317fdu); call_ind(t); }
    /* 006317fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006317ff: je 0x63181b */ if (fZ) goto L_0063181b;
L_00631801:; BB(0x00631801);
    /* 00631801: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631803: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631804: call 0x631fb0 */ r_esp -= 4; W32(r_esp, 0x631809u); f_00631fb0();
    /* 00631809: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0063180c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063180f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631812: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631814: jne 0x6317c6 */ if (!fZ) goto L_006317c6;
L_00631816:; BB(0x00631816);
    /* 00631816: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631817: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631818: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631819: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063181a: ret  */ FN_RET(0x006317b0); r_esp += 4; return;
L_0063181b:; BB(0x0063181b);
    /* 0063181b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063181e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063181f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631820: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631821: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631822: ret  */ FN_RET(0x006317b0); r_esp += 4; return;
L_00631823:; BB(0x00631823);
    /* 00631823: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631824: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631825: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631826: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631828: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631829: ret  */ FN_RET(0x006317b0); r_esp += 4; return;
}

void f_00631830(void) /* FUN_00631830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631830);
    /* 00631830: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00631834: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631835: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631836: mov esi, 1 */ r_esi = 0x1u;
    /* 0063183b: call dword ptr [0x633150] */ { u32 t = R32((u32)(0x633150u)); r_esp -= 4; W32(r_esp, 0x631841u); call_ind(t); }
    /* 00631841: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631843: je 0x631847 */ if (fZ) goto L_00631847;
L_00631845:; BB(0x00631845);
    /* 00631845: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00631847:; BB(0x00631847);
    /* 00631847: mov eax, esi */ r_eax = r_esi;
    /* 00631849: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063184a: ret  */ FN_RET(0x00631830); r_esp += 4; return;
}

void f_00631850(void) /* FUN_00631850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631850);
    /* 00631850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631851: mov ebp, esp */ r_ebp = r_esp;
    /* 00631853: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00631855: push 0x63d708 */ { u32 v = 0x63d708u; r_esp -= 4; W32(r_esp, v); }
    /* 0063185a: push 0x62b6b8 */ { u32 v = 0x62b6b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063185f: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00631865: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631866: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063186d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631870: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631871: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631872: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631873: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 00631876: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063187d: mov eax, dword ptr [0x71187c] */ r_eax = R32((u32)(0x71187cu));
    /* 00631882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631884: je 0x6318a1 */ if (fZ) goto L_006318a1;
L_00631886:; BB(0x00631886);
    /* 00631886: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0063188d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63188fu); call_ind(t); }
    /* 0063188f: jmp 0x63189a */ goto L_0063189a;
L_0063189a:; BB(0x0063189a);
    /* 0063189a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_006318a1:; BB(0x006318a1);
    /* 006318a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006318a8: call 0x6318be */ r_esp -= 4; W32(r_esp, 0x6318adu); f_006318be();
    /* 006318ad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006318b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006318b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006318b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006318b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006318ba: mov esp, ebp */ r_esp = r_ebp;
    /* 006318bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006318bd: ret  */ FN_RET(0x00631850); r_esp += 4; return;
}

void f_006318e0(void) /* FUN_006318e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006318e0);
    /* 006318e0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006318e3: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 006318e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006318e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006318e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006318ea: mov ax, word ptr [edx + 0xa] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0xau))) & 0xffffu);
    /* 006318ee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006318ef: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 006318f3: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006318f5: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 006318f9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 006318fd: mov cx, word ptr [edi + 0xa] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edi+0xau))) & 0xffffu);
    /* 00631901: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00631905: mov esi, ecx */ r_esi = r_ecx;
    /* 00631907: and ecx, 0x7fff */ {  u32 a = r_ecx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0063190d: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0063190f: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00631914: and esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0063191a: cmp ax, 0x7fff */ {  u32 a = (u16)r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0063191e: lea ebx, [ecx + eax] */ r_ebx = (u32)(r_ecx+r_eax);
    /* 00631921: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00631925: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00631929: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0063192d: jae 0x631b77 */ if (!fC) goto L_00631b77;
L_00631933:; BB(0x00631933);
    /* 00631933: cmp cx, 0x7fff */ {  u32 a = (u16)r_ecx; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 00631938: jae 0x631b77 */ if (!fC) goto L_00631b77;
L_0063193e:; BB(0x0063193e);
    /* 0063193e: cmp bx, 0xbffd */ {  u32 a = (u16)r_ebx; u32 b = 0xbffdu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00631943: ja 0x631b77 */ if ((!fC&&!fZ)) goto L_00631b77;
L_00631949:; BB(0x00631949);
    /* 00631949: cmp bx, 0x3fbf */ {  u32 a = (u16)r_ebx; u32 b = 0x3fbfu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063194e: ja 0x631960 */ if ((!fC&&!fZ)) goto L_00631960;
L_00631950:; BB(0x00631950);
    /* 00631950: mov dword ptr [edx + 8], ebp */ W32((u32)(r_edx+0x8u), r_ebp);
    /* 00631953: mov dword ptr [edx + 4], ebp */ W32((u32)(r_edx+0x4u), r_ebp);
    /* 00631956: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
    /* 00631958: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631959: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063195a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063195b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063195c: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063195f: ret  */ FN_RET(0x006318e0); r_esp += 4; return;
L_00631960:; BB(0x00631960);
    /* 00631960: cmp ax, bp */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ebp; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00631963: jne 0x631989 */ if (!fZ) goto L_00631989;
L_00631965:; BB(0x00631965);
    /* 00631965: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00631968: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00631969: test eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063196e: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00631972: jne 0x631989 */ if (!fZ) goto L_00631989;
L_00631974:; BB(0x00631974);
    /* 00631974: cmp dword ptr [edx + 4], ebp */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631977: jne 0x631989 */ if (!fZ) goto L_00631989;
L_00631979:; BB(0x00631979);
    /* 00631979: cmp dword ptr [edx], ebp */ {  u32 a = R32((u32)(r_edx)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063197b: jne 0x631989 */ if (!fZ) goto L_00631989;
L_0063197d:; BB(0x0063197d);
    /* 0063197d: mov word ptr [edx + 0xa], bp */ W16((u32)(r_edx+0xau), (u16)r_ebp);
    /* 00631981: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631982: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631983: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631984: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631985: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631988: ret  */ FN_RET(0x006318e0); r_esp += 4; return;
L_00631989:; BB(0x00631989);
    /* 00631989: cmp cx, bp */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ebp; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0063198c: jne 0x6319b6 */ if (!fZ) goto L_006319b6;
L_0063198e:; BB(0x0063198e);
    /* 0063198e: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00631991: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00631992: test eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631997: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0063199b: jne 0x6319b6 */ if (!fZ) goto L_006319b6;
L_0063199d:; BB(0x0063199d);
    /* 0063199d: cmp dword ptr [edi + 4], ebp */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006319a0: jne 0x6319b6 */ if (!fZ) goto L_006319b6;
L_006319a2:; BB(0x006319a2);
    /* 006319a2: cmp dword ptr [edi], ebp */ {  u32 a = R32((u32)(r_edi)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006319a4: jne 0x6319b6 */ if (!fZ) goto L_006319b6;
L_006319a6:; BB(0x006319a6);
    /* 006319a6: mov dword ptr [edx + 8], ebp */ W32((u32)(r_edx+0x8u), r_ebp);
    /* 006319a9: mov dword ptr [edx + 4], ebp */ W32((u32)(r_edx+0x4u), r_ebp);
    /* 006319ac: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
    /* 006319ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006319af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006319b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006319b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006319b2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006319b5: ret  */ FN_RET(0x006318e0); r_esp += 4; return;
L_006319b6:; BB(0x006319b6);
    /* 006319b6: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 006319ba: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 006319be: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006319c2: mov ebp, 5 */ r_ebp = 0x5u;
L_006319c7:; BB(0x006319c7);
    /* 006319c7: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 006319cb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006319cd: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006319d0: jle 0x631a29 */ if ((fZ||fS!=fO)) goto L_00631a29;
L_006319d2:; BB(0x006319d2);
    /* 006319d2: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006319d6: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006319d9: lea esi, [eax + edx] */ r_esi = (u32)(r_eax+r_edx);
    /* 006319dc: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 006319e0: lea ebx, [ecx - 4] */ r_ebx = (u32)(r_ecx+0xfffffffcu);
L_006319e3:; BB(0x006319e3);
    /* 006319e3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006319e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006319e7: mov dx, word ptr [edi] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edi))) & 0xffffu);
    /* 006319ea: mov ax, word ptr [esi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 006319ed: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006319f0: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 006319f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006319f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006319f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006319f5: call 0x631060 */ r_esp -= 4; W32(r_esp, 0x6319fau); f_00631060();
    /* 006319fa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006319fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006319ff: je 0x631a08 */ if (fZ) goto L_00631a08;
L_00631a01:; BB(0x00631a01);
    /* 00631a01: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00631a05: inc word ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R16(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_00631a08:; BB(0x00631a08);
    /* 00631a08: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00631a0c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00631a0f: sub edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00631a12: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00631a13: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00631a17: jne 0x6319e3 */ if (!fZ) goto L_006319e3;
L_00631a19:; BB(0x00631a19);
    /* 00631a19: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00631a1d: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00631a21: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00631a25: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
L_00631a29:; BB(0x00631a29);
    /* 00631a29: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00631a2d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00631a31: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00631a34: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00631a35: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00631a36: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00631a3a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00631a3c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00631a40: jg 0x6319c7 */ if ((!fZ&&fS==fO)) goto L_006319c7;
L_00631a42:; BB(0x00631a42);
    /* 00631a42: add ebx, 0xc002 */ {  u32 a = r_ebx; u32 b = 0xc002u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00631a48: mov ebp, 0x80000000 */ r_ebp = 0x80000000u;
    /* 00631a4d: test bx, bx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_ebx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fO = 0; }
    /* 00631a50: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00631a54: jle 0x631a85 */ if ((fZ||fS!=fO)) goto L_00631a85;
L_00631a56:; BB(0x00631a56);
    /* 00631a56: test dword ptr [esp + 0x30], ebp */ {  u32 a = R32((u32)(r_esp+0x30u)); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631a5a: jne 0x631a85 */ if (!fZ) goto L_00631a85;
L_00631a5c:; BB(0x00631a5c);
    /* 00631a5c: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 00631a60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631a61: call 0x631100 */ r_esp -= 4; W32(r_esp, 0x631a66u); f_00631100();
    /* 00631a66: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00631a6a: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00631a6e: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00631a72: add eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00631a77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631a7a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00631a7e: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fO = 0; }
    /* 00631a81: mov ebx, eax */ r_ebx = r_eax;
    /* 00631a83: jg 0x631a56 */ if ((!fZ&&fS==fO)) goto L_00631a56;
L_00631a85:; BB(0x00631a85);
    /* 00631a85: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00631a87: cmp bx, cx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00631a8a: jg 0x631ada */ if ((!fZ&&fS==fO)) goto L_00631ada;
L_00631a8c:; BB(0x00631a8c);
    /* 00631a8c: add ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00631a92: cmp bx, cx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00631a95: jge 0x631acb */ if ((fS==fO)) goto L_00631acb;
L_00631a97:; BB(0x00631a97);
    /* 00631a97: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 00631a9a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00631a9c: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00631a9e: mov esi, eax */ r_esi = r_eax;
    /* 00631aa0: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
L_00631aa4:; BB(0x00631aa4);
    /* 00631aa4: test byte ptr [esp + 0x28], 1 */ {  u32 a = R8((u32)(r_esp+0x28u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00631aa9: je 0x631aaf */ if (fZ) goto L_00631aaf;
L_00631aab:; BB(0x00631aab);
    /* 00631aab: inc dword ptr [esp + 0x20] */ { u32 ad = (u32)(r_esp+0x20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00631aaf:; BB(0x00631aaf);
    /* 00631aaf: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00631ab3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631ab4: call 0x631130 */ r_esp -= 4; W32(r_esp, 0x631ab9u); f_00631130();
    /* 00631ab9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631abc: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00631abd: jne 0x631aa4 */ if (!fZ) goto L_00631aa4;
L_00631abf:; BB(0x00631abf);
    /* 00631abf: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00631ac3: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00631ac7: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
L_00631acb:; BB(0x00631acb);
    /* 00631acb: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00631acf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00631ad1: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631ad3: je 0x631ada */ if (fZ) goto L_00631ada;
L_00631ad5:; BB(0x00631ad5);
    /* 00631ad5: or byte ptr [esp + 0x28], 1 */ { u32 ad = (u32)(r_esp+0x28u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_00631ada:; BB(0x00631ada);
    /* 00631ada: mov edi, 0x8000 */ r_edi = 0x8000u;
    /* 00631adf: cmp word ptr [esp + 0x28], di */ {  u32 a = R16((u32)(r_esp+0x28u)); u32 b = (u16)r_edi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00631ae4: ja 0x631af6 */ if ((!fC&&!fZ)) goto L_00631af6;
L_00631ae6:; BB(0x00631ae6);
    /* 00631ae6: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00631aea: and eax, 0x1ffff */ {  u32 a = r_eax; u32 b = 0x1ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00631aef: cmp eax, 0x18000 */ {  u32 a = r_eax; u32 b = 0x18000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631af4: jne 0x631b2f */ if (!fZ) goto L_00631b2f;
L_00631af6:; BB(0x00631af6);
    /* 00631af6: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00631af9: cmp dword ptr [esp + 0x2a], eax */ {  u32 a = R32((u32)(r_esp+0x2au)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631afd: jne 0x631b2b */ if (!fZ) goto L_00631b2b;
L_00631aff:; BB(0x00631aff);
    /* 00631aff: cmp dword ptr [esp + 0x2e], eax */ {  u32 a = R32((u32)(r_esp+0x2eu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631b03: mov dword ptr [esp + 0x2a], ecx */ W32((u32)(r_esp+0x2au), r_ecx);
    /* 00631b07: jne 0x631b25 */ if (!fZ) goto L_00631b25;
L_00631b09:; BB(0x00631b09);
    /* 00631b09: cmp word ptr [esp + 0x32], 0xffff */ {  u32 a = R16((u32)(r_esp+0x32u)); u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00631b10: mov dword ptr [esp + 0x2e], ecx */ W32((u32)(r_esp+0x2eu), r_ecx);
    /* 00631b14: jne 0x631b1e */ if (!fZ) goto L_00631b1e;
L_00631b16:; BB(0x00631b16);
    /* 00631b16: mov word ptr [esp + 0x32], di */ W16((u32)(r_esp+0x32u), (u16)r_edi);
    /* 00631b1b: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00631b1c: jmp 0x631b2f */ goto L_00631b2f;
L_00631b1e:; BB(0x00631b1e);
    /* 00631b1e: inc word ptr [esp + 0x32] */ { u32 ad = (u32)(r_esp+0x32u); u32 x = R16(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00631b23: jmp 0x631b2f */ goto L_00631b2f;
L_00631b25:; BB(0x00631b25);
    /* 00631b25: inc dword ptr [esp + 0x2e] */ { u32 ad = (u32)(r_esp+0x2eu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00631b29: jmp 0x631b2f */ goto L_00631b2f;
L_00631b2b:; BB(0x00631b2b);
    /* 00631b2b: inc dword ptr [esp + 0x2a] */ { u32 ad = (u32)(r_esp+0x2au); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00631b2f:; BB(0x00631b2f);
    /* 00631b2f: cmp bx, 0x7fff */ {  u32 a = (u16)r_ebx; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 00631b34: jb 0x631b53 */ if (fC) goto L_00631b53;
L_00631b36:; BB(0x00631b36);
    /* 00631b36: neg si */ { u32 x = (u16)r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu); fC = (a < b); fC = (b != 0); }
    /* 00631b39: sbb esi, esi */ { u32 c = fC; u32 a = r_esi; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
    /* 00631b3b: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00631b3e: and esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00631b40: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00631b42: add esi, 0x7fff8000 */ {  u32 a = r_esi; u32 b = 0x7fff8000u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00631b48: mov dword ptr [edx + 8], esi */ W32((u32)(r_edx+0x8u), r_esi);
    /* 00631b4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631b4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631b4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631b4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631b4f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631b52: ret  */ FN_RET(0x006318e0); r_esp += 4; return;
L_00631b53:; BB(0x00631b53);
    /* 00631b53: mov cx, word ptr [esp + 0x2a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esp+0x2au))) & 0xffffu);
    /* 00631b58: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00631b5c: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 00631b5f: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00631b63: or ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00631b65: mov dword ptr [edx + 2], eax */ W32((u32)(r_edx+0x2u), r_eax);
    /* 00631b68: mov dword ptr [edx + 6], ecx */ W32((u32)(r_edx+0x6u), r_ecx);
    /* 00631b6b: mov word ptr [edx + 0xa], bx */ W16((u32)(r_edx+0xau), (u16)r_ebx);
    /* 00631b6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631b70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631b71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631b72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631b73: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631b76: ret  */ FN_RET(0x006318e0); r_esp += 4; return;
L_00631b77:; BB(0x00631b77);
    /* 00631b77: neg si */ { u32 x = (u16)r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu); fC = (a < b); fC = (b != 0); }
    /* 00631b7a: sbb esi, esi */ { u32 c = fC; u32 a = r_esi; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
    /* 00631b7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631b7d: and esi, 0x80000000 */ {  u32 a = r_esi; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00631b83: mov dword ptr [edx + 4], ebp */ W32((u32)(r_edx+0x4u), r_ebp);
    /* 00631b86: add esi, 0x7fff8000 */ {  u32 a = r_esi; u32 b = 0x7fff8000u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00631b8c: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
    /* 00631b8e: mov dword ptr [edx + 8], esi */ W32((u32)(r_edx+0x8u), r_esi);
    /* 00631b91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631b92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631b93: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631b94: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631b97: ret  */ FN_RET(0x006318e0); r_esp += 4; return;
}

void f_00631ba0(void) /* FUN_00631ba0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631ba0);
    /* 00631ba0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631ba3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631ba4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631ba5: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00631ba9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631baa: mov edi, 0x6f5048 */ r_edi = 0x6f5048u;
    /* 00631baf: sub edi, 0x60 */ {  u32 a = r_edi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00631bb2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00631bb4: je 0x631c23 */ if (fZ) goto L_00631c23;
L_00631bb6:; BB(0x00631bb6);
    /* 00631bb6: jge 0x631bc2 */ if ((fS==fO)) goto L_00631bc2;
L_00631bb8:; BB(0x00631bb8);
    /* 00631bb8: mov edi, 0x6f51a8 */ r_edi = 0x6f51a8u;
    /* 00631bbd: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00631bbf: sub edi, 0x60 */ {  u32 a = r_edi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_00631bc2:; BB(0x00631bc2);
    /* 00631bc2: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00631bc6: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00631bca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631bcc: jne 0x631bd3 */ if (!fZ) goto L_00631bd3;
L_00631bce:; BB(0x00631bce);
    /* 00631bce: mov word ptr [ebx], 0 */ W16((u32)(r_ebx), 0x0u);
L_00631bd3:; BB(0x00631bd3);
    /* 00631bd3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631bd5: je 0x631c23 */ if (fZ) goto L_00631c23;
L_00631bd7:; BB(0x00631bd7);
    /* 00631bd7: mov eax, esi */ r_eax = r_esi;
    /* 00631bd9: add edi, 0x54 */ {  u32 a = r_edi; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00631bdc: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00631bdf: sar esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00631be2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631be4: je 0x631c1f */ if (fZ) goto L_00631c1f;
L_00631be6:; BB(0x00631be6);
    /* 00631be6: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 00631be9: cmp word ptr [edi + eax*4], 0x8000 */ {  u32 a = R16((u32)(r_edi+r_eax*4)); u32 b = 0x8000u; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 00631bef: lea eax, [edi + eax*4] */ r_eax = (u32)(r_edi+r_eax*4);
    /* 00631bf2: jb 0x631c15 */ if (fC) goto L_00631c15;
L_00631bf4:; BB(0x00631bf4);
    /* 00631bf4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00631bf6: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00631bfa: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00631bfd: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00631c01: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00631c04: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00631c08: mov eax, dword ptr [esp + 0xe] */ r_eax = R32((u32)(r_esp+0xeu));
    /* 00631c0c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00631c0d: mov dword ptr [esp + 0xe], eax */ W32((u32)(r_esp+0xeu), r_eax);
    /* 00631c11: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
L_00631c15:; BB(0x00631c15);
    /* 00631c15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631c16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631c17: call 0x6318e0 */ r_esp -= 4; W32(r_esp, 0x631c1cu); f_006318e0();
    /* 00631c1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00631c1f:; BB(0x00631c1f);
    /* 00631c1f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631c21: jne 0x631bd7 */ if (!fZ) goto L_00631bd7;
L_00631c23:; BB(0x00631c23);
    /* 00631c23: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631c24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631c25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631c26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631c29: ret  */ FN_RET(0x00631ba0); r_esp += 4; return;
}

void f_00631c30(void) /* FUN_00631c30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631c30);
    /* 00631c30: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00631c34: mov ecx, dword ptr [0x7129e0] */ r_ecx = R32((u32)(0x7129e0u));
    /* 00631c3a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00631c3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631c3d: jae 0x631c9f */ if (!fC) goto L_00631c9f;
L_00631c3f:; BB(0x00631c3f);
    /* 00631c3f: mov ecx, eax */ r_ecx = r_eax;
    /* 00631c41: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00631c44: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00631c47: mov edx, dword ptr [ecx*4 + 0x7128e0] */ r_edx = R32((u32)(r_ecx*4+0x7128e0u));
    /* 00631c4e: mov cl, byte ptr [edx + eax*8 + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax*8+0x4u))) & 0xffu);
    /* 00631c52: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00631c55: lea edx, [edx + eax*8 + 4] */ r_edx = (u32)(r_edx+r_eax*8+0x4u);
    /* 00631c59: je 0x631c9f */ if (fZ) goto L_00631c9f;
L_00631c5b:; BB(0x00631c5b);
    /* 00631c5b: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00631c5f: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00631c61: and eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00631c66: cmp esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631c6c: jne 0x631c73 */ if (!fZ) goto L_00631c73;
L_00631c6e:; BB(0x00631c6e);
    /* 00631c6e: and cl, 0x7f */ {  u32 a = (u8)r_ecx; u32 b = 0x7fu; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00631c71: jmp 0x631c7e */ goto L_00631c7e;
L_00631c73:; BB(0x00631c73);
    /* 00631c73: cmp esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631c79: jne 0x631c90 */ if (!fZ) goto L_00631c90;
L_00631c7b:; BB(0x00631c7b);
    /* 00631c7b: or cl, 0x80 */ {  u32 a = (u8)r_ecx; u32 b = 0x80u; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
L_00631c7e:; BB(0x00631c7e);
    /* 00631c7e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00631c80: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00631c82: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 00631c84: and eax, 0xffffc000 */ {  u32 a = r_eax; u32 b = 0xffffc000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00631c89: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00631c8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631c8f: ret  */ FN_RET(0x00631c30); r_esp += 4; return;
L_00631c90:; BB(0x00631c90);
    /* 00631c90: mov dword ptr [0x71145c], 0x16 */ W32((u32)(0x71145cu), 0x16u);
    /* 00631c9a: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00631c9d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631c9e: ret  */ FN_RET(0x00631c30); r_esp += 4; return;
L_00631c9f:; BB(0x00631c9f);
    /* 00631c9f: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
    /* 00631ca9: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00631cac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631cad: ret  */ FN_RET(0x00631c30); r_esp += 4; return;
}

void f_00631cb0(void) /* FUN_00631cb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631cb0);
    /* 00631cb0: mov eax, dword ptr [0x711884] */ r_eax = R32((u32)(0x711884u));
    /* 00631cb5: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631cb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631cba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631cbb: mov ebx, dword ptr [0x633154] */ r_ebx = R32((u32)(0x633154u));
    /* 00631cc1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631cc2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631cc3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631cc4: jne 0x631d14 */ if (!fZ) goto L_00631d14;
L_00631cc6:; BB(0x00631cc6);
    /* 00631cc6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631cc8: push 0x63d1c0 */ { u32 v = 0x63d1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631ccd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631ccf: push 0x63d1c0 */ { u32 v = 0x63d1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631cd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631cd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631cd8: call dword ptr [0x633158] */ { u32 t = R32((u32)(0x633158u)); r_esp -= 4; W32(r_esp, 0x631cdeu); call_ind(t); }
    /* 00631cde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631ce0: je 0x631cee */ if (fZ) goto L_00631cee;
L_00631ce2:; BB(0x00631ce2);
    /* 00631ce2: mov dword ptr [0x711884], 1 */ W32((u32)(0x711884u), 0x1u);
    /* 00631cec: jmp 0x631d14 */ goto L_00631d14;
L_00631cee:; BB(0x00631cee);
    /* 00631cee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631cf0: push 0x63d1bc */ { u32 v = 0x63d1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00631cf5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631cf7: push 0x63d1bc */ { u32 v = 0x63d1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00631cfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631cfe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631d00: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x631d02u); call_ind(t); }
    /* 00631d02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631d04: je 0x631ed0 */ if (fZ) goto L_00631ed0;
L_00631d0a:; BB(0x00631d0a);
    /* 00631d0a: mov dword ptr [0x711884], 2 */ W32((u32)(0x711884u), 0x2u);
L_00631d14:; BB(0x00631d14);
    /* 00631d14: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00631d18: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00631d1a: jle 0x631d2e */ if ((fZ||fS!=fO)) goto L_00631d2e;
L_00631d1c:; BB(0x00631d1c);
    /* 00631d1c: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00631d20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631d21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631d22: call 0x631f80 */ r_esp -= 4; W32(r_esp, 0x631d27u); f_00631f80();
    /* 00631d27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631d2a: mov esi, eax */ r_esi = r_eax;
    /* 00631d2c: jmp 0x631d32 */ goto L_00631d32;
L_00631d2e:; BB(0x00631d2e);
    /* 00631d2e: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
L_00631d32:; BB(0x00631d32);
    /* 00631d32: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00631d36: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00631d38: jle 0x631d4e */ if ((fZ||fS!=fO)) goto L_00631d4e;
L_00631d3a:; BB(0x00631d3a);
    /* 00631d3a: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00631d3e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631d3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631d40: call 0x631f80 */ r_esp -= 4; W32(r_esp, 0x631d45u); f_00631f80();
    /* 00631d45: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631d48: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00631d4c: mov edi, eax */ r_edi = r_eax;
L_00631d4e:; BB(0x00631d4e);
    /* 00631d4e: mov eax, dword ptr [0x711884] */ r_eax = R32((u32)(0x711884u));
    /* 00631d53: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631d56: jne 0x631d74 */ if (!fZ) goto L_00631d74;
L_00631d58:; BB(0x00631d58);
    /* 00631d58: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00631d5c: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00631d60: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00631d64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631d65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631d66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631d67: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631d68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631d69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631d6a: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x631d6cu); call_ind(t); }
    /* 00631d6c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631d6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631d6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631d6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631d70: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631d73: ret  */ FN_RET(0x00631cb0); r_esp += 4; return;
L_00631d74:; BB(0x00631d74);
    /* 00631d74: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631d77: jne 0x631f6d */ if (!fZ) goto L_00631f6d;
L_00631d7d:; BB(0x00631d7d);
    /* 00631d7d: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 00631d81: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631d83: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631d85: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00631d89: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00631d8d: jne 0x631d95 */ if (!fZ) goto L_00631d95;
L_00631d8f:; BB(0x00631d8f);
    /* 00631d8f: mov ebx, dword ptr [0x711370] */ r_ebx = R32((u32)(0x711370u));
L_00631d95:; BB(0x00631d95);
    /* 00631d95: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631d97: je 0x631da1 */ if (fZ) goto L_00631da1;
L_00631d99:; BB(0x00631d99);
    /* 00631d99: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631d9b: jne 0x631e9c */ if (!fZ) goto L_00631e9c;
L_00631da1:; BB(0x00631da1);
    /* 00631da1: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631da3: jne 0x631db2 */ if (!fZ) goto L_00631db2;
L_00631da5:; BB(0x00631da5);
    /* 00631da5: mov eax, 2 */ r_eax = 0x2u;
    /* 00631daa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631dab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631dac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631dad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631dae: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631db1: ret  */ FN_RET(0x00631cb0); r_esp += 4; return;
L_00631db2:; BB(0x00631db2);
    /* 00631db2: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631db5: jle 0x631dc4 */ if ((fZ||fS!=fO)) goto L_00631dc4;
L_00631db7:; BB(0x00631db7);
    /* 00631db7: mov eax, 1 */ r_eax = 0x1u;
    /* 00631dbc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631dbd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631dbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631dbf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631dc0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631dc3: ret  */ FN_RET(0x00631cb0); r_esp += 4; return;
L_00631dc4:; BB(0x00631dc4);
    /* 00631dc4: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631dc7: jle 0x631dd6 */ if ((fZ||fS!=fO)) goto L_00631dd6;
L_00631dc9:; BB(0x00631dc9);
    /* 00631dc9: mov eax, 3 */ r_eax = 0x3u;
    /* 00631dce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631dcf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631dd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631dd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631dd2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631dd5: ret  */ FN_RET(0x00631cb0); r_esp += 4; return;
L_00631dd6:; BB(0x00631dd6);
    /* 00631dd6: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00631dda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631ddb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631ddc: call dword ptr [0x633128] */ { u32 t = R32((u32)(0x633128u)); r_esp -= 4; W32(r_esp, 0x631de2u); call_ind(t); }
    /* 00631de2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631de4: jne 0x631dee */ if (!fZ) goto L_00631dee;
L_00631de6:; BB(0x00631de6);
    /* 00631de6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631de7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631de8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631de9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631dea: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631ded: ret  */ FN_RET(0x00631cb0); r_esp += 4; return;
L_00631dee:; BB(0x00631dee);
    /* 00631dee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00631df0: jle 0x631e3d */ if ((fZ||fS!=fO)) goto L_00631e3d;
L_00631df2:; BB(0x00631df2);
    /* 00631df2: cmp dword ptr [esp + 0x14], 2 */ {  u32 a = R32((u32)(r_esp+0x14u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00631df7: jae 0x631e06 */ if (!fC) goto L_00631e06;
L_00631df9:; BB(0x00631df9);
    /* 00631df9: mov eax, 3 */ r_eax = 0x3u;
    /* 00631dfe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631dff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631e00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631e01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631e02: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631e05: ret  */ FN_RET(0x00631cb0); r_esp += 4; return;
L_00631e06:; BB(0x00631e06);
    /* 00631e06: mov cl, byte ptr [esp + 0x1a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0x1au))) & 0xffu);
    /* 00631e0a: lea eax, [esp + 0x1a] */ r_eax = (u32)(r_esp+0x1au);
    /* 00631e0e: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00631e10: je 0x631e30 */ if (fZ) goto L_00631e30;
L_00631e12:; BB(0x00631e12);
    /* 00631e12: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00631e15: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00631e17: je 0x631e30 */ if (fZ) goto L_00631e30;
L_00631e19:; BB(0x00631e19);
    /* 00631e19: mov cl, byte ptr [ebp] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 00631e1c: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00631e1e: cmp cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 00631e20: jb 0x631e26 */ if (fC) goto L_00631e26;
L_00631e22:; BB(0x00631e22);
    /* 00631e22: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00631e24: jbe 0x631e8f */ if ((fC||fZ)) goto L_00631e8f;
L_00631e26:; BB(0x00631e26);
    /* 00631e26: mov cl, byte ptr [eax + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 00631e29: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00631e2c: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00631e2e: jne 0x631e12 */ if (!fZ) goto L_00631e12;
L_00631e30:; BB(0x00631e30);
    /* 00631e30: mov eax, 3 */ r_eax = 0x3u;
    /* 00631e35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631e36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631e37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631e38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631e39: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631e3c: ret  */ FN_RET(0x00631cb0); r_esp += 4; return;
L_00631e3d:; BB(0x00631e3d);
    /* 00631e3d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00631e3f: jle 0x631e9c */ if ((fZ||fS!=fO)) goto L_00631e9c;
L_00631e41:; BB(0x00631e41);
    /* 00631e41: cmp dword ptr [esp + 0x14], 2 */ {  u32 a = R32((u32)(r_esp+0x14u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00631e46: jae 0x631e55 */ if (!fC) goto L_00631e55;
L_00631e48:; BB(0x00631e48);
    /* 00631e48: mov eax, 1 */ r_eax = 0x1u;
    /* 00631e4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631e4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631e4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631e50: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631e51: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631e54: ret  */ FN_RET(0x00631cb0); r_esp += 4; return;
L_00631e55:; BB(0x00631e55);
    /* 00631e55: mov cl, byte ptr [esp + 0x1a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0x1au))) & 0xffu);
    /* 00631e59: lea eax, [esp + 0x1a] */ r_eax = (u32)(r_esp+0x1au);
    /* 00631e5d: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00631e5f: je 0x631e82 */ if (fZ) goto L_00631e82;
L_00631e61:; BB(0x00631e61);
    /* 00631e61: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00631e64: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00631e66: je 0x631e82 */ if (fZ) goto L_00631e82;
L_00631e68:; BB(0x00631e68);
    /* 00631e68: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00631e6c: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00631e6e: mov cl, byte ptr [ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00631e70: cmp cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 00631e72: jb 0x631e78 */ if (fC) goto L_00631e78;
L_00631e74:; BB(0x00631e74);
    /* 00631e74: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00631e76: jbe 0x631e8f */ if ((fC||fZ)) goto L_00631e8f;
L_00631e78:; BB(0x00631e78);
    /* 00631e78: mov cl, byte ptr [eax + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 00631e7b: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00631e7e: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00631e80: jne 0x631e61 */ if (!fZ) goto L_00631e61;
L_00631e82:; BB(0x00631e82);
    /* 00631e82: mov eax, 1 */ r_eax = 0x1u;
    /* 00631e87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631e88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631e89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631e8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631e8b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631e8e: ret  */ FN_RET(0x00631cb0); r_esp += 4; return;
L_00631e8f:; BB(0x00631e8f);
    /* 00631e8f: mov eax, 2 */ r_eax = 0x2u;
    /* 00631e94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631e95: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631e96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631e97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631e98: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631e9b: ret  */ FN_RET(0x00631cb0); r_esp += 4; return;
L_00631e9c:; BB(0x00631e9c);
    /* 00631e9c: mov edi, dword ptr [0x6330cc] */ r_edi = R32((u32)(0x6330ccu));
    /* 00631ea2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631ea4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631ea6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631ea7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631ea8: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00631eaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631eab: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x631eadu); call_ind(t); }
    /* 00631ead: mov ebp, eax */ r_ebp = r_eax;
    /* 00631eaf: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631eb1: jne 0x631ebb */ if (!fZ) goto L_00631ebb;
L_00631eb3:; BB(0x00631eb3);
    /* 00631eb3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631eb4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631eb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631eb6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631eb7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631eba: ret  */ FN_RET(0x00631cb0); r_esp += 4; return;
L_00631ebb:; BB(0x00631ebb);
    /* 00631ebb: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 00631ebf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631ec0: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x631ec5u); f_00626230();
    /* 00631ec5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631ec8: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00631ecc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631ece: jne 0x631eda */ if (!fZ) goto L_00631eda;
L_00631ed0:; BB(0x00631ed0);
    /* 00631ed0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631ed2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631ed3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631ed4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631ed5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631ed6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631ed9: ret  */ FN_RET(0x00631cb0); r_esp += 4; return;
L_00631eda:; BB(0x00631eda);
    /* 00631eda: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631edb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631edc: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00631ee0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631ee1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631ee2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631ee4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631ee5: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x631ee7u); call_ind(t); }
    /* 00631ee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631ee9: je 0x631f4d */ if (fZ) goto L_00631f4d;
L_00631eeb:; BB(0x00631eeb);
    /* 00631eeb: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00631eef: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00631ef3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631ef7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631ef8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631ef9: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00631efb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631efc: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x631efeu); call_ind(t); }
    /* 00631efe: mov esi, eax */ r_esi = r_eax;
    /* 00631f00: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631f02: je 0x631f4d */ if (fZ) goto L_00631f4d;
L_00631f04:; BB(0x00631f04);
    /* 00631f04: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00631f07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631f08: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x631f0du); f_00626230();
    /* 00631f0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631f10: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00631f14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631f16: je 0x631f4d */ if (fZ) goto L_00631f4d;
L_00631f18:; BB(0x00631f18);
    /* 00631f18: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00631f1c: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00631f20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631f21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631f22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631f23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631f24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631f26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631f27: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x631f29u); call_ind(t); }
    /* 00631f29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631f2b: je 0x631f4d */ if (fZ) goto L_00631f4d;
L_00631f2d:; BB(0x00631f2d);
    /* 00631f2d: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00631f31: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00631f35: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00631f39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631f3b: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00631f3f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631f40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631f41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631f42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631f43: call dword ptr [0x633158] */ { u32 t = R32((u32)(0x633158u)); r_esp -= 4; W32(r_esp, 0x631f49u); call_ind(t); }
    /* 00631f49: mov esi, eax */ r_esi = r_eax;
    /* 00631f4b: jmp 0x631f51 */ goto L_00631f51;
L_00631f4d:; BB(0x00631f4d);
    /* 00631f4d: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_00631f51:; BB(0x00631f51);
    /* 00631f51: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00631f55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631f56: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x631f5bu); f_006262e0();
    /* 00631f5b: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00631f5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631f62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631f63: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x631f68u); f_006262e0();
    /* 00631f68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631f6b: mov eax, esi */ r_eax = r_esi;
L_00631f6d:; BB(0x00631f6d);
    /* 00631f6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631f6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631f6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631f70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631f71: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631f74: ret  */ FN_RET(0x00631cb0); r_esp += 4; return;
}

void f_00631f80(void) /* FUN_00631f80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631f80);
    /* 00631f80: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00631f84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631f85: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00631f89: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631f8b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631f8c: mov eax, esi */ r_eax = r_esi;
    /* 00631f8e: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 00631f91: je 0x631fa0 */ if (fZ) goto L_00631fa0;
L_00631f93:; BB(0x00631f93);
    /* 00631f93: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00631f96: je 0x631fa0 */ if (fZ) goto L_00631fa0;
L_00631f98:; BB(0x00631f98);
    /* 00631f98: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00631f99: mov edi, ecx */ r_edi = r_ecx;
    /* 00631f9b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00631f9c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631f9e: jne 0x631f93 */ if (!fZ) goto L_00631f93;
L_00631fa0:; BB(0x00631fa0);
    /* 00631fa0: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00631fa3: jne 0x631faa */ if (!fZ) goto L_00631faa;
L_00631fa5:; BB(0x00631fa5);
    /* 00631fa5: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00631fa7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631fa8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631fa9: ret  */ FN_RET(0x00631f80); r_esp += 4; return;
L_00631faa:; BB(0x00631faa);
    /* 00631faa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631fab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631fac: mov eax, edx */ r_eax = r_edx;
    /* 00631fae: ret  */ FN_RET(0x00631f80); r_esp += 4; return;
}

void f_00631fb0(void) /* FUN_00631fb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631fb0);
    /* 00631fb0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631fb1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631fb2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631fb3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631fb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631fb5: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00631fb9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631fbb: je 0x63216e */ if (fZ) goto L_0063216e;
L_00631fc1:; BB(0x00631fc1);
    /* 00631fc1: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00631fc3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631fc4: call 0x6322d0 */ r_esp -= 4; W32(r_esp, 0x631fc9u); f_006322d0();
    /* 00631fc9: mov esi, eax */ r_esi = r_eax;
    /* 00631fcb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631fce: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631fd0: je 0x63216e */ if (fZ) goto L_0063216e;
L_00631fd6:; BB(0x00631fd6);
    /* 00631fd6: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631fd8: je 0x63216e */ if (fZ) goto L_0063216e;
L_00631fde:; BB(0x00631fde);
    /* 00631fde: mov dl, byte ptr [esi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00631fe1: mov ecx, dword ptr [0x711488] */ r_ecx = R32((u32)(0x711488u));
    /* 00631fe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631fe9: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00631feb: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00631fee: mov ebp, eax */ r_ebp = r_eax;
    /* 00631ff0: mov eax, dword ptr [0x711484] */ r_eax = R32((u32)(0x711484u));
    /* 00631ff5: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631ff7: jne 0x632007 */ if (!fZ) goto L_00632007;
L_00631ff9:; BB(0x00631ff9);
    /* 00631ff9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631ffa: call 0x632240 */ r_esp -= 4; W32(r_esp, 0x631fffu); f_00632240();
    /* 00631fff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632002: mov dword ptr [0x711484], eax */ W32((u32)(0x711484u), r_eax);
L_00632007:; BB(0x00632007);
    /* 00632007: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632009: jne 0x632082 */ if (!fZ) goto L_00632082;
L_0063200b:; BB(0x0063200b);
    /* 0063200b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0063200f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632011: je 0x63202e */ if (fZ) goto L_0063202e;
L_00632013:; BB(0x00632013);
    /* 00632013: mov eax, dword ptr [0x71148c] */ r_eax = R32((u32)(0x71148cu));
    /* 00632018: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063201a: je 0x63202e */ if (fZ) goto L_0063202e;
L_0063201c:; BB(0x0063201c);
    /* 0063201c: call 0x6317b0 */ r_esp -= 4; W32(r_esp, 0x632021u); f_006317b0();
    /* 00632021: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632023: je 0x63207d */ if (fZ) goto L_0063207d;
L_00632025:; BB(0x00632025);
    /* 00632025: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00632028: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00632029: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063202a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063202b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063202c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063202d: ret  */ FN_RET(0x00631fb0); r_esp += 4; return;
L_0063202e:; BB(0x0063202e);
    /* 0063202e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632030: je 0x63203a */ if (fZ) goto L_0063203a;
L_00632032:; BB(0x00632032);
    /* 00632032: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632034: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00632035: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632036: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632037: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632038: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632039: ret  */ FN_RET(0x00631fb0); r_esp += 4; return;
L_0063203a:; BB(0x0063203a);
    /* 0063203a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063203c: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x632041u); f_00626230();
    /* 00632041: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632044: mov dword ptr [0x711484], eax */ W32((u32)(0x711484u), r_eax);
    /* 00632049: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063204b: je 0x63216e */ if (fZ) goto L_0063216e;
L_00632051:; BB(0x00632051);
    /* 00632051: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00632057: mov eax, dword ptr [0x71148c] */ r_eax = R32((u32)(0x71148cu));
    /* 0063205c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063205e: jne 0x63207d */ if (!fZ) goto L_0063207d;
L_00632060:; BB(0x00632060);
    /* 00632060: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00632062: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x632067u); f_00626230();
    /* 00632067: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063206a: mov dword ptr [0x71148c], eax */ W32((u32)(0x71148cu), r_eax);
    /* 0063206f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632071: je 0x63216e */ if (fZ) goto L_0063216e;
L_00632077:; BB(0x00632077);
    /* 00632077: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
L_0063207d:; BB(0x0063207d);
    /* 0063207d: mov eax, dword ptr [0x711484] */ r_eax = R32((u32)(0x711484u));
L_00632082:; BB(0x00632082);
    /* 00632082: mov ebx, eax */ r_ebx = r_eax;
    /* 00632084: mov eax, esi */ r_eax = r_esi;
    /* 00632086: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00632088: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632089: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063208a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0063208e: call 0x6321c0 */ r_esp -= 4; W32(r_esp, 0x632093u); f_006321c0();
    /* 00632093: mov esi, eax */ r_esi = r_eax;
    /* 00632095: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632098: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063209a: jl 0x63217f */ if ((fS!=fO)) goto L_0063217f;
L_006320a0:; BB(0x006320a0);
    /* 006320a0: cmp dword ptr [ebx], 0 */ {  u32 a = R32((u32)(r_ebx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006320a3: je 0x63217f */ if (fZ) goto L_0063217f;
L_006320a9:; BB(0x006320a9);
    /* 006320a9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006320ab: je 0x632177 */ if (fZ) goto L_00632177;
L_006320b1:; BB(0x006320b1);
    /* 006320b1: mov ecx, dword ptr [ebx + esi*4] */ r_ecx = R32((u32)(r_ebx+r_esi*4));
    /* 006320b4: lea edi, [ebx + esi*4] */ r_edi = (u32)(r_ebx+r_esi*4);
    /* 006320b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006320b8: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x6320bdu); f_006262e0();
    /* 006320bd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006320bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006320c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006320c4: je 0x6320d9 */ if (fZ) goto L_006320d9;
L_006320c6:; BB(0x006320c6);
    /* 006320c6: mov eax, edi */ r_eax = r_edi;
L_006320c8:; BB(0x006320c8);
    /* 006320c8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006320cb: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006320ce: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 006320d0: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006320d1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006320d3: mov edi, eax */ r_edi = r_eax;
    /* 006320d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006320d7: jne 0x6320c8 */ if (!fZ) goto L_006320c8;
L_006320d9:; BB(0x006320d9);
    /* 006320d9: lea eax, [esi*4] */ r_eax = (u32)(r_esi*4);
    /* 006320e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006320e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006320e2: call 0x629520 */ r_esp -= 4; W32(r_esp, 0x6320e7u); f_00629520();
    /* 006320e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006320ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006320ec: je 0x6320f3 */ if (fZ) goto L_006320f3;
L_006320ee:; BB(0x006320ee);
    /* 006320ee: mov dword ptr [0x711484], eax */ W32((u32)(0x711484u), r_eax);
L_006320f3:; BB(0x006320f3);
    /* 006320f3: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
L_006320f7:; BB(0x006320f7);
    /* 006320f7: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006320fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006320fd: je 0x632166 */ if (fZ) goto L_00632166;
L_006320ff:; BB(0x006320ff);
    /* 006320ff: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00632102: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632104: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 00632106: not ecx */ r_ecx = ~r_ecx;
    /* 00632108: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00632109: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063210a: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x63210fu); f_00626230();
    /* 0063210f: mov ebx, eax */ r_ebx = r_eax;
    /* 00632111: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632114: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632116: je 0x632166 */ if (fZ) goto L_00632166;
L_00632118:; BB(0x00632118);
    /* 00632118: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0063211c: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0063211f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632121: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 00632123: not ecx */ r_ecx = ~r_ecx;
    /* 00632125: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00632127: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0063212b: mov edx, ecx */ r_edx = r_ecx;
    /* 0063212d: mov esi, edi */ r_esi = r_edi;
    /* 0063212f: mov edi, ebx */ r_edi = r_ebx;
    /* 00632131: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00632134: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00632136: mov ecx, edx */ r_ecx = r_edx;
    /* 00632138: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0063213b: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fC = (a < b); fC = (b != 0); }
    /* 0063213d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0063213f: sbb ebp, ebp */ { u32 c = fC; u32 a = r_ebp; u32 b = r_ebp; u32 r = (a - b - c) & 0xffffffffu; r_ebp = r;  }
    /* 00632141: mov byte ptr [ebx + eax], 0 */ W8((u32)(r_ebx+r_eax), 0x0u);
    /* 00632145: lea eax, [ebx + eax + 1] */ r_eax = (u32)(r_ebx+r_eax+0x1u);
    /* 00632149: not ebp */ r_ebp = ~r_ebp;
    /* 0063214b: and ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0063214d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063214e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063214f: call dword ptr [0x63315c] */ { u32 t = R32((u32)(0x63315cu)); r_esp -= 4; W32(r_esp, 0x632155u); call_ind(t); }
    /* 00632155: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632156: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x63215bu); f_006262e0();
    /* 0063215b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063215e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632160: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00632161: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632163: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632164: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632165: ret  */ FN_RET(0x00631fb0); r_esp += 4; return;
L_00632166:; BB(0x00632166);
    /* 00632166: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632168: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00632169: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063216a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063216b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063216c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063216d: ret  */ FN_RET(0x00631fb0); r_esp += 4; return;
L_0063216e:; BB(0x0063216e);
    /* 0063216e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063216f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632170: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632171: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00632174: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632175: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632176: ret  */ FN_RET(0x00631fb0); r_esp += 4; return;
L_00632177:; BB(0x00632177);
    /* 00632177: mov dword ptr [ebx + esi*4], edi */ W32((u32)(r_ebx+r_esi*4), r_edi);
    /* 0063217a: jmp 0x6320f7 */ goto L_006320f7;
L_0063217f:; BB(0x0063217f);
    /* 0063217f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632181: jne 0x632166 */ if (!fZ) goto L_00632166;
L_00632183:; BB(0x00632183);
    /* 00632183: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00632185: jge 0x632189 */ if ((fS==fO)) goto L_00632189;
L_00632187:; BB(0x00632187);
    /* 00632187: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_00632189:; BB(0x00632189);
    /* 00632189: lea ecx, [esi*4 + 8] */ r_ecx = (u32)(r_esi*4+0x8u);
    /* 00632190: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632191: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632192: call 0x629520 */ r_esp -= 4; W32(r_esp, 0x632197u); f_00629520();
    /* 00632197: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063219a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063219c: je 0x63216e */ if (fZ) goto L_0063216e;
L_0063219e:; BB(0x0063219e);
    /* 0063219e: mov dword ptr [eax + esi*4], edi */ W32((u32)(r_eax+r_esi*4), r_edi);
    /* 006321a1: mov dword ptr [eax + esi*4 + 4], 0 */ W32((u32)(r_eax+r_esi*4+0x4u), 0x0u);
    /* 006321a9: mov dword ptr [0x711484], eax */ W32((u32)(0x711484u), r_eax);
    /* 006321ae: jmp 0x6320f7 */ goto L_006320f7;
}

void f_006321c0(void) /* FUN_006321c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006321c0);
    /* 006321c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006321c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006321c2: mov esi, dword ptr [0x711484] */ r_esi = R32((u32)(0x711484u));
    /* 006321c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006321c9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006321cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006321cd: je 0x632221 */ if (fZ) goto L_00632221;
L_006321cf:; BB(0x006321cf);
    /* 006321cf: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 006321d3: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_006321d7:; BB(0x006321d7);
    /* 006321d7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006321d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006321d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006321da: call 0x631770 */ r_esp -= 4; W32(r_esp, 0x6321dfu); f_00631770();
    /* 006321df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006321e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006321e4: jne 0x6321f3 */ if (!fZ) goto L_006321f3;
L_006321e6:; BB(0x006321e6);
    /* 006321e6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006321e8: mov al, byte ptr [eax + edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_edi))) & 0xffu);
    /* 006321eb: cmp al, 0x3d */ {  u32 a = (u8)r_eax; u32 b = 0x3du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006321ed: je 0x632210 */ if (fZ) goto L_00632210;
L_006321ef:; BB(0x006321ef);
    /* 006321ef: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006321f1: je 0x632210 */ if (fZ) goto L_00632210;
L_006321f3:; BB(0x006321f3);
    /* 006321f3: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006321f6: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006321f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006321fb: jne 0x6321d7 */ if (!fZ) goto L_006321d7;
L_006321fd:; BB(0x006321fd);
    /* 006321fd: mov eax, esi */ r_eax = r_esi;
    /* 006321ff: mov esi, dword ptr [0x711484] */ r_esi = R32((u32)(0x711484u));
    /* 00632205: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00632207: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0063220a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063220c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063220d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063220e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063220f: ret  */ FN_RET(0x006321c0); r_esp += 4; return;
L_00632210:; BB(0x00632210);
    /* 00632210: mov edx, dword ptr [0x711484] */ r_edx = R32((u32)(0x711484u));
    /* 00632216: mov eax, esi */ r_eax = r_esi;
    /* 00632218: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063221a: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0063221d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063221e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063221f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632220: ret  */ FN_RET(0x006321c0); r_esp += 4; return;
L_00632221:; BB(0x00632221);
    /* 00632221: mov eax, esi */ r_eax = r_esi;
    /* 00632223: mov esi, dword ptr [0x711484] */ r_esi = R32((u32)(0x711484u));
    /* 00632229: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063222b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063222c: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0063222f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632230: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632231: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00632233: ret  */ FN_RET(0x006321c0); r_esp += 4; return;
}

void f_00632240(void) /* FUN_00632240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632240);
    /* 00632240: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00632241: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00632245: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00632247: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632249: jne 0x63224f */ if (!fZ) goto L_0063224f;
L_0063224b:; BB(0x0063224b);
    /* 0063224b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063224d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063224e: ret  */ FN_RET(0x00632240); r_esp += 4; return;
L_0063224f:; BB(0x0063224f);
    /* 0063224f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00632251: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00632252: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632254: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632255: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 00632258: je 0x632264 */ if (fZ) goto L_00632264;
L_0063225a:; BB(0x0063225a);
    /* 0063225a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063225c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063225d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00632260: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632262: jne 0x63225a */ if (!fZ) goto L_0063225a;
L_00632264:; BB(0x00632264);
    /* 00632264: lea eax, [ecx*4 + 4] */ r_eax = (u32)(r_ecx*4+0x4u);
    /* 0063226b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063226c: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x632271u); f_00626230();
    /* 00632271: mov esi, eax */ r_esi = r_eax;
    /* 00632273: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632276: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632278: mov ebx, esi */ r_ebx = r_esi;
    /* 0063227a: jne 0x632286 */ if (!fZ) goto L_00632286;
L_0063227c:; BB(0x0063227c);
    /* 0063227c: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0063227e: call 0x627150 */ r_esp -= 4; W32(r_esp, 0x632283u); f_00627150();
    /* 00632283: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00632286:; BB(0x00632286);
    /* 00632286: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00632288: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063228a: je 0x6322a3 */ if (fZ) goto L_006322a3;
L_0063228c:; BB(0x0063228c);
    /* 0063228c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063228d: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00632290: call 0x632380 */ r_esp -= 4; W32(r_esp, 0x632295u); f_00632380();
    /* 00632295: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00632297: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00632299: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063229c: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0063229f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006322a1: jne 0x63228c */ if (!fZ) goto L_0063228c;
L_006322a3:; BB(0x006322a3);
    /* 006322a3: mov eax, ebx */ r_eax = r_ebx;
    /* 006322a5: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 006322ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006322ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006322ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006322ae: ret  */ FN_RET(0x00632240); r_esp += 4; return;
}

void f_006322d0(void) /* FUN_006322d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006322d0);
    /* 006322d0: mov eax, dword ptr [0x711808] */ r_eax = R32((u32)(0x711808u));
    /* 006322d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006322d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006322d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006322d9: jne 0x6322f0 */ if (!fZ) goto L_006322f0;
L_006322db:; BB(0x006322db);
    /* 006322db: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006322df: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006322e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006322e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006322e5: call 0x624e40 */ r_esp -= 4; W32(r_esp, 0x6322eau); f_00624e40();
    /* 006322ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006322ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006322ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006322ef: ret  */ FN_RET(0x006322d0); r_esp += 4; return;
L_006322f0:; BB(0x006322f0);
    /* 006322f0: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006322f4: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006322f8: movzx ax, byte ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_edx))) & 0xffffu);
    /* 006322fc: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 006322ff: je 0x632367 */ if (fZ) goto L_00632367;
L_00632301:; BB(0x00632301);
    /* 00632301: mov bl, 4 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x4u) & 0xffu);
L_00632303:; BB(0x00632303);
    /* 00632303: mov ecx, eax */ r_ecx = r_eax;
    /* 00632305: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0063230b: test byte ptr [ecx + 0x711601], bl */ {  u32 a = R8((u32)(r_ecx+0x711601u)); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00632311: je 0x632331 */ if (fZ) goto L_00632331;
L_00632313:; BB(0x00632313);
    /* 00632313: mov cl, byte ptr [edx + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 00632316: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00632317: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00632319: je 0x63235c */ if (fZ) goto L_0063235c;
L_0063231b:; BB(0x0063231b);
    /* 0063231b: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00632320: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00632326: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00632329: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063232b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063232d: je 0x632361 */ if (fZ) goto L_00632361;
L_0063232f:; BB(0x0063232f);
    /* 0063232f: jmp 0x63233d */ goto L_0063233d;
L_00632331:; BB(0x00632331);
    /* 00632331: mov ecx, eax */ r_ecx = r_eax;
    /* 00632333: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00632339: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063233b: je 0x632367 */ if (fZ) goto L_00632367;
L_0063233d:; BB(0x0063233d);
    /* 0063233d: movzx ax, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_edx+0x1u))) & 0xffffu);
    /* 00632342: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00632343: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00632346: jne 0x632303 */ if (!fZ) goto L_00632303;
L_00632348:; BB(0x00632348);
    /* 00632348: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0063234d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063234f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632351: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00632354: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00632355: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00632357: mov eax, ecx */ r_eax = r_ecx;
    /* 00632359: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063235a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063235b: ret  */ FN_RET(0x006322d0); r_esp += 4; return;
L_0063235c:; BB(0x0063235c);
    /* 0063235c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063235e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063235f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632360: ret  */ FN_RET(0x006322d0); r_esp += 4; return;
L_00632361:; BB(0x00632361);
    /* 00632361: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00632364: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632365: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632366: ret  */ FN_RET(0x006322d0); r_esp += 4; return;
L_00632367:; BB(0x00632367);
    /* 00632367: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0063236c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063236e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632370: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632371: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00632374: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00632375: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632376: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00632378: mov eax, ecx */ r_eax = r_ecx;
    /* 0063237a: ret  */ FN_RET(0x006322d0); r_esp += 4; return;
}

void f_00632380(void) /* FUN_00632380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632380);
    /* 00632380: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632381: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00632382: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00632386: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00632387: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632389: je 0x6323ca */ if (fZ) goto L_006323ca;
L_0063238b:; BB(0x0063238b);
    /* 0063238b: mov edi, esi */ r_edi = r_esi;
    /* 0063238d: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00632390: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632392: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 00632394: not ecx */ r_ecx = ~r_ecx;
    /* 00632396: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632397: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x63239cu); f_00626230();
    /* 0063239c: mov edx, eax */ r_edx = r_eax;
    /* 0063239e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006323a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006323a3: je 0x6323ca */ if (fZ) goto L_006323ca;
L_006323a5:; BB(0x006323a5);
    /* 006323a5: mov edi, esi */ r_edi = r_esi;
    /* 006323a7: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006323aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006323ac: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 006323ae: not ecx */ r_ecx = ~r_ecx;
    /* 006323b0: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006323b2: mov esi, edi */ r_esi = r_edi;
    /* 006323b4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006323b6: mov edi, edx */ r_edi = r_edx;
    /* 006323b8: mov eax, edi */ r_eax = r_edi;
    /* 006323ba: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006323bd: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006323bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006323c1: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006323c4: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 006323c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006323c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006323c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006323c9: ret  */ FN_RET(0x00632380); r_esp += 4; return;
L_006323ca:; BB(0x006323ca);
    /* 006323ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006323cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006323cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006323ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006323cf: ret  */ FN_RET(0x00632380); r_esp += 4; return;
}

void f_006323d0(void) /* FUN_006323d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006323d0);
    /* 006323d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006323d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006323d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006323d3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006323d4: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 006323d8: lea eax, [edi - 2] */ r_eax = (u32)(r_edi+0xfffffffeu);
    /* 006323db: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006323de: ja 0x63250b */ if ((!fC&&!fZ)) goto L_0063250b;
L_006323e4:; BB(0x006323e4);
    /* 006323e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006323e6: mov cl, byte ptr [eax + 0x632534] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x632534u))) & 0xffu);
    /* 006323ec: jmp dword ptr [ecx*4 + 0x632514] */ { u32 t = R32((u32)(r_ecx*4+0x632514u)); switch (t) { case 0x6323f3u: goto L_006323f3; case 0x632427u: goto L_00632427; case 0x63241au: goto L_0063241a; case 0x632400u: goto L_00632400; case 0x63240du: goto L_0063240d; case 0x63250bu: goto L_0063250b; default: UNSUP(0x006323ec, "jump table entry is not a known target"); } }
L_006323f3:; BB(0x006323f3);
    /* 006323f3: mov ebx, dword ptr [0x711888] */ r_ebx = R32((u32)(0x711888u));
    /* 006323f9: mov esi, 0x711888 */ r_esi = 0x711888u;
    /* 006323fe: jmp 0x632437 */ goto L_00632437;
L_00632400:; BB(0x00632400);
    /* 00632400: mov ebx, dword ptr [0x71188c] */ r_ebx = R32((u32)(0x71188cu));
    /* 00632406: mov esi, 0x71188c */ r_esi = 0x71188cu;
    /* 0063240b: jmp 0x632437 */ goto L_00632437;
L_0063240d:; BB(0x0063240d);
    /* 0063240d: mov ebx, dword ptr [0x711890] */ r_ebx = R32((u32)(0x711890u));
    /* 00632413: mov esi, 0x711890 */ r_esi = 0x711890u;
    /* 00632418: jmp 0x632437 */ goto L_00632437;
L_0063241a:; BB(0x0063241a);
    /* 0063241a: mov ebx, dword ptr [0x711894] */ r_ebx = R32((u32)(0x711894u));
    /* 00632420: mov esi, 0x711894 */ r_esi = 0x711894u;
    /* 00632425: jmp 0x632437 */ goto L_00632437;
L_00632427:; BB(0x00632427);
    /* 00632427: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00632428: call 0x632550 */ r_esp -= 4; W32(r_esp, 0x63242du); f_00632550();
    /* 0063242d: mov esi, eax */ r_esi = r_eax;
    /* 0063242f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632432: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00632435: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
L_00632437:; BB(0x00632437);
    /* 00632437: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063243a: jne 0x632443 */ if (!fZ) goto L_00632443;
L_0063243c:; BB(0x0063243c);
    /* 0063243c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063243e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063243f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632440: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632441: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632442: ret  */ FN_RET(0x006323d0); r_esp += 4; return;
L_00632443:; BB(0x00632443);
    /* 00632443: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632445: jne 0x632451 */ if (!fZ) goto L_00632451;
L_00632447:; BB(0x00632447);
    /* 00632447: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00632449: call 0x629710 */ r_esp -= 4; W32(r_esp, 0x63244eu); f_00629710();
    /* 0063244e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00632451:; BB(0x00632451);
    /* 00632451: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632454: je 0x632460 */ if (fZ) goto L_00632460;
L_00632456:; BB(0x00632456);
    /* 00632456: cmp edi, 0xb */ {  u32 a = r_edi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632459: je 0x632460 */ if (fZ) goto L_00632460;
L_0063245b:; BB(0x0063245b);
    /* 0063245b: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063245e: jne 0x63248b */ if (!fZ) goto L_0063248b;
L_00632460:; BB(0x00632460);
    /* 00632460: mov ebp, dword ptr [0x7114e8] */ r_ebp = R32((u32)(0x7114e8u));
    /* 00632466: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632469: mov dword ptr [0x7114e8], 0 */ W32((u32)(0x7114e8u), 0x0u);
    /* 00632473: jne 0x6324c0 */ if (!fZ) goto L_006324c0;
L_00632475:; BB(0x00632475);
    /* 00632475: mov edx, dword ptr [0x6f4e0c] */ r_edx = R32((u32)(0x6f4e0cu));
    /* 0063247b: mov dword ptr [0x6f4e0c], 0x8c */ W32((u32)(0x6f4e0cu), 0x8cu);
    /* 00632485: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00632489: jmp 0x63248f */ goto L_0063248f;
L_0063248b:; BB(0x0063248b);
    /* 0063248b: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
L_0063248f:; BB(0x0063248f);
    /* 0063248f: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632492: jne 0x6324c0 */ if (!fZ) goto L_006324c0;
L_00632494:; BB(0x00632494);
    /* 00632494: mov edx, dword ptr [0x6f4e00] */ r_edx = R32((u32)(0x6f4e00u));
    /* 0063249a: mov eax, dword ptr [0x6f4e04] */ r_eax = R32((u32)(0x6f4e04u));
    /* 0063249f: lea ecx, [eax + edx] */ r_ecx = (u32)(r_eax+r_edx);
    /* 006324a2: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006324a4: jge 0x6324c6 */ if ((fS==fO)) goto L_006324c6;
L_006324a6:; BB(0x006324a6);
    /* 006324a6: lea eax, [edx + edx*2] */ r_eax = (u32)(r_edx+r_edx*2);
    /* 006324a9: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006324ab: lea eax, [eax*4 + 0x6f4d90] */ r_eax = (u32)(r_eax*4+0x6f4d90u);
L_006324b2:; BB(0x006324b2);
    /* 006324b2: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006324b8: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006324bb: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006324bc: jne 0x6324b2 */ if (!fZ) goto L_006324b2;
L_006324be:; BB(0x006324be);
    /* 006324be: jmp 0x6324c6 */ goto L_006324c6;
L_006324c0:; BB(0x006324c0);
    /* 006324c0: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_006324c6:; BB(0x006324c6);
    /* 006324c6: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006324c9: jne 0x6324da */ if (!fZ) goto L_006324da;
L_006324cb:; BB(0x006324cb);
    /* 006324cb: mov ecx, dword ptr [0x6f4e0c] */ r_ecx = R32((u32)(0x6f4e0cu));
    /* 006324d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006324d2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006324d3: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x6324d5u); call_ind(t); }
    /* 006324d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006324d8: jmp 0x6324e0 */ goto L_006324e0;
L_006324da:; BB(0x006324da);
    /* 006324da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006324db: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x6324ddu); call_ind(t); }
    /* 006324dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006324e0:; BB(0x006324e0);
    /* 006324e0: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006324e3: je 0x6324ef */ if (fZ) goto L_006324ef;
L_006324e5:; BB(0x006324e5);
    /* 006324e5: cmp edi, 0xb */ {  u32 a = r_edi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006324e8: je 0x6324ef */ if (fZ) goto L_006324ef;
L_006324ea:; BB(0x006324ea);
    /* 006324ea: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006324ed: jne 0x632504 */ if (!fZ) goto L_00632504;
L_006324ef:; BB(0x006324ef);
    /* 006324ef: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006324f2: mov dword ptr [0x7114e8], ebp */ W32((u32)(0x7114e8u), r_ebp);
    /* 006324f8: jne 0x632504 */ if (!fZ) goto L_00632504;
L_006324fa:; BB(0x006324fa);
    /* 006324fa: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006324fe: mov dword ptr [0x6f4e0c], edx */ W32((u32)(0x6f4e0cu), r_edx);
L_00632504:; BB(0x00632504);
    /* 00632504: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632506: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00632507: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632508: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632509: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063250a: ret  */ FN_RET(0x006323d0); r_esp += 4; return;
L_0063250b:; BB(0x0063250b);
    /* 0063250b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063250c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063250d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063250e: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00632511: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632512: ret  */ FN_RET(0x006323d0); r_esp += 4; return;
}

void f_00632550(void) /* FUN_00632550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632550);
    /* 00632550: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00632554: mov ecx, dword ptr [0x6f4d8c] */ r_ecx = R32((u32)(0x6f4d8cu));
    /* 0063255a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063255b: mov esi, dword ptr [0x6f4e08] */ r_esi = R32((u32)(0x6f4e08u));
    /* 00632561: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632563: mov eax, 0x6f4d88 */ r_eax = 0x6f4d88u;
    /* 00632568: je 0x632580 */ if (fZ) goto L_00632580;
L_0063256a:; BB(0x0063256a);
    /* 0063256a: lea ecx, [esi + esi*2] */ r_ecx = (u32)(r_esi+r_esi*2);
    /* 0063256d: lea ecx, [ecx*4 + 0x6f4d88] */ r_ecx = (u32)(r_ecx*4+0x6f4d88u);
L_00632574:; BB(0x00632574);
    /* 00632574: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00632577: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00632579: jae 0x632580 */ if (!fC) goto L_00632580;
L_0063257b:; BB(0x0063257b);
    /* 0063257b: cmp dword ptr [eax + 4], edx */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063257e: jne 0x632574 */ if (!fZ) goto L_00632574;
L_00632580:; BB(0x00632580);
    /* 00632580: lea ecx, [esi + esi*2] */ r_ecx = (u32)(r_esi+r_esi*2);
    /* 00632583: lea ecx, [ecx*4 + 0x6f4d88] */ r_ecx = (u32)(r_ecx*4+0x6f4d88u);
    /* 0063258a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0063258c: jae 0x632593 */ if (!fC) goto L_00632593;
L_0063258e:; BB(0x0063258e);
    /* 0063258e: cmp dword ptr [eax + 4], edx */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632591: je 0x632595 */ if (fZ) goto L_00632595;
L_00632593:; BB(0x00632593);
    /* 00632593: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00632595:; BB(0x00632595);
    /* 00632595: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632596: ret  */ FN_RET(0x00632550); r_esp += 4; return;
}

void f_00632640(void) /* FUN_00632640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632640);
    /* 00632640: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00632644: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00632648: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063264b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063264c: jne 0x632668 */ if (!fZ) goto L_00632668;
L_0063264e:; BB(0x0063264e);
    /* 0063264e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00632650: jge 0x632668 */ if ((fS==fO)) goto L_00632668;
L_00632652:; BB(0x00632652);
    /* 00632652: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00632656: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00632658: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0063265a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063265b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063265c: call 0x632680 */ r_esp -= 4; W32(r_esp, 0x632661u); f_00632680();
    /* 00632661: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632664: mov eax, esi */ r_eax = r_esi;
    /* 00632666: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632667: ret  */ FN_RET(0x00632640); r_esp += 4; return;
L_00632668:; BB(0x00632668);
    /* 00632668: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0063266c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063266e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063266f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00632670: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632671: call 0x632680 */ r_esp -= 4; W32(r_esp, 0x632676u); f_00632680();
    /* 00632676: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632679: mov eax, esi */ r_eax = r_esi;
    /* 0063267b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063267c: ret  */ FN_RET(0x00632640); r_esp += 4; return;
}

void f_00632680(void) /* FUN_00632680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632680);
    /* 00632680: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00632684: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632685: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632686: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00632687: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0063268b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063268c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063268e: je 0x63269c */ if (fZ) goto L_0063269c;
L_00632690:; BB(0x00632690);
    /* 00632690: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00632694: mov byte ptr [esi], 0x2d */ W8((u32)(r_esi), 0x2du);
    /* 00632697: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00632698: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0063269a: jmp 0x6326a0 */ goto L_006326a0;
L_0063269c:; BB(0x0063269c);
    /* 0063269c: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_006326a0:; BB(0x006326a0);
    /* 006326a0: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 006326a4: mov ebx, esi */ r_ebx = r_esi;
L_006326a6:; BB(0x006326a6);
    /* 006326a6: mov eax, edi */ r_eax = r_edi;
    /* 006326a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006326aa: div ebp */ { u32 d = r_ebp; if (!d) UNSUP(0x006326aa, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x006326aa, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006326ac: mov eax, edi */ r_eax = r_edi;
    /* 006326ae: mov ecx, edx */ r_ecx = r_edx;
    /* 006326b0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006326b2: div ebp */ { u32 d = r_ebp; if (!d) UNSUP(0x006326b2, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x006326b2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006326b4: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006326b7: mov edi, eax */ r_edi = r_eax;
    /* 006326b9: jbe 0x6326c0 */ if ((fC||fZ)) goto L_006326c0;
L_006326bb:; BB(0x006326bb);
    /* 006326bb: add cl, 0x57 */ {  u32 a = (u8)r_ecx; u32 b = 0x57u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006326be: jmp 0x6326c3 */ goto L_006326c3;
L_006326c0:; BB(0x006326c0);
    /* 006326c0: add cl, 0x30 */ {  u32 a = (u8)r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
L_006326c3:; BB(0x006326c3);
    /* 006326c3: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 006326c5: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006326c6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006326c8: ja 0x6326a6 */ if ((!fC&&!fZ)) goto L_006326a6;
L_006326ca:; BB(0x006326ca);
    /* 006326ca: mov byte ptr [esi], 0 */ W8((u32)(r_esi), 0x0u);
    /* 006326cd: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_006326ce:; BB(0x006326ce);
    /* 006326ce: mov cl, byte ptr [ebx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebx))) & 0xffu);
    /* 006326d0: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 006326d2: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 006326d4: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 006326d6: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006326d7: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006326d8: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006326da: jb 0x6326ce */ if (fC) goto L_006326ce;
L_006326dc:; BB(0x006326dc);
    /* 006326dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006326dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006326de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006326df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006326e0: ret  */ FN_RET(0x00632680); r_esp += 4; return;
}

void f_006326f0(void) /* FUN_006326f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006326f0);
    /* 006326f0: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006326f4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006326f8: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006326fb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006326fc: jne 0x63271b */ if (!fZ) goto L_0063271b;
L_006326fe:; BB(0x006326fe);
    /* 006326fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00632700: jge 0x63271b */ if ((fS==fO)) goto L_0063271b;
L_00632702:; BB(0x00632702);
    /* 00632702: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00632706: mov eax, 1 */ r_eax = 0x1u;
    /* 0063270b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063270c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063270d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063270e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063270f: call 0x632680 */ r_esp -= 4; W32(r_esp, 0x632714u); f_00632680();
    /* 00632714: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632717: mov eax, esi */ r_eax = r_esi;
    /* 00632719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063271a: ret  */ FN_RET(0x006326f0); r_esp += 4; return;
L_0063271b:; BB(0x0063271b);
    /* 0063271b: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0063271f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632722: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632723: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00632724: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00632725: call 0x632680 */ r_esp -= 4; W32(r_esp, 0x63272au); f_00632680();
    /* 0063272a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063272d: mov eax, esi */ r_eax = r_esi;
    /* 0063272f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632730: ret  */ FN_RET(0x006326f0); r_esp += 4; return;
}

