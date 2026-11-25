#include "protos.h"

void f_006240c0(void) /* _strcmp */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006240c0);
    /* 006240c0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006240c4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006240c8: test edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006240ce: jne 0x62410c */ if (!fZ) goto L_0062410c;
L_006240d0:; BB(0x006240d0);
    /* 006240d0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006240d2: cmp al, byte ptr [ecx] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006240d4: jne 0x624104 */ if (!fZ) goto L_00624104;
L_006240d6:; BB(0x006240d6);
    /* 006240d6: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006240d8: je 0x624100 */ if (fZ) goto L_00624100;
L_006240da:; BB(0x006240da);
    /* 006240da: cmp ah, byte ptr [ecx + 1] */ {  u32 a = (u8)(r_eax>>8); u32 b = R8((u32)(r_ecx+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006240dd: jne 0x624104 */ if (!fZ) goto L_00624104;
L_006240df:; BB(0x006240df);
    /* 006240df: or ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); }
    /* 006240e1: je 0x624100 */ if (fZ) goto L_00624100;
L_006240e3:; BB(0x006240e3);
    /* 006240e3: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006240e6: cmp al, byte ptr [ecx + 2] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx+0x2u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006240e9: jne 0x624104 */ if (!fZ) goto L_00624104;
L_006240eb:; BB(0x006240eb);
    /* 006240eb: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006240ed: je 0x624100 */ if (fZ) goto L_00624100;
L_006240ef:; BB(0x006240ef);
    /* 006240ef: cmp ah, byte ptr [ecx + 3] */ {  u32 a = (u8)(r_eax>>8); u32 b = R8((u32)(r_ecx+0x3u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006240f2: jne 0x624104 */ if (!fZ) goto L_00624104;
L_006240f4:; BB(0x006240f4);
    /* 006240f4: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006240f7: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006240fa: or ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); }
    /* 006240fc: jne 0x6240d0 */ if (!fZ) goto L_006240d0;
L_006240fe:; BB(0x006240fe);
    /* 006240fe: mov eax, eax */ r_eax = r_eax;
L_00624100:; BB(0x00624100);
    /* 00624100: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624102: ret  */ FN_RET(0x006240c0); r_esp += 4; return;
L_00624104:; BB(0x00624104);
    /* 00624104: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00624106: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00624108: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624109: ret  */ FN_RET(0x006240c0); r_esp += 4; return;
L_0062410c:; BB(0x0062410c);
    /* 0062410c: test edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624112: je 0x624128 */ if (fZ) goto L_00624128;
L_00624114:; BB(0x00624114);
    /* 00624114: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00624116: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624117: cmp al, byte ptr [ecx] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00624119: jne 0x624104 */ if (!fZ) goto L_00624104;
L_0062411b:; BB(0x0062411b);
    /* 0062411b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062411c: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0062411e: je 0x624100 */ if (fZ) goto L_00624100;
L_00624120:; BB(0x00624120);
    /* 00624120: test edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624126: je 0x6240d0 */ if (fZ) goto L_006240d0;
L_00624128:; BB(0x00624128);
    /* 00624128: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 0062412b: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062412e: cmp al, byte ptr [ecx] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00624130: jne 0x624104 */ if (!fZ) goto L_00624104;
L_00624132:; BB(0x00624132);
    /* 00624132: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 00624134: je 0x624100 */ if (fZ) goto L_00624100;
L_00624136:; BB(0x00624136);
    /* 00624136: cmp ah, byte ptr [ecx + 1] */ {  u32 a = (u8)(r_eax>>8); u32 b = R8((u32)(r_ecx+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00624139: jne 0x624104 */ if (!fZ) goto L_00624104;
L_0062413b:; BB(0x0062413b);
    /* 0062413b: or ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); }
    /* 0062413d: je 0x624100 */ if (fZ) goto L_00624100;
L_0062413f:; BB(0x0062413f);
    /* 0062413f: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00624142: jmp 0x6240d0 */ goto L_006240d0;
}

void f_00624144(void) /* __ftol */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00624144);
    /* 00624144: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624145: mov ebp, esp */ r_ebp = r_esp;
    /* 00624147: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062414a: wait  */ ;
    /* 0062414b: fnstcw word ptr [ebp - 2] */ W16((u32)(r_ebp+0xfffffffeu), fcw);
    /* 0062414e: wait  */ ;
    /* 0062414f: mov ax, word ptr [ebp - 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffeu))) & 0xffffu);
    /* 00624153: or ah, 0xc */ {  u32 a = (u8)(r_eax>>8); u32 b = 0xcu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00624156: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0062415a: fldcw word ptr [ebp - 4] */ fcw = R16((u32)(r_ebp+0xfffffffcu));
    /* 0062415d: fistp qword ptr [ebp - 0xc] */ W64((u32)(r_ebp+0xfffffff4u), (u64)fx_int64(ST(0))); FPOP();
    /* 00624160: fldcw word ptr [ebp - 2] */ fcw = R16((u32)(r_ebp+0xfffffffeu));
    /* 00624163: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624166: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00624169: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0062416a: ret  */ FN_RET(0x00624144); r_esp += 4; return;
}

void f_00624170(void) /* _memset */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00624170);
    /* 00624170: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00624174: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00624178: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062417a: je 0x6241c3 */ if (fZ) goto L_006241c3;
L_0062417c:; BB(0x0062417c);
    /* 0062417c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062417e: mov al, byte ptr [esp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x8u))) & 0xffu);
    /* 00624182: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00624183: mov edi, ecx */ r_edi = r_ecx;
    /* 00624185: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00624188: jb 0x6241b7 */ if (fC) goto L_006241b7;
L_0062418a:; BB(0x0062418a);
    /* 0062418a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062418c: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062418f: je 0x624199 */ if (fZ) goto L_00624199;
L_00624191:; BB(0x00624191);
    /* 00624191: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_00624193:; BB(0x00624193);
    /* 00624193: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00624195: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00624196: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00624197: jne 0x624193 */ if (!fZ) goto L_00624193;
L_00624199:; BB(0x00624199);
    /* 00624199: mov ecx, eax */ r_ecx = r_eax;
    /* 0062419b: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062419e: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006241a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006241a2: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006241a5: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006241a7: mov ecx, edx */ r_ecx = r_edx;
    /* 006241a9: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006241ac: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 006241af: je 0x6241b7 */ if (fZ) goto L_006241b7;
L_006241b1:; BB(0x006241b1);
    /* 006241b1: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006241b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006241b5: je 0x6241bd */ if (fZ) goto L_006241bd;
L_006241b7:; BB(0x006241b7);
    /* 006241b7: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 006241b9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006241ba: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006241bb: jne 0x6241b7 */ if (!fZ) goto L_006241b7;
L_006241bd:; BB(0x006241bd);
    /* 006241bd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006241c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006241c2: ret  */ FN_RET(0x00624170); r_esp += 4; return;
L_006241c3:; BB(0x006241c3);
    /* 006241c3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006241c7: ret  */ FN_RET(0x00624170); r_esp += 4; return;
}

void f_00624990(void) /* _strlen */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00624990);
    /* 00624990: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00624994: test ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062499a: je 0x6249b0 */ if (fZ) goto L_006249b0;
L_0062499c:; BB(0x0062499c);
    /* 0062499c: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0062499e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062499f: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006249a1: je 0x6249e3 */ if (fZ) goto L_006249e3;
L_006249a3:; BB(0x006249a3);
    /* 006249a3: test ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006249a9: jne 0x62499c */ if (!fZ) goto L_0062499c;
L_006249ab:; BB(0x006249ab);
    /* 006249ab: add eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006249b0:; BB(0x006249b0);
    /* 006249b0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006249b2: mov edx, 0x7efefeff */ r_edx = 0x7efefeffu;
    /* 006249b7: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006249b9: xor eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006249bc: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006249be: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006249c1: test eax, 0x81010100 */ {  u32 a = r_eax; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006249c6: je 0x6249b0 */ if (fZ) goto L_006249b0;
L_006249c8:; BB(0x006249c8);
    /* 006249c8: mov eax, dword ptr [ecx - 4] */ r_eax = R32((u32)(r_ecx+0xfffffffcu));
    /* 006249cb: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006249cd: je 0x624a01 */ if (fZ) goto L_00624a01;
L_006249cf:; BB(0x006249cf);
    /* 006249cf: test ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006249d1: je 0x6249f7 */ if (fZ) goto L_006249f7;
L_006249d3:; BB(0x006249d3);
    /* 006249d3: test eax, 0xff0000 */ {  u32 a = r_eax; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006249d8: je 0x6249ed */ if (fZ) goto L_006249ed;
L_006249da:; BB(0x006249da);
    /* 006249da: test eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006249df: je 0x6249e3 */ if (fZ) goto L_006249e3;
L_006249e1:; BB(0x006249e1);
    /* 006249e1: jmp 0x6249b0 */ goto L_006249b0;
L_006249e3:; BB(0x006249e3);
    /* 006249e3: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 006249e6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006249ea: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006249ec: ret  */ FN_RET(0x00624990); r_esp += 4; return;
L_006249ed:; BB(0x006249ed);
    /* 006249ed: lea eax, [ecx - 2] */ r_eax = (u32)(r_ecx+0xfffffffeu);
    /* 006249f0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006249f4: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006249f6: ret  */ FN_RET(0x00624990); r_esp += 4; return;
L_006249f7:; BB(0x006249f7);
    /* 006249f7: lea eax, [ecx - 3] */ r_eax = (u32)(r_ecx+0xfffffffdu);
    /* 006249fa: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006249fe: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00624a00: ret  */ FN_RET(0x00624990); r_esp += 4; return;
L_00624a01:; BB(0x00624a01);
    /* 00624a01: lea eax, [ecx - 4] */ r_eax = (u32)(r_ecx+0xfffffffcu);
    /* 00624a04: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00624a08: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00624a0a: ret  */ FN_RET(0x00624990); r_esp += 4; return;
}

void f_00624ab0(void) /* sub_00624ab0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00624ab0);
    /* 00624ab0: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00624ab5: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x624abau); f_00626230();
    /* 00624aba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624abd: mov dword ptr [0x7129ec], eax */ W32((u32)(0x7129ecu), r_eax);
    /* 00624ac2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624ac4: jne 0x624ad5 */ if (!fZ) goto L_00624ad5;
L_00624ac6:; BB(0x00624ac6);
    /* 00624ac6: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00624ac8: call 0x627150 */ r_esp -= 4; W32(r_esp, 0x624acdu); f_00627150();
    /* 00624acd: mov eax, dword ptr [0x7129ec] */ r_eax = R32((u32)(0x7129ecu));
    /* 00624ad2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00624ad5:; BB(0x00624ad5);
    /* 00624ad5: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00624adb: mov eax, dword ptr [0x7129ec] */ r_eax = R32((u32)(0x7129ecu));
    /* 00624ae0: mov dword ptr [0x7129e8], eax */ W32((u32)(0x7129e8u), r_eax);
    /* 00624ae5: ret  */ FN_RET(0x00624ab0); r_esp += 4; return;
}

