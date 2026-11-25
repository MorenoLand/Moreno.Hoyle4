#include "protos.h"

void f_006322b0(void) /* _abort */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006322b0);
    /* 006322b0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006322b2: call 0x62e9b0 */ r_esp -= 4; W32(r_esp, 0x6322b7u); f_0062e9b0();
    /* 006322b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006322ba: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 006322bc: call 0x6323d0 */ r_esp -= 4; W32(r_esp, 0x6322c1u); f_006323d0();
    /* 006322c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006322c4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006322c6: call 0x629710 */ r_esp -= 4; W32(r_esp, 0x6322cbu); f_00629710();
    /* 006322cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006322ce: ret  */ FN_RET(0x006322b0); r_esp += 4; return;
}

void f_006325a0(void) /* RtlUnwind */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006325a0);
    /* 006325a0: jmp dword ptr [0x6330a8] */ { u32 t = R32((u32)(0x6330a8u)); call_ind(t); return; }
}

void f_006325b0(void) /* __strcmpi */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006325b0);
    /* 006325b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006325b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006325b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006325b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006325b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006325b6: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 006325b9: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 006325bc: lea eax, [0x711358] */ r_eax = (u32)(0x711358u);
    /* 006325c2: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006325c6: jne 0x632603 */ if (!fZ) goto L_00632603;
L_006325c8:; BB(0x006325c8);
    /* 006325c8: mov al, 0xff */ r_eax = (r_eax & 0xffffff00u) | ((0xffu) & 0xffu);
    /* 006325ca: mov eax, eax */ r_eax = r_eax;
L_006325cc:; BB(0x006325cc);
    /* 006325cc: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006325ce: je 0x6325fe */ if (fZ) goto L_006325fe;
L_006325d0:; BB(0x006325d0);
    /* 006325d0: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 006325d2: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006325d3: mov ah, byte ptr [edi] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 006325d5: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006325d6: cmp ah, al */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006325d8: je 0x6325cc */ if (fZ) goto L_006325cc;
L_006325da:; BB(0x006325da);
    /* 006325da: sub al, 0x41 */ {  u32 a = (u8)r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006325dc: cmp al, 0x1a */ {  u32 a = (u8)r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 006325de: sbb cl, cl */ { u32 c = fC; u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a - b - c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006325e0: and cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006325e3: add al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006325e5: add al, 0x41 */ {  u32 a = (u8)r_eax; u32 b = 0x41u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006325e7: xchg al, ah */ { u32 x = (u8)r_eax; u32 y = (u8)(r_eax>>8); r_eax = (r_eax & 0xffffff00u) | ((y) & 0xffu); r_eax = (r_eax & 0xffff00ffu) | (((x) & 0xffu) << 8); }
    /* 006325e9: sub al, 0x41 */ {  u32 a = (u8)r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006325eb: cmp al, 0x1a */ {  u32 a = (u8)r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 006325ed: sbb cl, cl */ { u32 c = fC; u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a - b - c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006325ef: and cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006325f2: add al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006325f4: add al, 0x41 */ {  u32 a = (u8)r_eax; u32 b = 0x41u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006325f6: cmp al, ah */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_eax>>8); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006325f8: je 0x6325cc */ if (fZ) goto L_006325cc;
L_006325fa:; BB(0x006325fa);
    /* 006325fa: sbb al, al */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = ((u64)a < (u64)b + c); }
    /* 006325fc: sbb al, 0xff */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xffu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_006325fe:; BB(0x006325fe);
    /* 006325fe: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00632601: jmp 0x632637 */ goto L_00632637;
L_00632603:; BB(0x00632603);
    /* 00632603: mov eax, 0xff */ r_eax = 0xffu;
    /* 00632608: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0063260a: mov eax, eax */ r_eax = r_eax;
L_0063260c:; BB(0x0063260c);
    /* 0063260c: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0063260e: je 0x632637 */ if (fZ) goto L_00632637;
L_00632610:; BB(0x00632610);
    /* 00632610: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00632612: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00632613: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00632615: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00632616: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00632618: je 0x63260c */ if (fZ) goto L_0063260c;
L_0063261a:; BB(0x0063261a);
    /* 0063261a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063261b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063261c: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x632621u); f_00624600();
    /* 00632621: mov ebx, eax */ r_ebx = r_eax;
    /* 00632623: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632626: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x63262bu); f_00624600();
    /* 0063262b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063262e: cmp bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00632630: je 0x63260c */ if (fZ) goto L_0063260c;
L_00632632:; BB(0x00632632);
    /* 00632632: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fC = ((u64)a < (u64)b + c); }
    /* 00632634: sbb eax, -1 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
L_00632637:; BB(0x00632637);
    /* 00632637: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632638: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632639: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063263a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0063263b: ret  */ FN_RET(0x006325b0); r_esp += 4; return;
}

void f_00632740(void) /* __strnicmp */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632740);
    /* 00632740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632741: mov ebp, esp */ r_ebp = r_esp;
    /* 00632743: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00632744: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00632745: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632746: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00632749: or ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0063274b: je 0x6327e6 */ if (fZ) goto L_006327e6;
L_00632751:; BB(0x00632751);
    /* 00632751: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00632754: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00632757: lea eax, [0x711358] */ r_eax = (u32)(0x711358u);
    /* 0063275d: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632761: jne 0x6327a6 */ if (!fZ) goto L_006327a6;
L_00632763:; BB(0x00632763);
    /* 00632763: mov bh, 0x41 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x41u) & 0xffu) << 8);
    /* 00632765: mov bl, 0x5a */ r_ebx = (r_ebx & 0xffffff00u) | ((0x5au) & 0xffu);
    /* 00632767: mov dh, 0x20 */ r_edx = (r_edx & 0xffff00ffu) | (((0x20u) & 0xffu) << 8);
    /* 00632769: mov eax, eax */ r_eax = r_eax;
L_0063276c:; BB(0x0063276c);
    /* 0063276c: mov ah, byte ptr [esi] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_esi))) & 0xffu) << 8);
    /* 0063276e: or ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); }
    /* 00632770: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00632772: je 0x632795 */ if (fZ) goto L_00632795;
L_00632774:; BB(0x00632774);
    /* 00632774: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 00632776: je 0x632795 */ if (fZ) goto L_00632795;
L_00632778:; BB(0x00632778);
    /* 00632778: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00632779: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0063277a: cmp ah, bh */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 0063277c: jb 0x632784 */ if (fC) goto L_00632784;
L_0063277e:; BB(0x0063277e);
    /* 0063277e: cmp ah, bl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00632780: ja 0x632784 */ if ((!fC&&!fZ)) goto L_00632784;
L_00632782:; BB(0x00632782);
    /* 00632782: add ah, dh */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
L_00632784:; BB(0x00632784);
    /* 00632784: cmp al, bh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ebx>>8); u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 00632786: jb 0x63278e */ if (fC) goto L_0063278e;
L_00632788:; BB(0x00632788);
    /* 00632788: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063278a: ja 0x63278e */ if ((!fC&&!fZ)) goto L_0063278e;
L_0063278c:; BB(0x0063278c);
    /* 0063278c: add al, dh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0063278e:; BB(0x0063278e);
    /* 0063278e: cmp ah, al */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00632790: jne 0x63279b */ if (!fZ) goto L_0063279b;
L_00632792:; BB(0x00632792);
    /* 00632792: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00632793: jne 0x63276c */ if (!fZ) goto L_0063276c;
L_00632795:; BB(0x00632795);
    /* 00632795: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00632797: cmp ah, al */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00632799: je 0x6327e6 */ if (fZ) goto L_006327e6;
L_0063279b:; BB(0x0063279b);
    /* 0063279b: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 006327a0: jb 0x6327e6 */ if (fC) goto L_006327e6;
L_006327a2:; BB(0x006327a2);
    /* 006327a2: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006327a4: jmp 0x6327e6 */ goto L_006327e6;
L_006327a6:; BB(0x006327a6);
    /* 006327a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006327a8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006327aa: mov eax, eax */ r_eax = r_eax;
L_006327ac:; BB(0x006327ac);
    /* 006327ac: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 006327ae: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006327b0: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006327b2: je 0x6327d7 */ if (fZ) goto L_006327d7;
L_006327b4:; BB(0x006327b4);
    /* 006327b4: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 006327b6: je 0x6327d7 */ if (fZ) goto L_006327d7;
L_006327b8:; BB(0x006327b8);
    /* 006327b8: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006327b9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006327ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006327bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006327bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006327bd: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x6327c2u); f_00624600();
    /* 006327c2: mov ebx, eax */ r_ebx = r_eax;
    /* 006327c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006327c7: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x6327ccu); f_00624600();
    /* 006327cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006327cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006327d0: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006327d2: jne 0x6327dd */ if (!fZ) goto L_006327dd;
L_006327d4:; BB(0x006327d4);
    /* 006327d4: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006327d5: jne 0x6327ac */ if (!fZ) goto L_006327ac;
L_006327d7:; BB(0x006327d7);
    /* 006327d7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006327d9: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006327db: je 0x6327e6 */ if (fZ) goto L_006327e6;
L_006327dd:; BB(0x006327dd);
    /* 006327dd: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 006327e2: jb 0x6327e6 */ if (fC) goto L_006327e6;
L_006327e4:; BB(0x006327e4);
    /* 006327e4: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_006327e6:; BB(0x006327e6);
    /* 006327e6: mov eax, ecx */ r_eax = r_ecx;
    /* 006327e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006327e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006327ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006327eb: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 006327ec: ret  */ FN_RET(0x00632740); r_esp += 4; return;
}

