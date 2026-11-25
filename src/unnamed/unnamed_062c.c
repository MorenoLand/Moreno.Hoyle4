#include "protos.h"

void f_0062c330(void) /* sub_0062c330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c330);
    /* 0062c330: mov eax, dword ptr [0x7128c0] */ r_eax = R32((u32)(0x7128c0u));
    /* 0062c335: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062c336: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c338: jne 0x62c341 */ if (!fZ) goto L_0062c341;
L_0062c33a:; BB(0x0062c33a);
    /* 0062c33a: mov eax, 0x200 */ r_eax = 0x200u;
    /* 0062c33f: jmp 0x62c34b */ goto L_0062c34b;
L_0062c341:; BB(0x0062c341);
    /* 0062c341: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062c344: jge 0x62c350 */ if ((fS==fO)) goto L_0062c350;
L_0062c346:; BB(0x0062c346);
    /* 0062c346: mov eax, 0x14 */ r_eax = 0x14u;
L_0062c34b:; BB(0x0062c34b);
    /* 0062c34b: mov dword ptr [0x7128c0], eax */ W32((u32)(0x7128c0u), r_eax);
L_0062c350:; BB(0x0062c350);
    /* 0062c350: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c352: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c353: call 0x630550 */ r_esp -= 4; W32(r_esp, 0x62c358u); f_00630550();
    /* 0062c358: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c35b: mov dword ptr [0x7118a0], eax */ W32((u32)(0x7118a0u), r_eax);
    /* 0062c360: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c362: jne 0x62c392 */ if (!fZ) goto L_0062c392;
L_0062c364:; BB(0x0062c364);
    /* 0062c364: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c366: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c368: mov dword ptr [0x7128c0], 0x14 */ W32((u32)(0x7128c0u), 0x14u);
    /* 0062c372: call 0x630550 */ r_esp -= 4; W32(r_esp, 0x62c377u); f_00630550();
    /* 0062c377: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c37a: mov dword ptr [0x7118a0], eax */ W32((u32)(0x7118a0u), r_eax);
    /* 0062c37f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c381: jne 0x62c392 */ if (!fZ) goto L_0062c392;
L_0062c383:; BB(0x0062c383);
    /* 0062c383: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0062c385: call 0x627150 */ r_esp -= 4; W32(r_esp, 0x62c38au); f_00627150();
    /* 0062c38a: mov eax, dword ptr [0x7118a0] */ r_eax = R32((u32)(0x7118a0u));
    /* 0062c38f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062c392:; BB(0x0062c392);
    /* 0062c392: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062c394: mov ecx, 0x6f4900 */ r_ecx = 0x6f4900u;
    /* 0062c399: jmp 0x62c3a0 */ goto L_0062c3a0;
L_0062c39b:; BB(0x0062c39b);
    /* 0062c39b: mov eax, dword ptr [0x7118a0] */ r_eax = R32((u32)(0x7118a0u));
L_0062c3a0:; BB(0x0062c3a0);
    /* 0062c3a0: mov dword ptr [eax + edx], ecx */ W32((u32)(r_eax+r_edx), r_ecx);
    /* 0062c3a3: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062c3a6: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062c3a9: cmp ecx, 0x6f4b80 */ {  u32 a = r_ecx; u32 b = 0x6f4b80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062c3af: jl 0x62c39b */ if ((fS!=fO)) goto L_0062c39b;
L_0062c3b1:; BB(0x0062c3b1);
    /* 0062c3b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062c3b3: mov edx, 0x6f4910 */ r_edx = 0x6f4910u;
L_0062c3b8:; BB(0x0062c3b8);
    /* 0062c3b8: mov ecx, eax */ r_ecx = r_eax;
    /* 0062c3ba: mov esi, eax */ r_esi = r_eax;
    /* 0062c3bc: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062c3bf: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0062c3c2: mov ecx, dword ptr [ecx*4 + 0x7128e0] */ r_ecx = R32((u32)(r_ecx*4+0x7128e0u));
    /* 0062c3c9: mov ecx, dword ptr [ecx + esi*8] */ r_ecx = R32((u32)(r_ecx+r_esi*8));
    /* 0062c3cc: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c3cf: je 0x62c3d5 */ if (fZ) goto L_0062c3d5;
L_0062c3d1:; BB(0x0062c3d1);
    /* 0062c3d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c3d3: jne 0x62c3db */ if (!fZ) goto L_0062c3db;
L_0062c3d5:; BB(0x0062c3d5);
    /* 0062c3d5: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
L_0062c3db:; BB(0x0062c3db);
    /* 0062c3db: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062c3de: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062c3df: cmp edx, 0x6f4970 */ {  u32 a = r_edx; u32 b = 0x6f4970u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062c3e5: jl 0x62c3b8 */ if ((fS!=fO)) goto L_0062c3b8;
L_0062c3e7:; BB(0x0062c3e7);
    /* 0062c3e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062c3e8: ret  */ FN_RET(0x0062c330); r_esp += 4; return;
}

void f_0062c3f0(void) /* sub_0062c3f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c3f0);
    /* 0062c3f0: call 0x626780 */ r_esp -= 4; W32(r_esp, 0x62c3f5u); f_00626780();
    /* 0062c3f5: mov al, byte ptr [0x71149c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x71149cu))) & 0xffu);
    /* 0062c3fa: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062c3fc: je 0x62c403 */ if (fZ) goto L_0062c403;
L_0062c3fe:; BB(0x0062c3fe);
    /* 0062c3fe: jmp 0x6305f0 */ goto L_006305f0;
L_0062c403:; BB(0x0062c403);
    /* 0062c403: ret  */ FN_RET(0x0062c3f0); r_esp += 4; return;
L_006305f0:; BB(0x006305f0);
    /* 006305f0: mov eax, dword ptr [0x7128c0] */ r_eax = R32((u32)(0x7128c0u));
    /* 006305f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006305f6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006305f7: mov esi, 3 */ r_esi = 0x3u;
    /* 006305fc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006305fe: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630600: jle 0x630653 */ if ((fZ||fS!=fO)) goto L_00630653;
L_00630602:; BB(0x00630602);
    /* 00630602: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630603: mov bl, 0x83 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x83u) & 0xffu);
L_00630605:; BB(0x00630605);
    /* 00630605: mov eax, dword ptr [0x7118a0] */ r_eax = R32((u32)(0x7118a0u));
    /* 0063060a: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 0063060d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063060f: je 0x630648 */ if (fZ) goto L_00630648;
L_00630611:; BB(0x00630611);
    /* 00630611: test byte ptr [eax + 0xc], bl */ {  u32 a = R8((u32)(r_eax+0xcu)); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00630614: je 0x630625 */ if (fZ) goto L_00630625;
L_00630616:; BB(0x00630616);
    /* 00630616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630617: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x63061cu); f_006241d0();
    /* 0063061c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063061f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630622: je 0x630625 */ if (fZ) goto L_00630625;
L_00630624:; BB(0x00630624);
    /* 00630624: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00630625:; BB(0x00630625);
    /* 00630625: cmp esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630628: jl 0x630648 */ if ((fS!=fO)) goto L_00630648;
L_0063062a:; BB(0x0063062a);
    /* 0063062a: mov ecx, dword ptr [0x7118a0] */ r_ecx = R32((u32)(0x7118a0u));
    /* 00630630: mov edx, dword ptr [ecx + esi*4] */ r_edx = R32((u32)(r_ecx+r_esi*4));
    /* 00630633: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630634: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x630639u); f_006262e0();
    /* 00630639: mov eax, dword ptr [0x7118a0] */ r_eax = R32((u32)(0x7118a0u));
    /* 0063063e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630641: mov dword ptr [eax + esi*4], 0 */ W32((u32)(r_eax+r_esi*4), 0x0u);
L_00630648:; BB(0x00630648);
    /* 00630648: mov eax, dword ptr [0x7128c0] */ r_eax = R32((u32)(0x7128c0u));
    /* 0063064d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0063064e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630650: jl 0x630605 */ if ((fS!=fO)) goto L_00630605;
L_00630652:; BB(0x00630652);
    /* 00630652: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00630653:; BB(0x00630653);
    /* 00630653: mov eax, edi */ r_eax = r_edi;
    /* 00630655: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630656: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630657: ret  */ FN_RET(0x0062c3f0); r_esp += 4; return;
}

void f_0062c470(void) /* __trandisp1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c470);
    /* 0062c470: cmp byte ptr [edx + 0xe], 5 */ {  u32 a = R8((u32)(r_edx+0xeu)); u32 b = 0x5u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062c474: jne 0x62c487 */ if (!fZ) goto L_0062c487;
L_0062c476:; BB(0x0062c476);
    /* 0062c476: mov bx, word ptr [ebp - 0xa4] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff5cu))) & 0xffffu);
    /* 0062c47d: or bh, 2 */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0062c480: and bh, 0xfe */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0xfeu; u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0062c483: mov bl, 0x3f */ r_ebx = (r_ebx & 0xffffff00u) | ((0x3fu) & 0xffu);
    /* 0062c485: jmp 0x62c48b */ goto L_0062c48b;
L_0062c487:; BB(0x0062c487);
    /* 0062c487: mov bx, 0x133f */ r_ebx = (r_ebx & 0xffff0000u) | ((0x133fu) & 0xffffu);
L_0062c48b:; BB(0x0062c48b);
    /* 0062c48b: mov word ptr [ebp - 0xa2], bx */ W16((u32)(r_ebp+0xffffff5eu), (u16)r_ebx);
    /* 0062c492: fldcw word ptr [ebp - 0xa2] */ fcw = R16((u32)(r_ebp+0xffffff5eu));
    /* 0062c498: mov ebx, 0x6f4b9d */ r_ebx = 0x6f4b9du;
    /* 0062c49d: fxam  */ UNSUP(0x0062c49d, "fxam ");
    /* 0062c49f: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0062c4a5: wait  */ ;
    /* 0062c4a6: fnstsw word ptr [ebp - 0xa0] */ W16((u32)(r_ebp+0xffffff60u), fx_sw());
    /* 0062c4ac: mov byte ptr [ebp - 0x90], 0 */ W8((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 0062c4b3: wait  */ ;
    /* 0062c4b4: mov cl, byte ptr [ebp - 0x9f] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff61u))) & 0xffu);
    /* 0062c4ba: shl cl, 1 */ { u32 c = (1u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0062c4bc: sar cl, 1 */ { u32 c = (1u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0062c4be: rol cl, 1 */ { u32 c = (1u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0062c4c0: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0062c4c2: and al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c4c4: xlatb  */ r_eax = (r_eax & 0xffffff00u) | R8(r_ebx + (r_eax & 0xffu));
    /* 0062c4c5: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0062c4c8: and ecx, 0x404 */ {  u32 a = r_ecx; u32 b = 0x404u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062c4ce: mov ebx, edx */ r_ebx = r_edx;
    /* 0062c4d0: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062c4d2: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062c4d5: jmp dword ptr [ebx] */ { u32 t = R32((u32)(r_ebx)); call_ind(t); return; }
}

void f_0062c4d7(void) /* __trandisp2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c4d7);
    /* 0062c4d7: cmp byte ptr [edx + 0xe], 5 */ {  u32 a = R8((u32)(r_edx+0xeu)); u32 b = 0x5u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062c4db: jne 0x62c4ee */ if (!fZ) goto L_0062c4ee;
L_0062c4dd:; BB(0x0062c4dd);
    /* 0062c4dd: mov bx, word ptr [ebp - 0xa4] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff5cu))) & 0xffffu);
    /* 0062c4e4: or bh, 2 */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0062c4e7: and bh, 0xfe */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0xfeu; u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0062c4ea: mov bl, 0x3f */ r_ebx = (r_ebx & 0xffffff00u) | ((0x3fu) & 0xffu);
    /* 0062c4ec: jmp 0x62c4f2 */ goto L_0062c4f2;
L_0062c4ee:; BB(0x0062c4ee);
    /* 0062c4ee: mov bx, 0x133f */ r_ebx = (r_ebx & 0xffff0000u) | ((0x133fu) & 0xffffu);
L_0062c4f2:; BB(0x0062c4f2);
    /* 0062c4f2: mov word ptr [ebp - 0xa2], bx */ W16((u32)(r_ebp+0xffffff5eu), (u16)r_ebx);
    /* 0062c4f9: fldcw word ptr [ebp - 0xa2] */ fcw = R16((u32)(r_ebp+0xffffff5eu));
    /* 0062c4ff: mov ebx, 0x6f4b9d */ r_ebx = 0x6f4b9du;
    /* 0062c504: fxam  */ UNSUP(0x0062c504, "fxam ");
    /* 0062c506: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0062c50c: wait  */ ;
    /* 0062c50d: fnstsw word ptr [ebp - 0xa0] */ W16((u32)(r_ebp+0xffffff60u), fx_sw());
    /* 0062c513: mov byte ptr [ebp - 0x90], 0 */ W8((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 0062c51a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c51c: mov cl, byte ptr [ebp - 0x9f] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff61u))) & 0xffu);
    /* 0062c522: fxam  */ UNSUP(0x0062c522, "fxam ");
    /* 0062c524: wait  */ ;
    /* 0062c525: fnstsw word ptr [ebp - 0xa0] */ W16((u32)(r_ebp+0xffffff60u), fx_sw());
    /* 0062c52b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c52d: mov ch, byte ptr [ebp - 0x9f] */ r_ecx = (r_ecx & 0xffff00ffu) | (((R8((u32)(r_ebp+0xffffff61u))) & 0xffu) << 8);
    /* 0062c533: shl ch, 1 */ { u32 c = (1u) & 31; u32 a = (u8)(r_ecx>>8); u32 r = a; if (c) { r = (a << c) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  } }
    /* 0062c535: sar ch, 1 */ { u32 c = (1u) & 31; u32 a = (u8)(r_ecx>>8); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  } }
    /* 0062c537: rol ch, 1 */ { u32 c = (1u) & 31; u32 a = (u8)(r_ecx>>8); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  } }
    /* 0062c539: mov al, ch */ r_eax = (r_eax & 0xffffff00u) | (((u8)(r_ecx>>8)) & 0xffu);
    /* 0062c53b: and al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c53d: xlatb  */ r_eax = (r_eax & 0xffffff00u) | R8(r_ebx + (r_eax & 0xffu));
    /* 0062c53e: mov ah, al */ r_eax = (r_eax & 0xffff00ffu) | ((((u8)r_eax) & 0xffu) << 8);
    /* 0062c540: shl cl, 1 */ { u32 c = (1u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0062c542: sar cl, 1 */ { u32 c = (1u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0062c544: rol cl, 1 */ { u32 c = (1u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0062c546: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0062c548: and al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c54a: xlatb  */ r_eax = (r_eax & 0xffffff00u) | R8(r_ebx + (r_eax & 0xffu));
    /* 0062c54b: shl ah, 1 */ { u32 c = (1u) & 31; u32 a = (u8)(r_eax>>8); u32 r = a; if (c) { r = (a << c) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  } }
    /* 0062c54d: shl ah, 1 */ { u32 c = (1u) & 31; u32 a = (u8)(r_eax>>8); u32 r = a; if (c) { r = (a << c) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  } }
    /* 0062c54f: or al, ah */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_eax>>8); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c551: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0062c554: and ecx, 0x404 */ {  u32 a = r_ecx; u32 b = 0x404u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062c55a: mov ebx, edx */ r_ebx = r_edx;
    /* 0062c55c: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062c55e: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062c561: jmp dword ptr [ebx] */ { u32 t = R32((u32)(r_ebx)); call_ind(t); return; }
}

void f_0062c7e7(void) /* __startOneArgErrorHandling */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c7e7);
    /* 0062c7e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c7e8: mov ebp, esp */ r_ebp = r_esp;
    /* 0062c7ea: add esp, -0x20 */ {  u32 a = r_esp; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c7ed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062c7f0: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0062c7f3: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0062c7f6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062c7f9: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0062c7fc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0062c7ff: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0062c802: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 0062c805: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0062c808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c809: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c80a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c80b: call 0x630660 */ r_esp -= 4; W32(r_esp, 0x62c810u); f_00630660();
    /* 0062c810: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c813: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 0062c816: cmp word ptr [ebp + 8], 0x27f */ {  u32 a = R16((u32)(r_ebp+0x8u)); u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062c81c: je 0x62c821 */ if (fZ) goto L_0062c821;
L_0062c81e:; BB(0x0062c81e);
    /* 0062c81e: fldcw word ptr [ebp + 8] */ fcw = R16((u32)(r_ebp+0x8u));
L_0062c821:; BB(0x0062c821);
    /* 0062c821: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0062c822: ret  */ FN_RET(0x0062c7e7); r_esp += 4; return;
}

void f_0062c830(void) /* __cintrindisp2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c830);
    /* 0062c830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c831: mov ebp, esp */ r_ebp = r_esp;
    /* 0062c833: add esp, 0xfffffd60 */ {  u32 a = r_esp; u32 b = 0xfffffd60u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c839: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c83a: wait  */ ;
    /* 0062c83b: fnstcw word ptr [ebp - 0xa4] */ W16((u32)(r_ebp+0xffffff5cu), fcw);
    /* 0062c841: wait  */ ;
    /* 0062c842: cmp dword ptr [0x6f503c], 0 */ {  u32 a = R32((u32)(0x6f503cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c849: je 0x62c85f */ if (fZ) goto L_0062c85f;
L_0062c84b:; BB(0x0062c84b);
    /* 0062c84b: call 0x62c4d7 */ r_esp -= 4; W32(r_esp, 0x62c850u); f_0062c4d7();
    /* 0062c850: mov byte ptr [0x7114c8], 1 */ W8((u32)(0x7114c8u), 0x1u);
    /* 0062c857: call 0x62c8e5 */ r_esp -= 4; W32(r_esp, 0x62c85cu); f_0062c8e5();
    /* 0062c85c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062c85d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0062c85e: ret  */ FN_RET(0x0062c830); r_esp += 4; return;
L_0062c85f:; BB(0x0062c85f);
    /* 0062c85f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c861: fst qword ptr [ebp - 0x86] */ W_F64((u32)(r_ebp+0xffffff7au), ST(0));
    /* 0062c867: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c869: fst qword ptr [ebp - 0x7e] */ W_F64((u32)(r_ebp+0xffffff82u), ST(0));
    /* 0062c86c: jmp 0x62c84b */ goto L_0062c84b;
}

void f_0062c86e(void) /* __cintrindisp1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c86e);
    /* 0062c86e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c86f: mov ebp, esp */ r_ebp = r_esp;
    /* 0062c871: add esp, 0xfffffd60 */ {  u32 a = r_esp; u32 b = 0xfffffd60u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c877: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c878: wait  */ ;
    /* 0062c879: fnstcw word ptr [ebp - 0xa4] */ W16((u32)(r_ebp+0xffffff5cu), fcw);
    /* 0062c87f: cmp dword ptr [0x6f503c], 0 */ {  u32 a = R32((u32)(0x6f503cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c886: je 0x62c89c */ if (fZ) goto L_0062c89c;
L_0062c888:; BB(0x0062c888);
    /* 0062c888: call 0x62c470 */ r_esp -= 4; W32(r_esp, 0x62c88du); f_0062c470();
    /* 0062c88d: mov byte ptr [0x7114c8], 1 */ W8((u32)(0x7114c8u), 0x1u);
    /* 0062c894: call 0x62c8e5 */ r_esp -= 4; W32(r_esp, 0x62c899u); f_0062c8e5();
    /* 0062c899: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062c89a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0062c89b: ret  */ FN_RET(0x0062c86e); r_esp += 4; return;
L_0062c89c:; BB(0x0062c89c);
    /* 0062c89c: fst qword ptr [ebp - 0x86] */ W_F64((u32)(r_ebp+0xffffff7au), ST(0));
    /* 0062c8a2: jmp 0x62c888 */ goto L_0062c888;
}

void f_0062c8a4(void) /* __ctrandisp2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c8a4);
    /* 0062c8a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c8a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0062c8a7: add esp, 0xfffffd60 */ {  u32 a = r_esp; u32 b = 0xfffffd60u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c8ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c8ae: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c8b1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c8b4: call 0x62ca41 */ r_esp -= 4; W32(r_esp, 0x62c8b9u); f_0062ca41();
    /* 0062c8b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c8bc: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c8bf: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c8c2: call 0x62ca41 */ r_esp -= 4; W32(r_esp, 0x62c8c7u); f_0062ca41();
    /* 0062c8c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c8ca: wait  */ ;
    /* 0062c8cb: fnstcw word ptr [ebp - 0xa4] */ W16((u32)(r_ebp+0xffffff5cu), fcw);
    /* 0062c8d1: call 0x62c4d7 */ r_esp -= 4; W32(r_esp, 0x62c8d6u); f_0062c4d7();
    /* 0062c8d6: call 0x62c8de */ r_esp -= 4; W32(r_esp, 0x62c8dbu); f_0062c8de();
    /* 0062c8db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062c8dc: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0062c8dd: ret  */ FN_RET(0x0062c8a4); r_esp += 4; return;
}

void f_0062ca15(void) /* __ctrandisp1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ca15);
    /* 0062ca15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca16: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ca18: add esp, 0xfffffd60 */ {  u32 a = r_esp; u32 b = 0xfffffd60u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ca1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca1f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062ca22: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062ca25: call 0x62ca41 */ r_esp -= 4; W32(r_esp, 0x62ca2au); f_0062ca41();
    /* 0062ca2a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ca2d: wait  */ ;
    /* 0062ca2e: fnstcw word ptr [ebp - 0xa4] */ W16((u32)(r_ebp+0xffffff5cu), fcw);
    /* 0062ca34: call 0x62c470 */ r_esp -= 4; W32(r_esp, 0x62ca39u); f_0062c470();
    /* 0062ca39: call 0x62c8de */ r_esp -= 4; W32(r_esp, 0x62ca3eu); f_0062c8de();
    /* 0062ca3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ca3f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0062ca40: ret  */ FN_RET(0x0062ca15); r_esp += 4; return;
}

void f_0062ca41(void) /* __fload */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ca41);
    /* 0062ca41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca42: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ca44: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ca47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca48: mov ax, word ptr [ebp + 0xe] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xeu))) & 0xffffu);
    /* 0062ca4c: mov bx, ax */ r_ebx = (r_ebx & 0xffff0000u) | (((u16)r_eax) & 0xffffu);
    /* 0062ca4f: and ax, 0x7ff0 */ {  u32 a = (u16)r_eax; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0062ca53: cmp ax, 0x7ff0 */ {  u32 a = (u16)r_eax; u32 b = 0x7ff0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062ca57: jne 0x62ca77 */ if (!fZ) goto L_0062ca77;
L_0062ca59:; BB(0x0062ca59);
    /* 0062ca59: or bx, 0x7fff */ {  u32 a = (u16)r_ebx; u32 b = 0x7fffu; u32 r = (a | b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0062ca5e: mov word ptr [ebp - 2], bx */ W16((u32)(r_ebp+0xfffffffeu), (u16)r_ebx);
    /* 0062ca62: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062ca65: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0062ca68: shld eax, ebx, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_ebx; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 0062ca6c: mov dword ptr [ebp - 6], eax */ W32((u32)(r_ebp+0xfffffffau), r_eax);
    /* 0062ca6f: mov dword ptr [ebp - 0xa], ebx */ W32((u32)(r_ebp+0xfffffff6u), r_ebx);
    /* 0062ca72: fld xword ptr [ebp - 0xa] */ FPUSH(R_F80((u32)(r_ebp+0xfffffff6u)));
    /* 0062ca75: jmp 0x62ca7a */ goto L_0062ca7a;
L_0062ca77:; BB(0x0062ca77);
    /* 0062ca77: fld qword ptr [ebp + 8] */ FPUSH(R_F64((u32)(r_ebp+0x8u)));
L_0062ca7a:; BB(0x0062ca7a);
    /* 0062ca7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ca7b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0062ca7c: ret  */ FN_RET(0x0062ca41); r_esp += 4; return;
}

