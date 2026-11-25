#include "protos.h"

void f_00626080(void) /* __allrem */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626080);
    /* 00626080: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626081: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626082: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00626084: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00626088: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = 0; }
    /* 0062608a: jge 0x6260a0 */ if ((fS==fO)) goto L_006260a0;
L_0062608c:; BB(0x0062608c);
    /* 0062608c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062608d: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00626091: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626093: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00626095: sbb eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00626098: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0062609c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
L_006260a0:; BB(0x006260a0);
    /* 006260a0: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006260a4: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = 0; }
    /* 006260a6: jge 0x6260bb */ if ((fS==fO)) goto L_006260bb;
L_006260a8:; BB(0x006260a8);
    /* 006260a8: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006260ac: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006260ae: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 006260b0: sbb eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006260b3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006260b7: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
L_006260bb:; BB(0x006260bb);
    /* 006260bb: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 006260bd: jne 0x6260da */ if (!fZ) goto L_006260da;
L_006260bf:; BB(0x006260bf);
    /* 006260bf: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006260c3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006260c7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006260c9: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x006260c9, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x006260c9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006260cb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006260cf: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x006260cf, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x006260cf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006260d1: mov eax, edx */ r_eax = r_edx;
    /* 006260d3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006260d5: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); }
    /* 006260d6: jns 0x626126 */ if (!fS) goto L_00626126;
L_006260d8:; BB(0x006260d8);
    /* 006260d8: jmp 0x62612d */ goto L_0062612d;
L_006260da:; BB(0x006260da);
    /* 006260da: mov ebx, eax */ r_ebx = r_eax;
    /* 006260dc: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006260e0: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006260e4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
L_006260e8:; BB(0x006260e8);
    /* 006260e8: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006260ea: rcr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_ecx = a; }
    /* 006260ec: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006260ee: rcr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_eax = a; }
    /* 006260f0: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 006260f2: jne 0x6260e8 */ if (!fZ) goto L_006260e8;
L_006260f4:; BB(0x006260f4);
    /* 006260f4: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x006260f4, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x006260f4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006260f6: mov ecx, eax */ r_ecx = r_eax;
    /* 006260f8: mul dword ptr [esp + 0x18] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x18u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006260fc: xchg ecx, eax */ { u32 x = r_ecx; u32 y = r_eax; r_ecx = y; r_eax = x; }
    /* 006260fd: mul dword ptr [esp + 0x14] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x14u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00626101: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 00626103: jb 0x626113 */ if (fC) goto L_00626113;
L_00626105:; BB(0x00626105);
    /* 00626105: cmp edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00626109: ja 0x626113 */ if ((!fC&&!fZ)) goto L_00626113;
L_0062610b:; BB(0x0062610b);
    /* 0062610b: jb 0x62611b */ if (fC) goto L_0062611b;
L_0062610d:; BB(0x0062610d);
    /* 0062610d: cmp eax, dword ptr [esp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00626111: jbe 0x62611b */ if ((fC||fZ)) goto L_0062611b;
L_00626113:; BB(0x00626113);
    /* 00626113: sub eax, dword ptr [esp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00626117: sbb edx, dword ptr [esp + 0x18] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
L_0062611b:; BB(0x0062611b);
    /* 0062611b: sub eax, dword ptr [esp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 0062611f: sbb edx, dword ptr [esp + 0x10] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00626123: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); }
    /* 00626124: jns 0x62612d */ if (!fS) goto L_0062612d;
L_00626126:; BB(0x00626126);
    /* 00626126: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00626128: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0062612a: sbb edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
L_0062612d:; BB(0x0062612d);
    /* 0062612d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062612e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062612f: ret 0x10 */ FN_RET(0x00626080); r_esp += 20; return;
}

void f_00626140(void) /* __alldiv */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626140);
    /* 00626140: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626141: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626142: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626143: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00626145: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00626149: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = 0; }
    /* 0062614b: jge 0x626161 */ if ((fS==fO)) goto L_00626161;
L_0062614d:; BB(0x0062614d);
    /* 0062614d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062614e: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00626152: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626154: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00626156: sbb eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00626159: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0062615d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_00626161:; BB(0x00626161);
    /* 00626161: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00626165: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = 0; }
    /* 00626167: jge 0x62617d */ if ((fS==fO)) goto L_0062617d;
L_00626169:; BB(0x00626169);
    /* 00626169: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062616a: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0062616e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626170: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00626172: sbb eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00626175: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00626179: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
L_0062617d:; BB(0x0062617d);
    /* 0062617d: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0062617f: jne 0x626199 */ if (!fZ) goto L_00626199;
L_00626181:; BB(0x00626181);
    /* 00626181: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00626185: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00626189: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062618b: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x0062618b, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0062618b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0062618d: mov ebx, eax */ r_ebx = r_eax;
    /* 0062618f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00626193: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x00626193, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00626193, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00626195: mov edx, ebx */ r_edx = r_ebx;
    /* 00626197: jmp 0x6261da */ goto L_006261da;
L_00626199:; BB(0x00626199);
    /* 00626199: mov ebx, eax */ r_ebx = r_eax;
    /* 0062619b: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0062619f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006261a3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_006261a7:; BB(0x006261a7);
    /* 006261a7: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006261a9: rcr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_ecx = a; }
    /* 006261ab: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006261ad: rcr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_eax = a; }
    /* 006261af: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 006261b1: jne 0x6261a7 */ if (!fZ) goto L_006261a7;
L_006261b3:; BB(0x006261b3);
    /* 006261b3: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x006261b3, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x006261b3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006261b5: mov esi, eax */ r_esi = r_eax;
    /* 006261b7: mul dword ptr [esp + 0x1c] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x1cu)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006261bb: mov ecx, eax */ r_ecx = r_eax;
    /* 006261bd: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006261c1: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006261c3: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 006261c5: jb 0x6261d5 */ if (fC) goto L_006261d5;
L_006261c7:; BB(0x006261c7);
    /* 006261c7: cmp edx, dword ptr [esp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006261cb: ja 0x6261d5 */ if ((!fC&&!fZ)) goto L_006261d5;
L_006261cd:; BB(0x006261cd);
    /* 006261cd: jb 0x6261d6 */ if (fC) goto L_006261d6;
L_006261cf:; BB(0x006261cf);
    /* 006261cf: cmp eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006261d3: jbe 0x6261d6 */ if ((fC||fZ)) goto L_006261d6;
L_006261d5:; BB(0x006261d5);
    /* 006261d5: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_006261d6:; BB(0x006261d6);
    /* 006261d6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006261d8: mov eax, esi */ r_eax = r_esi;
L_006261da:; BB(0x006261da);
    /* 006261da: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006261db: jne 0x6261e4 */ if (!fZ) goto L_006261e4;
L_006261dd:; BB(0x006261dd);
    /* 006261dd: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006261df: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 006261e1: sbb edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
L_006261e4:; BB(0x006261e4);
    /* 006261e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006261e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006261e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006261e7: ret 0x10 */ FN_RET(0x00626140); r_esp += 20; return;
}

void f_006261f0(void) /* __allmul */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006261f0);
    /* 006261f0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006261f4: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006261f8: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006261fa: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006261fe: jne 0x626209 */ if (!fZ) goto L_00626209;
L_00626200:; BB(0x00626200);
    /* 00626200: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00626204: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00626206: ret 0x10 */ FN_RET(0x006261f0); r_esp += 20; return;
L_00626209:; BB(0x00626209);
    /* 00626209: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062620a: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0062620c: mov ebx, eax */ r_ebx = r_eax;
    /* 0062620e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00626212: mul dword ptr [esp + 0x14] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x14u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00626216: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00626218: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062621c: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0062621e: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00626220: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626221: ret 0x10 */ FN_RET(0x006261f0); r_esp += 20; return;
}

void f_006264f0(void) /* _strncpy */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006264f0);
    /* 006264f0: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006264f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006264f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006264f7: je 0x626573 */ if (fZ) goto L_00626573;
L_006264f9:; BB(0x006264f9);
    /* 006264f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006264fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006264fb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006264fd: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00626501: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626507: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0062650b: jne 0x626514 */ if (!fZ) goto L_00626514;
L_0062650d:; BB(0x0062650d);
    /* 0062650d: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 00626510: jne 0x626581 */ if (!fZ) goto L_00626581;
L_00626512:; BB(0x00626512);
    /* 00626512: jmp 0x626535 */ goto L_00626535;
L_00626514:; BB(0x00626514);
    /* 00626514: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00626516: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00626517: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00626519: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062651a: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062651b: je 0x626542 */ if (fZ) goto L_00626542;
L_0062651d:; BB(0x0062651d);
    /* 0062651d: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062651f: je 0x62654a */ if (fZ) goto L_0062654a;
L_00626521:; BB(0x00626521);
    /* 00626521: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626527: jne 0x626514 */ if (!fZ) goto L_00626514;
L_00626529:; BB(0x00626529);
    /* 00626529: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062652b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 0062652e: jne 0x626581 */ if (!fZ) goto L_00626581;
L_00626530:; BB(0x00626530);
    /* 00626530: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00626533: je 0x626542 */ if (fZ) goto L_00626542;
L_00626535:; BB(0x00626535);
    /* 00626535: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00626537: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00626538: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0062653a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062653b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062653d: je 0x62656e */ if (fZ) goto L_0062656e;
L_0062653f:; BB(0x0062653f);
    /* 0062653f: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00626540: jne 0x626535 */ if (!fZ) goto L_00626535;
L_00626542:; BB(0x00626542);
    /* 00626542: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00626546: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626547: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626548: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626549: ret  */ FN_RET(0x006264f0); r_esp += 4; return;
L_0062654a:; BB(0x0062654a);
    /* 0062654a: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626550: je 0x626564 */ if (fZ) goto L_00626564;
L_00626552:; BB(0x00626552);
    /* 00626552: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00626554: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00626555: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00626556: je 0x6265e6 */ if (fZ) goto L_006265e6;
L_0062655c:; BB(0x0062655c);
    /* 0062655c: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626562: jne 0x626552 */ if (!fZ) goto L_00626552;
L_00626564:; BB(0x00626564);
    /* 00626564: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00626566: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 00626569: jne 0x6265d7 */ if (!fZ) goto L_006265d7;
L_0062656b:; BB(0x0062656b);
    /* 0062656b: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0062656d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0062656e:; BB(0x0062656e);
    /* 0062656e: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0062656f: jne 0x62656b */ if (!fZ) goto L_0062656b;
L_00626571:; BB(0x00626571);
    /* 00626571: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626572: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00626573:; BB(0x00626573);
    /* 00626573: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00626577: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626578: ret  */ FN_RET(0x006264f0); r_esp += 4; return;
L_00626579:; BB(0x00626579);
    /* 00626579: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0062657b: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062657e: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062657f: je 0x626530 */ if (fZ) goto L_00626530;
L_00626581:; BB(0x00626581);
    /* 00626581: mov edx, 0x7efefeff */ r_edx = 0x7efefeffu;
    /* 00626586: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00626588: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062658a: xor eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062658d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062658f: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00626591: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00626594: test eax, 0x81010100 */ {  u32 a = r_eax; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626599: je 0x626579 */ if (fZ) goto L_00626579;
L_0062659b:; BB(0x0062659b);
    /* 0062659b: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062659d: je 0x6265cb */ if (fZ) goto L_006265cb;
L_0062659f:; BB(0x0062659f);
    /* 0062659f: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006265a1: je 0x6265c1 */ if (fZ) goto L_006265c1;
L_006265a3:; BB(0x006265a3);
    /* 006265a3: test edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006265a9: je 0x6265b7 */ if (fZ) goto L_006265b7;
L_006265ab:; BB(0x006265ab);
    /* 006265ab: test edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006265b1: jne 0x626579 */ if (!fZ) goto L_00626579;
L_006265b3:; BB(0x006265b3);
    /* 006265b3: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 006265b5: jmp 0x6265cf */ goto L_006265cf;
L_006265b7:; BB(0x006265b7);
    /* 006265b7: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006265bd: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 006265bf: jmp 0x6265cf */ goto L_006265cf;
L_006265c1:; BB(0x006265c1);
    /* 006265c1: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006265c7: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 006265c9: jmp 0x6265cf */ goto L_006265cf;
L_006265cb:; BB(0x006265cb);
    /* 006265cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006265cd: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
L_006265cf:; BB(0x006265cf);
    /* 006265cf: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006265d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006265d4: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006265d5: je 0x6265e1 */ if (fZ) goto L_006265e1;
L_006265d7:; BB(0x006265d7);
    /* 006265d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006265d9:; BB(0x006265d9);
    /* 006265d9: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 006265db: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006265de: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006265df: jne 0x6265d9 */ if (!fZ) goto L_006265d9;
L_006265e1:; BB(0x006265e1);
    /* 006265e1: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 006265e4: jne 0x62656b */ if (!fZ) goto L_0062656b;
L_006265e6:; BB(0x006265e6);
    /* 006265e6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006265ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006265eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006265ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006265ed: ret  */ FN_RET(0x006264f0); r_esp += 4; return;
}

void f_00626780(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626780);
    /* 00626780: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00626782: call 0x626790 */ r_esp -= 4; W32(r_esp, 0x626787u); f_00626790();
    /* 00626787: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062678a: ret  */ FN_RET(0x00626780); r_esp += 4; return;
}

void f_006269c0(void) /* _strrchr */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006269c0);
    /* 006269c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006269c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006269c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006269c4: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 006269c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006269c9: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006269cc: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 006269ce: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006269cf: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006269d1: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006269d2: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 006269d5: std  */ rt_df = 1;
    /* 006269d6: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 006269d8: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006269d9: cmp byte ptr [edi], al */ {  u32 a = R8((u32)(r_edi)); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006269db: je 0x6269e1 */ if (fZ) goto L_006269e1;
L_006269dd:; BB(0x006269dd);
    /* 006269dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006269df: jmp 0x6269e3 */ goto L_006269e3;
L_006269e1:; BB(0x006269e1);
    /* 006269e1: mov eax, edi */ r_eax = r_edi;
L_006269e3:; BB(0x006269e3);
    /* 006269e3: cld  */ rt_df = 0;
    /* 006269e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006269e5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 006269e6: ret  */ FN_RET(0x006269c0); r_esp += 4; return;
}

void f_00626fb0(void) /* entry */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626fb0);
    /* 00626fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00626fb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626fb5: push 0x63d0f8 */ { u32 v = 0x63d0f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00626fba: push 0x62b6b8 */ { u32 v = 0x62b6b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00626fbf: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00626fc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626fc6: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00626fcd: add esp, -0x58 */ {  u32 a = r_esp; u32 b = 0xffffffa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626fd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626fd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626fd2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626fd3: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 00626fd6: call dword ptr [0x6330f4] */ { u32 t = R32((u32)(0x6330f4u)); r_esp -= 4; W32(r_esp, 0x626fdcu); call_ind(t); }
    /* 00626fdc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00626fde: mov dl, ah */ r_edx = (r_edx & 0xffffff00u) | (((u8)(r_eax>>8)) & 0xffu);
    /* 00626fe0: mov dword ptr [0x711474], edx */ W32((u32)(0x711474u), r_edx);
    /* 00626fe6: mov ecx, eax */ r_ecx = r_eax;
    /* 00626fe8: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00626fee: mov dword ptr [0x711470], ecx */ W32((u32)(0x711470u), r_ecx);
    /* 00626ff4: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00626ff7: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00626ff9: mov dword ptr [0x71146c], ecx */ W32((u32)(0x71146cu), r_ecx);
    /* 00626fff: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00627002: mov dword ptr [0x711468], eax */ W32((u32)(0x711468u), r_eax);
    /* 00627007: call 0x62b7b0 */ r_esp -= 4; W32(r_esp, 0x62700cu); f_0062b7b0();
    /* 0062700c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062700e: jne 0x62701a */ if (!fZ) goto L_0062701a;
L_00627010:; BB(0x00627010);
    /* 00627010: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00627012: call 0x627180 */ r_esp -= 4; W32(r_esp, 0x627017u); f_00627180();
    /* 00627017: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062701a:; BB(0x0062701a);
    /* 0062701a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00627021: call 0x62c0a0 */ r_esp -= 4; W32(r_esp, 0x627026u); f_0062c0a0();
    /* 00627026: call 0x62e960 */ r_esp -= 4; W32(r_esp, 0x62702bu); f_0062e960();
    /* 0062702b: call dword ptr [0x6330c8] */ { u32 t = R32((u32)(0x6330c8u)); r_esp -= 4; W32(r_esp, 0x627031u); call_ind(t); }
    /* 00627031: mov dword ptr [0x7129f0], eax */ W32((u32)(0x7129f0u), r_eax);
    /* 00627036: call 0x62e320 */ r_esp -= 4; W32(r_esp, 0x62703bu); f_0062e320();
    /* 0062703b: mov dword ptr [0x711330], eax */ W32((u32)(0x711330u), r_eax);
    /* 00627040: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627042: je 0x62704d */ if (fZ) goto L_0062704d;
L_00627044:; BB(0x00627044);
    /* 00627044: mov eax, dword ptr [0x7129f0] */ r_eax = R32((u32)(0x7129f0u));
    /* 00627049: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062704b: jne 0x627057 */ if (!fZ) goto L_00627057;
L_0062704d:; BB(0x0062704d);
    /* 0062704d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062704f: call 0x6296f0 */ r_esp -= 4; W32(r_esp, 0x627054u); f_006296f0();
    /* 00627054: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00627057:; BB(0x00627057);
    /* 00627057: call 0x62e070 */ r_esp -= 4; W32(r_esp, 0x62705cu); f_0062e070();
    /* 0062705c: call 0x62df80 */ r_esp -= 4; W32(r_esp, 0x627061u); f_0062df80();
    /* 00627061: call 0x6296c0 */ r_esp -= 4; W32(r_esp, 0x627066u); f_006296c0();
    /* 00627066: mov esi, dword ptr [0x7129f0] */ r_esi = R32((u32)(0x7129f0u));
    /* 0062706c: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 0062706f: cmp byte ptr [esi], 0x22 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00627072: jne 0x627136 */ if (!fZ) goto L_00627136;
L_00627078:; BB(0x00627078);
    /* 00627078: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00627079: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 0062707c: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0062707e: cmp al, 0x22 */ {  u32 a = (u8)r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00627080: je 0x62709e */ if (fZ) goto L_0062709e;
L_00627082:; BB(0x00627082);
    /* 00627082: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627084: je 0x62709e */ if (fZ) goto L_0062709e;
L_00627086:; BB(0x00627086);
    /* 00627086: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062708b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062708c: call 0x62df20 */ r_esp -= 4; W32(r_esp, 0x627091u); f_0062df20();
    /* 00627091: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627094: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627096: je 0x627078 */ if (fZ) goto L_00627078;
L_00627098:; BB(0x00627098);
    /* 00627098: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00627099: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 0062709c: jmp 0x627078 */ goto L_00627078;
L_0062709e:; BB(0x0062709e);
    /* 0062709e: cmp byte ptr [esi], 0x22 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006270a1: jne 0x6270a7 */ if (!fZ) goto L_006270a7;
L_006270a3:; BB(0x006270a3);
    /* 006270a3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006270a4: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
L_006270a7:; BB(0x006270a7);
    /* 006270a7: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 006270a9: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006270ab: je 0x6270b7 */ if (fZ) goto L_006270b7;
L_006270ad:; BB(0x006270ad);
    /* 006270ad: cmp al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006270af: ja 0x6270b7 */ if ((!fC&&!fZ)) goto L_006270b7;
L_006270b1:; BB(0x006270b1);
    /* 006270b1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006270b2: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 006270b5: jmp 0x6270a7 */ goto L_006270a7;
L_006270b7:; BB(0x006270b7);
    /* 006270b7: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006270be: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 006270c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006270c2: call dword ptr [0x6330d8] */ { u32 t = R32((u32)(0x6330d8u)); r_esp -= 4; W32(r_esp, 0x6270c8u); call_ind(t); }
    /* 006270c8: test byte ptr [ebp - 0x30], 1 */ {  u32 a = R8((u32)(r_ebp+0xffffffd0u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006270cc: je 0x6270d8 */ if (fZ) goto L_006270d8;
L_006270ce:; BB(0x006270ce);
    /* 006270ce: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006270d1: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006270d6: jmp 0x6270dd */ goto L_006270dd;
L_006270d8:; BB(0x006270d8);
    /* 006270d8: mov eax, 0xa */ r_eax = 0xau;
L_006270dd:; BB(0x006270dd);
    /* 006270dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006270de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006270df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006270e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006270e3: call dword ptr [0x6330d0] */ { u32 t = R32((u32)(0x6330d0u)); r_esp -= 4; W32(r_esp, 0x6270e9u); call_ind(t); }
    /* 006270e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006270ea: call 0x48aa18 */ r_esp -= 4; W32(r_esp, 0x6270efu); f_0048aa18();
    /* 006270ef: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006270f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006270f3: call 0x6296f0 */ r_esp -= 4; W32(r_esp, 0x6270f8u); f_006296f0();
    /* 006270f8: jmp 0x62711b */ goto L_0062711b;
L_0062711b:; BB(0x0062711b);
    /* 0062711b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062711e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00627125: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00627128: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062712f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00627130: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00627131: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00627132: mov esp, ebp */ r_esp = r_ebp;
    /* 00627134: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627135: ret  */ FN_RET(0x00626fb0); r_esp += 4; return;
L_00627136:; BB(0x00627136);
    /* 00627136: cmp byte ptr [esi], 0x20 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00627139: jbe 0x6270a7 */ if ((fC||fZ)) goto L_006270a7;
L_0062713f:; BB(0x0062713f);
    /* 0062713f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00627140: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 00627143: jmp 0x627136 */ goto L_00627136;
}

