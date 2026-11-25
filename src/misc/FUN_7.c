#include "protos.h"

void f_0043677f(void) /* FUN_0043677f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043677f);
    /* 0043677f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436780: mov ebp, esp */ r_ebp = r_esp;
    /* 00436782: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436785: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00436788: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 0043678f: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 00436796: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0043679d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004367a4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004367a7: mov dword ptr [eax + 0x1d4], 0 */ W32((u32)(r_eax+0x1d4u), 0x0u);
    /* 004367b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004367b8: jmp 0x4367c3 */ goto L_004367c3;
L_004367ba:; BB(0x004367ba);
    /* 004367ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004367bd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004367c0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004367c3:; BB(0x004367c3);
    /* 004367c3: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004367c7: jge 0x436875 */ if ((fS==fO)) goto L_00436875;
L_004367cd:; BB(0x004367cd);
    /* 004367cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004367d0: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 004367d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004367d7: cmp dword ptr [ecx + eax*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004367dc: jne 0x436834 */ if (!fZ) goto L_00436834;
L_004367de:; BB(0x004367de);
    /* 004367de: push 0x14c */ { u32 v = 0x14cu; r_esp -= 4; W32(r_esp, v); }
    /* 004367e3: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4367e8u); f_0048ab58();
    /* 004367e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004367eb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004367ee: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004367f2: je 0x436809 */ if (fZ) goto L_00436809;
L_004367f4:; BB(0x004367f4);
    /* 004367f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004367f7: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 004367fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004367fc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004367ff: call 0x4357ae */ r_esp -= 4; W32(r_esp, 0x436804u); f_004357ae();
    /* 00436804: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00436807: jmp 0x436810 */ goto L_00436810;
L_00436809:; BB(0x00436809);
    /* 00436809: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00436810:; BB(0x00436810);
    /* 00436810: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436813: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00436817: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043681a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043681d: mov dword ptr [eax + edx*4 + 0x20], ecx */ W32((u32)(r_eax+r_edx*4+0x20u), r_ecx);
    /* 00436821: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436824: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 00436828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043682b: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043682f: call 0x43597c */ r_esp -= 4; W32(r_esp, 0x436834u); f_0043597c();
L_00436834:; BB(0x00436834);
    /* 00436834: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436837: cmp dword ptr [ebp + edx*4 - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+r_edx*4+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043683c: jge 0x436858 */ if ((fS==fO)) goto L_00436858;
L_0043683e:; BB(0x0043683e);
    /* 0043683e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436841: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00436845: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00436848: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043684c: mov dword ptr [eax + 0x138], 1 */ W32((u32)(r_eax+0x138u), 0x1u);
    /* 00436856: jmp 0x436870 */ goto L_00436870;
L_00436858:; BB(0x00436858);
    /* 00436858: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043685b: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0043685f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00436862: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00436866: mov dword ptr [ecx + 0x138], 0 */ W32((u32)(r_ecx+0x138u), 0x0u);
L_00436870:; BB(0x00436870);
    /* 00436870: jmp 0x4367ba */ goto L_004367ba;
L_00436875:; BB(0x00436875);
    /* 00436875: mov esp, ebp */ r_esp = r_ebp;
    /* 00436877: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436878: ret  */ FN_RET(0x0043677f); r_esp += 4; return;
}

void f_00436879(void) /* FUN_00436879 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00436879);
    /* 00436879: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043687a: mov ebp, esp */ r_ebp = r_esp;
    /* 0043687c: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043687f: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00436882: mov dword ptr [ebp - 0x10], 0xfc5 */ W32((u32)(r_ebp+0xfffffff0u), 0xfc5u);
    /* 00436889: mov dword ptr [ebp - 0xc], 0xfc7 */ W32((u32)(r_ebp+0xfffffff4u), 0xfc7u);
    /* 00436890: mov dword ptr [ebp - 8], 0xfad */ W32((u32)(r_ebp+0xfffffff8u), 0xfadu);
    /* 00436897: mov dword ptr [ebp - 4], 0xfae */ W32((u32)(r_ebp+0xfffffffcu), 0xfaeu);
    /* 0043689e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004368a1: cmp dword ptr [eax + 0x1a8], 0 */ {  u32 a = R32((u32)(r_eax+0x1a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004368a8: jne 0x4368e9 */ if (!fZ) goto L_004368e9;
L_004368aa:; BB(0x004368aa);
    /* 004368aa: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004368ac: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4368b1u); f_0048ab58();
    /* 004368b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004368b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004368b7: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004368bb: je 0x4368d6 */ if (fZ) goto L_004368d6;
L_004368bd:; BB(0x004368bd);
    /* 004368bd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004368c0: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x4368c5u); f_005e9d30();
    /* 004368c5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004368c8: mov dword ptr [ecx], 0x634844 */ W32((u32)(r_ecx), 0x634844u);
    /* 004368ce: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004368d1: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004368d4: jmp 0x4368dd */ goto L_004368dd;
L_004368d6:; BB(0x004368d6);
    /* 004368d6: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_004368dd:; BB(0x004368dd);
    /* 004368dd: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004368e0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004368e3: mov dword ptr [eax + 0x1a8], ecx */ W32((u32)(r_eax+0x1a8u), r_ecx);
L_004368e9:; BB(0x004368e9);
    /* 004368e9: push 0xfb9 */ { u32 v = 0xfb9u; r_esp -= 4; W32(r_esp, v); }
    /* 004368ee: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004368f1: mov ecx, dword ptr [edx + 0x1a8] */ r_ecx = R32((u32)(r_edx+0x1a8u));
    /* 004368f7: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4368fcu); f_005ea0c3();
    /* 004368fc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004368ff: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 00436905: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436908: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 0043690e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436910: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x436913u); call_ind(t); }
    /* 00436913: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00436915: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436918: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 0043691e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436921: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 00436927: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436929: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43692cu); call_ind(t); }
    /* 0043692c: push -0x11 */ { u32 v = 0xffffffefu; r_esp -= 4; W32(r_esp, v); }
    /* 0043692e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436930: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436933: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 00436939: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043693c: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 00436942: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436944: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x436947u); call_ind(t); }
    /* 00436947: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0043694a: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 00436950: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436953: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 00436959: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043695b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43695eu); call_ind(t); }
    /* 0043695e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00436965: jmp 0x436970 */ goto L_00436970;
L_00436967:; BB(0x00436967);
    /* 00436967: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043696a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043696d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00436970:; BB(0x00436970);
    /* 00436970: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00436974: jge 0x436b39 */ if ((fS==fO)) goto L_00436b39;
L_0043697a:; BB(0x0043697a);
    /* 0043697a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043697d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436980: cmp dword ptr [edx + ecx*4 + 0x180], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436988: jne 0x4369c1 */ if (!fZ) goto L_004369c1;
L_0043698a:; BB(0x0043698a);
    /* 0043698a: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0043698c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x436991u); f_0048ab58();
    /* 00436991: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436994: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00436997: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043699b: je 0x4369aa */ if (fZ) goto L_004369aa;
L_0043699d:; BB(0x0043699d);
    /* 0043699d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004369a0: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x4369a5u); f_005e3fb0();
    /* 004369a5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004369a8: jmp 0x4369b1 */ goto L_004369b1;
L_004369aa:; BB(0x004369aa);
    /* 004369aa: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004369b1:; BB(0x004369b1);
    /* 004369b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004369b4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004369b7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004369ba: mov dword ptr [ecx + eax*4 + 0x180], edx */ W32((u32)(r_ecx+r_eax*4+0x180u), r_edx);
L_004369c1:; BB(0x004369c1);
    /* 004369c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004369c4: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 004369c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004369c9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004369cc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004369cf: mov ecx, dword ptr [eax + edx*4 + 0x180] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x180u));
    /* 004369d6: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4369dbu); f_005ea0c3();
    /* 004369db: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004369de: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004369e1: mov ecx, dword ptr [edx + ecx*4 + 0x180] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x180u));
    /* 004369e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004369eb: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004369ee: mov eax, dword ptr [edx + eax*4 + 0x180] */ r_eax = R32((u32)(r_edx+r_eax*4+0x180u));
    /* 004369f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004369f7: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4369fau); call_ind(t); }
    /* 004369fa: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004369fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004369ff: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436a02: mov ecx, dword ptr [ecx + eax*4 + 0x180] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x180u));
    /* 00436a09: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436a0c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436a0f: mov edx, dword ptr [eax + edx*4 + 0x180] */ r_edx = R32((u32)(r_eax+r_edx*4+0x180u));
    /* 00436a16: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00436a18: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x436a1bu); call_ind(t); }
    /* 00436a1b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436a1e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436a21: mov eax, dword ptr [edx + ecx*4 + 0x180] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x180u));
    /* 00436a28: mov dword ptr [eax + 0x6c], 3 */ W32((u32)(r_eax+0x6cu), 0x3u);
    /* 00436a2f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436a32: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436a35: mov ecx, dword ptr [edx + ecx*4 + 0x180] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x180u));
    /* 00436a3c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00436a3f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436a42: mov eax, dword ptr [edx + eax*4 + 0x180] */ r_eax = R32((u32)(r_edx+r_eax*4+0x180u));
    /* 00436a49: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436a4b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x436a4eu); call_ind(t); }
    /* 00436a4e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00436a51: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436a54: cmp dword ptr [ecx + eax*4 + 0x18c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436a5c: jne 0x436a95 */ if (!fZ) goto L_00436a95;
L_00436a5e:; BB(0x00436a5e);
    /* 00436a5e: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00436a60: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x436a65u); f_0048ab58();
    /* 00436a65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436a68: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00436a6b: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436a6f: je 0x436a7e */ if (fZ) goto L_00436a7e;
L_00436a71:; BB(0x00436a71);
    /* 00436a71: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00436a74: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x436a79u); f_005e9d30();
    /* 00436a79: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00436a7c: jmp 0x436a85 */ goto L_00436a85;
L_00436a7e:; BB(0x00436a7e);
    /* 00436a7e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00436a85:; BB(0x00436a85);
    /* 00436a85: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436a88: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436a8b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00436a8e: mov dword ptr [eax + edx*4 + 0x18c], ecx */ W32((u32)(r_eax+r_edx*4+0x18cu), r_ecx);
L_00436a95:; BB(0x00436a95);
    /* 00436a95: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436a98: mov eax, dword ptr [ebp + edx*4 - 8] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff8u));
    /* 00436a9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436a9d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436aa0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436aa3: mov ecx, dword ptr [edx + ecx*4 + 0x18c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18cu));
    /* 00436aaa: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x436aafu); f_005ea0c3();
    /* 00436aaf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00436ab2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436ab5: mov ecx, dword ptr [ecx + eax*4 + 0x18c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18cu));
    /* 00436abc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436abf: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436ac2: mov edx, dword ptr [eax + edx*4 + 0x18c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18cu));
    /* 00436ac9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00436acb: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x436aceu); call_ind(t); }
    /* 00436ace: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00436ad0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436ad3: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436ad6: mov ecx, dword ptr [edx + ecx*4 + 0x18c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18cu));
    /* 00436add: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00436ae0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436ae3: mov eax, dword ptr [edx + eax*4 + 0x18c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x18cu));
    /* 00436aea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436aec: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x436aefu); call_ind(t); }
    /* 00436aef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00436af2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436af5: mov ecx, dword ptr [ecx + eax*4 + 0x18c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18cu));
    /* 00436afc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436aff: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436b02: mov edx, dword ptr [eax + edx*4 + 0x18c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18cu));
    /* 00436b09: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00436b0b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x436b0eu); call_ind(t); }
    /* 00436b0e: push 0xfffffe66 */ { u32 v = 0xfffffe66u; r_esp -= 4; W32(r_esp, v); }
    /* 00436b13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436b15: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436b18: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436b1b: mov ecx, dword ptr [edx + ecx*4 + 0x18c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18cu));
    /* 00436b22: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00436b25: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436b28: mov eax, dword ptr [edx + eax*4 + 0x18c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x18cu));
    /* 00436b2f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436b31: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x436b34u); call_ind(t); }
    /* 00436b34: jmp 0x436967 */ goto L_00436967;
L_00436b39:; BB(0x00436b39);
    /* 00436b39: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436b3c: cmp dword ptr [eax + 0x188], 0 */ {  u32 a = R32((u32)(r_eax+0x188u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436b43: jne 0x436bdd */ if (!fZ) goto L_00436bdd;
L_00436b49:; BB(0x00436b49);
    /* 00436b49: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00436b4b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x436b50u); f_0048ab58();
    /* 00436b50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436b53: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00436b56: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436b5a: je 0x436b69 */ if (fZ) goto L_00436b69;
L_00436b5c:; BB(0x00436b5c);
    /* 00436b5c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00436b5f: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x436b64u); f_005e9d30();
    /* 00436b64: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00436b67: jmp 0x436b70 */ goto L_00436b70;
L_00436b69:; BB(0x00436b69);
    /* 00436b69: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00436b70:; BB(0x00436b70);
    /* 00436b70: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436b73: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00436b76: mov dword ptr [ecx + 0x188], edx */ W32((u32)(r_ecx+0x188u), r_edx);
    /* 00436b7c: push 0xfac */ { u32 v = 0xfacu; r_esp -= 4; W32(r_esp, v); }
    /* 00436b81: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436b84: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00436b8a: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x436b8fu); f_005ea0c3();
    /* 00436b8f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436b92: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 00436b98: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436b9b: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00436ba1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436ba3: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x436ba6u); call_ind(t); }
    /* 00436ba6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00436ba8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436bab: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00436bb1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436bb4: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00436bba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436bbc: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x436bbfu); call_ind(t); }
    /* 00436bbf: push 0xfffffe66 */ { u32 v = 0xfffffe66u; r_esp -= 4; W32(r_esp, v); }
    /* 00436bc4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436bc6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436bc9: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00436bcf: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436bd2: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00436bd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436bda: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x436bddu); call_ind(t); }
L_00436bdd:; BB(0x00436bdd);
    /* 00436bdd: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436be0: cmp dword ptr [eax + 0x194], 0 */ {  u32 a = R32((u32)(r_eax+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436be7: jne 0x436ca5 */ if (!fZ) goto L_00436ca5;
L_00436bed:; BB(0x00436bed);
    /* 00436bed: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00436bef: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x436bf4u); f_0048ab58();
    /* 00436bf4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436bf7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00436bfa: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436bfe: je 0x436c0d */ if (fZ) goto L_00436c0d;
L_00436c00:; BB(0x00436c00);
    /* 00436c00: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00436c03: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x436c08u); f_005e9d30();
    /* 00436c08: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00436c0b: jmp 0x436c14 */ goto L_00436c14;
L_00436c0d:; BB(0x00436c0d);
    /* 00436c0d: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00436c14:; BB(0x00436c14);
    /* 00436c14: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436c17: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00436c1a: mov dword ptr [ecx + 0x194], edx */ W32((u32)(r_ecx+0x194u), r_edx);
    /* 00436c20: push 0xfb2 */ { u32 v = 0xfb2u; r_esp -= 4; W32(r_esp, v); }
    /* 00436c25: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436c28: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00436c2e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x436c33u); f_005ea0c3();
    /* 00436c33: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436c36: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 00436c3c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436c3f: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00436c45: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436c47: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x436c4au); call_ind(t); }
    /* 00436c4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00436c4c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436c4f: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00436c55: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x436c5au); f_005ea1cf();
    /* 00436c5a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00436c5c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436c5f: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 00436c65: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436c68: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00436c6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436c70: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x436c73u); call_ind(t); }
    /* 00436c73: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00436c75: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00436c77: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436c7a: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00436c80: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436c83: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00436c89: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436c8b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x436c8eu); call_ind(t); }
    /* 00436c8e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436c91: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00436c97: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436c9a: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00436ca0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436ca2: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x436ca5u); call_ind(t); }
L_00436ca5:; BB(0x00436ca5);
    /* 00436ca5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436ca8: cmp dword ptr [eax + 0x198], 0 */ {  u32 a = R32((u32)(r_eax+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436caf: jne 0x436d3b */ if (!fZ) goto L_00436d3b;
L_00436cb5:; BB(0x00436cb5);
    /* 00436cb5: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00436cb7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x436cbcu); f_0048ab58();
    /* 00436cbc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436cbf: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00436cc2: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436cc6: je 0x436cd5 */ if (fZ) goto L_00436cd5;
L_00436cc8:; BB(0x00436cc8);
    /* 00436cc8: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00436ccb: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x436cd0u); f_005e9d30();
    /* 00436cd0: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00436cd3: jmp 0x436cdc */ goto L_00436cdc;
L_00436cd5:; BB(0x00436cd5);
    /* 00436cd5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00436cdc:; BB(0x00436cdc);
    /* 00436cdc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436cdf: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00436ce2: mov dword ptr [ecx + 0x198], edx */ W32((u32)(r_ecx+0x198u), r_edx);
    /* 00436ce8: push 0xfcb */ { u32 v = 0xfcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00436ced: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436cf0: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 00436cf6: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x436cfbu); f_005ea0c3();
    /* 00436cfb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436cfe: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 00436d04: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436d07: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 00436d0d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436d0f: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x436d12u); call_ind(t); }
    /* 00436d12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436d14: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436d17: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 00436d1d: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x436d22u); f_005ea1cf();
    /* 00436d22: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00436d24: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436d27: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 00436d2d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436d30: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 00436d36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436d38: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x436d3bu); call_ind(t); }
L_00436d3b:; BB(0x00436d3b);
    /* 00436d3b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436d3e: cmp dword ptr [eax + 0x1a4], 0 */ {  u32 a = R32((u32)(r_eax+0x1a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436d45: jne 0x436dc0 */ if (!fZ) goto L_00436dc0;
L_00436d47:; BB(0x00436d47);
    /* 00436d47: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00436d4c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x436d51u); f_0048ab58();
    /* 00436d51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436d54: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00436d57: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436d5b: je 0x436d6a */ if (fZ) goto L_00436d6a;
L_00436d5d:; BB(0x00436d5d);
    /* 00436d5d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00436d60: call 0x43e17b */ r_esp -= 4; W32(r_esp, 0x436d65u); f_0043e17b();
    /* 00436d65: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00436d68: jmp 0x436d71 */ goto L_00436d71;
L_00436d6a:; BB(0x00436d6a);
    /* 00436d6a: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00436d71:; BB(0x00436d71);
    /* 00436d71: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436d74: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00436d77: mov dword ptr [ecx + 0x1a4], edx */ W32((u32)(r_ecx+0x1a4u), r_edx);
    /* 00436d7d: push 0xfbc */ { u32 v = 0xfbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00436d82: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436d85: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 00436d8b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x436d90u); f_005ea0c3();
    /* 00436d90: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436d93: mov ecx, dword ptr [ecx + 0x1a4] */ r_ecx = R32((u32)(r_ecx+0x1a4u));
    /* 00436d99: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436d9c: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 00436da2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436da4: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x436da7u); call_ind(t); }
    /* 00436da7: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 00436da9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00436dac: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 00436db2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00436db5: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 00436dbb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436dbd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x436dc0u); call_ind(t); }
L_00436dc0:; BB(0x00436dc0);
    /* 00436dc0: mov esp, ebp */ r_esp = r_ebp;
    /* 00436dc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436dc3: ret  */ FN_RET(0x00436879); r_esp += 4; return;
}

void f_00436dc4(void) /* FUN_00436dc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00436dc4);
    /* 00436dc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436dc5: mov ebp, esp */ r_ebp = r_esp;
    /* 00436dc7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436dca: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00436dcd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436dcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00436dd1: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00436dd7: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x436ddcu); f_0045c4ac();
    /* 00436ddc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00436ddf: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436de6: je 0x436e26 */ if (fZ) goto L_00436e26;
L_00436de8:; BB(0x00436de8);
    /* 00436de8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436deb: mov byte ptr [eax], 2 */ W8((u32)(r_eax), 0x2u);
    /* 00436dee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436df1: mov byte ptr [ecx + 1], 1 */ W8((u32)(r_ecx+0x1u), 0x1u);
    /* 00436df5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436df8: mov byte ptr [edx + 2], 1 */ W8((u32)(r_edx+0x2u), 0x1u);
    /* 00436dfc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436dff: mov byte ptr [eax + 3], 0 */ W8((u32)(r_eax+0x3u), 0x0u);
    /* 00436e03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436e06: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 00436e0a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436e0d: mov byte ptr [edx + 5], 0 */ W8((u32)(r_edx+0x5u), 0x0u);
    /* 00436e11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436e14: mov byte ptr [eax + 6], 0 */ W8((u32)(r_eax+0x6u), 0x0u);
    /* 00436e18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436e1b: mov byte ptr [ecx + 7], 1 */ W8((u32)(r_ecx+0x7u), 0x1u);
    /* 00436e1f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436e22: mov byte ptr [edx + 8], 0 */ W8((u32)(r_edx+0x8u), 0x0u);
L_00436e26:; BB(0x00436e26);
    /* 00436e26: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436e29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436e2c: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00436e2e: mov byte ptr [eax + 0x1e8], dl */ W8((u32)(r_eax+0x1e8u), (u8)r_edx);
    /* 00436e34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436e37: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 00436e3b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436e3e: mov dword ptr [edx + 0x1f0], ecx */ W32((u32)(r_edx+0x1f0u), r_ecx);
    /* 00436e44: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436e47: movsx ecx, byte ptr [eax + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x2u));
    /* 00436e4b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436e4e: mov dword ptr [edx + 0x1f4], ecx */ W32((u32)(r_edx+0x1f4u), r_ecx);
    /* 00436e54: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436e57: movsx ecx, byte ptr [eax + 3] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x3u));
    /* 00436e5b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436e5e: mov dword ptr [edx + 0x1f8], ecx */ W32((u32)(r_edx+0x1f8u), r_ecx);
    /* 00436e64: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436e67: movsx ecx, byte ptr [eax + 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x4u));
    /* 00436e6b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436e6e: mov dword ptr [edx + 0x1fc], ecx */ W32((u32)(r_edx+0x1fcu), r_ecx);
    /* 00436e74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436e77: movsx ecx, byte ptr [eax + 5] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x5u));
    /* 00436e7b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436e7e: mov dword ptr [edx + 0x200], ecx */ W32((u32)(r_edx+0x200u), r_ecx);
    /* 00436e84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436e87: movsx ecx, byte ptr [eax + 6] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x6u));
    /* 00436e8b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436e8e: mov dword ptr [edx + 0x204], ecx */ W32((u32)(r_edx+0x204u), r_ecx);
    /* 00436e94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436e97: movsx ecx, byte ptr [eax + 7] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x7u));
    /* 00436e9b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436e9e: mov dword ptr [edx + 0x208], ecx */ W32((u32)(r_edx+0x208u), r_ecx);
    /* 00436ea4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436ea8: jne 0x436ebc */ if (!fZ) goto L_00436ebc;
L_00436eaa:; BB(0x00436eaa);
    /* 00436eaa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436ead: movsx ecx, byte ptr [eax + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x8u));
    /* 00436eb1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436eb4: cmp dword ptr [edx + 0x1ec], ecx */ {  u32 a = R32((u32)(r_edx+0x1ecu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436eba: je 0x436ed4 */ if (fZ) goto L_00436ed4;
L_00436ebc:; BB(0x00436ebc);
    /* 00436ebc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436ebf: movsx ecx, byte ptr [eax + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x8u));
    /* 00436ec3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436ec6: mov dword ptr [edx + 0x1ec], ecx */ W32((u32)(r_edx+0x1ecu), r_ecx);
    /* 00436ecc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436ecf: call 0x43a93e */ r_esp -= 4; W32(r_esp, 0x436ed4u); f_0043a93e();
L_00436ed4:; BB(0x00436ed4);
    /* 00436ed4: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00436ed9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436edb: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00436ee1: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x436ee4u); call_ind(t); }
    /* 00436ee4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436ee6: je 0x436f61 */ if (fZ) goto L_00436f61;
L_00436ee8:; BB(0x00436ee8);
    /* 00436ee8: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00436eee: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x436ef3u); f_00448ca3();
    /* 00436ef3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436ef5: jne 0x436f61 */ if (!fZ) goto L_00436f61;
L_00436ef7:; BB(0x00436ef7);
    /* 00436ef7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436ef9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00436eff: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x436f04u); f_0045c419();
    /* 00436f04: movsx eax, byte ptr [eax + 0x92] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x92u));
    /* 00436f0b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00436f0d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00436f0f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436f10: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436f13: cmp dword ptr [ecx + 0x210], eax */ {  u32 a = R32((u32)(r_ecx+0x210u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436f19: je 0x436f61 */ if (fZ) goto L_00436f61;
L_00436f1b:; BB(0x00436f1b);
    /* 00436f1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436f1d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00436f23: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x436f28u); f_0045c419();
    /* 00436f28: movsx edx, byte ptr [eax + 0x92] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x92u));
    /* 00436f2f: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00436f31: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00436f33: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00436f34: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436f37: mov dword ptr [eax + 0x210], edx */ W32((u32)(r_eax+0x210u), r_edx);
    /* 00436f3d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436f40: cmp dword ptr [ecx + 0x210], 0 */ {  u32 a = R32((u32)(r_ecx+0x210u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436f47: je 0x436f56 */ if (fZ) goto L_00436f56;
L_00436f49:; BB(0x00436f49);
    /* 00436f49: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00436f4f: call 0x44a94b */ r_esp -= 4; W32(r_esp, 0x436f54u); f_0044a94b();
    /* 00436f54: jmp 0x436f61 */ goto L_00436f61;
L_00436f56:; BB(0x00436f56);
    /* 00436f56: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00436f5c: call 0x44a84f */ r_esp -= 4; W32(r_esp, 0x436f61u); f_0044a84f();
L_00436f61:; BB(0x00436f61);
    /* 00436f61: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436f64: cmp dword ptr [edx + 0x1c], 0 */ {  u32 a = R32((u32)(r_edx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436f68: je 0x436f8b */ if (fZ) goto L_00436f8b;
L_00436f6a:; BB(0x00436f6a);
    /* 00436f6a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436f6d: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 00436f73: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00436f76: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436f79: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00436f7c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00436f7f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436f82: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00436f85: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
L_00436f8b:; BB(0x00436f8b);
    /* 00436f8b: mov esp, ebp */ r_esp = r_ebp;
    /* 00436f8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436f8e: ret 4 */ FN_RET(0x00436dc4); r_esp += 8; return;
}

void f_00436f91(void) /* FUN_00436f91 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00436f91);
    /* 00436f91: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436f92: mov ebp, esp */ r_ebp = r_esp;
    /* 00436f94: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436f97: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00436f9a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00436fa1: jmp 0x436fac */ goto L_00436fac;
L_00436fa3:; BB(0x00436fa3);
    /* 00436fa3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436fa6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436fa9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00436fac:; BB(0x00436fac);
    /* 00436fac: cmp dword ptr [ebp - 4], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00436fb0: jge 0x43700b */ if ((fS==fO)) goto L_0043700b;
L_00436fb2:; BB(0x00436fb2);
    /* 00436fb2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436fb5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00436fb8: cmp dword ptr [edx + ecx*4 + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436fbd: jne 0x437009 */ if (!fZ) goto L_00437009;
L_00436fbf:; BB(0x00436fbf);
    /* 00436fbf: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00436fc4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x436fc9u); f_0048ab58();
    /* 00436fc9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436fcc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00436fcf: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436fd3: je 0x436fe2 */ if (fZ) goto L_00436fe2;
L_00436fd5:; BB(0x00436fd5);
    /* 00436fd5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436fd8: call 0x4301fb */ r_esp -= 4; W32(r_esp, 0x436fddu); f_004301fb();
    /* 00436fdd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00436fe0: jmp 0x436fe9 */ goto L_00436fe9;
L_00436fe2:; BB(0x00436fe2);
    /* 00436fe2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00436fe9:; BB(0x00436fe9);
    /* 00436fe9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436fec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00436fef: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436ff2: mov dword ptr [ecx + eax*4 + 0x30], edx */ W32((u32)(r_ecx+r_eax*4+0x30u), r_edx);
    /* 00436ff6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436ff9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436ffa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436ffd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437000: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00437004: call 0x430dc8 */ r_esp -= 4; W32(r_esp, 0x437009u); f_00430dc8();
L_00437009:; BB(0x00437009);
    /* 00437009: jmp 0x436fa3 */ goto L_00436fa3;
L_0043700b:; BB(0x0043700b);
    /* 0043700b: mov esp, ebp */ r_esp = r_ebp;
    /* 0043700d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043700e: ret  */ FN_RET(0x00436f91); r_esp += 4; return;
}

void f_0043700f(void) /* FUN_0043700f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043700f);
    /* 0043700f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437010: mov ebp, esp */ r_ebp = r_esp;
    /* 00437012: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00437015: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00437018: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043701f: jmp 0x43702a */ goto L_0043702a;
L_00437021:; BB(0x00437021);
    /* 00437021: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437024: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00437027: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0043702a:; BB(0x0043702a);
    /* 0043702a: cmp dword ptr [ebp - 0xc], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043702e: jge 0x437091 */ if ((fS==fO)) goto L_00437091;
L_00437030:; BB(0x00437030);
    /* 00437030: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00437037: jmp 0x437042 */ goto L_00437042;
L_00437039:; BB(0x00437039);
    /* 00437039: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043703c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043703f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00437042:; BB(0x00437042);
    /* 00437042: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00437046: jge 0x43708f */ if ((fS==fO)) goto L_0043708f;
L_00437048:; BB(0x00437048);
    /* 00437048: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043704b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043704e: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00437052: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437055: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00437058: mov eax, dword ptr [ecx + edx + 0x6c] */ r_eax = R32((u32)(r_ecx+r_edx+0x6cu));
    /* 0043705c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043705f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437063: je 0x43708d */ if (fZ) goto L_0043708d;
L_00437065:; BB(0x00437065);
    /* 00437065: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437068: cmp dword ptr [ecx + 0xd8], -1 */ {  u32 a = R32((u32)(r_ecx+0xd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043706f: je 0x43708d */ if (fZ) goto L_0043708d;
L_00437071:; BB(0x00437071);
    /* 00437071: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437074: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00437077: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0043707b: movsx edx, byte ptr [ecx + 0xc8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0xc8u));
    /* 00437082: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437084: jne 0x43708d */ if (!fZ) goto L_0043708d;
L_00437086:; BB(0x00437086);
    /* 00437086: mov eax, 1 */ r_eax = 0x1u;
    /* 0043708b: jmp 0x437093 */ goto L_00437093;
L_0043708d:; BB(0x0043708d);
    /* 0043708d: jmp 0x437039 */ goto L_00437039;
L_0043708f:; BB(0x0043708f);
    /* 0043708f: jmp 0x437021 */ goto L_00437021;
L_00437091:; BB(0x00437091);
    /* 00437091: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00437093:; BB(0x00437093);
    /* 00437093: mov esp, ebp */ r_esp = r_ebp;
    /* 00437095: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437096: ret  */ FN_RET(0x0043700f); r_esp += 4; return;
}

void f_00437097(void) /* FUN_00437097 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437097);
    /* 00437097: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437098: mov ebp, esp */ r_ebp = r_esp;
    /* 0043709a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043709b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043709e: mov esp, ebp */ r_esp = r_ebp;
    /* 004370a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004370a1: ret  */ FN_RET(0x00437097); r_esp += 4; return;
}

void f_004370a2(void) /* FUN_004370a2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004370a2);
    /* 004370a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004370a3: mov ebp, esp */ r_ebp = r_esp;
    /* 004370a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004370a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004370a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004370ac: mov eax, dword ptr [eax*4 + 0x653208] */ r_eax = R32((u32)(r_eax*4+0x653208u));
    /* 004370b3: mov esp, ebp */ r_esp = r_ebp;
    /* 004370b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004370b6: ret 4 */ FN_RET(0x004370a2); r_esp += 8; return;
}

void f_004370b9(void) /* FUN_004370b9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004370b9);
    /* 004370b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004370ba: mov ebp, esp */ r_ebp = r_esp;
    /* 004370bc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004370bf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004370c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004370c9: jmp 0x4370d4 */ goto L_004370d4;
L_004370cb:; BB(0x004370cb);
    /* 004370cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004370ce: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004370d1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004370d4:; BB(0x004370d4);
    /* 004370d4: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004370d8: jge 0x437113 */ if ((fS==fO)) goto L_00437113;
L_004370da:; BB(0x004370da);
    /* 004370da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004370dd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004370e0: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004370e5: je 0x437111 */ if (fZ) goto L_00437111;
L_004370e7:; BB(0x004370e7);
    /* 004370e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004370ea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004370ed: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 004370f1: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x4370f6u); f_00425973();
    /* 004370f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004370f8: je 0x437111 */ if (fZ) goto L_00437111;
L_004370fa:; BB(0x004370fa);
    /* 004370fa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004370fd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437100: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00437104: cmp dword ptr [ecx + 0x130], 0 */ {  u32 a = R32((u32)(r_ecx+0x130u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043710b: jne 0x437111 */ if (!fZ) goto L_00437111;
L_0043710d:; BB(0x0043710d);
    /* 0043710d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043710f: jmp 0x437118 */ goto L_00437118;
L_00437111:; BB(0x00437111);
    /* 00437111: jmp 0x4370cb */ goto L_004370cb;
L_00437113:; BB(0x00437113);
    /* 00437113: mov eax, 1 */ r_eax = 0x1u;
L_00437118:; BB(0x00437118);
    /* 00437118: mov esp, ebp */ r_esp = r_ebp;
    /* 0043711a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043711b: ret  */ FN_RET(0x004370b9); r_esp += 4; return;
}

void f_0043711c(void) /* FUN_0043711c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043711c);
    /* 0043711c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043711d: mov ebp, esp */ r_ebp = r_esp;
    /* 0043711f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00437122: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00437125: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437128: call 0x437372 */ r_esp -= 4; W32(r_esp, 0x43712du); f_00437372();
    /* 0043712d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00437130: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437133: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x437138u); f_0043a8b5();
    /* 00437138: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0043713a: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0043713c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043713e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437140: jne 0x43716d */ if (!fZ) goto L_0043716d;
L_00437142:; BB(0x00437142);
    /* 00437142: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00437144: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437147: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x43714cu); f_00435caf();
    /* 0043714c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043714e: jne 0x437168 */ if (!fZ) goto L_00437168;
L_00437150:; BB(0x00437150);
    /* 00437150: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00437152: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437155: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x43715au); f_00435caf();
    /* 0043715a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043715c: jne 0x437168 */ if (!fZ) goto L_00437168;
L_0043715e:; BB(0x0043715e);
    /* 0043715e: mov eax, 1 */ r_eax = 0x1u;
    /* 00437163: jmp 0x4371f4 */ goto L_004371f4;
L_00437168:; BB(0x00437168);
    /* 00437168: jmp 0x4371f2 */ goto L_004371f2;
L_0043716d:; BB(0x0043716d);
    /* 0043716d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043716f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437172: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x437177u); f_00435caf();
    /* 00437177: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437179: jne 0x4371a8 */ if (!fZ) goto L_004371a8;
L_0043717b:; BB(0x0043717b);
    /* 0043717b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043717e: call 0x438e3b */ r_esp -= 4; W32(r_esp, 0x437183u); f_00438e3b();
    /* 00437183: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437185: jne 0x4371a8 */ if (!fZ) goto L_004371a8;
L_00437187:; BB(0x00437187);
    /* 00437187: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00437189: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043718c: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x437191u); f_00435caf();
    /* 00437191: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437193: jne 0x4371a8 */ if (!fZ) goto L_004371a8;
L_00437195:; BB(0x00437195);
    /* 00437195: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437198: call 0x438dc7 */ r_esp -= 4; W32(r_esp, 0x43719du); f_00438dc7();
    /* 0043719d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043719f: jne 0x4371a8 */ if (!fZ) goto L_004371a8;
L_004371a1:; BB(0x004371a1);
    /* 004371a1: mov eax, 1 */ r_eax = 0x1u;
    /* 004371a6: jmp 0x4371f4 */ goto L_004371f4;
L_004371a8:; BB(0x004371a8);
    /* 004371a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004371aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004371ad: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x4371b2u); f_00435caf();
    /* 004371b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004371b4: jne 0x4371cb */ if (!fZ) goto L_004371cb;
L_004371b6:; BB(0x004371b6);
    /* 004371b6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004371b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004371bb: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x4371c0u); f_00435caf();
    /* 004371c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004371c2: jne 0x4371cb */ if (!fZ) goto L_004371cb;
L_004371c4:; BB(0x004371c4);
    /* 004371c4: mov eax, 1 */ r_eax = 0x1u;
    /* 004371c9: jmp 0x4371f4 */ goto L_004371f4;
L_004371cb:; BB(0x004371cb);
    /* 004371cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004371cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004371cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004371d2: call 0x438f00 */ r_esp -= 4; W32(r_esp, 0x4371d7u); f_00438f00();
    /* 004371d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004371d9: jne 0x4371eb */ if (!fZ) goto L_004371eb;
L_004371db:; BB(0x004371db);
    /* 004371db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004371dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004371df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004371e2: call 0x438fb6 */ r_esp -= 4; W32(r_esp, 0x4371e7u); f_00438fb6();
    /* 004371e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004371e9: je 0x4371f2 */ if (fZ) goto L_004371f2;
L_004371eb:; BB(0x004371eb);
    /* 004371eb: mov eax, 1 */ r_eax = 0x1u;
    /* 004371f0: jmp 0x4371f4 */ goto L_004371f4;
L_004371f2:; BB(0x004371f2);
    /* 004371f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004371f4:; BB(0x004371f4);
    /* 004371f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004371f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004371f7: ret  */ FN_RET(0x0043711c); r_esp += 4; return;
}

void f_004371f8(void) /* FUN_004371f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004371f8);
    /* 004371f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004371f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004371fb: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004371fe: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00437201: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437208: je 0x43720f */ if (fZ) goto L_0043720f;
L_0043720a:; BB(0x0043720a);
    /* 0043720a: jmp 0x43728f */ goto L_0043728f;
L_0043720f:; BB(0x0043720f);
    /* 0043720f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00437213: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437216: jne 0x437221 */ if (!fZ) goto L_00437221;
L_00437218:; BB(0x00437218);
    /* 00437218: mov dword ptr [ebp - 8], 0x653328 */ W32((u32)(r_ebp+0xfffffff8u), 0x653328u);
    /* 0043721f: jmp 0x437235 */ goto L_00437235;
L_00437221:; BB(0x00437221);
    /* 00437221: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00437225: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437228: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043722c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043722f: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00437232: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00437235:; BB(0x00437235);
    /* 00437235: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00437239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043723a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043723d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043723e: push 0x653330 */ { u32 v = 0x653330u; r_esp -= 4; W32(r_esp, v); }
    /* 00437243: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x437248u); f_0060fc40();
    /* 00437248: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043724b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043724e: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00437252: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00437256: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437259: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 0043725d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437260: je 0x437280 */ if (fZ) goto L_00437280;
L_00437262:; BB(0x00437262);
    /* 00437262: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00437264: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437267: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 0043726b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043726e: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00437272: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00437273: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00437279: call 0x447d8a */ r_esp -= 4; W32(r_esp, 0x43727eu); f_00447d8a();
    /* 0043727e: jmp 0x43728f */ goto L_0043728f;
L_00437280:; BB(0x00437280);
    /* 00437280: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00437282: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00437284: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043728a: call 0x447d8a */ r_esp -= 4; W32(r_esp, 0x43728fu); f_00447d8a();
L_0043728f:; BB(0x0043728f);
    /* 0043728f: mov esp, ebp */ r_esp = r_ebp;
    /* 00437291: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437292: ret 4 */ FN_RET(0x004371f8); r_esp += 8; return;
}

void f_00437295(void) /* FUN_00437295 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437295);
    /* 00437295: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437296: mov ebp, esp */ r_ebp = r_esp;
    /* 00437298: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043729b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043729e: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004372a5: je 0x4372ac */ if (fZ) goto L_004372ac;
L_004372a7:; BB(0x004372a7);
    /* 004372a7: jmp 0x437345 */ goto L_00437345;
L_004372ac:; BB(0x004372ac);
    /* 004372ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004372af: call 0x4373d4 */ r_esp -= 4; W32(r_esp, 0x4372b4u); f_004373d4();
    /* 004372b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004372b7: mov word ptr [ecx + 0x18], ax */ W16((u32)(r_ecx+0x18u), (u16)r_eax);
    /* 004372bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004372be: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004372c2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004372c5: jne 0x4372d0 */ if (!fZ) goto L_004372d0;
L_004372c7:; BB(0x004372c7);
    /* 004372c7: mov dword ptr [ebp - 8], 0x653354 */ W32((u32)(r_ebp+0xfffffff8u), 0x653354u);
    /* 004372ce: jmp 0x4372e7 */ goto L_004372e7;
L_004372d0:; BB(0x004372d0);
    /* 004372d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004372d3: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 004372d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004372da: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 004372de: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004372e1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004372e4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004372e7:; BB(0x004372e7);
    /* 004372e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004372ea: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 004372ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004372ef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004372f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004372f3: push 0x65335c */ { u32 v = 0x65335cu; r_esp -= 4; W32(r_esp, v); }
    /* 004372f8: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x4372fdu); f_0060fc40();
    /* 004372fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00437300: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437303: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 00437307: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043730a: je 0x437336 */ if (fZ) goto L_00437336;
L_0043730c:; BB(0x0043730c);
    /* 0043730c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043730f: cmp dword ptr [eax + 0x1b4], 0 */ {  u32 a = R32((u32)(r_eax+0x1b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437316: je 0x437336 */ if (fZ) goto L_00437336;
L_00437318:; BB(0x00437318);
    /* 00437318: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043731a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043731d: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 00437321: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437324: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00437328: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437329: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043732f: call 0x447d8a */ r_esp -= 4; W32(r_esp, 0x437334u); f_00447d8a();
    /* 00437334: jmp 0x437345 */ goto L_00437345;
L_00437336:; BB(0x00437336);
    /* 00437336: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00437338: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043733a: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00437340: call 0x447d8a */ r_esp -= 4; W32(r_esp, 0x437345u); f_00447d8a();
L_00437345:; BB(0x00437345);
    /* 00437345: mov esp, ebp */ r_esp = r_ebp;
    /* 00437347: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437348: ret  */ FN_RET(0x00437295); r_esp += 4; return;
}

void f_00437349(void) /* FUN_00437349 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437349);
    /* 00437349: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043734a: mov ebp, esp */ r_ebp = r_esp;
    /* 0043734c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043734d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00437350: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437357: je 0x437367 */ if (fZ) goto L_00437367;
L_00437359:; BB(0x00437359);
    /* 00437359: mov eax, dword ptr [0x6f666c] */ r_eax = R32((u32)(0x6f666cu));
    /* 0043735e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00437361: mov ax, word ptr [ecx + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0xcu))) & 0xffffu);
    /* 00437365: jmp 0x43736e */ goto L_0043736e;
L_00437367:; BB(0x00437367);
    /* 00437367: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043736a: mov ax, word ptr [edx + 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x18u))) & 0xffffu);
L_0043736e:; BB(0x0043736e);
    /* 0043736e: mov esp, ebp */ r_esp = r_ebp;
    /* 00437370: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437371: ret  */ FN_RET(0x00437349); r_esp += 4; return;
}

void f_00437372(void) /* FUN_00437372 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437372);
    /* 00437372: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437373: mov ebp, esp */ r_ebp = r_esp;
    /* 00437375: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437376: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00437379: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043737c: call 0x437349 */ r_esp -= 4; W32(r_esp, 0x437381u); f_00437349();
    /* 00437381: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00437384: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437387: jne 0x43738d */ if (!fZ) goto L_0043738d;
L_00437389:; BB(0x00437389);
    /* 00437389: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043738b: jmp 0x43739f */ goto L_0043739f;
L_0043738d:; BB(0x0043738d);
    /* 0043738d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437390: call 0x437349 */ r_esp -= 4; W32(r_esp, 0x437395u); f_00437349();
    /* 00437395: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00437398: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043739b: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
L_0043739f:; BB(0x0043739f);
    /* 0043739f: mov esp, ebp */ r_esp = r_ebp;
    /* 004373a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004373a2: ret  */ FN_RET(0x00437372); r_esp += 4; return;
}

void f_004373a3(void) /* FUN_004373a3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004373a3);
    /* 004373a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004373a4: mov ebp, esp */ r_ebp = r_esp;
    /* 004373a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004373a7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004373aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004373ad: call 0x437349 */ r_esp -= 4; W32(r_esp, 0x4373b2u); f_00437349();
    /* 004373b2: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004373b5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004373b8: je 0x4373ce */ if (fZ) goto L_004373ce;
L_004373ba:; BB(0x004373ba);
    /* 004373ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004373bd: call 0x437349 */ r_esp -= 4; W32(r_esp, 0x4373c2u); f_00437349();
    /* 004373c2: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004373c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004373c8: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 004373cc: jmp 0x4373d0 */ goto L_004373d0;
L_004373ce:; BB(0x004373ce);
    /* 004373ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004373d0:; BB(0x004373d0);
    /* 004373d0: mov esp, ebp */ r_esp = r_ebp;
    /* 004373d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004373d3: ret  */ FN_RET(0x004373a3); r_esp += 4; return;
}

void f_004373d4(void) /* FUN_004373d4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004373d4);
    /* 004373d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004373d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004373d7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004373da: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004373dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004373e0: call 0x437349 */ r_esp -= 4; W32(r_esp, 0x4373e5u); f_00437349();
    /* 004373e5: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004373e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004373eb: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004373ef: jne 0x4373f8 */ if (!fZ) goto L_004373f8;
L_004373f1:; BB(0x004373f1);
    /* 004373f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004373f8:; BB(0x004373f8);
    /* 004373f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004373fb: cmp dword ptr [ecx + 0x1b4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437402: jne 0x437462 */ if (!fZ) goto L_00437462;
L_00437404:; BB(0x00437404);
    /* 00437404: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437407: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0043740a: jmp 0x437415 */ goto L_00437415;
L_0043740c:; BB(0x0043740c);
    /* 0043740c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043740f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00437412: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00437415:; BB(0x00437415);
    /* 00437415: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00437419: jge 0x437459 */ if ((fS==fO)) goto L_00437459;
L_0043741b:; BB(0x0043741b);
    /* 0043741b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043741e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437421: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437426: je 0x437457 */ if (fZ) goto L_00437457;
L_00437428:; BB(0x00437428);
    /* 00437428: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043742b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043742e: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00437432: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x437437u); f_00425973();
    /* 00437437: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437439: je 0x437457 */ if (fZ) goto L_00437457;
L_0043743b:; BB(0x0043743b);
    /* 0043743b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043743e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437441: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00437445: cmp dword ptr [ecx + 0x138], 0 */ {  u32 a = R32((u32)(r_ecx+0x138u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043744c: jne 0x437457 */ if (!fZ) goto L_00437457;
L_0043744e:; BB(0x0043744e);
    /* 0043744e: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00437452: jmp 0x437541 */ goto L_00437541;
L_00437457:; BB(0x00437457);
    /* 00437457: jmp 0x43740c */ goto L_0043740c;
L_00437459:; BB(0x00437459);
    /* 00437459: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0043745d: jmp 0x437541 */ goto L_00437541;
L_00437462:; BB(0x00437462);
    /* 00437462: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437465: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x43746au); f_0043c73a();
    /* 0043746a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043746c: je 0x4374c9 */ if (fZ) goto L_004374c9;
L_0043746e:; BB(0x0043746e);
    /* 0043746e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437471: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00437474: jmp 0x43747f */ goto L_0043747f;
L_00437476:; BB(0x00437476);
    /* 00437476: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437479: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043747c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043747f:; BB(0x0043747f);
    /* 0043747f: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00437483: jge 0x4374c3 */ if ((fS==fO)) goto L_004374c3;
L_00437485:; BB(0x00437485);
    /* 00437485: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437488: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043748b: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437490: je 0x4374c1 */ if (fZ) goto L_004374c1;
L_00437492:; BB(0x00437492);
    /* 00437492: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437495: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437498: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043749c: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x4374a1u); f_00425973();
    /* 004374a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004374a3: je 0x4374c1 */ if (fZ) goto L_004374c1;
L_004374a5:; BB(0x004374a5);
    /* 004374a5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004374a8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004374ab: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 004374af: cmp dword ptr [ecx + 0x134], 0 */ {  u32 a = R32((u32)(r_ecx+0x134u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004374b6: jne 0x4374c1 */ if (!fZ) goto L_004374c1;
L_004374b8:; BB(0x004374b8);
    /* 004374b8: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004374bc: jmp 0x437541 */ goto L_00437541;
L_004374c1:; BB(0x004374c1);
    /* 004374c1: jmp 0x437476 */ goto L_00437476;
L_004374c3:; BB(0x004374c3);
    /* 004374c3: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004374c7: jmp 0x437541 */ goto L_00437541;
L_004374c9:; BB(0x004374c9);
    /* 004374c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004374cc: call 0x4370b9 */ r_esp -= 4; W32(r_esp, 0x4374d1u); f_004370b9();
    /* 004374d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004374d3: jne 0x43753d */ if (!fZ) goto L_0043753d;
L_004374d5:; BB(0x004374d5);
    /* 004374d5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004374dc: jmp 0x4374fc */ goto L_004374fc;
L_004374de:; BB(0x004374de);
    /* 004374de: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004374e1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004374e4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004374e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004374ea: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004374ed: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004374ee: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004374f0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004374f2: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004374f5: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004374f7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004374f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004374fc:; BB(0x004374fc);
    /* 004374fc: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00437500: jge 0x43753d */ if ((fS==fO)) goto L_0043753d;
L_00437502:; BB(0x00437502);
    /* 00437502: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437505: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437508: cmp dword ptr [ecx + eax*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043750d: je 0x43753b */ if (fZ) goto L_0043753b;
L_0043750f:; BB(0x0043750f);
    /* 0043750f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437512: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437515: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00437519: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x43751eu); f_00425973();
    /* 0043751e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437520: je 0x43753b */ if (fZ) goto L_0043753b;
L_00437522:; BB(0x00437522);
    /* 00437522: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437525: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437528: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043752c: cmp dword ptr [eax + 0x130], 0 */ {  u32 a = R32((u32)(r_eax+0x130u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437533: jne 0x43753b */ if (!fZ) goto L_0043753b;
L_00437535:; BB(0x00437535);
    /* 00437535: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00437539: jmp 0x437541 */ goto L_00437541;
L_0043753b:; BB(0x0043753b);
    /* 0043753b: jmp 0x4374de */ goto L_004374de;
L_0043753d:; BB(0x0043753d);
    /* 0043753d: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_00437541:; BB(0x00437541);
    /* 00437541: mov esp, ebp */ r_esp = r_ebp;
    /* 00437543: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437544: ret  */ FN_RET(0x004373d4); r_esp += 4; return;
}

void f_00437545(void) /* FUN_00437545 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437545);
    /* 00437545: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437546: mov ebp, esp */ r_ebp = r_esp;
    /* 00437548: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043754b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043754e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00437555: jmp 0x437560 */ goto L_00437560;
L_00437557:; BB(0x00437557);
    /* 00437557: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043755a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043755d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00437560:; BB(0x00437560);
    /* 00437560: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00437564: jge 0x43758d */ if ((fS==fO)) goto L_0043758d;
L_00437566:; BB(0x00437566);
    /* 00437566: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437569: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043756c: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437571: je 0x43758b */ if (fZ) goto L_0043758b;
L_00437573:; BB(0x00437573);
    /* 00437573: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437576: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437579: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043757d: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x437582u); f_004259a0();
    /* 00437582: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437584: je 0x43758b */ if (fZ) goto L_0043758b;
L_00437586:; BB(0x00437586);
    /* 00437586: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437589: jmp 0x437590 */ goto L_00437590;
L_0043758b:; BB(0x0043758b);
    /* 0043758b: jmp 0x437557 */ goto L_00437557;
L_0043758d:; BB(0x0043758d);
    /* 0043758d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00437590:; BB(0x00437590);
    /* 00437590: mov esp, ebp */ r_esp = r_ebp;
    /* 00437592: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437593: ret  */ FN_RET(0x00437545); r_esp += 4; return;
}

void f_00437594(void) /* FUN_00437594 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437594);
    /* 00437594: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437595: mov ebp, esp */ r_ebp = r_esp;
    /* 00437597: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043759a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043759d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004375a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004375a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004375a4: call 0x437656 */ r_esp -= 4; W32(r_esp, 0x4375a9u); f_00437656();
    /* 004375a9: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004375ac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004375af: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 004375b3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004375b6: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004375b9: mov edx, dword ptr [eax + ecx + 0x6c] */ r_edx = R32((u32)(r_eax+r_ecx+0x6cu));
    /* 004375bd: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004375c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004375c3: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 004375c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004375cc: add ecx, dword ptr [edx + 0xb4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xb4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004375d2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004375d5: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004375d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004375da: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 004375e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004375e3: add edx, dword ptr [eax + 0xb8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004375e9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004375ec: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004375ef: mov esp, ebp */ r_esp = r_ebp;
    /* 004375f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004375f2: ret 0xc */ FN_RET(0x00437594); r_esp += 16; return;
}

void f_004375f5(void) /* FUN_004375f5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004375f5);
    /* 004375f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004375f6: mov ebp, esp */ r_ebp = r_esp;
    /* 004375f8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004375fb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004375fe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00437601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00437602: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437605: call 0x4376e0 */ r_esp -= 4; W32(r_esp, 0x43760au); f_004376e0();
    /* 0043760a: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0043760d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437610: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00437614: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00437617: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043761a: mov edx, dword ptr [eax + ecx + 0x6c] */ r_edx = R32((u32)(r_eax+r_ecx+0x6cu));
    /* 0043761e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00437621: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437624: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 0043762a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043762d: add ecx, dword ptr [edx + 0xb4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xb4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00437633: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00437636: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00437638: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043763b: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 00437641: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437644: add edx, dword ptr [eax + 0xb8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043764a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0043764d: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00437650: mov esp, ebp */ r_esp = r_ebp;
    /* 00437652: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437653: ret 0xc */ FN_RET(0x004375f5); r_esp += 16; return;
}

void f_00437656(void) /* FUN_00437656 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437656);
    /* 00437656: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437657: mov ebp, esp */ r_ebp = r_esp;
    /* 00437659: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043765c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043765f: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00437665: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00437668: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043766b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043766e: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00437671: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00437674: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00437678: ja 0x4376b4 */ if ((!fC&&!fZ)) goto L_004376b4;
L_0043767a:; BB(0x0043767a);
    /* 0043767a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043767d: jmp dword ptr [edx*4 + 0x4376c4] */ { u32 t = R32((u32)(r_edx*4+0x4376c4u)); switch (t) { case 0x437684u: goto L_00437684; case 0x43768cu: goto L_0043768c; case 0x437694u: goto L_00437694; case 0x4376b4u: goto L_004376b4; case 0x43769cu: goto L_0043769c; case 0x4376a4u: goto L_004376a4; case 0x4376acu: goto L_004376ac; default: UNSUP(0x0043767d, "jump table entry is not a known target"); } }
L_00437684:; BB(0x00437684);
    /* 00437684: mov word ptr [ebp - 4], 0x23 */ W16((u32)(r_ebp+0xfffffffcu), 0x23u);
    /* 0043768a: jmp 0x4376ba */ goto L_004376ba;
L_0043768c:; BB(0x0043768c);
    /* 0043768c: mov word ptr [ebp - 4], 0x25 */ W16((u32)(r_ebp+0xfffffffcu), 0x25u);
    /* 00437692: jmp 0x4376ba */ goto L_004376ba;
L_00437694:; BB(0x00437694);
    /* 00437694: mov word ptr [ebp - 4], 0x27 */ W16((u32)(r_ebp+0xfffffffcu), 0x27u);
    /* 0043769a: jmp 0x4376ba */ goto L_004376ba;
L_0043769c:; BB(0x0043769c);
    /* 0043769c: mov word ptr [ebp - 4], 0x29 */ W16((u32)(r_ebp+0xfffffffcu), 0x29u);
    /* 004376a2: jmp 0x4376ba */ goto L_004376ba;
L_004376a4:; BB(0x004376a4);
    /* 004376a4: mov word ptr [ebp - 4], 0x2b */ W16((u32)(r_ebp+0xfffffffcu), 0x2bu);
    /* 004376aa: jmp 0x4376ba */ goto L_004376ba;
L_004376ac:; BB(0x004376ac);
    /* 004376ac: mov word ptr [ebp - 4], 0x2d */ W16((u32)(r_ebp+0xfffffffcu), 0x2du);
    /* 004376b2: jmp 0x4376ba */ goto L_004376ba;
L_004376b4:; BB(0x004376b4);
    /* 004376b4: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
L_004376ba:; BB(0x004376ba);
    /* 004376ba: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004376be: mov esp, ebp */ r_esp = r_ebp;
    /* 004376c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004376c1: ret 4 */ FN_RET(0x00437656); r_esp += 8; return;
}

void f_004376e0(void) /* FUN_004376e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004376e0);
    /* 004376e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004376e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004376e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004376e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004376e9: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004376ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004376f2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004376f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004376f8: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004376fb: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004376fe: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00437702: ja 0x43773e */ if ((!fC&&!fZ)) goto L_0043773e;
L_00437704:; BB(0x00437704);
    /* 00437704: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437707: jmp dword ptr [edx*4 + 0x43774e] */ { u32 t = R32((u32)(r_edx*4+0x43774eu)); switch (t) { case 0x43770eu: goto L_0043770e; case 0x437716u: goto L_00437716; case 0x43771eu: goto L_0043771e; case 0x43773eu: goto L_0043773e; case 0x437726u: goto L_00437726; case 0x43772eu: goto L_0043772e; case 0x437736u: goto L_00437736; default: UNSUP(0x00437707, "jump table entry is not a known target"); } }
L_0043770e:; BB(0x0043770e);
    /* 0043770e: mov word ptr [ebp - 4], 0x2f */ W16((u32)(r_ebp+0xfffffffcu), 0x2fu);
    /* 00437714: jmp 0x437744 */ goto L_00437744;
L_00437716:; BB(0x00437716);
    /* 00437716: mov word ptr [ebp - 4], 0x31 */ W16((u32)(r_ebp+0xfffffffcu), 0x31u);
    /* 0043771c: jmp 0x437744 */ goto L_00437744;
L_0043771e:; BB(0x0043771e);
    /* 0043771e: mov word ptr [ebp - 4], 0x33 */ W16((u32)(r_ebp+0xfffffffcu), 0x33u);
    /* 00437724: jmp 0x437744 */ goto L_00437744;
L_00437726:; BB(0x00437726);
    /* 00437726: mov word ptr [ebp - 4], 0x35 */ W16((u32)(r_ebp+0xfffffffcu), 0x35u);
    /* 0043772c: jmp 0x437744 */ goto L_00437744;
L_0043772e:; BB(0x0043772e);
    /* 0043772e: mov word ptr [ebp - 4], 0x37 */ W16((u32)(r_ebp+0xfffffffcu), 0x37u);
    /* 00437734: jmp 0x437744 */ goto L_00437744;
L_00437736:; BB(0x00437736);
    /* 00437736: mov word ptr [ebp - 4], 0x39 */ W16((u32)(r_ebp+0xfffffffcu), 0x39u);
    /* 0043773c: jmp 0x437744 */ goto L_00437744;
L_0043773e:; BB(0x0043773e);
    /* 0043773e: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
L_00437744:; BB(0x00437744);
    /* 00437744: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00437748: mov esp, ebp */ r_esp = r_ebp;
    /* 0043774a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043774b: ret 4 */ FN_RET(0x004376e0); r_esp += 8; return;
}

void f_0043776a(void) /* FUN_0043776a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043776a);
    /* 0043776a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043776b: mov ebp, esp */ r_ebp = r_esp;
    /* 0043776d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00437770: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00437773: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043777a: jmp 0x437785 */ goto L_00437785;
L_0043777c:; BB(0x0043777c);
    /* 0043777c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043777f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00437782: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00437785:; BB(0x00437785);
    /* 00437785: cmp dword ptr [ebp - 4], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00437789: jge 0x43779c */ if ((fS==fO)) goto L_0043779c;
L_0043778b:; BB(0x0043778b);
    /* 0043778b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043778e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437791: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00437795: call 0x43075c */ r_esp -= 4; W32(r_esp, 0x43779au); f_0043075c();
    /* 0043779a: jmp 0x43777c */ goto L_0043777c;
L_0043779c:; BB(0x0043779c);
    /* 0043779c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043779e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043779f: ret  */ FN_RET(0x0043776a); r_esp += 4; return;
}

void f_004377a0(void) /* FUN_004377a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004377a0);
    /* 004377a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004377a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004377a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004377a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004377a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004377b0: jmp 0x4377bb */ goto L_004377bb;
L_004377b2:; BB(0x004377b2);
    /* 004377b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004377b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004377b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004377bb:; BB(0x004377bb);
    /* 004377bb: cmp dword ptr [ebp - 4], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004377bf: jge 0x4377e6 */ if ((fS==fO)) goto L_004377e6;
L_004377c1:; BB(0x004377c1);
    /* 004377c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004377c4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004377c7: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 004377cb: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x4377d0u); f_00427ecb();
    /* 004377d0: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004377d3: jne 0x4377e4 */ if (!fZ) goto L_004377e4;
L_004377d5:; BB(0x004377d5);
    /* 004377d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004377d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004377db: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 004377df: call 0x4305b3 */ r_esp -= 4; W32(r_esp, 0x4377e4u); f_004305b3();
L_004377e4:; BB(0x004377e4);
    /* 004377e4: jmp 0x4377b2 */ goto L_004377b2;
L_004377e6:; BB(0x004377e6);
    /* 004377e6: mov esp, ebp */ r_esp = r_ebp;
    /* 004377e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004377e9: ret 4 */ FN_RET(0x004377a0); r_esp += 8; return;
}

void f_004377ec(void) /* FUN_004377ec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004377ec);
    /* 004377ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004377ed: mov ebp, esp */ r_ebp = r_esp;
    /* 004377ef: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004377f2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004377f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004377fc: jmp 0x437807 */ goto L_00437807;
L_004377fe:; BB(0x004377fe);
    /* 004377fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437801: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00437804: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00437807:; BB(0x00437807);
    /* 00437807: cmp dword ptr [ebp - 4], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043780b: jge 0x437832 */ if ((fS==fO)) goto L_00437832;
L_0043780d:; BB(0x0043780d);
    /* 0043780d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437810: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437813: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00437817: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x43781cu); f_00427ecb();
    /* 0043781c: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043781f: jne 0x437830 */ if (!fZ) goto L_00437830;
L_00437821:; BB(0x00437821);
    /* 00437821: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437824: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437827: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0043782b: call 0x4305ff */ r_esp -= 4; W32(r_esp, 0x437830u); f_004305ff();
L_00437830:; BB(0x00437830);
    /* 00437830: jmp 0x4377fe */ goto L_004377fe;
L_00437832:; BB(0x00437832);
    /* 00437832: mov esp, ebp */ r_esp = r_ebp;
    /* 00437834: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437835: ret 4 */ FN_RET(0x004377ec); r_esp += 8; return;
}

void f_00437838(void) /* FUN_00437838 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437838);
    /* 00437838: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437839: mov ebp, esp */ r_ebp = r_esp;
    /* 0043783b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043783e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00437841: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00437848: jmp 0x437853 */ goto L_00437853;
L_0043784a:; BB(0x0043784a);
    /* 0043784a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043784d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00437850: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00437853:; BB(0x00437853);
    /* 00437853: cmp dword ptr [ebp - 4], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00437857: jge 0x43786a */ if ((fS==fO)) goto L_0043786a;
L_00437859:; BB(0x00437859);
    /* 00437859: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043785c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043785f: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00437863: call 0x43070b */ r_esp -= 4; W32(r_esp, 0x437868u); f_0043070b();
    /* 00437868: jmp 0x43784a */ goto L_0043784a;
L_0043786a:; BB(0x0043786a);
    /* 0043786a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043786c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043786d: ret  */ FN_RET(0x00437838); r_esp += 4; return;
}

void f_0043786e(void) /* FUN_0043786e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043786e);
    /* 0043786e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043786f: mov ebp, esp */ r_ebp = r_esp;
    /* 00437871: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00437874: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00437877: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043787e: jmp 0x437889 */ goto L_00437889;
L_00437880:; BB(0x00437880);
    /* 00437880: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437883: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00437886: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00437889:; BB(0x00437889);
    /* 00437889: cmp dword ptr [ebp - 0xc], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043788d: jge 0x437918 */ if ((fS==fO)) goto L_00437918;
L_00437893:; BB(0x00437893);
    /* 00437893: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043789a: jmp 0x4378a5 */ goto L_004378a5;
L_0043789c:; BB(0x0043789c);
    /* 0043789c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043789f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004378a2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004378a5:; BB(0x004378a5);
    /* 004378a5: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004378a9: jge 0x437913 */ if ((fS==fO)) goto L_00437913;
L_004378ab:; BB(0x004378ab);
    /* 004378ab: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004378ae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004378b1: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 004378b5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004378b8: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004378bb: mov eax, dword ptr [ecx + edx + 0x6c] */ r_eax = R32((u32)(r_ecx+r_edx+0x6cu));
    /* 004378bf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004378c2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004378c6: jne 0x4378ca */ if (!fZ) goto L_004378ca;
L_004378c8:; BB(0x004378c8);
    /* 004378c8: jmp 0x43789c */ goto L_0043789c;
L_004378ca:; BB(0x004378ca);
    /* 004378ca: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004378d1: jmp 0x4378dc */ goto L_004378dc;
L_004378d3:; BB(0x004378d3);
    /* 004378d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004378d6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004378d9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_004378dc:; BB(0x004378dc);
    /* 004378dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004378df: call 0x426fb2 */ r_esp -= 4; W32(r_esp, 0x4378e4u); f_00426fb2();
    /* 004378e4: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004378e7: jg 0x437911 */ if ((!fZ&&fS==fO)) goto L_00437911;
L_004378e9:; BB(0x004378e9);
    /* 004378e9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004378ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004378ef: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 004378f3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004378f6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004378fa: je 0x43790f */ if (fZ) goto L_0043790f;
L_004378fc:; BB(0x004378fc);
    /* 004378fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004378ff: call 0x5d4e74 */ r_esp -= 4; W32(r_esp, 0x437904u); f_005d4e74();
    /* 00437904: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437906: je 0x43790f */ if (fZ) goto L_0043790f;
L_00437908:; BB(0x00437908);
    /* 00437908: mov eax, 1 */ r_eax = 0x1u;
    /* 0043790d: jmp 0x43791a */ goto L_0043791a;
L_0043790f:; BB(0x0043790f);
    /* 0043790f: jmp 0x4378d3 */ goto L_004378d3;
L_00437911:; BB(0x00437911);
    /* 00437911: jmp 0x43789c */ goto L_0043789c;
L_00437913:; BB(0x00437913);
    /* 00437913: jmp 0x437880 */ goto L_00437880;
L_00437918:; BB(0x00437918);
    /* 00437918: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043791a:; BB(0x0043791a);
    /* 0043791a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043791c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043791d: ret  */ FN_RET(0x0043786e); r_esp += 4; return;
}

void f_0043791e(void) /* FUN_0043791e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043791e);
    /* 0043791e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043791f: mov ebp, esp */ r_ebp = r_esp;
    /* 00437921: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00437924: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00437927: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043792e: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00437935: jmp 0x437940 */ goto L_00437940;
L_00437937:; BB(0x00437937);
    /* 00437937: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043793a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043793d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00437940:; BB(0x00437940);
    /* 00437940: cmp dword ptr [ebp - 0xc], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00437944: jge 0x43797d */ if ((fS==fO)) goto L_0043797d;
L_00437946:; BB(0x00437946);
    /* 00437946: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437949: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043794c: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00437950: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00437953: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437956: movsx edx, byte ptr [ecx + 0xc8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0xc8u));
    /* 0043795d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437960: jne 0x43797b */ if (!fZ) goto L_0043797b;
L_00437962:; BB(0x00437962);
    /* 00437962: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00437965: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00437966: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437969: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x43796eu); f_004280b4();
    /* 0043796e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437970: je 0x43797b */ if (fZ) goto L_0043797b;
L_00437972:; BB(0x00437972);
    /* 00437972: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437975: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00437978: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0043797b:; BB(0x0043797b);
    /* 0043797b: jmp 0x437937 */ goto L_00437937;
L_0043797d:; BB(0x0043797d);
    /* 0043797d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437980: mov esp, ebp */ r_esp = r_ebp;
    /* 00437982: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437983: ret 4 */ FN_RET(0x0043791e); r_esp += 8; return;
}

void f_00437986(void) /* FUN_00437986 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437986);
    /* 00437986: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437987: mov ebp, esp */ r_ebp = r_esp;
    /* 00437989: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043798c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043798f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00437996: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043799d: jmp 0x4379a8 */ goto L_004379a8;
L_0043799f:; BB(0x0043799f);
    /* 0043799f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004379a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004379a5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004379a8:; BB(0x004379a8);
    /* 004379a8: cmp dword ptr [ebp - 0xc], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004379ac: jge 0x4379e4 */ if ((fS==fO)) goto L_004379e4;
L_004379ae:; BB(0x004379ae);
    /* 004379ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004379b1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004379b4: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 004379b8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004379bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004379be: movsx edx, byte ptr [ecx + 0xc8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0xc8u));
    /* 004379c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004379c7: jne 0x4379e2 */ if (!fZ) goto L_004379e2;
L_004379c9:; BB(0x004379c9);
    /* 004379c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004379cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004379cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004379d0: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x4379d5u); f_004280b4();
    /* 004379d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004379d7: je 0x4379e2 */ if (fZ) goto L_004379e2;
L_004379d9:; BB(0x004379d9);
    /* 004379d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004379dc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004379df: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004379e2:; BB(0x004379e2);
    /* 004379e2: jmp 0x43799f */ goto L_0043799f;
L_004379e4:; BB(0x004379e4);
    /* 004379e4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004379e7: mov esp, ebp */ r_esp = r_ebp;
    /* 004379e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004379ea: ret 4 */ FN_RET(0x00437986); r_esp += 8; return;
}

void f_004379ed(void) /* FUN_004379ed */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004379ed);
    /* 004379ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004379ee: mov ebp, esp */ r_ebp = r_esp;
    /* 004379f0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004379f3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004379f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004379f9: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x4379feu); f_0043c040();
    /* 004379fe: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437a01: je 0x437a2c */ if (fZ) goto L_00437a2c;
L_00437a03:; BB(0x00437a03);
    /* 00437a03: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437a06: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 00437a0c: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x437a11u); f_005d96a9();
    /* 00437a11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437a13: je 0x437a2c */ if (fZ) goto L_00437a2c;
L_00437a15:; BB(0x00437a15);
    /* 00437a15: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437a18: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 00437a1e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437a21: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 00437a27: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00437a29: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x437a2cu); call_ind(t); }
L_00437a2c:; BB(0x00437a2c);
    /* 00437a2c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00437a2e: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00437a33: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00437a36: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00437a3c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00437a3f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00437a41: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x437a44u); call_ind(t); }
    /* 00437a44: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00437a46: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00437a4b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00437a4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437a4f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437a52: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00437a55: call 0x441a2c */ r_esp -= 4; W32(r_esp, 0x437a5au); f_00441a2c();
    /* 00437a5a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437a5d: mov dword ptr [eax + 0x1e0], 0 */ W32((u32)(r_eax+0x1e0u), 0x0u);
    /* 00437a67: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437a6a: mov dword ptr [ecx + 0x1dc], 0 */ W32((u32)(r_ecx+0x1dcu), 0x0u);
    /* 00437a74: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00437a7b: jmp 0x437a86 */ goto L_00437a86;
L_00437a7d:; BB(0x00437a7d);
    /* 00437a7d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437a80: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00437a83: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00437a86:; BB(0x00437a86);
    /* 00437a86: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00437a8a: jge 0x437aaf */ if ((fS==fO)) goto L_00437aaf;
L_00437a8c:; BB(0x00437a8c);
    /* 00437a8c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437a8f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437a92: cmp dword ptr [ecx + eax*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437a97: je 0x437aad */ if (fZ) goto L_00437aad;
L_00437a99:; BB(0x00437a99);
    /* 00437a99: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437a9c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437a9f: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00437aa3: mov dword ptr [ecx + 0x134], 0 */ W32((u32)(r_ecx+0x134u), 0x0u);
L_00437aad:; BB(0x00437aad);
    /* 00437aad: jmp 0x437a7d */ goto L_00437a7d;
L_00437aaf:; BB(0x00437aaf);
    /* 00437aaf: mov esp, ebp */ r_esp = r_ebp;
    /* 00437ab1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437ab2: ret  */ FN_RET(0x004379ed); r_esp += 4; return;
}

void f_00437ab3(void) /* FUN_00437ab3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437ab3);
    /* 00437ab3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437ab4: mov ebp, esp */ r_ebp = r_esp;
    /* 00437ab6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00437ab9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00437abc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437abf: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x437ac4u); f_0043c73a();
    /* 00437ac4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00437ac7: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437acb: je 0x437af1 */ if (fZ) goto L_00437af1;
L_00437acd:; BB(0x00437acd);
    /* 00437acd: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437ad1: je 0x437af1 */ if (fZ) goto L_00437af1;
L_00437ad3:; BB(0x00437ad3);
    /* 00437ad3: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437ad7: je 0x437af1 */ if (fZ) goto L_00437af1;
L_00437ad9:; BB(0x00437ad9);
    /* 00437ad9: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437add: je 0x437af1 */ if (fZ) goto L_00437af1;
L_00437adf:; BB(0x00437adf);
    /* 00437adf: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437ae3: je 0x437af1 */ if (fZ) goto L_00437af1;
L_00437ae5:; BB(0x00437ae5);
    /* 00437ae5: cmp dword ptr [ebp - 4], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437ae9: je 0x437af1 */ if (fZ) goto L_00437af1;
L_00437aeb:; BB(0x00437aeb);
    /* 00437aeb: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437aef: jne 0x437af8 */ if (!fZ) goto L_00437af8;
L_00437af1:; BB(0x00437af1);
    /* 00437af1: mov eax, 1 */ r_eax = 0x1u;
    /* 00437af6: jmp 0x437afa */ goto L_00437afa;
L_00437af8:; BB(0x00437af8);
    /* 00437af8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00437afa:; BB(0x00437afa);
    /* 00437afa: mov esp, ebp */ r_esp = r_ebp;
    /* 00437afc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437afd: ret  */ FN_RET(0x00437ab3); r_esp += 4; return;
}

void f_00437afe(void) /* FUN_00437afe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437afe);
    /* 00437afe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437aff: mov ebp, esp */ r_ebp = r_esp;
    /* 00437b01: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00437b04: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00437b07: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00437b0e: jmp 0x437b19 */ goto L_00437b19;
L_00437b10:; BB(0x00437b10);
    /* 00437b10: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437b13: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00437b16: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00437b19:; BB(0x00437b19);
    /* 00437b19: cmp dword ptr [ebp - 8], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00437b1d: jge 0x437b61 */ if ((fS==fO)) goto L_00437b61;
L_00437b1f:; BB(0x00437b1f);
    /* 00437b1f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00437b26: jmp 0x437b31 */ goto L_00437b31;
L_00437b28:; BB(0x00437b28);
    /* 00437b28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437b2b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00437b2e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00437b31:; BB(0x00437b31);
    /* 00437b31: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00437b35: jge 0x437b5f */ if ((fS==fO)) goto L_00437b5f;
L_00437b37:; BB(0x00437b37);
    /* 00437b37: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437b3a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437b3d: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00437b41: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437b44: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00437b47: mov eax, dword ptr [ecx + edx + 0x6c] */ r_eax = R32((u32)(r_ecx+r_edx+0x6cu));
    /* 00437b4b: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00437b51: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437b54: jne 0x437b5d */ if (!fZ) goto L_00437b5d;
L_00437b56:; BB(0x00437b56);
    /* 00437b56: mov eax, 1 */ r_eax = 0x1u;
    /* 00437b5b: jmp 0x437b63 */ goto L_00437b63;
L_00437b5d:; BB(0x00437b5d);
    /* 00437b5d: jmp 0x437b28 */ goto L_00437b28;
L_00437b5f:; BB(0x00437b5f);
    /* 00437b5f: jmp 0x437b10 */ goto L_00437b10;
L_00437b61:; BB(0x00437b61);
    /* 00437b61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00437b63:; BB(0x00437b63);
    /* 00437b63: mov esp, ebp */ r_esp = r_ebp;
    /* 00437b65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437b66: ret 4 */ FN_RET(0x00437afe); r_esp += 8; return;
}

void f_00437b69(void) /* FUN_00437b69 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437b69);
    /* 00437b69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437b6a: mov ebp, esp */ r_ebp = r_esp;
    /* 00437b6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437b6d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00437b70: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00437b72: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00437b77: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00437b7a: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00437b80: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00437b83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00437b85: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x437b88u); call_ind(t); }
    /* 00437b88: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00437b8a: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00437b8f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00437b92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437b93: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437b96: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00437b99: call 0x442603 */ r_esp -= 4; W32(r_esp, 0x437b9eu); f_00442603();
    /* 00437b9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00437ba0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437ba1: ret  */ FN_RET(0x00437b69); r_esp += 4; return;
}

void f_00437ba2(void) /* FUN_00437ba2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437ba2);
    /* 00437ba2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437ba3: mov ebp, esp */ r_ebp = r_esp;
    /* 00437ba5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00437ba8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00437bab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437bae: call 0x43a8f2 */ r_esp -= 4; W32(r_esp, 0x437bb3u); f_0043a8f2();
    /* 00437bb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437bb5: je 0x437bcb */ if (fZ) goto L_00437bcb;
L_00437bb7:; BB(0x00437bb7);
    /* 00437bb7: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00437bbd: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x437bc2u); f_0043c73a();
    /* 00437bc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00437bc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437bc6: call 0x43a62a */ r_esp -= 4; W32(r_esp, 0x437bcbu); f_0043a62a();
L_00437bcb:; BB(0x00437bcb);
    /* 00437bcb: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00437bcd: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00437bd2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00437bd5: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00437bdb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00437bde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00437be0: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x437be3u); call_ind(t); }
    /* 00437be3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437be6: call 0x437c53 */ r_esp -= 4; W32(r_esp, 0x437bebu); f_00437c53();
    /* 00437beb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437bed: je 0x437c36 */ if (fZ) goto L_00437c36;
L_00437bef:; BB(0x00437bef);
    /* 00437bef: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00437bf4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00437bf7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00437bfa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437bfd: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00437c00: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00437c03: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437c07: je 0x437c1e */ if (fZ) goto L_00437c1e;
L_00437c09:; BB(0x00437c09);
    /* 00437c09: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00437c0c: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437c0f: je 0x437c1e */ if (fZ) goto L_00437c1e;
L_00437c11:; BB(0x00437c11);
    /* 00437c11: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00437c13: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437c16: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00437c18: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437c1b: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x437c1eu); call_ind(t); }
L_00437c1e:; BB(0x00437c1e);
    /* 00437c1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00437c20: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00437c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437c24: push 0xdac */ { u32 v = 0xdacu; r_esp -= 4; W32(r_esp, v); }
    /* 00437c29: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437c2c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00437c2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437c31: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x437c34u); call_ind(t); }
    /* 00437c34: jmp 0x437c4f */ goto L_00437c4f;
L_00437c36:; BB(0x00437c36);
    /* 00437c36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00437c38: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00437c3e: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00437c41: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00437c47: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00437c4a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00437c4c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x437c4fu); call_ind(t); }
L_00437c4f:; BB(0x00437c4f);
    /* 00437c4f: mov esp, ebp */ r_esp = r_ebp;
    /* 00437c51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437c52: ret  */ FN_RET(0x00437ba2); r_esp += 4; return;
}

void f_00437c53(void) /* FUN_00437c53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437c53);
    /* 00437c53: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437c54: mov ebp, esp */ r_ebp = r_esp;
    /* 00437c56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437c57: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00437c5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437c5d: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x437c62u); f_0043a8b5();
    /* 00437c62: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00437c64: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00437c66: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00437c68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437c6a: jne 0x437c78 */ if (!fZ) goto L_00437c78;
L_00437c6c:; BB(0x00437c6c);
    /* 00437c6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437c6f: cmp dword ptr [eax + 0x1ec], 0 */ {  u32 a = R32((u32)(r_eax+0x1ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437c76: je 0x437c7f */ if (fZ) goto L_00437c7f;
L_00437c78:; BB(0x00437c78);
    /* 00437c78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00437c7a: jmp 0x437e07 */ goto L_00437e07;
L_00437c7f:; BB(0x00437c7f);
    /* 00437c7f: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00437c81: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437c84: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437c89u); f_0043c7a1();
    /* 00437c89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437c8b: jne 0x437c9b */ if (!fZ) goto L_00437c9b;
L_00437c8d:; BB(0x00437c8d);
    /* 00437c8d: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00437c8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437c92: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437c97u); f_0043c7a1();
    /* 00437c97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437c99: je 0x437cc1 */ if (fZ) goto L_00437cc1;
L_00437c9b:; BB(0x00437c9b);
    /* 00437c9b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00437c9d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437ca0: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437ca5u); f_0043c77e();
    /* 00437ca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437ca7: jne 0x437cb7 */ if (!fZ) goto L_00437cb7;
L_00437ca9:; BB(0x00437ca9);
    /* 00437ca9: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00437cab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437cae: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437cb3u); f_0043c77e();
    /* 00437cb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437cb5: je 0x437cc1 */ if (fZ) goto L_00437cc1;
L_00437cb7:; BB(0x00437cb7);
    /* 00437cb7: mov eax, 1 */ r_eax = 0x1u;
    /* 00437cbc: jmp 0x437e07 */ goto L_00437e07;
L_00437cc1:; BB(0x00437cc1);
    /* 00437cc1: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00437cc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437cc6: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437ccbu); f_0043c7a1();
    /* 00437ccb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437ccd: jne 0x437cdd */ if (!fZ) goto L_00437cdd;
L_00437ccf:; BB(0x00437ccf);
    /* 00437ccf: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00437cd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437cd4: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437cd9u); f_0043c7a1();
    /* 00437cd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437cdb: je 0x437d03 */ if (fZ) goto L_00437d03;
L_00437cdd:; BB(0x00437cdd);
    /* 00437cdd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00437cdf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437ce2: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437ce7u); f_0043c77e();
    /* 00437ce7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437ce9: jne 0x437cf9 */ if (!fZ) goto L_00437cf9;
L_00437ceb:; BB(0x00437ceb);
    /* 00437ceb: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00437ced: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437cf0: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437cf5u); f_0043c77e();
    /* 00437cf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437cf7: je 0x437d03 */ if (fZ) goto L_00437d03;
L_00437cf9:; BB(0x00437cf9);
    /* 00437cf9: mov eax, 1 */ r_eax = 0x1u;
    /* 00437cfe: jmp 0x437e07 */ goto L_00437e07;
L_00437d03:; BB(0x00437d03);
    /* 00437d03: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00437d05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437d08: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437d0du); f_0043c7a1();
    /* 00437d0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437d0f: jne 0x437d1f */ if (!fZ) goto L_00437d1f;
L_00437d11:; BB(0x00437d11);
    /* 00437d11: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00437d13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437d16: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437d1bu); f_0043c7a1();
    /* 00437d1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437d1d: je 0x437d45 */ if (fZ) goto L_00437d45;
L_00437d1f:; BB(0x00437d1f);
    /* 00437d1f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00437d21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437d24: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437d29u); f_0043c77e();
    /* 00437d29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437d2b: jne 0x437d3b */ if (!fZ) goto L_00437d3b;
L_00437d2d:; BB(0x00437d2d);
    /* 00437d2d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00437d2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437d32: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437d37u); f_0043c77e();
    /* 00437d37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437d39: je 0x437d45 */ if (fZ) goto L_00437d45;
L_00437d3b:; BB(0x00437d3b);
    /* 00437d3b: mov eax, 1 */ r_eax = 0x1u;
    /* 00437d40: jmp 0x437e07 */ goto L_00437e07;
L_00437d45:; BB(0x00437d45);
    /* 00437d45: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00437d47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437d4a: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437d4fu); f_0043c7a1();
    /* 00437d4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437d51: jne 0x437d61 */ if (!fZ) goto L_00437d61;
L_00437d53:; BB(0x00437d53);
    /* 00437d53: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00437d55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437d58: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437d5du); f_0043c7a1();
    /* 00437d5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437d5f: je 0x437d87 */ if (fZ) goto L_00437d87;
L_00437d61:; BB(0x00437d61);
    /* 00437d61: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00437d63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437d66: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437d6bu); f_0043c77e();
    /* 00437d6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437d6d: jne 0x437d7d */ if (!fZ) goto L_00437d7d;
L_00437d6f:; BB(0x00437d6f);
    /* 00437d6f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00437d71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437d74: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437d79u); f_0043c77e();
    /* 00437d79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437d7b: je 0x437d87 */ if (fZ) goto L_00437d87;
L_00437d7d:; BB(0x00437d7d);
    /* 00437d7d: mov eax, 1 */ r_eax = 0x1u;
    /* 00437d82: jmp 0x437e07 */ goto L_00437e07;
L_00437d87:; BB(0x00437d87);
    /* 00437d87: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00437d89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437d8c: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437d91u); f_0043c7a1();
    /* 00437d91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437d93: jne 0x437da3 */ if (!fZ) goto L_00437da3;
L_00437d95:; BB(0x00437d95);
    /* 00437d95: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00437d97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437d9a: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437d9fu); f_0043c7a1();
    /* 00437d9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437da1: je 0x437dc6 */ if (fZ) goto L_00437dc6;
L_00437da3:; BB(0x00437da3);
    /* 00437da3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00437da5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437da8: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437dadu); f_0043c77e();
    /* 00437dad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437daf: jne 0x437dbf */ if (!fZ) goto L_00437dbf;
L_00437db1:; BB(0x00437db1);
    /* 00437db1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00437db3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437db6: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437dbbu); f_0043c77e();
    /* 00437dbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437dbd: je 0x437dc6 */ if (fZ) goto L_00437dc6;
L_00437dbf:; BB(0x00437dbf);
    /* 00437dbf: mov eax, 1 */ r_eax = 0x1u;
    /* 00437dc4: jmp 0x437e07 */ goto L_00437e07;
L_00437dc6:; BB(0x00437dc6);
    /* 00437dc6: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00437dc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437dcb: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437dd0u); f_0043c7a1();
    /* 00437dd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437dd2: jne 0x437de2 */ if (!fZ) goto L_00437de2;
L_00437dd4:; BB(0x00437dd4);
    /* 00437dd4: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00437dd6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437dd9: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437ddeu); f_0043c7a1();
    /* 00437dde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437de0: je 0x437e05 */ if (fZ) goto L_00437e05;
L_00437de2:; BB(0x00437de2);
    /* 00437de2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00437de4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437de7: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437decu); f_0043c77e();
    /* 00437dec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437dee: jne 0x437dfe */ if (!fZ) goto L_00437dfe;
L_00437df0:; BB(0x00437df0);
    /* 00437df0: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00437df2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437df5: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437dfau); f_0043c77e();
    /* 00437dfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437dfc: je 0x437e05 */ if (fZ) goto L_00437e05;
L_00437dfe:; BB(0x00437dfe);
    /* 00437dfe: mov eax, 1 */ r_eax = 0x1u;
    /* 00437e03: jmp 0x437e07 */ goto L_00437e07;
L_00437e05:; BB(0x00437e05);
    /* 00437e05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00437e07:; BB(0x00437e07);
    /* 00437e07: mov esp, ebp */ r_esp = r_ebp;
    /* 00437e09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437e0a: ret  */ FN_RET(0x00437c53); r_esp += 4; return;
}

void f_00437e0b(void) /* FUN_00437e0b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437e0b);
    /* 00437e0b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437e0c: mov ebp, esp */ r_ebp = r_esp;
    /* 00437e0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437e0f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00437e12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437e15: call 0x437ab3 */ r_esp -= 4; W32(r_esp, 0x437e1au); f_00437ab3();
    /* 00437e1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437e1c: je 0x437e33 */ if (fZ) goto L_00437e33;
L_00437e1e:; BB(0x00437e1e);
    /* 00437e1e: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 00437e20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437e23: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437e28u); f_0043c7a1();
    /* 00437e28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437e2a: je 0x437e33 */ if (fZ) goto L_00437e33;
L_00437e2c:; BB(0x00437e2c);
    /* 00437e2c: mov eax, 1 */ r_eax = 0x1u;
    /* 00437e31: jmp 0x437e35 */ goto L_00437e35;
L_00437e33:; BB(0x00437e33);
    /* 00437e33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00437e35:; BB(0x00437e35);
    /* 00437e35: mov esp, ebp */ r_esp = r_ebp;
    /* 00437e37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437e38: ret  */ FN_RET(0x00437e0b); r_esp += 4; return;
}

void f_00437e39(void) /* FUN_00437e39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437e39);
    /* 00437e39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437e3a: mov ebp, esp */ r_ebp = r_esp;
    /* 00437e3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437e3d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00437e40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437e43: call 0x43ca75 */ r_esp -= 4; W32(r_esp, 0x437e48u); f_0043ca75();
    /* 00437e48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437e4a: je 0x437ec3 */ if (fZ) goto L_00437ec3;
L_00437e4c:; BB(0x00437e4c);
    /* 00437e4c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00437e4e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437e51: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437e56u); f_0043c77e();
    /* 00437e56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437e58: jne 0x437e84 */ if (!fZ) goto L_00437e84;
L_00437e5a:; BB(0x00437e5a);
    /* 00437e5a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00437e5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437e5f: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437e64u); f_0043c77e();
    /* 00437e64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437e66: jne 0x437e84 */ if (!fZ) goto L_00437e84;
L_00437e68:; BB(0x00437e68);
    /* 00437e68: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00437e6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437e6d: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437e72u); f_0043c77e();
    /* 00437e72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437e74: jne 0x437e84 */ if (!fZ) goto L_00437e84;
L_00437e76:; BB(0x00437e76);
    /* 00437e76: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00437e78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437e7b: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437e80u); f_0043c77e();
    /* 00437e80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437e82: je 0x437ec3 */ if (fZ) goto L_00437ec3;
L_00437e84:; BB(0x00437e84);
    /* 00437e84: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00437e86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437e89: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437e8eu); f_0043c7a1();
    /* 00437e8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437e90: jne 0x437ebc */ if (!fZ) goto L_00437ebc;
L_00437e92:; BB(0x00437e92);
    /* 00437e92: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00437e94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437e97: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437e9cu); f_0043c7a1();
    /* 00437e9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437e9e: jne 0x437ebc */ if (!fZ) goto L_00437ebc;
L_00437ea0:; BB(0x00437ea0);
    /* 00437ea0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00437ea2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437ea5: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437eaau); f_0043c7a1();
    /* 00437eaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437eac: jne 0x437ebc */ if (!fZ) goto L_00437ebc;
L_00437eae:; BB(0x00437eae);
    /* 00437eae: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00437eb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437eb3: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437eb8u); f_0043c7a1();
    /* 00437eb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437eba: je 0x437ec3 */ if (fZ) goto L_00437ec3;
L_00437ebc:; BB(0x00437ebc);
    /* 00437ebc: mov eax, 1 */ r_eax = 0x1u;
    /* 00437ec1: jmp 0x437ec5 */ goto L_00437ec5;
L_00437ec3:; BB(0x00437ec3);
    /* 00437ec3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00437ec5:; BB(0x00437ec5);
    /* 00437ec5: mov esp, ebp */ r_esp = r_ebp;
    /* 00437ec7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437ec8: ret  */ FN_RET(0x00437e39); r_esp += 4; return;
}

void f_00437ec9(void) /* FUN_00437ec9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437ec9);
    /* 00437ec9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437eca: mov ebp, esp */ r_ebp = r_esp;
    /* 00437ecc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437ecd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00437ed0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00437ed2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437ed5: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437edau); f_0043c77e();
    /* 00437eda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437edc: jne 0x437efa */ if (!fZ) goto L_00437efa;
L_00437ede:; BB(0x00437ede);
    /* 00437ede: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00437ee0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437ee3: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437ee8u); f_0043c77e();
    /* 00437ee8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437eea: jne 0x437efa */ if (!fZ) goto L_00437efa;
L_00437eec:; BB(0x00437eec);
    /* 00437eec: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00437eee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437ef1: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437ef6u); f_0043c77e();
    /* 00437ef6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437ef8: je 0x437f0f */ if (fZ) goto L_00437f0f;
L_00437efa:; BB(0x00437efa);
    /* 00437efa: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00437efc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437eff: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437f04u); f_0043c7a1();
    /* 00437f04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f06: je 0x437f0f */ if (fZ) goto L_00437f0f;
L_00437f08:; BB(0x00437f08);
    /* 00437f08: mov eax, 1 */ r_eax = 0x1u;
    /* 00437f0d: jmp 0x437f11 */ goto L_00437f11;
L_00437f0f:; BB(0x00437f0f);
    /* 00437f0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00437f11:; BB(0x00437f11);
    /* 00437f11: mov esp, ebp */ r_esp = r_ebp;
    /* 00437f13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437f14: ret  */ FN_RET(0x00437ec9); r_esp += 4; return;
}

void f_00437f15(void) /* FUN_00437f15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437f15);
    /* 00437f15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437f16: mov ebp, esp */ r_ebp = r_esp;
    /* 00437f18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437f19: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00437f1c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00437f1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437f21: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437f26u); f_0043c7a1();
    /* 00437f26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f28: je 0x437f4d */ if (fZ) goto L_00437f4d;
L_00437f2a:; BB(0x00437f2a);
    /* 00437f2a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00437f2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437f2f: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437f34u); f_0043c77e();
    /* 00437f34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f36: jne 0x437f46 */ if (!fZ) goto L_00437f46;
L_00437f38:; BB(0x00437f38);
    /* 00437f38: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00437f3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437f3d: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437f42u); f_0043c77e();
    /* 00437f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f44: je 0x437f4d */ if (fZ) goto L_00437f4d;
L_00437f46:; BB(0x00437f46);
    /* 00437f46: mov eax, 1 */ r_eax = 0x1u;
    /* 00437f4b: jmp 0x437f4f */ goto L_00437f4f;
L_00437f4d:; BB(0x00437f4d);
    /* 00437f4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00437f4f:; BB(0x00437f4f);
    /* 00437f4f: mov esp, ebp */ r_esp = r_ebp;
    /* 00437f51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437f52: ret  */ FN_RET(0x00437f15); r_esp += 4; return;
}

void f_00437f53(void) /* FUN_00437f53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437f53);
    /* 00437f53: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437f54: mov ebp, esp */ r_ebp = r_esp;
    /* 00437f56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437f57: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00437f5a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00437f5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437f5f: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437f64u); f_0043c7a1();
    /* 00437f64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f66: je 0x437f8b */ if (fZ) goto L_00437f8b;
L_00437f68:; BB(0x00437f68);
    /* 00437f68: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00437f6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437f6d: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437f72u); f_0043c77e();
    /* 00437f72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f74: jne 0x437f84 */ if (!fZ) goto L_00437f84;
L_00437f76:; BB(0x00437f76);
    /* 00437f76: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00437f78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437f7b: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437f80u); f_0043c77e();
    /* 00437f80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f82: je 0x437f8b */ if (fZ) goto L_00437f8b;
L_00437f84:; BB(0x00437f84);
    /* 00437f84: mov eax, 1 */ r_eax = 0x1u;
    /* 00437f89: jmp 0x437f8d */ goto L_00437f8d;
L_00437f8b:; BB(0x00437f8b);
    /* 00437f8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00437f8d:; BB(0x00437f8d);
    /* 00437f8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00437f8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437f90: ret  */ FN_RET(0x00437f53); r_esp += 4; return;
}

void f_00437f91(void) /* FUN_00437f91 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437f91);
    /* 00437f91: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437f92: mov ebp, esp */ r_ebp = r_esp;
    /* 00437f94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437f95: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00437f98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00437f9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437f9d: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437fa2u); f_0043c7a1();
    /* 00437fa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437fa4: je 0x437fc5 */ if (fZ) goto L_00437fc5;
L_00437fa6:; BB(0x00437fa6);
    /* 00437fa6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437fa9: call 0x43c9db */ r_esp -= 4; W32(r_esp, 0x437faeu); f_0043c9db();
    /* 00437fae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437fb0: jne 0x437fbe */ if (!fZ) goto L_00437fbe;
L_00437fb2:; BB(0x00437fb2);
    /* 00437fb2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437fb5: call 0x43a8c9 */ r_esp -= 4; W32(r_esp, 0x437fbau); f_0043a8c9();
    /* 00437fba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437fbc: je 0x437fc5 */ if (fZ) goto L_00437fc5;
L_00437fbe:; BB(0x00437fbe);
    /* 00437fbe: mov eax, 1 */ r_eax = 0x1u;
    /* 00437fc3: jmp 0x437fc7 */ goto L_00437fc7;
L_00437fc5:; BB(0x00437fc5);
    /* 00437fc5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00437fc7:; BB(0x00437fc7);
    /* 00437fc7: mov esp, ebp */ r_esp = r_ebp;
    /* 00437fc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437fca: ret  */ FN_RET(0x00437f91); r_esp += 4; return;
}

void f_00437fcb(void) /* FUN_00437fcb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00437fcb);
    /* 00437fcb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437fcc: mov ebp, esp */ r_ebp = r_esp;
    /* 00437fce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437fcf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00437fd2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00437fd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437fd7: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x437fdcu); f_0043c7a1();
    /* 00437fdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437fde: je 0x43800d */ if (fZ) goto L_0043800d;
L_00437fe0:; BB(0x00437fe0);
    /* 00437fe0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437fe3: call 0x43ca21 */ r_esp -= 4; W32(r_esp, 0x437fe8u); f_0043ca21();
    /* 00437fe8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437fea: je 0x437ffa */ if (fZ) goto L_00437ffa;
L_00437fec:; BB(0x00437fec);
    /* 00437fec: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00437fee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437ff1: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x437ff6u); f_0043c77e();
    /* 00437ff6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437ff8: je 0x438006 */ if (fZ) goto L_00438006;
L_00437ffa:; BB(0x00437ffa);
    /* 00437ffa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00437ffd: call 0x43ca9d */ r_esp -= 4; W32(r_esp, 0x438002u); f_0043ca9d();
    /* 00438002: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438004: je 0x43800d */ if (fZ) goto L_0043800d;
L_00438006:; BB(0x00438006);
    /* 00438006: mov eax, 1 */ r_eax = 0x1u;
    /* 0043800b: jmp 0x43800f */ goto L_0043800f;
L_0043800d:; BB(0x0043800d);
    /* 0043800d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043800f:; BB(0x0043800f);
    /* 0043800f: mov esp, ebp */ r_esp = r_ebp;
    /* 00438011: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438012: ret  */ FN_RET(0x00437fcb); r_esp += 4; return;
}

void f_00438013(void) /* FUN_00438013 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438013);
    /* 00438013: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438014: mov ebp, esp */ r_ebp = r_esp;
    /* 00438016: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438017: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043801a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043801d: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x438022u); f_0043a8b5();
    /* 00438022: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00438024: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00438026: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00438028: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043802a: jne 0x43803f */ if (!fZ) goto L_0043803f;
L_0043802c:; BB(0x0043802c);
    /* 0043802c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043802f: cmp dword ptr [eax + 0x1ec], 0 */ {  u32 a = R32((u32)(r_eax+0x1ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438036: jne 0x43803f */ if (!fZ) goto L_0043803f;
L_00438038:; BB(0x00438038);
    /* 00438038: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043803a: jmp 0x438119 */ goto L_00438119;
L_0043803f:; BB(0x0043803f);
    /* 0043803f: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00438041: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438044: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438049u); f_0043c7a1();
    /* 00438049: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043804b: je 0x438065 */ if (fZ) goto L_00438065;
L_0043804d:; BB(0x0043804d);
    /* 0043804d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043804f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438052: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438057u); f_0043c77e();
    /* 00438057: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438059: je 0x438065 */ if (fZ) goto L_00438065;
L_0043805b:; BB(0x0043805b);
    /* 0043805b: mov eax, 1 */ r_eax = 0x1u;
    /* 00438060: jmp 0x438119 */ goto L_00438119;
L_00438065:; BB(0x00438065);
    /* 00438065: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00438067: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043806a: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43806fu); f_0043c7a1();
    /* 0043806f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438071: je 0x43808b */ if (fZ) goto L_0043808b;
L_00438073:; BB(0x00438073);
    /* 00438073: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00438075: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438078: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43807du); f_0043c77e();
    /* 0043807d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043807f: je 0x43808b */ if (fZ) goto L_0043808b;
L_00438081:; BB(0x00438081);
    /* 00438081: mov eax, 1 */ r_eax = 0x1u;
    /* 00438086: jmp 0x438119 */ goto L_00438119;
L_0043808b:; BB(0x0043808b);
    /* 0043808b: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0043808d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438090: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438095u); f_0043c7a1();
    /* 00438095: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438097: je 0x4380ae */ if (fZ) goto L_004380ae;
L_00438099:; BB(0x00438099);
    /* 00438099: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043809b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043809e: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x4380a3u); f_0043c77e();
    /* 004380a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004380a5: je 0x4380ae */ if (fZ) goto L_004380ae;
L_004380a7:; BB(0x004380a7);
    /* 004380a7: mov eax, 1 */ r_eax = 0x1u;
    /* 004380ac: jmp 0x438119 */ goto L_00438119;
L_004380ae:; BB(0x004380ae);
    /* 004380ae: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 004380b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004380b3: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4380b8u); f_0043c7a1();
    /* 004380b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004380ba: je 0x4380d1 */ if (fZ) goto L_004380d1;
L_004380bc:; BB(0x004380bc);
    /* 004380bc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004380be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004380c1: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x4380c6u); f_0043c77e();
    /* 004380c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004380c8: je 0x4380d1 */ if (fZ) goto L_004380d1;
L_004380ca:; BB(0x004380ca);
    /* 004380ca: mov eax, 1 */ r_eax = 0x1u;
    /* 004380cf: jmp 0x438119 */ goto L_00438119;
L_004380d1:; BB(0x004380d1);
    /* 004380d1: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 004380d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004380d6: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4380dbu); f_0043c7a1();
    /* 004380db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004380dd: je 0x4380f4 */ if (fZ) goto L_004380f4;
L_004380df:; BB(0x004380df);
    /* 004380df: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004380e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004380e4: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x4380e9u); f_0043c77e();
    /* 004380e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004380eb: je 0x4380f4 */ if (fZ) goto L_004380f4;
L_004380ed:; BB(0x004380ed);
    /* 004380ed: mov eax, 1 */ r_eax = 0x1u;
    /* 004380f2: jmp 0x438119 */ goto L_00438119;
L_004380f4:; BB(0x004380f4);
    /* 004380f4: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004380f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004380f9: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4380feu); f_0043c7a1();
    /* 004380fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438100: je 0x438117 */ if (fZ) goto L_00438117;
L_00438102:; BB(0x00438102);
    /* 00438102: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00438104: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438107: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43810cu); f_0043c77e();
    /* 0043810c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043810e: je 0x438117 */ if (fZ) goto L_00438117;
L_00438110:; BB(0x00438110);
    /* 00438110: mov eax, 1 */ r_eax = 0x1u;
    /* 00438115: jmp 0x438119 */ goto L_00438119;
L_00438117:; BB(0x00438117);
    /* 00438117: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00438119:; BB(0x00438119);
    /* 00438119: mov esp, ebp */ r_esp = r_ebp;
    /* 0043811b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043811c: ret  */ FN_RET(0x00438013); r_esp += 4; return;
}

void f_0043811d(void) /* FUN_0043811d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043811d);
    /* 0043811d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043811e: mov ebp, esp */ r_ebp = r_esp;
    /* 00438120: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438121: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438124: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438127: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x43812cu); f_0043a8b5();
    /* 0043812c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0043812e: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00438130: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00438132: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438134: jne 0x438149 */ if (!fZ) goto L_00438149;
L_00438136:; BB(0x00438136);
    /* 00438136: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438139: cmp dword ptr [eax + 0x1ec], 0 */ {  u32 a = R32((u32)(r_eax+0x1ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438140: jne 0x438149 */ if (!fZ) goto L_00438149;
L_00438142:; BB(0x00438142);
    /* 00438142: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438144: jmp 0x4381de */ goto L_004381de;
L_00438149:; BB(0x00438149);
    /* 00438149: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043814b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043814e: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438153u); f_0043c77e();
    /* 00438153: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438155: jne 0x43815e */ if (!fZ) goto L_0043815e;
L_00438157:; BB(0x00438157);
    /* 00438157: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438159: jmp 0x4381de */ goto L_004381de;
L_0043815e:; BB(0x0043815e);
    /* 0043815e: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00438160: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438163: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438168u); f_0043c7a1();
    /* 00438168: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043816a: je 0x438173 */ if (fZ) goto L_00438173;
L_0043816c:; BB(0x0043816c);
    /* 0043816c: mov eax, 1 */ r_eax = 0x1u;
    /* 00438171: jmp 0x4381de */ goto L_004381de;
L_00438173:; BB(0x00438173);
    /* 00438173: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00438175: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438178: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43817du); f_0043c7a1();
    /* 0043817d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043817f: je 0x438188 */ if (fZ) goto L_00438188;
L_00438181:; BB(0x00438181);
    /* 00438181: mov eax, 1 */ r_eax = 0x1u;
    /* 00438186: jmp 0x4381de */ goto L_004381de;
L_00438188:; BB(0x00438188);
    /* 00438188: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0043818a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043818d: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438192u); f_0043c7a1();
    /* 00438192: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438194: je 0x43819d */ if (fZ) goto L_0043819d;
L_00438196:; BB(0x00438196);
    /* 00438196: mov eax, 1 */ r_eax = 0x1u;
    /* 0043819b: jmp 0x4381de */ goto L_004381de;
L_0043819d:; BB(0x0043819d);
    /* 0043819d: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0043819f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004381a2: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4381a7u); f_0043c7a1();
    /* 004381a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004381a9: je 0x4381b2 */ if (fZ) goto L_004381b2;
L_004381ab:; BB(0x004381ab);
    /* 004381ab: mov eax, 1 */ r_eax = 0x1u;
    /* 004381b0: jmp 0x4381de */ goto L_004381de;
L_004381b2:; BB(0x004381b2);
    /* 004381b2: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 004381b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004381b7: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4381bcu); f_0043c7a1();
    /* 004381bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004381be: je 0x4381c7 */ if (fZ) goto L_004381c7;
L_004381c0:; BB(0x004381c0);
    /* 004381c0: mov eax, 1 */ r_eax = 0x1u;
    /* 004381c5: jmp 0x4381de */ goto L_004381de;
L_004381c7:; BB(0x004381c7);
    /* 004381c7: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 004381c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004381cc: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4381d1u); f_0043c7a1();
    /* 004381d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004381d3: je 0x4381dc */ if (fZ) goto L_004381dc;
L_004381d5:; BB(0x004381d5);
    /* 004381d5: mov eax, 1 */ r_eax = 0x1u;
    /* 004381da: jmp 0x4381de */ goto L_004381de;
L_004381dc:; BB(0x004381dc);
    /* 004381dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004381de:; BB(0x004381de);
    /* 004381de: mov esp, ebp */ r_esp = r_ebp;
    /* 004381e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004381e1: ret  */ FN_RET(0x0043811d); r_esp += 4; return;
}

void f_004381e2(void) /* FUN_004381e2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004381e2);
    /* 004381e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004381e3: mov ebp, esp */ r_ebp = r_esp;
    /* 004381e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004381e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004381e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004381ec: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x4381f1u); f_0043a8b5();
    /* 004381f1: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004381f3: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004381f5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004381f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004381f9: jne 0x43820e */ if (!fZ) goto L_0043820e;
L_004381fb:; BB(0x004381fb);
    /* 004381fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004381fe: cmp dword ptr [eax + 0x1ec], 0 */ {  u32 a = R32((u32)(r_eax+0x1ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438205: jne 0x43820e */ if (!fZ) goto L_0043820e;
L_00438207:; BB(0x00438207);
    /* 00438207: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438209: jmp 0x4382e8 */ goto L_004382e8;
L_0043820e:; BB(0x0043820e);
    /* 0043820e: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00438210: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438213: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438218u); f_0043c7a1();
    /* 00438218: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043821a: je 0x438234 */ if (fZ) goto L_00438234;
L_0043821c:; BB(0x0043821c);
    /* 0043821c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043821e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438221: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438226u); f_0043c77e();
    /* 00438226: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438228: je 0x438234 */ if (fZ) goto L_00438234;
L_0043822a:; BB(0x0043822a);
    /* 0043822a: mov eax, 1 */ r_eax = 0x1u;
    /* 0043822f: jmp 0x4382e8 */ goto L_004382e8;
L_00438234:; BB(0x00438234);
    /* 00438234: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00438236: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438239: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43823eu); f_0043c7a1();
    /* 0043823e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438240: je 0x43825a */ if (fZ) goto L_0043825a;
L_00438242:; BB(0x00438242);
    /* 00438242: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00438244: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438247: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43824cu); f_0043c77e();
    /* 0043824c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043824e: je 0x43825a */ if (fZ) goto L_0043825a;
L_00438250:; BB(0x00438250);
    /* 00438250: mov eax, 1 */ r_eax = 0x1u;
    /* 00438255: jmp 0x4382e8 */ goto L_004382e8;
L_0043825a:; BB(0x0043825a);
    /* 0043825a: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 0043825c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043825f: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438264u); f_0043c7a1();
    /* 00438264: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438266: je 0x43827d */ if (fZ) goto L_0043827d;
L_00438268:; BB(0x00438268);
    /* 00438268: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043826a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043826d: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438272u); f_0043c77e();
    /* 00438272: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438274: je 0x43827d */ if (fZ) goto L_0043827d;
L_00438276:; BB(0x00438276);
    /* 00438276: mov eax, 1 */ r_eax = 0x1u;
    /* 0043827b: jmp 0x4382e8 */ goto L_004382e8;
L_0043827d:; BB(0x0043827d);
    /* 0043827d: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 0043827f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438282: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438287u); f_0043c7a1();
    /* 00438287: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438289: je 0x4382a0 */ if (fZ) goto L_004382a0;
L_0043828b:; BB(0x0043828b);
    /* 0043828b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043828d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438290: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438295u); f_0043c77e();
    /* 00438295: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438297: je 0x4382a0 */ if (fZ) goto L_004382a0;
L_00438299:; BB(0x00438299);
    /* 00438299: mov eax, 1 */ r_eax = 0x1u;
    /* 0043829e: jmp 0x4382e8 */ goto L_004382e8;
L_004382a0:; BB(0x004382a0);
    /* 004382a0: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 004382a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004382a5: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4382aau); f_0043c7a1();
    /* 004382aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004382ac: je 0x4382c3 */ if (fZ) goto L_004382c3;
L_004382ae:; BB(0x004382ae);
    /* 004382ae: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004382b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004382b3: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x4382b8u); f_0043c77e();
    /* 004382b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004382ba: je 0x4382c3 */ if (fZ) goto L_004382c3;
L_004382bc:; BB(0x004382bc);
    /* 004382bc: mov eax, 1 */ r_eax = 0x1u;
    /* 004382c1: jmp 0x4382e8 */ goto L_004382e8;
L_004382c3:; BB(0x004382c3);
    /* 004382c3: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004382c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004382c8: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4382cdu); f_0043c7a1();
    /* 004382cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004382cf: je 0x4382e6 */ if (fZ) goto L_004382e6;
L_004382d1:; BB(0x004382d1);
    /* 004382d1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004382d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004382d6: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x4382dbu); f_0043c77e();
    /* 004382db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004382dd: je 0x4382e6 */ if (fZ) goto L_004382e6;
L_004382df:; BB(0x004382df);
    /* 004382df: mov eax, 1 */ r_eax = 0x1u;
    /* 004382e4: jmp 0x4382e8 */ goto L_004382e8;
L_004382e6:; BB(0x004382e6);
    /* 004382e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004382e8:; BB(0x004382e8);
    /* 004382e8: mov esp, ebp */ r_esp = r_ebp;
    /* 004382ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004382eb: ret  */ FN_RET(0x004381e2); r_esp += 4; return;
}

void f_004382ec(void) /* FUN_004382ec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004382ec);
    /* 004382ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004382ed: mov ebp, esp */ r_ebp = r_esp;
    /* 004382ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004382f0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004382f3: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004382f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004382f8: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x4382fdu); f_0043c819();
    /* 004382fd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438300: jne 0x43831a */ if (!fZ) goto L_0043831a;
L_00438302:; BB(0x00438302);
    /* 00438302: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00438304: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438307: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43830cu); f_0043c77e();
    /* 0043830c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043830e: je 0x43831a */ if (fZ) goto L_0043831a;
L_00438310:; BB(0x00438310);
    /* 00438310: mov eax, 1 */ r_eax = 0x1u;
    /* 00438315: jmp 0x4383d3 */ goto L_004383d3;
L_0043831a:; BB(0x0043831a);
    /* 0043831a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0043831c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043831f: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x438324u); f_0043c819();
    /* 00438324: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438327: jne 0x438341 */ if (!fZ) goto L_00438341;
L_00438329:; BB(0x00438329);
    /* 00438329: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043832b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043832e: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438333u); f_0043c77e();
    /* 00438333: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438335: je 0x438341 */ if (fZ) goto L_00438341;
L_00438337:; BB(0x00438337);
    /* 00438337: mov eax, 1 */ r_eax = 0x1u;
    /* 0043833c: jmp 0x4383d3 */ goto L_004383d3;
L_00438341:; BB(0x00438341);
    /* 00438341: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00438343: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438346: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x43834bu); f_0043c819();
    /* 0043834b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043834e: jne 0x438365 */ if (!fZ) goto L_00438365;
L_00438350:; BB(0x00438350);
    /* 00438350: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00438352: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438355: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43835au); f_0043c77e();
    /* 0043835a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043835c: je 0x438365 */ if (fZ) goto L_00438365;
L_0043835e:; BB(0x0043835e);
    /* 0043835e: mov eax, 1 */ r_eax = 0x1u;
    /* 00438363: jmp 0x4383d3 */ goto L_004383d3;
L_00438365:; BB(0x00438365);
    /* 00438365: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00438367: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043836a: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x43836fu); f_0043c819();
    /* 0043836f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438372: jne 0x438389 */ if (!fZ) goto L_00438389;
L_00438374:; BB(0x00438374);
    /* 00438374: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00438376: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438379: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43837eu); f_0043c77e();
    /* 0043837e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438380: je 0x438389 */ if (fZ) goto L_00438389;
L_00438382:; BB(0x00438382);
    /* 00438382: mov eax, 1 */ r_eax = 0x1u;
    /* 00438387: jmp 0x4383d3 */ goto L_004383d3;
L_00438389:; BB(0x00438389);
    /* 00438389: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0043838b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043838e: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x438393u); f_0043c819();
    /* 00438393: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438396: jne 0x4383ad */ if (!fZ) goto L_004383ad;
L_00438398:; BB(0x00438398);
    /* 00438398: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0043839a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043839d: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x4383a2u); f_0043c77e();
    /* 004383a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004383a4: je 0x4383ad */ if (fZ) goto L_004383ad;
L_004383a6:; BB(0x004383a6);
    /* 004383a6: mov eax, 1 */ r_eax = 0x1u;
    /* 004383ab: jmp 0x4383d3 */ goto L_004383d3;
L_004383ad:; BB(0x004383ad);
    /* 004383ad: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004383af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004383b2: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x4383b7u); f_0043c819();
    /* 004383b7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004383ba: jne 0x4383d1 */ if (!fZ) goto L_004383d1;
L_004383bc:; BB(0x004383bc);
    /* 004383bc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004383be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004383c1: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x4383c6u); f_0043c77e();
    /* 004383c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004383c8: je 0x4383d1 */ if (fZ) goto L_004383d1;
L_004383ca:; BB(0x004383ca);
    /* 004383ca: mov eax, 1 */ r_eax = 0x1u;
    /* 004383cf: jmp 0x4383d3 */ goto L_004383d3;
L_004383d1:; BB(0x004383d1);
    /* 004383d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004383d3:; BB(0x004383d3);
    /* 004383d3: mov esp, ebp */ r_esp = r_ebp;
    /* 004383d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004383d6: ret  */ FN_RET(0x004382ec); r_esp += 4; return;
}

void f_004383d7(void) /* FUN_004383d7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004383d7);
    /* 004383d7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004383d8: mov ebp, esp */ r_ebp = r_esp;
    /* 004383da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004383db: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004383de: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004383e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004383e3: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x4383e8u); f_0043c819();
    /* 004383e8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004383eb: jle 0x438405 */ if ((fZ||fS!=fO)) goto L_00438405;
L_004383ed:; BB(0x004383ed);
    /* 004383ed: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004383ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004383f2: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x4383f7u); f_0043c77e();
    /* 004383f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004383f9: je 0x438405 */ if (fZ) goto L_00438405;
L_004383fb:; BB(0x004383fb);
    /* 004383fb: mov eax, 1 */ r_eax = 0x1u;
    /* 00438400: jmp 0x4384be */ goto L_004384be;
L_00438405:; BB(0x00438405);
    /* 00438405: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00438407: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043840a: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x43840fu); f_0043c819();
    /* 0043840f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00438412: jle 0x43842c */ if ((fZ||fS!=fO)) goto L_0043842c;
L_00438414:; BB(0x00438414);
    /* 00438414: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00438416: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438419: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43841eu); f_0043c77e();
    /* 0043841e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438420: je 0x43842c */ if (fZ) goto L_0043842c;
L_00438422:; BB(0x00438422);
    /* 00438422: mov eax, 1 */ r_eax = 0x1u;
    /* 00438427: jmp 0x4384be */ goto L_004384be;
L_0043842c:; BB(0x0043842c);
    /* 0043842c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0043842e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438431: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x438436u); f_0043c819();
    /* 00438436: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00438439: jle 0x438450 */ if ((fZ||fS!=fO)) goto L_00438450;
L_0043843b:; BB(0x0043843b);
    /* 0043843b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043843d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438440: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438445u); f_0043c77e();
    /* 00438445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438447: je 0x438450 */ if (fZ) goto L_00438450;
L_00438449:; BB(0x00438449);
    /* 00438449: mov eax, 1 */ r_eax = 0x1u;
    /* 0043844e: jmp 0x4384be */ goto L_004384be;
L_00438450:; BB(0x00438450);
    /* 00438450: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00438452: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438455: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x43845au); f_0043c819();
    /* 0043845a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043845d: jle 0x438474 */ if ((fZ||fS!=fO)) goto L_00438474;
L_0043845f:; BB(0x0043845f);
    /* 0043845f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00438461: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438464: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438469u); f_0043c77e();
    /* 00438469: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043846b: je 0x438474 */ if (fZ) goto L_00438474;
L_0043846d:; BB(0x0043846d);
    /* 0043846d: mov eax, 1 */ r_eax = 0x1u;
    /* 00438472: jmp 0x4384be */ goto L_004384be;
L_00438474:; BB(0x00438474);
    /* 00438474: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00438476: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438479: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x43847eu); f_0043c819();
    /* 0043847e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00438481: jle 0x438498 */ if ((fZ||fS!=fO)) goto L_00438498;
L_00438483:; BB(0x00438483);
    /* 00438483: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00438485: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438488: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43848du); f_0043c77e();
    /* 0043848d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043848f: je 0x438498 */ if (fZ) goto L_00438498;
L_00438491:; BB(0x00438491);
    /* 00438491: mov eax, 1 */ r_eax = 0x1u;
    /* 00438496: jmp 0x4384be */ goto L_004384be;
L_00438498:; BB(0x00438498);
    /* 00438498: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0043849a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043849d: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x4384a2u); f_0043c819();
    /* 004384a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004384a5: jle 0x4384bc */ if ((fZ||fS!=fO)) goto L_004384bc;
L_004384a7:; BB(0x004384a7);
    /* 004384a7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004384a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004384ac: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x4384b1u); f_0043c77e();
    /* 004384b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004384b3: je 0x4384bc */ if (fZ) goto L_004384bc;
L_004384b5:; BB(0x004384b5);
    /* 004384b5: mov eax, 1 */ r_eax = 0x1u;
    /* 004384ba: jmp 0x4384be */ goto L_004384be;
L_004384bc:; BB(0x004384bc);
    /* 004384bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004384be:; BB(0x004384be);
    /* 004384be: mov esp, ebp */ r_esp = r_ebp;
    /* 004384c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004384c1: ret  */ FN_RET(0x004383d7); r_esp += 4; return;
}

void f_004384c2(void) /* FUN_004384c2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004384c2);
    /* 004384c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004384c3: mov ebp, esp */ r_ebp = r_esp;
    /* 004384c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004384c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004384c9: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004384cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004384ce: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4384d3u); f_0043c7a1();
    /* 004384d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004384d5: jne 0x43851d */ if (!fZ) goto L_0043851d;
L_004384d7:; BB(0x004384d7);
    /* 004384d7: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004384d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004384dc: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4384e1u); f_0043c7a1();
    /* 004384e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004384e3: jne 0x43851d */ if (!fZ) goto L_0043851d;
L_004384e5:; BB(0x004384e5);
    /* 004384e5: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004384e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004384ea: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4384efu); f_0043c7a1();
    /* 004384ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004384f1: jne 0x43851d */ if (!fZ) goto L_0043851d;
L_004384f3:; BB(0x004384f3);
    /* 004384f3: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004384f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004384f8: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4384fdu); f_0043c7a1();
    /* 004384fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004384ff: jne 0x43851d */ if (!fZ) goto L_0043851d;
L_00438501:; BB(0x00438501);
    /* 00438501: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00438503: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438506: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43850bu); f_0043c7a1();
    /* 0043850b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043850d: jne 0x43851d */ if (!fZ) goto L_0043851d;
L_0043850f:; BB(0x0043850f);
    /* 0043850f: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00438511: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438514: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438519u); f_0043c7a1();
    /* 00438519: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043851b: je 0x438527 */ if (fZ) goto L_00438527;
L_0043851d:; BB(0x0043851d);
    /* 0043851d: mov eax, 1 */ r_eax = 0x1u;
    /* 00438522: jmp 0x4385df */ goto L_004385df;
L_00438527:; BB(0x00438527);
    /* 00438527: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00438529: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043852c: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438531u); f_0043c7a1();
    /* 00438531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438533: jne 0x43857b */ if (!fZ) goto L_0043857b;
L_00438535:; BB(0x00438535);
    /* 00438535: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00438537: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043853a: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43853fu); f_0043c7a1();
    /* 0043853f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438541: jne 0x43857b */ if (!fZ) goto L_0043857b;
L_00438543:; BB(0x00438543);
    /* 00438543: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00438545: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438548: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43854du); f_0043c7a1();
    /* 0043854d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043854f: jne 0x43857b */ if (!fZ) goto L_0043857b;
L_00438551:; BB(0x00438551);
    /* 00438551: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00438553: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438556: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43855bu); f_0043c7a1();
    /* 0043855b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043855d: jne 0x43857b */ if (!fZ) goto L_0043857b;
L_0043855f:; BB(0x0043855f);
    /* 0043855f: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00438561: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438564: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438569u); f_0043c7a1();
    /* 00438569: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043856b: jne 0x43857b */ if (!fZ) goto L_0043857b;
L_0043856d:; BB(0x0043856d);
    /* 0043856d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0043856f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438572: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438577u); f_0043c7a1();
    /* 00438577: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438579: je 0x438582 */ if (fZ) goto L_00438582;
L_0043857b:; BB(0x0043857b);
    /* 0043857b: mov eax, 1 */ r_eax = 0x1u;
    /* 00438580: jmp 0x4385df */ goto L_004385df;
L_00438582:; BB(0x00438582);
    /* 00438582: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00438584: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438587: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43858cu); f_0043c7a1();
    /* 0043858c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043858e: jne 0x4385d6 */ if (!fZ) goto L_004385d6;
L_00438590:; BB(0x00438590);
    /* 00438590: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00438592: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438595: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43859au); f_0043c7a1();
    /* 0043859a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043859c: jne 0x4385d6 */ if (!fZ) goto L_004385d6;
L_0043859e:; BB(0x0043859e);
    /* 0043859e: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 004385a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004385a3: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4385a8u); f_0043c7a1();
    /* 004385a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004385aa: jne 0x4385d6 */ if (!fZ) goto L_004385d6;
L_004385ac:; BB(0x004385ac);
    /* 004385ac: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 004385ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004385b1: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4385b6u); f_0043c7a1();
    /* 004385b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004385b8: jne 0x4385d6 */ if (!fZ) goto L_004385d6;
L_004385ba:; BB(0x004385ba);
    /* 004385ba: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 004385bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004385bf: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4385c4u); f_0043c7a1();
    /* 004385c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004385c6: jne 0x4385d6 */ if (!fZ) goto L_004385d6;
L_004385c8:; BB(0x004385c8);
    /* 004385c8: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004385ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004385cd: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4385d2u); f_0043c7a1();
    /* 004385d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004385d4: je 0x4385dd */ if (fZ) goto L_004385dd;
L_004385d6:; BB(0x004385d6);
    /* 004385d6: mov eax, 1 */ r_eax = 0x1u;
    /* 004385db: jmp 0x4385df */ goto L_004385df;
L_004385dd:; BB(0x004385dd);
    /* 004385dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004385df:; BB(0x004385df);
    /* 004385df: mov esp, ebp */ r_esp = r_ebp;
    /* 004385e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004385e2: ret  */ FN_RET(0x004384c2); r_esp += 4; return;
}

void f_004385e3(void) /* FUN_004385e3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004385e3);
    /* 004385e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004385e4: mov ebp, esp */ r_ebp = r_esp;
    /* 004385e6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004385e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004385ea: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004385ed: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004385f4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004385f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004385f9: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x4385feu); f_0043c77e();
    /* 004385fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438600: jne 0x438606 */ if (!fZ) goto L_00438606;
L_00438602:; BB(0x00438602);
    /* 00438602: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438604: jmp 0x438660 */ goto L_00438660;
L_00438606:; BB(0x00438606);
    /* 00438606: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00438608: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043860b: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x438610u); f_0043c819();
    /* 00438610: mov esi, eax */ r_esi = r_eax;
    /* 00438612: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00438614: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438617: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x43861cu); f_0043c819();
    /* 0043861c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043861e: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00438620: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438623: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x438628u); f_0043c819();
    /* 00438628: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043862a: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0043862c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043862f: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x438634u); f_0043c819();
    /* 00438634: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00438636: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00438638: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043863b: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x438640u); f_0043c819();
    /* 00438640: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00438642: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00438644: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438647: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x43864cu); f_0043c819();
    /* 0043864c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043864e: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00438651: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438655: jne 0x43865e */ if (!fZ) goto L_0043865e;
L_00438657:; BB(0x00438657);
    /* 00438657: mov eax, 1 */ r_eax = 0x1u;
    /* 0043865c: jmp 0x438660 */ goto L_00438660;
L_0043865e:; BB(0x0043865e);
    /* 0043865e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00438660:; BB(0x00438660);
    /* 00438660: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00438661: mov esp, ebp */ r_esp = r_ebp;
    /* 00438663: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438664: ret  */ FN_RET(0x004385e3); r_esp += 4; return;
}

void f_00438665(void) /* FUN_00438665 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438665);
    /* 00438665: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438666: mov ebp, esp */ r_ebp = r_esp;
    /* 00438668: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043866b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043866c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043866f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00438676: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00438678: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043867b: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438680u); f_0043c77e();
    /* 00438680: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438682: jne 0x438688 */ if (!fZ) goto L_00438688;
L_00438684:; BB(0x00438684);
    /* 00438684: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438686: jmp 0x4386e2 */ goto L_004386e2;
L_00438688:; BB(0x00438688);
    /* 00438688: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043868a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043868d: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x438692u); f_0043c819();
    /* 00438692: mov esi, eax */ r_esi = r_eax;
    /* 00438694: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00438696: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438699: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x43869eu); f_0043c819();
    /* 0043869e: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004386a0: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004386a2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004386a5: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x4386aau); f_0043c819();
    /* 004386aa: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004386ac: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 004386ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004386b1: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x4386b6u); f_0043c819();
    /* 004386b6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004386b8: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004386ba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004386bd: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x4386c2u); f_0043c819();
    /* 004386c2: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004386c4: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004386c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004386c9: call 0x43c819 */ r_esp -= 4; W32(r_esp, 0x4386ceu); f_0043c819();
    /* 004386ce: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004386d0: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 004386d3: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004386d7: jle 0x4386e0 */ if ((fZ||fS!=fO)) goto L_004386e0;
L_004386d9:; BB(0x004386d9);
    /* 004386d9: mov eax, 1 */ r_eax = 0x1u;
    /* 004386de: jmp 0x4386e2 */ goto L_004386e2;
L_004386e0:; BB(0x004386e0);
    /* 004386e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004386e2:; BB(0x004386e2);
    /* 004386e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004386e3: mov esp, ebp */ r_esp = r_ebp;
    /* 004386e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004386e6: ret  */ FN_RET(0x00438665); r_esp += 4; return;
}

void f_004386e7(void) /* FUN_004386e7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004386e7);
    /* 004386e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004386e8: mov ebp, esp */ r_ebp = r_esp;
    /* 004386ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004386eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004386ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004386f1: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x4386f6u); f_0043a8b5();
    /* 004386f6: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004386f8: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004386fa: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004386fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004386fe: jne 0x438713 */ if (!fZ) goto L_00438713;
L_00438700:; BB(0x00438700);
    /* 00438700: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438703: cmp dword ptr [eax + 0x1ec], 0 */ {  u32 a = R32((u32)(r_eax+0x1ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043870a: jne 0x438713 */ if (!fZ) goto L_00438713;
L_0043870c:; BB(0x0043870c);
    /* 0043870c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043870e: jmp 0x4387a8 */ goto L_004387a8;
L_00438713:; BB(0x00438713);
    /* 00438713: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00438715: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438718: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43871du); f_0043c77e();
    /* 0043871d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043871f: jne 0x438728 */ if (!fZ) goto L_00438728;
L_00438721:; BB(0x00438721);
    /* 00438721: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438723: jmp 0x4387a8 */ goto L_004387a8;
L_00438728:; BB(0x00438728);
    /* 00438728: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0043872a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043872d: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438732u); f_0043c7a1();
    /* 00438732: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438734: je 0x43873d */ if (fZ) goto L_0043873d;
L_00438736:; BB(0x00438736);
    /* 00438736: mov eax, 1 */ r_eax = 0x1u;
    /* 0043873b: jmp 0x4387a8 */ goto L_004387a8;
L_0043873d:; BB(0x0043873d);
    /* 0043873d: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043873f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438742: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438747u); f_0043c7a1();
    /* 00438747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438749: je 0x438752 */ if (fZ) goto L_00438752;
L_0043874b:; BB(0x0043874b);
    /* 0043874b: mov eax, 1 */ r_eax = 0x1u;
    /* 00438750: jmp 0x4387a8 */ goto L_004387a8;
L_00438752:; BB(0x00438752);
    /* 00438752: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00438754: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438757: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43875cu); f_0043c7a1();
    /* 0043875c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043875e: je 0x438767 */ if (fZ) goto L_00438767;
L_00438760:; BB(0x00438760);
    /* 00438760: mov eax, 1 */ r_eax = 0x1u;
    /* 00438765: jmp 0x4387a8 */ goto L_004387a8;
L_00438767:; BB(0x00438767);
    /* 00438767: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00438769: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043876c: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438771u); f_0043c7a1();
    /* 00438771: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438773: je 0x43877c */ if (fZ) goto L_0043877c;
L_00438775:; BB(0x00438775);
    /* 00438775: mov eax, 1 */ r_eax = 0x1u;
    /* 0043877a: jmp 0x4387a8 */ goto L_004387a8;
L_0043877c:; BB(0x0043877c);
    /* 0043877c: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0043877e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438781: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438786u); f_0043c7a1();
    /* 00438786: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438788: je 0x438791 */ if (fZ) goto L_00438791;
L_0043878a:; BB(0x0043878a);
    /* 0043878a: mov eax, 1 */ r_eax = 0x1u;
    /* 0043878f: jmp 0x4387a8 */ goto L_004387a8;
L_00438791:; BB(0x00438791);
    /* 00438791: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00438793: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438796: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43879bu); f_0043c7a1();
    /* 0043879b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043879d: je 0x4387a6 */ if (fZ) goto L_004387a6;
L_0043879f:; BB(0x0043879f);
    /* 0043879f: mov eax, 1 */ r_eax = 0x1u;
    /* 004387a4: jmp 0x4387a8 */ goto L_004387a8;
L_004387a6:; BB(0x004387a6);
    /* 004387a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004387a8:; BB(0x004387a8);
    /* 004387a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004387aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004387ab: ret  */ FN_RET(0x004386e7); r_esp += 4; return;
}

void f_004387ac(void) /* FUN_004387ac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004387ac);
    /* 004387ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004387ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004387af: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004387b5: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 004387bb: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 004387c5: mov dword ptr [ebp - 0x84], 4 */ W32((u32)(r_ebp+0xffffff7cu), 0x4u);
    /* 004387cf: mov dword ptr [ebp - 0x80], 6 */ W32((u32)(r_ebp+0xffffff80u), 0x6u);
    /* 004387d6: mov dword ptr [ebp - 0x7c], 7 */ W32((u32)(r_ebp+0xffffff84u), 0x7u);
    /* 004387dd: mov dword ptr [ebp - 0x78], 8 */ W32((u32)(r_ebp+0xffffff88u), 0x8u);
    /* 004387e4: mov dword ptr [ebp - 0x74], 9 */ W32((u32)(r_ebp+0xffffff8cu), 0x9u);
    /* 004387eb: mov dword ptr [ebp - 0x70], 0xa */ W32((u32)(r_ebp+0xffffff90u), 0xau);
    /* 004387f2: mov dword ptr [ebp - 0x6c], 0xb */ W32((u32)(r_ebp+0xffffff94u), 0xbu);
    /* 004387f9: mov dword ptr [ebp - 0x68], 0xc */ W32((u32)(r_ebp+0xffffff98u), 0xcu);
    /* 00438800: mov dword ptr [ebp - 0x64], 0xd */ W32((u32)(r_ebp+0xffffff9cu), 0xdu);
    /* 00438807: mov dword ptr [ebp - 0x60], 0xe */ W32((u32)(r_ebp+0xffffffa0u), 0xeu);
    /* 0043880e: mov dword ptr [ebp - 0x5c], 0xf */ W32((u32)(r_ebp+0xffffffa4u), 0xfu);
    /* 00438815: mov dword ptr [ebp - 0x58], 0x10 */ W32((u32)(r_ebp+0xffffffa8u), 0x10u);
    /* 0043881c: mov dword ptr [ebp - 0x54], 0x11 */ W32((u32)(r_ebp+0xffffffacu), 0x11u);
    /* 00438823: mov dword ptr [ebp - 0x50], 0x12 */ W32((u32)(r_ebp+0xffffffb0u), 0x12u);
    /* 0043882a: mov dword ptr [ebp - 0x4c], 0x13 */ W32((u32)(r_ebp+0xffffffb4u), 0x13u);
    /* 00438831: mov dword ptr [ebp - 0x48], 0x14 */ W32((u32)(r_ebp+0xffffffb8u), 0x14u);
    /* 00438838: mov dword ptr [ebp - 0x44], 0x15 */ W32((u32)(r_ebp+0xffffffbcu), 0x15u);
    /* 0043883f: mov dword ptr [ebp - 0x40], 0x16 */ W32((u32)(r_ebp+0xffffffc0u), 0x16u);
    /* 00438846: mov dword ptr [ebp - 0x3c], 0x17 */ W32((u32)(r_ebp+0xffffffc4u), 0x17u);
    /* 0043884d: mov dword ptr [ebp - 0x38], 0x18 */ W32((u32)(r_ebp+0xffffffc8u), 0x18u);
    /* 00438854: mov dword ptr [ebp - 0x34], 0x2b */ W32((u32)(r_ebp+0xffffffccu), 0x2bu);
    /* 0043885b: mov dword ptr [ebp - 0x30], 0x2c */ W32((u32)(r_ebp+0xffffffd0u), 0x2cu);
    /* 00438862: mov dword ptr [ebp - 0x2c], 0x2d */ W32((u32)(r_ebp+0xffffffd4u), 0x2du);
    /* 00438869: mov dword ptr [ebp - 0x28], 0x2e */ W32((u32)(r_ebp+0xffffffd8u), 0x2eu);
    /* 00438870: mov dword ptr [ebp - 0x24], 0x2f */ W32((u32)(r_ebp+0xffffffdcu), 0x2fu);
    /* 00438877: mov dword ptr [ebp - 0x20], 0x30 */ W32((u32)(r_ebp+0xffffffe0u), 0x30u);
    /* 0043887e: mov dword ptr [ebp - 0x1c], 0x37 */ W32((u32)(r_ebp+0xffffffe4u), 0x37u);
    /* 00438885: mov dword ptr [ebp - 0x18], 0x38 */ W32((u32)(r_ebp+0xffffffe8u), 0x38u);
    /* 0043888c: mov dword ptr [ebp - 0x14], 0x39 */ W32((u32)(r_ebp+0xffffffecu), 0x39u);
    /* 00438893: mov dword ptr [ebp - 0x10], 0x3a */ W32((u32)(r_ebp+0xfffffff0u), 0x3au);
    /* 0043889a: mov dword ptr [ebp - 0xc], 0x3b */ W32((u32)(r_ebp+0xfffffff4u), 0x3bu);
    /* 004388a1: mov dword ptr [ebp - 8], 0x3c */ W32((u32)(r_ebp+0xfffffff8u), 0x3cu);
    /* 004388a8: mov dword ptr [ebp - 4], 0x43 */ W32((u32)(r_ebp+0xfffffffcu), 0x43u);
    /* 004388af: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 004388b9: jmp 0x4388ca */ goto L_004388ca;
L_004388bb:; BB(0x004388bb);
    /* 004388bb: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 004388c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004388c4: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
L_004388ca:; BB(0x004388ca);
    /* 004388ca: cmp dword ptr [ebp - 0x8c], 0x22 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004388d1: jge 0x43890b */ if ((fS==fO)) goto L_0043890b;
L_004388d3:; BB(0x004388d3);
    /* 004388d3: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 004388d9: mov edx, dword ptr [ebp + ecx*4 - 0x88] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff78u));
    /* 004388e0: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004388e3: je 0x438909 */ if (fZ) goto L_00438909;
L_004388e5:; BB(0x004388e5);
    /* 004388e5: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 004388eb: mov ecx, dword ptr [ebp + eax*4 - 0x88] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff78u));
    /* 004388f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004388f3: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 004388f9: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4388feu); f_0043c7a1();
    /* 004388fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438900: je 0x438909 */ if (fZ) goto L_00438909;
L_00438902:; BB(0x00438902);
    /* 00438902: mov eax, 1 */ r_eax = 0x1u;
    /* 00438907: jmp 0x43890d */ goto L_0043890d;
L_00438909:; BB(0x00438909);
    /* 00438909: jmp 0x4388bb */ goto L_004388bb;
L_0043890b:; BB(0x0043890b);
    /* 0043890b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043890d:; BB(0x0043890d);
    /* 0043890d: mov esp, ebp */ r_esp = r_ebp;
    /* 0043890f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438910: ret 4 */ FN_RET(0x004387ac); r_esp += 8; return;
}

void f_00438913(void) /* FUN_00438913 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438913);
    /* 00438913: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438914: mov ebp, esp */ r_ebp = r_esp;
    /* 00438916: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438917: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043891a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043891d: call 0x43ca9d */ r_esp -= 4; W32(r_esp, 0x438922u); f_0043ca9d();
    /* 00438922: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438924: jne 0x43892a */ if (!fZ) goto L_0043892a;
L_00438926:; BB(0x00438926);
    /* 00438926: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438928: jmp 0x438973 */ goto L_00438973;
L_0043892a:; BB(0x0043892a);
    /* 0043892a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043892d: call 0x4384c2 */ r_esp -= 4; W32(r_esp, 0x438932u); f_004384c2();
    /* 00438932: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438934: je 0x43893a */ if (fZ) goto L_0043893a;
L_00438936:; BB(0x00438936);
    /* 00438936: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438938: jmp 0x438973 */ goto L_00438973;
L_0043893a:; BB(0x0043893a);
    /* 0043893a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043893d: call 0x4386e7 */ r_esp -= 4; W32(r_esp, 0x438942u); f_004386e7();
    /* 00438942: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438944: jne 0x43896a */ if (!fZ) goto L_0043896a;
L_00438946:; BB(0x00438946);
    /* 00438946: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438949: call 0x43811d */ r_esp -= 4; W32(r_esp, 0x43894eu); f_0043811d();
    /* 0043894e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438950: jne 0x43896a */ if (!fZ) goto L_0043896a;
L_00438952:; BB(0x00438952);
    /* 00438952: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438955: call 0x4385e3 */ r_esp -= 4; W32(r_esp, 0x43895au); f_004385e3();
    /* 0043895a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043895c: jne 0x43896a */ if (!fZ) goto L_0043896a;
L_0043895e:; BB(0x0043895e);
    /* 0043895e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438961: call 0x438665 */ r_esp -= 4; W32(r_esp, 0x438966u); f_00438665();
    /* 00438966: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438968: je 0x438971 */ if (fZ) goto L_00438971;
L_0043896a:; BB(0x0043896a);
    /* 0043896a: mov eax, 1 */ r_eax = 0x1u;
    /* 0043896f: jmp 0x438973 */ goto L_00438973;
L_00438971:; BB(0x00438971);
    /* 00438971: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00438973:; BB(0x00438973);
    /* 00438973: mov esp, ebp */ r_esp = r_ebp;
    /* 00438975: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438976: ret  */ FN_RET(0x00438913); r_esp += 4; return;
}

void f_00438977(void) /* FUN_00438977 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438977);
    /* 00438977: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438978: mov ebp, esp */ r_ebp = r_esp;
    /* 0043897a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043897d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00438980: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438983: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x438988u); f_0043a8b5();
    /* 00438988: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0043898a: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0043898c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043898e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438990: jne 0x4389a0 */ if (!fZ) goto L_004389a0;
L_00438992:; BB(0x00438992);
    /* 00438992: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00438994: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438997: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43899cu); f_0043c77e();
    /* 0043899c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043899e: jne 0x4389a7 */ if (!fZ) goto L_004389a7;
L_004389a0:; BB(0x004389a0);
    /* 004389a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004389a2: jmp 0x438a47 */ goto L_00438a47;
L_004389a7:; BB(0x004389a7);
    /* 004389a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004389a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004389ac: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4389b1u); f_0043c7a1();
    /* 004389b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004389b3: je 0x4389bc */ if (fZ) goto L_004389bc;
L_004389b5:; BB(0x004389b5);
    /* 004389b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004389b7: jmp 0x438a47 */ goto L_00438a47;
L_004389bc:; BB(0x004389bc);
    /* 004389bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004389bf: call 0x437e0b */ r_esp -= 4; W32(r_esp, 0x4389c4u); f_00437e0b();
    /* 004389c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004389c6: jne 0x438a3e */ if (!fZ) goto L_00438a3e;
L_004389c8:; BB(0x004389c8);
    /* 004389c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004389cb: call 0x437ec9 */ r_esp -= 4; W32(r_esp, 0x4389d0u); f_00437ec9();
    /* 004389d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004389d2: jne 0x438a3e */ if (!fZ) goto L_00438a3e;
L_004389d4:; BB(0x004389d4);
    /* 004389d4: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004389d6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004389d9: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4389deu); f_0043c7a1();
    /* 004389de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004389e0: je 0x438a23 */ if (fZ) goto L_00438a23;
L_004389e2:; BB(0x004389e2);
    /* 004389e2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004389e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004389e7: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x4389ecu); f_0043c77e();
    /* 004389ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004389ee: jne 0x438a1a */ if (!fZ) goto L_00438a1a;
L_004389f0:; BB(0x004389f0);
    /* 004389f0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004389f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004389f5: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x4389fau); f_0043c77e();
    /* 004389fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004389fc: jne 0x438a1a */ if (!fZ) goto L_00438a1a;
L_004389fe:; BB(0x004389fe);
    /* 004389fe: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00438a00: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438a03: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438a08u); f_0043c77e();
    /* 00438a08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438a0a: jne 0x438a1a */ if (!fZ) goto L_00438a1a;
L_00438a0c:; BB(0x00438a0c);
    /* 00438a0c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00438a0e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438a11: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438a16u); f_0043c77e();
    /* 00438a16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438a18: je 0x438a23 */ if (fZ) goto L_00438a23;
L_00438a1a:; BB(0x00438a1a);
    /* 00438a1a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00438a21: jmp 0x438a2a */ goto L_00438a2a;
L_00438a23:; BB(0x00438a23);
    /* 00438a23: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00438a2a:; BB(0x00438a2a);
    /* 00438a2a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438a2e: jne 0x438a3e */ if (!fZ) goto L_00438a3e;
L_00438a30:; BB(0x00438a30);
    /* 00438a30: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00438a32: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438a35: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438a3au); f_0043c7a1();
    /* 00438a3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438a3c: je 0x438a45 */ if (fZ) goto L_00438a45;
L_00438a3e:; BB(0x00438a3e);
    /* 00438a3e: mov eax, 1 */ r_eax = 0x1u;
    /* 00438a43: jmp 0x438a47 */ goto L_00438a47;
L_00438a45:; BB(0x00438a45);
    /* 00438a45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00438a47:; BB(0x00438a47);
    /* 00438a47: mov esp, ebp */ r_esp = r_ebp;
    /* 00438a49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438a4a: ret  */ FN_RET(0x00438977); r_esp += 4; return;
}

void f_00438a4b(void) /* FUN_00438a4b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438a4b);
    /* 00438a4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438a4c: mov ebp, esp */ r_ebp = r_esp;
    /* 00438a4e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438a51: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00438a54: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438a57: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x438a5cu); f_0043a8b5();
    /* 00438a5c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00438a5e: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00438a60: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00438a62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438a64: jne 0x438a74 */ if (!fZ) goto L_00438a74;
L_00438a66:; BB(0x00438a66);
    /* 00438a66: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00438a68: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438a6b: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438a70u); f_0043c77e();
    /* 00438a70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438a72: jne 0x438a7b */ if (!fZ) goto L_00438a7b;
L_00438a74:; BB(0x00438a74);
    /* 00438a74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438a76: jmp 0x438b1b */ goto L_00438b1b;
L_00438a7b:; BB(0x00438a7b);
    /* 00438a7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00438a7d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438a80: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438a85u); f_0043c7a1();
    /* 00438a85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438a87: je 0x438a90 */ if (fZ) goto L_00438a90;
L_00438a89:; BB(0x00438a89);
    /* 00438a89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438a8b: jmp 0x438b1b */ goto L_00438b1b;
L_00438a90:; BB(0x00438a90);
    /* 00438a90: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438a93: call 0x437e0b */ r_esp -= 4; W32(r_esp, 0x438a98u); f_00437e0b();
    /* 00438a98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438a9a: jne 0x438b12 */ if (!fZ) goto L_00438b12;
L_00438a9c:; BB(0x00438a9c);
    /* 00438a9c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438a9f: call 0x437ec9 */ r_esp -= 4; W32(r_esp, 0x438aa4u); f_00437ec9();
    /* 00438aa4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438aa6: jne 0x438b12 */ if (!fZ) goto L_00438b12;
L_00438aa8:; BB(0x00438aa8);
    /* 00438aa8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00438aaa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438aad: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438ab2u); f_0043c7a1();
    /* 00438ab2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ab4: je 0x438af7 */ if (fZ) goto L_00438af7;
L_00438ab6:; BB(0x00438ab6);
    /* 00438ab6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00438ab8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438abb: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438ac0u); f_0043c77e();
    /* 00438ac0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ac2: jne 0x438aee */ if (!fZ) goto L_00438aee;
L_00438ac4:; BB(0x00438ac4);
    /* 00438ac4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00438ac6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438ac9: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438aceu); f_0043c77e();
    /* 00438ace: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ad0: jne 0x438aee */ if (!fZ) goto L_00438aee;
L_00438ad2:; BB(0x00438ad2);
    /* 00438ad2: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00438ad4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438ad7: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438adcu); f_0043c77e();
    /* 00438adc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ade: jne 0x438aee */ if (!fZ) goto L_00438aee;
L_00438ae0:; BB(0x00438ae0);
    /* 00438ae0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00438ae2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438ae5: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x438aeau); f_0043c77e();
    /* 00438aea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438aec: je 0x438af7 */ if (fZ) goto L_00438af7;
L_00438aee:; BB(0x00438aee);
    /* 00438aee: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00438af5: jmp 0x438afe */ goto L_00438afe;
L_00438af7:; BB(0x00438af7);
    /* 00438af7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00438afe:; BB(0x00438afe);
    /* 00438afe: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438b02: jne 0x438b12 */ if (!fZ) goto L_00438b12;
L_00438b04:; BB(0x00438b04);
    /* 00438b04: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00438b06: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438b09: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x438b0eu); f_0043c7a1();
    /* 00438b0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438b10: je 0x438b19 */ if (fZ) goto L_00438b19;
L_00438b12:; BB(0x00438b12);
    /* 00438b12: mov eax, 1 */ r_eax = 0x1u;
    /* 00438b17: jmp 0x438b1b */ goto L_00438b1b;
L_00438b19:; BB(0x00438b19);
    /* 00438b19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00438b1b:; BB(0x00438b1b);
    /* 00438b1b: mov esp, ebp */ r_esp = r_ebp;
    /* 00438b1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438b1e: ret  */ FN_RET(0x00438a4b); r_esp += 4; return;
}

void f_00438b1f(void) /* FUN_00438b1f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438b1f);
    /* 00438b1f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438b20: mov ebp, esp */ r_ebp = r_esp;
    /* 00438b22: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438b25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00438b26: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00438b29: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00438b2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438b2d: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x438b32u); f_0060ee31();
    /* 00438b32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00438b35: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00438b38: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438b3b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00438b3e:; BB(0x00438b3e);
    /* 00438b3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438b41: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00438b44: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00438b45: idiv dword ptr [ebp + 0xc] */ { i32 d = (i32)R32((u32)(r_ebp+0xcu)); if (!d) UNSUP(0x00438b45, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00438b45, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00438b48: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00438b4b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438b4e: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438b51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438b54: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00438b57: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00438b5a: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00438b5d: add esi, dword ptr [ecx + eax + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00438b61: mov ecx, esi */ r_ecx = r_esi;
    /* 00438b63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00438b66: call dword ptr [eax + edx] */ { u32 t = R32((u32)(r_eax+r_edx)); r_esp -= 4; W32(r_esp, 0x438b69u); call_ind(t); }
    /* 00438b69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438b6b: je 0x438ba2 */ if (fZ) goto L_00438ba2;
L_00438b6d:; BB(0x00438b6d);
    /* 00438b6d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00438b6f: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00438b75: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00438b78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00438b79: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438b7c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00438b7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438b82: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438b85: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00438b88: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 00438b8b: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00438b8e: add edx, dword ptr [esi + ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ecx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00438b92: mov ecx, edx */ r_ecx = r_edx;
    /* 00438b94: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00438b97: call dword ptr [edx + eax + 0x10] */ { u32 t = R32((u32)(r_edx+r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x438b9bu); call_ind(t); }
    /* 00438b9b: mov eax, 1 */ r_eax = 0x1u;
    /* 00438ba0: jmp 0x438bac */ goto L_00438bac;
L_00438ba2:; BB(0x00438ba2);
    /* 00438ba2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438ba5: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ba8: jne 0x438b3e */ if (!fZ) goto L_00438b3e;
L_00438baa:; BB(0x00438baa);
    /* 00438baa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00438bac:; BB(0x00438bac);
    /* 00438bac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00438bad: mov esp, ebp */ r_esp = r_ebp;
    /* 00438baf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438bb0: ret 8 */ FN_RET(0x00438b1f); r_esp += 12; return;
}

void f_00438bb3(void) /* FUN_00438bb3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438bb3);
    /* 00438bb3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438bb4: mov ebp, esp */ r_ebp = r_esp;
    /* 00438bb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438bb7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438bba: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00438bbc: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00438bc1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00438bc4: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00438bca: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00438bcd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00438bcf: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x438bd2u); call_ind(t); }
    /* 00438bd2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00438bd4: push 0x6f5ff0 */ { u32 v = 0x6f5ff0u; r_esp -= 4; W32(r_esp, v); }
    /* 00438bd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438bdc: call 0x438b1f */ r_esp -= 4; W32(r_esp, 0x438be1u); f_00438b1f();
    /* 00438be1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438be3: je 0x438be7 */ if (fZ) goto L_00438be7;
L_00438be5:; BB(0x00438be5);
    /* 00438be5: jmp 0x438c14 */ goto L_00438c14;
L_00438be7:; BB(0x00438be7);
    /* 00438be7: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00438be9: push 0x6f60f0 */ { u32 v = 0x6f60f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00438bee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438bf1: call 0x438b1f */ r_esp -= 4; W32(r_esp, 0x438bf6u); f_00438b1f();
    /* 00438bf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438bf8: je 0x438bfc */ if (fZ) goto L_00438bfc;
L_00438bfa:; BB(0x00438bfa);
    /* 00438bfa: jmp 0x438c14 */ goto L_00438c14;
L_00438bfc:; BB(0x00438bfc);
    /* 00438bfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00438bfe: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00438c03: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00438c06: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00438c0c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00438c0f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00438c11: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x438c14u); call_ind(t); }
L_00438c14:; BB(0x00438c14);
    /* 00438c14: mov esp, ebp */ r_esp = r_ebp;
    /* 00438c16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438c17: ret  */ FN_RET(0x00438bb3); r_esp += 4; return;
}

void f_00438c18(void) /* FUN_00438c18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438c18);
    /* 00438c18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438c19: mov ebp, esp */ r_ebp = r_esp;
    /* 00438c1b: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438c1e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00438c1f: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00438c22: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00438c25: call 0x437295 */ r_esp -= 4; W32(r_esp, 0x438c2au); f_00437295();
    /* 00438c2a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00438c2d: call 0x437372 */ r_esp -= 4; W32(r_esp, 0x438c32u); f_00437372();
    /* 00438c32: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00438c35: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00438c37: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00438c3c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00438c3f: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00438c45: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00438c48: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00438c4a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x438c4du); call_ind(t); }
    /* 00438c4d: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438c51: jne 0x438c6f */ if (!fZ) goto L_00438c6f;
L_00438c53:; BB(0x00438c53);
    /* 00438c53: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00438c55: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00438c57: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00438c5c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00438c5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438c60: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00438c62: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00438c65: call 0x43adaa */ r_esp -= 4; W32(r_esp, 0x438c6au); f_0043adaa();
    /* 00438c6a: jmp 0x438dc2 */ goto L_00438dc2;
L_00438c6f:; BB(0x00438c6f);
    /* 00438c6f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00438c72: call 0x425d41 */ r_esp -= 4; W32(r_esp, 0x438c77u); f_00425d41();
    /* 00438c77: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00438c7a: mov dword ptr [edx + 0x134], 1 */ W32((u32)(r_edx+0x134u), 0x1u);
    /* 00438c84: mov dword ptr [ebp - 0x28], 0x53 */ W32((u32)(r_ebp+0xffffffd8u), 0x53u);
    /* 00438c8b: jmp 0x438c96 */ goto L_00438c96;
L_00438c8d:; BB(0x00438c8d);
    /* 00438c8d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00438c90: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00438c93: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00438c96:; BB(0x00438c96);
    /* 00438c96: cmp dword ptr [ebp - 0x28], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00438c9a: jle 0x438cad */ if ((fZ||fS!=fO)) goto L_00438cad;
L_00438c9c:; BB(0x00438c9c);
    /* 00438c9c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00438c9f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00438ca2: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00438ca6: call 0x4348aa */ r_esp -= 4; W32(r_esp, 0x438cabu); f_004348aa();
    /* 00438cab: jmp 0x438c8d */ goto L_00438c8d;
L_00438cad:; BB(0x00438cad);
    /* 00438cad: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00438cb0: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438cb7: jne 0x438d01 */ if (!fZ) goto L_00438d01;
L_00438cb9:; BB(0x00438cb9);
    /* 00438cb9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00438cbc: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x438cc1u); f_004259f1();
    /* 00438cc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438cc2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00438cc5: call 0x43791e */ r_esp -= 4; W32(r_esp, 0x438ccau); f_0043791e();
    /* 00438cca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ccc: jne 0x438d01 */ if (!fZ) goto L_00438d01;
L_00438cce:; BB(0x00438cce);
    /* 00438cce: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00438cd1: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x438cd6u); f_004259f1();
    /* 00438cd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438cd7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00438cda: call 0x437986 */ r_esp -= 4; W32(r_esp, 0x438cdfu); f_00437986();
    /* 00438cdf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ce1: jne 0x438d01 */ if (!fZ) goto L_00438d01;
L_00438ce3:; BB(0x00438ce3);
    /* 00438ce3: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00438ce5: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00438ceb: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00438cee: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00438cf4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00438cf7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00438cf9: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x438cfcu); call_ind(t); }
    /* 00438cfc: jmp 0x438dc2 */ goto L_00438dc2;
L_00438d01:; BB(0x00438d01);
    /* 00438d01: push 0x653380 */ { u32 v = 0x653380u; r_esp -= 4; W32(r_esp, v); }
    /* 00438d06: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00438d09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438d0a: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x438d0fu); f_00624510();
    /* 00438d0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00438d12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00438d14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00438d16: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00438d19: add ecx, 0x124 */ {  u32 a = r_ecx; u32 b = 0x124u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00438d1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438d20: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00438d23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00438d24: call 0x4298d8 */ r_esp -= 4; W32(r_esp, 0x438d29u); f_004298d8();
    /* 00438d29: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00438d2c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00438d2f: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438d36: jne 0x438d4b */ if (!fZ) goto L_00438d4b;
L_00438d38:; BB(0x00438d38);
    /* 00438d38: push 0x653384 */ { u32 v = 0x653384u; r_esp -= 4; W32(r_esp, v); }
    /* 00438d3d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00438d40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438d41: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x438d46u); f_00624510();
    /* 00438d46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00438d49: jmp 0x438d7c */ goto L_00438d7c;
L_00438d4b:; BB(0x00438d4b);
    /* 00438d4b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00438d4e: cmp dword ptr [edx + 0x124], 0 */ {  u32 a = R32((u32)(r_edx+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00438d55: jle 0x438d60 */ if ((fZ||fS!=fO)) goto L_00438d60;
L_00438d57:; BB(0x00438d57);
    /* 00438d57: mov dword ptr [ebp - 0x50], 0x65338c */ W32((u32)(r_ebp+0xffffffb0u), 0x65338cu);
    /* 00438d5e: jmp 0x438d67 */ goto L_00438d67;
L_00438d60:; BB(0x00438d60);
    /* 00438d60: mov dword ptr [ebp - 0x50], 0x653390 */ W32((u32)(r_ebp+0xffffffb0u), 0x653390u);
L_00438d67:; BB(0x00438d67);
    /* 00438d67: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00438d6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438d6b: push 0x653398 */ { u32 v = 0x653398u; r_esp -= 4; W32(r_esp, v); }
    /* 00438d70: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00438d73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438d74: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x438d79u); f_00624050();
    /* 00438d79: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00438d7c:; BB(0x00438d7c);
    /* 00438d7c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00438d7f: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x438d84u); f_004259f1();
    /* 00438d84: mov esi, eax */ r_esi = r_eax;
    /* 00438d86: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00438d89: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x438d8eu); f_0043c040();
    /* 00438d8e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438d90: jne 0x438da9 */ if (!fZ) goto L_00438da9;
L_00438d92:; BB(0x00438d92);
    /* 00438d92: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00438d95: mov ecx, dword ptr [edx + 0x198] */ r_ecx = R32((u32)(r_edx+0x198u));
    /* 00438d9b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00438d9e: mov edx, dword ptr [eax + 0x198] */ r_edx = R32((u32)(r_eax+0x198u));
    /* 00438da4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00438da6: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x438da9u); call_ind(t); }
L_00438da9:; BB(0x00438da9);
    /* 00438da9: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00438dac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438dad: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00438db0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00438db1: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00438db6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00438db9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438dba: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00438dbd: call 0x4256dd */ r_esp -= 4; W32(r_esp, 0x438dc2u); f_004256dd();
L_00438dc2:; BB(0x00438dc2);
    /* 00438dc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00438dc3: mov esp, ebp */ r_esp = r_ebp;
    /* 00438dc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438dc6: ret  */ FN_RET(0x00438c18); r_esp += 4; return;
}

void f_00438dc7(void) /* FUN_00438dc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438dc7);
    /* 00438dc7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438dc8: mov ebp, esp */ r_ebp = r_esp;
    /* 00438dca: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438dcd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438dd0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00438dd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438dd5: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438ddau); f_00435caf();
    /* 00438dda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ddc: jne 0x438e2d */ if (!fZ) goto L_00438e2d;
L_00438dde:; BB(0x00438dde);
    /* 00438dde: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00438de0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438de3: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438de8u); f_00435caf();
    /* 00438de8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438dea: jne 0x438e2d */ if (!fZ) goto L_00438e2d;
L_00438dec:; BB(0x00438dec);
    /* 00438dec: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00438dee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438df1: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438df6u); f_00435caf();
    /* 00438df6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438df8: jne 0x438e2d */ if (!fZ) goto L_00438e2d;
L_00438dfa:; BB(0x00438dfa);
    /* 00438dfa: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00438dfc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438dff: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438e04u); f_00435caf();
    /* 00438e04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438e06: jne 0x438e2d */ if (!fZ) goto L_00438e2d;
L_00438e08:; BB(0x00438e08);
    /* 00438e08: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00438e0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438e0d: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438e12u); f_00435caf();
    /* 00438e12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438e14: jne 0x438e2d */ if (!fZ) goto L_00438e2d;
L_00438e16:; BB(0x00438e16);
    /* 00438e16: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00438e18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438e1b: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438e20u); f_00435caf();
    /* 00438e20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438e22: jne 0x438e2d */ if (!fZ) goto L_00438e2d;
L_00438e24:; BB(0x00438e24);
    /* 00438e24: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00438e2b: jmp 0x438e34 */ goto L_00438e34;
L_00438e2d:; BB(0x00438e2d);
    /* 00438e2d: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00438e34:; BB(0x00438e34);
    /* 00438e34: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438e37: mov esp, ebp */ r_esp = r_ebp;
    /* 00438e39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438e3a: ret  */ FN_RET(0x00438dc7); r_esp += 4; return;
}

void f_00438e3b(void) /* FUN_00438e3b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438e3b);
    /* 00438e3b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438e3c: mov ebp, esp */ r_ebp = r_esp;
    /* 00438e3e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438e41: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438e44: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00438e46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438e49: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438e4eu); f_00435caf();
    /* 00438e4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438e50: jne 0x438ea1 */ if (!fZ) goto L_00438ea1;
L_00438e52:; BB(0x00438e52);
    /* 00438e52: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00438e54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438e57: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438e5cu); f_00435caf();
    /* 00438e5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438e5e: jne 0x438ea1 */ if (!fZ) goto L_00438ea1;
L_00438e60:; BB(0x00438e60);
    /* 00438e60: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00438e62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438e65: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438e6au); f_00435caf();
    /* 00438e6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438e6c: jne 0x438ea1 */ if (!fZ) goto L_00438ea1;
L_00438e6e:; BB(0x00438e6e);
    /* 00438e6e: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00438e70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438e73: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438e78u); f_00435caf();
    /* 00438e78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438e7a: jne 0x438ea1 */ if (!fZ) goto L_00438ea1;
L_00438e7c:; BB(0x00438e7c);
    /* 00438e7c: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00438e7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438e81: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438e86u); f_00435caf();
    /* 00438e86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438e88: jne 0x438ea1 */ if (!fZ) goto L_00438ea1;
L_00438e8a:; BB(0x00438e8a);
    /* 00438e8a: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00438e8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438e8f: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438e94u); f_00435caf();
    /* 00438e94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438e96: jne 0x438ea1 */ if (!fZ) goto L_00438ea1;
L_00438e98:; BB(0x00438e98);
    /* 00438e98: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00438e9f: jmp 0x438ea8 */ goto L_00438ea8;
L_00438ea1:; BB(0x00438ea1);
    /* 00438ea1: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00438ea8:; BB(0x00438ea8);
    /* 00438ea8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438eab: mov esp, ebp */ r_esp = r_ebp;
    /* 00438ead: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438eae: ret  */ FN_RET(0x00438e3b); r_esp += 4; return;
}

void f_00438eaf(void) /* FUN_00438eaf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438eaf);
    /* 00438eaf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438eb0: mov ebp, esp */ r_ebp = r_esp;
    /* 00438eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438eb3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438eb6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00438eb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438eba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438ebd: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438ec2u); f_00435caf();
    /* 00438ec2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ec4: je 0x438ef5 */ if (fZ) goto L_00438ef5;
L_00438ec6:; BB(0x00438ec6);
    /* 00438ec6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00438ec9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438eca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438ecd: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x438ed2u); f_00435caf();
    /* 00438ed2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ed4: je 0x438edc */ if (fZ) goto L_00438edc;
L_00438ed6:; BB(0x00438ed6);
    /* 00438ed6: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438eda: je 0x438ef5 */ if (fZ) goto L_00438ef5;
L_00438edc:; BB(0x00438edc);
    /* 00438edc: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ee0: je 0x438ef1 */ if (fZ) goto L_00438ef1;
L_00438ee2:; BB(0x00438ee2);
    /* 00438ee2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00438ee5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00438ee6: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00438eec: call 0x4377a0 */ r_esp -= 4; W32(r_esp, 0x438ef1u); f_004377a0();
L_00438ef1:; BB(0x00438ef1);
    /* 00438ef1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438ef3: jmp 0x438efa */ goto L_00438efa;
L_00438ef5:; BB(0x00438ef5);
    /* 00438ef5: mov eax, 1 */ r_eax = 0x1u;
L_00438efa:; BB(0x00438efa);
    /* 00438efa: mov esp, ebp */ r_esp = r_ebp;
    /* 00438efc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438efd: ret 0x10 */ FN_RET(0x00438eaf); r_esp += 20; return;
}

void f_00438f00(void) /* FUN_00438f00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438f00);
    /* 00438f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00438f03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438f06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438f09: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00438f0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438f0d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00438f10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438f11: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00438f13: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00438f15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438f18: call 0x438eaf */ r_esp -= 4; W32(r_esp, 0x438f1du); f_00438eaf();
    /* 00438f1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438f1f: je 0x438fa6 */ if (fZ) goto L_00438fa6;
L_00438f25:; BB(0x00438f25);
    /* 00438f25: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00438f28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00438f29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00438f2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438f2d: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00438f2f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00438f31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438f34: call 0x438eaf */ r_esp -= 4; W32(r_esp, 0x438f39u); f_00438eaf();
    /* 00438f39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438f3b: je 0x438fa6 */ if (fZ) goto L_00438fa6;
L_00438f3d:; BB(0x00438f3d);
    /* 00438f3d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00438f40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438f41: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00438f44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00438f45: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00438f47: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00438f49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438f4c: call 0x438eaf */ r_esp -= 4; W32(r_esp, 0x438f51u); f_00438eaf();
    /* 00438f51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438f53: je 0x438fa6 */ if (fZ) goto L_00438fa6;
L_00438f55:; BB(0x00438f55);
    /* 00438f55: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00438f58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438f59: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00438f5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438f5d: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00438f5f: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00438f61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438f64: call 0x438eaf */ r_esp -= 4; W32(r_esp, 0x438f69u); f_00438eaf();
    /* 00438f69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438f6b: je 0x438fa6 */ if (fZ) goto L_00438fa6;
L_00438f6d:; BB(0x00438f6d);
    /* 00438f6d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00438f70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00438f71: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00438f74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438f75: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00438f77: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00438f79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438f7c: call 0x438eaf */ r_esp -= 4; W32(r_esp, 0x438f81u); f_00438eaf();
    /* 00438f81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438f83: je 0x438fa6 */ if (fZ) goto L_00438fa6;
L_00438f85:; BB(0x00438f85);
    /* 00438f85: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00438f88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438f89: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00438f8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00438f8d: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00438f8f: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00438f91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438f94: call 0x438eaf */ r_esp -= 4; W32(r_esp, 0x438f99u); f_00438eaf();
    /* 00438f99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438f9b: je 0x438fa6 */ if (fZ) goto L_00438fa6;
L_00438f9d:; BB(0x00438f9d);
    /* 00438f9d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00438fa4: jmp 0x438fad */ goto L_00438fad;
L_00438fa6:; BB(0x00438fa6);
    /* 00438fa6: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00438fad:; BB(0x00438fad);
    /* 00438fad: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438fb0: mov esp, ebp */ r_esp = r_ebp;
    /* 00438fb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438fb3: ret 8 */ FN_RET(0x00438f00); r_esp += 12; return;
}

void f_00438fb6(void) /* FUN_00438fb6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438fb6);
    /* 00438fb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438fb7: mov ebp, esp */ r_ebp = r_esp;
    /* 00438fb9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438fbc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438fbf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00438fc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438fc3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00438fc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438fc7: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00438fc9: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00438fcb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438fce: call 0x438eaf */ r_esp -= 4; W32(r_esp, 0x438fd3u); f_00438eaf();
    /* 00438fd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438fd5: je 0x43905c */ if (fZ) goto L_0043905c;
L_00438fdb:; BB(0x00438fdb);
    /* 00438fdb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00438fde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00438fdf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00438fe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438fe3: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00438fe5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00438fe7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438fea: call 0x438eaf */ r_esp -= 4; W32(r_esp, 0x438fefu); f_00438eaf();
    /* 00438fef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ff1: je 0x43905c */ if (fZ) goto L_0043905c;
L_00438ff3:; BB(0x00438ff3);
    /* 00438ff3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00438ff6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438ff7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00438ffa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00438ffb: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00438ffd: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00438fff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439002: call 0x438eaf */ r_esp -= 4; W32(r_esp, 0x439007u); f_00438eaf();
    /* 00439007: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439009: je 0x43905c */ if (fZ) goto L_0043905c;
L_0043900b:; BB(0x0043900b);
    /* 0043900b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043900e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043900f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00439012: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00439013: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00439015: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00439017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043901a: call 0x438eaf */ r_esp -= 4; W32(r_esp, 0x43901fu); f_00438eaf();
    /* 0043901f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439021: je 0x43905c */ if (fZ) goto L_0043905c;
L_00439023:; BB(0x00439023);
    /* 00439023: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00439026: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00439027: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043902a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043902b: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0043902d: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0043902f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439032: call 0x438eaf */ r_esp -= 4; W32(r_esp, 0x439037u); f_00438eaf();
    /* 00439037: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439039: je 0x43905c */ if (fZ) goto L_0043905c;
L_0043903b:; BB(0x0043903b);
    /* 0043903b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043903e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043903f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00439042: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00439043: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00439045: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00439047: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043904a: call 0x438eaf */ r_esp -= 4; W32(r_esp, 0x43904fu); f_00438eaf();
    /* 0043904f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439051: je 0x43905c */ if (fZ) goto L_0043905c;
L_00439053:; BB(0x00439053);
    /* 00439053: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043905a: jmp 0x439063 */ goto L_00439063;
L_0043905c:; BB(0x0043905c);
    /* 0043905c: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00439063:; BB(0x00439063);
    /* 00439063: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439066: mov esp, ebp */ r_esp = r_ebp;
    /* 00439068: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00439069: ret 8 */ FN_RET(0x00438fb6); r_esp += 12; return;
}

void f_0043906c(void) /* FUN_0043906c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043906c);
    /* 0043906c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043906d: mov ebp, esp */ r_ebp = r_esp;
    /* 0043906f: sub esp, 0x808 */ {  u32 a = r_esp; u32 b = 0x808u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00439075: mov dword ptr [ebp - 0x808], ecx */ W32((u32)(r_ebp+0xfffff7f8u), r_ecx);
    /* 0043907b: mov ecx, dword ptr [ebp - 0x808] */ r_ecx = R32((u32)(r_ebp+0xfffff7f8u));
    /* 00439081: call 0x437372 */ r_esp -= 4; W32(r_esp, 0x439086u); f_00437372();
    /* 00439086: mov dword ptr [ebp - 0x804], eax */ W32((u32)(r_ebp+0xfffff7fcu), r_eax);
    /* 0043908c: mov byte ptr [ebp - 0x800], 0 */ W8((u32)(r_ebp+0xfffff800u), 0x0u);
    /* 00439093: mov ecx, dword ptr [ebp - 0x808] */ r_ecx = R32((u32)(r_ebp+0xfffff7f8u));
    /* 00439099: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x43909eu); f_0043a8b5();
    /* 0043909e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004390a0: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004390a2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004390a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004390a6: jne 0x4390be */ if (!fZ) goto L_004390be;
L_004390a8:; BB(0x004390a8);
    /* 004390a8: push 0x6533a4 */ { u32 v = 0x6533a4u; r_esp -= 4; W32(r_esp, v); }
    /* 004390ad: lea eax, [ebp - 0x800] */ r_eax = (u32)(r_ebp+0xfffff800u);
    /* 004390b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004390b4: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4390b9u); f_00624510();
    /* 004390b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004390bc: jmp 0x4390f5 */ goto L_004390f5;
L_004390be:; BB(0x004390be);
    /* 004390be: push 0x653524 */ { u32 v = 0x653524u; r_esp -= 4; W32(r_esp, v); }
    /* 004390c3: lea ecx, [ebp - 0x800] */ r_ecx = (u32)(r_ebp+0xfffff800u);
    /* 004390c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004390ca: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4390cfu); f_00624510();
    /* 004390cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004390d2: mov ecx, dword ptr [ebp - 0x804] */ r_ecx = R32((u32)(r_ebp+0xfffff7fcu));
    /* 004390d8: call 0x438e3b */ r_esp -= 4; W32(r_esp, 0x4390ddu); f_00438e3b();
    /* 004390dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004390df: je 0x4390f5 */ if (fZ) goto L_004390f5;
L_004390e1:; BB(0x004390e1);
    /* 004390e1: push 0x65373c */ { u32 v = 0x65373cu; r_esp -= 4; W32(r_esp, v); }
    /* 004390e6: lea edx, [ebp - 0x800] */ r_edx = (u32)(r_ebp+0xfffff800u);
    /* 004390ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004390ed: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x4390f2u); f_00624520();
    /* 004390f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004390f5:; BB(0x004390f5);
    /* 004390f5: lea eax, [ebp - 0x800] */ r_eax = (u32)(r_ebp+0xfffff800u);
    /* 004390fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004390fc: push 0x653824 */ { u32 v = 0x653824u; r_esp -= 4; W32(r_esp, v); }
    /* 00439101: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00439103: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00439109: call 0x60e8c0 */ r_esp -= 4; W32(r_esp, 0x43910eu); f_0060e8c0();
    /* 0043910e: mov byte ptr [ebp - 0x800], 0 */ W8((u32)(r_ebp+0xfffff800u), 0x0u);
    /* 00439115: mov ecx, dword ptr [ebp - 0x808] */ r_ecx = R32((u32)(r_ebp+0xfffff7f8u));
    /* 0043911b: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x439120u); f_0043a8b5();
    /* 00439120: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00439122: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00439124: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00439126: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439128: jne 0x439143 */ if (!fZ) goto L_00439143;
L_0043912a:; BB(0x0043912a);
    /* 0043912a: push 0x65382c */ { u32 v = 0x65382cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043912f: lea ecx, [ebp - 0x800] */ r_ecx = (u32)(r_ebp+0xfffff800u);
    /* 00439135: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00439136: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x43913bu); f_00624520();
    /* 0043913b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043913e: jmp 0x439227 */ goto L_00439227;
L_00439143:; BB(0x00439143);
    /* 00439143: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439147: jne 0x43918d */ if (!fZ) goto L_0043918d;
L_00439149:; BB(0x00439149);
    /* 00439149: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043914b: mov ecx, dword ptr [ebp - 0x804] */ r_ecx = R32((u32)(r_ebp+0xfffff7fcu));
    /* 00439151: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x439156u); f_00435caf();
    /* 00439156: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439158: je 0x43916b */ if (fZ) goto L_0043916b;
L_0043915a:; BB(0x0043915a);
    /* 0043915a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043915c: mov ecx, dword ptr [ebp - 0x804] */ r_ecx = R32((u32)(r_ebp+0xfffff7fcu));
    /* 00439162: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x439167u); f_00435caf();
    /* 00439167: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439169: je 0x43918d */ if (fZ) goto L_0043918d;
L_0043916b:; BB(0x0043916b);
    /* 0043916b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043916d: mov ecx, dword ptr [ebp - 0x804] */ r_ecx = R32((u32)(r_ebp+0xfffff7fcu));
    /* 00439173: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x439178u); f_00435caf();
    /* 00439178: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043917a: je 0x4391a1 */ if (fZ) goto L_004391a1;
L_0043917c:; BB(0x0043917c);
    /* 0043917c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043917e: mov ecx, dword ptr [ebp - 0x804] */ r_ecx = R32((u32)(r_ebp+0xfffff7fcu));
    /* 00439184: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x439189u); f_00435caf();
    /* 00439189: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043918b: jne 0x4391a1 */ if (!fZ) goto L_004391a1;
L_0043918d:; BB(0x0043918d);
    /* 0043918d: push 0x6539a4 */ { u32 v = 0x6539a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00439192: lea edx, [ebp - 0x800] */ r_edx = (u32)(r_ebp+0xfffff800u);
    /* 00439198: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00439199: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x43919eu); f_00624520();
    /* 0043919e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004391a1:; BB(0x004391a1);
    /* 004391a1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004391a3: mov ecx, dword ptr [ebp - 0x804] */ r_ecx = R32((u32)(r_ebp+0xfffff7fcu));
    /* 004391a9: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x4391aeu); f_00435caf();
    /* 004391ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004391b0: jne 0x4391f5 */ if (!fZ) goto L_004391f5;
L_004391b2:; BB(0x004391b2);
    /* 004391b2: mov ecx, dword ptr [ebp - 0x804] */ r_ecx = R32((u32)(r_ebp+0xfffff7fcu));
    /* 004391b8: call 0x438e3b */ r_esp -= 4; W32(r_esp, 0x4391bdu); f_00438e3b();
    /* 004391bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004391bf: jne 0x4391f5 */ if (!fZ) goto L_004391f5;
L_004391c1:; BB(0x004391c1);
    /* 004391c1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004391c3: mov ecx, dword ptr [ebp - 0x804] */ r_ecx = R32((u32)(r_ebp+0xfffff7fcu));
    /* 004391c9: call 0x435caf */ r_esp -= 4; W32(r_esp, 0x4391ceu); f_00435caf();
    /* 004391ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004391d0: jne 0x4391f5 */ if (!fZ) goto L_004391f5;
L_004391d2:; BB(0x004391d2);
    /* 004391d2: mov ecx, dword ptr [ebp - 0x804] */ r_ecx = R32((u32)(r_ebp+0xfffff7fcu));
    /* 004391d8: call 0x438dc7 */ r_esp -= 4; W32(r_esp, 0x4391ddu); f_00438dc7();
    /* 004391dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004391df: jne 0x4391f5 */ if (!fZ) goto L_004391f5;
L_004391e1:; BB(0x004391e1);
    /* 004391e1: push 0x653b40 */ { u32 v = 0x653b40u; r_esp -= 4; W32(r_esp, v); }
    /* 004391e6: lea eax, [ebp - 0x800] */ r_eax = (u32)(r_ebp+0xfffff800u);
    /* 004391ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004391ed: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x4391f2u); f_00624520();
    /* 004391f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004391f5:; BB(0x004391f5);
    /* 004391f5: mov ecx, dword ptr [ebp - 0x804] */ r_ecx = R32((u32)(r_ebp+0xfffff7fcu));
    /* 004391fb: call 0x438e3b */ r_esp -= 4; W32(r_esp, 0x439200u); f_00438e3b();
    /* 00439200: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439202: jne 0x439213 */ if (!fZ) goto L_00439213;
L_00439204:; BB(0x00439204);
    /* 00439204: mov ecx, dword ptr [ebp - 0x804] */ r_ecx = R32((u32)(r_ebp+0xfffff7fcu));
    /* 0043920a: call 0x438dc7 */ r_esp -= 4; W32(r_esp, 0x43920fu); f_00438dc7();
    /* 0043920f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439211: je 0x439227 */ if (fZ) goto L_00439227;
L_00439213:; BB(0x00439213);
    /* 00439213: push 0x653cdc */ { u32 v = 0x653cdcu; r_esp -= 4; W32(r_esp, v); }
    /* 00439218: lea ecx, [ebp - 0x800] */ r_ecx = (u32)(r_ebp+0xfffff800u);
    /* 0043921e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043921f: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x439224u); f_00624520();
    /* 00439224: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00439227:; BB(0x00439227);
    /* 00439227: lea edx, [ebp - 0x800] */ r_edx = (u32)(r_ebp+0xfffff800u);
    /* 0043922d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043922e: push 0x653e78 */ { u32 v = 0x653e78u; r_esp -= 4; W32(r_esp, v); }
    /* 00439233: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00439235: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 0043923b: call 0x60e8c0 */ r_esp -= 4; W32(r_esp, 0x439240u); f_0060e8c0();
    /* 00439240: mov esp, ebp */ r_esp = r_ebp;
    /* 00439242: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00439243: ret 4 */ FN_RET(0x0043906c); r_esp += 8; return;
}

void f_00439246(void) /* FUN_00439246 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00439246);
    /* 00439246: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00439247: mov ebp, esp */ r_ebp = r_esp;
    /* 00439249: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043924c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043924f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439252: call 0x437295 */ r_esp -= 4; W32(r_esp, 0x439257u); f_00437295();
    /* 00439257: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043925a: call 0x437372 */ r_esp -= 4; W32(r_esp, 0x43925fu); f_00437372();
    /* 0043925f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00439262: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439266: jne 0x4392de */ if (!fZ) goto L_004392de;
L_00439268:; BB(0x00439268);
    /* 00439268: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043926a: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00439270: call 0x44a1d2 */ r_esp -= 4; W32(r_esp, 0x439275u); f_0044a1d2();
    /* 00439275: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439278: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x43927du); f_0043c040();
    /* 0043927d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439280: je 0x439293 */ if (fZ) goto L_00439293;
L_00439282:; BB(0x00439282);
    /* 00439282: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439285: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x43928au); f_0043c040();
    /* 0043928a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043928b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043928e: call 0x4371f8 */ r_esp -= 4; W32(r_esp, 0x439293u); f_004371f8();
L_00439293:; BB(0x00439293);
    /* 00439293: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00439295: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 0043929b: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x4392a0u); f_0060e7bd();
    /* 004392a0: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 004392a6: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x4392abu); f_00448ca3();
    /* 004392ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004392ad: je 0x4392c2 */ if (fZ) goto L_004392c2;
L_004392af:; BB(0x004392af);
    /* 004392af: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 004392b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004392b6: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 004392bc: call dword ptr [edx + 0x94] */ { u32 t = R32((u32)(r_edx+0x94u)); r_esp -= 4; W32(r_esp, 0x4392c2u); call_ind(t); }
L_004392c2:; BB(0x004392c2);
    /* 004392c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004392c4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004392c6: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 004392cb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004392ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004392cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004392d1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004392d4: call 0x43adaa */ r_esp -= 4; W32(r_esp, 0x4392d9u); f_0043adaa();
    /* 004392d9: jmp 0x439419 */ goto L_00439419;
L_004392de:; BB(0x004392de);
    /* 004392de: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004392e0: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 004392e6: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004392e9: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 004392ee: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004392f1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004392f3: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4392f6u); call_ind(t); }
    /* 004392f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004392f9: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x4392feu); f_004259a0();
    /* 004392fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439300: je 0x4393cf */ if (fZ) goto L_004393cf;
L_00439306:; BB(0x00439306);
    /* 00439306: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439309: mov dword ptr [ecx + 0x1d4], 1 */ W32((u32)(r_ecx+0x1d4u), 0x1u);
    /* 00439313: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439319: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0043931c: call 0x40808b */ r_esp -= 4; W32(r_esp, 0x439321u); f_0040808b();
    /* 00439321: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00439323: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439326: add eax, 0x114 */ {  u32 a = r_eax; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043932b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043932c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043932f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00439331: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439334: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x439337u); call_ind(t); }
    /* 00439337: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043933a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043933b: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00439341: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00439343: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00439349: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x43934cu); call_ind(t); }
    /* 0043934c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043934e: je 0x439364 */ if (fZ) goto L_00439364;
L_00439350:; BB(0x00439350);
    /* 00439350: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439353: call 0x4373a3 */ r_esp -= 4; W32(r_esp, 0x439358u); f_004373a3();
    /* 00439358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439359: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043935f: call 0x449908 */ r_esp -= 4; W32(r_esp, 0x439364u); f_00449908();
L_00439364:; BB(0x00439364);
    /* 00439364: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439367: mov ecx, dword ptr [eax + 0x19c] */ r_ecx = R32((u32)(r_eax+0x19cu));
    /* 0043936d: call 0x5e078a */ r_esp -= 4; W32(r_esp, 0x439372u); f_005e078a();
    /* 00439372: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439374: je 0x4393a3 */ if (fZ) goto L_004393a3;
L_00439376:; BB(0x00439376);
    /* 00439376: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439379: call 0x43a93e */ r_esp -= 4; W32(r_esp, 0x43937eu); f_0043a93e();
    /* 0043937e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439381: mov ecx, dword ptr [ecx + 0x19c] */ r_ecx = R32((u32)(r_ecx+0x19cu));
    /* 00439387: call 0x43d7e8 */ r_esp -= 4; W32(r_esp, 0x43938cu); f_0043d7e8();
    /* 0043938c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0043938e: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00439394: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x439399u); f_0060e7bd();
    /* 00439399: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043939b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043939e: call 0x43906c */ r_esp -= 4; W32(r_esp, 0x4393a3u); f_0043906c();
L_004393a3:; BB(0x004393a3);
    /* 004393a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004393a5: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004393ab: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x4393b0u); f_0045cd25();
    /* 004393b0: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004393b3: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004393b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004393b7: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 004393bd: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004393c0: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 004393c5: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004393c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004393ca: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x4393cdu); call_ind(t); }
    /* 004393cd: jmp 0x439419 */ goto L_00439419;
L_004393cf:; BB(0x004393cf);
    /* 004393cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004393d1: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 004393d7: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x4393dcu); f_0060e7bd();
    /* 004393dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004393df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004393e0: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 004393e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004393e8: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 004393ee: call dword ptr [eax + 0x7c] */ { u32 t = R32((u32)(r_eax+0x7cu)); r_esp -= 4; W32(r_esp, 0x4393f1u); call_ind(t); }
    /* 004393f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004393f3: je 0x439409 */ if (fZ) goto L_00439409;
L_004393f5:; BB(0x004393f5);
    /* 004393f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004393f8: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004393fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004393fc: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00439402: call 0x44a9db */ r_esp -= 4; W32(r_esp, 0x439407u); f_0044a9db();
    /* 00439407: jmp 0x439419 */ goto L_00439419;
L_00439409:; BB(0x00439409);
    /* 00439409: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043940c: call 0x43a93e */ r_esp -= 4; W32(r_esp, 0x439411u); f_0043a93e();
    /* 00439411: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439414: call 0x43ba42 */ r_esp -= 4; W32(r_esp, 0x439419u); f_0043ba42();
L_00439419:; BB(0x00439419);
    /* 00439419: mov esp, ebp */ r_esp = r_ebp;
    /* 0043941b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043941c: ret  */ FN_RET(0x00439246); r_esp += 4; return;
}

void f_0043941d(void) /* FUN_0043941d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043941d);
    /* 0043941d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043941e: mov ebp, esp */ r_ebp = r_esp;
    /* 00439420: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00439423: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00439426: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00439428: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043942d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439430: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439436: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439439: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043943b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43943eu); call_ind(t); }
    /* 0043943e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439441: cmp dword ptr [eax + 0x208], 0 */ {  u32 a = R32((u32)(r_eax+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439448: jne 0x439474 */ if (!fZ) goto L_00439474;
L_0043944a:; BB(0x0043944a);
    /* 0043944a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043944c: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00439452: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x439457u); f_0045cd25();
    /* 00439457: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439458: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043945e: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00439461: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439467: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043946a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043946c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43946fu); call_ind(t); }
    /* 0043946f: jmp 0x439514 */ goto L_00439514;
L_00439474:; BB(0x00439474);
    /* 00439474: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439477: cmp dword ptr [eax + 0x1ac], 0 */ {  u32 a = R32((u32)(r_eax+0x1acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043947e: jne 0x4394ba */ if (!fZ) goto L_004394ba;
L_00439480:; BB(0x00439480);
    /* 00439480: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 00439485: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x43948au); f_0048ab58();
    /* 0043948a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043948d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00439490: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439494: je 0x4394a7 */ if (fZ) goto L_004394a7;
L_00439496:; BB(0x00439496);
    /* 00439496: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00439498: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043949a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043949d: call 0x43cf8c */ r_esp -= 4; W32(r_esp, 0x4394a2u); f_0043cf8c();
    /* 004394a2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004394a5: jmp 0x4394ae */ goto L_004394ae;
L_004394a7:; BB(0x004394a7);
    /* 004394a7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_004394ae:; BB(0x004394ae);
    /* 004394ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004394b1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004394b4: mov dword ptr [ecx + 0x1ac], edx */ W32((u32)(r_ecx+0x1acu), r_edx);
L_004394ba:; BB(0x004394ba);
    /* 004394ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004394bc: push 0x415 */ { u32 v = 0x415u; r_esp -= 4; W32(r_esp, v); }
    /* 004394c1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004394c4: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 004394ca: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x4394cfu); f_005e0461();
    /* 004394cf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004394d2: mov ecx, dword ptr [ecx + 0x1ac] */ r_ecx = R32((u32)(r_ecx+0x1acu));
    /* 004394d8: call 0x43d067 */ r_esp -= 4; W32(r_esp, 0x4394ddu); f_0043d067();
    /* 004394dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004394df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004394e1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004394e4: mov ecx, dword ptr [edx + 0x1ac] */ r_ecx = R32((u32)(r_edx+0x1acu));
    /* 004394ea: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x4394efu); f_005d81dc();
    /* 004394ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004394f1: push 0x15e */ { u32 v = 0x15eu; r_esp -= 4; W32(r_esp, v); }
    /* 004394f6: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004394f8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004394fb: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 00439501: call 0x5d81bb */ r_esp -= 4; W32(r_esp, 0x439506u); f_005d81bb();
    /* 00439506: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439509: mov ecx, dword ptr [ecx + 0x1ac] */ r_ecx = R32((u32)(r_ecx+0x1acu));
    /* 0043950f: call 0x43d2ca */ r_esp -= 4; W32(r_esp, 0x439514u); f_0043d2ca();
L_00439514:; BB(0x00439514);
    /* 00439514: mov esp, ebp */ r_esp = r_ebp;
    /* 00439516: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00439517: ret  */ FN_RET(0x0043941d); r_esp += 4; return;
}

void f_00439518(void) /* FUN_00439518 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00439518);
    /* 00439518: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00439519: mov ebp, esp */ r_ebp = r_esp;
    /* 0043951b: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043951e: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00439521: mov dword ptr [ebp - 0x3c], 0xf */ W32((u32)(r_ebp+0xffffffc4u), 0xfu);
    /* 00439528: mov dword ptr [ebp - 0x38], 0x82 */ W32((u32)(r_ebp+0xffffffc8u), 0x82u);
    /* 0043952f: mov dword ptr [ebp - 0x34], 0xf */ W32((u32)(r_ebp+0xffffffccu), 0xfu);
    /* 00439536: mov dword ptr [ebp - 0x30], 0x82 */ W32((u32)(r_ebp+0xffffffd0u), 0x82u);
    /* 0043953d: mov dword ptr [ebp - 0x2c], 0xf */ W32((u32)(r_ebp+0xffffffd4u), 0xfu);
    /* 00439544: mov dword ptr [ebp - 0x28], 0x82 */ W32((u32)(r_ebp+0xffffffd8u), 0x82u);
    /* 0043954b: mov dword ptr [ebp - 0x24], 0xf */ W32((u32)(r_ebp+0xffffffdcu), 0xfu);
    /* 00439552: mov dword ptr [ebp - 0x20], 0x82 */ W32((u32)(r_ebp+0xffffffe0u), 0x82u);
    /* 00439559: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043955b: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00439560: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439563: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439569: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043956c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043956e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x439571u); call_ind(t); }
    /* 00439571: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00439578: jmp 0x439583 */ goto L_00439583;
L_0043957a:; BB(0x0043957a);
    /* 0043957a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043957d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439580: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00439583:; BB(0x00439583);
    /* 00439583: cmp dword ptr [ebp - 0x14], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439587: jge 0x4396f0 */ if ((fS==fO)) goto L_004396f0;
L_0043958d:; BB(0x0043958d);
    /* 0043958d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00439590: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00439593: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00439597: movsx ecx, byte ptr [eax + 0xc8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xc8u));
    /* 0043959e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004395a0: je 0x4395a4 */ if (fZ) goto L_004395a4;
L_004395a2:; BB(0x004395a2);
    /* 004395a2: jmp 0x43957a */ goto L_0043957a;
L_004395a4:; BB(0x004395a4);
    /* 004395a4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004395ab: jmp 0x4395b6 */ goto L_004395b6;
L_004395ad:; BB(0x004395ad);
    /* 004395ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004395b0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004395b3: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_004395b6:; BB(0x004395b6);
    /* 004395b6: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004395ba: jge 0x4396eb */ if ((fS==fO)) goto L_004396eb;
L_004395c0:; BB(0x004395c0);
    /* 004395c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004395c3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004395c6: mov edx, dword ptr [ecx + eax*4 + 0x30] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 004395ca: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004395cd: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004395d0: mov ecx, dword ptr [edx + eax + 0x6c] */ r_ecx = R32((u32)(r_edx+r_eax+0x6cu));
    /* 004395d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004395d7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004395db: je 0x4395e9 */ if (fZ) goto L_004395e9;
L_004395dd:; BB(0x004395dd);
    /* 004395dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004395e0: cmp dword ptr [edx + 0xd8], -1 */ {  u32 a = R32((u32)(r_edx+0xd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004395e7: jne 0x4395eb */ if (!fZ) goto L_004395eb;
L_004395e9:; BB(0x004395e9);
    /* 004395e9: jmp 0x4395ad */ goto L_004395ad;
L_004395eb:; BB(0x004395eb);
    /* 004395eb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004395ee: mov ecx, dword ptr [ebp + eax*8 - 0x3c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffc4u));
    /* 004395f2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004395f5: add ecx, dword ptr [edx + 0xb4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xb4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004395fb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004395fe: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00439601: mov ecx, dword ptr [ebp + eax*8 - 0x38] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffc8u));
    /* 00439605: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439608: add ecx, dword ptr [edx + 0xb8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043960e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00439611: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439614: call 0x4300bf */ r_esp -= 4; W32(r_esp, 0x439619u); f_004300bf();
    /* 00439619: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043961c: call 0x430134 */ r_esp -= 4; W32(r_esp, 0x439621u); f_00430134();
    /* 00439621: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00439628: jmp 0x439633 */ goto L_00439633;
L_0043962a:; BB(0x0043962a);
    /* 0043962a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043962d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439630: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00439633:; BB(0x00439633);
    /* 00439633: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439636: call 0x426fb2 */ r_esp -= 4; W32(r_esp, 0x43963bu); f_00426fb2();
    /* 0043963b: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043963e: jg 0x4396e6 */ if ((!fZ&&fS==fO)) goto L_004396e6;
L_00439644:; BB(0x00439644);
    /* 00439644: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00439647: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043964a: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0043964e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00439651: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439655: jne 0x43965c */ if (!fZ) goto L_0043965c;
L_00439657:; BB(0x00439657);
    /* 00439657: jmp 0x4396e6 */ goto L_004396e6;
L_0043965c:; BB(0x0043965c);
    /* 0043965c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043965e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00439664: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x439669u); f_0045cd25();
    /* 00439669: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043966c: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 0043966f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439672: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439676: je 0x4396ce */ if (fZ) goto L_004396ce;
L_00439678:; BB(0x00439678);
    /* 00439678: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043967e: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x439683u); f_0045cb0a();
    /* 00439683: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439685: je 0x4396ce */ if (fZ) goto L_004396ce;
L_00439687:; BB(0x00439687);
    /* 00439687: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00439689: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x43968eu); f_0048ab58();
    /* 0043968e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00439691: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00439694: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439698: je 0x4396b9 */ if (fZ) goto L_004396b9;
L_0043969a:; BB(0x0043969a);
    /* 0043969a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043969d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043969e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004396a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004396a2: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 004396a8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004396ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004396ac: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004396af: call 0x5df72f */ r_esp -= 4; W32(r_esp, 0x4396b4u); f_005df72f();
    /* 004396b4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004396b7: jmp 0x4396c0 */ goto L_004396c0;
L_004396b9:; BB(0x004396b9);
    /* 004396b9: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_004396c0:; BB(0x004396c0);
    /* 004396c0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004396c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004396c4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004396c7: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x4396ccu); f_005d4df6();
    /* 004396cc: jmp 0x4396e1 */ goto L_004396e1;
L_004396ce:; BB(0x004396ce);
    /* 004396ce: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004396d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004396d2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004396d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004396d6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004396d9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004396db: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004396de: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4396e1u); call_ind(t); }
L_004396e1:; BB(0x004396e1);
    /* 004396e1: jmp 0x43962a */ goto L_0043962a;
L_004396e6:; BB(0x004396e6);
    /* 004396e6: jmp 0x4395ad */ goto L_004395ad;
L_004396eb:; BB(0x004396eb);
    /* 004396eb: jmp 0x43957a */ goto L_0043957a;
L_004396f0:; BB(0x004396f0);
    /* 004396f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004396f2: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 004396f7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004396fa: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439700: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439703: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439705: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x439708u); call_ind(t); }
    /* 00439708: mov esp, ebp */ r_esp = r_ebp;
    /* 0043970a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043970b: ret  */ FN_RET(0x00439518); r_esp += 4; return;
}

void f_0043970c(void) /* FUN_0043970c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043970c);
    /* 0043970c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043970d: mov ebp, esp */ r_ebp = r_esp;
    /* 0043970f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00439712: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00439715: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00439717: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043971c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043971f: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439725: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439728: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043972a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43972du); call_ind(t); }
    /* 0043972d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439730: call 0x43786e */ r_esp -= 4; W32(r_esp, 0x439735u); f_0043786e();
    /* 00439735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439737: jne 0x4397e2 */ if (!fZ) goto L_004397e2;
L_0043973d:; BB(0x0043973d);
    /* 0043973d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0043973f: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00439744: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439747: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043974d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439750: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439752: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x439755u); call_ind(t); }
    /* 00439755: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043975b: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x439760u); f_0045cb0a();
    /* 00439760: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439762: je 0x43977a */ if (fZ) goto L_0043977a;
L_00439764:; BB(0x00439764);
    /* 00439764: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043976b: jne 0x43977a */ if (!fZ) goto L_0043977a;
L_0043976d:; BB(0x0043976d);
    /* 0043976d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439770: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00439773: call 0x441840 */ r_esp -= 4; W32(r_esp, 0x439778u); f_00441840();
    /* 00439778: jmp 0x4397e2 */ goto L_004397e2;
L_0043977a:; BB(0x0043977a);
    /* 0043977a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00439781: jmp 0x43978c */ goto L_0043978c;
L_00439783:; BB(0x00439783);
    /* 00439783: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439786: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00439789: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0043978c:; BB(0x0043978c);
    /* 0043978c: cmp dword ptr [ebp - 4], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439790: jge 0x4397c9 */ if ((fS==fO)) goto L_004397c9;
L_00439792:; BB(0x00439792);
    /* 00439792: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439795: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043979a: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0043979e: movsx edx, byte ptr [ecx + 0xc8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0xc8u));
    /* 004397a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004397a7: jne 0x4397c7 */ if (!fZ) goto L_004397c7;
L_004397a9:; BB(0x004397a9);
    /* 004397a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004397ac: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 004397b2: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 004397b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004397b9: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 004397be: mov edx, dword ptr [eax + edx*4 + 0x30] */ r_edx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 004397c2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004397c4: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x4397c7u); call_ind(t); }
L_004397c7:; BB(0x004397c7);
    /* 004397c7: jmp 0x439783 */ goto L_00439783;
L_004397c9:; BB(0x004397c9);
    /* 004397c9: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004397cb: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 004397d1: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004397d4: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 004397da: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004397dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004397df: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4397e2u); call_ind(t); }
L_004397e2:; BB(0x004397e2);
    /* 004397e2: mov esp, ebp */ r_esp = r_ebp;
    /* 004397e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004397e5: ret  */ FN_RET(0x0043970c); r_esp += 4; return;
}

void f_004397e6(void) /* FUN_004397e6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004397e6);
    /* 004397e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004397e7: mov ebp, esp */ r_ebp = r_esp;
    /* 004397e9: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004397ec: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004397ef: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004397f5: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x4397fau); f_0045cb0a();
    /* 004397fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004397fc: je 0x439818 */ if (fZ) goto L_00439818;
L_004397fe:; BB(0x004397fe);
    /* 004397fe: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439805: jne 0x439818 */ if (!fZ) goto L_00439818;
L_00439807:; BB(0x00439807);
    /* 00439807: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043980a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0043980d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00439810: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00439813: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439815: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x439818u); call_ind(t); }
L_00439818:; BB(0x00439818);
    /* 00439818: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0043981a: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043981f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439822: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439828: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043982b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043982d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x439830u); call_ind(t); }
    /* 00439830: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00439837: jmp 0x439842 */ goto L_00439842;
L_00439839:; BB(0x00439839);
    /* 00439839: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043983c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043983f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00439842:; BB(0x00439842);
    /* 00439842: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439846: jge 0x4399e9 */ if ((fS==fO)) goto L_004399e9;
L_0043984c:; BB(0x0043984c);
    /* 0043984c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00439853: jmp 0x43985e */ goto L_0043985e;
L_00439855:; BB(0x00439855);
    /* 00439855: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00439858: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043985b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0043985e:; BB(0x0043985e);
    /* 0043985e: cmp dword ptr [ebp - 0x14], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439862: jge 0x4399e4 */ if ((fS==fO)) goto L_004399e4;
L_00439868:; BB(0x00439868);
    /* 00439868: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043986b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043986e: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00439872: movsx edx, byte ptr [ecx + 0xc8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0xc8u));
    /* 00439879: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043987c: je 0x439896 */ if (fZ) goto L_00439896;
L_0043987e:; BB(0x0043987e);
    /* 0043987e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00439881: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00439884: mov edx, dword ptr [ecx + eax*4 + 0x30] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 00439888: movsx eax, byte ptr [edx + 0xc8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xc8u));
    /* 0043988f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439892: je 0x439896 */ if (fZ) goto L_00439896;
L_00439894:; BB(0x00439894);
    /* 00439894: jmp 0x439855 */ goto L_00439855;
L_00439896:; BB(0x00439896);
    /* 00439896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00439899: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043989c: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 004398a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004398a3: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004398a6: mov edx, dword ptr [eax + ecx + 0x6c] */ r_edx = R32((u32)(r_eax+r_ecx+0x6cu));
    /* 004398aa: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004398ad: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004398b1: je 0x4398bf */ if (fZ) goto L_004398bf;
L_004398b3:; BB(0x004398b3);
    /* 004398b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004398b6: cmp dword ptr [eax + 0xd8], -1 */ {  u32 a = R32((u32)(r_eax+0xd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004398bd: jne 0x4398c1 */ if (!fZ) goto L_004398c1;
L_004398bf:; BB(0x004398bf);
    /* 004398bf: jmp 0x439855 */ goto L_00439855;
L_004398c1:; BB(0x004398c1);
    /* 004398c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004398c4: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 004398ca: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004398cd: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 004398d1: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 004398d4: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x4398d9u); f_00420800();
    /* 004398d9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004398dc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004398df: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004398e1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004398e4: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x4398e7u); call_ind(t); }
    /* 004398e7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004398ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004398ed: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 004398f3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004398f6: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 004398fa: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 004398fd: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x439902u); f_00420800();
    /* 00439902: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00439905: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00439908: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043990a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043990d: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x439910u); call_ind(t); }
    /* 00439910: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00439913: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439916: call 0x4300bf */ r_esp -= 4; W32(r_esp, 0x43991bu); f_004300bf();
    /* 0043991b: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00439922: jmp 0x43992d */ goto L_0043992d;
L_00439924:; BB(0x00439924);
    /* 00439924: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00439927: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043992a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0043992d:; BB(0x0043992d);
    /* 0043992d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439930: call 0x426fb2 */ r_esp -= 4; W32(r_esp, 0x439935u); f_00426fb2();
    /* 00439935: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439938: jg 0x4399df */ if ((!fZ&&fS==fO)) goto L_004399df;
L_0043993e:; BB(0x0043993e);
    /* 0043993e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00439941: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439944: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00439948: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043994b: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043994f: jne 0x439956 */ if (!fZ) goto L_00439956;
L_00439951:; BB(0x00439951);
    /* 00439951: jmp 0x4399df */ goto L_004399df;
L_00439956:; BB(0x00439956);
    /* 00439956: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00439958: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043995e: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x439963u); f_0045cd25();
    /* 00439963: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439966: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 00439969: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043996c: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439970: je 0x4399c7 */ if (fZ) goto L_004399c7;
L_00439972:; BB(0x00439972);
    /* 00439972: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00439978: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x43997du); f_0045cb0a();
    /* 0043997d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043997f: je 0x4399c7 */ if (fZ) goto L_004399c7;
L_00439981:; BB(0x00439981);
    /* 00439981: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00439983: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x439988u); f_0048ab58();
    /* 00439988: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043998b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043998e: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439992: je 0x4399b2 */ if (fZ) goto L_004399b2;
L_00439994:; BB(0x00439994);
    /* 00439994: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439997: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00439998: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043999b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043999c: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 004399a1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004399a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004399a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004399a8: call 0x5df72f */ r_esp -= 4; W32(r_esp, 0x4399adu); f_005df72f();
    /* 004399ad: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004399b0: jmp 0x4399b9 */ goto L_004399b9;
L_004399b2:; BB(0x004399b2);
    /* 004399b2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_004399b9:; BB(0x004399b9);
    /* 004399b9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004399bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004399bd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004399c0: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x4399c5u); f_005d4df6();
    /* 004399c5: jmp 0x4399da */ goto L_004399da;
L_004399c7:; BB(0x004399c7);
    /* 004399c7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004399ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004399cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004399ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004399cf: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004399d2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004399d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004399d7: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x4399dau); call_ind(t); }
L_004399da:; BB(0x004399da);
    /* 004399da: jmp 0x439924 */ goto L_00439924;
L_004399df:; BB(0x004399df);
    /* 004399df: jmp 0x439855 */ goto L_00439855;
L_004399e4:; BB(0x004399e4);
    /* 004399e4: jmp 0x439839 */ goto L_00439839;
L_004399e9:; BB(0x004399e9);
    /* 004399e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004399eb: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 004399f1: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004399f4: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 004399fa: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004399fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004399ff: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x439a02u); call_ind(t); }
    /* 00439a02: mov esp, ebp */ r_esp = r_ebp;
    /* 00439a04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00439a05: ret  */ FN_RET(0x004397e6); r_esp += 4; return;
}

void f_00439a06(void) /* FUN_00439a06 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00439a06);
    /* 00439a06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00439a07: mov ebp, esp */ r_ebp = r_esp;
    /* 00439a09: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00439a0c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00439a0f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00439a11: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00439a16: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439a19: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439a1f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439a22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439a24: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x439a27u); call_ind(t); }
    /* 00439a27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439a2a: call 0x43786e */ r_esp -= 4; W32(r_esp, 0x439a2fu); f_0043786e();
    /* 00439a2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439a31: jne 0x439ae0 */ if (!fZ) goto L_00439ae0;
L_00439a37:; BB(0x00439a37);
    /* 00439a37: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00439a39: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00439a3e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439a41: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439a47: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439a4a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439a4c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x439a4fu); call_ind(t); }
    /* 00439a4f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00439a51: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00439a56: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439a59: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439a5f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439a62: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439a64: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x439a67u); call_ind(t); }
    /* 00439a67: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00439a6e: jmp 0x439a79 */ goto L_00439a79;
L_00439a70:; BB(0x00439a70);
    /* 00439a70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439a73: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439a76: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00439a79:; BB(0x00439a79);
    /* 00439a79: cmp dword ptr [ebp - 4], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439a7d: jge 0x439ae0 */ if ((fS==fO)) goto L_00439ae0;
L_00439a7f:; BB(0x00439a7f);
    /* 00439a7f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00439a86: jmp 0x439a91 */ goto L_00439a91;
L_00439a88:; BB(0x00439a88);
    /* 00439a88: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439a8b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00439a8e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00439a91:; BB(0x00439a91);
    /* 00439a91: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439a95: jge 0x439ade */ if ((fS==fO)) goto L_00439ade;
L_00439a97:; BB(0x00439a97);
    /* 00439a97: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439a9a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439a9d: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00439aa1: movsx edx, byte ptr [ecx + 0xc8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0xc8u));
    /* 00439aa8: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439aab: je 0x439ac3 */ if (fZ) goto L_00439ac3;
L_00439aad:; BB(0x00439aad);
    /* 00439aad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439ab0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439ab3: mov edx, dword ptr [ecx + eax*4 + 0x30] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 00439ab7: movsx eax, byte ptr [edx + 0xc8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xc8u));
    /* 00439abe: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439ac1: jne 0x439adc */ if (!fZ) goto L_00439adc;
L_00439ac3:; BB(0x00439ac3);
    /* 00439ac3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439ac6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439ac9: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00439acd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439ad0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439ad3: mov eax, dword ptr [edx + eax*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_eax*4+0x30u));
    /* 00439ad7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439ad9: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x439adcu); call_ind(t); }
L_00439adc:; BB(0x00439adc);
    /* 00439adc: jmp 0x439a88 */ goto L_00439a88;
L_00439ade:; BB(0x00439ade);
    /* 00439ade: jmp 0x439a70 */ goto L_00439a70;
L_00439ae0:; BB(0x00439ae0);
    /* 00439ae0: mov esp, ebp */ r_esp = r_ebp;
    /* 00439ae2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00439ae3: ret  */ FN_RET(0x00439a06); r_esp += 4; return;
}

void f_00439ae4(void) /* FUN_00439ae4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00439ae4);
    /* 00439ae4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00439ae5: mov ebp, esp */ r_ebp = r_esp;
    /* 00439ae7: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00439aea: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00439aed: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00439aef: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00439af4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439af7: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439afd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439b00: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439b02: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x439b05u); call_ind(t); }
    /* 00439b05: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00439b0c: jmp 0x439b17 */ goto L_00439b17;
L_00439b0e:; BB(0x00439b0e);
    /* 00439b0e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00439b11: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439b14: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00439b17:; BB(0x00439b17);
    /* 00439b17: cmp dword ptr [ebp - 0x14], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439b1b: jge 0x439ce0 */ if ((fS==fO)) goto L_00439ce0;
L_00439b21:; BB(0x00439b21);
    /* 00439b21: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00439b24: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00439b27: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00439b2b: movsx ecx, byte ptr [eax + 0xc8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xc8u));
    /* 00439b32: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439b35: jne 0x439b80 */ if (!fZ) goto L_00439b80;
L_00439b37:; BB(0x00439b37);
    /* 00439b37: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00439b3a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00439b3d: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00439b41: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x439b46u); f_00427ecb();
    /* 00439b46: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439b49: je 0x439b5f */ if (fZ) goto L_00439b5f;
L_00439b4b:; BB(0x00439b4b);
    /* 00439b4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00439b4e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00439b51: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00439b55: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x439b5au); f_00427ecb();
    /* 00439b5a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439b5d: jne 0x439b80 */ if (!fZ) goto L_00439b80;
L_00439b5f:; BB(0x00439b5f);
    /* 00439b5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00439b62: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00439b65: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 00439b69: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x439b6eu); f_00427ecb();
    /* 00439b6e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439b71: jne 0x439b82 */ if (!fZ) goto L_00439b82;
L_00439b73:; BB(0x00439b73);
    /* 00439b73: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00439b76: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x439b7bu); f_0043c73a();
    /* 00439b7b: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439b7e: jne 0x439b82 */ if (!fZ) goto L_00439b82;
L_00439b80:; BB(0x00439b80);
    /* 00439b80: jmp 0x439b0e */ goto L_00439b0e;
L_00439b82:; BB(0x00439b82);
    /* 00439b82: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00439b89: jmp 0x439b94 */ goto L_00439b94;
L_00439b8b:; BB(0x00439b8b);
    /* 00439b8b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00439b8e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439b91: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00439b94:; BB(0x00439b94);
    /* 00439b94: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439b98: jge 0x439cdb */ if ((fS==fO)) goto L_00439cdb;
L_00439b9e:; BB(0x00439b9e);
    /* 00439b9e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00439ba1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00439ba4: mov edx, dword ptr [ecx + eax*4 + 0x30] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 00439ba8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00439bab: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439bae: mov ecx, dword ptr [edx + eax + 0x6c] */ r_ecx = R32((u32)(r_edx+r_eax+0x6cu));
    /* 00439bb2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00439bb5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439bb9: je 0x439bc7 */ if (fZ) goto L_00439bc7;
L_00439bbb:; BB(0x00439bbb);
    /* 00439bbb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439bbe: cmp dword ptr [edx + 0xd8], -1 */ {  u32 a = R32((u32)(r_edx+0xd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439bc5: jne 0x439bc9 */ if (!fZ) goto L_00439bc9;
L_00439bc7:; BB(0x00439bc7);
    /* 00439bc7: jmp 0x439b8b */ goto L_00439b8b;
L_00439bc9:; BB(0x00439bc9);
    /* 00439bc9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00439bcc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00439bcf: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 00439bd3: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x439bd8u); f_00427ecb();
    /* 00439bd8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439bdb: jne 0x439bf8 */ if (!fZ) goto L_00439bf8;
L_00439bdd:; BB(0x00439bdd);
    /* 00439bdd: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00439be0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00439be1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00439be4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439be5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00439be8: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x439bedu); f_0043c73a();
    /* 00439bed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439bee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00439bf1: call 0x437594 */ r_esp -= 4; W32(r_esp, 0x439bf6u); f_00437594();
    /* 00439bf6: jmp 0x439c11 */ goto L_00439c11;
L_00439bf8:; BB(0x00439bf8);
    /* 00439bf8: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00439bfb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00439bfc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00439bff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00439c00: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00439c03: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x439c08u); f_0043c73a();
    /* 00439c08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439c09: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00439c0c: call 0x4375f5 */ r_esp -= 4; W32(r_esp, 0x439c11u); f_004375f5();
L_00439c11:; BB(0x00439c11);
    /* 00439c11: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00439c18: jmp 0x439c23 */ goto L_00439c23;
L_00439c1a:; BB(0x00439c1a);
    /* 00439c1a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00439c1d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439c20: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00439c23:; BB(0x00439c23);
    /* 00439c23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439c26: call 0x426fb2 */ r_esp -= 4; W32(r_esp, 0x439c2bu); f_00426fb2();
    /* 00439c2b: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439c2e: jg 0x439cd6 */ if ((!fZ&&fS==fO)) goto L_00439cd6;
L_00439c34:; BB(0x00439c34);
    /* 00439c34: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00439c37: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439c3a: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00439c3e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00439c41: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439c45: jne 0x439c4c */ if (!fZ) goto L_00439c4c;
L_00439c47:; BB(0x00439c47);
    /* 00439c47: jmp 0x439cd6 */ goto L_00439cd6;
L_00439c4c:; BB(0x00439c4c);
    /* 00439c4c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00439c4e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00439c54: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x439c59u); f_0045cd25();
    /* 00439c59: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439c5c: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 00439c5f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439c62: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439c66: je 0x439cbe */ if (fZ) goto L_00439cbe;
L_00439c68:; BB(0x00439c68);
    /* 00439c68: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00439c6e: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x439c73u); f_0045cb0a();
    /* 00439c73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439c75: je 0x439cbe */ if (fZ) goto L_00439cbe;
L_00439c77:; BB(0x00439c77);
    /* 00439c77: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00439c79: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x439c7eu); f_0048ab58();
    /* 00439c7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00439c81: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00439c84: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439c88: je 0x439ca9 */ if (fZ) goto L_00439ca9;
L_00439c8a:; BB(0x00439c8a);
    /* 00439c8a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439c8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439c8e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439c91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00439c92: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439c98: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439c9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439c9c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00439c9f: call 0x5df72f */ r_esp -= 4; W32(r_esp, 0x439ca4u); f_005df72f();
    /* 00439ca4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00439ca7: jmp 0x439cb0 */ goto L_00439cb0;
L_00439ca9:; BB(0x00439ca9);
    /* 00439ca9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00439cb0:; BB(0x00439cb0);
    /* 00439cb0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00439cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00439cb4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439cb7: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x439cbcu); f_005d4df6();
    /* 00439cbc: jmp 0x439cd1 */ goto L_00439cd1;
L_00439cbe:; BB(0x00439cbe);
    /* 00439cbe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439cc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00439cc2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439cc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439cc6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439cc9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00439ccb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439cce: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x439cd1u); call_ind(t); }
L_00439cd1:; BB(0x00439cd1);
    /* 00439cd1: jmp 0x439c1a */ goto L_00439c1a;
L_00439cd6:; BB(0x00439cd6);
    /* 00439cd6: jmp 0x439b8b */ goto L_00439b8b;
L_00439cdb:; BB(0x00439cdb);
    /* 00439cdb: jmp 0x439b0e */ goto L_00439b0e;
L_00439ce0:; BB(0x00439ce0);
    /* 00439ce0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00439ce2: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00439ce7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439cea: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439cf0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439cf3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439cf5: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x439cf8u); call_ind(t); }
    /* 00439cf8: mov esp, ebp */ r_esp = r_ebp;
    /* 00439cfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00439cfb: ret  */ FN_RET(0x00439ae4); r_esp += 4; return;
}

void f_00439cfc(void) /* FUN_00439cfc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00439cfc);
    /* 00439cfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00439cfd: mov ebp, esp */ r_ebp = r_esp;
    /* 00439cff: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00439d02: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00439d05: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00439d07: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00439d0c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439d0f: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439d15: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439d18: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439d1a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x439d1du); call_ind(t); }
    /* 00439d1d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439d20: call 0x43786e */ r_esp -= 4; W32(r_esp, 0x439d25u); f_0043786e();
    /* 00439d25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439d27: jne 0x439eb0 */ if (!fZ) goto L_00439eb0;
L_00439d2d:; BB(0x00439d2d);
    /* 00439d2d: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00439d2f: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00439d34: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439d37: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439d3d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439d40: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439d42: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x439d45u); call_ind(t); }
    /* 00439d45: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00439d47: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00439d4c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439d4f: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439d55: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439d58: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439d5a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x439d5du); call_ind(t); }
    /* 00439d5d: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00439d64: jmp 0x439d6f */ goto L_00439d6f;
L_00439d66:; BB(0x00439d66);
    /* 00439d66: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00439d69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439d6c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00439d6f:; BB(0x00439d6f);
    /* 00439d6f: cmp dword ptr [ebp - 0x14], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439d73: jge 0x439eb0 */ if ((fS==fO)) goto L_00439eb0;
L_00439d79:; BB(0x00439d79);
    /* 00439d79: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00439d7c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439d7f: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00439d83: movsx ecx, byte ptr [eax + 0xc8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xc8u));
    /* 00439d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439d8d: jne 0x439dd8 */ if (!fZ) goto L_00439dd8;
L_00439d8f:; BB(0x00439d8f);
    /* 00439d8f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00439d92: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439d95: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00439d99: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x439d9eu); f_00427ecb();
    /* 00439d9e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439da1: je 0x439db7 */ if (fZ) goto L_00439db7;
L_00439da3:; BB(0x00439da3);
    /* 00439da3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00439da6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439da9: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00439dad: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x439db2u); f_00427ecb();
    /* 00439db2: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439db5: jne 0x439dd8 */ if (!fZ) goto L_00439dd8;
L_00439db7:; BB(0x00439db7);
    /* 00439db7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00439dba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439dbd: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 00439dc1: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x439dc6u); f_00427ecb();
    /* 00439dc6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439dc9: jne 0x439dda */ if (!fZ) goto L_00439dda;
L_00439dcb:; BB(0x00439dcb);
    /* 00439dcb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439dce: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x439dd3u); f_0043c73a();
    /* 00439dd3: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439dd6: jne 0x439dda */ if (!fZ) goto L_00439dda;
L_00439dd8:; BB(0x00439dd8);
    /* 00439dd8: jmp 0x439d66 */ goto L_00439d66;
L_00439dda:; BB(0x00439dda);
    /* 00439dda: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00439ddd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439de0: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00439de4: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x439de9u); f_00427ecb();
    /* 00439de9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439dec: jne 0x439e07 */ if (!fZ) goto L_00439e07;
L_00439dee:; BB(0x00439dee);
    /* 00439dee: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439df1: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x439df6u); f_0043c73a();
    /* 00439df6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439df7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439dfa: call 0x437656 */ r_esp -= 4; W32(r_esp, 0x439dffu); f_00437656();
    /* 00439dff: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00439e02: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00439e05: jmp 0x439e1e */ goto L_00439e1e;
L_00439e07:; BB(0x00439e07);
    /* 00439e07: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439e0a: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x439e0fu); f_0043c73a();
    /* 00439e0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439e10: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439e13: call 0x4376e0 */ r_esp -= 4; W32(r_esp, 0x439e18u); f_004376e0();
    /* 00439e18: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00439e1b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00439e1e:; BB(0x00439e1e);
    /* 00439e1e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00439e25: jmp 0x439e30 */ goto L_00439e30;
L_00439e27:; BB(0x00439e27);
    /* 00439e27: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00439e2a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439e2d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00439e30:; BB(0x00439e30);
    /* 00439e30: cmp dword ptr [ebp - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439e34: jge 0x439eab */ if ((fS==fO)) goto L_00439eab;
L_00439e36:; BB(0x00439e36);
    /* 00439e36: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00439e39: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439e3c: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00439e40: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00439e43: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00439e46: mov edx, dword ptr [eax + ecx + 0x6c] */ r_edx = R32((u32)(r_eax+r_ecx+0x6cu));
    /* 00439e4a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00439e4d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439e51: je 0x439ea6 */ if (fZ) goto L_00439ea6;
L_00439e53:; BB(0x00439e53);
    /* 00439e53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439e56: cmp dword ptr [eax + 0xc4], 0 */ {  u32 a = R32((u32)(r_eax+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439e5d: jle 0x439ea6 */ if ((fZ||fS!=fO)) goto L_00439ea6;
L_00439e5f:; BB(0x00439e5f);
    /* 00439e5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439e62: cmp dword ptr [ecx + 0xd8], -1 */ {  u32 a = R32((u32)(r_ecx+0xd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439e69: je 0x439ea6 */ if (fZ) goto L_00439ea6;
L_00439e6b:; BB(0x00439e6b);
    /* 00439e6b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00439e6d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00439e70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00439e71: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00439e74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439e75: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00439e78: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439e7b: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00439e7f: call 0x42827c */ r_esp -= 4; W32(r_esp, 0x439e84u); f_0042827c();
    /* 00439e84: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00439e87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439e88: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00439e8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00439e8c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00439e8f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439e92: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00439e96: call 0x42fc47 */ r_esp -= 4; W32(r_esp, 0x439e9bu); f_0042fc47();
    /* 00439e9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439e9e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00439ea0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439ea3: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x439ea6u); call_ind(t); }
L_00439ea6:; BB(0x00439ea6);
    /* 00439ea6: jmp 0x439e27 */ goto L_00439e27;
L_00439eab:; BB(0x00439eab);
    /* 00439eab: jmp 0x439d66 */ goto L_00439d66;
L_00439eb0:; BB(0x00439eb0);
    /* 00439eb0: mov esp, ebp */ r_esp = r_ebp;
    /* 00439eb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00439eb3: ret  */ FN_RET(0x00439cfc); r_esp += 4; return;
}

void f_00439eb4(void) /* FUN_00439eb4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00439eb4);
    /* 00439eb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00439eb5: mov ebp, esp */ r_ebp = r_esp;
    /* 00439eb7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00439eba: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00439ebd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00439ec4: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00439ec6: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00439ecb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439ece: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439ed4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439ed7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439ed9: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x439edcu); call_ind(t); }
    /* 00439edc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00439ee3: jmp 0x439eee */ goto L_00439eee;
L_00439ee5:; BB(0x00439ee5);
    /* 00439ee5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439ee8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439eeb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00439eee:; BB(0x00439eee);
    /* 00439eee: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439ef2: jge 0x439f92 */ if ((fS==fO)) goto L_00439f92;
L_00439ef8:; BB(0x00439ef8);
    /* 00439ef8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439efb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439efe: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439f03: je 0x439f19 */ if (fZ) goto L_00439f19;
L_00439f05:; BB(0x00439f05);
    /* 00439f05: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439f08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439f0b: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00439f0f: mov dword ptr [edx + 0x130], 0 */ W32((u32)(r_edx+0x130u), 0x0u);
L_00439f19:; BB(0x00439f19);
    /* 00439f19: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439f1c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439f1f: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00439f23: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x439f28u); f_00425973();
    /* 00439f28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439f2a: je 0x439f8d */ if (fZ) goto L_00439f8d;
L_00439f2c:; BB(0x00439f2c);
    /* 00439f2c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439f2f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439f32: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00439f36: cmp dword ptr [ecx + 0x12c], 0 */ {  u32 a = R32((u32)(r_ecx+0x12cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439f3d: je 0x439f8d */ if (fZ) goto L_00439f8d;
L_00439f3f:; BB(0x00439f3f);
    /* 00439f3f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439f42: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439f45: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00439f49: mov ecx, dword ptr [ecx + 0x12c] */ r_ecx = R32((u32)(r_ecx+0x12cu));
    /* 00439f4f: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x439f54u); f_005d9690();
    /* 00439f54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439f56: je 0x439f8d */ if (fZ) goto L_00439f8d;
L_00439f58:; BB(0x00439f58);
    /* 00439f58: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439f5c: je 0x439f67 */ if (fZ) goto L_00439f67;
L_00439f5e:; BB(0x00439f5e);
    /* 00439f5e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00439f65: jmp 0x439f73 */ goto L_00439f73;
L_00439f67:; BB(0x00439f67);
    /* 00439f67: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439f6d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439f70: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00439f73:; BB(0x00439f73);
    /* 00439f73: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00439f76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00439f77: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00439f7a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439f7d: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00439f81: call 0x4257da */ r_esp -= 4; W32(r_esp, 0x439f86u); f_004257da();
    /* 00439f86: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00439f8d:; BB(0x00439f8d);
    /* 00439f8d: jmp 0x439ee5 */ goto L_00439ee5;
L_00439f92:; BB(0x00439f92);
    /* 00439f92: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439f96: jne 0x439fb1 */ if (!fZ) goto L_00439fb1;
L_00439f98:; BB(0x00439f98);
    /* 00439f98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00439f9a: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 00439fa0: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00439fa3: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439fa9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439fac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439fae: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x439fb1u); call_ind(t); }
L_00439fb1:; BB(0x00439fb1);
    /* 00439fb1: mov esp, ebp */ r_esp = r_ebp;
    /* 00439fb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00439fb4: ret  */ FN_RET(0x00439eb4); r_esp += 4; return;
}

void f_00439fb5(void) /* FUN_00439fb5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00439fb5);
    /* 00439fb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00439fb6: mov ebp, esp */ r_ebp = r_esp;
    /* 00439fb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00439fb9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00439fbc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00439fbe: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00439fc3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00439fc6: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00439fcc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439fcf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00439fd1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x439fd4u); call_ind(t); }
    /* 00439fd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439fd7: call 0x43a8f2 */ r_esp -= 4; W32(r_esp, 0x439fdcu); f_0043a8f2();
    /* 00439fdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439fde: jne 0x439ff4 */ if (!fZ) goto L_00439ff4;
L_00439fe0:; BB(0x00439fe0);
    /* 00439fe0: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00439fe6: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x439febu); f_0043c73a();
    /* 00439feb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439fec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439fef: call 0x43a62a */ r_esp -= 4; W32(r_esp, 0x439ff4u); f_0043a62a();
L_00439ff4:; BB(0x00439ff4);
    /* 00439ff4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439ff7: call 0x437838 */ r_esp -= 4; W32(r_esp, 0x439ffcu); f_00437838();
    /* 00439ffc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00439fff: call 0x437545 */ r_esp -= 4; W32(r_esp, 0x43a004u); f_00437545();
    /* 0043a004: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a005: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a008: call 0x4371f8 */ r_esp -= 4; W32(r_esp, 0x43a00du); f_004371f8();
    /* 0043a00d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a010: mov dword ptr [eax + 0x1d0], 0 */ W32((u32)(r_eax+0x1d0u), 0x0u);
    /* 0043a01a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a01d: call 0x43a8f2 */ r_esp -= 4; W32(r_esp, 0x43a022u); f_0043a8f2();
    /* 0043a022: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a024: je 0x43a03c */ if (fZ) goto L_0043a03c;
L_0043a026:; BB(0x0043a026);
    /* 0043a026: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a029: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x43a02eu); f_0043c73a();
    /* 0043a02e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a02f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a032: call 0x43a88b */ r_esp -= 4; W32(r_esp, 0x43a037u); f_0043a88b();
    /* 0043a037: jmp 0x43a175 */ goto L_0043a175;
L_0043a03c:; BB(0x0043a03c);
    /* 0043a03c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a03f: call 0x43c9db */ r_esp -= 4; W32(r_esp, 0x43a044u); f_0043c9db();
    /* 0043a044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a046: je 0x43a06f */ if (fZ) goto L_0043a06f;
L_0043a048:; BB(0x0043a048);
    /* 0043a048: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a04b: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 0043a051: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043a054: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a057: mov dword ptr [eax + 0x1cc], edx */ W32((u32)(r_eax+0x1ccu), r_edx);
    /* 0043a05d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a060: mov dword ptr [ecx + 0x1d0], 4 */ W32((u32)(r_ecx+0x1d0u), 0x4u);
    /* 0043a06a: jmp 0x43a175 */ goto L_0043a175;
L_0043a06f:; BB(0x0043a06f);
    /* 0043a06f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a072: call 0x43ca21 */ r_esp -= 4; W32(r_esp, 0x43a077u); f_0043ca21();
    /* 0043a077: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a079: je 0x43a0a2 */ if (fZ) goto L_0043a0a2;
L_0043a07b:; BB(0x0043a07b);
    /* 0043a07b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a07e: mov eax, dword ptr [edx + 0x1cc] */ r_eax = R32((u32)(r_edx+0x1ccu));
    /* 0043a084: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043a087: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a08a: mov dword ptr [ecx + 0x1cc], eax */ W32((u32)(r_ecx+0x1ccu), r_eax);
    /* 0043a090: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a093: mov dword ptr [edx + 0x1d0], 3 */ W32((u32)(r_edx+0x1d0u), 0x3u);
    /* 0043a09d: jmp 0x43a175 */ goto L_0043a175;
L_0043a0a2:; BB(0x0043a0a2);
    /* 0043a0a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a0a5: call 0x43a8c9 */ r_esp -= 4; W32(r_esp, 0x43a0aau); f_0043a8c9();
    /* 0043a0aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a0ac: je 0x43a0df */ if (fZ) goto L_0043a0df;
L_0043a0ae:; BB(0x0043a0ae);
    /* 0043a0ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a0b1: mov ecx, dword ptr [eax + 0x1cc] */ r_ecx = R32((u32)(r_eax+0x1ccu));
    /* 0043a0b7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a0ba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a0bd: mov dword ptr [edx + 0x1cc], ecx */ W32((u32)(r_edx+0x1ccu), r_ecx);
    /* 0043a0c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a0c6: mov dword ptr [eax + 0x1d0], 1 */ W32((u32)(r_eax+0x1d0u), 0x1u);
    /* 0043a0d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a0d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a0d5: call 0x43a88b */ r_esp -= 4; W32(r_esp, 0x43a0dau); f_0043a88b();
    /* 0043a0da: jmp 0x43a175 */ goto L_0043a175;
L_0043a0df:; BB(0x0043a0df);
    /* 0043a0df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a0e2: call 0x43ca9d */ r_esp -= 4; W32(r_esp, 0x43a0e7u); f_0043ca9d();
    /* 0043a0e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a0e9: je 0x43a175 */ if (fZ) goto L_0043a175;
L_0043a0ef:; BB(0x0043a0ef);
    /* 0043a0ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a0f2: mov dword ptr [ecx + 0x1d0], 2 */ W32((u32)(r_ecx+0x1d0u), 0x2u);
    /* 0043a0fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a0ff: mov dword ptr [edx + 0x1cc], 0 */ W32((u32)(r_edx+0x1ccu), 0x0u);
    /* 0043a109: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a10c: mov dword ptr [eax + 0x1b4], 0 */ W32((u32)(r_eax+0x1b4u), 0x0u);
    /* 0043a116: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a118: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a11b: call 0x4371f8 */ r_esp -= 4; W32(r_esp, 0x43a120u); f_004371f8();
    /* 0043a120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a122: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a125: call 0x43a88b */ r_esp -= 4; W32(r_esp, 0x43a12au); f_0043a88b();
    /* 0043a12a: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043a130: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x43a135u); f_00448ca3();
    /* 0043a135: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a137: je 0x43a152 */ if (fZ) goto L_0043a152;
L_0043a139:; BB(0x0043a139);
    /* 0043a139: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a13c: call 0x43cd05 */ r_esp -= 4; W32(r_esp, 0x43a141u); f_0043cd05();
    /* 0043a141: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043a147: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x43a14cu); f_00448ca3();
    /* 0043a14c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a14e: jne 0x43a152 */ if (!fZ) goto L_0043a152;
L_0043a150:; BB(0x0043a150);
    /* 0043a150: jmp 0x43a18d */ goto L_0043a18d;
L_0043a152:; BB(0x0043a152);
    /* 0043a152: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a154: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a157: call 0x436dc4 */ r_esp -= 4; W32(r_esp, 0x43a15cu); f_00436dc4();
    /* 0043a15c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a15e: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043a164: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0043a167: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043a16d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043a170: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a172: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43a175u); call_ind(t); }
L_0043a175:; BB(0x0043a175);
    /* 0043a175: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a177: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043a17c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043a17f: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043a185: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043a188: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a18a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43a18du); call_ind(t); }
L_0043a18d:; BB(0x0043a18d);
    /* 0043a18d: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a18f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a190: ret  */ FN_RET(0x00439fb5); r_esp += 4; return;
}

void f_0043a191(void) /* FUN_0043a191 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a191);
    /* 0043a191: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a192: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a194: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a197: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043a19a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043a1a1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043a1a8: jmp 0x43a1b3 */ goto L_0043a1b3;
L_0043a1aa:; BB(0x0043a1aa);
    /* 0043a1aa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a1ad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a1b0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043a1b3:; BB(0x0043a1b3);
    /* 0043a1b3: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a1b7: jge 0x43a1db */ if ((fS==fO)) goto L_0043a1db;
L_0043a1b9:; BB(0x0043a1b9);
    /* 0043a1b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a1bc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043a1bf: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043a1c3: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043a1c6: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x43a1cbu); f_0041f839();
    /* 0043a1cb: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a1ce: je 0x43a1d9 */ if (fZ) goto L_0043a1d9;
L_0043a1d0:; BB(0x0043a1d0);
    /* 0043a1d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a1d3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a1d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0043a1d9:; BB(0x0043a1d9);
    /* 0043a1d9: jmp 0x43a1aa */ goto L_0043a1aa;
L_0043a1db:; BB(0x0043a1db);
    /* 0043a1db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a1de: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a1e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a1e1: ret  */ FN_RET(0x0043a191); r_esp += 4; return;
}

void f_0043a1e2(void) /* FUN_0043a1e2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a1e2);
    /* 0043a1e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a1e3: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a1e5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a1e8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043a1eb: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043a1f0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043a1f3: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x43a1f8u); f_005e63b4();
    /* 0043a1f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043a1fb: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a1ff: je 0x43a213 */ if (fZ) goto L_0043a213;
L_0043a201:; BB(0x0043a201);
    /* 0043a201: cmp dword ptr [ebp - 4], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a205: je 0x43a213 */ if (fZ) goto L_0043a213;
L_0043a207:; BB(0x0043a207);
    /* 0043a207: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a20b: je 0x43a213 */ if (fZ) goto L_0043a213;
L_0043a20d:; BB(0x0043a20d);
    /* 0043a20d: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a211: jne 0x43a21a */ if (!fZ) goto L_0043a21a;
L_0043a213:; BB(0x0043a213);
    /* 0043a213: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a218: jmp 0x43a21c */ goto L_0043a21c;
L_0043a21a:; BB(0x0043a21a);
    /* 0043a21a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043a21c:; BB(0x0043a21c);
    /* 0043a21c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a21e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a21f: ret  */ FN_RET(0x0043a1e2); r_esp += 4; return;
}

void f_0043a220(void) /* FUN_0043a220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a220);
    /* 0043a220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a221: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a223: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a226: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043a229: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043a22c: call 0x43a1e2 */ r_esp -= 4; W32(r_esp, 0x43a231u); f_0043a1e2();
    /* 0043a231: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a233: jne 0x43a23e */ if (!fZ) goto L_0043a23e;
L_0043a235:; BB(0x0043a235);
    /* 0043a235: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a23c: je 0x43a243 */ if (fZ) goto L_0043a243;
L_0043a23e:; BB(0x0043a23e);
    /* 0043a23e: jmp 0x43a3a6 */ goto L_0043a3a6;
L_0043a243:; BB(0x0043a243);
    /* 0043a243: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043a24a: jmp 0x43a255 */ goto L_0043a255;
L_0043a24c:; BB(0x0043a24c);
    /* 0043a24c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043a24f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a252: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0043a255:; BB(0x0043a255);
    /* 0043a255: cmp dword ptr [ebp - 0xc], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a259: jge 0x43a3a6 */ if ((fS==fO)) goto L_0043a3a6;
L_0043a25f:; BB(0x0043a25f);
    /* 0043a25f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043a262: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043a265: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0043a269: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043a26c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0043a273: jmp 0x43a27e */ goto L_0043a27e;
L_0043a275:; BB(0x0043a275);
    /* 0043a275: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043a278: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a27b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0043a27e:; BB(0x0043a27e);
    /* 0043a27e: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a282: jge 0x43a3a1 */ if ((fS==fO)) goto L_0043a3a1;
L_0043a288:; BB(0x0043a288);
    /* 0043a288: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043a28b: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a28e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a291: mov ecx, dword ptr [eax + edx + 0x6c] */ r_ecx = R32((u32)(r_eax+r_edx+0x6cu));
    /* 0043a295: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043a298: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a29c: jne 0x43a2a0 */ if (!fZ) goto L_0043a2a0;
L_0043a29e:; BB(0x0043a29e);
    /* 0043a29e: jmp 0x43a275 */ goto L_0043a275;
L_0043a2a0:; BB(0x0043a2a0);
    /* 0043a2a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a2a3: cmp dword ptr [edx + 0xe8], 0 */ {  u32 a = R32((u32)(r_edx+0xe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a2aa: je 0x43a2f1 */ if (fZ) goto L_0043a2f1;
L_0043a2ac:; BB(0x0043a2ac);
    /* 0043a2ac: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a2b0: je 0x43a2c1 */ if (fZ) goto L_0043a2c1;
L_0043a2b2:; BB(0x0043a2b2);
    /* 0043a2b2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043a2b5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043a2b8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043a2bb: cmp edx, dword ptr [ecx + eax*4 + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax*4+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a2bf: jne 0x43a2da */ if (!fZ) goto L_0043a2da;
L_0043a2c1:; BB(0x0043a2c1);
    /* 0043a2c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a2c4: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 0043a2ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a2cd: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 0043a2d3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a2d5: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43a2d8u); call_ind(t); }
    /* 0043a2d8: jmp 0x43a2f1 */ goto L_0043a2f1;
L_0043a2da:; BB(0x0043a2da);
    /* 0043a2da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a2dd: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 0043a2e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a2e6: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 0043a2ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a2ee: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43a2f1u); call_ind(t); }
L_0043a2f1:; BB(0x0043a2f1);
    /* 0043a2f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a2f4: cmp dword ptr [eax + 0xec], 0 */ {  u32 a = R32((u32)(r_eax+0xecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a2fb: je 0x43a342 */ if (fZ) goto L_0043a342;
L_0043a2fd:; BB(0x0043a2fd);
    /* 0043a2fd: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a301: je 0x43a312 */ if (fZ) goto L_0043a312;
L_0043a303:; BB(0x0043a303);
    /* 0043a303: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043a306: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043a309: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043a30c: cmp eax, dword ptr [edx + ecx*4 + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a310: jne 0x43a32b */ if (!fZ) goto L_0043a32b;
L_0043a312:; BB(0x0043a312);
    /* 0043a312: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a315: mov ecx, dword ptr [ecx + 0xec] */ r_ecx = R32((u32)(r_ecx+0xecu));
    /* 0043a31b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a31e: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0043a324: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a326: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43a329u); call_ind(t); }
    /* 0043a329: jmp 0x43a342 */ goto L_0043a342;
L_0043a32b:; BB(0x0043a32b);
    /* 0043a32b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a32e: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 0043a334: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a337: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0043a33d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a33f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43a342u); call_ind(t); }
L_0043a342:; BB(0x0043a342);
    /* 0043a342: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043a349: jmp 0x43a354 */ goto L_0043a354;
L_0043a34b:; BB(0x0043a34b);
    /* 0043a34b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043a34e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a351: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0043a354:; BB(0x0043a354);
    /* 0043a354: cmp dword ptr [ebp - 0x14], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a358: jge 0x43a39c */ if ((fS==fO)) goto L_0043a39c;
L_0043a35a:; BB(0x0043a35a);
    /* 0043a35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043a35d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a360: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0043a364: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043a367: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a36b: je 0x43a39a */ if (fZ) goto L_0043a39a;
L_0043a36d:; BB(0x0043a36d);
    /* 0043a36d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a371: je 0x43a382 */ if (fZ) goto L_0043a382;
L_0043a373:; BB(0x0043a373);
    /* 0043a373: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043a376: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043a379: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043a37c: cmp eax, dword ptr [edx + ecx*4 + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a380: jne 0x43a38f */ if (!fZ) goto L_0043a38f;
L_0043a382:; BB(0x0043a382);
    /* 0043a382: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043a385: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043a387: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043a38a: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43a38du); call_ind(t); }
    /* 0043a38d: jmp 0x43a39a */ goto L_0043a39a;
L_0043a38f:; BB(0x0043a38f);
    /* 0043a38f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043a392: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a394: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043a397: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43a39au); call_ind(t); }
L_0043a39a:; BB(0x0043a39a);
    /* 0043a39a: jmp 0x43a34b */ goto L_0043a34b;
L_0043a39c:; BB(0x0043a39c);
    /* 0043a39c: jmp 0x43a275 */ goto L_0043a275;
L_0043a3a1:; BB(0x0043a3a1);
    /* 0043a3a1: jmp 0x43a24c */ goto L_0043a24c;
L_0043a3a6:; BB(0x0043a3a6);
    /* 0043a3a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a3a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a3a9: ret 4 */ FN_RET(0x0043a220); r_esp += 8; return;
}

void f_0043a3ac(void) /* FUN_0043a3ac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a3ac);
    /* 0043a3ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a3ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a3af: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a3b2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043a3b5: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a3b9: je 0x43a3e8 */ if (fZ) goto L_0043a3e8;
L_0043a3bb:; BB(0x0043a3bb);
    /* 0043a3bb: cmp dword ptr [ebp + 8], 0x25 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a3bf: je 0x43a3e8 */ if (fZ) goto L_0043a3e8;
L_0043a3c1:; BB(0x0043a3c1);
    /* 0043a3c1: cmp dword ptr [ebp + 8], 0x26 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a3c5: je 0x43a3e8 */ if (fZ) goto L_0043a3e8;
L_0043a3c7:; BB(0x0043a3c7);
    /* 0043a3c7: cmp dword ptr [ebp + 8], 0x27 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a3cb: je 0x43a3e8 */ if (fZ) goto L_0043a3e8;
L_0043a3cd:; BB(0x0043a3cd);
    /* 0043a3cd: cmp dword ptr [ebp + 8], 0x28 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a3d1: je 0x43a3e8 */ if (fZ) goto L_0043a3e8;
L_0043a3d3:; BB(0x0043a3d3);
    /* 0043a3d3: cmp dword ptr [ebp + 8], 0x29 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a3d7: je 0x43a3e8 */ if (fZ) goto L_0043a3e8;
L_0043a3d9:; BB(0x0043a3d9);
    /* 0043a3d9: cmp dword ptr [ebp + 8], 0x2a */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a3dd: je 0x43a3e8 */ if (fZ) goto L_0043a3e8;
L_0043a3df:; BB(0x0043a3df);
    /* 0043a3df: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043a3e6: jmp 0x43a3ef */ goto L_0043a3ef;
L_0043a3e8:; BB(0x0043a3e8);
    /* 0043a3e8: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_0043a3ef:; BB(0x0043a3ef);
    /* 0043a3ef: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043a3f2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043a3f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a3f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a3fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a3fb: ret 4 */ FN_RET(0x0043a3ac); r_esp += 8; return;
}

void f_0043a3fe(void) /* FUN_0043a3fe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a3fe);
    /* 0043a3fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a3ff: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a401: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a404: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043a407: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a40b: je 0x43a43a */ if (fZ) goto L_0043a43a;
L_0043a40d:; BB(0x0043a40d);
    /* 0043a40d: cmp dword ptr [ebp + 8], 0x19 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a411: je 0x43a43a */ if (fZ) goto L_0043a43a;
L_0043a413:; BB(0x0043a413);
    /* 0043a413: cmp dword ptr [ebp + 8], 0x1a */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a417: je 0x43a43a */ if (fZ) goto L_0043a43a;
L_0043a419:; BB(0x0043a419);
    /* 0043a419: cmp dword ptr [ebp + 8], 0x1b */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a41d: je 0x43a43a */ if (fZ) goto L_0043a43a;
L_0043a41f:; BB(0x0043a41f);
    /* 0043a41f: cmp dword ptr [ebp + 8], 0x1c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a423: je 0x43a43a */ if (fZ) goto L_0043a43a;
L_0043a425:; BB(0x0043a425);
    /* 0043a425: cmp dword ptr [ebp + 8], 0x1d */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a429: je 0x43a43a */ if (fZ) goto L_0043a43a;
L_0043a42b:; BB(0x0043a42b);
    /* 0043a42b: cmp dword ptr [ebp + 8], 0x1e */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a42f: je 0x43a43a */ if (fZ) goto L_0043a43a;
L_0043a431:; BB(0x0043a431);
    /* 0043a431: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043a438: jmp 0x43a441 */ goto L_0043a441;
L_0043a43a:; BB(0x0043a43a);
    /* 0043a43a: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_0043a441:; BB(0x0043a441);
    /* 0043a441: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043a444: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043a447: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a44a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a44c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a44d: ret 4 */ FN_RET(0x0043a3fe); r_esp += 8; return;
}

void f_0043a450(void) /* FUN_0043a450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a450);
    /* 0043a450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a451: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043a457: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0043a45a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a45c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a45d: ret  */ FN_RET(0x0043a450); r_esp += 4; return;
}

void f_0043a45e(void) /* FUN_0043a45e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a45e);
    /* 0043a45e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a45f: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a461: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a464: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043a467: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a46e: jne 0x43a475 */ if (!fZ) goto L_0043a475;
L_0043a470:; BB(0x0043a470);
    /* 0043a470: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0043a473: jmp 0x43a4cb */ goto L_0043a4cb;
L_0043a475:; BB(0x0043a475);
    /* 0043a475: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043a47b: jmp 0x43a489 */ goto L_0043a489;
L_0043a47d:; BB(0x0043a47d);
    /* 0043a47d: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0043a481: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0043a485: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0043a489:; BB(0x0043a489);
    /* 0043a489: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043a48d: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a490: jge 0x43a4c7 */ if ((fS==fO)) goto L_0043a4c7;
L_0043a492:; BB(0x0043a492);
    /* 0043a492: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043a496: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a497: mov eax, dword ptr [0x6f666c] */ r_eax = R32((u32)(0x6f666cu));
    /* 0043a49c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043a49f: call 0x5ed636 */ r_esp -= 4; W32(r_esp, 0x43a4a4u); f_005ed636();
    /* 0043a4a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a4a6: je 0x43a4c5 */ if (fZ) goto L_0043a4c5;
L_0043a4a8:; BB(0x0043a4a8);
    /* 0043a4a8: mov ecx, dword ptr [0x6f666c] */ r_ecx = R32((u32)(0x6f666cu));
    /* 0043a4ae: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0043a4b1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043a4b5: cmp dword ptr [edx + eax*4 + 0x254], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4+0x254u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a4bd: jne 0x43a4c5 */ if (!fZ) goto L_0043a4c5;
L_0043a4bf:; BB(0x0043a4bf);
    /* 0043a4bf: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0043a4c3: jmp 0x43a4cb */ goto L_0043a4cb;
L_0043a4c5:; BB(0x0043a4c5);
    /* 0043a4c5: jmp 0x43a47d */ goto L_0043a47d;
L_0043a4c7:; BB(0x0043a4c7);
    /* 0043a4c7: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_0043a4cb:; BB(0x0043a4cb);
    /* 0043a4cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a4cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a4ce: ret  */ FN_RET(0x0043a45e); r_esp += 4; return;
}

void f_0043a4cf(void) /* FUN_0043a4cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a4cf);
    /* 0043a4cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a4d0: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a4d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a4d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043a4d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043a4d7: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a4de: jne 0x43a4e7 */ if (!fZ) goto L_0043a4e7;
L_0043a4e0:; BB(0x0043a4e0);
    /* 0043a4e0: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a4e5: jmp 0x43a502 */ goto L_0043a502;
L_0043a4e7:; BB(0x0043a4e7);
    /* 0043a4e7: mov eax, dword ptr [0x6f666c] */ r_eax = R32((u32)(0x6f666cu));
    /* 0043a4ec: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0043a4ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a4f2: call 0x43a450 */ r_esp -= 4; W32(r_esp, 0x43a4f7u); f_0043a450();
    /* 0043a4f7: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0043a4fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a4fc: cmp dword ptr [esi + 0xc], ecx */ {  u32 a = R32((u32)(r_esi+0xcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a4ff: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
L_0043a502:; BB(0x0043a502);
    /* 0043a502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043a503: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a505: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a506: ret  */ FN_RET(0x0043a4cf); r_esp += 4; return;
}

void f_0043a507(void) /* FUN_0043a507 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a507);
    /* 0043a507: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a508: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a50a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a50b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043a50e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a510: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a512: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a513: ret 4 */ FN_RET(0x0043a507); r_esp += 8; return;
}

void f_0043a516(void) /* FUN_0043a516 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a516);
    /* 0043a516: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a517: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a519: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a51a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043a51d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a520: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043a523: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 0043a526: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a52d: je 0x43a551 */ if (fZ) goto L_0043a551;
L_0043a52f:; BB(0x0043a52f);
    /* 0043a52f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a533: je 0x43a544 */ if (fZ) goto L_0043a544;
L_0043a535:; BB(0x0043a535);
    /* 0043a535: push 0x653e84 */ { u32 v = 0x653e84u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a53a: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x43a53fu); f_0060fc40();
    /* 0043a53f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043a542: jmp 0x43a551 */ goto L_0043a551;
L_0043a544:; BB(0x0043a544);
    /* 0043a544: push 0x653ea0 */ { u32 v = 0x653ea0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a549: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x43a54eu); f_0060fc40();
    /* 0043a54e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043a551:; BB(0x0043a551);
    /* 0043a551: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a553: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a554: ret 4 */ FN_RET(0x0043a516); r_esp += 8; return;
}

void f_0043a557(void) /* FUN_0043a557 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a557);
    /* 0043a557: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a558: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a55a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a55b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043a55e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a561: call 0x4370b9 */ r_esp -= 4; W32(r_esp, 0x43a566u); f_004370b9();
    /* 0043a566: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a568: je 0x43a56e */ if (fZ) goto L_0043a56e;
L_0043a56a:; BB(0x0043a56a);
    /* 0043a56a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a56c: jmp 0x43a589 */ goto L_0043a589;
L_0043a56e:; BB(0x0043a56e);
    /* 0043a56e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a571: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x43a576u); f_0043a8b5();
    /* 0043a576: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0043a578: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0043a57a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043a57c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a57e: je 0x43a584 */ if (fZ) goto L_0043a584;
L_0043a580:; BB(0x0043a580);
    /* 0043a580: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a582: jmp 0x43a589 */ goto L_0043a589;
L_0043a584:; BB(0x0043a584);
    /* 0043a584: mov eax, 1 */ r_eax = 0x1u;
L_0043a589:; BB(0x0043a589);
    /* 0043a589: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a58b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a58c: ret  */ FN_RET(0x0043a557); r_esp += 4; return;
}

void f_0043a58d(void) /* FUN_0043a58d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a58d);
    /* 0043a58d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a58e: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a590: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a593: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043a596: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043a59d: jmp 0x43a5a8 */ goto L_0043a5a8;
L_0043a59f:; BB(0x0043a59f);
    /* 0043a59f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a5a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a5a5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043a5a8:; BB(0x0043a5a8);
    /* 0043a5a8: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a5ac: jge 0x43a624 */ if ((fS==fO)) goto L_0043a624;
L_0043a5ae:; BB(0x0043a5ae);
    /* 0043a5ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a5b1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a5b4: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043a5b8: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x43a5bdu); f_00425973();
    /* 0043a5bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a5bf: jne 0x43a5cf */ if (!fZ) goto L_0043a5cf;
L_0043a5c1:; BB(0x0043a5c1);
    /* 0043a5c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a5c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a5c5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a5c8: call 0x43c97a */ r_esp -= 4; W32(r_esp, 0x43a5cdu); f_0043c97a();
    /* 0043a5cd: jmp 0x43a59f */ goto L_0043a59f;
L_0043a5cf:; BB(0x0043a5cf);
    /* 0043a5cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a5d2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a5d5: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043a5d9: call 0x425a05 */ r_esp -= 4; W32(r_esp, 0x43a5deu); f_00425a05();
    /* 0043a5de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a5e0: jne 0x43a618 */ if (!fZ) goto L_0043a618;
L_0043a5e2:; BB(0x0043a5e2);
    /* 0043a5e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a5e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a5e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a5e9: call 0x43c8c7 */ r_esp -= 4; W32(r_esp, 0x43a5eeu); f_0043c8c7();
    /* 0043a5ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a5f0: jne 0x43a618 */ if (!fZ) goto L_0043a618;
L_0043a5f2:; BB(0x0043a5f2);
    /* 0043a5f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a5f5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a5f8: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043a5fc: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x43a601u); f_004259a0();
    /* 0043a601: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a603: je 0x43a61f */ if (fZ) goto L_0043a61f;
L_0043a605:; BB(0x0043a605);
    /* 0043a605: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a608: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a60b: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043a60f: cmp dword ptr [edx + 0x104], 0 */ {  u32 a = R32((u32)(r_edx+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a616: jne 0x43a61f */ if (!fZ) goto L_0043a61f;
L_0043a618:; BB(0x0043a618);
    /* 0043a618: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a61d: jmp 0x43a626 */ goto L_0043a626;
L_0043a61f:; BB(0x0043a61f);
    /* 0043a61f: jmp 0x43a59f */ goto L_0043a59f;
L_0043a624:; BB(0x0043a624);
    /* 0043a624: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043a626:; BB(0x0043a626);
    /* 0043a626: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a628: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a629: ret  */ FN_RET(0x0043a58d); r_esp += 4; return;
}

void f_0043a62a(void) /* FUN_0043a62a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a62a);
    /* 0043a62a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a62b: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a62d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a630: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043a633: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a636: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0043a63c: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x43a641u); f_005ea257();
    /* 0043a641: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043a644: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0043a646: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0043a648: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a649: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043a64c: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a653: jne 0x43a6e3 */ if (!fZ) goto L_0043a6e3;
L_0043a659:; BB(0x0043a659);
    /* 0043a659: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a65c: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x43a661u); f_0043a8b5();
    /* 0043a661: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a663: je 0x43a6e3 */ if (fZ) goto L_0043a6e3;
L_0043a665:; BB(0x0043a665);
    /* 0043a665: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a667: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a66a: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43a66fu); f_0043c77e();
    /* 0043a66f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a671: jne 0x43a688 */ if (!fZ) goto L_0043a688;
L_0043a673:; BB(0x0043a673);
    /* 0043a673: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a676: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x43a67bu); f_0043a8b5();
    /* 0043a67b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a67c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a67f: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43a684u); f_0043c77e();
    /* 0043a684: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a686: je 0x43a6de */ if (fZ) goto L_0043a6de;
L_0043a688:; BB(0x0043a688);
    /* 0043a688: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a68b: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 0043a691: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x43a696u); f_005ea257();
    /* 0043a696: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a698: jne 0x43a6b3 */ if (!fZ) goto L_0043a6b3;
L_0043a69a:; BB(0x0043a69a);
    /* 0043a69a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a69c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a69e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a6a0: push 0x18a9a */ { u32 v = 0x18a9au; r_esp -= 4; W32(r_esp, v); }
    /* 0043a6a5: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043a6ab: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0043a6ae: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x43a6b3u); f_005e8389();
L_0043a6b3:; BB(0x0043a6b3);
    /* 0043a6b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a6b5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a6b8: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0043a6be: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43a6c3u); f_005ea1cf();
    /* 0043a6c3: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a6c5: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a6c7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a6ca: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 0043a6d0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a6d3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0043a6d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a6db: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43a6deu); call_ind(t); }
L_0043a6de:; BB(0x0043a6de);
    /* 0043a6de: jmp 0x43a869 */ goto L_0043a869;
L_0043a6e3:; BB(0x0043a6e3);
    /* 0043a6e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a6e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a6e8: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0043a6ee: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43a6f3u); f_005ea1cf();
    /* 0043a6f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043a6f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043a6f9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043a6fc: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043a6ff: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0043a702: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043a706: ja 0x43a7dc */ if ((!fC&&!fZ)) goto L_0043a7dc;
L_0043a70c:; BB(0x0043a70c);
    /* 0043a70c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043a70f: jmp dword ptr [eax*4 + 0x43a86f] */ { u32 t = R32((u32)(r_eax*4+0x43a86fu)); switch (t) { case 0x43a716u: goto L_0043a716; case 0x43a736u: goto L_0043a736; case 0x43a759u: goto L_0043a759; case 0x43a7dcu: goto L_0043a7dc; case 0x43a77cu: goto L_0043a77c; case 0x43a79cu: goto L_0043a79c; case 0x43a7bcu: goto L_0043a7bc; default: UNSUP(0x0043a70f, "jump table entry is not a known target"); } }
L_0043a716:; BB(0x0043a716);
    /* 0043a716: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a718: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a71a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a71d: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 0043a723: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a726: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0043a72c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a72e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43a731u); call_ind(t); }
    /* 0043a731: jmp 0x43a807 */ goto L_0043a807;
L_0043a736:; BB(0x0043a736);
    /* 0043a736: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a738: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 0043a73d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a740: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0043a746: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a749: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0043a74f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a751: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43a754u); call_ind(t); }
    /* 0043a754: jmp 0x43a807 */ goto L_0043a807;
L_0043a759:; BB(0x0043a759);
    /* 0043a759: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a75b: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a760: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a763: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0043a769: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a76c: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0043a772: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a774: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43a777u); call_ind(t); }
    /* 0043a777: jmp 0x43a807 */ goto L_0043a807;
L_0043a77c:; BB(0x0043a77c);
    /* 0043a77c: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a77e: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a783: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a786: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0043a78c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a78f: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0043a795: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a797: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43a79au); call_ind(t); }
    /* 0043a79a: jmp 0x43a807 */ goto L_0043a807;
L_0043a79c:; BB(0x0043a79c);
    /* 0043a79c: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a79e: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a7a3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a7a6: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0043a7ac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a7af: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0043a7b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a7b7: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43a7bau); call_ind(t); }
    /* 0043a7ba: jmp 0x43a807 */ goto L_0043a807;
L_0043a7bc:; BB(0x0043a7bc);
    /* 0043a7bc: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a7be: push 0x177 */ { u32 v = 0x177u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a7c3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a7c6: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0043a7cc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a7cf: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0043a7d5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a7d7: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43a7dau); call_ind(t); }
    /* 0043a7da: jmp 0x43a807 */ goto L_0043a807;
L_0043a7dc:; BB(0x0043a7dc);
    /* 0043a7dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a7de: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a7e1: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0043a7e7: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43a7ecu); f_005ea1cf();
    /* 0043a7ec: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a7ee: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a7f0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a7f3: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 0043a7f9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a7fc: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0043a802: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a804: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43a807u); call_ind(t); }
L_0043a807:; BB(0x0043a807);
    /* 0043a807: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a80a: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0043a810: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x43a815u); f_005ea257();
    /* 0043a815: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a817: jne 0x43a838 */ if (!fZ) goto L_0043a838;
L_0043a819:; BB(0x0043a819);
    /* 0043a819: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a81d: je 0x43a838 */ if (fZ) goto L_0043a838;
L_0043a81f:; BB(0x0043a81f);
    /* 0043a81f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a821: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a825: push 0x18a9a */ { u32 v = 0x18a9au; r_esp -= 4; W32(r_esp, v); }
    /* 0043a82a: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043a830: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0043a833: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x43a838u); f_005e8389();
L_0043a838:; BB(0x0043a838);
    /* 0043a838: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a83b: mov ecx, dword ptr [edx + 0x194] */ r_ecx = R32((u32)(r_edx+0x194u));
    /* 0043a841: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x43a846u); f_005ea257();
    /* 0043a846: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a849: jne 0x43a869 */ if (!fZ) goto L_0043a869;
L_0043a84b:; BB(0x0043a84b);
    /* 0043a84b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a84f: jne 0x43a869 */ if (!fZ) goto L_0043a869;
L_0043a851:; BB(0x0043a851);
    /* 0043a851: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a853: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a855: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a857: push 0x18a9a */ { u32 v = 0x18a9au; r_esp -= 4; W32(r_esp, v); }
    /* 0043a85c: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043a861: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0043a864: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x43a869u); f_005e8389();
L_0043a869:; BB(0x0043a869);
    /* 0043a869: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a86b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a86c: ret 4 */ FN_RET(0x0043a62a); r_esp += 8; return;
}

void f_0043a88b(void) /* FUN_0043a88b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a88b);
    /* 0043a88b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a88c: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a88e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a88f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043a892: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043a895: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a896: push 0x653ec0 */ { u32 v = 0x653ec0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a89b: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x43a8a0u); f_0060fc40();
    /* 0043a8a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043a8a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a8a6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043a8a9: mov dword ptr [ecx + 0x1e4], edx */ W32((u32)(r_ecx+0x1e4u), r_edx);
    /* 0043a8af: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a8b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a8b2: ret 4 */ FN_RET(0x0043a88b); r_esp += 8; return;
}

void f_0043a8b5(void) /* FUN_0043a8b5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a8b5);
    /* 0043a8b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a8b6: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a8b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a8b9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043a8bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a8bf: mov eax, dword ptr [eax + 0x1e4] */ r_eax = R32((u32)(r_eax+0x1e4u));
    /* 0043a8c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a8c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a8c8: ret  */ FN_RET(0x0043a8b5); r_esp += 4; return;
}

void f_0043a8c9(void) /* FUN_0043a8c9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a8c9);
    /* 0043a8c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a8ca: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a8cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a8cd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043a8d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a8d3: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x43a8d8u); f_0043a8b5();
    /* 0043a8d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a8d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a8dc: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43a8e1u); f_0043c77e();
    /* 0043a8e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a8e3: je 0x43a8ec */ if (fZ) goto L_0043a8ec;
L_0043a8e5:; BB(0x0043a8e5);
    /* 0043a8e5: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a8ea: jmp 0x43a8ee */ goto L_0043a8ee;
L_0043a8ec:; BB(0x0043a8ec);
    /* 0043a8ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043a8ee:; BB(0x0043a8ee);
    /* 0043a8ee: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a8f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a8f1: ret  */ FN_RET(0x0043a8c9); r_esp += 4; return;
}

void f_0043a8f2(void) /* FUN_0043a8f2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a8f2);
    /* 0043a8f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a8f3: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a8f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a8f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043a8f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a8fc: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x43a901u); f_0043a8b5();
    /* 0043a901: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a903: je 0x43a909 */ if (fZ) goto L_0043a909;
L_0043a905:; BB(0x0043a905);
    /* 0043a905: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a907: jmp 0x43a93a */ goto L_0043a93a;
L_0043a909:; BB(0x0043a909);
    /* 0043a909: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a90c: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x43a911u); f_0043c73a();
    /* 0043a911: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a914: jle 0x43a938 */ if ((fZ||fS!=fO)) goto L_0043a938;
L_0043a916:; BB(0x0043a916);
    /* 0043a916: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a919: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x43a91eu); f_0043c73a();
    /* 0043a91e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a921: jge 0x43a938 */ if ((fS==fO)) goto L_0043a938;
L_0043a923:; BB(0x0043a923);
    /* 0043a923: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a925: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a928: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43a92du); f_0043c77e();
    /* 0043a92d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a92f: jne 0x43a938 */ if (!fZ) goto L_0043a938;
L_0043a931:; BB(0x0043a931);
    /* 0043a931: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a936: jmp 0x43a93a */ goto L_0043a93a;
L_0043a938:; BB(0x0043a938);
    /* 0043a938: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043a93a:; BB(0x0043a93a);
    /* 0043a93a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a93c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a93d: ret  */ FN_RET(0x0043a8f2); r_esp += 4; return;
}

void f_0043a93e(void) /* FUN_0043a93e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a93e);
    /* 0043a93e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a93f: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a941: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a944: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043a947: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043a94e: jmp 0x43a959 */ goto L_0043a959;
L_0043a950:; BB(0x0043a950);
    /* 0043a950: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a953: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a956: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043a959:; BB(0x0043a959);
    /* 0043a959: cmp dword ptr [ebp - 4], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a95d: jge 0x43a970 */ if ((fS==fO)) goto L_0043a970;
L_0043a95f:; BB(0x0043a95f);
    /* 0043a95f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a962: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043a965: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0043a969: call 0x4333f6 */ r_esp -= 4; W32(r_esp, 0x43a96eu); f_004333f6();
    /* 0043a96e: jmp 0x43a950 */ goto L_0043a950;
L_0043a970:; BB(0x0043a970);
    /* 0043a970: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a972: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a973: ret  */ FN_RET(0x0043a93e); r_esp += 4; return;
}

void f_0043a974(void) /* FUN_0043a974 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a974);
    /* 0043a974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a975: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a977: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a97a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043a97d: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0043a980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a981: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0043a984: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a985: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043a98b: call 0x45d949 */ r_esp -= 4; W32(r_esp, 0x43a990u); f_0045d949();
    /* 0043a990: cmp dword ptr [ebp - 4], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a997: jne 0x43a9a0 */ if (!fZ) goto L_0043a9a0;
L_0043a999:; BB(0x0043a999);
    /* 0043a999: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a99e: jmp 0x43a9a2 */ goto L_0043a9a2;
L_0043a9a0:; BB(0x0043a9a0);
    /* 0043a9a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043a9a2:; BB(0x0043a9a2);
    /* 0043a9a2: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a9a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a9a5: ret  */ FN_RET(0x0043a974); r_esp += 4; return;
}

void f_0043a9a6(void) /* FUN_0043a9a6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043a9a6);
    /* 0043a9a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a9a7: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a9a9: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a9ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043a9ad: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043a9b0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043a9b7: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043a9bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043a9be: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043a9c4: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43a9c7u); call_ind(t); }
    /* 0043a9c7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043a9ca: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043a9d0: call 0x44897d */ r_esp -= 4; W32(r_esp, 0x43a9d5u); f_0044897d();
    /* 0043a9d5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043a9d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043a9db: call 0x437372 */ r_esp -= 4; W32(r_esp, 0x43a9e0u); f_00437372();
    /* 0043a9e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043a9e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a9e6: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 0043a9ec: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043a9ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043a9f2: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0043a9f5: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x43a9fau); f_00426819();
    /* 0043a9fa: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043a9fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043aa00: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043aa02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043aa05: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43aa08u); call_ind(t); }
    /* 0043aa08: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043aa0b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043aa0e: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043aa11: jge 0x43aa1b */ if ((fS==fO)) goto L_0043aa1b;
L_0043aa13:; BB(0x0043aa13);
    /* 0043aa13: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043aa16: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0043aa19: jmp 0x43aa21 */ goto L_0043aa21;
L_0043aa1b:; BB(0x0043aa1b);
    /* 0043aa1b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043aa1e: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_0043aa21:; BB(0x0043aa21);
    /* 0043aa21: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043aa24: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043aa27: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043aa2a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043aa2d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043aa30: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043aa33: jle 0x43aa3c */ if ((fZ||fS!=fO)) goto L_0043aa3c;
L_0043aa35:; BB(0x0043aa35);
    /* 0043aa35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043aa37: jmp 0x43ab29 */ goto L_0043ab29;
L_0043aa3c:; BB(0x0043aa3c);
    /* 0043aa3c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043aa3e: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43aa43u); f_0060ee31();
    /* 0043aa43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043aa46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043aa49: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043aa4c: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0043aa4f: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043aa51: imul esi, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043aa55: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043aa57: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43aa5cu); f_0060ee31();
    /* 0043aa5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043aa5f: mov ecx, eax */ r_ecx = r_eax;
    /* 0043aa61: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043aa64: mov eax, esi */ r_eax = r_esi;
    /* 0043aa66: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043aa67: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0043aa67, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043aa67, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043aa69: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043aa6c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043aa6f: call 0x43a974 */ r_esp -= 4; W32(r_esp, 0x43aa74u); f_0043a974();
    /* 0043aa74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aa76: je 0x43aa8e */ if (fZ) goto L_0043aa8e;
L_0043aa78:; BB(0x0043aa78);
    /* 0043aa78: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043aa7a: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43aa7fu); f_0060ee31();
    /* 0043aa7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043aa82: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043aa85: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043aa88: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043aa8b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0043aa8e:; BB(0x0043aa8e);
    /* 0043aa8e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043aa91: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043aa93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043aa96: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x43aa99u); call_ind(t); }
    /* 0043aa99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aa9b: je 0x43aaf4 */ if (fZ) goto L_0043aaf4;
L_0043aa9d:; BB(0x0043aa9d);
    /* 0043aa9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043aaa0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043aaa2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043aaa5: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43aaa8u); call_ind(t); }
    /* 0043aaa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aaaa: je 0x43aaf4 */ if (fZ) goto L_0043aaf4;
L_0043aaac:; BB(0x0043aaac);
    /* 0043aaac: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 0043aaaf: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0043aab2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043aab5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043aab7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043aaba: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x43aabdu); call_ind(t); }
    /* 0043aabd: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 0043aac0: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x43aac5u); f_00624144();
    /* 0043aac5: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043aac8: jge 0x43aad2 */ if ((fS==fO)) goto L_0043aad2;
L_0043aaca:; BB(0x0043aaca);
    /* 0043aaca: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043aacd: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043aad0: jmp 0x43aaee */ goto L_0043aaee;
L_0043aad2:; BB(0x0043aad2);
    /* 0043aad2: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 0043aad5: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0043aad8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043aadb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043aadd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043aae0: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x43aae3u); call_ind(t); }
    /* 0043aae3: fmul dword ptr [ebp - 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd0u));
    /* 0043aae6: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x43aaebu); f_00624144();
    /* 0043aaeb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_0043aaee:; BB(0x0043aaee);
    /* 0043aaee: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043aaf1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0043aaf4:; BB(0x0043aaf4);
    /* 0043aaf4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043aaf7: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043aafa: jge 0x43ab04 */ if ((fS==fO)) goto L_0043ab04;
L_0043aafc:; BB(0x0043aafc);
    /* 0043aafc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043aaff: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0043ab02: jmp 0x43ab20 */ goto L_0043ab20;
L_0043ab04:; BB(0x0043ab04);
    /* 0043ab04: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ab07: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ab0a: jge 0x43ab14 */ if ((fS==fO)) goto L_0043ab14;
L_0043ab0c:; BB(0x0043ab0c);
    /* 0043ab0c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ab0f: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0043ab12: jmp 0x43ab1a */ goto L_0043ab1a;
L_0043ab14:; BB(0x0043ab14);
    /* 0043ab14: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ab17: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_0043ab1a:; BB(0x0043ab1a);
    /* 0043ab1a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0043ab1d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_0043ab20:; BB(0x0043ab20);
    /* 0043ab20: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043ab23: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043ab26: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_0043ab29:; BB(0x0043ab29);
    /* 0043ab29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043ab2a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ab2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ab2d: ret 8 */ FN_RET(0x0043a9a6); r_esp += 12; return;
}

void f_0043ab30(void) /* FUN_0043ab30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ab30);
    /* 0043ab30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ab31: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ab33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043ab36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043ab39: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ab3b: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43ab40u); f_0060ee31();
    /* 0043ab40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ab43: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043ab46: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ab49: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043ab4c:; BB(0x0043ab4c);
    /* 0043ab4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ab4f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043ab52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043ab53: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043ab55: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043ab57: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043ab5a: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043ab5c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043ab5e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043ab61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ab64: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ab67: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ab6c: je 0x43aba0 */ if (fZ) goto L_0043aba0;
L_0043ab6e:; BB(0x0043ab6e);
    /* 0043ab6e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ab71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ab74: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043ab78: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x43ab7du); f_00425973();
    /* 0043ab7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ab7f: je 0x43aba0 */ if (fZ) goto L_0043aba0;
L_0043ab81:; BB(0x0043ab81);
    /* 0043ab81: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ab84: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ab87: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043ab8b: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x43ab90u); f_004259a0();
    /* 0043ab90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ab92: je 0x43aba0 */ if (fZ) goto L_0043aba0;
L_0043ab94:; BB(0x0043ab94);
    /* 0043ab94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ab97: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ab9a: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043ab9e: jmp 0x43abaa */ goto L_0043abaa;
L_0043aba0:; BB(0x0043aba0);
    /* 0043aba0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043aba3: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aba6: jne 0x43ab4c */ if (!fZ) goto L_0043ab4c;
L_0043aba8:; BB(0x0043aba8);
    /* 0043aba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043abaa:; BB(0x0043abaa);
    /* 0043abaa: mov esp, ebp */ r_esp = r_ebp;
    /* 0043abac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043abad: ret  */ FN_RET(0x0043ab30); r_esp += 4; return;
}

void f_0043abae(void) /* FUN_0043abae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043abae);
    /* 0043abae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043abaf: mov ebp, esp */ r_ebp = r_esp;
    /* 0043abb1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043abb4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043abb7: mov dword ptr [ebp - 0xc], 0x7fffffff */ W32((u32)(r_ebp+0xfffffff4u), 0x7fffffffu);
    /* 0043abbe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043abc5: jmp 0x43abd0 */ goto L_0043abd0;
L_0043abc7:; BB(0x0043abc7);
    /* 0043abc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043abca: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043abcd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043abd0:; BB(0x0043abd0);
    /* 0043abd0: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043abd4: jge 0x43ac26 */ if ((fS==fO)) goto L_0043ac26;
L_0043abd6:; BB(0x0043abd6);
    /* 0043abd6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043abd9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043abdc: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043abe1: je 0x43ac24 */ if (fZ) goto L_0043ac24;
L_0043abe3:; BB(0x0043abe3);
    /* 0043abe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043abe6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043abe9: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043abed: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x43abf2u); f_00425973();
    /* 0043abf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043abf4: je 0x43ac24 */ if (fZ) goto L_0043ac24;
L_0043abf6:; BB(0x0043abf6);
    /* 0043abf6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043abf9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043abfc: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043ac00: mov edx, dword ptr [ecx + 0x124] */ r_edx = R32((u32)(r_ecx+0x124u));
    /* 0043ac06: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ac09: jge 0x43ac24 */ if ((fS==fO)) goto L_0043ac24;
L_0043ac0b:; BB(0x0043ac0b);
    /* 0043ac0b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ac0e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ac11: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043ac15: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 0043ac1b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043ac1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ac21: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0043ac24:; BB(0x0043ac24);
    /* 0043ac24: jmp 0x43abc7 */ goto L_0043abc7;
L_0043ac26:; BB(0x0043ac26);
    /* 0043ac26: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ac29: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ac2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ac2c: ret  */ FN_RET(0x0043abae); r_esp += 4; return;
}

void f_0043ac2d(void) /* FUN_0043ac2d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ac2d);
    /* 0043ac2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ac2e: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ac30: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043ac33: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043ac36: mov dword ptr [ebp - 0xc], 0x7fffffff */ W32((u32)(r_ebp+0xfffffff4u), 0x7fffffffu);
    /* 0043ac3d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043ac44: jmp 0x43ac4f */ goto L_0043ac4f;
L_0043ac46:; BB(0x0043ac46);
    /* 0043ac46: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ac49: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043ac4c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043ac4f:; BB(0x0043ac4f);
    /* 0043ac4f: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ac53: jge 0x43aca5 */ if ((fS==fO)) goto L_0043aca5;
L_0043ac55:; BB(0x0043ac55);
    /* 0043ac55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ac58: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ac5b: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ac60: je 0x43aca3 */ if (fZ) goto L_0043aca3;
L_0043ac62:; BB(0x0043ac62);
    /* 0043ac62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ac65: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ac68: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043ac6c: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x43ac71u); f_00425973();
    /* 0043ac71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ac73: je 0x43aca3 */ if (fZ) goto L_0043aca3;
L_0043ac75:; BB(0x0043ac75);
    /* 0043ac75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ac78: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ac7b: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043ac7f: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0043ac82: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0043ac85: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ac88: jge 0x43aca3 */ if ((fS==fO)) goto L_0043aca3;
L_0043ac8a:; BB(0x0043ac8a);
    /* 0043ac8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ac8d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ac90: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043ac94: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043ac97: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0043ac9a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0043ac9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043aca0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043aca3:; BB(0x0043aca3);
    /* 0043aca3: jmp 0x43ac46 */ goto L_0043ac46;
L_0043aca5:; BB(0x0043aca5);
    /* 0043aca5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043aca8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043acaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043acab: ret  */ FN_RET(0x0043ac2d); r_esp += 4; return;
}

void f_0043acac(void) /* FUN_0043acac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043acac);
    /* 0043acac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043acad: mov ebp, esp */ r_ebp = r_esp;
    /* 0043acaf: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043acb2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043acb5: mov dword ptr [ebp - 4], 0x80000000 */ W32((u32)(r_ebp+0xfffffffcu), 0x80000000u);
    /* 0043acbc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043acc3: jmp 0x43acce */ goto L_0043acce;
L_0043acc5:; BB(0x0043acc5);
    /* 0043acc5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043acc8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043accb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043acce:; BB(0x0043acce);
    /* 0043acce: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043acd2: jge 0x43ad24 */ if ((fS==fO)) goto L_0043ad24;
L_0043acd4:; BB(0x0043acd4);
    /* 0043acd4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043acd7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043acda: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043acdf: je 0x43ad22 */ if (fZ) goto L_0043ad22;
L_0043ace1:; BB(0x0043ace1);
    /* 0043ace1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ace4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ace7: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043aceb: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x43acf0u); f_00425973();
    /* 0043acf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043acf2: je 0x43ad22 */ if (fZ) goto L_0043ad22;
L_0043acf4:; BB(0x0043acf4);
    /* 0043acf4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043acf7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043acfa: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043acfe: mov edx, dword ptr [ecx + 0x124] */ r_edx = R32((u32)(r_ecx+0x124u));
    /* 0043ad04: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ad07: jle 0x43ad22 */ if ((fZ||fS!=fO)) goto L_0043ad22;
L_0043ad09:; BB(0x0043ad09);
    /* 0043ad09: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ad0c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ad0f: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043ad13: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 0043ad19: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043ad1c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ad1f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0043ad22:; BB(0x0043ad22);
    /* 0043ad22: jmp 0x43acc5 */ goto L_0043acc5;
L_0043ad24:; BB(0x0043ad24);
    /* 0043ad24: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ad27: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ad29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ad2a: ret  */ FN_RET(0x0043acac); r_esp += 4; return;
}

void f_0043ad2b(void) /* FUN_0043ad2b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ad2b);
    /* 0043ad2b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ad2c: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ad2e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043ad31: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043ad34: mov dword ptr [ebp - 4], 0x80000000 */ W32((u32)(r_ebp+0xfffffffcu), 0x80000000u);
    /* 0043ad3b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043ad42: jmp 0x43ad4d */ goto L_0043ad4d;
L_0043ad44:; BB(0x0043ad44);
    /* 0043ad44: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ad47: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043ad4a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043ad4d:; BB(0x0043ad4d);
    /* 0043ad4d: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ad51: jge 0x43ada3 */ if ((fS==fO)) goto L_0043ada3;
L_0043ad53:; BB(0x0043ad53);
    /* 0043ad53: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ad56: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ad59: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ad5e: je 0x43ada1 */ if (fZ) goto L_0043ada1;
L_0043ad60:; BB(0x0043ad60);
    /* 0043ad60: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ad63: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ad66: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043ad6a: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x43ad6fu); f_00425973();
    /* 0043ad6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ad71: je 0x43ada1 */ if (fZ) goto L_0043ada1;
L_0043ad73:; BB(0x0043ad73);
    /* 0043ad73: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ad76: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ad79: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043ad7d: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0043ad80: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0043ad83: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ad86: jle 0x43ada1 */ if ((fZ||fS!=fO)) goto L_0043ada1;
L_0043ad88:; BB(0x0043ad88);
    /* 0043ad88: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ad8b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ad8e: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043ad92: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043ad95: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0043ad98: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043ad9b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ad9e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0043ada1:; BB(0x0043ada1);
    /* 0043ada1: jmp 0x43ad44 */ goto L_0043ad44;
L_0043ada3:; BB(0x0043ada3);
    /* 0043ada3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ada6: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ada8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ada9: ret  */ FN_RET(0x0043ad2b); r_esp += 4; return;
}

void f_0043adaa(void) /* FUN_0043adaa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043adaa);
    /* 0043adaa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043adab: mov ebp, esp */ r_ebp = r_esp;
    /* 0043adad: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043adb0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043adb1: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0043adb4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0043adbb: mov dword ptr [ebp - 0x50], 0xffffffff */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffffu);
    /* 0043adc2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043adc9: mov dword ptr [ebp - 0x44], 0xffffffff */ W32((u32)(r_ebp+0xffffffbcu), 0xffffffffu);
    /* 0043add0: mov dword ptr [ebp - 0x40], 0xffffffff */ W32((u32)(r_ebp+0xffffffc0u), 0xffffffffu);
    /* 0043add7: mov dword ptr [ebp - 0x3c], 0xffffffff */ W32((u32)(r_ebp+0xffffffc4u), 0xffffffffu);
    /* 0043adde: mov dword ptr [ebp - 0x38], 0xffffffff */ W32((u32)(r_ebp+0xffffffc8u), 0xffffffffu);
    /* 0043ade5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043adec: mov dword ptr [ebp - 0x10], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff0u), 0x3ff00000u);
    /* 0043adf3: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0043adfa: mov dword ptr [ebp - 0x28], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffd8u), 0x3fe00000u);
    /* 0043ae01: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0043ae08: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043ae0b: call 0x4373a3 */ r_esp -= 4; W32(r_esp, 0x43ae10u); f_004373a3();
    /* 0043ae10: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043ae13: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043ae16: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x43ae1bu); f_0043c040();
    /* 0043ae1b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043ae1e: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0043ae21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ae22: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0043ae25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ae26: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043ae2c: call 0x45d949 */ r_esp -= 4; W32(r_esp, 0x43ae31u); f_0045d949();
    /* 0043ae31: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043ae34: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043ae37: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0043ae3a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043ae3d: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043ae40: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043ae43: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ae47: jne 0x43ae56 */ if (!fZ) goto L_0043ae56;
L_0043ae49:; BB(0x0043ae49);
    /* 0043ae49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ae4c: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043ae4f: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043ae53: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0043ae56:; BB(0x0043ae56);
    /* 0043ae56: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0043ae5d: jmp 0x43ae68 */ goto L_0043ae68;
L_0043ae5f:; BB(0x0043ae5f);
    /* 0043ae5f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043ae62: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ae65: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0043ae68:; BB(0x0043ae68);
    /* 0043ae68: cmp dword ptr [ebp - 0x34], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ae6c: jge 0x43aeb9 */ if ((fS==fO)) goto L_0043aeb9;
L_0043ae6e:; BB(0x0043ae6e);
    /* 0043ae6e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043ae71: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043ae74: cmp dword ptr [eax + edx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ae79: je 0x43aeb7 */ if (fZ) goto L_0043aeb7;
L_0043ae7b:; BB(0x0043ae7b);
    /* 0043ae7b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043ae7e: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043ae81: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043ae85: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043ae88: call 0x42087c */ r_esp -= 4; W32(r_esp, 0x43ae8du); f_0042087c();
    /* 0043ae8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ae8f: jne 0x43aeb7 */ if (!fZ) goto L_0043aeb7;
L_0043ae91:; BB(0x0043ae91);
    /* 0043ae91: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043ae94: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043ae97: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043ae9b: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x43aea0u); f_00425973();
    /* 0043aea0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aea2: je 0x43aeb7 */ if (fZ) goto L_0043aeb7;
L_0043aea4:; BB(0x0043aea4);
    /* 0043aea4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043aea7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043aeaa: mov dword ptr [ebp + eax*4 - 0x40], ecx */ W32((u32)(r_ebp+r_eax*4+0xffffffc0u), r_ecx);
    /* 0043aeae: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043aeb1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043aeb4: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_0043aeb7:; BB(0x0043aeb7);
    /* 0043aeb7: jmp 0x43ae5f */ goto L_0043ae5f;
L_0043aeb9:; BB(0x0043aeb9);
    /* 0043aeb9: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aebd: jne 0x43aee8 */ if (!fZ) goto L_0043aee8;
L_0043aebf:; BB(0x0043aebf);
    /* 0043aebf: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aec3: je 0x43aee3 */ if (fZ) goto L_0043aee3;
L_0043aec5:; BB(0x0043aec5);
    /* 0043aec5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0043aec8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043aec9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043aecc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043aece: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043aed1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43aed4u); call_ind(t); }
    /* 0043aed4: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0043aed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043aed8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043aedb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043aedd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043aee0: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43aee3u); call_ind(t); }
L_0043aee3:; BB(0x0043aee3);
    /* 0043aee3: jmp 0x43b470 */ goto L_0043b470;
L_0043aee8:; BB(0x0043aee8);
    /* 0043aee8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043aeeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043aeec: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43aef1u); f_0060ee31();
    /* 0043aef1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043aef4: mov ecx, dword ptr [ebp + eax*4 - 0x40] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffc0u));
    /* 0043aef8: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043aefb: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043aeff: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043af02: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0043af06: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0043af09: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0043af0c: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043af0f: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0043af12: cmp dword ptr [ebp - 0x64], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043af16: ja 0x43b3ed */ if ((!fC&&!fZ)) goto L_0043b3ed;
L_0043af1c:; BB(0x0043af1c);
    /* 0043af1c: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0043af1f: jmp dword ptr [eax*4 + 0x43b477] */ { u32 t = R32((u32)(r_eax*4+0x43b477u)); switch (t) { case 0x43b15bu: goto L_0043b15b; case 0x43af26u: goto L_0043af26; case 0x43b1c6u: goto L_0043b1c6; case 0x43b38fu: goto L_0043b38f; default: UNSUP(0x0043af1f, "jump table entry is not a known target"); } }
L_0043af26:; BB(0x0043af26);
    /* 0043af26: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043af2d: mov dword ptr [ebp - 0x10], 0x3fe00000 */ W32((u32)(r_ebp+0xfffffff0u), 0x3fe00000u);
    /* 0043af34: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043af37: call 0x43ab30 */ r_esp -= 4; W32(r_esp, 0x43af3cu); f_0043ab30();
    /* 0043af3c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0043af3f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043af42: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043af45: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043af4b: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x43af50u); f_00448ca3();
    /* 0043af50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043af52: je 0x43b05d */ if (fZ) goto L_0043b05d;
L_0043af58:; BB(0x0043af58);
    /* 0043af58: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0043af5a: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43af5fu); f_0060ee31();
    /* 0043af5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043af62: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043af65: jle 0x43b05d */ if ((fZ||fS!=fO)) goto L_0043b05d;
L_0043af6b:; BB(0x0043af6b);
    /* 0043af6b: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043af6f: je 0x43afe7 */ if (fZ) goto L_0043afe7;
L_0043af71:; BB(0x0043af71);
    /* 0043af71: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043af74: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043af76: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043af79: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x43af7cu); call_ind(t); }
    /* 0043af7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043af7e: je 0x43afac */ if (fZ) goto L_0043afac;
L_0043af80:; BB(0x0043af80);
    /* 0043af80: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043af83: cmp dword ptr [ecx + 0x124], 0 */ {  u32 a = R32((u32)(r_ecx+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043af8a: jle 0x43afac */ if ((fZ||fS!=fO)) goto L_0043afac;
L_0043af8c:; BB(0x0043af8c);
    /* 0043af8c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043af93: mov dword ptr [ebp - 0x10], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff0u), 0x3ff00000u);
    /* 0043af9a: mov dword ptr [ebp - 0x50], 0x142 */ W32((u32)(r_ebp+0xffffffb0u), 0x142u);
    /* 0043afa1: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043afa4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043afa7: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043afac:; BB(0x0043afac);
    /* 0043afac: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043afaf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043afb1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043afb4: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43afb7u); call_ind(t); }
    /* 0043afb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043afb9: je 0x43afe7 */ if (fZ) goto L_0043afe7;
L_0043afbb:; BB(0x0043afbb);
    /* 0043afbb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043afbe: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043afc5: jge 0x43afe7 */ if ((fS==fO)) goto L_0043afe7;
L_0043afc7:; BB(0x0043afc7);
    /* 0043afc7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043afce: mov dword ptr [ebp - 0x10], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff0u), 0x3ff00000u);
    /* 0043afd5: mov dword ptr [ebp - 0x50], 0x144 */ W32((u32)(r_ebp+0xffffffb0u), 0x144u);
    /* 0043afdc: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043afdf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043afe2: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043afe7:; BB(0x0043afe7);
    /* 0043afe7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043afea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043afec: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043afef: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x43aff2u); call_ind(t); }
    /* 0043aff2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aff4: je 0x43b022 */ if (fZ) goto L_0043b022;
L_0043aff6:; BB(0x0043aff6);
    /* 0043aff6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043aff9: cmp dword ptr [ecx + 0x124], 0 */ {  u32 a = R32((u32)(r_ecx+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b000: jle 0x43b022 */ if ((fZ||fS!=fO)) goto L_0043b022;
L_0043b002:; BB(0x0043b002);
    /* 0043b002: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043b009: mov dword ptr [ebp - 0x10], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff0u), 0x3ff00000u);
    /* 0043b010: mov dword ptr [ebp - 0x50], 0x141 */ W32((u32)(r_ebp+0xffffffb0u), 0x141u);
    /* 0043b017: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043b01a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043b01d: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b022:; BB(0x0043b022);
    /* 0043b022: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043b025: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043b027: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043b02a: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43b02du); call_ind(t); }
    /* 0043b02d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b02f: je 0x43b05d */ if (fZ) goto L_0043b05d;
L_0043b031:; BB(0x0043b031);
    /* 0043b031: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043b034: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b03b: jge 0x43b05d */ if ((fS==fO)) goto L_0043b05d;
L_0043b03d:; BB(0x0043b03d);
    /* 0043b03d: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043b044: mov dword ptr [ebp - 0x10], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff0u), 0x3ff00000u);
    /* 0043b04b: mov dword ptr [ebp - 0x50], 0x143 */ W32((u32)(r_ebp+0xffffffb0u), 0x143u);
    /* 0043b052: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043b055: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043b058: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b05d:; BB(0x0043b05d);
    /* 0043b05d: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b061: je 0x43b081 */ if (fZ) goto L_0043b081;
L_0043b063:; BB(0x0043b063);
    /* 0043b063: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043b066: call 0x435ebd */ r_esp -= 4; W32(r_esp, 0x43b06bu); f_00435ebd();
    /* 0043b06b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b06d: je 0x43b081 */ if (fZ) goto L_0043b081;
L_0043b06f:; BB(0x0043b06f);
    /* 0043b06f: mov dword ptr [ebp - 0x50], 0x150 */ W32((u32)(r_ebp+0xffffffb0u), 0x150u);
    /* 0043b076: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043b079: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043b07c: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b081:; BB(0x0043b081);
    /* 0043b081: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043b084: call 0x435ebd */ r_esp -= 4; W32(r_esp, 0x43b089u); f_00435ebd();
    /* 0043b089: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b08b: je 0x43b09f */ if (fZ) goto L_0043b09f;
L_0043b08d:; BB(0x0043b08d);
    /* 0043b08d: mov dword ptr [ebp - 0x50], 0x14f */ W32((u32)(r_ebp+0xffffffb0u), 0x14fu);
    /* 0043b094: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043b097: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043b09a: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b09f:; BB(0x0043b09f);
    /* 0043b09f: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b0a3: je 0x43b109 */ if (fZ) goto L_0043b109;
L_0043b0a5:; BB(0x0043b0a5);
    /* 0043b0a5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043b0a8: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x43b0adu); f_004259f1();
    /* 0043b0ad: mov esi, eax */ r_esi = r_eax;
    /* 0043b0af: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b0b2: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x43b0b7u); f_0043c040();
    /* 0043b0b7: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b0b9: jne 0x43b109 */ if (!fZ) goto L_0043b109;
L_0043b0bb:; BB(0x0043b0bb);
    /* 0043b0bb: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b0be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043b0c0: cmp dword ptr [ecx + 0x1cc], 3 */ {  u32 a = R32((u32)(r_ecx+0x1ccu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b0c7: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0043b0ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b0cc: je 0x43b109 */ if (fZ) goto L_0043b109;
L_0043b0ce:; BB(0x0043b0ce);
    /* 0043b0ce: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043b0d1: call 0x435d2d */ r_esp -= 4; W32(r_esp, 0x43b0d6u); f_00435d2d();
    /* 0043b0d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b0d8: je 0x43b109 */ if (fZ) goto L_0043b109;
L_0043b0da:; BB(0x0043b0da);
    /* 0043b0da: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043b0dd: call 0x435d2d */ r_esp -= 4; W32(r_esp, 0x43b0e2u); f_00435d2d();
    /* 0043b0e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b0e4: je 0x43b109 */ if (fZ) goto L_0043b109;
L_0043b0e6:; BB(0x0043b0e6);
    /* 0043b0e6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b0e8: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43b0edu); f_0060ee31();
    /* 0043b0ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b0f0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0043b0f2: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0043b0f4: and al, 0xf5 */ {  u32 a = (u8)r_eax; u32 b = 0xf5u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0043b0f6: add eax, 0x140 */ {  u32 a = r_eax; u32 b = 0x140u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b0fb: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0043b0fe: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043b101: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043b104: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b109:; BB(0x0043b109);
    /* 0043b109: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043b10c: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x43b111u); f_004259f1();
    /* 0043b111: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b114: jne 0x43b156 */ if (!fZ) goto L_0043b156;
L_0043b116:; BB(0x0043b116);
    /* 0043b116: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043b119: call 0x435d2d */ r_esp -= 4; W32(r_esp, 0x43b11eu); f_00435d2d();
    /* 0043b11e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b120: je 0x43b156 */ if (fZ) goto L_0043b156;
L_0043b122:; BB(0x0043b122);
    /* 0043b122: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b125: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043b127: cmp dword ptr [ecx + 0x1cc], 3 */ {  u32 a = R32((u32)(r_ecx+0x1ccu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b12e: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0043b131: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b133: je 0x43b156 */ if (fZ) goto L_0043b156;
L_0043b135:; BB(0x0043b135);
    /* 0043b135: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0043b13c: mov dword ptr [ebp - 0x28], 0x3fd00000 */ W32((u32)(r_ebp+0xffffffd8u), 0x3fd00000u);
    /* 0043b143: mov dword ptr [ebp - 0x50], 0x134 */ W32((u32)(r_ebp+0xffffffb0u), 0x134u);
    /* 0043b14a: mov dword ptr [ebp - 4], 0x152 */ W32((u32)(r_ebp+0xfffffffcu), 0x152u);
    /* 0043b151: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b156:; BB(0x0043b156);
    /* 0043b156: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b15b:; BB(0x0043b15b);
    /* 0043b15b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043b162: mov dword ptr [ebp - 0x10], 0x3fe00000 */ W32((u32)(r_ebp+0xfffffff0u), 0x3fe00000u);
    /* 0043b169: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b16d: jne 0x43b174 */ if (!fZ) goto L_0043b174;
L_0043b16f:; BB(0x0043b16f);
    /* 0043b16f: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b174:; BB(0x0043b174);
    /* 0043b174: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b177: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b17a: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043b17e: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x43b183u); f_004259a0();
    /* 0043b183: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b185: je 0x43b1a7 */ if (fZ) goto L_0043b1a7;
L_0043b187:; BB(0x0043b187);
    /* 0043b187: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043b18a: call 0x435d2d */ r_esp -= 4; W32(r_esp, 0x43b18fu); f_00435d2d();
    /* 0043b18f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b191: je 0x43b1a5 */ if (fZ) goto L_0043b1a5;
L_0043b193:; BB(0x0043b193);
    /* 0043b193: mov dword ptr [ebp - 0x50], 0x133 */ W32((u32)(r_ebp+0xffffffb0u), 0x133u);
    /* 0043b19a: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043b19d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043b1a0: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b1a5:; BB(0x0043b1a5);
    /* 0043b1a5: jmp 0x43b1c1 */ goto L_0043b1c1;
L_0043b1a7:; BB(0x0043b1a7);
    /* 0043b1a7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b1aa: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b1ad: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043b1b1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0043b1b4: mov dword ptr [ebp - 0x50], 0x132 */ W32((u32)(r_ebp+0xffffffb0u), 0x132u);
    /* 0043b1bb: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043b1be: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043b1c1:; BB(0x0043b1c1);
    /* 0043b1c1: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b1c6:; BB(0x0043b1c6);
    /* 0043b1c6: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043b1cd: mov dword ptr [ebp - 0x10], 0x3fe80000 */ W32((u32)(r_ebp+0xfffffff0u), 0x3fe80000u);
    /* 0043b1d4: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b1d7: cmp dword ptr [ecx + 0x1cc], -2 */ {  u32 a = R32((u32)(r_ecx+0x1ccu)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b1de: jge 0x43b20c */ if ((fS==fO)) goto L_0043b20c;
L_0043b1e0:; BB(0x0043b1e0);
    /* 0043b1e0: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b1e4: je 0x43b20c */ if (fZ) goto L_0043b20c;
L_0043b1e6:; BB(0x0043b1e6);
    /* 0043b1e6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b1e9: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b1ec: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043b1f0: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x43b1f5u); f_004259a0();
    /* 0043b1f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b1f7: je 0x43b20c */ if (fZ) goto L_0043b20c;
L_0043b1f9:; BB(0x0043b1f9);
    /* 0043b1f9: mov dword ptr [ebp - 0x50], 0x151 */ W32((u32)(r_ebp+0xffffffb0u), 0x151u);
    /* 0043b200: mov dword ptr [ebp - 4], 0x154 */ W32((u32)(r_ebp+0xfffffffcu), 0x154u);
    /* 0043b207: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b20c:; BB(0x0043b20c);
    /* 0043b20c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b20f: call 0x43acac */ r_esp -= 4; W32(r_esp, 0x43b214u); f_0043acac();
    /* 0043b214: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b217: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043b21b: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 0043b221: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b224: jle 0x43b29e */ if ((fZ||fS!=fO)) goto L_0043b29e;
L_0043b226:; BB(0x0043b226);
    /* 0043b226: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b229: call 0x43acac */ r_esp -= 4; W32(r_esp, 0x43b22eu); f_0043acac();
    /* 0043b22e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b231: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043b235: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 0043b23b: cmp eax, dword ptr [ebp - 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b23e: jle 0x43b24e */ if ((fZ||fS!=fO)) goto L_0043b24e;
L_0043b240:; BB(0x0043b240);
    /* 0043b240: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043b247: mov dword ptr [ebp - 0x10], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff0u), 0x3ff00000u);
L_0043b24e:; BB(0x0043b24e);
    /* 0043b24e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b251: call 0x43acac */ r_esp -= 4; W32(r_esp, 0x43b256u); f_0043acac();
    /* 0043b256: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b259: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043b25d: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x43b262u); f_004259a0();
    /* 0043b262: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b264: je 0x43b279 */ if (fZ) goto L_0043b279;
L_0043b266:; BB(0x0043b266);
    /* 0043b266: mov dword ptr [ebp - 0x50], 0x13c */ W32((u32)(r_ebp+0xffffffb0u), 0x13cu);
    /* 0043b26d: mov dword ptr [ebp - 4], 0x153 */ W32((u32)(r_ebp+0xfffffffcu), 0x153u);
    /* 0043b274: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b279:; BB(0x0043b279);
    /* 0043b279: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b27c: call 0x43acac */ r_esp -= 4; W32(r_esp, 0x43b281u); f_0043acac();
    /* 0043b281: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b284: mov eax, dword ptr [edx + eax*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20u));
    /* 0043b288: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043b28b: mov dword ptr [ebp - 0x50], 0x13b */ W32((u32)(r_ebp+0xffffffb0u), 0x13bu);
    /* 0043b292: mov dword ptr [ebp - 4], 0x152 */ W32((u32)(r_ebp+0xfffffffcu), 0x152u);
    /* 0043b299: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b29e:; BB(0x0043b29e);
    /* 0043b29e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b2a1: call 0x43abae */ r_esp -= 4; W32(r_esp, 0x43b2a6u); f_0043abae();
    /* 0043b2a6: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b2a9: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043b2ad: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b2b0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043b2b2: cmp dword ptr [edx + 0x124], eax */ {  u32 a = R32((u32)(r_edx+0x124u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b2b8: jge 0x43b334 */ if ((fS==fO)) goto L_0043b334;
L_0043b2ba:; BB(0x0043b2ba);
    /* 0043b2ba: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b2bd: call 0x43acac */ r_esp -= 4; W32(r_esp, 0x43b2c2u); f_0043acac();
    /* 0043b2c2: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b2c5: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043b2c9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043b2cc: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043b2ce: cmp dword ptr [edx + 0x124], eax */ {  u32 a = R32((u32)(r_edx+0x124u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b2d4: jge 0x43b2e4 */ if ((fS==fO)) goto L_0043b2e4;
L_0043b2d6:; BB(0x0043b2d6);
    /* 0043b2d6: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043b2dd: mov dword ptr [ebp - 0x10], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff0u), 0x3ff00000u);
L_0043b2e4:; BB(0x0043b2e4);
    /* 0043b2e4: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b2e7: call 0x43abae */ r_esp -= 4; W32(r_esp, 0x43b2ecu); f_0043abae();
    /* 0043b2ec: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b2ef: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043b2f3: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x43b2f8u); f_004259a0();
    /* 0043b2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b2fa: je 0x43b30f */ if (fZ) goto L_0043b30f;
L_0043b2fc:; BB(0x0043b2fc);
    /* 0043b2fc: mov dword ptr [ebp - 0x50], 0x13e */ W32((u32)(r_ebp+0xffffffb0u), 0x13eu);
    /* 0043b303: mov dword ptr [ebp - 4], 0x155 */ W32((u32)(r_ebp+0xfffffffcu), 0x155u);
    /* 0043b30a: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b30f:; BB(0x0043b30f);
    /* 0043b30f: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b312: call 0x43abae */ r_esp -= 4; W32(r_esp, 0x43b317u); f_0043abae();
    /* 0043b317: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b31a: mov eax, dword ptr [edx + eax*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20u));
    /* 0043b31e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043b321: mov dword ptr [ebp - 0x50], 0x13d */ W32((u32)(r_ebp+0xffffffb0u), 0x13du);
    /* 0043b328: mov dword ptr [ebp - 4], 0x154 */ W32((u32)(r_ebp+0xfffffffcu), 0x154u);
    /* 0043b32f: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b334:; BB(0x0043b334);
    /* 0043b334: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b337: call 0x43ab30 */ r_esp -= 4; W32(r_esp, 0x43b33cu); f_0043ab30();
    /* 0043b33c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0043b33f: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b343: je 0x43b38d */ if (fZ) goto L_0043b38d;
L_0043b345:; BB(0x0043b345);
    /* 0043b345: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0043b348: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b349: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043b34c: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x43b351u); f_004259f1();
    /* 0043b351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b352: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043b358: call 0x43c910 */ r_esp -= 4; W32(r_esp, 0x43b35du); f_0043c910();
    /* 0043b35d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0043b360: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0043b363: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043b366: call 0x435ebd */ r_esp -= 4; W32(r_esp, 0x43b36bu); f_00435ebd();
    /* 0043b36b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b36d: je 0x43b38d */ if (fZ) goto L_0043b38d;
L_0043b36f:; BB(0x0043b36f);
    /* 0043b36f: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b373: jg 0x43b384 */ if ((!fZ&&fS==fO)) goto L_0043b384;
L_0043b375:; BB(0x0043b375);
    /* 0043b375: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043b378: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043b37b: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x43b380u); f_00426819();
    /* 0043b380: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b382: je 0x43b38d */ if (fZ) goto L_0043b38d;
L_0043b384:; BB(0x0043b384);
    /* 0043b384: mov dword ptr [ebp - 0x50], 0x13f */ W32((u32)(r_ebp+0xffffffb0u), 0x13fu);
    /* 0043b38b: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b38d:; BB(0x0043b38d);
    /* 0043b38d: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b38f:; BB(0x0043b38f);
    /* 0043b38f: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043b395: call 0x4490ac */ r_esp -= 4; W32(r_esp, 0x43b39au); f_004490ac();
    /* 0043b39a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b39d: jne 0x43b3a1 */ if (!fZ) goto L_0043b3a1;
L_0043b39f:; BB(0x0043b39f);
    /* 0043b39f: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b3a1:; BB(0x0043b3a1);
    /* 0043b3a1: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043b3a7: call 0x4490ac */ r_esp -= 4; W32(r_esp, 0x43b3acu); f_004490ac();
    /* 0043b3ac: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b3af: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043b3b3: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x43b3b8u); f_004259a0();
    /* 0043b3b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b3ba: je 0x43b3cb */ if (fZ) goto L_0043b3cb;
L_0043b3bc:; BB(0x0043b3bc);
    /* 0043b3bc: mov dword ptr [ebp - 0x50], 0x146 */ W32((u32)(r_ebp+0xffffffb0u), 0x146u);
    /* 0043b3c3: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043b3c6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043b3c9: jmp 0x43b3ed */ goto L_0043b3ed;
L_0043b3cb:; BB(0x0043b3cb);
    /* 0043b3cb: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043b3d1: call 0x4490ac */ r_esp -= 4; W32(r_esp, 0x43b3d6u); f_004490ac();
    /* 0043b3d6: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043b3d9: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043b3dd: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0043b3e0: mov dword ptr [ebp - 0x50], 0x145 */ W32((u32)(r_ebp+0xffffffb0u), 0x145u);
    /* 0043b3e7: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043b3ea: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043b3ed:; BB(0x0043b3ed);
    /* 0043b3ed: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b3f1: je 0x43b40d */ if (fZ) goto L_0043b40d;
L_0043b3f3:; BB(0x0043b3f3);
    /* 0043b3f3: cmp dword ptr [ebp - 0x44], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b3f7: je 0x43b40d */ if (fZ) goto L_0043b40d;
L_0043b3f9:; BB(0x0043b3f9);
    /* 0043b3f9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3fb: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43b400u); f_0060ee31();
    /* 0043b400: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b403: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b405: je 0x43b40d */ if (fZ) goto L_0043b40d;
L_0043b407:; BB(0x0043b407);
    /* 0043b407: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043b40a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0043b40d:; BB(0x0043b40d);
    /* 0043b40d: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b411: je 0x43b422 */ if (fZ) goto L_0043b422;
L_0043b413:; BB(0x0043b413);
    /* 0043b413: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0043b416: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b417: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043b41a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043b41c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043b41f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43b422u); call_ind(t); }
L_0043b422:; BB(0x0043b422);
    /* 0043b422: cmp dword ptr [ebp - 0x50], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b426: jne 0x43b42e */ if (!fZ) goto L_0043b42e;
L_0043b428:; BB(0x0043b428);
    /* 0043b428: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b42c: je 0x43b45b */ if (fZ) goto L_0043b45b;
L_0043b42e:; BB(0x0043b42e);
    /* 0043b42e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0043b431: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b432: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043b435: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b436: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b439: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b43a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b43d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b43e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043b441: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b442: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043b445: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b446: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b449: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b44a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043b44d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b44e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043b451: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0043b454: call 0x42099e */ r_esp -= 4; W32(r_esp, 0x43b459u); f_0042099e();
    /* 0043b459: jmp 0x43b470 */ goto L_0043b470;
L_0043b45b:; BB(0x0043b45b);
    /* 0043b45b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b45f: je 0x43b470 */ if (fZ) goto L_0043b470;
L_0043b461:; BB(0x0043b461);
    /* 0043b461: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0043b464: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b465: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043b468: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043b46a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043b46d: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43b470u); call_ind(t); }
L_0043b470:; BB(0x0043b470);
    /* 0043b470: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043b471: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b473: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b474: ret 0x10 */ FN_RET(0x0043adaa); r_esp += 20; return;
}

void f_0043b487(void) /* FUN_0043b487 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b487);
    /* 0043b487: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b488: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b48a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b48d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043b490: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043b497: jmp 0x43b4a2 */ goto L_0043b4a2;
L_0043b499:; BB(0x0043b499);
    /* 0043b499: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b49c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b49f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043b4a2:; BB(0x0043b4a2);
    /* 0043b4a2: cmp dword ptr [ebp - 4], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b4a6: jge 0x43b4c7 */ if ((fS==fO)) goto L_0043b4c7;
L_0043b4a8:; BB(0x0043b4a8);
    /* 0043b4a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b4ab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b4ae: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0043b4b2: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x43b4b7u); f_00427ecb();
    /* 0043b4b7: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b4ba: jne 0x43b4c5 */ if (!fZ) goto L_0043b4c5;
L_0043b4bc:; BB(0x0043b4bc);
    /* 0043b4bc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043b4bf: add ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b4c2: call dword ptr [ebp + 0x10] */ { u32 t = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, 0x43b4c5u); call_ind(t); }
L_0043b4c5:; BB(0x0043b4c5);
    /* 0043b4c5: jmp 0x43b499 */ goto L_0043b499;
L_0043b4c7:; BB(0x0043b4c7);
    /* 0043b4c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b4c9: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b4cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b4cc: ret 0x18 */ FN_RET(0x0043b487); r_esp += 28; return;
}

void f_0043b4cf(void) /* FUN_0043b4cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b4cf);
    /* 0043b4cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b4d0: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b4d2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b4d5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043b4d8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043b4df: jmp 0x43b4ea */ goto L_0043b4ea;
L_0043b4e1:; BB(0x0043b4e1);
    /* 0043b4e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b4e4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b4e7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043b4ea:; BB(0x0043b4ea);
    /* 0043b4ea: cmp dword ptr [ebp - 4], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b4ee: jge 0x43b50b */ if ((fS==fO)) goto L_0043b50b;
L_0043b4f0:; BB(0x0043b4f0);
    /* 0043b4f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b4f3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b4f6: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0043b4fa: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x43b4ffu); f_00427ecb();
    /* 0043b4ff: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b502: jne 0x43b509 */ if (!fZ) goto L_0043b509;
L_0043b504:; BB(0x0043b504);
    /* 0043b504: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b507: jmp 0x43b50d */ goto L_0043b50d;
L_0043b509:; BB(0x0043b509);
    /* 0043b509: jmp 0x43b4e1 */ goto L_0043b4e1;
L_0043b50b:; BB(0x0043b50b);
    /* 0043b50b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043b50d:; BB(0x0043b50d);
    /* 0043b50d: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b50f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b510: ret 4 */ FN_RET(0x0043b4cf); r_esp += 8; return;
}

void f_0043b513(void) /* FUN_0043b513 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b513);
    /* 0043b513: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b514: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b516: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b519: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043b51c: mov dword ptr [ebp - 4], 0x64 */ W32((u32)(r_ebp+0xfffffffcu), 0x64u);
L_0043b523:; BB(0x0043b523);
    /* 0043b523: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b526: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b529: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b52c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043b52f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b531: je 0x43b589 */ if (fZ) goto L_0043b589;
L_0043b533:; BB(0x0043b533);
    /* 0043b533: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043b53a: jmp 0x43b545 */ goto L_0043b545;
L_0043b53c:; BB(0x0043b53c);
    /* 0043b53c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b53f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043b542: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0043b545:; BB(0x0043b545);
    /* 0043b545: cmp dword ptr [ebp - 8], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b549: jge 0x43b587 */ if ((fS==fO)) goto L_0043b587;
L_0043b54b:; BB(0x0043b54b);
    /* 0043b54b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b54e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b551: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0043b555: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x43b55au); f_00427ecb();
    /* 0043b55a: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b55d: jne 0x43b585 */ if (!fZ) goto L_0043b585;
L_0043b55f:; BB(0x0043b55f);
    /* 0043b55f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b561: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43b566u); f_0060ee31();
    /* 0043b566: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b569: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b56b: jne 0x43b585 */ if (!fZ) goto L_0043b585;
L_0043b56d:; BB(0x0043b56d);
    /* 0043b56d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b570: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b573: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0043b577: call 0x4338a3 */ r_esp -= 4; W32(r_esp, 0x43b57cu); f_004338a3();
    /* 0043b57c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b57e: je 0x43b585 */ if (fZ) goto L_0043b585;
L_0043b580:; BB(0x0043b580);
    /* 0043b580: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b583: jmp 0x43b58b */ goto L_0043b58b;
L_0043b585:; BB(0x0043b585);
    /* 0043b585: jmp 0x43b53c */ goto L_0043b53c;
L_0043b587:; BB(0x0043b587);
    /* 0043b587: jmp 0x43b523 */ goto L_0043b523;
L_0043b589:; BB(0x0043b589);
    /* 0043b589: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043b58b:; BB(0x0043b58b);
    /* 0043b58b: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b58d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b58e: ret 4 */ FN_RET(0x0043b513); r_esp += 8; return;
}

void f_0043b591(void) /* FUN_0043b591 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b591);
    /* 0043b591: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b592: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b594: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b597: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043b59a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b59d: call 0x4373a3 */ r_esp -= 4; W32(r_esp, 0x43b5a2u); f_004373a3();
    /* 0043b5a2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043b5a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b5a8: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 0043b5ae: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043b5b1: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5b3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b5b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b5ba: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b5bfu); f_0043c869();
    /* 0043b5bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b5c1: je 0x43b5e1 */ if (fZ) goto L_0043b5e1;
L_0043b5c3:; BB(0x0043b5c3);
    /* 0043b5c3: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5c5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b5c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b5cc: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b5d1u); f_0043c869();
    /* 0043b5d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b5d3: jne 0x43b5e1 */ if (!fZ) goto L_0043b5e1;
L_0043b5d5:; BB(0x0043b5d5);
    /* 0043b5d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5d7: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b5dc: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43b5e1u); f_0043b819();
L_0043b5e1:; BB(0x0043b5e1);
    /* 0043b5e1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b5e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b5ea: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b5efu); f_0043c869();
    /* 0043b5ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b5f1: je 0x43b611 */ if (fZ) goto L_0043b611;
L_0043b5f3:; BB(0x0043b5f3);
    /* 0043b5f3: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5f5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b5f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b5fc: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b601u); f_0043c869();
    /* 0043b601: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b603: jne 0x43b611 */ if (!fZ) goto L_0043b611;
L_0043b605:; BB(0x0043b605);
    /* 0043b605: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b607: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0043b609: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b60c: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43b611u); f_0043b819();
L_0043b611:; BB(0x0043b611);
    /* 0043b611: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b613: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b617: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b61a: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b61fu); f_0043c869();
    /* 0043b61f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b621: je 0x43b641 */ if (fZ) goto L_0043b641;
L_0043b623:; BB(0x0043b623);
    /* 0043b623: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b625: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b628: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b629: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b62c: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b631u); f_0043c869();
    /* 0043b631: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b633: jne 0x43b641 */ if (!fZ) goto L_0043b641;
L_0043b635:; BB(0x0043b635);
    /* 0043b635: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b637: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b639: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b63c: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43b641u); f_0043b819();
L_0043b641:; BB(0x0043b641);
    /* 0043b641: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b643: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b646: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b647: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b64a: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b64fu); f_0043c869();
    /* 0043b64f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b651: je 0x43b671 */ if (fZ) goto L_0043b671;
L_0043b653:; BB(0x0043b653);
    /* 0043b653: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b655: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b659: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b65c: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b661u); f_0043c869();
    /* 0043b661: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b663: jne 0x43b671 */ if (!fZ) goto L_0043b671;
L_0043b665:; BB(0x0043b665);
    /* 0043b665: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b667: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b669: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b66c: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43b671u); f_0043b819();
L_0043b671:; BB(0x0043b671);
    /* 0043b671: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b673: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b676: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b677: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b67a: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b67fu); f_0043c869();
    /* 0043b67f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b681: je 0x43b6a1 */ if (fZ) goto L_0043b6a1;
L_0043b683:; BB(0x0043b683);
    /* 0043b683: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0043b685: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b688: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b689: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b68c: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b691u); f_0043c869();
    /* 0043b691: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b693: jne 0x43b6a1 */ if (!fZ) goto L_0043b6a1;
L_0043b695:; BB(0x0043b695);
    /* 0043b695: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b697: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0043b699: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b69c: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43b6a1u); f_0043b819();
L_0043b6a1:; BB(0x0043b6a1);
    /* 0043b6a1: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b6a3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b6a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b6a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b6aa: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b6afu); f_0043c869();
    /* 0043b6af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b6b1: je 0x43b6d1 */ if (fZ) goto L_0043b6d1;
L_0043b6b3:; BB(0x0043b6b3);
    /* 0043b6b3: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b6b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b6b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b6b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b6bc: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b6c1u); f_0043c869();
    /* 0043b6c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b6c3: jne 0x43b6d1 */ if (!fZ) goto L_0043b6d1;
L_0043b6c5:; BB(0x0043b6c5);
    /* 0043b6c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b6c7: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b6c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b6cc: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43b6d1u); f_0043b819();
L_0043b6d1:; BB(0x0043b6d1);
    /* 0043b6d1: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b6d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b6d4: ret  */ FN_RET(0x0043b591); r_esp += 4; return;
}

void f_0043b6d5(void) /* FUN_0043b6d5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b6d5);
    /* 0043b6d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b6d6: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b6d8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b6db: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043b6de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b6e1: call 0x4373a3 */ r_esp -= 4; W32(r_esp, 0x43b6e6u); f_004373a3();
    /* 0043b6e6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043b6e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b6ec: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 0043b6f2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043b6f5: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b6f7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b6fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b6fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b6fe: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b703u); f_0043c869();
    /* 0043b703: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b705: je 0x43b725 */ if (fZ) goto L_0043b725;
L_0043b707:; BB(0x0043b707);
    /* 0043b707: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b709: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b70c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b70d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b710: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b715u); f_0043c869();
    /* 0043b715: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b717: jne 0x43b725 */ if (!fZ) goto L_0043b725;
L_0043b719:; BB(0x0043b719);
    /* 0043b719: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b71b: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b71d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b720: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43b725u); f_0043b819();
L_0043b725:; BB(0x0043b725);
    /* 0043b725: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b727: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b72a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b72b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b72e: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b733u); f_0043c869();
    /* 0043b733: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b735: je 0x43b755 */ if (fZ) goto L_0043b755;
L_0043b737:; BB(0x0043b737);
    /* 0043b737: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b739: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b73c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b73d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b740: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b745u); f_0043c869();
    /* 0043b745: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b747: jne 0x43b755 */ if (!fZ) goto L_0043b755;
L_0043b749:; BB(0x0043b749);
    /* 0043b749: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b74b: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b74d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b750: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43b755u); f_0043b819();
L_0043b755:; BB(0x0043b755);
    /* 0043b755: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b757: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b75a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b75b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b75e: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b763u); f_0043c869();
    /* 0043b763: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b765: je 0x43b785 */ if (fZ) goto L_0043b785;
L_0043b767:; BB(0x0043b767);
    /* 0043b767: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b769: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b76c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b76d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b770: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b775u); f_0043c869();
    /* 0043b775: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b777: jne 0x43b785 */ if (!fZ) goto L_0043b785;
L_0043b779:; BB(0x0043b779);
    /* 0043b779: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b77b: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b77d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b780: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43b785u); f_0043b819();
L_0043b785:; BB(0x0043b785);
    /* 0043b785: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b787: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b78a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b78b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b78e: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b793u); f_0043c869();
    /* 0043b793: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b795: je 0x43b7b5 */ if (fZ) goto L_0043b7b5;
L_0043b797:; BB(0x0043b797);
    /* 0043b797: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b799: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b79c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b79d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b7a0: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b7a5u); f_0043c869();
    /* 0043b7a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b7a7: jne 0x43b7b5 */ if (!fZ) goto L_0043b7b5;
L_0043b7a9:; BB(0x0043b7a9);
    /* 0043b7a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7ab: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b7b0: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43b7b5u); f_0043b819();
L_0043b7b5:; BB(0x0043b7b5);
    /* 0043b7b5: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b7ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b7be: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b7c3u); f_0043c869();
    /* 0043b7c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b7c5: je 0x43b7e5 */ if (fZ) goto L_0043b7e5;
L_0043b7c7:; BB(0x0043b7c7);
    /* 0043b7c7: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7c9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b7cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b7d0: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b7d5u); f_0043c869();
    /* 0043b7d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b7d7: jne 0x43b7e5 */ if (!fZ) goto L_0043b7e5;
L_0043b7d9:; BB(0x0043b7d9);
    /* 0043b7d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7db: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b7e0: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43b7e5u); f_0043b819();
L_0043b7e5:; BB(0x0043b7e5);
    /* 0043b7e5: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7e7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b7ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b7ee: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b7f3u); f_0043c869();
    /* 0043b7f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b7f5: je 0x43b815 */ if (fZ) goto L_0043b815;
L_0043b7f7:; BB(0x0043b7f7);
    /* 0043b7f7: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b7fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b800: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b805u); f_0043c869();
    /* 0043b805: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b807: jne 0x43b815 */ if (!fZ) goto L_0043b815;
L_0043b809:; BB(0x0043b809);
    /* 0043b809: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b80b: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0043b80d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b810: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43b815u); f_0043b819();
L_0043b815:; BB(0x0043b815);
    /* 0043b815: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b817: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b818: ret  */ FN_RET(0x0043b6d5); r_esp += 4; return;
}

void f_0043b819(void) /* FUN_0043b819 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b819);
    /* 0043b819: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b81a: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b81c: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b81f: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0043b822: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0043b829: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0043b830: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043b837: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043b83e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043b841: call 0x4373a3 */ r_esp -= 4; W32(r_esp, 0x43b846u); f_004373a3();
    /* 0043b846: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043b849: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b84c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043b84f: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x43b854u); f_00426819();
    /* 0043b854: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0043b857: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043b85a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b85b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b85e: mov eax, dword ptr [edx + 0x108] */ r_eax = R32((u32)(r_edx+0x108u));
    /* 0043b864: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b865: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043b868: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43b86du); f_0043c869();
    /* 0043b86d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b86f: je 0x43b876 */ if (fZ) goto L_0043b876;
L_0043b871:; BB(0x0043b871);
    /* 0043b871: jmp 0x43b9c9 */ goto L_0043b9c9;
L_0043b876:; BB(0x0043b876);
    /* 0043b876: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043b879: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b87a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043b87d: call 0x43b4cf */ r_esp -= 4; W32(r_esp, 0x43b882u); f_0043b4cf();
    /* 0043b882: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043b885: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b888: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0043b88b: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0043b88f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0043b892: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b895: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b896: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b899: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 0043b89f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b8a0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043b8a3: call 0x43a9a6 */ r_esp -= 4; W32(r_esp, 0x43b8a8u); f_0043a9a6();
    /* 0043b8a8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043b8ab: cmp dword ptr [ebp + 8], 0x37 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b8af: jl 0x43b8b7 */ if ((fS!=fO)) goto L_0043b8b7;
L_0043b8b1:; BB(0x0043b8b1);
    /* 0043b8b1: cmp dword ptr [ebp + 8], 0x3c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b8b5: jle 0x43b8c3 */ if ((fZ||fS!=fO)) goto L_0043b8c3;
L_0043b8b7:; BB(0x0043b8b7);
    /* 0043b8b7: cmp dword ptr [ebp + 8], 0x3d */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b8bb: jl 0x43b909 */ if ((fS!=fO)) goto L_0043b909;
L_0043b8bd:; BB(0x0043b8bd);
    /* 0043b8bd: cmp dword ptr [ebp + 8], 0x42 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x42u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b8c1: jg 0x43b909 */ if ((!fZ&&fS==fO)) goto L_0043b909;
L_0043b8c3:; BB(0x0043b8c3);
    /* 0043b8c3: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 0043b8c6: fdiv qword ptr [0x6347a8] */ ST(0) = ST(0) / R_F64((u32)(0x6347a8u));
    /* 0043b8cc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b8cf: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0043b8d2: call 0x624af0 */ r_esp -= 4; W32(r_esp, 0x43b8d7u); f_00624af0();
    /* 0043b8d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b8da: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x43b8dfu); f_00624144();
    /* 0043b8df: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043b8e2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b8e5: add edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043b8e8: cmp edx, dword ptr [ebp - 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b8eb: jle 0x43b8f2 */ if ((fZ||fS!=fO)) goto L_0043b8f2;
L_0043b8ed:; BB(0x0043b8ed);
    /* 0043b8ed: jmp 0x43b9c9 */ goto L_0043b9c9;
L_0043b8f2:; BB(0x0043b8f2);
    /* 0043b8f2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b8f5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043b8f7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043b8fa: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0043b8fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b8fe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b901: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0043b904: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x43b909u); f_004267ae();
L_0043b909:; BB(0x0043b909);
    /* 0043b909: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043b90c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b90d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043b910: call 0x43a3fe */ r_esp -= 4; W32(r_esp, 0x43b915u); f_0043a3fe();
    /* 0043b915: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b917: jne 0x43b929 */ if (!fZ) goto L_0043b929;
L_0043b919:; BB(0x0043b919);
    /* 0043b919: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043b91c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b91d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043b920: call 0x43a3ac */ r_esp -= 4; W32(r_esp, 0x43b925u); f_0043a3ac();
    /* 0043b925: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b927: je 0x43b989 */ if (fZ) goto L_0043b989;
L_0043b929:; BB(0x0043b929);
    /* 0043b929: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b92b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b92e: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x43b933u); f_004259f1();
    /* 0043b933: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b934: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0043b937: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b938: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043b93b: call 0x42827c */ r_esp -= 4; W32(r_esp, 0x43b940u); f_0042827c();
    /* 0043b940: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043b943: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b944: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043b947: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x43b94cu); f_0043a8b5();
    /* 0043b94c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b94d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043b950: call 0x433959 */ r_esp -= 4; W32(r_esp, 0x43b955u); f_00433959();
    /* 0043b955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b956: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043b959: call 0x433c45 */ r_esp -= 4; W32(r_esp, 0x43b95eu); f_00433c45();
    /* 0043b95e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043b961: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b965: je 0x43b975 */ if (fZ) goto L_0043b975;
L_0043b967:; BB(0x0043b967);
    /* 0043b967: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043b96a: cmp ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b96d: jge 0x43b975 */ if ((fS==fO)) goto L_0043b975;
L_0043b96f:; BB(0x0043b96f);
    /* 0043b96f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043b972: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0043b975:; BB(0x0043b975);
    /* 0043b975: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043b978: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b97b: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b97e: jle 0x43b989 */ if ((fZ||fS!=fO)) goto L_0043b989;
L_0043b980:; BB(0x0043b980);
    /* 0043b980: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043b983: sub ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b986: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0043b989:; BB(0x0043b989);
    /* 0043b989: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b98c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b98d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b991: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b994: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0043b997: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043b99a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b99b: push 0x653edc */ { u32 v = 0x653edcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9a0: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x43b9a5u); f_0060fc40();
    /* 0043b9a5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b9a8: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0043b9ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9ac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b9af: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x43b9b4u); f_00425bfe();
    /* 0043b9b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9b8: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0043b9bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9be: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043b9c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043b9c3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043b9c6: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x43b9c9u); call_ind(t); }
L_0043b9c9:; BB(0x0043b9c9);
    /* 0043b9c9: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b9cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b9cc: ret 8 */ FN_RET(0x0043b819); r_esp += 12; return;
}

void f_0043b9cf(void) /* FUN_0043b9cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b9cf);
    /* 0043b9cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9d0: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b9d2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b9d5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043b9d8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b9db: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x43b9e0u); f_0043a8b5();
    /* 0043b9e0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0043b9e2: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0043b9e4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043b9e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b9e8: jne 0x43b9f3 */ if (!fZ) goto L_0043b9f3;
L_0043b9ea:; BB(0x0043b9ea);
    /* 0043b9ea: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043b9f1: jmp 0x43b9fa */ goto L_0043b9fa;
L_0043b9f3:; BB(0x0043b9f3);
    /* 0043b9f3: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
L_0043b9fa:; BB(0x0043b9fa);
    /* 0043b9fa: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043ba01: jmp 0x43ba0c */ goto L_0043ba0c;
L_0043ba03:; BB(0x0043ba03);
    /* 0043ba03: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ba06: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043ba09: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043ba0c:; BB(0x0043ba0c);
    /* 0043ba0c: cmp dword ptr [ebp - 8], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ba10: jge 0x43ba30 */ if ((fS==fO)) goto L_0043ba30;
L_0043ba12:; BB(0x0043ba12);
    /* 0043ba12: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ba15: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ba18: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0043ba1c: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x43ba21u); f_00427ecb();
    /* 0043ba21: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ba24: jne 0x43ba2e */ if (!fZ) goto L_0043ba2e;
L_0043ba26:; BB(0x0043ba26);
    /* 0043ba26: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ba29: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043ba2c: jmp 0x43ba30 */ goto L_0043ba30;
L_0043ba2e:; BB(0x0043ba2e);
    /* 0043ba2e: jmp 0x43ba03 */ goto L_0043ba03;
L_0043ba30:; BB(0x0043ba30);
    /* 0043ba30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ba33: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ba35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ba36: ret  */ FN_RET(0x0043b9cf); r_esp += 4; return;
}

void f_0043ba37(void) /* FUN_0043ba37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ba37);
    /* 0043ba37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba38: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ba3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba3b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ba3e: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ba40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ba41: ret  */ FN_RET(0x0043ba37); r_esp += 4; return;
}

void f_0043ba42(void) /* FUN_0043ba42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ba42);
    /* 0043ba42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba43: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ba45: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043ba48: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043ba4b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043ba52: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043ba59: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043ba5c: call 0x437372 */ r_esp -= 4; W32(r_esp, 0x43ba61u); f_00437372();
    /* 0043ba61: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043ba64: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ba67: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043ba6a: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x43ba6fu); f_0041f839();
    /* 0043ba6f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043ba72: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043ba75: mov dword ptr [ecx + 0x130], 1 */ W32((u32)(r_ecx+0x130u), 0x1u);
    /* 0043ba7f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043ba82: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x43ba87u); f_0043a8b5();
    /* 0043ba87: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0043ba89: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0043ba8b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043ba8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ba8f: jne 0x43bae3 */ if (!fZ) goto L_0043bae3;
L_0043ba91:; BB(0x0043ba91);
    /* 0043ba91: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ba95: je 0x43ba9d */ if (fZ) goto L_0043ba9d;
L_0043ba97:; BB(0x0043ba97);
    /* 0043ba97: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ba9b: jne 0x43baab */ if (!fZ) goto L_0043baab;
L_0043ba9d:; BB(0x0043ba9d);
    /* 0043ba9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ba9f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043baa1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043baa4: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43baa9u); f_0043b819();
    /* 0043baa9: jmp 0x43bab7 */ goto L_0043bab7;
L_0043baab:; BB(0x0043baab);
    /* 0043baab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043baad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043baaf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bab2: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bab7u); f_0043b819();
L_0043bab7:; BB(0x0043bab7);
    /* 0043bab7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bab9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043babf: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x43bac4u); f_0045cd25();
    /* 0043bac4: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043bac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bac8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043baca: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043bad0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043bad3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bad4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bad6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bad9: call 0x43adaa */ r_esp -= 4; W32(r_esp, 0x43badeu); f_0043adaa();
    /* 0043bade: jmp 0x43bdd6 */ goto L_0043bdd6;
L_0043bae3:; BB(0x0043bae3);
    /* 0043bae3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bae6: call 0x43ba37 */ r_esp -= 4; W32(r_esp, 0x43baebu); f_0043ba37();
    /* 0043baeb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043baee: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043baf1: cmp dword ptr [ebp - 0x1c], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043baf5: ja 0x43bd96 */ if ((!fC&&!fZ)) goto L_0043bd96;
L_0043bafb:; BB(0x0043bafb);
    /* 0043bafb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043bafe: jmp dword ptr [edx*4 + 0x43bdda] */ { u32 t = R32((u32)(r_edx*4+0x43bddau)); switch (t) { case 0x43bb05u: goto L_0043bb05; case 0x43bb2au: goto L_0043bb2a; case 0x43bb9au: goto L_0043bb9a; case 0x43bbe7u: goto L_0043bbe7; case 0x43bb4fu: goto L_0043bb4f; case 0x43bc32u: goto L_0043bc32; case 0x43bca2u: goto L_0043bca2; case 0x43bcd5u: goto L_0043bcd5; case 0x43bd08u: goto L_0043bd08; case 0x43bd53u: goto L_0043bd53; case 0x43bc86u: goto L_0043bc86; case 0x43bc9du: goto L_0043bc9d; default: UNSUP(0x0043bafe, "jump table entry is not a known target"); } }
L_0043bb05:; BB(0x0043bb05);
    /* 0043bb05: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb09: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bb0c: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bb11u); f_0043b819();
    /* 0043bb11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb13: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb15: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bb18: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bb1du); f_0043b819();
    /* 0043bb1d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bb20: call 0x43b591 */ r_esp -= 4; W32(r_esp, 0x43bb25u); f_0043b591();
    /* 0043bb25: jmp 0x43bdaf */ goto L_0043bdaf;
L_0043bb2a:; BB(0x0043bb2a);
    /* 0043bb2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb2c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb2e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bb31: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bb36u); f_0043b819();
    /* 0043bb36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb38: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb3a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bb3d: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bb42u); f_0043b819();
    /* 0043bb42: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bb45: call 0x43b6d5 */ r_esp -= 4; W32(r_esp, 0x43bb4au); f_0043b6d5();
    /* 0043bb4a: jmp 0x43bdaf */ goto L_0043bdaf;
L_0043bb4f:; BB(0x0043bb4f);
    /* 0043bb4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb51: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb53: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bb56: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bb5bu); f_0043b819();
    /* 0043bb5b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bb5e: call 0x43b591 */ r_esp -= 4; W32(r_esp, 0x43bb63u); f_0043b591();
    /* 0043bb63: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb65: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43bb6au); f_0060ee31();
    /* 0043bb6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bb6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bb6f: je 0x43bb7d */ if (fZ) goto L_0043bb7d;
L_0043bb71:; BB(0x0043bb71);
    /* 0043bb71: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb73: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb75: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bb78: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bb7du); f_0043b819();
L_0043bb7d:; BB(0x0043bb7d);
    /* 0043bb7d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb7f: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb81: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bb84: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bb89u); f_0043b819();
    /* 0043bb89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb8b: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb8d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bb90: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bb95u); f_0043b819();
    /* 0043bb95: jmp 0x43bdaf */ goto L_0043bdaf;
L_0043bb9a:; BB(0x0043bb9a);
    /* 0043bb9a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb9c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb9e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bba1: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bba6u); f_0043b819();
    /* 0043bba6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bba9: call 0x43b591 */ r_esp -= 4; W32(r_esp, 0x43bbaeu); f_0043b591();
    /* 0043bbae: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bbb0: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43bbb5u); f_0060ee31();
    /* 0043bbb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bbb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bbba: jne 0x43bbc8 */ if (!fZ) goto L_0043bbc8;
L_0043bbbc:; BB(0x0043bbbc);
    /* 0043bbbc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bbbe: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bbc0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bbc3: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bbc8u); f_0043b819();
L_0043bbc8:; BB(0x0043bbc8);
    /* 0043bbc8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bbca: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43bbcfu); f_0060ee31();
    /* 0043bbcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bbd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bbd4: jne 0x43bbe2 */ if (!fZ) goto L_0043bbe2;
L_0043bbd6:; BB(0x0043bbd6);
    /* 0043bbd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bbd8: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bbda: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bbdd: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bbe2u); f_0043b819();
L_0043bbe2:; BB(0x0043bbe2);
    /* 0043bbe2: jmp 0x43bdaf */ goto L_0043bdaf;
L_0043bbe7:; BB(0x0043bbe7);
    /* 0043bbe7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bbe9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bbeb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bbee: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bbf3u); f_0043b819();
    /* 0043bbf3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bbf6: call 0x43b591 */ r_esp -= 4; W32(r_esp, 0x43bbfbu); f_0043b591();
    /* 0043bbfb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bbfd: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43bc02u); f_0060ee31();
    /* 0043bc02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bc05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bc07: jne 0x43bc15 */ if (!fZ) goto L_0043bc15;
L_0043bc09:; BB(0x0043bc09);
    /* 0043bc09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc0b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc0d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bc10: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bc15u); f_0043b819();
L_0043bc15:; BB(0x0043bc15);
    /* 0043bc15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc17: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc19: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bc1c: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bc21u); f_0043b819();
    /* 0043bc21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc23: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc25: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bc28: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bc2du); f_0043b819();
    /* 0043bc2d: jmp 0x43bdaf */ goto L_0043bdaf;
L_0043bc32:; BB(0x0043bc32);
    /* 0043bc32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc36: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bc39: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bc3eu); f_0043b819();
    /* 0043bc3e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bc41: call 0x43b591 */ r_esp -= 4; W32(r_esp, 0x43bc46u); f_0043b591();
    /* 0043bc46: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc48: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43bc4du); f_0060ee31();
    /* 0043bc4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bc50: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bc53: jge 0x43bc61 */ if ((fS==fO)) goto L_0043bc61;
L_0043bc55:; BB(0x0043bc55);
    /* 0043bc55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc57: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc59: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bc5c: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bc61u); f_0043b819();
L_0043bc61:; BB(0x0043bc61);
    /* 0043bc61: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bc64: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0043bc6a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043bc6d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043bc70: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043bc73: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0043bc76: cmp dword ptr [ebp - 0x20], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043bc7a: ja 0x43bc9d */ if ((!fC&&!fZ)) goto L_0043bc9d;
L_0043bc7c:; BB(0x0043bc7c);
    /* 0043bc7c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043bc7f: jmp dword ptr [eax*4 + 0x43be02] */ { u32 t = R32((u32)(r_eax*4+0x43be02u)); switch (t) { case 0x43bd53u: goto L_0043bd53; case 0x43bd08u: goto L_0043bd08; case 0x43bcd5u: goto L_0043bcd5; case 0x43bca2u: goto L_0043bca2; case 0x43bc32u: goto L_0043bc32; case 0x43bb4fu: goto L_0043bb4f; case 0x43bbe7u: goto L_0043bbe7; case 0x43bb9au: goto L_0043bb9a; case 0x43bb2au: goto L_0043bb2a; case 0x43bb05u: goto L_0043bb05; case 0x43bc86u: goto L_0043bc86; case 0x43bc9du: goto L_0043bc9d; default: UNSUP(0x0043bc7f, "jump table entry is not a known target"); } }
L_0043bc86:; BB(0x0043bc86);
    /* 0043bc86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc88: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bc8b: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0043bc91: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043bc94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc95: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bc98: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bc9du); f_0043b819();
L_0043bc9d:; BB(0x0043bc9d);
    /* 0043bc9d: jmp 0x43bdaf */ goto L_0043bdaf;
L_0043bca2:; BB(0x0043bca2);
    /* 0043bca2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bca4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bca6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bca9: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bcaeu); f_0043b819();
    /* 0043bcae: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bcb1: call 0x43b6d5 */ r_esp -= 4; W32(r_esp, 0x43bcb6u); f_0043b6d5();
    /* 0043bcb6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcb8: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43bcbdu); f_0060ee31();
    /* 0043bcbd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bcc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bcc2: jne 0x43bcd0 */ if (!fZ) goto L_0043bcd0;
L_0043bcc4:; BB(0x0043bcc4);
    /* 0043bcc4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcc6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcc8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bccb: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bcd0u); f_0043b819();
L_0043bcd0:; BB(0x0043bcd0);
    /* 0043bcd0: jmp 0x43bdaf */ goto L_0043bdaf;
L_0043bcd5:; BB(0x0043bcd5);
    /* 0043bcd5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcd7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcd9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bcdc: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bce1u); f_0043b819();
    /* 0043bce1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bce4: call 0x43b591 */ r_esp -= 4; W32(r_esp, 0x43bce9u); f_0043b591();
    /* 0043bce9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bceb: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43bcf0u); f_0060ee31();
    /* 0043bcf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bcf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bcf5: je 0x43bd03 */ if (fZ) goto L_0043bd03;
L_0043bcf7:; BB(0x0043bcf7);
    /* 0043bcf7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcf9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcfb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bcfe: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bd03u); f_0043b819();
L_0043bd03:; BB(0x0043bd03);
    /* 0043bd03: jmp 0x43bdaf */ goto L_0043bdaf;
L_0043bd08:; BB(0x0043bd08);
    /* 0043bd08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd0c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bd0f: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bd14u); f_0043b819();
    /* 0043bd14: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bd17: call 0x43b591 */ r_esp -= 4; W32(r_esp, 0x43bd1cu); f_0043b591();
    /* 0043bd1c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd1e: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43bd23u); f_0060ee31();
    /* 0043bd23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bd26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bd28: je 0x43bd36 */ if (fZ) goto L_0043bd36;
L_0043bd2a:; BB(0x0043bd2a);
    /* 0043bd2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd2c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd2e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bd31: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bd36u); f_0043b819();
L_0043bd36:; BB(0x0043bd36);
    /* 0043bd36: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd38: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43bd3du); f_0060ee31();
    /* 0043bd3d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bd40: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bd43: jge 0x43bd51 */ if ((fS==fO)) goto L_0043bd51;
L_0043bd45:; BB(0x0043bd45);
    /* 0043bd45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd47: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd49: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bd4c: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bd51u); f_0043b819();
L_0043bd51:; BB(0x0043bd51);
    /* 0043bd51: jmp 0x43bdaf */ goto L_0043bdaf;
L_0043bd53:; BB(0x0043bd53);
    /* 0043bd53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd57: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bd5a: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bd5fu); f_0043b819();
    /* 0043bd5f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd61: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43bd66u); f_0060ee31();
    /* 0043bd66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bd69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bd6b: jne 0x43bd79 */ if (!fZ) goto L_0043bd79;
L_0043bd6d:; BB(0x0043bd6d);
    /* 0043bd6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd6f: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd71: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bd74: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bd79u); f_0043b819();
L_0043bd79:; BB(0x0043bd79);
    /* 0043bd79: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd7b: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43bd80u); f_0060ee31();
    /* 0043bd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bd83: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bd86: jge 0x43bd94 */ if ((fS==fO)) goto L_0043bd94;
L_0043bd88:; BB(0x0043bd88);
    /* 0043bd88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd8a: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd8c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bd8f: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bd94u); f_0043b819();
L_0043bd94:; BB(0x0043bd94);
    /* 0043bd94: jmp 0x43bdaf */ goto L_0043bdaf;
L_0043bd96:; BB(0x0043bd96);
    /* 0043bd96: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bd99: call 0x43b9cf */ r_esp -= 4; W32(r_esp, 0x43bd9eu); f_0043b9cf();
    /* 0043bd9e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043bda1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bda3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043bda6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bda7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bdaa: call 0x43b819 */ r_esp -= 4; W32(r_esp, 0x43bdafu); f_0043b819();
L_0043bdaf:; BB(0x0043bdaf);
    /* 0043bdaf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bdb1: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043bdb7: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x43bdbcu); f_0045cd25();
    /* 0043bdbc: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043bdbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bdc0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bdc2: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043bdc8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0043bdcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bdcc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bdce: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bdd1: call 0x43adaa */ r_esp -= 4; W32(r_esp, 0x43bdd6u); f_0043adaa();
L_0043bdd6:; BB(0x0043bdd6);
    /* 0043bdd6: mov esp, ebp */ r_esp = r_ebp;
    /* 0043bdd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043bdd9: ret  */ FN_RET(0x0043ba42); r_esp += 4; return;
}

void f_0043be1e(void) /* FUN_0043be1e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043be1e);
    /* 0043be1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043be1f: mov ebp, esp */ r_ebp = r_esp;
    /* 0043be21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043be22: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043be25: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043be28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043be2b: mov edx, dword ptr [eax + 0x1bc] */ r_edx = R32((u32)(r_eax+0x1bcu));
    /* 0043be31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043be33: cmp edx, dword ptr [ecx + 0x1c0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1c0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043be39: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043be3c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043be3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043be3f: ret  */ FN_RET(0x0043be1e); r_esp += 4; return;
}

void f_0043be40(void) /* FUN_0043be40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043be40);
    /* 0043be40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043be41: mov ebp, esp */ r_ebp = r_esp;
    /* 0043be43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043be46: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043be49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043be4c: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x43be51u); f_0043c040();
    /* 0043be51: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043be54: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043be57: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x43be5cu); f_004259f1();
    /* 0043be5c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043be5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043be62: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043be65: jne 0x43beb3 */ if (!fZ) goto L_0043beb3;
L_0043be67:; BB(0x0043be67);
    /* 0043be67: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043be6a: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x43be6fu); f_00425973();
    /* 0043be6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043be71: je 0x43be99 */ if (fZ) goto L_0043be99;
L_0043be73:; BB(0x0043be73);
    /* 0043be73: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043be76: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043be79: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043be7d: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x43be82u); f_004259a0();
    /* 0043be82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043be84: jne 0x43be99 */ if (!fZ) goto L_0043be99;
L_0043be86:; BB(0x0043be86);
    /* 0043be86: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043be89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043be8c: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043be90: call 0x435d2d */ r_esp -= 4; W32(r_esp, 0x43be95u); f_00435d2d();
    /* 0043be95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043be97: jne 0x43beb3 */ if (!fZ) goto L_0043beb3;
L_0043be99:; BB(0x0043be99);
    /* 0043be99: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043be9c: mov dword ptr [edx + 0x1c0], 0xffffffff */ W32((u32)(r_edx+0x1c0u), 0xffffffffu);
    /* 0043bea6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043bea9: mov dword ptr [eax + 0x1b4], 0 */ W32((u32)(r_eax+0x1b4u), 0x0u);
L_0043beb3:; BB(0x0043beb3);
    /* 0043beb3: mov esp, ebp */ r_esp = r_ebp;
    /* 0043beb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043beb6: ret 4 */ FN_RET(0x0043be40); r_esp += 8; return;
}

void f_0043beb9(void) /* FUN_0043beb9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043beb9);
    /* 0043beb9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043beba: mov ebp, esp */ r_ebp = r_esp;
    /* 0043bebc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043bebf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043bec2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043bec5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bec8: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043becc: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043becf: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bed3: jne 0x43bedc */ if (!fZ) goto L_0043bedc;
L_0043bed5:; BB(0x0043bed5);
    /* 0043bed5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043bedc:; BB(0x0043bedc);
    /* 0043bedc: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bee0: jne 0x43beeb */ if (!fZ) goto L_0043beeb;
L_0043bee2:; BB(0x0043bee2);
    /* 0043bee2: mov dword ptr [ebp - 0xc], 0x653ef4 */ W32((u32)(r_ebp+0xfffffff4u), 0x653ef4u);
    /* 0043bee9: jmp 0x43bef7 */ goto L_0043bef7;
L_0043beeb:; BB(0x0043beeb);
    /* 0043beeb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043beee: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043bef1: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0043bef4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0043bef7:; BB(0x0043bef7);
    /* 0043bef7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043befa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043befb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043befe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043beff: push 0x653efc */ { u32 v = 0x653efcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043bf04: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x43bf09u); f_0060fc40();
    /* 0043bf09: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bf0c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bf0f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bf12: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0043bf18: mov dword ptr [edx + 0x1c0], ecx */ W32((u32)(r_edx+0x1c0u), r_ecx);
    /* 0043bf1e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bf21: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0043bf27: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bf2a: je 0x43bf72 */ if (fZ) goto L_0043bf72;
L_0043bf2c:; BB(0x0043bf2c);
    /* 0043bf2c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bf2f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043bf32: mov dword ptr [ecx + 0x1bc], edx */ W32((u32)(r_ecx+0x1bcu), r_edx);
    /* 0043bf38: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bf3b: mov dword ptr [eax + 0x1c8], 0 */ W32((u32)(r_eax+0x1c8u), 0x0u);
    /* 0043bf45: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bf48: mov dword ptr [ecx + 0x1cc], 0 */ W32((u32)(r_ecx+0x1ccu), 0x0u);
    /* 0043bf52: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bf55: mov dword ptr [edx + 0x1d0], 0 */ W32((u32)(r_edx+0x1d0u), 0x0u);
    /* 0043bf5f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bf63: je 0x43bf72 */ if (fZ) goto L_0043bf72;
L_0043bf65:; BB(0x0043bf65);
    /* 0043bf65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043bf68: mov dword ptr [eax + 0x13c], 0 */ W32((u32)(r_eax+0x13cu), 0x0u);
L_0043bf72:; BB(0x0043bf72);
    /* 0043bf72: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bf75: cmp dword ptr [ecx + 0x1bc], -1 */ {  u32 a = R32((u32)(r_ecx+0x1bcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bf7c: jle 0x43c023 */ if ((fZ||fS!=fO)) goto L_0043c023;
L_0043bf82:; BB(0x0043bf82);
    /* 0043bf82: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bf85: cmp dword ptr [edx + 0x1bc], 4 */ {  u32 a = R32((u32)(r_edx+0x1bcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bf8c: jge 0x43c023 */ if ((fS==fO)) goto L_0043c023;
L_0043bf92:; BB(0x0043bf92);
    /* 0043bf92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043bf95: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043bf98: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x43bf9du); f_00420800();
    /* 0043bf9d: mov ecx, eax */ r_ecx = r_eax;
    /* 0043bf9f: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x43bfa4u); f_005d9883();
    /* 0043bfa4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043bfa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bfa8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bfab: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 0043bfb1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bfb4: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 0043bfba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043bfbc: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43bfbfu); call_ind(t); }
    /* 0043bfbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043bfc2: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043bfc5: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x43bfcau); f_00420800();
    /* 0043bfca: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043bfcd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043bfd0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043bfd2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043bfd5: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x43bfd8u); call_ind(t); }
    /* 0043bfd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bfd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043bfdc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043bfdf: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x43bfe4u); f_00420800();
    /* 0043bfe4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043bfe7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bfea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043bfec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bfef: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x43bff2u); call_ind(t); }
    /* 0043bff2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bff3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bff6: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 0043bffc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bfff: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 0043c005: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c007: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43c00au); call_ind(t); }
    /* 0043c00a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c00d: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 0043c013: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c016: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 0043c01c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c01e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43c021u); call_ind(t); }
    /* 0043c021: jmp 0x43c03a */ goto L_0043c03a;
L_0043c023:; BB(0x0043c023);
    /* 0043c023: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c026: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 0043c02c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c02f: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 0043c035: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c037: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43c03au); call_ind(t); }
L_0043c03a:; BB(0x0043c03a);
    /* 0043c03a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c03c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c03d: ret 4 */ FN_RET(0x0043beb9); r_esp += 8; return;
}

void f_0043c040(void) /* FUN_0043c040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c040);
    /* 0043c040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c041: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043c047: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c04a: mov eax, dword ptr [eax + 0x1bc] */ r_eax = R32((u32)(r_eax+0x1bcu));
    /* 0043c050: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c053: ret  */ FN_RET(0x0043c040); r_esp += 4; return;
}

void f_0043c054(void) /* FUN_0043c054 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c054);
    /* 0043c054: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c055: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c057: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c058: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043c05b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c05e: mov dword ptr [eax + 0x1b0], 0 */ W32((u32)(r_eax+0x1b0u), 0x0u);
    /* 0043c068: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c06b: mov dword ptr [ecx + 0x1d4], 0 */ W32((u32)(r_ecx+0x1d4u), 0x0u);
    /* 0043c075: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c078: mov dword ptr [edx + 0x214], 0 */ W32((u32)(r_edx+0x214u), 0x0u);
    /* 0043c082: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c085: mov dword ptr [eax + 0x1e4], 0 */ W32((u32)(r_eax+0x1e4u), 0x0u);
    /* 0043c08f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c092: mov dword ptr [ecx + 0x1dc], 0 */ W32((u32)(r_ecx+0x1dcu), 0x0u);
    /* 0043c09c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c09f: mov dword ptr [edx + 0x1e0], 0 */ W32((u32)(r_edx+0x1e0u), 0x0u);
    /* 0043c0a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c0ac: mov dword ptr [eax + 0x1b8], 0 */ W32((u32)(r_eax+0x1b8u), 0x0u);
    /* 0043c0b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c0b9: mov dword ptr [ecx + 0x1c4], 0 */ W32((u32)(r_ecx+0x1c4u), 0x0u);
    /* 0043c0c3: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c0c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c0c6: ret  */ FN_RET(0x0043c054); r_esp += 4; return;
}

void f_0043c0c7(void) /* FUN_0043c0c7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c0c7);
    /* 0043c0c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c0c8: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c0ca: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c0cd: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0043c0d0: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c0d3: call 0x437295 */ r_esp -= 4; W32(r_esp, 0x43c0d8u); f_00437295();
    /* 0043c0d8: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c0db: call 0x437372 */ r_esp -= 4; W32(r_esp, 0x43c0e0u); f_00437372();
    /* 0043c0e0: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0043c0e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c0e5: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043c0ea: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043c0ed: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043c0f3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043c0f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c0f8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43c0fbu); call_ind(t); }
    /* 0043c0fb: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c0ff: jne 0x43c159 */ if (!fZ) goto L_0043c159;
L_0043c101:; BB(0x0043c101);
    /* 0043c101: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0043c108: jmp 0x43c113 */ goto L_0043c113;
L_0043c10a:; BB(0x0043c10a);
    /* 0043c10a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0043c10d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c110: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
L_0043c113:; BB(0x0043c113);
    /* 0043c113: cmp dword ptr [ebp - 0x58], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c117: jge 0x43c13c */ if ((fS==fO)) goto L_0043c13c;
L_0043c119:; BB(0x0043c119);
    /* 0043c119: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0043c11c: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c11f: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c124: je 0x43c13a */ if (fZ) goto L_0043c13a;
L_0043c126:; BB(0x0043c126);
    /* 0043c126: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0043c129: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c12c: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043c130: mov dword ptr [edx + 0x138], 0 */ W32((u32)(r_edx+0x138u), 0x0u);
L_0043c13a:; BB(0x0043c13a);
    /* 0043c13a: jmp 0x43c10a */ goto L_0043c10a;
L_0043c13c:; BB(0x0043c13c);
    /* 0043c13c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c13e: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043c143: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043c146: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043c14c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043c14f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c151: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43c154u); call_ind(t); }
    /* 0043c154: jmp 0x43c2e4 */ goto L_0043c2e4;
L_0043c159:; BB(0x0043c159);
    /* 0043c159: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0043c15c: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x43c161u); f_00425973();
    /* 0043c161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c163: jne 0x43c182 */ if (!fZ) goto L_0043c182;
L_0043c165:; BB(0x0043c165);
    /* 0043c165: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c167: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043c16c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043c16f: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043c175: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043c178: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c17a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43c17du); call_ind(t); }
    /* 0043c17d: jmp 0x43c2e4 */ goto L_0043c2e4;
L_0043c182:; BB(0x0043c182);
    /* 0043c182: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0043c185: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x43c18au); f_004259a0();
    /* 0043c18a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c18c: je 0x43c248 */ if (fZ) goto L_0043c248;
L_0043c192:; BB(0x0043c192);
    /* 0043c192: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c195: cmp dword ptr [eax + 0x200], 0 */ {  u32 a = R32((u32)(r_eax+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c19c: je 0x43c1ab */ if (fZ) goto L_0043c1ab;
L_0043c19e:; BB(0x0043c19e);
    /* 0043c19e: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c1a1: mov dword ptr [ecx + 0x1b4], 1 */ W32((u32)(r_ecx+0x1b4u), 0x1u);
L_0043c1ab:; BB(0x0043c1ab);
    /* 0043c1ab: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c1ae: cmp dword ptr [edx + 0x1b4], 0 */ {  u32 a = R32((u32)(r_edx+0x1b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c1b5: jne 0x43c246 */ if (!fZ) goto L_0043c246;
L_0043c1bb:; BB(0x0043c1bb);
    /* 0043c1bb: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c1be: call 0x43caff */ r_esp -= 4; W32(r_esp, 0x43c1c3u); f_0043caff();
    /* 0043c1c3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c1c6: jg 0x43c1d7 */ if ((!fZ&&fS==fO)) goto L_0043c1d7;
L_0043c1c8:; BB(0x0043c1c8);
    /* 0043c1c8: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c1cb: mov dword ptr [eax + 0x1b4], 1 */ W32((u32)(r_eax+0x1b4u), 0x1u);
    /* 0043c1d5: jmp 0x43c246 */ goto L_0043c246;
L_0043c1d7:; BB(0x0043c1d7);
    /* 0043c1d7: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c1da: cmp dword ptr [ecx + 0x214], 0 */ {  u32 a = R32((u32)(r_ecx+0x214u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c1e1: jne 0x43c239 */ if (!fZ) goto L_0043c239;
L_0043c1e3:; BB(0x0043c1e3);
    /* 0043c1e3: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0043c1e6: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0043c1e9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043c1ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c1ed: push 0x653f18 */ { u32 v = 0x653f18u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c1f2: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 0043c1f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c1f6: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x43c1fbu); f_00624050();
    /* 0043c1fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c1fe: push 0x2004 */ { u32 v = 0x2004u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c203: push 0x653f40 */ { u32 v = 0x653f40u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c208: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 0043c20b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c20c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c20e: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x43c213u); f_0060f9f3();
    /* 0043c213: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c216: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c219: jne 0x43c22a */ if (!fZ) goto L_0043c22a;
L_0043c21b:; BB(0x0043c21b);
    /* 0043c21b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c21e: mov dword ptr [ecx + 0x1b4], 1 */ W32((u32)(r_ecx+0x1b4u), 0x1u);
    /* 0043c228: jmp 0x43c237 */ goto L_0043c237;
L_0043c22a:; BB(0x0043c22a);
    /* 0043c22a: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c22d: mov dword ptr [edx + 0x1d0], 0 */ W32((u32)(r_edx+0x1d0u), 0x0u);
L_0043c237:; BB(0x0043c237);
    /* 0043c237: jmp 0x43c246 */ goto L_0043c246;
L_0043c239:; BB(0x0043c239);
    /* 0043c239: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c23c: mov dword ptr [eax + 0x214], 0 */ W32((u32)(r_eax+0x214u), 0x0u);
L_0043c246:; BB(0x0043c246);
    /* 0043c246: jmp 0x43c26d */ goto L_0043c26d;
L_0043c248:; BB(0x0043c248);
    /* 0043c248: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0043c24b: cmp dword ptr [ecx + 0x138], 0 */ {  u32 a = R32((u32)(r_ecx+0x138u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c252: jne 0x43c26d */ if (!fZ) goto L_0043c26d;
L_0043c254:; BB(0x0043c254);
    /* 0043c254: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0043c257: call 0x435d2d */ r_esp -= 4; W32(r_esp, 0x43c25cu); f_00435d2d();
    /* 0043c25c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c25e: je 0x43c26d */ if (fZ) goto L_0043c26d;
L_0043c260:; BB(0x0043c260);
    /* 0043c260: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c263: mov dword ptr [edx + 0x1b4], 1 */ W32((u32)(r_edx+0x1b4u), 0x1u);
L_0043c26d:; BB(0x0043c26d);
    /* 0043c26d: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c270: cmp dword ptr [eax + 0x1b4], 0 */ {  u32 a = R32((u32)(r_eax+0x1b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c277: je 0x43c2bf */ if (fZ) goto L_0043c2bf;
L_0043c279:; BB(0x0043c279);
    /* 0043c279: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0043c27c: cmp dword ptr [ecx + 0x138], 0 */ {  u32 a = R32((u32)(r_ecx+0x138u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c283: jne 0x43c2bf */ if (!fZ) goto L_0043c2bf;
L_0043c285:; BB(0x0043c285);
    /* 0043c285: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0043c288: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x43c28du); f_004259f1();
    /* 0043c28d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c28e: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c291: call 0x43beb9 */ r_esp -= 4; W32(r_esp, 0x43c296u); f_0043beb9();
    /* 0043c296: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c299: call 0x437545 */ r_esp -= 4; W32(r_esp, 0x43c29eu); f_00437545();
    /* 0043c29e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c29f: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043c2a2: call 0x4371f8 */ r_esp -= 4; W32(r_esp, 0x43c2a7u); f_004371f8();
    /* 0043c2a7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c2a9: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043c2af: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0043c2b2: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043c2b7: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0043c2ba: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c2bc: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x43c2bfu); call_ind(t); }
L_0043c2bf:; BB(0x0043c2bf);
    /* 0043c2bf: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0043c2c2: mov dword ptr [ecx + 0x138], 1 */ W32((u32)(r_ecx+0x138u), 0x1u);
    /* 0043c2cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c2ce: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043c2d4: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0043c2d7: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043c2dc: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0043c2df: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c2e1: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x43c2e4u); call_ind(t); }
L_0043c2e4:; BB(0x0043c2e4);
    /* 0043c2e4: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c2e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c2e7: ret  */ FN_RET(0x0043c0c7); r_esp += 4; return;
}

void f_0043c2e8(void) /* FUN_0043c2e8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c2e8);
    /* 0043c2e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c2e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c2eb: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c2ee: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043c2f1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c2f4: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0043c2fa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c2fd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c300: mov dword ptr [edx + 0x1c4], ecx */ W32((u32)(r_edx+0x1c4u), r_ecx);
    /* 0043c306: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c309: cmp dword ptr [eax + 0x1c4], 2 */ {  u32 a = R32((u32)(r_eax+0x1c4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c310: jne 0x43c3b9 */ if (!fZ) goto L_0043c3b9;
L_0043c316:; BB(0x0043c316);
    /* 0043c316: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c319: mov edx, dword ptr [ecx + 0x1a0] */ r_edx = R32((u32)(r_ecx+0x1a0u));
    /* 0043c31f: mov ecx, dword ptr [edx + 0xac] */ r_ecx = R32((u32)(r_edx+0xacu));
    /* 0043c325: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x43c32au); f_005d71b9();
    /* 0043c32a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c32c: je 0x43c361 */ if (fZ) goto L_0043c361;
L_0043c32e:; BB(0x0043c32e);
    /* 0043c32e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c330: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c332: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043c338: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x43c33du); f_0045c4ac();
    /* 0043c33d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043c340: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c343: mov byte ptr [eax + 6], 0 */ W8((u32)(r_eax+0x6u), 0x0u);
    /* 0043c347: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c34a: mov dword ptr [ecx + 0x204], 0 */ W32((u32)(r_ecx+0x204u), 0x0u);
    /* 0043c354: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c356: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043c35c: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x43c361u); f_0045c8df();
L_0043c361:; BB(0x0043c361);
    /* 0043c361: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c364: mov dword ptr [edx + 0x1b4], 1 */ W32((u32)(r_edx+0x1b4u), 0x1u);
    /* 0043c36e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c370: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c373: call 0x4371f8 */ r_esp -= 4; W32(r_esp, 0x43c378u); f_004371f8();
    /* 0043c378: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c37b: mov ecx, dword ptr [eax + 0x1a0] */ r_ecx = R32((u32)(r_eax+0x1a0u));
    /* 0043c381: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x43c386u); f_005e03cc();
    /* 0043c386: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c389: mov ecx, dword ptr [ecx + 0x1a0] */ r_ecx = R32((u32)(r_ecx+0x1a0u));
    /* 0043c38f: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x43c394u); f_005e0a55();
    /* 0043c394: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c397: mov dword ptr [edx + 0x1a0], 0 */ W32((u32)(r_edx+0x1a0u), 0x0u);
    /* 0043c3a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c3a3: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043c3a8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043c3ab: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043c3b1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043c3b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c3b6: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43c3b9u); call_ind(t); }
L_0043c3b9:; BB(0x0043c3b9);
    /* 0043c3b9: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c3bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c3bc: ret  */ FN_RET(0x0043c2e8); r_esp += 4; return;
}

void f_0043c3bd(void) /* FUN_0043c3bd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c3bd);
    /* 0043c3bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c3be: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c3c0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c3c3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043c3c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c3c9: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x43c3ceu); f_0043c040();
    /* 0043c3ce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043c3d1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c3d3: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043c3d8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043c3db: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043c3e1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043c3e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c3e6: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43c3e9u); call_ind(t); }
    /* 0043c3e9: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c3ed: je 0x43c4e0 */ if (fZ) goto L_0043c4e0;
L_0043c3f3:; BB(0x0043c3f3);
    /* 0043c3f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c3f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c3f9: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043c3fd: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x43c402u); f_004259a0();
    /* 0043c402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c404: je 0x43c4e0 */ if (fZ) goto L_0043c4e0;
L_0043c40a:; BB(0x0043c40a);
    /* 0043c40a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c40d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c410: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043c414: cmp dword ptr [ecx + 0x13c], 0 */ {  u32 a = R32((u32)(r_ecx+0x13cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c41b: jne 0x43c4e0 */ if (!fZ) goto L_0043c4e0;
L_0043c421:; BB(0x0043c421);
    /* 0043c421: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c424: cmp dword ptr [edx + 0x204], 0 */ {  u32 a = R32((u32)(r_edx+0x204u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c42b: je 0x43c4e0 */ if (fZ) goto L_0043c4e0;
L_0043c431:; BB(0x0043c431);
    /* 0043c431: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c434: cmp dword ptr [eax + 0x200], 0 */ {  u32 a = R32((u32)(r_eax+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c43b: jne 0x43c4e0 */ if (!fZ) goto L_0043c4e0;
L_0043c441:; BB(0x0043c441);
    /* 0043c441: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c444: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c447: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043c44b: mov dword ptr [eax + 0x13c], 1 */ W32((u32)(r_eax+0x13cu), 0x1u);
    /* 0043c455: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c458: cmp dword ptr [ecx + 0x1a0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c45f: jne 0x43c4de */ if (!fZ) goto L_0043c4de;
L_0043c461:; BB(0x0043c461);
    /* 0043c461: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c466: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x43c46bu); f_0048ab58();
    /* 0043c46b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c46e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043c471: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c475: je 0x43c488 */ if (fZ) goto L_0043c488;
L_0043c477:; BB(0x0043c477);
    /* 0043c477: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c479: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c47b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c47e: call 0x43db1a */ r_esp -= 4; W32(r_esp, 0x43c483u); f_0043db1a();
    /* 0043c483: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043c486: jmp 0x43c48f */ goto L_0043c48f;
L_0043c488:; BB(0x0043c488);
    /* 0043c488: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0043c48f:; BB(0x0043c48f);
    /* 0043c48f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c492: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c495: mov dword ptr [edx + 0x1a0], eax */ W32((u32)(r_edx+0x1a0u), r_eax);
    /* 0043c49b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c49d: push 0xfb7 */ { u32 v = 0xfb7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c4a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c4a5: mov ecx, dword ptr [ecx + 0x1a0] */ r_ecx = R32((u32)(r_ecx+0x1a0u));
    /* 0043c4ab: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x43c4b0u); f_005e0461();
    /* 0043c4b0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c4b3: mov ecx, dword ptr [edx + 0x1a0] */ r_ecx = R32((u32)(r_edx+0x1a0u));
    /* 0043c4b9: call 0x43dcf0 */ r_esp -= 4; W32(r_esp, 0x43c4beu); f_0043dcf0();
    /* 0043c4be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c4c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c4c2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c4c5: mov ecx, dword ptr [eax + 0x1a0] */ r_ecx = R32((u32)(r_eax+0x1a0u));
    /* 0043c4cb: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x43c4d0u); f_005d81dc();
    /* 0043c4d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c4d3: mov ecx, dword ptr [ecx + 0x1a0] */ r_ecx = R32((u32)(r_ecx+0x1a0u));
    /* 0043c4d9: call 0x43e0b1 */ r_esp -= 4; W32(r_esp, 0x43c4deu); f_0043e0b1();
L_0043c4de:; BB(0x0043c4de);
    /* 0043c4de: jmp 0x43c4f8 */ goto L_0043c4f8;
L_0043c4e0:; BB(0x0043c4e0);
    /* 0043c4e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c4e2: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043c4e8: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0043c4eb: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043c4f0: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0043c4f3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c4f5: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x43c4f8u); call_ind(t); }
L_0043c4f8:; BB(0x0043c4f8);
    /* 0043c4f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c4fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c4fb: ret  */ FN_RET(0x0043c3bd); r_esp += 4; return;
}

void f_0043c4fc(void) /* FUN_0043c4fc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c4fc);
    /* 0043c4fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c4fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c4ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c500: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043c503: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c505: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043c50a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043c50d: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043c513: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043c516: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c518: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43c51bu); call_ind(t); }
    /* 0043c51b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c51d: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043c522: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043c525: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c526: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c529: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0043c52c: call 0x441cac */ r_esp -= 4; W32(r_esp, 0x43c531u); f_00441cac();
    /* 0043c531: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c533: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c534: ret  */ FN_RET(0x0043c4fc); r_esp += 4; return;
}

void f_0043c535(void) /* FUN_0043c535 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c535);
    /* 0043c535: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c536: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c538: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c53b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043c53e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c540: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43c545u); f_0060ee31();
    /* 0043c545: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c548: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c54b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043c54e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c550: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x43c555u); f_0060ee31();
    /* 0043c555: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c558: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c55b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043c55e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c561: cmp dword ptr [eax + 0x1b0], 0 */ {  u32 a = R32((u32)(r_eax+0x1b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c568: je 0x43c56f */ if (fZ) goto L_0043c56f;
L_0043c56a:; BB(0x0043c56a);
    /* 0043c56a: jmp 0x43c736 */ goto L_0043c736;
L_0043c56f:; BB(0x0043c56f);
    /* 0043c56f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c572: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c575: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c576: push 0x653f50 */ { u32 v = 0x653f50u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c57b: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x43c580u); f_0060fc40();
    /* 0043c580: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c583: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c586: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 0043c58c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c58f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c592: mov dword ptr [ecx + 0x1c8], eax */ W32((u32)(r_ecx+0x1c8u), r_eax);
    /* 0043c598: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c59b: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x43c5a0u); f_0043c040();
    /* 0043c5a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c5a1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c5a4: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 0043c5aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c5ab: push 0x653f60 */ { u32 v = 0x653f60u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c5b0: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x43c5b5u); f_0060fc40();
    /* 0043c5b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c5b8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c5bb: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x43c5c0u); f_0043c040();
    /* 0043c5c0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c5c3: je 0x43c5d6 */ if (fZ) goto L_0043c5d6;
L_0043c5c5:; BB(0x0043c5c5);
    /* 0043c5c5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c5c8: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x43c5cdu); f_0043c040();
    /* 0043c5cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c5ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c5d1: call 0x4371f8 */ r_esp -= 4; W32(r_esp, 0x43c5d6u); f_004371f8();
L_0043c5d6:; BB(0x0043c5d6);
    /* 0043c5d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c5d9: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x43c5deu); f_0043c040();
    /* 0043c5de: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c5e1: jle 0x43c6c0 */ if ((fZ||fS!=fO)) goto L_0043c6c0;
L_0043c5e7:; BB(0x0043c5e7);
    /* 0043c5e7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c5ea: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x43c5efu); f_0043c040();
    /* 0043c5ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c5f2: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043c5f6: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x43c5fbu); f_004259a0();
    /* 0043c5fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c5fd: je 0x43c6c0 */ if (fZ) goto L_0043c6c0;
L_0043c603:; BB(0x0043c603);
    /* 0043c603: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c606: mov ecx, dword ptr [edx + 0x1a4] */ r_ecx = R32((u32)(r_edx+0x1a4u));
    /* 0043c60c: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x43c611u); f_005d96a9();
    /* 0043c611: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c613: je 0x43c6c0 */ if (fZ) goto L_0043c6c0;
L_0043c619:; BB(0x0043c619);
    /* 0043c619: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c61c: cmp dword ptr [eax + 0x200], 0 */ {  u32 a = R32((u32)(r_eax+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c623: jne 0x43c6c0 */ if (!fZ) goto L_0043c6c0;
L_0043c629:; BB(0x0043c629);
    /* 0043c629: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c62c: call 0x43c040 */ r_esp -= 4; W32(r_esp, 0x43c631u); f_0043c040();
    /* 0043c631: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c634: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043c638: call 0x4256ae */ r_esp -= 4; W32(r_esp, 0x43c63du); f_004256ae();
    /* 0043c63d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c63f: je 0x43c656 */ if (fZ) goto L_0043c656;
L_0043c641:; BB(0x0043c641);
    /* 0043c641: push 0xfbc */ { u32 v = 0xfbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c646: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c649: mov ecx, dword ptr [edx + 0x1a4] */ r_ecx = R32((u32)(r_edx+0x1a4u));
    /* 0043c64f: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x43c654u); f_005ea0c3();
    /* 0043c654: jmp 0x43c669 */ goto L_0043c669;
L_0043c656:; BB(0x0043c656);
    /* 0043c656: push 0xfbd */ { u32 v = 0xfbdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c65b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c65e: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 0043c664: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x43c669u); f_005ea0c3();
L_0043c669:; BB(0x0043c669);
    /* 0043c669: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c66c: mov ecx, dword ptr [ecx + 0x180] */ r_ecx = R32((u32)(r_ecx+0x180u));
    /* 0043c672: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c675: mov eax, dword ptr [edx + 0x180] */ r_eax = R32((u32)(r_edx+0x180u));
    /* 0043c67b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c67d: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43c680u); call_ind(t); }
    /* 0043c680: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c683: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0043c689: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c68c: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 0043c692: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c694: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43c697u); call_ind(t); }
    /* 0043c697: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c699: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c69c: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 0043c6a2: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43c6a7u); f_005ea1cf();
    /* 0043c6a7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c6aa: mov ecx, dword ptr [ecx + 0x1a4] */ r_ecx = R32((u32)(r_ecx+0x1a4u));
    /* 0043c6b0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c6b3: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 0043c6b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c6bb: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43c6beu); call_ind(t); }
    /* 0043c6be: jmp 0x43c736 */ goto L_0043c736;
L_0043c6c0:; BB(0x0043c6c0);
    /* 0043c6c0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c6c3: mov dword ptr [eax + 0x1b0], 1 */ W32((u32)(r_eax+0x1b0u), 0x1u);
    /* 0043c6cd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c6d0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c6d3: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 0043c6d9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c6dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c6df: mov dword ptr [eax + 0x1e0], ecx */ W32((u32)(r_eax+0x1e0u), r_ecx);
    /* 0043c6e5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c6e7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x43c6ecu); f_0048ab58();
    /* 0043c6ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c6ef: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043c6f2: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c6f6: je 0x43c705 */ if (fZ) goto L_0043c705;
L_0043c6f8:; BB(0x0043c6f8);
    /* 0043c6f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c6fb: call 0x43e78a */ r_esp -= 4; W32(r_esp, 0x43c700u); f_0043e78a();
    /* 0043c700: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043c703: jmp 0x43c70c */ goto L_0043c70c;
L_0043c705:; BB(0x0043c705);
    /* 0043c705: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0043c70c:; BB(0x0043c70c);
    /* 0043c70c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043c70f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c710: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043c715: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043c718: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x43c71du); f_005e62ca();
    /* 0043c71d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c71f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c721: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c723: push 0x18a98 */ { u32 v = 0x18a98u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c728: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043c72e: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0043c731: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x43c736u); f_005e8389();
L_0043c736:; BB(0x0043c736);
    /* 0043c736: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c738: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c739: ret  */ FN_RET(0x0043c535); r_esp += 4; return;
}

void f_0043c73a(void) /* FUN_0043c73a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c73a);
    /* 0043c73a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c73b: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c73d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c73e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043c741: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c744: mov eax, dword ptr [eax + 0x1dc] */ r_eax = R32((u32)(r_eax+0x1dcu));
    /* 0043c74a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c74d: add eax, dword ptr [ecx + 0x1e0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1e0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c753: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c755: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c756: ret  */ FN_RET(0x0043c73a); r_esp += 4; return;
}

void f_0043c757(void) /* FUN_0043c757 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c757);
    /* 0043c757: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c758: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c75a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c75b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043c75e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c762: jne 0x43c76f */ if (!fZ) goto L_0043c76f;
L_0043c764:; BB(0x0043c764);
    /* 0043c764: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c767: mov eax, dword ptr [eax + 0x1dc] */ r_eax = R32((u32)(r_eax+0x1dcu));
    /* 0043c76d: jmp 0x43c778 */ goto L_0043c778;
L_0043c76f:; BB(0x0043c76f);
    /* 0043c76f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c772: mov eax, dword ptr [ecx + 0x1e0] */ r_eax = R32((u32)(r_ecx+0x1e0u));
L_0043c778:; BB(0x0043c778);
    /* 0043c778: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c77a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c77b: ret 4 */ FN_RET(0x0043c757); r_esp += 8; return;
}

void f_0043c77e(void) /* FUN_0043c77e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c77e);
    /* 0043c77e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c77f: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c781: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c782: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043c785: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c788: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x43c78du); f_0043c73a();
    /* 0043c78d: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c790: jne 0x43c799 */ if (!fZ) goto L_0043c799;
L_0043c792:; BB(0x0043c792);
    /* 0043c792: mov eax, 1 */ r_eax = 0x1u;
    /* 0043c797: jmp 0x43c79b */ goto L_0043c79b;
L_0043c799:; BB(0x0043c799);
    /* 0043c799: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043c79b:; BB(0x0043c79b);
    /* 0043c79b: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c79e: ret 4 */ FN_RET(0x0043c77e); r_esp += 8; return;
}

void f_0043c7a1(void) /* FUN_0043c7a1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c7a1);
    /* 0043c7a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c7a2: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c7a4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c7a7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043c7aa: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043c7b1: jmp 0x43c7bc */ goto L_0043c7bc;
L_0043c7b3:; BB(0x0043c7b3);
    /* 0043c7b3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c7b6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c7b9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043c7bc:; BB(0x0043c7bc);
    /* 0043c7bc: cmp dword ptr [ebp - 8], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c7c0: jge 0x43c811 */ if ((fS==fO)) goto L_0043c811;
L_0043c7c2:; BB(0x0043c7c2);
    /* 0043c7c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043c7c9: jmp 0x43c7d4 */ goto L_0043c7d4;
L_0043c7cb:; BB(0x0043c7cb);
    /* 0043c7cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c7ce: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c7d1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0043c7d4:; BB(0x0043c7d4);
    /* 0043c7d4: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c7d8: jge 0x43c80f */ if ((fS==fO)) goto L_0043c80f;
L_0043c7da:; BB(0x0043c7da);
    /* 0043c7da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c7dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c7de: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c7e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c7e4: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0043c7e8: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x43c7edu); f_004280b4();
    /* 0043c7ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c7ef: je 0x43c80d */ if (fZ) goto L_0043c80d;
L_0043c7f1:; BB(0x0043c7f1);
    /* 0043c7f1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c7f4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c7f7: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0043c7fb: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 0043c801: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c804: jne 0x43c80d */ if (!fZ) goto L_0043c80d;
L_0043c806:; BB(0x0043c806);
    /* 0043c806: mov eax, 1 */ r_eax = 0x1u;
    /* 0043c80b: jmp 0x43c813 */ goto L_0043c813;
L_0043c80d:; BB(0x0043c80d);
    /* 0043c80d: jmp 0x43c7cb */ goto L_0043c7cb;
L_0043c80f:; BB(0x0043c80f);
    /* 0043c80f: jmp 0x43c7b3 */ goto L_0043c7b3;
L_0043c811:; BB(0x0043c811);
    /* 0043c811: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043c813:; BB(0x0043c813);
    /* 0043c813: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c815: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c816: ret 4 */ FN_RET(0x0043c7a1); r_esp += 8; return;
}

void f_0043c819(void) /* FUN_0043c819 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c819);
    /* 0043c819: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c81a: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c81c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c81f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043c822: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043c829: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043c830: jmp 0x43c83b */ goto L_0043c83b;
L_0043c832:; BB(0x0043c832);
    /* 0043c832: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c835: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c838: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043c83b:; BB(0x0043c83b);
    /* 0043c83b: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c83f: jge 0x43c860 */ if ((fS==fO)) goto L_0043c860;
L_0043c841:; BB(0x0043c841);
    /* 0043c841: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c844: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c845: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c848: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c849: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c84c: call 0x43c869 */ r_esp -= 4; W32(r_esp, 0x43c851u); f_0043c869();
    /* 0043c851: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c853: je 0x43c85e */ if (fZ) goto L_0043c85e;
L_0043c855:; BB(0x0043c855);
    /* 0043c855: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c858: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c85b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043c85e:; BB(0x0043c85e);
    /* 0043c85e: jmp 0x43c832 */ goto L_0043c832;
L_0043c860:; BB(0x0043c860);
    /* 0043c860: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c863: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c865: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c866: ret 4 */ FN_RET(0x0043c819); r_esp += 8; return;
}

void f_0043c869(void) /* FUN_0043c869 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c869);
    /* 0043c869: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c86a: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c86c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c86f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043c872: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043c879: jmp 0x43c884 */ goto L_0043c884;
L_0043c87b:; BB(0x0043c87b);
    /* 0043c87b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c87e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c881: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043c884:; BB(0x0043c884);
    /* 0043c884: cmp dword ptr [ebp - 4], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c888: jge 0x43c8bf */ if ((fS==fO)) goto L_0043c8bf;
L_0043c88a:; BB(0x0043c88a);
    /* 0043c88a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c88d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c88e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c891: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c894: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0043c898: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x43c89du); f_004280b4();
    /* 0043c89d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c89f: je 0x43c8bd */ if (fZ) goto L_0043c8bd;
L_0043c8a1:; BB(0x0043c8a1);
    /* 0043c8a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c8a4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c8a7: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0043c8ab: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0043c8b1: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c8b4: jne 0x43c8bd */ if (!fZ) goto L_0043c8bd;
L_0043c8b6:; BB(0x0043c8b6);
    /* 0043c8b6: mov eax, 1 */ r_eax = 0x1u;
    /* 0043c8bb: jmp 0x43c8c1 */ goto L_0043c8c1;
L_0043c8bd:; BB(0x0043c8bd);
    /* 0043c8bd: jmp 0x43c87b */ goto L_0043c87b;
L_0043c8bf:; BB(0x0043c8bf);
    /* 0043c8bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043c8c1:; BB(0x0043c8c1);
    /* 0043c8c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c8c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c8c4: ret 8 */ FN_RET(0x0043c869); r_esp += 12; return;
}

void f_0043c8c7(void) /* FUN_0043c8c7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c8c7);
    /* 0043c8c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c8c8: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c8ca: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c8cd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043c8d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043c8d7: jmp 0x43c8e2 */ goto L_0043c8e2;
L_0043c8d9:; BB(0x0043c8d9);
    /* 0043c8d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c8dc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c8df: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043c8e2:; BB(0x0043c8e2);
    /* 0043c8e2: cmp dword ptr [ebp - 4], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c8e6: jge 0x43c908 */ if ((fS==fO)) goto L_0043c908;
L_0043c8e8:; BB(0x0043c8e8);
    /* 0043c8e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c8eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c8ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c8ef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c8f2: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0043c8f6: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x43c8fbu); f_004280b4();
    /* 0043c8fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c8fd: je 0x43c906 */ if (fZ) goto L_0043c906;
L_0043c8ff:; BB(0x0043c8ff);
    /* 0043c8ff: mov eax, 1 */ r_eax = 0x1u;
    /* 0043c904: jmp 0x43c90a */ goto L_0043c90a;
L_0043c906:; BB(0x0043c906);
    /* 0043c906: jmp 0x43c8d9 */ goto L_0043c8d9;
L_0043c908:; BB(0x0043c908);
    /* 0043c908: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043c90a:; BB(0x0043c90a);
    /* 0043c90a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c90c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c90d: ret 4 */ FN_RET(0x0043c8c7); r_esp += 8; return;
}

void f_0043c910(void) /* FUN_0043c910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c910);
    /* 0043c910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c911: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c913: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c916: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043c919: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043c920: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043c927: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043c92e: jmp 0x43c939 */ goto L_0043c939;
L_0043c930:; BB(0x0043c930);
    /* 0043c930: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c933: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c936: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043c939:; BB(0x0043c939);
    /* 0043c939: cmp dword ptr [ebp - 4], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c93d: jge 0x43c974 */ if ((fS==fO)) goto L_0043c974;
L_0043c93f:; BB(0x0043c93f);
    /* 0043c93f: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0043c942: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c943: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c946: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c947: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c94a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c94d: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0043c951: call 0x428175 */ r_esp -= 4; W32(r_esp, 0x43c956u); f_00428175();
    /* 0043c956: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0043c959: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c95b: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c95e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043c961: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0043c963: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0043c966: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043c969: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c96c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043c96f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0043c972: jmp 0x43c930 */ goto L_0043c930;
L_0043c974:; BB(0x0043c974);
    /* 0043c974: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c976: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c977: ret 8 */ FN_RET(0x0043c910); r_esp += 12; return;
}

void f_0043c97a(void) /* FUN_0043c97a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c97a);
    /* 0043c97a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c97b: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c97d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c980: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043c983: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043c98a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043c991: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043c998: jmp 0x43c9a3 */ goto L_0043c9a3;
L_0043c99a:; BB(0x0043c99a);
    /* 0043c99a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c99d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c9a0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0043c9a3:; BB(0x0043c9a3);
    /* 0043c9a3: cmp dword ptr [ebp - 0xc], 0x54 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c9a7: jge 0x43c9d5 */ if ((fS==fO)) goto L_0043c9d5;
L_0043c9a9:; BB(0x0043c9a9);
    /* 0043c9a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c9ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c9ad: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c9b0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c9b3: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0043c9b7: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x43c9bcu); f_004280b4();
    /* 0043c9bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c9be: je 0x43c9d3 */ if (fZ) goto L_0043c9d3;
L_0043c9c0:; BB(0x0043c9c0);
    /* 0043c9c0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c9c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c9c4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c9c7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c9ca: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0043c9ce: call 0x428686 */ r_esp -= 4; W32(r_esp, 0x43c9d3u); f_00428686();
L_0043c9d3:; BB(0x0043c9d3);
    /* 0043c9d3: jmp 0x43c99a */ goto L_0043c99a;
L_0043c9d5:; BB(0x0043c9d5);
    /* 0043c9d5: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c9d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c9d8: ret 4 */ FN_RET(0x0043c97a); r_esp += 8; return;
}

void f_0043c9db(void) /* FUN_0043c9db */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c9db);
    /* 0043c9db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c9dc: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c9de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c9df: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043c9e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c9e5: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x43c9eau); f_0043a8b5();
    /* 0043c9ea: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0043c9ec: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0043c9ee: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043c9f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c9f2: je 0x43c9f8 */ if (fZ) goto L_0043c9f8;
L_0043c9f4:; BB(0x0043c9f4);
    /* 0043c9f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043c9f6: jmp 0x43ca1d */ goto L_0043ca1d;
L_0043c9f8:; BB(0x0043c9f8);
    /* 0043c9f8: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c9fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043c9fd: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43ca02u); f_0043c77e();
    /* 0043ca02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ca04: jne 0x43ca14 */ if (!fZ) goto L_0043ca14;
L_0043ca06:; BB(0x0043ca06);
    /* 0043ca06: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ca0b: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43ca10u); f_0043c77e();
    /* 0043ca10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ca12: je 0x43ca1b */ if (fZ) goto L_0043ca1b;
L_0043ca14:; BB(0x0043ca14);
    /* 0043ca14: mov eax, 1 */ r_eax = 0x1u;
    /* 0043ca19: jmp 0x43ca1d */ goto L_0043ca1d;
L_0043ca1b:; BB(0x0043ca1b);
    /* 0043ca1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043ca1d:; BB(0x0043ca1d);
    /* 0043ca1d: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ca1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ca20: ret  */ FN_RET(0x0043c9db); r_esp += 4; return;
}

void f_0043ca21(void) /* FUN_0043ca21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ca21);
    /* 0043ca21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca22: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ca24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca25: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ca28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ca2b: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x43ca30u); f_0043a8b5();
    /* 0043ca30: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0043ca32: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0043ca34: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043ca36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ca38: je 0x43ca3e */ if (fZ) goto L_0043ca3e;
L_0043ca3a:; BB(0x0043ca3a);
    /* 0043ca3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043ca3c: jmp 0x43ca71 */ goto L_0043ca71;
L_0043ca3e:; BB(0x0043ca3e);
    /* 0043ca3e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ca43: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43ca48u); f_0043c77e();
    /* 0043ca48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ca4a: jne 0x43ca68 */ if (!fZ) goto L_0043ca68;
L_0043ca4c:; BB(0x0043ca4c);
    /* 0043ca4c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca4e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ca51: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43ca56u); f_0043c77e();
    /* 0043ca56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ca58: jne 0x43ca68 */ if (!fZ) goto L_0043ca68;
L_0043ca5a:; BB(0x0043ca5a);
    /* 0043ca5a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ca5f: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43ca64u); f_0043c77e();
    /* 0043ca64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ca66: je 0x43ca6f */ if (fZ) goto L_0043ca6f;
L_0043ca68:; BB(0x0043ca68);
    /* 0043ca68: mov eax, 1 */ r_eax = 0x1u;
    /* 0043ca6d: jmp 0x43ca71 */ goto L_0043ca71;
L_0043ca6f:; BB(0x0043ca6f);
    /* 0043ca6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043ca71:; BB(0x0043ca71);
    /* 0043ca71: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ca73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ca74: ret  */ FN_RET(0x0043ca21); r_esp += 4; return;
}

void f_0043ca75(void) /* FUN_0043ca75 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ca75);
    /* 0043ca75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca76: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ca78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca79: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ca7c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ca7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ca82: mov edx, dword ptr [eax + 0x1dc] */ r_edx = R32((u32)(r_eax+0x1dcu));
    /* 0043ca88: cmp edx, dword ptr [ecx + 0x1e0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1e0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ca8e: jne 0x43ca97 */ if (!fZ) goto L_0043ca97;
L_0043ca90:; BB(0x0043ca90);
    /* 0043ca90: mov eax, 1 */ r_eax = 0x1u;
    /* 0043ca95: jmp 0x43ca99 */ goto L_0043ca99;
L_0043ca97:; BB(0x0043ca97);
    /* 0043ca97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043ca99:; BB(0x0043ca99);
    /* 0043ca99: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ca9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ca9c: ret  */ FN_RET(0x0043ca75); r_esp += 4; return;
}

void f_0043ca9d(void) /* FUN_0043ca9d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ca9d);
    /* 0043ca9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca9e: mov ebp, esp */ r_ebp = r_esp;
    /* 0043caa0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043caa1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043caa4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043caa7: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x43caacu); f_0043a8b5();
    /* 0043caac: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0043caae: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0043cab0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043cab2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cab4: je 0x43cacb */ if (fZ) goto L_0043cacb;
L_0043cab6:; BB(0x0043cab6);
    /* 0043cab6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cab8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cabb: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43cac0u); f_0043c77e();
    /* 0043cac0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cac2: je 0x43cacb */ if (fZ) goto L_0043cacb;
L_0043cac4:; BB(0x0043cac4);
    /* 0043cac4: mov eax, 1 */ r_eax = 0x1u;
    /* 0043cac9: jmp 0x43cacd */ goto L_0043cacd;
L_0043cacb:; BB(0x0043cacb);
    /* 0043cacb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043cacd:; BB(0x0043cacd);
    /* 0043cacd: mov esp, ebp */ r_esp = r_ebp;
    /* 0043cacf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cad0: ret  */ FN_RET(0x0043ca9d); r_esp += 4; return;
}

void f_0043cad1(void) /* FUN_0043cad1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043cad1);
    /* 0043cad1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043cad2: mov ebp, esp */ r_ebp = r_esp;
    /* 0043cad4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cad5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043cad8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cadb: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x43cae0u); f_0043c73a();
    /* 0043cae0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cae3: jle 0x43caf6 */ if ((fZ||fS!=fO)) goto L_0043caf6;
L_0043cae5:; BB(0x0043cae5);
    /* 0043cae5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cae8: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x43caedu); f_0043c73a();
    /* 0043caed: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043caf0: jge 0x43caf6 */ if ((fS==fO)) goto L_0043caf6;
L_0043caf2:; BB(0x0043caf2);
    /* 0043caf2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043caf4: jmp 0x43cafb */ goto L_0043cafb;
L_0043caf6:; BB(0x0043caf6);
    /* 0043caf6: mov eax, 1 */ r_eax = 0x1u;
L_0043cafb:; BB(0x0043cafb);
    /* 0043cafb: mov esp, ebp */ r_esp = r_ebp;
    /* 0043cafd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cafe: ret  */ FN_RET(0x0043cad1); r_esp += 4; return;
}

void f_0043caff(void) /* FUN_0043caff */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043caff);
    /* 0043caff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043cb00: mov ebp, esp */ r_ebp = r_esp;
    /* 0043cb02: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043cb05: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043cb08: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043cb0f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043cb16: jmp 0x43cb21 */ goto L_0043cb21;
L_0043cb18:; BB(0x0043cb18);
    /* 0043cb18: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cb1b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043cb1e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043cb21:; BB(0x0043cb21);
    /* 0043cb21: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cb25: jge 0x43cb45 */ if ((fS==fO)) goto L_0043cb45;
L_0043cb27:; BB(0x0043cb27);
    /* 0043cb27: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cb2a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043cb2d: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043cb31: call 0x435e5b */ r_esp -= 4; W32(r_esp, 0x43cb36u); f_00435e5b();
    /* 0043cb36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cb38: je 0x43cb43 */ if (fZ) goto L_0043cb43;
L_0043cb3a:; BB(0x0043cb3a);
    /* 0043cb3a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cb3d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043cb40: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043cb43:; BB(0x0043cb43);
    /* 0043cb43: jmp 0x43cb18 */ goto L_0043cb18;
L_0043cb45:; BB(0x0043cb45);
    /* 0043cb45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cb48: mov esp, ebp */ r_esp = r_ebp;
    /* 0043cb4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cb4b: ret  */ FN_RET(0x0043caff); r_esp += 4; return;
}

void f_0043cb4c(void) /* FUN_0043cb4c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043cb4c);
    /* 0043cb4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043cb4d: mov ebp, esp */ r_ebp = r_esp;
    /* 0043cb4f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043cb52: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043cb55: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043cb5c: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0043cb63: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043cb6a: jmp 0x43cb75 */ goto L_0043cb75;
L_0043cb6c:; BB(0x0043cb6c);
    /* 0043cb6c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043cb6f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043cb72: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0043cb75:; BB(0x0043cb75);
    /* 0043cb75: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cb79: jge 0x43cbbc */ if ((fS==fO)) goto L_0043cbbc;
L_0043cb7b:; BB(0x0043cb7b);
    /* 0043cb7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043cb7e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043cb81: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cb86: je 0x43cbba */ if (fZ) goto L_0043cbba;
L_0043cb88:; BB(0x0043cb88);
    /* 0043cb88: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043cb8b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043cb8e: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043cb92: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0043cb95: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x43cb9au); f_00426819();
    /* 0043cb9a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cb9d: jge 0x43cbba */ if ((fS==fO)) goto L_0043cbba;
L_0043cb9f:; BB(0x0043cb9f);
    /* 0043cb9f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043cba2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043cba5: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043cba9: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0043cbac: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x43cbb1u); f_00426819();
    /* 0043cbb1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043cbb4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043cbb7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043cbba:; BB(0x0043cbba);
    /* 0043cbba: jmp 0x43cb6c */ goto L_0043cb6c;
L_0043cbbc:; BB(0x0043cbbc);
    /* 0043cbbc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cbbf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cbc0: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043cbc6: call 0x449093 */ r_esp -= 4; W32(r_esp, 0x43cbcbu); f_00449093();
    /* 0043cbcb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cbce: mov esp, ebp */ r_esp = r_ebp;
    /* 0043cbd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cbd1: ret  */ FN_RET(0x0043cb4c); r_esp += 4; return;
}

void f_0043cbd2(void) /* FUN_0043cbd2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043cbd2);
    /* 0043cbd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043cbd3: mov ebp, esp */ r_ebp = r_esp;
    /* 0043cbd5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043cbd8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043cbdb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cbde: cmp dword ptr [eax + 0x1b8], 0 */ {  u32 a = R32((u32)(r_eax+0x1b8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cbe5: jle 0x43cbec */ if ((fZ||fS!=fO)) goto L_0043cbec;
L_0043cbe7:; BB(0x0043cbe7);
    /* 0043cbe7: jmp 0x43cc85 */ goto L_0043cc85;
L_0043cbec:; BB(0x0043cbec);
    /* 0043cbec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cbef: mov byte ptr [ecx + 0x1e8], 2 */ W8((u32)(r_ecx+0x1e8u), 0x2u);
    /* 0043cbf6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043cbfd: jmp 0x43cc08 */ goto L_0043cc08;
L_0043cbff:; BB(0x0043cbff);
    /* 0043cbff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cc02: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043cc05: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0043cc08:; BB(0x0043cc08);
    /* 0043cc08: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cc0c: jge 0x43cc4d */ if ((fS==fO)) goto L_0043cc4d;
L_0043cc0e:; BB(0x0043cc0e);
    /* 0043cc0e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cc11: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cc14: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043cc18: cmp dword ptr [edx + 0x108], 0 */ {  u32 a = R32((u32)(r_edx+0x108u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cc1f: jge 0x43cc37 */ if ((fS==fO)) goto L_0043cc37;
L_0043cc21:; BB(0x0043cc21);
    /* 0043cc21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cc24: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cc27: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043cc2b: mov dword ptr [edx + 0x138], 1 */ W32((u32)(r_edx+0x138u), 0x1u);
    /* 0043cc35: jmp 0x43cc4b */ goto L_0043cc4b;
L_0043cc37:; BB(0x0043cc37);
    /* 0043cc37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cc3a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cc3d: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043cc41: mov dword ptr [edx + 0x138], 0 */ W32((u32)(r_edx+0x138u), 0x0u);
L_0043cc4b:; BB(0x0043cc4b);
    /* 0043cc4b: jmp 0x43cbff */ goto L_0043cbff;
L_0043cc4d:; BB(0x0043cc4d);
    /* 0043cc4d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cc50: call 0x43cd05 */ r_esp -= 4; W32(r_esp, 0x43cc55u); f_0043cd05();
    /* 0043cc55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cc57: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043cc5c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043cc5f: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043cc65: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043cc68: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043cc6a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43cc6du); call_ind(t); }
    /* 0043cc6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cc6f: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043cc74: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043cc77: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043cc7d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043cc80: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043cc82: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43cc85u); call_ind(t); }
L_0043cc85:; BB(0x0043cc85);
    /* 0043cc85: mov esp, ebp */ r_esp = r_ebp;
    /* 0043cc87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cc88: ret  */ FN_RET(0x0043cbd2); r_esp += 4; return;
}

void f_0043cc89(void) /* FUN_0043cc89 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043cc89);
    /* 0043cc89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043cc8a: mov ebp, esp */ r_ebp = r_esp;
    /* 0043cc8c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043cc8f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043cc92: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0043cc99: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0043cca0: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 0043cca7: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0043ccae: push 0x435b8e */ { u32 v = 0x435b8eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ccb3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ccb5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ccb7: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0043ccba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ccbb: call 0x624bf0 */ r_esp -= 4; W32(r_esp, 0x43ccc0u); f_00624bf0();
    /* 0043ccc0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ccc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ccc6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ccc9: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043cccd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043ccd0: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ccd4: je 0x43ccf8 */ if (fZ) goto L_0043ccf8;
L_0043ccd6:; BB(0x0043ccd6);
    /* 0043ccd6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ccd9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ccdc: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043cce0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0043cce3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cce6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043cce9: mov eax, dword ptr [ecx + eax*4 + 0x20] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043cced: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043ccf0: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0043ccf3: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ccf6: jle 0x43ccff */ if ((fZ||fS!=fO)) goto L_0043ccff;
L_0043ccf8:; BB(0x0043ccf8);
    /* 0043ccf8: mov eax, 1 */ r_eax = 0x1u;
    /* 0043ccfd: jmp 0x43cd01 */ goto L_0043cd01;
L_0043ccff:; BB(0x0043ccff);
    /* 0043ccff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043cd01:; BB(0x0043cd01);
    /* 0043cd01: mov esp, ebp */ r_esp = r_ebp;
    /* 0043cd03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cd04: ret  */ FN_RET(0x0043cc89); r_esp += 4; return;
}

void f_0043cd05(void) /* FUN_0043cd05 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043cd05);
    /* 0043cd05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043cd06: mov ebp, esp */ r_ebp = r_esp;
    /* 0043cd08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cd09: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043cd0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cd0f: mov ecx, dword ptr [eax + 0x1b8] */ r_ecx = R32((u32)(r_eax+0x1b8u));
    /* 0043cd15: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043cd18: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cd1b: mov dword ptr [edx + 0x1b8], ecx */ W32((u32)(r_edx+0x1b8u), r_ecx);
    /* 0043cd21: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043cd27: call 0x448e5d */ r_esp -= 4; W32(r_esp, 0x43cd2cu); f_00448e5d();
    /* 0043cd2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cd2f: cmp dword ptr [ecx + 0x1b8], eax */ {  u32 a = R32((u32)(r_ecx+0x1b8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cd35: jle 0x43cd4d */ if ((fZ||fS!=fO)) goto L_0043cd4d;
L_0043cd37:; BB(0x0043cd37);
    /* 0043cd37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cd3a: call 0x43cc89 */ r_esp -= 4; W32(r_esp, 0x43cd3fu); f_0043cc89();
    /* 0043cd3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cd41: je 0x43cd4d */ if (fZ) goto L_0043cd4d;
L_0043cd43:; BB(0x0043cd43);
    /* 0043cd43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cd46: call 0x43cd66 */ r_esp -= 4; W32(r_esp, 0x43cd4bu); f_0043cd66();
    /* 0043cd4b: jmp 0x43cd62 */ goto L_0043cd62;
L_0043cd4d:; BB(0x0043cd4d);
    /* 0043cd4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cd50: mov eax, dword ptr [edx + 0x1b8] */ r_eax = R32((u32)(r_edx+0x1b8u));
    /* 0043cd56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cd57: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043cd5d: call 0x448ea9 */ r_esp -= 4; W32(r_esp, 0x43cd62u); f_00448ea9();
L_0043cd62:; BB(0x0043cd62);
    /* 0043cd62: mov esp, ebp */ r_esp = r_ebp;
    /* 0043cd64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cd65: ret  */ FN_RET(0x0043cd05); r_esp += 4; return;
}

void f_0043cd66(void) /* FUN_0043cd66 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043cd66);
    /* 0043cd66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043cd67: mov ebp, esp */ r_ebp = r_esp;
    /* 0043cd69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cd6a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043cd6d: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043cd73: call 0x448e5d */ r_esp -= 4; W32(r_esp, 0x43cd78u); f_00448e5d();
    /* 0043cd78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cd7b: cmp dword ptr [ecx + 0x1b8], eax */ {  u32 a = R32((u32)(r_ecx+0x1b8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cd81: jg 0x43cd90 */ if ((!fZ&&fS==fO)) goto L_0043cd90;
L_0043cd83:; BB(0x0043cd83);
    /* 0043cd83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cd86: call 0x43caff */ r_esp -= 4; W32(r_esp, 0x43cd8bu); f_0043caff();
    /* 0043cd8b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cd8e: jne 0x43cdbf */ if (!fZ) goto L_0043cdbf;
L_0043cd90:; BB(0x0043cd90);
    /* 0043cd90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cd93: call 0x43caff */ r_esp -= 4; W32(r_esp, 0x43cd98u); f_0043caff();
    /* 0043cd98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cd9a: jne 0x43cdb7 */ if (!fZ) goto L_0043cdb7;
L_0043cd9c:; BB(0x0043cd9c);
    /* 0043cd9c: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cda1: push 0x653f7c */ { u32 v = 0x653f7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043cda6: push 0x653f8c */ { u32 v = 0x653f8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043cdab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cdad: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x43cdb2u); f_0060f9f3();
    /* 0043cdb2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043cdb5: jmp 0x43cdbf */ goto L_0043cdbf;
L_0043cdb7:; BB(0x0043cdb7);
    /* 0043cdb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cdba: call 0x43cb4c */ r_esp -= 4; W32(r_esp, 0x43cdbfu); f_0043cb4c();
L_0043cdbf:; BB(0x0043cdbf);
    /* 0043cdbf: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0043cdc5: mov dword ptr [edx + 0x12ec4], 0 */ W32((u32)(r_edx+0x12ec4u), 0x0u);
    /* 0043cdcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cdd1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cdd3: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043cdd8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043cddb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cddc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cdde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cde1: call 0x43adaa */ r_esp -= 4; W32(r_esp, 0x43cde6u); f_0043adaa();
    /* 0043cde6: mov esp, ebp */ r_esp = r_ebp;
    /* 0043cde8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cde9: ret  */ FN_RET(0x0043cd66); r_esp += 4; return;
}

void f_0043cdea(void) /* FUN_0043cdea */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043cdea);
    /* 0043cdea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043cdeb: mov ebp, esp */ r_ebp = r_esp;
    /* 0043cded: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043cdf0: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043cdf3: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 0043cdfa: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043ce01: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0043ce08: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043ce0e: call 0x4490ac */ r_esp -= 4; W32(r_esp, 0x43ce13u); f_004490ac();
    /* 0043ce13: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043ce16: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ce1a: je 0x43ce4a */ if (fZ) goto L_0043ce4a;
L_0043ce1c:; BB(0x0043ce1c);
    /* 0043ce1c: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0043ce1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce20: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043ce26: call 0x448e71 */ r_esp -= 4; W32(r_esp, 0x43ce2bu); f_00448e71();
    /* 0043ce2b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ce2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce2f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ce32: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043ce35: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043ce39: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x43ce3eu); f_004259cd();
    /* 0043ce3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce3f: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043ce45: call 0x448d62 */ r_esp -= 4; W32(r_esp, 0x43ce4au); f_00448d62();
L_0043ce4a:; BB(0x0043ce4a);
    /* 0043ce4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ce4d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043ce50: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043ce54: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x43ce59u); f_004259a0();
    /* 0043ce59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ce5b: je 0x43ceb2 */ if (fZ) goto L_0043ceb2;
L_0043ce5d:; BB(0x0043ce5d);
    /* 0043ce5d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ce60: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043ce63: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043ce67: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0043ce6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce6b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043ce71: call 0x45c475 */ r_esp -= 4; W32(r_esp, 0x43ce76u); f_0045c475();
    /* 0043ce76: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0043ce79: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0043ce7c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043ce7f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0043ce82: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ce85: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043ce88: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043ce8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce91: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0043ce94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ce97: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ce9a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043ce9d: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043cea1: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x43cea6u); f_004259cd();
    /* 0043cea6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cea7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043cead: call 0x45cde1 */ r_esp -= 4; W32(r_esp, 0x43ceb2u); f_0045cde1();
L_0043ceb2:; BB(0x0043ceb2);
    /* 0043ceb2: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ceb7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043cebd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043cebf: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043cec5: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43cec8u); call_ind(t); }
    /* 0043cec8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ceca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cecb: ret  */ FN_RET(0x0043cdea); r_esp += 4; return;
}

void f_0043cecc(void) /* FUN_0043cecc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043cecc);
    /* 0043cecc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043cecd: mov ebp, esp */ r_ebp = r_esp;
    /* 0043cecf: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043ced2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043ced5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ced7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ced9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043cedf: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x43cee4u); f_0045c4ac();
    /* 0043cee4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043cee7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ceea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043ceec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ceef: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43cef2u); call_ind(t); }
    /* 0043cef2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cef4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cef7: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x43cefcu); f_005d6635();
    /* 0043cefc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ceff: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043cf02: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x43cf07u); f_005e03cc();
    /* 0043cf07: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf0e: jne 0x43cf4f */ if (!fZ) goto L_0043cf4f;
L_0043cf10:; BB(0x0043cf10);
    /* 0043cf10: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043cf16: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0043cf1c: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 0043cf22: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x43cf27u); f_005d71b9();
    /* 0043cf27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf29: je 0x43cf4f */ if (fZ) goto L_0043cf4f;
L_0043cf2b:; BB(0x0043cf2b);
    /* 0043cf2b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cf2e: mov byte ptr [eax + 7], 0 */ W8((u32)(r_eax+0x7u), 0x0u);
    /* 0043cf32: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043cf38: mov dword ptr [ecx + 0x208], 0 */ W32((u32)(r_ecx+0x208u), 0x0u);
    /* 0043cf42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cf44: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043cf4a: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x43cf4fu); f_0045c8df();
L_0043cf4f:; BB(0x0043cf4f);
    /* 0043cf4f: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043cf55: mov ecx, dword ptr [edx + 0x1ac] */ r_ecx = R32((u32)(r_edx+0x1acu));
    /* 0043cf5b: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x43cf60u); f_005e0a55();
    /* 0043cf60: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043cf65: mov dword ptr [eax + 0x1ac], 0 */ W32((u32)(r_eax+0x1acu), 0x0u);
    /* 0043cf6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cf71: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043cf77: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0043cf7a: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043cf80: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043cf83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043cf85: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43cf88u); call_ind(t); }
    /* 0043cf88: mov esp, ebp */ r_esp = r_ebp;
    /* 0043cf8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cf8b: ret  */ FN_RET(0x0043cecc); r_esp += 4; return;
}

void f_0043cf8c(void) /* FUN_0043cf8c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043cf8c);
    /* 0043cf8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043cf8d: mov ebp, esp */ r_ebp = r_esp;
    /* 0043cf8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cf90: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043cf93: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043cf96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cf97: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043cf9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cf9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cf9e: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x43cfa3u); f_005d80f0();
    /* 0043cfa3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cfa6: mov dword ptr [edx], 0x63488c */ W32((u32)(r_edx), 0x63488cu);
    /* 0043cfac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cfaf: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 0043cfb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cfbc: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 0043cfc6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cfc9: mov esp, ebp */ r_esp = r_ebp;
    /* 0043cfcb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cfcc: ret 8 */ FN_RET(0x0043cf8c); r_esp += 12; return;
}

void f_0043cfcf(void) /* FUN_0043cfcf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043cfcf);
    /* 0043cfcf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043cfd0: mov ebp, esp */ r_ebp = r_esp;
    /* 0043cfd2: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043cfd5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043cfd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043cfdb: mov dword ptr [eax], 0x63488c */ W32((u32)(r_eax), 0x63488cu);
    /* 0043cfe1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043cfe4: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0043cfea: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0043cfed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043cff0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043cff3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cff7: je 0x43d00a */ if (fZ) goto L_0043d00a;
L_0043cff9:; BB(0x0043cff9);
    /* 0043cff9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cffb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043cffe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043d000: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d003: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x43d005u); call_ind(t); }
    /* 0043d005: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043d008: jmp 0x43d011 */ goto L_0043d011;
L_0043d00a:; BB(0x0043d00a);
    /* 0043d00a: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0043d011:; BB(0x0043d011);
    /* 0043d011: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d014: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 0043d01e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d021: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 0043d027: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0043d02a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043d02d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043d030: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d034: je 0x43d047 */ if (fZ) goto L_0043d047;
L_0043d036:; BB(0x0043d036);
    /* 0043d036: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d038: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d03b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043d03d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d040: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x43d042u); call_ind(t); }
    /* 0043d042: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043d045: jmp 0x43d04e */ goto L_0043d04e;
L_0043d047:; BB(0x0043d047);
    /* 0043d047: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0043d04e:; BB(0x0043d04e);
    /* 0043d04e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d051: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 0043d05b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d05e: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x43d063u); f_005d8154();
    /* 0043d063: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d065: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d066: ret  */ FN_RET(0x0043cfcf); r_esp += 4; return;
}

void f_0043d067(void) /* FUN_0043d067 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d067);
    /* 0043d067: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d068: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d06a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043d06d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043d070: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d072: push 0x653f98 */ { u32 v = 0x653f98u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d077: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d07a: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x43d07fu); f_005d825e();
    /* 0043d07f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d081: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d084: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x43d089u); f_005e0731();
    /* 0043d089: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d08c: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d093: jne 0x43d0d7 */ if (!fZ) goto L_0043d0d7;
L_0043d095:; BB(0x0043d095);
    /* 0043d095: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d09a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x43d09fu); f_0048ab58();
    /* 0043d09f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d0a2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043d0a5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d0a9: je 0x43d0c4 */ if (fZ) goto L_0043d0c4;
L_0043d0ab:; BB(0x0043d0ab);
    /* 0043d0ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d0ae: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x43d0b3u); f_005d5d20();
    /* 0043d0b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d0b6: mov dword ptr [ecx], 0x6348a4 */ W32((u32)(r_ecx), 0x6348a4u);
    /* 0043d0bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d0bf: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0043d0c2: jmp 0x43d0cb */ goto L_0043d0cb;
L_0043d0c4:; BB(0x0043d0c4);
    /* 0043d0c4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0043d0cb:; BB(0x0043d0cb);
    /* 0043d0cb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d0ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043d0d1: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
L_0043d0d7:; BB(0x0043d0d7);
    /* 0043d0d7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d0da: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d0e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d0e3: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0043d0e6: push 0x653fac */ { u32 v = 0x653facu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d0eb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d0ee: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 0043d0f4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d0f7: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 0043d0fd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043d0ff: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x43d102u); call_ind(t); }
    /* 0043d102: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d104: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d106: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d108: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d10b: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0043d111: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d114: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d11a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d11c: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x43d11fu); call_ind(t); }
    /* 0043d11f: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d124: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d127: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d12d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d130: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d136: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d138: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x43d13bu); call_ind(t); }
    /* 0043d13b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d13d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d13f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d142: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d148: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d14b: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d151: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d153: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x43d156u); call_ind(t); }
    /* 0043d156: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d158: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d15a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d15d: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d163: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d166: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d16c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d16e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43d171u); call_ind(t); }
    /* 0043d171: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d173: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d176: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d17c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d17f: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d185: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d187: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43d18au); call_ind(t); }
    /* 0043d18a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d18c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d18e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d190: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d192: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d195: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d19b: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x43d1a0u); f_005d5ff2();
    /* 0043d1a0: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d1a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d1a5: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0043d1ab: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x43d1b0u); f_005d65d6();
    /* 0043d1b0: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d1b7: jne 0x43d2c6 */ if (!fZ) goto L_0043d2c6;
L_0043d1bd:; BB(0x0043d1bd);
    /* 0043d1bd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d1c0: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d1c7: jne 0x43d201 */ if (!fZ) goto L_0043d201;
L_0043d1c9:; BB(0x0043d1c9);
    /* 0043d1c9: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d1ce: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x43d1d3u); f_0048ab58();
    /* 0043d1d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d1d6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043d1d9: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d1dd: je 0x43d1ee */ if (fZ) goto L_0043d1ee;
L_0043d1df:; BB(0x0043d1df);
    /* 0043d1df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d1e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d1e4: call 0x5d6e50 */ r_esp -= 4; W32(r_esp, 0x43d1e9u); f_005d6e50();
    /* 0043d1e9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043d1ec: jmp 0x43d1f5 */ goto L_0043d1f5;
L_0043d1ee:; BB(0x0043d1ee);
    /* 0043d1ee: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0043d1f5:; BB(0x0043d1f5);
    /* 0043d1f5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d1f8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d1fb: mov dword ptr [eax + 0x90], ecx */ W32((u32)(r_eax+0x90u), r_ecx);
L_0043d201:; BB(0x0043d201);
    /* 0043d201: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d204: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0043d20a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d20d: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0043d210: push 0x653fb8 */ { u32 v = 0x653fb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d215: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d218: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 0043d21e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d221: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 0043d227: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043d229: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x43d22cu); call_ind(t); }
    /* 0043d22c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d22e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d230: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d232: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d235: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 0043d23b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d23e: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0043d244: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d246: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x43d249u); call_ind(t); }
    /* 0043d249: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d24e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d251: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0043d257: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d25a: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0043d260: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d262: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x43d265u); call_ind(t); }
    /* 0043d265: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d267: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d269: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d26c: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0043d272: call 0x5d7422 */ r_esp -= 4; W32(r_esp, 0x43d277u); f_005d7422();
    /* 0043d277: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d279: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d27b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d27e: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 0043d284: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d287: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0043d28d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d28f: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x43d292u); call_ind(t); }
    /* 0043d292: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d294: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d296: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d299: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0043d29f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d2a2: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0043d2a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d2aa: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43d2adu); call_ind(t); }
    /* 0043d2ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d2af: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d2b2: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0043d2b8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d2bb: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0043d2c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d2c3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43d2c6u); call_ind(t); }
L_0043d2c6:; BB(0x0043d2c6);
    /* 0043d2c6: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d2c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d2c9: ret  */ FN_RET(0x0043d067); r_esp += 4; return;
}

void f_0043d2ca(void) /* FUN_0043d2ca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d2ca);
    /* 0043d2ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d2cb: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d2cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d2ce: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d2d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d2d4: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x43d2d9u); f_005e030e();
    /* 0043d2d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d2dc: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d2e3: je 0x43d2fc */ if (fZ) goto L_0043d2fc;
L_0043d2e5:; BB(0x0043d2e5);
    /* 0043d2e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d2e8: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0043d2ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d2f1: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d2f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d2f9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43d2fcu); call_ind(t); }
L_0043d2fc:; BB(0x0043d2fc);
    /* 0043d2fc: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d303: jne 0x43d33f */ if (!fZ) goto L_0043d33f;
L_0043d305:; BB(0x0043d305);
    /* 0043d305: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d308: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d30f: je 0x43d33f */ if (fZ) goto L_0043d33f;
L_0043d311:; BB(0x0043d311);
    /* 0043d311: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d314: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 0043d31a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d31d: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0043d323: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d325: call dword ptr [edx + 0x70] */ { u32 t = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, 0x43d328u); call_ind(t); }
    /* 0043d328: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d32b: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0043d331: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d334: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0043d33a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d33c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43d33fu); call_ind(t); }
L_0043d33f:; BB(0x0043d33f);
    /* 0043d33f: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d341: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d342: ret  */ FN_RET(0x0043d2ca); r_esp += 4; return;
}

void f_0043d343(void) /* FUN_0043d343 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d343);
    /* 0043d343: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d344: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d346: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d347: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d34a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d34d: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x43d352u); f_005d5d20();
    /* 0043d352: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d355: mov dword ptr [eax], 0x634914 */ W32((u32)(r_eax), 0x634914u);
    /* 0043d35b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d35e: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d360: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d361: ret  */ FN_RET(0x0043d343); r_esp += 4; return;
}

void f_0043d362(void) /* FUN_0043d362 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d362);
    /* 0043d362: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d363: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d365: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d366: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d369: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d36c: mov dword ptr [eax], 0x634914 */ W32((u32)(r_eax), 0x634914u);
    /* 0043d372: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d375: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x43d37au); f_005d5dfb();
    /* 0043d37a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d37c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d37d: ret  */ FN_RET(0x0043d362); r_esp += 4; return;
}

void f_0043d37e(void) /* FUN_0043d37e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d37e);
    /* 0043d37e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d37f: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d381: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043d384: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043d387: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043d38d: call 0x437349 */ r_esp -= 4; W32(r_esp, 0x43d392u); f_00437349();
    /* 0043d392: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0043d395: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043d39b: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043d39f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043d3a2: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d3a9: je 0x43d3df */ if (fZ) goto L_0043d3df;
L_0043d3ab:; BB(0x0043d3ab);
    /* 0043d3ab: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043d3b0: mov dword ptr [eax + 0x1d4], 0 */ W32((u32)(r_eax+0x1d4u), 0x0u);
    /* 0043d3ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d3bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d3bf: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x43d3c4u); f_005d6635();
    /* 0043d3c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d3c7: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0043d3ca: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x43d3cfu); f_005e03cc();
    /* 0043d3cf: mov ecx, dword ptr [0x6f666c] */ r_ecx = R32((u32)(0x6f666cu));
    /* 0043d3d5: call 0x4405c5 */ r_esp -= 4; W32(r_esp, 0x43d3dau); f_004405c5();
    /* 0043d3da: jmp 0x43d4c5 */ goto L_0043d4c5;
L_0043d3df:; BB(0x0043d3df);
    /* 0043d3df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d3e2: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x43d3e7u); f_004259a0();
    /* 0043d3e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d3e9: jne 0x43d3f0 */ if (!fZ) goto L_0043d3f0;
L_0043d3eb:; BB(0x0043d3eb);
    /* 0043d3eb: jmp 0x43d4c5 */ goto L_0043d4c5;
L_0043d3f0:; BB(0x0043d3f0);
    /* 0043d3f0: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043d3f6: call 0x45cc47 */ r_esp -= 4; W32(r_esp, 0x43d3fbu); f_0045cc47();
    /* 0043d3fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d3fd: je 0x43d446 */ if (fZ) goto L_0043d446;
L_0043d3ff:; BB(0x0043d3ff);
    /* 0043d3ff: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043d405: cmp dword ptr [edx + 0x20c], 0 */ {  u32 a = R32((u32)(r_edx+0x20cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d40c: jne 0x43d446 */ if (!fZ) goto L_0043d446;
L_0043d40e:; BB(0x0043d40e);
    /* 0043d40e: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043d414: call 0x43711c */ r_esp -= 4; W32(r_esp, 0x43d419u); f_0043711c();
    /* 0043d419: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d41b: je 0x43d446 */ if (fZ) goto L_0043d446;
L_0043d41d:; BB(0x0043d41d);
    /* 0043d41d: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043d422: mov dword ptr [eax + 0x20c], 1 */ W32((u32)(r_eax+0x20cu), 0x1u);
    /* 0043d42c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d42e: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043d434: call 0x43906c */ r_esp -= 4; W32(r_esp, 0x43d439u); f_0043906c();
    /* 0043d439: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 0043d43f: call 0x60e9a5 */ r_esp -= 4; W32(r_esp, 0x43d444u); f_0060e9a5();
    /* 0043d444: jmp 0x43d4c5 */ goto L_0043d4c5;
L_0043d446:; BB(0x0043d446);
    /* 0043d446: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043d44c: cmp dword ptr [ecx + 0x1f8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d453: je 0x43d463 */ if (fZ) goto L_0043d463;
L_0043d455:; BB(0x0043d455);
    /* 0043d455: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043d45b: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0043d45e: call 0x4248da */ r_esp -= 4; W32(r_esp, 0x43d463u); f_004248da();
L_0043d463:; BB(0x0043d463);
    /* 0043d463: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043d468: mov dword ptr [eax + 0x20c], 0 */ W32((u32)(r_eax+0x20cu), 0x0u);
    /* 0043d472: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043d478: call 0x437838 */ r_esp -= 4; W32(r_esp, 0x43d47du); f_00437838();
    /* 0043d47d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d480: mov dword ptr [ecx + 0x130], 1 */ W32((u32)(r_ecx+0x130u), 0x1u);
    /* 0043d48a: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043d490: mov dword ptr [edx + 0x1d4], 0 */ W32((u32)(r_edx+0x1d4u), 0x0u);
    /* 0043d49a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d49d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d49f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d4a2: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43d4a5u); call_ind(t); }
    /* 0043d4a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d4a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d4aa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d4ad: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43d4b0u); call_ind(t); }
    /* 0043d4b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4b2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d4b5: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x43d4bau); f_005d6635();
    /* 0043d4ba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d4bd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043d4c0: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x43d4c5u); f_005e03cc();
L_0043d4c5:; BB(0x0043d4c5);
    /* 0043d4c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d4c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d4c8: ret  */ FN_RET(0x0043d37e); r_esp += 4; return;
}

void f_0043d4c9(void) /* FUN_0043d4c9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d4c9);
    /* 0043d4c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4ca: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d4cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4cd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d4d0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043d4d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043d4d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d4db: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x43d4e0u); f_005d80f0();
    /* 0043d4e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d4e3: mov dword ptr [edx], 0x634984 */ W32((u32)(r_edx), 0x634984u);
    /* 0043d4e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d4ec: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 0043d4f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d4f9: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 0043d503: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d506: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d508: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d509: ret 8 */ FN_RET(0x0043d4c9); r_esp += 12; return;
}

void f_0043d50c(void) /* FUN_0043d50c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d50c);
    /* 0043d50c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d50d: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d50f: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043d512: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043d515: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d518: mov dword ptr [eax], 0x634984 */ W32((u32)(r_eax), 0x634984u);
    /* 0043d51e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d521: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0043d527: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0043d52a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d52d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043d530: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d534: je 0x43d547 */ if (fZ) goto L_0043d547;
L_0043d536:; BB(0x0043d536);
    /* 0043d536: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d538: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d53b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043d53d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d540: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x43d542u); call_ind(t); }
    /* 0043d542: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043d545: jmp 0x43d54e */ goto L_0043d54e;
L_0043d547:; BB(0x0043d547);
    /* 0043d547: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0043d54e:; BB(0x0043d54e);
    /* 0043d54e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d551: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 0043d55b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d55e: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 0043d564: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0043d567: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043d56a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043d56d: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d571: je 0x43d584 */ if (fZ) goto L_0043d584;
L_0043d573:; BB(0x0043d573);
    /* 0043d573: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d575: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d578: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043d57a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d57d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x43d57fu); call_ind(t); }
    /* 0043d57f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043d582: jmp 0x43d58b */ goto L_0043d58b;
L_0043d584:; BB(0x0043d584);
    /* 0043d584: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0043d58b:; BB(0x0043d58b);
    /* 0043d58b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d58e: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 0043d598: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d59b: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x43d5a0u); f_005d8154();
    /* 0043d5a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d5a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d5a3: ret  */ FN_RET(0x0043d50c); r_esp += 4; return;
}

void f_0043d5a4(void) /* FUN_0043d5a4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d5a4);
    /* 0043d5a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d5a7: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043d5aa: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043d5ad: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5af: push 0x653fcc */ { u32 v = 0x653fccu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d5b7: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x43d5bcu); f_005d825e();
    /* 0043d5bc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d5c1: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x43d5c6u); f_005e0731();
    /* 0043d5c6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d5c9: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d5d0: jne 0x43d608 */ if (!fZ) goto L_0043d608;
L_0043d5d2:; BB(0x0043d5d2);
    /* 0043d5d2: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5d7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x43d5dcu); f_0048ab58();
    /* 0043d5dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d5df: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043d5e2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d5e6: je 0x43d5f5 */ if (fZ) goto L_0043d5f5;
L_0043d5e8:; BB(0x0043d5e8);
    /* 0043d5e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d5eb: call 0x43d343 */ r_esp -= 4; W32(r_esp, 0x43d5f0u); f_0043d343();
    /* 0043d5f0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043d5f3: jmp 0x43d5fc */ goto L_0043d5fc;
L_0043d5f5:; BB(0x0043d5f5);
    /* 0043d5f5: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0043d5fc:; BB(0x0043d5fc);
    /* 0043d5fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d5ff: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043d602: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
L_0043d608:; BB(0x0043d608);
    /* 0043d608: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d60b: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d611: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d614: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0043d617: push 0x653fe0 */ { u32 v = 0x653fe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d61c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d61f: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d625: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d628: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d62e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d630: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x43d633u); call_ind(t); }
    /* 0043d633: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d635: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d637: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d639: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d63c: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d642: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d645: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d64b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d64d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x43d650u); call_ind(t); }
    /* 0043d650: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d655: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d658: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d65e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d661: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d667: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d669: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x43d66cu); call_ind(t); }
    /* 0043d66c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d66e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d670: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d673: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d679: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d67c: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d682: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d684: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x43d687u); call_ind(t); }
    /* 0043d687: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d689: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d68b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d68e: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d694: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d697: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d69d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d69f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43d6a2u); call_ind(t); }
    /* 0043d6a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6a4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d6a7: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d6ad: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d6b0: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d6b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d6b8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43d6bbu); call_ind(t); }
    /* 0043d6bb: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6bd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6bf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6c1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6c3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d6c6: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d6cc: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x43d6d1u); f_005d5ff2();
    /* 0043d6d1: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d6d6: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0043d6dc: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x43d6e1u); f_005d65d6();
    /* 0043d6e1: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d6e8: je 0x43d70c */ if (fZ) goto L_0043d70c;
L_0043d6ea:; BB(0x0043d6ea);
    /* 0043d6ea: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6ec: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d6ef: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 0043d6f5: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x43d6fau); f_005d65d6();
    /* 0043d6fa: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6fc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d6ff: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d705: call 0x5d65f9 */ r_esp -= 4; W32(r_esp, 0x43d70au); f_005d65f9();
    /* 0043d70a: jmp 0x43d71c */ goto L_0043d71c;
L_0043d70c:; BB(0x0043d70c);
    /* 0043d70c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d70e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d711: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0043d717: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x43d71cu); f_005d65d6();
L_0043d71c:; BB(0x0043d71c);
    /* 0043d71c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d71f: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d726: jne 0x43d75e */ if (!fZ) goto L_0043d75e;
L_0043d728:; BB(0x0043d728);
    /* 0043d728: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d72d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x43d732u); f_0048ab58();
    /* 0043d732: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d735: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043d738: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d73c: je 0x43d74b */ if (fZ) goto L_0043d74b;
L_0043d73e:; BB(0x0043d73e);
    /* 0043d73e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d741: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x43d746u); f_005e8590();
    /* 0043d746: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043d749: jmp 0x43d752 */ goto L_0043d752;
L_0043d74b:; BB(0x0043d74b);
    /* 0043d74b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0043d752:; BB(0x0043d752);
    /* 0043d752: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d755: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d758: mov dword ptr [eax + 0x90], ecx */ W32((u32)(r_eax+0x90u), r_ecx);
L_0043d75e:; BB(0x0043d75e);
    /* 0043d75e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d761: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0043d767: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d76a: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0043d76d: push 0x6f6378 */ { u32 v = 0x6f6378u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d772: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d775: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 0043d77b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d77e: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 0043d784: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043d786: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x43d789u); call_ind(t); }
    /* 0043d789: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d78b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d78e: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 0043d794: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x43d799u); f_005e87aa();
    /* 0043d799: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d79c: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 0043d7a2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d7a5: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 0043d7ab: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043d7ad: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x43d7b0u); call_ind(t); }
    /* 0043d7b0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d7b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d7b5: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 0043d7bb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d7be: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0043d7c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d7c6: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43d7c9u); call_ind(t); }
    /* 0043d7c9: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d7cb: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d7cd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d7d0: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0043d7d6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d7d9: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0043d7df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d7e1: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43d7e4u); call_ind(t); }
    /* 0043d7e4: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d7e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d7e7: ret  */ FN_RET(0x0043d5a4); r_esp += 4; return;
}

void f_0043d7e8(void) /* FUN_0043d7e8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d7e8);
    /* 0043d7e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d7e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d7eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d7ec: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d7ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d7f2: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x43d7f7u); f_005e030e();
    /* 0043d7f7: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d7fe: je 0x43d850 */ if (fZ) goto L_0043d850;
L_0043d800:; BB(0x0043d800);
    /* 0043d800: push 0x653fe8 */ { u32 v = 0x653fe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d805: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d808: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d80e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d811: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d817: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d819: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x43d81cu); call_ind(t); }
    /* 0043d81c: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d81e: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d820: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d823: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d829: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d82c: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d832: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d834: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43d837u); call_ind(t); }
    /* 0043d837: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d83a: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0043d840: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d843: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0043d849: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d84b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43d84eu); call_ind(t); }
    /* 0043d84e: jmp 0x43d89e */ goto L_0043d89e;
L_0043d850:; BB(0x0043d850);
    /* 0043d850: push 0x653ff0 */ { u32 v = 0x653ff0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d855: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d858: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d85e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d861: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d867: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d869: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x43d86cu); call_ind(t); }
    /* 0043d86c: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d86e: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d870: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d873: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d879: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d87c: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d882: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d884: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43d887u); call_ind(t); }
    /* 0043d887: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d88a: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0043d890: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d893: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0043d899: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d89b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43d89eu); call_ind(t); }
L_0043d89e:; BB(0x0043d89e);
    /* 0043d89e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d8a1: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0043d8a7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d8aa: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d8b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d8b2: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43d8b5u); call_ind(t); }
    /* 0043d8b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d8b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d8b8: ret  */ FN_RET(0x0043d7e8); r_esp += 4; return;
}

