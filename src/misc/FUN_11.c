#include "protos.h"

void f_00458570(void) /* FUN_00458570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458570);
    /* 00458570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458571: mov ebp, esp */ r_ebp = r_esp;
    /* 00458573: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00458579: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 0045857f: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458583: jne 0x4585a9 */ if (!fZ) goto L_004585a9;
L_00458585:; BB(0x00458585);
    /* 00458585: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00458588: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458589: push 0x67aca8 */ { u32 v = 0x67aca8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045858e: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 00458593: push 0x67acac */ { u32 v = 0x67acacu; r_esp -= 4; W32(r_esp, v); }
    /* 00458598: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 0045859e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045859f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4585a4u); f_00624050();
    /* 004585a4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004585a7: jmp 0x4585cb */ goto L_004585cb;
L_004585a9:; BB(0x004585a9);
    /* 004585a9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004585ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004585ad: push 0x67acb8 */ { u32 v = 0x67acb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004585b2: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 004585b7: push 0x67acbc */ { u32 v = 0x67acbcu; r_esp -= 4; W32(r_esp, v); }
    /* 004585bc: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 004585c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004585c3: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4585c8u); f_00624050();
    /* 004585c8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004585cb:; BB(0x004585cb);
    /* 004585cb: push 0x67acc4 */ { u32 v = 0x67acc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004585d0: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 004585d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004585d7: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x4585dcu); f_006243c0();
    /* 004585dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004585df: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 004585e5: cmp dword ptr [ebp - 0x108], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004585ec: je 0x45861b */ if (fZ) goto L_0045861b;
L_004585ee:; BB(0x004585ee);
    /* 004585ee: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004585f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004585f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004585f7: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004585f9: mov eax, dword ptr [0x6f6864] */ r_eax = R32((u32)(0x6f6864u));
    /* 004585fe: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458602: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x458607u); f_00624250();
    /* 00458607: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045860a: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00458610: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458611: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x458616u); f_006241d0();
    /* 00458616: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458619: jmp 0x45861d */ goto L_0045861d;
L_0045861b:; BB(0x0045861b);
    /* 0045861b: jmp 0x458661 */ goto L_00458661;
L_0045861d:; BB(0x0045861d);
    /* 0045861d: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00458623: mov eax, dword ptr [edx + 0x290] */ r_eax = R32((u32)(r_edx+0x290u));
    /* 00458629: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045862a: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00458630: call 0x456a5a */ r_esp -= 4; W32(r_esp, 0x458635u); f_00456a5a();
    /* 00458635: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 0045863b: call 0x4542de */ r_esp -= 4; W32(r_esp, 0x458640u); f_004542de();
    /* 00458640: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00458646: movsx edx, byte ptr [ecx + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x44u));
    /* 0045864a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045864b: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00458651: call 0x4580c4 */ r_esp -= 4; W32(r_esp, 0x458656u); f_004580c4();
    /* 00458656: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0045865c: call 0x458710 */ r_esp -= 4; W32(r_esp, 0x458661u); f_00458710();
L_00458661:; BB(0x00458661);
    /* 00458661: mov esp, ebp */ r_esp = r_ebp;
    /* 00458663: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458664: ret 8 */ FN_RET(0x00458570); r_esp += 12; return;
}

void f_00458667(void) /* FUN_00458667 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458667);
    /* 00458667: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458668: mov ebp, esp */ r_ebp = r_esp;
    /* 0045866a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045866d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045866e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00458671: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00458674: movsx ecx, byte ptr [eax + 0x30] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x30u));
    /* 00458678: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045867b: movsx eax, byte ptr [edx + 0x30] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x30u));
    /* 0045867f: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458681: je 0x45868a */ if (fZ) goto L_0045868a;
L_00458683:; BB(0x00458683);
    /* 00458683: mov eax, 1 */ r_eax = 0x1u;
    /* 00458688: jmp 0x4586f1 */ goto L_004586f1;
L_0045868a:; BB(0x0045868a);
    /* 0045868a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00458691: jmp 0x45869c */ goto L_0045869c;
L_00458693:; BB(0x00458693);
    /* 00458693: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458696: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458699: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0045869c:; BB(0x0045869c);
    /* 0045869c: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004586a0: jge 0x4586ef */ if ((fS==fO)) goto L_004586ef;
L_004586a2:; BB(0x004586a2);
    /* 004586a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004586a5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004586a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004586ab: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 004586ae: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 004586b1: cmp edx, dword ptr [esi + ecx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004586b4: jne 0x4586e6 */ if (!fZ) goto L_004586e6;
L_004586b6:; BB(0x004586b6);
    /* 004586b6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004586b9: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004586bc: movsx ecx, byte ptr [eax + 0x31] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x31u));
    /* 004586c0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004586c3: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004586c6: movsx eax, byte ptr [edx + 0x31] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x31u));
    /* 004586ca: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004586cc: jne 0x4586e6 */ if (!fZ) goto L_004586e6;
L_004586ce:; BB(0x004586ce);
    /* 004586ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004586d1: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004586d4: movsx edx, byte ptr [ecx + 0x3d] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x3du));
    /* 004586d8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004586db: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004586de: movsx ecx, byte ptr [eax + 0x3d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x3du));
    /* 004586e2: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004586e4: je 0x4586ed */ if (fZ) goto L_004586ed;
L_004586e6:; BB(0x004586e6);
    /* 004586e6: mov eax, 1 */ r_eax = 0x1u;
    /* 004586eb: jmp 0x4586f1 */ goto L_004586f1;
L_004586ed:; BB(0x004586ed);
    /* 004586ed: jmp 0x458693 */ goto L_00458693;
L_004586ef:; BB(0x004586ef);
    /* 004586ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004586f1:; BB(0x004586f1);
    /* 004586f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004586f2: mov esp, ebp */ r_esp = r_ebp;
    /* 004586f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004586f5: ret 8 */ FN_RET(0x00458667); r_esp += 12; return;
}

void f_004586f8(void) /* FUN_004586f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004586f8);
    /* 004586f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004586f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004586fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004586fc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004586ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458702: mov dword ptr [eax + 0x29c], 1 */ W32((u32)(r_eax+0x29cu), 0x1u);
    /* 0045870c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045870e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045870f: ret  */ FN_RET(0x004586f8); r_esp += 4; return;
}

void f_00458710(void) /* FUN_00458710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458710);
    /* 00458710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458711: mov ebp, esp */ r_ebp = r_esp;
    /* 00458713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00458717: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045871a: mov dword ptr [eax + 0x29c], 0 */ W32((u32)(r_eax+0x29cu), 0x0u);
    /* 00458724: mov esp, ebp */ r_esp = r_ebp;
    /* 00458726: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458727: ret  */ FN_RET(0x00458710); r_esp += 4; return;
}

void f_00458728(void) /* FUN_00458728 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458728);
    /* 00458728: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458729: mov ebp, esp */ r_ebp = r_esp;
    /* 0045872b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045872c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045872f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458732: mov eax, dword ptr [eax + 0x29c] */ r_eax = R32((u32)(r_eax+0x29cu));
    /* 00458738: mov esp, ebp */ r_esp = r_ebp;
    /* 0045873a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045873b: ret  */ FN_RET(0x00458728); r_esp += 4; return;
}

void f_0045873c(void) /* FUN_0045873c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045873c);
    /* 0045873c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045873d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045873f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00458742: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00458745: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045874c: jmp 0x458757 */ goto L_00458757;
L_0045874e:; BB(0x0045874e);
    /* 0045874e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458751: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458754: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00458757:; BB(0x00458757);
    /* 00458757: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045875b: jge 0x458789 */ if ((fS==fO)) goto L_00458789;
L_0045875d:; BB(0x0045875d);
    /* 0045875d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458760: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458763: cmp dword ptr [edx + ecx*4 + 0x314], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x314u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045876b: je 0x458787 */ if (fZ) goto L_00458787;
L_0045876d:; BB(0x0045876d);
    /* 0045876d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458770: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458773: mov ecx, dword ptr [ecx + eax*4 + 0x314] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x314u));
    /* 0045877a: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x45877fu); f_005d71b9();
    /* 0045877f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458781: je 0x458787 */ if (fZ) goto L_00458787;
L_00458783:; BB(0x00458783);
    /* 00458783: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00458785: jmp 0x4587ee */ goto L_004587ee;
L_00458787:; BB(0x00458787);
    /* 00458787: jmp 0x45874e */ goto L_0045874e;
L_00458789:; BB(0x00458789);
    /* 00458789: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00458790: jmp 0x45879b */ goto L_0045879b;
L_00458792:; BB(0x00458792);
    /* 00458792: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458795: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00458798: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0045879b:; BB(0x0045879b);
    /* 0045879b: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045879f: jge 0x4587ec */ if ((fS==fO)) goto L_004587ec;
L_004587a1:; BB(0x004587a1);
    /* 004587a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004587a4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004587a7: mov ecx, dword ptr [ecx + eax*4 + 0x384] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x384u));
    /* 004587ae: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x4587b3u); f_005d9690();
    /* 004587b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004587b5: je 0x4587ea */ if (fZ) goto L_004587ea;
L_004587b7:; BB(0x004587b7);
    /* 004587b7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004587ba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004587bd: mov ecx, dword ptr [eax + edx*4 + 0x384] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x384u));
    /* 004587c4: call 0x5d65b7 */ r_esp -= 4; W32(r_esp, 0x4587c9u); f_005d65b7();
    /* 004587c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004587cb: je 0x4587ea */ if (fZ) goto L_004587ea;
L_004587cd:; BB(0x004587cd);
    /* 004587cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004587d0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004587d3: mov ecx, dword ptr [edx + ecx*4 + 0x384] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x384u));
    /* 004587da: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x4587dfu); f_005d71b9();
    /* 004587df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004587e1: je 0x4587ea */ if (fZ) goto L_004587ea;
L_004587e3:; BB(0x004587e3);
    /* 004587e3: mov eax, 1 */ r_eax = 0x1u;
    /* 004587e8: jmp 0x4587ee */ goto L_004587ee;
L_004587ea:; BB(0x004587ea);
    /* 004587ea: jmp 0x458792 */ goto L_00458792;
L_004587ec:; BB(0x004587ec);
    /* 004587ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004587ee:; BB(0x004587ee);
    /* 004587ee: mov esp, ebp */ r_esp = r_ebp;
    /* 004587f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004587f1: ret  */ FN_RET(0x0045873c); r_esp += 4; return;
}

void f_004587f2(void) /* FUN_004587f2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004587f2);
    /* 004587f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004587f3: mov ebp, esp */ r_ebp = r_esp;
    /* 004587f5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004587f8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004587fb: cmp dword ptr [0x6f6864], 0 */ {  u32 a = R32((u32)(0x6f6864u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458802: je 0x45883a */ if (fZ) goto L_0045883a;
L_00458804:; BB(0x00458804);
    /* 00458804: mov eax, dword ptr [0x6f6864] */ r_eax = R32((u32)(0x6f6864u));
    /* 00458809: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045880c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045880f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00458812: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458816: je 0x458829 */ if (fZ) goto L_00458829;
L_00458818:; BB(0x00458818);
    /* 00458818: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045881a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045881d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045881f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458822: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x458824u); call_ind(t); }
    /* 00458824: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00458827: jmp 0x458830 */ goto L_00458830;
L_00458829:; BB(0x00458829);
    /* 00458829: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00458830:; BB(0x00458830);
    /* 00458830: mov dword ptr [0x6f6864], 0 */ W32((u32)(0x6f6864u), 0x0u);
L_0045883a:; BB(0x0045883a);
    /* 0045883a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045883c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045883d: ret  */ FN_RET(0x004587f2); r_esp += 4; return;
}

void f_0045883e(void) /* FUN_0045883e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045883e);
    /* 0045883e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045883f: mov ebp, esp */ r_ebp = r_esp;
    /* 00458841: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458842: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00458845: mov eax, dword ptr [0x6f6864] */ r_eax = R32((u32)(0x6f6864u));
    /* 0045884a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045884c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045884d: ret  */ FN_RET(0x0045883e); r_esp += 4; return;
}

void f_0045884e(void) /* FUN_0045884e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045884e);
    /* 0045884e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045884f: mov ebp, esp */ r_ebp = r_esp;
    /* 00458851: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458852: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00458855: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458858: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x45885du); f_005d5d20();
    /* 0045885d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458860: mov dword ptr [eax], 0x63544c */ W32((u32)(r_eax), 0x63544cu);
    /* 00458866: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458869: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045886c: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00458872: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458875: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00458878: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 0045887e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458881: mov esp, ebp */ r_esp = r_ebp;
    /* 00458883: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458884: ret 8 */ FN_RET(0x0045884e); r_esp += 12; return;
}

void f_00458887(void) /* FUN_00458887 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458887);
    /* 00458887: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458888: mov ebp, esp */ r_ebp = r_esp;
    /* 0045888a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045888b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045888e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458891: mov dword ptr [eax], 0x63544c */ W32((u32)(r_eax), 0x63544cu);
    /* 00458897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045889a: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x45889fu); f_005d5dfb();
    /* 0045889f: mov esp, ebp */ r_esp = r_ebp;
    /* 004588a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004588a2: ret  */ FN_RET(0x00458887); r_esp += 4; return;
}

void f_004588a3(void) /* FUN_004588a3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004588a3);
    /* 004588a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004588a4: mov ebp, esp */ r_ebp = r_esp;
    /* 004588a6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004588a9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004588ac: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004588af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004588b1: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004588b5: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004588b8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004588bb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004588be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004588bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004588c2: call 0x5d6084 */ r_esp -= 4; W32(r_esp, 0x4588c7u); f_005d6084();
    /* 004588c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004588ca: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004588ce: jne 0x4588f5 */ if (!fZ) goto L_004588f5;
L_004588d0:; BB(0x004588d0);
    /* 004588d0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004588d4: je 0x4588f5 */ if (fZ) goto L_004588f5;
L_004588d6:; BB(0x004588d6);
    /* 004588d6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004588d9: cmp dword ptr [ecx + 0x7c], 0 */ {  u32 a = R32((u32)(r_ecx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004588dd: je 0x4588f5 */ if (fZ) goto L_004588f5;
L_004588df:; BB(0x004588df);
    /* 004588df: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004588e2: cmp dword ptr [edx + 0xcc], 0x14 */ {  u32 a = R32((u32)(r_edx+0xccu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004588e9: jl 0x4588f5 */ if ((fS!=fO)) goto L_004588f5;
L_004588eb:; BB(0x004588eb);
    /* 004588eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004588ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004588f0: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x4588f5u); f_005ea514();
L_004588f5:; BB(0x004588f5);
    /* 004588f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004588f8: cmp dword ptr [eax + 0x18], 2 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004588fc: jne 0x458923 */ if (!fZ) goto L_00458923;
L_004588fe:; BB(0x004588fe);
    /* 004588fe: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458902: jne 0x458923 */ if (!fZ) goto L_00458923;
L_00458904:; BB(0x00458904);
    /* 00458904: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458907: cmp dword ptr [ecx + 0x7c], 0 */ {  u32 a = R32((u32)(r_ecx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045890b: jne 0x458923 */ if (!fZ) goto L_00458923;
L_0045890d:; BB(0x0045890d);
    /* 0045890d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458910: cmp dword ptr [edx + 0xcc], 0x14 */ {  u32 a = R32((u32)(r_edx+0xccu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458917: jl 0x458923 */ if ((fS!=fO)) goto L_00458923;
L_00458919:; BB(0x00458919);
    /* 00458919: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045891b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045891e: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x458923u); f_005ea514();
L_00458923:; BB(0x00458923);
    /* 00458923: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00458926: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00458929: mov esp, ebp */ r_esp = r_ebp;
    /* 0045892b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045892c: ret 4 */ FN_RET(0x004588a3); r_esp += 8; return;
}

void f_0045892f(void) /* FUN_0045892f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045892f);
    /* 0045892f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458930: mov ebp, esp */ r_ebp = r_esp;
    /* 00458932: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458933: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00458936: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458939: cmp dword ptr [eax + 0xcc], 0x15 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458940: jne 0x458955 */ if (!fZ) goto L_00458955;
L_00458942:; BB(0x00458942);
    /* 00458942: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458944: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 0045894a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045894d: call dword ptr [edx + 0xd0] */ { u32 t = R32((u32)(r_edx+0xd0u)); r_esp -= 4; W32(r_esp, 0x458953u); call_ind(t); }
    /* 00458953: jmp 0x45896e */ goto L_0045896e;
L_00458955:; BB(0x00458955);
    /* 00458955: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458958: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0045895e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045895f: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 00458965: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458968: call dword ptr [edx + 0xd0] */ { u32 t = R32((u32)(r_edx+0xd0u)); r_esp -= 4; W32(r_esp, 0x45896eu); call_ind(t); }
L_0045896e:; BB(0x0045896e);
    /* 0045896e: mov esp, ebp */ r_esp = r_ebp;
    /* 00458970: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458971: ret  */ FN_RET(0x0045892f); r_esp += 4; return;
}

void f_00458999(void) /* FUN_00458999 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458999);
    /* 00458999: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045899a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045899c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045899d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004589a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004589a3: mov dword ptr [eax], 0x6354bc */ W32((u32)(r_eax), 0x6354bcu);
    /* 004589a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004589ac: call 0x5d4efe */ r_esp -= 4; W32(r_esp, 0x4589b1u); f_005d4efe();
    /* 004589b1: mov esp, ebp */ r_esp = r_ebp;
    /* 004589b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004589b4: ret  */ FN_RET(0x00458999); r_esp += 4; return;
}

void f_004589b5(void) /* FUN_004589b5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004589b5);
    /* 004589b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004589b6: mov ebp, esp */ r_ebp = r_esp;
    /* 004589b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004589b9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004589bc: mov eax, dword ptr [0x6f6868] */ r_eax = R32((u32)(0x6f6868u));
    /* 004589c1: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 004589c7: call 0x5d53bd */ r_esp -= 4; W32(r_esp, 0x4589ccu); f_005d53bd();
    /* 004589cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004589cf: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x4589d4u); f_005d5015();
    /* 004589d4: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004589d6: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 004589dc: mov ecx, dword ptr [ecx + eax*4 + 0x318] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x318u));
    /* 004589e3: call 0x458c21 */ r_esp -= 4; W32(r_esp, 0x4589e8u); f_00458c21();
    /* 004589e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004589eb: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x4589f0u); f_005d5015();
    /* 004589f0: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004589f2: mov edx, dword ptr [0x6f6868] */ r_edx = R32((u32)(0x6f6868u));
    /* 004589f8: mov ecx, dword ptr [edx + eax*4 + 0x314] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x314u));
    /* 004589ff: call 0x458c21 */ r_esp -= 4; W32(r_esp, 0x458a04u); f_00458c21();
    /* 00458a04: mov esp, ebp */ r_esp = r_ebp;
    /* 00458a06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458a07: ret  */ FN_RET(0x004589b5); r_esp += 4; return;
}

void f_00458a08(void) /* FUN_00458a08 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458a08);
    /* 00458a08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458a09: mov ebp, esp */ r_ebp = r_esp;
    /* 00458a0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458a0c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00458a0f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00458a12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458a13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458a16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458a17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458a1a: call 0x5d4ec0 */ r_esp -= 4; W32(r_esp, 0x458a1fu); f_005d4ec0();
    /* 00458a1f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458a22: mov dword ptr [edx], 0x635534 */ W32((u32)(r_edx), 0x635534u);
    /* 00458a28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458a2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00458a2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458a2e: ret 8 */ FN_RET(0x00458a08); r_esp += 12; return;
}

void f_00458a31(void) /* FUN_00458a31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458a31);
    /* 00458a31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458a32: mov ebp, esp */ r_ebp = r_esp;
    /* 00458a34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458a35: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00458a38: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458a3b: mov dword ptr [eax], 0x635534 */ W32((u32)(r_eax), 0x635534u);
    /* 00458a41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458a44: call 0x5d4efe */ r_esp -= 4; W32(r_esp, 0x458a49u); f_005d4efe();
    /* 00458a49: mov esp, ebp */ r_esp = r_ebp;
    /* 00458a4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458a4c: ret  */ FN_RET(0x00458a31); r_esp += 4; return;
}

void f_00458a4d(void) /* FUN_00458a4d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458a4d);
    /* 00458a4d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458a4e: mov ebp, esp */ r_ebp = r_esp;
    /* 00458a50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458a51: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00458a54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458a57: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x458a5cu); f_005d5015();
    /* 00458a5c: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 00458a62: mov byte ptr [ecx + 0x295], al */ W8((u32)(r_ecx+0x295u), (u8)r_eax);
    /* 00458a68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458a6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458a6d: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x458a72u); f_005d5015();
    /* 00458a72: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00458a75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458a76: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 00458a7c: call 0x45708e */ r_esp -= 4; W32(r_esp, 0x458a81u); f_0045708e();
    /* 00458a81: mov esp, ebp */ r_esp = r_ebp;
    /* 00458a83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458a84: ret  */ FN_RET(0x00458a4d); r_esp += 4; return;
}

void f_00458a85(void) /* FUN_00458a85 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458a85);
    /* 00458a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458a86: mov ebp, esp */ r_ebp = r_esp;
    /* 00458a88: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00458a8b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00458a8e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00458a91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458a92: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458a95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458a96: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458a99: call 0x5d4ec0 */ r_esp -= 4; W32(r_esp, 0x458a9eu); f_005d4ec0();
    /* 00458a9e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458aa1: mov dword ptr [edx], 0x6355ac */ W32((u32)(r_edx), 0x6355acu);
    /* 00458aa7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00458aae: jmp 0x458ab9 */ goto L_00458ab9;
L_00458ab0:; BB(0x00458ab0);
    /* 00458ab0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458ab3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458ab6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00458ab9:; BB(0x00458ab9);
    /* 00458ab9: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458abd: jge 0x458ad2 */ if ((fS==fO)) goto L_00458ad2;
L_00458abf:; BB(0x00458abf);
    /* 00458abf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458ac2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458ac5: mov dword ptr [edx + ecx*4 + 0x108], 0 */ W32((u32)(r_edx+r_ecx*4+0x108u), 0x0u);
    /* 00458ad0: jmp 0x458ab0 */ goto L_00458ab0;
L_00458ad2:; BB(0x00458ad2);
    /* 00458ad2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458ad5: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 00458adf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458ae2: mov dword ptr [ecx + 0x118], 0 */ W32((u32)(r_ecx+0x118u), 0x0u);
    /* 00458aec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458aef: mov dword ptr [edx + 0x11c], 0 */ W32((u32)(r_edx+0x11cu), 0x0u);
    /* 00458af9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458afc: mov esp, ebp */ r_esp = r_ebp;
    /* 00458afe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458aff: ret 8 */ FN_RET(0x00458a85); r_esp += 12; return;
}

void f_00458b02(void) /* FUN_00458b02 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458b02);
    /* 00458b02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458b03: mov ebp, esp */ r_ebp = r_esp;
    /* 00458b05: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00458b08: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00458b0b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00458b0e: mov dword ptr [eax], 0x6355ac */ W32((u32)(r_eax), 0x6355acu);
    /* 00458b14: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00458b1b: jmp 0x458b26 */ goto L_00458b26;
L_00458b1d:; BB(0x00458b1d);
    /* 00458b1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458b20: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458b23: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00458b26:; BB(0x00458b26);
    /* 00458b26: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458b2a: jge 0x458b62 */ if ((fS==fO)) goto L_00458b62;
L_00458b2c:; BB(0x00458b2c);
    /* 00458b2c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458b2f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00458b32: mov ecx, dword ptr [eax + edx*4 + 0x108] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x108u));
    /* 00458b39: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00458b3c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00458b3f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00458b42: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458b46: je 0x458b59 */ if (fZ) goto L_00458b59;
L_00458b48:; BB(0x00458b48);
    /* 00458b48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458b4a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458b4d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00458b4f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458b52: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x458b54u); call_ind(t); }
    /* 00458b54: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00458b57: jmp 0x458b60 */ goto L_00458b60;
L_00458b59:; BB(0x00458b59);
    /* 00458b59: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00458b60:; BB(0x00458b60);
    /* 00458b60: jmp 0x458b1d */ goto L_00458b1d;
L_00458b62:; BB(0x00458b62);
    /* 00458b62: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00458b65: mov ecx, dword ptr [eax + 0x114] */ r_ecx = R32((u32)(r_eax+0x114u));
    /* 00458b6b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00458b6e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00458b71: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00458b74: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458b78: je 0x458b8b */ if (fZ) goto L_00458b8b;
L_00458b7a:; BB(0x00458b7a);
    /* 00458b7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458b7c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00458b7f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00458b81: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00458b84: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x458b86u); call_ind(t); }
    /* 00458b86: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00458b89: jmp 0x458b92 */ goto L_00458b92;
L_00458b8b:; BB(0x00458b8b);
    /* 00458b8b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00458b92:; BB(0x00458b92);
    /* 00458b92: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00458b95: mov ecx, dword ptr [eax + 0x118] */ r_ecx = R32((u32)(r_eax+0x118u));
    /* 00458b9b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00458b9e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00458ba1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00458ba4: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458ba8: je 0x458bbb */ if (fZ) goto L_00458bbb;
L_00458baa:; BB(0x00458baa);
    /* 00458baa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458bac: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458baf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00458bb1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458bb4: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x458bb6u); call_ind(t); }
    /* 00458bb6: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00458bb9: jmp 0x458bc2 */ goto L_00458bc2;
L_00458bbb:; BB(0x00458bbb);
    /* 00458bbb: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00458bc2:; BB(0x00458bc2);
    /* 00458bc2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00458bc5: mov ecx, dword ptr [eax + 0x11c] */ r_ecx = R32((u32)(r_eax+0x11cu));
    /* 00458bcb: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00458bce: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00458bd1: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00458bd4: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458bd8: je 0x458beb */ if (fZ) goto L_00458beb;
L_00458bda:; BB(0x00458bda);
    /* 00458bda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458bdc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458bdf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00458be1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458be4: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x458be6u); call_ind(t); }
    /* 00458be6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00458be9: jmp 0x458bf2 */ goto L_00458bf2;
L_00458beb:; BB(0x00458beb);
    /* 00458beb: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00458bf2:; BB(0x00458bf2);
    /* 00458bf2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00458bf5: call 0x5d4efe */ r_esp -= 4; W32(r_esp, 0x458bfau); f_005d4efe();
    /* 00458bfa: mov esp, ebp */ r_esp = r_ebp;
    /* 00458bfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458bfd: ret  */ FN_RET(0x00458b02); r_esp += 4; return;
}

void f_00458bfe(void) /* FUN_00458bfe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458bfe);
    /* 00458bfe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458bff: mov ebp, esp */ r_ebp = r_esp;
    /* 00458c01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458c02: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00458c05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458c08: call 0x458c21 */ r_esp -= 4; W32(r_esp, 0x458c0du); f_00458c21();
    /* 00458c0d: mov eax, dword ptr [0x6f6868] */ r_eax = R32((u32)(0x6f6868u));
    /* 00458c12: mov ecx, dword ptr [eax + 0x380] */ r_ecx = R32((u32)(r_eax+0x380u));
    /* 00458c18: call 0x5d53bd */ r_esp -= 4; W32(r_esp, 0x458c1du); f_005d53bd();
    /* 00458c1d: mov esp, ebp */ r_esp = r_ebp;
    /* 00458c1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458c20: ret  */ FN_RET(0x00458bfe); r_esp += 4; return;
}

void f_00458c21(void) /* FUN_00458c21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458c21);
    /* 00458c21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458c22: mov ebp, esp */ r_ebp = r_esp;
    /* 00458c24: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00458c27: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00458c28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00458c29: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00458c2c: mov esi, dword ptr [0x6f6864] */ r_esi = R32((u32)(0x6f6864u));
    /* 00458c32: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00458c35: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 00458c3a: lea edi, [ebp - 0x4c] */ r_edi = (u32)(r_ebp+0xffffffb4u);
    /* 00458c3d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00458c3f: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00458c42: cmp dword ptr [eax + 0x108], 0 */ {  u32 a = R32((u32)(r_eax+0x108u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458c49: je 0x458d23 */ if (fZ) goto L_00458d23;
L_00458c4f:; BB(0x00458c4f);
    /* 00458c4f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00458c52: mov ecx, dword ptr [ecx + 0x108] */ r_ecx = R32((u32)(r_ecx+0x108u));
    /* 00458c58: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x458c5du); f_005d9690();
    /* 00458c5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458c5f: je 0x458d23 */ if (fZ) goto L_00458d23;
L_00458c65:; BB(0x00458c65);
    /* 00458c65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458c67: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00458c6d: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x458c72u); f_00454c8d();
    /* 00458c72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458c73: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00458c76: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x458c7bu); f_005d5015();
    /* 00458c7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458c7c: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00458c7f: movsx eax, byte ptr [edx + 0x104] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x104u));
    /* 00458c86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458c87: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 00458c8d: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458c93: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x458c98u); f_00459e15();
    /* 00458c98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458c99: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00458c9c: movsx edx, byte ptr [ecx + 0x104] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x104u));
    /* 00458ca3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458ca4: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00458caa: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x458cafu); f_00454351();
    /* 00458caf: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00458cb2: movsx ecx, byte ptr [eax + 0x104] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x104u));
    /* 00458cb9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458cbb: jne 0x458cee */ if (!fZ) goto L_00458cee;
L_00458cbd:; BB(0x00458cbd);
    /* 00458cbd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458cbf: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00458cc5: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x458ccau); f_00454c8d();
    /* 00458cca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458ccb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458ccd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458ccf: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 00458cd5: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458cdb: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x458ce0u); f_00459e15();
    /* 00458ce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458ce1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458ce3: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00458ce9: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x458ceeu); f_00454351();
L_00458cee:; BB(0x00458cee);
    /* 00458cee: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00458cf1: movsx eax, byte ptr [edx + 0x104] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x104u));
    /* 00458cf8: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 00458cfe: mov dword ptr [ecx + 0x290], eax */ W32((u32)(r_ecx+0x290u), r_eax);
    /* 00458d04: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00458d07: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x458d0cu); f_005d5015();
    /* 00458d0c: mov edx, dword ptr [0x6f6868] */ r_edx = R32((u32)(0x6f6868u));
    /* 00458d12: mov byte ptr [edx + 0x294], al */ W8((u32)(r_edx+0x294u), (u8)r_eax);
    /* 00458d18: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 00458d1e: call 0x456da4 */ r_esp -= 4; W32(r_esp, 0x458d23u); f_00456da4();
L_00458d23:; BB(0x00458d23);
    /* 00458d23: mov eax, dword ptr [0x6f6864] */ r_eax = R32((u32)(0x6f6864u));
    /* 00458d28: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458d2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458d2c: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 00458d2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458d30: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 00458d36: call 0x458667 */ r_esp -= 4; W32(r_esp, 0x458d3bu); f_00458667();
    /* 00458d3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458d3d: je 0x458d4a */ if (fZ) goto L_00458d4a;
L_00458d3f:; BB(0x00458d3f);
    /* 00458d3f: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 00458d45: call 0x4586f8 */ r_esp -= 4; W32(r_esp, 0x458d4au); f_004586f8();
L_00458d4a:; BB(0x00458d4a);
    /* 00458d4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00458d4b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00458d4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00458d4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458d4f: ret  */ FN_RET(0x00458c21); r_esp += 4; return;
}

void f_00458d50(void) /* FUN_00458d50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458d50);
    /* 00458d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00458d53: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00458d56: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00458d59: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00458d60: jmp 0x458d6b */ goto L_00458d6b;
L_00458d62:; BB(0x00458d62);
    /* 00458d62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458d65: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458d68: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00458d6b:; BB(0x00458d6b);
    /* 00458d6b: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458d6f: jge 0x458e79 */ if ((fS==fO)) goto L_00458e79;
L_00458d75:; BB(0x00458d75);
    /* 00458d75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458d78: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458d7b: cmp dword ptr [edx + ecx*4 + 0x108], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x108u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458d83: jne 0x458df1 */ if (!fZ) goto L_00458df1;
L_00458d85:; BB(0x00458d85);
    /* 00458d85: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00458d87: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x458d8cu); f_0048ab58();
    /* 00458d8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458d8f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00458d92: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458d96: je 0x458da5 */ if (fZ) goto L_00458da5;
L_00458d98:; BB(0x00458d98);
    /* 00458d98: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458d9b: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x458da0u); f_005e9d30();
    /* 00458da0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00458da3: jmp 0x458dac */ goto L_00458dac;
L_00458da5:; BB(0x00458da5);
    /* 00458da5: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00458dac:; BB(0x00458dac);
    /* 00458dac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458daf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458db2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00458db5: mov dword ptr [ecx + eax*4 + 0x108], edx */ W32((u32)(r_ecx+r_eax*4+0x108u), r_edx);
    /* 00458dbc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458dbf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458dc2: mov edx, dword ptr [ecx + eax*4 + 0x108] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x108u));
    /* 00458dc9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458dcc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00458dcf: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00458dd2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458dd5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458dd8: mov ecx, dword ptr [eax + edx*4 + 0x108] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x108u));
    /* 00458ddf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458de2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458de5: mov edx, dword ptr [eax + edx*4 + 0x108] */ r_edx = R32((u32)(r_eax+r_edx*4+0x108u));
    /* 00458dec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00458dee: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x458df1u); call_ind(t); }
L_00458df1:; BB(0x00458df1);
    /* 00458df1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458df3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458df6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458df9: mov ecx, dword ptr [edx + ecx*4 + 0x108] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x108u));
    /* 00458e00: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x458e05u); f_005ea1cf();
    /* 00458e05: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458e08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00458e0a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458e0d: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x458e10u); call_ind(t); }
    /* 00458e10: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458e13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458e14: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458e17: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00458e19: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458e1c: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x458e1fu); call_ind(t); }
    /* 00458e1f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458e22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458e23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458e26: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458e29: mov ecx, dword ptr [ecx + eax*4 + 0x108] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x108u));
    /* 00458e30: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458e33: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458e36: mov edx, dword ptr [eax + edx*4 + 0x108] */ r_edx = R32((u32)(r_eax+r_edx*4+0x108u));
    /* 00458e3d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00458e3f: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x458e42u); call_ind(t); }
    /* 00458e42: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458e45: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x458e4au); f_005d9883();
    /* 00458e4a: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458e4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458e50: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00458e52: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00458e54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458e55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458e58: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458e5b: mov ecx, dword ptr [eax + edx*4 + 0x108] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x108u));
    /* 00458e62: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458e65: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458e68: mov edx, dword ptr [eax + edx*4 + 0x108] */ r_edx = R32((u32)(r_eax+r_edx*4+0x108u));
    /* 00458e6f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00458e71: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x458e74u); call_ind(t); }
    /* 00458e74: jmp 0x458d62 */ goto L_00458d62;
L_00458e79:; BB(0x00458e79);
    /* 00458e79: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458e7c: cmp dword ptr [ecx + 0x114], 0 */ {  u32 a = R32((u32)(r_ecx+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458e83: jne 0x458eca */ if (!fZ) goto L_00458eca;
L_00458e85:; BB(0x00458e85);
    /* 00458e85: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00458e87: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x458e8cu); f_0048ab58();
    /* 00458e8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458e8f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00458e92: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458e96: je 0x458ea5 */ if (fZ) goto L_00458ea5;
L_00458e98:; BB(0x00458e98);
    /* 00458e98: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00458e9b: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x458ea0u); f_005e9d30();
    /* 00458ea0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00458ea3: jmp 0x458eac */ goto L_00458eac;
L_00458ea5:; BB(0x00458ea5);
    /* 00458ea5: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00458eac:; BB(0x00458eac);
    /* 00458eac: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458eaf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458eb2: mov dword ptr [edx + 0x114], eax */ W32((u32)(r_edx+0x114u), r_eax);
    /* 00458eb8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458ebb: mov edx, dword ptr [ecx + 0x114] */ r_edx = R32((u32)(r_ecx+0x114u));
    /* 00458ec1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458ec4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00458ec7: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
L_00458eca:; BB(0x00458eca);
    /* 00458eca: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458ecd: cmp dword ptr [edx + 0x118], 0 */ {  u32 a = R32((u32)(r_edx+0x118u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458ed4: jne 0x458f1b */ if (!fZ) goto L_00458f1b;
L_00458ed6:; BB(0x00458ed6);
    /* 00458ed6: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00458ed8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x458eddu); f_0048ab58();
    /* 00458edd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458ee0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00458ee3: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458ee7: je 0x458ef6 */ if (fZ) goto L_00458ef6;
L_00458ee9:; BB(0x00458ee9);
    /* 00458ee9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00458eec: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x458ef1u); f_005e9d30();
    /* 00458ef1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00458ef4: jmp 0x458efd */ goto L_00458efd;
L_00458ef6:; BB(0x00458ef6);
    /* 00458ef6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00458efd:; BB(0x00458efd);
    /* 00458efd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458f00: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00458f03: mov dword ptr [eax + 0x118], ecx */ W32((u32)(r_eax+0x118u), r_ecx);
    /* 00458f09: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458f0c: mov eax, dword ptr [edx + 0x118] */ r_eax = R32((u32)(r_edx+0x118u));
    /* 00458f12: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458f15: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00458f18: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
L_00458f1b:; BB(0x00458f1b);
    /* 00458f1b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458f1e: cmp dword ptr [eax + 0x11c], 0 */ {  u32 a = R32((u32)(r_eax+0x11cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458f25: jne 0x458f6c */ if (!fZ) goto L_00458f6c;
L_00458f27:; BB(0x00458f27);
    /* 00458f27: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00458f29: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x458f2eu); f_0048ab58();
    /* 00458f2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458f31: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00458f34: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458f38: je 0x458f47 */ if (fZ) goto L_00458f47;
L_00458f3a:; BB(0x00458f3a);
    /* 00458f3a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00458f3d: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x458f42u); f_005e9d30();
    /* 00458f42: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00458f45: jmp 0x458f4e */ goto L_00458f4e;
L_00458f47:; BB(0x00458f47);
    /* 00458f47: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00458f4e:; BB(0x00458f4e);
    /* 00458f4e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458f51: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00458f54: mov dword ptr [ecx + 0x11c], edx */ W32((u32)(r_ecx+0x11cu), r_edx);
    /* 00458f5a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458f5d: mov ecx, dword ptr [eax + 0x11c] */ r_ecx = R32((u32)(r_eax+0x11cu));
    /* 00458f63: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458f66: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00458f69: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
L_00458f6c:; BB(0x00458f6c);
    /* 00458f6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00458f6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458f6f: ret  */ FN_RET(0x00458d50); r_esp += 4; return;
}

void f_00458f70(void) /* FUN_00458f70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458f70);
    /* 00458f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00458f73: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00458f76: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00458f79: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00458f80: mov dword ptr [ebp - 0x10], 5 */ W32((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 00458f87: mov dword ptr [ebp - 0xc], 0xd */ W32((u32)(r_ebp+0xfffffff4u), 0xdu);
    /* 00458f8e: mov dword ptr [ebp - 8], 0x16 */ W32((u32)(r_ebp+0xfffffff8u), 0x16u);
    /* 00458f95: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00458f98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458f99: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458f9c: call 0x5d5029 */ r_esp -= 4; W32(r_esp, 0x458fa1u); f_005d5029();
    /* 00458fa1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458fa4: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00458fa7: mov byte ptr [ecx + 0x104], dl */ W8((u32)(r_ecx+0x104u), (u8)r_edx);
    /* 00458fad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00458fb4: jmp 0x458fbf */ goto L_00458fbf;
L_00458fb6:; BB(0x00458fb6);
    /* 00458fb6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458fb9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458fbc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00458fbf:; BB(0x00458fbf);
    /* 00458fbf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458fc2: movsx edx, byte ptr [ecx + 0x104] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x104u));
    /* 00458fc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458fca: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00458fd0: call 0x4543c6 */ r_esp -= 4; W32(r_esp, 0x458fd5u); f_004543c6();
    /* 00458fd5: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458fd8: jge 0x459184 */ if ((fS==fO)) goto L_00459184;
L_00458fde:; BB(0x00458fde);
    /* 00458fde: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458fe2: jne 0x45909c */ if (!fZ) goto L_0045909c;
L_00458fe8:; BB(0x00458fe8);
    /* 00458fe8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458feb: movsx ecx, byte ptr [eax + 0x104] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x104u));
    /* 00458ff2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458ff4: je 0x459018 */ if (fZ) goto L_00459018;
L_00458ff6:; BB(0x00458ff6);
    /* 00458ff6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458ff9: movsx eax, byte ptr [edx + 0x104] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x104u));
    /* 00459000: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459003: je 0x459018 */ if (fZ) goto L_00459018;
L_00459005:; BB(0x00459005);
    /* 00459005: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459008: movsx edx, byte ptr [ecx + 0x104] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x104u));
    /* 0045900f: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459012: jne 0x45909c */ if (!fZ) goto L_0045909c;
L_00459018:; BB(0x00459018);
    /* 00459018: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045901a: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00459020: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x459025u); f_00454c8d();
    /* 00459025: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459026: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459029: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x45902eu); f_005d5015();
    /* 0045902e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045902f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459032: movsx ecx, byte ptr [eax + 0x104] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x104u));
    /* 00459039: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045903a: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 00459040: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459046: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x45904bu); f_00459e15();
    /* 0045904b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045904c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045904f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459052: mov ecx, dword ptr [eax + edx*4 + 0x108] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x108u));
    /* 00459059: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x45905eu); f_005ea0c3();
    /* 0045905e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459061: movsx edx, byte ptr [ecx + 0x104] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x104u));
    /* 00459068: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045906b: jne 0x459083 */ if (!fZ) goto L_00459083;
L_0045906d:; BB(0x0045906d);
    /* 0045906d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045906f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459072: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459075: mov ecx, dword ptr [ecx + eax*4 + 0x108] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x108u));
    /* 0045907c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x459081u); f_005ea1cf();
    /* 00459081: jmp 0x459097 */ goto L_00459097;
L_00459083:; BB(0x00459083);
    /* 00459083: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00459085: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459088: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045908b: mov ecx, dword ptr [eax + edx*4 + 0x108] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x108u));
    /* 00459092: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x459097u); f_005ea1cf();
L_00459097:; BB(0x00459097);
    /* 00459097: jmp 0x459123 */ goto L_00459123;
L_0045909c:; BB(0x0045909c);
    /* 0045909c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045909e: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 004590a4: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x4590a9u); f_00454c8d();
    /* 004590a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004590aa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004590ad: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x4590b2u); f_005d5015();
    /* 004590b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004590b3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004590b6: movsx edx, byte ptr [ecx + 0x104] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x104u));
    /* 004590bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004590be: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 004590c4: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004590ca: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x4590cfu); f_00459e15();
    /* 004590cf: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004590d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004590d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004590d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004590d9: mov ecx, dword ptr [ecx + eax*4 + 0x108] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x108u));
    /* 004590e0: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4590e5u); f_005ea0c3();
    /* 004590e5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004590e8: movsx eax, byte ptr [edx + 0x104] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x104u));
    /* 004590ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004590f1: je 0x459102 */ if (fZ) goto L_00459102;
L_004590f3:; BB(0x004590f3);
    /* 004590f3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004590f6: movsx edx, byte ptr [ecx + 0x104] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x104u));
    /* 004590fd: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459100: jne 0x459123 */ if (!fZ) goto L_00459123;
L_00459102:; BB(0x00459102);
    /* 00459102: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00459108: call 0x4547ac */ r_esp -= 4; W32(r_esp, 0x45910du); f_004547ac();
    /* 0045910d: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00459110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459111: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459114: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459117: mov ecx, dword ptr [edx + ecx*4 + 0x108] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x108u));
    /* 0045911e: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x459123u); f_005ea1cf();
L_00459123:; BB(0x00459123);
    /* 00459123: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459126: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00459128: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045912b: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x45912eu); call_ind(t); }
    /* 0045912e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459132: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459135: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00459137: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045913a: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x45913du); call_ind(t); }
    /* 0045913d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459141: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459144: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459147: mov ecx, dword ptr [ecx + eax*4 + 0x108] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x108u));
    /* 0045914e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459151: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459154: mov edx, dword ptr [eax + edx*4 + 0x108] */ r_edx = R32((u32)(r_eax+r_edx*4+0x108u));
    /* 0045915b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045915d: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x459160u); call_ind(t); }
    /* 00459160: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459163: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459166: mov ecx, dword ptr [edx + ecx*4 + 0x108] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x108u));
    /* 0045916d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459170: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459173: mov eax, dword ptr [edx + eax*4 + 0x108] */ r_eax = R32((u32)(r_edx+r_eax*4+0x108u));
    /* 0045917a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045917c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x45917fu); call_ind(t); }
    /* 0045917f: jmp 0x458fb6 */ goto L_00458fb6;
L_00459184:; BB(0x00459184);
    /* 00459184: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459187: movsx ecx, byte ptr [eax + 0x104] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x104u));
    /* 0045918e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459190: jne 0x4592cb */ if (!fZ) goto L_004592cb;
L_00459196:; BB(0x00459196);
    /* 00459196: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459199: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x45919eu); f_005d9883();
    /* 0045919e: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004591a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004591a2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004591a5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004591a7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004591aa: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x4591adu); call_ind(t); }
    /* 004591ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004591ae: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004591b1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004591b3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004591b6: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x4591b9u); call_ind(t); }
    /* 004591b9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004591bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004591bd: push 0x1e84cc */ { u32 v = 0x1e84ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004591c2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004591c5: mov ecx, dword ptr [eax + 0x114] */ r_ecx = R32((u32)(r_eax+0x114u));
    /* 004591cb: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x4591d0u); f_005e9f50();
    /* 004591d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004591d2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004591d5: mov ecx, dword ptr [ecx + 0x114] */ r_ecx = R32((u32)(r_ecx+0x114u));
    /* 004591db: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4591e0u); f_005ea1cf();
    /* 004591e0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004591e3: mov ecx, dword ptr [edx + 0x114] */ r_ecx = R32((u32)(r_edx+0x114u));
    /* 004591e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004591ec: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004591f2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004591f4: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x4591f7u); call_ind(t); }
    /* 004591f7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004591fa: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x4591ffu); f_005d9883();
    /* 004591ff: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459202: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459203: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459206: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00459208: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045920b: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x45920eu); call_ind(t); }
    /* 0045920e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045920f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459212: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00459214: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459217: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x45921au); call_ind(t); }
    /* 0045921a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045921d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045921e: push 0x1e84cc */ { u32 v = 0x1e84ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00459223: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459226: mov ecx, dword ptr [eax + 0x118] */ r_ecx = R32((u32)(r_eax+0x118u));
    /* 0045922c: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x459231u); f_005e9f50();
    /* 00459231: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00459233: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459236: mov ecx, dword ptr [ecx + 0x118] */ r_ecx = R32((u32)(r_ecx+0x118u));
    /* 0045923c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x459241u); f_005ea1cf();
    /* 00459241: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459244: mov ecx, dword ptr [edx + 0x118] */ r_ecx = R32((u32)(r_edx+0x118u));
    /* 0045924a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045924d: mov edx, dword ptr [eax + 0x118] */ r_edx = R32((u32)(r_eax+0x118u));
    /* 00459253: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00459255: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x459258u); call_ind(t); }
    /* 00459258: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045925b: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x459260u); f_005d9883();
    /* 00459260: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459263: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459264: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459267: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00459269: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045926c: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x45926fu); call_ind(t); }
    /* 0045926f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459270: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459273: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00459275: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459278: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x45927bu); call_ind(t); }
    /* 0045927b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045927e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045927f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459282: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 00459288: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x45928du); f_005ea279();
    /* 0045928d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045928e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459290: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00459292: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 00459298: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045929e: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x4592a3u); f_00459e15();
    /* 004592a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004592a4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004592a7: mov ecx, dword ptr [ecx + 0x11c] */ r_ecx = R32((u32)(r_ecx+0x11cu));
    /* 004592ad: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x4592b2u); f_005e9f50();
    /* 004592b2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004592b5: mov ecx, dword ptr [edx + 0x11c] */ r_ecx = R32((u32)(r_edx+0x11cu));
    /* 004592bb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004592be: mov edx, dword ptr [eax + 0x11c] */ r_edx = R32((u32)(r_eax+0x11cu));
    /* 004592c4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004592c6: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x4592c9u); call_ind(t); }
    /* 004592c9: jmp 0x459310 */ goto L_00459310;
L_004592cb:; BB(0x004592cb);
    /* 004592cb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004592ce: mov ecx, dword ptr [ecx + 0x114] */ r_ecx = R32((u32)(r_ecx+0x114u));
    /* 004592d4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004592d7: mov eax, dword ptr [edx + 0x114] */ r_eax = R32((u32)(r_edx+0x114u));
    /* 004592dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004592df: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4592e2u); call_ind(t); }
    /* 004592e2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004592e5: mov ecx, dword ptr [eax + 0x118] */ r_ecx = R32((u32)(r_eax+0x118u));
    /* 004592eb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004592ee: mov eax, dword ptr [edx + 0x118] */ r_eax = R32((u32)(r_edx+0x118u));
    /* 004592f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004592f6: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4592f9u); call_ind(t); }
    /* 004592f9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004592fc: mov ecx, dword ptr [eax + 0x11c] */ r_ecx = R32((u32)(r_eax+0x11cu));
    /* 00459302: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459305: mov eax, dword ptr [edx + 0x11c] */ r_eax = R32((u32)(r_edx+0x11cu));
    /* 0045930b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045930d: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x459310u); call_ind(t); }
L_00459310:; BB(0x00459310);
    /* 00459310: mov esp, ebp */ r_esp = r_ebp;
    /* 00459312: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459313: ret 8 */ FN_RET(0x00458f70); r_esp += 12; return;
}

void f_00459316(void) /* FUN_00459316 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459316);
    /* 00459316: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459317: mov ebp, esp */ r_ebp = r_esp;
    /* 00459319: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045931c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045931f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459322: call 0x5d6d33 */ r_esp -= 4; W32(r_esp, 0x459327u); f_005d6d33();
    /* 00459327: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045932e: jmp 0x459339 */ goto L_00459339;
L_00459330:; BB(0x00459330);
    /* 00459330: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459333: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459336: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00459339:; BB(0x00459339);
    /* 00459339: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045933d: jge 0x459370 */ if ((fS==fO)) goto L_00459370;
L_0045933f:; BB(0x0045933f);
    /* 0045933f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459342: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459345: cmp dword ptr [edx + ecx*4 + 0x108], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x108u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045934d: je 0x45936e */ if (fZ) goto L_0045936e;
L_0045934f:; BB(0x0045934f);
    /* 0045934f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459352: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459355: mov ecx, dword ptr [ecx + eax*4 + 0x108] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x108u));
    /* 0045935c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045935f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459362: mov edx, dword ptr [eax + edx*4 + 0x108] */ r_edx = R32((u32)(r_eax+r_edx*4+0x108u));
    /* 00459369: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045936b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x45936eu); call_ind(t); }
L_0045936e:; BB(0x0045936e);
    /* 0045936e: jmp 0x459330 */ goto L_00459330;
L_00459370:; BB(0x00459370);
    /* 00459370: mov esp, ebp */ r_esp = r_ebp;
    /* 00459372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459373: ret  */ FN_RET(0x00459316); r_esp += 4; return;
}

void f_00459374(void) /* FUN_00459374 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459374);
    /* 00459374: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459375: mov ebp, esp */ r_ebp = r_esp;
    /* 00459377: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459378: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045937b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045937e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045937f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459382: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459383: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459386: call 0x5d4ec0 */ r_esp -= 4; W32(r_esp, 0x45938bu); f_005d4ec0();
    /* 0045938b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045938e: mov dword ptr [edx], 0x635624 */ W32((u32)(r_edx), 0x635624u);
    /* 00459394: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459397: mov esp, ebp */ r_esp = r_ebp;
    /* 00459399: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045939a: ret 8 */ FN_RET(0x00459374); r_esp += 12; return;
}

void f_0045939d(void) /* FUN_0045939d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045939d);
    /* 0045939d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045939e: mov ebp, esp */ r_ebp = r_esp;
    /* 004593a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004593a1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004593a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004593a7: mov dword ptr [eax], 0x635624 */ W32((u32)(r_eax), 0x635624u);
    /* 004593ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004593b0: call 0x5d4efe */ r_esp -= 4; W32(r_esp, 0x4593b5u); f_005d4efe();
    /* 004593b5: mov esp, ebp */ r_esp = r_ebp;
    /* 004593b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004593b8: ret  */ FN_RET(0x0045939d); r_esp += 4; return;
}

void f_004593b9(void) /* FUN_004593b9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004593b9);
    /* 004593b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004593ba: mov ebp, esp */ r_ebp = r_esp;
    /* 004593bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004593bd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004593c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004593c3: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x4593c8u); f_005d71b9();
    /* 004593c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004593ca: je 0x4593ce */ if (fZ) goto L_004593ce;
L_004593cc:; BB(0x004593cc);
    /* 004593cc: jmp 0x4593e2 */ goto L_004593e2;
L_004593ce:; BB(0x004593ce);
    /* 004593ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004593d1: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x4593d6u); f_005d5015();
    /* 004593d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004593d7: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 004593dd: call 0x456a5a */ r_esp -= 4; W32(r_esp, 0x4593e2u); f_00456a5a();
L_004593e2:; BB(0x004593e2);
    /* 004593e2: mov esp, ebp */ r_esp = r_ebp;
    /* 004593e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004593e5: ret  */ FN_RET(0x004593b9); r_esp += 4; return;
}

void f_004593f0(void) /* FUN_004593f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004593f0);
    /* 004593f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004593f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004593f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004593f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004593f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004593fa: call 0x454ffb */ r_esp -= 4; W32(r_esp, 0x4593ffu); f_00454ffb();
    /* 004593ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00459402: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00459405: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459407: je 0x459415 */ if (fZ) goto L_00459415;
L_00459409:; BB(0x00459409);
    /* 00459409: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045940c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045940d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x459412u); f_0048ac1b();
    /* 00459412: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00459415:; BB(0x00459415);
    /* 00459415: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459418: mov esp, ebp */ r_esp = r_ebp;
    /* 0045941a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045941b: ret 4 */ FN_RET(0x004593f0); r_esp += 8; return;
}

void f_00459420(void) /* FUN_00459420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459420);
    /* 00459420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459421: mov ebp, esp */ r_ebp = r_esp;
    /* 00459423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00459427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045942a: call 0x458887 */ r_esp -= 4; W32(r_esp, 0x45942fu); f_00458887();
    /* 0045942f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00459432: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00459435: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459437: je 0x459445 */ if (fZ) goto L_00459445;
L_00459439:; BB(0x00459439);
    /* 00459439: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045943c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045943d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x459442u); f_0048ac1b();
    /* 00459442: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00459445:; BB(0x00459445);
    /* 00459445: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459448: mov esp, ebp */ r_esp = r_ebp;
    /* 0045944a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045944b: ret 4 */ FN_RET(0x00459420); r_esp += 8; return;
}

void f_00459450(void) /* FUN_00459450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459450);
    /* 00459450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459451: mov ebp, esp */ r_ebp = r_esp;
    /* 00459453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00459457: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045945a: call 0x458999 */ r_esp -= 4; W32(r_esp, 0x45945fu); f_00458999();
    /* 0045945f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00459462: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00459465: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459467: je 0x459475 */ if (fZ) goto L_00459475;
L_00459469:; BB(0x00459469);
    /* 00459469: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045946c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045946d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x459472u); f_0048ac1b();
    /* 00459472: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00459475:; BB(0x00459475);
    /* 00459475: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459478: mov esp, ebp */ r_esp = r_ebp;
    /* 0045947a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045947b: ret 4 */ FN_RET(0x00459450); r_esp += 8; return;
}

void f_00459480(void) /* FUN_00459480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459480);
    /* 00459480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459481: mov ebp, esp */ r_ebp = r_esp;
    /* 00459483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00459487: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045948a: call 0x458a31 */ r_esp -= 4; W32(r_esp, 0x45948fu); f_00458a31();
    /* 0045948f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00459492: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00459495: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459497: je 0x4594a5 */ if (fZ) goto L_004594a5;
L_00459499:; BB(0x00459499);
    /* 00459499: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045949c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045949d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4594a2u); f_0048ac1b();
    /* 004594a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004594a5:; BB(0x004594a5);
    /* 004594a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004594a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004594aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004594ab: ret 4 */ FN_RET(0x00459480); r_esp += 8; return;
}

void f_004594b0(void) /* FUN_004594b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004594b0);
    /* 004594b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004594b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004594b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004594b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004594b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004594ba: call 0x458b02 */ r_esp -= 4; W32(r_esp, 0x4594bfu); f_00458b02();
    /* 004594bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004594c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004594c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004594c7: je 0x4594d5 */ if (fZ) goto L_004594d5;
L_004594c9:; BB(0x004594c9);
    /* 004594c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004594cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004594cd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4594d2u); f_0048ac1b();
    /* 004594d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004594d5:; BB(0x004594d5);
    /* 004594d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004594d8: mov esp, ebp */ r_esp = r_ebp;
    /* 004594da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004594db: ret 4 */ FN_RET(0x004594b0); r_esp += 8; return;
}

void f_004594e0(void) /* FUN_004594e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004594e0);
    /* 004594e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004594e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004594e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004594e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004594e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004594ea: call 0x45939d */ r_esp -= 4; W32(r_esp, 0x4594efu); f_0045939d();
    /* 004594ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004594f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004594f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004594f7: je 0x459505 */ if (fZ) goto L_00459505;
L_004594f9:; BB(0x004594f9);
    /* 004594f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004594fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004594fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x459502u); f_0048ac1b();
    /* 00459502: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00459505:; BB(0x00459505);
    /* 00459505: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459508: mov esp, ebp */ r_esp = r_ebp;
    /* 0045950a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045950b: ret 4 */ FN_RET(0x004594e0); r_esp += 8; return;
}

void f_00459510(void) /* FUN_00459510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459510);
    /* 00459510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459511: mov ebp, esp */ r_ebp = r_esp;
    /* 00459513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459514: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045951b: jmp 0x459526 */ goto L_00459526;
L_0045951d:; BB(0x0045951d);
    /* 0045951d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459520: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459523: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00459526:; BB(0x00459526);
    /* 00459526: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459529: mov edx, dword ptr [ecx*4 + 0x6870b0] */ r_edx = R32((u32)(r_ecx*4+0x6870b0u));
    /* 00459530: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00459533: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459535: je 0x459571 */ if (fZ) goto L_00459571;
L_00459537:; BB(0x00459537);
    /* 00459537: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00459539: push 0x67adc8 */ { u32 v = 0x67adc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045953e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459541: mov edx, dword ptr [ecx*4 + 0x6870b0] */ r_edx = R32((u32)(r_ecx*4+0x6870b0u));
    /* 00459548: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459549: call 0x6257c0 */ r_esp -= 4; W32(r_esp, 0x45954eu); f_006257c0();
    /* 0045954e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459551: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459553: jne 0x45956f */ if (!fZ) goto L_0045956f;
L_00459555:; BB(0x00459555);
    /* 00459555: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 0045955a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045955d: mov ecx, dword ptr [eax*4 + 0x6870b0] */ r_ecx = R32((u32)(r_eax*4+0x6870b0u));
    /* 00459564: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459565: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45956au); f_00624510();
    /* 0045956a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045956d: jmp 0x459571 */ goto L_00459571;
L_0045956f:; BB(0x0045956f);
    /* 0045956f: jmp 0x45951d */ goto L_0045951d;
L_00459571:; BB(0x00459571);
    /* 00459571: mov esp, ebp */ r_esp = r_ebp;
    /* 00459573: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459574: ret  */ FN_RET(0x00459510); r_esp += 4; return;
}

void f_00459575(void) /* FUN_00459575 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459575);
    /* 00459575: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459576: mov ebp, esp */ r_ebp = r_esp;
    /* 00459578: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045957e: push 0x67add0 */ { u32 v = 0x67add0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459583: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 00459588: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45958du); f_00624510();
    /* 0045958d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459590: push 0x67adf0 */ { u32 v = 0x67adf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459595: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 0045959a: push 0x67adf4 */ { u32 v = 0x67adf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045959f: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 004595a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004595a6: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4595abu); f_00624050();
    /* 004595ab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004595ae: push 0x67ae08 */ { u32 v = 0x67ae08u; r_esp -= 4; W32(r_esp, v); }
    /* 004595b3: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 004595b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004595ba: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x4595bfu); f_006243c0();
    /* 004595bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004595c2: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 004595c8: cmp dword ptr [ebp - 0x108], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004595cf: je 0x4595e5 */ if (fZ) goto L_004595e5;
L_004595d1:; BB(0x004595d1);
    /* 004595d1: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004595d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004595d8: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x4595ddu); f_006241d0();
    /* 004595dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004595e0: call 0x459510 */ r_esp -= 4; W32(r_esp, 0x4595e5u); f_00459510();
L_004595e5:; BB(0x004595e5);
    /* 004595e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004595e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004595e8: ret  */ FN_RET(0x00459575); r_esp += 4; return;
}

void f_004595e9(void) /* FUN_004595e9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004595e9);
    /* 004595e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004595ea: mov ebp, esp */ r_ebp = r_esp;
    /* 004595ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004595ed: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004595f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004595f3: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x4595f8u); f_005dfbf0();
    /* 004595f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004595fb: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004595fe: call 0x45a678 */ r_esp -= 4; W32(r_esp, 0x459603u); f_0045a678();
    /* 00459603: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459606: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459609: call 0x45a678 */ r_esp -= 4; W32(r_esp, 0x45960eu); f_0045a678();
    /* 0045960e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459611: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459614: call 0x45a678 */ r_esp -= 4; W32(r_esp, 0x459619u); f_0045a678();
    /* 00459619: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045961c: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045961f: call 0x45a678 */ r_esp -= 4; W32(r_esp, 0x459624u); f_0045a678();
    /* 00459624: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459627: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045962a: call 0x45a678 */ r_esp -= 4; W32(r_esp, 0x45962fu); f_0045a678();
    /* 0045962f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459632: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459635: call 0x45a678 */ r_esp -= 4; W32(r_esp, 0x45963au); f_0045a678();
    /* 0045963a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045963d: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459643: call 0x45a678 */ r_esp -= 4; W32(r_esp, 0x459648u); f_0045a678();
    /* 00459648: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045964b: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459651: call 0x45a678 */ r_esp -= 4; W32(r_esp, 0x459656u); f_0045a678();
    /* 00459656: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459659: add ecx, 0xa8 */ {  u32 a = r_ecx; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045965f: call 0x45a678 */ r_esp -= 4; W32(r_esp, 0x459664u); f_0045a678();
    /* 00459664: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459667: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045966d: call 0x45a678 */ r_esp -= 4; W32(r_esp, 0x459672u); f_0045a678();
    /* 00459672: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459675: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045967b: call 0x45a678 */ r_esp -= 4; W32(r_esp, 0x459680u); f_0045a678();
    /* 00459680: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459683: mov dword ptr [eax], 0x63569c */ W32((u32)(r_eax), 0x63569cu);
    /* 00459689: push 0x67ae0c */ { u32 v = 0x67ae0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045968e: push 0x67ae1c */ { u32 v = 0x67ae1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00459693: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 00459698: push 0x67ae20 */ { u32 v = 0x67ae20u; r_esp -= 4; W32(r_esp, v); }
    /* 0045969d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004596a0: add ecx, 0xe4 */ {  u32 a = r_ecx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004596a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004596a7: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4596acu); f_00624050();
    /* 004596ac: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004596af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004596b2: call 0x459926 */ r_esp -= 4; W32(r_esp, 0x4596b7u); f_00459926();
    /* 004596b7: push 0x67ae28 */ { u32 v = 0x67ae28u; r_esp -= 4; W32(r_esp, v); }
    /* 004596bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004596bf: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004596c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004596c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004596c6: call 0x459838 */ r_esp -= 4; W32(r_esp, 0x4596cbu); f_00459838();
    /* 004596cb: push 0x67ae30 */ { u32 v = 0x67ae30u; r_esp -= 4; W32(r_esp, v); }
    /* 004596d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004596d3: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004596d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004596d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004596da: call 0x459838 */ r_esp -= 4; W32(r_esp, 0x4596dfu); f_00459838();
    /* 004596df: push 0x67ae38 */ { u32 v = 0x67ae38u; r_esp -= 4; W32(r_esp, v); }
    /* 004596e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004596e7: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004596ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004596eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004596ee: call 0x459838 */ r_esp -= 4; W32(r_esp, 0x4596f3u); f_00459838();
    /* 004596f3: push 0x67ae40 */ { u32 v = 0x67ae40u; r_esp -= 4; W32(r_esp, v); }
    /* 004596f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004596fb: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004596fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004596ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459702: call 0x459838 */ r_esp -= 4; W32(r_esp, 0x459707u); f_00459838();
    /* 00459707: push 0x67ae48 */ { u32 v = 0x67ae48u; r_esp -= 4; W32(r_esp, v); }
    /* 0045970c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045970f: add eax, 0x6c */ {  u32 a = r_eax; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459712: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459713: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459716: call 0x459838 */ r_esp -= 4; W32(r_esp, 0x45971bu); f_00459838();
    /* 0045971b: push 0x67ae50 */ { u32 v = 0x67ae50u; r_esp -= 4; W32(r_esp, v); }
    /* 00459720: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459723: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459729: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045972a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045972d: call 0x459838 */ r_esp -= 4; W32(r_esp, 0x459732u); f_00459838();
    /* 00459732: push 0x67ae58 */ { u32 v = 0x67ae58u; r_esp -= 4; W32(r_esp, v); }
    /* 00459737: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045973a: add edx, 0x94 */ {  u32 a = r_edx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00459740: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459741: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459744: call 0x459838 */ r_esp -= 4; W32(r_esp, 0x459749u); f_00459838();
    /* 00459749: push 0x67ae60 */ { u32 v = 0x67ae60u; r_esp -= 4; W32(r_esp, v); }
    /* 0045974e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459751: add eax, 0xa8 */ {  u32 a = r_eax; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459756: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459757: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045975a: call 0x459838 */ r_esp -= 4; W32(r_esp, 0x45975fu); f_00459838();
    /* 0045975f: push 0x67ae68 */ { u32 v = 0x67ae68u; r_esp -= 4; W32(r_esp, v); }
    /* 00459764: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459767: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045976d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045976e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459771: call 0x459838 */ r_esp -= 4; W32(r_esp, 0x459776u); f_00459838();
    /* 00459776: push 0x67ae74 */ { u32 v = 0x67ae74u; r_esp -= 4; W32(r_esp, v); }
    /* 0045977b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045977e: add edx, 0xd0 */ {  u32 a = r_edx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00459784: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459785: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459788: call 0x459838 */ r_esp -= 4; W32(r_esp, 0x45978du); f_00459838();
    /* 0045978d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459790: mov esp, ebp */ r_esp = r_ebp;
    /* 00459792: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459793: ret  */ FN_RET(0x004595e9); r_esp += 4; return;
}

void f_00459794(void) /* FUN_00459794 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459794);
    /* 00459794: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459795: mov ebp, esp */ r_ebp = r_esp;
    /* 00459797: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459798: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045979b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045979e: mov dword ptr [eax], 0x63569c */ W32((u32)(r_eax), 0x63569cu);
    /* 004597a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004597a7: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004597ad: call 0x45a697 */ r_esp -= 4; W32(r_esp, 0x4597b2u); f_0045a697();
    /* 004597b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004597b5: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004597bb: call 0x45a697 */ r_esp -= 4; W32(r_esp, 0x4597c0u); f_0045a697();
    /* 004597c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004597c3: add ecx, 0xa8 */ {  u32 a = r_ecx; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004597c9: call 0x45a697 */ r_esp -= 4; W32(r_esp, 0x4597ceu); f_0045a697();
    /* 004597ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004597d1: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004597d7: call 0x45a697 */ r_esp -= 4; W32(r_esp, 0x4597dcu); f_0045a697();
    /* 004597dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004597df: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004597e5: call 0x45a697 */ r_esp -= 4; W32(r_esp, 0x4597eau); f_0045a697();
    /* 004597ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004597ed: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004597f0: call 0x45a697 */ r_esp -= 4; W32(r_esp, 0x4597f5u); f_0045a697();
    /* 004597f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004597f8: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004597fb: call 0x45a697 */ r_esp -= 4; W32(r_esp, 0x459800u); f_0045a697();
    /* 00459800: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459803: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459806: call 0x45a697 */ r_esp -= 4; W32(r_esp, 0x45980bu); f_0045a697();
    /* 0045980b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045980e: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459811: call 0x45a697 */ r_esp -= 4; W32(r_esp, 0x459816u); f_0045a697();
    /* 00459816: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459819: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045981c: call 0x45a697 */ r_esp -= 4; W32(r_esp, 0x459821u); f_0045a697();
    /* 00459821: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459824: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459827: call 0x45a697 */ r_esp -= 4; W32(r_esp, 0x45982cu); f_0045a697();
    /* 0045982c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045982f: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x459834u); f_005dfc0f();
    /* 00459834: mov esp, ebp */ r_esp = r_ebp;
    /* 00459836: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459837: ret  */ FN_RET(0x00459794); r_esp += 4; return;
}

void f_00459838(void) /* FUN_00459838 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459838);
    /* 00459838: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459839: mov ebp, esp */ r_ebp = r_esp;
    /* 0045983b: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045983e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00459841: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00459848: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045984f: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 00459854: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x459859u); f_0048ab58();
    /* 00459859: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045985c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045985f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459863: je 0x459880 */ if (fZ) goto L_00459880;
L_00459865:; BB(0x00459865);
    /* 00459865: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00459868: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459869: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045986c: add ecx, 0xe4 */ {  u32 a = r_ecx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459872: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459873: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00459876: call 0x4739e0 */ r_esp -= 4; W32(r_esp, 0x45987bu); f_004739e0();
    /* 0045987b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045987e: jmp 0x459887 */ goto L_00459887;
L_00459880:; BB(0x00459880);
    /* 00459880: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00459887:; BB(0x00459887);
    /* 00459887: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045988a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0045988d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00459890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459891: push 0x67ae7c */ { u32 v = 0x67ae7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00459896: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 00459899: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045989a: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x45989fu); f_00624050();
    /* 0045989f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004598a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004598a4: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 004598a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004598a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004598ab: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x4598b0u); f_0061ba62();
    /* 004598b0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004598b3:; BB(0x004598b3);
    /* 004598b3: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004598b7: je 0x4598f6 */ if (fZ) goto L_004598f6;
L_004598b9:; BB(0x004598b9);
    /* 004598b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004598bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004598bd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004598c0: call 0x45a70d */ r_esp -= 4; W32(r_esp, 0x4598c5u); f_0045a70d();
    /* 004598c5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004598c8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004598cb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004598ce: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004598d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004598d2: push 0x67ae80 */ { u32 v = 0x67ae80u; r_esp -= 4; W32(r_esp, v); }
    /* 004598d7: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 004598da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004598db: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4598e0u); f_00624050();
    /* 004598e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004598e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004598e5: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 004598e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004598e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004598ec: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x4598f1u); f_0061ba62();
    /* 004598f1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004598f4: jmp 0x4598b3 */ goto L_004598b3;
L_004598f6:; BB(0x004598f6);
    /* 004598f6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004598f9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004598fc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004598ff: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00459902: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459906: je 0x459919 */ if (fZ) goto L_00459919;
L_00459908:; BB(0x00459908);
    /* 00459908: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045990a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045990d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045990f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459912: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x459914u); call_ind(t); }
    /* 00459914: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00459917: jmp 0x459920 */ goto L_00459920;
L_00459919:; BB(0x00459919);
    /* 00459919: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00459920:; BB(0x00459920);
    /* 00459920: mov esp, ebp */ r_esp = r_ebp;
    /* 00459922: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459923: ret 8 */ FN_RET(0x00459838); r_esp += 12; return;
}

void f_00459926(void) /* FUN_00459926 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459926);
    /* 00459926: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459927: mov ebp, esp */ r_ebp = r_esp;
    /* 00459929: sub esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045992f: mov dword ptr [ebp - 0x120], ecx */ W32((u32)(r_ebp+0xfffffee0u), r_ecx);
    /* 00459935: mov dword ptr [ebp - 0x110], 1 */ W32((u32)(r_ebp+0xfffffef0u), 0x1u);
    /* 0045993f: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 00459949: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 0045994e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x459953u); f_0048ab58();
    /* 00459953: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459956: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 0045995c: cmp dword ptr [ebp - 0x114], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459963: je 0x459989 */ if (fZ) goto L_00459989;
L_00459965:; BB(0x00459965);
    /* 00459965: push 0x67ae84 */ { u32 v = 0x67ae84u; r_esp -= 4; W32(r_esp, v); }
    /* 0045996a: mov eax, dword ptr [ebp - 0x120] */ r_eax = R32((u32)(r_ebp+0xfffffee0u));
    /* 00459970: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459976: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0045997c: call 0x4739e0 */ r_esp -= 4; W32(r_esp, 0x459981u); f_004739e0();
    /* 00459981: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 00459987: jmp 0x459993 */ goto L_00459993;
L_00459989:; BB(0x00459989);
    /* 00459989: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
L_00459993:; BB(0x00459993);
    /* 00459993: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00459999: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 0045999f: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 004599a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004599a6: push 0x67ae8c */ { u32 v = 0x67ae8cu; r_esp -= 4; W32(r_esp, v); }
    /* 004599ab: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 004599b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004599b2: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4599b7u); f_00624050();
    /* 004599b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004599ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004599bc: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 004599c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004599c3: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 004599c9: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x4599ceu); f_0061ba62();
    /* 004599ce: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
L_004599d4:; BB(0x004599d4);
    /* 004599d4: cmp dword ptr [ebp - 0x108], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004599db: je 0x459a96 */ if (fZ) goto L_00459a96;
L_004599e1:; BB(0x004599e1);
    /* 004599e1: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004599e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004599e8: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 004599ee: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004599f1: call 0x45a70d */ r_esp -= 4; W32(r_esp, 0x4599f6u); f_0045a70d();
    /* 004599f6: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004599fb: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 00459a01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459a02: push 0x6f697c */ { u32 v = 0x6f697cu; r_esp -= 4; W32(r_esp, v); }
    /* 00459a07: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 00459a0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459a0e: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00459a14: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00459a16: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00459a1c: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x459a1fu); call_ind(t); }
    /* 00459a1f: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 00459a25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459a26: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00459a2c: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00459a2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459a30: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 00459a36: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459a39: call 0x45a787 */ r_esp -= 4; W32(r_esp, 0x459a3eu); f_0045a787();
    /* 00459a3e: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459a41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459a42: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 00459a48: call 0x459adf */ r_esp -= 4; W32(r_esp, 0x459a4du); f_00459adf();
    /* 00459a4d: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 00459a53: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459a56: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 00459a5c: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00459a62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459a63: push 0x67ae90 */ { u32 v = 0x67ae90u; r_esp -= 4; W32(r_esp, v); }
    /* 00459a68: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 00459a6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459a6f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x459a74u); f_00624050();
    /* 00459a74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459a77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459a79: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 00459a7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459a80: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00459a86: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x459a8bu); f_0061ba62();
    /* 00459a8b: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 00459a91: jmp 0x4599d4 */ goto L_004599d4;
L_00459a96:; BB(0x00459a96);
    /* 00459a96: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00459a9c: mov dword ptr [ebp - 0x11c], ecx */ W32((u32)(r_ebp+0xfffffee4u), r_ecx);
    /* 00459aa2: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00459aa8: mov dword ptr [ebp - 0x118], edx */ W32((u32)(r_ebp+0xfffffee8u), r_edx);
    /* 00459aae: cmp dword ptr [ebp - 0x118], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459ab5: je 0x459ad1 */ if (fZ) goto L_00459ad1;
L_00459ab7:; BB(0x00459ab7);
    /* 00459ab7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00459ab9: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 00459abf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00459ac1: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00459ac7: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x459ac9u); call_ind(t); }
    /* 00459ac9: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 00459acf: jmp 0x459adb */ goto L_00459adb;
L_00459ad1:; BB(0x00459ad1);
    /* 00459ad1: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
L_00459adb:; BB(0x00459adb);
    /* 00459adb: mov esp, ebp */ r_esp = r_ebp;
    /* 00459add: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459ade: ret  */ FN_RET(0x00459926); r_esp += 4; return;
}

void f_00459adf(void) /* FUN_00459adf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459adf);
    /* 00459adf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459ae0: mov ebp, esp */ r_ebp = r_esp;
    /* 00459ae2: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459ae5: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00459ae8: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00459aef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00459af2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459af3: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x459af8u); f_00624990();
    /* 00459af8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459afb: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00459afe: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00459b05: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00459b0c: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 00459b11: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x459b16u); f_0048ab58();
    /* 00459b16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459b19: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00459b1c: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459b20: je 0x459b3e */ if (fZ) goto L_00459b3e;
L_00459b22:; BB(0x00459b22);
    /* 00459b22: push 0x67ae94 */ { u32 v = 0x67ae94u; r_esp -= 4; W32(r_esp, v); }
    /* 00459b27: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00459b2a: add ecx, 0xe4 */ {  u32 a = r_ecx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459b30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459b31: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00459b34: call 0x4739e0 */ r_esp -= 4; W32(r_esp, 0x459b39u); f_004739e0();
    /* 00459b39: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00459b3c: jmp 0x459b45 */ goto L_00459b45;
L_00459b3e:; BB(0x00459b3e);
    /* 00459b3e: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00459b45:; BB(0x00459b45);
    /* 00459b45: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00459b48: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00459b4b: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00459b52: jmp 0x459b5d */ goto L_00459b5d;
L_00459b54:; BB(0x00459b54);
    /* 00459b54: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00459b57: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459b5a: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
L_00459b5d:; BB(0x00459b5d);
    /* 00459b5d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00459b60: cmp ecx, dword ptr [ebp - 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459b63: jge 0x459b7f */ if ((fS==fO)) goto L_00459b7f;
L_00459b65:; BB(0x00459b65);
    /* 00459b65: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00459b68: add edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00459b6b: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00459b6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459b6f: call 0x625800 */ r_esp -= 4; W32(r_esp, 0x459b74u); f_00625800();
    /* 00459b74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459b77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459b79: jne 0x459b7d */ if (!fZ) goto L_00459b7d;
L_00459b7b:; BB(0x00459b7b);
    /* 00459b7b: jmp 0x459b7f */ goto L_00459b7f;
L_00459b7d:; BB(0x00459b7d);
    /* 00459b7d: jmp 0x459b54 */ goto L_00459b54;
L_00459b7f:; BB(0x00459b7f);
    /* 00459b7f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00459b81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459b83: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 00459b86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459b87: call 0x624170 */ r_esp -= 4; W32(r_esp, 0x459b8cu); f_00624170();
    /* 00459b8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459b8f: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00459b92: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00459b95: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00459b98: jmp 0x459ba3 */ goto L_00459ba3;
L_00459b9a:; BB(0x00459b9a);
    /* 00459b9a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00459b9d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459ba0: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
L_00459ba3:; BB(0x00459ba3);
    /* 00459ba3: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00459ba6: cmp ecx, dword ptr [ebp - 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459ba9: jge 0x459cd5 */ if ((fS==fO)) goto L_00459cd5;
L_00459baf:; BB(0x00459baf);
    /* 00459baf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00459bb2: add edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00459bb5: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00459bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459bb9: call 0x625830 */ r_esp -= 4; W32(r_esp, 0x459bbeu); f_00625830();
    /* 00459bbe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459bc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459bc3: je 0x459ca3 */ if (fZ) goto L_00459ca3;
L_00459bc9:; BB(0x00459bc9);
    /* 00459bc9: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459bcd: je 0x459c3d */ if (fZ) goto L_00459c3d;
L_00459bcf:; BB(0x00459bcf);
    /* 00459bcf: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 00459bd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459bd3: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 00459bd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459bd7: push 0x67aea0 */ { u32 v = 0x67aea0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459bdc: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00459bdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459be0: call 0x625440 */ r_esp -= 4; W32(r_esp, 0x459be5u); f_00625440();
    /* 00459be5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459be8: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00459beb: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00459bee: jmp 0x459bf9 */ goto L_00459bf9;
L_00459bf0:; BB(0x00459bf0);
    /* 00459bf0: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00459bf3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00459bf6: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
L_00459bf9:; BB(0x00459bf9);
    /* 00459bf9: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00459bfc: cmp eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459bff: jg 0x459c3b */ if ((!fZ&&fS==fO)) goto L_00459c3b;
L_00459c01:; BB(0x00459c01);
    /* 00459c01: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00459c04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459c05: push 0x67aea8 */ { u32 v = 0x67aea8u; r_esp -= 4; W32(r_esp, v); }
    /* 00459c0a: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00459c0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459c0e: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x459c13u); f_00624050();
    /* 00459c13: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459c16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459c18: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 00459c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459c1c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00459c1f: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x459c24u); f_0061ba62();
    /* 00459c24: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00459c27: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459c2b: je 0x459c39 */ if (fZ) goto L_00459c39;
L_00459c2d:; BB(0x00459c2d);
    /* 00459c2d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00459c30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459c31: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459c34: call 0x45a70d */ r_esp -= 4; W32(r_esp, 0x459c39u); f_0045a70d();
L_00459c39:; BB(0x00459c39);
    /* 00459c39: jmp 0x459bf0 */ goto L_00459bf0;
L_00459c3b:; BB(0x00459c3b);
    /* 00459c3b: jmp 0x459c8a */ goto L_00459c8a;
L_00459c3d:; BB(0x00459c3d);
    /* 00459c3d: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 00459c40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459c41: push 0x67aeac */ { u32 v = 0x67aeacu; r_esp -= 4; W32(r_esp, v); }
    /* 00459c46: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00459c49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459c4a: call 0x625440 */ r_esp -= 4; W32(r_esp, 0x459c4fu); f_00625440();
    /* 00459c4f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459c52: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00459c55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459c56: push 0x67aeb0 */ { u32 v = 0x67aeb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459c5b: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00459c5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459c5f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x459c64u); f_00624050();
    /* 00459c64: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459c67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459c69: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 00459c6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459c6d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00459c70: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x459c75u); f_0061ba62();
    /* 00459c75: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00459c78: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459c7c: je 0x459c8a */ if (fZ) goto L_00459c8a;
L_00459c7e:; BB(0x00459c7e);
    /* 00459c7e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00459c81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459c82: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459c85: call 0x45a70d */ r_esp -= 4; W32(r_esp, 0x459c8au); f_0045a70d();
L_00459c8a:; BB(0x00459c8a);
    /* 00459c8a: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00459c8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459c8e: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00459c91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459c92: call 0x624170 */ r_esp -= 4; W32(r_esp, 0x459c97u); f_00624170();
    /* 00459c97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459c9a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00459ca1: jmp 0x459cd0 */ goto L_00459cd0;
L_00459ca3:; BB(0x00459ca3);
    /* 00459ca3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00459ca6: add eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459ca9: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00459cac: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459caf: jne 0x459cb8 */ if (!fZ) goto L_00459cb8;
L_00459cb1:; BB(0x00459cb1);
    /* 00459cb1: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
L_00459cb8:; BB(0x00459cb8);
    /* 00459cb8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00459cbb: add edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00459cbe: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00459cc1: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00459cc3: mov byte ptr [ebp + eax - 0x34], cl */ W8((u32)(r_ebp+r_eax+0xffffffccu), (u8)r_ecx);
    /* 00459cc7: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00459cca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00459ccd: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
L_00459cd0:; BB(0x00459cd0);
    /* 00459cd0: jmp 0x459b9a */ goto L_00459b9a;
L_00459cd5:; BB(0x00459cd5);
    /* 00459cd5: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459cd9: je 0x459d49 */ if (fZ) goto L_00459d49;
L_00459cdb:; BB(0x00459cdb);
    /* 00459cdb: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00459cde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459cdf: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 00459ce2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459ce3: push 0x67aeb4 */ { u32 v = 0x67aeb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00459ce8: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00459ceb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459cec: call 0x625440 */ r_esp -= 4; W32(r_esp, 0x459cf1u); f_00625440();
    /* 00459cf1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459cf4: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00459cf7: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00459cfa: jmp 0x459d05 */ goto L_00459d05;
L_00459cfc:; BB(0x00459cfc);
    /* 00459cfc: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00459cff: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459d02: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
L_00459d05:; BB(0x00459d05);
    /* 00459d05: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00459d08: cmp edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459d0b: jg 0x459d47 */ if ((!fZ&&fS==fO)) goto L_00459d47;
L_00459d0d:; BB(0x00459d0d);
    /* 00459d0d: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00459d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459d11: push 0x67aebc */ { u32 v = 0x67aebcu; r_esp -= 4; W32(r_esp, v); }
    /* 00459d16: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00459d19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459d1a: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x459d1fu); f_00624050();
    /* 00459d1f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459d22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459d24: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00459d27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459d28: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00459d2b: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x459d30u); f_0061ba62();
    /* 00459d30: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00459d33: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459d37: je 0x459d45 */ if (fZ) goto L_00459d45;
L_00459d39:; BB(0x00459d39);
    /* 00459d39: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00459d3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459d3d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459d40: call 0x45a70d */ r_esp -= 4; W32(r_esp, 0x459d45u); f_0045a70d();
L_00459d45:; BB(0x00459d45);
    /* 00459d45: jmp 0x459cfc */ goto L_00459cfc;
L_00459d47:; BB(0x00459d47);
    /* 00459d47: jmp 0x459d96 */ goto L_00459d96;
L_00459d49:; BB(0x00459d49);
    /* 00459d49: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 00459d4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459d4d: push 0x67aec0 */ { u32 v = 0x67aec0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459d52: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00459d55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459d56: call 0x625440 */ r_esp -= 4; W32(r_esp, 0x459d5bu); f_00625440();
    /* 00459d5b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459d5e: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00459d61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459d62: push 0x67aec4 */ { u32 v = 0x67aec4u; r_esp -= 4; W32(r_esp, v); }
    /* 00459d67: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00459d6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459d6b: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x459d70u); f_00624050();
    /* 00459d70: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459d73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459d75: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00459d78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459d79: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00459d7c: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x459d81u); f_0061ba62();
    /* 00459d81: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00459d84: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459d88: je 0x459d96 */ if (fZ) goto L_00459d96;
L_00459d8a:; BB(0x00459d8a);
    /* 00459d8a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00459d8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459d8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459d91: call 0x45a70d */ r_esp -= 4; W32(r_esp, 0x459d96u); f_0045a70d();
L_00459d96:; BB(0x00459d96);
    /* 00459d96: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00459d99: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00459d9c: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00459d9f: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00459da2: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459da6: je 0x459db9 */ if (fZ) goto L_00459db9;
L_00459da8:; BB(0x00459da8);
    /* 00459da8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00459daa: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00459dad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00459daf: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00459db2: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x459db4u); call_ind(t); }
    /* 00459db4: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00459db7: jmp 0x459dc0 */ goto L_00459dc0;
L_00459db9:; BB(0x00459db9);
    /* 00459db9: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00459dc0:; BB(0x00459dc0);
    /* 00459dc0: mov esp, ebp */ r_esp = r_ebp;
    /* 00459dc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459dc3: ret 8 */ FN_RET(0x00459adf); r_esp += 12; return;
}

void f_00459dc6(void) /* FUN_00459dc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459dc6);
    /* 00459dc6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459dc7: mov ebp, esp */ r_ebp = r_esp;
    /* 00459dc9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459dcc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00459dcf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00459dd6: jmp 0x459de1 */ goto L_00459de1;
L_00459dd8:; BB(0x00459dd8);
    /* 00459dd8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459ddb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459dde: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00459de1:; BB(0x00459de1);
    /* 00459de1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459de4: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459de7: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x459decu); f_005dd4d2();
    /* 00459dec: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459def: jge 0x459e0c */ if ((fS==fO)) goto L_00459e0c;
L_00459df1:; BB(0x00459df1);
    /* 00459df1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459df4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459df5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459df8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459dfb: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x459e00u); f_0045a759();
    /* 00459e00: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459e03: jne 0x459e0a */ if (!fZ) goto L_00459e0a;
L_00459e05:; BB(0x00459e05);
    /* 00459e05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459e08: jmp 0x459e0f */ goto L_00459e0f;
L_00459e0a:; BB(0x00459e0a);
    /* 00459e0a: jmp 0x459dd8 */ goto L_00459dd8;
L_00459e0c:; BB(0x00459e0c);
    /* 00459e0c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00459e0f:; BB(0x00459e0f);
    /* 00459e0f: mov esp, ebp */ r_esp = r_ebp;
    /* 00459e11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459e12: ret 4 */ FN_RET(0x00459dc6); r_esp += 8; return;
}

void f_00459e15(void) /* FUN_00459e15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459e15);
    /* 00459e15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459e16: mov ebp, esp */ r_ebp = r_esp;
    /* 00459e18: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459e1b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00459e1e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00459e21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459e22: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459e25: call 0x459dc6 */ r_esp -= 4; W32(r_esp, 0x459e2au); f_00459dc6();
    /* 00459e2a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00459e2d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459e30: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00459e33: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00459e37: ja 0x459f3f */ if ((!fC&&!fZ)) goto L_00459f3f;
L_00459e3d:; BB(0x00459e3d);
    /* 00459e3d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00459e40: jmp dword ptr [edx*4 + 0x459f48] */ { u32 t = R32((u32)(r_edx*4+0x459f48u)); switch (t) { case 0x459e47u: goto L_00459e47; case 0x459e5bu: goto L_00459e5b; case 0x459e7du: goto L_00459e7d; case 0x459e91u: goto L_00459e91; case 0x459ea5u: goto L_00459ea5; case 0x459eb9u: goto L_00459eb9; case 0x459ecau: goto L_00459eca; case 0x459edbu: goto L_00459edb; case 0x459eefu: goto L_00459eef; case 0x459f03u: goto L_00459f03; case 0x459f17u: goto L_00459f17; case 0x459f2bu: goto L_00459f2b; default: UNSUP(0x00459e40, "jump table entry is not a known target"); } }
L_00459e47:; BB(0x00459e47);
    /* 00459e47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00459e4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459e4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459e4e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459e51: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x459e56u); f_0045a759();
    /* 00459e56: jmp 0x459f42 */ goto L_00459f42;
L_00459e5b:; BB(0x00459e5b);
    /* 00459e5b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00459e5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459e5f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459e62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459e63: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459e66: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459e69: call 0x45a787 */ r_esp -= 4; W32(r_esp, 0x459e6eu); f_0045a787();
    /* 00459e6e: mov ecx, eax */ r_ecx = r_eax;
    /* 00459e70: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459e73: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x459e78u); f_0045a759();
    /* 00459e78: jmp 0x459f42 */ goto L_00459f42;
L_00459e7d:; BB(0x00459e7d);
    /* 00459e7d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00459e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459e81: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459e84: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459e87: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x459e8cu); f_0045a759();
    /* 00459e8c: jmp 0x459f42 */ goto L_00459f42;
L_00459e91:; BB(0x00459e91);
    /* 00459e91: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00459e94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459e95: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459e98: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459e9b: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x459ea0u); f_0045a759();
    /* 00459ea0: jmp 0x459f42 */ goto L_00459f42;
L_00459ea5:; BB(0x00459ea5);
    /* 00459ea5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00459ea8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459ea9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459eac: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459eaf: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x459eb4u); f_0045a759();
    /* 00459eb4: jmp 0x459f42 */ goto L_00459f42;
L_00459eb9:; BB(0x00459eb9);
    /* 00459eb9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00459ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459ebd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459ec0: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459ec3: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x459ec8u); f_0045a759();
    /* 00459ec8: jmp 0x459f42 */ goto L_00459f42;
L_00459eca:; BB(0x00459eca);
    /* 00459eca: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00459ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459ece: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459ed1: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459ed4: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x459ed9u); f_0045a759();
    /* 00459ed9: jmp 0x459f42 */ goto L_00459f42;
L_00459edb:; BB(0x00459edb);
    /* 00459edb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00459ede: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459edf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459ee2: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459ee8: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x459eedu); f_0045a759();
    /* 00459eed: jmp 0x459f42 */ goto L_00459f42;
L_00459eef:; BB(0x00459eef);
    /* 00459eef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00459ef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459ef3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459ef6: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459efc: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x459f01u); f_0045a759();
    /* 00459f01: jmp 0x459f42 */ goto L_00459f42;
L_00459f03:; BB(0x00459f03);
    /* 00459f03: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00459f06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459f07: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459f0a: add ecx, 0xa8 */ {  u32 a = r_ecx; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459f10: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x459f15u); f_0045a759();
    /* 00459f15: jmp 0x459f42 */ goto L_00459f42;
L_00459f17:; BB(0x00459f17);
    /* 00459f17: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00459f1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459f1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459f1e: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459f24: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x459f29u); f_0045a759();
    /* 00459f29: jmp 0x459f42 */ goto L_00459f42;
L_00459f2b:; BB(0x00459f2b);
    /* 00459f2b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00459f2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459f2f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459f32: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459f38: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x459f3du); f_0045a759();
    /* 00459f3d: jmp 0x459f42 */ goto L_00459f42;
L_00459f3f:; BB(0x00459f3f);
    /* 00459f3f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00459f42:; BB(0x00459f42);
    /* 00459f42: mov esp, ebp */ r_esp = r_ebp;
    /* 00459f44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459f45: ret 0xc */ FN_RET(0x00459e15); r_esp += 16; return;
}

void f_00459f78(void) /* FUN_00459f78 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459f78);
    /* 00459f78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459f79: mov ebp, esp */ r_ebp = r_esp;
    /* 00459f7b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459f7e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00459f81: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00459f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459f85: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459f88: call 0x459dc6 */ r_esp -= 4; W32(r_esp, 0x459f8du); f_00459dc6();
    /* 00459f8d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00459f90: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459f93: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00459f96: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00459f9a: ja 0x45a0e4 */ if ((!fC&&!fZ)) goto L_0045a0e4;
L_00459fa0:; BB(0x00459fa0);
    /* 00459fa0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00459fa3: jmp dword ptr [edx*4 + 0x45a0ed] */ { u32 t = R32((u32)(r_edx*4+0x45a0edu)); switch (t) { case 0x459faau: goto L_00459faa; case 0x459fc3u: goto L_00459fc3; case 0x459feau: goto L_00459fea; case 0x45a003u: goto L_0045a003; case 0x45a01cu: goto L_0045a01c; case 0x45a035u: goto L_0045a035; case 0x45a04eu: goto L_0045a04e; case 0x45a067u: goto L_0045a067; case 0x45a080u: goto L_0045a080; case 0x45a099u: goto L_0045a099; case 0x45a0b2u: goto L_0045a0b2; case 0x45a0cbu: goto L_0045a0cb; default: UNSUP(0x00459fa3, "jump table entry is not a known target"); } }
L_00459faa:; BB(0x00459faa);
    /* 00459faa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459fad: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459fb0: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x459fb5u); f_005dd4d2();
    /* 00459fb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459fb6: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x459fbbu); f_0060ee31();
    /* 00459fbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459fbe: jmp 0x45a0e7 */ goto L_0045a0e7;
L_00459fc3:; BB(0x00459fc3);
    /* 00459fc3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459fc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459fc7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459fca: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459fcd: call 0x45a787 */ r_esp -= 4; W32(r_esp, 0x459fd2u); f_0045a787();
    /* 00459fd2: mov ecx, eax */ r_ecx = r_eax;
    /* 00459fd4: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459fd7: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x459fdcu); f_005dd4d2();
    /* 00459fdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459fdd: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x459fe2u); f_0060ee31();
    /* 00459fe2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459fe5: jmp 0x45a0e7 */ goto L_0045a0e7;
L_00459fea:; BB(0x00459fea);
    /* 00459fea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459fed: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459ff0: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x459ff5u); f_005dd4d2();
    /* 00459ff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459ff6: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x459ffbu); f_0060ee31();
    /* 00459ffb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459ffe: jmp 0x45a0e7 */ goto L_0045a0e7;
L_0045a003:; BB(0x0045a003);
    /* 0045a003: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a006: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a009: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a00eu); f_005dd4d2();
    /* 0045a00e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a00f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45a014u); f_0060ee31();
    /* 0045a014: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a017: jmp 0x45a0e7 */ goto L_0045a0e7;
L_0045a01c:; BB(0x0045a01c);
    /* 0045a01c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a01f: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a022: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a027u); f_005dd4d2();
    /* 0045a027: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a028: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45a02du); f_0060ee31();
    /* 0045a02d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a030: jmp 0x45a0e7 */ goto L_0045a0e7;
L_0045a035:; BB(0x0045a035);
    /* 0045a035: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a038: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a03b: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a040u); f_005dd4d2();
    /* 0045a040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a041: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45a046u); f_0060ee31();
    /* 0045a046: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a049: jmp 0x45a0e7 */ goto L_0045a0e7;
L_0045a04e:; BB(0x0045a04e);
    /* 0045a04e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a051: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a054: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a059u); f_005dd4d2();
    /* 0045a059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a05a: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45a05fu); f_0060ee31();
    /* 0045a05f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a062: jmp 0x45a0e7 */ goto L_0045a0e7;
L_0045a067:; BB(0x0045a067);
    /* 0045a067: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a06a: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a070: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a075u); f_005dd4d2();
    /* 0045a075: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a076: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45a07bu); f_0060ee31();
    /* 0045a07b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a07e: jmp 0x45a0e7 */ goto L_0045a0e7;
L_0045a080:; BB(0x0045a080);
    /* 0045a080: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a083: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a089: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a08eu); f_005dd4d2();
    /* 0045a08e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a08f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45a094u); f_0060ee31();
    /* 0045a094: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a097: jmp 0x45a0e7 */ goto L_0045a0e7;
L_0045a099:; BB(0x0045a099);
    /* 0045a099: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a09c: add ecx, 0xa8 */ {  u32 a = r_ecx; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a0a2: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a0a7u); f_005dd4d2();
    /* 0045a0a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a0a8: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45a0adu); f_0060ee31();
    /* 0045a0ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a0b0: jmp 0x45a0e7 */ goto L_0045a0e7;
L_0045a0b2:; BB(0x0045a0b2);
    /* 0045a0b2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a0b5: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a0bb: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a0c0u); f_005dd4d2();
    /* 0045a0c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a0c1: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45a0c6u); f_0060ee31();
    /* 0045a0c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a0c9: jmp 0x45a0e7 */ goto L_0045a0e7;
L_0045a0cb:; BB(0x0045a0cb);
    /* 0045a0cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a0ce: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a0d4: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a0d9u); f_005dd4d2();
    /* 0045a0d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a0da: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45a0dfu); f_0060ee31();
    /* 0045a0df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a0e2: jmp 0x45a0e7 */ goto L_0045a0e7;
L_0045a0e4:; BB(0x0045a0e4);
    /* 0045a0e4: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0045a0e7:; BB(0x0045a0e7);
    /* 0045a0e7: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a0e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a0ea: ret 8 */ FN_RET(0x00459f78); r_esp += 12; return;
}

void f_0045a11d(void) /* FUN_0045a11d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a11d);
    /* 0045a11d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a11e: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a120: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a123: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045a126: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045a129: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a12a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a12d: call 0x459dc6 */ r_esp -= 4; W32(r_esp, 0x45a132u); f_00459dc6();
    /* 0045a132: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045a135: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a138: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045a13b: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045a13f: ja 0x45a211 */ if ((!fC&&!fZ)) goto L_0045a211;
L_0045a145:; BB(0x0045a145);
    /* 0045a145: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a148: jmp dword ptr [edx*4 + 0x45a219] */ { u32 t = R32((u32)(r_edx*4+0x45a219u)); switch (t) { case 0x45a14fu: goto L_0045a14f; case 0x45a15fu: goto L_0045a15f; case 0x45a17du: goto L_0045a17d; case 0x45a18du: goto L_0045a18d; case 0x45a19au: goto L_0045a19a; case 0x45a1a7u: goto L_0045a1a7; case 0x45a1b4u: goto L_0045a1b4; case 0x45a1c1u: goto L_0045a1c1; case 0x45a1d1u: goto L_0045a1d1; case 0x45a1e1u: goto L_0045a1e1; case 0x45a1f1u: goto L_0045a1f1; case 0x45a201u: goto L_0045a201; default: UNSUP(0x0045a148, "jump table entry is not a known target"); } }
L_0045a14f:; BB(0x0045a14f);
    /* 0045a14f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a152: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a155: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a15au); f_005dd4d2();
    /* 0045a15a: jmp 0x45a213 */ goto L_0045a213;
L_0045a15f:; BB(0x0045a15f);
    /* 0045a15f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a162: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a163: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a166: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a169: call 0x45a787 */ r_esp -= 4; W32(r_esp, 0x45a16eu); f_0045a787();
    /* 0045a16e: mov ecx, eax */ r_ecx = r_eax;
    /* 0045a170: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a173: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a178u); f_005dd4d2();
    /* 0045a178: jmp 0x45a213 */ goto L_0045a213;
L_0045a17d:; BB(0x0045a17d);
    /* 0045a17d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a180: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a183: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a188u); f_005dd4d2();
    /* 0045a188: jmp 0x45a213 */ goto L_0045a213;
L_0045a18d:; BB(0x0045a18d);
    /* 0045a18d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a190: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a193: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a198u); f_005dd4d2();
    /* 0045a198: jmp 0x45a213 */ goto L_0045a213;
L_0045a19a:; BB(0x0045a19a);
    /* 0045a19a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a19d: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a1a0: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a1a5u); f_005dd4d2();
    /* 0045a1a5: jmp 0x45a213 */ goto L_0045a213;
L_0045a1a7:; BB(0x0045a1a7);
    /* 0045a1a7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a1aa: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a1ad: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a1b2u); f_005dd4d2();
    /* 0045a1b2: jmp 0x45a213 */ goto L_0045a213;
L_0045a1b4:; BB(0x0045a1b4);
    /* 0045a1b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a1b7: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a1ba: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a1bfu); f_005dd4d2();
    /* 0045a1bf: jmp 0x45a213 */ goto L_0045a213;
L_0045a1c1:; BB(0x0045a1c1);
    /* 0045a1c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a1c4: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a1ca: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a1cfu); f_005dd4d2();
    /* 0045a1cf: jmp 0x45a213 */ goto L_0045a213;
L_0045a1d1:; BB(0x0045a1d1);
    /* 0045a1d1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a1d4: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a1da: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a1dfu); f_005dd4d2();
    /* 0045a1df: jmp 0x45a213 */ goto L_0045a213;
L_0045a1e1:; BB(0x0045a1e1);
    /* 0045a1e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a1e4: add ecx, 0xa8 */ {  u32 a = r_ecx; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a1ea: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a1efu); f_005dd4d2();
    /* 0045a1ef: jmp 0x45a213 */ goto L_0045a213;
L_0045a1f1:; BB(0x0045a1f1);
    /* 0045a1f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a1f4: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a1fa: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a1ffu); f_005dd4d2();
    /* 0045a1ff: jmp 0x45a213 */ goto L_0045a213;
L_0045a201:; BB(0x0045a201);
    /* 0045a201: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a204: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a20a: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a20fu); f_005dd4d2();
    /* 0045a20f: jmp 0x45a213 */ goto L_0045a213;
L_0045a211:; BB(0x0045a211);
    /* 0045a211: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045a213:; BB(0x0045a213);
    /* 0045a213: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a215: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a216: ret 8 */ FN_RET(0x0045a11d); r_esp += 12; return;
}

void f_0045a249(void) /* FUN_0045a249 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a249);
    /* 0045a249: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a24a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a24c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a24f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045a252: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0045a255: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a256: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a259: call 0x459dc6 */ r_esp -= 4; W32(r_esp, 0x45a25eu); f_00459dc6();
    /* 0045a25e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045a261: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a264: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045a267: cmp dword ptr [ebp - 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045a26b: ja 0x45a5e3 */ if ((!fC&&!fZ)) goto L_0045a5e3;
L_0045a271:; BB(0x0045a271);
    /* 0045a271: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a274: jmp dword ptr [edx*4 + 0x45a5ec] */ { u32 t = R32((u32)(r_edx*4+0x45a5ecu)); switch (t) { case 0x45a27bu: goto L_0045a27b; case 0x45a2c0u: goto L_0045a2c0; case 0x45a321u: goto L_0045a321; case 0x45a366u: goto L_0045a366; case 0x45a3abu: goto L_0045a3ab; case 0x45a3f0u: goto L_0045a3f0; case 0x45a435u: goto L_0045a435; case 0x45a47au: goto L_0045a47a; case 0x45a4c5u: goto L_0045a4c5; case 0x45a510u: goto L_0045a510; case 0x45a55bu: goto L_0045a55b; case 0x45a5a0u: goto L_0045a5a0; default: UNSUP(0x0045a274, "jump table entry is not a known target"); } }
L_0045a27b:; BB(0x0045a27b);
    /* 0045a27b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a282: jmp 0x45a28d */ goto L_0045a28d;
L_0045a284:; BB(0x0045a284);
    /* 0045a284: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a287: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045a28a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045a28d:; BB(0x0045a28d);
    /* 0045a28d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a290: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a293: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a298u); f_005dd4d2();
    /* 0045a298: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a29b: jge 0x45a2bb */ if ((fS==fO)) goto L_0045a2bb;
L_0045a29d:; BB(0x0045a29d);
    /* 0045a29d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a2a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a2a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a2a4: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a2a7: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x45a2acu); f_0045a759();
    /* 0045a2ac: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a2af: jne 0x45a2b9 */ if (!fZ) goto L_0045a2b9;
L_0045a2b1:; BB(0x0045a2b1);
    /* 0045a2b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a2b4: jmp 0x45a5e6 */ goto L_0045a5e6;
L_0045a2b9:; BB(0x0045a2b9);
    /* 0045a2b9: jmp 0x45a284 */ goto L_0045a284;
L_0045a2bb:; BB(0x0045a2bb);
    /* 0045a2bb: jmp 0x45a5e3 */ goto L_0045a5e3;
L_0045a2c0:; BB(0x0045a2c0);
    /* 0045a2c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a2c7: jmp 0x45a2d2 */ goto L_0045a2d2;
L_0045a2c9:; BB(0x0045a2c9);
    /* 0045a2c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a2cc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045a2cf: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0045a2d2:; BB(0x0045a2d2);
    /* 0045a2d2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a2d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a2d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a2d9: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a2dc: call 0x45a787 */ r_esp -= 4; W32(r_esp, 0x45a2e1u); f_0045a787();
    /* 0045a2e1: mov ecx, eax */ r_ecx = r_eax;
    /* 0045a2e3: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a2e6: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a2ebu); f_005dd4d2();
    /* 0045a2eb: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a2ee: jge 0x45a31c */ if ((fS==fO)) goto L_0045a31c;
L_0045a2f0:; BB(0x0045a2f0);
    /* 0045a2f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a2f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a2f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a2f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a2f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a2fb: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a2fe: call 0x45a787 */ r_esp -= 4; W32(r_esp, 0x45a303u); f_0045a787();
    /* 0045a303: mov ecx, eax */ r_ecx = r_eax;
    /* 0045a305: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a308: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x45a30du); f_0045a759();
    /* 0045a30d: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a310: jne 0x45a31a */ if (!fZ) goto L_0045a31a;
L_0045a312:; BB(0x0045a312);
    /* 0045a312: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a315: jmp 0x45a5e6 */ goto L_0045a5e6;
L_0045a31a:; BB(0x0045a31a);
    /* 0045a31a: jmp 0x45a2c9 */ goto L_0045a2c9;
L_0045a31c:; BB(0x0045a31c);
    /* 0045a31c: jmp 0x45a5e3 */ goto L_0045a5e3;
L_0045a321:; BB(0x0045a321);
    /* 0045a321: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a328: jmp 0x45a333 */ goto L_0045a333;
L_0045a32a:; BB(0x0045a32a);
    /* 0045a32a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a32d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045a330: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045a333:; BB(0x0045a333);
    /* 0045a333: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a336: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a339: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a33eu); f_005dd4d2();
    /* 0045a33e: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a341: jge 0x45a361 */ if ((fS==fO)) goto L_0045a361;
L_0045a343:; BB(0x0045a343);
    /* 0045a343: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a346: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a347: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a34a: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a34d: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x45a352u); f_0045a759();
    /* 0045a352: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a355: jne 0x45a35f */ if (!fZ) goto L_0045a35f;
L_0045a357:; BB(0x0045a357);
    /* 0045a357: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a35a: jmp 0x45a5e6 */ goto L_0045a5e6;
L_0045a35f:; BB(0x0045a35f);
    /* 0045a35f: jmp 0x45a32a */ goto L_0045a32a;
L_0045a361:; BB(0x0045a361);
    /* 0045a361: jmp 0x45a5e3 */ goto L_0045a5e3;
L_0045a366:; BB(0x0045a366);
    /* 0045a366: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a36d: jmp 0x45a378 */ goto L_0045a378;
L_0045a36f:; BB(0x0045a36f);
    /* 0045a36f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a372: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045a375: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0045a378:; BB(0x0045a378);
    /* 0045a378: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a37b: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a37e: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a383u); f_005dd4d2();
    /* 0045a383: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a386: jge 0x45a3a6 */ if ((fS==fO)) goto L_0045a3a6;
L_0045a388:; BB(0x0045a388);
    /* 0045a388: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a38b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a38c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a38f: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a392: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x45a397u); f_0045a759();
    /* 0045a397: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a39a: jne 0x45a3a4 */ if (!fZ) goto L_0045a3a4;
L_0045a39c:; BB(0x0045a39c);
    /* 0045a39c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a39f: jmp 0x45a5e6 */ goto L_0045a5e6;
L_0045a3a4:; BB(0x0045a3a4);
    /* 0045a3a4: jmp 0x45a36f */ goto L_0045a36f;
L_0045a3a6:; BB(0x0045a3a6);
    /* 0045a3a6: jmp 0x45a5e3 */ goto L_0045a5e3;
L_0045a3ab:; BB(0x0045a3ab);
    /* 0045a3ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a3b2: jmp 0x45a3bd */ goto L_0045a3bd;
L_0045a3b4:; BB(0x0045a3b4);
    /* 0045a3b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a3b7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a3ba: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0045a3bd:; BB(0x0045a3bd);
    /* 0045a3bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a3c0: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a3c3: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a3c8u); f_005dd4d2();
    /* 0045a3c8: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a3cb: jge 0x45a3eb */ if ((fS==fO)) goto L_0045a3eb;
L_0045a3cd:; BB(0x0045a3cd);
    /* 0045a3cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a3d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a3d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a3d4: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a3d7: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x45a3dcu); f_0045a759();
    /* 0045a3dc: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a3df: jne 0x45a3e9 */ if (!fZ) goto L_0045a3e9;
L_0045a3e1:; BB(0x0045a3e1);
    /* 0045a3e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a3e4: jmp 0x45a5e6 */ goto L_0045a5e6;
L_0045a3e9:; BB(0x0045a3e9);
    /* 0045a3e9: jmp 0x45a3b4 */ goto L_0045a3b4;
L_0045a3eb:; BB(0x0045a3eb);
    /* 0045a3eb: jmp 0x45a5e3 */ goto L_0045a5e3;
L_0045a3f0:; BB(0x0045a3f0);
    /* 0045a3f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a3f7: jmp 0x45a402 */ goto L_0045a402;
L_0045a3f9:; BB(0x0045a3f9);
    /* 0045a3f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a3fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045a3ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045a402:; BB(0x0045a402);
    /* 0045a402: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a405: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a408: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a40du); f_005dd4d2();
    /* 0045a40d: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a410: jge 0x45a430 */ if ((fS==fO)) goto L_0045a430;
L_0045a412:; BB(0x0045a412);
    /* 0045a412: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a415: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a416: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a419: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a41c: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x45a421u); f_0045a759();
    /* 0045a421: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a424: jne 0x45a42e */ if (!fZ) goto L_0045a42e;
L_0045a426:; BB(0x0045a426);
    /* 0045a426: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a429: jmp 0x45a5e6 */ goto L_0045a5e6;
L_0045a42e:; BB(0x0045a42e);
    /* 0045a42e: jmp 0x45a3f9 */ goto L_0045a3f9;
L_0045a430:; BB(0x0045a430);
    /* 0045a430: jmp 0x45a5e3 */ goto L_0045a5e3;
L_0045a435:; BB(0x0045a435);
    /* 0045a435: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a43c: jmp 0x45a447 */ goto L_0045a447;
L_0045a43e:; BB(0x0045a43e);
    /* 0045a43e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a441: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045a444: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0045a447:; BB(0x0045a447);
    /* 0045a447: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a44a: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a44d: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a452u); f_005dd4d2();
    /* 0045a452: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a455: jge 0x45a475 */ if ((fS==fO)) goto L_0045a475;
L_0045a457:; BB(0x0045a457);
    /* 0045a457: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a45a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a45b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a45e: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a461: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x45a466u); f_0045a759();
    /* 0045a466: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a469: jne 0x45a473 */ if (!fZ) goto L_0045a473;
L_0045a46b:; BB(0x0045a46b);
    /* 0045a46b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a46e: jmp 0x45a5e6 */ goto L_0045a5e6;
L_0045a473:; BB(0x0045a473);
    /* 0045a473: jmp 0x45a43e */ goto L_0045a43e;
L_0045a475:; BB(0x0045a475);
    /* 0045a475: jmp 0x45a5e3 */ goto L_0045a5e3;
L_0045a47a:; BB(0x0045a47a);
    /* 0045a47a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a481: jmp 0x45a48c */ goto L_0045a48c;
L_0045a483:; BB(0x0045a483);
    /* 0045a483: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a486: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a489: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0045a48c:; BB(0x0045a48c);
    /* 0045a48c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a48f: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a495: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a49au); f_005dd4d2();
    /* 0045a49a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a49d: jge 0x45a4c0 */ if ((fS==fO)) goto L_0045a4c0;
L_0045a49f:; BB(0x0045a49f);
    /* 0045a49f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a4a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a4a6: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a4ac: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x45a4b1u); f_0045a759();
    /* 0045a4b1: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a4b4: jne 0x45a4be */ if (!fZ) goto L_0045a4be;
L_0045a4b6:; BB(0x0045a4b6);
    /* 0045a4b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a4b9: jmp 0x45a5e6 */ goto L_0045a5e6;
L_0045a4be:; BB(0x0045a4be);
    /* 0045a4be: jmp 0x45a483 */ goto L_0045a483;
L_0045a4c0:; BB(0x0045a4c0);
    /* 0045a4c0: jmp 0x45a5e3 */ goto L_0045a5e3;
L_0045a4c5:; BB(0x0045a4c5);
    /* 0045a4c5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a4cc: jmp 0x45a4d7 */ goto L_0045a4d7;
L_0045a4ce:; BB(0x0045a4ce);
    /* 0045a4ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a4d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045a4d4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045a4d7:; BB(0x0045a4d7);
    /* 0045a4d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a4da: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a4e0: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a4e5u); f_005dd4d2();
    /* 0045a4e5: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a4e8: jge 0x45a50b */ if ((fS==fO)) goto L_0045a50b;
L_0045a4ea:; BB(0x0045a4ea);
    /* 0045a4ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a4ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a4f1: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a4f7: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x45a4fcu); f_0045a759();
    /* 0045a4fc: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a4ff: jne 0x45a509 */ if (!fZ) goto L_0045a509;
L_0045a501:; BB(0x0045a501);
    /* 0045a501: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a504: jmp 0x45a5e6 */ goto L_0045a5e6;
L_0045a509:; BB(0x0045a509);
    /* 0045a509: jmp 0x45a4ce */ goto L_0045a4ce;
L_0045a50b:; BB(0x0045a50b);
    /* 0045a50b: jmp 0x45a5e3 */ goto L_0045a5e3;
L_0045a510:; BB(0x0045a510);
    /* 0045a510: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a517: jmp 0x45a522 */ goto L_0045a522;
L_0045a519:; BB(0x0045a519);
    /* 0045a519: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a51c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045a51f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0045a522:; BB(0x0045a522);
    /* 0045a522: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a525: add ecx, 0xa8 */ {  u32 a = r_ecx; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a52b: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a530u); f_005dd4d2();
    /* 0045a530: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a533: jge 0x45a556 */ if ((fS==fO)) goto L_0045a556;
L_0045a535:; BB(0x0045a535);
    /* 0045a535: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a538: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a539: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a53c: add ecx, 0xa8 */ {  u32 a = r_ecx; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a542: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x45a547u); f_0045a759();
    /* 0045a547: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a54a: jne 0x45a554 */ if (!fZ) goto L_0045a554;
L_0045a54c:; BB(0x0045a54c);
    /* 0045a54c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a54f: jmp 0x45a5e6 */ goto L_0045a5e6;
L_0045a554:; BB(0x0045a554);
    /* 0045a554: jmp 0x45a519 */ goto L_0045a519;
L_0045a556:; BB(0x0045a556);
    /* 0045a556: jmp 0x45a5e3 */ goto L_0045a5e3;
L_0045a55b:; BB(0x0045a55b);
    /* 0045a55b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a562: jmp 0x45a56d */ goto L_0045a56d;
L_0045a564:; BB(0x0045a564);
    /* 0045a564: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a567: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a56a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0045a56d:; BB(0x0045a56d);
    /* 0045a56d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a570: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a576: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a57bu); f_005dd4d2();
    /* 0045a57b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a57e: jge 0x45a59e */ if ((fS==fO)) goto L_0045a59e;
L_0045a580:; BB(0x0045a580);
    /* 0045a580: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a583: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a584: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a587: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a58d: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x45a592u); f_0045a759();
    /* 0045a592: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a595: jne 0x45a59c */ if (!fZ) goto L_0045a59c;
L_0045a597:; BB(0x0045a597);
    /* 0045a597: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a59a: jmp 0x45a5e6 */ goto L_0045a5e6;
L_0045a59c:; BB(0x0045a59c);
    /* 0045a59c: jmp 0x45a564 */ goto L_0045a564;
L_0045a59e:; BB(0x0045a59e);
    /* 0045a59e: jmp 0x45a5e3 */ goto L_0045a5e3;
L_0045a5a0:; BB(0x0045a5a0);
    /* 0045a5a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a5a7: jmp 0x45a5b2 */ goto L_0045a5b2;
L_0045a5a9:; BB(0x0045a5a9);
    /* 0045a5a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a5ac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045a5af: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045a5b2:; BB(0x0045a5b2);
    /* 0045a5b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a5b5: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a5bb: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a5c0u); f_005dd4d2();
    /* 0045a5c0: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a5c3: jge 0x45a5e3 */ if ((fS==fO)) goto L_0045a5e3;
L_0045a5c5:; BB(0x0045a5c5);
    /* 0045a5c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a5c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a5c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a5cc: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a5d2: call 0x45a759 */ r_esp -= 4; W32(r_esp, 0x45a5d7u); f_0045a759();
    /* 0045a5d7: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a5da: jne 0x45a5e1 */ if (!fZ) goto L_0045a5e1;
L_0045a5dc:; BB(0x0045a5dc);
    /* 0045a5dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a5df: jmp 0x45a5e6 */ goto L_0045a5e6;
L_0045a5e1:; BB(0x0045a5e1);
    /* 0045a5e1: jmp 0x45a5a9 */ goto L_0045a5a9;
L_0045a5e3:; BB(0x0045a5e3);
    /* 0045a5e3: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0045a5e6:; BB(0x0045a5e6);
    /* 0045a5e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a5e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a5e9: ret 0xc */ FN_RET(0x0045a249); r_esp += 16; return;
}

void f_0045a61c(void) /* FUN_0045a61c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a61c);
    /* 0045a61c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a61d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a61f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a620: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a623: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a626: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x45a62bu); f_005dfbf0();
    /* 0045a62b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a62e: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a631: call 0x45a678 */ r_esp -= 4; W32(r_esp, 0x45a636u); f_0045a678();
    /* 0045a636: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a639: mov dword ptr [eax], 0x6356a4 */ W32((u32)(r_eax), 0x6356a4u);
    /* 0045a63f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a642: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045a645: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0045a648: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a64b: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a64d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a64e: ret 4 */ FN_RET(0x0045a61c); r_esp += 8; return;
}

void f_0045a651(void) /* FUN_0045a651 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a651);
    /* 0045a651: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a652: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a654: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a655: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a658: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a65b: mov dword ptr [eax], 0x6356a4 */ W32((u32)(r_eax), 0x6356a4u);
    /* 0045a661: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a664: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a667: call 0x45a697 */ r_esp -= 4; W32(r_esp, 0x45a66cu); f_0045a697();
    /* 0045a66c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a66f: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x45a674u); f_005dfc0f();
    /* 0045a674: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a676: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a677: ret  */ FN_RET(0x0045a651); r_esp += 4; return;
}

void f_0045a678(void) /* FUN_0045a678 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a678);
    /* 0045a678: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a679: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a67b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a67c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a67f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a682: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x45a687u); f_005dd290();
    /* 0045a687: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a68a: mov dword ptr [eax], 0x6356ac */ W32((u32)(r_eax), 0x6356acu);
    /* 0045a690: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a693: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a695: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a696: ret  */ FN_RET(0x0045a678); r_esp += 4; return;
}

void f_0045a697(void) /* FUN_0045a697 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a697);
    /* 0045a697: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a698: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a69a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a69d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045a6a0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a6a3: mov dword ptr [eax], 0x6356ac */ W32((u32)(r_eax), 0x6356acu);
L_0045a6a9:; BB(0x0045a6a9);
    /* 0045a6a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a6ac: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a6b1u); f_005dd4d2();
    /* 0045a6b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a6b3: je 0x45a701 */ if (fZ) goto L_0045a701;
L_0045a6b5:; BB(0x0045a6b5);
    /* 0045a6b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a6b7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a6ba: call 0x45a787 */ r_esp -= 4; W32(r_esp, 0x45a6bfu); f_0045a787();
    /* 0045a6bf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045a6c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a6c5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045a6c8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a6cb: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0045a6ce: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a6d2: je 0x45a6e5 */ if (fZ) goto L_0045a6e5;
L_0045a6d4:; BB(0x0045a6d4);
    /* 0045a6d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a6d6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a6d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045a6db: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a6de: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x45a6e0u); call_ind(t); }
    /* 0045a6e0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045a6e3: jmp 0x45a6ec */ goto L_0045a6ec;
L_0045a6e5:; BB(0x0045a6e5);
    /* 0045a6e5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0045a6ec:; BB(0x0045a6ec);
    /* 0045a6ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a6ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a6f1: call 0x45a787 */ r_esp -= 4; W32(r_esp, 0x45a6f6u); f_0045a787();
    /* 0045a6f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a6f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a6fa: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x45a6ffu); f_005dd469();
    /* 0045a6ff: jmp 0x45a6a9 */ goto L_0045a6a9;
L_0045a701:; BB(0x0045a701);
    /* 0045a701: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a704: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x45a709u); f_005dd2d3();
    /* 0045a709: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a70b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a70c: ret  */ FN_RET(0x0045a697); r_esp += 4; return;
}

void f_0045a70d(void) /* FUN_0045a70d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a70d);
    /* 0045a70d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a70e: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a710: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a713: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045a716: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a718: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45a71du); f_0048ab58();
    /* 0045a71d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a720: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045a723: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a727: je 0x45a73a */ if (fZ) goto L_0045a73a;
L_0045a729:; BB(0x0045a729);
    /* 0045a729: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045a72c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a72d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a730: call 0x45a61c */ r_esp -= 4; W32(r_esp, 0x45a735u); f_0045a61c();
    /* 0045a735: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045a738: jmp 0x45a741 */ goto L_0045a741;
L_0045a73a:; BB(0x0045a73a);
    /* 0045a73a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0045a741:; BB(0x0045a741);
    /* 0045a741: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a747: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a74a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a74b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a74e: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x45a753u); f_005dd425();
    /* 0045a753: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a755: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a756: ret 4 */ FN_RET(0x0045a70d); r_esp += 8; return;
}

void f_0045a759(void) /* FUN_0045a759 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a759);
    /* 0045a759: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a75a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a75c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a75d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a760: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a763: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x45a768u); f_005dd4d2();
    /* 0045a768: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a76b: jl 0x45a772 */ if ((fS!=fO)) goto L_0045a772;
L_0045a76d:; BB(0x0045a76d);
    /* 0045a76d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a770: jmp 0x45a781 */ goto L_0045a781;
L_0045a772:; BB(0x0045a772);
    /* 0045a772: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045a775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a776: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a779: call 0x45a787 */ r_esp -= 4; W32(r_esp, 0x45a77eu); f_0045a787();
    /* 0045a77e: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_0045a781:; BB(0x0045a781);
    /* 0045a781: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a783: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a784: ret 4 */ FN_RET(0x0045a759); r_esp += 8; return;
}

void f_0045a787(void) /* FUN_0045a787 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a787);
    /* 0045a787: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a788: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a78a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a78b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a78e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045a791: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a792: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a795: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x45a79au); f_005dd560();
    /* 0045a79a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a79c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a79d: ret 4 */ FN_RET(0x0045a787); r_esp += 8; return;
}

void f_0045a7a0(void) /* FUN_0045a7a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a7a0);
    /* 0045a7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a7a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a7a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a7a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a7aa: call 0x459794 */ r_esp -= 4; W32(r_esp, 0x45a7afu); f_00459794();
    /* 0045a7af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045a7b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045a7b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a7b7: je 0x45a7c5 */ if (fZ) goto L_0045a7c5;
L_0045a7b9:; BB(0x0045a7b9);
    /* 0045a7b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a7bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a7bd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x45a7c2u); f_0048ac1b();
    /* 0045a7c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045a7c5:; BB(0x0045a7c5);
    /* 0045a7c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a7c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a7cb: ret 4 */ FN_RET(0x0045a7a0); r_esp += 8; return;
}

void f_0045a7d0(void) /* FUN_0045a7d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a7d0);
    /* 0045a7d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a7d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a7d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a7d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a7d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a7da: call 0x45a651 */ r_esp -= 4; W32(r_esp, 0x45a7dfu); f_0045a651();
    /* 0045a7df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045a7e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045a7e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a7e7: je 0x45a7f5 */ if (fZ) goto L_0045a7f5;
L_0045a7e9:; BB(0x0045a7e9);
    /* 0045a7e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a7ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a7ed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x45a7f2u); f_0048ac1b();
    /* 0045a7f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045a7f5:; BB(0x0045a7f5);
    /* 0045a7f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a7f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a7fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a7fb: ret 4 */ FN_RET(0x0045a7d0); r_esp += 8; return;
}

void f_0045a800(void) /* FUN_0045a800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a800);
    /* 0045a800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a801: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a80a: call 0x45a697 */ r_esp -= 4; W32(r_esp, 0x45a80fu); f_0045a697();
    /* 0045a80f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045a812: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045a815: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a817: je 0x45a825 */ if (fZ) goto L_0045a825;
L_0045a819:; BB(0x0045a819);
    /* 0045a819: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a81c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a81d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x45a822u); f_0048ac1b();
    /* 0045a822: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045a825:; BB(0x0045a825);
    /* 0045a825: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a828: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a82a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a82b: ret 4 */ FN_RET(0x0045a800); r_esp += 8; return;
}

void f_0045a830(void) /* FUN_0045a830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a830);
    /* 0045a830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a831: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a834: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a835: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a838: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a83b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a83e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0045a840: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a843: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045a846: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0045a849: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a84c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0045a84f: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0045a852: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a855: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a858: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0045a85a: imul esi, dword ptr [ecx + 0x10] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ecx+0x10u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045a85e: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045a861: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a864: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a867: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0045a869: imul ecx, dword ptr [eax + 0x10] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x10u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045a86d: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a870: mov eax, ecx */ r_eax = r_ecx;
    /* 0045a872: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045a873: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045a875: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045a877: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045a87a: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045a87c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045a87e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0045a880: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a883: mov dword ptr [edx + 8], esi */ W32((u32)(r_edx+0x8u), r_esi);
    /* 0045a886: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a88a: je 0x45a89a */ if (fZ) goto L_0045a89a;
L_0045a88c:; BB(0x0045a88c);
    /* 0045a88c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a88f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a892: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0045a895: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0045a898: jmp 0x45a8a8 */ goto L_0045a8a8;
L_0045a89a:; BB(0x0045a89a);
    /* 0045a89a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a89d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0045a8a0: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a8a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a8a5: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
L_0045a8a8:; BB(0x0045a8a8);
    /* 0045a8a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a8ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a8ae: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0045a8b1: imul edx, dword ptr [ecx + 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0x8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045a8b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a8b6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45a8bbu); f_0048ab58();
    /* 0045a8bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a8be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a8c1: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0045a8c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a8c7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045a8ca: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045a8cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a8d0: imul eax, dword ptr [ecx + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045a8d4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a8d7: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0045a8da: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a8dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a8df: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0045a8e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a8e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045a8e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a8e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a8e9: ret 0x10 */ FN_RET(0x0045a830); r_esp += 20; return;
}

void f_0045a8ec(void) /* FUN_0045a8ec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a8ec);
    /* 0045a8ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a8ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a8ef: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a8f2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045a8f5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a8f8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0045a8fb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a8fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a901: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a902: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x45a907u); f_0048ac1b();
    /* 0045a907: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a90a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a90c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a90d: ret  */ FN_RET(0x0045a8ec); r_esp += 4; return;
}

void f_0045a90e(void) /* FUN_0045a90e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a90e);
    /* 0045a90e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a90f: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a911: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a912: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a915: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a918: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0045a91b: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a91d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a91e: ret  */ FN_RET(0x0045a90e); r_esp += 4; return;
}

void f_0045a91f(void) /* FUN_0045a91f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a91f);
    /* 0045a91f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a920: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a922: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a923: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a926: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a929: call 0x45a90e */ r_esp -= 4; W32(r_esp, 0x45a92eu); f_0045a90e();
    /* 0045a92e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a931: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045a934: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a937: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0045a93a: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045a93c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a93e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a93f: ret 4 */ FN_RET(0x0045a91f); r_esp += 8; return;
}

void f_0045a942(void) /* FUN_0045a942 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a942);
    /* 0045a942: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a943: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a945: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a946: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a949: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a94c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045a94e: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a950: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a951: ret  */ FN_RET(0x0045a942); r_esp += 4; return;
}

void f_0045a952(void) /* FUN_0045a952 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a952);
    /* 0045a952: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a953: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a955: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a956: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a959: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a95c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0045a95f: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a961: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a962: ret  */ FN_RET(0x0045a952); r_esp += 4; return;
}

void f_0045a963(void) /* FUN_0045a963 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a963);
    /* 0045a963: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a964: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a966: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a967: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a96a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a96d: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0045a970: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a972: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a973: ret  */ FN_RET(0x0045a963); r_esp += 4; return;
}

void f_0045a974(void) /* FUN_0045a974 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a974);
    /* 0045a974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a975: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a977: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a97a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a97b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045a97e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a981: call 0x45a942 */ r_esp -= 4; W32(r_esp, 0x45a986u); f_0045a942();
    /* 0045a986: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a989: jge 0x45a998 */ if ((fS==fO)) goto L_0045a998;
L_0045a98b:; BB(0x0045a98b);
    /* 0045a98b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a98e: call 0x45a952 */ r_esp -= 4; W32(r_esp, 0x45a993u); f_0045a952();
    /* 0045a993: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a996: jl 0x45a99d */ if ((fS!=fO)) goto L_0045a99d;
L_0045a998:; BB(0x0045a998);
    /* 0045a998: jmp 0x45aa59 */ goto L_0045aa59;
L_0045a99d:; BB(0x0045a99d);
    /* 0045a99d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045a9a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a9a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a9a4: call 0x45a91f */ r_esp -= 4; W32(r_esp, 0x45a9a9u); f_0045a91f();
    /* 0045a9a9: mov esi, eax */ r_esi = r_eax;
    /* 0045a9ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a9ae: call 0x45a963 */ r_esp -= 4; W32(r_esp, 0x45a9b3u); f_0045a963();
    /* 0045a9b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a9b6: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045a9b9: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045a9bb: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0045a9be: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0045a9c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a9c2: call 0x6088b5 */ r_esp -= 4; W32(r_esp, 0x45a9c7u); f_006088b5();
    /* 0045a9c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a9ca: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045a9cd: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0045a9d0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045a9d3: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a9d7: je 0x45a9e7 */ if (fZ) goto L_0045a9e7;
L_0045a9d9:; BB(0x0045a9d9);
    /* 0045a9d9: cmp dword ptr [ebp - 0x10], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a9dd: je 0x45aa23 */ if (fZ) goto L_0045aa23;
L_0045a9df:; BB(0x0045a9df);
    /* 0045a9df: cmp dword ptr [ebp - 0x10], 0x20 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a9e3: je 0x45aa3f */ if (fZ) goto L_0045aa3f;
L_0045a9e5:; BB(0x0045a9e5);
    /* 0045a9e5: jmp 0x45aa59 */ goto L_0045aa59;
L_0045a9e7:; BB(0x0045a9e7);
    /* 0045a9e7: mov cl, byte ptr [ebp + 0x13] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x13u))) & 0xffu);
    /* 0045a9ea: mov byte ptr [ebp - 0x14], cl */ W8((u32)(r_ebp+0xffffffecu), (u8)r_ecx);
    /* 0045a9ed: cmp byte ptr [ebp - 0x14], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0045a9f1: je 0x45a9fb */ if (fZ) goto L_0045a9fb;
L_0045a9f3:; BB(0x0045a9f3);
    /* 0045a9f3: cmp byte ptr [ebp - 0x14], 0xff */ {  u32 a = R8((u32)(r_ebp+0xffffffecu)); u32 b = 0xffu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0045a9f7: je 0x45a9fd */ if (fZ) goto L_0045a9fd;
L_0045a9f9:; BB(0x0045a9f9);
    /* 0045a9f9: jmp 0x45aa07 */ goto L_0045aa07;
L_0045a9fb:; BB(0x0045a9fb);
    /* 0045a9fb: jmp 0x45aa21 */ goto L_0045aa21;
L_0045a9fd:; BB(0x0045a9fd);
    /* 0045a9fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aa00: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045aa03: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0045aa05: jmp 0x45aa21 */ goto L_0045aa21;
L_0045aa07:; BB(0x0045aa07);
    /* 0045aa07: mov ecx, dword ptr [ebp + 0x13] */ r_ecx = R32((u32)(r_ebp+0x13u));
    /* 0045aa0a: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045aa10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa11: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045aa14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aa18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa19: call 0x609267 */ r_esp -= 4; W32(r_esp, 0x45aa1eu); f_00609267();
    /* 0045aa1e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045aa21:; BB(0x0045aa21);
    /* 0045aa21: jmp 0x45aa59 */ goto L_0045aa59;
L_0045aa23:; BB(0x0045aa23);
    /* 0045aa23: mov ecx, dword ptr [ebp + 0x13] */ r_ecx = R32((u32)(r_ebp+0x13u));
    /* 0045aa26: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045aa2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa2d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045aa30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa31: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aa34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa35: call 0x609312 */ r_esp -= 4; W32(r_esp, 0x45aa3au); f_00609312();
    /* 0045aa3a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045aa3d: jmp 0x45aa59 */ goto L_0045aa59;
L_0045aa3f:; BB(0x0045aa3f);
    /* 0045aa3f: mov ecx, dword ptr [ebp + 0x13] */ r_ecx = R32((u32)(r_ebp+0x13u));
    /* 0045aa42: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045aa48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa49: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045aa4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aa50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa51: call 0x6093e2 */ r_esp -= 4; W32(r_esp, 0x45aa56u); f_006093e2();
    /* 0045aa56: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045aa59:; BB(0x0045aa59);
    /* 0045aa59: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045aa5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045aa5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045aa5d: ret 0x10 */ FN_RET(0x0045a974); r_esp += 20; return;
}

void f_0045aa60(void) /* FUN_0045aa60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045aa60);
    /* 0045aa60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa61: mov ebp, esp */ r_ebp = r_esp;
    /* 0045aa63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0045aa67:; BB(0x0045aa67);
    /* 0045aa67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045aa6a: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045aa6d: jg 0x45aa92 */ if ((!fZ&&fS==fO)) goto L_0045aa92;
L_0045aa6f:; BB(0x0045aa6f);
    /* 0045aa6f: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0045aa72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa73: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0045aa76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa77: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0045aa7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa7b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045aa7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aa82: call 0x45a974 */ r_esp -= 4; W32(r_esp, 0x45aa87u); f_0045a974();
    /* 0045aa87: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045aa8a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045aa8d: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0045aa90: jmp 0x45aa67 */ goto L_0045aa67;
L_0045aa92:; BB(0x0045aa92);
    /* 0045aa92: mov esp, ebp */ r_esp = r_ebp;
    /* 0045aa94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045aa95: ret 0x14 */ FN_RET(0x0045aa60); r_esp += 24; return;
}

void f_0045aa98(void) /* FUN_0045aa98 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045aa98);
    /* 0045aa98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa99: mov ebp, esp */ r_ebp = r_esp;
    /* 0045aa9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa9c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0045aa9f:; BB(0x0045aa9f);
    /* 0045aa9f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045aaa2: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045aaa5: jg 0x45aaca */ if ((!fZ&&fS==fO)) goto L_0045aaca;
L_0045aaa7:; BB(0x0045aaa7);
    /* 0045aaa7: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0045aaaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aaab: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0045aaae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aaaf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045aab2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045aab3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045aab6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aab7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aaba: call 0x45a974 */ r_esp -= 4; W32(r_esp, 0x45aabfu); f_0045a974();
    /* 0045aabf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045aac2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045aac5: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0045aac8: jmp 0x45aa9f */ goto L_0045aa9f;
L_0045aaca:; BB(0x0045aaca);
    /* 0045aaca: mov esp, ebp */ r_esp = r_ebp;
    /* 0045aacc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045aacd: ret 0x14 */ FN_RET(0x0045aa98); r_esp += 24; return;
}

void f_0045aad0(void) /* FUN_0045aad0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045aad0);
    /* 0045aad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045aad1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045aad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0045aad7:; BB(0x0045aad7);
    /* 0045aad7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045aada: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045aadd: jg 0x45ab06 */ if ((!fZ&&fS==fO)) goto L_0045ab06;
L_0045aadf:; BB(0x0045aadf);
    /* 0045aadf: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0045aae2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aae3: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0045aae6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aae7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045aaea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045aaeb: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045aaee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aaef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045aaf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aaf3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aaf6: call 0x45aa60 */ r_esp -= 4; W32(r_esp, 0x45aafbu); f_0045aa60();
    /* 0045aafb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045aafe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045ab01: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0045ab04: jmp 0x45aad7 */ goto L_0045aad7;
L_0045ab06:; BB(0x0045ab06);
    /* 0045ab06: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ab08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ab09: ret 0x18 */ FN_RET(0x0045aad0); r_esp += 28; return;
}

void f_0045ab0c(void) /* FUN_0045ab0c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ab0c);
    /* 0045ab0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ab0d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ab0f: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ab12: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ab13: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0045ab16: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045ab19: call 0x409912 */ r_esp -= 4; W32(r_esp, 0x45ab1eu); f_00409912();
    /* 0045ab1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ab20: jne 0x45ab27 */ if (!fZ) goto L_0045ab27;
L_0045ab22:; BB(0x0045ab22);
    /* 0045ab22: jmp 0x45ac25 */ goto L_0045ac25;
L_0045ab27:; BB(0x0045ab27);
    /* 0045ab27: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0045ab2e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0045ab35: jmp 0x45ab43 */ goto L_0045ab43;
L_0045ab37:; BB(0x0045ab37);
    /* 0045ab37: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0045ab3a: fadd qword ptr [0x6356b0] */ ST(0) = ST(0) + R_F64((u32)(0x6356b0u));
    /* 0045ab40: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_0045ab43:; BB(0x0045ab43);
    /* 0045ab43: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045ab46: call 0x40930c */ r_esp -= 4; W32(r_esp, 0x45ab4bu); f_0040930c();
    /* 0045ab4b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0045ab4e: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0045ab51: fmul qword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0x14u));
    /* 0045ab54: fcomp qword ptr [ebp - 0x18] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe8u))); FPOP();
    /* 0045ab57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045ab59: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045ab5c: jne 0x45ac25 */ if (!fZ) goto L_0045ac25;
L_0045ab62:; BB(0x0045ab62);
    /* 0045ab62: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045ab65: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045ab68: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ab6b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0045ab6e: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0045ab71: fdiv qword ptr [ebp + 0x14] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0x14u));
    /* 0045ab74: fstp qword ptr [ebp - 0x2c] */ W_F64((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0045ab77: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0045ab7e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045ab85: jmp 0x45ab93 */ goto L_0045ab93;
L_0045ab87:; BB(0x0045ab87);
    /* 0045ab87: fld qword ptr [ebp - 0xc] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff4u)));
    /* 0045ab8a: fadd qword ptr [0x6356b0] */ ST(0) = ST(0) + R_F64((u32)(0x6356b0u));
    /* 0045ab90: fstp qword ptr [ebp - 0xc] */ W_F64((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
L_0045ab93:; BB(0x0045ab93);
    /* 0045ab93: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045ab96: call 0x4092f8 */ r_esp -= 4; W32(r_esp, 0x45ab9bu); f_004092f8();
    /* 0045ab9b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0045ab9e: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 0045aba1: fmul qword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xcu));
    /* 0045aba4: fcomp qword ptr [ebp - 0xc] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff4u))); FPOP();
    /* 0045aba7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045aba9: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045abac: jne 0x45ac20 */ if (!fZ) goto L_0045ac20;
L_0045abae:; BB(0x0045abae);
    /* 0045abae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045abb1: call 0x4098fe */ r_esp -= 4; W32(r_esp, 0x45abb6u); f_004098fe();
    /* 0045abb6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0045abb9: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 0045abbc: fmul qword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe0u));
    /* 0045abbf: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045abc2: fild dword ptr [edx + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x10u)));
    /* 0045abc5: fmul qword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff4u));
    /* 0045abc8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045abca: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x45abcfu); f_00624144();
    /* 0045abcf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045abd2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045abd5: call 0x409912 */ r_esp -= 4; W32(r_esp, 0x45abdau); f_00409912();
    /* 0045abda: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045abdd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045abe0: fld qword ptr [ebp - 0x2c] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd4u)));
    /* 0045abe3: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x45abe8u); f_00624144();
    /* 0045abe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045abe9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045abec: call 0x45a91f */ r_esp -= 4; W32(r_esp, 0x45abf1u); f_0045a91f();
    /* 0045abf1: mov esi, eax */ r_esi = r_eax;
    /* 0045abf3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045abf6: call 0x45a963 */ r_esp -= 4; W32(r_esp, 0x45abfbu); f_0045a963();
    /* 0045abfb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0045abfe: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 0045ac01: fmul qword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff4u));
    /* 0045ac04: fdiv qword ptr [ebp + 0xc] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xcu));
    /* 0045ac07: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x45ac0cu); f_00624144();
    /* 0045ac0c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045ac0e: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 0045ac11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ac14: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045ac17: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045ac19: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0045ac1b: jmp 0x45ab87 */ goto L_0045ab87;
L_0045ac20:; BB(0x0045ac20);
    /* 0045ac20: jmp 0x45ab37 */ goto L_0045ab37;
L_0045ac25:; BB(0x0045ac25);
    /* 0045ac25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045ac26: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ac28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ac29: ret 0x14 */ FN_RET(0x0045ab0c); r_esp += 24; return;
}

void f_0045ac30(void) /* FUN_0045ac30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ac30);
    /* 0045ac30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac31: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ac33: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ac36: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0045ac39: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ac3c: call 0x5d9b90 */ r_esp -= 4; W32(r_esp, 0x45ac41u); f_005d9b90();
    /* 0045ac41: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ac44: mov dword ptr [eax], 0x6356bc */ W32((u32)(r_eax), 0x6356bcu);
    /* 0045ac4a: cmp dword ptr [0x6f6f10], 0 */ {  u32 a = R32((u32)(0x6f6f10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ac51: jne 0x45ac6d */ if (!fZ) goto L_0045ac6d;
L_0045ac53:; BB(0x0045ac53);
    /* 0045ac53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac55: push 0x67b0b0 */ { u32 v = 0x67b0b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac5a: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0045ac60: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0045ac63: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x45ac68u); f_0061ba62();
    /* 0045ac68: mov dword ptr [0x6f6f10], eax */ W32((u32)(0x6f6f10u), r_eax);
L_0045ac6d:; BB(0x0045ac6d);
    /* 0045ac6d: cmp dword ptr [0x6f6f04], 0 */ {  u32 a = R32((u32)(0x6f6f04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ac74: je 0x45ac9e */ if (fZ) goto L_0045ac9e;
L_0045ac76:; BB(0x0045ac76);
    /* 0045ac76: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac78: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0045ac7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac7c: push 0x67b0c4 */ { u32 v = 0x67b0c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac81: push 0x67b0c8 */ { u32 v = 0x67b0c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac86: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0045ac8b: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0045ac8e: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 0045ac94: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0045ac97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045ac99: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x45ac9cu); call_ind(t); }
    /* 0045ac9c: jmp 0x45acc5 */ goto L_0045acc5;
L_0045ac9e:; BB(0x0045ac9e);
    /* 0045ac9e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aca0: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0045aca3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045aca4: push 0x67b0d4 */ { u32 v = 0x67b0d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aca9: push 0x67b0d8 */ { u32 v = 0x67b0d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045acae: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0045acb4: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0045acb7: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 0045acbd: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0045acc0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045acc2: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x45acc5u); call_ind(t); }
L_0045acc5:; BB(0x0045acc5);
    /* 0045acc5: push 0x67b0e4 */ { u32 v = 0x67b0e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045acca: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0045accd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045acce: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x45acd3u); f_006325b0();
    /* 0045acd3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045acd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045acd8: je 0x45acec */ if (fZ) goto L_0045acec;
L_0045acda:; BB(0x0045acda);
    /* 0045acda: cmp dword ptr [0x6f6f10], 0 */ {  u32 a = R32((u32)(0x6f6f10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ace1: jne 0x45acec */ if (!fZ) goto L_0045acec;
L_0045ace3:; BB(0x0045ace3);
    /* 0045ace3: cmp dword ptr [0x6f6f14], 0 */ {  u32 a = R32((u32)(0x6f6f14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045acea: je 0x45acf8 */ if (fZ) goto L_0045acf8;
L_0045acec:; BB(0x0045acec);
    /* 0045acec: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045acef: mov dword ptr [ecx + 0x34], 0x2328 */ W32((u32)(r_ecx+0x34u), 0x2328u);
    /* 0045acf6: jmp 0x45ad02 */ goto L_0045ad02;
L_0045acf8:; BB(0x0045acf8);
    /* 0045acf8: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
#if defined(__EMSCRIPTEN__)
    /* 0045acfb: mov dword ptr [edx + 0x34], 0x232a */ W32((u32)(r_edx+0x34u), 0x232au);
#else
    /* 0045acfb: mov dword ptr [edx + 0x34], 0x232a */ W32((u32)(r_edx+0x34u), 0x232au);
#endif
L_0045ad02:; BB(0x0045ad02);
    /* 0045ad02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad04: push 0x67b0e8 */ { u32 v = 0x67b0e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad09: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0045ad0e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0045ad11: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x45ad16u); f_0061ba62();
    /* 0045ad16: mov dword ptr [0x6f6980], eax */ W32((u32)(0x6f6980u), r_eax);
    /* 0045ad1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad1d: push 0x67b0f8 */ { u32 v = 0x67b0f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad22: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0045ad28: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0045ad2b: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x45ad30u); f_0061ba62();
    /* 0045ad30: mov dword ptr [0x6f698c], eax */ W32((u32)(0x6f698cu), r_eax);
    /* 0045ad35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad37: push 0x67b104 */ { u32 v = 0x67b104u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad3c: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 0045ad42: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0045ad45: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x45ad4au); f_0061ba62();
    /* 0045ad4a: mov dword ptr [0x6f6990], eax */ W32((u32)(0x6f6990u), r_eax);
    /* 0045ad4f: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ad56: je 0x45ad64 */ if (fZ) goto L_0045ad64;
L_0045ad58:; BB(0x0045ad58);
    /* 0045ad58: mov dword ptr [0x6f6984], 1 */ W32((u32)(0x6f6984u), 0x1u);
    /* 0045ad62: jmp 0x45ad7d */ goto L_0045ad7d;
L_0045ad64:; BB(0x0045ad64);
    /* 0045ad64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad66: push 0x67b110 */ { u32 v = 0x67b110u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad6b: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0045ad70: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0045ad73: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x45ad78u); f_0061ba62();
    /* 0045ad78: mov dword ptr [0x6f6984], eax */ W32((u32)(0x6f6984u), r_eax);
L_0045ad7d:; BB(0x0045ad7d);
    /* 0045ad7d: mov dword ptr [0x6f6988], 0 */ W32((u32)(0x6f6988u), 0x0u);
    /* 0045ad87: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ad8a: mov dword ptr [ecx + 0x12ea8], 5 */ W32((u32)(r_ecx+0x12ea8u), 0x5u);
    /* 0045ad94: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ad97: mov dword ptr [edx + 0x12eac], 0 */ W32((u32)(r_edx+0x12eacu), 0x0u);
    /* 0045ada1: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ada4: mov dword ptr [eax + 0x12eb0], 3 */ W32((u32)(r_eax+0x12eb0u), 0x3u);
    /* 0045adae: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045adb1: mov dword ptr [ecx + 0x12eb4], 0 */ W32((u32)(r_ecx+0x12eb4u), 0x0u);
    /* 0045adbb: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045adbe: mov dword ptr [edx + 0x12eb8], 0 */ W32((u32)(r_edx+0x12eb8u), 0x0u);
    /* 0045adc8: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045adcb: mov dword ptr [eax + 0x12ebc], 3 */ W32((u32)(r_eax+0x12ebcu), 0x3u);
    /* 0045add5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045add8: mov dword ptr [ecx + 0x12ec0], 3 */ W32((u32)(r_ecx+0x12ec0u), 0x3u);
    /* 0045ade2: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ade5: mov dword ptr [edx + 0x12ec4], 0 */ W32((u32)(r_edx+0x12ec4u), 0x0u);
    /* 0045adef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045adf6: jmp 0x45ae01 */ goto L_0045ae01;
L_0045adf8:; BB(0x0045adf8);
    /* 0045adf8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045adfb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045adfe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045ae01:; BB(0x0045ae01);
    /* 0045ae01: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ae05: jge 0x45ae17 */ if ((fS==fO)) goto L_0045ae17;
L_0045ae07:; BB(0x0045ae07);
    /* 0045ae07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ae0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae0d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ae10: call 0x45b9d1 */ r_esp -= 4; W32(r_esp, 0x45ae15u); f_0045b9d1();
    /* 0045ae15: jmp 0x45adf8 */ goto L_0045adf8;
L_0045ae17:; BB(0x0045ae17);
    /* 0045ae17: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ae1a: call 0x45dda2 */ r_esp -= 4; W32(r_esp, 0x45ae1fu); f_0045dda2();
    /* 0045ae1f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ae22: mov dword ptr [edx + 0x12ea4], 0 */ W32((u32)(r_edx+0x12ea4u), 0x0u);
    /* 0045ae2c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ae2f: call 0x460b14 */ r_esp -= 4; W32(r_esp, 0x45ae34u); f_00460b14();
    /* 0045ae34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae36: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ae39: call 0x460d2a */ r_esp -= 4; W32(r_esp, 0x45ae3eu); f_00460d2a();
    /* 0045ae3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae40: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ae43: call 0x460d2a */ r_esp -= 4; W32(r_esp, 0x45ae48u); f_00460d2a();
    /* 0045ae48: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae4a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ae4d: call 0x460d2a */ r_esp -= 4; W32(r_esp, 0x45ae52u); f_00460d2a();
    /* 0045ae52: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae54: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ae57: call 0x460d2a */ r_esp -= 4; W32(r_esp, 0x45ae5cu); f_00460d2a();
    /* 0045ae5c: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae5e: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ae61: call 0x460d2a */ r_esp -= 4; W32(r_esp, 0x45ae66u); f_00460d2a();
    /* 0045ae66: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ae69: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0045ae6c: add ecx, 0xc8 */ {  u32 a = r_ecx; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045ae72: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ae75: mov dword ptr [edx + 0x12ea4], ecx */ W32((u32)(r_edx+0x12ea4u), r_ecx);
    /* 0045ae7b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ae7e: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ae80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ae81: ret  */ FN_RET(0x0045ac30); r_esp += 4; return;
}

void f_0045ae82(void) /* FUN_0045ae82 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ae82);
    /* 0045ae82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae83: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ae85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045ae89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ae8c: mov dword ptr [eax], 0x6356bc */ W32((u32)(r_eax), 0x6356bcu);
    /* 0045ae92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ae95: call 0x5d9cf9 */ r_esp -= 4; W32(r_esp, 0x45ae9au); f_005d9cf9();
    /* 0045ae9a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ae9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ae9d: ret  */ FN_RET(0x0045ae82); r_esp += 4; return;
}

void f_0045ae9e(void) /* FUN_0045ae9e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ae9e);
    /* 0045ae9e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae9f: mov ebp, esp */ r_ebp = r_esp;
    /* 0045aea1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045aea4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045aea7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045aeaa: call 0x5d9f89 */ r_esp -= 4; W32(r_esp, 0x45aeafu); f_005d9f89();
    /* 0045aeaf: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045aeb6: jne 0x45b144 */ if (!fZ) goto L_0045b144;
L_0045aebc:; BB(0x0045aebc);
    /* 0045aebc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aebe: push 0x64cad8 */ { u32 v = 0x64cad8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aec3: push 0x64caa8 */ { u32 v = 0x64caa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aec8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aeca: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045aecd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0045aed0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aed1: call 0x625a50 */ r_esp -= 4; W32(r_esp, 0x45aed6u); f_00625a50();
    /* 0045aed6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045aed9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045aedc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045aee0: je 0x45aeea */ if (fZ) goto L_0045aeea;
L_0045aee2:; BB(0x0045aee2);
    /* 0045aee2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aee5: call 0x44ac76 */ r_esp -= 4; W32(r_esp, 0x45aeeau); f_0044ac76();
L_0045aeea:; BB(0x0045aeea);
    /* 0045aeea: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045aeed: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045aef0: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 0045aef3: cmp ecx, dword ptr [eax + 0x12ea4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x12ea4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045aef9: jle 0x45b144 */ if ((fZ||fS!=fO)) goto L_0045b144;
L_0045aeff:; BB(0x0045aeff);
    /* 0045aeff: mov edx, dword ptr [0x6f6994] */ r_edx = R32((u32)(0x6f6994u));
    /* 0045af05: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045af08: mov dword ptr [0x6f6994], edx */ W32((u32)(0x6f6994u), r_edx);
    /* 0045af0e: cmp dword ptr [0x6f6994], 0xc8 */ {  u32 a = R32((u32)(0x6f6994u)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045af18: jl 0x45af39 */ if ((fS!=fO)) goto L_0045af39;
L_0045af1a:; BB(0x0045af1a);
    /* 0045af1a: mov dword ptr [0x6f6994], 0 */ W32((u32)(0x6f6994u), 0x0u);
    /* 0045af24: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045af27: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0045af2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045af2b: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 0045af31: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0045af34: call 0x5b9cd5 */ r_esp -= 4; W32(r_esp, 0x45af39u); f_005b9cd5();
L_0045af39:; BB(0x0045af39);
    /* 0045af39: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045af3c: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0045af3f: add ecx, 0xc8 */ {  u32 a = r_ecx; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045af45: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045af48: mov dword ptr [edx + 0x12ea4], ecx */ W32((u32)(r_edx+0x12ea4u), r_ecx);
    /* 0045af4e: push 0x1f40 */ { u32 v = 0x1f40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af53: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45af58u); f_0060ee31();
    /* 0045af58: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045af5b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045af5e: cmp dword ptr [ebp - 8], 0x62 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045af62: jne 0x45af70 */ if (!fZ) goto L_0045af70;
L_0045af64:; BB(0x0045af64);
    /* 0045af64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045af69: call 0x460d2a */ r_esp -= 4; W32(r_esp, 0x45af6eu); f_00460d2a();
    /* 0045af6e: jmp 0x45afbe */ goto L_0045afbe;
L_0045af70:; BB(0x0045af70);
    /* 0045af70: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0045af72: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45af77u); f_0060ee31();
    /* 0045af77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045af7a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045af7d: mov edx, dword ptr [ecx + 0x12e90] */ r_edx = R32((u32)(r_ecx+0x12e90u));
    /* 0045af83: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045af85: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045af88: mov dword ptr [eax + 0x12e90], edx */ W32((u32)(r_eax+0x12e90u), r_edx);
    /* 0045af8e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045af91: cmp dword ptr [ecx + 0x12e90], 0x5e69ec0 */ {  u32 a = R32((u32)(r_ecx+0x12e90u)); u32 b = 0x5e69ec0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045af9b: jge 0x45afab */ if ((fS==fO)) goto L_0045afab;
L_0045af9d:; BB(0x0045af9d);
    /* 0045af9d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045afa0: mov eax, dword ptr [edx + 0x12e90] */ r_eax = R32((u32)(r_edx+0x12e90u));
    /* 0045afa6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045afa9: jmp 0x45afb2 */ goto L_0045afb2;
L_0045afab:; BB(0x0045afab);
    /* 0045afab: mov dword ptr [ebp - 0x10], 0x5e69ec0 */ W32((u32)(r_ebp+0xfffffff0u), 0x5e69ec0u);
L_0045afb2:; BB(0x0045afb2);
    /* 0045afb2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045afb5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045afb8: mov dword ptr [ecx + 0x12e90], edx */ W32((u32)(r_ecx+0x12e90u), r_edx);
L_0045afbe:; BB(0x0045afbe);
    /* 0045afbe: cmp dword ptr [ebp - 8], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045afc2: jne 0x45afd0 */ if (!fZ) goto L_0045afd0;
L_0045afc4:; BB(0x0045afc4);
    /* 0045afc4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045afc6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045afc9: call 0x460d2a */ r_esp -= 4; W32(r_esp, 0x45afceu); f_00460d2a();
    /* 0045afce: jmp 0x45b01e */ goto L_0045b01e;
L_0045afd0:; BB(0x0045afd0);
    /* 0045afd0: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0045afd2: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45afd7u); f_0060ee31();
    /* 0045afd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045afda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045afdd: mov edx, dword ptr [ecx + 0x12e94] */ r_edx = R32((u32)(r_ecx+0x12e94u));
    /* 0045afe3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045afe5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045afe8: mov dword ptr [eax + 0x12e94], edx */ W32((u32)(r_eax+0x12e94u), r_edx);
    /* 0045afee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045aff1: cmp dword ptr [ecx + 0x12e94], 0x5e69ec0 */ {  u32 a = R32((u32)(r_ecx+0x12e94u)); u32 b = 0x5e69ec0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045affb: jge 0x45b00b */ if ((fS==fO)) goto L_0045b00b;
L_0045affd:; BB(0x0045affd);
    /* 0045affd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b000: mov eax, dword ptr [edx + 0x12e94] */ r_eax = R32((u32)(r_edx+0x12e94u));
    /* 0045b006: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045b009: jmp 0x45b012 */ goto L_0045b012;
L_0045b00b:; BB(0x0045b00b);
    /* 0045b00b: mov dword ptr [ebp - 0x14], 0x5e69ec0 */ W32((u32)(r_ebp+0xffffffecu), 0x5e69ec0u);
L_0045b012:; BB(0x0045b012);
    /* 0045b012: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b015: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b018: mov dword ptr [ecx + 0x12e94], edx */ W32((u32)(r_ecx+0x12e94u), r_edx);
L_0045b01e:; BB(0x0045b01e);
    /* 0045b01e: cmp dword ptr [ebp - 8], 0x17 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b022: jne 0x45b030 */ if (!fZ) goto L_0045b030;
L_0045b024:; BB(0x0045b024);
    /* 0045b024: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b026: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b029: call 0x460d2a */ r_esp -= 4; W32(r_esp, 0x45b02eu); f_00460d2a();
    /* 0045b02e: jmp 0x45b07e */ goto L_0045b07e;
L_0045b030:; BB(0x0045b030);
    /* 0045b030: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b032: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45b037u); f_0060ee31();
    /* 0045b037: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b03a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b03d: mov edx, dword ptr [ecx + 0x12e98] */ r_edx = R32((u32)(r_ecx+0x12e98u));
    /* 0045b043: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045b045: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b048: mov dword ptr [eax + 0x12e98], edx */ W32((u32)(r_eax+0x12e98u), r_edx);
    /* 0045b04e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b051: cmp dword ptr [ecx + 0x12e98], 0x5e69ec0 */ {  u32 a = R32((u32)(r_ecx+0x12e98u)); u32 b = 0x5e69ec0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b05b: jge 0x45b06b */ if ((fS==fO)) goto L_0045b06b;
L_0045b05d:; BB(0x0045b05d);
    /* 0045b05d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b060: mov eax, dword ptr [edx + 0x12e98] */ r_eax = R32((u32)(r_edx+0x12e98u));
    /* 0045b066: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045b069: jmp 0x45b072 */ goto L_0045b072;
L_0045b06b:; BB(0x0045b06b);
    /* 0045b06b: mov dword ptr [ebp - 0x18], 0x5e69ec0 */ W32((u32)(r_ebp+0xffffffe8u), 0x5e69ec0u);
L_0045b072:; BB(0x0045b072);
    /* 0045b072: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b075: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045b078: mov dword ptr [ecx + 0x12e98], edx */ W32((u32)(r_ecx+0x12e98u), r_edx);
L_0045b07e:; BB(0x0045b07e);
    /* 0045b07e: cmp dword ptr [ebp - 8], 0x2d */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b082: jne 0x45b090 */ if (!fZ) goto L_0045b090;
L_0045b084:; BB(0x0045b084);
    /* 0045b084: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b086: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b089: call 0x460d2a */ r_esp -= 4; W32(r_esp, 0x45b08eu); f_00460d2a();
    /* 0045b08e: jmp 0x45b0e1 */ goto L_0045b0e1;
L_0045b090:; BB(0x0045b090);
    /* 0045b090: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b095: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45b09au); f_0060ee31();
    /* 0045b09a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b09d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b0a0: mov edx, dword ptr [ecx + 0x12e9c] */ r_edx = R32((u32)(r_ecx+0x12e9cu));
    /* 0045b0a6: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045b0a8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b0ab: mov dword ptr [eax + 0x12e9c], edx */ W32((u32)(r_eax+0x12e9cu), r_edx);
    /* 0045b0b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b0b4: cmp dword ptr [ecx + 0x12e9c], 0x5e69ec0 */ {  u32 a = R32((u32)(r_ecx+0x12e9cu)); u32 b = 0x5e69ec0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b0be: jge 0x45b0ce */ if ((fS==fO)) goto L_0045b0ce;
L_0045b0c0:; BB(0x0045b0c0);
    /* 0045b0c0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b0c3: mov eax, dword ptr [edx + 0x12e9c] */ r_eax = R32((u32)(r_edx+0x12e9cu));
    /* 0045b0c9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045b0cc: jmp 0x45b0d5 */ goto L_0045b0d5;
L_0045b0ce:; BB(0x0045b0ce);
    /* 0045b0ce: mov dword ptr [ebp - 0x1c], 0x5e69ec0 */ W32((u32)(r_ebp+0xffffffe4u), 0x5e69ec0u);
L_0045b0d5:; BB(0x0045b0d5);
    /* 0045b0d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b0d8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045b0db: mov dword ptr [ecx + 0x12e9c], edx */ W32((u32)(r_ecx+0x12e9cu), r_edx);
L_0045b0e1:; BB(0x0045b0e1);
    /* 0045b0e1: cmp dword ptr [ebp - 8], 0x39 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b0e5: jne 0x45b0f3 */ if (!fZ) goto L_0045b0f3;
L_0045b0e7:; BB(0x0045b0e7);
    /* 0045b0e7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b0e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b0ec: call 0x460d2a */ r_esp -= 4; W32(r_esp, 0x45b0f1u); f_00460d2a();
    /* 0045b0f1: jmp 0x45b144 */ goto L_0045b144;
L_0045b0f3:; BB(0x0045b0f3);
    /* 0045b0f3: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b0f8: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45b0fdu); f_0060ee31();
    /* 0045b0fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b100: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b103: mov edx, dword ptr [ecx + 0x12ea0] */ r_edx = R32((u32)(r_ecx+0x12ea0u));
    /* 0045b109: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045b10b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b10e: mov dword ptr [eax + 0x12ea0], edx */ W32((u32)(r_eax+0x12ea0u), r_edx);
    /* 0045b114: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b117: cmp dword ptr [ecx + 0x12ea0], 0x5e69ec0 */ {  u32 a = R32((u32)(r_ecx+0x12ea0u)); u32 b = 0x5e69ec0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b121: jge 0x45b131 */ if ((fS==fO)) goto L_0045b131;
L_0045b123:; BB(0x0045b123);
    /* 0045b123: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b126: mov eax, dword ptr [edx + 0x12ea0] */ r_eax = R32((u32)(r_edx+0x12ea0u));
    /* 0045b12c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045b12f: jmp 0x45b138 */ goto L_0045b138;
L_0045b131:; BB(0x0045b131);
    /* 0045b131: mov dword ptr [ebp - 0x20], 0x5e69ec0 */ W32((u32)(r_ebp+0xffffffe0u), 0x5e69ec0u);
L_0045b138:; BB(0x0045b138);
    /* 0045b138: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b13b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045b13e: mov dword ptr [ecx + 0x12ea0], edx */ W32((u32)(r_ecx+0x12ea0u), r_edx);
L_0045b144:; BB(0x0045b144);
    /* 0045b144: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b146: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b147: ret  */ FN_RET(0x0045ae9e); r_esp += 4; return;
}

void f_0045b148(void) /* FUN_0045b148 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b148);
    /* 0045b148: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b149: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b14b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b14c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b14f: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b151: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b152: ret 4 */ FN_RET(0x0045b148); r_esp += 8; return;
}

void f_0045b155(void) /* FUN_0045b155 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b155);
    /* 0045b155: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b156: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b158: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b159: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b15c: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b163: je 0x45b175 */ if (fZ) goto L_0045b175;
L_0045b165:; BB(0x0045b165);
    /* 0045b165: cmp dword ptr [ebp + 8], 0x2328 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2328u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b16c: jne 0x45b175 */ if (!fZ) goto L_0045b175;
L_0045b16e:; BB(0x0045b16e);
    /* 0045b16e: mov dword ptr [ebp + 8], 0x2330 */ W32((u32)(r_ebp+0x8u), 0x2330u);
L_0045b175:; BB(0x0045b175);
    /* 0045b175: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045b178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b179: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b17c: call 0x5da0e8 */ r_esp -= 4; W32(r_esp, 0x45b181u); f_005da0e8();
    /* 0045b181: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b183: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b184: ret 4 */ FN_RET(0x0045b155); r_esp += 8; return;
}

void f_0045b187(void) /* FUN_0045b187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b187);
    /* 0045b187: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b188: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b18a: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045b190: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0045b193: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0045b198: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b19c: je 0x45b1ba */ if (fZ) goto L_0045b1ba;
L_0045b19e:; BB(0x0045b19e);
    /* 0045b19e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b1a1: call 0x45cd5a */ r_esp -= 4; W32(r_esp, 0x45b1a6u); f_0045cd5a();
    /* 0045b1a6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045b1a9: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0045b1ac: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0045b1b2: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0045b1b5: call 0x5e60bb */ r_esp -= 4; W32(r_esp, 0x45b1bau); f_005e60bb();
L_0045b1ba:; BB(0x0045b1ba);
    /* 0045b1ba: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 0045b1c0: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0045b1c3: call 0x61d33f */ r_esp -= 4; W32(r_esp, 0x45b1c8u); f_0061d33f();
    /* 0045b1c8: mov dword ptr [0x711158], 1 */ W32((u32)(0x711158u), 0x1u);
    /* 0045b1d2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b1d5: call 0x5da4b1 */ r_esp -= 4; W32(r_esp, 0x45b1dau); f_005da4b1();
    /* 0045b1da: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045b1dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b1de: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b1e1: call 0x5da14d */ r_esp -= 4; W32(r_esp, 0x45b1e6u); f_005da14d();
    /* 0045b1e6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045b1e9: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0045b1ec: cmp dword ptr [ebp - 0x58], 0x232a */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x232au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b1f3: jg 0x45b20e */ if ((!fZ&&fS==fO)) goto L_0045b20e;
L_0045b1f5:; BB(0x0045b1f5);
    /* 0045b1f5: cmp dword ptr [ebp - 0x58], 0x232a */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x232au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b1fc: je 0x45b269 */ if (fZ) goto L_0045b269;
L_0045b1fe:; BB(0x0045b1fe);
    /* 0045b1fe: cmp dword ptr [ebp - 0x58], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045b202: ja 0x45b231 */ if ((!fC&&!fZ)) goto L_0045b231;
L_0045b204:; BB(0x0045b204);
    /* 0045b204: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0045b207: jmp dword ptr [edx*4 + 0x45b733] */ { u32 t = R32((u32)(r_edx*4+0x45b733u)); switch (t) { case 0x45b3efu: goto L_0045b3ef; case 0x45b427u: goto L_0045b427; case 0x45b497u: goto L_0045b497; case 0x45b45fu: goto L_0045b45f; case 0x45b4d8u: goto L_0045b4d8; case 0x45b560u: goto L_0045b560; case 0x45b5a1u: goto L_0045b5a1; case 0x45b5e2u: goto L_0045b5e2; case 0x45b623u: goto L_0045b623; case 0x45b664u: goto L_0045b664; case 0x45b6a2u: goto L_0045b6a2; case 0x45b6e0u: goto L_0045b6e0; case 0x45b3a9u: goto L_0045b3a9; case 0x45b2f6u: goto L_0045b2f6; case 0x45b32bu: goto L_0045b32b; case 0x45b360u: goto L_0045b360; case 0x45b29eu: goto L_0045b29e; case 0x45b231u: goto L_0045b231; default: UNSUP(0x0045b207, "jump table entry is not a known target"); } }
L_0045b20e:; BB(0x0045b20e);
    /* 0045b20e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0045b211: sub eax, 0x232c */ {  u32 a = r_eax; u32 b = 0x232cu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045b216: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0045b219: cmp dword ptr [ebp - 0x58], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045b21d: ja 0x45b231 */ if ((!fC&&!fZ)) goto L_0045b231;
L_0045b21f:; BB(0x0045b21f);
    /* 0045b21f: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0045b222: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045b224: mov cl, byte ptr [edx + 0x45b77b] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+0x45b77bu))) & 0xffu);
    /* 0045b22a: jmp dword ptr [ecx*4 + 0x45b767] */ { u32 t = R32((u32)(r_ecx*4+0x45b767u)); switch (t) { case 0x45b3a9u: goto L_0045b3a9; case 0x45b6e0u: goto L_0045b6e0; case 0x45b6a2u: goto L_0045b6a2; case 0x45b664u: goto L_0045b664; case 0x45b623u: goto L_0045b623; case 0x45b5e2u: goto L_0045b5e2; case 0x45b5a1u: goto L_0045b5a1; case 0x45b560u: goto L_0045b560; case 0x45b4d8u: goto L_0045b4d8; case 0x45b45fu: goto L_0045b45f; case 0x45b497u: goto L_0045b497; case 0x45b427u: goto L_0045b427; case 0x45b3efu: goto L_0045b3ef; case 0x45b2f6u: goto L_0045b2f6; case 0x45b32bu: goto L_0045b32b; case 0x45b360u: goto L_0045b360; case 0x45b29eu: goto L_0045b29e; case 0x45b231u: goto L_0045b231; default: UNSUP(0x0045b22a, "jump table entry is not a known target"); } }
L_0045b231:; BB(0x0045b231);
    /* 0045b231: push 0x1cc0 */ { u32 v = 0x1cc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b236: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b23bu); f_0048ab58();
    /* 0045b23b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b23e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045b241: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b245: je 0x45b254 */ if (fZ) goto L_0045b254;
L_0045b247:; BB(0x0045b247);
    /* 0045b247: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b24a: call 0x5c1110 */ r_esp -= 4; W32(r_esp, 0x45b24fu); f_005c1110();
    /* 0045b24f: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0045b252: jmp 0x45b25b */ goto L_0045b25b;
L_0045b254:; BB(0x0045b254);
    /* 0045b254: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0045b25b:; BB(0x0045b25b);
    /* 0045b25b: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b25e: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045b261: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0045b264: jmp 0x45b71c */ goto L_0045b71c;
L_0045b269:; BB(0x0045b269);
    /* 0045b269: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b26b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b270u); f_0048ab58();
    /* 0045b270: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b273: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045b276: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b27a: je 0x45b289 */ if (fZ) goto L_0045b289;
L_0045b27c:; BB(0x0045b27c);
    /* 0045b27c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045b27f: call 0x5c7300 */ r_esp -= 4; W32(r_esp, 0x45b284u); f_005c7300();
    /* 0045b284: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0045b287: jmp 0x45b290 */ goto L_0045b290;
L_0045b289:; BB(0x0045b289);
    /* 0045b289: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0045b290:; BB(0x0045b290);
    /* 0045b290: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b293: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0045b296: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0045b299: jmp 0x45b71c */ goto L_0045b71c;
L_0045b29e:; BB(0x0045b29e);
    /* 0045b29e: cmp dword ptr [0x6f6980], 0 */ {  u32 a = R32((u32)(0x6f6980u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b2a5: je 0x45b2dc */ if (fZ) goto L_0045b2dc;
L_0045b2a7:; BB(0x0045b2a7);
    /* 0045b2a7: push 0x1cc0 */ { u32 v = 0x1cc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b2ac: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b2b1u); f_0048ab58();
    /* 0045b2b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b2b4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045b2b7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b2bb: je 0x45b2ca */ if (fZ) goto L_0045b2ca;
L_0045b2bd:; BB(0x0045b2bd);
    /* 0045b2bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b2c0: call 0x5c1910 */ r_esp -= 4; W32(r_esp, 0x45b2c5u); f_005c1910();
    /* 0045b2c5: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0045b2c8: jmp 0x45b2d1 */ goto L_0045b2d1;
L_0045b2ca:; BB(0x0045b2ca);
    /* 0045b2ca: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0045b2d1:; BB(0x0045b2d1);
    /* 0045b2d1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b2d4: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0045b2d7: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0045b2da: jmp 0x45b2f1 */ goto L_0045b2f1;
L_0045b2dc:; BB(0x0045b2dc);
    /* 0045b2dc: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b2e1: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b2e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045b2e6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b2e9: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x45b2ecu); call_ind(t); }
    /* 0045b2ec: jmp 0x45b72d */ goto L_0045b72d;
L_0045b2f1:; BB(0x0045b2f1);
    /* 0045b2f1: jmp 0x45b71c */ goto L_0045b71c;
L_0045b2f6:; BB(0x0045b2f6);
    /* 0045b2f6: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b2f8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b2fdu); f_0048ab58();
    /* 0045b2fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b300: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045b303: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b307: je 0x45b316 */ if (fZ) goto L_0045b316;
L_0045b309:; BB(0x0045b309);
    /* 0045b309: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045b30c: call 0x5c70e0 */ r_esp -= 4; W32(r_esp, 0x45b311u); f_005c70e0();
    /* 0045b311: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0045b314: jmp 0x45b31d */ goto L_0045b31d;
L_0045b316:; BB(0x0045b316);
    /* 0045b316: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0045b31d:; BB(0x0045b31d);
    /* 0045b31d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b320: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0045b323: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0045b326: jmp 0x45b71c */ goto L_0045b71c;
L_0045b32b:; BB(0x0045b32b);
    /* 0045b32b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b32d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b332u); f_0048ab58();
    /* 0045b332: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b335: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045b338: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b33c: je 0x45b34b */ if (fZ) goto L_0045b34b;
L_0045b33e:; BB(0x0045b33e);
    /* 0045b33e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b341: call 0x5c66b0 */ r_esp -= 4; W32(r_esp, 0x45b346u); f_005c66b0();
    /* 0045b346: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0045b349: jmp 0x45b352 */ goto L_0045b352;
L_0045b34b:; BB(0x0045b34b);
    /* 0045b34b: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0045b352:; BB(0x0045b352);
    /* 0045b352: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b355: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0045b358: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0045b35b: jmp 0x45b71c */ goto L_0045b71c;
L_0045b360:; BB(0x0045b360);
    /* 0045b360: push 0x1cb4 */ { u32 v = 0x1cb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b365: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b36au); f_0048ab58();
    /* 0045b36a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b36d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045b370: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b374: je 0x45b38a */ if (fZ) goto L_0045b38a;
L_0045b376:; BB(0x0045b376);
    /* 0045b376: mov ecx, dword ptr [0x6f6f10] */ r_ecx = R32((u32)(0x6f6f10u));
    /* 0045b37c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b37d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045b380: call 0x5c79f0 */ r_esp -= 4; W32(r_esp, 0x45b385u); f_005c79f0();
    /* 0045b385: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0045b388: jmp 0x45b391 */ goto L_0045b391;
L_0045b38a:; BB(0x0045b38a);
    /* 0045b38a: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0045b391:; BB(0x0045b391);
    /* 0045b391: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b394: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0045b397: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0045b39a: mov dword ptr [0x6f6f10], 0 */ W32((u32)(0x6f6f10u), 0x0u);
    /* 0045b3a4: jmp 0x45b71c */ goto L_0045b71c;
L_0045b3a9:; BB(0x0045b3a9);
    /* 0045b3a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b3ab: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b3ae: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45b3b3u); f_0045c419();
    /* 0045b3b3: mov byte ptr [eax + 0x6d], 0 */ W8((u32)(r_eax+0x6du), 0x0u);
    /* 0045b3b7: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b3bc: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b3c1u); f_0048ab58();
    /* 0045b3c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b3c4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045b3c7: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b3cb: je 0x45b3da */ if (fZ) goto L_0045b3da;
L_0045b3cd:; BB(0x0045b3cd);
    /* 0045b3cd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045b3d0: call 0x5c5af4 */ r_esp -= 4; W32(r_esp, 0x45b3d5u); f_005c5af4();
    /* 0045b3d5: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0045b3d8: jmp 0x45b3e1 */ goto L_0045b3e1;
L_0045b3da:; BB(0x0045b3da);
    /* 0045b3da: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0045b3e1:; BB(0x0045b3e1);
    /* 0045b3e1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b3e4: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0045b3e7: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0045b3ea: jmp 0x45b71c */ goto L_0045b71c;
L_0045b3ef:; BB(0x0045b3ef);
    /* 0045b3ef: push 0x1cb0 */ { u32 v = 0x1cb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b3f4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b3f9u); f_0048ab58();
    /* 0045b3f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b3fc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045b3ff: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b403: je 0x45b412 */ if (fZ) goto L_0045b412;
L_0045b405:; BB(0x0045b405);
    /* 0045b405: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045b408: call 0x419920 */ r_esp -= 4; W32(r_esp, 0x45b40du); f_00419920();
    /* 0045b40d: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0045b410: jmp 0x45b419 */ goto L_0045b419;
L_0045b412:; BB(0x0045b412);
    /* 0045b412: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0045b419:; BB(0x0045b419);
    /* 0045b419: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b41c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0045b41f: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0045b422: jmp 0x45b71c */ goto L_0045b71c;
L_0045b427:; BB(0x0045b427);
    /* 0045b427: push 0x1cb4 */ { u32 v = 0x1cb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b42c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b431u); f_0048ab58();
    /* 0045b431: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b434: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045b437: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b43b: je 0x45b44a */ if (fZ) goto L_0045b44a;
L_0045b43d:; BB(0x0045b43d);
    /* 0045b43d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045b440: call 0x42d350 */ r_esp -= 4; W32(r_esp, 0x45b445u); f_0042d350();
    /* 0045b445: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0045b448: jmp 0x45b451 */ goto L_0045b451;
L_0045b44a:; BB(0x0045b44a);
    /* 0045b44a: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0045b451:; BB(0x0045b451);
    /* 0045b451: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b454: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0045b457: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0045b45a: jmp 0x45b71c */ goto L_0045b71c;
L_0045b45f:; BB(0x0045b45f);
    /* 0045b45f: push 0x1cb0 */ { u32 v = 0x1cb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b464: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b469u); f_0048ab58();
    /* 0045b469: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b46c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045b46f: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b473: je 0x45b482 */ if (fZ) goto L_0045b482;
L_0045b475:; BB(0x0045b475);
    /* 0045b475: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045b478: call 0x49ee10 */ r_esp -= 4; W32(r_esp, 0x45b47du); f_0049ee10();
    /* 0045b47d: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0045b480: jmp 0x45b489 */ goto L_0045b489;
L_0045b482:; BB(0x0045b482);
    /* 0045b482: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0045b489:; BB(0x0045b489);
    /* 0045b489: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b48c: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0045b48f: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0045b492: jmp 0x45b71c */ goto L_0045b71c;
L_0045b497:; BB(0x0045b497);
    /* 0045b497: push 0x1cc0 */ { u32 v = 0x1cc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b49c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b4a1u); f_0048ab58();
    /* 0045b4a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b4a4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045b4a7: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b4ab: je 0x45b4bd */ if (fZ) goto L_0045b4bd;
L_0045b4ad:; BB(0x0045b4ad);
    /* 0045b4ad: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045b4b0: call 0x481ec0 */ r_esp -= 4; W32(r_esp, 0x45b4b5u); f_00481ec0();
    /* 0045b4b5: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0045b4bb: jmp 0x45b4c7 */ goto L_0045b4c7;
L_0045b4bd:; BB(0x0045b4bd);
    /* 0045b4bd: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0045b4c7:; BB(0x0045b4c7);
    /* 0045b4c7: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b4ca: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0045b4d0: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0045b4d3: jmp 0x45b71c */ goto L_0045b71c;
L_0045b4d8:; BB(0x0045b4d8);
    /* 0045b4d8: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b4df: je 0x45b51f */ if (fZ) goto L_0045b51f;
L_0045b4e1:; BB(0x0045b4e1);
    /* 0045b4e1: push 0x1d30 */ { u32 v = 0x1d30u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b4e6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b4ebu); f_0048ab58();
    /* 0045b4eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b4ee: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0045b4f1: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b4f5: je 0x45b507 */ if (fZ) goto L_0045b507;
L_0045b4f7:; BB(0x0045b4f7);
    /* 0045b4f7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045b4fa: call 0x4ff100 */ r_esp -= 4; W32(r_esp, 0x45b4ffu); f_004ff100();
    /* 0045b4ff: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0045b505: jmp 0x45b511 */ goto L_0045b511;
L_0045b507:; BB(0x0045b507);
    /* 0045b507: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0045b511:; BB(0x0045b511);
    /* 0045b511: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b514: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0045b51a: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0045b51d: jmp 0x45b55b */ goto L_0045b55b;
L_0045b51f:; BB(0x0045b51f);
    /* 0045b51f: push 0x1cf0 */ { u32 v = 0x1cf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b524: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b529u); f_0048ab58();
    /* 0045b529: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b52c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0045b52f: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b533: je 0x45b545 */ if (fZ) goto L_0045b545;
L_0045b535:; BB(0x0045b535);
    /* 0045b535: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045b538: call 0x59b680 */ r_esp -= 4; W32(r_esp, 0x45b53du); f_0059b680();
    /* 0045b53d: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0045b543: jmp 0x45b54f */ goto L_0045b54f;
L_0045b545:; BB(0x0045b545);
    /* 0045b545: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0045b54f:; BB(0x0045b54f);
    /* 0045b54f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b552: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0045b558: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
L_0045b55b:; BB(0x0045b55b);
    /* 0045b55b: jmp 0x45b71c */ goto L_0045b71c;
L_0045b560:; BB(0x0045b560);
    /* 0045b560: push 0x1cb4 */ { u32 v = 0x1cb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b565: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b56au); f_0048ab58();
    /* 0045b56a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b56d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0045b570: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b574: je 0x45b586 */ if (fZ) goto L_0045b586;
L_0045b576:; BB(0x0045b576);
    /* 0045b576: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045b579: call 0x5d0d20 */ r_esp -= 4; W32(r_esp, 0x45b57eu); f_005d0d20();
    /* 0045b57e: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0045b584: jmp 0x45b590 */ goto L_0045b590;
L_0045b586:; BB(0x0045b586);
    /* 0045b586: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0045b590:; BB(0x0045b590);
    /* 0045b590: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b593: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0045b599: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0045b59c: jmp 0x45b71c */ goto L_0045b71c;
L_0045b5a1:; BB(0x0045b5a1);
    /* 0045b5a1: push 0x1cb4 */ { u32 v = 0x1cb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b5a6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b5abu); f_0048ab58();
    /* 0045b5ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b5ae: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0045b5b1: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b5b5: je 0x45b5c7 */ if (fZ) goto L_0045b5c7;
L_0045b5b7:; BB(0x0045b5b7);
    /* 0045b5b7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045b5ba: call 0x5ee150 */ r_esp -= 4; W32(r_esp, 0x45b5bfu); f_005ee150();
    /* 0045b5bf: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0045b5c5: jmp 0x45b5d1 */ goto L_0045b5d1;
L_0045b5c7:; BB(0x0045b5c7);
    /* 0045b5c7: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0045b5d1:; BB(0x0045b5d1);
    /* 0045b5d1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b5d4: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0045b5da: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0045b5dd: jmp 0x45b71c */ goto L_0045b71c;
L_0045b5e2:; BB(0x0045b5e2);
    /* 0045b5e2: push 0x1cb0 */ { u32 v = 0x1cb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b5e7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b5ecu); f_0048ab58();
    /* 0045b5ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b5ef: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0045b5f2: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b5f6: je 0x45b608 */ if (fZ) goto L_0045b608;
L_0045b5f8:; BB(0x0045b5f8);
    /* 0045b5f8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045b5fb: call 0x61b430 */ r_esp -= 4; W32(r_esp, 0x45b600u); f_0061b430();
    /* 0045b600: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0045b606: jmp 0x45b612 */ goto L_0045b612;
L_0045b608:; BB(0x0045b608);
    /* 0045b608: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0045b612:; BB(0x0045b612);
    /* 0045b612: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b615: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0045b61b: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0045b61e: jmp 0x45b71c */ goto L_0045b71c;
L_0045b623:; BB(0x0045b623);
    /* 0045b623: push 0x1cbc */ { u32 v = 0x1cbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b628: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b62du); f_0048ab58();
    /* 0045b62d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b630: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0045b633: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b637: je 0x45b649 */ if (fZ) goto L_0045b649;
L_0045b639:; BB(0x0045b639);
    /* 0045b639: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045b63c: call 0x4730b0 */ r_esp -= 4; W32(r_esp, 0x45b641u); f_004730b0();
    /* 0045b641: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0045b647: jmp 0x45b653 */ goto L_0045b653;
L_0045b649:; BB(0x0045b649);
    /* 0045b649: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0045b653:; BB(0x0045b653);
    /* 0045b653: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b656: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0045b65c: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0045b65f: jmp 0x45b71c */ goto L_0045b71c;
L_0045b664:; BB(0x0045b664);
    /* 0045b664: push 0x1cb8 */ { u32 v = 0x1cb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b669: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b66eu); f_0048ab58();
    /* 0045b66e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b671: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0045b674: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b678: je 0x45b68a */ if (fZ) goto L_0045b68a;
L_0045b67a:; BB(0x0045b67a);
    /* 0045b67a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045b67d: call 0x5fdad0 */ r_esp -= 4; W32(r_esp, 0x45b682u); f_005fdad0();
    /* 0045b682: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0045b688: jmp 0x45b694 */ goto L_0045b694;
L_0045b68a:; BB(0x0045b68a);
    /* 0045b68a: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0045b694:; BB(0x0045b694);
    /* 0045b694: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b697: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0045b69d: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0045b6a0: jmp 0x45b71c */ goto L_0045b71c;
L_0045b6a2:; BB(0x0045b6a2);
    /* 0045b6a2: push 0x1cbc */ { u32 v = 0x1cbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b6a7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b6acu); f_0048ab58();
    /* 0045b6ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b6af: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0045b6b2: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b6b6: je 0x45b6c8 */ if (fZ) goto L_0045b6c8;
L_0045b6b8:; BB(0x0045b6b8);
    /* 0045b6b8: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0045b6bb: call 0x5c0830 */ r_esp -= 4; W32(r_esp, 0x45b6c0u); f_005c0830();
    /* 0045b6c0: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0045b6c6: jmp 0x45b6d2 */ goto L_0045b6d2;
L_0045b6c8:; BB(0x0045b6c8);
    /* 0045b6c8: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_0045b6d2:; BB(0x0045b6d2);
    /* 0045b6d2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b6d5: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0045b6db: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0045b6de: jmp 0x45b71c */ goto L_0045b71c;
L_0045b6e0:; BB(0x0045b6e0);
    /* 0045b6e0: push 0x1cbc */ { u32 v = 0x1cbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b6e5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45b6eau); f_0048ab58();
    /* 0045b6ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b6ed: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0045b6f0: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b6f4: je 0x45b706 */ if (fZ) goto L_0045b706;
L_0045b6f6:; BB(0x0045b6f6);
    /* 0045b6f6: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045b6f9: call 0x406f60 */ r_esp -= 4; W32(r_esp, 0x45b6feu); f_00406f60();
    /* 0045b6fe: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0045b704: jmp 0x45b710 */ goto L_0045b710;
L_0045b706:; BB(0x0045b706);
    /* 0045b706: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_0045b710:; BB(0x0045b710);
    /* 0045b710: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b713: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0045b719: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
L_0045b71c:; BB(0x0045b71c);
    /* 0045b71c: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b71f: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0045b722: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0045b725: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0045b728: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045b72a: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x45b72du); call_ind(t); }
L_0045b72d:; BB(0x0045b72d);
    /* 0045b72d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b72f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b730: ret 4 */ FN_RET(0x0045b187); r_esp += 8; return;
}

void f_0045b786(void) /* FUN_0045b786 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b786);
    /* 0045b786: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b787: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b789: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045b78c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b78f: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b793: jne 0x45b7a0 */ if (!fZ) goto L_0045b7a0;
L_0045b795:; BB(0x0045b795);
    /* 0045b795: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b798: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x45b79du); f_005da3ec();
    /* 0045b79d: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0045b7a0:; BB(0x0045b7a0);
    /* 0045b7a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045b7a3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045b7a6: cmp dword ptr [ebp - 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045b7aa: ja 0x45b8c6 */ if ((!fC&&!fZ)) goto L_0045b8c6;
L_0045b7b0:; BB(0x0045b7b0);
    /* 0045b7b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045b7b3: jmp dword ptr [ecx*4 + 0x45b8dd] */ { u32 t = R32((u32)(r_ecx*4+0x45b8ddu)); switch (t) { case 0x45b7bau: goto L_0045b7ba; case 0x45b7d0u: goto L_0045b7d0; case 0x45b7e6u: goto L_0045b7e6; case 0x45b7fcu: goto L_0045b7fc; case 0x45b812u: goto L_0045b812; case 0x45b828u: goto L_0045b828; case 0x45b83eu: goto L_0045b83e; case 0x45b854u: goto L_0045b854; case 0x45b867u: goto L_0045b867; case 0x45b87au: goto L_0045b87a; case 0x45b88du: goto L_0045b88d; case 0x45b8a0u: goto L_0045b8a0; case 0x45b8b3u: goto L_0045b8b3; default: UNSUP(0x0045b7b3, "jump table entry is not a known target"); } }
L_0045b7ba:; BB(0x0045b7ba);
    /* 0045b7ba: push 0x67b11c */ { u32 v = 0x67b11cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b7bf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045b7c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b7c3: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b7c8u); f_00624510();
    /* 0045b7c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b7cb: jmp 0x45b8d7 */ goto L_0045b8d7;
L_0045b7d0:; BB(0x0045b7d0);
    /* 0045b7d0: push 0x67b128 */ { u32 v = 0x67b128u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b7d5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045b7d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b7d9: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b7deu); f_00624510();
    /* 0045b7de: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b7e1: jmp 0x45b8d7 */ goto L_0045b8d7;
L_0045b7e6:; BB(0x0045b7e6);
    /* 0045b7e6: push 0x67b130 */ { u32 v = 0x67b130u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b7eb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045b7ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b7ef: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b7f4u); f_00624510();
    /* 0045b7f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b7f7: jmp 0x45b8d7 */ goto L_0045b8d7;
L_0045b7fc:; BB(0x0045b7fc);
    /* 0045b7fc: push 0x67b138 */ { u32 v = 0x67b138u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b801: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045b804: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b805: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b80au); f_00624510();
    /* 0045b80a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b80d: jmp 0x45b8d7 */ goto L_0045b8d7;
L_0045b812:; BB(0x0045b812);
    /* 0045b812: push 0x67b148 */ { u32 v = 0x67b148u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b817: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045b81a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b81b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b820u); f_00624510();
    /* 0045b820: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b823: jmp 0x45b8d7 */ goto L_0045b8d7;
L_0045b828:; BB(0x0045b828);
    /* 0045b828: push 0x67b150 */ { u32 v = 0x67b150u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b82d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045b830: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b831: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b836u); f_00624510();
    /* 0045b836: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b839: jmp 0x45b8d7 */ goto L_0045b8d7;
L_0045b83e:; BB(0x0045b83e);
    /* 0045b83e: push 0x67b15c */ { u32 v = 0x67b15cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b843: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045b846: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b847: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b84cu); f_00624510();
    /* 0045b84c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b84f: jmp 0x45b8d7 */ goto L_0045b8d7;
L_0045b854:; BB(0x0045b854);
    /* 0045b854: push 0x67b164 */ { u32 v = 0x67b164u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b859: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045b85c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b85d: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b862u); f_00624510();
    /* 0045b862: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b865: jmp 0x45b8d7 */ goto L_0045b8d7;
L_0045b867:; BB(0x0045b867);
    /* 0045b867: push 0x67b170 */ { u32 v = 0x67b170u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b86c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045b86f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b870: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b875u); f_00624510();
    /* 0045b875: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b878: jmp 0x45b8d7 */ goto L_0045b8d7;
L_0045b87a:; BB(0x0045b87a);
    /* 0045b87a: push 0x67b180 */ { u32 v = 0x67b180u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b87f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045b882: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b883: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b888u); f_00624510();
    /* 0045b888: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b88b: jmp 0x45b8d7 */ goto L_0045b8d7;
L_0045b88d:; BB(0x0045b88d);
    /* 0045b88d: push 0x67b190 */ { u32 v = 0x67b190u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b892: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045b895: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b896: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b89bu); f_00624510();
    /* 0045b89b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b89e: jmp 0x45b8d7 */ goto L_0045b8d7;
L_0045b8a0:; BB(0x0045b8a0);
    /* 0045b8a0: push 0x67b19c */ { u32 v = 0x67b19cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8a5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045b8a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8a9: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b8aeu); f_00624510();
    /* 0045b8ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b8b1: jmp 0x45b8d7 */ goto L_0045b8d7;
L_0045b8b3:; BB(0x0045b8b3);
    /* 0045b8b3: push 0x67b1ac */ { u32 v = 0x67b1acu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8b8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045b8bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8bc: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b8c1u); f_00624510();
    /* 0045b8c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b8c4: jmp 0x45b8d7 */ goto L_0045b8d7;
L_0045b8c6:; BB(0x0045b8c6);
    /* 0045b8c6: push 0x67b1b8 */ { u32 v = 0x67b1b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8cb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045b8ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8cf: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45b8d4u); f_00624510();
    /* 0045b8d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045b8d7:; BB(0x0045b8d7);
    /* 0045b8d7: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b8d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b8da: ret 8 */ FN_RET(0x0045b786); r_esp += 12; return;
}

void f_0045b911(void) /* FUN_0045b911 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b911);
    /* 0045b911: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b912: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b914: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b915: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b918: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b91b: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x45b920u); f_005da3ec();
    /* 0045b920: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045b922: jl 0x45b938 */ if ((fS!=fO)) goto L_0045b938;
L_0045b924:; BB(0x0045b924);
    /* 0045b924: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b927: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x45b92cu); f_005da3ec();
    /* 0045b92c: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b92f: jge 0x45b938 */ if ((fS==fO)) goto L_0045b938;
L_0045b931:; BB(0x0045b931);
    /* 0045b931: mov eax, 1 */ r_eax = 0x1u;
    /* 0045b936: jmp 0x45b93a */ goto L_0045b93a;
L_0045b938:; BB(0x0045b938);
    /* 0045b938: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045b93a:; BB(0x0045b93a);
    /* 0045b93a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b93c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b93d: ret  */ FN_RET(0x0045b911); r_esp += 4; return;
}

void f_0045b93e(void) /* FUN_0045b93e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b93e);
    /* 0045b93e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b93f: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b941: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b942: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b945: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b948: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x45b94du); f_005da3ec();
    /* 0045b94d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045b94f: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b952: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0045b955: mov eax, ecx */ r_eax = r_ecx;
    /* 0045b957: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b959: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b95a: ret 4 */ FN_RET(0x0045b93e); r_esp += 8; return;
}

void f_0045b95d(void) /* FUN_0045b95d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b95d);
    /* 0045b95d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b95e: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b960: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b961: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b964: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b967: call 0x5da3db */ r_esp -= 4; W32(r_esp, 0x45b96cu); f_005da3db();
    /* 0045b96c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045b96e: jl 0x45b984 */ if ((fS!=fO)) goto L_0045b984;
L_0045b970:; BB(0x0045b970);
    /* 0045b970: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b973: call 0x5da3db */ r_esp -= 4; W32(r_esp, 0x45b978u); f_005da3db();
    /* 0045b978: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b97b: jge 0x45b984 */ if ((fS==fO)) goto L_0045b984;
L_0045b97d:; BB(0x0045b97d);
    /* 0045b97d: mov eax, 1 */ r_eax = 0x1u;
    /* 0045b982: jmp 0x45b986 */ goto L_0045b986;
L_0045b984:; BB(0x0045b984);
    /* 0045b984: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045b986:; BB(0x0045b986);
    /* 0045b986: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b988: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b989: ret  */ FN_RET(0x0045b95d); r_esp += 4; return;
}

void f_0045b98a(void) /* FUN_0045b98a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b98a);
    /* 0045b98a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b98b: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b98d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045b990: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045b993: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045b996: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b997: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045b99a: call 0x5d9e8f */ r_esp -= 4; W32(r_esp, 0x45b99fu); f_005d9e8f();
    /* 0045b99f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045b9a2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045b9a5: call 0x45b911 */ r_esp -= 4; W32(r_esp, 0x45b9aau); f_0045b911();
    /* 0045b9aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b9ac: je 0x45b9c8 */ if (fZ) goto L_0045b9c8;
L_0045b9ae:; BB(0x0045b9ae);
    /* 0045b9ae: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b9b2: je 0x45b9c8 */ if (fZ) goto L_0045b9c8;
L_0045b9b4:; BB(0x0045b9b4);
    /* 0045b9b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045b9b7: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0045b9ba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045b9bd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045b9c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045b9c2: call dword ptr [edx + 0x80] */ { u32 t = R32((u32)(r_edx+0x80u)); r_esp -= 4; W32(r_esp, 0x45b9c8u); call_ind(t); }
L_0045b9c8:; BB(0x0045b9c8);
    /* 0045b9c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b9cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b9cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b9ce: ret 4 */ FN_RET(0x0045b98a); r_esp += 8; return;
}

void f_0045b9fe(void) /* FUN_0045b9fe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b9fe);
    /* 0045b9fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b9ff: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ba01: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ba04: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045ba07: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ba0b: je 0x45ba15 */ if (fZ) goto L_0045ba15;
L_0045ba0d:; BB(0x0045ba0d);
    /* 0045ba0d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045ba10: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045ba13: jmp 0x45ba24 */ goto L_0045ba24;
L_0045ba15:; BB(0x0045ba15);
    /* 0045ba15: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045ba18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ba19: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045ba1c: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45ba21u); f_0045c419();
    /* 0045ba21: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045ba24:; BB(0x0045ba24);
    /* 0045ba24: push 0xc00 */ { u32 v = 0xc00u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ba29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ba2b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ba2f: call 0x624170 */ r_esp -= 4; W32(r_esp, 0x45ba34u); f_00624170();
    /* 0045ba34: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ba37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba3a: mov byte ptr [eax], 2 */ W8((u32)(r_eax), 0x2u);
    /* 0045ba3d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba40: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0045ba43: mov byte ptr [ecx + 1], dl */ W8((u32)(r_ecx+0x1u), (u8)r_edx);
    /* 0045ba46: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba49: mov byte ptr [eax + 2], 0 */ W8((u32)(r_eax+0x2u), 0x0u);
    /* 0045ba4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba50: mov byte ptr [ecx + 0x12], 0 */ W8((u32)(r_ecx+0x12u), 0x0u);
    /* 0045ba54: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba57: mov byte ptr [edx + 0x1f], 0 */ W8((u32)(r_edx+0x1fu), 0x0u);
    /* 0045ba5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba5e: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 0045ba65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba68: mov dword ptr [ecx + 0x3c], 0x65 */ W32((u32)(r_ecx+0x3cu), 0x65u);
    /* 0045ba6f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba72: mov byte ptr [edx + 0x40], 0xff */ W8((u32)(r_edx+0x40u), 0xffu);
    /* 0045ba76: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba79: mov dword ptr [eax + 0x44], 0x1388 */ W32((u32)(r_eax+0x44u), 0x1388u);
    /* 0045ba80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba83: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 0045ba8a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba8d: mov byte ptr [edx + 0x4c], 0 */ W8((u32)(r_edx+0x4cu), 0x0u);
    /* 0045ba91: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba94: mov byte ptr [eax + 0x64], 0 */ W8((u32)(r_eax+0x64u), 0x0u);
    /* 0045ba98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ba9b: mov byte ptr [ecx + 0x65], 0 */ W8((u32)(r_ecx+0x65u), 0x0u);
    /* 0045ba9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045baa2: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 0045baa9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045baac: mov byte ptr [eax + 0x6c], 1 */ W8((u32)(r_eax+0x6cu), 0x1u);
    /* 0045bab0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bab3: mov byte ptr [ecx + 0x6d], 1 */ W8((u32)(r_ecx+0x6du), 0x1u);
    /* 0045bab7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045baba: mov byte ptr [edx + 0x6e], 1 */ W8((u32)(r_edx+0x6eu), 0x1u);
    /* 0045babe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bac1: mov byte ptr [eax + 0x6f], 1 */ W8((u32)(r_eax+0x6fu), 0x1u);
    /* 0045bac5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bac8: mov byte ptr [ecx + 0x70], 3 */ W8((u32)(r_ecx+0x70u), 0x3u);
    /* 0045bacc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bacf: mov eax, dword ptr [0x6f0950] */ r_eax = R32((u32)(0x6f0950u));
    /* 0045bad4: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 0045bad7: mov ecx, dword ptr [0x6f0954] */ r_ecx = R32((u32)(0x6f0954u));
    /* 0045badd: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 0045bae0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bae3: mov byte ptr [edx + 0x80], 4 */ W8((u32)(r_edx+0x80u), 0x4u);
    /* 0045baea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045baed: mov byte ptr [eax + 0x81], 1 */ W8((u32)(r_eax+0x81u), 0x1u);
    /* 0045baf4: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045bafb: jmp 0x45bb06 */ goto L_0045bb06;
L_0045bafd:; BB(0x0045bafd);
    /* 0045bafd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bb00: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045bb03: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0045bb06:; BB(0x0045bb06);
    /* 0045bb06: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045bb0a: jge 0x45bb28 */ if ((fS==fO)) goto L_0045bb28;
L_0045bb0c:; BB(0x0045bb0c);
    /* 0045bb0c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bb0f: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045bb12: mov byte ptr [edx + 0x82], 1 */ W8((u32)(r_edx+0x82u), 0x1u);
    /* 0045bb19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bb1c: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045bb1f: mov byte ptr [eax + 0x8a], 0 */ W8((u32)(r_eax+0x8au), 0x0u);
    /* 0045bb26: jmp 0x45bafd */ goto L_0045bafd;
L_0045bb28:; BB(0x0045bb28);
    /* 0045bb28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bb2b: mov byte ptr [ecx + 0x92], 1 */ W8((u32)(r_ecx+0x92u), 0x1u);
    /* 0045bb32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bb35: mov byte ptr [edx + 0x93], 2 */ W8((u32)(r_edx+0x93u), 0x2u);
    /* 0045bb3c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045bb43: jmp 0x45bb4e */ goto L_0045bb4e;
L_0045bb45:; BB(0x0045bb45);
    /* 0045bb45: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bb48: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045bb4b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0045bb4e:; BB(0x0045bb4e);
    /* 0045bb4e: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045bb52: jge 0x45bc0a */ if ((fS==fO)) goto L_0045bc0a;
L_0045bb58:; BB(0x0045bb58);
    /* 0045bb58: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bb5b: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045bb5e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bb61: mov byte ptr [edx + ecx + 0x94], 0xff */ W8((u32)(r_edx+r_ecx+0x94u), 0xffu);
    /* 0045bb69: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bb6c: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045bb6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bb72: mov byte ptr [ecx + eax + 0x95], 1 */ W8((u32)(r_ecx+r_eax+0x95u), 0x1u);
    /* 0045bb7a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bb7d: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045bb80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bb83: mov byte ptr [eax + edx + 0x96], 1 */ W8((u32)(r_eax+r_edx+0x96u), 0x1u);
    /* 0045bb8b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bb8e: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045bb91: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bb94: mov byte ptr [edx + ecx + 0x97], 0 */ W8((u32)(r_edx+r_ecx+0x97u), 0x0u);
    /* 0045bb9c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bb9f: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045bba2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bba5: mov byte ptr [ecx + eax + 0x98], 0 */ W8((u32)(r_ecx+r_eax+0x98u), 0x0u);
    /* 0045bbad: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bbb0: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045bbb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bbb6: mov dword ptr [eax + edx + 0xb0], 0 */ W32((u32)(r_eax+r_edx+0xb0u), 0x0u);
    /* 0045bbc1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bbc4: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045bbc7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bbca: mov dword ptr [edx + ecx + 0xb4], 0xfffffc18 */ W32((u32)(r_edx+r_ecx+0xb4u), 0xfffffc18u);
    /* 0045bbd5: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0045bbdc: jmp 0x45bbe7 */ goto L_0045bbe7;
L_0045bbde:; BB(0x0045bbde);
    /* 0045bbde: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045bbe1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045bbe4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0045bbe7:; BB(0x0045bbe7);
    /* 0045bbe7: cmp dword ptr [ebp - 0xc], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045bbeb: jge 0x45bc05 */ if ((fS==fO)) goto L_0045bc05;
L_0045bbed:; BB(0x0045bbed);
    /* 0045bbed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bbf0: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045bbf3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045bbf6: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045bbf8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bbfb: mov byte ptr [eax + edx + 0x99], 0 */ W8((u32)(r_eax+r_edx+0x99u), 0x0u);
    /* 0045bc03: jmp 0x45bbde */ goto L_0045bbde;
L_0045bc05:; BB(0x0045bc05);
    /* 0045bc05: jmp 0x45bb45 */ goto L_0045bb45;
L_0045bc0a:; BB(0x0045bc0a);
    /* 0045bc0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bc0d: mov byte ptr [ecx + 0xea4], 0 */ W8((u32)(r_ecx+0xea4u), 0x0u);
    /* 0045bc14: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bc17: mov byte ptr [edx + 0xea5], 3 */ W8((u32)(r_edx+0xea5u), 0x3u);
    /* 0045bc1e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bc21: mov byte ptr [eax + 0xea6], 0 */ W8((u32)(r_eax+0xea6u), 0x0u);
    /* 0045bc28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bc2b: mov byte ptr [ecx + 0xea7], 3 */ W8((u32)(r_ecx+0xea7u), 0x3u);
    /* 0045bc32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bc35: mov byte ptr [edx + 0xea8], 0 */ W8((u32)(r_edx+0xea8u), 0x0u);
    /* 0045bc3c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bc3f: mov byte ptr [eax + 0xea9], 3 */ W8((u32)(r_eax+0xea9u), 0x3u);
    /* 0045bc46: mov esp, ebp */ r_esp = r_ebp;
    /* 0045bc48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045bc49: ret 8 */ FN_RET(0x0045b9fe); r_esp += 12; return;
}

void f_0045bc4c(void) /* FUN_0045bc4c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045bc4c);
    /* 0045bc4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc4d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045bc4f: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045bc52: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0045bc55: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bc59: je 0x45bd13 */ if (fZ) goto L_0045bd13;
L_0045bc5f:; BB(0x0045bc5f);
    /* 0045bc5f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0045bc66: jmp 0x45bc71 */ goto L_0045bc71;
L_0045bc68:; BB(0x0045bc68);
    /* 0045bc68: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045bc6b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045bc6e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0045bc71:; BB(0x0045bc71);
    /* 0045bc71: cmp dword ptr [ebp - 0x20], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045bc75: jge 0x45bc99 */ if ((fS==fO)) goto L_0045bc99;
L_0045bc77:; BB(0x0045bc77);
    /* 0045bc77: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc7e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045bc81: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045bc84: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045bc87: lea eax, [edx + ecx + 0x1000] */ r_eax = (u32)(r_edx+r_ecx+0x1000u);
    /* 0045bc8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc8f: call 0x624170 */ r_esp -= 4; W32(r_esp, 0x45bc94u); f_00624170();
    /* 0045bc94: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bc97: jmp 0x45bc68 */ goto L_0045bc68;
L_0045bc99:; BB(0x0045bc99);
    /* 0045bc99: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045bc9c: add ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045bca2: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0045bca5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045bca8: add edx, 0x1100 */ {  u32 a = r_edx; u32 b = 0x1100u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045bcae: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0045bcb1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045bcb4: add eax, 0x1800 */ {  u32 a = r_eax; u32 b = 0x1800u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045bcb9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045bcbc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045bcbf: add ecx, 0x1200 */ {  u32 a = r_ecx; u32 b = 0x1200u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045bcc5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045bcc8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045bccb: add edx, 0x1300 */ {  u32 a = r_edx; u32 b = 0x1300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045bcd1: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0045bcd4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045bcd7: add eax, 0x1400 */ {  u32 a = r_eax; u32 b = 0x1400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045bcdc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045bcdf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045bce2: add ecx, 0x1500 */ {  u32 a = r_ecx; u32 b = 0x1500u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045bce8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045bceb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045bcee: add edx, 0x1600 */ {  u32 a = r_edx; u32 b = 0x1600u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045bcf4: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0045bcf7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045bcfa: add eax, 0x1700 */ {  u32 a = r_eax; u32 b = 0x1700u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045bcff: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045bd02: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045bd05: add ecx, 0x1900 */ {  u32 a = r_ecx; u32 b = 0x1900u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045bd0b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0045bd0e: jmp 0x45be04 */ goto L_0045be04;
L_0045bd13:; BB(0x0045bd13);
    /* 0045bd13: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0045bd1a: jmp 0x45bd25 */ goto L_0045bd25;
L_0045bd1c:; BB(0x0045bd1c);
    /* 0045bd1c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045bd1f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045bd22: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_0045bd25:; BB(0x0045bd25);
    /* 0045bd25: cmp dword ptr [ebp - 0x20], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045bd29: jge 0x45bd5a */ if ((fS==fO)) goto L_0045bd5a;
L_0045bd2b:; BB(0x0045bd2b);
    /* 0045bd2b: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd32: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045bd35: imul eax, eax, 0x1c00 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1c00u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045bd3b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045bd3e: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0045bd42: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045bd45: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045bd48: lea ecx, [edx + eax + 0x1000] */ r_ecx = (u32)(r_edx+r_eax+0x1000u);
    /* 0045bd4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd50: call 0x624170 */ r_esp -= 4; W32(r_esp, 0x45bd55u); f_00624170();
    /* 0045bd55: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bd58: jmp 0x45bd1c */ goto L_0045bd1c;
L_0045bd5a:; BB(0x0045bd5a);
    /* 0045bd5a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045bd5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd60: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045bd63: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45bd68u); f_0045c4ac();
    /* 0045bd68: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045bd6b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045bd6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd6f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd71: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045bd74: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45bd79u); f_0045c4ac();
    /* 0045bd79: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045bd7c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045bd7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd80: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd82: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045bd85: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45bd8au); f_0045c4ac();
    /* 0045bd8a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045bd8d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045bd90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd91: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd93: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045bd96: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45bd9bu); f_0045c4ac();
    /* 0045bd9b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045bd9e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045bda1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bda2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bda4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045bda7: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45bdacu); f_0045c4ac();
    /* 0045bdac: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045bdaf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045bdb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdb3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdb5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045bdb8: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45bdbdu); f_0045c4ac();
    /* 0045bdbd: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045bdc0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045bdc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdc4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdc6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045bdc9: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45bdceu); f_0045c4ac();
    /* 0045bdce: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045bdd1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045bdd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdd5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdd7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045bdda: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45bddfu); f_0045c4ac();
    /* 0045bddf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045bde2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045bde5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bde6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bde8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045bdeb: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45bdf0u); f_0045c4ac();
    /* 0045bdf0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045bdf3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045bdf6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdf7: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdf9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045bdfc: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45be01u); f_0045c4ac();
    /* 0045be01: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0045be04:; BB(0x0045be04);
    /* 0045be04: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be07: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0045be0a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be0d: mov byte ptr [ecx + 1], 4 */ W8((u32)(r_ecx+0x1u), 0x4u);
    /* 0045be11: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be14: mov byte ptr [edx + 2], 0x50 */ W8((u32)(r_edx+0x2u), 0x50u);
    /* 0045be18: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be1b: mov byte ptr [eax + 3], 1 */ W8((u32)(r_eax+0x3u), 0x1u);
    /* 0045be1f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be22: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 0045be26: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be29: mov byte ptr [edx + 5], 0 */ W8((u32)(r_edx+0x5u), 0x0u);
    /* 0045be2d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be30: mov byte ptr [eax + 6], 3 */ W8((u32)(r_eax+0x6u), 0x3u);
    /* 0045be34: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be37: mov byte ptr [ecx + 7], 1 */ W8((u32)(r_ecx+0x7u), 0x1u);
    /* 0045be3b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be3e: mov byte ptr [edx + 8], 0 */ W8((u32)(r_edx+0x8u), 0x0u);
    /* 0045be42: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be45: mov byte ptr [eax + 9], 4 */ W8((u32)(r_eax+0x9u), 0x4u);
    /* 0045be49: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be4c: mov byte ptr [ecx + 0xa], 1 */ W8((u32)(r_ecx+0xau), 0x1u);
    /* 0045be50: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be53: mov byte ptr [edx + 0xb], 1 */ W8((u32)(r_edx+0xbu), 0x1u);
    /* 0045be57: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be5a: mov byte ptr [eax + 0xc], 1 */ W8((u32)(r_eax+0xcu), 0x1u);
    /* 0045be5e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be61: mov byte ptr [ecx + 0xd], 0 */ W8((u32)(r_ecx+0xdu), 0x0u);
    /* 0045be65: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be68: mov byte ptr [edx + 0xe], 1 */ W8((u32)(r_edx+0xeu), 0x1u);
    /* 0045be6c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be6f: mov byte ptr [eax + 0xf], 1 */ W8((u32)(r_eax+0xfu), 0x1u);
    /* 0045be73: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be76: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0045be7d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be80: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 0045be87: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be8a: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 0045be91: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be94: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 0045be9b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045be9e: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 0045bea5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045bea8: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 0045beaf: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045beb2: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 0045beb9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045bebc: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 0045bec3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045bec6: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 0045becd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045bed0: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 0045bed7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045beda: mov byte ptr [edx], 2 */ W8((u32)(r_edx), 0x2u);
    /* 0045bedd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bee0: mov byte ptr [eax + 1], 1 */ W8((u32)(r_eax+0x1u), 0x1u);
    /* 0045bee4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bee7: mov byte ptr [ecx + 2], 1 */ W8((u32)(r_ecx+0x2u), 0x1u);
    /* 0045beeb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045beee: mov byte ptr [edx + 3], 1 */ W8((u32)(r_edx+0x3u), 0x1u);
    /* 0045bef2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bef5: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 0045bef9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045befc: mov byte ptr [ecx + 5], 0 */ W8((u32)(r_ecx+0x5u), 0x0u);
    /* 0045bf00: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bf03: mov byte ptr [edx + 6], 1 */ W8((u32)(r_edx+0x6u), 0x1u);
    /* 0045bf07: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bf0a: mov byte ptr [eax + 7], 1 */ W8((u32)(r_eax+0x7u), 0x1u);
    /* 0045bf0e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bf11: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 0045bf15: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bf18: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 0045bf1f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bf22: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0045bf29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bf2c: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 0045bf33: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045bf36: mov dword ptr [edx + 0x18], 0 */ W32((u32)(r_edx+0x18u), 0x0u);
    /* 0045bf3d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045bf40: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0045bf46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045bf49: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0045bf50: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045bf53: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0045bf59: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045bf5c: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 0045bf63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bf66: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 0045bf69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bf6c: mov byte ptr [edx + 1], 1 */ W8((u32)(r_edx+0x1u), 0x1u);
    /* 0045bf70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bf73: mov byte ptr [eax + 2], 1 */ W8((u32)(r_eax+0x2u), 0x1u);
    /* 0045bf77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bf7a: mov byte ptr [ecx + 3], 1 */ W8((u32)(r_ecx+0x3u), 0x1u);
    /* 0045bf7e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bf81: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 0045bf85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bf88: mov byte ptr [eax + 5], 0 */ W8((u32)(r_eax+0x5u), 0x0u);
    /* 0045bf8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bf8f: mov byte ptr [ecx + 6], 1 */ W8((u32)(r_ecx+0x6u), 0x1u);
    /* 0045bf93: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bf96: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0045bf9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bfa0: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 0045bfa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bfaa: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0045bfb1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045bfb4: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 0045bfbb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045bfbe: mov word ptr [eax], 8 */ W16((u32)(r_eax), 0x8u);
    /* 0045bfc3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045bfc6: mov word ptr [ecx + 2], 0 */ W16((u32)(r_ecx+0x2u), 0x0u);
    /* 0045bfcc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045bfcf: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0045bfd6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045bfd9: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 0045bfe0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045bfe3: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0045bfea: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045bfed: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 0045bff4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045bff7: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 0045bffa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045bffd: mov byte ptr [ecx + 1], 1 */ W8((u32)(r_ecx+0x1u), 0x1u);
    /* 0045c001: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045c004: mov byte ptr [edx + 2], 1 */ W8((u32)(r_edx+0x2u), 0x1u);
    /* 0045c008: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045c00b: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 0045c012: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045c015: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0045c01c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045c01f: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 0045c026: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045c029: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0045c030: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045c033: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0045c039: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045c03c: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0045c043: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c046: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0045c04c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c04f: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0045c056: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045c059: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0045c05f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045c062: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 0045c069: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c06b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c06c: ret 8 */ FN_RET(0x0045bc4c); r_esp += 12; return;
}

void f_0045c06f(void) /* FUN_0045c06f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c06f);
    /* 0045c06f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c070: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c072: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c075: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0045c078: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c07b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0045c07e: cmp dword ptr [ebp - 0x30], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045c082: ja 0x45c252 */ if ((!fC&&!fZ)) goto L_0045c252;
L_0045c088:; BB(0x0045c088);
    /* 0045c088: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045c08b: jmp dword ptr [ecx*4 + 0x45c258] */ { u32 t = R32((u32)(r_ecx*4+0x45c258u)); switch (t) { case 0x45c092u: goto L_0045c092; case 0x45c101u: goto L_0045c101; case 0x45c152u: goto L_0045c152; case 0x45c170u: goto L_0045c170; case 0x45c1a3u: goto L_0045c1a3; case 0x45c1d3u: goto L_0045c1d3; case 0x45c203u: goto L_0045c203; case 0x45c21eu: goto L_0045c21e; case 0x45c134u: goto L_0045c134; case 0x45c239u: goto L_0045c239; default: UNSUP(0x0045c08b, "jump table entry is not a known target"); } }
L_0045c092:; BB(0x0045c092);
    /* 0045c092: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045c095: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0045c098: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045c09b: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0045c0a2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045c0a5: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 0045c0ac: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045c0af: mov dword ptr [edx + 0x18], 0 */ W32((u32)(r_edx+0x18u), 0x0u);
    /* 0045c0b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045c0b9: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 0045c0c0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045c0c3: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 0045c0ca: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045c0cd: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 0045c0d4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045c0d7: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 0045c0de: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045c0e1: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 0045c0e8: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045c0eb: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
    /* 0045c0f2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045c0f5: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 0045c0fc: jmp 0x45c252 */ goto L_0045c252;
L_0045c101:; BB(0x0045c101);
    /* 0045c101: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045c104: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045c107: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c10a: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 0045c111: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c114: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0045c11b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c11e: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 0045c125: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c128: mov dword ptr [edx + 0x18], 0 */ W32((u32)(r_edx+0x18u), 0x0u);
    /* 0045c12f: jmp 0x45c252 */ goto L_0045c252;
L_0045c134:; BB(0x0045c134);
    /* 0045c134: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c137: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045c13a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045c13d: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0045c143: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045c146: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0045c14d: jmp 0x45c252 */ goto L_0045c252;
L_0045c152:; BB(0x0045c152);
    /* 0045c152: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c155: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045c158: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045c15b: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0045c161: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045c164: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0045c16b: jmp 0x45c252 */ goto L_0045c252;
L_0045c170:; BB(0x0045c170);
    /* 0045c170: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c173: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045c176: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c179: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0045c180: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c183: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 0045c18a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c18d: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0045c194: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c197: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 0045c19e: jmp 0x45c252 */ goto L_0045c252;
L_0045c1a3:; BB(0x0045c1a3);
    /* 0045c1a3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045c1a6: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0045c1a9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045c1ac: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0045c1b3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045c1b6: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 0045c1bd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045c1c0: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 0045c1c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045c1ca: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 0045c1d1: jmp 0x45c252 */ goto L_0045c252;
L_0045c1d3:; BB(0x0045c1d3);
    /* 0045c1d3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045c1d6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045c1d9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045c1dc: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0045c1e3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045c1e6: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0045c1ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045c1f0: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 0045c1f7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045c1fa: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 0045c201: jmp 0x45c252 */ goto L_0045c252;
L_0045c203:; BB(0x0045c203);
    /* 0045c203: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c206: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045c209: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045c20c: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0045c212: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045c215: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0045c21c: jmp 0x45c252 */ goto L_0045c252;
L_0045c21e:; BB(0x0045c21e);
    /* 0045c21e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c221: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045c224: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c227: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0045c22d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c230: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0045c237: jmp 0x45c252 */ goto L_0045c252;
L_0045c239:; BB(0x0045c239);
    /* 0045c239: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c23c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045c23f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045c242: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0045c248: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045c24b: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
L_0045c252:; BB(0x0045c252);
    /* 0045c252: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c254: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c255: ret 8 */ FN_RET(0x0045c06f); r_esp += 12; return;
}

void f_0045c288(void) /* FUN_0045c288 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c288);
    /* 0045c288: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c289: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c28b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c28e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c28f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045c292: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045c299: jmp 0x45c2a4 */ goto L_0045c2a4;
L_0045c29b:; BB(0x0045c29b);
    /* 0045c29b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c29e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c2a1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045c2a4:; BB(0x0045c2a4);
    /* 0045c2a4: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045c2a8: jge 0x45c320 */ if ((fS==fO)) goto L_0045c320;
L_0045c2aa:; BB(0x0045c2aa);
    /* 0045c2aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c2ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c2ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c2b1: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c2b6u); f_0045c419();
    /* 0045c2b6: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 0045c2bd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c2c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c2c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c2c4: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c2c9u); f_0045c419();
    /* 0045c2c9: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0045c2cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c2ce: je 0x45c31b */ if (fZ) goto L_0045c31b;
L_0045c2d0:; BB(0x0045c2d0);
    /* 0045c2d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c2d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c2d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c2d7: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c2dcu); f_0045c419();
    /* 0045c2dc: mov byte ptr [eax], 2 */ W8((u32)(r_eax), 0x2u);
    /* 0045c2df: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c2e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c2e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c2e6: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c2ebu); f_0045c419();
    /* 0045c2eb: mov dword ptr [eax + 0x3c], 0x65 */ W32((u32)(r_eax+0x3cu), 0x65u);
    /* 0045c2f2: push 0x6f6998 */ { u32 v = 0x6f6998u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c2f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c2fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c2fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c2fe: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c303u); f_0045c419();
    /* 0045c303: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c306: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c307: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45c30cu); f_00624510();
    /* 0045c30c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c30f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c312: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c313: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c316: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x45c31bu); f_0045c8df();
L_0045c31b:; BB(0x0045c31b);
    /* 0045c31b: jmp 0x45c29b */ goto L_0045c29b;
L_0045c320:; BB(0x0045c320);
    /* 0045c320: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045c327: jmp 0x45c332 */ goto L_0045c332;
L_0045c329:; BB(0x0045c329);
    /* 0045c329: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c32c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045c32f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0045c332:; BB(0x0045c332);
    /* 0045c332: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045c336: jge 0x45c414 */ if ((fS==fO)) goto L_0045c414;
L_0045c33c:; BB(0x0045c33c);
    /* 0045c33c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c33f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c342: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045c345: jmp 0x45c350 */ goto L_0045c350;
L_0045c347:; BB(0x0045c347);
    /* 0045c347: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c34a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c34d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0045c350:; BB(0x0045c350);
    /* 0045c350: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045c354: jge 0x45c40f */ if ((fS==fO)) goto L_0045c40f;
L_0045c35a:; BB(0x0045c35a);
    /* 0045c35a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c35d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c35e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c361: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c366u); f_0045c419();
    /* 0045c366: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0045c369: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c36b: jne 0x45c40a */ if (!fZ) goto L_0045c40a;
L_0045c371:; BB(0x0045c371);
    /* 0045c371: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c374: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c375: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c378: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c37du); f_0045c419();
    /* 0045c37d: movsx esi, byte ptr [eax] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0045c380: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c383: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c384: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c387: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c38cu); f_0045c419();
    /* 0045c38c: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0045c38f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c391: jne 0x45c40a */ if (!fZ) goto L_0045c40a;
L_0045c393:; BB(0x0045c393);
    /* 0045c393: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c396: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c397: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c39a: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c39fu); f_0045c419();
    /* 0045c39f: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c3a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c3a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c3aa: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c3afu); f_0045c419();
    /* 0045c3af: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c3b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3b3: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x45c3b8u); f_006240c0();
    /* 0045c3b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c3bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c3bd: jne 0x45c40a */ if (!fZ) goto L_0045c40a;
L_0045c3bf:; BB(0x0045c3bf);
    /* 0045c3bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c3c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c3c6: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c3cbu); f_0045c419();
    /* 0045c3cb: mov byte ptr [eax], 2 */ W8((u32)(r_eax), 0x2u);
    /* 0045c3ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c3d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c3d5: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c3dau); f_0045c419();
    /* 0045c3da: mov dword ptr [eax + 0x3c], 0x65 */ W32((u32)(r_eax+0x3cu), 0x65u);
    /* 0045c3e1: push 0x6f699c */ { u32 v = 0x6f699cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c3e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c3ed: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c3f2u); f_0045c419();
    /* 0045c3f2: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c3f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3f6: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45c3fbu); f_00624510();
    /* 0045c3fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c3fe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c402: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c405: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x45c40au); f_0045c8df();
L_0045c40a:; BB(0x0045c40a);
    /* 0045c40a: jmp 0x45c347 */ goto L_0045c347;
L_0045c40f:; BB(0x0045c40f);
    /* 0045c40f: jmp 0x45c329 */ goto L_0045c329;
L_0045c414:; BB(0x0045c414);
    /* 0045c414: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045c415: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c417: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c418: ret  */ FN_RET(0x0045c288); r_esp += 4; return;
}

void f_0045c419(void) /* FUN_0045c419 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c419);
    /* 0045c419: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c41a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c41c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c41d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045c420: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c423: imul eax, eax, 0x1c00 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1c00u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c429: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c42c: lea eax, [ecx + eax + 0x48] */ r_eax = (u32)(r_ecx+r_eax+0x48u);
    /* 0045c430: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c432: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c433: ret 4 */ FN_RET(0x0045c419); r_esp += 8; return;
}

void f_0045c436(void) /* FUN_0045c436 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c436);
    /* 0045c436: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c437: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c439: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c43a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045c43d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c441: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c444: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c445: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c448: call 0x45c6ca */ r_esp -= 4; W32(r_esp, 0x45c44du); f_0045c6ca();
    /* 0045c44d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c450: je 0x45c46d */ if (fZ) goto L_0045c46d;
L_0045c452:; BB(0x0045c452);
    /* 0045c452: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045c455: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c456: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c459: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c45a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c45d: call 0x45c6ca */ r_esp -= 4; W32(r_esp, 0x45c462u); f_0045c6ca();
    /* 0045c462: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c463: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c466: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c46bu); f_0045c419();
    /* 0045c46b: jmp 0x45c46f */ goto L_0045c46f;
L_0045c46d:; BB(0x0045c46d);
    /* 0045c46d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045c46f:; BB(0x0045c46f);
    /* 0045c46f: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c472: ret 8 */ FN_RET(0x0045c436); r_esp += 12; return;
}

void f_0045c475(void) /* FUN_0045c475 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c475);
    /* 0045c475: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c476: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c478: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c479: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045c47c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c47f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c480: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c483: call 0x45c736 */ r_esp -= 4; W32(r_esp, 0x45c488u); f_0045c736();
    /* 0045c488: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c48b: je 0x45c4a4 */ if (fZ) goto L_0045c4a4;
L_0045c48d:; BB(0x0045c48d);
    /* 0045c48d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c490: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c491: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c494: call 0x45c736 */ r_esp -= 4; W32(r_esp, 0x45c499u); f_0045c736();
    /* 0045c499: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c49a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c49d: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c4a2u); f_0045c419();
    /* 0045c4a2: jmp 0x45c4a6 */ goto L_0045c4a6;
L_0045c4a4:; BB(0x0045c4a4);
    /* 0045c4a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045c4a6:; BB(0x0045c4a6);
    /* 0045c4a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c4a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c4a9: ret 4 */ FN_RET(0x0045c475); r_esp += 8; return;
}

void f_0045c4ac(void) /* FUN_0045c4ac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c4ac);
    /* 0045c4ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c4ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c4af: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c4b2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045c4b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c4b8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045c4bb: cmp dword ptr [ebp - 8], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045c4bf: ja 0x45c614 */ if ((!fC&&!fZ)) goto L_0045c614;
L_0045c4c5:; BB(0x0045c4c5);
    /* 0045c4c5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c4c8: jmp dword ptr [ecx*4 + 0x45c61c] */ { u32 t = R32((u32)(r_ecx*4+0x45c61cu)); switch (t) { case 0x45c4cfu: goto L_0045c4cf; case 0x45c4f1u: goto L_0045c4f1; case 0x45c535u: goto L_0045c535; case 0x45c557u: goto L_0045c557; case 0x45c579u: goto L_0045c579; case 0x45c598u: goto L_0045c598; case 0x45c5b7u: goto L_0045c5b7; case 0x45c5d6u: goto L_0045c5d6; case 0x45c513u: goto L_0045c513; case 0x45c5f5u: goto L_0045c5f5; default: UNSUP(0x0045c4c8, "jump table entry is not a known target"); } }
L_0045c4cf:; BB(0x0045c4cf);
    /* 0045c4cf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045c4d2: imul edx, edx, 0x1c00 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1c00u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c4d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c4db: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 0045c4df: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c4e2: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045c4e5: lea eax, [ecx + edx + 0x1000] */ r_eax = (u32)(r_ecx+r_edx+0x1000u);
    /* 0045c4ec: jmp 0x45c616 */ goto L_0045c616;
L_0045c4f1:; BB(0x0045c4f1);
    /* 0045c4f1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c4f4: imul eax, eax, 0x1c00 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1c00u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c4fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c4fd: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0045c501: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c504: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045c507: lea eax, [edx + eax + 0x1000] */ r_eax = (u32)(r_edx+r_eax+0x1000u);
    /* 0045c50e: jmp 0x45c616 */ goto L_0045c616;
L_0045c513:; BB(0x0045c513);
    /* 0045c513: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045c516: imul ecx, ecx, 0x1c00 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1c00u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c51c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c51f: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 0045c523: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c526: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045c529: lea eax, [eax + ecx + 0x1000] */ r_eax = (u32)(r_eax+r_ecx+0x1000u);
    /* 0045c530: jmp 0x45c616 */ goto L_0045c616;
L_0045c535:; BB(0x0045c535);
    /* 0045c535: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045c538: imul edx, edx, 0x1c00 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1c00u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c53e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c541: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 0045c545: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c548: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045c54b: lea eax, [ecx + edx + 0x1000] */ r_eax = (u32)(r_ecx+r_edx+0x1000u);
    /* 0045c552: jmp 0x45c616 */ goto L_0045c616;
L_0045c557:; BB(0x0045c557);
    /* 0045c557: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c55a: imul eax, eax, 0x1c00 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1c00u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c560: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c563: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0045c567: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c56a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045c56d: lea eax, [edx + eax + 0x1000] */ r_eax = (u32)(r_edx+r_eax+0x1000u);
    /* 0045c574: jmp 0x45c616 */ goto L_0045c616;
L_0045c579:; BB(0x0045c579);
    /* 0045c579: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045c57c: imul ecx, ecx, 0x1c00 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1c00u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c582: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c585: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 0045c589: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c58c: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045c58f: lea eax, [eax + ecx + 0x1000] */ r_eax = (u32)(r_eax+r_ecx+0x1000u);
    /* 0045c596: jmp 0x45c616 */ goto L_0045c616;
L_0045c598:; BB(0x0045c598);
    /* 0045c598: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045c59b: imul edx, edx, 0x1c00 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1c00u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c5a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c5a4: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 0045c5a8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c5ab: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045c5ae: lea eax, [ecx + edx + 0x1000] */ r_eax = (u32)(r_ecx+r_edx+0x1000u);
    /* 0045c5b5: jmp 0x45c616 */ goto L_0045c616;
L_0045c5b7:; BB(0x0045c5b7);
    /* 0045c5b7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c5ba: imul eax, eax, 0x1c00 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1c00u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c5c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c5c3: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0045c5c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c5ca: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045c5cd: lea eax, [edx + eax + 0x1000] */ r_eax = (u32)(r_edx+r_eax+0x1000u);
    /* 0045c5d4: jmp 0x45c616 */ goto L_0045c616;
L_0045c5d6:; BB(0x0045c5d6);
    /* 0045c5d6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045c5d9: imul ecx, ecx, 0x1c00 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1c00u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c5df: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c5e2: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 0045c5e6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c5e9: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045c5ec: lea eax, [eax + ecx + 0x1000] */ r_eax = (u32)(r_eax+r_ecx+0x1000u);
    /* 0045c5f3: jmp 0x45c616 */ goto L_0045c616;
L_0045c5f5:; BB(0x0045c5f5);
    /* 0045c5f5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045c5f8: imul edx, edx, 0x1c00 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1c00u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c5fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c601: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 0045c605: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c608: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045c60b: lea eax, [ecx + edx + 0x1000] */ r_eax = (u32)(r_ecx+r_edx+0x1000u);
    /* 0045c612: jmp 0x45c616 */ goto L_0045c616;
L_0045c614:; BB(0x0045c614);
    /* 0045c614: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045c616:; BB(0x0045c616);
    /* 0045c616: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c618: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c619: ret 8 */ FN_RET(0x0045c4ac); r_esp += 12; return;
}

void f_0045c64c(void) /* FUN_0045c64c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c64c);
    /* 0045c64c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c64d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c64f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c650: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045c653: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0045c656: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c657: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045c65a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c65b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c65e: call 0x45c6ca */ r_esp -= 4; W32(r_esp, 0x45c663u); f_0045c6ca();
    /* 0045c663: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c666: je 0x45c687 */ if (fZ) goto L_0045c687;
L_0045c668:; BB(0x0045c668);
    /* 0045c668: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0045c66b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c66c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c66f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c670: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c673: call 0x45c6ca */ r_esp -= 4; W32(r_esp, 0x45c678u); f_0045c6ca();
    /* 0045c678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c679: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c67c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c67d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c680: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45c685u); f_0045c4ac();
    /* 0045c685: jmp 0x45c689 */ goto L_0045c689;
L_0045c687:; BB(0x0045c687);
    /* 0045c687: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045c689:; BB(0x0045c689);
    /* 0045c689: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c68b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c68c: ret 0xc */ FN_RET(0x0045c64c); r_esp += 16; return;
}

void f_0045c68f(void) /* FUN_0045c68f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c68f);
    /* 0045c68f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c690: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c692: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c693: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045c696: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c699: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c69a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c69d: call 0x45c736 */ r_esp -= 4; W32(r_esp, 0x45c6a2u); f_0045c736();
    /* 0045c6a2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c6a5: je 0x45c6c2 */ if (fZ) goto L_0045c6c2;
L_0045c6a7:; BB(0x0045c6a7);
    /* 0045c6a7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045c6aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c6ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c6ae: call 0x45c736 */ r_esp -= 4; W32(r_esp, 0x45c6b3u); f_0045c736();
    /* 0045c6b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c6b4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c6b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c6b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c6bb: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45c6c0u); f_0045c4ac();
    /* 0045c6c0: jmp 0x45c6c4 */ goto L_0045c6c4;
L_0045c6c2:; BB(0x0045c6c2);
    /* 0045c6c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045c6c4:; BB(0x0045c6c4);
    /* 0045c6c4: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c6c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c6c7: ret 8 */ FN_RET(0x0045c68f); r_esp += 12; return;
}

void f_0045c6ca(void) /* FUN_0045c6ca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c6ca);
    /* 0045c6ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c6cb: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c6cd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c6d0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045c6d3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045c6da: jmp 0x45c6e5 */ goto L_0045c6e5;
L_0045c6dc:; BB(0x0045c6dc);
    /* 0045c6dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c6df: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c6e2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045c6e5:; BB(0x0045c6e5);
    /* 0045c6e5: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045c6e9: jge 0x45c72d */ if ((fS==fO)) goto L_0045c72d;
L_0045c6eb:; BB(0x0045c6eb);
    /* 0045c6eb: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c6ef: je 0x45c706 */ if (fZ) goto L_0045c706;
L_0045c6f1:; BB(0x0045c6f1);
    /* 0045c6f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c6f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c6f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c6f8: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c6fdu); f_0045c419();
    /* 0045c6fd: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0045c700: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c702: je 0x45c706 */ if (fZ) goto L_0045c706;
L_0045c704:; BB(0x0045c704);
    /* 0045c704: jmp 0x45c6dc */ goto L_0045c6dc;
L_0045c706:; BB(0x0045c706);
    /* 0045c706: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c709: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c70a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c70d: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c712u); f_0045c419();
    /* 0045c712: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c715: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c716: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c719: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c71a: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x45c71fu); f_006240c0();
    /* 0045c71f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c722: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c724: jne 0x45c72b */ if (!fZ) goto L_0045c72b;
L_0045c726:; BB(0x0045c726);
    /* 0045c726: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c729: jmp 0x45c730 */ goto L_0045c730;
L_0045c72b:; BB(0x0045c72b);
    /* 0045c72b: jmp 0x45c6dc */ goto L_0045c6dc;
L_0045c72d:; BB(0x0045c72d);
    /* 0045c72d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0045c730:; BB(0x0045c730);
    /* 0045c730: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c733: ret 8 */ FN_RET(0x0045c6ca); r_esp += 12; return;
}

void f_0045c736(void) /* FUN_0045c736 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c736);
    /* 0045c736: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c737: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c739: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c73c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045c73f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045c746: jmp 0x45c751 */ goto L_0045c751;
L_0045c748:; BB(0x0045c748);
    /* 0045c748: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c74b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c74e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045c751:; BB(0x0045c751);
    /* 0045c751: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045c755: jge 0x45c772 */ if ((fS==fO)) goto L_0045c772;
L_0045c757:; BB(0x0045c757);
    /* 0045c757: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c75a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c75b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c75e: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c763u); f_0045c419();
    /* 0045c763: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c766: cmp edx, dword ptr [eax + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x38u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c769: jne 0x45c770 */ if (!fZ) goto L_0045c770;
L_0045c76b:; BB(0x0045c76b);
    /* 0045c76b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c76e: jmp 0x45c775 */ goto L_0045c775;
L_0045c770:; BB(0x0045c770);
    /* 0045c770: jmp 0x45c748 */ goto L_0045c748;
L_0045c772:; BB(0x0045c772);
    /* 0045c772: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0045c775:; BB(0x0045c775);
    /* 0045c775: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c777: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c778: ret 4 */ FN_RET(0x0045c736); r_esp += 8; return;
}

void f_0045c77b(void) /* FUN_0045c77b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c77b);
    /* 0045c77b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c77c: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c77e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c781: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045c784: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c78b: je 0x45c794 */ if (fZ) goto L_0045c794;
L_0045c78d:; BB(0x0045c78d);
    /* 0045c78d: mov eax, 1 */ r_eax = 0x1u;
    /* 0045c792: jmp 0x45c7da */ goto L_0045c7da;
L_0045c794:; BB(0x0045c794);
    /* 0045c794: push 0x67b1bc */ { u32 v = 0x67b1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0045c799: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c79c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c79d: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x45c7a2u); f_006243c0();
    /* 0045c7a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c7a5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045c7a8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c7ac: je 0x45c7d8 */ if (fZ) goto L_0045c7d8;
L_0045c7ae:; BB(0x0045c7ae);
    /* 0045c7ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c7b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c7b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c7b4: push 0x1c00 */ { u32 v = 0x1c00u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c7b9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c7bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c7bd: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x45c7c2u); f_00624f00();
    /* 0045c7c2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c7c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c7c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c7c9: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x45c7ceu); f_006241d0();
    /* 0045c7ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c7d1: mov eax, 1 */ r_eax = 0x1u;
    /* 0045c7d6: jmp 0x45c7da */ goto L_0045c7da;
L_0045c7d8:; BB(0x0045c7d8);
    /* 0045c7d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045c7da:; BB(0x0045c7da);
    /* 0045c7da: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c7dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c7dd: ret 8 */ FN_RET(0x0045c77b); r_esp += 12; return;
}

void f_0045c7e0(void) /* FUN_0045c7e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c7e0);
    /* 0045c7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c7e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c7e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045c7e9: push 0x67b1c0 */ { u32 v = 0x67b1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c7ee: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c7f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c7f2: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x45c7f7u); f_006243c0();
    /* 0045c7f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c7fa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045c7fd: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c801: je 0x45c83a */ if (fZ) goto L_0045c83a;
L_0045c803:; BB(0x0045c803);
    /* 0045c803: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c806: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c807: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c809: push 0x1c00 */ { u32 v = 0x1c00u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c80e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c811: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c812: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x45c817u); f_00624250();
    /* 0045c817: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c81a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045c81d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c821: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x45c826u); f_006241d0();
    /* 0045c826: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c829: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c82d: je 0x45c833 */ if (fZ) goto L_0045c833;
L_0045c82f:; BB(0x0045c82f);
    /* 0045c82f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045c831: jmp 0x45c83c */ goto L_0045c83c;
L_0045c833:; BB(0x0045c833);
    /* 0045c833: mov eax, 1 */ r_eax = 0x1u;
    /* 0045c838: jmp 0x45c83c */ goto L_0045c83c;
L_0045c83a:; BB(0x0045c83a);
    /* 0045c83a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045c83c:; BB(0x0045c83c);
    /* 0045c83c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c83e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c83f: ret 8 */ FN_RET(0x0045c7e0); r_esp += 12; return;
}

void f_0045c842(void) /* FUN_0045c842 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c842);
    /* 0045c842: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c843: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c845: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c848: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c849: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c84a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045c84d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c850: imul eax, eax, 0x1c00 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1c00u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c856: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045c859: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c85b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045c85e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045c861: imul edx, edx, 0x1c00 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1c00u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c867: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0045c86a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c86c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045c86f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c872: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c875: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c876: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c879: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045c87c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c87d: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x45c882u); f_006240c0();
    /* 0045c882: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c887: jne 0x45c8d7 */ if (!fZ) goto L_0045c8d7;
L_0045c889:; BB(0x0045c889);
    /* 0045c889: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c88c: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0045c88f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c892: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0045c895: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c897: jne 0x45c8d7 */ if (!fZ) goto L_0045c8d7;
L_0045c899:; BB(0x0045c899);
    /* 0045c899: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c89c: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0045c89f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0045c8a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c8a5: imul eax, eax, 0x1c00 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1c00u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c8ab: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0045c8ae: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045c8b0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045c8b3: imul ecx, ecx, 0x1c00 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1c00u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c8b9: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0045c8bc: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045c8be: mov ecx, 0x700 */ r_ecx = 0x700u;
    /* 0045c8c3: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0045c8c5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c8c8: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0045c8cb: mov byte ptr [edx + 1], al */ W8((u32)(r_edx+0x1u), (u8)r_eax);
    /* 0045c8ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c8d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c8d4: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
L_0045c8d7:; BB(0x0045c8d7);
    /* 0045c8d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045c8d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045c8d9: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c8db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c8dc: ret 0xc */ FN_RET(0x0045c842); r_esp += 16; return;
}

void f_0045c8df(void) /* FUN_0045c8df */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c8df);
    /* 0045c8df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c8e0: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c8e2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c8e5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045c8e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045c8ef: jmp 0x45c8fa */ goto L_0045c8fa;
L_0045c8f1:; BB(0x0045c8f1);
    /* 0045c8f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c8f4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c8f7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045c8fa:; BB(0x0045c8fa);
    /* 0045c8fa: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045c8fe: jge 0x45c923 */ if ((fS==fO)) goto L_0045c923;
L_0045c900:; BB(0x0045c900);
    /* 0045c900: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c903: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c906: jne 0x45c90a */ if (!fZ) goto L_0045c90a;
L_0045c908:; BB(0x0045c908);
    /* 0045c908: jmp 0x45c8f1 */ goto L_0045c8f1;
L_0045c90a:; BB(0x0045c90a);
    /* 0045c90a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c90d: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045c910: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c911: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c914: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c915: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c918: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c919: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c91c: call 0x45c842 */ r_esp -= 4; W32(r_esp, 0x45c921u); f_0045c842();
    /* 0045c921: jmp 0x45c8f1 */ goto L_0045c8f1;
L_0045c923:; BB(0x0045c923);
    /* 0045c923: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c926: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c927: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c92a: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c92fu); f_0045c419();
    /* 0045c92f: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0045c932: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c934: jne 0x45c961 */ if (!fZ) goto L_0045c961;
L_0045c936:; BB(0x0045c936);
    /* 0045c936: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c939: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c93a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c93d: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45c942u); f_0045c419();
    /* 0045c942: add eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c946: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c949: imul edx, edx, 0x1c00 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1c00u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045c94f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c952: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 0045c956: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c957: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045c95a: call 0x45c77b */ r_esp -= 4; W32(r_esp, 0x45c95fu); f_0045c77b();
    /* 0045c95f: jmp 0x45c963 */ goto L_0045c963;
L_0045c961:; BB(0x0045c961);
    /* 0045c961: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045c963:; BB(0x0045c963);
    /* 0045c963: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c965: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c966: ret 4 */ FN_RET(0x0045c8df); r_esp += 8; return;
}

void f_0045c969(void) /* FUN_0045c969 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c969);
    /* 0045c969: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c96a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c96c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c96d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045c970: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c972: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c976: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c979: call 0x45c6ca */ r_esp -= 4; W32(r_esp, 0x45c97eu); f_0045c6ca();
    /* 0045c97e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c981: je 0x45c99c */ if (fZ) goto L_0045c99c;
L_0045c983:; BB(0x0045c983);
    /* 0045c983: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c985: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c988: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c989: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c98c: call 0x45c6ca */ r_esp -= 4; W32(r_esp, 0x45c991u); f_0045c6ca();
    /* 0045c991: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c992: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c995: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x45c99au); f_0045c8df();
    /* 0045c99a: jmp 0x45c99e */ goto L_0045c99e;
L_0045c99c:; BB(0x0045c99c);
    /* 0045c99c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045c99e:; BB(0x0045c99e);
    /* 0045c99e: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c9a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c9a1: ret 4 */ FN_RET(0x0045c969); r_esp += 8; return;
}

void f_0045c9a4(void) /* FUN_0045c9a4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c9a4);
    /* 0045c9a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c9a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c9a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c9a8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045c9ab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c9ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c9af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c9b2: call 0x45c736 */ r_esp -= 4; W32(r_esp, 0x45c9b7u); f_0045c736();
    /* 0045c9b7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c9ba: je 0x45c9d3 */ if (fZ) goto L_0045c9d3;
L_0045c9bc:; BB(0x0045c9bc);
    /* 0045c9bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c9bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c9c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c9c3: call 0x45c736 */ r_esp -= 4; W32(r_esp, 0x45c9c8u); f_0045c736();
    /* 0045c9c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c9c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c9cc: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x45c9d1u); f_0045c8df();
    /* 0045c9d1: jmp 0x45c9d5 */ goto L_0045c9d5;
L_0045c9d3:; BB(0x0045c9d3);
    /* 0045c9d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045c9d5:; BB(0x0045c9d5);
    /* 0045c9d5: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c9d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c9d8: ret 4 */ FN_RET(0x0045c9a4); r_esp += 8; return;
}

void f_0045c9db(void) /* FUN_0045c9db */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c9db);
    /* 0045c9db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c9dc: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c9de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c9df: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045c9e2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c9e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c9e6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c9e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c9ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c9ed: call 0x45c6ca */ r_esp -= 4; W32(r_esp, 0x45c9f2u); f_0045c6ca();
    /* 0045c9f2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0045c9f4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c9f7: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0045c9fa: mov eax, edx */ r_eax = r_edx;
    /* 0045c9fc: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c9fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c9ff: ret 8 */ FN_RET(0x0045c9db); r_esp += 12; return;
}

void f_0045ca02(void) /* FUN_0045ca02 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ca02);
    /* 0045ca02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca03: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ca05: mov eax, 0x1c14 */ r_eax = 0x1c14u;
    /* 0045ca0a: call 0x626050 */ r_esp -= 4; W32(r_esp, 0x45ca0fu); f_00626050();
    /* 0045ca0f: mov dword ptr [ebp - 0x1c14], ecx */ W32((u32)(r_ebp+0xffffe3ecu), r_ecx);
    /* 0045ca15: push 0x6f69a0 */ { u32 v = 0x6f69a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca1a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045ca1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca1e: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45ca23u); f_00624510();
    /* 0045ca23: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ca26: mov dword ptr [ebp - 0x1c08], 0 */ W32((u32)(r_ebp+0xffffe3f8u), 0x0u);
    /* 0045ca30: jmp 0x45ca41 */ goto L_0045ca41;
L_0045ca32:; BB(0x0045ca32);
    /* 0045ca32: mov ecx, dword ptr [ebp - 0x1c08] */ r_ecx = R32((u32)(r_ebp+0xffffe3f8u));
    /* 0045ca38: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045ca3b: mov dword ptr [ebp - 0x1c08], ecx */ W32((u32)(r_ebp+0xffffe3f8u), r_ecx);
L_0045ca41:; BB(0x0045ca41);
    /* 0045ca41: cmp dword ptr [ebp - 0x1c08], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffe3f8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ca48: jge 0x45caf3 */ if ((fS==fO)) goto L_0045caf3;
L_0045ca4e:; BB(0x0045ca4e);
    /* 0045ca4e: mov edx, dword ptr [ebp - 0x1c08] */ r_edx = R32((u32)(r_ebp+0xffffe3f8u));
    /* 0045ca54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca55: push 0x67b1c4 */ { u32 v = 0x67b1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca5a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045ca5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca5e: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x45ca63u); f_00624050();
    /* 0045ca63: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ca66: push 0x67b1d0 */ { u32 v = 0x67b1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca6b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045ca6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca6f: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x45ca74u); f_006243c0();
    /* 0045ca74: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ca77: mov dword ptr [ebp - 0x1c10], eax */ W32((u32)(r_ebp+0xffffe3f0u), r_eax);
    /* 0045ca7d: cmp dword ptr [ebp - 0x1c10], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffe3f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ca84: je 0x45caee */ if (fZ) goto L_0045caee;
L_0045ca86:; BB(0x0045ca86);
    /* 0045ca86: mov edx, dword ptr [ebp - 0x1c10] */ r_edx = R32((u32)(r_ebp+0xffffe3f0u));
    /* 0045ca8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca8f: push 0x1c00 */ { u32 v = 0x1c00u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca94: lea eax, [ebp - 0x1c00] */ r_eax = (u32)(r_ebp+0xffffe400u);
    /* 0045ca9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca9b: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x45caa0u); f_00624250();
    /* 0045caa0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045caa3: mov dword ptr [ebp - 0x1c0c], eax */ W32((u32)(r_ebp+0xffffe3f4u), r_eax);
    /* 0045caa9: mov ecx, dword ptr [ebp - 0x1c10] */ r_ecx = R32((u32)(r_ebp+0xffffe3f0u));
    /* 0045caaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cab0: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x45cab5u); f_006241d0();
    /* 0045cab5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045cab8: cmp dword ptr [ebp - 0x1c0c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffe3f4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cabf: je 0x45cac6 */ if (fZ) goto L_0045cac6;
L_0045cac1:; BB(0x0045cac1);
    /* 0045cac1: jmp 0x45ca32 */ goto L_0045ca32;
L_0045cac6:; BB(0x0045cac6);
    /* 0045cac6: lea edx, [ebp - 0x1c00] */ r_edx = (u32)(r_ebp+0xffffe400u);
    /* 0045cacc: mov dword ptr [ebp - 0x1c04], edx */ W32((u32)(r_ebp+0xffffe3fcu), r_edx);
    /* 0045cad2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045cad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045cad6: mov ecx, dword ptr [ebp - 0x1c04] */ r_ecx = R32((u32)(r_ebp+0xffffe3fcu));
    /* 0045cadc: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045cadf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cae0: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x45cae5u); f_006240c0();
    /* 0045cae5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045cae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045caea: jne 0x45caee */ if (!fZ) goto L_0045caee;
L_0045caec:; BB(0x0045caec);
    /* 0045caec: jmp 0x45cb04 */ goto L_0045cb04;
L_0045caee:; BB(0x0045caee);
    /* 0045caee: jmp 0x45ca32 */ goto L_0045ca32;
L_0045caf3:; BB(0x0045caf3);
    /* 0045caf3: push 0x6f69a4 */ { u32 v = 0x6f69a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045caf8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045cafb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cafc: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45cb01u); f_00624510();
    /* 0045cb01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045cb04:; BB(0x0045cb04);
    /* 0045cb04: mov esp, ebp */ r_esp = r_ebp;
    /* 0045cb06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cb07: ret 8 */ FN_RET(0x0045ca02); r_esp += 12; return;
}

void f_0045cb0a(void) /* FUN_0045cb0a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045cb0a);
    /* 0045cb0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cb0b: mov ebp, esp */ r_ebp = r_esp;
    /* 0045cb0d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045cb10: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045cb13: cmp dword ptr [0x6f6f18], 0 */ {  u32 a = R32((u32)(0x6f6f18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cb1a: je 0x45cb20 */ if (fZ) goto L_0045cb20;
L_0045cb1c:; BB(0x0045cb1c);
    /* 0045cb1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045cb1e: jmp 0x45cb5b */ goto L_0045cb5b;
L_0045cb20:; BB(0x0045cb20);
    /* 0045cb20: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cb27: je 0x45cb2d */ if (fZ) goto L_0045cb2d;
L_0045cb29:; BB(0x0045cb29);
    /* 0045cb29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045cb2b: jmp 0x45cb5b */ goto L_0045cb5b;
L_0045cb2d:; BB(0x0045cb2d);
    /* 0045cb2d: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cb34: jne 0x45cb51 */ if (!fZ) goto L_0045cb51;
L_0045cb36:; BB(0x0045cb36);
    /* 0045cb36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cb38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cb3b: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45cb40u); f_0045c419();
    /* 0045cb40: movsx eax, byte ptr [eax + 0x6c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x6cu));
    /* 0045cb44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cb46: je 0x45cb51 */ if (fZ) goto L_0045cb51;
L_0045cb48:; BB(0x0045cb48);
    /* 0045cb48: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0045cb4f: jmp 0x45cb58 */ goto L_0045cb58;
L_0045cb51:; BB(0x0045cb51);
    /* 0045cb51: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0045cb58:; BB(0x0045cb58);
    /* 0045cb58: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_0045cb5b:; BB(0x0045cb5b);
    /* 0045cb5b: mov esp, ebp */ r_esp = r_ebp;
    /* 0045cb5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cb5e: ret  */ FN_RET(0x0045cb0a); r_esp += 4; return;
}

void f_0045cb5f(void) /* FUN_0045cb5f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045cb5f);
    /* 0045cb5f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cb60: mov ebp, esp */ r_ebp = r_esp;
    /* 0045cb62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cb63: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045cb66: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cb6d: je 0x45cb73 */ if (fZ) goto L_0045cb73;
L_0045cb6f:; BB(0x0045cb6f);
    /* 0045cb6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045cb71: jmp 0x45cb81 */ goto L_0045cb81;
L_0045cb73:; BB(0x0045cb73);
    /* 0045cb73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cb75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cb78: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45cb7du); f_0045c419();
    /* 0045cb7d: movsx eax, byte ptr [eax + 0x6d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x6du));
L_0045cb81:; BB(0x0045cb81);
    /* 0045cb81: mov esp, ebp */ r_esp = r_ebp;
    /* 0045cb83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cb84: ret  */ FN_RET(0x0045cb5f); r_esp += 4; return;
}

void f_0045cb85(void) /* FUN_0045cb85 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045cb85);
    /* 0045cb85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cb86: mov ebp, esp */ r_ebp = r_esp;
    /* 0045cb88: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045cb8b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045cb8e: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cb95: je 0x45cbc6 */ if (fZ) goto L_0045cbc6;
L_0045cb97:; BB(0x0045cb97);
    /* 0045cb97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cb99: push 0x67b1d4 */ { u32 v = 0x67b1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cb9e: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0045cba3: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0045cba6: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x45cbabu); f_0061ba62();
    /* 0045cbab: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045cbae: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045cbb2: jl 0x45cbba */ if ((fS!=fO)) goto L_0045cbba;
L_0045cbb4:; BB(0x0045cbb4);
    /* 0045cbb4: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045cbb8: jle 0x45cbc1 */ if ((fZ||fS!=fO)) goto L_0045cbc1;
L_0045cbba:; BB(0x0045cbba);
    /* 0045cbba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0045cbc1:; BB(0x0045cbc1);
    /* 0045cbc1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cbc4: jmp 0x45cbd4 */ goto L_0045cbd4;
L_0045cbc6:; BB(0x0045cbc6);
    /* 0045cbc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cbc8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045cbcb: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45cbd0u); f_0045c419();
    /* 0045cbd0: movsx eax, byte ptr [eax + 0x6e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x6eu));
L_0045cbd4:; BB(0x0045cbd4);
    /* 0045cbd4: mov esp, ebp */ r_esp = r_ebp;
    /* 0045cbd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cbd7: ret  */ FN_RET(0x0045cb85); r_esp += 4; return;
}

void f_0045cbd8(void) /* FUN_0045cbd8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045cbd8);
    /* 0045cbd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cbd9: mov ebp, esp */ r_ebp = r_esp;
    /* 0045cbdb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cbdc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045cbdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cbe1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cbe4: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45cbe9u); f_0045c419();
    /* 0045cbe9: movsx eax, byte ptr [eax + 0x6f] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x6fu));
    /* 0045cbed: mov esp, ebp */ r_esp = r_ebp;
    /* 0045cbef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cbf0: ret  */ FN_RET(0x0045cbd8); r_esp += 4; return;
}

void f_0045cbf1(void) /* FUN_0045cbf1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045cbf1);
    /* 0045cbf1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cbf2: mov ebp, esp */ r_ebp = r_esp;
    /* 0045cbf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cbf5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045cbf6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045cbf9: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cc00: je 0x45cc06 */ if (fZ) goto L_0045cc06;
L_0045cc02:; BB(0x0045cc02);
    /* 0045cc02: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045cc04: jmp 0x45cc42 */ goto L_0045cc42;
L_0045cc06:; BB(0x0045cc06);
    /* 0045cc06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cc09: call 0x45b911 */ r_esp -= 4; W32(r_esp, 0x45cc0eu); f_0045b911();
    /* 0045cc0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cc10: jne 0x45cc16 */ if (!fZ) goto L_0045cc16;
L_0045cc12:; BB(0x0045cc12);
    /* 0045cc12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045cc14: jmp 0x45cc42 */ goto L_0045cc42;
L_0045cc16:; BB(0x0045cc16);
    /* 0045cc16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cc19: cmp dword ptr [eax + 0x12ec4], 0 */ {  u32 a = R32((u32)(r_eax+0x12ec4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cc20: je 0x45cc26 */ if (fZ) goto L_0045cc26;
L_0045cc22:; BB(0x0045cc22);
    /* 0045cc22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045cc24: jmp 0x45cc42 */ goto L_0045cc42;
L_0045cc26:; BB(0x0045cc26);
    /* 0045cc26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cc28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cc2b: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45cc30u); f_0045c419();
    /* 0045cc30: mov esi, eax */ r_esi = r_eax;
    /* 0045cc32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cc35: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x45cc3au); f_005da3ec();
    /* 0045cc3a: movsx eax, byte ptr [esi + eax + 0x82] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+r_eax+0x82u));
L_0045cc42:; BB(0x0045cc42);
    /* 0045cc42: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045cc43: mov esp, ebp */ r_esp = r_ebp;
    /* 0045cc45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cc46: ret  */ FN_RET(0x0045cbf1); r_esp += 4; return;
}

void f_0045cc47(void) /* FUN_0045cc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045cc47);
    /* 0045cc47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cc48: mov ebp, esp */ r_ebp = r_esp;
    /* 0045cc4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cc4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045cc4c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045cc4f: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cc56: je 0x45cc5c */ if (fZ) goto L_0045cc5c;
L_0045cc58:; BB(0x0045cc58);
    /* 0045cc58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045cc5a: jmp 0x45cca8 */ goto L_0045cca8;
L_0045cc5c:; BB(0x0045cc5c);
    /* 0045cc5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cc5f: call 0x45b911 */ r_esp -= 4; W32(r_esp, 0x45cc64u); f_0045b911();
    /* 0045cc64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cc66: jne 0x45cc6c */ if (!fZ) goto L_0045cc6c;
L_0045cc68:; BB(0x0045cc68);
    /* 0045cc68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045cc6a: jmp 0x45cca8 */ goto L_0045cca8;
L_0045cc6c:; BB(0x0045cc6c);
    /* 0045cc6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cc6f: cmp dword ptr [eax + 0x12ec4], 0 */ {  u32 a = R32((u32)(r_eax+0x12ec4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cc76: je 0x45cc7c */ if (fZ) goto L_0045cc7c;
L_0045cc78:; BB(0x0045cc78);
    /* 0045cc78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045cc7a: jmp 0x45cca8 */ goto L_0045cca8;
L_0045cc7c:; BB(0x0045cc7c);
    /* 0045cc7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cc7f: call 0x45cbf1 */ r_esp -= 4; W32(r_esp, 0x45cc84u); f_0045cbf1();
    /* 0045cc84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cc86: jne 0x45cc8c */ if (!fZ) goto L_0045cc8c;
L_0045cc88:; BB(0x0045cc88);
    /* 0045cc88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045cc8a: jmp 0x45cca8 */ goto L_0045cca8;
L_0045cc8c:; BB(0x0045cc8c);
    /* 0045cc8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cc8e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cc91: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45cc96u); f_0045c419();
    /* 0045cc96: mov esi, eax */ r_esi = r_eax;
    /* 0045cc98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cc9b: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x45cca0u); f_005da3ec();
    /* 0045cca0: movsx eax, byte ptr [esi + eax + 0x8a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+r_eax+0x8au));
L_0045cca8:; BB(0x0045cca8);
    /* 0045cca8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045cca9: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ccab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ccac: ret  */ FN_RET(0x0045cc47); r_esp += 4; return;
}

void f_0045ccad(void) /* FUN_0045ccad */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ccad);
    /* 0045ccad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ccae: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ccb0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ccb1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045ccb4: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ccbb: je 0x45ccc1 */ if (fZ) goto L_0045ccc1;
L_0045ccbd:; BB(0x0045ccbd);
    /* 0045ccbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045ccbf: jmp 0x45ccd2 */ goto L_0045ccd2;
L_0045ccc1:; BB(0x0045ccc1);
    /* 0045ccc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ccc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ccc6: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45cccbu); f_0045c419();
    /* 0045cccb: movsx eax, byte ptr [eax + 0x81] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x81u));
L_0045ccd2:; BB(0x0045ccd2);
    /* 0045ccd2: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ccd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ccd5: ret  */ FN_RET(0x0045ccad); r_esp += 4; return;
}

void f_0045ccd6(void) /* FUN_0045ccd6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ccd6);
    /* 0045ccd6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ccd7: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ccd9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ccdc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045ccdf: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cce6: je 0x45ccf1 */ if (fZ) goto L_0045ccf1;
L_0045cce8:; BB(0x0045cce8);
    /* 0045cce8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045ccef: jmp 0x45cd02 */ goto L_0045cd02;
L_0045ccf1:; BB(0x0045ccf1);
    /* 0045ccf1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ccf3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ccf6: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45ccfbu); f_0045c419();
    /* 0045ccfb: movsx eax, byte ptr [eax + 0x70] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x70u));
    /* 0045ccff: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0045cd02:; BB(0x0045cd02);
    /* 0045cd02: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045cd05: mov esp, ebp */ r_esp = r_ebp;
    /* 0045cd07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cd08: ret  */ FN_RET(0x0045ccd6); r_esp += 4; return;
}

void f_0045cd09(void) /* FUN_0045cd09 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045cd09);
    /* 0045cd09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd0a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045cd0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd0d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045cd10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cd15: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45cd1au); f_0045c419();
    /* 0045cd1a: movsx eax, byte ptr [eax + 0x80] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x80u));
    /* 0045cd21: mov esp, ebp */ r_esp = r_ebp;
    /* 0045cd23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cd24: ret  */ FN_RET(0x0045cd09); r_esp += 4; return;
}

void f_0045cd25(void) /* FUN_0045cd25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045cd25);
    /* 0045cd25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd26: mov ebp, esp */ r_ebp = r_esp;
    /* 0045cd28: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045cd2b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045cd2e: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cd35: je 0x45cd40 */ if (fZ) goto L_0045cd40;
L_0045cd37:; BB(0x0045cd37);
    /* 0045cd37: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045cd3e: jmp 0x45cd51 */ goto L_0045cd51;
L_0045cd40:; BB(0x0045cd40);
    /* 0045cd40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cd45: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45cd4au); f_0045c419();
    /* 0045cd4a: movsx eax, byte ptr [eax + 0x70] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x70u));
    /* 0045cd4e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0045cd51:; BB(0x0045cd51);
    /* 0045cd51: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045cd54: mov esp, ebp */ r_esp = r_ebp;
    /* 0045cd56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cd57: ret 4 */ FN_RET(0x0045cd25); r_esp += 8; return;
}

void f_0045cd5a(void) /* FUN_0045cd5a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045cd5a);
    /* 0045cd5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd5b: mov ebp, esp */ r_ebp = r_esp;
    /* 0045cd5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd5e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045cd61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cd66: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45cd6bu); f_0045c419();
    /* 0045cd6b: fld qword ptr [eax + 0x78] */ FPUSH(R_F64((u32)(r_eax+0x78u)));
    /* 0045cd6e: mov esp, ebp */ r_esp = r_ebp;
    /* 0045cd70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cd71: ret  */ FN_RET(0x0045cd5a); r_esp += 4; return;
}

void f_0045cd72(void) /* FUN_0045cd72 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045cd72);
    /* 0045cd72: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd73: mov ebp, esp */ r_ebp = r_esp;
    /* 0045cd75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd76: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045cd79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cd7e: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45cd83u); f_0045c419();
    /* 0045cd83: movsx eax, byte ptr [eax + 0x92] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x92u));
    /* 0045cd8a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045cd8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cd8d: ret  */ FN_RET(0x0045cd72); r_esp += 4; return;
}

void f_0045cd8e(void) /* FUN_0045cd8e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045cd8e);
    /* 0045cd8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd8f: mov ebp, esp */ r_ebp = r_esp;
    /* 0045cd91: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045cd94: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045cd97: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cd9e: je 0x45cdcf */ if (fZ) goto L_0045cdcf;
L_0045cda0:; BB(0x0045cda0);
    /* 0045cda0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cda2: push 0x67b1e0 */ { u32 v = 0x67b1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cda7: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0045cdac: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0045cdaf: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x45cdb4u); f_0061ba62();
    /* 0045cdb4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045cdb7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045cdbb: jl 0x45cdc3 */ if ((fS!=fO)) goto L_0045cdc3;
L_0045cdbd:; BB(0x0045cdbd);
    /* 0045cdbd: cmp dword ptr [ebp - 4], 0x2d */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045cdc1: jle 0x45cdca */ if ((fZ||fS!=fO)) goto L_0045cdca;
L_0045cdc3:; BB(0x0045cdc3);
    /* 0045cdc3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0045cdca:; BB(0x0045cdca);
    /* 0045cdca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cdcd: jmp 0x45cddd */ goto L_0045cddd;
L_0045cdcf:; BB(0x0045cdcf);
    /* 0045cdcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cdd1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045cdd4: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45cdd9u); f_0045c419();
    /* 0045cdd9: movsx eax, byte ptr [eax + 0x40] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x40u));
L_0045cddd:; BB(0x0045cddd);
    /* 0045cddd: mov esp, ebp */ r_esp = r_ebp;
    /* 0045cddf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cde0: ret  */ FN_RET(0x0045cd8e); r_esp += 4; return;
}

void f_0045cde1(void) /* FUN_0045cde1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045cde1);
    /* 0045cde1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cde2: mov ebp, esp */ r_ebp = r_esp;
    /* 0045cde4: mov eax, 0x1c30 */ r_eax = 0x1c30u;
    /* 0045cde9: call 0x626050 */ r_esp -= 4; W32(r_esp, 0x45cdeeu); f_00626050();
    /* 0045cdee: mov dword ptr [ebp - 0x1c30], ecx */ W32((u32)(r_ebp+0xffffe3d0u), r_ecx);
    /* 0045cdf4: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0045cdfb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0045ce02: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0045ce09: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0045ce10: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045ce13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce14: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045ce17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce18: mov ecx, dword ptr [ebp - 0x1c30] */ r_ecx = R32((u32)(r_ebp+0xffffe3d0u));
    /* 0045ce1e: call 0x45c436 */ r_esp -= 4; W32(r_esp, 0x45ce23u); f_0045c436();
    /* 0045ce23: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045ce26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce28: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045ce2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce2c: mov ecx, dword ptr [ebp - 0x1c30] */ r_ecx = R32((u32)(r_ebp+0xffffe3d0u));
    /* 0045ce32: call 0x45c9db */ r_esp -= 4; W32(r_esp, 0x45ce37u); f_0045c9db();
    /* 0045ce37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ce39: jne 0x45cf00 */ if (!fZ) goto L_0045cf00;
L_0045ce3f:; BB(0x0045ce3f);
    /* 0045ce3f: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 0045ce42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce45: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045ce48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce49: mov ecx, dword ptr [ebp - 0x1c30] */ r_ecx = R32((u32)(r_ebp+0xffffe3d0u));
    /* 0045ce4f: call 0x45cfb2 */ r_esp -= 4; W32(r_esp, 0x45ce54u); f_0045cfb2();
    /* 0045ce54: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045ce57: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045ce5a: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0045ce5d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045ce60: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045ce63: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045ce66: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0045ce69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce6a: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 0045ce6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce6e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0045ce71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce72: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45ce77u); f_00429a59();
    /* 0045ce77: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ce7a: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ce7e: jne 0x45ce8b */ if (!fZ) goto L_0045ce8b;
L_0045ce80:; BB(0x0045ce80);
    /* 0045ce80: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ce84: jne 0x45ce8b */ if (!fZ) goto L_0045ce8b;
L_0045ce86:; BB(0x0045ce86);
    /* 0045ce86: jmp 0x45cfac */ goto L_0045cfac;
L_0045ce8b:; BB(0x0045ce8b);
    /* 0045ce8b: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045ce8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce8f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045ce92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce93: mov ecx, dword ptr [ebp - 0x1c30] */ r_ecx = R32((u32)(r_ebp+0xffffe3d0u));
    /* 0045ce99: call 0x45ca02 */ r_esp -= 4; W32(r_esp, 0x45ce9eu); f_0045ca02();
    /* 0045ce9e: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045cea1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045cea2: lea ecx, [ebp - 0x1c28] */ r_ecx = (u32)(r_ebp+0xffffe3d8u);
    /* 0045cea8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cea9: mov ecx, dword ptr [ebp - 0x1c30] */ r_ecx = R32((u32)(r_ebp+0xffffe3d0u));
    /* 0045ceaf: call 0x45c7e0 */ r_esp -= 4; W32(r_esp, 0x45ceb4u); f_0045c7e0();
    /* 0045ceb4: lea edx, [ebp - 0xa28] */ r_edx = (u32)(r_ebp+0xfffff5d8u);
    /* 0045ceba: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0045cebd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045cec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045cec1: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0045cec4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cec5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045cec8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cec9: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45ceceu); f_00429a59();
    /* 0045cece: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ced1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0045ced4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045ced6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0045ced9: mov dword ptr [ebp - 0x1be4], ecx */ W32((u32)(r_ebp+0xffffe41cu), r_ecx);
    /* 0045cedf: mov dword ptr [ebp - 0x1be0], edx */ W32((u32)(r_ebp+0xffffe420u), r_edx);
    /* 0045cee5: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045cee8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045cee9: lea ecx, [ebp - 0x1c28] */ r_ecx = (u32)(r_ebp+0xffffe3d8u);
    /* 0045ceef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cef0: mov ecx, dword ptr [ebp - 0x1c30] */ r_ecx = R32((u32)(r_ebp+0xffffe3d0u));
    /* 0045cef6: call 0x45c77b */ r_esp -= 4; W32(r_esp, 0x45cefbu); f_0045c77b();
    /* 0045cefb: jmp 0x45cfac */ goto L_0045cfac;
L_0045cf00:; BB(0x0045cf00);
    /* 0045cf00: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cf04: jne 0x45cf0b */ if (!fZ) goto L_0045cf0b;
L_0045cf06:; BB(0x0045cf06);
    /* 0045cf06: jmp 0x45cfac */ goto L_0045cfac;
L_0045cf0b:; BB(0x0045cf0b);
    /* 0045cf0b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045cf0e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0045cf11: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0045cf14: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045cf17: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0045cf1a: mov ecx, dword ptr [ebp - 0x1c30] */ r_ecx = R32((u32)(r_ebp+0xffffe3d0u));
    /* 0045cf20: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x45cf25u); f_005da3ec();
    /* 0045cf25: mov dword ptr [ebp - 0x1c2c], eax */ W32((u32)(r_ebp+0xffffe3d4u), r_eax);
    /* 0045cf2b: mov ecx, dword ptr [ebp - 0x1c30] */ r_ecx = R32((u32)(r_ebp+0xffffe3d0u));
    /* 0045cf31: call 0x45b911 */ r_esp -= 4; W32(r_esp, 0x45cf36u); f_0045b911();
    /* 0045cf36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cf38: jne 0x45cf44 */ if (!fZ) goto L_0045cf44;
L_0045cf3a:; BB(0x0045cf3a);
    /* 0045cf3a: mov dword ptr [ebp - 0x1c2c], 0xffffffff */ W32((u32)(r_ebp+0xffffe3d4u), 0xffffffffu);
L_0045cf44:; BB(0x0045cf44);
    /* 0045cf44: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cf48: je 0x45cf54 */ if (fZ) goto L_0045cf54;
L_0045cf4a:; BB(0x0045cf4a);
    /* 0045cf4a: mov dword ptr [ebp - 0x1c2c], 0xfffffffe */ W32((u32)(r_ebp+0xffffe3d4u), 0xfffffffeu);
L_0045cf54:; BB(0x0045cf54);
    /* 0045cf54: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cf58: je 0x45cf64 */ if (fZ) goto L_0045cf64;
L_0045cf5a:; BB(0x0045cf5a);
    /* 0045cf5a: mov dword ptr [ebp - 0x1c2c], 2 */ W32((u32)(r_ebp+0xffffe3d4u), 0x2u);
L_0045cf64:; BB(0x0045cf64);
    /* 0045cf64: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cf68: jne 0x45cf8c */ if (!fZ) goto L_0045cf8c;
L_0045cf6a:; BB(0x0045cf6a);
    /* 0045cf6a: mov edx, dword ptr [ebp - 0x1c2c] */ r_edx = R32((u32)(r_ebp+0xffffe3d4u));
    /* 0045cf70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cf71: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0045cf74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045cf75: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0045cf78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cf79: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045cf7c: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0045cf80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045cf81: mov ecx, dword ptr [ebp - 0x1c30] */ r_ecx = R32((u32)(r_ebp+0xffffe3d0u));
    /* 0045cf87: call 0x45d166 */ r_esp -= 4; W32(r_esp, 0x45cf8cu); f_0045d166();
L_0045cf8c:; BB(0x0045cf8c);
    /* 0045cf8c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045cf8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045cf91: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0045cf94: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045cf97: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 0045cf9a: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 0045cf9d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045cfa0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cfa1: mov ecx, dword ptr [ebp - 0x1c30] */ r_ecx = R32((u32)(r_ebp+0xffffe3d0u));
    /* 0045cfa7: call 0x45c969 */ r_esp -= 4; W32(r_esp, 0x45cfacu); f_0045c969();
L_0045cfac:; BB(0x0045cfac);
    /* 0045cfac: mov esp, ebp */ r_esp = r_ebp;
    /* 0045cfae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cfaf: ret 0x18 */ FN_RET(0x0045cde1); r_esp += 28; return;
}

void f_0045cfb2(void) /* FUN_0045cfb2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045cfb2);
    /* 0045cfb2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cfb3: mov ebp, esp */ r_ebp = r_esp;
    /* 0045cfb5: mov eax, 0x1c14 */ r_eax = 0x1c14u;
    /* 0045cfba: call 0x626050 */ r_esp -= 4; W32(r_esp, 0x45cfbfu); f_00626050();
    /* 0045cfbf: mov dword ptr [ebp - 0x1c14], ecx */ W32((u32)(r_ebp+0xffffe3ecu), r_ecx);
    /* 0045cfc5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cfc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045cfca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045cfcb: mov ecx, dword ptr [ebp - 0x1c14] */ r_ecx = R32((u32)(r_ebp+0xffffe3ecu));
    /* 0045cfd1: call 0x45c9db */ r_esp -= 4; W32(r_esp, 0x45cfd6u); f_0045c9db();
    /* 0045cfd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cfd8: je 0x45cffd */ if (fZ) goto L_0045cffd;
L_0045cfda:; BB(0x0045cfda);
    /* 0045cfda: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045cfdd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cfde: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045cfe1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cfe2: mov ecx, dword ptr [ebp - 0x1c14] */ r_ecx = R32((u32)(r_ebp+0xffffe3ecu));
    /* 0045cfe8: call 0x45c436 */ r_esp -= 4; W32(r_esp, 0x45cfedu); f_0045c436();
    /* 0045cfed: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0045cff0: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0045cff3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0045cff6: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0045cff8: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0045cffb: jmp 0x45d03a */ goto L_0045d03a;
L_0045cffd:; BB(0x0045cffd);
    /* 0045cffd: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d000: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d001: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d004: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d005: mov ecx, dword ptr [ebp - 0x1c14] */ r_ecx = R32((u32)(r_ebp+0xffffe3ecu));
    /* 0045d00b: call 0x45ca02 */ r_esp -= 4; W32(r_esp, 0x45d010u); f_0045ca02();
    /* 0045d010: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045d013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d014: lea ecx, [ebp - 0x1c10] */ r_ecx = (u32)(r_ebp+0xffffe3f0u);
    /* 0045d01a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d01b: mov ecx, dword ptr [ebp - 0x1c14] */ r_ecx = R32((u32)(r_ebp+0xffffe3ecu));
    /* 0045d021: call 0x45c7e0 */ r_esp -= 4; W32(r_esp, 0x45d026u); f_0045c7e0();
    /* 0045d026: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0045d029: mov eax, dword ptr [ebp - 0x1bcc] */ r_eax = R32((u32)(r_ebp+0xffffe434u));
    /* 0045d02f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0045d031: mov ecx, dword ptr [ebp - 0x1bc8] */ r_ecx = R32((u32)(r_ebp+0xffffe438u));
    /* 0045d037: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
L_0045d03a:; BB(0x0045d03a);
    /* 0045d03a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d03c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d03d: ret 0xc */ FN_RET(0x0045cfb2); r_esp += 16; return;
}

void f_0045d040(void) /* FUN_0045d040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d040);
    /* 0045d040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d041: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d043: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d046: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d047: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d048: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d049: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0045d04c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d04f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045d051: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045d052: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d054: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d056: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d058: call 0x6261f0 */ r_esp -= 4; W32(r_esp, 0x45d05du); f_006261f0();
    /* 0045d05d: mov esi, eax */ r_esi = r_eax;
    /* 0045d05f: mov edi, edx */ r_edi = r_edx;
    /* 0045d061: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d064: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0045d067: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045d068: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r; fC = (r < a); }
    /* 0045d06a: adc edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 0045d06c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045d06f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045d070: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d072: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d074: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d075: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d076: call 0x6261f0 */ r_esp -= 4; W32(r_esp, 0x45d07bu); f_006261f0();
    /* 0045d07b: mov ecx, eax */ r_ecx = r_eax;
    /* 0045d07d: mov ebx, edx */ r_ebx = r_edx;
    /* 0045d07f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0045d082: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045d083: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 0045d085: adc ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
    /* 0045d087: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r; fC = (r < a); }
    /* 0045d089: adc edi, ebx */ { u32 c = fC; u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 0045d08b: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0045d08e: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0045d091: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d093: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d095: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d098: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d099: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045d09c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d09d: call 0x626140 */ r_esp -= 4; W32(r_esp, 0x45d0a2u); f_00626140();
    /* 0045d0a2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045d0a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0a7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d0ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0ad: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045d0b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0b1: call 0x626080 */ r_esp -= 4; W32(r_esp, 0x45d0b6u); f_00626080();
    /* 0045d0b6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045d0b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d0bc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045d0bf: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0045d0c1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045d0c4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0045d0c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d0ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045d0cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045d0cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045d0cd: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d0cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d0d0: ret 0xc */ FN_RET(0x0045d040); r_esp += 16; return;
}

void f_0045d0d3(void) /* FUN_0045d0d3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d0d3);
    /* 0045d0d3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0d4: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d0d6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d0d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0dc: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0045d0df: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d0e2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045d0e4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045d0e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0e7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0eb: call 0x6261f0 */ r_esp -= 4; W32(r_esp, 0x45d0f0u); f_006261f0();
    /* 0045d0f0: mov esi, eax */ r_esi = r_eax;
    /* 0045d0f2: mov edi, edx */ r_edi = r_edx;
    /* 0045d0f4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d0f7: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0045d0fa: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045d0fb: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r; fC = (r < a); }
    /* 0045d0fd: adc edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 0045d0ff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045d102: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045d103: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d105: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d107: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d109: call 0x6261f0 */ r_esp -= 4; W32(r_esp, 0x45d10eu); f_006261f0();
    /* 0045d10e: mov ecx, eax */ r_ecx = r_eax;
    /* 0045d110: mov ebx, edx */ r_ebx = r_edx;
    /* 0045d112: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0045d115: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045d116: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 0045d118: adc ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
    /* 0045d11a: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r; fC = (a < b); }
    /* 0045d11c: sbb edi, ebx */ { u32 c = fC; u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 0045d11e: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0045d121: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0045d124: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d126: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d128: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d12b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d12c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045d12f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d130: call 0x626140 */ r_esp -= 4; W32(r_esp, 0x45d135u); f_00626140();
    /* 0045d135: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045d138: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d13a: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d13c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d13f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d140: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045d143: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d144: call 0x626080 */ r_esp -= 4; W32(r_esp, 0x45d149u); f_00626080();
    /* 0045d149: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045d14c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d14f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045d152: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0045d154: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045d157: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0045d15a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d15d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045d15e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045d15f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045d160: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d163: ret 0xc */ FN_RET(0x0045d0d3); r_esp += 16; return;
}

void f_0045d166(void) /* FUN_0045d166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d166);
    /* 0045d166: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d167: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d169: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d16c: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0045d16f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0045d176: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0045d17d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0045d184: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045d187: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045d18a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d18b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045d18d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d18e: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 0045d191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d192: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045d195: call 0x45d0d3 */ r_esp -= 4; W32(r_esp, 0x45d19au); f_0045d0d3();
    /* 0045d19a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045d19c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0045d19f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045d1a2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0045d1a5: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d1a9: jne 0x45d1b6 */ if (!fZ) goto L_0045d1b6;
L_0045d1ab:; BB(0x0045d1ab);
    /* 0045d1ab: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d1af: jne 0x45d1b6 */ if (!fZ) goto L_0045d1b6;
L_0045d1b1:; BB(0x0045d1b1);
    /* 0045d1b1: jmp 0x45d4de */ goto L_0045d4de;
L_0045d1b6:; BB(0x0045d1b6);
    /* 0045d1b6: cmp dword ptr [ebp + 0x14], -2 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d1ba: jne 0x45d1ce */ if (!fZ) goto L_0045d1ce;
L_0045d1bc:; BB(0x0045d1bc);
    /* 0045d1bc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0045d1c3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045d1c6: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x45d1cbu); f_005da3ec();
    /* 0045d1cb: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
L_0045d1ce:; BB(0x0045d1ce);
    /* 0045d1ce: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0045d1d1: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0045d1d4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045d1d7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d1da: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0045d1dd: cmp dword ptr [ebp - 0x44], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045d1e1: ja 0x45d4de */ if ((!fC&&!fZ)) goto L_0045d4de;
L_0045d1e7:; BB(0x0045d1e7);
    /* 0045d1e7: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045d1ea: jmp dword ptr [edx*4 + 0x45d4e4] */ { u32 t = R32((u32)(r_edx*4+0x45d4e4u)); switch (t) { case 0x45d1f1u: goto L_0045d1f1; case 0x45d1f6u: goto L_0045d1f6; case 0x45d2c2u: goto L_0045d2c2; case 0x45d342u: goto L_0045d342; case 0x45d36eu: goto L_0045d36e; case 0x45d3c2u: goto L_0045d3c2; case 0x45d416u: goto L_0045d416; case 0x45d467u: goto L_0045d467; case 0x45d490u: goto L_0045d490; case 0x45d316u: goto L_0045d316; case 0x45d4b9u: goto L_0045d4b9; default: UNSUP(0x0045d1ea, "jump table entry is not a known target"); } }
L_0045d1f1:; BB(0x0045d1f1);
    /* 0045d1f1: jmp 0x45d4de */ goto L_0045d4de;
L_0045d1f6:; BB(0x0045d1f6);
    /* 0045d1f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d1f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1fa: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0045d1fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1fe: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045d201: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45d206u); f_0045c4ac();
    /* 0045d206: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0045d209: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d20d: je 0x45d22e */ if (fZ) goto L_0045d22e;
L_0045d20f:; BB(0x0045d20f);
    /* 0045d20f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045d212: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045d215: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d216: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045d219: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d21a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045d21d: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d220: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d221: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d226u); f_00429a59();
    /* 0045d226: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d229: jmp 0x45d2bd */ goto L_0045d2bd;
L_0045d22e:; BB(0x0045d22e);
    /* 0045d22e: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0045d234: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d238: jge 0x45d256 */ if ((fS==fO)) goto L_0045d256;
L_0045d23a:; BB(0x0045d23a);
    /* 0045d23a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0045d23d: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d241: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d244: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d245: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045d248: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045d24b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d24c: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d251u); f_00429a59();
    /* 0045d251: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d254: jmp 0x45d2a3 */ goto L_0045d2a3;
L_0045d256:; BB(0x0045d256);
    /* 0045d256: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0045d25b: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d25f: jne 0x45d27d */ if (!fZ) goto L_0045d27d;
L_0045d261:; BB(0x0045d261);
    /* 0045d261: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045d264: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d267: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d268: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d26b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d26c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0045d26f: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d272: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d273: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d278u); f_00429a59();
    /* 0045d278: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d27b: jmp 0x45d2a3 */ goto L_0045d2a3;
L_0045d27d:; BB(0x0045d27d);
    /* 0045d27d: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0045d283: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d287: jle 0x45d2a3 */ if ((fZ||fS!=fO)) goto L_0045d2a3;
L_0045d289:; BB(0x0045d289);
    /* 0045d289: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045d28c: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045d28f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d290: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045d293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d294: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045d297: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d29a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d29b: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d2a0u); f_00429a59();
    /* 0045d2a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045d2a3:; BB(0x0045d2a3);
    /* 0045d2a3: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045d2a6: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045d2a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2aa: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045d2ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2ae: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045d2b1: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d2b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2b5: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d2bau); f_00429a59();
    /* 0045d2ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045d2bd:; BB(0x0045d2bd);
    /* 0045d2bd: jmp 0x45d4de */ goto L_0045d4de;
L_0045d2c2:; BB(0x0045d2c2);
    /* 0045d2c2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d2c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2c6: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0045d2c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2ca: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045d2cd: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45d2d2u); f_0045c4ac();
    /* 0045d2d2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045d2d5: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d2d9: je 0x45d2f7 */ if (fZ) goto L_0045d2f7;
L_0045d2db:; BB(0x0045d2db);
    /* 0045d2db: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045d2de: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d2e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2e2: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d2e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2e6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045d2e9: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d2ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2ed: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d2f2u); f_00429a59();
    /* 0045d2f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d2f5: jmp 0x45d311 */ goto L_0045d311;
L_0045d2f7:; BB(0x0045d2f7);
    /* 0045d2f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045d2fa: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d2fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2fe: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d301: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d302: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045d305: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d309: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d30eu); f_00429a59();
    /* 0045d30e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045d311:; BB(0x0045d311);
    /* 0045d311: jmp 0x45d4de */ goto L_0045d4de;
L_0045d316:; BB(0x0045d316);
    /* 0045d316: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d319: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d31a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0045d31d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d31e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045d321: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45d326u); f_0045c4ac();
    /* 0045d326: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045d329: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045d32c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d32d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d330: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d331: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045d334: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d335: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d33au); f_00429a59();
    /* 0045d33a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d33d: jmp 0x45d4de */ goto L_0045d4de;
L_0045d342:; BB(0x0045d342);
    /* 0045d342: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d346: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0045d349: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d34a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045d34d: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45d352u); f_0045c4ac();
    /* 0045d352: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045d355: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045d358: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d359: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045d35c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d35d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045d360: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d361: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d366u); f_00429a59();
    /* 0045d366: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d369: jmp 0x45d4de */ goto L_0045d4de;
L_0045d36e:; BB(0x0045d36e);
    /* 0045d36e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d371: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d372: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0045d375: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d376: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045d379: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45d37eu); f_0045c4ac();
    /* 0045d37e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045d381: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d385: je 0x45d3a3 */ if (fZ) goto L_0045d3a3;
L_0045d387:; BB(0x0045d387);
    /* 0045d387: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d38a: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d38d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d38e: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d391: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d392: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d395: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d399: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d39eu); f_00429a59();
    /* 0045d39e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d3a1: jmp 0x45d3bd */ goto L_0045d3bd;
L_0045d3a3:; BB(0x0045d3a3);
    /* 0045d3a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d3a6: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d3a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3aa: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d3ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d3b1: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d3b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3b5: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d3bau); f_00429a59();
    /* 0045d3ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045d3bd:; BB(0x0045d3bd);
    /* 0045d3bd: jmp 0x45d4de */ goto L_0045d4de;
L_0045d3c2:; BB(0x0045d3c2);
    /* 0045d3c2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d3c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3c6: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0045d3c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3ca: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045d3cd: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45d3d2u); f_0045c4ac();
    /* 0045d3d2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045d3d5: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d3d9: je 0x45d3f7 */ if (fZ) goto L_0045d3f7;
L_0045d3db:; BB(0x0045d3db);
    /* 0045d3db: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045d3de: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d3e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3e2: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d3e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3e6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045d3e9: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045d3ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3ed: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d3f2u); f_00429a59();
    /* 0045d3f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d3f5: jmp 0x45d411 */ goto L_0045d411;
L_0045d3f7:; BB(0x0045d3f7);
    /* 0045d3f7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045d3fa: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d3fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3fe: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d401: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d402: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045d405: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045d408: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d409: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d40eu); f_00429a59();
    /* 0045d40e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045d411:; BB(0x0045d411);
    /* 0045d411: jmp 0x45d4de */ goto L_0045d4de;
L_0045d416:; BB(0x0045d416);
    /* 0045d416: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d419: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d41a: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0045d41d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d41e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045d421: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45d426u); f_0045c4ac();
    /* 0045d426: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045d429: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d42d: je 0x45d44b */ if (fZ) goto L_0045d44b;
L_0045d42f:; BB(0x0045d42f);
    /* 0045d42f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045d432: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045d435: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d436: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045d439: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d43a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045d43d: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d440: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d441: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d446u); f_00429a59();
    /* 0045d446: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d449: jmp 0x45d465 */ goto L_0045d465;
L_0045d44b:; BB(0x0045d44b);
    /* 0045d44b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045d44e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045d451: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d452: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045d455: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d456: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045d459: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d45c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d45d: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d462u); f_00429a59();
    /* 0045d462: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045d465:; BB(0x0045d465);
    /* 0045d465: jmp 0x45d4de */ goto L_0045d4de;
L_0045d467:; BB(0x0045d467);
    /* 0045d467: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d46a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d46b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0045d46e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d46f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045d472: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45d477u); f_0045c4ac();
    /* 0045d477: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0045d47a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045d47d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d47e: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d481: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d482: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045d485: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d486: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d48bu); f_00429a59();
    /* 0045d48b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d48e: jmp 0x45d4de */ goto L_0045d4de;
L_0045d490:; BB(0x0045d490);
    /* 0045d490: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d494: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0045d497: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d498: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045d49b: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45d4a0u); f_0045c4ac();
    /* 0045d4a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045d4a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d4a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d4a7: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d4aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d4ab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d4ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d4af: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d4b4u); f_00429a59();
    /* 0045d4b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d4b7: jmp 0x45d4de */ goto L_0045d4de;
L_0045d4b9:; BB(0x0045d4b9);
    /* 0045d4b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d4bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d4bd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d4bf: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045d4c2: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x45d4c7u); f_0045c4ac();
    /* 0045d4c7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045d4ca: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045d4cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d4ce: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d4d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d4d2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045d4d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d4d6: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x45d4dbu); f_00429a59();
    /* 0045d4db: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045d4de:; BB(0x0045d4de);
    /* 0045d4de: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d4e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d4e1: ret 0x10 */ FN_RET(0x0045d166); r_esp += 20; return;
}

void f_0045d518(void) /* FUN_0045d518 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d518);
    /* 0045d518: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d519: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d51b: mov eax, 0x1cb8 */ r_eax = 0x1cb8u;
    /* 0045d520: call 0x626050 */ r_esp -= 4; W32(r_esp, 0x45d525u); f_00626050();
    /* 0045d525: mov dword ptr [ebp - 0x1cb8], ecx */ W32((u32)(r_ebp+0xffffe348u), r_ecx);
    /* 0045d52b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d52f: jne 0x45d56c */ if (!fZ) goto L_0045d56c;
L_0045d531:; BB(0x0045d531);
    /* 0045d531: push 0x67b1f0 */ { u32 v = 0x67b1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d536: lea eax, [ebp - 0x1cac] */ r_eax = (u32)(r_ebp+0xffffe354u);
    /* 0045d53c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d53d: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x45d542u); f_00624510();
    /* 0045d542: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d545: push 0x2004 */ { u32 v = 0x2004u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d54a: push 0x67b244 */ { u32 v = 0x67b244u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d54f: lea ecx, [ebp - 0x1cac] */ r_ecx = (u32)(r_ebp+0xffffe354u);
    /* 0045d555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d556: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d558: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x45d55du); f_0060f9f3();
    /* 0045d55d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d560: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d563: je 0x45d56c */ if (fZ) goto L_0045d56c;
L_0045d565:; BB(0x0045d565);
    /* 0045d565: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045d567: jmp 0x45d87d */ goto L_0045d87d;
L_0045d56c:; BB(0x0045d56c);
    /* 0045d56c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d56e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d571: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d572: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d578: call 0x45c9db */ r_esp -= 4; W32(r_esp, 0x45d57du); f_0045c9db();
    /* 0045d57d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d57f: je 0x45d6e7 */ if (fZ) goto L_0045d6e7;
L_0045d585:; BB(0x0045d585);
    /* 0045d585: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d587: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d58a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d58b: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d591: call 0x45c436 */ r_esp -= 4; W32(r_esp, 0x45d596u); f_0045c436();
    /* 0045d596: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045d599: mov dword ptr [ebp - 0x1cb0], 0 */ W32((u32)(r_ebp+0xffffe350u), 0x0u);
    /* 0045d5a3: jmp 0x45d5b4 */ goto L_0045d5b4;
L_0045d5a5:; BB(0x0045d5a5);
    /* 0045d5a5: mov ecx, dword ptr [ebp - 0x1cb0] */ r_ecx = R32((u32)(r_ebp+0xffffe350u));
    /* 0045d5ab: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d5ae: mov dword ptr [ebp - 0x1cb0], ecx */ W32((u32)(r_ebp+0xffffe350u), r_ecx);
L_0045d5b4:; BB(0x0045d5b4);
    /* 0045d5b4: cmp dword ptr [ebp - 0x1cb0], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffe350u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d5bb: jge 0x45d5f9 */ if ((fS==fO)) goto L_0045d5f9;
L_0045d5bd:; BB(0x0045d5bd);
    /* 0045d5bd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d5c0: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0045d5c4: imul eax, eax, 0x1c00 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1c00u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045d5ca: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d5d0: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0045d5d4: mov eax, dword ptr [ebp - 0x1cb0] */ r_eax = R32((u32)(r_ebp+0xffffe350u));
    /* 0045d5da: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045d5dd: lea ecx, [edx + eax + 0x1000] */ r_ecx = (u32)(r_edx+r_eax+0x1000u);
    /* 0045d5e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d5e5: mov edx, dword ptr [ebp - 0x1cb0] */ r_edx = R32((u32)(r_ebp+0xffffe350u));
    /* 0045d5eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d5ec: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d5f2: call 0x45c06f */ r_esp -= 4; W32(r_esp, 0x45d5f7u); f_0045c06f();
    /* 0045d5f7: jmp 0x45d5a5 */ goto L_0045d5a5;
L_0045d5f9:; BB(0x0045d5f9);
    /* 0045d5f9: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d5ff: call 0x45b911 */ r_esp -= 4; W32(r_esp, 0x45d604u); f_0045b911();
    /* 0045d604: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d606: je 0x45d6e5 */ if (fZ) goto L_0045d6e5;
L_0045d60c:; BB(0x0045d60c);
    /* 0045d60c: mov dword ptr [ebp - 0x1cb0], 0 */ W32((u32)(r_ebp+0xffffe350u), 0x0u);
    /* 0045d616: jmp 0x45d627 */ goto L_0045d627;
L_0045d618:; BB(0x0045d618);
    /* 0045d618: mov eax, dword ptr [ebp - 0x1cb0] */ r_eax = R32((u32)(r_ebp+0xffffe350u));
    /* 0045d61e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d621: mov dword ptr [ebp - 0x1cb0], eax */ W32((u32)(r_ebp+0xffffe350u), r_eax);
L_0045d627:; BB(0x0045d627);
    /* 0045d627: cmp dword ptr [ebp - 0x1cb0], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffe350u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d62e: jge 0x45d6e5 */ if ((fS==fO)) goto L_0045d6e5;
L_0045d634:; BB(0x0045d634);
    /* 0045d634: mov ecx, dword ptr [ebp - 0x1cb0] */ r_ecx = R32((u32)(r_ebp+0xffffe350u));
    /* 0045d63a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d63b: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d641: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45d646u); f_0045c419();
    /* 0045d646: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0045d649: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d64b: jne 0x45d6e0 */ if (!fZ) goto L_0045d6e0;
L_0045d651:; BB(0x0045d651);
    /* 0045d651: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d655: mov ecx, dword ptr [ebp - 0x1cb0] */ r_ecx = R32((u32)(r_ebp+0xffffe350u));
    /* 0045d65b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d65c: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d662: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45d667u); f_0045c419();
    /* 0045d667: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d66a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d66b: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x45d670u); f_006240c0();
    /* 0045d670: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d673: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d675: jne 0x45d6e0 */ if (!fZ) goto L_0045d6e0;
L_0045d677:; BB(0x0045d677);
    /* 0045d677: mov edx, dword ptr [ebp - 0x1cb0] */ r_edx = R32((u32)(r_ebp+0xffffe350u));
    /* 0045d67d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d67e: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d684: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45d689u); f_0045c419();
    /* 0045d689: cmp dword ptr [eax + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d68d: je 0x45d6e0 */ if (fZ) goto L_0045d6e0;
L_0045d68f:; BB(0x0045d68f);
    /* 0045d68f: mov eax, dword ptr [ebp - 0x1cb0] */ r_eax = R32((u32)(r_ebp+0xffffe350u));
    /* 0045d695: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d696: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d69c: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45d6a1u); f_0045c419();
    /* 0045d6a1: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0045d6a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d6a5: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0045d6ab: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0045d6ae: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0045d6b3: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0045d6b6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045d6b8: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x45d6bbu); call_ind(t); }
    /* 0045d6bb: mov dword ptr [ebp - 0x1cb4], eax */ W32((u32)(r_ebp+0xffffe34cu), r_eax);
    /* 0045d6c1: cmp dword ptr [ebp - 0x1cb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffe34cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d6c8: je 0x45d6e0 */ if (fZ) goto L_0045d6e0;
L_0045d6ca:; BB(0x0045d6ca);
    /* 0045d6ca: mov ecx, dword ptr [ebp - 0x1cb4] */ r_ecx = R32((u32)(r_ebp+0xffffe34cu));
    /* 0045d6d0: call 0x425d41 */ r_esp -= 4; W32(r_esp, 0x45d6d5u); f_00425d41();
    /* 0045d6d5: mov ecx, dword ptr [ebp - 0x1cb4] */ r_ecx = R32((u32)(r_ebp+0xffffe34cu));
    /* 0045d6db: call 0x425c59 */ r_esp -= 4; W32(r_esp, 0x45d6e0u); f_00425c59();
L_0045d6e0:; BB(0x0045d6e0);
    /* 0045d6e0: jmp 0x45d618 */ goto L_0045d618;
L_0045d6e5:; BB(0x0045d6e5);
    /* 0045d6e5: jmp 0x45d762 */ goto L_0045d762;
L_0045d6e7:; BB(0x0045d6e7);
    /* 0045d6e7: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d6ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d6eb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d6ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d6ef: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d6f5: call 0x45ca02 */ r_esp -= 4; W32(r_esp, 0x45d6fau); f_0045ca02();
    /* 0045d6fa: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045d6fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d6fe: lea ecx, [ebp - 0x1c14] */ r_ecx = (u32)(r_ebp+0xffffe3ecu);
    /* 0045d704: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d705: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d70b: call 0x45c7e0 */ r_esp -= 4; W32(r_esp, 0x45d710u); f_0045c7e0();
    /* 0045d710: lea edx, [ebp - 0x1c14] */ r_edx = (u32)(r_ebp+0xffffe3ecu);
    /* 0045d716: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0045d719: mov dword ptr [ebp - 0x1cb0], 0 */ W32((u32)(r_ebp+0xffffe350u), 0x0u);
    /* 0045d723: jmp 0x45d734 */ goto L_0045d734;
L_0045d725:; BB(0x0045d725);
    /* 0045d725: mov eax, dword ptr [ebp - 0x1cb0] */ r_eax = R32((u32)(r_ebp+0xffffe350u));
    /* 0045d72b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d72e: mov dword ptr [ebp - 0x1cb0], eax */ W32((u32)(r_ebp+0xffffe350u), r_eax);
L_0045d734:; BB(0x0045d734);
    /* 0045d734: cmp dword ptr [ebp - 0x1cb0], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffe350u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d73b: jge 0x45d762 */ if ((fS==fO)) goto L_0045d762;
L_0045d73d:; BB(0x0045d73d);
    /* 0045d73d: mov ecx, dword ptr [ebp - 0x1cb0] */ r_ecx = R32((u32)(r_ebp+0xffffe350u));
    /* 0045d743: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045d746: lea edx, [ebp + ecx - 0xc14] */ r_edx = (u32)(r_ebp+r_ecx+0xfffff3ecu);
    /* 0045d74d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d74e: mov eax, dword ptr [ebp - 0x1cb0] */ r_eax = R32((u32)(r_ebp+0xffffe350u));
    /* 0045d754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d755: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d75b: call 0x45c06f */ r_esp -= 4; W32(r_esp, 0x45d760u); f_0045c06f();
    /* 0045d760: jmp 0x45d725 */ goto L_0045d725;
L_0045d762:; BB(0x0045d762);
    /* 0045d762: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d765: mov byte ptr [ecx + 0x65], 0 */ W8((u32)(r_ecx+0x65u), 0x0u);
    /* 0045d769: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d76c: mov byte ptr [edx + 0x64], 0 */ W8((u32)(r_edx+0x64u), 0x0u);
    /* 0045d770: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d773: mov dword ptr [eax + 0x44], 0x1388 */ W32((u32)(r_eax+0x44u), 0x1388u);
    /* 0045d77a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d77d: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 0045d784: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d787: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 0045d78e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d790: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d794: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d79a: call 0x45c9db */ r_esp -= 4; W32(r_esp, 0x45d79fu); f_0045c9db();
    /* 0045d79f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d7a1: je 0x45d7b4 */ if (fZ) goto L_0045d7b4;
L_0045d7a3:; BB(0x0045d7a3);
    /* 0045d7a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d7a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d7a7: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d7ad: call 0x45c969 */ r_esp -= 4; W32(r_esp, 0x45d7b2u); f_0045c969();
    /* 0045d7b2: jmp 0x45d7ca */ goto L_0045d7ca;
L_0045d7b4:; BB(0x0045d7b4);
    /* 0045d7b4: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0045d7b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d7b8: lea eax, [ebp - 0x1c14] */ r_eax = (u32)(r_ebp+0xffffe3ecu);
    /* 0045d7be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d7bf: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d7c5: call 0x45c77b */ r_esp -= 4; W32(r_esp, 0x45d7cau); f_0045c77b();
L_0045d7ca:; BB(0x0045d7ca);
    /* 0045d7ca: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d7d0: call 0x45b911 */ r_esp -= 4; W32(r_esp, 0x45d7d5u); f_0045b911();
    /* 0045d7d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d7d7: je 0x45d856 */ if (fZ) goto L_0045d856;
L_0045d7d9:; BB(0x0045d7d9);
    /* 0045d7d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d7dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d7dd: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0045d7e3: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0045d7e6: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0045d7eb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0045d7ee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045d7f0: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x45d7f3u); call_ind(t); }
    /* 0045d7f3: mov dword ptr [ebp - 0x1cb4], eax */ W32((u32)(r_ebp+0xffffe34cu), r_eax);
    /* 0045d7f9: cmp dword ptr [ebp - 0x1cb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffe34cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d800: je 0x45d856 */ if (fZ) goto L_0045d856;
L_0045d802:; BB(0x0045d802);
    /* 0045d802: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d804: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d806: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d808: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d80b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d80c: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d812: call 0x45c436 */ r_esp -= 4; W32(r_esp, 0x45d817u); f_0045c436();
    /* 0045d817: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d81a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d81b: mov edx, dword ptr [ebp - 0x1cb4] */ r_edx = R32((u32)(r_ebp+0xffffe34cu));
    /* 0045d821: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0045d824: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x45d829u); f_00426561();
    /* 0045d829: mov eax, dword ptr [ebp - 0x1cb4] */ r_eax = R32((u32)(r_ebp+0xffffe34cu));
    /* 0045d82f: mov dword ptr [eax + 0x104], 0 */ W32((u32)(r_eax+0x104u), 0x0u);
    /* 0045d839: mov ecx, dword ptr [ebp - 0x1cb4] */ r_ecx = R32((u32)(r_ebp+0xffffe34cu));
    /* 0045d83f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d840: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0045d846: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0045d849: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0045d84e: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0045d851: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045d853: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x45d856u); call_ind(t); }
L_0045d856:; BB(0x0045d856);
    /* 0045d856: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d859: movsx edx, byte ptr [ecx + 0x94] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x94u));
    /* 0045d860: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d863: je 0x45d878 */ if (fZ) goto L_0045d878;
L_0045d865:; BB(0x0045d865);
    /* 0045d865: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d867: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d86a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d86b: mov ecx, dword ptr [ebp - 0x1cb8] */ r_ecx = R32((u32)(r_ebp+0xffffe348u));
    /* 0045d871: call 0x45ff2b */ r_esp -= 4; W32(r_esp, 0x45d876u); f_0045ff2b();
    /* 0045d876: jmp 0x45d856 */ goto L_0045d856;
L_0045d878:; BB(0x0045d878);
    /* 0045d878: mov eax, 1 */ r_eax = 0x1u;
L_0045d87d:; BB(0x0045d87d);
    /* 0045d87d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d87f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d880: ret 8 */ FN_RET(0x0045d518); r_esp += 12; return;
}

void f_0045d883(void) /* FUN_0045d883 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d883);
    /* 0045d883: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d884: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d886: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d889: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0045d88c: mov dword ptr [ebp - 0x1c], 0x1388 */ W32((u32)(r_ebp+0xffffffe4u), 0x1388u);
    /* 0045d893: mov dword ptr [ebp - 0x18], 0x2710 */ W32((u32)(r_ebp+0xffffffe8u), 0x2710u);
    /* 0045d89a: mov dword ptr [ebp - 0x14], 0xc350 */ W32((u32)(r_ebp+0xffffffecu), 0xc350u);
    /* 0045d8a1: mov dword ptr [ebp - 0x10], 0x186a0 */ W32((u32)(r_ebp+0xfffffff0u), 0x186a0u);
    /* 0045d8a8: mov dword ptr [ebp - 0xc], 0xf4240 */ W32((u32)(r_ebp+0xfffffff4u), 0xf4240u);
    /* 0045d8af: mov dword ptr [ebp - 8], 0x5f5e100 */ W32((u32)(r_ebp+0xfffffff8u), 0x5f5e100u);
    /* 0045d8b6: mov dword ptr [ebp - 4], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9aca00u);
    /* 0045d8bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d8bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d8c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d8c3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045d8c6: call 0x45c436 */ r_esp -= 4; W32(r_esp, 0x45d8cbu); f_0045c436();
    /* 0045d8cb: mov cl, byte ptr [eax + 0x65] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x65u))) & 0xffu);
    /* 0045d8ce: mov byte ptr [ebp - 0x20], cl */ W8((u32)(r_ebp+0xffffffe0u), (u8)r_ecx);
    /* 0045d8d1: movsx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 0045d8d5: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d8d8: jne 0x45d8e1 */ if (!fZ) goto L_0045d8e1;
L_0045d8da:; BB(0x0045d8da);
    /* 0045d8da: mov eax, 0x5f5e100 */ r_eax = 0x5f5e100u;
    /* 0045d8df: jmp 0x45d8f8 */ goto L_0045d8f8;
L_0045d8e1:; BB(0x0045d8e1);
    /* 0045d8e1: movsx eax, byte ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 0045d8e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d8e7: jne 0x45d8f0 */ if (!fZ) goto L_0045d8f0;
L_0045d8e9:; BB(0x0045d8e9);
    /* 0045d8e9: mov eax, 0x9c4 */ r_eax = 0x9c4u;
    /* 0045d8ee: jmp 0x45d8f8 */ goto L_0045d8f8;
L_0045d8f0:; BB(0x0045d8f0);
    /* 0045d8f0: movsx ecx, byte ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 0045d8f4: mov eax, dword ptr [ebp + ecx*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffe0u));
L_0045d8f8:; BB(0x0045d8f8);
    /* 0045d8f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d8fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d8fb: ret 4 */ FN_RET(0x0045d883); r_esp += 8; return;
}

void f_0045d8fe(void) /* FUN_0045d8fe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d8fe);
    /* 0045d8fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d8ff: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d901: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d902: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045d905: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d908: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d90b: mov dword ptr [eax + 0x12ea8], ecx */ W32((u32)(r_eax+0x12ea8u), r_ecx);
    /* 0045d911: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d913: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d914: ret 4 */ FN_RET(0x0045d8fe); r_esp += 8; return;
}

void f_0045d917(void) /* FUN_0045d917 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d917);
    /* 0045d917: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d918: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d91a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d91d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045d920: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d923: cmp dword ptr [eax + 0x12ea8], 0 */ {  u32 a = R32((u32)(r_eax+0x12ea8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d92a: jne 0x45d935 */ if (!fZ) goto L_0045d935;
L_0045d92c:; BB(0x0045d92c);
    /* 0045d92c: mov dword ptr [ebp - 8], 0x64 */ W32((u32)(r_ebp+0xfffffff8u), 0x64u);
    /* 0045d933: jmp 0x45d941 */ goto L_0045d941;
L_0045d935:; BB(0x0045d935);
    /* 0045d935: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d938: mov edx, dword ptr [ecx + 0x12ea8] */ r_edx = R32((u32)(r_ecx+0x12ea8u));
    /* 0045d93e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0045d941:; BB(0x0045d941);
    /* 0045d941: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0045d945: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d947: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d948: ret  */ FN_RET(0x0045d917); r_esp += 4; return;
}

void f_0045d949(void) /* FUN_0045d949 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d949);
    /* 0045d949: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d94a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d94c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d94f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045d952: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d955: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0045d95b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045d95e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0045d964: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d966: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d969: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x45d96eu); f_0045b93e();
    /* 0045d96e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d970: jne 0x45d980 */ if (!fZ) goto L_0045d980;
L_0045d972:; BB(0x0045d972);
    /* 0045d972: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d974: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d977: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x45d97cu); f_0045b93e();
    /* 0045d97c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d97e: je 0x45d997 */ if (fZ) goto L_0045d997;
L_0045d980:; BB(0x0045d980);
    /* 0045d980: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d983: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
    /* 0045d989: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045d98c: mov dword ptr [eax], 0x3b9aca00 */ W32((u32)(r_eax), 0x3b9aca00u);
    /* 0045d992: jmp 0x45dd69 */ goto L_0045dd69;
L_0045d997:; BB(0x0045d997);
    /* 0045d997: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d99e: je 0x45da3f */ if (fZ) goto L_0045da3f;
L_0045d9a4:; BB(0x0045d9a4);
    /* 0045d9a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d9a7: mov edx, dword ptr [ecx + 0x12ea8] */ r_edx = R32((u32)(r_ecx+0x12ea8u));
    /* 0045d9ad: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0045d9b0: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d9b4: jg 0x45d9c4 */ if ((!fZ&&fS==fO)) goto L_0045d9c4;
L_0045d9b6:; BB(0x0045d9b6);
    /* 0045d9b6: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d9ba: je 0x45d9ec */ if (fZ) goto L_0045d9ec;
L_0045d9bc:; BB(0x0045d9bc);
    /* 0045d9bc: cmp dword ptr [ebp - 8], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d9c0: je 0x45d9d8 */ if (fZ) goto L_0045d9d8;
L_0045d9c2:; BB(0x0045d9c2);
    /* 0045d9c2: jmp 0x45da28 */ goto L_0045da28;
L_0045d9c4:; BB(0x0045d9c4);
    /* 0045d9c4: cmp dword ptr [ebp - 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d9cb: je 0x45da00 */ if (fZ) goto L_0045da00;
L_0045d9cd:; BB(0x0045d9cd);
    /* 0045d9cd: cmp dword ptr [ebp - 8], 0x9c4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9c4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d9d4: je 0x45da14 */ if (fZ) goto L_0045da14;
L_0045d9d6:; BB(0x0045d9d6);
    /* 0045d9d6: jmp 0x45da28 */ goto L_0045da28;
L_0045d9d8:; BB(0x0045d9d8);
    /* 0045d9d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d9db: mov dword ptr [eax], 0x19 */ W32((u32)(r_eax), 0x19u);
    /* 0045d9e1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045d9e4: mov dword ptr [ecx], 0x3e8 */ W32((u32)(r_ecx), 0x3e8u);
    /* 0045d9ea: jmp 0x45da3a */ goto L_0045da3a;
L_0045d9ec:; BB(0x0045d9ec);
    /* 0045d9ec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d9ef: mov dword ptr [edx], 0x64 */ W32((u32)(r_edx), 0x64u);
    /* 0045d9f5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045d9f8: mov dword ptr [eax], 0x1388 */ W32((u32)(r_eax), 0x1388u);
    /* 0045d9fe: jmp 0x45da3a */ goto L_0045da3a;
L_0045da00:; BB(0x0045da00);
    /* 0045da00: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045da03: mov dword ptr [ecx], 0x1f4 */ W32((u32)(r_ecx), 0x1f4u);
    /* 0045da09: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045da0c: mov dword ptr [edx], 0x61a8 */ W32((u32)(r_edx), 0x61a8u);
    /* 0045da12: jmp 0x45da3a */ goto L_0045da3a;
L_0045da14:; BB(0x0045da14);
    /* 0045da14: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045da17: mov dword ptr [eax], 0x9c4 */ W32((u32)(r_eax), 0x9c4u);
    /* 0045da1d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045da20: mov dword ptr [ecx], 0xf4240 */ W32((u32)(r_ecx), 0xf4240u);
    /* 0045da26: jmp 0x45da3a */ goto L_0045da3a;
L_0045da28:; BB(0x0045da28);
    /* 0045da28: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045da2b: mov dword ptr [edx], 0x19 */ W32((u32)(r_edx), 0x19u);
    /* 0045da31: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045da34: mov dword ptr [eax], 0x3e8 */ W32((u32)(r_eax), 0x3e8u);
L_0045da3a:; BB(0x0045da3a);
    /* 0045da3a: jmp 0x45dd69 */ goto L_0045dd69;
L_0045da3f:; BB(0x0045da3f);
    /* 0045da3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045da42: mov edx, dword ptr [ecx + 0x12ea8] */ r_edx = R32((u32)(r_ecx+0x12ea8u));
    /* 0045da48: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0045da4b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045da4e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045da51: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045da54: cmp dword ptr [ebp - 0xc], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045da58: ja 0x45dd69 */ if ((!fC&&!fZ)) goto L_0045dd69;
L_0045da5e:; BB(0x0045da5e);
    /* 0045da5e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045da61: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045da63: mov cl, byte ptr [edx + 0x45dd87] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+0x45dd87u))) & 0xffu);
    /* 0045da69: jmp dword ptr [ecx*4 + 0x45dd6f] */ { u32 t = R32((u32)(r_ecx*4+0x45dd6fu)); switch (t) { case 0x45db11u: goto L_0045db11; case 0x45dae3u: goto L_0045dae3; case 0x45da70u: goto L_0045da70; case 0x45da87u: goto L_0045da87; case 0x45dab5u: goto L_0045dab5; case 0x45dd69u: goto L_0045dd69; default: UNSUP(0x0045da69, "jump table entry is not a known target"); } }
L_0045da70:; BB(0x0045da70);
    /* 0045da70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045da73: mov dword ptr [eax], 5 */ W32((u32)(r_eax), 0x5u);
    /* 0045da79: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045da7c: mov dword ptr [ecx], 0x3e8 */ W32((u32)(r_ecx), 0x3e8u);
    /* 0045da82: jmp 0x45dd69 */ goto L_0045dd69;
L_0045da87:; BB(0x0045da87);
    /* 0045da87: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045da8a: mov dword ptr [edx], 0xa */ W32((u32)(r_edx), 0xau);
    /* 0045da90: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045da93: mov dword ptr [eax], 0x7d0 */ W32((u32)(r_eax), 0x7d0u);
    /* 0045da99: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045da9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045da9e: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x45daa3u); f_0045b93e();
    /* 0045daa3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045daa5: je 0x45dab0 */ if (fZ) goto L_0045dab0;
L_0045daa7:; BB(0x0045daa7);
    /* 0045daa7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045daaa: mov dword ptr [ecx], 0x19 */ W32((u32)(r_ecx), 0x19u);
L_0045dab0:; BB(0x0045dab0);
    /* 0045dab0: jmp 0x45dd69 */ goto L_0045dd69;
L_0045dab5:; BB(0x0045dab5);
    /* 0045dab5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045dab8: mov dword ptr [edx], 0x19 */ W32((u32)(r_edx), 0x19u);
    /* 0045dabe: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045dac1: mov dword ptr [eax], 0xbb8 */ W32((u32)(r_eax), 0xbb8u);
    /* 0045dac7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dac9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045dacc: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x45dad1u); f_0045b93e();
    /* 0045dad1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dad3: je 0x45dade */ if (fZ) goto L_0045dade;
L_0045dad5:; BB(0x0045dad5);
    /* 0045dad5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045dad8: mov dword ptr [ecx], 0xfa */ W32((u32)(r_ecx), 0xfau);
L_0045dade:; BB(0x0045dade);
    /* 0045dade: jmp 0x45dd69 */ goto L_0045dd69;
L_0045dae3:; BB(0x0045dae3);
    /* 0045dae3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045dae6: mov dword ptr [edx], 0x64 */ W32((u32)(r_edx), 0x64u);
    /* 0045daec: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045daef: mov dword ptr [eax], 0x3b9aca00 */ W32((u32)(r_eax), 0x3b9aca00u);
    /* 0045daf5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045daf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045dafa: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x45daffu); f_0045b93e();
    /* 0045daff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db01: je 0x45db0c */ if (fZ) goto L_0045db0c;
L_0045db03:; BB(0x0045db03);
    /* 0045db03: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045db06: mov dword ptr [ecx], 0x3e8 */ W32((u32)(r_ecx), 0x3e8u);
L_0045db0c:; BB(0x0045db0c);
    /* 0045db0c: jmp 0x45dd69 */ goto L_0045dd69;
L_0045db11:; BB(0x0045db11);
    /* 0045db11: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045db14: cmp dword ptr [edx + 0x12ec4], 0 */ {  u32 a = R32((u32)(r_edx+0x12ec4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db1b: je 0x45dd57 */ if (fZ) goto L_0045dd57;
L_0045db21:; BB(0x0045db21);
    /* 0045db21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045db24: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0045db27: call 0x448e95 */ r_esp -= 4; W32(r_esp, 0x45db2cu); f_00448e95();
    /* 0045db2c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045db2f: cmp dword ptr [ebp - 0x10], 0x1388 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045db36: jg 0x45db53 */ if ((!fZ&&fS==fO)) goto L_0045db53;
L_0045db38:; BB(0x0045db38);
    /* 0045db38: cmp dword ptr [ebp - 0x10], 0x1388 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db3f: je 0x45dbda */ if (fZ) goto L_0045dbda;
L_0045db45:; BB(0x0045db45);
    /* 0045db45: cmp dword ptr [ebp - 0x10], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db4c: je 0x45db7f */ if (fZ) goto L_0045db7f;
L_0045db4e:; BB(0x0045db4e);
    /* 0045db4e: jmp 0x45dd37 */ goto L_0045dd37;
L_0045db53:; BB(0x0045db53);
    /* 0045db53: cmp dword ptr [ebp - 0x10], 0x61a8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db5a: je 0x45dc2f */ if (fZ) goto L_0045dc2f;
L_0045db60:; BB(0x0045db60);
    /* 0045db60: cmp dword ptr [ebp - 0x10], 0x186a0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db67: je 0x45dc8a */ if (fZ) goto L_0045dc8a;
L_0045db6d:; BB(0x0045db6d);
    /* 0045db6d: cmp dword ptr [ebp - 0x10], 0x7a120 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db74: je 0x45dce1 */ if (fZ) goto L_0045dce1;
L_0045db7a:; BB(0x0045db7a);
    /* 0045db7a: jmp 0x45dd37 */ goto L_0045dd37;
L_0045db7f:; BB(0x0045db7f);
    /* 0045db7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045db82: mov dword ptr [ecx], 0xa */ W32((u32)(r_ecx), 0xau);
    /* 0045db88: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045db8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045db8d: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x45db92u); f_0045b93e();
    /* 0045db92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db94: je 0x45dbd5 */ if (fZ) goto L_0045dbd5;
L_0045db96:; BB(0x0045db96);
    /* 0045db96: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045db99: mov dword ptr [edx], 0x19 */ W32((u32)(r_edx), 0x19u);
    /* 0045db9f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045dba2: mov dword ptr [eax], 0x32 */ W32((u32)(r_eax), 0x32u);
    /* 0045dba8: mov ecx, dword ptr [0x6facd4] */ r_ecx = R32((u32)(0x6facd4u));
    /* 0045dbae: mov ecx, dword ptr [ecx + 0x1cd8] */ r_ecx = R32((u32)(r_ecx+0x1cd8u));
    /* 0045dbb4: call 0x52d504 */ r_esp -= 4; W32(r_esp, 0x45dbb9u); f_0052d504();
    /* 0045dbb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dbbb: jne 0x45dbd5 */ if (!fZ) goto L_0045dbd5;
L_0045dbbd:; BB(0x0045dbbd);
    /* 0045dbbd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045dbc0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045dbc2: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045dbc4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045dbc7: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0045dbc9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045dbcc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045dbce: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045dbd0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045dbd3: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_0045dbd5:; BB(0x0045dbd5);
    /* 0045dbd5: jmp 0x45dd37 */ goto L_0045dd37;
L_0045dbda:; BB(0x0045dbda);
    /* 0045dbda: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045dbdd: mov dword ptr [edx], 0x19 */ W32((u32)(r_edx), 0x19u);
    /* 0045dbe3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dbe5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045dbe8: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x45dbedu); f_0045b93e();
    /* 0045dbed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dbef: je 0x45dc2a */ if (fZ) goto L_0045dc2a;
L_0045dbf1:; BB(0x0045dbf1);
    /* 0045dbf1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045dbf4: mov dword ptr [eax], 0x64 */ W32((u32)(r_eax), 0x64u);
    /* 0045dbfa: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045dbfd: mov dword ptr [ecx], 0xc8 */ W32((u32)(r_ecx), 0xc8u);
    /* 0045dc03: mov edx, dword ptr [0x6facd4] */ r_edx = R32((u32)(0x6facd4u));
    /* 0045dc09: mov ecx, dword ptr [edx + 0x1cd8] */ r_ecx = R32((u32)(r_edx+0x1cd8u));
    /* 0045dc0f: call 0x52d504 */ r_esp -= 4; W32(r_esp, 0x45dc14u); f_0052d504();
    /* 0045dc14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dc16: jne 0x45dc2a */ if (!fZ) goto L_0045dc2a;
L_0045dc18:; BB(0x0045dc18);
    /* 0045dc18: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045dc1b: mov dword ptr [eax], 0xfa */ W32((u32)(r_eax), 0xfau);
    /* 0045dc21: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045dc24: mov dword ptr [ecx], 0x1f4 */ W32((u32)(r_ecx), 0x1f4u);
L_0045dc2a:; BB(0x0045dc2a);
    /* 0045dc2a: jmp 0x45dd37 */ goto L_0045dd37;
L_0045dc2f:; BB(0x0045dc2f);
    /* 0045dc2f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045dc32: mov dword ptr [edx], 0xfa */ W32((u32)(r_edx), 0xfau);
    /* 0045dc38: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045dc3d: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x45dc42u); f_0045b93e();
    /* 0045dc42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dc44: je 0x45dc85 */ if (fZ) goto L_0045dc85;
L_0045dc46:; BB(0x0045dc46);
    /* 0045dc46: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045dc49: mov dword ptr [eax], 0x1f4 */ W32((u32)(r_eax), 0x1f4u);
    /* 0045dc4f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045dc52: mov dword ptr [ecx], 0x3e8 */ W32((u32)(r_ecx), 0x3e8u);
    /* 0045dc58: mov edx, dword ptr [0x6facd4] */ r_edx = R32((u32)(0x6facd4u));
    /* 0045dc5e: mov ecx, dword ptr [edx + 0x1cd8] */ r_ecx = R32((u32)(r_edx+0x1cd8u));
    /* 0045dc64: call 0x52d504 */ r_esp -= 4; W32(r_esp, 0x45dc69u); f_0052d504();
    /* 0045dc69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dc6b: jne 0x45dc85 */ if (!fZ) goto L_0045dc85;
L_0045dc6d:; BB(0x0045dc6d);
    /* 0045dc6d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045dc70: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045dc72: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045dc74: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045dc77: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0045dc79: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045dc7c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045dc7e: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045dc80: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045dc83: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_0045dc85:; BB(0x0045dc85);
    /* 0045dc85: jmp 0x45dd37 */ goto L_0045dd37;
L_0045dc8a:; BB(0x0045dc8a);
    /* 0045dc8a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045dc8d: mov dword ptr [eax], 0x3e8 */ W32((u32)(r_eax), 0x3e8u);
    /* 0045dc93: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045dc98: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x45dc9du); f_0045b93e();
    /* 0045dc9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dc9f: je 0x45dcdf */ if (fZ) goto L_0045dcdf;
L_0045dca1:; BB(0x0045dca1);
    /* 0045dca1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045dca4: mov dword ptr [ecx], 0x9c4 */ W32((u32)(r_ecx), 0x9c4u);
    /* 0045dcaa: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045dcad: mov dword ptr [edx], 0x1388 */ W32((u32)(r_edx), 0x1388u);
    /* 0045dcb3: mov eax, dword ptr [0x6facd4] */ r_eax = R32((u32)(0x6facd4u));
    /* 0045dcb8: mov ecx, dword ptr [eax + 0x1cd8] */ r_ecx = R32((u32)(r_eax+0x1cd8u));
    /* 0045dcbe: call 0x52d504 */ r_esp -= 4; W32(r_esp, 0x45dcc3u); f_0052d504();
    /* 0045dcc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dcc5: jne 0x45dcdf */ if (!fZ) goto L_0045dcdf;
L_0045dcc7:; BB(0x0045dcc7);
    /* 0045dcc7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045dcca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045dccc: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045dcce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045dcd1: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0045dcd3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045dcd6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045dcd8: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045dcda: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045dcdd: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0045dcdf:; BB(0x0045dcdf);
    /* 0045dcdf: jmp 0x45dd37 */ goto L_0045dd37;
L_0045dce1:; BB(0x0045dce1);
    /* 0045dce1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045dce4: mov dword ptr [ecx], 0x1388 */ W32((u32)(r_ecx), 0x1388u);
    /* 0045dcea: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dcec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045dcef: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x45dcf4u); f_0045b93e();
    /* 0045dcf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dcf6: je 0x45dd37 */ if (fZ) goto L_0045dd37;
L_0045dcf8:; BB(0x0045dcf8);
    /* 0045dcf8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045dcfb: mov dword ptr [edx], 0x2710 */ W32((u32)(r_edx), 0x2710u);
    /* 0045dd01: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045dd04: mov dword ptr [eax], 0x4e20 */ W32((u32)(r_eax), 0x4e20u);
    /* 0045dd0a: mov ecx, dword ptr [0x6facd4] */ r_ecx = R32((u32)(0x6facd4u));
    /* 0045dd10: mov ecx, dword ptr [ecx + 0x1cd8] */ r_ecx = R32((u32)(r_ecx+0x1cd8u));
    /* 0045dd16: call 0x52d504 */ r_esp -= 4; W32(r_esp, 0x45dd1bu); f_0052d504();
    /* 0045dd1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dd1d: jne 0x45dd37 */ if (!fZ) goto L_0045dd37;
L_0045dd1f:; BB(0x0045dd1f);
    /* 0045dd1f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045dd22: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045dd24: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045dd26: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045dd29: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0045dd2b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045dd2e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045dd30: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045dd32: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045dd35: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_0045dd37:; BB(0x0045dd37);
    /* 0045dd37: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dd39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045dd3c: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x45dd41u); f_0045b93e();
    /* 0045dd41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dd43: jne 0x45dd55 */ if (!fZ) goto L_0045dd55;
L_0045dd45:; BB(0x0045dd45);
    /* 0045dd45: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045dd48: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0045dd4b: call 0x448e95 */ r_esp -= 4; W32(r_esp, 0x45dd50u); f_00448e95();
    /* 0045dd50: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045dd53: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_0045dd55:; BB(0x0045dd55);
    /* 0045dd55: jmp 0x45dd69 */ goto L_0045dd69;
L_0045dd57:; BB(0x0045dd57);
    /* 0045dd57: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045dd5a: mov dword ptr [edx], 5 */ W32((u32)(r_edx), 0x5u);
    /* 0045dd60: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045dd63: mov dword ptr [eax], 0x3e8 */ W32((u32)(r_eax), 0x3e8u);
L_0045dd69:; BB(0x0045dd69);
    /* 0045dd69: mov esp, ebp */ r_esp = r_ebp;
    /* 0045dd6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045dd6c: ret 8 */ FN_RET(0x0045d949); r_esp += 12; return;
}

void f_0045dda2(void) /* FUN_0045dda2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045dda2);
    /* 0045dda2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045dda3: mov ebp, esp */ r_ebp = r_esp;
    /* 0045dda5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045dda8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045ddab: push 0x67b254 */ { u32 v = 0x67b254u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ddb0: push 0x67b258 */ { u32 v = 0x67b258u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ddb5: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x45ddbau); f_006243c0();
    /* 0045ddba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ddbd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045ddc0: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ddc4: je 0x45ddf1 */ if (fZ) goto L_0045ddf1;
L_0045ddc6:; BB(0x0045ddc6);
    /* 0045ddc6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ddc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ddca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ddcc: push 0x4e38 */ { u32 v = 0x4e38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ddd1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045ddd4: add ecx, 0xe048 */ {  u32 a = r_ecx; u32 b = 0xe048u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045ddda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dddb: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x45dde0u); f_00624250();
    /* 0045dde0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045dde3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045dde6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dde7: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x45ddecu); f_006241d0();
    /* 0045ddec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ddef: jmp 0x45de4b */ goto L_0045de4b;
L_0045ddf1:; BB(0x0045ddf1);
    /* 0045ddf1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045ddf4: mov dword ptr [eax + 0xe048], 1 */ W32((u32)(r_eax+0xe048u), 0x1u);
    /* 0045ddfe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045de05: jmp 0x45de10 */ goto L_0045de10;
L_0045de07:; BB(0x0045de07);
    /* 0045de07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045de0a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045de0d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0045de10:; BB(0x0045de10);
    /* 0045de10: cmp dword ptr [ebp - 4], 0x3e9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3e9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045de17: jge 0x45de4b */ if ((fS==fO)) goto L_0045de4b;
L_0045de19:; BB(0x0045de19);
    /* 0045de19: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045de20: jmp 0x45de2b */ goto L_0045de2b;
L_0045de22:; BB(0x0045de22);
    /* 0045de22: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045de25: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045de28: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0045de2b:; BB(0x0045de2b);
    /* 0045de2b: cmp dword ptr [ebp - 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045de2f: jge 0x45de49 */ if ((fS==fO)) goto L_0045de49;
L_0045de31:; BB(0x0045de31);
    /* 0045de31: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045de34: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045de37: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045de3a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045de3c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045de3f: mov byte ptr [edx + ecx + 0xe04c], 0 */ W8((u32)(r_edx+r_ecx+0xe04cu), 0x0u);
    /* 0045de47: jmp 0x45de22 */ goto L_0045de22;
L_0045de49:; BB(0x0045de49);
    /* 0045de49: jmp 0x45de07 */ goto L_0045de07;
L_0045de4b:; BB(0x0045de4b);
    /* 0045de4b: mov esp, ebp */ r_esp = r_ebp;
    /* 0045de4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045de4e: ret  */ FN_RET(0x0045dda2); r_esp += 4; return;
}

void f_0045de4f(void) /* FUN_0045de4f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045de4f);
    /* 0045de4f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045de50: mov ebp, esp */ r_ebp = r_esp;
    /* 0045de52: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045de55: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045de58: push 0x67b264 */ { u32 v = 0x67b264u; r_esp -= 4; W32(r_esp, v); }
    /* 0045de5d: push 0x67b268 */ { u32 v = 0x67b268u; r_esp -= 4; W32(r_esp, v); }
    /* 0045de62: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x45de67u); f_006243c0();
    /* 0045de67: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045de6a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045de6d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045de71: je 0x45de9c */ if (fZ) goto L_0045de9c;
L_0045de73:; BB(0x0045de73);
    /* 0045de73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045de76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045de77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045de79: push 0x4e38 */ { u32 v = 0x4e38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045de7e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045de81: add ecx, 0xe048 */ {  u32 a = r_ecx; u32 b = 0xe048u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045de87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045de88: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x45de8du); f_00624f00();
    /* 0045de8d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045de90: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045de93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045de94: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x45de99u); f_006241d0();
    /* 0045de99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045de9c:; BB(0x0045de9c);
    /* 0045de9c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045de9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045de9f: ret  */ FN_RET(0x0045de4f); r_esp += 4; return;
}

void f_0045dea0(void) /* FUN_0045dea0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045dea0);
    /* 0045dea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045dea1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045dea3: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045dea6: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0045dea9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0045deb0: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0045deb3: mov ecx, dword ptr [eax + 0xe048] */ r_ecx = R32((u32)(r_eax+0xe048u));
    /* 0045deb9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045debc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045dec3: jmp 0x45dece */ goto L_0045dece;
L_0045dec5:; BB(0x0045dec5);
    /* 0045dec5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045dec8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045decb: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0045dece:; BB(0x0045dece);
    /* 0045dece: cmp dword ptr [ebp - 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ded2: jge 0x45dee1 */ if ((fS==fO)) goto L_0045dee1;
L_0045ded4:; BB(0x0045ded4);
    /* 0045ded4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ded7: mov dword ptr [ebp + eax*4 - 0x5c], 0xffffffff */ W32((u32)(r_ebp+r_eax*4+0xffffffa4u), 0xffffffffu);
    /* 0045dedf: jmp 0x45dec5 */ goto L_0045dec5;
L_0045dee1:; BB(0x0045dee1);
    /* 0045dee1: cmp dword ptr [ebp - 0xc], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dee5: je 0x45df41 */ if (fZ) goto L_0045df41;
L_0045dee7:; BB(0x0045dee7);
    /* 0045dee7: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dee9: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45deeeu); f_0060ee31();
    /* 0045deee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045def1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045def4: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0045def7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045defe: jmp 0x45df09 */ goto L_0045df09;
L_0045df00:; BB(0x0045df00);
    /* 0045df00: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045df03: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045df06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0045df09:; BB(0x0045df09);
    /* 0045df09: cmp dword ptr [ebp - 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045df0d: jge 0x45df26 */ if ((fS==fO)) goto L_0045df26;
L_0045df0f:; BB(0x0045df0f);
    /* 0045df0f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045df12: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0045df15: cmp eax, dword ptr [ebp + edx*4 - 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0xffffffa4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045df19: jne 0x45df24 */ if (!fZ) goto L_0045df24;
L_0045df1b:; BB(0x0045df1b);
    /* 0045df1b: mov dword ptr [ebp - 0x60], 0xffffffff */ W32((u32)(r_ebp+0xffffffa0u), 0xffffffffu);
    /* 0045df22: jmp 0x45df26 */ goto L_0045df26;
L_0045df24:; BB(0x0045df24);
    /* 0045df24: jmp 0x45df00 */ goto L_0045df00;
L_0045df26:; BB(0x0045df26);
    /* 0045df26: cmp dword ptr [ebp - 0x60], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045df2a: je 0x45df3f */ if (fZ) goto L_0045df3f;
L_0045df2c:; BB(0x0045df2c);
    /* 0045df2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045df2f: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0045df32: mov dword ptr [ebp + ecx*4 - 0x5c], edx */ W32((u32)(r_ebp+r_ecx*4+0xffffffa4u), r_edx);
    /* 0045df36: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045df39: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045df3c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0045df3f:; BB(0x0045df3f);
    /* 0045df3f: jmp 0x45dee1 */ goto L_0045dee1;
L_0045df41:; BB(0x0045df41);
    /* 0045df41: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045df48: jmp 0x45df53 */ goto L_0045df53;
L_0045df4a:; BB(0x0045df4a);
    /* 0045df4a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045df4d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045df50: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0045df53:; BB(0x0045df53);
    /* 0045df53: cmp dword ptr [ebp - 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045df57: jge 0x45df8c */ if ((fS==fO)) goto L_0045df8c;
L_0045df59:; BB(0x0045df59);
    /* 0045df59: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045df5c: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045df5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045df62: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045df64: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0045df67: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045df6a: mov dl, byte ptr [ebp + edx*4 - 0x5c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+r_edx*4+0xffffffa4u))) & 0xffu);
    /* 0045df6e: mov byte ptr [ecx + eax + 0xe04c], dl */ W8((u32)(r_ecx+r_eax+0xe04cu), (u8)r_edx);
    /* 0045df75: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045df78: mov ecx, dword ptr [ebp + eax*4 - 0x5c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffa4u));
    /* 0045df7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045df7d: push 0x67b274 */ { u32 v = 0x67b274u; r_esp -= 4; W32(r_esp, v); }
    /* 0045df82: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x45df87u); f_0060fc40();
    /* 0045df87: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045df8a: jmp 0x45df4a */ goto L_0045df4a;
L_0045df8c:; BB(0x0045df8c);
    /* 0045df8c: push 0x67b278 */ { u32 v = 0x67b278u; r_esp -= 4; W32(r_esp, v); }
    /* 0045df91: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x45df96u); f_0060fc40();
    /* 0045df96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045df99: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0045df9c: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x45dfa1u); f_005da3ec();
    /* 0045dfa1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dfa4: jne 0x45dfbc */ if (!fZ) goto L_0045dfbc;
L_0045dfa6:; BB(0x0045dfa6);
    /* 0045dfa6: cmp dword ptr [0x6f6a20], 0 */ {  u32 a = R32((u32)(0x6f6a20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dfad: jne 0x45dfbc */ if (!fZ) goto L_0045dfbc;
L_0045dfaf:; BB(0x0045dfaf);
    /* 0045dfaf: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0045dfb2: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0045dfb5: call 0x48228e */ r_esp -= 4; W32(r_esp, 0x45dfbau); f_0048228e();
    /* 0045dfba: jmp 0x45e00b */ goto L_0045e00b;
L_0045dfbc:; BB(0x0045dfbc);
    /* 0045dfbc: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0045dfbf: call 0x45e00f */ r_esp -= 4; W32(r_esp, 0x45dfc4u); f_0045e00f();
    /* 0045dfc4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dfc6: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0045dfc9: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x45dfceu); f_0045b93e();
    /* 0045dfce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dfd0: je 0x45e00b */ if (fZ) goto L_0045e00b;
L_0045dfd2:; BB(0x0045dfd2);
    /* 0045dfd2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045dfd9: jmp 0x45dfe4 */ goto L_0045dfe4;
L_0045dfdb:; BB(0x0045dfdb);
    /* 0045dfdb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045dfde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045dfe1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0045dfe4:; BB(0x0045dfe4);
    /* 0045dfe4: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045dfe8: jge 0x45e00b */ if ((fS==fO)) goto L_0045e00b;
L_0045dfea:; BB(0x0045dfea);
    /* 0045dfea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045dfed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dfee: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0045dff1: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45dff6u); f_0045c419();
    /* 0045dff6: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0045dff9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dffb: jne 0x45e009 */ if (!fZ) goto L_0045e009;
L_0045dffd:; BB(0x0045dffd);
    /* 0045dffd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e001: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0045e004: call 0x45e320 */ r_esp -= 4; W32(r_esp, 0x45e009u); f_0045e320();
L_0045e009:; BB(0x0045e009);
    /* 0045e009: jmp 0x45dfdb */ goto L_0045dfdb;
L_0045e00b:; BB(0x0045e00b);
    /* 0045e00b: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e00d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e00e: ret  */ FN_RET(0x0045dea0); r_esp += 4; return;
}

void f_0045e00f(void) /* FUN_0045e00f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e00f);
    /* 0045e00f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e010: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e012: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e013: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045e016: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e019: mov ecx, dword ptr [eax + 0xe048] */ r_ecx = R32((u32)(r_eax+0xe048u));
    /* 0045e01f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045e022: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e025: mov dword ptr [edx + 0xe048], ecx */ W32((u32)(r_edx+0xe048u), r_ecx);
    /* 0045e02b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e02e: cmp dword ptr [eax + 0xe048], 0x3e9 */ {  u32 a = R32((u32)(r_eax+0xe048u)); u32 b = 0x3e9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e038: jne 0x45e047 */ if (!fZ) goto L_0045e047;
L_0045e03a:; BB(0x0045e03a);
    /* 0045e03a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e03d: mov dword ptr [ecx + 0xe048], 1 */ W32((u32)(r_ecx+0xe048u), 0x1u);
L_0045e047:; BB(0x0045e047);
    /* 0045e047: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e04a: call 0x45de4f */ r_esp -= 4; W32(r_esp, 0x45e04fu); f_0045de4f();
    /* 0045e04f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e052: call 0x45e099 */ r_esp -= 4; W32(r_esp, 0x45e057u); f_0045e099();
    /* 0045e057: cmp dword ptr [0x6f6a20], 0 */ {  u32 a = R32((u32)(0x6f6a20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e05e: je 0x45e06b */ if (fZ) goto L_0045e06b;
L_0045e060:; BB(0x0045e060);
    /* 0045e060: mov ecx, dword ptr [0x6f6a20] */ r_ecx = R32((u32)(0x6f6a20u));
    /* 0045e066: call 0x47b7ae */ r_esp -= 4; W32(r_esp, 0x45e06bu); f_0047b7ae();
L_0045e06b:; BB(0x0045e06b);
    /* 0045e06b: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e06d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e06e: ret  */ FN_RET(0x0045e00f); r_esp += 4; return;
}

void f_0045e06f(void) /* FUN_0045e06f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e06f);
    /* 0045e06f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e070: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e072: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e073: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045e076: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e079: cmp dword ptr [eax + 0xe048], 1 */ {  u32 a = R32((u32)(r_eax+0xe048u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e080: jne 0x45e089 */ if (!fZ) goto L_0045e089;
L_0045e082:; BB(0x0045e082);
    /* 0045e082: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 0045e087: jmp 0x45e095 */ goto L_0045e095;
L_0045e089:; BB(0x0045e089);
    /* 0045e089: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e08c: mov eax, dword ptr [ecx + 0xe048] */ r_eax = R32((u32)(r_ecx+0xe048u));
    /* 0045e092: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0045e095:; BB(0x0045e095);
    /* 0045e095: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e097: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e098: ret  */ FN_RET(0x0045e06f); r_esp += 4; return;
}

void f_0045e099(void) /* FUN_0045e099 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e099);
    /* 0045e099: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e09a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e09c: mov eax, 0x1c24 */ r_eax = 0x1c24u;
    /* 0045e0a1: call 0x626050 */ r_esp -= 4; W32(r_esp, 0x45e0a6u); f_00626050();
    /* 0045e0a6: mov dword ptr [ebp - 0x1c24], ecx */ W32((u32)(r_ebp+0xffffe3dcu), r_ecx);
    /* 0045e0ac: mov dword ptr [ebp - 0x1c18], 0 */ W32((u32)(r_ebp+0xffffe3e8u), 0x0u);
    /* 0045e0b6: jmp 0x45e0c7 */ goto L_0045e0c7;
L_0045e0b8:; BB(0x0045e0b8);
    /* 0045e0b8: mov eax, dword ptr [ebp - 0x1c18] */ r_eax = R32((u32)(r_ebp+0xffffe3e8u));
    /* 0045e0be: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e0c1: mov dword ptr [ebp - 0x1c18], eax */ W32((u32)(r_ebp+0xffffe3e8u), r_eax);
L_0045e0c7:; BB(0x0045e0c7);
    /* 0045e0c7: cmp dword ptr [ebp - 0x1c18], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffe3e8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e0ce: jge 0x45e176 */ if ((fS==fO)) goto L_0045e176;
L_0045e0d4:; BB(0x0045e0d4);
    /* 0045e0d4: mov ecx, dword ptr [ebp - 0x1c18] */ r_ecx = R32((u32)(r_ebp+0xffffe3e8u));
    /* 0045e0da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e0db: push 0x67b27c */ { u32 v = 0x67b27cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e0e0: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0045e0e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e0e4: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x45e0e9u); f_00624050();
    /* 0045e0e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e0ec: push 0x67b288 */ { u32 v = 0x67b288u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e0f1: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045e0f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e0f5: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x45e0fau); f_006243c0();
    /* 0045e0fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e0fd: mov dword ptr [ebp - 0x1c1c], eax */ W32((u32)(r_ebp+0xffffe3e4u), r_eax);
    /* 0045e103: cmp dword ptr [ebp - 0x1c1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffe3e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e10a: je 0x45e171 */ if (fZ) goto L_0045e171;
L_0045e10c:; BB(0x0045e10c);
    /* 0045e10c: mov ecx, dword ptr [ebp - 0x1c1c] */ r_ecx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 0045e112: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e113: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e115: push 0x1c00 */ { u32 v = 0x1c00u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e11a: lea edx, [ebp - 0x1c14] */ r_edx = (u32)(r_ebp+0xffffe3ecu);
    /* 0045e120: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e121: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x45e126u); f_00624250();
    /* 0045e126: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e129: mov dword ptr [ebp - 0x1c20], eax */ W32((u32)(r_ebp+0xffffe3e0u), r_eax);
    /* 0045e12f: mov eax, dword ptr [ebp - 0x1c1c] */ r_eax = R32((u32)(r_ebp+0xffffe3e4u));
    /* 0045e135: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e136: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x45e13bu); f_006241d0();
    /* 0045e13b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e13e: cmp dword ptr [ebp - 0x1c20], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffe3e0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e145: je 0x45e14c */ if (fZ) goto L_0045e14c;
L_0045e147:; BB(0x0045e147);
    /* 0045e147: jmp 0x45e0b8 */ goto L_0045e0b8;
L_0045e14c:; BB(0x0045e14c);
    /* 0045e14c: lea ecx, [ebp - 0x1c14] */ r_ecx = (u32)(r_ebp+0xffffe3ecu);
    /* 0045e152: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0045e155: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045e158: add edx, 0x94 */ {  u32 a = r_edx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045e15e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e15f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045e162: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e165: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e166: mov ecx, dword ptr [ebp - 0x1c24] */ r_ecx = R32((u32)(r_ebp+0xffffe3dcu));
    /* 0045e16c: call 0x45e17a */ r_esp -= 4; W32(r_esp, 0x45e171u); f_0045e17a();
L_0045e171:; BB(0x0045e171);
    /* 0045e171: jmp 0x45e0b8 */ goto L_0045e0b8;
L_0045e176:; BB(0x0045e176);
    /* 0045e176: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e178: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e179: ret  */ FN_RET(0x0045e099); r_esp += 4; return;
}

void f_0045e17a(void) /* FUN_0045e17a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e17a);
    /* 0045e17a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e17b: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e17d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e180: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e181: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045e184: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0045e18b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045e18e: call 0x45e06f */ r_esp -= 4; W32(r_esp, 0x45e193u); f_0045e06f();
    /* 0045e193: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045e196: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045e19d: jmp 0x45e1a8 */ goto L_0045e1a8;
L_0045e19f:; BB(0x0045e19f);
    /* 0045e19f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e1a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e1a5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0045e1a8:; BB(0x0045e1a8);
    /* 0045e1a8: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e1ac: jge 0x45e319 */ if ((fS==fO)) goto L_0045e319;
L_0045e1b2:; BB(0x0045e1b2);
    /* 0045e1b2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e1b5: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e1b8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045e1bb: cmp dword ptr [edx + ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e1c0: je 0x45e312 */ if (fZ) goto L_0045e312;
L_0045e1c6:; BB(0x0045e1c6);
    /* 0045e1c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e1c9: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e1cc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045e1cf: movsx edx, byte ptr [ecx + eax + 4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x4u));
    /* 0045e1d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e1d6: jne 0x45e310 */ if (!fZ) goto L_0045e310;
L_0045e1dc:; BB(0x0045e1dc);
    /* 0045e1dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e1df: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e1e2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045e1e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e1e8: cmp edx, dword ptr [ecx + eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e1ec: jl 0x45e212 */ if ((fS!=fO)) goto L_0045e212;
L_0045e1ee:; BB(0x0045e1ee);
    /* 0045e1ee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e1f1: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e1f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e1f7: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e1fa: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045e1fd: movsx ecx, byte ptr [edx + ecx + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x2u));
    /* 0045e202: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045e205: mov eax, dword ptr [edx + eax + 0x1c] */ r_eax = R32((u32)(r_edx+r_eax+0x1cu));
    /* 0045e209: lea ecx, [eax + ecx - 1] */ r_ecx = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 0045e20d: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e210: jle 0x45e25e */ if ((fZ||fS!=fO)) goto L_0045e25e;
L_0045e212:; BB(0x0045e212);
    /* 0045e212: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e215: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045e21b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e21e: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e221: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045e224: cmp edx, dword ptr [ecx + eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e228: jl 0x45e310 */ if ((fS!=fO)) goto L_0045e310;
L_0045e22e:; BB(0x0045e22e);
    /* 0045e22e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e231: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045e237: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e23a: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e23d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e240: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e243: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0045e246: movsx ecx, byte ptr [esi + ecx + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+r_ecx+0x2u));
    /* 0045e24b: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0045e24e: mov eax, dword ptr [esi + eax + 0x1c] */ r_eax = R32((u32)(r_esi+r_eax+0x1cu));
    /* 0045e252: lea ecx, [eax + ecx - 1] */ r_ecx = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 0045e256: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e258: jg 0x45e310 */ if ((!fZ&&fS==fO)) goto L_0045e310;
L_0045e25e:; BB(0x0045e25e);
    /* 0045e25e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e261: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e264: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045e267: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e269: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e26a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045e26d: call 0x45faa7 */ r_esp -= 4; W32(r_esp, 0x45e272u); f_0045faa7();
    /* 0045e272: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045e275: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e278: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e27b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045e27e: mov eax, dword ptr [edx + ecx + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx+0x20u));
    /* 0045e282: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e285: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e288: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e28b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045e28e: mov dword ptr [edx + ecx + 0x20], eax */ W32((u32)(r_edx+r_ecx+0x20u), r_eax);
    /* 0045e292: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e295: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e298: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e29b: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e29e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045e2a1: movsx ecx, byte ptr [edx + ecx + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x2u));
    /* 0045e2a6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045e2a9: mov eax, dword ptr [edx + eax + 0x1c] */ r_eax = R32((u32)(r_edx+r_eax+0x1cu));
    /* 0045e2ad: lea ecx, [eax + ecx - 1] */ r_ecx = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 0045e2b1: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e2b4: je 0x45e2e2 */ if (fZ) goto L_0045e2e2;
L_0045e2b6:; BB(0x0045e2b6);
    /* 0045e2b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e2b9: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045e2bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e2c2: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e2c5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e2c8: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e2cb: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0045e2ce: movsx ecx, byte ptr [esi + ecx + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+r_ecx+0x2u));
    /* 0045e2d3: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0045e2d6: mov eax, dword ptr [esi + eax + 0x1c] */ r_eax = R32((u32)(r_esi+r_eax+0x1cu));
    /* 0045e2da: lea ecx, [eax + ecx - 1] */ r_ecx = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 0045e2de: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e2e0: jne 0x45e2f0 */ if (!fZ) goto L_0045e2f0;
L_0045e2e2:; BB(0x0045e2e2);
    /* 0045e2e2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e2e5: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e2e8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045e2eb: mov byte ptr [eax + edx + 4], 1 */ W8((u32)(r_eax+r_edx+0x4u), 0x1u);
L_0045e2f0:; BB(0x0045e2f0);
    /* 0045e2f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e2f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e2f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e2f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e2f8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e2fb: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e2fe: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045e301: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045e303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e304: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045e307: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e308: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045e30b: call 0x45fdd3 */ r_esp -= 4; W32(r_esp, 0x45e310u); f_0045fdd3();
L_0045e310:; BB(0x0045e310);
    /* 0045e310: jmp 0x45e314 */ goto L_0045e314;
L_0045e312:; BB(0x0045e312);
    /* 0045e312: jmp 0x45e319 */ goto L_0045e319;
L_0045e314:; BB(0x0045e314);
    /* 0045e314: jmp 0x45e19f */ goto L_0045e19f;
L_0045e319:; BB(0x0045e319);
    /* 0045e319: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045e31a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e31c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e31d: ret 8 */ FN_RET(0x0045e17a); r_esp += 12; return;
}

void f_0045e320(void) /* FUN_0045e320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e320);
    /* 0045e320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e321: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e323: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e326: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045e329: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e32c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e32d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e330: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45e335u); f_0045c419();
    /* 0045e335: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045e338: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e33b: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0045e33e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e340: jne 0x45e34b */ if (!fZ) goto L_0045e34b;
L_0045e342:; BB(0x0045e342);
    /* 0045e342: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e345: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e349: jne 0x45e350 */ if (!fZ) goto L_0045e350;
L_0045e34b:; BB(0x0045e34b);
    /* 0045e34b: jmp 0x45e3de */ goto L_0045e3de;
L_0045e350:; BB(0x0045e350);
    /* 0045e350: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e353: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0045e356: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e359: add edx, dword ptr [eax + 0x68] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x68u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045e35c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e35f: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 0045e362: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e365: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 0045e36c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e36f: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0045e373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e374: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e377: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x45e37cu); f_0045c8df();
    /* 0045e37c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e37e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e381: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0045e385: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e386: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e389: call 0x45e662 */ r_esp -= 4; W32(r_esp, 0x45e38eu); f_0045e662();
    /* 0045e38e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e390: je 0x45e3a4 */ if (fZ) goto L_0045e3a4;
L_0045e392:; BB(0x0045e392);
    /* 0045e392: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e395: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045e398: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e399: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e39c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0045e39f: call 0x448ae7 */ r_esp -= 4; W32(r_esp, 0x45e3a4u); f_00448ae7();
L_0045e3a4:; BB(0x0045e3a4);
    /* 0045e3a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e3a7: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0045e3ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e3af: call 0x45e71c */ r_esp -= 4; W32(r_esp, 0x45e3b4u); f_0045e71c();
    /* 0045e3b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e3b6: je 0x45e3ca */ if (fZ) goto L_0045e3ca;
L_0045e3b8:; BB(0x0045e3b8);
    /* 0045e3b8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e3bb: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045e3be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e3c2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0045e3c5: call 0x448b70 */ r_esp -= 4; W32(r_esp, 0x45e3cau); f_00448b70();
L_0045e3ca:; BB(0x0045e3ca);
    /* 0045e3ca: cmp dword ptr [0x6f6a20], 0 */ {  u32 a = R32((u32)(0x6f6a20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e3d1: je 0x45e3de */ if (fZ) goto L_0045e3de;
L_0045e3d3:; BB(0x0045e3d3);
    /* 0045e3d3: mov ecx, dword ptr [0x6f6a20] */ r_ecx = R32((u32)(0x6f6a20u));
    /* 0045e3d9: call 0x47b880 */ r_esp -= 4; W32(r_esp, 0x45e3deu); f_0047b880();
L_0045e3de:; BB(0x0045e3de);
    /* 0045e3de: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e3e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e3e1: ret 4 */ FN_RET(0x0045e320); r_esp += 8; return;
}

void f_0045e3e4(void) /* FUN_0045e3e4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e3e4);
    /* 0045e3e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e3e7: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e3ea: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045e3ed: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045e3f4: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0045e3f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3f8: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0045e3fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3fc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045e3ff: call 0x45d949 */ r_esp -= 4; W32(r_esp, 0x45e404u); f_0045d949();
    /* 0045e404: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e406: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045e409: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x45e40eu); f_0045b93e();
    /* 0045e40e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e410: je 0x45e464 */ if (fZ) goto L_0045e464;
L_0045e412:; BB(0x0045e412);
    /* 0045e412: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e415: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0045e418: cmp dword ptr [ebp - 0x1c], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e41c: jg 0x45e42c */ if ((!fZ&&fS==fO)) goto L_0045e42c;
L_0045e41e:; BB(0x0045e41e);
    /* 0045e41e: cmp dword ptr [ebp - 0x1c], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e422: je 0x45e449 */ if (fZ) goto L_0045e449;
L_0045e424:; BB(0x0045e424);
    /* 0045e424: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e428: je 0x45e440 */ if (fZ) goto L_0045e440;
L_0045e42a:; BB(0x0045e42a);
    /* 0045e42a: jmp 0x45e462 */ goto L_0045e462;
L_0045e42c:; BB(0x0045e42c);
    /* 0045e42c: cmp dword ptr [ebp - 0x1c], 0xfa */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e433: je 0x45e452 */ if (fZ) goto L_0045e452;
L_0045e435:; BB(0x0045e435);
    /* 0045e435: cmp dword ptr [ebp - 0x1c], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e43c: je 0x45e45b */ if (fZ) goto L_0045e45b;
L_0045e43e:; BB(0x0045e43e);
    /* 0045e43e: jmp 0x45e462 */ goto L_0045e462;
L_0045e440:; BB(0x0045e440);
    /* 0045e440: mov dword ptr [ebp - 4], 0x3e8 */ W32((u32)(r_ebp+0xfffffffcu), 0x3e8u);
    /* 0045e447: jmp 0x45e462 */ goto L_0045e462;
L_0045e449:; BB(0x0045e449);
    /* 0045e449: mov dword ptr [ebp - 4], 0x1388 */ W32((u32)(r_ebp+0xfffffffcu), 0x1388u);
    /* 0045e450: jmp 0x45e462 */ goto L_0045e462;
L_0045e452:; BB(0x0045e452);
    /* 0045e452: mov dword ptr [ebp - 4], 0x61a8 */ W32((u32)(r_ebp+0xfffffffcu), 0x61a8u);
    /* 0045e459: jmp 0x45e462 */ goto L_0045e462;
L_0045e45b:; BB(0x0045e45b);
    /* 0045e45b: mov dword ptr [ebp - 4], 0x186a0 */ W32((u32)(r_ebp+0xfffffffcu), 0x186a0u);
L_0045e462:; BB(0x0045e462);
    /* 0045e462: jmp 0x45e4ad */ goto L_0045e4ad;
L_0045e464:; BB(0x0045e464);
    /* 0045e464: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e467: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045e46a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045e46d: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0045e470: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045e473: cmp dword ptr [ebp - 0x20], 0x5f */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045e477: ja 0x45e4ad */ if ((!fC&&!fZ)) goto L_0045e4ad;
L_0045e479:; BB(0x0045e479);
    /* 0045e479: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045e47c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0045e47e: mov dl, byte ptr [eax + 0x45e4ec] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x45e4ecu))) & 0xffu);
    /* 0045e484: jmp dword ptr [edx*4 + 0x45e4d8] */ { u32 t = R32((u32)(r_edx*4+0x45e4d8u)); switch (t) { case 0x45e48bu: goto L_0045e48b; case 0x45e494u: goto L_0045e494; case 0x45e49du: goto L_0045e49d; case 0x45e4a6u: goto L_0045e4a6; case 0x45e4adu: goto L_0045e4ad; default: UNSUP(0x0045e484, "jump table entry is not a known target"); } }
L_0045e48b:; BB(0x0045e48b);
    /* 0045e48b: mov dword ptr [ebp - 4], 0x3e8 */ W32((u32)(r_ebp+0xfffffffcu), 0x3e8u);
    /* 0045e492: jmp 0x45e4ad */ goto L_0045e4ad;
L_0045e494:; BB(0x0045e494);
    /* 0045e494: mov dword ptr [ebp - 4], 0x1388 */ W32((u32)(r_ebp+0xfffffffcu), 0x1388u);
    /* 0045e49b: jmp 0x45e4ad */ goto L_0045e4ad;
L_0045e49d:; BB(0x0045e49d);
    /* 0045e49d: mov dword ptr [ebp - 4], 0x61a8 */ W32((u32)(r_ebp+0xfffffffcu), 0x61a8u);
    /* 0045e4a4: jmp 0x45e4ad */ goto L_0045e4ad;
L_0045e4a6:; BB(0x0045e4a6);
    /* 0045e4a6: mov dword ptr [ebp - 4], 0x186a0 */ W32((u32)(r_ebp+0xfffffffcu), 0x186a0u);
L_0045e4ad:; BB(0x0045e4ad);
    /* 0045e4ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e4af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e4b3: call 0x4298bc */ r_esp -= 4; W32(r_esp, 0x45e4b8u); f_004298bc();
    /* 0045e4b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e4bb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045e4be: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0045e4c1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045e4c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045e4c7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0045e4c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045e4cc: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0045e4cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e4d2: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e4d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e4d5: ret 4 */ FN_RET(0x0045e3e4); r_esp += 8; return;
}

void f_0045e54c(void) /* FUN_0045e54c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e54c);
    /* 0045e54c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e54d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e54f: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e552: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0045e555: mov dword ptr [ebp - 0x20], 0x1388 */ W32((u32)(r_ebp+0xffffffe0u), 0x1388u);
    /* 0045e55c: mov dword ptr [ebp - 0x1c], 0x2710 */ W32((u32)(r_ebp+0xffffffe4u), 0x2710u);
    /* 0045e563: mov dword ptr [ebp - 0x18], 0xc350 */ W32((u32)(r_ebp+0xffffffe8u), 0xc350u);
    /* 0045e56a: mov dword ptr [ebp - 0x14], 0x186a0 */ W32((u32)(r_ebp+0xffffffecu), 0x186a0u);
    /* 0045e571: mov dword ptr [ebp - 0x10], 0xf4240 */ W32((u32)(r_ebp+0xfffffff0u), 0xf4240u);
    /* 0045e578: mov dword ptr [ebp - 0xc], 0x5f5e100 */ W32((u32)(r_ebp+0xfffffff4u), 0x5f5e100u);
    /* 0045e57f: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 0045e586: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e589: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e58a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e58d: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45e592u); f_0045c419();
    /* 0045e592: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045e595: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e598: movsx edx, byte ptr [ecx + 0x65] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x65u));
    /* 0045e59c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e59f: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0045e5a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045e5a4: cmp ecx, dword ptr [ebp + edx*4 - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_edx*4+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e5a8: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0045e5ab: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e5ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e5ae: ret 4 */ FN_RET(0x0045e54c); r_esp += 8; return;
}

void f_0045e5b1(void) /* FUN_0045e5b1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e5b1);
    /* 0045e5b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e5b2: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e5b4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e5b7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045e5ba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e5bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e5be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e5c1: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45e5c6u); f_0045c419();
    /* 0045e5c6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045e5c9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045e5d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e5d3: movsx edx, byte ptr [ecx + 0x65] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x65u));
    /* 0045e5d7: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e5da: je 0x45e5e3 */ if (fZ) goto L_0045e5e3;
L_0045e5dc:; BB(0x0045e5dc);
    /* 0045e5dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e5df: mov byte ptr [eax + 0x64], 1 */ W8((u32)(r_eax+0x64u), 0x1u);
L_0045e5e3:; BB(0x0045e5e3);
    /* 0045e5e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e5e6: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045e5e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e5ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e5ed: call 0x45d883 */ r_esp -= 4; W32(r_esp, 0x45e5f2u); f_0045d883();
    /* 0045e5f2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e5f5: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 0045e5f8: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045e5fa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e5fd: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 0045e600: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e603: cmp dword ptr [eax + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e607: je 0x45e64c */ if (fZ) goto L_0045e64c;
L_0045e609:; BB(0x0045e609);
    /* 0045e609: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e60c: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0045e60f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e610: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0045e615: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0045e618: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0045e61e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045e621: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045e623: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x45e626u); call_ind(t); }
    /* 0045e626: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045e629: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e62b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e62d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e630: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e634: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e637: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0045e63a: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x45e63fu); f_00426561();
    /* 0045e63f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e642: mov dword ptr [edx + 0x104], 0 */ W32((u32)(r_edx+0x104u), 0x0u);
L_0045e64c:; BB(0x0045e64c);
    /* 0045e64c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e64f: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0045e653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e654: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e657: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x45e65cu); f_0045c8df();
    /* 0045e65c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e65e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e65f: ret 4 */ FN_RET(0x0045e5b1); r_esp += 8; return;
}

void f_0045e662(void) /* FUN_0045e662 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e662);
    /* 0045e662: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e663: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e665: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e668: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045e66b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e66e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e66f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e672: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45e677u); f_0045c419();
    /* 0045e677: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045e67a: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e67e: jne 0x45e69f */ if (!fZ) goto L_0045e69f;
L_0045e680:; BB(0x0045e680);
    /* 0045e680: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e683: movsx edx, byte ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x64u));
    /* 0045e687: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e689: je 0x45e714 */ if (fZ) goto L_0045e714;
L_0045e68f:; BB(0x0045e68f);
    /* 0045e68f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e693: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e696: call 0x45e54c */ r_esp -= 4; W32(r_esp, 0x45e69bu); f_0045e54c();
    /* 0045e69b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e69d: je 0x45e714 */ if (fZ) goto L_0045e714;
L_0045e69f:; BB(0x0045e69f);
    /* 0045e69f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e6a2: mov byte ptr [ecx + 0x64], 0 */ W8((u32)(r_ecx+0x64u), 0x0u);
    /* 0045e6a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e6a9: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045e6ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e6ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e6b0: call 0x45d883 */ r_esp -= 4; W32(r_esp, 0x45e6b5u); f_0045d883();
    /* 0045e6b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e6b8: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0045e6bb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0045e6bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e6c0: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 0045e6c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e6c6: cmp dword ptr [ecx + 0x38], 0 */ {  u32 a = R32((u32)(r_ecx+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e6ca: je 0x45e6fd */ if (fZ) goto L_0045e6fd;
L_0045e6cc:; BB(0x0045e6cc);
    /* 0045e6cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e6cf: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0045e6d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e6d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e6d6: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0045e6d9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e6dc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045e6df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045e6e1: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x45e6e4u); call_ind(t); }
    /* 0045e6e4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045e6e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e6e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e6eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e6ee: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e6f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e6f5: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0045e6f8: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x45e6fdu); f_00426561();
L_0045e6fd:; BB(0x0045e6fd);
    /* 0045e6fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e700: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0045e704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e705: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e708: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x45e70du); f_0045c8df();
    /* 0045e70d: mov eax, 1 */ r_eax = 0x1u;
    /* 0045e712: jmp 0x45e716 */ goto L_0045e716;
L_0045e714:; BB(0x0045e714);
    /* 0045e714: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045e716:; BB(0x0045e716);
    /* 0045e716: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e719: ret 8 */ FN_RET(0x0045e662); r_esp += 12; return;
}

void f_0045e71c(void) /* FUN_0045e71c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e71c);
    /* 0045e71c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e71d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e71f: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e722: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0045e725: mov dword ptr [ebp - 0x20], 0x1388 */ W32((u32)(r_ebp+0xffffffe0u), 0x1388u);
    /* 0045e72c: mov dword ptr [ebp - 0x1c], 0x2710 */ W32((u32)(r_ebp+0xffffffe4u), 0x2710u);
    /* 0045e733: mov dword ptr [ebp - 0x18], 0xc350 */ W32((u32)(r_ebp+0xffffffe8u), 0xc350u);
    /* 0045e73a: mov dword ptr [ebp - 0x14], 0x186a0 */ W32((u32)(r_ebp+0xffffffecu), 0x186a0u);
    /* 0045e741: mov dword ptr [ebp - 0x10], 0xf4240 */ W32((u32)(r_ebp+0xfffffff0u), 0xf4240u);
    /* 0045e748: mov dword ptr [ebp - 0xc], 0x5f5e100 */ W32((u32)(r_ebp+0xfffffff4u), 0x5f5e100u);
    /* 0045e74f: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 0045e756: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e75a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045e75d: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x45e762u); f_0045c419();
    /* 0045e762: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045e765: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e768: movsx edx, byte ptr [ecx + 0x65] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x65u));
    /* 0045e76c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045e76f: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045e772: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e776: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045e779: call 0x45e54c */ r_esp -= 4; W32(r_esp, 0x45e77eu); f_0045e54c();
    /* 0045e77e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e780: je 0x45e799 */ if (fZ) goto L_0045e799;
L_0045e782:; BB(0x0045e782);
    /* 0045e782: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e785: movsx edx, byte ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x64u));
    /* 0045e789: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e78b: jne 0x45e799 */ if (!fZ) goto L_0045e799;
L_0045e78d:; BB(0x0045e78d);
    /* 0045e78d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e790: movsx ecx, byte ptr [eax + 0x65] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x65u));
    /* 0045e794: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e797: jne 0x45e79d */ if (!fZ) goto L_0045e79d;
L_0045e799:; BB(0x0045e799);
    /* 0045e799: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045e79b: jmp 0x45e7e6 */ goto L_0045e7e6;
L_0045e79d:; BB(0x0045e79d);
    /* 0045e79d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e7a0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e7a3: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 0045e7a6: cmp ecx, dword ptr [ebp + eax*4 - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_eax*4+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e7aa: jl 0x45e7c5 */ if ((fS!=fO)) goto L_0045e7c5;
L_0045e7ac:; BB(0x0045e7ac);
    /* 0045e7ac: cmp dword ptr [ebp - 0x24], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e7b0: jg 0x45e7c5 */ if ((!fZ&&fS==fO)) goto L_0045e7c5;
L_0045e7b2:; BB(0x0045e7b2);
    /* 0045e7b2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e7b5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045e7b8: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045e7bb: cmp dword ptr [ebp - 0x24], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e7bf: jne 0x45e7c3 */ if (!fZ) goto L_0045e7c3;
L_0045e7c1:; BB(0x0045e7c1);
    /* 0045e7c1: jmp 0x45e7c5 */ goto L_0045e7c5;
L_0045e7c3:; BB(0x0045e7c3);
    /* 0045e7c3: jmp 0x45e79d */ goto L_0045e79d;
L_0045e7c5:; BB(0x0045e7c5);
    /* 0045e7c5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045e7c8: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045e7cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e7ce: mov byte ptr [ecx + 0x65], al */ W8((u32)(r_ecx+0x65u), (u8)r_eax);
    /* 0045e7d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e7d4: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0045e7d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e7d9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045e7dc: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x45e7e1u); f_0045c8df();
    /* 0045e7e1: mov eax, 1 */ r_eax = 0x1u;
L_0045e7e6:; BB(0x0045e7e6);
    /* 0045e7e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e7e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e7e9: ret 4 */ FN_RET(0x0045e71c); r_esp += 8; return;
}

void f_0045e7ec(void) /* FUN_0045e7ec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e7ec);
    /* 0045e7ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e7ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e7ef: sub esp, 0x700 */ {  u32 a = r_esp; u32 b = 0x700u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e7f5: mov dword ptr [ebp - 0x6fc], ecx */ W32((u32)(r_ebp+0xfffff904u), r_ecx);
    /* 0045e7fb: mov dword ptr [ebp - 0x580], 3 */ W32((u32)(r_ebp+0xfffffa80u), 0x3u);
    /* 0045e805: mov dword ptr [ebp - 0x57c], 0xf */ W32((u32)(r_ebp+0xfffffa84u), 0xfu);
    /* 0045e80f: mov dword ptr [ebp - 0x578], 0x1e */ W32((u32)(r_ebp+0xfffffa88u), 0x1eu);
    /* 0045e819: mov dword ptr [ebp - 0x574], 0x3c */ W32((u32)(r_ebp+0xfffffa8cu), 0x3cu);
    /* 0045e823: mov dword ptr [ebp - 0x570], 0xc */ W32((u32)(r_ebp+0xfffffa90u), 0xcu);
    /* 0045e82d: mov dword ptr [ebp - 0x56c], 0x3c */ W32((u32)(r_ebp+0xfffffa94u), 0x3cu);
    /* 0045e837: mov dword ptr [ebp - 0x568], 0x78 */ W32((u32)(r_ebp+0xfffffa98u), 0x78u);
    /* 0045e841: mov dword ptr [ebp - 0x564], 0xf0 */ W32((u32)(r_ebp+0xfffffa9cu), 0xf0u);
    /* 0045e84b: mov dword ptr [ebp - 0x560], 0x2a */ W32((u32)(r_ebp+0xfffffaa0u), 0x2au);
    /* 0045e855: mov dword ptr [ebp - 0x55c], 0xd2 */ W32((u32)(r_ebp+0xfffffaa4u), 0xd2u);
    /* 0045e85f: mov dword ptr [ebp - 0x558], 0x1a4 */ W32((u32)(r_ebp+0xfffffaa8u), 0x1a4u);
    /* 0045e869: mov dword ptr [ebp - 0x554], 0x348 */ W32((u32)(r_ebp+0xfffffaacu), 0x348u);
    /* 0045e873: mov dword ptr [ebp - 0x550], 1 */ W32((u32)(r_ebp+0xfffffab0u), 0x1u);
    /* 0045e87d: mov dword ptr [ebp - 0x54c], 5 */ W32((u32)(r_ebp+0xfffffab4u), 0x5u);
    /* 0045e887: mov dword ptr [ebp - 0x548], 0xa */ W32((u32)(r_ebp+0xfffffab8u), 0xau);
    /* 0045e891: mov dword ptr [ebp - 0x544], 0x14 */ W32((u32)(r_ebp+0xfffffabcu), 0x14u);
    /* 0045e89b: mov dword ptr [ebp - 0x540], 0x78 */ W32((u32)(r_ebp+0xfffffac0u), 0x78u);
    /* 0045e8a5: mov dword ptr [ebp - 0x53c], 0x258 */ W32((u32)(r_ebp+0xfffffac4u), 0x258u);
    /* 0045e8af: mov dword ptr [ebp - 0x538], 0x4b0 */ W32((u32)(r_ebp+0xfffffac8u), 0x4b0u);
    /* 0045e8b9: mov dword ptr [ebp - 0x534], 0x960 */ W32((u32)(r_ebp+0xfffffaccu), 0x960u);
    /* 0045e8c3: mov dword ptr [ebp - 0x530], 3 */ W32((u32)(r_ebp+0xfffffad0u), 0x3u);
    /* 0045e8cd: mov dword ptr [ebp - 0x52c], 0xf */ W32((u32)(r_ebp+0xfffffad4u), 0xfu);
    /* 0045e8d7: mov dword ptr [ebp - 0x528], 0x1e */ W32((u32)(r_ebp+0xfffffad8u), 0x1eu);
    /* 0045e8e1: mov dword ptr [ebp - 0x524], 0x3c */ W32((u32)(r_ebp+0xfffffadcu), 0x3cu);
    /* 0045e8eb: mov dword ptr [ebp - 0x520], 1 */ W32((u32)(r_ebp+0xfffffae0u), 0x1u);
    /* 0045e8f5: mov dword ptr [ebp - 0x51c], 5 */ W32((u32)(r_ebp+0xfffffae4u), 0x5u);
    /* 0045e8ff: mov dword ptr [ebp - 0x518], 0xa */ W32((u32)(r_ebp+0xfffffae8u), 0xau);
    /* 0045e909: mov dword ptr [ebp - 0x514], 0x14 */ W32((u32)(r_ebp+0xfffffaecu), 0x14u);
    /* 0045e913: mov dword ptr [ebp - 0x510], 0x550 */ W32((u32)(r_ebp+0xfffffaf0u), 0x550u);
    /* 0045e91d: mov dword ptr [ebp - 0x50c], 0xaa0 */ W32((u32)(r_ebp+0xfffffaf4u), 0xaa0u);
    /* 0045e927: mov dword ptr [ebp - 0x508], 0x1540 */ W32((u32)(r_ebp+0xfffffaf8u), 0x1540u);
    /* 0045e931: mov dword ptr [ebp - 0x504], 0x3520 */ W32((u32)(r_ebp+0xfffffafcu), 0x3520u);
    /* 0045e93b: mov dword ptr [ebp - 0x500], 0x14 */ W32((u32)(r_ebp+0xfffffb00u), 0x14u);
    /* 0045e945: mov dword ptr [ebp - 0x4fc], 0x28 */ W32((u32)(r_ebp+0xfffffb04u), 0x28u);
    /* 0045e94f: mov dword ptr [ebp - 0x4f8], 0x50 */ W32((u32)(r_ebp+0xfffffb08u), 0x50u);
    /* 0045e959: mov dword ptr [ebp - 0x4f4], 0xc8 */ W32((u32)(r_ebp+0xfffffb0cu), 0xc8u);
    /* 0045e963: mov dword ptr [ebp - 0x4f0], 0x320 */ W32((u32)(r_ebp+0xfffffb10u), 0x320u);
    /* 0045e96d: mov dword ptr [ebp - 0x4ec], 0xfa0 */ W32((u32)(r_ebp+0xfffffb14u), 0xfa0u);
    /* 0045e977: mov dword ptr [ebp - 0x4e8], 0x1f40 */ W32((u32)(r_ebp+0xfffffb18u), 0x1f40u);
    /* 0045e981: mov dword ptr [ebp - 0x4e4], 0x3e80 */ W32((u32)(r_ebp+0xfffffb1cu), 0x3e80u);
    /* 0045e98b: mov dword ptr [ebp - 0x4e0], 9 */ W32((u32)(r_ebp+0xfffffb20u), 0x9u);
    /* 0045e995: mov dword ptr [ebp - 0x4dc], 0x2d */ W32((u32)(r_ebp+0xfffffb24u), 0x2du);
    /* 0045e99f: mov dword ptr [ebp - 0x4d8], 0x5a */ W32((u32)(r_ebp+0xfffffb28u), 0x5au);
    /* 0045e9a9: mov dword ptr [ebp - 0x4d4], 0xb4 */ W32((u32)(r_ebp+0xfffffb2cu), 0xb4u);
    /* 0045e9b3: mov dword ptr [ebp - 0x4d0], 1 */ W32((u32)(r_ebp+0xfffffb30u), 0x1u);
    /* 0045e9bd: mov dword ptr [ebp - 0x4cc], 5 */ W32((u32)(r_ebp+0xfffffb34u), 0x5u);
    /* 0045e9c7: mov dword ptr [ebp - 0x4c8], 0xa */ W32((u32)(r_ebp+0xfffffb38u), 0xau);
    /* 0045e9d1: mov dword ptr [ebp - 0x4c4], 0x14 */ W32((u32)(r_ebp+0xfffffb3cu), 0x14u);
    /* 0045e9db: mov dword ptr [ebp - 0x4c0], 0x1b58 */ W32((u32)(r_ebp+0xfffffb40u), 0x1b58u);
    /* 0045e9e5: mov dword ptr [ebp - 0x4bc], 0x36b0 */ W32((u32)(r_ebp+0xfffffb44u), 0x36b0u);
    /* 0045e9ef: mov dword ptr [ebp - 0x4b8], 0x6d60 */ W32((u32)(r_ebp+0xfffffb48u), 0x6d60u);
    /* 0045e9f9: mov dword ptr [ebp - 0x4b4], 0x11170 */ W32((u32)(r_ebp+0xfffffb4cu), 0x11170u);
    /* 0045ea03: mov dword ptr [ebp - 0x4b0], 0x28 */ W32((u32)(r_ebp+0xfffffb50u), 0x28u);
    /* 0045ea0d: mov dword ptr [ebp - 0x4ac], 0x50 */ W32((u32)(r_ebp+0xfffffb54u), 0x50u);
    /* 0045ea17: mov dword ptr [ebp - 0x4a8], 0xa0 */ W32((u32)(r_ebp+0xfffffb58u), 0xa0u);
    /* 0045ea21: mov dword ptr [ebp - 0x4a4], 0x190 */ W32((u32)(r_ebp+0xfffffb5cu), 0x190u);
    /* 0045ea2b: mov dword ptr [ebp - 0x4a0], 0x5dc */ W32((u32)(r_ebp+0xfffffb60u), 0x5dcu);
    /* 0045ea35: mov dword ptr [ebp - 0x49c], 0x1d4c */ W32((u32)(r_ebp+0xfffffb64u), 0x1d4cu);
    /* 0045ea3f: mov dword ptr [ebp - 0x498], 0x3a98 */ W32((u32)(r_ebp+0xfffffb68u), 0x3a98u);
    /* 0045ea49: mov dword ptr [ebp - 0x494], 0x7530 */ W32((u32)(r_ebp+0xfffffb6cu), 0x7530u);
    /* 0045ea53: mov dword ptr [ebp - 0x490], 0x58 */ W32((u32)(r_ebp+0xfffffb70u), 0x58u);
    /* 0045ea5d: mov dword ptr [ebp - 0x48c], 0x1b8 */ W32((u32)(r_ebp+0xfffffb74u), 0x1b8u);
    /* 0045ea67: mov dword ptr [ebp - 0x488], 0x370 */ W32((u32)(r_ebp+0xfffffb78u), 0x370u);
    /* 0045ea71: mov dword ptr [ebp - 0x484], 0x6e0 */ W32((u32)(r_ebp+0xfffffb7cu), 0x6e0u);
    /* 0045ea7b: mov dword ptr [ebp - 0x480], 4 */ W32((u32)(r_ebp+0xfffffb80u), 0x4u);
    /* 0045ea85: mov dword ptr [ebp - 0x47c], 0x14 */ W32((u32)(r_ebp+0xfffffb84u), 0x14u);
    /* 0045ea8f: mov dword ptr [ebp - 0x478], 0x28 */ W32((u32)(r_ebp+0xfffffb88u), 0x28u);
    /* 0045ea99: mov dword ptr [ebp - 0x474], 0x50 */ W32((u32)(r_ebp+0xfffffb8cu), 0x50u);
    /* 0045eaa3: mov dword ptr [ebp - 0x470], 1 */ W32((u32)(r_ebp+0xfffffb90u), 0x1u);
    /* 0045eaad: mov dword ptr [ebp - 0x46c], 5 */ W32((u32)(r_ebp+0xfffffb94u), 0x5u);
    /* 0045eab7: mov dword ptr [ebp - 0x468], 0xa */ W32((u32)(r_ebp+0xfffffb98u), 0xau);
    /* 0045eac1: mov dword ptr [ebp - 0x464], 0x14 */ W32((u32)(r_ebp+0xfffffb9cu), 0x14u);
    /* 0045eacb: mov dword ptr [ebp - 0x460], 0x4e20 */ W32((u32)(r_ebp+0xfffffba0u), 0x4e20u);
    /* 0045ead5: mov dword ptr [ebp - 0x45c], 0x9c40 */ W32((u32)(r_ebp+0xfffffba4u), 0x9c40u);
    /* 0045eadf: mov dword ptr [ebp - 0x458], 0x13880 */ W32((u32)(r_ebp+0xfffffba8u), 0x13880u);
    /* 0045eae9: mov dword ptr [ebp - 0x454], 0x186a0 */ W32((u32)(r_ebp+0xfffffbacu), 0x186a0u);
    /* 0045eaf3: mov dword ptr [ebp - 0x450], 0x1a4 */ W32((u32)(r_ebp+0xfffffbb0u), 0x1a4u);
    /* 0045eafd: mov dword ptr [ebp - 0x44c], 0x348 */ W32((u32)(r_ebp+0xfffffbb4u), 0x348u);
    /* 0045eb07: mov dword ptr [ebp - 0x448], 0x690 */ W32((u32)(r_ebp+0xfffffbb8u), 0x690u);
    /* 0045eb11: mov dword ptr [ebp - 0x444], 0x1068 */ W32((u32)(r_ebp+0xfffffbbcu), 0x1068u);
    /* 0045eb1b: mov dword ptr [ebp - 0x440], 0x28 */ W32((u32)(r_ebp+0xfffffbc0u), 0x28u);
    /* 0045eb25: mov dword ptr [ebp - 0x43c], 0x50 */ W32((u32)(r_ebp+0xfffffbc4u), 0x50u);
    /* 0045eb2f: mov dword ptr [ebp - 0x438], 0xa0 */ W32((u32)(r_ebp+0xfffffbc8u), 0xa0u);
    /* 0045eb39: mov dword ptr [ebp - 0x434], 0x190 */ W32((u32)(r_ebp+0xfffffbccu), 0x190u);
    /* 0045eb43: mov dword ptr [ebp - 0x430], 0x1b58 */ W32((u32)(r_ebp+0xfffffbd0u), 0x1b58u);
    /* 0045eb4d: mov dword ptr [ebp - 0x42c], 0x88b8 */ W32((u32)(r_ebp+0xfffffbd4u), 0x88b8u);
    /* 0045eb57: mov dword ptr [ebp - 0x428], 0x11170 */ W32((u32)(r_ebp+0xfffffbd8u), 0x11170u);
    /* 0045eb61: mov dword ptr [ebp - 0x424], 0x186a0 */ W32((u32)(r_ebp+0xfffffbdcu), 0x186a0u);
    /* 0045eb6b: mov dword ptr [ebp - 0x420], 0x15e */ W32((u32)(r_ebp+0xfffffbe0u), 0x15eu);
    /* 0045eb75: mov dword ptr [ebp - 0x41c], 0x6d6 */ W32((u32)(r_ebp+0xfffffbe4u), 0x6d6u);
    /* 0045eb7f: mov dword ptr [ebp - 0x418], 0xdac */ W32((u32)(r_ebp+0xfffffbe8u), 0xdacu);
    /* 0045eb89: mov dword ptr [ebp - 0x414], 0x1b58 */ W32((u32)(r_ebp+0xfffffbecu), 0x1b58u);
    /* 0045eb93: mov dword ptr [ebp - 0x410], 0x14 */ W32((u32)(r_ebp+0xfffffbf0u), 0x14u);
    /* 0045eb9d: mov dword ptr [ebp - 0x40c], 0x64 */ W32((u32)(r_ebp+0xfffffbf4u), 0x64u);
    /* 0045eba7: mov dword ptr [ebp - 0x408], 0xc8 */ W32((u32)(r_ebp+0xfffffbf8u), 0xc8u);
    /* 0045ebb1: mov dword ptr [ebp - 0x404], 0x190 */ W32((u32)(r_ebp+0xfffffbfcu), 0x190u);
    /* 0045ebbb: mov dword ptr [ebp - 0x400], 2 */ W32((u32)(r_ebp+0xfffffc00u), 0x2u);
    /* 0045ebc5: mov dword ptr [ebp - 0x3fc], 0xa */ W32((u32)(r_ebp+0xfffffc04u), 0xau);
    /* 0045ebcf: mov dword ptr [ebp - 0x3f8], 0x14 */ W32((u32)(r_ebp+0xfffffc08u), 0x14u);
    /* 0045ebd9: mov dword ptr [ebp - 0x3f4], 0x28 */ W32((u32)(r_ebp+0xfffffc0cu), 0x28u);
    /* 0045ebe3: mov dword ptr [ebp - 0x3f0], 0x4e20 */ W32((u32)(r_ebp+0xfffffc10u), 0x4e20u);
    /* 0045ebed: mov dword ptr [ebp - 0x3ec], 0x186a0 */ W32((u32)(r_ebp+0xfffffc14u), 0x186a0u);
    /* 0045ebf7: mov dword ptr [ebp - 0x3e8], 0x186a0 */ W32((u32)(r_ebp+0xfffffc18u), 0x186a0u);
    /* 0045ec01: mov dword ptr [ebp - 0x3e4], 0x186a0 */ W32((u32)(r_ebp+0xfffffc1cu), 0x186a0u);
    /* 0045ec0b: mov dword ptr [ebp - 0x3e0], 0x5dc */ W32((u32)(r_ebp+0xfffffc20u), 0x5dcu);
    /* 0045ec15: mov dword ptr [ebp - 0x3dc], 0x1d4c */ W32((u32)(r_ebp+0xfffffc24u), 0x1d4cu);
    /* 0045ec1f: mov dword ptr [ebp - 0x3d8], 0x3a98 */ W32((u32)(r_ebp+0xfffffc28u), 0x3a98u);
    /* 0045ec29: mov dword ptr [ebp - 0x3d4], 0x7530 */ W32((u32)(r_ebp+0xfffffc2cu), 0x7530u);
    /* 0045ec33: mov dword ptr [ebp - 0x3d0], 0x5a */ W32((u32)(r_ebp+0xfffffc30u), 0x5au);
    /* 0045ec3d: mov dword ptr [ebp - 0x3cc], 0x1c2 */ W32((u32)(r_ebp+0xfffffc34u), 0x1c2u);
    /* 0045ec47: mov dword ptr [ebp - 0x3c8], 0x384 */ W32((u32)(r_ebp+0xfffffc38u), 0x384u);
    /* 0045ec51: mov dword ptr [ebp - 0x3c4], 0x708 */ W32((u32)(r_ebp+0xfffffc3cu), 0x708u);
    /* 0045ec5b: mov dword ptr [ebp - 0x3c0], 9 */ W32((u32)(r_ebp+0xfffffc40u), 0x9u);
    /* 0045ec65: mov dword ptr [ebp - 0x3bc], 0x2d */ W32((u32)(r_ebp+0xfffffc44u), 0x2du);
    /* 0045ec6f: mov dword ptr [ebp - 0x3b8], 0x5a */ W32((u32)(r_ebp+0xfffffc48u), 0x5au);
    /* 0045ec79: mov dword ptr [ebp - 0x3b4], 0xb4 */ W32((u32)(r_ebp+0xfffffc4cu), 0xb4u);
    /* 0045ec83: mov dword ptr [ebp - 0x3b0], 0x61a8 */ W32((u32)(r_ebp+0xfffffc50u), 0x61a8u);
    /* 0045ec8d: mov dword ptr [ebp - 0x3ac], 0x186a0 */ W32((u32)(r_ebp+0xfffffc54u), 0x186a0u);
    /* 0045ec97: mov dword ptr [ebp - 0x3a8], 0x186a0 */ W32((u32)(r_ebp+0xfffffc58u), 0x186a0u);
    /* 0045eca1: mov dword ptr [ebp - 0x3a4], 0x186a0 */ W32((u32)(r_ebp+0xfffffc5cu), 0x186a0u);
    /* 0045ecab: mov dword ptr [ebp - 0x3a0], 0xfa0 */ W32((u32)(r_ebp+0xfffffc60u), 0xfa0u);
    /* 0045ecb5: mov dword ptr [ebp - 0x39c], 0x4e20 */ W32((u32)(r_ebp+0xfffffc64u), 0x4e20u);
    /* 0045ecbf: mov dword ptr [ebp - 0x398], 0x9c40 */ W32((u32)(r_ebp+0xfffffc68u), 0x9c40u);
    /* 0045ecc9: mov dword ptr [ebp - 0x394], 0x13880 */ W32((u32)(r_ebp+0xfffffc6cu), 0x13880u);
    /* 0045ecd3: mov dword ptr [ebp - 0x390], 0x12c */ W32((u32)(r_ebp+0xfffffc70u), 0x12cu);
    /* 0045ecdd: mov dword ptr [ebp - 0x38c], 0x5dc */ W32((u32)(r_ebp+0xfffffc74u), 0x5dcu);
    /* 0045ece7: mov dword ptr [ebp - 0x388], 0xbb8 */ W32((u32)(r_ebp+0xfffffc78u), 0xbb8u);
    /* 0045ecf1: mov dword ptr [ebp - 0x384], 0x1770 */ W32((u32)(r_ebp+0xfffffc7cu), 0x1770u);
    /* 0045ecfb: mov dword ptr [ebp - 0x380], 0x2b */ W32((u32)(r_ebp+0xfffffc80u), 0x2bu);
    /* 0045ed05: mov dword ptr [ebp - 0x37c], 0xd7 */ W32((u32)(r_ebp+0xfffffc84u), 0xd7u);
    /* 0045ed0f: mov dword ptr [ebp - 0x378], 0x1ae */ W32((u32)(r_ebp+0xfffffc88u), 0x1aeu);
    /* 0045ed19: mov dword ptr [ebp - 0x374], 0x35c */ W32((u32)(r_ebp+0xfffffc8cu), 0x35cu);
    /* 0045ed23: mov dword ptr [ebp - 0x370], 4 */ W32((u32)(r_ebp+0xfffffc90u), 0x4u);
    /* 0045ed2d: mov dword ptr [ebp - 0x36c], 0x14 */ W32((u32)(r_ebp+0xfffffc94u), 0x14u);
    /* 0045ed37: mov dword ptr [ebp - 0x368], 0x28 */ W32((u32)(r_ebp+0xfffffc98u), 0x28u);
    /* 0045ed41: mov dword ptr [ebp - 0x364], 0x50 */ W32((u32)(r_ebp+0xfffffc9cu), 0x50u);
    /* 0045ed4b: mov dword ptr [ebp - 0x360], 0xc350 */ W32((u32)(r_ebp+0xfffffca0u), 0xc350u);
    /* 0045ed55: mov dword ptr [ebp - 0x35c], 0x186a0 */ W32((u32)(r_ebp+0xfffffca4u), 0x186a0u);
    /* 0045ed5f: mov dword ptr [ebp - 0x358], 0x186a0 */ W32((u32)(r_ebp+0xfffffca8u), 0x186a0u);
    /* 0045ed69: mov dword ptr [ebp - 0x354], 0x186a0 */ W32((u32)(r_ebp+0xfffffcacu), 0x186a0u);
    /* 0045ed73: mov dword ptr [ebp - 0x350], 0x1f40 */ W32((u32)(r_ebp+0xfffffcb0u), 0x1f40u);
    /* 0045ed7d: mov dword ptr [ebp - 0x34c], 0x4e20 */ W32((u32)(r_ebp+0xfffffcb4u), 0x4e20u);
    /* 0045ed87: mov dword ptr [ebp - 0x348], 0x9c40 */ W32((u32)(r_ebp+0xfffffcb8u), 0x9c40u);
    /* 0045ed91: mov dword ptr [ebp - 0x344], 0x13880 */ W32((u32)(r_ebp+0xfffffcbcu), 0x13880u);
    /* 0045ed9b: mov dword ptr [ebp - 0x340], 0x7d0 */ W32((u32)(r_ebp+0xfffffcc0u), 0x7d0u);
    /* 0045eda5: mov dword ptr [ebp - 0x33c], 0x1388 */ W32((u32)(r_ebp+0xfffffcc4u), 0x1388u);
    /* 0045edaf: mov dword ptr [ebp - 0x338], 0x2710 */ W32((u32)(r_ebp+0xfffffcc8u), 0x2710u);
    /* 0045edb9: mov dword ptr [ebp - 0x334], 0x4e20 */ W32((u32)(r_ebp+0xfffffcccu), 0x4e20u);
    /* 0045edc3: mov dword ptr [ebp - 0x330], 0x104 */ W32((u32)(r_ebp+0xfffffcd0u), 0x104u);
    /* 0045edcd: mov dword ptr [ebp - 0x32c], 0x28a */ W32((u32)(r_ebp+0xfffffcd4u), 0x28au);
    /* 0045edd7: mov dword ptr [ebp - 0x328], 0x514 */ W32((u32)(r_ebp+0xfffffcd8u), 0x514u);
    /* 0045ede1: mov dword ptr [ebp - 0x324], 0xa28 */ W32((u32)(r_ebp+0xfffffcdcu), 0xa28u);
    /* 0045edeb: mov dword ptr [ebp - 0x320], 0x28 */ W32((u32)(r_ebp+0xfffffce0u), 0x28u);
    /* 0045edf5: mov dword ptr [ebp - 0x31c], 0x64 */ W32((u32)(r_ebp+0xfffffce4u), 0x64u);
    /* 0045edff: mov dword ptr [ebp - 0x318], 0xc8 */ W32((u32)(r_ebp+0xfffffce8u), 0xc8u);
    /* 0045ee09: mov dword ptr [ebp - 0x314], 0x190 */ W32((u32)(r_ebp+0xfffffcecu), 0x190u);
    /* 0045ee13: mov dword ptr [ebp - 0x310], 4 */ W32((u32)(r_ebp+0xfffffcf0u), 0x4u);
    /* 0045ee1d: mov dword ptr [ebp - 0x30c], 0xa */ W32((u32)(r_ebp+0xfffffcf4u), 0xau);
    /* 0045ee27: mov dword ptr [ebp - 0x308], 0x14 */ W32((u32)(r_ebp+0xfffffcf8u), 0x14u);
    /* 0045ee31: mov dword ptr [ebp - 0x304], 0x28 */ W32((u32)(r_ebp+0xfffffcfcu), 0x28u);
    /* 0045ee3b: mov dword ptr [ebp - 0x300], 0xc350 */ W32((u32)(r_ebp+0xfffffd00u), 0xc350u);
    /* 0045ee45: mov dword ptr [ebp - 0x2fc], 0x186a0 */ W32((u32)(r_ebp+0xfffffd04u), 0x186a0u);
    /* 0045ee4f: mov dword ptr [ebp - 0x2f8], 0x186a0 */ W32((u32)(r_ebp+0xfffffd08u), 0x186a0u);
    /* 0045ee59: mov dword ptr [ebp - 0x2f4], 0x186a0 */ W32((u32)(r_ebp+0xfffffd0cu), 0x186a0u);
    /* 0045ee63: mov dword ptr [ebp - 0x2f0], 0x61a8 */ W32((u32)(r_ebp+0xfffffd10u), 0x61a8u);
    /* 0045ee6d: mov dword ptr [ebp - 0x2ec], 0xf424 */ W32((u32)(r_ebp+0xfffffd14u), 0xf424u);
    /* 0045ee77: mov dword ptr [ebp - 0x2e8], 0x186a0 */ W32((u32)(r_ebp+0xfffffd18u), 0x186a0u);
    /* 0045ee81: mov dword ptr [ebp - 0x2e4], 0x186a0 */ W32((u32)(r_ebp+0xfffffd1cu), 0x186a0u);
    /* 0045ee8b: mov dword ptr [ebp - 0x2e0], 0x1194 */ W32((u32)(r_ebp+0xfffffd20u), 0x1194u);
    /* 0045ee95: mov dword ptr [ebp - 0x2dc], 0x2bf2 */ W32((u32)(r_ebp+0xfffffd24u), 0x2bf2u);
    /* 0045ee9f: mov dword ptr [ebp - 0x2d8], 0x57e4 */ W32((u32)(r_ebp+0xfffffd28u), 0x57e4u);
    /* 0045eea9: mov dword ptr [ebp - 0x2d4], 0xafc8 */ W32((u32)(r_ebp+0xfffffd2cu), 0xafc8u);
    /* 0045eeb3: mov dword ptr [ebp - 0x2d0], 0x320 */ W32((u32)(r_ebp+0xfffffd30u), 0x320u);
    /* 0045eebd: mov dword ptr [ebp - 0x2cc], 0x7d0 */ W32((u32)(r_ebp+0xfffffd34u), 0x7d0u);
    /* 0045eec7: mov dword ptr [ebp - 0x2c8], 0xfa0 */ W32((u32)(r_ebp+0xfffffd38u), 0xfa0u);
    /* 0045eed1: mov dword ptr [ebp - 0x2c4], 0x1f40 */ W32((u32)(r_ebp+0xfffffd3cu), 0x1f40u);
    /* 0045eedb: mov dword ptr [ebp - 0x2c0], 0x96 */ W32((u32)(r_ebp+0xfffffd40u), 0x96u);
    /* 0045eee5: mov dword ptr [ebp - 0x2bc], 0x177 */ W32((u32)(r_ebp+0xfffffd44u), 0x177u);
    /* 0045eeef: mov dword ptr [ebp - 0x2b8], 0x2ee */ W32((u32)(r_ebp+0xfffffd48u), 0x2eeu);
    /* 0045eef9: mov dword ptr [ebp - 0x2b4], 0x5dc */ W32((u32)(r_ebp+0xfffffd4cu), 0x5dcu);
    /* 0045ef03: mov dword ptr [ebp - 0x2b0], 0x12 */ W32((u32)(r_ebp+0xfffffd50u), 0x12u);
    /* 0045ef0d: mov dword ptr [ebp - 0x2ac], 0x2d */ W32((u32)(r_ebp+0xfffffd54u), 0x2du);
    /* 0045ef17: mov dword ptr [ebp - 0x2a8], 0x5a */ W32((u32)(r_ebp+0xfffffd58u), 0x5au);
    /* 0045ef21: mov dword ptr [ebp - 0x2a4], 0xb4 */ W32((u32)(r_ebp+0xfffffd5cu), 0xb4u);
    /* 0045ef2b: mov dword ptr [ebp - 0x2a0], 0xc350 */ W32((u32)(r_ebp+0xfffffd60u), 0xc350u);
    /* 0045ef35: mov dword ptr [ebp - 0x29c], 0x186a0 */ W32((u32)(r_ebp+0xfffffd64u), 0x186a0u);
    /* 0045ef3f: mov dword ptr [ebp - 0x298], 0x186a0 */ W32((u32)(r_ebp+0xfffffd68u), 0x186a0u);
    /* 0045ef49: mov dword ptr [ebp - 0x294], 0x186a0 */ W32((u32)(r_ebp+0xfffffd6cu), 0x186a0u);
    /* 0045ef53: mov dword ptr [ebp - 0x290], 0x61a8 */ W32((u32)(r_ebp+0xfffffd70u), 0x61a8u);
    /* 0045ef5d: mov dword ptr [ebp - 0x28c], 0xf424 */ W32((u32)(r_ebp+0xfffffd74u), 0xf424u);
    /* 0045ef67: mov dword ptr [ebp - 0x288], 0x186a0 */ W32((u32)(r_ebp+0xfffffd78u), 0x186a0u);
    /* 0045ef71: mov dword ptr [ebp - 0x284], 0x186a0 */ W32((u32)(r_ebp+0xfffffd7cu), 0x186a0u);
    /* 0045ef7b: mov dword ptr [ebp - 0x280], 0x1388 */ W32((u32)(r_ebp+0xfffffd80u), 0x1388u);
    /* 0045ef85: mov dword ptr [ebp - 0x27c], 0x30d4 */ W32((u32)(r_ebp+0xfffffd84u), 0x30d4u);
    /* 0045ef8f: mov dword ptr [ebp - 0x278], 0x61a8 */ W32((u32)(r_ebp+0xfffffd88u), 0x61a8u);
    /* 0045ef99: mov dword ptr [ebp - 0x274], 0xc350 */ W32((u32)(r_ebp+0xfffffd8cu), 0xc350u);
    /* 0045efa3: mov dword ptr [ebp - 0x270], 0x4b0 */ W32((u32)(r_ebp+0xfffffd90u), 0x4b0u);
    /* 0045efad: mov dword ptr [ebp - 0x26c], 0xbb8 */ W32((u32)(r_ebp+0xfffffd94u), 0xbb8u);
    /* 0045efb7: mov dword ptr [ebp - 0x268], 0x1770 */ W32((u32)(r_ebp+0xfffffd98u), 0x1770u);
    /* 0045efc1: mov dword ptr [ebp - 0x264], 0x2ee0 */ W32((u32)(r_ebp+0xfffffd9cu), 0x2ee0u);
    /* 0045efcb: mov dword ptr [ebp - 0x260], 0x1f4 */ W32((u32)(r_ebp+0xfffffda0u), 0x1f4u);
    /* 0045efd5: mov dword ptr [ebp - 0x25c], 0x4e2 */ W32((u32)(r_ebp+0xfffffda4u), 0x4e2u);
    /* 0045efdf: mov dword ptr [ebp - 0x258], 0x9c4 */ W32((u32)(r_ebp+0xfffffda8u), 0x9c4u);
    /* 0045efe9: mov dword ptr [ebp - 0x254], 0x1388 */ W32((u32)(r_ebp+0xfffffdacu), 0x1388u);
    /* 0045eff3: mov dword ptr [ebp - 0x250], 0x3c */ W32((u32)(r_ebp+0xfffffdb0u), 0x3cu);
    /* 0045effd: mov dword ptr [ebp - 0x24c], 0x96 */ W32((u32)(r_ebp+0xfffffdb4u), 0x96u);
    /* 0045f007: mov dword ptr [ebp - 0x248], 0x12c */ W32((u32)(r_ebp+0xfffffdb8u), 0x12cu);
    /* 0045f011: mov dword ptr [ebp - 0x244], 0x258 */ W32((u32)(r_ebp+0xfffffdbcu), 0x258u);
    /* 0045f01b: mov dword ptr [ebp - 0x240], 0xa */ W32((u32)(r_ebp+0xfffffdc0u), 0xau);
    /* 0045f025: mov dword ptr [ebp - 0x23c], 0x19 */ W32((u32)(r_ebp+0xfffffdc4u), 0x19u);
    /* 0045f02f: mov dword ptr [ebp - 0x238], 0x32 */ W32((u32)(r_ebp+0xfffffdc8u), 0x32u);
    /* 0045f039: mov dword ptr [ebp - 0x234], 0x64 */ W32((u32)(r_ebp+0xfffffdccu), 0x64u);
    /* 0045f043: mov dword ptr [ebp - 0x230], 0x186a0 */ W32((u32)(r_ebp+0xfffffdd0u), 0x186a0u);
    /* 0045f04d: mov dword ptr [ebp - 0x22c], 0x186a0 */ W32((u32)(r_ebp+0xfffffdd4u), 0x186a0u);
    /* 0045f057: mov dword ptr [ebp - 0x228], 0x186a0 */ W32((u32)(r_ebp+0xfffffdd8u), 0x186a0u);
    /* 0045f061: mov dword ptr [ebp - 0x224], 0x186a0 */ W32((u32)(r_ebp+0xfffffddcu), 0x186a0u);
    /* 0045f06b: mov dword ptr [ebp - 0x220], 0xc350 */ W32((u32)(r_ebp+0xfffffde0u), 0xc350u);
    /* 0045f075: mov dword ptr [ebp - 0x21c], 0x186a0 */ W32((u32)(r_ebp+0xfffffde4u), 0x186a0u);
    /* 0045f07f: mov dword ptr [ebp - 0x218], 0x186a0 */ W32((u32)(r_ebp+0xfffffde8u), 0x186a0u);
    /* 0045f089: mov dword ptr [ebp - 0x214], 0x186a0 */ W32((u32)(r_ebp+0xfffffdecu), 0x186a0u);
    /* 0045f093: mov dword ptr [ebp - 0x210], 0x4650 */ W32((u32)(r_ebp+0xfffffdf0u), 0x4650u);
    /* 0045f09d: mov dword ptr [ebp - 0x20c], 0xafc8 */ W32((u32)(r_ebp+0xfffffdf4u), 0xafc8u);
    /* 0045f0a7: mov dword ptr [ebp - 0x208], 0x15f90 */ W32((u32)(r_ebp+0xfffffdf8u), 0x15f90u);
    /* 0045f0b1: mov dword ptr [ebp - 0x204], 0x186a0 */ W32((u32)(r_ebp+0xfffffdfcu), 0x186a0u);
    /* 0045f0bb: mov dword ptr [ebp - 0x200], 0x1f40 */ W32((u32)(r_ebp+0xfffffe00u), 0x1f40u);
    /* 0045f0c5: mov dword ptr [ebp - 0x1fc], 0x4e20 */ W32((u32)(r_ebp+0xfffffe04u), 0x4e20u);
    /* 0045f0cf: mov dword ptr [ebp - 0x1f8], 0x9c40 */ W32((u32)(r_ebp+0xfffffe08u), 0x9c40u);
    /* 0045f0d9: mov dword ptr [ebp - 0x1f4], 0x13880 */ W32((u32)(r_ebp+0xfffffe0cu), 0x13880u);
    /* 0045f0e3: mov dword ptr [ebp - 0x1f0], 0x5dc */ W32((u32)(r_ebp+0xfffffe10u), 0x5dcu);
    /* 0045f0ed: mov dword ptr [ebp - 0x1ec], 0xea6 */ W32((u32)(r_ebp+0xfffffe14u), 0xea6u);
    /* 0045f0f7: mov dword ptr [ebp - 0x1e8], 0x1d4c */ W32((u32)(r_ebp+0xfffffe18u), 0x1d4cu);
    /* 0045f101: mov dword ptr [ebp - 0x1e4], 0x3a98 */ W32((u32)(r_ebp+0xfffffe1cu), 0x3a98u);
    /* 0045f10b: mov dword ptr [ebp - 0x1e0], 0xa0 */ W32((u32)(r_ebp+0xfffffe20u), 0xa0u);
    /* 0045f115: mov dword ptr [ebp - 0x1dc], 0x190 */ W32((u32)(r_ebp+0xfffffe24u), 0x190u);
    /* 0045f11f: mov dword ptr [ebp - 0x1d8], 0x320 */ W32((u32)(r_ebp+0xfffffe28u), 0x320u);
    /* 0045f129: mov dword ptr [ebp - 0x1d4], 0x640 */ W32((u32)(r_ebp+0xfffffe2cu), 0x640u);
    /* 0045f133: mov dword ptr [ebp - 0x1d0], 0x1e */ W32((u32)(r_ebp+0xfffffe30u), 0x1eu);
    /* 0045f13d: mov dword ptr [ebp - 0x1cc], 0x4b */ W32((u32)(r_ebp+0xfffffe34u), 0x4bu);
    /* 0045f147: mov dword ptr [ebp - 0x1c8], 0x96 */ W32((u32)(r_ebp+0xfffffe38u), 0x96u);
    /* 0045f151: mov dword ptr [ebp - 0x1c4], 0x12c */ W32((u32)(r_ebp+0xfffffe3cu), 0x12cu);
    /* 0045f15b: mov dword ptr [ebp - 0x1c0], 2 */ W32((u32)(r_ebp+0xfffffe40u), 0x2u);
    /* 0045f165: mov dword ptr [ebp - 0x1bc], 5 */ W32((u32)(r_ebp+0xfffffe44u), 0x5u);
    /* 0045f16f: mov dword ptr [ebp - 0x1b8], 0xa */ W32((u32)(r_ebp+0xfffffe48u), 0xau);
    /* 0045f179: mov dword ptr [ebp - 0x1b4], 0x14 */ W32((u32)(r_ebp+0xfffffe4cu), 0x14u);
    /* 0045f183: mov dword ptr [ebp - 0x1b0], 0x186a0 */ W32((u32)(r_ebp+0xfffffe50u), 0x186a0u);
    /* 0045f18d: mov dword ptr [ebp - 0x1ac], 0x186a0 */ W32((u32)(r_ebp+0xfffffe54u), 0x186a0u);
    /* 0045f197: mov dword ptr [ebp - 0x1a8], 0x186a0 */ W32((u32)(r_ebp+0xfffffe58u), 0x186a0u);
    /* 0045f1a1: mov dword ptr [ebp - 0x1a4], 0x186a0 */ W32((u32)(r_ebp+0xfffffe5cu), 0x186a0u);
    /* 0045f1ab: mov dword ptr [ebp - 0x1a0], 0x11170 */ W32((u32)(r_ebp+0xfffffe60u), 0x11170u);
    /* 0045f1b5: mov dword ptr [ebp - 0x19c], 0x186a0 */ W32((u32)(r_ebp+0xfffffe64u), 0x186a0u);
    /* 0045f1bf: mov dword ptr [ebp - 0x198], 0x186a0 */ W32((u32)(r_ebp+0xfffffe68u), 0x186a0u);
    /* 0045f1c9: mov dword ptr [ebp - 0x194], 0x186a0 */ W32((u32)(r_ebp+0xfffffe6cu), 0x186a0u);
    /* 0045f1d3: mov dword ptr [ebp - 0x190], 0x61a8 */ W32((u32)(r_ebp+0xfffffe70u), 0x61a8u);
    /* 0045f1dd: mov dword ptr [ebp - 0x18c], 0xf424 */ W32((u32)(r_ebp+0xfffffe74u), 0xf424u);
    /* 0045f1e7: mov dword ptr [ebp - 0x188], 0x186a0 */ W32((u32)(r_ebp+0xfffffe78u), 0x186a0u);
    /* 0045f1f1: mov dword ptr [ebp - 0x184], 0x186a0 */ W32((u32)(r_ebp+0xfffffe7cu), 0x186a0u);
    /* 0045f1fb: mov dword ptr [ebp - 0x180], 0x3a98 */ W32((u32)(r_ebp+0xfffffe80u), 0x3a98u);
    /* 0045f205: mov dword ptr [ebp - 0x17c], 0x927c */ W32((u32)(r_ebp+0xfffffe84u), 0x927cu);
    /* 0045f20f: mov dword ptr [ebp - 0x178], 0x124f8 */ W32((u32)(r_ebp+0xfffffe88u), 0x124f8u);
    /* 0045f219: mov dword ptr [ebp - 0x174], 0x186a0 */ W32((u32)(r_ebp+0xfffffe8cu), 0x186a0u);
    /* 0045f223: mov dword ptr [ebp - 0x170], 0x5dc */ W32((u32)(r_ebp+0xfffffe90u), 0x5dcu);
    /* 0045f22d: mov dword ptr [ebp - 0x16c], 0xea6 */ W32((u32)(r_ebp+0xfffffe94u), 0xea6u);
    /* 0045f237: mov dword ptr [ebp - 0x168], 0x1d4c */ W32((u32)(r_ebp+0xfffffe98u), 0x1d4cu);
    /* 0045f241: mov dword ptr [ebp - 0x164], 0x3a98 */ W32((u32)(r_ebp+0xfffffe9cu), 0x3a98u);
    /* 0045f24b: mov dword ptr [ebp - 0x160], 0x258 */ W32((u32)(r_ebp+0xfffffea0u), 0x258u);
    /* 0045f255: mov dword ptr [ebp - 0x15c], 0x5dc */ W32((u32)(r_ebp+0xfffffea4u), 0x5dcu);
    /* 0045f25f: mov dword ptr [ebp - 0x158], 0xbb8 */ W32((u32)(r_ebp+0xfffffea8u), 0xbb8u);
    /* 0045f269: mov dword ptr [ebp - 0x154], 0x1770 */ W32((u32)(r_ebp+0xfffffeacu), 0x1770u);
    /* 0045f273: mov dword ptr [ebp - 0x150], 0x55 */ W32((u32)(r_ebp+0xfffffeb0u), 0x55u);
    /* 0045f27d: mov dword ptr [ebp - 0x14c], 0xd4 */ W32((u32)(r_ebp+0xfffffeb4u), 0xd4u);
    /* 0045f287: mov dword ptr [ebp - 0x148], 0x1a9 */ W32((u32)(r_ebp+0xfffffeb8u), 0x1a9u);
    /* 0045f291: mov dword ptr [ebp - 0x144], 0x352 */ W32((u32)(r_ebp+0xfffffebcu), 0x352u);
    /* 0045f29b: mov dword ptr [ebp - 0x140], 0x14 */ W32((u32)(r_ebp+0xfffffec0u), 0x14u);
    /* 0045f2a5: mov dword ptr [ebp - 0x13c], 0x32 */ W32((u32)(r_ebp+0xfffffec4u), 0x32u);
    /* 0045f2af: mov dword ptr [ebp - 0x138], 0x64 */ W32((u32)(r_ebp+0xfffffec8u), 0x64u);
    /* 0045f2b9: mov dword ptr [ebp - 0x134], 0xc8 */ W32((u32)(r_ebp+0xfffffeccu), 0xc8u);
    /* 0045f2c3: mov dword ptr [ebp - 0x130], 2 */ W32((u32)(r_ebp+0xfffffed0u), 0x2u);
    /* 0045f2cd: mov dword ptr [ebp - 0x12c], 5 */ W32((u32)(r_ebp+0xfffffed4u), 0x5u);
    /* 0045f2d7: mov dword ptr [ebp - 0x128], 0xa */ W32((u32)(r_ebp+0xfffffed8u), 0xau);
    /* 0045f2e1: mov dword ptr [ebp - 0x124], 0x14 */ W32((u32)(r_ebp+0xfffffedcu), 0x14u);
    /* 0045f2eb: mov dword ptr [ebp - 0x120], 0x186a0 */ W32((u32)(r_ebp+0xfffffee0u), 0x186a0u);
    /* 0045f2f5: mov dword ptr [ebp - 0x11c], 0x186a0 */ W32((u32)(r_ebp+0xfffffee4u), 0x186a0u);
    /* 0045f2ff: mov dword ptr [ebp - 0x118], 0x186a0 */ W32((u32)(r_ebp+0xfffffee8u), 0x186a0u);
    /* 0045f309: mov dword ptr [ebp - 0x114], 0x186a0 */ W32((u32)(r_ebp+0xfffffeecu), 0x186a0u);
    /* 0045f313: mov dword ptr [ebp - 0x110], 0x186a0 */ W32((u32)(r_ebp+0xfffffef0u), 0x186a0u);
    /* 0045f31d: mov dword ptr [ebp - 0x10c], 0x186a0 */ W32((u32)(r_ebp+0xfffffef4u), 0x186a0u);
    /* 0045f327: mov dword ptr [ebp - 0x108], 0x186a0 */ W32((u32)(r_ebp+0xfffffef8u), 0x186a0u);
    /* 0045f331: mov dword ptr [ebp - 0x104], 0x186a0 */ W32((u32)(r_ebp+0xfffffefcu), 0x186a0u);
    /* 0045f33b: mov dword ptr [ebp - 0x100], 0x11170 */ W32((u32)(r_ebp+0xffffff00u), 0x11170u);
    /* 0045f345: mov dword ptr [ebp - 0xfc], 0x186a0 */ W32((u32)(r_ebp+0xffffff04u), 0x186a0u);
    /* 0045f34f: mov dword ptr [ebp - 0xf8], 0x186a0 */ W32((u32)(r_ebp+0xffffff08u), 0x186a0u);
    /* 0045f359: mov dword ptr [ebp - 0xf4], 0x186a0 */ W32((u32)(r_ebp+0xffffff0cu), 0x186a0u);
    /* 0045f363: mov dword ptr [ebp - 0xf0], 0x61a8 */ W32((u32)(r_ebp+0xffffff10u), 0x61a8u);
    /* 0045f36d: mov dword ptr [ebp - 0xec], 0xf424 */ W32((u32)(r_ebp+0xffffff14u), 0xf424u);
    /* 0045f377: mov dword ptr [ebp - 0xe8], 0x186a0 */ W32((u32)(r_ebp+0xffffff18u), 0x186a0u);
    /* 0045f381: mov dword ptr [ebp - 0xe4], 0x186a0 */ W32((u32)(r_ebp+0xffffff1cu), 0x186a0u);
    /* 0045f38b: mov dword ptr [ebp - 0xe0], 0x15e0 */ W32((u32)(r_ebp+0xffffff20u), 0x15e0u);
    /* 0045f395: mov dword ptr [ebp - 0xdc], 0x36b0 */ W32((u32)(r_ebp+0xffffff24u), 0x36b0u);
    /* 0045f39f: mov dword ptr [ebp - 0xd8], 0x6d60 */ W32((u32)(r_ebp+0xffffff28u), 0x6d60u);
    /* 0045f3a9: mov dword ptr [ebp - 0xd4], 0xdac0 */ W32((u32)(r_ebp+0xffffff2cu), 0xdac0u);
    /* 0045f3b3: mov dword ptr [ebp - 0xd0], 0x258 */ W32((u32)(r_ebp+0xffffff30u), 0x258u);
    /* 0045f3bd: mov dword ptr [ebp - 0xcc], 0x5dc */ W32((u32)(r_ebp+0xffffff34u), 0x5dcu);
    /* 0045f3c7: mov dword ptr [ebp - 0xc8], 0xbb8 */ W32((u32)(r_ebp+0xffffff38u), 0xbb8u);
    /* 0045f3d1: mov dword ptr [ebp - 0xc4], 0x1770 */ W32((u32)(r_ebp+0xffffff3cu), 0x1770u);
    /* 0045f3db: mov dword ptr [ebp - 0xc0], 0xc8 */ W32((u32)(r_ebp+0xffffff40u), 0xc8u);
    /* 0045f3e5: mov dword ptr [ebp - 0xbc], 0x1f4 */ W32((u32)(r_ebp+0xffffff44u), 0x1f4u);
    /* 0045f3ef: mov dword ptr [ebp - 0xb8], 0x3e8 */ W32((u32)(r_ebp+0xffffff48u), 0x3e8u);
    /* 0045f3f9: mov dword ptr [ebp - 0xb4], 0x7d0 */ W32((u32)(r_ebp+0xffffff4cu), 0x7d0u);
    /* 0045f403: mov dword ptr [ebp - 0xb0], 0x32 */ W32((u32)(r_ebp+0xffffff50u), 0x32u);
    /* 0045f40d: mov dword ptr [ebp - 0xac], 0x7d */ W32((u32)(r_ebp+0xffffff54u), 0x7du);
    /* 0045f417: mov dword ptr [ebp - 0xa8], 0xfa */ W32((u32)(r_ebp+0xffffff58u), 0xfau);
    /* 0045f421: mov dword ptr [ebp - 0xa4], 0x1f4 */ W32((u32)(r_ebp+0xffffff5cu), 0x1f4u);
    /* 0045f42b: mov dword ptr [ebp - 0xa0], 0x14 */ W32((u32)(r_ebp+0xffffff60u), 0x14u);
    /* 0045f435: mov dword ptr [ebp - 0x9c], 0x32 */ W32((u32)(r_ebp+0xffffff64u), 0x32u);
    /* 0045f43f: mov dword ptr [ebp - 0x98], 0x64 */ W32((u32)(r_ebp+0xffffff68u), 0x64u);
    /* 0045f449: mov dword ptr [ebp - 0x94], 0xc8 */ W32((u32)(r_ebp+0xffffff6cu), 0xc8u);
    /* 0045f453: mov dword ptr [ebp - 0x658], 0x186a0 */ W32((u32)(r_ebp+0xfffff9a8u), 0x186a0u);
    /* 0045f45d: mov dword ptr [ebp - 0x654], 0x186a0 */ W32((u32)(r_ebp+0xfffff9acu), 0x186a0u);
    /* 0045f467: mov dword ptr [ebp - 0x650], 0x186a0 */ W32((u32)(r_ebp+0xfffff9b0u), 0x186a0u);
    /* 0045f471: mov dword ptr [ebp - 0x64c], 0x186a0 */ W32((u32)(r_ebp+0xfffff9b4u), 0x186a0u);
    /* 0045f47b: mov dword ptr [ebp - 0x648], 0x186a0 */ W32((u32)(r_ebp+0xfffff9b8u), 0x186a0u);
    /* 0045f485: mov dword ptr [ebp - 0x644], 0x186a0 */ W32((u32)(r_ebp+0xfffff9bcu), 0x186a0u);
    /* 0045f48f: mov dword ptr [ebp - 0x640], 0x186a0 */ W32((u32)(r_ebp+0xfffff9c0u), 0x186a0u);
    /* 0045f499: mov dword ptr [ebp - 0x63c], 0x186a0 */ W32((u32)(r_ebp+0xfffff9c4u), 0x186a0u);
    /* 0045f4a3: mov dword ptr [ebp - 0x638], 0xc350 */ W32((u32)(r_ebp+0xfffff9c8u), 0xc350u);
    /* 0045f4ad: mov dword ptr [ebp - 0x634], 0x186a0 */ W32((u32)(r_ebp+0xfffff9ccu), 0x186a0u);
    /* 0045f4b7: mov dword ptr [ebp - 0x630], 0x61a8 */ W32((u32)(r_ebp+0xfffff9d0u), 0x61a8u);
    /* 0045f4c1: mov dword ptr [ebp - 0x62c], 0xc350 */ W32((u32)(r_ebp+0xfffff9d4u), 0xc350u);
    /* 0045f4cb: mov dword ptr [ebp - 0x628], 0x30d4 */ W32((u32)(r_ebp+0xfffff9d8u), 0x30d4u);
    /* 0045f4d5: mov dword ptr [ebp - 0x624], 0x61a8 */ W32((u32)(r_ebp+0xfffff9dcu), 0x61a8u);
    /* 0045f4df: mov dword ptr [ebp - 0x620], 0x1388 */ W32((u32)(r_ebp+0xfffff9e0u), 0x1388u);
    /* 0045f4e9: mov dword ptr [ebp - 0x61c], 0x2710 */ W32((u32)(r_ebp+0xfffff9e4u), 0x2710u);
    /* 0045f4f3: mov dword ptr [ebp - 0x618], 0x3e8 */ W32((u32)(r_ebp+0xfffff9e8u), 0x3e8u);
    /* 0045f4fd: mov dword ptr [ebp - 0x614], 0x7d0 */ W32((u32)(r_ebp+0xfffff9ecu), 0x7d0u);
    /* 0045f507: mov dword ptr [ebp - 0x610], 0xc8 */ W32((u32)(r_ebp+0xfffff9f0u), 0xc8u);
    /* 0045f511: mov dword ptr [ebp - 0x60c], 0x190 */ W32((u32)(r_ebp+0xfffff9f4u), 0x190u);
    /* 0045f51b: mov dword ptr [ebp - 0x608], 0x32 */ W32((u32)(r_ebp+0xfffff9f8u), 0x32u);
    /* 0045f525: mov dword ptr [ebp - 0x604], 0x64 */ W32((u32)(r_ebp+0xfffff9fcu), 0x64u);
    /* 0045f52f: mov dword ptr [ebp - 0x600], 0x19 */ W32((u32)(r_ebp+0xfffffa00u), 0x19u);
    /* 0045f539: mov dword ptr [ebp - 0x5fc], 0x32 */ W32((u32)(r_ebp+0xfffffa04u), 0x32u);
    /* 0045f543: mov dword ptr [ebp - 0x5f8], 0xa */ W32((u32)(r_ebp+0xfffffa08u), 0xau);
    /* 0045f54d: mov dword ptr [ebp - 0x5f4], 0x14 */ W32((u32)(r_ebp+0xfffffa0cu), 0x14u);
    /* 0045f557: mov dword ptr [ebp - 0x5f0], 5 */ W32((u32)(r_ebp+0xfffffa10u), 0x5u);
    /* 0045f561: mov dword ptr [ebp - 0x5ec], 0xa */ W32((u32)(r_ebp+0xfffffa14u), 0xau);
    /* 0045f56b: mov dword ptr [ebp - 0x5e8], 0 */ W32((u32)(r_ebp+0xfffffa18u), 0x0u);
    /* 0045f575: mov dword ptr [ebp - 0x5e4], 0 */ W32((u32)(r_ebp+0xfffffa1cu), 0x0u);
    /* 0045f57f: mov dword ptr [ebp - 0x5e0], 0 */ W32((u32)(r_ebp+0xfffffa20u), 0x0u);
    /* 0045f589: mov dword ptr [ebp - 0x5dc], 0 */ W32((u32)(r_ebp+0xfffffa24u), 0x0u);
    /* 0045f593: mov dword ptr [ebp - 0x5d8], 0 */ W32((u32)(r_ebp+0xfffffa28u), 0x0u);
    /* 0045f59d: mov dword ptr [ebp - 0x5d4], 0 */ W32((u32)(r_ebp+0xfffffa2cu), 0x0u);
    /* 0045f5a7: mov dword ptr [ebp - 0x5d0], 5 */ W32((u32)(r_ebp+0xfffffa30u), 0x5u);
    /* 0045f5b1: mov dword ptr [ebp - 0x5cc], 0xa */ W32((u32)(r_ebp+0xfffffa34u), 0xau);
    /* 0045f5bb: mov dword ptr [ebp - 0x5c8], 5 */ W32((u32)(r_ebp+0xfffffa38u), 0x5u);
    /* 0045f5c5: mov dword ptr [ebp - 0x5c4], 0xa */ W32((u32)(r_ebp+0xfffffa3cu), 0xau);
    /* 0045f5cf: mov dword ptr [ebp - 0x5c0], 0xa */ W32((u32)(r_ebp+0xfffffa40u), 0xau);
    /* 0045f5d9: mov dword ptr [ebp - 0x5bc], 0x14 */ W32((u32)(r_ebp+0xfffffa44u), 0x14u);
    /* 0045f5e3: mov dword ptr [ebp - 0x5b8], 0x1f4 */ W32((u32)(r_ebp+0xfffffa48u), 0x1f4u);
    /* 0045f5ed: mov dword ptr [ebp - 0x5b4], 0x3e8 */ W32((u32)(r_ebp+0xfffffa4cu), 0x3e8u);
    /* 0045f5f7: mov dword ptr [ebp - 0x54], 0x3d090 */ W32((u32)(r_ebp+0xffffffacu), 0x3d090u);
    /* 0045f5fe: mov dword ptr [ebp - 0x50], 0xc350 */ W32((u32)(r_ebp+0xffffffb0u), 0xc350u);
    /* 0045f605: mov dword ptr [ebp - 0x4c], 0xbb8 */ W32((u32)(r_ebp+0xffffffb4u), 0xbb8u);
    /* 0045f60c: mov dword ptr [ebp - 0x48], 0x3e8 */ W32((u32)(r_ebp+0xffffffb8u), 0x3e8u);
    /* 0045f613: mov dword ptr [ebp - 0x44], 0xc8 */ W32((u32)(r_ebp+0xffffffbcu), 0xc8u);
    /* 0045f61a: mov dword ptr [ebp - 0x40], 0x28 */ W32((u32)(r_ebp+0xffffffc0u), 0x28u);
    /* 0045f621: mov dword ptr [ebp - 0x3c], 0xa */ W32((u32)(r_ebp+0xffffffc4u), 0xau);
    /* 0045f628: mov dword ptr [ebp - 0x38], 3 */ W32((u32)(r_ebp+0xffffffc8u), 0x3u);
    /* 0045f62f: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0045f636: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0045f63d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0045f644: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0045f64b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0045f652: mov dword ptr [ebp - 0x20], 3 */ W32((u32)(r_ebp+0xffffffe0u), 0x3u);
    /* 0045f659: mov dword ptr [ebp - 0x1c], 0xa */ W32((u32)(r_ebp+0xffffffe4u), 0xau);
    /* 0045f660: mov dword ptr [ebp - 0x18], 0x28 */ W32((u32)(r_ebp+0xffffffe8u), 0x28u);
    /* 0045f667: mov dword ptr [ebp - 0x14], 0xc8 */ W32((u32)(r_ebp+0xffffffecu), 0xc8u);
    /* 0045f66e: mov dword ptr [ebp - 0x10], 0x3e8 */ W32((u32)(r_ebp+0xfffffff0u), 0x3e8u);
    /* 0045f675: mov dword ptr [ebp - 0xc], 0xbb8 */ W32((u32)(r_ebp+0xfffffff4u), 0xbb8u);
    /* 0045f67c: mov dword ptr [ebp - 8], 0xc350 */ W32((u32)(r_ebp+0xfffffff8u), 0xc350u);
    /* 0045f683: mov dword ptr [ebp - 4], 0x3d090 */ W32((u32)(r_ebp+0xfffffffcu), 0x3d090u);
    /* 0045f68a: mov dword ptr [ebp - 0x6b4], 0x61a8 */ W32((u32)(r_ebp+0xfffff94cu), 0x61a8u);
    /* 0045f694: mov dword ptr [ebp - 0x6b0], 0x5dc */ W32((u32)(r_ebp+0xfffff950u), 0x5dcu);
    /* 0045f69e: mov dword ptr [ebp - 0x6ac], 0x12c */ W32((u32)(r_ebp+0xfffff954u), 0x12cu);
    /* 0045f6a8: mov dword ptr [ebp - 0x6a8], 0x1e */ W32((u32)(r_ebp+0xfffff958u), 0x1eu);
    /* 0045f6b2: mov dword ptr [ebp - 0x6a4], 0xa */ W32((u32)(r_ebp+0xfffff95cu), 0xau);
    /* 0045f6bc: mov dword ptr [ebp - 0x6a0], 3 */ W32((u32)(r_ebp+0xfffff960u), 0x3u);
    /* 0045f6c6: mov dword ptr [ebp - 0x69c], 1 */ W32((u32)(r_ebp+0xfffff964u), 0x1u);
    /* 0045f6d0: mov dword ptr [ebp - 0x698], 1 */ W32((u32)(r_ebp+0xfffff968u), 0x1u);
    /* 0045f6da: mov dword ptr [ebp - 0x694], 1 */ W32((u32)(r_ebp+0xfffff96cu), 0x1u);
    /* 0045f6e4: mov dword ptr [ebp - 0x690], 1 */ W32((u32)(r_ebp+0xfffff970u), 0x1u);
    /* 0045f6ee: mov dword ptr [ebp - 0x68c], 1 */ W32((u32)(r_ebp+0xfffff974u), 0x1u);
    /* 0045f6f8: mov dword ptr [ebp - 0x688], 3 */ W32((u32)(r_ebp+0xfffff978u), 0x3u);
    /* 0045f702: mov dword ptr [ebp - 0x684], 0xa */ W32((u32)(r_ebp+0xfffff97cu), 0xau);
    /* 0045f70c: mov dword ptr [ebp - 0x680], 0x32 */ W32((u32)(r_ebp+0xfffff980u), 0x32u);
    /* 0045f716: mov dword ptr [ebp - 0x67c], 0xc8 */ W32((u32)(r_ebp+0xfffff984u), 0xc8u);
    /* 0045f720: mov dword ptr [ebp - 0x678], 0x3e8 */ W32((u32)(r_ebp+0xfffff988u), 0x3e8u);
    /* 0045f72a: mov dword ptr [ebp - 0x674], 0x1388 */ W32((u32)(r_ebp+0xfffff98cu), 0x1388u);
    /* 0045f734: mov dword ptr [ebp - 0x670], 0x61a8 */ W32((u32)(r_ebp+0xfffff990u), 0x61a8u);
    /* 0045f73e: mov dword ptr [ebp - 0x66c], 0xea60 */ W32((u32)(r_ebp+0xfffff994u), 0xea60u);
    /* 0045f748: mov dword ptr [ebp - 0x668], 0x186a0 */ W32((u32)(r_ebp+0xfffff998u), 0x186a0u);
    /* 0045f752: mov dword ptr [ebp - 0x664], 0x3d090 */ W32((u32)(r_ebp+0xfffff99cu), 0x3d090u);
    /* 0045f75c: mov dword ptr [ebp - 0x6f0], 1 */ W32((u32)(r_ebp+0xfffff910u), 0x1u);
    /* 0045f766: mov dword ptr [ebp - 0x6ec], 2 */ W32((u32)(r_ebp+0xfffff914u), 0x2u);
    /* 0045f770: mov dword ptr [ebp - 0x6e8], 2 */ W32((u32)(r_ebp+0xfffff918u), 0x2u);
    /* 0045f77a: mov dword ptr [ebp - 0x6e4], 2 */ W32((u32)(r_ebp+0xfffff91cu), 0x2u);
    /* 0045f784: mov dword ptr [ebp - 0x6e0], 3 */ W32((u32)(r_ebp+0xfffff920u), 0x3u);
    /* 0045f78e: mov dword ptr [ebp - 0x6dc], 3 */ W32((u32)(r_ebp+0xfffff924u), 0x3u);
    /* 0045f798: mov dword ptr [ebp - 0x6d8], 4 */ W32((u32)(r_ebp+0xfffff928u), 0x4u);
    /* 0045f7a2: mov dword ptr [ebp - 0x6d4], 5 */ W32((u32)(r_ebp+0xfffff92cu), 0x5u);
    /* 0045f7ac: mov dword ptr [ebp - 0x6d0], 5 */ W32((u32)(r_ebp+0xfffff930u), 0x5u);
    /* 0045f7b6: mov dword ptr [ebp - 0x6cc], 5 */ W32((u32)(r_ebp+0xfffff934u), 0x5u);
    /* 0045f7c0: mov dword ptr [ebp - 0x6c8], 6 */ W32((u32)(r_ebp+0xfffff938u), 0x6u);
    /* 0045f7ca: mov dword ptr [ebp - 0x6c4], 6 */ W32((u32)(r_ebp+0xfffff93cu), 0x6u);
    /* 0045f7d4: mov dword ptr [ebp - 0x6c0], 6 */ W32((u32)(r_ebp+0xfffff940u), 0x6u);
    /* 0045f7de: mov dword ptr [ebp - 0x6bc], 6 */ W32((u32)(r_ebp+0xfffff944u), 0x6u);
    /* 0045f7e8: mov dword ptr [ebp - 0x6b8], 7 */ W32((u32)(r_ebp+0xfffff948u), 0x7u);
    /* 0045f7f2: mov dword ptr [ebp - 0x5b0], 0 */ W32((u32)(r_ebp+0xfffffa50u), 0x0u);
    /* 0045f7fc: mov dword ptr [ebp - 0x5ac], 0 */ W32((u32)(r_ebp+0xfffffa54u), 0x0u);
    /* 0045f806: mov dword ptr [ebp - 0x5a8], 0 */ W32((u32)(r_ebp+0xfffffa58u), 0x0u);
    /* 0045f810: mov dword ptr [ebp - 0x5a4], 3 */ W32((u32)(r_ebp+0xfffffa5cu), 0x3u);
    /* 0045f81a: mov dword ptr [ebp - 0x5a0], 4 */ W32((u32)(r_ebp+0xfffffa60u), 0x4u);
    /* 0045f824: mov dword ptr [ebp - 0x59c], 4 */ W32((u32)(r_ebp+0xfffffa64u), 0x4u);
    /* 0045f82e: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 0045f838: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 0045f842: mov dword ptr [ebp - 0x88], 2 */ W32((u32)(r_ebp+0xffffff78u), 0x2u);
    /* 0045f84c: mov dword ptr [ebp - 0x84], 4 */ W32((u32)(r_ebp+0xffffff7cu), 0x4u);
    /* 0045f856: mov dword ptr [ebp - 0x80], 9 */ W32((u32)(r_ebp+0xffffff80u), 0x9u);
    /* 0045f85d: mov dword ptr [ebp - 0x7c], 0xe */ W32((u32)(r_ebp+0xffffff84u), 0xeu);
    /* 0045f864: mov dword ptr [ebp - 0x78], 0x15 */ W32((u32)(r_ebp+0xffffff88u), 0x15u);
    /* 0045f86b: mov dword ptr [ebp - 0x74], 0x19 */ W32((u32)(r_ebp+0xffffff8cu), 0x19u);
    /* 0045f872: mov dword ptr [ebp - 0x70], 0x1d */ W32((u32)(r_ebp+0xffffff90u), 0x1du);
    /* 0045f879: mov dword ptr [ebp - 0x6c], 0x22 */ W32((u32)(r_ebp+0xffffff94u), 0x22u);
    /* 0045f880: mov dword ptr [ebp - 0x68], 0x28 */ W32((u32)(r_ebp+0xffffff98u), 0x28u);
    /* 0045f887: mov dword ptr [ebp - 0x64], 0x2e */ W32((u32)(r_ebp+0xffffff9cu), 0x2eu);
    /* 0045f88e: mov dword ptr [ebp - 0x60], 0x35 */ W32((u32)(r_ebp+0xffffffa0u), 0x35u);
    /* 0045f895: mov dword ptr [ebp - 0x5c], 0x3d */ W32((u32)(r_ebp+0xffffffa4u), 0x3du);
    /* 0045f89c: mov dword ptr [ebp - 0x58], 0x46 */ W32((u32)(r_ebp+0xffffffa8u), 0x46u);
    /* 0045f8a3: mov dword ptr [ebp - 0x598], 0 */ W32((u32)(r_ebp+0xfffffa68u), 0x0u);
    /* 0045f8ad: mov dword ptr [ebp - 0x594], 0 */ W32((u32)(r_ebp+0xfffffa6cu), 0x0u);
    /* 0045f8b7: mov dword ptr [ebp - 0x590], 0 */ W32((u32)(r_ebp+0xfffffa70u), 0x0u);
    /* 0045f8c1: mov dword ptr [ebp - 0x58c], 7 */ W32((u32)(r_ebp+0xfffffa74u), 0x7u);
    /* 0045f8cb: mov dword ptr [ebp - 0x588], 0xc */ W32((u32)(r_ebp+0xfffffa78u), 0xcu);
    /* 0045f8d5: mov dword ptr [ebp - 0x584], 0x12 */ W32((u32)(r_ebp+0xfffffa7cu), 0x12u);
    /* 0045f8df: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0045f8e2: mov dword ptr [ebp - 0x700], eax */ W32((u32)(r_ebp+0xfffff900u), r_eax);
    /* 0045f8e8: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 0045f8ee: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f8f1: mov dword ptr [ebp - 0x700], ecx */ W32((u32)(r_ebp+0xfffff900u), r_ecx);
    /* 0045f8f7: cmp dword ptr [ebp - 0x700], 0x41 */ {  u32 a = R32((u32)(r_ebp+0xfffff900u)); u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045f8fe: ja 0x45f915 */ if ((!fC&&!fZ)) goto L_0045f915;
L_0045f900:; BB(0x0045f900);
    /* 0045f900: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 0045f906: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0045f908: mov dl, byte ptr [eax + 0x45fa65] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x45fa65u))) & 0xffu);
    /* 0045f90e: jmp dword ptr [edx*4 + 0x45fa49] */ { u32 t = R32((u32)(r_edx*4+0x45fa49u)); switch (t) { case 0x45f921u: goto L_0045f921; case 0x45f92du: goto L_0045f92d; case 0x45f939u: goto L_0045f939; case 0x45f915u: goto L_0045f915; default: UNSUP(0x0045f90e, "jump table entry is not a known target"); } }
L_0045f915:; BB(0x0045f915);
    /* 0045f915: mov dword ptr [ebp - 0x660], 0 */ W32((u32)(r_ebp+0xfffff9a0u), 0x0u);
    /* 0045f91f: jmp 0x45f943 */ goto L_0045f943;
L_0045f921:; BB(0x0045f921);
    /* 0045f921: mov dword ptr [ebp - 0x660], 1 */ W32((u32)(r_ebp+0xfffff9a0u), 0x1u);
    /* 0045f92b: jmp 0x45f943 */ goto L_0045f943;
L_0045f92d:; BB(0x0045f92d);
    /* 0045f92d: mov dword ptr [ebp - 0x660], 2 */ W32((u32)(r_ebp+0xfffff9a0u), 0x2u);
    /* 0045f937: jmp 0x45f943 */ goto L_0045f943;
L_0045f939:; BB(0x0045f939);
    /* 0045f939: mov dword ptr [ebp - 0x660], 3 */ W32((u32)(r_ebp+0xfffff9a0u), 0x3u);
L_0045f943:; BB(0x0045f943);
    /* 0045f943: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f947: je 0x45f95b */ if (fZ) goto L_0045f95b;
L_0045f949:; BB(0x0045f949);
    /* 0045f949: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045f94c: mov edx, dword ptr [ebp + ecx*4 - 0x59c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffa64u));
    /* 0045f953: mov dword ptr [ebp - 0x6f4], edx */ W32((u32)(r_ebp+0xfffff90cu), r_edx);
    /* 0045f959: jmp 0x45f96b */ goto L_0045f96b;
L_0045f95b:; BB(0x0045f95b);
    /* 0045f95b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045f95e: mov ecx, dword ptr [ebp + eax*4 - 0x94] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff6cu));
    /* 0045f965: mov dword ptr [ebp - 0x6f4], ecx */ W32((u32)(r_ebp+0xfffff90cu), r_ecx);
L_0045f96b:; BB(0x0045f96b);
    /* 0045f96b: cmp dword ptr [ebp + 0xc], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f96f: jne 0x45f98e */ if (!fZ) goto L_0045f98e;
L_0045f971:; BB(0x0045f971);
    /* 0045f971: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0045f973: cmp dword ptr [ebp + 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f977: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0045f97a: mov dword ptr [ebp - 0x660], edx */ W32((u32)(r_ebp+0xfffff9a0u), r_edx);
    /* 0045f980: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0045f985: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045f988: mov dword ptr [ebp - 0x6f4], eax */ W32((u32)(r_ebp+0xfffff90cu), r_eax);
L_0045f98e:; BB(0x0045f98e);
    /* 0045f98e: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045f992: jge 0x45fa1a */ if ((fS==fO)) goto L_0045fa1a;
L_0045f998:; BB(0x0045f998);
    /* 0045f998: cmp dword ptr [ebp + 0xc], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045f99c: jge 0x45fa00 */ if ((fS==fO)) goto L_0045fa00;
L_0045f99e:; BB(0x0045f99e);
    /* 0045f99e: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f9a2: je 0x45f9b6 */ if (fZ) goto L_0045f9b6;
L_0045f9a4:; BB(0x0045f9a4);
    /* 0045f9a4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045f9a7: mov edx, dword ptr [ebp + ecx*4 - 0x5b4] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffa4cu));
    /* 0045f9ae: mov dword ptr [ebp - 0x6f8], edx */ W32((u32)(r_ebp+0xfffff908u), r_edx);
    /* 0045f9b4: jmp 0x45f9c6 */ goto L_0045f9c6;
L_0045f9b6:; BB(0x0045f9b6);
    /* 0045f9b6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045f9b9: mov ecx, dword ptr [ebp + eax*4 - 0x6f4] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffff90cu));
    /* 0045f9c0: mov dword ptr [ebp - 0x6f8], ecx */ W32((u32)(r_ebp+0xfffff908u), r_ecx);
L_0045f9c6:; BB(0x0045f9c6);
    /* 0045f9c6: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0045f9c9: cmp edx, dword ptr [ebp - 0x6f8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffff908u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045f9cf: jl 0x45f9fe */ if ((fS!=fO)) goto L_0045f9fe;
L_0045f9d1:; BB(0x0045f9d1);
    /* 0045f9d1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045f9d4: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045f9d7: mov dword ptr [ebp - 0x65c], eax */ W32((u32)(r_ebp+0xfffff9a4u), r_eax);
    /* 0045f9dd: mov ecx, dword ptr [ebp - 0x6f4] */ r_ecx = R32((u32)(r_ebp+0xfffff90cu));
    /* 0045f9e3: add ecx, dword ptr [ebp - 0x65c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffff9a4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f9e9: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045f9ec: lea edx, [ebp + ecx - 0x580] */ r_edx = (u32)(r_ebp+r_ecx+0xfffffa80u);
    /* 0045f9f3: mov eax, dword ptr [ebp - 0x660] */ r_eax = R32((u32)(r_ebp+0xfffff9a0u));
    /* 0045f9f9: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0045f9fc: jmp 0x45fa43 */ goto L_0045fa43;
L_0045f9fe:; BB(0x0045f9fe);
    /* 0045f9fe: jmp 0x45fa18 */ goto L_0045fa18;
L_0045fa00:; BB(0x0045fa00);
    /* 0045fa00: mov ecx, dword ptr [ebp - 0x6f4] */ r_ecx = R32((u32)(r_ebp+0xfffff90cu));
    /* 0045fa06: lea edx, [ebp + ecx*8 - 0x658] */ r_edx = (u32)(r_ebp+r_ecx*8+0xfffff9a8u);
    /* 0045fa0d: mov eax, dword ptr [ebp - 0x660] */ r_eax = R32((u32)(r_ebp+0xfffff9a0u));
    /* 0045fa13: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0045fa16: jmp 0x45fa43 */ goto L_0045fa43;
L_0045fa18:; BB(0x0045fa18);
    /* 0045fa18: jmp 0x45fa41 */ goto L_0045fa41;
L_0045fa1a:; BB(0x0045fa1a);
    /* 0045fa1a: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045fa1e: jne 0x45fa2c */ if (!fZ) goto L_0045fa2c;
L_0045fa20:; BB(0x0045fa20);
    /* 0045fa20: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045fa23: mov eax, dword ptr [ebp + ecx*4 - 0x6b4] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xfffff94cu));
    /* 0045fa2a: jmp 0x45fa43 */ goto L_0045fa43;
L_0045fa2c:; BB(0x0045fa2c);
    /* 0045fa2c: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045fa30: je 0x45fa38 */ if (fZ) goto L_0045fa38;
L_0045fa32:; BB(0x0045fa32);
    /* 0045fa32: cmp dword ptr [ebp + 8], 6 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045fa36: jne 0x45fa41 */ if (!fZ) goto L_0045fa41;
L_0045fa38:; BB(0x0045fa38);
    /* 0045fa38: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0045fa3b: mov eax, dword ptr [ebp + edx*4 - 0x54] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffacu));
    /* 0045fa3f: jmp 0x45fa43 */ goto L_0045fa43;
L_0045fa41:; BB(0x0045fa41);
    /* 0045fa41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045fa43:; BB(0x0045fa43);
    /* 0045fa43: mov esp, ebp */ r_esp = r_ebp;
    /* 0045fa45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045fa46: ret 0x14 */ FN_RET(0x0045e7ec); r_esp += 24; return;
}

void f_0045faa7(void) /* FUN_0045faa7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045faa7);
    /* 0045faa7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045faa8: mov ebp, esp */ r_ebp = r_esp;
    /* 0045faaa: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045faad: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045fab0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fab3: call 0x45e06f */ r_esp -= 4; W32(r_esp, 0x45fab8u); f_0045e06f();
    /* 0045fab8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045fabb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045fac2: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0045fac9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045facc: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0045facf: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fad2: jg 0x45fb75 */ if ((!fZ&&fS==fO)) goto L_0045fb75;
L_0045fad8:; BB(0x0045fad8);
    /* 0045fad8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0045fadf: jmp 0x45faea */ goto L_0045faea;
L_0045fae1:; BB(0x0045fae1);
    /* 0045fae1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fae4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045fae7: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0045faea:; BB(0x0045faea);
    /* 0045faea: cmp dword ptr [ebp - 0x10], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045faee: jge 0x45fb0d */ if ((fS==fO)) goto L_0045fb0d;
L_0045faf0:; BB(0x0045faf0);
    /* 0045faf0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045faf3: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045faf6: movsx ecx, byte ptr [eax + 5] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x5u));
    /* 0045fafa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045fafc: je 0x45fb09 */ if (fZ) goto L_0045fb09;
L_0045fafe:; BB(0x0045fafe);
    /* 0045fafe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045fb01: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045fb04: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0045fb07: jmp 0x45fb0b */ goto L_0045fb0b;
L_0045fb09:; BB(0x0045fb09);
    /* 0045fb09: jmp 0x45fb0d */ goto L_0045fb0d;
L_0045fb0b:; BB(0x0045fb0b);
    /* 0045fb0b: jmp 0x45fae1 */ goto L_0045fae1;
L_0045fb0d:; BB(0x0045fb0d);
    /* 0045fb0d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0045fb14: jmp 0x45fb1f */ goto L_0045fb1f;
L_0045fb16:; BB(0x0045fb16);
    /* 0045fb16: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fb19: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fb1c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0045fb1f:; BB(0x0045fb1f);
    /* 0045fb1f: cmp dword ptr [ebp - 0x10], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fb23: jge 0x45fb70 */ if ((fS==fO)) goto L_0045fb70;
L_0045fb25:; BB(0x0045fb25);
    /* 0045fb25: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0045fb2c: jmp 0x45fb37 */ goto L_0045fb37;
L_0045fb2e:; BB(0x0045fb2e);
    /* 0045fb2e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045fb31: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045fb34: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0045fb37:; BB(0x0045fb37);
    /* 0045fb37: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045fb3a: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fb3d: jge 0x45fb6e */ if ((fS==fO)) goto L_0045fb6e;
L_0045fb3f:; BB(0x0045fb3f);
    /* 0045fb3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045fb42: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fb45: movsx ecx, byte ptr [eax + 5] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x5u));
    /* 0045fb49: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fb4c: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fb4f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fb52: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fb54: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fb57: movsx eax, byte ptr [edx + eax + 0xe04c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0xe04cu));
    /* 0045fb5f: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045fb61: jne 0x45fb6c */ if (!fZ) goto L_0045fb6c;
L_0045fb63:; BB(0x0045fb63);
    /* 0045fb63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045fb66: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045fb69: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0045fb6c:; BB(0x0045fb6c);
    /* 0045fb6c: jmp 0x45fb2e */ goto L_0045fb2e;
L_0045fb6e:; BB(0x0045fb6e);
    /* 0045fb6e: jmp 0x45fb16 */ goto L_0045fb16;
L_0045fb70:; BB(0x0045fb70);
    /* 0045fb70: jmp 0x45fd24 */ goto L_0045fd24;
L_0045fb75:; BB(0x0045fb75);
    /* 0045fb75: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045fb78: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0045fb7a: mov byte ptr [ebp - 0x1c], al */ W8((u32)(r_ebp+0xffffffe4u), (u8)r_eax);
    /* 0045fb7d: cmp byte ptr [ebp - 0x1c], 4 */ {  u32 a = R8((u32)(r_ebp+0xffffffe4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0045fb81: je 0x45fb9c */ if (fZ) goto L_0045fb9c;
L_0045fb83:; BB(0x0045fb83);
    /* 0045fb83: cmp byte ptr [ebp - 0x1c], 5 */ {  u32 a = R8((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0045fb87: je 0x45fc7c */ if (fZ) goto L_0045fc7c;
L_0045fb8d:; BB(0x0045fb8d);
    /* 0045fb8d: cmp byte ptr [ebp - 0x1c], 6 */ {  u32 a = R8((u32)(r_ebp+0xffffffe4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0045fb91: je 0x45fcbc */ if (fZ) goto L_0045fcbc;
L_0045fb97:; BB(0x0045fb97);
    /* 0045fb97: jmp 0x45fd24 */ goto L_0045fd24;
L_0045fb9c:; BB(0x0045fb9c);
    /* 0045fb9c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0045fba3: jmp 0x45fbae */ goto L_0045fbae;
L_0045fba5:; BB(0x0045fba5);
    /* 0045fba5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fba8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045fbab: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0045fbae:; BB(0x0045fbae);
    /* 0045fbae: cmp dword ptr [ebp - 0x10], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fbb2: jge 0x45fc77 */ if ((fS==fO)) goto L_0045fc77;
L_0045fbb8:; BB(0x0045fbb8);
    /* 0045fbb8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fbbb: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fbbe: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fbc1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fbc3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fbc6: movsx edx, byte ptr [ecx + eax + 0xe04c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0xe04cu));
    /* 0045fbce: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fbd1: jle 0x45fbee */ if ((fZ||fS!=fO)) goto L_0045fbee;
L_0045fbd3:; BB(0x0045fbd3);
    /* 0045fbd3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fbd6: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fbd9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fbdc: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045fbde: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fbe1: movsx eax, byte ptr [edx + ecx + 0xe04c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0xe04cu));
    /* 0045fbe9: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fbec: jl 0x45fc69 */ if ((fS!=fO)) goto L_0045fc69;
L_0045fbee:; BB(0x0045fbee);
    /* 0045fbee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fbf1: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fbf4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fbf7: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045fbf9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fbfc: movsx eax, byte ptr [eax + edx + 0xe04c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xe04cu));
    /* 0045fc04: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045fc05: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0045fc0a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0045fc0a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0045fc0a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0045fc0c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045fc0f: je 0x45fc69 */ if (fZ) goto L_0045fc69;
L_0045fc11:; BB(0x0045fc11);
    /* 0045fc11: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fc14: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fc17: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fc1a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fc1c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fc1f: movsx eax, byte ptr [ecx + eax + 0xe04c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0xe04cu));
    /* 0045fc27: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045fc28: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0045fc2d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0045fc2d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0045fc2d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0045fc2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045fc31: je 0x45fc69 */ if (fZ) goto L_0045fc69;
L_0045fc33:; BB(0x0045fc33);
    /* 0045fc33: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fc36: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fc39: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fc3c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fc3e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fc41: movsx edx, byte ptr [ecx + eax + 0xe04c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0xe04cu));
    /* 0045fc49: cmp edx, 0x47 */ {  u32 a = r_edx; u32 b = 0x47u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fc4c: jle 0x45fc72 */ if ((fZ||fS!=fO)) goto L_0045fc72;
L_0045fc4e:; BB(0x0045fc4e);
    /* 0045fc4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fc51: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fc54: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fc57: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045fc59: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fc5c: movsx eax, byte ptr [edx + ecx + 0xe04c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0xe04cu));
    /* 0045fc64: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fc67: jge 0x45fc72 */ if ((fS==fO)) goto L_0045fc72;
L_0045fc69:; BB(0x0045fc69);
    /* 0045fc69: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045fc6c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045fc6f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0045fc72:; BB(0x0045fc72);
    /* 0045fc72: jmp 0x45fba5 */ goto L_0045fba5;
L_0045fc77:; BB(0x0045fc77);
    /* 0045fc77: jmp 0x45fd24 */ goto L_0045fd24;
L_0045fc7c:; BB(0x0045fc7c);
    /* 0045fc7c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0045fc83: jmp 0x45fc8e */ goto L_0045fc8e;
L_0045fc85:; BB(0x0045fc85);
    /* 0045fc85: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fc88: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045fc8b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0045fc8e:; BB(0x0045fc8e);
    /* 0045fc8e: cmp dword ptr [ebp - 0x10], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fc92: jge 0x45fcba */ if ((fS==fO)) goto L_0045fcba;
L_0045fc94:; BB(0x0045fc94);
    /* 0045fc94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fc97: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fc9a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fc9d: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045fc9f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fca2: movsx eax, byte ptr [edx + ecx + 0xe04c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0xe04cu));
    /* 0045fcaa: cmp eax, 0x29 */ {  u32 a = r_eax; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fcad: jge 0x45fcb8 */ if ((fS==fO)) goto L_0045fcb8;
L_0045fcaf:; BB(0x0045fcaf);
    /* 0045fcaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045fcb2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045fcb5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0045fcb8:; BB(0x0045fcb8);
    /* 0045fcb8: jmp 0x45fc85 */ goto L_0045fc85;
L_0045fcba:; BB(0x0045fcba);
    /* 0045fcba: jmp 0x45fd24 */ goto L_0045fd24;
L_0045fcbc:; BB(0x0045fcbc);
    /* 0045fcbc: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0045fcc3: jmp 0x45fcce */ goto L_0045fcce;
L_0045fcc5:; BB(0x0045fcc5);
    /* 0045fcc5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fcc8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045fccb: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0045fcce:; BB(0x0045fcce);
    /* 0045fcce: cmp dword ptr [ebp - 0x10], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fcd2: jge 0x45fd24 */ if ((fS==fO)) goto L_0045fd24;
L_0045fcd4:; BB(0x0045fcd4);
    /* 0045fcd4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fcd7: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fcda: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fcdd: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045fcdf: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fce2: movsx eax, byte ptr [edx + ecx + 0xe04c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0xe04cu));
    /* 0045fcea: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045fceb: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0045fcf0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0045fcf0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0045fcf0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0045fcf2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045fcf4: jle 0x45fd22 */ if ((fZ||fS!=fO)) goto L_0045fd22;
L_0045fcf6:; BB(0x0045fcf6);
    /* 0045fcf6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fcf9: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fcfc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045fcff: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fd01: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fd04: movsx eax, byte ptr [ecx + eax + 0xe04c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0xe04cu));
    /* 0045fd0c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045fd0d: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0045fd12: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0045fd12, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0045fd12, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0045fd14: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fd17: jge 0x45fd22 */ if ((fS==fO)) goto L_0045fd22;
L_0045fd19:; BB(0x0045fd19);
    /* 0045fd19: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045fd1c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045fd1f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0045fd22:; BB(0x0045fd22);
    /* 0045fd22: jmp 0x45fcc5 */ goto L_0045fcc5;
L_0045fd24:; BB(0x0045fd24);
    /* 0045fd24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045fd27: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0045fd2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd2c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045fd2f: movsx eax, byte ptr [edx + 3] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x3u));
    /* 0045fd33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045fd37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd38: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045fd3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd3c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045fd3f: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0045fd42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd43: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fd46: call 0x45e7ec */ r_esp -= 4; W32(r_esp, 0x45fd4bu); f_0045e7ec();
    /* 0045fd4b: mov esp, ebp */ r_esp = r_ebp;
    /* 0045fd4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045fd4e: ret 4 */ FN_RET(0x0045faa7); r_esp += 8; return;
}

void f_0045fd51(void) /* FUN_0045fd51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045fd51);
    /* 0045fd51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd52: mov ebp, esp */ r_ebp = r_esp;
    /* 0045fd54: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045fd57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd59: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045fd5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd5e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045fd61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd62: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045fd65: call 0x45c436 */ r_esp -= 4; W32(r_esp, 0x45fd6au); f_0045c436();
    /* 0045fd6a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045fd6d: cmp dword ptr [ebp + 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045fd71: jne 0x45fdb1 */ if (!fZ) goto L_0045fdb1;
L_0045fd73:; BB(0x0045fd73);
    /* 0045fd73: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045fd7a: jmp 0x45fd85 */ goto L_0045fd85;
L_0045fd7c:; BB(0x0045fd7c);
    /* 0045fd7c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045fd7f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045fd82: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0045fd85:; BB(0x0045fd85);
    /* 0045fd85: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fd89: jge 0x45fdaf */ if ((fS==fO)) goto L_0045fdaf;
L_0045fd8b:; BB(0x0045fd8b);
    /* 0045fd8b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045fd8e: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fd91: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fd94: lea esi, [eax + edx + 0x94] */ r_esi = (u32)(r_eax+r_edx+0x94u);
    /* 0045fd9b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045fd9e: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fda1: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0045fda4: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045fda6: mov ecx, 9 */ r_ecx = 0x9u;
    /* 0045fdab: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0045fdad: jmp 0x45fd7c */ goto L_0045fd7c;
L_0045fdaf:; BB(0x0045fdaf);
    /* 0045fdaf: jmp 0x45fdcb */ goto L_0045fdcb;
L_0045fdb1:; BB(0x0045fdb1);
    /* 0045fdb1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0045fdb4: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fdb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fdba: lea esi, [eax + edx + 0x94] */ r_esi = (u32)(r_eax+r_edx+0x94u);
    /* 0045fdc1: mov ecx, 9 */ r_ecx = 0x9u;
    /* 0045fdc6: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0045fdc9: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
L_0045fdcb:; BB(0x0045fdcb);
    /* 0045fdcb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045fdcc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045fdcd: mov esp, ebp */ r_esp = r_ebp;
    /* 0045fdcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045fdd0: ret 0xc */ FN_RET(0x0045fd51); r_esp += 16; return;
}

void f_0045fdd3(void) /* FUN_0045fdd3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045fdd3);
    /* 0045fdd3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045fdd4: mov ebp, esp */ r_ebp = r_esp;
    /* 0045fdd6: mov eax, 0x1c20 */ r_eax = 0x1c20u;
    /* 0045fddb: call 0x626050 */ r_esp -= 4; W32(r_esp, 0x45fde0u); f_00626050();
    /* 0045fde0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045fde1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045fde2: mov dword ptr [ebp - 0x1c18], ecx */ W32((u32)(r_ebp+0xffffe3e8u), r_ecx);
    /* 0045fde8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fdea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045fded: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fdee: mov ecx, dword ptr [ebp - 0x1c18] */ r_ecx = R32((u32)(r_ebp+0xffffe3e8u));
    /* 0045fdf4: call 0x45c9db */ r_esp -= 4; W32(r_esp, 0x45fdf9u); f_0045c9db();
    /* 0045fdf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045fdfb: je 0x45fe82 */ if (fZ) goto L_0045fe82;
L_0045fe01:; BB(0x0045fe01);
    /* 0045fe01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe03: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045fe06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe07: mov ecx, dword ptr [ebp - 0x1c18] */ r_ecx = R32((u32)(r_ebp+0xffffe3e8u));
    /* 0045fe0d: call 0x45c436 */ r_esp -= 4; W32(r_esp, 0x45fe12u); f_0045c436();
    /* 0045fe12: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045fe15: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0045fe18: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0045fe1b: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fe1e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045fe21: lea edi, [eax + edx + 0x94] */ r_edi = (u32)(r_eax+r_edx+0x94u);
    /* 0045fe28: mov ecx, 9 */ r_ecx = 0x9u;
    /* 0045fe2d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0045fe2f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045fe32: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0045fe35: add edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045fe38: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045fe3b: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 0045fe3e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045fe41: cmp dword ptr [ecx + 0x68], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ecx+0x68u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0045fe48: jae 0x45fe58 */ if (!fC) goto L_0045fe58;
L_0045fe4a:; BB(0x0045fe4a);
    /* 0045fe4a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045fe4d: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0045fe50: mov dword ptr [ebp - 0x1c1c], eax */ W32((u32)(r_ebp+0xffffe3e4u), r_eax);
    /* 0045fe56: jmp 0x45fe62 */ goto L_0045fe62;
L_0045fe58:; BB(0x0045fe58);
    /* 0045fe58: mov dword ptr [ebp - 0x1c1c], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffe3e4u), 0x3b9aca00u);
L_0045fe62:; BB(0x0045fe62);
    /* 0045fe62: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045fe65: mov edx, dword ptr [ebp - 0x1c1c] */ r_edx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 0045fe6b: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 0045fe6e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045fe71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe72: mov ecx, dword ptr [ebp - 0x1c18] */ r_ecx = R32((u32)(r_ebp+0xffffe3e8u));
    /* 0045fe78: call 0x45c969 */ r_esp -= 4; W32(r_esp, 0x45fe7du); f_0045c969();
    /* 0045fe7d: jmp 0x45ff23 */ goto L_0045ff23;
L_0045fe82:; BB(0x0045fe82);
    /* 0045fe82: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045fe85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe86: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045fe89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe8a: mov ecx, dword ptr [ebp - 0x1c18] */ r_ecx = R32((u32)(r_ebp+0xffffe3e8u));
    /* 0045fe90: call 0x45ca02 */ r_esp -= 4; W32(r_esp, 0x45fe95u); f_0045ca02();
    /* 0045fe95: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045fe98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe99: lea ecx, [ebp - 0x1c14] */ r_ecx = (u32)(r_ebp+0xffffe3ecu);
    /* 0045fe9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fea0: mov ecx, dword ptr [ebp - 0x1c18] */ r_ecx = R32((u32)(r_ebp+0xffffe3e8u));
    /* 0045fea6: call 0x45c7e0 */ r_esp -= 4; W32(r_esp, 0x45feabu); f_0045c7e0();
    /* 0045feab: lea edx, [ebp - 0x1c14] */ r_edx = (u32)(r_ebp+0xffffe3ecu);
    /* 0045feb1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0045feb4: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0045feb7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0045feba: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045febd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045fec0: lea edi, [ecx + eax + 0x94] */ r_edi = (u32)(r_ecx+r_eax+0x94u);
    /* 0045fec7: mov ecx, 9 */ r_ecx = 0x9u;
    /* 0045fecc: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0045fece: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045fed1: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0045fed4: add eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fed7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045feda: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 0045fedd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045fee0: cmp dword ptr [edx + 0x68], 0x3b9aca00 */ {  u32 a = R32((u32)(r_edx+0x68u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0045fee7: jae 0x45fef7 */ if (!fC) goto L_0045fef7;
L_0045fee9:; BB(0x0045fee9);
    /* 0045fee9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045feec: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0045feef: mov dword ptr [ebp - 0x1c20], ecx */ W32((u32)(r_ebp+0xffffe3e0u), r_ecx);
    /* 0045fef5: jmp 0x45ff01 */ goto L_0045ff01;
L_0045fef7:; BB(0x0045fef7);
    /* 0045fef7: mov dword ptr [ebp - 0x1c20], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffe3e0u), 0x3b9aca00u);
L_0045ff01:; BB(0x0045ff01);
    /* 0045ff01: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ff04: mov eax, dword ptr [ebp - 0x1c20] */ r_eax = R32((u32)(r_ebp+0xffffe3e0u));
    /* 0045ff0a: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 0045ff0d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045ff10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff11: lea edx, [ebp - 0x1c14] */ r_edx = (u32)(r_ebp+0xffffe3ecu);
    /* 0045ff17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff18: mov ecx, dword ptr [ebp - 0x1c18] */ r_ecx = R32((u32)(r_ebp+0xffffe3e8u));
    /* 0045ff1e: call 0x45c77b */ r_esp -= 4; W32(r_esp, 0x45ff23u); f_0045c77b();
L_0045ff23:; BB(0x0045ff23);
    /* 0045ff23: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045ff24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045ff25: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ff27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ff28: ret 0x10 */ FN_RET(0x0045fdd3); r_esp += 20; return;
}

void f_0045ff2b(void) /* FUN_0045ff2b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ff2b);
    /* 0045ff2b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff2c: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ff2e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ff31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff32: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff33: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045ff36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff38: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045ff3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ff3f: call 0x45c436 */ r_esp -= 4; W32(r_esp, 0x45ff44u); f_0045c436();
    /* 0045ff44: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045ff47: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045ff4a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045ff4d: jmp 0x45ff58 */ goto L_0045ff58;
L_0045ff4f:; BB(0x0045ff4f);
    /* 0045ff4f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ff52: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ff55: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0045ff58:; BB(0x0045ff58);
    /* 0045ff58: cmp dword ptr [ebp - 8], 0x63 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ff5c: jge 0x45ff8a */ if ((fS==fO)) goto L_0045ff8a;
L_0045ff5e:; BB(0x0045ff5e);
    /* 0045ff5e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ff61: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045ff64: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045ff67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ff6a: lea esi, [ecx + eax + 0x94] */ r_esi = (u32)(r_ecx+r_eax+0x94u);
    /* 0045ff71: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ff74: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045ff77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ff7a: lea edi, [eax + edx + 0x94] */ r_edi = (u32)(r_eax+r_edx+0x94u);
    /* 0045ff81: mov ecx, 9 */ r_ecx = 0x9u;
    /* 0045ff86: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0045ff88: jmp 0x45ff4f */ goto L_0045ff4f;
L_0045ff8a:; BB(0x0045ff8a);
    /* 0045ff8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ff8d: mov byte ptr [ecx + 0xe80], 0xff */ W8((u32)(r_ecx+0xe80u), 0xffu);
    /* 0045ff94: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ff97: mov byte ptr [edx + 0xe81], 1 */ W8((u32)(r_edx+0xe81u), 0x1u);
    /* 0045ff9e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ffa1: mov byte ptr [eax + 0xe82], 1 */ W8((u32)(r_eax+0xe82u), 0x1u);
    /* 0045ffa8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ffab: mov byte ptr [ecx + 0xe83], 0 */ W8((u32)(r_ecx+0xe83u), 0x0u);
    /* 0045ffb2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ffb5: mov byte ptr [edx + 0xe84], 0 */ W8((u32)(r_edx+0xe84u), 0x0u);
    /* 0045ffbc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ffbf: mov dword ptr [eax + 0xe9c], 0 */ W32((u32)(r_eax+0xe9cu), 0x0u);
    /* 0045ffc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ffcc: mov dword ptr [ecx + 0xea0], 0xfffffc18 */ W32((u32)(r_ecx+0xea0u), 0xfffffc18u);
    /* 0045ffd6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045ffdd: jmp 0x45ffe8 */ goto L_0045ffe8;
L_0045ffdf:; BB(0x0045ffdf);
    /* 0045ffdf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ffe2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ffe5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0045ffe8:; BB(0x0045ffe8);
    /* 0045ffe8: cmp dword ptr [ebp - 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ffec: jge 0x45fffd */ if ((fS==fO)) goto L_0045fffd;
L_0045ffee:; BB(0x0045ffee);
    /* 0045ffee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fff1: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fff4: mov byte ptr [eax + 0xe85], 0 */ W8((u32)(r_eax+0xe85u), 0x0u);
    /* 0045fffb: jmp 0x45ffdf */ goto L_0045ffdf;
L_0045fffd:; BB(0x0045fffd);
    /* 0045fffd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00460000: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460001: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00460004: call 0x45c969 */ r_esp -= 4; W32(r_esp, 0x460009u); f_0045c969();
    /* 00460009: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046000a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046000b: mov esp, ebp */ r_esp = r_ebp;
    /* 0046000d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046000e: ret 8 */ FN_RET(0x0045ff2b); r_esp += 12; return;
}

void f_00460011(void) /* FUN_00460011 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460011);
    /* 00460011: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460012: mov ebp, esp */ r_ebp = r_esp;
    /* 00460014: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460015: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00460018: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046001a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046001d: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x460022u); f_0045c419();
    /* 00460022: mov al, byte ptr [eax + 0x93] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x93u))) & 0xffu);
    /* 00460028: mov esp, ebp */ r_esp = r_ebp;
    /* 0046002a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046002b: ret  */ FN_RET(0x00460011); r_esp += 4; return;
}

void f_0046002c(void) /* FUN_0046002c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046002c);
    /* 0046002c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046002d: mov ebp, esp */ r_ebp = r_esp;
    /* 0046002f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460032: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00460035: push 0x67b28c */ { u32 v = 0x67b28cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046003a: push 0x67b290 */ { u32 v = 0x67b290u; r_esp -= 4; W32(r_esp, v); }
    /* 0046003f: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x460044u); f_006243c0();
    /* 00460044: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460047: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046004a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046004e: je 0x46007e */ if (fZ) goto L_0046007e;
L_00460050:; BB(0x00460050);
    /* 00460050: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460053: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460054: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00460056: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046005b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046005e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046005f: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x460064u); f_00624250();
    /* 00460064: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460067: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0046006a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046006d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046006e: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x460073u); f_006241d0();
    /* 00460073: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460076: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046007a: jne 0x46007e */ if (!fZ) goto L_0046007e;
L_0046007c:; BB(0x0046007c);
    /* 0046007c: jmp 0x4600fb */ goto L_004600fb;
L_0046007e:; BB(0x0046007e);
    /* 0046007e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00460081: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00460087: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046008a: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 00460091: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00460094: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0046009b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046009e: mov word ptr [eax + 0xc], 0x1e */ W16((u32)(r_eax+0xcu), 0x1eu);
    /* 004600a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004600a7: mov word ptr [ecx + 0xe], 5 */ W16((u32)(r_ecx+0xeu), 0x5u);
    /* 004600ad: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004600b3: jmp 0x4600c1 */ goto L_004600c1;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004600b9: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004600bd: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004600c1:; BB(0x004600c1);
    /* 004600c1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004600c5: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004600c8: jge 0x4600fb */ if ((fS==fO)) goto L_004600fb;
L_004600ca:; BB(0x004600ca);
    /* 004600ca: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004600ce: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004600d1: mov dword ptr [edx + ecx*8 + 0x10], 0xffffffff */ W32((u32)(r_edx+r_ecx*8+0x10u), 0xffffffffu);
    /* 004600d9: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004600dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004600e0: mov dword ptr [ecx + eax*8 + 0x14], 0xffffffff */ W32((u32)(r_ecx+r_eax*8+0x14u), 0xffffffffu);
    /* 004600e8: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004600ec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004600ef: mov word ptr [eax + edx*2 + 0x88], 5 */ W16((u32)(r_eax+r_edx*2+0x88u), 0x5u);
    /* 004600f9: jmp 0x4600b5 */ goto L_004600b5;
L_004600fb:; BB(0x004600fb);
    /* 004600fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004600fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004600fe: ret 4 */ FN_RET(0x0046002c); r_esp += 8; return;
}

void f_00460101(void) /* FUN_00460101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460101);
    /* 00460101: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460102: mov ebp, esp */ r_ebp = r_esp;
    /* 00460104: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460107: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046010a: push 0x67b2a0 */ { u32 v = 0x67b2a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046010f: push 0x67b2a4 */ { u32 v = 0x67b2a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00460114: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x460119u); f_006243c0();
    /* 00460119: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046011c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0046011f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460123: je 0x460148 */ if (fZ) goto L_00460148;
L_00460125:; BB(0x00460125);
    /* 00460125: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460129: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012b: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 00460130: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00460133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460134: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x460139u); f_00624f00();
    /* 00460139: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046013c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046013f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460140: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x460145u); f_006241d0();
    /* 00460145: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460148:; BB(0x00460148);
    /* 00460148: mov esp, ebp */ r_esp = r_ebp;
    /* 0046014a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046014b: ret 4 */ FN_RET(0x00460101); r_esp += 8; return;
}

void f_0046014e(void) /* FUN_0046014e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046014e);
    /* 0046014e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046014f: mov ebp, esp */ r_ebp = r_esp;
    /* 00460151: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460157: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 0046015d: mov dword ptr [ebp - 0x88], 0x111aa */ W32((u32)(r_ebp+0xffffff78u), 0x111aau);
    /* 00460167: mov dword ptr [ebp - 0x84], 0x111aa */ W32((u32)(r_ebp+0xffffff7cu), 0x111aau);
    /* 00460171: mov dword ptr [ebp - 0x80], 0x11198 */ W32((u32)(r_ebp+0xffffff80u), 0x11198u);
    /* 00460178: mov dword ptr [ebp - 0x7c], 0x11198 */ W32((u32)(r_ebp+0xffffff84u), 0x11198u);
    /* 0046017f: mov dword ptr [ebp - 0x78], 0x1127a */ W32((u32)(r_ebp+0xffffff88u), 0x1127au);
    /* 00460186: mov dword ptr [ebp - 0x74], 0x1127b */ W32((u32)(r_ebp+0xffffff8cu), 0x1127bu);
    /* 0046018d: mov dword ptr [ebp - 0x70], 0x1127d */ W32((u32)(r_ebp+0xffffff90u), 0x1127du);
    /* 00460194: mov dword ptr [ebp - 0x6c], 0x1127c */ W32((u32)(r_ebp+0xffffff94u), 0x1127cu);
    /* 0046019b: mov dword ptr [ebp - 0x68], 0x1127e */ W32((u32)(r_ebp+0xffffff98u), 0x1127eu);
    /* 004601a2: mov dword ptr [ebp - 0x64], 0x1127e */ W32((u32)(r_ebp+0xffffff9cu), 0x1127eu);
    /* 004601a9: mov dword ptr [ebp - 0x60], 0x1127f */ W32((u32)(r_ebp+0xffffffa0u), 0x1127fu);
    /* 004601b0: mov dword ptr [ebp - 0x5c], 0x1127f */ W32((u32)(r_ebp+0xffffffa4u), 0x1127fu);
    /* 004601b7: mov dword ptr [ebp - 0x58], 0x11281 */ W32((u32)(r_ebp+0xffffffa8u), 0x11281u);
    /* 004601be: mov dword ptr [ebp - 0x54], 0x11280 */ W32((u32)(r_ebp+0xffffffacu), 0x11280u);
    /* 004601c5: mov dword ptr [ebp - 0x50], 0x11283 */ W32((u32)(r_ebp+0xffffffb0u), 0x11283u);
    /* 004601cc: mov dword ptr [ebp - 0x4c], 0x11282 */ W32((u32)(r_ebp+0xffffffb4u), 0x11282u);
    /* 004601d3: mov dword ptr [ebp - 0x48], 0x11284 */ W32((u32)(r_ebp+0xffffffb8u), 0x11284u);
    /* 004601da: mov dword ptr [ebp - 0x44], 0x11284 */ W32((u32)(r_ebp+0xffffffbcu), 0x11284u);
    /* 004601e1: mov dword ptr [ebp - 0x40], 0x1128a */ W32((u32)(r_ebp+0xffffffc0u), 0x1128au);
    /* 004601e8: mov dword ptr [ebp - 0x3c], 0x1128a */ W32((u32)(r_ebp+0xffffffc4u), 0x1128au);
    /* 004601ef: mov dword ptr [ebp - 0x38], 0x11285 */ W32((u32)(r_ebp+0xffffffc8u), 0x11285u);
    /* 004601f6: mov dword ptr [ebp - 0x34], 0x11285 */ W32((u32)(r_ebp+0xffffffccu), 0x11285u);
    /* 004601fd: mov dword ptr [ebp - 0x30], 0x11289 */ W32((u32)(r_ebp+0xffffffd0u), 0x11289u);
    /* 00460204: mov dword ptr [ebp - 0x2c], 0x11288 */ W32((u32)(r_ebp+0xffffffd4u), 0x11288u);
    /* 0046020b: mov dword ptr [ebp - 0x28], 0x1128b */ W32((u32)(r_ebp+0xffffffd8u), 0x1128bu);
    /* 00460212: mov dword ptr [ebp - 0x24], 0x1128b */ W32((u32)(r_ebp+0xffffffdcu), 0x1128bu);
    /* 00460219: mov dword ptr [ebp - 0x20], 0x1128d */ W32((u32)(r_ebp+0xffffffe0u), 0x1128du);
    /* 00460220: mov dword ptr [ebp - 0x1c], 0x1128c */ W32((u32)(r_ebp+0xffffffe4u), 0x1128cu);
    /* 00460227: mov dword ptr [ebp - 0x18], 0x1128e */ W32((u32)(r_ebp+0xffffffe8u), 0x1128eu);
    /* 0046022e: mov dword ptr [ebp - 0x14], 0x1128e */ W32((u32)(r_ebp+0xffffffecu), 0x1128eu);
    /* 00460235: mov dword ptr [ebp - 0x10], 0x11286 */ W32((u32)(r_ebp+0xfffffff0u), 0x11286u);
    /* 0046023c: mov dword ptr [ebp - 0xc], 0x11286 */ W32((u32)(r_ebp+0xfffffff4u), 0x11286u);
    /* 00460243: mov dword ptr [ebp - 8], 0x1128f */ W32((u32)(r_ebp+0xfffffff8u), 0x1128fu);
    /* 0046024a: mov dword ptr [ebp - 4], 0x1128f */ W32((u32)(r_ebp+0xfffffffcu), 0x1128fu);
    /* 00460251: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460258: je 0x460261 */ if (fZ) goto L_00460261;
L_0046025a:; BB(0x0046025a);
    /* 0046025a: mov eax, 0x111b4 */ r_eax = 0x111b4u;
    /* 0046025f: jmp 0x460277 */ goto L_00460277;
L_00460261:; BB(0x00460261);
    /* 00460261: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00460264: lea ecx, [ebp + eax*8 - 0xd8] */ r_ecx = (u32)(r_ebp+r_eax*8+0xffffff28u);
    /* 0046026b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0046026d: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460271: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00460274: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
L_00460277:; BB(0x00460277);
    /* 00460277: mov esp, ebp */ r_esp = r_ebp;
    /* 00460279: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046027a: ret 0xc */ FN_RET(0x0046014e); r_esp += 16; return;
}

void f_0046027d(void) /* FUN_0046027d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046027d);
    /* 0046027d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046027e: mov ebp, esp */ r_ebp = r_esp;
    /* 00460280: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460283: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00460286: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00460289: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046028c: cmp dword ptr [ebp - 8], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00460290: ja 0x4602ab */ if ((!fC&&!fZ)) goto L_004602ab;
L_00460292:; BB(0x00460292);
    /* 00460292: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460295: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00460297: mov cl, byte ptr [edx + 0x4602c3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+0x4602c3u))) & 0xffu);
    /* 0046029d: jmp dword ptr [ecx*4 + 0x4602b3] */ { u32 t = R32((u32)(r_ecx*4+0x4602b3u)); switch (t) { case 0x4602a4u: goto L_004602a4; case 0x4602abu: goto L_004602ab; default: UNSUP(0x0046029d, "jump table entry is not a known target"); } }
L_004602a4:; BB(0x004602a4);
    /* 004602a4: mov eax, 1 */ r_eax = 0x1u;
    /* 004602a9: jmp 0x4602ad */ goto L_004602ad;
L_004602ab:; BB(0x004602ab);
    /* 004602ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004602ad:; BB(0x004602ad);
    /* 004602ad: mov esp, ebp */ r_esp = r_ebp;
    /* 004602af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004602b0: ret 4 */ FN_RET(0x0046027d); r_esp += 8; return;
}

void f_004602cf(void) /* FUN_004602cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004602cf);
    /* 004602cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004602d0: mov ebp, esp */ r_ebp = r_esp;
    /* 004602d2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004602d5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004602d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004602db: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004602de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004602e1: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004602e4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004602e7: cmp dword ptr [ebp - 8], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004602eb: ja 0x460306 */ if ((!fC&&!fZ)) goto L_00460306;
L_004602ed:; BB(0x004602ed);
    /* 004602ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004602f0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004602f2: mov dl, byte ptr [eax + 0x46031e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x46031eu))) & 0xffu);
    /* 004602f8: jmp dword ptr [edx*4 + 0x46030e] */ { u32 t = R32((u32)(r_edx*4+0x46030eu)); switch (t) { case 0x4602ffu: goto L_004602ff; case 0x460306u: goto L_00460306; default: UNSUP(0x004602f8, "jump table entry is not a known target"); } }
L_004602ff:; BB(0x004602ff);
    /* 004602ff: mov eax, 1 */ r_eax = 0x1u;
    /* 00460304: jmp 0x460308 */ goto L_00460308;
L_00460306:; BB(0x00460306);
    /* 00460306: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00460308:; BB(0x00460308);
    /* 00460308: mov esp, ebp */ r_esp = r_ebp;
    /* 0046030a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046030b: ret 4 */ FN_RET(0x004602cf); r_esp += 8; return;
}

void f_0046032e(void) /* FUN_0046032e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046032e);
    /* 0046032e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046032f: mov ebp, esp */ r_ebp = r_esp;
    /* 00460331: sub esp, 0x19c */ {  u32 a = r_esp; u32 b = 0x19cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460337: mov dword ptr [ebp - 0x19c], ecx */ W32((u32)(r_ebp+0xfffffe64u), r_ecx);
    /* 0046033d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00460344: mov dword ptr [ebp - 0x24], 3 */ W32((u32)(r_ebp+0xffffffdcu), 0x3u);
    /* 0046034b: mov dword ptr [ebp - 0x20], 4 */ W32((u32)(r_ebp+0xffffffe0u), 0x4u);
    /* 00460352: mov dword ptr [ebp - 0x1c], 7 */ W32((u32)(r_ebp+0xffffffe4u), 0x7u);
    /* 00460359: mov dword ptr [ebp - 0x18], 5 */ W32((u32)(r_ebp+0xffffffe8u), 0x5u);
    /* 00460360: mov dword ptr [ebp - 0x14], 8 */ W32((u32)(r_ebp+0xffffffecu), 0x8u);
    /* 00460367: mov dword ptr [ebp - 0x10], 9 */ W32((u32)(r_ebp+0xfffffff0u), 0x9u);
    /* 0046036e: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00460375: mov dword ptr [ebp - 8], 6 */ W32((u32)(r_ebp+0xfffffff8u), 0x6u);
    /* 0046037c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00460383: mov dword ptr [ebp - 0x198], 0 */ W32((u32)(r_ebp+0xfffffe68u), 0x0u);
    /* 0046038d: mov dword ptr [ebp - 0x194], 0 */ W32((u32)(r_ebp+0xfffffe6cu), 0x0u);
    /* 00460397: mov dword ptr [ebp - 0x190], 1 */ W32((u32)(r_ebp+0xfffffe70u), 0x1u);
    /* 004603a1: mov dword ptr [ebp - 0x18c], 1 */ W32((u32)(r_ebp+0xfffffe74u), 0x1u);
    /* 004603ab: mov dword ptr [ebp - 0x188], 2 */ W32((u32)(r_ebp+0xfffffe78u), 0x2u);
    /* 004603b5: mov dword ptr [ebp - 0x184], 3 */ W32((u32)(r_ebp+0xfffffe7cu), 0x3u);
    /* 004603bf: mov dword ptr [ebp - 0x180], 4 */ W32((u32)(r_ebp+0xfffffe80u), 0x4u);
    /* 004603c9: mov dword ptr [ebp - 0x17c], 4 */ W32((u32)(r_ebp+0xfffffe84u), 0x4u);
    /* 004603d3: mov dword ptr [ebp - 0x178], 5 */ W32((u32)(r_ebp+0xfffffe88u), 0x5u);
    /* 004603dd: mov dword ptr [ebp - 0x174], 6 */ W32((u32)(r_ebp+0xfffffe8cu), 0x6u);
    /* 004603e7: mov dword ptr [ebp - 0x170], 7 */ W32((u32)(r_ebp+0xfffffe90u), 0x7u);
    /* 004603f1: mov dword ptr [ebp - 0x16c], 7 */ W32((u32)(r_ebp+0xfffffe94u), 0x7u);
    /* 004603fb: mov dword ptr [ebp - 0x168], 8 */ W32((u32)(r_ebp+0xfffffe98u), 0x8u);
    /* 00460405: mov dword ptr [ebp - 0x164], 9 */ W32((u32)(r_ebp+0xfffffe9cu), 0x9u);
    /* 0046040f: mov dword ptr [ebp - 0x160], 0xa */ W32((u32)(r_ebp+0xfffffea0u), 0xau);
    /* 00460419: mov dword ptr [ebp - 0x15c], 0xb */ W32((u32)(r_ebp+0xfffffea4u), 0xbu);
    /* 00460423: mov dword ptr [ebp - 0x158], 0xc */ W32((u32)(r_ebp+0xfffffea8u), 0xcu);
    /* 0046042d: mov dword ptr [ebp - 0x154], 0xd */ W32((u32)(r_ebp+0xfffffeacu), 0xdu);
    /* 00460437: mov dword ptr [ebp - 0x150], 0xe */ W32((u32)(r_ebp+0xfffffeb0u), 0xeu);
    /* 00460441: mov dword ptr [ebp - 0x14c], 0xe */ W32((u32)(r_ebp+0xfffffeb4u), 0xeu);
    /* 0046044b: mov dword ptr [ebp - 0x148], 0xf */ W32((u32)(r_ebp+0xfffffeb8u), 0xfu);
    /* 00460455: mov dword ptr [ebp - 0x144], 0x10 */ W32((u32)(r_ebp+0xfffffebcu), 0x10u);
    /* 0046045f: mov dword ptr [ebp - 0x140], 0x11 */ W32((u32)(r_ebp+0xfffffec0u), 0x11u);
    /* 00460469: mov dword ptr [ebp - 0x13c], 0x11 */ W32((u32)(r_ebp+0xfffffec4u), 0x11u);
    /* 00460473: mov dword ptr [ebp - 0x138], 0x12 */ W32((u32)(r_ebp+0xfffffec8u), 0x12u);
    /* 0046047d: mov dword ptr [ebp - 0x134], 0x12 */ W32((u32)(r_ebp+0xfffffeccu), 0x12u);
    /* 00460487: mov dword ptr [ebp - 0x130], 0x13 */ W32((u32)(r_ebp+0xfffffed0u), 0x13u);
    /* 00460491: mov dword ptr [ebp - 0x12c], 0x13 */ W32((u32)(r_ebp+0xfffffed4u), 0x13u);
    /* 0046049b: mov dword ptr [ebp - 0x128], 0x14 */ W32((u32)(r_ebp+0xfffffed8u), 0x14u);
    /* 004604a5: mov dword ptr [ebp - 0x124], 0x14 */ W32((u32)(r_ebp+0xfffffedcu), 0x14u);
    /* 004604af: mov dword ptr [ebp - 0x120], 0x15 */ W32((u32)(r_ebp+0xfffffee0u), 0x15u);
    /* 004604b9: mov dword ptr [ebp - 0x11c], 0x15 */ W32((u32)(r_ebp+0xfffffee4u), 0x15u);
    /* 004604c3: mov dword ptr [ebp - 0x118], 0x16 */ W32((u32)(r_ebp+0xfffffee8u), 0x16u);
    /* 004604cd: mov dword ptr [ebp - 0x114], 0x17 */ W32((u32)(r_ebp+0xfffffeecu), 0x17u);
    /* 004604d7: mov dword ptr [ebp - 0x110], 0x18 */ W32((u32)(r_ebp+0xfffffef0u), 0x18u);
    /* 004604e1: mov dword ptr [ebp - 0x10c], 0x19 */ W32((u32)(r_ebp+0xfffffef4u), 0x19u);
    /* 004604eb: mov dword ptr [ebp - 0x108], 0x1b */ W32((u32)(r_ebp+0xfffffef8u), 0x1bu);
    /* 004604f5: mov dword ptr [ebp - 0x104], 0x1a */ W32((u32)(r_ebp+0xfffffefcu), 0x1au);
    /* 004604ff: mov dword ptr [ebp - 0x100], 0x1c */ W32((u32)(r_ebp+0xffffff00u), 0x1cu);
    /* 00460509: mov dword ptr [ebp - 0xfc], 0x1c */ W32((u32)(r_ebp+0xffffff04u), 0x1cu);
    /* 00460513: mov dword ptr [ebp - 0xf8], 0x1d */ W32((u32)(r_ebp+0xffffff08u), 0x1du);
    /* 0046051d: mov dword ptr [ebp - 0xf4], 0x1d */ W32((u32)(r_ebp+0xffffff0cu), 0x1du);
    /* 00460527: mov dword ptr [ebp - 0xf0], 0x1e */ W32((u32)(r_ebp+0xffffff10u), 0x1eu);
    /* 00460531: mov dword ptr [ebp - 0xec], 0x1f */ W32((u32)(r_ebp+0xffffff14u), 0x1fu);
    /* 0046053b: mov dword ptr [ebp - 0xe8], 0x20 */ W32((u32)(r_ebp+0xffffff18u), 0x20u);
    /* 00460545: mov dword ptr [ebp - 0xe4], 0x21 */ W32((u32)(r_ebp+0xffffff1cu), 0x21u);
    /* 0046054f: mov dword ptr [ebp - 0xe0], 0x22 */ W32((u32)(r_ebp+0xffffff20u), 0x22u);
    /* 00460559: mov dword ptr [ebp - 0xdc], 0x23 */ W32((u32)(r_ebp+0xffffff24u), 0x23u);
    /* 00460563: mov dword ptr [ebp - 0xd8], 0x24 */ W32((u32)(r_ebp+0xffffff28u), 0x24u);
    /* 0046056d: mov dword ptr [ebp - 0xd4], 0x24 */ W32((u32)(r_ebp+0xffffff2cu), 0x24u);
    /* 00460577: mov dword ptr [ebp - 0xd0], 0x25 */ W32((u32)(r_ebp+0xffffff30u), 0x25u);
    /* 00460581: mov dword ptr [ebp - 0xcc], 0x25 */ W32((u32)(r_ebp+0xffffff34u), 0x25u);
    /* 0046058b: mov dword ptr [ebp - 0xc8], 0x26 */ W32((u32)(r_ebp+0xffffff38u), 0x26u);
    /* 00460595: mov dword ptr [ebp - 0xc4], 0x27 */ W32((u32)(r_ebp+0xffffff3cu), 0x27u);
    /* 0046059f: mov dword ptr [ebp - 0xc0], 0x28 */ W32((u32)(r_ebp+0xffffff40u), 0x28u);
    /* 004605a9: mov dword ptr [ebp - 0xbc], 0x29 */ W32((u32)(r_ebp+0xffffff44u), 0x29u);
    /* 004605b3: mov dword ptr [ebp - 0xb8], 0x2a */ W32((u32)(r_ebp+0xffffff48u), 0x2au);
    /* 004605bd: mov dword ptr [ebp - 0xb4], 0x2a */ W32((u32)(r_ebp+0xffffff4cu), 0x2au);
    /* 004605c7: mov dword ptr [ebp - 0xb0], 0x2b */ W32((u32)(r_ebp+0xffffff50u), 0x2bu);
    /* 004605d1: mov dword ptr [ebp - 0xac], 0x2b */ W32((u32)(r_ebp+0xffffff54u), 0x2bu);
    /* 004605db: mov dword ptr [ebp - 0xa8], 0x2c */ W32((u32)(r_ebp+0xffffff58u), 0x2cu);
    /* 004605e5: mov dword ptr [ebp - 0xa4], 0x2c */ W32((u32)(r_ebp+0xffffff5cu), 0x2cu);
    /* 004605ef: mov dword ptr [ebp - 0xa0], 0x2d */ W32((u32)(r_ebp+0xffffff60u), 0x2du);
    /* 004605f9: mov dword ptr [ebp - 0x9c], 0x2d */ W32((u32)(r_ebp+0xffffff64u), 0x2du);
    /* 00460603: mov dword ptr [ebp - 0x98], 0x2e */ W32((u32)(r_ebp+0xffffff68u), 0x2eu);
    /* 0046060d: mov dword ptr [ebp - 0x94], 0x2e */ W32((u32)(r_ebp+0xffffff6cu), 0x2eu);
    /* 00460617: mov dword ptr [ebp - 0x90], 0x2f */ W32((u32)(r_ebp+0xffffff70u), 0x2fu);
    /* 00460621: mov dword ptr [ebp - 0x8c], 0x2f */ W32((u32)(r_ebp+0xffffff74u), 0x2fu);
    /* 0046062b: mov dword ptr [ebp - 0x88], 0x30 */ W32((u32)(r_ebp+0xffffff78u), 0x30u);
    /* 00460635: mov dword ptr [ebp - 0x84], 0x31 */ W32((u32)(r_ebp+0xffffff7cu), 0x31u);
    /* 0046063f: mov dword ptr [ebp - 0x80], 0x32 */ W32((u32)(r_ebp+0xffffff80u), 0x32u);
    /* 00460646: mov dword ptr [ebp - 0x7c], 0x32 */ W32((u32)(r_ebp+0xffffff84u), 0x32u);
    /* 0046064d: mov dword ptr [ebp - 0x78], 0x33 */ W32((u32)(r_ebp+0xffffff88u), 0x33u);
    /* 00460654: mov dword ptr [ebp - 0x74], 0x33 */ W32((u32)(r_ebp+0xffffff8cu), 0x33u);
    /* 0046065b: mov dword ptr [ebp - 0x70], 0x34 */ W32((u32)(r_ebp+0xffffff90u), 0x34u);
    /* 00460662: mov dword ptr [ebp - 0x6c], 0x35 */ W32((u32)(r_ebp+0xffffff94u), 0x35u);
    /* 00460669: mov dword ptr [ebp - 0x68], 0x36 */ W32((u32)(r_ebp+0xffffff98u), 0x36u);
    /* 00460670: mov dword ptr [ebp - 0x64], 0x36 */ W32((u32)(r_ebp+0xffffff9cu), 0x36u);
    /* 00460677: mov dword ptr [ebp - 0x60], 0x37 */ W32((u32)(r_ebp+0xffffffa0u), 0x37u);
    /* 0046067e: mov dword ptr [ebp - 0x5c], 0x38 */ W32((u32)(r_ebp+0xffffffa4u), 0x38u);
    /* 00460685: mov dword ptr [ebp - 0x58], 0x39 */ W32((u32)(r_ebp+0xffffffa8u), 0x39u);
    /* 0046068c: mov dword ptr [ebp - 0x54], 0x39 */ W32((u32)(r_ebp+0xffffffacu), 0x39u);
    /* 00460693: mov dword ptr [ebp - 0x50], 0x3a */ W32((u32)(r_ebp+0xffffffb0u), 0x3au);
    /* 0046069a: mov dword ptr [ebp - 0x4c], 0x3a */ W32((u32)(r_ebp+0xffffffb4u), 0x3au);
    /* 004606a1: mov dword ptr [ebp - 0x48], 0x3b */ W32((u32)(r_ebp+0xffffffb8u), 0x3bu);
    /* 004606a8: mov dword ptr [ebp - 0x44], 0x3b */ W32((u32)(r_ebp+0xffffffbcu), 0x3bu);
    /* 004606af: mov dword ptr [ebp - 0x40], 0x3c */ W32((u32)(r_ebp+0xffffffc0u), 0x3cu);
    /* 004606b6: mov dword ptr [ebp - 0x3c], 0x3d */ W32((u32)(r_ebp+0xffffffc4u), 0x3du);
    /* 004606bd: mov dword ptr [ebp - 0x38], 0x3e */ W32((u32)(r_ebp+0xffffffc8u), 0x3eu);
    /* 004606c4: mov dword ptr [ebp - 0x34], 0x3f */ W32((u32)(r_ebp+0xffffffccu), 0x3fu);
    /* 004606cb: mov dword ptr [ebp - 0x30], 0x40 */ W32((u32)(r_ebp+0xffffffd0u), 0x40u);
    /* 004606d2: mov dword ptr [ebp - 0x2c], 0x41 */ W32((u32)(r_ebp+0xffffffd4u), 0x41u);
    /* 004606d9: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004606e0: je 0x4606fa */ if (fZ) goto L_004606fa;
L_004606e2:; BB(0x004606e2);
    /* 004606e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004606e5: lea ecx, [ebp + eax*8 - 0x1e8] */ r_ecx = (u32)(r_ebp+r_eax*8+0xfffffe18u);
    /* 004606ec: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004606ee: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004606f2: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004606f5: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 004606f8: jmp 0x46070d */ goto L_0046070d;
L_004606fa:; BB(0x004606fa);
    /* 004606fa: cmp dword ptr [ebp + 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004606fe: jge 0x46070a */ if ((fS==fO)) goto L_0046070a;
L_00460700:; BB(0x00460700);
    /* 00460700: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00460703: mov ecx, dword ptr [ebp + eax*4 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffd8u));
    /* 00460707: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_0046070a:; BB(0x0046070a);
    /* 0046070a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0046070d:; BB(0x0046070d);
    /* 0046070d: mov esp, ebp */ r_esp = r_ebp;
    /* 0046070f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460710: ret 0xc */ FN_RET(0x0046032e); r_esp += 16; return;
}

void f_00460713(void) /* FUN_00460713 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460713);
    /* 00460713: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460714: mov ebp, esp */ r_ebp = r_esp;
    /* 00460716: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460717: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046071a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046071d: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00460720: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460724: jl 0x46072c */ if ((fS!=fO)) goto L_0046072c;
L_00460726:; BB(0x00460726);
    /* 00460726: cmp dword ptr [ebp + 8], 9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046072a: jle 0x46072e */ if ((fZ||fS!=fO)) goto L_0046072e;
L_0046072c:; BB(0x0046072c);
    /* 0046072c: jmp 0x460747 */ goto L_00460747;
L_0046072e:; BB(0x0046072e);
    /* 0046072e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00460731: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00460734: add ecx, 0x67af70 */ {  u32 a = r_ecx; u32 b = 0x67af70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046073a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046073b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0046073e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046073f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x460744u); f_00624510();
    /* 00460744: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460747:; BB(0x00460747);
    /* 00460747: mov esp, ebp */ r_esp = r_ebp;
    /* 00460749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046074a: ret 8 */ FN_RET(0x00460713); r_esp += 12; return;
}

void f_0046074d(void) /* FUN_0046074d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046074d);
    /* 0046074d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046074e: mov ebp, esp */ r_ebp = r_esp;
    /* 00460750: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460753: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00460756: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046075d: jmp 0x460768 */ goto L_00460768;
L_0046075f:; BB(0x0046075f);
    /* 0046075f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460762: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00460765: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00460768:; BB(0x00460768);
    /* 00460768: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046076c: jg 0x460792 */ if ((!fZ&&fS==fO)) goto L_00460792;
L_0046076e:; BB(0x0046076e);
    /* 0046076e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00460771: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460772: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460775: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00460778: add edx, 0x67b010 */ {  u32 a = r_edx; u32 b = 0x67b010u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046077e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046077f: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x460784u); f_006240c0();
    /* 00460784: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460787: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460789: jne 0x460790 */ if (!fZ) goto L_00460790;
L_0046078b:; BB(0x0046078b);
    /* 0046078b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046078e: jmp 0x460795 */ goto L_00460795;
L_00460790:; BB(0x00460790);
    /* 00460790: jmp 0x46075f */ goto L_0046075f;
L_00460792:; BB(0x00460792);
    /* 00460792: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00460795:; BB(0x00460795);
    /* 00460795: mov esp, ebp */ r_esp = r_ebp;
    /* 00460797: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460798: ret 4 */ FN_RET(0x0046074d); r_esp += 8; return;
}

void f_0046079b(void) /* FUN_0046079b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046079b);
    /* 0046079b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046079c: mov ebp, esp */ r_ebp = r_esp;
    /* 0046079e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004607a1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004607a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004607ab: jmp 0x4607b6 */ goto L_004607b6;
L_004607ad:; BB(0x004607ad);
    /* 004607ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004607b0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004607b3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004607b6:; BB(0x004607b6);
    /* 004607b6: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004607ba: jge 0x46080e */ if ((fS==fO)) goto L_0046080e;
L_004607bc:; BB(0x004607bc);
    /* 004607bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004607bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004607c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004607c3: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x4607c8u); f_0045c419();
    /* 004607c8: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 004607cb: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004607ce: jne 0x46080c */ if (!fZ) goto L_0046080c;
L_004607d0:; BB(0x004607d0);
    /* 004607d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004607d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004607d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004607d7: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x4607dcu); f_0045c419();
    /* 004607dc: cmp dword ptr [eax + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004607e0: je 0x46080c */ if (fZ) goto L_0046080c;
L_004607e2:; BB(0x004607e2);
    /* 004607e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004607e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004607e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004607e9: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x4607eeu); f_0045c419();
    /* 004607ee: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004607f1: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x4607f6u); f_0041f839();
    /* 004607f6: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004607f9: jne 0x46080c */ if (!fZ) goto L_0046080c;
L_004607fb:; BB(0x004607fb);
    /* 004607fb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004607fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004607ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460802: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x460807u); f_0045c419();
    /* 00460807: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 0046080a: jmp 0x460810 */ goto L_00460810;
L_0046080c:; BB(0x0046080c);
    /* 0046080c: jmp 0x4607ad */ goto L_004607ad;
L_0046080e:; BB(0x0046080e);
    /* 0046080e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00460810:; BB(0x00460810);
    /* 00460810: mov esp, ebp */ r_esp = r_ebp;
    /* 00460812: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460813: ret 4 */ FN_RET(0x0046079b); r_esp += 8; return;
}

void f_00460816(void) /* FUN_00460816 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460816);
    /* 00460816: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460817: mov ebp, esp */ r_ebp = r_esp;
    /* 00460819: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046081c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046081f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460823: jl 0x46082b */ if ((fS!=fO)) goto L_0046082b;
L_00460825:; BB(0x00460825);
    /* 00460825: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460829: jl 0x46084b */ if ((fS!=fO)) goto L_0046084b;
L_0046082b:; BB(0x0046082b);
    /* 0046082b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0046082e: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 00460834: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00460837: mov dword ptr [ecx], 4 */ W32((u32)(r_ecx), 0x4u);
    /* 0046083d: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00460840: mov dword ptr [edx], 4 */ W32((u32)(r_edx), 0x4u);
    /* 00460846: jmp 0x4608db */ goto L_004608db;
L_0046084b:; BB(0x0046084b);
    /* 0046084b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046084e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00460851: cmp dword ptr [ebp - 8], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00460855: ja 0x4608c0 */ if ((!fC&&!fZ)) goto L_004608c0;
L_00460857:; BB(0x00460857);
    /* 00460857: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046085a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0046085c: mov cl, byte ptr [edx + 0x4608f5] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+0x4608f5u))) & 0xffu);
    /* 00460862: jmp dword ptr [ecx*4 + 0x4608e1] */ { u32 t = R32((u32)(r_ecx*4+0x4608e1u)); switch (t) { case 0x460869u: goto L_00460869; case 0x460886u: goto L_00460886; case 0x4608a3u: goto L_004608a3; case 0x4608c0u: goto L_004608c0; default: UNSUP(0x00460862, "jump table entry is not a known target"); } }
L_00460869:; BB(0x00460869);
    /* 00460869: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046086c: mov dword ptr [eax], 4 */ W32((u32)(r_eax), 0x4u);
    /* 00460872: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00460875: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 0046087b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0046087e: mov dword ptr [edx], 4 */ W32((u32)(r_edx), 0x4u);
    /* 00460884: jmp 0x4608db */ goto L_004608db;
L_00460886:; BB(0x00460886);
    /* 00460886: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00460889: mov dword ptr [eax], 8 */ W32((u32)(r_eax), 0x8u);
    /* 0046088f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00460892: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 00460898: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0046089b: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
    /* 004608a1: jmp 0x4608db */ goto L_004608db;
L_004608a3:; BB(0x004608a3);
    /* 004608a3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004608a6: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 004608ac: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004608af: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 004608b5: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 004608b8: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
    /* 004608be: jmp 0x4608db */ goto L_004608db;
L_004608c0:; BB(0x004608c0);
    /* 004608c0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004608c3: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 004608c9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004608cc: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 004608d2: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 004608d5: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
L_004608db:; BB(0x004608db);
    /* 004608db: mov esp, ebp */ r_esp = r_ebp;
    /* 004608dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004608de: ret 0x10 */ FN_RET(0x00460816); r_esp += 20; return;
}

