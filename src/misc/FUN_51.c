#include "protos.h"

void f_00625e40(void) /* FUN_00625e40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625e40);
    /* 00625e40: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625e43: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00625e47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00625e48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625e49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00625e4a: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 00625e4d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00625e4e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00625e50: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00625e53: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00625e56: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00625e58: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00625e5c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00625e60: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00625e64: jbe 0x625f8b */ if ((fC||fZ)) goto L_00625f8b;
L_00625e6a:; BB(0x00625e6a);
    /* 00625e6a: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00625e6c: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00625e70: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00625e74: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00625e76: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625e78: je 0x625eb1 */ if (fZ) goto L_00625eb1;
L_00625e7a:; BB(0x00625e7a);
    /* 00625e7a: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00625e7d: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00625e80:; BB(0x00625e80);
    /* 00625e80: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00625e82: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 00625e84: cmp bl, byte ptr [esi] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00625e86: jne 0x625ea4 */ if (!fZ) goto L_00625ea4;
L_00625e88:; BB(0x00625e88);
    /* 00625e88: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00625e8a: je 0x625ea0 */ if (fZ) goto L_00625ea0;
L_00625e8c:; BB(0x00625e8c);
    /* 00625e8c: mov bl, byte ptr [eax + 1] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00625e8f: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 00625e91: cmp bl, byte ptr [esi + 1] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00625e94: jne 0x625ea4 */ if (!fZ) goto L_00625ea4;
L_00625e96:; BB(0x00625e96);
    /* 00625e96: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625e99: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00625e9c: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00625e9e: jne 0x625e80 */ if (!fZ) goto L_00625e80;
L_00625ea0:; BB(0x00625ea0);
    /* 00625ea0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00625ea2: jmp 0x625ea9 */ goto L_00625ea9;
L_00625ea4:; BB(0x00625ea4);
    /* 00625ea4: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fC = ((u64)a < (u64)b + c); }
    /* 00625ea6: sbb eax, -1 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
L_00625ea9:; BB(0x00625ea9);
    /* 00625ea9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625eab: jne 0x625f67 */ if (!fZ) goto L_00625f67;
L_00625eb1:; BB(0x00625eb1);
    /* 00625eb1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00625eb4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00625eb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00625eb8: lea ebp, [edi + 4] */ r_ebp = (u32)(r_edi+0x4u);
    /* 00625ebb: jbe 0x625f67 */ if ((fC||fZ)) goto L_00625f67;
L_00625ec1:; BB(0x00625ec1);
    /* 00625ec1: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00625ec4: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00625ec8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00625eca: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625ecc: je 0x625f01 */ if (fZ) goto L_00625f01;
L_00625ece:; BB(0x00625ece);
    /* 00625ece: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00625ed1: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00625ed4:; BB(0x00625ed4);
    /* 00625ed4: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00625ed6: mov cl, dl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 00625ed8: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00625eda: jne 0x625ef8 */ if (!fZ) goto L_00625ef8;
L_00625edc:; BB(0x00625edc);
    /* 00625edc: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00625ede: je 0x625ef4 */ if (fZ) goto L_00625ef4;
L_00625ee0:; BB(0x00625ee0);
    /* 00625ee0: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00625ee3: mov cl, dl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 00625ee5: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00625ee8: jne 0x625ef8 */ if (!fZ) goto L_00625ef8;
L_00625eea:; BB(0x00625eea);
    /* 00625eea: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625eed: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00625ef0: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00625ef2: jne 0x625ed4 */ if (!fZ) goto L_00625ed4;
L_00625ef4:; BB(0x00625ef4);
    /* 00625ef4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00625ef6: jmp 0x625efd */ goto L_00625efd;
L_00625ef8:; BB(0x00625ef8);
    /* 00625ef8: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fC = ((u64)a < (u64)b + c); }
    /* 00625efa: sbb eax, -1 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
L_00625efd:; BB(0x00625efd);
    /* 00625efd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625eff: jne 0x625f52 */ if (!fZ) goto L_00625f52;
L_00625f01:; BB(0x00625f01);
    /* 00625f01: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00625f05: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00625f08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00625f09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00625f0a: call 0x626020 */ r_esp -= 4; W32(r_esp, 0x625f0fu); f_00626020();
    /* 00625f0f: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00625f13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00625f16: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625f18: jne 0x625f52 */ if (!fZ) goto L_00625f52;
L_00625f1a:; BB(0x00625f1a);
    /* 00625f1a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00625f1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625f20: je 0x625f4a */ if (fZ) goto L_00625f4a;
L_00625f22:; BB(0x00625f22);
    /* 00625f22: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625f25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625f26: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00625f27: call 0x626020 */ r_esp -= 4; W32(r_esp, 0x625f2cu); f_00626020();
    /* 00625f2c: mov edi, eax */ r_edi = r_eax;
    /* 00625f2e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00625f32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00625f35: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625f38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625f39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00625f3a: call 0x626020 */ r_esp -= 4; W32(r_esp, 0x625f3fu); f_00626020();
    /* 00625f3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00625f42: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625f44: jne 0x626012 */ if (!fZ) goto L_00626012;
L_00625f4a:; BB(0x00625f4a);
    /* 00625f4a: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00625f4e: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
L_00625f52:; BB(0x00625f52);
    /* 00625f52: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00625f56: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00625f57: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00625f5a: cmp ebx, dword ptr [edx + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00625f5d: jb 0x625ec1 */ if (fC) goto L_00625ec1;
L_00625f63:; BB(0x00625f63);
    /* 00625f63: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
L_00625f67:; BB(0x00625f67);
    /* 00625f67: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00625f6b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00625f6f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625f70: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00625f73: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00625f76: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00625f7a: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00625f7e: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00625f81: jb 0x625e6a */ if (fC) goto L_00625e6a;
L_00625f87:; BB(0x00625f87);
    /* 00625f87: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
L_00625f8b:; BB(0x00625f8b);
    /* 00625f8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625f8d: je 0x625f99 */ if (fZ) goto L_00625f99;
L_00625f8f:; BB(0x00625f8f);
    /* 00625f8f: mov eax, edx */ r_eax = r_edx;
    /* 00625f91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00625f92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00625f93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625f94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00625f95: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00625f98: ret  */ FN_RET(0x00625e40); r_esp += 4; return;
L_00625f99:; BB(0x00625f99);
    /* 00625f99: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 00625f9c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00625f9e: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 00625fa1: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00625fa4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00625fa6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00625faa: jbe 0x626012 */ if ((fC||fZ)) goto L_00626012;
L_00625fac:; BB(0x00625fac);
    /* 00625fac: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00625faf: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00625fb3: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00625fb5: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625fb7: je 0x625fec */ if (fZ) goto L_00625fec;
L_00625fb9:; BB(0x00625fb9);
    /* 00625fb9: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00625fbc: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00625fbf:; BB(0x00625fbf);
    /* 00625fbf: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00625fc1: mov dl, al */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 00625fc3: cmp al, byte ptr [esi] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00625fc5: jne 0x625fe3 */ if (!fZ) goto L_00625fe3;
L_00625fc7:; BB(0x00625fc7);
    /* 00625fc7: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00625fc9: je 0x625fdf */ if (fZ) goto L_00625fdf;
L_00625fcb:; BB(0x00625fcb);
    /* 00625fcb: mov al, byte ptr [ecx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x1u))) & 0xffu);
    /* 00625fce: mov dl, al */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 00625fd0: cmp al, byte ptr [esi + 1] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00625fd3: jne 0x625fe3 */ if (!fZ) goto L_00625fe3;
L_00625fd5:; BB(0x00625fd5);
    /* 00625fd5: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00625fd8: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00625fdb: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00625fdd: jne 0x625fbf */ if (!fZ) goto L_00625fbf;
L_00625fdf:; BB(0x00625fdf);
    /* 00625fdf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00625fe1: jmp 0x625fe8 */ goto L_00625fe8;
L_00625fe3:; BB(0x00625fe3);
    /* 00625fe3: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r; fC = ((u64)a < (u64)b + c); }
    /* 00625fe5: sbb ecx, -1 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
L_00625fe8:; BB(0x00625fe8);
    /* 00625fe8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625fea: jne 0x625ff2 */ if (!fZ) goto L_00625ff2;
L_00625fec:; BB(0x00625fec);
    /* 00625fec: test byte ptr [edi + 0x14], 3 */ {  u32 a = R8((u32)(r_edi+0x14u)); u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00625ff0: je 0x626008 */ if (fZ) goto L_00626008;
L_00625ff2:; BB(0x00625ff2);
    /* 00625ff2: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00625ff6: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00625ff7: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00625ffa: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00625ffc: jb 0x625fac */ if (fC) goto L_00625fac;
L_00625ffe:; BB(0x00625ffe);
    /* 00625ffe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626000: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626001: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626002: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626004: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626007: ret  */ FN_RET(0x00625e40); r_esp += 4; return;
L_00626008:; BB(0x00626008);
    /* 00626008: mov eax, edi */ r_eax = r_edi;
    /* 0062600a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062600b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062600c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062600d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062600e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626011: ret  */ FN_RET(0x00625e40); r_esp += 4; return;
L_00626012:; BB(0x00626012);
    /* 00626012: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626013: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626014: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626015: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626017: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626018: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062601b: ret  */ FN_RET(0x00625e40); r_esp += 4; return;
}

void f_00626020(void) /* FUN_00626020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626020);
    /* 00626020: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00626024: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00626026: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00626029: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062602b: jl 0x626042 */ if ((fS!=fO)) goto L_00626042;
L_0062602d:; BB(0x0062602d);
    /* 0062602d: mov ecx, eax */ r_ecx = r_eax;
    /* 0062602f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00626033: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626034: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626035: mov eax, dword ptr [ecx + eax] */ r_eax = R32((u32)(r_ecx+r_eax));
    /* 00626038: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 0062603b: mov edi, dword ptr [eax + esi] */ r_edi = R32((u32)(r_eax+r_esi));
    /* 0062603e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062603f: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00626041: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00626042:; BB(0x00626042);
    /* 00626042: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00626044: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00626046: ret  */ FN_RET(0x00626020); r_esp += 4; return;
}

void f_00626050(void) /* FUN_00626050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626050);
    /* 00626050: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626051: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00626056: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0062605a: jb 0x626070 */ if (fC) goto L_00626070;
L_0062605c:; BB(0x0062605c);
    /* 0062605c: sub ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00626062: sub eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626067: test dword ptr [ecx], eax */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;   }
    /* 00626069: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062606e: jae 0x62605c */ if (!fC) goto L_0062605c;
L_00626070:; BB(0x00626070);
    /* 00626070: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00626072: mov eax, esp */ r_eax = r_esp;
    /* 00626074: test dword ptr [ecx], eax */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;   }
    /* 00626076: mov esp, ecx */ r_esp = r_ecx;
    /* 00626078: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062607a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0062607d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062607e: ret  */ FN_RET(0x00626050); r_esp += 4; return;
}

void f_00626230(void) /* FUN_00626230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626230);
    /* 00626230: mov eax, dword ptr [0x7114a8] */ r_eax = R32((u32)(0x7114a8u));
    /* 00626235: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00626239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062623a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062623b: call 0x626250 */ r_esp -= 4; W32(r_esp, 0x626240u); f_00626250();
    /* 00626240: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626243: ret  */ FN_RET(0x00626230); r_esp += 4; return;
}

void f_00626250(void) /* FUN_00626250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626250);
    /* 00626250: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626251: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00626255: cmp esi, -0x20 */ {  u32 a = r_esi; u32 b = 0xffffffe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00626258: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626259: ja 0x62628f */ if ((!fC&&!fZ)) goto L_0062628f;
L_0062625b:; BB(0x0062625b);
    /* 0062625b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062625d: jne 0x626264 */ if (!fZ) goto L_00626264;
L_0062625f:; BB(0x0062625f);
    /* 0062625f: mov esi, 1 */ r_esi = 0x1u;
L_00626264:; BB(0x00626264);
    /* 00626264: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_00626268:; BB(0x00626268);
    /* 00626268: cmp esi, -0x20 */ {  u32 a = r_esi; u32 b = 0xffffffe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062626b: ja 0x626278 */ if ((!fC&&!fZ)) goto L_00626278;
L_0062626d:; BB(0x0062626d);
    /* 0062626d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062626e: call 0x6262a0 */ r_esp -= 4; W32(r_esp, 0x626273u); f_006262a0();
    /* 00626273: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626276: jmp 0x62627a */ goto L_0062627a;
L_00626278:; BB(0x00626278);
    /* 00626278: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062627a:; BB(0x0062627a);
    /* 0062627a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062627c: jne 0x626291 */ if (!fZ) goto L_00626291;
L_0062627e:; BB(0x0062627e);
    /* 0062627e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626280: je 0x626291 */ if (fZ) goto L_00626291;
L_00626282:; BB(0x00626282);
    /* 00626282: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626283: call 0x62b790 */ r_esp -= 4; W32(r_esp, 0x626288u); f_0062b790();
    /* 00626288: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062628b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062628d: jne 0x626268 */ if (!fZ) goto L_00626268;
L_0062628f:; BB(0x0062628f);
    /* 0062628f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00626291:; BB(0x00626291);
    /* 00626291: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626292: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626293: ret  */ FN_RET(0x00626250); r_esp += 4; return;
}

void f_006262a0(void) /* FUN_006262a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006262a0);
    /* 006262a0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006262a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006262a5: lea esi, [eax + 0xf] */ r_esi = (u32)(r_eax+0xfu);
    /* 006262a8: mov eax, dword ptr [0x6f48f4] */ r_eax = R32((u32)(0x6f48f4u));
    /* 006262ad: and esi, 0xfffffff0 */ {  u32 a = r_esi; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006262b0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006262b2: ja 0x6262c6 */ if ((!fC&&!fZ)) goto L_006262c6;
L_006262b4:; BB(0x006262b4);
    /* 006262b4: mov ecx, esi */ r_ecx = r_esi;
    /* 006262b6: shr ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006262b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006262ba: call 0x62bb50 */ r_esp -= 4; W32(r_esp, 0x6262bfu); f_0062bb50();
    /* 006262bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006262c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006262c4: jne 0x6262d6 */ if (!fZ) goto L_006262d6;
L_006262c6:; BB(0x006262c6);
    /* 006262c6: mov edx, dword ptr [0x7129e4] */ r_edx = R32((u32)(0x7129e4u));
    /* 006262cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006262cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006262cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006262d0: call dword ptr [0x6330dc] */ { u32 t = R32((u32)(0x6330dcu)); r_esp -= 4; W32(r_esp, 0x6262d6u); call_ind(t); }
L_006262d6:; BB(0x006262d6);
    /* 006262d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006262d7: ret  */ FN_RET(0x006262a0); r_esp += 4; return;
}

void f_006262e0(void) /* FUN_006262e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006262e0);
    /* 006262e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006262e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006262e2: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 006262e6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006262e8: je 0x626327 */ if (fZ) goto L_00626327;
L_006262ea:; BB(0x006262ea);
    /* 006262ea: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006262ee: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006262f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006262f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006262f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006262f5: call 0x62ba90 */ r_esp -= 4; W32(r_esp, 0x6262fau); f_0062ba90();
    /* 006262fa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006262fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006262ff: je 0x626317 */ if (fZ) goto L_00626317;
L_00626301:; BB(0x00626301);
    /* 00626301: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00626305: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626306: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062630a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062630b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062630c: call 0x62baf0 */ r_esp -= 4; W32(r_esp, 0x626311u); f_0062baf0();
    /* 00626311: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626314: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626315: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626316: ret  */ FN_RET(0x006262e0); r_esp += 4; return;
L_00626317:; BB(0x00626317);
    /* 00626317: mov ecx, dword ptr [0x7129e4] */ r_ecx = R32((u32)(0x7129e4u));
    /* 0062631d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062631e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00626320: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626321: call dword ptr [0x6330e4] */ { u32 t = R32((u32)(0x6330e4u)); r_esp -= 4; W32(r_esp, 0x626327u); call_ind(t); }
L_00626327:; BB(0x00626327);
    /* 00626327: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626328: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626329: ret  */ FN_RET(0x006262e0); r_esp += 4; return;
}

void f_00626330(void) /* FUN_00626330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626330);
    /* 00626330: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626331: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626332: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626333: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00626337: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626338: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0062633b: mov ebp, dword ptr [esi + 0x10] */ r_ebp = R32((u32)(r_esi+0x10u));
    /* 0062633e: test al, 0x82 */ {  u32 a = (u8)r_eax; u32 b = 0x82u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626340: je 0x626450 */ if (fZ) goto L_00626450;
L_00626346:; BB(0x00626346);
    /* 00626346: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626348: jne 0x626450 */ if (!fZ) goto L_00626450;
L_0062634e:; BB(0x0062634e);
    /* 0062634e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00626350: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626352: je 0x626369 */ if (fZ) goto L_00626369;
L_00626354:; BB(0x00626354);
    /* 00626354: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626356: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 00626359: je 0x626450 */ if (fZ) goto L_00626450;
L_0062635f:; BB(0x0062635f);
    /* 0062635f: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00626362: and al, 0xfe */ {  u32 a = (u8)r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00626364: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00626366: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_00626369:; BB(0x00626369);
    /* 00626369: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0062636c: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0062636f: and al, 0xef */ {  u32 a = (u8)r_eax; u32 b = 0xefu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00626371: or al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00626373: test eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626378: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0062637b: jne 0x6263a3 */ if (!fZ) goto L_006263a3;
L_0062637d:; BB(0x0062637d);
    /* 0062637d: cmp esi, 0x6f4920 */ {  u32 a = r_esi; u32 b = 0x6f4920u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626383: je 0x62638d */ if (fZ) goto L_0062638d;
L_00626385:; BB(0x00626385);
    /* 00626385: cmp esi, 0x6f4940 */ {  u32 a = r_esi; u32 b = 0x6f4940u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062638b: jne 0x62639a */ if (!fZ) goto L_0062639a;
L_0062638d:; BB(0x0062638d);
    /* 0062638d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062638e: call 0x62c300 */ r_esp -= 4; W32(r_esp, 0x626393u); f_0062c300();
    /* 00626393: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626396: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626398: jne 0x6263a3 */ if (!fZ) goto L_006263a3;
L_0062639a:; BB(0x0062639a);
    /* 0062639a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062639b: call 0x62c2a0 */ r_esp -= 4; W32(r_esp, 0x6263a0u); f_0062c2a0();
    /* 006263a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006263a3:; BB(0x006263a3);
    /* 006263a3: test dword ptr [esi + 0xc], 0x108 */ {  u32 a = R32((u32)(r_esi+0xcu)); u32 b = 0x108u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006263aa: je 0x626418 */ if (fZ) goto L_00626418;
L_006263ac:; BB(0x006263ac);
    /* 006263ac: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006263af: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 006263b1: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 006263b4: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006263b6: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 006263b9: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006263ba: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006263bc: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 006263be: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 006263c1: jle 0x6263db */ if ((fZ||fS!=fO)) goto L_006263db;
L_006263c3:; BB(0x006263c3);
    /* 006263c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006263c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006263c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006263c6: call 0x62a3a0 */ r_esp -= 4; W32(r_esp, 0x6263cbu); f_0062a3a0();
    /* 006263cb: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 006263ce: mov ebx, eax */ r_ebx = r_eax;
    /* 006263d0: mov al, byte ptr [esp + 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x20u))) & 0xffu);
    /* 006263d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006263d7: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 006263d9: jmp 0x62642e */ goto L_0062642e;
L_006263db:; BB(0x006263db);
    /* 006263db: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006263de: je 0x6263f6 */ if (fZ) goto L_006263f6;
L_006263e0:; BB(0x006263e0);
    /* 006263e0: mov edx, ebp */ r_edx = r_ebp;
    /* 006263e2: mov eax, ebp */ r_eax = r_ebp;
    /* 006263e4: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006263e7: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006263ea: mov ecx, dword ptr [edx*4 + 0x7128e0] */ r_ecx = R32((u32)(r_edx*4+0x7128e0u));
    /* 006263f1: lea eax, [ecx + eax*8] */ r_eax = (u32)(r_ecx+r_eax*8);
    /* 006263f4: jmp 0x6263fb */ goto L_006263fb;
L_006263f6:; BB(0x006263f6);
    /* 006263f6: mov eax, 0x6f48f8 */ r_eax = 0x6f48f8u;
L_006263fb:; BB(0x006263fb);
    /* 006263fb: test byte ptr [eax + 4], 0x20 */ {  u32 a = R8((u32)(r_eax+0x4u)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006263ff: je 0x62640d */ if (fZ) goto L_0062640d;
L_00626401:; BB(0x00626401);
    /* 00626401: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00626403: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626404: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626405: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x62640au); f_0062bfe0();
    /* 0062640a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062640d:; BB(0x0062640d);
    /* 0062640d: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00626410: mov al, byte ptr [esp + 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x14u))) & 0xffu);
    /* 00626414: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 00626416: jmp 0x62642e */ goto L_0062642e;
L_00626418:; BB(0x00626418);
    /* 00626418: mov edi, 1 */ r_edi = 0x1u;
    /* 0062641d: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00626421: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626422: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626423: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626424: call 0x62a3a0 */ r_esp -= 4; W32(r_esp, 0x626429u); f_0062a3a0();
    /* 00626429: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062642c: mov ebx, eax */ r_ebx = r_eax;
L_0062642e:; BB(0x0062642e);
    /* 0062642e: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626430: je 0x626442 */ if (fZ) goto L_00626442;
L_00626432:; BB(0x00626432);
    /* 00626432: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00626435: or al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00626437: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0062643a: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062643d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062643e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062643f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626440: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626441: ret  */ FN_RET(0x00626330); r_esp += 4; return;
L_00626442:; BB(0x00626442);
    /* 00626442: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00626446: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062644b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062644c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062644d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062644e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062644f: ret  */ FN_RET(0x00626330); r_esp += 4; return;
L_00626450:; BB(0x00626450);
    /* 00626450: or al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00626452: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626453: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00626456: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626457: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626458: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062645b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062645c: ret  */ FN_RET(0x00626330); r_esp += 4; return;
}

void f_00626460(void) /* FUN_00626460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626460);
    /* 00626460: mov eax, dword ptr [0x7129e0] */ r_eax = R32((u32)(0x7129e0u));
    /* 00626465: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626466: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626467: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626468: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0062646c: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062646e: jae 0x6264c9 */ if (!fC) goto L_006264c9;
L_00626470:; BB(0x00626470);
    /* 00626470: mov eax, edi */ r_eax = r_edi;
    /* 00626472: mov ecx, edi */ r_ecx = r_edi;
    /* 00626474: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00626477: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062647a: mov edx, dword ptr [eax*4 + 0x7128e0] */ r_edx = R32((u32)(r_eax*4+0x7128e0u));
    /* 00626481: test byte ptr [edx + ecx*8 + 4], 1 */ {  u32 a = R8((u32)(r_edx+r_ecx*8+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626486: je 0x6264c9 */ if (fZ) goto L_006264c9;
L_00626488:; BB(0x00626488);
    /* 00626488: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062648a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062648c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062648d: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x626492u); f_0062bfe0();
    /* 00626492: mov esi, eax */ r_esi = r_eax;
    /* 00626494: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626497: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062649a: jne 0x6264a4 */ if (!fZ) goto L_006264a4;
L_0062649c:; BB(0x0062649c);
    /* 0062649c: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0062649e: mov eax, ebx */ r_eax = r_ebx;
    /* 006264a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006264a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006264a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006264a3: ret  */ FN_RET(0x00626460); r_esp += 4; return;
L_006264a4:; BB(0x006264a4);
    /* 006264a4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006264a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006264a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006264a9: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x6264aeu); f_0062bfe0();
    /* 006264ae: mov ebx, eax */ r_ebx = r_eax;
    /* 006264b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006264b3: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006264b5: je 0x6264c3 */ if (fZ) goto L_006264c3;
L_006264b7:; BB(0x006264b7);
    /* 006264b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006264b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006264ba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006264bb: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x6264c0u); f_0062bfe0();
    /* 006264c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006264c3:; BB(0x006264c3);
    /* 006264c3: mov eax, ebx */ r_eax = r_ebx;
    /* 006264c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006264c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006264c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006264c8: ret  */ FN_RET(0x00626460); r_esp += 4; return;
L_006264c9:; BB(0x006264c9);
    /* 006264c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006264ca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006264cb: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
    /* 006264d5: mov dword ptr [0x711460], 0 */ W32((u32)(0x711460u), 0x0u);
    /* 006264df: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006264e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006264e3: ret  */ FN_RET(0x00626460); r_esp += 4; return;
}

void f_006265f0(void) /* FUN_006265f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006265f0);
    /* 006265f0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006265f4: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006265f7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 006265f8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006265fb: js 0x626607 */ if (fS) goto L_00626607;
L_006265fd:; BB(0x006265fd);
    /* 006265fd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006265ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626601: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00626603: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00626604: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00626606: ret  */ FN_RET(0x006265f0); r_esp += 4; return;
L_00626607:; BB(0x00626607);
    /* 00626607: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626608: call 0x628370 */ r_esp -= 4; W32(r_esp, 0x62660du); f_00628370();
    /* 0062660d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626610: ret  */ FN_RET(0x006265f0); r_esp += 4; return;
}

void f_00626620(void) /* FUN_00626620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626620);
    /* 00626620: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626621: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00626625: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626626: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00626629: test al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062662b: je 0x6266a6 */ if (fZ) goto L_006266a6;
L_0062662d:; BB(0x0062662d);
    /* 0062662d: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00626631: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626633: je 0x62663f */ if (fZ) goto L_0062663f;
L_00626635:; BB(0x00626635);
    /* 00626635: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626638: je 0x62663f */ if (fZ) goto L_0062663f;
L_0062663a:; BB(0x0062663a);
    /* 0062663a: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062663d: jne 0x6266a6 */ if (!fZ) goto L_006266a6;
L_0062663f:; BB(0x0062663f);
    /* 0062663f: and al, 0xef */ {  u32 a = (u8)r_eax; u32 b = 0xefu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00626641: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626644: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00626647: jne 0x62665e */ if (!fZ) goto L_0062665e;
L_00626649:; BB(0x00626649);
    /* 00626649: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062664a: call 0x626810 */ r_esp -= 4; W32(r_esp, 0x62664fu); f_00626810();
    /* 0062664f: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00626653: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626656: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00626658: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0062665a: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
L_0062665e:; BB(0x0062665e);
    /* 0062665e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062665f: call 0x626710 */ r_esp -= 4; W32(r_esp, 0x626664u); f_00626710();
    /* 00626664: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00626667: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062666a: test al, 0x80 */ {  u32 a = (u8)r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062666c: je 0x626675 */ if (fZ) goto L_00626675;
L_0062666e:; BB(0x0062666e);
    /* 0062666e: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00626670: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00626673: jmp 0x626689 */ goto L_00626689;
L_00626675:; BB(0x00626675);
    /* 00626675: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626677: je 0x626689 */ if (fZ) goto L_00626689;
L_00626679:; BB(0x00626679);
    /* 00626679: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062667b: je 0x626689 */ if (fZ) goto L_00626689;
L_0062667d:; BB(0x0062667d);
    /* 0062667d: test ah, 4 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626680: jne 0x626689 */ if (!fZ) goto L_00626689;
L_00626682:; BB(0x00626682);
    /* 00626682: mov dword ptr [esi + 0x18], 0x200 */ W32((u32)(r_esi+0x18u), 0x200u);
L_00626689:; BB(0x00626689);
    /* 00626689: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062668d: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 00626690: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626692: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626693: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x626698u); f_0062bfe0();
    /* 00626698: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062669b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062669c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0062669e: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006266a0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006266a2: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006266a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006266a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006266a5: ret  */ FN_RET(0x00626620); r_esp += 4; return;
L_006266a6:; BB(0x006266a6);
    /* 006266a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006266a7: mov dword ptr [0x71145c], 0x16 */ W32((u32)(0x71145cu), 0x16u);
    /* 006266b1: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006266b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006266b5: ret  */ FN_RET(0x00626620); r_esp += 4; return;
}

void f_006266c0(void) /* FUN_006266c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006266c0);
    /* 006266c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006266c1: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006266c5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006266c7: jne 0x6266d4 */ if (!fZ) goto L_006266d4;
L_006266c9:; BB(0x006266c9);
    /* 006266c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006266ca: call 0x626790 */ r_esp -= 4; W32(r_esp, 0x6266cfu); f_00626790();
    /* 006266cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006266d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006266d3: ret  */ FN_RET(0x006266c0); r_esp += 4; return;
L_006266d4:; BB(0x006266d4);
    /* 006266d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006266d5: call 0x626710 */ r_esp -= 4; W32(r_esp, 0x6266dau); f_00626710();
    /* 006266da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006266dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006266df: je 0x6266e6 */ if (fZ) goto L_006266e6;
L_006266e1:; BB(0x006266e1);
    /* 006266e1: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006266e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006266e5: ret  */ FN_RET(0x006266c0); r_esp += 4; return;
L_006266e6:; BB(0x006266e6);
    /* 006266e6: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006266e9: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006266ec: je 0x626700 */ if (fZ) goto L_00626700;
L_006266ee:; BB(0x006266ee);
    /* 006266ee: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 006266f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006266f2: call 0x62c410 */ r_esp -= 4; W32(r_esp, 0x6266f7u); f_0062c410();
    /* 006266f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006266fa: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 006266fc: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006266fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006266ff: ret  */ FN_RET(0x006266c0); r_esp += 4; return;
L_00626700:; BB(0x00626700);
    /* 00626700: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626702: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626703: ret  */ FN_RET(0x006266c0); r_esp += 4; return;
}

void f_00626710(void) /* FUN_00626710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626710);
    /* 00626710: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626711: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626712: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00626716: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00626718: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626719: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0062671c: mov ecx, eax */ r_ecx = r_eax;
    /* 0062671e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00626721: cmp cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00626724: jne 0x62676c */ if (!fZ) goto L_0062676c;
L_00626726:; BB(0x00626726);
    /* 00626726: test eax, 0x108 */ {  u32 a = r_eax; u32 b = 0x108u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062672b: je 0x62676c */ if (fZ) goto L_0062676c;
L_0062672d:; BB(0x0062672d);
    /* 0062672d: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00626730: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00626732: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00626734: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00626736: jle 0x62676c */ if ((fZ||fS!=fO)) goto L_0062676c;
L_00626738:; BB(0x00626738);
    /* 00626738: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 0062673b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062673c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062673d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062673e: call 0x62a3a0 */ r_esp -= 4; W32(r_esp, 0x626743u); f_0062a3a0();
    /* 00626743: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626746: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626748: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0062674b: jne 0x626764 */ if (!fZ) goto L_00626764;
L_0062674d:; BB(0x0062674d);
    /* 0062674d: test al, 0x80 */ {  u32 a = (u8)r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062674f: je 0x62676c */ if (fZ) goto L_0062676c;
L_00626751:; BB(0x00626751);
    /* 00626751: and al, 0xfd */ {  u32 a = (u8)r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00626753: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 00626756: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00626759: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0062675c: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0062675e: mov eax, ebx */ r_eax = r_ebx;
    /* 00626760: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626761: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626762: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626763: ret  */ FN_RET(0x00626710); r_esp += 4; return;
L_00626764:; BB(0x00626764);
    /* 00626764: or al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00626766: or ebx, 0xffffffff */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00626769: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_0062676c:; BB(0x0062676c);
    /* 0062676c: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0062676f: mov dword ptr [esi + 4], 0 */ W32((u32)(r_esi+0x4u), 0x0u);
    /* 00626776: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00626778: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626779: mov eax, ebx */ r_eax = r_ebx;
    /* 0062677b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062677c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062677d: ret  */ FN_RET(0x00626710); r_esp += 4; return;
}

void f_00626790(void) /* FUN_00626790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626790);
    /* 00626790: mov eax, dword ptr [0x7128c0] */ r_eax = R32((u32)(0x7128c0u));
    /* 00626795: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626796: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0062679a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062679b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062679c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062679d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0062679f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006267a1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006267a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006267a5: jle 0x6267f4 */ if ((fZ||fS!=fO)) goto L_006267f4;
L_006267a7:; BB(0x006267a7);
    /* 006267a7: mov eax, dword ptr [0x7118a0] */ r_eax = R32((u32)(0x7118a0u));
    /* 006267ac: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 006267af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006267b1: je 0x6267ea */ if (fZ) goto L_006267ea;
L_006267b3:; BB(0x006267b3);
    /* 006267b3: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006267b6: test cl, 0x83 */ {  u32 a = (u8)r_ecx; u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006267b9: je 0x6267ea */ if (fZ) goto L_006267ea;
L_006267bb:; BB(0x006267bb);
    /* 006267bb: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006267be: jne 0x6267d1 */ if (!fZ) goto L_006267d1;
L_006267c0:; BB(0x006267c0);
    /* 006267c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006267c1: call 0x6266c0 */ r_esp -= 4; W32(r_esp, 0x6267c6u); f_006266c0();
    /* 006267c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006267c9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006267cc: je 0x6267ea */ if (fZ) goto L_006267ea;
L_006267ce:; BB(0x006267ce);
    /* 006267ce: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006267cf: jmp 0x6267ea */ goto L_006267ea;
L_006267d1:; BB(0x006267d1);
    /* 006267d1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006267d3: jne 0x6267ea */ if (!fZ) goto L_006267ea;
L_006267d5:; BB(0x006267d5);
    /* 006267d5: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006267d8: je 0x6267ea */ if (fZ) goto L_006267ea;
L_006267da:; BB(0x006267da);
    /* 006267da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006267db: call 0x6266c0 */ r_esp -= 4; W32(r_esp, 0x6267e0u); f_006266c0();
    /* 006267e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006267e3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006267e6: jne 0x6267ea */ if (!fZ) goto L_006267ea;
L_006267e8:; BB(0x006267e8);
    /* 006267e8: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_006267ea:; BB(0x006267ea);
    /* 006267ea: mov eax, dword ptr [0x7128c0] */ r_eax = R32((u32)(0x7128c0u));
    /* 006267ef: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006267f0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006267f2: jl 0x6267a7 */ if ((fS!=fO)) goto L_006267a7;
L_006267f4:; BB(0x006267f4);
    /* 006267f4: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006267f7: mov eax, ebp */ r_eax = r_ebp;
    /* 006267f9: je 0x6267fd */ if (fZ) goto L_006267fd;
L_006267fb:; BB(0x006267fb);
    /* 006267fb: mov eax, edi */ r_eax = r_edi;
L_006267fd:; BB(0x006267fd);
    /* 006267fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006267fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006267ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626800: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626801: ret  */ FN_RET(0x00626790); r_esp += 4; return;
}

void f_00626810(void) /* FUN_00626810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626810);
    /* 00626810: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626813: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626814: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626815: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626816: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0062681a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062681b: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0062681e: mov ebx, dword ptr [esi + 0x10] */ r_ebx = R32((u32)(r_esi+0x10u));
    /* 00626821: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00626823: jge 0x62682c */ if ((fS==fO)) goto L_0062682c;
L_00626825:; BB(0x00626825);
    /* 00626825: mov dword ptr [esi + 4], 0 */ W32((u32)(r_esi+0x4u), 0x0u);
L_0062682c:; BB(0x0062682c);
    /* 0062682c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062682e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00626830: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626831: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x626836u); f_0062bfe0();
    /* 00626836: mov ecx, eax */ r_ecx = r_eax;
    /* 00626838: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062683b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062683d: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00626841: jge 0x62684e */ if ((fS==fO)) goto L_0062684e;
L_00626843:; BB(0x00626843);
    /* 00626843: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00626846: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626847: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626848: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626849: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062684a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062684d: ret  */ FN_RET(0x00626810); r_esp += 4; return;
L_0062684e:; BB(0x0062684e);
    /* 0062684e: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00626851: test eax, 0x108 */ {  u32 a = r_eax; u32 b = 0x108u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626856: jne 0x626867 */ if (!fZ) goto L_00626867;
L_00626858:; BB(0x00626858);
    /* 00626858: mov eax, ecx */ r_eax = r_ecx;
    /* 0062685a: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0062685d: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062685f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626860: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626861: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626862: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626863: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626866: ret  */ FN_RET(0x00626810); r_esp += 4; return;
L_00626867:; BB(0x00626867);
    /* 00626867: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00626869: mov ebp, dword ptr [esi + 8] */ r_ebp = R32((u32)(r_esi+0x8u));
    /* 0062686c: mov edx, ecx */ r_edx = r_ecx;
    /* 0062686e: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00626870: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626872: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00626876: je 0x626994 */ if (fZ) goto L_00626994;
L_0062687c:; BB(0x0062687c);
    /* 0062687c: mov eax, ebx */ r_eax = r_ebx;
    /* 0062687e: mov edi, ebx */ r_edi = r_ebx;
    /* 00626880: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00626883: and edi, 0x1f */ {  u32 a = r_edi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00626886: mov eax, dword ptr [eax*4 + 0x7128e0] */ r_eax = R32((u32)(r_eax*4+0x7128e0u));
    /* 0062688d: test byte ptr [eax + edi*8 + 4], 0x80 */ {  u32 a = R8((u32)(r_eax+r_edi*8+0x4u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626892: je 0x6268a9 */ if (fZ) goto L_006268a9;
L_00626894:; BB(0x00626894);
    /* 00626894: mov eax, ebp */ r_eax = r_ebp;
    /* 00626896: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00626898: jae 0x6268a9 */ if (!fC) goto L_006268a9;
L_0062689a:; BB(0x0062689a);
    /* 0062689a: cmp byte ptr [eax], 0xa */ {  u32 a = R8((u32)(r_eax)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062689d: jne 0x6268a0 */ if (!fZ) goto L_006268a0;
L_0062689f:; BB(0x0062689f);
    /* 0062689f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_006268a0:; BB(0x006268a0);
    /* 006268a0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006268a1: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006268a3: jb 0x62689a */ if (fC) goto L_0062689a;
L_006268a5:; BB(0x006268a5);
    /* 006268a5: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_006268a9:; BB(0x006268a9);
    /* 006268a9: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006268ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006268af: jne 0x6268bb */ if (!fZ) goto L_006268bb;
L_006268b1:; BB(0x006268b1);
    /* 006268b1: mov eax, edx */ r_eax = r_edx;
    /* 006268b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006268b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006268b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006268b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006268b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006268ba: ret  */ FN_RET(0x00626810); r_esp += 4; return;
L_006268bb:; BB(0x006268bb);
    /* 006268bb: test byte ptr [esi + 0xc], 1 */ {  u32 a = R8((u32)(r_esi+0xcu)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006268bf: je 0x626985 */ if (fZ) goto L_00626985;
L_006268c5:; BB(0x006268c5);
    /* 006268c5: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006268c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006268ca: jne 0x6268e1 */ if (!fZ) goto L_006268e1;
L_006268cc:; BB(0x006268cc);
    /* 006268cc: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006268d0: mov edx, eax */ r_edx = r_eax;
    /* 006268d2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006268d6: lea eax, [ecx + edx] */ r_eax = (u32)(r_ecx+r_edx);
    /* 006268d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006268da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006268db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006268dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006268dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006268e0: ret  */ FN_RET(0x00626810); r_esp += 4; return;
L_006268e1:; BB(0x006268e1);
    /* 006268e1: lea edi, [ecx + eax] */ r_edi = (u32)(r_ecx+r_eax);
    /* 006268e4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006268e6: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006268e9: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006268eb: mov esi, ebx */ r_esi = r_ebx;
    /* 006268ed: mov eax, dword ptr [ecx*4 + 0x7128e0] */ r_eax = R32((u32)(r_ecx*4+0x7128e0u));
    /* 006268f4: lea ebp, [ecx*4 + 0x7128e0] */ r_ebp = (u32)(r_ecx*4+0x7128e0u);
    /* 006268fb: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006268fe: shl esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00626901: test byte ptr [esi + eax + 4], 0x80 */ {  u32 a = R8((u32)(r_esi+r_eax+0x4u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626906: je 0x626981 */ if (fZ) goto L_00626981;
L_00626908:; BB(0x00626908);
    /* 00626908: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062690a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062690c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062690d: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x626912u); f_0062bfe0();
    /* 00626912: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00626916: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626919: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062691b: jne 0x626940 */ if (!fZ) goto L_00626940;
L_0062691d:; BB(0x0062691d);
    /* 0062691d: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00626921: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00626924: lea ecx, [edi + eax] */ r_ecx = (u32)(r_edi+r_eax);
    /* 00626927: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00626929: jae 0x626936 */ if (!fC) goto L_00626936;
L_0062692b:; BB(0x0062692b);
    /* 0062692b: cmp byte ptr [eax], 0xa */ {  u32 a = R8((u32)(r_eax)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062692e: jne 0x626931 */ if (!fZ) goto L_00626931;
L_00626930:; BB(0x00626930);
    /* 00626930: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00626931:; BB(0x00626931);
    /* 00626931: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00626932: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00626934: jb 0x62692b */ if (fC) goto L_0062692b;
L_00626936:; BB(0x00626936);
    /* 00626936: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00626939: test ah, 0x20 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062693c: je 0x62697d */ if (fZ) goto L_0062697d;
L_0062693e:; BB(0x0062693e);
    /* 0062693e: jmp 0x62697c */ goto L_0062697c;
L_00626940:; BB(0x00626940);
    /* 00626940: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00626942: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626943: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626944: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x626949u); f_0062bfe0();
    /* 00626949: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062694c: cmp edi, 0x200 */ {  u32 a = r_edi; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00626952: ja 0x62696b */ if ((!fC&&!fZ)) goto L_0062696b;
L_00626954:; BB(0x00626954);
    /* 00626954: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00626958: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0062695b: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062695d: je 0x62696b */ if (fZ) goto L_0062696b;
L_0062695f:; BB(0x0062695f);
    /* 0062695f: test ah, 4 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626962: jne 0x62696b */ if (!fZ) goto L_0062696b;
L_00626964:; BB(0x00626964);
    /* 00626964: mov edi, 0x200 */ r_edi = 0x200u;
    /* 00626969: jmp 0x626972 */ goto L_00626972;
L_0062696b:; BB(0x0062696b);
    /* 0062696b: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0062696f: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
L_00626972:; BB(0x00626972);
    /* 00626972: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00626975: test byte ptr [esi + eax + 4], 4 */ {  u32 a = R8((u32)(r_esi+r_eax+0x4u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062697a: je 0x62697d */ if (fZ) goto L_0062697d;
L_0062697c:; BB(0x0062697c);
    /* 0062697c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0062697d:; BB(0x0062697d);
    /* 0062697d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_00626981:; BB(0x00626981);
    /* 00626981: sub dword ptr [esp + 0x14], edi */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00626985:; BB(0x00626985);
    /* 00626985: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00626989: lea eax, [ecx + edx] */ r_eax = (u32)(r_ecx+r_edx);
    /* 0062698c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062698d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062698e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062698f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626990: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626993: ret  */ FN_RET(0x00626810); r_esp += 4; return;
L_00626994:; BB(0x00626994);
    /* 00626994: test al, 0x80 */ {  u32 a = (u8)r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626996: jne 0x6268a9 */ if (!fZ) goto L_006268a9;
L_0062699c:; BB(0x0062699c);
    /* 0062699c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062699d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062699e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062699f: mov dword ptr [0x71145c], 0x16 */ W32((u32)(0x71145cu), 0x16u);
    /* 006269a9: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006269ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006269ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006269b0: ret  */ FN_RET(0x00626810); r_esp += 4; return;
}

void f_006269f0(void) /* FUN_006269f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006269f0);
    /* 006269f0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006269f3: fst qword ptr [esp] */ W_F64((u32)(r_esp), ST(0));
    /* 006269f6: call 0x62c6c8 */ r_esp -= 4; W32(r_esp, 0x6269fbu); f_0062c6c8();
    /* 006269fb: call 0x626a0d */ r_esp -= 4; W32(r_esp, 0x626a00u); f_00626a0d();
    /* 00626a00: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626a03: ret  */ FN_RET(0x006269f0); r_esp += 4; return;
}

void f_00626a04(void) /* FUN_00626a04 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626a04);
    /* 00626a04: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00626a08: call 0x62c685 */ r_esp -= 4; W32(r_esp, 0x626a0du); f_0062c685();
    /* 00626a0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626a0e: wait  */ ;
    /* 00626a0f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00626a12: je 0x626a64 */ if (fZ) goto L_00626a64;
L_00626a14:; BB(0x00626a14);
    /* 00626a14: cmp word ptr [esp], 0x27f */ {  u32 a = R16((u32)(r_esp)); u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00626a1a: je 0x626a22 */ if (fZ) goto L_00626a22;
L_00626a1c:; BB(0x00626a1c);
    /* 00626a1c: fldcw word ptr [0x63d318] */ fcw = R16((u32)(0x63d318u));
L_00626a22:; BB(0x00626a22);
    /* 00626a22: fsin  */ ST(0) = sinl(ST(0));
    /* 00626a24: wait  */ ;
    /* 00626a25: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00626a27: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00626a28: jp 0x626a47 */ if (fP) goto L_00626a47;
L_00626a2a:; BB(0x00626a2a);
    /* 00626a2a: cmp dword ptr [0x71130c], 0 */ {  u32 a = R32((u32)(0x71130cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626a31: jne 0x62c6de */ if (!fZ) goto L_0062c6de;
L_00626a37:; BB(0x00626a37);
    /* 00626a37: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 00626a3c: lea ecx, [0x6f22b0] */ r_ecx = (u32)(0x6f22b0u);
    /* 00626a42: jmp 0x62c6eb */ f_0062c6eb(); return;
L_00626a47:; BB(0x00626a47);
    /* 00626a47: fld xword ptr [0x63d31a] */ FPUSH(R_F80((u32)(0x63d31au)));
    /* 00626a4d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00626a4f:; BB(0x00626a4f);
    /* 00626a4f: fprem1  */ ST(0) = fmodl(ST(0), ST(1)); fsw &= ~0x400;
    /* 00626a51: wait  */ ;
    /* 00626a52: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00626a54: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00626a55: jp 0x626a4f */ if (fP) goto L_00626a4f;
L_00626a57:; BB(0x00626a57);
    /* 00626a57: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00626a59: fsin  */ ST(0) = sinl(ST(0));
    /* 00626a5b: jmp 0x626a2a */ goto L_00626a2a;
L_00626a5d:; BB(0x00626a5d);
    /* 00626a5d: call 0x62c66c */ r_esp -= 4; W32(r_esp, 0x626a62u); f_0062c66c();
    /* 00626a62: jmp 0x626a7f */ goto L_00626a7f;
L_00626a64:; BB(0x00626a64);
    /* 00626a64: test eax, 0xfffff */ {  u32 a = r_eax; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626a69: jne 0x626a5d */ if (!fZ) goto L_00626a5d;
L_00626a6b:; BB(0x00626a6b);
    /* 00626a6b: cmp dword ptr [esp + 8], 0 */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626a70: jne 0x626a5d */ if (!fZ) goto L_00626a5d;
L_00626a72:; BB(0x00626a72);
    /* 00626a72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00626a74: fld xword ptr [0x6f4b80] */ FPUSH(R_F80((u32)(0x6f4b80u)));
    /* 00626a7a: mov eax, 1 */ r_eax = 0x1u;
L_00626a7f:; BB(0x00626a7f);
    /* 00626a7f: cmp dword ptr [0x71130c], 0 */ {  u32 a = R32((u32)(0x71130cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626a86: jne 0x62c6de */ if (!fZ) goto L_0062c6de;
L_00626a8c:; BB(0x00626a8c);
    /* 00626a8c: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 00626a91: lea ecx, [0x6f22b0] */ r_ecx = (u32)(0x6f22b0u);
    /* 00626a97: call 0x62c7e7 */ r_esp -= 4; W32(r_esp, 0x626a9cu); f_0062c7e7();
    /* 00626a9c: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 00626a9d: ret  */ FN_RET(0x00626a04); r_esp += 4; return;
L_0062c6de:; BB(0x0062c6de);
    /* 0062c6de: cmp word ptr [esp], 0x27f */ {  u32 a = R16((u32)(r_esp)); u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062c6e4: je 0x62c6e9 */ if (fZ) goto L_0062c6e9;
L_0062c6e6:; BB(0x0062c6e6);
    /* 0062c6e6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
L_0062c6e9:; BB(0x0062c6e9);
    /* 0062c6e9: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062c6ea: ret  */ FN_RET(0x00626a04); r_esp += 4; return;
}

void f_00626a0d(void) /* FUN_00626a0d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626a0d);
    /* 00626a0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626a0e: wait  */ ;
    /* 00626a0f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00626a12: je 0x626a64 */ if (fZ) goto L_00626a64;
L_00626a14:; BB(0x00626a14);
    /* 00626a14: cmp word ptr [esp], 0x27f */ {  u32 a = R16((u32)(r_esp)); u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00626a1a: je 0x626a22 */ if (fZ) goto L_00626a22;
L_00626a1c:; BB(0x00626a1c);
    /* 00626a1c: fldcw word ptr [0x63d318] */ fcw = R16((u32)(0x63d318u));
L_00626a22:; BB(0x00626a22);
    /* 00626a22: fsin  */ ST(0) = sinl(ST(0));
    /* 00626a24: wait  */ ;
    /* 00626a25: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00626a27: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00626a28: jp 0x626a47 */ if (fP) goto L_00626a47;
L_00626a2a:; BB(0x00626a2a);
    /* 00626a2a: cmp dword ptr [0x71130c], 0 */ {  u32 a = R32((u32)(0x71130cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626a31: jne 0x62c6de */ if (!fZ) goto L_0062c6de;
L_00626a37:; BB(0x00626a37);
    /* 00626a37: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 00626a3c: lea ecx, [0x6f22b0] */ r_ecx = (u32)(0x6f22b0u);
    /* 00626a42: jmp 0x62c6eb */ f_0062c6eb(); return;
L_00626a47:; BB(0x00626a47);
    /* 00626a47: fld xword ptr [0x63d31a] */ FPUSH(R_F80((u32)(0x63d31au)));
    /* 00626a4d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00626a4f:; BB(0x00626a4f);
    /* 00626a4f: fprem1  */ ST(0) = fmodl(ST(0), ST(1)); fsw &= ~0x400;
    /* 00626a51: wait  */ ;
    /* 00626a52: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00626a54: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00626a55: jp 0x626a4f */ if (fP) goto L_00626a4f;
L_00626a57:; BB(0x00626a57);
    /* 00626a57: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00626a59: fsin  */ ST(0) = sinl(ST(0));
    /* 00626a5b: jmp 0x626a2a */ goto L_00626a2a;
L_00626a5d:; BB(0x00626a5d);
    /* 00626a5d: call 0x62c66c */ r_esp -= 4; W32(r_esp, 0x626a62u); f_0062c66c();
    /* 00626a62: jmp 0x626a7f */ goto L_00626a7f;
L_00626a64:; BB(0x00626a64);
    /* 00626a64: test eax, 0xfffff */ {  u32 a = r_eax; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626a69: jne 0x626a5d */ if (!fZ) goto L_00626a5d;
L_00626a6b:; BB(0x00626a6b);
    /* 00626a6b: cmp dword ptr [esp + 8], 0 */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626a70: jne 0x626a5d */ if (!fZ) goto L_00626a5d;
L_00626a72:; BB(0x00626a72);
    /* 00626a72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00626a74: fld xword ptr [0x6f4b80] */ FPUSH(R_F80((u32)(0x6f4b80u)));
    /* 00626a7a: mov eax, 1 */ r_eax = 0x1u;
L_00626a7f:; BB(0x00626a7f);
    /* 00626a7f: cmp dword ptr [0x71130c], 0 */ {  u32 a = R32((u32)(0x71130cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626a86: jne 0x62c6de */ if (!fZ) goto L_0062c6de;
L_00626a8c:; BB(0x00626a8c);
    /* 00626a8c: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 00626a91: lea ecx, [0x6f22b0] */ r_ecx = (u32)(0x6f22b0u);
    /* 00626a97: call 0x62c7e7 */ r_esp -= 4; W32(r_esp, 0x626a9cu); f_0062c7e7();
    /* 00626a9c: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 00626a9d: ret  */ FN_RET(0x00626a0d); r_esp += 4; return;
L_0062c6de:; BB(0x0062c6de);
    /* 0062c6de: cmp word ptr [esp], 0x27f */ {  u32 a = R16((u32)(r_esp)); u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062c6e4: je 0x62c6e9 */ if (fZ) goto L_0062c6e9;
L_0062c6e6:; BB(0x0062c6e6);
    /* 0062c6e6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
L_0062c6e9:; BB(0x0062c6e9);
    /* 0062c6e9: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062c6ea: ret  */ FN_RET(0x00626a0d); r_esp += 4; return;
}

void f_00626aa0(void) /* FUN_00626aa0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626aa0);
    /* 00626aa0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626aa3: fst qword ptr [esp] */ W_F64((u32)(r_esp), ST(0));
    /* 00626aa6: call 0x62c6c8 */ r_esp -= 4; W32(r_esp, 0x626aabu); f_0062c6c8();
    /* 00626aab: call 0x626abd */ r_esp -= 4; W32(r_esp, 0x626ab0u); f_00626abd();
    /* 00626ab0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626ab3: ret  */ FN_RET(0x00626aa0); r_esp += 4; return;
}

void f_00626ab4(void) /* FUN_00626ab4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626ab4);
    /* 00626ab4: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00626ab8: call 0x62c685 */ r_esp -= 4; W32(r_esp, 0x626abdu); f_0062c685();
    /* 00626abd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626abe: wait  */ ;
    /* 00626abf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00626ac2: je 0x626b14 */ if (fZ) goto L_00626b14;
L_00626ac4:; BB(0x00626ac4);
    /* 00626ac4: cmp word ptr [esp], 0x27f */ {  u32 a = R16((u32)(r_esp)); u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00626aca: je 0x626ad2 */ if (fZ) goto L_00626ad2;
L_00626acc:; BB(0x00626acc);
    /* 00626acc: fldcw word ptr [0x63d318] */ fcw = R16((u32)(0x63d318u));
L_00626ad2:; BB(0x00626ad2);
    /* 00626ad2: fcos  */ ST(0) = cosl(ST(0));
    /* 00626ad4: wait  */ ;
    /* 00626ad5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00626ad7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00626ad8: jp 0x626af7 */ if (fP) goto L_00626af7;
L_00626ada:; BB(0x00626ada);
    /* 00626ada: cmp dword ptr [0x71130c], 0 */ {  u32 a = R32((u32)(0x71130cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626ae1: jne 0x62c6de */ if (!fZ) goto L_0062c6de;
L_00626ae7:; BB(0x00626ae7);
    /* 00626ae7: mov edx, 0x12 */ r_edx = 0x12u;
    /* 00626aec: lea ecx, [0x6f22c0] */ r_ecx = (u32)(0x6f22c0u);
    /* 00626af2: jmp 0x62c6eb */ f_0062c6eb(); return;
L_00626af7:; BB(0x00626af7);
    /* 00626af7: fld xword ptr [0x63d31a] */ FPUSH(R_F80((u32)(0x63d31au)));
    /* 00626afd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00626aff:; BB(0x00626aff);
    /* 00626aff: fprem1  */ ST(0) = fmodl(ST(0), ST(1)); fsw &= ~0x400;
    /* 00626b01: wait  */ ;
    /* 00626b02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00626b04: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00626b05: jp 0x626aff */ if (fP) goto L_00626aff;
L_00626b07:; BB(0x00626b07);
    /* 00626b07: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00626b09: fcos  */ ST(0) = cosl(ST(0));
    /* 00626b0b: jmp 0x626ada */ goto L_00626ada;
L_00626b0d:; BB(0x00626b0d);
    /* 00626b0d: call 0x62c66c */ r_esp -= 4; W32(r_esp, 0x626b12u); f_0062c66c();
    /* 00626b12: jmp 0x626b2f */ goto L_00626b2f;
L_00626b14:; BB(0x00626b14);
    /* 00626b14: test eax, 0xfffff */ {  u32 a = r_eax; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626b19: jne 0x626b0d */ if (!fZ) goto L_00626b0d;
L_00626b1b:; BB(0x00626b1b);
    /* 00626b1b: cmp dword ptr [esp + 8], 0 */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626b20: jne 0x626b0d */ if (!fZ) goto L_00626b0d;
L_00626b22:; BB(0x00626b22);
    /* 00626b22: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00626b24: fld xword ptr [0x6f4b80] */ FPUSH(R_F80((u32)(0x6f4b80u)));
    /* 00626b2a: mov eax, 1 */ r_eax = 0x1u;
L_00626b2f:; BB(0x00626b2f);
    /* 00626b2f: cmp dword ptr [0x71130c], 0 */ {  u32 a = R32((u32)(0x71130cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626b36: jne 0x62c6de */ if (!fZ) goto L_0062c6de;
L_00626b3c:; BB(0x00626b3c);
    /* 00626b3c: mov edx, 0x12 */ r_edx = 0x12u;
    /* 00626b41: lea ecx, [0x6f22c0] */ r_ecx = (u32)(0x6f22c0u);
    /* 00626b47: call 0x62c7e7 */ r_esp -= 4; W32(r_esp, 0x626b4cu); f_0062c7e7();
    /* 00626b4c: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 00626b4d: ret  */ FN_RET(0x00626ab4); r_esp += 4; return;
L_0062c6de:; BB(0x0062c6de);
    /* 0062c6de: cmp word ptr [esp], 0x27f */ {  u32 a = R16((u32)(r_esp)); u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062c6e4: je 0x62c6e9 */ if (fZ) goto L_0062c6e9;
L_0062c6e6:; BB(0x0062c6e6);
    /* 0062c6e6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
L_0062c6e9:; BB(0x0062c6e9);
    /* 0062c6e9: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062c6ea: ret  */ FN_RET(0x00626ab4); r_esp += 4; return;
}

void f_00626abd(void) /* FUN_00626abd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626abd);
    /* 00626abd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626abe: wait  */ ;
    /* 00626abf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00626ac2: je 0x626b14 */ if (fZ) goto L_00626b14;
L_00626ac4:; BB(0x00626ac4);
    /* 00626ac4: cmp word ptr [esp], 0x27f */ {  u32 a = R16((u32)(r_esp)); u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00626aca: je 0x626ad2 */ if (fZ) goto L_00626ad2;
L_00626acc:; BB(0x00626acc);
    /* 00626acc: fldcw word ptr [0x63d318] */ fcw = R16((u32)(0x63d318u));
L_00626ad2:; BB(0x00626ad2);
    /* 00626ad2: fcos  */ ST(0) = cosl(ST(0));
    /* 00626ad4: wait  */ ;
    /* 00626ad5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00626ad7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00626ad8: jp 0x626af7 */ if (fP) goto L_00626af7;
L_00626ada:; BB(0x00626ada);
    /* 00626ada: cmp dword ptr [0x71130c], 0 */ {  u32 a = R32((u32)(0x71130cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626ae1: jne 0x62c6de */ if (!fZ) goto L_0062c6de;
L_00626ae7:; BB(0x00626ae7);
    /* 00626ae7: mov edx, 0x12 */ r_edx = 0x12u;
    /* 00626aec: lea ecx, [0x6f22c0] */ r_ecx = (u32)(0x6f22c0u);
    /* 00626af2: jmp 0x62c6eb */ f_0062c6eb(); return;
L_00626af7:; BB(0x00626af7);
    /* 00626af7: fld xword ptr [0x63d31a] */ FPUSH(R_F80((u32)(0x63d31au)));
    /* 00626afd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00626aff:; BB(0x00626aff);
    /* 00626aff: fprem1  */ ST(0) = fmodl(ST(0), ST(1)); fsw &= ~0x400;
    /* 00626b01: wait  */ ;
    /* 00626b02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00626b04: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00626b05: jp 0x626aff */ if (fP) goto L_00626aff;
L_00626b07:; BB(0x00626b07);
    /* 00626b07: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00626b09: fcos  */ ST(0) = cosl(ST(0));
    /* 00626b0b: jmp 0x626ada */ goto L_00626ada;
L_00626b0d:; BB(0x00626b0d);
    /* 00626b0d: call 0x62c66c */ r_esp -= 4; W32(r_esp, 0x626b12u); f_0062c66c();
    /* 00626b12: jmp 0x626b2f */ goto L_00626b2f;
L_00626b14:; BB(0x00626b14);
    /* 00626b14: test eax, 0xfffff */ {  u32 a = r_eax; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626b19: jne 0x626b0d */ if (!fZ) goto L_00626b0d;
L_00626b1b:; BB(0x00626b1b);
    /* 00626b1b: cmp dword ptr [esp + 8], 0 */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626b20: jne 0x626b0d */ if (!fZ) goto L_00626b0d;
L_00626b22:; BB(0x00626b22);
    /* 00626b22: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00626b24: fld xword ptr [0x6f4b80] */ FPUSH(R_F80((u32)(0x6f4b80u)));
    /* 00626b2a: mov eax, 1 */ r_eax = 0x1u;
L_00626b2f:; BB(0x00626b2f);
    /* 00626b2f: cmp dword ptr [0x71130c], 0 */ {  u32 a = R32((u32)(0x71130cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626b36: jne 0x62c6de */ if (!fZ) goto L_0062c6de;
L_00626b3c:; BB(0x00626b3c);
    /* 00626b3c: mov edx, 0x12 */ r_edx = 0x12u;
    /* 00626b41: lea ecx, [0x6f22c0] */ r_ecx = (u32)(0x6f22c0u);
    /* 00626b47: call 0x62c7e7 */ r_esp -= 4; W32(r_esp, 0x626b4cu); f_0062c7e7();
    /* 00626b4c: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 00626b4d: ret  */ FN_RET(0x00626abd); r_esp += 4; return;
L_0062c6de:; BB(0x0062c6de);
    /* 0062c6de: cmp word ptr [esp], 0x27f */ {  u32 a = R16((u32)(r_esp)); u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062c6e4: je 0x62c6e9 */ if (fZ) goto L_0062c6e9;
L_0062c6e6:; BB(0x0062c6e6);
    /* 0062c6e6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
L_0062c6e9:; BB(0x0062c6e9);
    /* 0062c6e9: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062c6ea: ret  */ FN_RET(0x00626abd); r_esp += 4; return;
}

void f_00626b50(void) /* FUN_00626b50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626b50);
    /* 00626b50: mov eax, dword ptr [0x6f22c4] */ r_eax = R32((u32)(0x6f22c4u));
    /* 00626b55: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626b58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626b59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626b5a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626b5b: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626b60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626b61: call 0x62a310 */ r_esp -= 4; W32(r_esp, 0x626b66u); f_0062a310();
    /* 00626b66: mov ecx, dword ptr [esp + 0x26] */ r_ecx = R32((u32)(r_esp+0x26u));
    /* 00626b6a: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00626b6e: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00626b72: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626b75: and ecx, 0x7ff0 */ {  u32 a = r_ecx; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00626b7b: mov ebx, eax */ r_ebx = r_eax;
    /* 00626b7d: cmp ecx, 0x7ff0 */ {  u32 a = r_ecx; u32 b = 0x7ff0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626b83: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626b84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626b85: jne 0x626bf0 */ if (!fZ) goto L_00626bf0;
L_00626b87:; BB(0x00626b87);
    /* 00626b87: call 0x62a170 */ r_esp -= 4; W32(r_esp, 0x626b8cu); f_0062a170();
    /* 00626b8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626b8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00626b91: jle 0x626bca */ if ((fZ||fS!=fO)) goto L_00626bca;
L_00626b93:; BB(0x00626b93);
    /* 00626b93: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00626b96: jle 0x626bb1 */ if ((fZ||fS!=fO)) goto L_00626bb1;
L_00626b98:; BB(0x00626b98);
    /* 00626b98: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626b9b: jne 0x626bca */ if (!fZ) goto L_00626bca;
L_00626b9d:; BB(0x00626b9d);
    /* 00626b9d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626b9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626b9f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626ba0: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00626ba2: call 0x629860 */ r_esp -= 4; W32(r_esp, 0x626ba7u); f_00629860();
    /* 00626ba7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626baa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626bab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626bac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626bad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626bb0: ret  */ FN_RET(0x00626b50); r_esp += 4; return;
L_00626bb1:; BB(0x00626bb1);
    /* 00626bb1: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626bb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626bb7: call 0x62a310 */ r_esp -= 4; W32(r_esp, 0x626bbcu); f_0062a310();
    /* 00626bbc: fld qword ptr [esp + 0x20] */ FPUSH(R_F64((u32)(r_esp+0x20u)));
    /* 00626bc0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626bc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626bc4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626bc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626bc6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626bc9: ret  */ FN_RET(0x00626b50); r_esp += 4; return;
L_00626bca:; BB(0x00626bca);
    /* 00626bca: fld qword ptr [esp + 0x18] */ FPUSH(R_F64((u32)(r_esp+0x18u)));
    /* 00626bce: fsub qword ptr [0x63d0f0] */ ST(0) = ST(0) - R_F64((u32)(0x63d0f0u));
    /* 00626bd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626bd5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626bd8: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00626bdb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626bdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626bdd: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00626bdf: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00626be1: call 0x6298b0 */ r_esp -= 4; W32(r_esp, 0x626be6u); f_006298b0();
    /* 00626be6: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626be9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626bea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626beb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626bec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626bef: ret  */ FN_RET(0x00626b50); r_esp += 4; return;
L_00626bf0:; BB(0x00626bf0);
    /* 00626bf0: call 0x629840 */ r_esp -= 4; W32(r_esp, 0x626bf5u); f_00629840();
    /* 00626bf5: fstp qword ptr [esp + 0x14] */ W_F64((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00626bf9: fld qword ptr [esp + 0x14] */ FPUSH(R_F64((u32)(r_esp+0x14u)));
    /* 00626bfd: fcomp qword ptr [esp + 0x20] */ fx_compare(ST(0), R_F64((u32)(r_esp+0x20u))); FPOP();
    /* 00626c01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626c04: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00626c06: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626c09: jne 0x626c10 */ if (!fZ) goto L_00626c10;
L_00626c0b:; BB(0x00626c0b);
    /* 00626c0b: test bl, 0x20 */ {  u32 a = (u8)r_ebx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626c0e: je 0x626c29 */ if (fZ) goto L_00626c29;
L_00626c10:; BB(0x00626c10);
    /* 00626c10: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626c15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626c16: call 0x62a310 */ r_esp -= 4; W32(r_esp, 0x626c1bu); f_0062a310();
    /* 00626c1b: fld qword ptr [esp + 0x14] */ FPUSH(R_F64((u32)(r_esp+0x14u)));
    /* 00626c1f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626c22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626c23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626c24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626c25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626c28: ret  */ FN_RET(0x00626b50); r_esp += 4; return;
L_00626c29:; BB(0x00626c29);
    /* 00626c29: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00626c2d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00626c31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626c32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626c33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626c34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626c35: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00626c36: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00626c38: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00626c3a: call 0x6298b0 */ r_esp -= 4; W32(r_esp, 0x626c3fu); f_006298b0();
    /* 00626c3f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626c42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626c43: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626c44: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626c45: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626c48: ret  */ FN_RET(0x00626b50); r_esp += 4; return;
}

void f_00626c50(void) /* FUN_00626c50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626c50);
    /* 00626c50: mov edx, 0x6f22d0 */ r_edx = 0x6f22d0u;
    /* 00626c55: jmp 0x62c8a4 */ f_0062c8a4(); return;
}

void f_00626c90(void) /* FUN_00626c90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626c90);
    /* 00626c90: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626c93: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00626c97: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00626c9b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00626c9f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00626ca3: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00626ca7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626ca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626ca9: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00626cad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626cae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626caf: mov dword ptr [esp + 0x1c], 0x42 */ W32((u32)(r_esp+0x1cu), 0x42u);
    /* 00626cb7: mov dword ptr [esp + 0x14], 0x7fffffff */ W32((u32)(r_esp+0x14u), 0x7fffffffu);
    /* 00626cbf: call 0x627790 */ r_esp -= 4; W32(r_esp, 0x626cc4u); f_00627790();
    /* 00626cc4: mov esi, eax */ r_esi = r_eax;
    /* 00626cc6: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00626cca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626ccd: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00626cce: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00626cd2: js 0x626ce2 */ if (fS) goto L_00626ce2;
L_00626cd4:; BB(0x00626cd4);
    /* 00626cd4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00626cd8: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00626cdb: mov eax, esi */ r_eax = r_esi;
    /* 00626cdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626cde: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626ce1: ret  */ FN_RET(0x00626c90); r_esp += 4; return;
L_00626ce2:; BB(0x00626ce2);
    /* 00626ce2: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00626ce6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626ce7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00626ce9: call 0x626330 */ r_esp -= 4; W32(r_esp, 0x626ceeu); f_00626330();
    /* 00626cee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626cf1: mov eax, esi */ r_eax = r_esi;
    /* 00626cf3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626cf4: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626cf7: ret  */ FN_RET(0x00626c90); r_esp += 4; return;
}

void f_00626d00(void) /* FUN_00626d00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626d00);
    /* 00626d00: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00626d04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00626d06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626d07: call dword ptr [0x6330d4] */ { u32 t = R32((u32)(0x6330d4u)); r_esp -= 4; W32(r_esp, 0x626d0du); call_ind(t); }
    /* 00626d0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626d0f: jne 0x626d19 */ if (!fZ) goto L_00626d19;
L_00626d11:; BB(0x00626d11);
    /* 00626d11: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x626d17u); call_ind(t); }
    /* 00626d17: jmp 0x626d1b */ goto L_00626d1b;
L_00626d19:; BB(0x00626d19);
    /* 00626d19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00626d1b:; BB(0x00626d1b);
    /* 00626d1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626d1d: je 0x626d2c */ if (fZ) goto L_00626d2c;
L_00626d1f:; BB(0x00626d1f);
    /* 00626d1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626d20: call 0x62b3e0 */ r_esp -= 4; W32(r_esp, 0x626d25u); f_0062b3e0();
    /* 00626d25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626d28: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00626d2b: ret  */ FN_RET(0x00626d00); r_esp += 4; return;
L_00626d2c:; BB(0x00626d2c);
    /* 00626d2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626d2e: ret  */ FN_RET(0x00626d00); r_esp += 4; return;
}

void f_00626d30(void) /* FUN_00626d30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626d30);
    /* 00626d30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626d31: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00626d35: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_00626d36:; BB(0x00626d36);
    /* 00626d36: cmp dword ptr [0x6f2564], 1 */ {  u32 a = R32((u32)(0x6f2564u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00626d3d: jle 0x626d50 */ if ((fZ||fS!=fO)) goto L_00626d50;
L_00626d3f:; BB(0x00626d3f);
    /* 00626d3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626d41: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00626d43: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00626d45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626d46: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x626d4bu); f_00628c40();
    /* 00626d4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626d4e: jmp 0x626d60 */ goto L_00626d60;
L_00626d50:; BB(0x00626d50);
    /* 00626d50: mov edx, dword ptr [0x6f2358] */ r_edx = R32((u32)(0x6f2358u));
    /* 00626d56: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00626d58: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00626d5a: mov al, byte ptr [edx + ecx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx*2))) & 0xffu);
    /* 00626d5d: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00626d60:; BB(0x00626d60);
    /* 00626d60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626d62: je 0x626d67 */ if (fZ) goto L_00626d67;
L_00626d64:; BB(0x00626d64);
    /* 00626d64: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00626d65: jmp 0x626d36 */ goto L_00626d36;
L_00626d67:; BB(0x00626d67);
    /* 00626d67: mov edi, esi */ r_edi = r_esi;
    /* 00626d69: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00626d6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626d6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00626d70: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 00626d72: not ecx */ r_ecx = ~r_ecx;
    /* 00626d74: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00626d75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00626d77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626d78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626d79: call 0x62d810 */ r_esp -= 4; W32(r_esp, 0x626d7eu); f_0062d810();
    /* 00626d7e: fld qword ptr [eax + 0x10] */ FPUSH(R_F64((u32)(r_eax+0x10u)));
    /* 00626d81: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626d84: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00626d85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626d86: ret  */ FN_RET(0x00626d30); r_esp += 4; return;
}

void f_00626da9(void) /* FUN_00626da9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626da9);
    /* 00626da9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00626dad: call 0x62c685 */ r_esp -= 4; W32(r_esp, 0x626db2u); f_0062c685();
    /* 00626db2: mov ecx, eax */ r_ecx = r_eax;
    /* 00626db4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626db5: wait  */ ;
    /* 00626db6: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00626db9: cmp word ptr [esp], 0x27f */ {  u32 a = R16((u32)(r_esp)); u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00626dbf: je 0x626dc6 */ if (fZ) goto L_00626dc6;
L_00626dc1:; BB(0x00626dc1);
    /* 00626dc1: call 0x62c655 */ r_esp -= 4; W32(r_esp, 0x626dc6u); f_0062c655();
L_00626dc6:; BB(0x00626dc6);
    /* 00626dc6: and ecx, 0x7ff00000 */ {  u32 a = r_ecx; u32 b = 0x7ff00000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00626dcc: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00626dd0: cmp ecx, 0x7ff00000 */ {  u32 a = r_ecx; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626dd6: je 0x626e79 */ if (fZ) goto L_00626e79;
L_00626ddc:; BB(0x00626ddc);
    /* 00626ddc: call 0x62c685 */ r_esp -= 4; W32(r_esp, 0x626de1u); f_0062c685();
    /* 00626de1: je 0x626e75 */ if (fZ) goto L_00626e75;
L_00626de7:; BB(0x00626de7);
    /* 00626de7: test eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626dec: je 0x626ee8 */ if (fZ) goto L_00626ee8;
L_00626df2:; BB(0x00626df2);
    /* 00626df2: mov cl, byte ptr [esp + 0xf] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0xfu))) & 0xffu);
    /* 00626df6: and cl, 0x80 */ {  u32 a = (u8)r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 00626df9: jne 0x626f60 */ if (!fZ) goto L_00626f60;
L_00626dff:; BB(0x00626dff);
    /* 00626dff: fyl2x  */ ST(1) = ST(1) * log2l(ST(0)); FPOP();
    /* 00626e01: call 0x62c640 */ r_esp -= 4; W32(r_esp, 0x626e06u); f_0062c640();
    /* 00626e06: cmp cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00626e09: jne 0x626e0d */ if (!fZ) goto L_00626e0d;
L_00626e0b:; BB(0x00626e0b);
    /* 00626e0b: fchs  */ ST(0) = -ST(0);
L_00626e0d:; BB(0x00626e0d);
    /* 00626e0d: cmp dword ptr [0x71130c], 0 */ {  u32 a = R32((u32)(0x71130cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626e14: jne 0x62c6de */ if (!fZ) goto L_0062c6de;
L_00626e1a:; BB(0x00626e1a);
    /* 00626e1a: lea ecx, [0x6f2328] */ r_ecx = (u32)(0x6f2328u);
    /* 00626e20: mov edx, 0x1d */ r_edx = 0x1du;
    /* 00626e25: jmp 0x62c729 */ f_0062c729(); return;
L_00626e2a:; BB(0x00626e2a);
    /* 00626e2a: cmp dword ptr [0x71130c], 0 */ {  u32 a = R32((u32)(0x71130cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626e31: jne 0x62c6de */ if (!fZ) goto L_0062c6de;
L_00626e37:; BB(0x00626e37);
    /* 00626e37: lea ecx, [0x6f2328] */ r_ecx = (u32)(0x6f2328u);
    /* 00626e3d: mov edx, 0x1d */ r_edx = 0x1du;
    /* 00626e42: call 0x62c7d0 */ r_esp -= 4; W32(r_esp, 0x626e47u); f_0062c7d0();
    /* 00626e47: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 00626e48: ret  */ FN_RET(0x00626da9); r_esp += 4; return;
L_00626e49:; BB(0x00626e49);
    /* 00626e49: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00626e4d: call 0x62c685 */ r_esp -= 4; W32(r_esp, 0x626e52u); f_0062c685();
    /* 00626e52: test byte ptr [esp + 0x16], 8 */ {  u32 a = R8((u32)(r_esp+0x16u)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626e57: jne 0x626e5c */ if (!fZ) goto L_00626e5c;
L_00626e59:; BB(0x00626e59);
    /* 00626e59: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00626e5a: jmp 0x626e8f */ goto L_00626e8f;
L_00626e5c:; BB(0x00626e5c);
    /* 00626e5c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00626e5e: mov eax, 1 */ r_eax = 0x1u;
    /* 00626e63: jmp 0x626e2a */ goto L_00626e2a;
L_00626e65:; BB(0x00626e65);
    /* 00626e65: test byte ptr [esp + 0xe], 8 */ {  u32 a = R8((u32)(r_esp+0xeu)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626e6a: jne 0x626e5c */ if (!fZ) goto L_00626e5c;
L_00626e6c:; BB(0x00626e6c);
    /* 00626e6c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00626e6e: mov eax, 7 */ r_eax = 0x7u;
    /* 00626e73: jmp 0x626e2a */ goto L_00626e2a;
L_00626e75:; BB(0x00626e75);
    /* 00626e75: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00626e77: jmp 0x626e8f */ goto L_00626e8f;
L_00626e79:; BB(0x00626e79);
    /* 00626e79: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00626e7b: and eax, 0xfffff */ {  u32 a = r_eax; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00626e80: or eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00626e84: jne 0x626e49 */ if (!fZ) goto L_00626e49;
L_00626e86:; BB(0x00626e86);
    /* 00626e86: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00626e8a: call 0x62c685 */ r_esp -= 4; W32(r_esp, 0x626e8fu); f_0062c685();
L_00626e8f:; BB(0x00626e8f);
    /* 00626e8f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00626e93: mov edx, eax */ r_edx = r_eax;
    /* 00626e95: and eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00626e9a: and edx, 0xfffff */ {  u32 a = r_edx; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00626ea0: cmp eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626ea5: jne 0x626ead */ if (!fZ) goto L_00626ead;
L_00626ea7:; BB(0x00626ea7);
    /* 00626ea7: or edx, dword ptr [esp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00626eab: jne 0x626e65 */ if (!fZ) goto L_00626e65;
L_00626ead:; BB(0x00626ead);
    /* 00626ead: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626eaf: jne 0x626e6c */ if (!fZ) goto L_00626e6c;
L_00626eb1:; BB(0x00626eb1);
    /* 00626eb1: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626eb4: mov ecx, esp */ r_ecx = r_esp;
    /* 00626eb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626eb7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626eba: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00626ebd: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00626ec1: wait  */ ;
    /* 00626ec2: fnsave dword ptr [ecx + 8] */ UNSUP(0x00626ec2, "fnsave dword ptr [ecx + 8]");
    /* 00626ec5: call 0x62dad0 */ r_esp -= 4; W32(r_esp, 0x626ecau); f_0062dad0();
    /* 00626eca: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626ecd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626ece: frstor dword ptr [ecx + 8] */ UNSUP(0x00626ece, "frstor dword ptr [ecx + 8]");
    /* 00626ed1: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00626ed3: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626ed6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626ed8: je 0x62c6de */ if (fZ) goto L_0062c6de;
L_00626ede:; BB(0x00626ede);
    /* 00626ede: mov eax, 1 */ r_eax = 0x1u;
    /* 00626ee3: jmp 0x626e2a */ goto L_00626e2a;
L_00626ee8:; BB(0x00626ee8);
    /* 00626ee8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00626eec: and eax, 0xfffff */ {  u32 a = r_eax; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00626ef1: or eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00626ef5: jne 0x626df2 */ if (!fZ) goto L_00626df2;
L_00626efb:; BB(0x00626efb);
    /* 00626efb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00626efd: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00626f01: test eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626f06: je 0x626f45 */ if (fZ) goto L_00626f45;
L_00626f08:; BB(0x00626f08);
    /* 00626f08: call 0x626f85 */ r_esp -= 4; W32(r_esp, 0x626f0du); f_00626f85();
    /* 00626f0d: mov ch, byte ptr [esp + 0xf] */ r_ecx = (r_ecx & 0xffff00ffu) | (((R8((u32)(r_esp+0xfu))) & 0xffu) << 8);
    /* 00626f11: shr ch, 7 */ { u32 c = (7u) & 31; u32 a = (u8)(r_ecx>>8); u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  } }
    /* 00626f14: test dword ptr [esp + 0x17], 0x80 */ {  u32 a = R32((u32)(r_esp+0x17u)); u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626f1c: je 0x626f34 */ if (fZ) goto L_00626f34;
L_00626f1e:; BB(0x00626f1e);
    /* 00626f1e: fld xword ptr [0x6f4d20] */ FPUSH(R_F80((u32)(0x6f4d20u)));
    /* 00626f24: test ch, cl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626f26: je 0x626f2a */ if (fZ) goto L_00626f2a;
L_00626f28:; BB(0x00626f28);
    /* 00626f28: fchs  */ ST(0) = -ST(0);
L_00626f2a:; BB(0x00626f2a);
    /* 00626f2a: mov eax, 2 */ r_eax = 0x2u;
    /* 00626f2f: jmp 0x626e2a */ goto L_00626e2a;
L_00626f34:; BB(0x00626f34);
    /* 00626f34: fldz  */ FPUSH(0.0);
    /* 00626f36: test ch, cl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626f38: je 0x62c6de */ if (fZ) goto L_0062c6de;
L_00626f3e:; BB(0x00626f3e);
    /* 00626f3e: fchs  */ ST(0) = -ST(0);
    /* 00626f40: jmp 0x62c6de */ f_0062c6de(); return;
L_00626f45:; BB(0x00626f45);
    /* 00626f45: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00626f47: and eax, 0xfffff */ {  u32 a = r_eax; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00626f4c: or eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00626f50: jne 0x626f59 */ if (!fZ) goto L_00626f59;
L_00626f52:; BB(0x00626f52);
    /* 00626f52: fld1  */ FPUSH(1.0);
    /* 00626f54: jmp 0x62c6de */ f_0062c6de(); return;
L_00626f59:; BB(0x00626f59);
    /* 00626f59: fldz  */ FPUSH(0.0);
    /* 00626f5b: jmp 0x62c6de */ f_0062c6de(); return;
L_00626f60:; BB(0x00626f60);
    /* 00626f60: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00626f62: call 0x626f85 */ r_esp -= 4; W32(r_esp, 0x626f67u); f_00626f85();
    /* 00626f67: fchs  */ ST(0) = -ST(0);
    /* 00626f69: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00626f6b: jne 0x626dff */ if (!fZ) goto L_00626dff;
L_00626f71:; BB(0x00626f71);
    /* 00626f71: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00626f73: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00626f75: fld xword ptr [0x6f4b80] */ FPUSH(R_F80((u32)(0x6f4b80u)));
    /* 00626f7b: mov eax, 1 */ r_eax = 0x1u;
    /* 00626f80: jmp 0x626e2a */ goto L_00626e2a;
L_0062c6de:; BB(0x0062c6de);
    /* 0062c6de: cmp word ptr [esp], 0x27f */ {  u32 a = R16((u32)(r_esp)); u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062c6e4: je 0x62c6e9 */ if (fZ) goto L_0062c6e9;
L_0062c6e6:; BB(0x0062c6e6);
    /* 0062c6e6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
L_0062c6e9:; BB(0x0062c6e9);
    /* 0062c6e9: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062c6ea: ret  */ FN_RET(0x00626da9); r_esp += 4; return;
}

void f_00626f85(void) /* FUN_00626f85 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626f85);
    /* 00626f85: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00626f87: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00626f89: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00626f8b: mov cl, 0 */ r_ecx = (r_ecx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 00626f8d: wait  */ ;
    /* 00626f8e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00626f90: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00626f91: jne 0x626faa */ if (!fZ) goto L_00626faa;
L_00626f93:; BB(0x00626f93);
    /* 00626f93: fmul qword ptr [0x6f2320] */ ST(0) = ST(0) * R_F64((u32)(0x6f2320u));
    /* 00626f99: inc cl */ { u32 x = (u8)r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00626f9b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00626f9d: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00626f9f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00626fa1: wait  */ ;
    /* 00626fa2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00626fa4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00626fa5: jne 0x626fa9 */ if (!fZ) goto L_00626fa9;
L_00626fa7:; BB(0x00626fa7);
    /* 00626fa7: inc cl */ { u32 x = (u8)r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
L_00626fa9:; BB(0x00626fa9);
    /* 00626fa9: ret  */ FN_RET(0x00626f85); r_esp += 4; return;
L_00626faa:; BB(0x00626faa);
    /* 00626faa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00626fac: ret  */ FN_RET(0x00626f85); r_esp += 4; return;
}

void f_00627180(void) /* FUN_00627180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627180);
    /* 00627180: cmp dword ptr [0x711338], 1 */ {  u32 a = R32((u32)(0x711338u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627187: jne 0x62718e */ if (!fZ) goto L_0062718e;
L_00627189:; BB(0x00627189);
    /* 00627189: call 0x62e970 */ r_esp -= 4; W32(r_esp, 0x62718eu); f_0062e970();
L_0062718e:; BB(0x0062718e);
    /* 0062718e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00627192: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627193: call 0x62e9b0 */ r_esp -= 4; W32(r_esp, 0x627198u); f_0062e9b0();
    /* 00627198: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062719b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006271a0: call dword ptr [0x6330c4] */ { u32 t = R32((u32)(0x6330c4u)); r_esp -= 4; W32(r_esp, 0x6271a6u); call_ind(t); }
    /* 006271a6: ret  */ FN_RET(0x00627180); r_esp += 4; return;
}

void f_006271d0(void) /* FUN_006271d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006271d0);
    /* 006271d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006271d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006271d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006271d6: mov dword ptr [ebp - 8], 0x80000000 */ W32((u32)(r_ebp+0xfffffff8u), 0x80000000u);
    /* 006271dd: mov dword ptr [ebp - 4], 0x4147ffff */ W32((u32)(r_ebp+0xfffffffcu), 0x4147ffffu);
    /* 006271e4: mov dword ptr [ebp - 0x10], 0xc0000000 */ W32((u32)(r_ebp+0xfffffff0u), 0xc0000000u);
    /* 006271eb: mov dword ptr [ebp - 0xc], 0x4150017e */ W32((u32)(r_ebp+0xfffffff4u), 0x4150017eu);
    /* 006271f2: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 006271f5: fdiv qword ptr [ebp - 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xfffffff8u));
    /* 006271f8: fmul qword ptr [ebp - 8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff8u));
    /* 006271fb: fsubr qword ptr [ebp - 0x10] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff0u)) - ST(0);
    /* 006271fe: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00627201: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 00627204: fcomp qword ptr [0x63d108] */ fx_compare(ST(0), R_F64((u32)(0x63d108u))); FPOP();
    /* 0062720a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062720c: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062720f: jne 0x62721a */ if (!fZ) goto L_0062721a;
L_00627211:; BB(0x00627211);
    /* 00627211: mov eax, 1 */ r_eax = 0x1u;
    /* 00627216: mov esp, ebp */ r_esp = r_ebp;
    /* 00627218: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627219: ret  */ FN_RET(0x006271d0); r_esp += 4; return;
L_0062721a:; BB(0x0062721a);
    /* 0062721a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062721c: mov esp, ebp */ r_esp = r_ebp;
    /* 0062721e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062721f: ret  */ FN_RET(0x006271d0); r_esp += 4; return;
}

void f_00627220(void) /* FUN_00627220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627220);
    /* 00627220: push 0x63d12c */ { u32 v = 0x63d12cu; r_esp -= 4; W32(r_esp, v); }
    /* 00627225: call dword ptr [0x6330d0] */ { u32 t = R32((u32)(0x6330d0u)); r_esp -= 4; W32(r_esp, 0x62722bu); call_ind(t); }
    /* 0062722b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062722d: je 0x627244 */ if (fZ) goto L_00627244;
L_0062722f:; BB(0x0062722f);
    /* 0062722f: push 0x63d110 */ { u32 v = 0x63d110u; r_esp -= 4; W32(r_esp, v); }
    /* 00627234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627235: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x62723bu); call_ind(t); }
    /* 0062723b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062723d: je 0x627244 */ if (fZ) goto L_00627244;
L_0062723f:; BB(0x0062723f);
    /* 0062723f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00627241: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x627243u); call_ind(t); }
    /* 00627243: ret  */ FN_RET(0x00627220); r_esp += 4; return;
L_00627244:; BB(0x00627244);
    /* 00627244: jmp 0x6271d0 */ f_006271d0(); return;
}

void f_00627250(void) /* FUN_00627250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627250);
    /* 00627250: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627251: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00627255: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00627258: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627259: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x62725eu); f_00624600();
    /* 0062725e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627261: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627264: je 0x627293 */ if (fZ) goto L_00627293;
L_00627266:; BB(0x00627266);
    /* 00627266: mov eax, dword ptr [0x6f2564] */ r_eax = R32((u32)(0x6f2564u));
    /* 0062726b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062726c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062726f: jle 0x627281 */ if ((fZ||fS!=fO)) goto L_00627281;
L_00627271:; BB(0x00627271);
    /* 00627271: movsx ecx, byte ptr [esi] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00627274: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00627276: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627277: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x62727cu); f_00628c40();
    /* 0062727c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062727f: jmp 0x62728f */ goto L_0062728f;
L_00627281:; BB(0x00627281);
    /* 00627281: movsx edx, byte ptr [esi] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00627284: mov eax, dword ptr [0x6f2358] */ r_eax = R32((u32)(0x6f2358u));
    /* 00627289: mov al, byte ptr [eax + edx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_edx*2))) & 0xffu);
    /* 0062728c: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0062728f:; BB(0x0062728f);
    /* 0062728f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627291: jne 0x627266 */ if (!fZ) goto L_00627266;
L_00627293:; BB(0x00627293);
    /* 00627293: mov cl, byte ptr [0x6f2568] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x6f2568u))) & 0xffu);
    /* 00627299: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0062729b: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 0062729d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0062729e:; BB(0x0062729e);
    /* 0062729e: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 006272a0: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 006272a2: mov dl, byte ptr [esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 006272a4: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006272a5: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006272a7: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 006272a9: jne 0x62729e */ if (!fZ) goto L_0062729e;
L_006272ab:; BB(0x006272ab);
    /* 006272ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006272ac: ret  */ FN_RET(0x00627250); r_esp += 4; return;
}

void f_006273a0(void) /* FUN_006273a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006273a0);
    /* 006273a0: mov al, byte ptr [0x711340] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x711340u))) & 0xffu);
    /* 006273a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006273a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006273a7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006273a8: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006273aa: je 0x6273d9 */ if (fZ) goto L_006273d9;
L_006273ac:; BB(0x006273ac);
    /* 006273ac: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 006273b0: mov edi, dword ptr [0x71133c] */ r_edi = R32((u32)(0x71133cu));
    /* 006273b6: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006273ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006273bc: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006273be: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006273c0: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 006273c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006273c5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006273c8: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006273cb: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006273cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006273ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006273cf: call 0x627760 */ r_esp -= 4; W32(r_esp, 0x6273d4u); f_00627760();
    /* 006273d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006273d7: jmp 0x62741b */ goto L_0062741b;
L_006273d9:; BB(0x006273d9);
    /* 006273d9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006273dd: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006273e0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006273e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006273e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006273e4: call 0x62f2e0 */ r_esp -= 4; W32(r_esp, 0x6273e9u); f_0062f2e0();
    /* 006273e9: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 006273ed: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 006273f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006273f4: mov edi, eax */ r_edi = r_eax;
    /* 006273f6: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 006273f9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006273fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006273fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006273fd: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 006273ff: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00627401: setg dl */ r_edx = (r_edx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 00627404: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00627406: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627409: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062740b: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0062740e: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00627410: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00627412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627413: call 0x62f240 */ r_esp -= 4; W32(r_esp, 0x627418u); f_0062f240();
    /* 00627418: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062741b:; BB(0x0062741b);
    /* 0062741b: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0062741d: mov eax, ebx */ r_eax = r_ebx;
    /* 0062741f: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627422: jne 0x62742a */ if (!fZ) goto L_0062742a;
L_00627424:; BB(0x00627424);
    /* 00627424: mov byte ptr [ebx], 0x2d */ W8((u32)(r_ebx), 0x2du);
    /* 00627427: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
L_0062742a:; BB(0x0062742a);
    /* 0062742a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062742c: jle 0x62743c */ if ((fZ||fS!=fO)) goto L_0062743c;
L_0062742e:; BB(0x0062742e);
    /* 0062742e: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00627431: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 00627433: mov cl, byte ptr [0x6f2568] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x6f2568u))) & 0xffu);
    /* 00627439: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062743a: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
L_0062743c:; BB(0x0062743c);
    /* 0062743c: mov cl, byte ptr [0x711340] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x711340u))) & 0xffu);
    /* 00627442: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00627444: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627446: mov ecx, dword ptr [0x63d140] */ r_ecx = R32((u32)(0x63d140u));
    /* 0062744c: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0062744f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00627451: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00627453: mov eax, esi */ r_eax = r_esi;
    /* 00627455: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00627457: mov dx, word ptr [0x63d144] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x63d144u))) & 0xffffu);
    /* 0062745e: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00627462: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00627466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627468: je 0x62746d */ if (fZ) goto L_0062746d;
L_0062746a:; BB(0x0062746a);
    /* 0062746a: mov byte ptr [esi], 0x45 */ W8((u32)(r_esi), 0x45u);
L_0062746d:; BB(0x0062746d);
    /* 0062746d: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00627470: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00627471: cmp byte ptr [eax], 0x30 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00627474: je 0x6274d6 */ if (fZ) goto L_006274d6;
L_00627476:; BB(0x00627476);
    /* 00627476: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00627479: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0062747a: jns 0x627481 */ if (!fS) goto L_00627481;
L_0062747c:; BB(0x0062747c);
    /* 0062747c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062747e: mov byte ptr [esi], 0x2d */ W8((u32)(r_esi), 0x2du);
L_00627481:; BB(0x00627481);
    /* 00627481: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00627482: cmp ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627485: jl 0x6274aa */ if ((fS!=fO)) goto L_006274aa;
L_00627487:; BB(0x00627487);
    /* 00627487: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0062748c: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062748e: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00627491: mov eax, edx */ r_eax = r_edx;
    /* 00627493: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00627496: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00627498: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0062749a: add al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062749c: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 0062749e: mov eax, ecx */ r_eax = r_ecx;
    /* 006274a0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006274a1: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 006274a6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006274a6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006274a6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006274a8: mov ecx, edx */ r_ecx = r_edx;
L_006274aa:; BB(0x006274aa);
    /* 006274aa: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006274ab: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006274ae: jl 0x6274d3 */ if ((fS!=fO)) goto L_006274d3;
L_006274b0:; BB(0x006274b0);
    /* 006274b0: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006274b5: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006274b7: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006274ba: mov eax, edx */ r_eax = r_edx;
    /* 006274bc: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006274bf: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006274c1: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 006274c3: add al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006274c5: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 006274c7: mov eax, ecx */ r_eax = r_ecx;
    /* 006274c9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006274ca: mov ecx, 0xa */ r_ecx = 0xau;
    /* 006274cf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006274cf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006274cf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006274d1: mov ecx, edx */ r_ecx = r_edx;
L_006274d3:; BB(0x006274d3);
    /* 006274d3: add byte ptr [esi + 1], cl */ { u32 ad = (u32)(r_esi+0x1u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_006274d6:; BB(0x006274d6);
    /* 006274d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006274d7: mov eax, ebx */ r_eax = r_ebx;
    /* 006274d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006274da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006274db: ret  */ FN_RET(0x006273a0); r_esp += 4; return;
}

void f_006274e0(void) /* FUN_006274e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006274e0);
    /* 006274e0: mov al, byte ptr [0x711340] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x711340u))) & 0xffu);
    /* 006274e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006274e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006274e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006274e8: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006274ea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006274eb: je 0x62751c */ if (fZ) goto L_0062751c;
L_006274ed:; BB(0x006274ed);
    /* 006274ed: mov esi, dword ptr [0x71133c] */ r_esi = R32((u32)(0x71133cu));
    /* 006274f3: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 006274f7: mov ecx, dword ptr [0x711344] */ r_ecx = R32((u32)(0x711344u));
    /* 006274fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006274ff: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 00627501: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627504: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00627508: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0062750b: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062750d: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062750f: jne 0x627555 */ if (!fZ) goto L_00627555;
L_00627511:; BB(0x00627511);
    /* 00627511: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00627513: mov byte ptr [eax], 0x30 */ W8((u32)(r_eax), 0x30u);
    /* 00627516: mov byte ptr [eax + 1], 0 */ W8((u32)(r_eax+0x1u), 0x0u);
    /* 0062751a: jmp 0x627555 */ goto L_00627555;
L_0062751c:; BB(0x0062751c);
    /* 0062751c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00627520: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00627523: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00627525: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627526: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627527: call 0x62f2e0 */ r_esp -= 4; W32(r_esp, 0x62752cu); f_0062f2e0();
    /* 0062752c: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00627530: mov esi, eax */ r_esi = r_eax;
    /* 00627532: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627535: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00627537: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0062753a: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 0062753c: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062753e: cmp ebp, 0x2d */ {  u32 a = r_ebp; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627541: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00627545: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627546: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00627549: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062754b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062754c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062754d: call 0x62f240 */ r_esp -= 4; W32(r_esp, 0x627552u); f_0062f240();
    /* 00627552: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00627555:; BB(0x00627555);
    /* 00627555: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00627557: mov edi, ebp */ r_edi = r_ebp;
    /* 00627559: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062755c: jne 0x627565 */ if (!fZ) goto L_00627565;
L_0062755e:; BB(0x0062755e);
    /* 0062755e: mov byte ptr [ebp], 0x2d */ W8((u32)(r_ebp), 0x2du);
    /* 00627562: lea edi, [ebp + 1] */ r_edi = (u32)(r_ebp+0x1u);
L_00627565:; BB(0x00627565);
    /* 00627565: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00627568: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062756a: jg 0x62757d */ if ((!fZ&&fS==fO)) goto L_0062757d;
L_0062756c:; BB(0x0062756c);
    /* 0062756c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062756e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062756f: call 0x627760 */ r_esp -= 4; W32(r_esp, 0x627574u); f_00627760();
    /* 00627574: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627577: mov byte ptr [edi], 0x30 */ W8((u32)(r_edi), 0x30u);
    /* 0062757a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062757b: jmp 0x62757f */ goto L_0062757f;
L_0062757d:; BB(0x0062757d);
    /* 0062757d: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0062757f:; BB(0x0062757f);
    /* 0062757f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00627581: jle 0x6275d2 */ if ((fZ||fS!=fO)) goto L_006275d2;
L_00627583:; BB(0x00627583);
    /* 00627583: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00627585: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00627586: call 0x627760 */ r_esp -= 4; W32(r_esp, 0x62758bu); f_00627760();
    /* 0062758b: mov dl, byte ptr [0x6f2568] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x6f2568u))) & 0xffu);
    /* 00627591: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627594: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 00627596: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 00627599: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062759a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062759c: jge 0x6275d2 */ if ((fS==fO)) goto L_006275d2;
L_0062759e:; BB(0x0062759e);
    /* 0062759e: mov al, byte ptr [0x711340] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x711340u))) & 0xffu);
    /* 006275a3: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006275a5: je 0x6275ab */ if (fZ) goto L_006275ab;
L_006275a7:; BB(0x006275a7);
    /* 006275a7: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006275a9: jmp 0x6275b1 */ goto L_006275b1;
L_006275ab:; BB(0x006275ab);
    /* 006275ab: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006275ad: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006275af: jl 0x6275b3 */ if ((fS!=fO)) goto L_006275b3;
L_006275b1:; BB(0x006275b1);
    /* 006275b1: mov ebx, esi */ r_ebx = r_esi;
L_006275b3:; BB(0x006275b3);
    /* 006275b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006275b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006275b5: call 0x627760 */ r_esp -= 4; W32(r_esp, 0x6275bau); f_00627760();
    /* 006275ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006275bc: mov eax, 0x30303030 */ r_eax = 0x30303030u;
    /* 006275c1: mov edx, ecx */ r_edx = r_ecx;
    /* 006275c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006275c6: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006275c9: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006275cb: mov ecx, edx */ r_ecx = r_edx;
    /* 006275cd: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006275d0: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
L_006275d2:; BB(0x006275d2);
    /* 006275d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006275d3: mov eax, ebp */ r_eax = r_ebp;
    /* 006275d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006275d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006275d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006275d8: ret  */ FN_RET(0x006274e0); r_esp += 4; return;
}

void f_006275e0(void) /* FUN_006275e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006275e0);
    /* 006275e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006275e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006275e2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006275e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006275e4: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 006275e8: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 006275eb: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 006275ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006275ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006275ef: call 0x62f2e0 */ r_esp -= 4; W32(r_esp, 0x6275f4u); f_0062f2e0();
    /* 006275f4: mov dword ptr [0x71133c], eax */ W32((u32)(0x71133cu), r_eax);
    /* 006275f9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006275fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006275ff: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00627603: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00627604: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00627606: mov dword ptr [0x711344], edx */ W32((u32)(0x711344u), r_edx);
    /* 0062760c: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0062760e: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627611: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00627615: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00627618: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062761a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062761b: mov esi, ecx */ r_esi = r_ecx;
    /* 0062761d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062761e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062761f: call 0x62f240 */ r_esp -= 4; W32(r_esp, 0x627624u); f_0062f240();
    /* 00627624: mov eax, dword ptr [0x71133c] */ r_eax = R32((u32)(0x71133cu));
    /* 00627629: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062762c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062762e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00627631: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00627632: cmp dword ptr [0x711344], edx */ {  u32 a = R32((u32)(0x711344u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627638: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0062763b: mov byte ptr [0x711348], cl */ W8((u32)(0x711348u), (u8)r_ecx);
    /* 00627641: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00627644: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00627645: cmp eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627648: mov dword ptr [0x711344], eax */ W32((u32)(0x711344u), r_eax);
    /* 0062764d: jl 0x627679 */ if ((fS!=fO)) goto L_00627679;
L_0062764f:; BB(0x0062764f);
    /* 0062764f: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627651: jge 0x627679 */ if ((fS==fO)) goto L_00627679;
L_00627653:; BB(0x00627653);
    /* 00627653: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627655: je 0x627669 */ if (fZ) goto L_00627669;
L_00627657:; BB(0x00627657);
    /* 00627657: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00627659: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062765a: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062765c: je 0x627665 */ if (fZ) goto L_00627665;
L_0062765e:; BB(0x0062765e);
    /* 0062765e: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00627660: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00627661: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627663: jne 0x62765e */ if (!fZ) goto L_0062765e;
L_00627665:; BB(0x00627665);
    /* 00627665: mov byte ptr [esi - 2], 0 */ W8((u32)(r_esi+0xfffffffeu), 0x0u);
L_00627669:; BB(0x00627669);
    /* 00627669: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062766a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062766b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062766c: call 0x6276c0 */ r_esp -= 4; W32(r_esp, 0x627671u); f_006276c0();
    /* 00627671: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627674: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00627675: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00627676: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627677: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00627678: ret  */ FN_RET(0x006275e0); r_esp += 4; return;
L_00627679:; BB(0x00627679);
    /* 00627679: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0062767d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062767e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062767f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627680: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00627681: call 0x627690 */ r_esp -= 4; W32(r_esp, 0x627686u); f_00627690();
    /* 00627686: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627689: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062768a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062768b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062768c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062768d: ret  */ FN_RET(0x006275e0); r_esp += 4; return;
}

void f_00627690(void) /* FUN_00627690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627690);
    /* 00627690: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00627694: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00627698: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0062769c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062769d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006276a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006276a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006276a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006276a4: mov byte ptr [0x711340], 1 */ W8((u32)(0x711340u), 0x1u);
    /* 006276ab: call 0x6273a0 */ r_esp -= 4; W32(r_esp, 0x6276b0u); f_006273a0();
    /* 006276b0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006276b3: mov byte ptr [0x711340], 0 */ W8((u32)(0x711340u), 0x0u);
    /* 006276ba: ret  */ FN_RET(0x00627690); r_esp += 4; return;
}

void f_006276c0(void) /* FUN_006276c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006276c0);
    /* 006276c0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006276c4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006276c8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006276cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006276cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006276ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006276cf: mov byte ptr [0x711340], 1 */ W8((u32)(0x711340u), 0x1u);
    /* 006276d6: call 0x6274e0 */ r_esp -= 4; W32(r_esp, 0x6276dbu); f_006274e0();
    /* 006276db: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006276de: mov byte ptr [0x711340], 0 */ W8((u32)(0x711340u), 0x0u);
    /* 006276e5: ret  */ FN_RET(0x006276c0); r_esp += 4; return;
}

void f_006276f0(void) /* FUN_006276f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006276f0);
    /* 006276f0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006276f4: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006276f7: je 0x627738 */ if (fZ) goto L_00627738;
L_006276f9:; BB(0x006276f9);
    /* 006276f9: cmp eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006276fc: je 0x627738 */ if (fZ) goto L_00627738;
L_006276fe:; BB(0x006276fe);
    /* 006276fe: cmp eax, 0x66 */ {  u32 a = r_eax; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627701: jne 0x62771b */ if (!fZ) goto L_0062771b;
L_00627703:; BB(0x00627703);
    /* 00627703: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00627707: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0062770b: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0062770f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627710: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627711: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627712: call 0x6274e0 */ r_esp -= 4; W32(r_esp, 0x627717u); f_006274e0();
    /* 00627717: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062771a: ret  */ FN_RET(0x006276f0); r_esp += 4; return;
L_0062771b:; BB(0x0062771b);
    /* 0062771b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062771f: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00627723: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00627727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627728: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062772c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062772d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062772e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062772f: call 0x6275e0 */ r_esp -= 4; W32(r_esp, 0x627734u); f_006275e0();
    /* 00627734: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627737: ret  */ FN_RET(0x006276f0); r_esp += 4; return;
L_00627738:; BB(0x00627738);
    /* 00627738: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0062773c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00627740: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00627744: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627745: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00627749: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062774a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062774b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062774c: call 0x6273a0 */ r_esp -= 4; W32(r_esp, 0x627751u); f_006273a0();
    /* 00627751: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627754: ret  */ FN_RET(0x006276f0); r_esp += 4; return;
}

void f_00627760(void) /* FUN_00627760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627760);
    /* 00627760: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627761: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00627765: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627767: je 0x627787 */ if (fZ) goto L_00627787;
L_00627769:; BB(0x00627769);
    /* 00627769: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0062776d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062776e: mov edi, edx */ r_edi = r_edx;
    /* 00627770: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00627773: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00627775: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00627777: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 00627779: not ecx */ r_ecx = ~r_ecx;
    /* 0062777b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062777c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062777d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062777e: call 0x62f420 */ r_esp -= 4; W32(r_esp, 0x627783u); f_0062f420();
    /* 00627783: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627786: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00627787:; BB(0x00627787);
    /* 00627787: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00627788: ret  */ FN_RET(0x00627760); r_esp += 4; return;
}

void f_00627790(void) /* FUN_00627790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627790);
    /* 00627790: sub esp, 0x24c */ {  u32 a = r_esp; u32 b = 0x24cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627796: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00627797: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627798: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627799: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062779a: mov edi, dword ptr [esp + 0x264] */ r_edi = R32((u32)(r_esp+0x264u));
    /* 006277a1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006277a3: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006277a5: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 006277a9: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006277ab: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006277ac: test bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006277ae: mov byte ptr [esp + 0x40], bl */ W8((u32)(r_esp+0x40u), (u8)r_ebx);
    /* 006277b2: mov dword ptr [esp + 0x264], edi */ W32((u32)(r_esp+0x264u), r_edi);
    /* 006277b9: je 0x627fe7 */ if (fZ) goto L_00627fe7;
L_006277bf:; BB(0x006277bf);
    /* 006277bf: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 006277c3: jmp 0x6277cd */ goto L_006277cd;
L_006277c5:; BB(0x006277c5);
    /* 006277c5: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 006277c9: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
L_006277cd:; BB(0x006277cd);
    /* 006277cd: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006277d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006277d3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006277d5: jl 0x627fe7 */ if ((fS!=fO)) goto L_00627fe7;
L_006277db:; BB(0x006277db);
    /* 006277db: cmp bl, 0x20 */ {  u32 a = (u8)r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 006277de: jl 0x6277f3 */ if ((fS!=fO)) goto L_006277f3;
L_006277e0:; BB(0x006277e0);
    /* 006277e0: cmp bl, 0x78 */ {  u32 a = (u8)r_ebx; u32 b = 0x78u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 006277e3: jg 0x6277f3 */ if ((!fZ&&fS==fO)) goto L_006277f3;
L_006277e5:; BB(0x006277e5);
    /* 006277e5: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 006277e8: mov al, byte ptr [eax + 0x63d128] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x63d128u))) & 0xffu);
    /* 006277ee: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006277f1: jmp 0x6277f5 */ goto L_006277f5;
L_006277f3:; BB(0x006277f3);
    /* 006277f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006277f5:; BB(0x006277f5);
    /* 006277f5: movsx eax, byte ptr [ecx + eax*8 + 0x63d148] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax*8+0x63d148u));
    /* 006277fd: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00627800: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00627803: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00627807: ja 0x627fca */ if ((!fC&&!fZ)) goto L_00627fca;
L_0062780d:; BB(0x0062780d);
    /* 0062780d: jmp dword ptr [eax*4 + 0x62800c] */ { u32 t = R32((u32)(r_eax*4+0x62800cu)); switch (t) { case 0x627990u: goto L_00627990; case 0x627814u: goto L_00627814; case 0x627839u: goto L_00627839; case 0x6278a2u: goto L_006278a2; case 0x6278ecu: goto L_006278ec; case 0x6278f5u: goto L_006278f5; case 0x62793au: goto L_0062793a; case 0x627a0au: goto L_00627a0a; case 0x627875u: goto L_00627875; case 0x627884u: goto L_00627884; case 0x627866u: goto L_00627866; case 0x627857u: goto L_00627857; case 0x627893u: goto L_00627893; case 0x627fcau: goto L_00627fca; default: UNSUP(0x0062780d, "jump table entry is not a known target"); } }
L_00627814:; BB(0x00627814);
    /* 00627814: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00627818: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0062781c: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00627820: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00627824: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00627828: mov dword ptr [esp + 0x18], 0xffffffff */ W32((u32)(r_esp+0x18u), 0xffffffffu);
    /* 00627830: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00627834: jmp 0x627fca */ goto L_00627fca;
L_00627839:; BB(0x00627839);
    /* 00627839: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 0062783c: add eax, -0x20 */ {  u32 a = r_eax; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062783f: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00627842: ja 0x627fca */ if ((!fC&&!fZ)) goto L_00627fca;
L_00627848:; BB(0x00627848);
    /* 00627848: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062784a: mov cl, byte ptr [eax + 0x628044] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x628044u))) & 0xffu);
    /* 00627850: jmp dword ptr [ecx*4 + 0x62802c] */ { u32 t = R32((u32)(r_ecx*4+0x62802cu)); switch (t) { case 0x627a0au: goto L_00627a0a; case 0x62793au: goto L_0062793a; case 0x6278f5u: goto L_006278f5; case 0x6278ecu: goto L_006278ec; case 0x6278a2u: goto L_006278a2; case 0x627839u: goto L_00627839; case 0x627814u: goto L_00627814; case 0x627990u: goto L_00627990; case 0x627875u: goto L_00627875; case 0x627884u: goto L_00627884; case 0x627866u: goto L_00627866; case 0x627857u: goto L_00627857; case 0x627893u: goto L_00627893; case 0x627fcau: goto L_00627fca; default: UNSUP(0x00627850, "jump table entry is not a known target"); } }
L_00627857:; BB(0x00627857);
    /* 00627857: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062785b: or al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062785d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00627861: jmp 0x627fca */ goto L_00627fca;
L_00627866:; BB(0x00627866);
    /* 00627866: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062786a: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062786c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00627870: jmp 0x627fca */ goto L_00627fca;
L_00627875:; BB(0x00627875);
    /* 00627875: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00627879: or al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062787b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0062787f: jmp 0x627fca */ goto L_00627fca;
L_00627884:; BB(0x00627884);
    /* 00627884: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00627888: or al, 0x80 */ {  u32 a = (u8)r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062788a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0062788e: jmp 0x627fca */ goto L_00627fca;
L_00627893:; BB(0x00627893);
    /* 00627893: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00627897: or al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00627899: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0062789d: jmp 0x627fca */ goto L_00627fca;
L_006278a2:; BB(0x006278a2);
    /* 006278a2: cmp bl, 0x2a */ {  u32 a = (u8)r_ebx; u32 b = 0x2au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006278a5: jne 0x6278d9 */ if (!fZ) goto L_006278d9;
L_006278a7:; BB(0x006278a7);
    /* 006278a7: lea edx, [esp + 0x268] */ r_edx = (u32)(r_esp+0x268u);
    /* 006278ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006278af: call 0x6281f0 */ r_esp -= 4; W32(r_esp, 0x6278b4u); f_006281f0();
    /* 006278b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006278b7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006278bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006278bd: jge 0x627fca */ if ((fS==fO)) goto L_00627fca;
L_006278c3:; BB(0x006278c3);
    /* 006278c3: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006278c7: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006278ca: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006278cc: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006278d0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006278d4: jmp 0x627fca */ goto L_00627fca;
L_006278d9:; BB(0x006278d9);
    /* 006278d9: movsx ecx, bl */ r_ecx = (u32)(i32)(i8)(u8)r_ebx;
    /* 006278dc: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 006278df: lea edx, [ecx + eax*2 - 0x30] */ r_edx = (u32)(r_ecx+r_eax*2+0xffffffd0u);
    /* 006278e3: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006278e7: jmp 0x627fca */ goto L_00627fca;
L_006278ec:; BB(0x006278ec);
    /* 006278ec: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006278f0: jmp 0x627fca */ goto L_00627fca;
L_006278f5:; BB(0x006278f5);
    /* 006278f5: cmp bl, 0x2a */ {  u32 a = (u8)r_ebx; u32 b = 0x2au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006278f8: jne 0x627923 */ if (!fZ) goto L_00627923;
L_006278fa:; BB(0x006278fa);
    /* 006278fa: lea eax, [esp + 0x268] */ r_eax = (u32)(r_esp+0x268u);
    /* 00627901: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627902: call 0x6281f0 */ r_esp -= 4; W32(r_esp, 0x627907u); f_006281f0();
    /* 00627907: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062790a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0062790e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00627910: jge 0x627fca */ if ((fS==fO)) goto L_00627fca;
L_00627916:; BB(0x00627916);
    /* 00627916: mov dword ptr [esp + 0x18], 0xffffffff */ W32((u32)(r_esp+0x18u), 0xffffffffu);
    /* 0062791e: jmp 0x627fca */ goto L_00627fca;
L_00627923:; BB(0x00627923);
    /* 00627923: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00627927: movsx edx, bl */ r_edx = (u32)(i32)(i8)(u8)r_ebx;
    /* 0062792a: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 0062792d: lea eax, [edx + ecx*2 - 0x30] */ r_eax = (u32)(r_edx+r_ecx*2+0xffffffd0u);
    /* 00627931: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00627935: jmp 0x627fca */ goto L_00627fca;
L_0062793a:; BB(0x0062793a);
    /* 0062793a: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 0062793d: add eax, -0x49 */ {  u32 a = r_eax; u32 b = 0xffffffb7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00627940: cmp eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00627943: ja 0x627fca */ if ((!fC&&!fZ)) goto L_00627fca;
L_00627949:; BB(0x00627949);
    /* 00627949: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062794b: mov cl, byte ptr [eax + 0x62806c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x62806cu))) & 0xffu);
    /* 00627951: jmp dword ptr [ecx*4 + 0x628058] */ { u32 t = R32((u32)(r_ecx*4+0x628058u)); switch (t) { case 0x627967u: goto L_00627967; case 0x6279ebu: goto L_006279eb; case 0x627958u: goto L_00627958; case 0x6279fau: goto L_006279fa; case 0x627fcau: goto L_00627fca; default: UNSUP(0x00627951, "jump table entry is not a known target"); } }
L_00627958:; BB(0x00627958);
    /* 00627958: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062795c: or al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062795e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00627962: jmp 0x627fca */ goto L_00627fca;
L_00627967:; BB(0x00627967);
    /* 00627967: cmp byte ptr [edi], 0x36 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x36u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062796a: jne 0x62798c */ if (!fZ) goto L_0062798c;
L_0062796c:; BB(0x0062796c);
    /* 0062796c: cmp byte ptr [edi + 1], 0x34 */ {  u32 a = R8((u32)(r_edi+0x1u)); u32 b = 0x34u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00627970: jne 0x62798c */ if (!fZ) goto L_0062798c;
L_00627972:; BB(0x00627972);
    /* 00627972: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00627976: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00627979: or ah, 0x80 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x80u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0062797c: mov dword ptr [esp + 0x264], edi */ W32((u32)(r_esp+0x264u), r_edi);
    /* 00627983: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00627987: jmp 0x627fca */ goto L_00627fca;
L_0062798c:; BB(0x0062798c);
    /* 0062798c: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
L_00627990:; BB(0x00627990);
    /* 00627990: mov eax, dword ptr [0x6f2358] */ r_eax = R32((u32)(0x6f2358u));
    /* 00627995: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00627999: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0062799d: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006279a3: test byte ptr [eax + edx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_eax+r_edx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006279a8: je 0x6279cd */ if (fZ) goto L_006279cd;
L_006279aa:; BB(0x006279aa);
    /* 006279aa: mov edx, dword ptr [esp + 0x260] */ r_edx = R32((u32)(r_esp+0x260u));
    /* 006279b1: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 006279b5: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 006279b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006279b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006279ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006279bb: call 0x628120 */ r_esp -= 4; W32(r_esp, 0x6279c0u); f_00628120();
    /* 006279c0: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006279c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006279c5: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006279c6: mov dword ptr [esp + 0x264], edi */ W32((u32)(r_esp+0x264u), r_edi);
L_006279cd:; BB(0x006279cd);
    /* 006279cd: mov edx, dword ptr [esp + 0x260] */ r_edx = R32((u32)(r_esp+0x260u));
    /* 006279d4: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 006279d8: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 006279db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006279dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006279dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006279de: call 0x628120 */ r_esp -= 4; W32(r_esp, 0x6279e3u); f_00628120();
    /* 006279e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006279e6: jmp 0x627fca */ goto L_00627fca;
L_006279eb:; BB(0x006279eb);
    /* 006279eb: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006279ef: or al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006279f1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006279f5: jmp 0x627fca */ goto L_00627fca;
L_006279fa:; BB(0x006279fa);
    /* 006279fa: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006279fe: or ah, 8 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00627a01: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00627a05: jmp 0x627fca */ goto L_00627fca;
L_00627a0a:; BB(0x00627a0a);
    /* 00627a0a: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 00627a0d: add eax, -0x43 */ {  u32 a = r_eax; u32 b = 0xffffffbdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00627a10: cmp eax, 0x35 */ {  u32 a = r_eax; u32 b = 0x35u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00627a13: ja 0x627eb0 */ if ((!fC&&!fZ)) goto L_00627eb0;
L_00627a19:; BB(0x00627a19);
    /* 00627a19: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00627a1b: mov cl, byte ptr [eax + 0x6280e0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x6280e0u))) & 0xffu);
    /* 00627a21: jmp dword ptr [ecx*4 + 0x62809c] */ { u32 t = R32((u32)(r_ecx*4+0x62809cu)); switch (t) { case 0x627a28u: goto L_00627a28; case 0x627bf7u: goto L_00627bf7; case 0x627b0cu: goto L_00627b0c; case 0x627d00u: goto L_00627d00; case 0x627aa3u: goto L_00627aa3; case 0x627a3au: goto L_00627a3a; case 0x627cdau: goto L_00627cda; case 0x627c02u: goto L_00627c02; case 0x627bb6u: goto L_00627bb6; case 0x627d3cu: goto L_00627d3c; case 0x627cf8u: goto L_00627cf8; case 0x627b1eu: goto L_00627b1e; case 0x627ceeu: goto L_00627cee; case 0x627d0au: goto L_00627d0a; case 0x627eb0u: goto L_00627eb0; default: UNSUP(0x00627a21, "jump table entry is not a known target"); } }
L_00627a28:; BB(0x00627a28);
    /* 00627a28: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00627a2c: test eax, 0x830 */ {  u32 a = r_eax; u32 b = 0x830u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627a31: jne 0x627a3a */ if (!fZ) goto L_00627a3a;
L_00627a33:; BB(0x00627a33);
    /* 00627a33: or ah, 8 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00627a36: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
L_00627a3a:; BB(0x00627a3a);
    /* 00627a3a: test dword ptr [esp + 0x10], 0x810 */ {  u32 a = R32((u32)(r_esp+0x10u)); u32 b = 0x810u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627a42: je 0x627a7d */ if (fZ) goto L_00627a7d;
L_00627a44:; BB(0x00627a44);
    /* 00627a44: lea edx, [esp + 0x268] */ r_edx = (u32)(r_esp+0x268u);
    /* 00627a4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627a4c: call 0x628230 */ r_esp -= 4; W32(r_esp, 0x627a51u); f_00628230();
    /* 00627a51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627a54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627a55: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00627a59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627a5a: call 0x62f770 */ r_esp -= 4; W32(r_esp, 0x627a5fu); f_0062f770();
    /* 00627a5f: mov ebp, eax */ r_ebp = r_eax;
    /* 00627a61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627a64: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00627a66: jge 0x627a96 */ if ((fS==fO)) goto L_00627a96;
L_00627a68:; BB(0x00627a68);
    /* 00627a68: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00627a6c: mov dword ptr [esp + 0x34], 1 */ W32((u32)(r_esp+0x34u), 0x1u);
    /* 00627a74: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00627a78: jmp 0x627eb0 */ goto L_00627eb0;
L_00627a7d:; BB(0x00627a7d);
    /* 00627a7d: lea ecx, [esp + 0x268] */ r_ecx = (u32)(r_esp+0x268u);
    /* 00627a84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627a85: call 0x6281f0 */ r_esp -= 4; W32(r_esp, 0x627a8au); f_006281f0();
    /* 00627a8a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627a8d: mov byte ptr [esp + 0x5c], al */ W8((u32)(r_esp+0x5cu), (u8)r_eax);
    /* 00627a91: mov ebp, 1 */ r_ebp = 0x1u;
L_00627a96:; BB(0x00627a96);
    /* 00627a96: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00627a9a: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00627a9e: jmp 0x627eb0 */ goto L_00627eb0;
L_00627aa3:; BB(0x00627aa3);
    /* 00627aa3: lea eax, [esp + 0x268] */ r_eax = (u32)(r_esp+0x268u);
    /* 00627aaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627aab: call 0x6281f0 */ r_esp -= 4; W32(r_esp, 0x627ab0u); f_006281f0();
    /* 00627ab0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627ab3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627ab5: je 0x627af1 */ if (fZ) goto L_00627af1;
L_00627ab7:; BB(0x00627ab7);
    /* 00627ab7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00627aba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627abc: je 0x627af1 */ if (fZ) goto L_00627af1;
L_00627abe:; BB(0x00627abe);
    /* 00627abe: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00627ac2: test dh, 8 */ {  u32 a = (u8)(r_edx>>8); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627ac5: je 0x627add */ if (fZ) goto L_00627add;
L_00627ac7:; BB(0x00627ac7);
    /* 00627ac7: movsx ebp, word ptr [eax] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00627aca: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00627ace: mov dword ptr [esp + 0x2c], 1 */ W32((u32)(r_esp+0x2cu), 0x1u);
    /* 00627ad6: shr ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00627ad8: jmp 0x627eb0 */ goto L_00627eb0;
L_00627add:; BB(0x00627add);
    /* 00627add: movsx ebp, word ptr [eax] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00627ae0: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00627ae8: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00627aec: jmp 0x627eb0 */ goto L_00627eb0;
L_00627af1:; BB(0x00627af1);
    /* 00627af1: mov edi, dword ptr [0x6f2350] */ r_edi = R32((u32)(0x6f2350u));
    /* 00627af7: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00627afa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00627afc: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00627b00: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 00627b02: not ecx */ r_ecx = ~r_ecx;
    /* 00627b04: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00627b05: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00627b07: jmp 0x627eb0 */ goto L_00627eb0;
L_00627b0c:; BB(0x00627b0c);
    /* 00627b0c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00627b10: test eax, 0x830 */ {  u32 a = r_eax; u32 b = 0x830u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b15: jne 0x627b1e */ if (!fZ) goto L_00627b1e;
L_00627b17:; BB(0x00627b17);
    /* 00627b17: or ah, 8 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00627b1a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
L_00627b1e:; BB(0x00627b1e);
    /* 00627b1e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00627b22: mov esi, 0x7fffffff */ r_esi = 0x7fffffffu;
    /* 00627b27: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b2a: je 0x627b2e */ if (fZ) goto L_00627b2e;
L_00627b2c:; BB(0x00627b2c);
    /* 00627b2c: mov esi, eax */ r_esi = r_eax;
L_00627b2e:; BB(0x00627b2e);
    /* 00627b2e: lea ecx, [esp + 0x268] */ r_ecx = (u32)(r_esp+0x268u);
    /* 00627b35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627b36: call 0x6281f0 */ r_esp -= 4; W32(r_esp, 0x627b3bu); f_006281f0();
    /* 00627b3b: mov ecx, eax */ r_ecx = r_eax;
    /* 00627b3d: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00627b41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627b44: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00627b48: test eax, 0x810 */ {  u32 a = r_eax; u32 b = 0x810u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b4d: je 0x627b89 */ if (fZ) goto L_00627b89;
L_00627b4f:; BB(0x00627b4f);
    /* 00627b4f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b51: jne 0x627b5d */ if (!fZ) goto L_00627b5d;
L_00627b53:; BB(0x00627b53);
    /* 00627b53: mov ecx, dword ptr [0x6f2354] */ r_ecx = R32((u32)(0x6f2354u));
    /* 00627b59: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
L_00627b5d:; BB(0x00627b5d);
    /* 00627b5d: mov edx, esi */ r_edx = r_esi;
    /* 00627b5f: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00627b60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b62: mov dword ptr [esp + 0x2c], 1 */ W32((u32)(r_esp+0x2cu), 0x1u);
    /* 00627b6a: mov eax, ecx */ r_eax = r_ecx;
    /* 00627b6c: je 0x627b7e */ if (fZ) goto L_00627b7e;
L_00627b6e:; BB(0x00627b6e);
    /* 00627b6e: cmp word ptr [eax], 0 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00627b72: je 0x627b7e */ if (fZ) goto L_00627b7e;
L_00627b74:; BB(0x00627b74);
    /* 00627b74: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00627b77: mov edx, esi */ r_edx = r_esi;
    /* 00627b79: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00627b7a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b7c: jne 0x627b6e */ if (!fZ) goto L_00627b6e;
L_00627b7e:; BB(0x00627b7e);
    /* 00627b7e: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00627b80: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00627b82: mov ebp, eax */ r_ebp = r_eax;
    /* 00627b84: jmp 0x627eb0 */ goto L_00627eb0;
L_00627b89:; BB(0x00627b89);
    /* 00627b89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b8b: jne 0x627b97 */ if (!fZ) goto L_00627b97;
L_00627b8d:; BB(0x00627b8d);
    /* 00627b8d: mov ecx, dword ptr [0x6f2350] */ r_ecx = R32((u32)(0x6f2350u));
    /* 00627b93: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
L_00627b97:; BB(0x00627b97);
    /* 00627b97: mov edx, esi */ r_edx = r_esi;
    /* 00627b99: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00627b9a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b9c: mov eax, ecx */ r_eax = r_ecx;
    /* 00627b9e: je 0x627bad */ if (fZ) goto L_00627bad;
L_00627ba0:; BB(0x00627ba0);
    /* 00627ba0: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00627ba3: je 0x627bad */ if (fZ) goto L_00627bad;
L_00627ba5:; BB(0x00627ba5);
    /* 00627ba5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00627ba6: mov edx, esi */ r_edx = r_esi;
    /* 00627ba8: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00627ba9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627bab: jne 0x627ba0 */ if (!fZ) goto L_00627ba0;
L_00627bad:; BB(0x00627bad);
    /* 00627bad: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00627baf: mov ebp, eax */ r_ebp = r_eax;
    /* 00627bb1: jmp 0x627eb0 */ goto L_00627eb0;
L_00627bb6:; BB(0x00627bb6);
    /* 00627bb6: lea eax, [esp + 0x268] */ r_eax = (u32)(r_esp+0x268u);
    /* 00627bbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627bbe: call 0x6281f0 */ r_esp -= 4; W32(r_esp, 0x627bc3u); f_006281f0();
    /* 00627bc3: mov cl, byte ptr [esp + 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0x14u))) & 0xffu);
    /* 00627bc7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627bca: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627bcd: je 0x627be4 */ if (fZ) goto L_00627be4;
L_00627bcf:; BB(0x00627bcf);
    /* 00627bcf: mov cx, word ptr [esp + 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esp+0x1cu))) & 0xffffu);
    /* 00627bd4: mov dword ptr [esp + 0x34], 1 */ W32((u32)(r_esp+0x34u), 0x1u);
    /* 00627bdc: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00627bdf: jmp 0x627eb0 */ goto L_00627eb0;
L_00627be4:; BB(0x00627be4);
    /* 00627be4: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00627be8: mov dword ptr [esp + 0x34], 1 */ W32((u32)(r_esp+0x34u), 0x1u);
    /* 00627bf0: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00627bf2: jmp 0x627eb0 */ goto L_00627eb0;
L_00627bf7:; BB(0x00627bf7);
    /* 00627bf7: mov dword ptr [esp + 0x44], 1 */ W32((u32)(r_esp+0x44u), 0x1u);
    /* 00627bff: add bl, 0x20 */ {  u32 a = (u8)r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
L_00627c02:; BB(0x00627c02);
    /* 00627c02: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00627c06: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 00627c0a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00627c0e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00627c12: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00627c15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00627c17: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00627c1b: jge 0x627c27 */ if ((fS==fO)) goto L_00627c27;
L_00627c1d:; BB(0x00627c1d);
    /* 00627c1d: mov dword ptr [esp + 0x18], 6 */ W32((u32)(r_esp+0x18u), 0x6u);
    /* 00627c25: jmp 0x627c36 */ goto L_00627c36;
L_00627c27:; BB(0x00627c27);
    /* 00627c27: jne 0x627c36 */ if (!fZ) goto L_00627c36;
L_00627c29:; BB(0x00627c29);
    /* 00627c29: cmp bl, 0x67 */ {  u32 a = (u8)r_ebx; u32 b = 0x67u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00627c2c: jne 0x627c36 */ if (!fZ) goto L_00627c36;
L_00627c2e:; BB(0x00627c2e);
    /* 00627c2e: mov dword ptr [esp + 0x18], 1 */ W32((u32)(r_esp+0x18u), 0x1u);
L_00627c36:; BB(0x00627c36);
    /* 00627c36: mov eax, dword ptr [esp + 0x268] */ r_eax = R32((u32)(r_esp+0x268u));
    /* 00627c3d: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00627c41: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00627c44: mov dword ptr [esp + 0x268], eax */ W32((u32)(r_esp+0x268u), r_eax);
    /* 00627c4b: mov ecx, dword ptr [eax - 8] */ r_ecx = R32((u32)(r_eax+0xfffffff8u));
    /* 00627c4e: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 00627c52: mov edx, dword ptr [eax - 4] */ r_edx = R32((u32)(r_eax+0xfffffffcu));
    /* 00627c55: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00627c59: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00627c5d: movsx ecx, bl */ r_ecx = (u32)(i32)(i8)(u8)r_ebx;
    /* 00627c60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627c61: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00627c62: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 00627c66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627c67: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 00627c6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627c6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627c6d: call dword ptr [0x6f2338] */ { u32 t = R32((u32)(0x6f2338u)); r_esp -= 4; W32(r_esp, 0x627c73u); call_ind(t); }
    /* 00627c73: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00627c77: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627c7a: and esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00627c80: je 0x627c94 */ if (fZ) goto L_00627c94;
L_00627c82:; BB(0x00627c82);
    /* 00627c82: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627c84: jne 0x627c94 */ if (!fZ) goto L_00627c94;
L_00627c86:; BB(0x00627c86);
    /* 00627c86: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 00627c8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627c8b: call dword ptr [0x6f2344] */ { u32 t = R32((u32)(0x6f2344u)); r_esp -= 4; W32(r_esp, 0x627c91u); call_ind(t); }
    /* 00627c91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00627c94:; BB(0x00627c94);
    /* 00627c94: cmp bl, 0x67 */ {  u32 a = (u8)r_ebx; u32 b = 0x67u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00627c97: jne 0x627cab */ if (!fZ) goto L_00627cab;
L_00627c99:; BB(0x00627c99);
    /* 00627c99: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627c9b: jne 0x627cab */ if (!fZ) goto L_00627cab;
L_00627c9d:; BB(0x00627c9d);
    /* 00627c9d: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00627ca1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627ca2: call dword ptr [0x6f233c] */ { u32 t = R32((u32)(0x6f233cu)); r_esp -= 4; W32(r_esp, 0x627ca8u); call_ind(t); }
    /* 00627ca8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00627cab:; BB(0x00627cab);
    /* 00627cab: cmp byte ptr [esp + 0x5c], 0x2d */ {  u32 a = R8((u32)(r_esp+0x5cu)); u32 b = 0x2du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00627cb0: jne 0x627cc5 */ if (!fZ) goto L_00627cc5;
L_00627cb2:; BB(0x00627cb2);
    /* 00627cb2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00627cb6: or ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00627cb9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00627cbd: lea eax, [esp + 0x5d] */ r_eax = (u32)(r_esp+0x5du);
    /* 00627cc1: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_00627cc5:; BB(0x00627cc5);
    /* 00627cc5: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00627cc9: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00627ccc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00627cce: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 00627cd0: not ecx */ r_ecx = ~r_ecx;
    /* 00627cd2: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00627cd3: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00627cd5: jmp 0x627eb0 */ goto L_00627eb0;
L_00627cda:; BB(0x00627cda);
    /* 00627cda: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00627cde: mov dword ptr [esp + 0x30], 0xa */ W32((u32)(r_esp+0x30u), 0xau);
    /* 00627ce6: or al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00627ce8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00627cec: jmp 0x627d57 */ goto L_00627d57;
L_00627cee:; BB(0x00627cee);
    /* 00627cee: mov dword ptr [esp + 0x30], 0xa */ W32((u32)(r_esp+0x30u), 0xau);
    /* 00627cf6: jmp 0x627d57 */ goto L_00627d57;
L_00627cf8:; BB(0x00627cf8);
    /* 00627cf8: mov dword ptr [esp + 0x18], 8 */ W32((u32)(r_esp+0x18u), 0x8u);
L_00627d00:; BB(0x00627d00);
    /* 00627d00: mov dword ptr [esp + 0x38], 7 */ W32((u32)(r_esp+0x38u), 0x7u);
    /* 00627d08: jmp 0x627d12 */ goto L_00627d12;
L_00627d0a:; BB(0x00627d0a);
    /* 00627d0a: mov dword ptr [esp + 0x38], 0x27 */ W32((u32)(r_esp+0x38u), 0x27u);
L_00627d12:; BB(0x00627d12);
    /* 00627d12: mov al, byte ptr [esp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x10u))) & 0xffu);
    /* 00627d16: mov dword ptr [esp + 0x30], 0x10 */ W32((u32)(r_esp+0x30u), 0x10u);
    /* 00627d1e: test al, 0x80 */ {  u32 a = (u8)r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627d20: je 0x627d57 */ if (fZ) goto L_00627d57;
L_00627d22:; BB(0x00627d22);
    /* 00627d22: mov cl, byte ptr [esp + 0x38] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0x38u))) & 0xffu);
    /* 00627d26: mov byte ptr [esp + 0x22], 0x30 */ W8((u32)(r_esp+0x22u), 0x30u);
    /* 00627d2b: add cl, 0x51 */ {  u32 a = (u8)r_ecx; u32 b = 0x51u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00627d2e: mov dword ptr [esp + 0x24], 2 */ W32((u32)(r_esp+0x24u), 0x2u);
    /* 00627d36: mov byte ptr [esp + 0x23], cl */ W8((u32)(r_esp+0x23u), (u8)r_ecx);
    /* 00627d3a: jmp 0x627d57 */ goto L_00627d57;
L_00627d3c:; BB(0x00627d3c);
    /* 00627d3c: mov al, byte ptr [esp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x10u))) & 0xffu);
    /* 00627d40: mov dword ptr [esp + 0x30], 8 */ W32((u32)(r_esp+0x30u), 0x8u);
    /* 00627d48: test al, 0x80 */ {  u32 a = (u8)r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627d4a: je 0x627d57 */ if (fZ) goto L_00627d57;
L_00627d4c:; BB(0x00627d4c);
    /* 00627d4c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00627d50: or ah, 2 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00627d53: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
L_00627d57:; BB(0x00627d57);
    /* 00627d57: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00627d5b: test bh, 0x80 */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627d5e: je 0x627d72 */ if (fZ) goto L_00627d72;
L_00627d60:; BB(0x00627d60);
    /* 00627d60: lea edx, [esp + 0x268] */ r_edx = (u32)(r_esp+0x268u);
    /* 00627d67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627d68: call 0x628210 */ r_esp -= 4; W32(r_esp, 0x627d6du); f_00628210();
    /* 00627d6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627d70: jmp 0x627dd4 */ goto L_00627dd4;
L_00627d72:; BB(0x00627d72);
    /* 00627d72: test bl, 0x20 */ {  u32 a = (u8)r_ebx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627d75: je 0x627daa */ if (fZ) goto L_00627daa;
L_00627d77:; BB(0x00627d77);
    /* 00627d77: test bl, 0x40 */ {  u32 a = (u8)r_ebx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627d7a: je 0x627d92 */ if (fZ) goto L_00627d92;
L_00627d7c:; BB(0x00627d7c);
    /* 00627d7c: lea eax, [esp + 0x268] */ r_eax = (u32)(r_esp+0x268u);
    /* 00627d83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627d84: call 0x6281f0 */ r_esp -= 4; W32(r_esp, 0x627d89u); f_006281f0();
    /* 00627d89: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00627d8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627d8f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00627d90: jmp 0x627dd4 */ goto L_00627dd4;
L_00627d92:; BB(0x00627d92);
    /* 00627d92: lea ecx, [esp + 0x268] */ r_ecx = (u32)(r_esp+0x268u);
    /* 00627d99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627d9a: call 0x6281f0 */ r_esp -= 4; W32(r_esp, 0x627d9fu); f_006281f0();
    /* 00627d9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627da2: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00627da7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00627da8: jmp 0x627dd4 */ goto L_00627dd4;
L_00627daa:; BB(0x00627daa);
    /* 00627daa: test bl, 0x40 */ {  u32 a = (u8)r_ebx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627dad: je 0x627dc2 */ if (fZ) goto L_00627dc2;
L_00627daf:; BB(0x00627daf);
    /* 00627daf: lea edx, [esp + 0x268] */ r_edx = (u32)(r_esp+0x268u);
    /* 00627db6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627db7: call 0x6281f0 */ r_esp -= 4; W32(r_esp, 0x627dbcu); f_006281f0();
    /* 00627dbc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627dbf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00627dc0: jmp 0x627dd4 */ goto L_00627dd4;
L_00627dc2:; BB(0x00627dc2);
    /* 00627dc2: lea eax, [esp + 0x268] */ r_eax = (u32)(r_esp+0x268u);
    /* 00627dc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627dca: call 0x6281f0 */ r_esp -= 4; W32(r_esp, 0x627dcfu); f_006281f0();
    /* 00627dcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627dd2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00627dd4:; BB(0x00627dd4);
    /* 00627dd4: test bl, 0x40 */ {  u32 a = (u8)r_ebx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627dd7: je 0x627df7 */ if (fZ) goto L_00627df7;
L_00627dd9:; BB(0x00627dd9);
    /* 00627dd9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00627ddb: jg 0x627df7 */ if ((!fZ&&fS==fO)) goto L_00627df7;
L_00627ddd:; BB(0x00627ddd);
    /* 00627ddd: jl 0x627de3 */ if ((fS!=fO)) goto L_00627de3;
L_00627ddf:; BB(0x00627ddf);
    /* 00627ddf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00627de1: jae 0x627df7 */ if (!fC) goto L_00627df7;
L_00627de3:; BB(0x00627de3);
    /* 00627de3: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00627de5: adc edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00627de8: mov esi, eax */ r_esi = r_eax;
    /* 00627dea: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00627dec: or bh, 1 */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00627def: mov edi, edx */ r_edi = r_edx;
    /* 00627df1: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00627df5: jmp 0x627dfb */ goto L_00627dfb;
L_00627df7:; BB(0x00627df7);
    /* 00627df7: mov esi, eax */ r_esi = r_eax;
    /* 00627df9: mov edi, edx */ r_edi = r_edx;
L_00627dfb:; BB(0x00627dfb);
    /* 00627dfb: test bh, 0x80 */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627dfe: jne 0x627e03 */ if (!fZ) goto L_00627e03;
L_00627e00:; BB(0x00627e00);
    /* 00627e00: and edi, 0 */ {  u32 a = r_edi; u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
L_00627e03:; BB(0x00627e03);
    /* 00627e03: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00627e07: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00627e09: jge 0x627e12 */ if ((fS==fO)) goto L_00627e12;
L_00627e0b:; BB(0x00627e0b);
    /* 00627e0b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00627e10: jmp 0x627e19 */ goto L_00627e19;
L_00627e12:; BB(0x00627e12);
    /* 00627e12: and ebx, 0xfffffff7 */ {  u32 a = r_ebx; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00627e15: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
L_00627e19:; BB(0x00627e19);
    /* 00627e19: mov edx, esi */ r_edx = r_esi;
    /* 00627e1b: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00627e1d: jne 0x627e27 */ if (!fZ) goto L_00627e27;
L_00627e1f:; BB(0x00627e1f);
    /* 00627e1f: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
L_00627e27:; BB(0x00627e27);
    /* 00627e27: lea eax, [esp + 0x25b] */ r_eax = (u32)(r_esp+0x25bu);
    /* 00627e2e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_00627e32:; BB(0x00627e32);
    /* 00627e32: mov edx, ecx */ r_edx = r_ecx;
    /* 00627e34: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00627e35: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00627e37: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00627e3b: jg 0x627e43 */ if ((!fZ&&fS==fO)) goto L_00627e43;
L_00627e3d:; BB(0x00627e3d);
    /* 00627e3d: mov ecx, esi */ r_ecx = r_esi;
    /* 00627e3f: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00627e41: je 0x627e87 */ if (fZ) goto L_00627e87;
L_00627e43:; BB(0x00627e43);
    /* 00627e43: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00627e47: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00627e48: mov ebp, eax */ r_ebp = r_eax;
    /* 00627e4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627e4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627e4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00627e4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627e4e: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00627e52: call 0x62f860 */ r_esp -= 4; W32(r_esp, 0x627e57u); f_0062f860();
    /* 00627e57: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00627e5b: mov ebx, eax */ r_ebx = r_eax;
    /* 00627e5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627e5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627e5f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00627e60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627e61: add ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00627e64: call 0x62f7f0 */ r_esp -= 4; W32(r_esp, 0x627e69u); f_0062f7f0();
    /* 00627e69: cmp ebx, 0x39 */ {  u32 a = r_ebx; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627e6c: mov esi, eax */ r_esi = r_eax;
    /* 00627e6e: mov edi, edx */ r_edi = r_edx;
    /* 00627e70: jle 0x627e76 */ if ((fZ||fS!=fO)) goto L_00627e76;
L_00627e72:; BB(0x00627e72);
    /* 00627e72: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00627e76:; BB(0x00627e76);
    /* 00627e76: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00627e7a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00627e7e: mov byte ptr [eax], bl */ W8((u32)(r_eax), (u8)r_ebx);
    /* 00627e80: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00627e81: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00627e85: jmp 0x627e32 */ goto L_00627e32;
L_00627e87:; BB(0x00627e87);
    /* 00627e87: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00627e8b: lea ebp, [esp + 0x25b] */ r_ebp = (u32)(r_esp+0x25bu);
    /* 00627e92: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00627e94: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00627e95: test ch, 2 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627e98: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00627e9c: je 0x627eb0 */ if (fZ) goto L_00627eb0;
L_00627e9e:; BB(0x00627e9e);
    /* 00627e9e: cmp byte ptr [eax], 0x30 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00627ea1: jne 0x627ea7 */ if (!fZ) goto L_00627ea7;
L_00627ea3:; BB(0x00627ea3);
    /* 00627ea3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627ea5: jne 0x627eb0 */ if (!fZ) goto L_00627eb0;
L_00627ea7:; BB(0x00627ea7);
    /* 00627ea7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00627ea8: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00627ea9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00627ead: mov byte ptr [eax], 0x30 */ W8((u32)(r_eax), 0x30u);
L_00627eb0:; BB(0x00627eb0);
    /* 00627eb0: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00627eb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627eb6: jne 0x627fca */ if (!fZ) goto L_00627fca;
L_00627ebc:; BB(0x00627ebc);
    /* 00627ebc: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00627ec0: test bl, 0x40 */ {  u32 a = (u8)r_ebx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627ec3: je 0x627eef */ if (fZ) goto L_00627eef;
L_00627ec5:; BB(0x00627ec5);
    /* 00627ec5: test bh, 1 */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627ec8: je 0x627ed1 */ if (fZ) goto L_00627ed1;
L_00627eca:; BB(0x00627eca);
    /* 00627eca: mov byte ptr [esp + 0x22], 0x2d */ W8((u32)(r_esp+0x22u), 0x2du);
    /* 00627ecf: jmp 0x627ee7 */ goto L_00627ee7;
L_00627ed1:; BB(0x00627ed1);
    /* 00627ed1: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627ed4: je 0x627edd */ if (fZ) goto L_00627edd;
L_00627ed6:; BB(0x00627ed6);
    /* 00627ed6: mov byte ptr [esp + 0x22], 0x2b */ W8((u32)(r_esp+0x22u), 0x2bu);
    /* 00627edb: jmp 0x627ee7 */ goto L_00627ee7;
L_00627edd:; BB(0x00627edd);
    /* 00627edd: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627ee0: je 0x627eef */ if (fZ) goto L_00627eef;
L_00627ee2:; BB(0x00627ee2);
    /* 00627ee2: mov byte ptr [esp + 0x22], 0x20 */ W8((u32)(r_esp+0x22u), 0x20u);
L_00627ee7:; BB(0x00627ee7);
    /* 00627ee7: mov dword ptr [esp + 0x24], 1 */ W32((u32)(r_esp+0x24u), 0x1u);
L_00627eef:; BB(0x00627eef);
    /* 00627eef: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00627ef3: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00627ef7: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00627ef9: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00627efb: test bl, 0xc */ {  u32 a = (u8)r_ebx; u32 b = 0xcu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627efe: jne 0x627f1a */ if (!fZ) goto L_00627f1a;
L_00627f00:; BB(0x00627f00);
    /* 00627f00: mov esi, dword ptr [esp + 0x260] */ r_esi = R32((u32)(r_esp+0x260u));
    /* 00627f07: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00627f0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627f0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627f0d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00627f0e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00627f10: call 0x628170 */ r_esp -= 4; W32(r_esp, 0x627f15u); f_00628170();
    /* 00627f15: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627f18: jmp 0x627f21 */ goto L_00627f21;
L_00627f1a:; BB(0x00627f1a);
    /* 00627f1a: mov esi, dword ptr [esp + 0x260] */ r_esi = R32((u32)(r_esp+0x260u));
L_00627f21:; BB(0x00627f21);
    /* 00627f21: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00627f25: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00627f29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627f2a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627f2b: lea eax, [esp + 0x2a] */ r_eax = (u32)(r_esp+0x2au);
    /* 00627f2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627f30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627f31: call 0x6281b0 */ r_esp -= 4; W32(r_esp, 0x627f36u); f_006281b0();
    /* 00627f36: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627f39: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627f3c: je 0x627f54 */ if (fZ) goto L_00627f54;
L_00627f3e:; BB(0x00627f3e);
    /* 00627f3e: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627f41: jne 0x627f54 */ if (!fZ) goto L_00627f54;
L_00627f43:; BB(0x00627f43);
    /* 00627f43: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00627f47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627f48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627f49: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00627f4a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00627f4c: call 0x628170 */ r_esp -= 4; W32(r_esp, 0x627f51u); f_00628170();
    /* 00627f51: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00627f54:; BB(0x00627f54);
    /* 00627f54: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00627f58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627f5a: je 0x627ff6 */ if (fZ) goto L_00627ff6;
L_00627f60:; BB(0x00627f60);
    /* 00627f60: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00627f62: jle 0x627ff6 */ if ((fZ||fS!=fO)) goto L_00627ff6;
L_00627f68:; BB(0x00627f68);
    /* 00627f68: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00627f6c: lea ebx, [ebp - 1] */ r_ebx = (u32)(r_ebp+0xffffffffu);
L_00627f6f:; BB(0x00627f6f);
    /* 00627f6f: mov ax, word ptr [esi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 00627f72: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 00627f76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627f77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627f78: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00627f7b: call 0x62f770 */ r_esp -= 4; W32(r_esp, 0x627f80u); f_0062f770();
    /* 00627f80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627f83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00627f85: jle 0x627fa9 */ if ((fZ||fS!=fO)) goto L_00627fa9;
L_00627f87:; BB(0x00627f87);
    /* 00627f87: mov edx, dword ptr [esp + 0x260] */ r_edx = R32((u32)(r_esp+0x260u));
    /* 00627f8e: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00627f92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627f93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627f94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627f95: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 00627f99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627f9a: call 0x6281b0 */ r_esp -= 4; W32(r_esp, 0x627f9fu); f_006281b0();
    /* 00627f9f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627fa2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00627fa4: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00627fa5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627fa7: jne 0x627f6f */ if (!fZ) goto L_00627f6f;
L_00627fa9:; BB(0x00627fa9);
    /* 00627fa9: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_00627fad:; BB(0x00627fad);
    /* 00627fad: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627fb0: je 0x627fca */ if (fZ) goto L_00627fca;
L_00627fb2:; BB(0x00627fb2);
    /* 00627fb2: mov edx, dword ptr [esp + 0x260] */ r_edx = R32((u32)(r_esp+0x260u));
    /* 00627fb9: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00627fbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627fbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627fbf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00627fc0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00627fc2: call 0x628170 */ r_esp -= 4; W32(r_esp, 0x627fc7u); f_00628170();
    /* 00627fc7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00627fca:; BB(0x00627fca);
    /* 00627fca: mov edi, dword ptr [esp + 0x264] */ r_edi = R32((u32)(r_esp+0x264u));
    /* 00627fd1: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00627fd3: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00627fd4: test bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00627fd6: mov byte ptr [esp + 0x40], bl */ W8((u32)(r_esp+0x40u), (u8)r_ebx);
    /* 00627fda: mov dword ptr [esp + 0x264], edi */ W32((u32)(r_esp+0x264u), r_edi);
    /* 00627fe1: jne 0x6277c5 */ if (!fZ) goto L_006277c5;
L_00627fe7:; BB(0x00627fe7);
    /* 00627fe7: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00627feb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00627fec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00627fed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627fee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00627fef: add esp, 0x24c */ {  u32 a = r_esp; u32 b = 0x24cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627ff5: ret  */ FN_RET(0x00627790); r_esp += 4; return;
L_00627ff6:; BB(0x00627ff6);
    /* 00627ff6: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00627ffa: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00627ffe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627fff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628002: call 0x6281b0 */ r_esp -= 4; W32(r_esp, 0x628007u); f_006281b0();
    /* 00628007: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062800a: jmp 0x627fad */ goto L_00627fad;
}

void f_00628120(void) /* FUN_00628120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628120);
    /* 00628120: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00628124: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00628127: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00628128: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062812b: js 0x628141 */ if (fS) goto L_00628141;
L_0062812d:; BB(0x0062812d);
    /* 0062812d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062812f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00628133: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 00628135: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628137: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062813c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062813d: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0062813f: jmp 0x62814f */ goto L_0062814f;
L_00628141:; BB(0x00628141);
    /* 00628141: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00628145: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628146: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628147: call 0x626330 */ r_esp -= 4; W32(r_esp, 0x62814cu); f_00626330();
    /* 0062814c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062814f:; BB(0x0062814f);
    /* 0062814f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628152: jne 0x62815b */ if (!fZ) goto L_0062815b;
L_00628154:; BB(0x00628154);
    /* 00628154: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00628158: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0062815a: ret  */ FN_RET(0x00628120); r_esp += 4; return;
L_0062815b:; BB(0x0062815b);
    /* 0062815b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0062815f: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00628161: ret  */ FN_RET(0x00628120); r_esp += 4; return;
}

void f_00628170(void) /* FUN_00628170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628170);
    /* 00628170: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628171: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628172: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00628176: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628177: mov eax, ebp */ r_eax = r_ebp;
    /* 00628179: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0062817a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062817c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062817d: jle 0x6281a4 */ if ((fZ||fS!=fO)) goto L_006281a4;
L_0062817f:; BB(0x0062817f);
    /* 0062817f: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00628183: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00628187: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
L_0062818b:; BB(0x0062818b);
    /* 0062818b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062818c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062818d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062818e: call 0x628120 */ r_esp -= 4; W32(r_esp, 0x628193u); f_00628120();
    /* 00628193: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00628195: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628198: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062819b: je 0x6281a4 */ if (fZ) goto L_006281a4;
L_0062819d:; BB(0x0062819d);
    /* 0062819d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062819f: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006281a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006281a2: jg 0x62818b */ if ((!fZ&&fS==fO)) goto L_0062818b;
L_006281a4:; BB(0x006281a4);
    /* 006281a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006281a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006281a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006281a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006281a8: ret  */ FN_RET(0x00628170); r_esp += 4; return;
}

void f_006281b0(void) /* FUN_006281b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006281b0);
    /* 006281b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006281b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006281b2: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 006281b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006281b7: mov eax, ebp */ r_eax = r_ebp;
    /* 006281b9: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006281ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006281bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006281bd: jle 0x6281e8 */ if ((fZ||fS!=fO)) goto L_006281e8;
L_006281bf:; BB(0x006281bf);
    /* 006281bf: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006281c3: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 006281c7: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_006281cb:; BB(0x006281cb);
    /* 006281cb: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 006281ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006281cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006281d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006281d1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006281d2: call 0x628120 */ r_esp -= 4; W32(r_esp, 0x6281d7u); f_00628120();
    /* 006281d7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006281d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006281dc: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006281df: je 0x6281e8 */ if (fZ) goto L_006281e8;
L_006281e1:; BB(0x006281e1);
    /* 006281e1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006281e3: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006281e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006281e6: jg 0x6281cb */ if ((!fZ&&fS==fO)) goto L_006281cb;
L_006281e8:; BB(0x006281e8);
    /* 006281e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006281e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006281ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006281eb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006281ec: ret  */ FN_RET(0x006281b0); r_esp += 4; return;
}

void f_006281f0(void) /* FUN_006281f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006281f0);
    /* 006281f0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006281f4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006281f6: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006281f9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006281fb: mov eax, ecx */ r_eax = r_ecx;
    /* 006281fd: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 00628200: ret  */ FN_RET(0x006281f0); r_esp += 4; return;
}

void f_00628210(void) /* FUN_00628210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628210);
    /* 00628210: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00628214: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00628216: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628219: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062821b: mov eax, dword ptr [ecx - 8] */ r_eax = R32((u32)(r_ecx+0xfffffff8u));
    /* 0062821e: mov edx, dword ptr [ecx - 4] */ r_edx = R32((u32)(r_ecx+0xfffffffcu));
    /* 00628221: ret  */ FN_RET(0x00628210); r_esp += 4; return;
}

void f_00628230(void) /* FUN_00628230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628230);
    /* 00628230: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00628234: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00628236: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628239: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062823b: mov eax, ecx */ r_eax = r_ecx;
    /* 0062823d: mov ax, word ptr [eax - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0xfffffffcu))) & 0xffffu);
    /* 00628241: ret  */ FN_RET(0x00628230); r_esp += 4; return;
}

void f_00628250(void) /* FUN_00628250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628250);
    /* 00628250: mov eax, dword ptr [0x7129e0] */ r_eax = R32((u32)(0x7129e0u));
    /* 00628255: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628256: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628257: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628258: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0062825c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062825d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062825f: jae 0x628306 */ if (!fC) goto L_00628306;
L_00628265:; BB(0x00628265);
    /* 00628265: mov eax, esi */ r_eax = r_esi;
    /* 00628267: mov edi, esi */ r_edi = r_esi;
    /* 00628269: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0062826c: and edi, 0x1f */ {  u32 a = r_edi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0062826f: mov ecx, dword ptr [eax*4 + 0x7128e0] */ r_ecx = R32((u32)(r_eax*4+0x7128e0u));
    /* 00628276: lea ebp, [eax*4 + 0x7128e0] */ r_ebp = (u32)(r_eax*4+0x7128e0u);
    /* 0062827d: shl edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00628280: test byte ptr [ecx + edi + 4], 1 */ {  u32 a = R8((u32)(r_ecx+r_edi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00628285: je 0x628306 */ if (fZ) goto L_00628306;
L_00628287:; BB(0x00628287);
    /* 00628287: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628288: call 0x62faf0 */ r_esp -= 4; W32(r_esp, 0x62828du); f_0062faf0();
    /* 0062828d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628290: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628293: je 0x6282d7 */ if (fZ) goto L_006282d7;
L_00628295:; BB(0x00628295);
    /* 00628295: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628298: je 0x62829f */ if (fZ) goto L_0062829f;
L_0062829a:; BB(0x0062829a);
    /* 0062829a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062829d: jne 0x6282b9 */ if (!fZ) goto L_006282b9;
L_0062829f:; BB(0x0062829f);
    /* 0062829f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006282a1: call 0x62faf0 */ r_esp -= 4; W32(r_esp, 0x6282a6u); f_0062faf0();
    /* 006282a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006282a9: mov ebx, eax */ r_ebx = r_eax;
    /* 006282ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006282ad: call 0x62faf0 */ r_esp -= 4; W32(r_esp, 0x6282b2u); f_0062faf0();
    /* 006282b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006282b5: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006282b7: je 0x6282d7 */ if (fZ) goto L_006282d7;
L_006282b9:; BB(0x006282b9);
    /* 006282b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006282ba: call 0x62faf0 */ r_esp -= 4; W32(r_esp, 0x6282bfu); f_0062faf0();
    /* 006282bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006282c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006282c3: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x6282c9u); call_ind(t); }
    /* 006282c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006282cb: jne 0x6282d7 */ if (!fZ) goto L_006282d7;
L_006282cd:; BB(0x006282cd);
    /* 006282cd: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x6282d3u); call_ind(t); }
    /* 006282d3: mov ebx, eax */ r_ebx = r_eax;
    /* 006282d5: jmp 0x6282d9 */ goto L_006282d9;
L_006282d7:; BB(0x006282d7);
    /* 006282d7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006282d9:; BB(0x006282d9);
    /* 006282d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006282da: call 0x62fa50 */ r_esp -= 4; W32(r_esp, 0x6282dfu); f_0062fa50();
    /* 006282df: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006282e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006282e5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006282e7: mov byte ptr [edx + edi + 4], 0 */ W8((u32)(r_edx+r_edi+0x4u), 0x0u);
    /* 006282ec: je 0x6282ff */ if (fZ) goto L_006282ff;
L_006282ee:; BB(0x006282ee);
    /* 006282ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006282ef: call 0x62b3e0 */ r_esp -= 4; W32(r_esp, 0x6282f4u); f_0062b3e0();
    /* 006282f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006282f7: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006282fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006282fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006282fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006282fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006282fe: ret  */ FN_RET(0x00628250); r_esp += 4; return;
L_006282ff:; BB(0x006282ff);
    /* 006282ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628301: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628302: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628303: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628304: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628305: ret  */ FN_RET(0x00628250); r_esp += 4; return;
L_00628306:; BB(0x00628306);
    /* 00628306: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628307: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628309: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
    /* 00628313: mov dword ptr [0x711460], 0 */ W32((u32)(0x711460u), 0x0u);
    /* 0062831d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00628320: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628321: ret  */ FN_RET(0x00628250); r_esp += 4; return;
}

void f_00628330(void) /* FUN_00628330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628330);
    /* 00628330: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628331: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00628335: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00628338: test al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062833a: je 0x628361 */ if (fZ) goto L_00628361;
L_0062833c:; BB(0x0062833c);
    /* 0062833c: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062833e: je 0x628361 */ if (fZ) goto L_00628361;
L_00628340:; BB(0x00628340);
    /* 00628340: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00628343: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628344: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x628349u); f_006262e0();
    /* 00628349: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0062834c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062834f: and eax, 0xfffffbf7 */ {  u32 a = r_eax; u32 b = 0xfffffbf7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00628354: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00628357: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628359: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0062835b: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0062835e: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_00628361:; BB(0x00628361);
    /* 00628361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628362: ret  */ FN_RET(0x00628330); r_esp += 4; return;
}

void f_00628370(void) /* FUN_00628370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628370);
    /* 00628370: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628371: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00628375: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628376: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00628379: test al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062837b: je 0x628456 */ if (fZ) goto L_00628456;
L_00628381:; BB(0x00628381);
    /* 00628381: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00628383: jne 0x628456 */ if (!fZ) goto L_00628456;
L_00628389:; BB(0x00628389);
    /* 00628389: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062838b: je 0x628398 */ if (fZ) goto L_00628398;
L_0062838d:; BB(0x0062838d);
    /* 0062838d: or al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062838f: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00628392: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00628395: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628396: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628397: ret  */ FN_RET(0x00628370); r_esp += 4; return;
L_00628398:; BB(0x00628398);
    /* 00628398: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062839a: test eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062839f: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 006283a2: jne 0x6283af */ if (!fZ) goto L_006283af;
L_006283a4:; BB(0x006283a4);
    /* 006283a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006283a5: call 0x62c2a0 */ r_esp -= 4; W32(r_esp, 0x6283aau); f_0062c2a0();
    /* 006283aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006283ad: jmp 0x6283b4 */ goto L_006283b4;
L_006283af:; BB(0x006283af);
    /* 006283af: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006283b2: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_006283b4:; BB(0x006283b4);
    /* 006283b4: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 006283b7: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 006283ba: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 006283bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006283be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006283bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006283c0: call 0x628460 */ r_esp -= 4; W32(r_esp, 0x6283c5u); f_00628460();
    /* 006283c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006283c8: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 006283cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006283cd: je 0x62843d */ if (fZ) goto L_0062843d;
L_006283cf:; BB(0x006283cf);
    /* 006283cf: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006283d2: je 0x62843d */ if (fZ) goto L_0062843d;
L_006283d4:; BB(0x006283d4);
    /* 006283d4: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 006283d7: test dl, 0x82 */ {  u32 a = (u8)r_edx; u32 b = 0x82u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006283da: jne 0x62840e */ if (!fZ) goto L_0062840e;
L_006283dc:; BB(0x006283dc);
    /* 006283dc: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 006283df: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006283e2: je 0x6283f8 */ if (fZ) goto L_006283f8;
L_006283e4:; BB(0x006283e4);
    /* 006283e4: mov edi, ecx */ r_edi = r_ecx;
    /* 006283e6: sar edi, 5 */ { u32 c = (5u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 006283e9: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006283ec: mov edi, dword ptr [edi*4 + 0x7128e0] */ r_edi = R32((u32)(r_edi*4+0x7128e0u));
    /* 006283f3: lea edi, [edi + ecx*8] */ r_edi = (u32)(r_edi+r_ecx*8);
    /* 006283f6: jmp 0x6283fd */ goto L_006283fd;
L_006283f8:; BB(0x006283f8);
    /* 006283f8: mov edi, 0x6f48f8 */ r_edi = 0x6f48f8u;
L_006283fd:; BB(0x006283fd);
    /* 006283fd: mov cl, byte ptr [edi + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+0x4u))) & 0xffu);
    /* 00628400: and cl, 0x82 */ {  u32 a = (u8)r_ecx; u32 b = 0x82u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00628403: cmp cl, 0x82 */ {  u32 a = (u8)r_ecx; u32 b = 0x82u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00628406: jne 0x62840e */ if (!fZ) goto L_0062840e;
L_00628408:; BB(0x00628408);
    /* 00628408: or dh, 0x20 */ {  u32 a = (u8)(r_edx>>8); u32 b = 0x20u; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0062840b: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
L_0062840e:; BB(0x0062840e);
    /* 0062840e: cmp dword ptr [esi + 0x18], 0x200 */ {  u32 a = R32((u32)(r_esi+0x18u)); u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628415: jne 0x62842b */ if (!fZ) goto L_0062842b;
L_00628417:; BB(0x00628417);
    /* 00628417: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0062841a: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062841d: je 0x62842b */ if (fZ) goto L_0062842b;
L_0062841f:; BB(0x0062841f);
    /* 0062841f: test ch, 4 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00628422: jne 0x62842b */ if (!fZ) goto L_0062842b;
L_00628424:; BB(0x00628424);
    /* 00628424: mov dword ptr [esi + 0x18], 0x1000 */ W32((u32)(r_esi+0x18u), 0x1000u);
L_0062842b:; BB(0x0062842b);
    /* 0062842b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062842c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062842e: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00628431: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00628433: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00628435: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00628436: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00628438: mov eax, edx */ r_eax = r_edx;
    /* 0062843a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062843b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062843c: ret  */ FN_RET(0x00628370); r_esp += 4; return;
L_0062843d:; BB(0x0062843d);
    /* 0062843d: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00628440: mov dword ptr [esi + 4], 0 */ W32((u32)(r_esi+0x4u), 0x0u);
    /* 00628447: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00628449: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0062844b: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062844e: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00628451: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00628453: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
L_00628456:; BB(0x00628456);
    /* 00628456: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628457: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062845a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062845b: ret  */ FN_RET(0x00628370); r_esp += 4; return;
}

void f_00628460(void) /* FUN_00628460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628460);
    /* 00628460: mov eax, dword ptr [0x7129e0] */ r_eax = R32((u32)(0x7129e0u));
    /* 00628465: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628468: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628469: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062846d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062846e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062846f: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00628471: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628472: jae 0x628695 */ if (!fC) goto L_00628695;
L_00628478:; BB(0x00628478);
    /* 00628478: mov eax, ebx */ r_eax = r_ebx;
    /* 0062847a: and ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0062847d: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00628480: shl ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00628483: mov ecx, dword ptr [eax*4 + 0x7128e0] */ r_ecx = R32((u32)(r_eax*4+0x7128e0u));
    /* 0062848a: lea esi, [eax*4 + 0x7128e0] */ r_esi = (u32)(r_eax*4+0x7128e0u);
    /* 00628491: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00628495: lea eax, [ebx + ecx] */ r_eax = (u32)(r_ebx+r_ecx);
    /* 00628498: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0062849c: mov dl, byte ptr [eax + 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 0062849f: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006284a2: je 0x628695 */ if (fZ) goto L_00628695;
L_006284a8:; BB(0x006284a8);
    /* 006284a8: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 006284ac: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 006284b0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006284b2: mov eax, edi */ r_eax = r_edi;
    /* 006284b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006284b6: je 0x62868b */ if (fZ) goto L_0062868b;
L_006284bc:; BB(0x006284bc);
    /* 006284bc: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006284bf: jne 0x62868b */ if (!fZ) goto L_0062868b;
L_006284c5:; BB(0x006284c5);
    /* 006284c5: test dl, 0x48 */ {  u32 a = (u8)r_edx; u32 b = 0x48u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006284c8: je 0x6284e8 */ if (fZ) goto L_006284e8;
L_006284ca:; BB(0x006284ca);
    /* 006284ca: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006284ce: mov dl, byte ptr [edx + 5] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0x5u))) & 0xffu);
    /* 006284d1: cmp dl, 0xa */ {  u32 a = (u8)r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006284d4: je 0x6284e8 */ if (fZ) goto L_006284e8;
L_006284d6:; BB(0x006284d6);
    /* 006284d6: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 006284d8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006284da: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 006284dd: mov ebp, 1 */ r_ebp = 0x1u;
    /* 006284e2: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006284e3: mov byte ptr [ebx + edx + 5], 0xa */ W8((u32)(r_ebx+r_edx+0x5u), 0xau);
L_006284e8:; BB(0x006284e8);
    /* 006284e8: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 006284ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006284ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006284ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006284f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006284f1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006284f3: mov ecx, dword ptr [ebx + eax] */ r_ecx = R32((u32)(r_ebx+r_eax));
    /* 006284f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006284f7: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x6284fdu); call_ind(t); }
    /* 006284fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006284ff: jne 0x628549 */ if (!fZ) goto L_00628549;
L_00628501:; BB(0x00628501);
    /* 00628501: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x628507u); call_ind(t); }
    /* 00628507: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062850a: jne 0x628526 */ if (!fZ) goto L_00628526;
L_0062850c:; BB(0x0062850c);
    /* 0062850c: mov dword ptr [0x711460], eax */ W32((u32)(0x711460u), r_eax);
    /* 00628511: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
    /* 0062851b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062851e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062851f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628520: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628521: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628522: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628525: ret  */ FN_RET(0x00628460); r_esp += 4; return;
L_00628526:; BB(0x00628526);
    /* 00628526: cmp eax, 0x6d */ {  u32 a = r_eax; u32 b = 0x6du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628529: jne 0x628535 */ if (!fZ) goto L_00628535;
L_0062852b:; BB(0x0062852b);
    /* 0062852b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062852d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062852e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062852f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628530: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628531: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628534: ret  */ FN_RET(0x00628460); r_esp += 4; return;
L_00628535:; BB(0x00628535);
    /* 00628535: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628536: call 0x62b3e0 */ r_esp -= 4; W32(r_esp, 0x62853bu); f_0062b3e0();
    /* 0062853b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062853e: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00628541: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628542: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628543: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628544: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628545: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628548: ret  */ FN_RET(0x00628460); r_esp += 4; return;
L_00628549:; BB(0x00628549);
    /* 00628549: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062854b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0062854f: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00628551: lea ecx, [ebx + eax + 4] */ r_ecx = (u32)(r_ebx+r_eax+0x4u);
    /* 00628555: mov al, byte ptr [ebx + eax + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebx+r_eax+0x4u))) & 0xffu);
    /* 00628559: test al, 0x80 */ {  u32 a = (u8)r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062855b: je 0x628681 */ if (fZ) goto L_00628681;
L_00628561:; BB(0x00628561);
    /* 00628561: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628563: je 0x62856e */ if (fZ) goto L_0062856e;
L_00628565:; BB(0x00628565);
    /* 00628565: cmp byte ptr [edi], 0xa */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00628568: jne 0x62856e */ if (!fZ) goto L_0062856e;
L_0062856a:; BB(0x0062856a);
    /* 0062856a: or al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062856c: jmp 0x628570 */ goto L_00628570;
L_0062856e:; BB(0x0062856e);
    /* 0062856e: and al, 0xfb */ {  u32 a = (u8)r_eax; u32 b = 0xfbu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00628570:; BB(0x00628570);
    /* 00628570: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 00628572: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00628576: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00628578: mov esi, edi */ r_esi = r_edi;
    /* 0062857a: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062857c: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00628580: jae 0x62867b */ if (!fC) goto L_0062867b;
L_00628586:; BB(0x00628586);
    /* 00628586: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00628588: cmp al, 0x1a */ {  u32 a = (u8)r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062858a: je 0x628665 */ if (fZ) goto L_00628665;
L_00628590:; BB(0x00628590);
    /* 00628590: cmp al, 0xd */ {  u32 a = (u8)r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00628592: je 0x62859d */ if (fZ) goto L_0062859d;
L_00628594:; BB(0x00628594);
    /* 00628594: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 00628596: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00628597: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00628598: jmp 0x628649 */ goto L_00628649;
L_0062859d:; BB(0x0062859d);
    /* 0062859d: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0062859e: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006285a0: jae 0x6285bd */ if (!fC) goto L_006285bd;
L_006285a2:; BB(0x006285a2);
    /* 006285a2: cmp byte ptr [edi + 1], 0xa */ {  u32 a = R8((u32)(r_edi+0x1u)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006285a6: jne 0x6285b3 */ if (!fZ) goto L_006285b3;
L_006285a8:; BB(0x006285a8);
    /* 006285a8: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006285ab: mov byte ptr [esi], 0xa */ W8((u32)(r_esi), 0xau);
    /* 006285ae: jmp 0x628648 */ goto L_00628648;
L_006285b3:; BB(0x006285b3);
    /* 006285b3: mov byte ptr [esi], 0xd */ W8((u32)(r_esi), 0xdu);
    /* 006285b6: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006285b7: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006285b8: jmp 0x628649 */ goto L_00628649;
L_006285bd:; BB(0x006285bd);
    /* 006285bd: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006285c1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006285c3: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 006285c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006285c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006285c9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006285cb: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 006285cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006285d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006285d2: mov edx, dword ptr [ebx + ecx] */ r_edx = R32((u32)(r_ebx+r_ecx));
    /* 006285d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006285d6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006285d7: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x6285ddu); call_ind(t); }
    /* 006285dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006285df: jne 0x6285e9 */ if (!fZ) goto L_006285e9;
L_006285e1:; BB(0x006285e1);
    /* 006285e1: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x6285e7u); call_ind(t); }
    /* 006285e7: mov ebp, eax */ r_ebp = r_eax;
L_006285e9:; BB(0x006285e9);
    /* 006285e9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006285eb: jne 0x628645 */ if (!fZ) goto L_00628645;
L_006285ed:; BB(0x006285ed);
    /* 006285ed: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006285f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006285f3: je 0x628645 */ if (fZ) goto L_00628645;
L_006285f5:; BB(0x006285f5);
    /* 006285f5: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006285f9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006285fb: test byte ptr [ebx + eax + 4], 0x48 */ {  u32 a = R8((u32)(r_ebx+r_eax+0x4u)); u32 b = 0x48u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00628600: je 0x62861a */ if (fZ) goto L_0062861a;
L_00628602:; BB(0x00628602);
    /* 00628602: mov al, byte ptr [esp + 0x28] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x28u))) & 0xffu);
    /* 00628606: cmp al, 0xa */ {  u32 a = (u8)r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00628608: jne 0x62860e */ if (!fZ) goto L_0062860e;
L_0062860a:; BB(0x0062860a);
    /* 0062860a: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 0062860c: jmp 0x628648 */ goto L_00628648;
L_0062860e:; BB(0x0062860e);
    /* 0062860e: mov byte ptr [esi], 0xd */ W8((u32)(r_esi), 0xdu);
    /* 00628611: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00628613: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00628614: mov byte ptr [ebx + ecx + 5], al */ W8((u32)(r_ebx+r_ecx+0x5u), (u8)r_eax);
    /* 00628618: jmp 0x628649 */ goto L_00628649;
L_0062861a:; BB(0x0062861a);
    /* 0062861a: cmp esi, dword ptr [esp + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062861e: jne 0x62862c */ if (!fZ) goto L_0062862c;
L_00628620:; BB(0x00628620);
    /* 00628620: cmp byte ptr [esp + 0x28], 0xa */ {  u32 a = R8((u32)(r_esp+0x28u)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00628625: jne 0x62862c */ if (!fZ) goto L_0062862c;
L_00628627:; BB(0x00628627);
    /* 00628627: mov byte ptr [esi], 0xa */ W8((u32)(r_esi), 0xau);
    /* 0062862a: jmp 0x628648 */ goto L_00628648;
L_0062862c:; BB(0x0062862c);
    /* 0062862c: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00628630: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00628634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628635: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x62863au); f_0062bfe0();
    /* 0062863a: mov al, byte ptr [esp + 0x34] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x34u))) & 0xffu);
    /* 0062863e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628641: cmp al, 0xa */ {  u32 a = (u8)r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00628643: je 0x628649 */ if (fZ) goto L_00628649;
L_00628645:; BB(0x00628645);
    /* 00628645: mov byte ptr [esi], 0xd */ W8((u32)(r_esi), 0xdu);
L_00628648:; BB(0x00628648);
    /* 00628648: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00628649:; BB(0x00628649);
    /* 00628649: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0062864d: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062864f: jb 0x628586 */ if (fC) goto L_00628586;
L_00628655:; BB(0x00628655);
    /* 00628655: sub esi, dword ptr [esp + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00628659: mov ebp, esi */ r_ebp = r_esi;
    /* 0062865b: mov eax, ebp */ r_eax = r_ebp;
    /* 0062865d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062865e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062865f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628660: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628661: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628664: ret  */ FN_RET(0x00628460); r_esp += 4; return;
L_00628665:; BB(0x00628665);
    /* 00628665: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00628669: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062866b: mov al, byte ptr [ebx + ecx + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebx+r_ecx+0x4u))) & 0xffu);
    /* 0062866f: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00628671: lea ebx, [ebx + ecx + 4] */ r_ebx = (u32)(r_ebx+r_ecx+0x4u);
    /* 00628675: jne 0x62867b */ if (!fZ) goto L_0062867b;
L_00628677:; BB(0x00628677);
    /* 00628677: or al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00628679: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
L_0062867b:; BB(0x0062867b);
    /* 0062867b: sub esi, dword ptr [esp + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062867f: mov ebp, esi */ r_ebp = r_esi;
L_00628681:; BB(0x00628681);
    /* 00628681: mov eax, ebp */ r_eax = r_ebp;
    /* 00628683: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628684: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628685: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628686: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628687: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062868a: ret  */ FN_RET(0x00628460); r_esp += 4; return;
L_0062868b:; BB(0x0062868b);
    /* 0062868b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062868d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062868e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062868f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628690: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628691: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628694: ret  */ FN_RET(0x00628460); r_esp += 4; return;
L_00628695:; BB(0x00628695);
    /* 00628695: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628696: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628697: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628698: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
    /* 006286a2: mov dword ptr [0x711460], 0 */ W32((u32)(0x711460u), 0x0u);
    /* 006286ac: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006286af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006286b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006286b3: ret  */ FN_RET(0x00628460); r_esp += 4; return;
}

void f_006286c0(void) /* FUN_006286c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006286c0);
    /* 006286c0: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006286c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006286c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006286c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006286c7: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 006286c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006286cb: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006286cd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006286ce: mov edi, dword ptr [0x711858] */ r_edi = R32((u32)(0x711858u));
    /* 006286d4: cmp al, 0x61 */ {  u32 a = (u8)r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006286d6: je 0x6286f5 */ if (fZ) goto L_006286f5;
L_006286d8:; BB(0x006286d8);
    /* 006286d8: cmp al, 0x72 */ {  u32 a = (u8)r_eax; u32 b = 0x72u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006286da: je 0x6286ee */ if (fZ) goto L_006286ee;
L_006286dc:; BB(0x006286dc);
    /* 006286dc: cmp al, 0x77 */ {  u32 a = (u8)r_eax; u32 b = 0x77u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 006286de: je 0x6286e7 */ if (fZ) goto L_006286e7;
L_006286e0:; BB(0x006286e0);
    /* 006286e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006286e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006286e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006286e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006286e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006286e6: ret  */ FN_RET(0x006286c0); r_esp += 4; return;
L_006286e7:; BB(0x006286e7);
    /* 006286e7: mov eax, 0x301 */ r_eax = 0x301u;
    /* 006286ec: jmp 0x6286fa */ goto L_006286fa;
L_006286ee:; BB(0x006286ee);
    /* 006286ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006286f0: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006286f3: jmp 0x6286fd */ goto L_006286fd;
L_006286f5:; BB(0x006286f5);
    /* 006286f5: mov eax, 0x109 */ r_eax = 0x109u;
L_006286fa:; BB(0x006286fa);
    /* 006286fa: or edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_006286fd:; BB(0x006286fd);
    /* 006286fd: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006286fe: mov esi, 1 */ r_esi = 0x1u;
    /* 00628703: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00628707: mov cl, byte ptr [ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00628709: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062870b: je 0x6287c1 */ if (fZ) goto L_006287c1;
L_00628711:; BB(0x00628711);
    /* 00628711: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628713: je 0x6287c1 */ if (fZ) goto L_006287c1;
L_00628719:; BB(0x00628719);
    /* 00628719: movsx ecx, cl */ r_ecx = (u32)(i32)(i8)(u8)r_ecx;
    /* 0062871c: add ecx, -0x2b */ {  u32 a = r_ecx; u32 b = 0xffffffd5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062871f: cmp ecx, 0x49 */ {  u32 a = r_ecx; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00628722: ja 0x6287ac */ if ((!fC&&!fZ)) goto L_006287ac;
L_00628728:; BB(0x00628728);
    /* 00628728: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0062872a: mov bl, byte ptr [ecx + 0x628844] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx+0x628844u))) & 0xffu);
    /* 00628730: jmp dword ptr [ebx*4 + 0x62881c] */ { u32 t = R32((u32)(r_ebx*4+0x62881cu)); switch (t) { case 0x628737u: goto L_00628737; case 0x6287a4u: goto L_006287a4; case 0x62878du: goto L_0062878d; case 0x628780u: goto L_00628780; case 0x62879au: goto L_0062879a; case 0x62874au: goto L_0062874a; case 0x62875eu: goto L_0062875e; case 0x62876fu: goto L_0062876f; case 0x628754u: goto L_00628754; case 0x6287acu: goto L_006287ac; default: UNSUP(0x00628730, "jump table entry is not a known target"); } }
L_00628737:; BB(0x00628737);
    /* 00628737: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00628739: jne 0x6287ac */ if (!fZ) goto L_006287ac;
L_0062873b:; BB(0x0062873b);
    /* 0062873b: and al, 0xfe */ {  u32 a = (u8)r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062873d: and edi, 0xfffffffc */ {  u32 a = r_edi; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00628740: or al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00628742: or edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00628748: jmp 0x6287ae */ goto L_006287ae;
L_0062874a:; BB(0x0062874a);
    /* 0062874a: test ah, 0xc0 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0xc0u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062874d: jne 0x6287ac */ if (!fZ) goto L_006287ac;
L_0062874f:; BB(0x0062874f);
    /* 0062874f: or ah, 0x80 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x80u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00628752: jmp 0x6287ae */ goto L_006287ae;
L_00628754:; BB(0x00628754);
    /* 00628754: test ah, 0xc0 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0xc0u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00628757: jne 0x6287ac */ if (!fZ) goto L_006287ac;
L_00628759:; BB(0x00628759);
    /* 00628759: or ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0062875c: jmp 0x6287ae */ goto L_006287ae;
L_0062875e:; BB(0x0062875e);
    /* 0062875e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628760: jne 0x6287ac */ if (!fZ) goto L_006287ac;
L_00628762:; BB(0x00628762);
    /* 00628762: mov edx, 1 */ r_edx = 0x1u;
    /* 00628767: or edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0062876d: jmp 0x6287ae */ goto L_006287ae;
L_0062876f:; BB(0x0062876f);
    /* 0062876f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628771: jne 0x6287ac */ if (!fZ) goto L_006287ac;
L_00628773:; BB(0x00628773);
    /* 00628773: mov edx, 1 */ r_edx = 0x1u;
    /* 00628778: and edi, 0xffffbfff */ {  u32 a = r_edi; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0062877e: jmp 0x6287ae */ goto L_006287ae;
L_00628780:; BB(0x00628780);
    /* 00628780: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628782: jne 0x6287ac */ if (!fZ) goto L_006287ac;
L_00628784:; BB(0x00628784);
    /* 00628784: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00628789: or al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062878b: jmp 0x6287ae */ goto L_006287ae;
L_0062878d:; BB(0x0062878d);
    /* 0062878d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062878f: jne 0x6287ac */ if (!fZ) goto L_006287ac;
L_00628791:; BB(0x00628791);
    /* 00628791: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00628796: or al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00628798: jmp 0x6287ae */ goto L_006287ae;
L_0062879a:; BB(0x0062879a);
    /* 0062879a: test ah, 0x10 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062879d: jne 0x6287ac */ if (!fZ) goto L_006287ac;
L_0062879f:; BB(0x0062879f);
    /* 0062879f: or ah, 0x10 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x10u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 006287a2: jmp 0x6287ae */ goto L_006287ae;
L_006287a4:; BB(0x006287a4);
    /* 006287a4: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006287a6: jne 0x6287ac */ if (!fZ) goto L_006287ac;
L_006287a8:; BB(0x006287a8);
    /* 006287a8: or al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006287aa: jmp 0x6287ae */ goto L_006287ae;
L_006287ac:; BB(0x006287ac);
    /* 006287ac: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006287ae:; BB(0x006287ae);
    /* 006287ae: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006287b2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006287b3: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 006287b7: mov cl, byte ptr [ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 006287b9: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006287bb: jne 0x628711 */ if (!fZ) goto L_00628711;
L_006287c1:; BB(0x006287c1);
    /* 006287c1: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 006287c5: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006287c9: push 0x1a4 */ { u32 v = 0x1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 006287ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006287cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006287d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006287d1: call 0x62fb40 */ r_esp -= 4; W32(r_esp, 0x6287d6u); f_0062fb40();
    /* 006287d6: mov ecx, eax */ r_ecx = r_eax;
    /* 006287d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006287db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006287dd: jge 0x6287e6 */ if ((fS==fO)) goto L_006287e6;
L_006287df:; BB(0x006287df);
    /* 006287df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006287e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006287e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006287e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006287e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006287e5: ret  */ FN_RET(0x006286c0); r_esp += 4; return;
L_006287e6:; BB(0x006287e6);
    /* 006287e6: mov eax, dword ptr [0x7114b4] */ r_eax = R32((u32)(0x7114b4u));
    /* 006287eb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006287ec: mov dword ptr [0x7114b4], eax */ W32((u32)(0x7114b4u), r_eax);
    /* 006287f1: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006287f5: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 006287f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006287f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006287fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006287fb: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 00628802: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00628808: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0062880f: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 00628816: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00628819: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062881a: ret  */ FN_RET(0x006286c0); r_esp += 4; return;
}

void f_00628890(void) /* FUN_00628890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628890);
    /* 00628890: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628891: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628892: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628893: mov esi, dword ptr [0x7128c0] */ r_esi = R32((u32)(0x7128c0u));
    /* 00628899: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062889a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0062889c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0062889e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006288a0: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006288a2: jle 0x6288f4 */ if ((fZ||fS!=fO)) goto L_006288f4;
L_006288a4:; BB(0x006288a4);
    /* 006288a4: mov edx, dword ptr [0x7118a0] */ r_edx = R32((u32)(0x7118a0u));
    /* 006288aa: mov bl, 0x83 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x83u) & 0xffu);
L_006288ac:; BB(0x006288ac);
    /* 006288ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006288ae: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006288b0: je 0x6288cb */ if (fZ) goto L_006288cb;
L_006288b2:; BB(0x006288b2);
    /* 006288b2: test byte ptr [eax + 0xc], bl */ {  u32 a = R8((u32)(r_eax+0xcu)); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006288b5: je 0x6288c1 */ if (fZ) goto L_006288c1;
L_006288b7:; BB(0x006288b7);
    /* 006288b7: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006288b8: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006288bb: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006288bd: jl 0x6288ac */ if ((fS!=fO)) goto L_006288ac;
L_006288bf:; BB(0x006288bf);
    /* 006288bf: jmp 0x6288f4 */ goto L_006288f4;
L_006288c1:; BB(0x006288c1);
    /* 006288c1: mov eax, dword ptr [0x7118a0] */ r_eax = R32((u32)(0x7118a0u));
    /* 006288c6: mov edi, dword ptr [eax + ecx*4] */ r_edi = R32((u32)(r_eax+r_ecx*4));
    /* 006288c9: jmp 0x6288f4 */ goto L_006288f4;
L_006288cb:; BB(0x006288cb);
    /* 006288cb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006288cd: lea esi, [ecx*4] */ r_esi = (u32)(r_ecx*4);
    /* 006288d4: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x6288d9u); f_00626230();
    /* 006288d9: mov ecx, dword ptr [0x7118a0] */ r_ecx = R32((u32)(0x7118a0u));
    /* 006288df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006288e2: mov dword ptr [ecx + esi], eax */ W32((u32)(r_ecx+r_esi), r_eax);
    /* 006288e5: mov edx, dword ptr [0x7118a0] */ r_edx = R32((u32)(0x7118a0u));
    /* 006288eb: mov esi, dword ptr [edx + esi] */ r_esi = R32((u32)(r_edx+r_esi));
    /* 006288ee: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006288f0: je 0x6288f4 */ if (fZ) goto L_006288f4;
L_006288f2:; BB(0x006288f2);
    /* 006288f2: mov edi, esi */ r_edi = r_esi;
L_006288f4:; BB(0x006288f4);
    /* 006288f4: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006288f6: je 0x62890d */ if (fZ) goto L_0062890d;
L_006288f8:; BB(0x006288f8);
    /* 006288f8: mov dword ptr [edi + 4], ebp */ W32((u32)(r_edi+0x4u), r_ebp);
    /* 006288fb: mov dword ptr [edi + 0xc], ebp */ W32((u32)(r_edi+0xcu), r_ebp);
    /* 006288fe: mov dword ptr [edi + 8], ebp */ W32((u32)(r_edi+0x8u), r_ebp);
    /* 00628901: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 00628903: mov dword ptr [edi + 0x1c], ebp */ W32((u32)(r_edi+0x1cu), r_ebp);
    /* 00628906: mov dword ptr [edi + 0x10], 0xffffffff */ W32((u32)(r_edi+0x10u), 0xffffffffu);
L_0062890d:; BB(0x0062890d);
    /* 0062890d: mov eax, edi */ r_eax = r_edi;
    /* 0062890f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628910: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628911: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628913: ret  */ FN_RET(0x00628890); r_esp += 4; return;
}

void f_00628920(void) /* FUN_00628920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628920);
    /* 00628920: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628923: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628924: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 00628928: sub ebx, 0x76c */ {  u32 a = r_ebx; u32 b = 0x76cu; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0062892e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062892f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628930: cmp ebx, 0x46 */ {  u32 a = r_ebx; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628933: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628934: jl 0x6289f7 */ if ((fS!=fO)) goto L_006289f7;
L_0062893a:; BB(0x0062893a);
    /* 0062893a: cmp ebx, 0x8a */ {  u32 a = r_ebx; u32 b = 0x8au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628940: jg 0x6289f7 */ if ((!fZ&&fS==fO)) goto L_006289f7;
L_00628946:; BB(0x00628946);
    /* 00628946: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0062894a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0062894e: mov esi, dword ptr [edi*4 + 0x6f5004] */ r_esi = R32((u32)(r_edi*4+0x6f5004u));
    /* 00628955: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00628957: test bl, 3 */ {  u32 a = (u8)r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062895a: jne 0x628962 */ if (!fZ) goto L_00628962;
L_0062895c:; BB(0x0062895c);
    /* 0062895c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062895f: jle 0x628962 */ if ((fZ||fS!=fO)) goto L_00628962;
L_00628961:; BB(0x00628961);
    /* 00628961: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00628962:; BB(0x00628962);
    /* 00628962: call 0x628ce0 */ r_esp -= 4; W32(r_esp, 0x628967u); f_00628ce0();
    /* 00628967: lea eax, [ebx + ebx*8] */ r_eax = (u32)(r_ebx+r_ebx*8);
    /* 0062896a: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 0062896e: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00628972: lea ecx, [ebx + eax*8] */ r_ecx = (u32)(r_ebx+r_eax*8);
    /* 00628975: lea eax, [ebx - 1] */ r_eax = (u32)(r_ebx+0xffffffffu);
    /* 00628978: mov edx, ecx */ r_edx = r_ecx;
    /* 0062897a: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062897c: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0062897f: lea ecx, [edx + ecx*4] */ r_ecx = (u32)(r_edx+r_ecx*4);
    /* 00628982: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00628984: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00628988: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0062898c: lea edx, [eax + eax*2] */ r_edx = (u32)(r_eax+r_eax*2);
    /* 0062898f: lea eax, [ecx + edx*8] */ r_eax = (u32)(r_ecx+r_edx*8);
    /* 00628992: mov edx, eax */ r_edx = r_eax;
    /* 00628994: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00628997: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00628999: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0062899d: lea eax, [eax + edx*4] */ r_eax = (u32)(r_eax+r_edx*4);
    /* 006289a0: mov edx, eax */ r_edx = r_eax;
    /* 006289a2: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006289a5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006289a7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 006289ab: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006289ac: lea edx, [eax + edx*4] */ r_edx = (u32)(r_eax+r_edx*4);
    /* 006289af: mov eax, dword ptr [0x6f2570] */ r_eax = R32((u32)(0x6f2570u));
    /* 006289b4: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 006289b8: lea ebp, [edx + eax + 0x7c558180] */ r_ebp = (u32)(r_edx+r_eax+0x7c558180u);
    /* 006289bf: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006289c3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006289c6: je 0x6289e7 */ if (fZ) goto L_006289e7;
L_006289c8:; BB(0x006289c8);
    /* 006289c8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006289cb: jne 0x6289ed */ if (!fZ) goto L_006289ed;
L_006289cd:; BB(0x006289cd);
    /* 006289cd: mov eax, dword ptr [0x6f2574] */ r_eax = R32((u32)(0x6f2574u));
    /* 006289d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006289d4: je 0x6289ed */ if (fZ) goto L_006289ed;
L_006289d6:; BB(0x006289d6);
    /* 006289d6: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 006289da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006289db: call 0x628fb0 */ r_esp -= 4; W32(r_esp, 0x6289e0u); f_00628fb0();
    /* 006289e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006289e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006289e5: je 0x6289ed */ if (fZ) goto L_006289ed;
L_006289e7:; BB(0x006289e7);
    /* 006289e7: add ebp, dword ptr [0x6f2578] */ {  u32 a = r_ebp; u32 b = R32((u32)(0x6f2578u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_006289ed:; BB(0x006289ed);
    /* 006289ed: mov eax, ebp */ r_eax = r_ebp;
    /* 006289ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006289f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006289f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006289f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006289f3: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006289f6: ret  */ FN_RET(0x00628920); r_esp += 4; return;
L_006289f7:; BB(0x006289f7);
    /* 006289f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006289f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006289f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006289fa: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006289fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006289fe: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628a01: ret  */ FN_RET(0x00628920); r_esp += 4; return;
}

void f_00628a10(void) /* FUN_00628a10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628a10);
    /* 00628a10: mov eax, dword ptr [0x711350] */ r_eax = R32((u32)(0x711350u));
    /* 00628a15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628a16: mov ebx, dword ptr [0x6330b8] */ r_ebx = R32((u32)(0x6330b8u));
    /* 00628a1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628a1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628a1e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628a1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628a21: jne 0x628a6c */ if (!fZ) goto L_00628a6c;
L_00628a23:; BB(0x00628a23);
    /* 00628a23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a29: push 0x63d1c0 */ { u32 v = 0x63d1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a2e: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a35: call dword ptr [0x6330c0] */ { u32 t = R32((u32)(0x6330c0u)); r_esp -= 4; W32(r_esp, 0x628a3bu); call_ind(t); }
    /* 00628a3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628a3d: je 0x628a46 */ if (fZ) goto L_00628a46;
L_00628a3f:; BB(0x00628a3f);
    /* 00628a3f: mov eax, 1 */ r_eax = 0x1u;
    /* 00628a44: jmp 0x628a67 */ goto L_00628a67;
L_00628a46:; BB(0x00628a46);
    /* 00628a46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a4c: push 0x63d1bc */ { u32 v = 0x63d1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00628a51: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a58: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x628a5au); call_ind(t); }
    /* 00628a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628a5c: je 0x628c2e */ if (fZ) goto L_00628c2e;
L_00628a62:; BB(0x00628a62);
    /* 00628a62: mov eax, 2 */ r_eax = 0x2u;
L_00628a67:; BB(0x00628a67);
    /* 00628a67: mov dword ptr [0x711350], eax */ W32((u32)(0x711350u), r_eax);
L_00628a6c:; BB(0x00628a6c);
    /* 00628a6c: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00628a70: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00628a72: jle 0x628a8b */ if ((fZ||fS!=fO)) goto L_00628a8b;
L_00628a74:; BB(0x00628a74);
    /* 00628a74: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00628a78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628a79: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628a7a: call 0x631f80 */ r_esp -= 4; W32(r_esp, 0x628a7fu); f_00631f80();
    /* 00628a7f: mov esi, eax */ r_esi = r_eax;
    /* 00628a81: mov eax, dword ptr [0x711350] */ r_eax = R32((u32)(0x711350u));
    /* 00628a86: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628a89: jmp 0x628a8f */ goto L_00628a8f;
L_00628a8b:; BB(0x00628a8b);
    /* 00628a8b: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
L_00628a8f:; BB(0x00628a8f);
    /* 00628a8f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628a92: jne 0x628ab1 */ if (!fZ) goto L_00628ab1;
L_00628a94:; BB(0x00628a94);
    /* 00628a94: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00628a98: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00628a9c: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00628aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628aa1: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00628aa5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628aa6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628aa7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628aa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628aa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628aaa: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x628aacu); call_ind(t); }
    /* 00628aac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628aad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628aae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628aaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628ab0: ret  */ FN_RET(0x00628a10); r_esp += 4; return;
L_00628ab1:; BB(0x00628ab1);
    /* 00628ab1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628ab4: jne 0x628b97 */ if (!fZ) goto L_00628b97;
L_00628aba:; BB(0x00628aba);
    /* 00628aba: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00628abe: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 00628ac6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628ac8: jne 0x628ad6 */ if (!fZ) goto L_00628ad6;
L_00628aca:; BB(0x00628aca);
    /* 00628aca: mov ecx, dword ptr [0x711370] */ r_ecx = R32((u32)(0x711370u));
    /* 00628ad0: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00628ad4: mov ebp, ecx */ r_ebp = r_ecx;
L_00628ad6:; BB(0x00628ad6);
    /* 00628ad6: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00628ada: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628adc: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00628ade: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00628ae0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628ae2: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00628ae5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628ae6: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00628ae7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628ae8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628ae9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628aea: call dword ptr [0x6330cc] */ { u32 t = R32((u32)(0x6330ccu)); r_esp -= 4; W32(r_esp, 0x628af0u); call_ind(t); }
    /* 00628af0: mov edi, eax */ r_edi = r_eax;
    /* 00628af2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628af4: jne 0x628afb */ if (!fZ) goto L_00628afb;
L_00628af6:; BB(0x00628af6);
    /* 00628af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628af7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628af8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628af9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628afa: ret  */ FN_RET(0x00628a10); r_esp += 4; return;
L_00628afb:; BB(0x00628afb);
    /* 00628afb: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00628afe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628aff: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x628b04u); f_00626230();
    /* 00628b04: mov ebx, eax */ r_ebx = r_eax;
    /* 00628b06: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628b09: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628b0b: jne 0x628b12 */ if (!fZ) goto L_00628b12;
L_00628b0d:; BB(0x00628b0d);
    /* 00628b0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628b0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628b0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628b10: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628b11: ret  */ FN_RET(0x00628a10); r_esp += 4; return;
L_00628b12:; BB(0x00628b12);
    /* 00628b12: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00628b16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628b17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628b18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628b19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628b1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628b1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628b1d: call dword ptr [0x6330cc] */ { u32 t = R32((u32)(0x6330ccu)); r_esp -= 4; W32(r_esp, 0x628b23u); call_ind(t); }
    /* 00628b23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628b25: je 0x628c18 */ if (fZ) goto L_00628c18;
L_00628b2b:; BB(0x00628b2b);
    /* 00628b2b: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00628b2f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00628b33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628b37: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628b38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628b39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628b3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628b3b: call dword ptr [0x6330c0] */ { u32 t = R32((u32)(0x6330c0u)); r_esp -= 4; W32(r_esp, 0x628b41u); call_ind(t); }
    /* 00628b41: mov esi, eax */ r_esi = r_eax;
    /* 00628b43: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628b45: je 0x628c18 */ if (fZ) goto L_00628c18;
L_00628b4b:; BB(0x00628b4b);
    /* 00628b4b: test ebp, 0x400 */ {  u32 a = r_ebp; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628b51: je 0x628b9c */ if (fZ) goto L_00628b9c;
L_00628b53:; BB(0x00628b53);
    /* 00628b53: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00628b57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628b59: je 0x628b7f */ if (fZ) goto L_00628b7f;
L_00628b5b:; BB(0x00628b5b);
    /* 00628b5b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628b5d: jg 0x628c18 */ if ((!fZ&&fS==fO)) goto L_00628c18;
L_00628b63:; BB(0x00628b63);
    /* 00628b63: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00628b67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628b68: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00628b6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628b6d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628b6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628b6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628b70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628b71: call dword ptr [0x6330c0] */ { u32 t = R32((u32)(0x6330c0u)); r_esp -= 4; W32(r_esp, 0x628b77u); call_ind(t); }
    /* 00628b77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628b79: je 0x628c18 */ if (fZ) goto L_00628c18;
L_00628b7f:; BB(0x00628b7f);
    /* 00628b7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628b80: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x628b85u); f_006262e0();
    /* 00628b85: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00628b89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628b8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628b8d: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x628b92u); f_006262e0();
    /* 00628b92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628b95: mov eax, esi */ r_eax = r_esi;
L_00628b97:; BB(0x00628b97);
    /* 00628b97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628b98: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628b99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628b9a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628b9b: ret  */ FN_RET(0x00628a10); r_esp += 4; return;
L_00628b9c:; BB(0x00628b9c);
    /* 00628b9c: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00628b9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628ba0: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x628ba5u); f_00626230();
    /* 00628ba5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628ba8: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00628bac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628bae: je 0x628c18 */ if (fZ) goto L_00628c18;
L_00628bb0:; BB(0x00628bb0);
    /* 00628bb0: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00628bb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628bb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628bb6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628bb7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628bb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628bb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628bba: call dword ptr [0x6330c0] */ { u32 t = R32((u32)(0x6330c0u)); r_esp -= 4; W32(r_esp, 0x628bc0u); call_ind(t); }
    /* 00628bc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628bc2: je 0x628c18 */ if (fZ) goto L_00628c18;
L_00628bc4:; BB(0x00628bc4);
    /* 00628bc4: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00628bc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628bca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628bcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628bce: jne 0x628bf2 */ if (!fZ) goto L_00628bf2;
L_00628bd0:; BB(0x00628bd0);
    /* 00628bd0: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00628bd4: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00628bd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628bda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628bdc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628bdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628bde: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00628be3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628be4: call dword ptr [0x6330bc] */ { u32 t = R32((u32)(0x6330bcu)); r_esp -= 4; W32(r_esp, 0x628beau); call_ind(t); }
    /* 00628bea: mov esi, eax */ r_esi = r_eax;
    /* 00628bec: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628bee: je 0x628c18 */ if (fZ) goto L_00628c18;
L_00628bf0:; BB(0x00628bf0);
    /* 00628bf0: jmp 0x628b7f */ goto L_00628b7f;
L_00628bf2:; BB(0x00628bf2);
    /* 00628bf2: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00628bf6: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00628bfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628bfb: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00628bff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628c00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628c01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628c02: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00628c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628c08: call dword ptr [0x6330bc] */ { u32 t = R32((u32)(0x6330bcu)); r_esp -= 4; W32(r_esp, 0x628c0eu); call_ind(t); }
    /* 00628c0e: mov esi, eax */ r_esi = r_eax;
    /* 00628c10: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628c12: jne 0x628b7f */ if (!fZ) goto L_00628b7f;
L_00628c18:; BB(0x00628c18);
    /* 00628c18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628c19: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x628c1eu); f_006262e0();
    /* 00628c1e: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00628c22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628c25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628c26: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x628c2bu); f_006262e0();
    /* 00628c2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00628c2e:; BB(0x00628c2e);
    /* 00628c2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628c2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628c30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628c31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628c33: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628c34: ret  */ FN_RET(0x00628a10); r_esp += 4; return;
}

void f_00628c40(void) /* FUN_00628c40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628c40);
    /* 00628c40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628c41: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00628c45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628c46: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00628c49: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00628c4e: ja 0x628c65 */ if ((!fC&&!fZ)) goto L_00628c65;
L_00628c50:; BB(0x00628c50);
    /* 00628c50: mov edx, dword ptr [0x6f2358] */ r_edx = R32((u32)(0x6f2358u));
    /* 00628c56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628c58: mov ax, word ptr [edx + ecx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 00628c5c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00628c60: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00628c62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628c63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628c64: ret  */ FN_RET(0x00628c40); r_esp += 4; return;
L_00628c65:; BB(0x00628c65);
    /* 00628c65: mov esi, dword ptr [0x6f2358] */ r_esi = R32((u32)(0x6f2358u));
    /* 00628c6b: mov eax, ecx */ r_eax = r_ecx;
    /* 00628c6d: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00628c70: mov edx, eax */ r_edx = r_eax;
    /* 00628c72: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00628c78: test byte ptr [esi + edx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_esi+r_edx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00628c7d: je 0x628c93 */ if (fZ) goto L_00628c93;
L_00628c7f:; BB(0x00628c7f);
    /* 00628c7f: mov byte ptr [esp + 0xc], al */ W8((u32)(r_esp+0xcu), (u8)r_eax);
    /* 00628c83: mov byte ptr [esp + 0xd], cl */ W8((u32)(r_esp+0xdu), (u8)r_ecx);
    /* 00628c87: mov byte ptr [esp + 0xe], 0 */ W8((u32)(r_esp+0xeu), 0x0u);
    /* 00628c8c: mov eax, 2 */ r_eax = 0x2u;
    /* 00628c91: jmp 0x628ca1 */ goto L_00628ca1;
L_00628c93:; BB(0x00628c93);
    /* 00628c93: mov byte ptr [esp + 0xc], cl */ W8((u32)(r_esp+0xcu), (u8)r_ecx);
    /* 00628c97: mov byte ptr [esp + 0xd], 0 */ W8((u32)(r_esp+0xdu), 0x0u);
    /* 00628c9c: mov eax, 1 */ r_eax = 0x1u;
L_00628ca1:; BB(0x00628ca1);
    /* 00628ca1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628ca3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628ca5: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00628ca9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628cab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628cac: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00628cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628cb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628cb2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628cb4: call 0x62ff00 */ r_esp -= 4; W32(r_esp, 0x628cb9u); f_0062ff00();
    /* 00628cb9: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628cbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628cbe: jne 0x628cc3 */ if (!fZ) goto L_00628cc3;
L_00628cc0:; BB(0x00628cc0);
    /* 00628cc0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628cc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628cc2: ret  */ FN_RET(0x00628c40); r_esp += 4; return;
L_00628cc3:; BB(0x00628cc3);
    /* 00628cc3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00628cc7: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00628ccb: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00628cd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628cd1: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00628cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628cd4: ret  */ FN_RET(0x00628c40); r_esp += 4; return;
}

void f_00628ce0(void) /* FUN_00628ce0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628ce0);
    /* 00628ce0: mov eax, dword ptr [0x711430] */ r_eax = R32((u32)(0x711430u));
    /* 00628ce5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628ce7: jne 0x628cf4 */ if (!fZ) goto L_00628cf4;
L_00628ce9:; BB(0x00628ce9);
    /* 00628ce9: call 0x628d00 */ r_esp -= 4; W32(r_esp, 0x628ceeu); f_00628d00();
    /* 00628cee: inc dword ptr [0x711430] */ { u32 ad = (u32)(0x711430u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00628cf4:; BB(0x00628cf4);
    /* 00628cf4: ret  */ FN_RET(0x00628ce0); r_esp += 4; return;
}

void f_00628d00(void) /* FUN_00628d00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628d00);
    /* 00628d00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628d01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628d02: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628d03: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628d04: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00628d06: push 0x63d208 */ { u32 v = 0x63d208u; r_esp -= 4; W32(r_esp, v); }
    /* 00628d0b: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00628d0f: mov dword ptr [0x711378], esi */ W32((u32)(0x711378u), r_esi);
    /* 00628d15: mov dword ptr [0x6f2618], 0xffffffff */ W32((u32)(0x6f2618u), 0xffffffffu);
    /* 00628d1f: mov dword ptr [0x6f2608], 0xffffffff */ W32((u32)(0x6f2608u), 0xffffffffu);
    /* 00628d29: call 0x630270 */ r_esp -= 4; W32(r_esp, 0x628d2eu); f_00630270();
    /* 00628d2e: mov ebp, eax */ r_ebp = r_eax;
    /* 00628d30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628d33: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628d35: jne 0x628e07 */ if (!fZ) goto L_00628e07;
L_00628d3b:; BB(0x00628d3b);
    /* 00628d3b: push 0x711380 */ { u32 v = 0x711380u; r_esp -= 4; W32(r_esp, v); }
    /* 00628d40: call dword ptr [0x6330fc] */ { u32 t = R32((u32)(0x6330fcu)); r_esp -= 4; W32(r_esp, 0x628d46u); call_ind(t); }
    /* 00628d46: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628d49: je 0x628fa6 */ if (fZ) goto L_00628fa6;
L_00628d4f:; BB(0x00628d4f);
    /* 00628d4f: mov eax, dword ptr [0x711380] */ r_eax = R32((u32)(0x711380u));
    /* 00628d54: mov ecx, dword ptr [0x7113d4] */ r_ecx = R32((u32)(0x7113d4u));
    /* 00628d5a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00628d5c: mov esi, 1 */ r_esi = 0x1u;
    /* 00628d61: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 00628d64: mov dword ptr [0x711378], esi */ W32((u32)(0x711378u), r_esi);
    /* 00628d6a: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00628d6d: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00628d70: cmp word ptr [0x7113c6], di */ {  u32 a = R16((u32)(0x7113c6u)); u32 b = (u16)r_edi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00628d77: mov dword ptr [0x6f2570], eax */ W32((u32)(0x6f2570u), r_eax);
    /* 00628d7c: je 0x628d8c */ if (fZ) goto L_00628d8c;
L_00628d7e:; BB(0x00628d7e);
    /* 00628d7e: lea edx, [ecx + ecx*2] */ r_edx = (u32)(r_ecx+r_ecx*2);
    /* 00628d81: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 00628d84: lea eax, [eax + edx*4] */ r_eax = (u32)(r_eax+r_edx*4);
    /* 00628d87: mov dword ptr [0x6f2570], eax */ W32((u32)(0x6f2570u), r_eax);
L_00628d8c:; BB(0x00628d8c);
    /* 00628d8c: cmp word ptr [0x71141a], di */ {  u32 a = R16((u32)(0x71141au)); u32 b = (u16)r_edi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00628d93: je 0x628db7 */ if (fZ) goto L_00628db7;
L_00628d95:; BB(0x00628d95);
    /* 00628d95: mov eax, dword ptr [0x711428] */ r_eax = R32((u32)(0x711428u));
    /* 00628d9a: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628d9c: je 0x628db7 */ if (fZ) goto L_00628db7;
L_00628d9e:; BB(0x00628d9e);
    /* 00628d9e: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00628da0: mov dword ptr [0x6f2574], esi */ W32((u32)(0x6f2574u), r_esi);
    /* 00628da6: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 00628da9: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 00628dac: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00628daf: mov dword ptr [0x6f2578], ecx */ W32((u32)(0x6f2578u), r_ecx);
    /* 00628db5: jmp 0x628dc3 */ goto L_00628dc3;
L_00628db7:; BB(0x00628db7);
    /* 00628db7: mov dword ptr [0x6f2574], edi */ W32((u32)(0x6f2574u), r_edi);
    /* 00628dbd: mov dword ptr [0x6f2578], edi */ W32((u32)(0x6f2578u), r_edi);
L_00628dc3:; BB(0x00628dc3);
    /* 00628dc3: mov edx, dword ptr [0x6f2600] */ r_edx = R32((u32)(0x6f2600u));
    /* 00628dc9: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00628dcb: push 0x711384 */ { u32 v = 0x711384u; r_esp -= 4; W32(r_esp, v); }
    /* 00628dd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628dd1: call 0x630040 */ r_esp -= 4; W32(r_esp, 0x628dd6u); f_00630040();
    /* 00628dd6: mov eax, dword ptr [0x6f2604] */ r_eax = R32((u32)(0x6f2604u));
    /* 00628ddb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628dde: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00628de0: push 0x7113d8 */ { u32 v = 0x7113d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00628de5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628de6: call 0x630040 */ r_esp -= 4; W32(r_esp, 0x628debu); f_00630040();
    /* 00628deb: mov ecx, dword ptr [0x6f2604] */ r_ecx = R32((u32)(0x6f2604u));
    /* 00628df1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628df4: mov byte ptr [ecx + 0x3f], 0 */ W8((u32)(r_ecx+0x3fu), 0x0u);
    /* 00628df8: mov edx, dword ptr [0x6f2600] */ r_edx = R32((u32)(0x6f2600u));
    /* 00628dfe: mov byte ptr [edx + 0x3f], 0 */ W8((u32)(r_edx+0x3fu), 0x0u);
    /* 00628e02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628e03: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628e04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628e05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628e06: ret  */ FN_RET(0x00628d00); r_esp += 4; return;
L_00628e07:; BB(0x00628e07);
    /* 00628e07: cmp byte ptr [ebp], 0 */ {  u32 a = R8((u32)(r_ebp)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00628e0b: je 0x628fa6 */ if (fZ) goto L_00628fa6;
L_00628e11:; BB(0x00628e11);
    /* 00628e11: mov edi, dword ptr [0x71142c] */ r_edi = R32((u32)(0x71142cu));
    /* 00628e17: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628e19: je 0x628e50 */ if (fZ) goto L_00628e50;
L_00628e1b:; BB(0x00628e1b);
    /* 00628e1b: mov esi, edi */ r_esi = r_edi;
    /* 00628e1d: mov eax, ebp */ r_eax = r_ebp;
L_00628e1f:; BB(0x00628e1f);
    /* 00628e1f: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00628e21: mov cl, dl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 00628e23: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00628e25: jne 0x628e43 */ if (!fZ) goto L_00628e43;
L_00628e27:; BB(0x00628e27);
    /* 00628e27: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00628e29: je 0x628e3f */ if (fZ) goto L_00628e3f;
L_00628e2b:; BB(0x00628e2b);
    /* 00628e2b: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00628e2e: mov cl, dl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 00628e30: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00628e33: jne 0x628e43 */ if (!fZ) goto L_00628e43;
L_00628e35:; BB(0x00628e35);
    /* 00628e35: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00628e38: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00628e3b: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00628e3d: jne 0x628e1f */ if (!fZ) goto L_00628e1f;
L_00628e3f:; BB(0x00628e3f);
    /* 00628e3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628e41: jmp 0x628e48 */ goto L_00628e48;
L_00628e43:; BB(0x00628e43);
    /* 00628e43: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fC = ((u64)a < (u64)b + c); }
    /* 00628e45: sbb eax, -1 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
L_00628e48:; BB(0x00628e48);
    /* 00628e48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628e4a: je 0x628fa6 */ if (fZ) goto L_00628fa6;
L_00628e50:; BB(0x00628e50);
    /* 00628e50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628e51: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x628e56u); f_006262e0();
    /* 00628e56: mov edi, ebp */ r_edi = r_ebp;
    /* 00628e58: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00628e5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628e5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628e60: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 00628e62: not ecx */ r_ecx = ~r_ecx;
    /* 00628e64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628e65: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x628e6au); f_00626230();
    /* 00628e6a: mov edx, eax */ r_edx = r_eax;
    /* 00628e6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628e6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628e71: mov dword ptr [0x71142c], edx */ W32((u32)(0x71142cu), r_edx);
    /* 00628e77: je 0x628fa6 */ if (fZ) goto L_00628fa6;
L_00628e7d:; BB(0x00628e7d);
    /* 00628e7d: mov edi, ebp */ r_edi = r_ebp;
    /* 00628e7f: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00628e82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628e84: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00628e86: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 00628e88: not ecx */ r_ecx = ~r_ecx;
    /* 00628e8a: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00628e8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628e8d: mov eax, ecx */ r_eax = r_ecx;
    /* 00628e8f: mov esi, edi */ r_esi = r_edi;
    /* 00628e91: mov edi, edx */ r_edi = r_edx;
    /* 00628e93: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00628e96: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00628e98: mov ecx, eax */ r_ecx = r_eax;
    /* 00628e9a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00628e9d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00628e9f: mov ecx, dword ptr [0x6f2600] */ r_ecx = R32((u32)(0x6f2600u));
    /* 00628ea5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628ea6: call 0x6264f0 */ r_esp -= 4; W32(r_esp, 0x628eabu); f_006264f0();
    /* 00628eab: mov edx, dword ptr [0x6f2600] */ r_edx = R32((u32)(0x6f2600u));
    /* 00628eb1: add ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00628eb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628eb7: mov byte ptr [edx + 3], 0 */ W8((u32)(r_edx+0x3u), 0x0u);
    /* 00628ebb: mov al, byte ptr [ebp] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 00628ebe: cmp al, 0x2d */ {  u32 a = (u8)r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00628ec0: jne 0x628eca */ if (!fZ) goto L_00628eca;
L_00628ec2:; BB(0x00628ec2);
    /* 00628ec2: mov esi, 1 */ r_esi = 0x1u;
    /* 00628ec7: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00628ec8: jmp 0x628ece */ goto L_00628ece;
L_00628eca:; BB(0x00628eca);
    /* 00628eca: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_00628ece:; BB(0x00628ece);
    /* 00628ece: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628ecf: call 0x625390 */ r_esp -= 4; W32(r_esp, 0x628ed4u); f_00625390();
    /* 00628ed4: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00628ed7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628eda: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00628edd: lea ecx, [eax + eax*8] */ r_ecx = (u32)(r_eax+r_eax*8);
    /* 00628ee0: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00628ee3: mov dword ptr [0x6f2570], ecx */ W32((u32)(0x6f2570u), r_ecx);
L_00628ee9:; BB(0x00628ee9);
    /* 00628ee9: mov al, byte ptr [ebp] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 00628eec: cmp al, 0x2b */ {  u32 a = (u8)r_eax; u32 b = 0x2bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00628eee: je 0x628ef8 */ if (fZ) goto L_00628ef8;
L_00628ef0:; BB(0x00628ef0);
    /* 00628ef0: cmp al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00628ef2: jl 0x628efb */ if ((fS!=fO)) goto L_00628efb;
L_00628ef4:; BB(0x00628ef4);
    /* 00628ef4: cmp al, 0x39 */ {  u32 a = (u8)r_eax; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00628ef6: jg 0x628efb */ if ((!fZ&&fS==fO)) goto L_00628efb;
L_00628ef8:; BB(0x00628ef8);
    /* 00628ef8: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00628ef9: jmp 0x628ee9 */ goto L_00628ee9;
L_00628efb:; BB(0x00628efb);
    /* 00628efb: cmp byte ptr [ebp], 0x3a */ {  u32 a = R8((u32)(r_ebp)); u32 b = 0x3au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00628eff: jne 0x628f64 */ if (!fZ) goto L_00628f64;
L_00628f01:; BB(0x00628f01);
    /* 00628f01: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00628f02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628f03: call 0x625390 */ r_esp -= 4; W32(r_esp, 0x628f08u); f_00625390();
    /* 00628f08: mov ecx, dword ptr [0x6f2570] */ r_ecx = R32((u32)(0x6f2570u));
    /* 00628f0e: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 00628f11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628f14: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00628f17: lea ecx, [ecx + eax*4] */ r_ecx = (u32)(r_ecx+r_eax*4);
    /* 00628f1a: mov dword ptr [0x6f2570], ecx */ W32((u32)(0x6f2570u), r_ecx);
    /* 00628f20: mov al, byte ptr [ebp] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 00628f23: cmp al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00628f25: jl 0x628f33 */ if ((fS!=fO)) goto L_00628f33;
L_00628f27:; BB(0x00628f27);
    /* 00628f27: cmp al, 0x39 */ {  u32 a = (u8)r_eax; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00628f29: jg 0x628f33 */ if ((!fZ&&fS==fO)) goto L_00628f33;
L_00628f2b:; BB(0x00628f2b);
    /* 00628f2b: mov al, byte ptr [ebp + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x1u))) & 0xffu);
    /* 00628f2e: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00628f2f: cmp al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00628f31: jge 0x628f27 */ if ((fS==fO)) goto L_00628f27;
L_00628f33:; BB(0x00628f33);
    /* 00628f33: cmp byte ptr [ebp], 0x3a */ {  u32 a = R8((u32)(r_ebp)); u32 b = 0x3au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00628f37: jne 0x628f64 */ if (!fZ) goto L_00628f64;
L_00628f39:; BB(0x00628f39);
    /* 00628f39: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00628f3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628f3b: call 0x625390 */ r_esp -= 4; W32(r_esp, 0x628f40u); f_00625390();
    /* 00628f40: mov ecx, dword ptr [0x6f2570] */ r_ecx = R32((u32)(0x6f2570u));
    /* 00628f46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628f49: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628f4b: mov dword ptr [0x6f2570], ecx */ W32((u32)(0x6f2570u), r_ecx);
    /* 00628f51: mov al, byte ptr [ebp] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 00628f54: cmp al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00628f56: jl 0x628f64 */ if ((fS!=fO)) goto L_00628f64;
L_00628f58:; BB(0x00628f58);
    /* 00628f58: cmp al, 0x39 */ {  u32 a = (u8)r_eax; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00628f5a: jg 0x628f64 */ if ((!fZ&&fS==fO)) goto L_00628f64;
L_00628f5c:; BB(0x00628f5c);
    /* 00628f5c: mov al, byte ptr [ebp + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x1u))) & 0xffu);
    /* 00628f5f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00628f60: cmp al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00628f62: jge 0x628f58 */ if ((fS==fO)) goto L_00628f58;
L_00628f64:; BB(0x00628f64);
    /* 00628f64: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628f66: je 0x628f70 */ if (fZ) goto L_00628f70;
L_00628f68:; BB(0x00628f68);
    /* 00628f68: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00628f6a: mov dword ptr [0x6f2570], ecx */ W32((u32)(0x6f2570u), r_ecx);
L_00628f70:; BB(0x00628f70);
    /* 00628f70: movsx eax, byte ptr [ebp] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp));
    /* 00628f74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628f76: mov dword ptr [0x6f2574], eax */ W32((u32)(0x6f2574u), r_eax);
    /* 00628f7b: je 0x628f9d */ if (fZ) goto L_00628f9d;
L_00628f7d:; BB(0x00628f7d);
    /* 00628f7d: mov edx, dword ptr [0x6f2604] */ r_edx = R32((u32)(0x6f2604u));
    /* 00628f83: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00628f85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628f86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628f87: call 0x6264f0 */ r_esp -= 4; W32(r_esp, 0x628f8cu); f_006264f0();
    /* 00628f8c: mov eax, dword ptr [0x6f2604] */ r_eax = R32((u32)(0x6f2604u));
    /* 00628f91: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628f94: mov byte ptr [eax + 3], 0 */ W8((u32)(r_eax+0x3u), 0x0u);
    /* 00628f98: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628f99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628f9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628f9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628f9c: ret  */ FN_RET(0x00628d00); r_esp += 4; return;
L_00628f9d:; BB(0x00628f9d);
    /* 00628f9d: mov ecx, dword ptr [0x6f2604] */ r_ecx = R32((u32)(0x6f2604u));
    /* 00628fa3: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
L_00628fa6:; BB(0x00628fa6);
    /* 00628fa6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628fa7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628fa8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628fa9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628faa: ret  */ FN_RET(0x00628d00); r_esp += 4; return;
}

void f_00628fb0(void) /* FUN_00628fb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628fb0);
    /* 00628fb0: mov eax, dword ptr [0x6f2574] */ r_eax = R32((u32)(0x6f2574u));
    /* 00628fb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628fb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628fb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628fb9: jne 0x628fc0 */ if (!fZ) goto L_00628fc0;
L_00628fbb:; BB(0x00628fbb);
    /* 00628fbb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628fbd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628fbe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628fbf: ret  */ FN_RET(0x00628fb0); r_esp += 4; return;
L_00628fc0:; BB(0x00628fc0);
    /* 00628fc0: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00628fc4: mov ecx, dword ptr [0x6f2608] */ r_ecx = R32((u32)(0x6f2608u));
    /* 00628fca: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00628fcd: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628fcf: jne 0x628fdd */ if (!fZ) goto L_00628fdd;
L_00628fd1:; BB(0x00628fd1);
    /* 00628fd1: cmp eax, dword ptr [0x6f2618] */ {  u32 a = r_eax; u32 b = R32((u32)(0x6f2618u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628fd7: je 0x629184 */ if (fZ) goto L_00629184;
L_00628fdd:; BB(0x00628fdd);
    /* 00628fdd: mov ecx, dword ptr [0x711378] */ r_ecx = R32((u32)(0x711378u));
    /* 00628fe3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628fe5: je 0x629147 */ if (fZ) goto L_00629147;
L_00628feb:; BB(0x00628feb);
    /* 00628feb: cmp word ptr [0x711418], 0 */ {  u32 a = R16((u32)(0x711418u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00628ff3: jne 0x62904b */ if (!fZ) goto L_0062904b;
L_00628ff5:; BB(0x00628ff5);
    /* 00628ff5: mov edx, dword ptr [0x711424] */ r_edx = R32((u32)(0x711424u));
    /* 00628ffb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00628ffd: mov cx, word ptr [0x711426] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x711426u))) & 0xffffu);
    /* 00629004: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062900a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062900b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062900d: mov cx, word ptr [0x711422] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x711422u))) & 0xffffu);
    /* 00629014: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629015: mov edx, dword ptr [0x711420] */ r_edx = R32((u32)(0x711420u));
    /* 0062901b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062901c: mov ecx, dword ptr [0x71141c] */ r_ecx = R32((u32)(0x71141cu));
    /* 00629022: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00629028: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629029: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062902f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629031: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629032: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00629034: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00629036: mov dx, word ptr [0x71141e] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x71141eu))) & 0xffffu);
    /* 0062903d: mov cx, word ptr [0x71141a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x71141au))) & 0xffffu);
    /* 00629044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629045: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629047: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00629049: jmp 0x629094 */ goto L_00629094;
L_0062904b:; BB(0x0062904b);
    /* 0062904b: mov ecx, dword ptr [0x711424] */ r_ecx = R32((u32)(0x711424u));
    /* 00629051: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00629053: mov dx, word ptr [0x711426] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x711426u))) & 0xffffu);
    /* 0062905a: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629060: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629061: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00629063: mov dx, word ptr [0x711422] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x711422u))) & 0xffffu);
    /* 0062906a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062906b: mov ecx, dword ptr [0x711420] */ r_ecx = R32((u32)(0x711420u));
    /* 00629071: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629072: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629078: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062907a: mov dx, word ptr [0x71141e] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x71141eu))) & 0xffffu);
    /* 00629081: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629082: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00629084: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629085: mov cx, word ptr [0x71141a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x71141au))) & 0xffffu);
    /* 0062908c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062908e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629090: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629091: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629092: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
L_00629094:; BB(0x00629094);
    /* 00629094: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00629096: call 0x629220 */ r_esp -= 4; W32(r_esp, 0x62909bu); f_00629220();
    /* 0062909b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062909e: cmp word ptr [0x7113c4], 0 */ {  u32 a = R16((u32)(0x7113c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 006290a6: jne 0x6290fb */ if (!fZ) goto L_006290fb;
L_006290a8:; BB(0x006290a8);
    /* 006290a8: mov eax, dword ptr [0x7113d0] */ r_eax = R32((u32)(0x7113d0u));
    /* 006290ad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006290af: mov dx, word ptr [0x7113d2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x7113d2u))) & 0xffffu);
    /* 006290b6: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006290bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006290bc: mov edx, dword ptr [0x7113cc] */ r_edx = R32((u32)(0x7113ccu));
    /* 006290c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006290c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006290c5: mov cx, word ptr [0x7113ce] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x7113ceu))) & 0xffffu);
    /* 006290cc: mov eax, dword ptr [0x7113c8] */ r_eax = R32((u32)(0x7113c8u));
    /* 006290d1: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006290d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006290d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006290d9: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006290de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006290e0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006290e2: mov cx, word ptr [0x7113ca] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x7113cau))) & 0xffffu);
    /* 006290e9: mov dx, word ptr [0x7113c6] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x7113c6u))) & 0xffffu);
    /* 006290f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006290f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006290f3: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 006290f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006290f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006290f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006290f9: jmp 0x629178 */ goto L_00629178;
L_006290fb:; BB(0x006290fb);
    /* 006290fb: mov edx, dword ptr [0x7113d0] */ r_edx = R32((u32)(0x7113d0u));
    /* 00629101: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00629103: mov cx, word ptr [0x7113d2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x7113d2u))) & 0xffffu);
    /* 0062910a: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00629110: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629111: mov ecx, dword ptr [0x7113cc] */ r_ecx = R32((u32)(0x7113ccu));
    /* 00629117: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629119: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062911a: mov ax, word ptr [0x7113ce] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x7113ceu))) & 0xffffu);
    /* 00629120: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00629122: mov dx, word ptr [0x7113ca] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x7113cau))) & 0xffffu);
    /* 00629129: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062912f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629130: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629131: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 00629134: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629136: mov ax, word ptr [0x7113c6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x7113c6u))) & 0xffffu);
    /* 0062913c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062913d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062913f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629141: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629142: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629143: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629145: jmp 0x62917a */ goto L_0062917a;
L_00629147:; BB(0x00629147);
    /* 00629147: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629149: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062914b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062914d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062914f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629151: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629153: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00629155: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00629157: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629158: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062915a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062915c: call 0x629220 */ r_esp -= 4; W32(r_esp, 0x629161u); f_00629220();
    /* 00629161: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629164: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 00629167: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629169: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062916b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062916d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062916f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629171: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629173: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00629175: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00629177: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
L_00629178:; BB(0x00629178);
    /* 00629178: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
L_0062917a:; BB(0x0062917a);
    /* 0062917a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062917c: call 0x629220 */ r_esp -= 4; W32(r_esp, 0x629181u); f_00629220();
    /* 00629181: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00629184:; BB(0x00629184);
    /* 00629184: mov edx, dword ptr [0x6f260c] */ r_edx = R32((u32)(0x6f260cu));
    /* 0062918a: mov eax, dword ptr [0x6f261c] */ r_eax = R32((u32)(0x6f261cu));
    /* 0062918f: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00629192: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00629194: jge 0x6291ae */ if ((fS==fO)) goto L_006291ae;
L_00629196:; BB(0x00629196);
    /* 00629196: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00629198: jl 0x6291be */ if ((fS!=fO)) goto L_006291be;
L_0062919a:; BB(0x0062919a);
    /* 0062919a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062919c: jg 0x6291be */ if ((!fZ&&fS==fO)) goto L_006291be;
L_0062919e:; BB(0x0062919e);
    /* 0062919e: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006291a0: jle 0x6291c3 */ if ((fZ||fS!=fO)) goto L_006291c3;
L_006291a2:; BB(0x006291a2);
    /* 006291a2: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006291a4: jge 0x6291c3 */ if ((fS==fO)) goto L_006291c3;
L_006291a6:; BB(0x006291a6);
    /* 006291a6: mov eax, 1 */ r_eax = 0x1u;
    /* 006291ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006291ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006291ad: ret  */ FN_RET(0x00628fb0); r_esp += 4; return;
L_006291ae:; BB(0x006291ae);
    /* 006291ae: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006291b0: jl 0x629211 */ if ((fS!=fO)) goto L_00629211;
L_006291b2:; BB(0x006291b2);
    /* 006291b2: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006291b4: jg 0x629211 */ if ((!fZ&&fS==fO)) goto L_00629211;
L_006291b6:; BB(0x006291b6);
    /* 006291b6: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006291b8: jle 0x6291c3 */ if ((fZ||fS!=fO)) goto L_006291c3;
L_006291ba:; BB(0x006291ba);
    /* 006291ba: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006291bc: jge 0x6291c3 */ if ((fS==fO)) goto L_006291c3;
L_006291be:; BB(0x006291be);
    /* 006291be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006291c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006291c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006291c2: ret  */ FN_RET(0x00628fb0); r_esp += 4; return;
L_006291c3:; BB(0x006291c3);
    /* 006291c3: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006291c6: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 006291c9: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 006291cb: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 006291ce: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006291d1: lea eax, [edi + eax*4] */ r_eax = (u32)(r_edi+r_eax*4);
    /* 006291d4: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 006291d7: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006291da: lea eax, [esi + eax*4] */ r_eax = (u32)(r_esi+r_eax*4);
    /* 006291dd: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006291e0: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006291e3: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006291e6: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006291e9: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006291eb: jne 0x6291ff */ if (!fZ) goto L_006291ff;
L_006291ed:; BB(0x006291ed);
    /* 006291ed: mov edx, dword ptr [0x6f2610] */ r_edx = R32((u32)(0x6f2610u));
    /* 006291f3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006291f5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006291f7: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 006291fa: mov eax, ecx */ r_eax = r_ecx;
    /* 006291fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006291fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006291fe: ret  */ FN_RET(0x00628fb0); r_esp += 4; return;
L_006291ff:; BB(0x006291ff);
    /* 006291ff: mov ecx, dword ptr [0x6f2620] */ r_ecx = R32((u32)(0x6f2620u));
    /* 00629205: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00629207: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00629209: setl dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0062920c: mov eax, edx */ r_eax = r_edx;
    /* 0062920e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062920f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629210: ret  */ FN_RET(0x00628fb0); r_esp += 4; return;
L_00629211:; BB(0x00629211);
    /* 00629211: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629212: mov eax, 1 */ r_eax = 0x1u;
    /* 00629217: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629218: ret  */ FN_RET(0x00628fb0); r_esp += 4; return;
}

void f_00629220(void) /* FUN_00629220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629220);
    /* 00629220: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00629224: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629225: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00629229: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062922a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062922b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062922e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062922f: jne 0x6292d5 */ if (!fZ) goto L_006292d5;
L_00629235:; BB(0x00629235);
    /* 00629235: mov eax, ebx */ r_eax = r_ebx;
    /* 00629237: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062923a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062923e: jne 0x629253 */ if (!fZ) goto L_00629253;
L_00629240:; BB(0x00629240);
    /* 00629240: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00629244: lea edi, [eax*4] */ r_edi = (u32)(r_eax*4);
    /* 0062924b: mov eax, dword ptr [edi + 0x6f4fcc] */ r_eax = R32((u32)(r_edi+0x6f4fccu));
    /* 00629251: jmp 0x629264 */ goto L_00629264;
L_00629253:; BB(0x00629253);
    /* 00629253: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00629257: lea edi, [ecx*4] */ r_edi = (u32)(r_ecx*4);
    /* 0062925e: mov eax, dword ptr [edi + 0x6f5004] */ r_eax = R32((u32)(r_edi+0x6f5004u));
L_00629264:; BB(0x00629264);
    /* 00629264: lea edx, [ebx + ebx*8] */ r_edx = (u32)(r_ebx+r_ebx*8);
    /* 00629267: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 0062926a: lea esi, [ebx - 1] */ r_esi = (u32)(r_ebx+0xffffffffu);
    /* 0062926d: lea eax, [ebx + edx*8] */ r_eax = (u32)(r_ebx+r_edx*8);
    /* 00629270: mov edx, eax */ r_edx = r_eax;
    /* 00629272: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00629274: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00629277: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 0062927a: lea eax, [esi + eax - 0x63db] */ r_eax = (u32)(r_esi+r_eax+0xffff9c25u);
    /* 00629281: mov esi, 7 */ r_esi = 0x7u;
    /* 00629286: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00629287: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x00629287, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00629287, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00629289: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0062928d: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00629291: mov ebp, eax */ r_ebp = r_eax;
    /* 00629293: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00629295: jge 0x6292a6 */ if ((fS==fO)) goto L_006292a6;
L_00629297:; BB(0x00629297);
    /* 00629297: shl ebp, 3 */ { u32 c = (3u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0062929a: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0062929c: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0062929e: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006292a0: lea ecx, [ecx + ebp - 7] */ r_ecx = (u32)(r_ecx+r_ebp+0xfffffff9u);
    /* 006292a4: jmp 0x6292b1 */ goto L_006292b1;
L_006292a6:; BB(0x006292a6);
    /* 006292a6: shl ebp, 3 */ { u32 c = (3u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 006292a9: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006292ab: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006292ad: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006292af: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006292b1:; BB(0x006292b1);
    /* 006292b1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006292b4: jne 0x6292f6 */ if (!fZ) goto L_006292f6;
L_006292b6:; BB(0x006292b6);
    /* 006292b6: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006292ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006292bc: jne 0x6292c6 */ if (!fZ) goto L_006292c6;
L_006292be:; BB(0x006292be);
    /* 006292be: mov edi, dword ptr [edi + 0x6f4fd0] */ r_edi = R32((u32)(r_edi+0x6f4fd0u));
    /* 006292c4: jmp 0x6292cc */ goto L_006292cc;
L_006292c6:; BB(0x006292c6);
    /* 006292c6: mov edi, dword ptr [edi + 0x6f5008] */ r_edi = R32((u32)(r_edi+0x6f5008u));
L_006292cc:; BB(0x006292cc);
    /* 006292cc: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006292ce: jle 0x6292f6 */ if ((fZ||fS!=fO)) goto L_006292f6;
L_006292d0:; BB(0x006292d0);
    /* 006292d0: sub ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006292d3: jmp 0x6292f6 */ goto L_006292f6;
L_006292d5:; BB(0x006292d5);
    /* 006292d5: test bl, 3 */ {  u32 a = (u8)r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006292d8: jne 0x6292e7 */ if (!fZ) goto L_006292e7;
L_006292da:; BB(0x006292da);
    /* 006292da: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006292de: mov ecx, dword ptr [ecx*4 + 0x6f4fcc] */ r_ecx = R32((u32)(r_ecx*4+0x6f4fccu));
    /* 006292e5: jmp 0x6292f2 */ goto L_006292f2;
L_006292e7:; BB(0x006292e7);
    /* 006292e7: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006292eb: mov ecx, dword ptr [edx*4 + 0x6f5004] */ r_ecx = R32((u32)(r_edx*4+0x6f5004u));
L_006292f2:; BB(0x006292f2);
    /* 006292f2: add ecx, dword ptr [esp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006292f6:; BB(0x006292f6);
    /* 006292f6: cmp dword ptr [esp + 0x14], 1 */ {  u32 a = R32((u32)(r_esp+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006292fb: jne 0x629344 */ if (!fZ) goto L_00629344;
L_006292fd:; BB(0x006292fd);
    /* 006292fd: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00629301: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00629305: mov dword ptr [0x6f260c], ecx */ W32((u32)(0x6f260cu), r_ecx);
    /* 0062930b: mov ecx, eax */ r_ecx = r_eax;
    /* 0062930d: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00629310: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00629312: mov dword ptr [0x6f2608], ebx */ W32((u32)(0x6f2608u), r_ebx);
    /* 00629318: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 0062931b: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0062931f: mov ecx, eax */ r_ecx = r_eax;
    /* 00629321: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00629324: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00629326: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 00629329: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0062932d: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00629330: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00629333: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00629336: lea edx, [ecx + eax*8] */ r_edx = (u32)(r_ecx+r_eax*8);
    /* 00629339: mov dword ptr [0x6f2610], edx */ W32((u32)(0x6f2610u), r_edx);
    /* 0062933f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629340: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629341: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629342: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629343: ret  */ FN_RET(0x00629220); r_esp += 4; return;
L_00629344:; BB(0x00629344);
    /* 00629344: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00629348: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0062934c: mov dword ptr [0x6f261c], ecx */ W32((u32)(0x6f261cu), r_ecx);
    /* 00629352: mov ecx, eax */ r_ecx = r_eax;
    /* 00629354: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00629357: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00629359: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 0062935c: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00629360: mov ecx, eax */ r_ecx = r_eax;
    /* 00629362: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00629365: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00629367: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 0062936a: mov edx, dword ptr [0x6f2578] */ r_edx = R32((u32)(0x6f2578u));
    /* 00629370: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00629372: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00629376: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00629379: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0062937c: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0062937f: lea eax, [ecx + eax*8] */ r_eax = (u32)(r_ecx+r_eax*8);
    /* 00629382: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00629384: mov dword ptr [0x6f2620], eax */ W32((u32)(0x6f2620u), r_eax);
    /* 00629389: jge 0x6293a0 */ if ((fS==fO)) goto L_006293a0;
L_0062938b:; BB(0x0062938b);
    /* 0062938b: add eax, 0x5265bff */ {  u32 a = r_eax; u32 b = 0x5265bffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00629390: mov dword ptr [0x6f2618], ebx */ W32((u32)(0x6f2618u), r_ebx);
    /* 00629396: mov dword ptr [0x6f2620], eax */ W32((u32)(0x6f2620u), r_eax);
    /* 0062939b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062939c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062939d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062939e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062939f: ret  */ FN_RET(0x00629220); r_esp += 4; return;
L_006293a0:; BB(0x006293a0);
    /* 006293a0: cmp eax, 0x5265c00 */ {  u32 a = r_eax; u32 b = 0x5265c00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006293a5: jl 0x6293b1 */ if ((fS!=fO)) goto L_006293b1;
L_006293a7:; BB(0x006293a7);
    /* 006293a7: sub eax, 0x5265bff */ {  u32 a = r_eax; u32 b = 0x5265bffu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006293ac: mov dword ptr [0x6f2620], eax */ W32((u32)(0x6f2620u), r_eax);
L_006293b1:; BB(0x006293b1);
    /* 006293b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006293b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006293b3: mov dword ptr [0x6f2618], ebx */ W32((u32)(0x6f2618u), r_ebx);
    /* 006293b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006293ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006293bb: ret  */ FN_RET(0x00629220); r_esp += 4; return;
}

void f_006293c0(void) /* FUN_006293c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006293c0);
    /* 006293c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006293c1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006293c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006293c6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006293c8: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 006293ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006293cc: jge 0x6293d3 */ if ((fS==fO)) goto L_006293d3;
L_006293ce:; BB(0x006293ce);
    /* 006293ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006293d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006293d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006293d2: ret  */ FN_RET(0x006293c0); r_esp += 4; return;
L_006293d3:; BB(0x006293d3);
    /* 006293d3: mov eax, 0x11032d79 */ r_eax = 0x11032d79u;
    /* 006293d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006293d9: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006293db: sar edx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006293de: mov eax, edx */ r_eax = r_edx;
    /* 006293e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006293e1: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006293e4: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006293e6: mov eax, edx */ r_eax = r_edx;
    /* 006293e8: imul eax, eax, 0xf879e080 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf879e080u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006293ee: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006293f0: lea eax, [edx*4 + 0x46] */ r_eax = (u32)(r_edx*4+0x46u);
    /* 006293f7: cmp ecx, 0x1e13380 */ {  u32 a = r_ecx; u32 b = 0x1e13380u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006293fd: jl 0x62942b */ if ((fS!=fO)) goto L_0062942b;
L_006293ff:; BB(0x006293ff);
    /* 006293ff: sub ecx, 0x1e13380 */ {  u32 a = r_ecx; u32 b = 0x1e13380u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00629405: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00629406: cmp ecx, 0x1e13380 */ {  u32 a = r_ecx; u32 b = 0x1e13380u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062940c: jl 0x62942b */ if ((fS!=fO)) goto L_0062942b;
L_0062940e:; BB(0x0062940e);
    /* 0062940e: sub ecx, 0x1e13380 */ {  u32 a = r_ecx; u32 b = 0x1e13380u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00629414: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00629415: cmp ecx, 0x1e28500 */ {  u32 a = r_ecx; u32 b = 0x1e28500u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062941b: jl 0x629426 */ if ((fS!=fO)) goto L_00629426;
L_0062941d:; BB(0x0062941d);
    /* 0062941d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062941e: sub ecx, 0x1e28500 */ {  u32 a = r_ecx; u32 b = 0x1e28500u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00629424: jmp 0x62942b */ goto L_0062942b;
L_00629426:; BB(0x00629426);
    /* 00629426: mov esi, 1 */ r_esi = 0x1u;
L_0062942b:; BB(0x0062942b);
    /* 0062942b: mov dword ptr [0x71144c], eax */ W32((u32)(0x71144cu), r_eax);
    /* 00629430: mov eax, 0xc22e4507 */ r_eax = 0xc22e4507u;
    /* 00629435: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00629437: mov eax, edx */ r_eax = r_edx;
    /* 00629439: mov edi, 0x6f4fd0 */ r_edi = 0x6f4fd0u;
    /* 0062943e: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00629440: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00629443: mov edx, eax */ r_edx = r_eax;
    /* 00629445: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00629448: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062944a: mov edx, eax */ r_edx = r_eax;
    /* 0062944c: mov dword ptr [0x711454], eax */ W32((u32)(0x711454u), r_eax);
    /* 00629451: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00629454: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00629456: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00629458: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0062945b: lea edx, [edx + edx*8] */ r_edx = (u32)(r_edx+r_edx*8);
    /* 0062945e: shl edx, 7 */ { u32 c = (7u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00629461: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00629463: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629465: jne 0x62946c */ if (!fZ) goto L_0062946c;
L_00629467:; BB(0x00629467);
    /* 00629467: mov edi, 0x6f5008 */ r_edi = 0x6f5008u;
L_0062946c:; BB(0x0062946c);
    /* 0062946c: mov ebp, dword ptr [edi + 4] */ r_ebp = R32((u32)(r_edi+0x4u));
    /* 0062946f: lea esi, [edi + 4] */ r_esi = (u32)(r_edi+0x4u);
    /* 00629472: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00629474: mov edx, 1 */ r_edx = 0x1u;
    /* 00629479: jge 0x629486 */ if ((fS==fO)) goto L_00629486;
L_0062947b:; BB(0x0062947b);
    /* 0062947b: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 0062947e: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00629481: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00629482: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00629484: jl 0x62947b */ if ((fS!=fO)) goto L_0062947b;
L_00629486:; BB(0x00629486);
    /* 00629486: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00629487: mov dword ptr [0x711448], edx */ W32((u32)(0x711448u), r_edx);
    /* 0062948d: mov ebp, dword ptr [edi + edx*4] */ r_ebp = R32((u32)(r_edi+r_edx*4));
    /* 00629490: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00629492: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629493: mov dword ptr [0x711444], eax */ W32((u32)(0x711444u), r_eax);
    /* 00629498: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0062949a: mov eax, 0xc22e4507 */ r_eax = 0xc22e4507u;
    /* 0062949f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006294a0: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006294a2: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006294a4: mov esi, 7 */ r_esi = 0x7u;
    /* 006294a9: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006294ac: mov eax, edx */ r_eax = r_edx;
    /* 006294ae: mov dword ptr [0x711458], 0 */ W32((u32)(0x711458u), 0x0u);
    /* 006294b8: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006294bb: lea eax, [edx + eax + 4] */ r_eax = (u32)(r_edx+r_eax+0x4u);
    /* 006294bf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006294c0: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x006294c0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006294c0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006294c2: mov eax, 0x91a2b3c5 */ r_eax = 0x91a2b3c5u;
    /* 006294c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006294c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006294c9: mov dword ptr [0x711450], edx */ W32((u32)(0x711450u), r_edx);
    /* 006294cf: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006294d1: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006294d3: sar edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006294d6: mov eax, edx */ r_eax = r_edx;
    /* 006294d8: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006294db: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006294dd: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 006294e2: mov dword ptr [0x711440], edx */ W32((u32)(0x711440u), r_edx);
    /* 006294e8: imul edx, edx, 0xfffff1f0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xfffff1f0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006294ee: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006294f0: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006294f2: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006294f4: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006294f7: mov eax, edx */ r_eax = r_edx;
    /* 006294f9: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006294fc: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006294fe: mov dword ptr [0x71143c], edx */ W32((u32)(0x71143cu), r_edx);
    /* 00629504: lea eax, [edx + edx*2] */ r_eax = (u32)(r_edx+r_edx*2);
    /* 00629507: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0062950a: mov eax, 0x711438 */ r_eax = 0x711438u;
    /* 0062950f: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00629512: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00629514: mov dword ptr [0x711438], ecx */ W32((u32)(0x711438u), r_ecx);
    /* 0062951a: ret  */ FN_RET(0x006293c0); r_esp += 4; return;
}

void f_00629520(void) /* FUN_00629520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629520);
    /* 00629520: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629523: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629524: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629525: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00629526: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00629527: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0062952b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062952d: jne 0x629544 */ if (!fZ) goto L_00629544;
L_0062952f:; BB(0x0062952f);
    /* 0062952f: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00629533: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629534: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x629539u); f_00626230();
    /* 00629539: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062953c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062953d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062953e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062953f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629540: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629543: ret  */ FN_RET(0x00629520); r_esp += 4; return;
L_00629544:; BB(0x00629544);
    /* 00629544: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00629548: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062954a: jne 0x62955f */ if (!fZ) goto L_0062955f;
L_0062954c:; BB(0x0062954c);
    /* 0062954c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062954d: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x629552u); f_006262e0();
    /* 00629552: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629555: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629557: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629558: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629559: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062955a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062955b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062955e: ret  */ FN_RET(0x00629520); r_esp += 4; return;
L_0062955f:; BB(0x0062955f);
    /* 0062955f: cmp ebp, -0x20 */ {  u32 a = r_ebp; u32 b = 0xffffffe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00629562: ja 0x62957b */ if ((!fC&&!fZ)) goto L_0062957b;
L_00629564:; BB(0x00629564);
    /* 00629564: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00629566: jbe 0x629570 */ if ((fC||fZ)) goto L_00629570;
L_00629568:; BB(0x00629568);
    /* 00629568: add ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0062956b: and ebp, 0xfffffff0 */ {  u32 a = r_ebp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0062956e: jmp 0x62957b */ goto L_0062957b;
L_00629570:; BB(0x00629570);
    /* 00629570: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 00629575: jmp 0x62957b */ goto L_0062957b;
L_00629577:; BB(0x00629577);
    /* 00629577: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
L_0062957b:; BB(0x0062957b);
    /* 0062957b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0062957d: cmp ebp, -0x20 */ {  u32 a = r_ebp; u32 b = 0xffffffe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00629580: ja 0x62968a */ if ((!fC&&!fZ)) goto L_0062968a;
L_00629586:; BB(0x00629586);
    /* 00629586: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0062958a: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0062958e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062958f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629590: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00629591: call 0x62ba90 */ r_esp -= 4; W32(r_esp, 0x629596u); f_0062ba90();
    /* 00629596: mov esi, eax */ r_esi = r_eax;
    /* 00629598: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062959b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062959d: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 006295a1: je 0x629678 */ if (fZ) goto L_00629678;
L_006295a7:; BB(0x006295a7);
    /* 006295a7: cmp ebp, dword ptr [0x6f48f4] */ {  u32 a = r_ebp; u32 b = R32((u32)(0x6f48f4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006295ad: jae 0x62961f */ if (!fC) goto L_0062961f;
L_006295af:; BB(0x006295af);
    /* 006295af: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006295b3: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006295b7: mov edi, ebp */ r_edi = r_ebp;
    /* 006295b9: shr edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 006295bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006295bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006295be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006295bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006295c0: call 0x62bf10 */ r_esp -= 4; W32(r_esp, 0x6295c5u); f_0062bf10();
    /* 006295c5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006295c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006295ca: je 0x6295d2 */ if (fZ) goto L_006295d2;
L_006295cc:; BB(0x006295cc);
    /* 006295cc: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 006295d0: jmp 0x62961f */ goto L_0062961f;
L_006295d2:; BB(0x006295d2);
    /* 006295d2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006295d3: call 0x62bb50 */ r_esp -= 4; W32(r_esp, 0x6295d8u); f_0062bb50();
    /* 006295d8: mov ebx, eax */ r_ebx = r_eax;
    /* 006295da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006295dd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006295df: je 0x629627 */ if (fZ) goto L_00629627;
L_006295e1:; BB(0x006295e1);
    /* 006295e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006295e3: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 006295e5: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006295e8: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006295ea: jb 0x6295ee */ if (fC) goto L_006295ee;
L_006295ec:; BB(0x006295ec);
    /* 006295ec: mov eax, ebp */ r_eax = r_ebp;
L_006295ee:; BB(0x006295ee);
    /* 006295ee: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 006295f2: mov ecx, eax */ r_ecx = r_eax;
    /* 006295f4: mov edx, ecx */ r_edx = r_ecx;
    /* 006295f6: mov edi, ebx */ r_edi = r_ebx;
    /* 006295f8: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006295fb: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006295fd: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00629601: mov ecx, edx */ r_ecx = r_edx;
    /* 00629603: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629607: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00629609: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0062960d: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00629611: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629612: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629613: call 0x62baf0 */ r_esp -= 4; W32(r_esp, 0x629618u); f_0062baf0();
    /* 00629618: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0062961c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062961f:; BB(0x0062961f);
    /* 0062961f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629621: jne 0x6296b0 */ if (!fZ) goto L_006296b0;
L_00629627:; BB(0x00629627);
    /* 00629627: mov eax, dword ptr [0x7129e4] */ r_eax = R32((u32)(0x7129e4u));
    /* 0062962c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062962d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062962f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629630: call dword ptr [0x6330dc] */ { u32 t = R32((u32)(0x6330dcu)); r_esp -= 4; W32(r_esp, 0x629636u); call_ind(t); }
    /* 00629636: mov ebx, eax */ r_ebx = r_eax;
    /* 00629638: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062963a: je 0x62968e */ if (fZ) goto L_0062968e;
L_0062963c:; BB(0x0062963c);
    /* 0062963c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062963e: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00629640: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00629643: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00629645: jb 0x629649 */ if (fC) goto L_00629649;
L_00629647:; BB(0x00629647);
    /* 00629647: mov eax, ebp */ r_eax = r_ebp;
L_00629649:; BB(0x00629649);
    /* 00629649: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0062964d: mov ecx, eax */ r_ecx = r_eax;
    /* 0062964f: mov edx, ecx */ r_edx = r_ecx;
    /* 00629651: mov edi, ebx */ r_edi = r_ebx;
    /* 00629653: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00629656: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00629658: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0062965c: mov ecx, edx */ r_ecx = r_edx;
    /* 0062965e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629662: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00629664: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00629668: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0062966c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062966d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062966e: call 0x62baf0 */ r_esp -= 4; W32(r_esp, 0x629673u); f_0062baf0();
    /* 00629673: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629676: jmp 0x62968a */ goto L_0062968a;
L_00629678:; BB(0x00629678);
    /* 00629678: mov eax, dword ptr [0x7129e4] */ r_eax = R32((u32)(0x7129e4u));
    /* 0062967d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062967e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062967f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629682: call dword ptr [0x6330b0] */ { u32 t = R32((u32)(0x6330b0u)); r_esp -= 4; W32(r_esp, 0x629688u); call_ind(t); }
    /* 00629688: mov ebx, eax */ r_ebx = r_eax;
L_0062968a:; BB(0x0062968a);
    /* 0062968a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062968c: jne 0x6296b0 */ if (!fZ) goto L_006296b0;
L_0062968e:; BB(0x0062968e);
    /* 0062968e: mov eax, dword ptr [0x7114a8] */ r_eax = R32((u32)(0x7114a8u));
    /* 00629693: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629695: je 0x6296b0 */ if (fZ) goto L_006296b0;
L_00629697:; BB(0x00629697);
    /* 00629697: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629698: call 0x62b790 */ r_esp -= 4; W32(r_esp, 0x62969du); f_0062b790();
    /* 0062969d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006296a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006296a2: jne 0x629577 */ if (!fZ) goto L_00629577;
L_006296a8:; BB(0x006296a8);
    /* 006296a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006296a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006296aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006296ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006296ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006296af: ret  */ FN_RET(0x00629520); r_esp += 4; return;
L_006296b0:; BB(0x006296b0);
    /* 006296b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006296b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006296b2: mov eax, ebx */ r_eax = r_ebx;
    /* 006296b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006296b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006296b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006296b9: ret  */ FN_RET(0x00629520); r_esp += 4; return;
}

void f_006296c0(void) /* FUN_006296c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006296c0);
    /* 006296c0: mov eax, dword ptr [0x6f2218] */ r_eax = R32((u32)(0x6f2218u));
    /* 006296c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006296c7: je 0x6296cb */ if (fZ) goto L_006296cb;
L_006296c9:; BB(0x006296c9);
    /* 006296c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6296cbu); call_ind(t); }
L_006296cb:; BB(0x006296cb);
    /* 006296cb: push 0x64c37c */ { u32 v = 0x64c37cu; r_esp -= 4; W32(r_esp, v); }
    /* 006296d0: push 0x64c36c */ { u32 v = 0x64c36cu; r_esp -= 4; W32(r_esp, v); }
    /* 006296d5: call 0x6297e0 */ r_esp -= 4; W32(r_esp, 0x6296dau); f_006297e0();
    /* 006296da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006296dd: push 0x64c368 */ { u32 v = 0x64c368u; r_esp -= 4; W32(r_esp, v); }
    /* 006296e2: push 0x64c000 */ { u32 v = 0x64c000u; r_esp -= 4; W32(r_esp, v); }
    /* 006296e7: call 0x6297e0 */ r_esp -= 4; W32(r_esp, 0x6296ecu); f_006297e0();
    /* 006296ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006296ef: ret  */ FN_RET(0x006296c0); r_esp += 4; return;
}

void f_006296f0(void) /* FUN_006296f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006296f0);
    /* 006296f0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006296f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006296f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006296f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006296f9: call 0x629730 */ r_esp -= 4; W32(r_esp, 0x6296feu); f_00629730();
    /* 006296fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629701: ret  */ FN_RET(0x006296f0); r_esp += 4; return;
}

void f_00629730(void) /* FUN_00629730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629730);
    /* 00629730: mov eax, dword ptr [0x7114a4] */ r_eax = R32((u32)(0x7114a4u));
    /* 00629735: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629736: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629737: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0062973b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062973e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062973f: jne 0x62974f */ if (!fZ) goto L_0062974f;
L_00629741:; BB(0x00629741);
    /* 00629741: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629742: call dword ptr [0x6330b4] */ { u32 t = R32((u32)(0x6330b4u)); r_esp -= 4; W32(r_esp, 0x629748u); call_ind(t); }
    /* 00629748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629749: call dword ptr [0x6330ac] */ { u32 t = R32((u32)(0x6330acu)); r_esp -= 4; W32(r_esp, 0x62974fu); call_ind(t); }
L_0062974f:; BB(0x0062974f);
    /* 0062974f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629753: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00629757: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629759: mov dword ptr [0x7114a0], 1 */ W32((u32)(0x7114a0u), 0x1u);
    /* 00629763: mov byte ptr [0x71149c], bl */ W8((u32)(0x71149cu), (u8)r_ebx);
    /* 00629769: jne 0x6297a9 */ if (!fZ) goto L_006297a9;
L_0062976b:; BB(0x0062976b);
    /* 0062976b: mov ecx, dword ptr [0x7129ec] */ r_ecx = R32((u32)(0x7129ecu));
    /* 00629771: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629773: je 0x629797 */ if (fZ) goto L_00629797;
L_00629775:; BB(0x00629775);
    /* 00629775: mov esi, dword ptr [0x7129e8] */ r_esi = R32((u32)(0x7129e8u));
    /* 0062977b: sub esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062977e: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00629780: jb 0x629797 */ if (fC) goto L_00629797;
L_00629782:; BB(0x00629782);
    /* 00629782: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00629784: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629786: je 0x629790 */ if (fZ) goto L_00629790;
L_00629788:; BB(0x00629788);
    /* 00629788: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62978au); call_ind(t); }
    /* 0062978a: mov ecx, dword ptr [0x7129ec] */ r_ecx = R32((u32)(0x7129ecu));
L_00629790:; BB(0x00629790);
    /* 00629790: sub esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00629793: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00629795: jae 0x629782 */ if (!fC) goto L_00629782;
L_00629797:; BB(0x00629797);
    /* 00629797: push 0x64c388 */ { u32 v = 0x64c388u; r_esp -= 4; W32(r_esp, v); }
    /* 0062979c: push 0x64c380 */ { u32 v = 0x64c380u; r_esp -= 4; W32(r_esp, v); }
    /* 006297a1: call 0x6297e0 */ r_esp -= 4; W32(r_esp, 0x6297a6u); f_006297e0();
    /* 006297a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006297a9:; BB(0x006297a9);
    /* 006297a9: push 0x64c394 */ { u32 v = 0x64c394u; r_esp -= 4; W32(r_esp, v); }
    /* 006297ae: push 0x64c38c */ { u32 v = 0x64c38cu; r_esp -= 4; W32(r_esp, v); }
    /* 006297b3: call 0x6297e0 */ r_esp -= 4; W32(r_esp, 0x6297b8u); f_006297e0();
    /* 006297b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006297bb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006297bd: jne 0x6297d0 */ if (!fZ) goto L_006297d0;
L_006297bf:; BB(0x006297bf);
    /* 006297bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006297c0: mov dword ptr [0x7114a4], 1 */ W32((u32)(0x7114a4u), 0x1u);
    /* 006297ca: call dword ptr [0x6330c4] */ { u32 t = R32((u32)(0x6330c4u)); r_esp -= 4; W32(r_esp, 0x6297d0u); call_ind(t); }
L_006297d0:; BB(0x006297d0);
    /* 006297d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006297d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006297d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006297d3: ret  */ FN_RET(0x00629730); r_esp += 4; return;
}

void f_006297e0(void) /* FUN_006297e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006297e0);
    /* 006297e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006297e1: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006297e5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006297e6: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006297ea: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006297ec: jae 0x6297fd */ if (!fC) goto L_006297fd;
L_006297ee:; BB(0x006297ee);
    /* 006297ee: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006297f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006297f2: je 0x6297f6 */ if (fZ) goto L_006297f6;
L_006297f4:; BB(0x006297f4);
    /* 006297f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6297f6u); call_ind(t); }
L_006297f6:; BB(0x006297f6);
    /* 006297f6: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006297f9: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006297fb: jb 0x6297ee */ if (fC) goto L_006297ee;
L_006297fd:; BB(0x006297fd);
    /* 006297fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006297fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006297ff: ret  */ FN_RET(0x006297e0); r_esp += 4; return;
}

void f_00629800(void) /* FUN_00629800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629800);
    /* 00629800: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629801: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00629805: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00629806: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0062980a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0062980e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062980f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629810: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00629811: call 0x62ba90 */ r_esp -= 4; W32(r_esp, 0x629816u); f_0062ba90();
    /* 00629816: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629819: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062981b: je 0x629829 */ if (fZ) goto L_00629829;
L_0062981d:; BB(0x0062981d);
    /* 0062981d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062981f: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00629821: mov eax, edx */ r_eax = r_edx;
    /* 00629823: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00629826: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629827: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629828: ret  */ FN_RET(0x00629800); r_esp += 4; return;
L_00629829:; BB(0x00629829);
    /* 00629829: mov eax, dword ptr [0x7129e4] */ r_eax = R32((u32)(0x7129e4u));
    /* 0062982e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062982f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629831: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629832: call dword ptr [0x6330a4] */ { u32 t = R32((u32)(0x6330a4u)); r_esp -= 4; W32(r_esp, 0x629838u); call_ind(t); }
    /* 00629838: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629839: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062983a: ret  */ FN_RET(0x00629800); r_esp += 4; return;
}

void f_00629840(void) /* FUN_00629840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629840);
    /* 00629840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629841: mov ebp, esp */ r_ebp = r_esp;
    /* 00629843: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629846: fld qword ptr [ebp + 8] */ FPUSH(R_F64((u32)(r_ebp+0x8u)));
    /* 00629849: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0062984b: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0062984e: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 00629851: mov esp, ebp */ r_esp = r_ebp;
    /* 00629853: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629854: ret  */ FN_RET(0x00629840); r_esp += 4; return;
}

void f_00629860(void) /* FUN_00629860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629860);
    /* 00629860: mov eax, dword ptr [0x6f503c] */ r_eax = R32((u32)(0x6f503cu));
    /* 00629865: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629867: jne 0x62988e */ if (!fZ) goto L_0062988e;
L_00629869:; BB(0x00629869);
    /* 00629869: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062986d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00629871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629872: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00629876: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629877: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629878: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062987a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062987c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062987d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062987e: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00629882: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629883: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00629885: call 0x629fe0 */ r_esp -= 4; W32(r_esp, 0x62988au); f_00629fe0();
    /* 0062988a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062988d: ret  */ FN_RET(0x00629860); r_esp += 4; return;
L_0062988e:; BB(0x0062988e);
    /* 0062988e: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00629892: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629897: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629898: mov dword ptr [0x71145c], 0x21 */ W32((u32)(0x71145cu), 0x21u);
    /* 006298a2: call 0x62a310 */ r_esp -= 4; W32(r_esp, 0x6298a7u); f_0062a310();
    /* 006298a7: fld qword ptr [esp + 0x10] */ FPUSH(R_F64((u32)(r_esp+0x10u)));
    /* 006298ab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006298ae: ret  */ FN_RET(0x00629860); r_esp += 4; return;
}

void f_006298b0(void) /* FUN_006298b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006298b0);
    /* 006298b0: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006298b4: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006298b7: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 006298bb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006298bc: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 006298c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006298c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006298c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006298c3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006298c4: call 0x629cb0 */ r_esp -= 4; W32(r_esp, 0x6298c9u); f_00629cb0();
    /* 006298c9: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
    /* 006298cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006298d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006298d2: jne 0x629900 */ if (!fZ) goto L_00629900;
L_006298d4:; BB(0x006298d4);
    /* 006298d4: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 006298d8: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 006298dc: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006298df: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 006298e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006298e4: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 006298e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006298e9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006298ea: lea ecx, [esp + 0x88] */ r_ecx = (u32)(r_esp+0x88u);
    /* 006298f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006298f2: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 006298f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006298f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006298f8: call 0x629970 */ r_esp -= 4; W32(r_esp, 0x6298fdu); f_00629970();
    /* 006298fd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00629900:; BB(0x00629900);
    /* 00629900: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00629901: call 0x62a0f0 */ r_esp -= 4; W32(r_esp, 0x629906u); f_0062a0f0();
    /* 00629906: mov ecx, dword ptr [0x6f503c] */ r_ecx = R32((u32)(0x6f503cu));
    /* 0062990c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062990f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629911: jne 0x629944 */ if (!fZ) goto L_00629944;
L_00629913:; BB(0x00629913);
    /* 00629913: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629915: je 0x629944 */ if (fZ) goto L_00629944;
L_00629917:; BB(0x00629917);
    /* 00629917: mov ecx, dword ptr [esp + 0x7c] */ r_ecx = R32((u32)(r_esp+0x7cu));
    /* 0062991b: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 0062991f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629920: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 00629924: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629925: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 00629929: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062992a: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 0062992e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629930: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629932: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629934: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00629935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629936: call 0x629fe0 */ r_esp -= 4; W32(r_esp, 0x62993bu); f_00629fe0();
    /* 0062993b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062993e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062993f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629940: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629943: ret  */ FN_RET(0x006298b0); r_esp += 4; return;
L_00629944:; BB(0x00629944);
    /* 00629944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629945: call 0x62a090 */ r_esp -= 4; W32(r_esp, 0x62994au); f_0062a090();
    /* 0062994a: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00629951: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629954: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629959: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062995a: call 0x62a310 */ r_esp -= 4; W32(r_esp, 0x62995fu); f_0062a310();
    /* 0062995f: fld qword ptr [esp + 0x7c] */ FPUSH(R_F64((u32)(r_esp+0x7cu)));
    /* 00629963: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629966: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629967: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629968: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062996b: ret  */ FN_RET(0x006298b0); r_esp += 4; return;
}

void f_00629970(void) /* FUN_00629970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629970);
    /* 00629970: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00629974: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629975: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629976: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00629977: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00629978: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0062997a: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 0062997d: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00629981: mov al, byte ptr [esp + 0x1c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x1cu))) & 0xffu);
    /* 00629985: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0062998a: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 0062998d: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00629991: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629993: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 00629996: je 0x6299a6 */ if (fZ) goto L_006299a6;
L_00629998:; BB(0x00629998);
    /* 00629998: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0062999c: mov ebp, 0xc000008f */ r_ebp = 0xc000008fu;
    /* 006299a1: or dword ptr [ecx + 4], ebx */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 006299a4: jmp 0x6299aa */ goto L_006299aa;
L_006299a6:; BB(0x006299a6);
    /* 006299a6: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
L_006299aa:; BB(0x006299aa);
    /* 006299aa: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006299ac: je 0x6299bb */ if (fZ) goto L_006299bb;
L_006299ae:; BB(0x006299ae);
    /* 006299ae: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006299b2: mov ebp, 0xc0000093 */ r_ebp = 0xc0000093u;
    /* 006299b7: or dword ptr [ecx + 4], 2 */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_006299bb:; BB(0x006299bb);
    /* 006299bb: test bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006299bd: je 0x6299cc */ if (fZ) goto L_006299cc;
L_006299bf:; BB(0x006299bf);
    /* 006299bf: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006299c3: mov ebp, 0xc0000091 */ r_ebp = 0xc0000091u;
    /* 006299c8: or dword ptr [ecx + 4], 4 */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_006299cc:; BB(0x006299cc);
    /* 006299cc: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006299ce: je 0x6299dd */ if (fZ) goto L_006299dd;
L_006299d0:; BB(0x006299d0);
    /* 006299d0: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006299d4: mov ebp, 0xc000008e */ r_ebp = 0xc000008eu;
    /* 006299d9: or dword ptr [ecx + 4], 8 */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_006299dd:; BB(0x006299dd);
    /* 006299dd: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006299df: je 0x6299ee */ if (fZ) goto L_006299ee;
L_006299e1:; BB(0x006299e1);
    /* 006299e1: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006299e5: mov ebp, 0xc0000090 */ r_ebp = 0xc0000090u;
    /* 006299ea: or dword ptr [eax + 4], 0x10 */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_006299ee:; BB(0x006299ee);
    /* 006299ee: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 006299f2: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006299f6: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 006299f8: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006299fb: not ecx */ r_ecx = ~r_ecx;
    /* 006299fd: and ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006299ff: and edx, 0xffffffef */ {  u32 a = r_edx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00629a02: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00629a05: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00629a07: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00629a0a: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00629a0c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629a10: not ecx */ r_ecx = ~r_ecx;
    /* 00629a12: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00629a15: and ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629a18: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00629a1a: and edx, 0xfffffff7 */ {  u32 a = r_edx; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00629a1d: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00629a1f: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00629a22: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00629a24: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629a28: not ecx */ r_ecx = ~r_ecx;
    /* 00629a2a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00629a2d: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00629a2f: and ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629a32: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00629a35: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00629a37: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00629a3a: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00629a3c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629a40: not ecx */ r_ecx = ~r_ecx;
    /* 00629a42: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00629a45: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00629a48: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629a4b: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00629a4e: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00629a50: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00629a53: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00629a55: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629a59: not ecx */ r_ecx = ~r_ecx;
    /* 00629a5b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00629a5e: shr ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00629a61: and ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629a63: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00629a66: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00629a68: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00629a6b: call 0x62a2e0 */ r_esp -= 4; W32(r_esp, 0x629a70u); f_0062a2e0();
    /* 00629a70: test bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629a72: je 0x629a7c */ if (fZ) goto L_00629a7c;
L_00629a74:; BB(0x00629a74);
    /* 00629a74: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00629a78: or dword ptr [ecx + 0xc], 0x10 */ { u32 ad = (u32)(r_ecx+0xcu);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00629a7c:; BB(0x00629a7c);
    /* 00629a7c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629a7e: je 0x629a88 */ if (fZ) goto L_00629a88;
L_00629a80:; BB(0x00629a80);
    /* 00629a80: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00629a84: or dword ptr [ecx + 0xc], 8 */ { u32 ad = (u32)(r_ecx+0xcu);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00629a88:; BB(0x00629a88);
    /* 00629a88: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629a8a: je 0x629a94 */ if (fZ) goto L_00629a94;
L_00629a8c:; BB(0x00629a8c);
    /* 00629a8c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00629a90: or dword ptr [ecx + 0xc], 4 */ { u32 ad = (u32)(r_ecx+0xcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00629a94:; BB(0x00629a94);
    /* 00629a94: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629a96: je 0x629aa0 */ if (fZ) goto L_00629aa0;
L_00629a98:; BB(0x00629a98);
    /* 00629a98: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00629a9c: or dword ptr [ecx + 0xc], 2 */ { u32 ad = (u32)(r_ecx+0xcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00629aa0:; BB(0x00629aa0);
    /* 00629aa0: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629aa2: je 0x629aab */ if (fZ) goto L_00629aab;
L_00629aa4:; BB(0x00629aa4);
    /* 00629aa4: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629aa8: or dword ptr [eax + 0xc], ebx */ { u32 ad = (u32)(r_eax+0xcu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00629aab:; BB(0x00629aab);
    /* 00629aab: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00629aad: and eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00629ab2: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00629ab7: ja 0x629ad7 */ if ((!fC&&!fZ)) goto L_00629ad7;
L_00629ab9:; BB(0x00629ab9);
    /* 00629ab9: je 0x629ac8 */ if (fZ) goto L_00629ac8;
L_00629abb:; BB(0x00629abb);
    /* 00629abb: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629abd: jne 0x629afc */ if (!fZ) goto L_00629afc;
L_00629abf:; BB(0x00629abf);
    /* 00629abf: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629ac3: and dword ptr [eax], 0xfffffffc */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00629ac6: jmp 0x629afc */ goto L_00629afc;
L_00629ac8:; BB(0x00629ac8);
    /* 00629ac8: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629acc: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00629ace: and ecx, 0xfffffffd */ {  u32 a = r_ecx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629ad1: or ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00629ad3: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00629ad5: jmp 0x629afc */ goto L_00629afc;
L_00629ad7:; BB(0x00629ad7);
    /* 00629ad7: cmp eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629adc: je 0x629aee */ if (fZ) goto L_00629aee;
L_00629ade:; BB(0x00629ade);
    /* 00629ade: cmp eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629ae3: jne 0x629afc */ if (!fZ) goto L_00629afc;
L_00629ae5:; BB(0x00629ae5);
    /* 00629ae5: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629ae9: or dword ptr [eax], 3 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00629aec: jmp 0x629afc */ goto L_00629afc;
L_00629aee:; BB(0x00629aee);
    /* 00629aee: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629af2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00629af4: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00629af7: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00629afa: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00629afc:; BB(0x00629afc);
    /* 00629afc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00629afe: and eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00629b03: je 0x629b2c */ if (fZ) goto L_00629b2c;
L_00629b05:; BB(0x00629b05);
    /* 00629b05: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629b0a: je 0x629b1c */ if (fZ) goto L_00629b1c;
L_00629b0c:; BB(0x00629b0c);
    /* 00629b0c: cmp eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629b11: jne 0x629b3a */ if (!fZ) goto L_00629b3a;
L_00629b13:; BB(0x00629b13);
    /* 00629b13: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629b17: and dword ptr [eax], 0xffffffe3 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffffe3u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00629b1a: jmp 0x629b3a */ goto L_00629b3a;
L_00629b1c:; BB(0x00629b1c);
    /* 00629b1c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629b20: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00629b22: and ecx, 0xffffffe7 */ {  u32 a = r_ecx; u32 b = 0xffffffe7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629b25: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00629b28: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00629b2a: jmp 0x629b3a */ goto L_00629b3a;
L_00629b2c:; BB(0x00629b2c);
    /* 00629b2c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629b30: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00629b32: and edx, 0xffffffeb */ {  u32 a = r_edx; u32 b = 0xffffffebu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00629b35: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00629b38: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00629b3a:; BB(0x00629b3a);
    /* 00629b3a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629b3e: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00629b42: and edx, 0xfff */ {  u32 a = r_edx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00629b48: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00629b4a: and ecx, 0xfffe001f */ {  u32 a = r_ecx; u32 b = 0xfffe001fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629b50: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00629b53: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00629b55: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00629b57: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629b5b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00629b5e: or ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00629b60: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00629b63: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629b67: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00629b6a: and ecx, 0xffffffe3 */ {  u32 a = r_ecx; u32 b = 0xffffffe3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629b6d: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00629b70: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00629b73: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00629b77: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00629b7b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00629b7d: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00629b80: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00629b83: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629b87: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00629b8a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629b8e: mov edi, dword ptr [eax + 0x50] */ r_edi = R32((u32)(r_eax+0x50u));
    /* 00629b91: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00629b93: mov dword ptr [eax + 0x50], edi */ W32((u32)(r_eax+0x50u), r_edi);
    /* 00629b96: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629b9a: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00629b9e: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00629ba1: and ecx, 0xffffffe3 */ {  u32 a = r_ecx; u32 b = 0xffffffe3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629ba4: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00629ba7: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 00629baa: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629bae: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00629bb0: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 00629bb3: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00629bb7: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00629bba: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 00629bbd: call 0x62a2f0 */ r_esp -= 4; W32(r_esp, 0x629bc2u); f_0062a2f0();
    /* 00629bc2: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00629bc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629bc7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629bc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629bca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629bcb: call dword ptr [0x6330a0] */ { u32 t = R32((u32)(0x6330a0u)); r_esp -= 4; W32(r_esp, 0x629bd1u); call_ind(t); }
    /* 00629bd1: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00629bd5: test byte ptr [eax + 8], 0x10 */ {  u32 a = R8((u32)(r_eax+0x8u)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629bd9: je 0x629bde */ if (fZ) goto L_00629bde;
L_00629bdb:; BB(0x00629bdb);
    /* 00629bdb: and dword ptr [esi], 0xfffffffe */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00629bde:; BB(0x00629bde);
    /* 00629bde: test byte ptr [eax + 8], 8 */ {  u32 a = R8((u32)(r_eax+0x8u)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629be2: je 0x629be7 */ if (fZ) goto L_00629be7;
L_00629be4:; BB(0x00629be4);
    /* 00629be4: and dword ptr [esi], 0xfffffffb */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00629be7:; BB(0x00629be7);
    /* 00629be7: test byte ptr [eax + 8], 4 */ {  u32 a = R8((u32)(r_eax+0x8u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629beb: je 0x629bf0 */ if (fZ) goto L_00629bf0;
L_00629bed:; BB(0x00629bed);
    /* 00629bed: and dword ptr [esi], 0xfffffff7 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00629bf0:; BB(0x00629bf0);
    /* 00629bf0: test byte ptr [eax + 8], 2 */ {  u32 a = R8((u32)(r_eax+0x8u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629bf4: je 0x629bf9 */ if (fZ) goto L_00629bf9;
L_00629bf6:; BB(0x00629bf6);
    /* 00629bf6: and dword ptr [esi], 0xffffffef */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00629bf9:; BB(0x00629bf9);
    /* 00629bf9: test byte ptr [eax + 8], bl */ {  u32 a = R8((u32)(r_eax+0x8u)); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629bfc: je 0x629c01 */ if (fZ) goto L_00629c01;
L_00629bfe:; BB(0x00629bfe);
    /* 00629bfe: and dword ptr [esi], 0xffffffdf */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00629c01:; BB(0x00629c01);
    /* 00629c01: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00629c03: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629c06: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00629c09: ja 0x629c36 */ if ((!fC&&!fZ)) goto L_00629c36;
L_00629c0b:; BB(0x00629c0b);
    /* 00629c0b: jmp dword ptr [ecx*4 + 0x629c94] */ { u32 t = R32((u32)(r_ecx*4+0x629c94u)); switch (t) { case 0x629c2fu: goto L_00629c2f; case 0x629c23u: goto L_00629c23; case 0x629c19u: goto L_00629c19; case 0x629c12u: goto L_00629c12; default: UNSUP(0x00629c0b, "jump table entry is not a known target"); } }
L_00629c12:; BB(0x00629c12);
    /* 00629c12: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00629c14: or ch, 0xc */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0xcu; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00629c17: jmp 0x629c34 */ goto L_00629c34;
L_00629c19:; BB(0x00629c19);
    /* 00629c19: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00629c1b: and ch, 0xfb */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0xfbu; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00629c1e: or ch, 8 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x8u; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00629c21: jmp 0x629c34 */ goto L_00629c34;
L_00629c23:; BB(0x00629c23);
    /* 00629c23: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00629c25: and dh, 0xf7 */ {  u32 a = (u8)(r_edx>>8); u32 b = 0xf7u; u32 r = (a & b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00629c28: or dh, 4 */ {  u32 a = (u8)(r_edx>>8); u32 b = 0x4u; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00629c2b: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00629c2d: jmp 0x629c36 */ goto L_00629c36;
L_00629c2f:; BB(0x00629c2f);
    /* 00629c2f: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00629c31: and ch, 0xf3 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0xf3u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
L_00629c34:; BB(0x00629c34);
    /* 00629c34: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
L_00629c36:; BB(0x00629c36);
    /* 00629c36: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00629c38: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00629c3b: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00629c3e: sub ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00629c41: je 0x629c7a */ if (fZ) goto L_00629c7a;
L_00629c43:; BB(0x00629c43);
    /* 00629c43: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00629c44: je 0x629c60 */ if (fZ) goto L_00629c60;
L_00629c46:; BB(0x00629c46);
    /* 00629c46: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00629c47: jne 0x629c84 */ if (!fZ) goto L_00629c84;
L_00629c49:; BB(0x00629c49);
    /* 00629c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00629c4b: and ch, 0xf3 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0xf3u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00629c4e: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00629c50: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00629c53: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 00629c55: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00629c58: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00629c5b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629c5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629c5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629c5f: ret  */ FN_RET(0x00629970); r_esp += 4; return;
L_00629c60:; BB(0x00629c60);
    /* 00629c60: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00629c62: and ch, 0xf3 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0xf3u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00629c65: or ch, 2 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00629c68: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00629c6a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00629c6d: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 00629c6f: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00629c72: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00629c75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629c77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629c78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629c79: ret  */ FN_RET(0x00629970); r_esp += 4; return;
L_00629c7a:; BB(0x00629c7a);
    /* 00629c7a: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00629c7c: and dh, 0xf3 */ {  u32 a = (u8)(r_edx>>8); u32 b = 0xf3u; u32 r = (a & b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00629c7f: or dh, 3 */ {  u32 a = (u8)(r_edx>>8); u32 b = 0x3u; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00629c82: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
L_00629c84:; BB(0x00629c84);
    /* 00629c84: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00629c87: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 00629c89: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00629c8c: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00629c8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629c90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629c91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629c92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629c93: ret  */ FN_RET(0x00629970); r_esp += 4; return;
}

void f_00629cb0(void) /* FUN_00629cb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629cb0);
    /* 00629cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00629cb3: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00629cb6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629cb9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629cbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629cbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00629cbe: mov esi, eax */ r_esi = r_eax;
    /* 00629cc0: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00629cc3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00629cc4: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629cc6: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00629cca: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00629ccf: je 0x629cea */ if (fZ) goto L_00629cea;
L_00629cd1:; BB(0x00629cd1);
    /* 00629cd1: test byte ptr [ebp + 0x10], bl */ {  u32 a = R8((u32)(r_ebp+0x10u)); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629cd4: je 0x629cea */ if (fZ) goto L_00629cea;
L_00629cd6:; BB(0x00629cd6);
    /* 00629cd6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629cd7: call 0x62a340 */ r_esp -= 4; W32(r_esp, 0x629cdcu); f_0062a340();
    /* 00629cdc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629cdf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629ce2: and esi, 0xfffffff7 */ {  u32 a = r_esi; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00629ce5: jmp 0x629fbb */ goto L_00629fbb;
L_00629cea:; BB(0x00629cea);
    /* 00629cea: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00629ced: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629cef: je 0x629d0b */ if (fZ) goto L_00629d0b;
L_00629cf1:; BB(0x00629cf1);
    /* 00629cf1: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629cf4: je 0x629d0b */ if (fZ) goto L_00629d0b;
L_00629cf6:; BB(0x00629cf6);
    /* 00629cf6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00629cf8: call 0x62a340 */ r_esp -= 4; W32(r_esp, 0x629cfdu); f_0062a340();
    /* 00629cfd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629d00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629d03: and esi, 0xfffffffb */ {  u32 a = r_esi; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00629d06: jmp 0x629fbb */ goto L_00629fbb;
L_00629d0b:; BB(0x00629d0b);
    /* 00629d0b: test bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629d0d: je 0x629e99 */ if (fZ) goto L_00629e99;
L_00629d13:; BB(0x00629d13);
    /* 00629d13: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629d16: je 0x629e99 */ if (fZ) goto L_00629e99;
L_00629d1c:; BB(0x00629d1c);
    /* 00629d1c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00629d1e: call 0x62a340 */ r_esp -= 4; W32(r_esp, 0x629d23u); f_0062a340();
    /* 00629d23: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00629d26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629d29: and eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00629d2e: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00629d33: ja 0x629de5 */ if ((!fC&&!fZ)) goto L_00629de5;
L_00629d39:; BB(0x00629d39);
    /* 00629d39: je 0x629d94 */ if (fZ) goto L_00629d94;
L_00629d3b:; BB(0x00629d3b);
    /* 00629d3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629d3d: jne 0x629e8e */ if (!fZ) goto L_00629e8e;
L_00629d43:; BB(0x00629d43);
    /* 00629d43: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00629d46: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00629d48: fcomp qword ptr [0x63d2c0] */ fx_compare(ST(0), R_F64((u32)(0x63d2c0u))); FPOP();
    /* 00629d4e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00629d50: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629d53: jne 0x629d70 */ if (!fZ) goto L_00629d70;
L_00629d55:; BB(0x00629d55);
    /* 00629d55: mov ecx, dword ptr [0x6f2700] */ r_ecx = R32((u32)(0x6f2700u));
    /* 00629d5b: mov eax, dword ptr [0x6f2704] */ r_eax = R32((u32)(0x6f2704u));
    /* 00629d60: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00629d62: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00629d65: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629d68: and esi, 0xfffffffe */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00629d6b: jmp 0x629fbb */ goto L_00629fbb;
L_00629d70:; BB(0x00629d70);
    /* 00629d70: fld qword ptr [0x6f2700] */ FPUSH(R_F64((u32)(0x6f2700u)));
    /* 00629d76: fchs  */ ST(0) = -ST(0);
    /* 00629d78: fstp qword ptr [esp + 0x18] */ W_F64((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00629d7c: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00629d80: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00629d84: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00629d86: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00629d89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629d8c: and esi, 0xfffffffe */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00629d8f: jmp 0x629fbb */ goto L_00629fbb;
L_00629d94:; BB(0x00629d94);
    /* 00629d94: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00629d97: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00629d99: fcomp qword ptr [0x63d2c0] */ fx_compare(ST(0), R_F64((u32)(0x63d2c0u))); FPOP();
    /* 00629d9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00629da1: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629da4: jne 0x629dc1 */ if (!fZ) goto L_00629dc1;
L_00629da6:; BB(0x00629da6);
    /* 00629da6: mov ecx, dword ptr [0x6f2710] */ r_ecx = R32((u32)(0x6f2710u));
    /* 00629dac: mov eax, dword ptr [0x6f2714] */ r_eax = R32((u32)(0x6f2714u));
    /* 00629db1: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00629db3: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00629db6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629db9: and esi, 0xfffffffe */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00629dbc: jmp 0x629fbb */ goto L_00629fbb;
L_00629dc1:; BB(0x00629dc1);
    /* 00629dc1: fld qword ptr [0x6f2700] */ FPUSH(R_F64((u32)(0x6f2700u)));
    /* 00629dc7: fchs  */ ST(0) = -ST(0);
    /* 00629dc9: fstp qword ptr [esp + 0x18] */ W_F64((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00629dcd: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00629dd1: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00629dd5: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00629dd7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00629dda: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629ddd: and esi, 0xfffffffe */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00629de0: jmp 0x629fbb */ goto L_00629fbb;
L_00629de5:; BB(0x00629de5);
    /* 00629de5: cmp eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629dea: je 0x629e48 */ if (fZ) goto L_00629e48;
L_00629dec:; BB(0x00629dec);
    /* 00629dec: cmp eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629df1: jne 0x629e8e */ if (!fZ) goto L_00629e8e;
L_00629df7:; BB(0x00629df7);
    /* 00629df7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00629dfa: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00629dfc: fcomp qword ptr [0x63d2c0] */ fx_compare(ST(0), R_F64((u32)(0x63d2c0u))); FPOP();
    /* 00629e02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00629e04: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629e07: jne 0x629e24 */ if (!fZ) goto L_00629e24;
L_00629e09:; BB(0x00629e09);
    /* 00629e09: mov ecx, dword ptr [0x6f2710] */ r_ecx = R32((u32)(0x6f2710u));
    /* 00629e0f: mov eax, dword ptr [0x6f2714] */ r_eax = R32((u32)(0x6f2714u));
    /* 00629e14: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00629e16: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00629e19: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629e1c: and esi, 0xfffffffe */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00629e1f: jmp 0x629fbb */ goto L_00629fbb;
L_00629e24:; BB(0x00629e24);
    /* 00629e24: fld qword ptr [0x6f2710] */ FPUSH(R_F64((u32)(0x6f2710u)));
    /* 00629e2a: fchs  */ ST(0) = -ST(0);
    /* 00629e2c: fstp qword ptr [esp + 0x18] */ W_F64((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00629e30: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00629e34: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00629e38: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00629e3a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00629e3d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629e40: and esi, 0xfffffffe */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00629e43: jmp 0x629fbb */ goto L_00629fbb;
L_00629e48:; BB(0x00629e48);
    /* 00629e48: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00629e4b: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00629e4d: fcomp qword ptr [0x63d2c0] */ fx_compare(ST(0), R_F64((u32)(0x63d2c0u))); FPOP();
    /* 00629e53: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00629e55: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629e58: jne 0x629e75 */ if (!fZ) goto L_00629e75;
L_00629e5a:; BB(0x00629e5a);
    /* 00629e5a: mov ecx, dword ptr [0x6f2700] */ r_ecx = R32((u32)(0x6f2700u));
    /* 00629e60: mov eax, dword ptr [0x6f2704] */ r_eax = R32((u32)(0x6f2704u));
    /* 00629e65: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00629e67: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00629e6a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629e6d: and esi, 0xfffffffe */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00629e70: jmp 0x629fbb */ goto L_00629fbb;
L_00629e75:; BB(0x00629e75);
    /* 00629e75: fld qword ptr [0x6f2710] */ FPUSH(R_F64((u32)(0x6f2710u)));
    /* 00629e7b: fchs  */ ST(0) = -ST(0);
    /* 00629e7d: fstp qword ptr [esp + 0x18] */ W_F64((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00629e81: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00629e85: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00629e89: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00629e8b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_00629e8e:; BB(0x00629e8e);
    /* 00629e8e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629e91: and esi, 0xfffffffe */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00629e94: jmp 0x629fbb */ goto L_00629fbb;
L_00629e99:; BB(0x00629e99);
    /* 00629e99: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629e9b: je 0x629fbb */ if (fZ) goto L_00629fbb;
L_00629ea1:; BB(0x00629ea1);
    /* 00629ea1: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629ea4: je 0x629fbb */ if (fZ) goto L_00629fbb;
L_00629eaa:; BB(0x00629eaa);
    /* 00629eaa: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00629eac: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629eae: je 0x629eb2 */ if (fZ) goto L_00629eb2;
L_00629eb0:; BB(0x00629eb0);
    /* 00629eb0: mov esi, ebx */ r_esi = r_ebx;
L_00629eb2:; BB(0x00629eb2);
    /* 00629eb2: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00629eb5: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00629eb7: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00629eba: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00629ebe: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00629ec2: fld qword ptr [esp + 0x18] */ FPUSH(R_F64((u32)(r_esp+0x18u)));
    /* 00629ec6: fcomp qword ptr [0x63d2c0] */ fx_compare(ST(0), R_F64((u32)(0x63d2c0u))); FPOP();
    /* 00629ecc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00629ece: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629ed1: jne 0x629f9a */ if (!fZ) goto L_00629f9a;
L_00629ed7:; BB(0x00629ed7);
    /* 00629ed7: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00629edb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629edc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629edd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629ede: call 0x62a1d0 */ r_esp -= 4; W32(r_esp, 0x629ee3u); f_0062a1d0();
    /* 00629ee3: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00629ee7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629eea: fstp qword ptr [esp + 0x18] */ W_F64((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00629eee: add ecx, 0xfffffa00 */ {  u32 a = r_ecx; u32 b = 0xfffffa00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00629ef4: cmp ecx, 0xfffffbce */ {  u32 a = r_ecx; u32 b = 0xfffffbceu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00629efa: jge 0x629f16 */ if ((fS==fO)) goto L_00629f16;
L_00629efc:; BB(0x00629efc);
    /* 00629efc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629efe: mov esi, ebx */ r_esi = r_ebx;
    /* 00629f00: mov ecx, eax */ r_ecx = r_eax;
    /* 00629f02: mov edx, eax */ r_edx = r_eax;
    /* 00629f04: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 00629f06: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00629f0a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00629f0e: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00629f11: jmp 0x629f9c */ goto L_00629f9c;
L_00629f16:; BB(0x00629f16);
    /* 00629f16: fld qword ptr [esp + 0x18] */ FPUSH(R_F64((u32)(r_esp+0x18u)));
    /* 00629f1a: fcomp qword ptr [0x63d2c0] */ fx_compare(ST(0), R_F64((u32)(0x63d2c0u))); FPOP();
    /* 00629f20: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00629f22: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629f25: je 0x629f2b */ if (fZ) goto L_00629f2b;
L_00629f27:; BB(0x00629f27);
    /* 00629f27: mov edx, ebx */ r_edx = r_ebx;
    /* 00629f29: jmp 0x629f2d */ goto L_00629f2d;
L_00629f2b:; BB(0x00629f2b);
    /* 00629f2b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00629f2d:; BB(0x00629f2d);
    /* 00629f2d: mov al, byte ptr [esp + 0x1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x1eu))) & 0xffu);
    /* 00629f31: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00629f34: or al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00629f36: cmp ecx, 0xfffffc03 */ {  u32 a = r_ecx; u32 b = 0xfffffc03u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00629f3c: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 00629f41: jge 0x629f7d */ if ((fS==fO)) goto L_00629f7d;
L_00629f43:; BB(0x00629f43);
    /* 00629f43: mov eax, 0xfffffc03 */ r_eax = 0xfffffc03u;
    /* 00629f48: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_00629f4a:; BB(0x00629f4a);
    /* 00629f4a: test byte ptr [esp + 0x18], bl */ {  u32 a = R8((u32)(r_esp+0x18u)); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629f4e: je 0x629f56 */ if (fZ) goto L_00629f56;
L_00629f50:; BB(0x00629f50);
    /* 00629f50: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629f52: jne 0x629f56 */ if (!fZ) goto L_00629f56;
L_00629f54:; BB(0x00629f54);
    /* 00629f54: mov esi, ebx */ r_esi = r_ebx;
L_00629f56:; BB(0x00629f56);
    /* 00629f56: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00629f5a: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00629f5c: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00629f60: mov cl, byte ptr [esp + 0x1c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0x1cu))) & 0xffu);
    /* 00629f64: test bl, cl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629f66: je 0x629f70 */ if (fZ) goto L_00629f70;
L_00629f68:; BB(0x00629f68);
    /* 00629f68: or dword ptr [esp + 0x18], 0x80000000 */ { u32 ad = (u32)(r_esp+0x18u);  u32 a = R32(ad); u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00629f70:; BB(0x00629f70);
    /* 00629f70: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00629f74: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00629f76: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00629f77: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00629f7b: jne 0x629f4a */ if (!fZ) goto L_00629f4a;
L_00629f7d:; BB(0x00629f7d);
    /* 00629f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629f7f: je 0x629f8b */ if (fZ) goto L_00629f8b;
L_00629f81:; BB(0x00629f81);
    /* 00629f81: fld qword ptr [esp + 0x18] */ FPUSH(R_F64((u32)(r_esp+0x18u)));
    /* 00629f85: fchs  */ ST(0) = -ST(0);
    /* 00629f87: fstp qword ptr [esp + 0x18] */ W_F64((u32)(r_esp+0x18u), ST(0)); FPOP();
L_00629f8b:; BB(0x00629f8b);
    /* 00629f8b: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00629f8f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00629f93: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 00629f95: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00629f98: jmp 0x629f9c */ goto L_00629f9c;
L_00629f9a:; BB(0x00629f9a);
    /* 00629f9a: mov esi, ebx */ r_esi = r_ebx;
L_00629f9c:; BB(0x00629f9c);
    /* 00629f9c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629f9e: je 0x629faa */ if (fZ) goto L_00629faa;
L_00629fa0:; BB(0x00629fa0);
    /* 00629fa0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00629fa2: call 0x62a340 */ r_esp -= 4; W32(r_esp, 0x629fa7u); f_0062a340();
    /* 00629fa7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00629faa:; BB(0x00629faa);
    /* 00629faa: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00629fae: and al, 0xfd */ {  u32 a = (u8)r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00629fb0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00629fb4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629fb7: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_00629fbb:; BB(0x00629fbb);
    /* 00629fbb: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629fbd: je 0x629fd2 */ if (fZ) goto L_00629fd2;
L_00629fbf:; BB(0x00629fbf);
    /* 00629fbf: test byte ptr [ebp + 0x10], 0x20 */ {  u32 a = R8((u32)(r_ebp+0x10u)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629fc3: je 0x629fd2 */ if (fZ) goto L_00629fd2;
L_00629fc5:; BB(0x00629fc5);
    /* 00629fc5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00629fc7: call 0x62a340 */ r_esp -= 4; W32(r_esp, 0x629fccu); f_0062a340();
    /* 00629fcc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629fcf: and esi, 0xffffffef */ {  u32 a = r_esi; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
L_00629fd2:; BB(0x00629fd2);
    /* 00629fd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629fd4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629fd5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629fd7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629fd8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629fd9: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00629fdc: mov esp, ebp */ r_esp = r_ebp;
    /* 00629fde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629fdf: ret  */ FN_RET(0x00629cb0); r_esp += 4; return;
}

void f_00629fe0(void) /* FUN_00629fe0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629fe0);
    /* 00629fe0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629fe3: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00629fe7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629fe8: call 0x62a0c0 */ r_esp -= 4; W32(r_esp, 0x629fedu); f_0062a0c0();
    /* 00629fed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629ff0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00629ff4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629ff6: je 0x62a066 */ if (fZ) goto L_0062a066;
L_00629ff8:; BB(0x00629ff8);
    /* 00629ff8: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00629ffc: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0062a000: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0062a004: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0062a008: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 0062a00c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062a00d: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0062a011: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0062a015: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0062a019: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0062a01d: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0062a021: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0062a025: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0062a029: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a02e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a02f: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0062a033: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0062a037: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0062a03b: call 0x62a310 */ r_esp -= 4; W32(r_esp, 0x62a040u); f_0062a310();
    /* 0062a040: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a043: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0062a047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a048: call 0x630300 */ r_esp -= 4; W32(r_esp, 0x62a04du); f_00630300();
    /* 0062a04d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a050: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a052: jne 0x62a05d */ if (!fZ) goto L_0062a05d;
L_0062a054:; BB(0x0062a054);
    /* 0062a054: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062a055: call 0x62a090 */ r_esp -= 4; W32(r_esp, 0x62a05au); f_0062a090();
    /* 0062a05a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062a05d:; BB(0x0062a05d);
    /* 0062a05d: fld qword ptr [esp + 0x1c] */ FPUSH(R_F64((u32)(r_esp+0x1cu)));
    /* 0062a061: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062a062: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a065: ret  */ FN_RET(0x00629fe0); r_esp += 4; return;
L_0062a066:; BB(0x0062a066);
    /* 0062a066: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0062a06a: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a06f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a070: call 0x62a310 */ r_esp -= 4; W32(r_esp, 0x62a075u); f_0062a310();
    /* 0062a075: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0062a079: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a07c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a07d: call 0x62a090 */ r_esp -= 4; W32(r_esp, 0x62a082u); f_0062a090();
    /* 0062a082: fld qword ptr [esp + 0x40] */ FPUSH(R_F64((u32)(r_esp+0x40u)));
    /* 0062a086: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a089: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a08c: ret  */ FN_RET(0x00629fe0); r_esp += 4; return;
}

void f_0062a090(void) /* FUN_0062a090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a090);
    /* 0062a090: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062a094: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062a097: je 0x62a0ab */ if (fZ) goto L_0062a0ab;
L_0062a099:; BB(0x0062a099);
    /* 0062a099: jle 0x62a0b5 */ if ((fZ||fS!=fO)) goto L_0062a0b5;
L_0062a09b:; BB(0x0062a09b);
    /* 0062a09b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062a09e: jg 0x62a0b5 */ if ((!fZ&&fS==fO)) goto L_0062a0b5;
L_0062a0a0:; BB(0x0062a0a0);
    /* 0062a0a0: mov dword ptr [0x71145c], 0x22 */ W32((u32)(0x71145cu), 0x22u);
    /* 0062a0aa: ret  */ FN_RET(0x0062a090); r_esp += 4; return;
L_0062a0ab:; BB(0x0062a0ab);
    /* 0062a0ab: mov dword ptr [0x71145c], 0x21 */ W32((u32)(0x71145cu), 0x21u);
L_0062a0b5:; BB(0x0062a0b5);
    /* 0062a0b5: ret  */ FN_RET(0x0062a090); r_esp += 4; return;
}

void f_0062a0c0(void) /* FUN_0062a0c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a0c0);
    /* 0062a0c0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0062a0c4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a0c6: mov eax, 0x6f2628 */ r_eax = 0x6f2628u;
L_0062a0cb:; BB(0x0062a0cb);
    /* 0062a0cb: cmp dword ptr [eax], edx */ {  u32 a = R32((u32)(r_eax)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a0cd: je 0x62a0dd */ if (fZ) goto L_0062a0dd;
L_0062a0cf:; BB(0x0062a0cf);
    /* 0062a0cf: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a0d2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a0d3: cmp eax, 0x6f2700 */ {  u32 a = r_eax; u32 b = 0x6f2700u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062a0d8: jl 0x62a0cb */ if ((fS!=fO)) goto L_0062a0cb;
L_0062a0da:; BB(0x0062a0da);
    /* 0062a0da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a0dc: ret  */ FN_RET(0x0062a0c0); r_esp += 4; return;
L_0062a0dd:; BB(0x0062a0dd);
    /* 0062a0dd: mov eax, dword ptr [ecx*8 + 0x6f262c] */ r_eax = R32((u32)(r_ecx*8+0x6f262cu));
    /* 0062a0e4: ret  */ FN_RET(0x0062a0c0); r_esp += 4; return;
}

void f_0062a0f0(void) /* FUN_0062a0f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a0f0);
    /* 0062a0f0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062a0f4: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a0f6: je 0x62a0fe */ if (fZ) goto L_0062a0fe;
L_0062a0f8:; BB(0x0062a0f8);
    /* 0062a0f8: mov eax, 5 */ r_eax = 0x5u;
    /* 0062a0fd: ret  */ FN_RET(0x0062a0f0); r_esp += 4; return;
L_0062a0fe:; BB(0x0062a0fe);
    /* 0062a0fe: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a100: je 0x62a108 */ if (fZ) goto L_0062a108;
L_0062a102:; BB(0x0062a102);
    /* 0062a102: mov eax, 1 */ r_eax = 0x1u;
    /* 0062a107: ret  */ FN_RET(0x0062a0f0); r_esp += 4; return;
L_0062a108:; BB(0x0062a108);
    /* 0062a108: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a10a: je 0x62a112 */ if (fZ) goto L_0062a112;
L_0062a10c:; BB(0x0062a10c);
    /* 0062a10c: mov eax, 2 */ r_eax = 0x2u;
    /* 0062a111: ret  */ FN_RET(0x0062a0f0); r_esp += 4; return;
L_0062a112:; BB(0x0062a112);
    /* 0062a112: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a114: je 0x62a11c */ if (fZ) goto L_0062a11c;
L_0062a116:; BB(0x0062a116);
    /* 0062a116: mov eax, 3 */ r_eax = 0x3u;
    /* 0062a11b: ret  */ FN_RET(0x0062a0f0); r_esp += 4; return;
L_0062a11c:; BB(0x0062a11c);
    /* 0062a11c: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062a121: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062a124: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062a126: ret  */ FN_RET(0x0062a0f0); r_esp += 4; return;
}

void f_0062a130(void) /* FUN_0062a130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a130);
    /* 0062a130: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a133: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0062a137: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0062a13b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0062a13f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0062a143: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0062a147: mov ecx, dword ptr [esp + 0x12] */ r_ecx = R32((u32)(r_esp+0x12u));
    /* 0062a14b: lea eax, [edx + 0x3fe] */ r_eax = (u32)(r_edx+0x3feu);
    /* 0062a151: and ecx, 0x800f */ {  u32 a = r_ecx; u32 b = 0x800fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a157: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062a15a: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a15c: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 0062a161: fld qword ptr [esp] */ FPUSH(R_F64((u32)(r_esp)));
    /* 0062a165: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a168: ret  */ FN_RET(0x0062a130); r_esp += 4; return;
}

void f_0062a170(void) /* FUN_0062a170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a170);
    /* 0062a170: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0062a174: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062a178: cmp edx, 0x7ff00000 */ {  u32 a = r_edx; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a17e: jne 0x62a18a */ if (!fZ) goto L_0062a18a;
L_0062a180:; BB(0x0062a180);
    /* 0062a180: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a182: jne 0x62a18a */ if (!fZ) goto L_0062a18a;
L_0062a184:; BB(0x0062a184);
    /* 0062a184: mov eax, 1 */ r_eax = 0x1u;
    /* 0062a189: ret  */ FN_RET(0x0062a170); r_esp += 4; return;
L_0062a18a:; BB(0x0062a18a);
    /* 0062a18a: cmp edx, 0xfff00000 */ {  u32 a = r_edx; u32 b = 0xfff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a190: jne 0x62a19c */ if (!fZ) goto L_0062a19c;
L_0062a192:; BB(0x0062a192);
    /* 0062a192: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a194: jne 0x62a19c */ if (!fZ) goto L_0062a19c;
L_0062a196:; BB(0x0062a196);
    /* 0062a196: mov eax, 2 */ r_eax = 0x2u;
    /* 0062a19b: ret  */ FN_RET(0x0062a170); r_esp += 4; return;
L_0062a19c:; BB(0x0062a19c);
    /* 0062a19c: mov eax, dword ptr [esp + 0xa] */ r_eax = R32((u32)(r_esp+0xau));
    /* 0062a1a0: and eax, 0x7ff8 */ {  u32 a = r_eax; u32 b = 0x7ff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062a1a5: cmp ax, 0x7ff8 */ {  u32 a = (u16)r_eax; u32 b = 0x7ff8u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062a1a9: jne 0x62a1b1 */ if (!fZ) goto L_0062a1b1;
L_0062a1ab:; BB(0x0062a1ab);
    /* 0062a1ab: mov eax, 3 */ r_eax = 0x3u;
    /* 0062a1b0: ret  */ FN_RET(0x0062a170); r_esp += 4; return;
L_0062a1b1:; BB(0x0062a1b1);
    /* 0062a1b1: cmp ax, 0x7ff0 */ {  u32 a = (u16)r_eax; u32 b = 0x7ff0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062a1b5: jne 0x62a1c9 */ if (!fZ) goto L_0062a1c9;
L_0062a1b7:; BB(0x0062a1b7);
    /* 0062a1b7: test edx, 0x7ffff */ {  u32 a = r_edx; u32 b = 0x7ffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a1bd: jne 0x62a1c3 */ if (!fZ) goto L_0062a1c3;
L_0062a1bf:; BB(0x0062a1bf);
    /* 0062a1bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a1c1: je 0x62a1c9 */ if (fZ) goto L_0062a1c9;
L_0062a1c3:; BB(0x0062a1c3);
    /* 0062a1c3: mov eax, 4 */ r_eax = 0x4u;
    /* 0062a1c8: ret  */ FN_RET(0x0062a170); r_esp += 4; return;
L_0062a1c9:; BB(0x0062a1c9);
    /* 0062a1c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a1cb: ret  */ FN_RET(0x0062a170); r_esp += 4; return;
}

void f_0062a1d0(void) /* FUN_0062a1d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a1d0);
    /* 0062a1d0: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0062a1d4: fcomp qword ptr [0x63d2c8] */ fx_compare(ST(0), R_F64((u32)(0x63d2c8u))); FPOP();
    /* 0062a1da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a1db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062a1dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062a1dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062a1df: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a1e2: je 0x62a204 */ if (fZ) goto L_0062a204;
L_0062a1e4:; BB(0x0062a1e4);
    /* 0062a1e4: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0062a1e8: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0062a1f0: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0062a1f8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0062a1fa: fld qword ptr [esp + 0x10] */ FPUSH(R_F64((u32)(r_esp+0x10u)));
    /* 0062a1fe: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 0062a200: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062a201: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062a202: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062a203: ret  */ FN_RET(0x0062a1d0); r_esp += 4; return;
L_0062a204:; BB(0x0062a204);
    /* 0062a204: mov esi, dword ptr [esp + 0x16] */ r_esi = R32((u32)(r_esp+0x16u));
    /* 0062a208: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0062a20c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0062a210: test esi, 0x7ff0 */ {  u32 a = r_esi; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a216: jne 0x62a2a3 */ if (!fZ) goto L_0062a2a3;
L_0062a21c:; BB(0x0062a21c);
    /* 0062a21c: test edx, 0xfffff */ {  u32 a = r_edx; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a222: jne 0x62a228 */ if (!fZ) goto L_0062a228;
L_0062a224:; BB(0x0062a224);
    /* 0062a224: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a226: je 0x62a2a3 */ if (fZ) goto L_0062a2a3;
L_0062a228:; BB(0x0062a228);
    /* 0062a228: fld qword ptr [esp + 0x10] */ FPUSH(R_F64((u32)(r_esp+0x10u)));
    /* 0062a22c: fcomp qword ptr [0x63d2c8] */ fx_compare(ST(0), R_F64((u32)(0x63d2c8u))); FPOP();
    /* 0062a232: mov esi, 0xfffffc03 */ r_esi = 0xfffffc03u;
    /* 0062a237: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062a239: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a23c: je 0x62a245 */ if (fZ) goto L_0062a245;
L_0062a23e:; BB(0x0062a23e);
    /* 0062a23e: mov edi, 1 */ r_edi = 0x1u;
    /* 0062a243: jmp 0x62a247 */ goto L_0062a247;
L_0062a245:; BB(0x0062a245);
    /* 0062a245: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0062a247:; BB(0x0062a247);
    /* 0062a247: mov bl, byte ptr [esp + 0x16] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esp+0x16u))) & 0xffu);
    /* 0062a24b: mov al, 0x10 */ r_eax = (r_eax & 0xffffff00u) | ((0x10u) & 0xffu);
    /* 0062a24d: test al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a24f: jne 0x62a271 */ if (!fZ) goto L_0062a271;
L_0062a251:; BB(0x0062a251);
    /* 0062a251: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062a253: test ecx, 0x80000000 */ {  u32 a = r_ecx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a259: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0062a25d: je 0x62a266 */ if (fZ) goto L_0062a266;
L_0062a25f:; BB(0x0062a25f);
    /* 0062a25f: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062a262: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
L_0062a266:; BB(0x0062a266);
    /* 0062a266: mov bl, byte ptr [esp + 0x16] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esp+0x16u))) & 0xffu);
    /* 0062a26a: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062a26c: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062a26d: test al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a26f: je 0x62a251 */ if (fZ) goto L_0062a251;
L_0062a271:; BB(0x0062a271);
    /* 0062a271: and word ptr [esp + 0x16], 0xffef */ { u32 ad = (u32)(r_esp+0x16u);  u32 a = R16(ad); u32 b = 0xffefu; u32 r = (a & b) & 0xffffu; W16(ad, r);  }
    /* 0062a278: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a27a: je 0x62a281 */ if (fZ) goto L_0062a281;
L_0062a27c:; BB(0x0062a27c);
    /* 0062a27c: or byte ptr [esp + 0x17], 0x80 */ { u32 ad = (u32)(r_esp+0x17u);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0062a281:; BB(0x0062a281);
    /* 0062a281: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062a285: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a287: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a288: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a289: call 0x62a130 */ r_esp -= 4; W32(r_esp, 0x62a28eu); f_0062a130();
    /* 0062a28e: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0062a292: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a295: fstp qword ptr [esp + 0x10] */ W_F64((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0062a299: fld qword ptr [esp + 0x10] */ FPUSH(R_F64((u32)(r_esp+0x10u)));
    /* 0062a29d: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 0062a29f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062a2a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062a2a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062a2a2: ret  */ FN_RET(0x0062a1d0); r_esp += 4; return;
L_0062a2a3:; BB(0x0062a2a3);
    /* 0062a2a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a2a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a2a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a2a7: call 0x62a130 */ r_esp -= 4; W32(r_esp, 0x62a2acu); f_0062a130();
    /* 0062a2ac: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0062a2b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a2b3: shr esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0062a2b6: fstp qword ptr [esp + 0x10] */ W_F64((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0062a2ba: and esi, 0x7ff */ {  u32 a = r_esi; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0062a2c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062a2c1: movsx esi, si */ r_esi = (u32)(i32)(i16)(u16)r_esi;
    /* 0062a2c4: fld qword ptr [esp + 0xc] */ FPUSH(R_F64((u32)(r_esp+0xcu)));
    /* 0062a2c8: sub esi, 0x3fe */ {  u32 a = r_esi; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062a2ce: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 0062a2d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062a2d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062a2d2: ret  */ FN_RET(0x0062a1d0); r_esp += 4; return;
}

void f_0062a2e0(void) /* FUN_0062a2e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a2e0);
    /* 0062a2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a2e4: wait  */ ;
    /* 0062a2e5: fnstsw word ptr [ebp - 2] */ W16((u32)(r_ebp+0xfffffffeu), fx_sw());
    /* 0062a2e8: movsx eax, word ptr [ebp - 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffeu));
    /* 0062a2ec: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a2ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a2ef: ret  */ FN_RET(0x0062a2e0); r_esp += 4; return;
}

void f_0062a2f0(void) /* FUN_0062a2f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a2f0);
    /* 0062a2f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a2f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a2f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a2f4: fnstsw word ptr [ebp - 2] */ W16((u32)(r_ebp+0xfffffffeu), fx_sw());
    /* 0062a2f7: fnclex  */ ;
    /* 0062a2f9: movsx eax, word ptr [ebp - 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffeu));
    /* 0062a2fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a2ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a300: ret  */ FN_RET(0x0062a2f0); r_esp += 4; return;
}

void f_0062a310(void) /* FUN_0062a310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a310);
    /* 0062a310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a311: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a314: wait  */ ;
    /* 0062a315: fnstcw word ptr [ebp - 4] */ W16((u32)(r_ebp+0xfffffffcu), fcw);
    /* 0062a318: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062a31b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062a31e: mov edx, eax */ r_edx = r_eax;
    /* 0062a320: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062a322: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a325: not eax */ r_eax = ~r_eax;
    /* 0062a327: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062a329: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062a32b: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0062a32e: fldcw word ptr [ebp + 0xc] */ fcw = R16((u32)(r_ebp+0xcu));
    /* 0062a331: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 0062a334: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a336: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a337: ret  */ FN_RET(0x0062a310); r_esp += 4; return;
}

void f_0062a340(void) /* FUN_0062a340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a340);
    /* 0062a340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a341: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a343: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a346: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0062a349: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a34c: je 0x62a358 */ if (fZ) goto L_0062a358;
L_0062a34e:; BB(0x0062a34e);
    /* 0062a34e: fld xword ptr [0x6f2728] */ FPUSH(R_F80((u32)(0x6f2728u)));
    /* 0062a354: fistp dword ptr [ebp + 8] */ W32((u32)(r_ebp+0x8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062a357: wait  */ ;
L_0062a358:; BB(0x0062a358);
    /* 0062a358: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a35b: je 0x62a36d */ if (fZ) goto L_0062a36d;
L_0062a35d:; BB(0x0062a35d);
    /* 0062a35d: wait  */ ;
    /* 0062a35e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062a360: fld xword ptr [0x6f2728] */ FPUSH(R_F80((u32)(0x6f2728u)));
    /* 0062a366: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0062a369: wait  */ ;
    /* 0062a36a: wait  */ ;
    /* 0062a36b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
L_0062a36d:; BB(0x0062a36d);
    /* 0062a36d: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a370: je 0x62a37c */ if (fZ) goto L_0062a37c;
L_0062a372:; BB(0x0062a372);
    /* 0062a372: fld xword ptr [0x6f2738] */ FPUSH(R_F80((u32)(0x6f2738u)));
    /* 0062a378: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0062a37b: wait  */ ;
L_0062a37c:; BB(0x0062a37c);
    /* 0062a37c: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a37f: je 0x62a38a */ if (fZ) goto L_0062a38a;
L_0062a381:; BB(0x0062a381);
    /* 0062a381: fldz  */ FPUSH(0.0);
    /* 0062a383: fld1  */ FPUSH(1.0);
    /* 0062a385: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0062a387: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062a389: wait  */ ;
L_0062a38a:; BB(0x0062a38a);
    /* 0062a38a: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a38d: je 0x62a395 */ if (fZ) goto L_0062a395;
L_0062a38f:; BB(0x0062a38f);
    /* 0062a38f: fldpi  */ FPUSH(3.14159265358979323846);
    /* 0062a391: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0062a394: wait  */ ;
L_0062a395:; BB(0x0062a395);
    /* 0062a395: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a397: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a398: ret  */ FN_RET(0x0062a340); r_esp += 4; return;
}

void f_0062a3a0(void) /* FUN_0062a3a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a3a0);
    /* 0062a3a0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062a3a4: mov ecx, dword ptr [0x7129e0] */ r_ecx = R32((u32)(0x7129e0u));
    /* 0062a3aa: sub esp, 0x41c */ {  u32 a = r_esp; u32 b = 0x41cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a3b0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062a3b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a3b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a3b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062a3b5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062a3b6: jae 0x62a54d */ if (!fC) goto L_0062a54d;
L_0062a3bc:; BB(0x0062a3bc);
    /* 0062a3bc: mov ecx, eax */ r_ecx = r_eax;
    /* 0062a3be: mov esi, eax */ r_esi = r_eax;
    /* 0062a3c0: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062a3c3: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0062a3c6: mov edx, dword ptr [ecx*4 + 0x7128e0] */ r_edx = R32((u32)(r_ecx*4+0x7128e0u));
    /* 0062a3cd: lea edi, [ecx*4 + 0x7128e0] */ r_edi = (u32)(r_ecx*4+0x7128e0u);
    /* 0062a3d4: shl esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0062a3d7: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0062a3db: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0062a3df: mov cl, byte ptr [esi + edx + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+r_edx+0x4u))) & 0xffu);
    /* 0062a3e3: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a3e6: je 0x62a54d */ if (fZ) goto L_0062a54d;
L_0062a3ec:; BB(0x0062a3ec);
    /* 0062a3ec: mov ebx, dword ptr [esp + 0x438] */ r_ebx = R32((u32)(r_esp+0x438u));
    /* 0062a3f3: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0062a3f5: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a3f7: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0062a3fb: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0062a3ff: jne 0x62a40e */ if (!fZ) goto L_0062a40e;
L_0062a401:; BB(0x0062a401);
    /* 0062a401: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a403: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062a404: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062a405: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a406: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062a407: add esp, 0x41c */ {  u32 a = r_esp; u32 b = 0x41cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a40d: ret  */ FN_RET(0x0062a3a0); r_esp += 4; return;
L_0062a40e:; BB(0x0062a40e);
    /* 0062a40e: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a411: je 0x62a41f */ if (fZ) goto L_0062a41f;
L_0062a413:; BB(0x0062a413);
    /* 0062a413: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a415: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a416: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a417: call 0x62bfe0 */ r_esp -= 4; W32(r_esp, 0x62a41cu); f_0062bfe0();
    /* 0062a41c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062a41f:; BB(0x0062a41f);
    /* 0062a41f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062a421: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a423: test byte ptr [eax + 4], 0x80 */ {  u32 a = R8((u32)(r_eax+0x4u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a427: je 0x62a57e */ if (fZ) goto L_0062a57e;
L_0062a42d:; BB(0x0062a42d);
    /* 0062a42d: mov ebp, dword ptr [esp + 0x434] */ r_ebp = R32((u32)(r_esp+0x434u));
    /* 0062a434: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0062a43c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0062a43e: mov edi, ebp */ r_edi = r_ebp;
    /* 0062a440: jbe 0x62a4c9 */ if ((fC||fZ)) goto L_0062a4c9;
L_0062a446:; BB(0x0062a446);
    /* 0062a446: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
L_0062a44a:; BB(0x0062a44a);
    /* 0062a44a: mov ecx, edi */ r_ecx = r_edi;
    /* 0062a44c: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a44e: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062a450: jae 0x62a47a */ if (!fC) goto L_0062a47a;
L_0062a452:; BB(0x0062a452);
    /* 0062a452: mov cl, byte ptr [edi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0062a454: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062a455: cmp cl, 0xa */ {  u32 a = (u8)r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a458: jne 0x62a467 */ if (!fZ) goto L_0062a467;
L_0062a45a:; BB(0x0062a45a);
    /* 0062a45a: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0062a45e: mov byte ptr [eax], 0xd */ W8((u32)(r_eax), 0xdu);
    /* 0062a461: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062a462: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a463: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
L_0062a467:; BB(0x0062a467);
    /* 0062a467: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0062a469: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a46a: mov edx, eax */ r_edx = r_eax;
    /* 0062a46c: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0062a470: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062a472: cmp edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062a478: jl 0x62a44a */ if ((fS!=fO)) goto L_0062a44a;
L_0062a47a:; BB(0x0062a47a);
    /* 0062a47a: mov esi, eax */ r_esi = r_eax;
    /* 0062a47c: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0062a480: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0062a484: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062a486: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0062a48a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a48c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a48d: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0062a491: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062a493: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062a494: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a495: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0062a499: mov edx, dword ptr [ecx + eax] */ r_edx = R32((u32)(r_ecx+r_eax));
    /* 0062a49c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a49d: call dword ptr [0x63302c] */ { u32 t = R32((u32)(0x63302cu)); r_esp -= 4; W32(r_esp, 0x62a4a3u); call_ind(t); }
    /* 0062a4a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a4a5: je 0x62a56f */ if (fZ) goto L_0062a56f;
L_0062a4ab:; BB(0x0062a4ab);
    /* 0062a4ab: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062a4af: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0062a4b3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062a4b5: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062a4b7: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0062a4bb: jl 0x62a4c5 */ if ((fS!=fO)) goto L_0062a4c5;
L_0062a4bd:; BB(0x0062a4bd);
    /* 0062a4bd: mov eax, edi */ r_eax = r_edi;
    /* 0062a4bf: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062a4c1: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062a4c3: jb 0x62a446 */ if (fC) goto L_0062a446;
L_0062a4c5:; BB(0x0062a4c5);
    /* 0062a4c5: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_0062a4c9:; BB(0x0062a4c9);
    /* 0062a4c9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062a4cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a4cf: jne 0x62a53e */ if (!fZ) goto L_0062a53e;
L_0062a4d1:; BB(0x0062a4d1);
    /* 0062a4d1: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0062a4d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a4d7: je 0x62a512 */ if (fZ) goto L_0062a512;
L_0062a4d9:; BB(0x0062a4d9);
    /* 0062a4d9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a4dc: jne 0x62a4fb */ if (!fZ) goto L_0062a4fb;
L_0062a4de:; BB(0x0062a4de);
    /* 0062a4de: mov dword ptr [0x711460], eax */ W32((u32)(0x711460u), r_eax);
    /* 0062a4e3: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
    /* 0062a4ed: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062a4f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062a4f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062a4f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a4f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062a4f4: add esp, 0x41c */ {  u32 a = r_esp; u32 b = 0x41cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a4fa: ret  */ FN_RET(0x0062a3a0); r_esp += 4; return;
L_0062a4fb:; BB(0x0062a4fb);
    /* 0062a4fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a4fc: call 0x62b3e0 */ r_esp -= 4; W32(r_esp, 0x62a501u); f_0062b3e0();
    /* 0062a501: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a504: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062a507: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062a508: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062a509: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a50a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062a50b: add esp, 0x41c */ {  u32 a = r_esp; u32 b = 0x41cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a511: ret  */ FN_RET(0x0062a3a0); r_esp += 4; return;
L_0062a512:; BB(0x0062a512);
    /* 0062a512: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0062a516: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062a518: test byte ptr [esi + edx + 4], 0x40 */ {  u32 a = R8((u32)(r_esi+r_edx+0x4u)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a51d: je 0x62a532 */ if (fZ) goto L_0062a532;
L_0062a51f:; BB(0x0062a51f);
    /* 0062a51f: cmp byte ptr [ebp], 0x1a */ {  u32 a = R8((u32)(r_ebp)); u32 b = 0x1au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a523: jne 0x62a532 */ if (!fZ) goto L_0062a532;
L_0062a525:; BB(0x0062a525);
    /* 0062a525: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a527: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062a528: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062a529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a52a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062a52b: add esp, 0x41c */ {  u32 a = r_esp; u32 b = 0x41cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a531: ret  */ FN_RET(0x0062a3a0); r_esp += 4; return;
L_0062a532:; BB(0x0062a532);
    /* 0062a532: mov dword ptr [0x71145c], 0x1c */ W32((u32)(0x71145cu), 0x1cu);
    /* 0062a53c: jmp 0x62a557 */ goto L_0062a557;
L_0062a53e:; BB(0x0062a53e);
    /* 0062a53e: sub eax, dword ptr [esp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062a542: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062a543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062a544: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a545: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062a546: add esp, 0x41c */ {  u32 a = r_esp; u32 b = 0x41cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a54c: ret  */ FN_RET(0x0062a3a0); r_esp += 4; return;
L_0062a54d:; BB(0x0062a54d);
    /* 0062a54d: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
L_0062a557:; BB(0x0062a557);
    /* 0062a557: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062a558: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062a559: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a55a: mov dword ptr [0x711460], 0 */ W32((u32)(0x711460u), 0x0u);
    /* 0062a564: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062a567: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062a568: add esp, 0x41c */ {  u32 a = r_esp; u32 b = 0x41cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a56e: ret  */ FN_RET(0x0062a3a0); r_esp += 4; return;
L_0062a56f:; BB(0x0062a56f);
    /* 0062a56f: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x62a575u); call_ind(t); }
    /* 0062a575: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0062a579: jmp 0x62a4c5 */ goto L_0062a4c5;
L_0062a57e:; BB(0x0062a57e);
    /* 0062a57e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062a580: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0062a584: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a585: mov ebp, dword ptr [esp + 0x438] */ r_ebp = R32((u32)(r_esp+0x438u));
    /* 0062a58c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a58d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a58e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a58f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a590: call dword ptr [0x63302c] */ { u32 t = R32((u32)(0x63302cu)); r_esp -= 4; W32(r_esp, 0x62a596u); call_ind(t); }
    /* 0062a596: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a598: je 0x62a5af */ if (fZ) goto L_0062a5af;
L_0062a59a:; BB(0x0062a59a);
    /* 0062a59a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062a59e: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0062a5a6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0062a5aa: jmp 0x62a4c9 */ goto L_0062a4c9;
L_0062a5af:; BB(0x0062a5af);
    /* 0062a5af: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x62a5b5u); call_ind(t); }
    /* 0062a5b5: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0062a5b9: jmp 0x62a4c9 */ goto L_0062a4c9;
}

void f_0062a5c0(void) /* FUN_0062a5c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a5c0);
    /* 0062a5c0: sub esp, 0x1d0 */ {  u32 a = r_esp; u32 b = 0x1d0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a5c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a5c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a5c9: mov byte ptr [esp + 0x15], al */ W8((u32)(r_esp+0x15u), (u8)r_eax);
    /* 0062a5cd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0062a5d1: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0062a5d5: mov eax, dword ptr [esp + 0x1dc] */ r_eax = R32((u32)(r_esp+0x1dcu));
    /* 0062a5dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a5dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062a5de: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062a5e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062a5e1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a5e3: je 0x62b212 */ if (fZ) goto L_0062b212;
L_0062a5e9:; BB(0x0062a5e9);
    /* 0062a5e9: mov ebp, dword ptr [esp + 0x1e4] */ r_ebp = R32((u32)(r_esp+0x1e4u));
    /* 0062a5f0: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 0062a5f4: mov esi, dword ptr [esp + 0x1e8] */ r_esi = R32((u32)(r_esp+0x1e8u));
    /* 0062a5fb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0062a5fd:; BB(0x0062a5fd);
    /* 0062a5fd: cmp dword ptr [0x6f2564], 1 */ {  u32 a = R32((u32)(0x6f2564u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062a604: jle 0x62a618 */ if ((fZ||fS!=fO)) goto L_0062a618;
L_0062a606:; BB(0x0062a606);
    /* 0062a606: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062a60b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a60d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a60e: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x62a613u); f_00628c40();
    /* 0062a613: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a616: jmp 0x62a629 */ goto L_0062a629;
L_0062a618:; BB(0x0062a618);
    /* 0062a618: mov ecx, dword ptr [0x6f2358] */ r_ecx = R32((u32)(0x6f2358u));
    /* 0062a61e: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062a623: mov al, byte ptr [ecx + eax*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax*2))) & 0xffu);
    /* 0062a626: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0062a629:; BB(0x0062a629);
    /* 0062a629: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a62b: je 0x62a680 */ if (fZ) goto L_0062a680;
L_0062a62d:; BB(0x0062a62d);
    /* 0062a62d: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062a631: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a632: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0062a636: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062a637: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a638: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a639: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0062a63d: call 0x62b390 */ r_esp -= 4; W32(r_esp, 0x62a642u); f_0062b390();
    /* 0062a642: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a645: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a646: call 0x62b370 */ r_esp -= 4; W32(r_esp, 0x62a64bu); f_0062b370();
    /* 0062a64b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a64e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062a64f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a651: mov dword ptr [esp + 0x1e8], esi */ W32((u32)(r_esp+0x1e8u), r_esi);
    /* 0062a658: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0062a65a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a65b: call 0x625830 */ r_esp -= 4; W32(r_esp, 0x62a660u); f_00625830();
    /* 0062a660: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a663: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a665: je 0x62a680 */ if (fZ) goto L_0062a680;
L_0062a667:; BB(0x0062a667);
    /* 0062a667: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062a668: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a66a: mov dword ptr [esp + 0x1e8], esi */ W32((u32)(r_esp+0x1e8u), r_esi);
    /* 0062a671: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0062a673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a674: call 0x625830 */ r_esp -= 4; W32(r_esp, 0x62a679u); f_00625830();
    /* 0062a679: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a67c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a67e: jne 0x62a667 */ if (!fZ) goto L_0062a667;
L_0062a680:; BB(0x0062a680);
    /* 0062a680: cmp byte ptr [esi], 0x25 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x25u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a683: jne 0x62b167 */ if (!fZ) goto L_0062b167;
L_0062a689:; BB(0x0062a689);
    /* 0062a689: mov ecx, dword ptr [esp + 0x1e8] */ r_ecx = R32((u32)(r_esp+0x1e8u));
    /* 0062a690: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 0062a694: mov byte ptr [esp + 0x2c], 0 */ W8((u32)(r_esp+0x2cu), 0x0u);
    /* 0062a699: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 0062a69d: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0062a6a1: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0062a6a5: mov byte ptr [esp + 0x23], 0 */ W8((u32)(r_esp+0x23u), 0x0u);
    /* 0062a6aa: mov byte ptr [esp + 0x22], 0 */ W8((u32)(r_esp+0x22u), 0x0u);
    /* 0062a6af: mov byte ptr [esp + 0x1b], 0 */ W8((u32)(r_esp+0x1bu), 0x0u);
    /* 0062a6b4: mov byte ptr [esp + 0x13], 0 */ W8((u32)(r_esp+0x13u), 0x0u);
    /* 0062a6b9: mov byte ptr [esp + 0x20], 0 */ W8((u32)(r_esp+0x20u), 0x0u);
    /* 0062a6be: mov byte ptr [esp + 0x19], 0 */ W8((u32)(r_esp+0x19u), 0x0u);
    /* 0062a6c3: mov byte ptr [esp + 0x1a], 1 */ W8((u32)(r_esp+0x1au), 0x1u);
    /* 0062a6c8: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
L_0062a6cc:; BB(0x0062a6cc);
    /* 0062a6cc: mov eax, dword ptr [0x6f2564] */ r_eax = R32((u32)(0x6f2564u));
    /* 0062a6d1: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a6d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062a6d4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062a6d7: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0062a6d9: mov dword ptr [esp + 0x1e8], ecx */ W32((u32)(r_esp+0x1e8u), r_ecx);
    /* 0062a6e0: mov esi, edx */ r_esi = r_edx;
    /* 0062a6e2: jle 0x62a6ff */ if ((fZ||fS!=fO)) goto L_0062a6ff;
L_0062a6e4:; BB(0x0062a6e4);
    /* 0062a6e4: mov eax, esi */ r_eax = r_esi;
    /* 0062a6e6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a6e8: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062a6ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a6ee: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x62a6f3u); f_00628c40();
    /* 0062a6f3: mov ecx, dword ptr [esp + 0x1f0] */ r_ecx = R32((u32)(r_esp+0x1f0u));
    /* 0062a6fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a6fd: jmp 0x62a712 */ goto L_0062a712;
L_0062a6ff:; BB(0x0062a6ff);
    /* 0062a6ff: mov eax, dword ptr [0x6f2358] */ r_eax = R32((u32)(0x6f2358u));
    /* 0062a704: mov edx, esi */ r_edx = r_esi;
    /* 0062a706: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062a70c: mov al, byte ptr [eax + edx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_edx*2))) & 0xffu);
    /* 0062a70f: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0062a712:; BB(0x0062a712);
    /* 0062a712: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a714: je 0x62a730 */ if (fZ) goto L_0062a730;
L_0062a716:; BB(0x0062a716);
    /* 0062a716: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0062a71a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a71b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0062a71f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062a723: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0062a726: lea eax, [esi + edx*2 - 0x30] */ r_eax = (u32)(r_esi+r_edx*2+0xffffffd0u);
    /* 0062a72a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062a72e: jmp 0x62a79a */ goto L_0062a79a;
L_0062a730:; BB(0x0062a730);
    /* 0062a730: lea eax, [esi - 0x2a] */ r_eax = (u32)(r_esi+0xffffffd6u);
    /* 0062a733: cmp eax, 0x4d */ {  u32 a = r_eax; u32 b = 0x4du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062a736: ja 0x62a796 */ if ((!fC&&!fZ)) goto L_0062a796;
L_0062a738:; BB(0x0062a738);
    /* 0062a738: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062a73a: mov dl, byte ptr [eax + 0x62b260] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x62b260u))) & 0xffu);
    /* 0062a740: jmp dword ptr [edx*4 + 0x62b23c] */ { u32 t = R32((u32)(r_edx*4+0x62b23cu)); switch (t) { case 0x62a790u: goto L_0062a790; case 0x62a79au: goto L_0062a79a; case 0x62a75du: goto L_0062a75d; case 0x62a780u: goto L_0062a780; case 0x62a747u: goto L_0062a747; case 0x62a786u: goto L_0062a786; case 0x62a78au: goto L_0062a78a; case 0x62a796u: goto L_0062a796; default: UNSUP(0x0062a740, "jump table entry is not a known target"); } }
L_0062a747:; BB(0x0062a747);
    /* 0062a747: mov dl, byte ptr [esp + 0x1a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esp+0x1au))) & 0xffu);
    /* 0062a74b: mov al, byte ptr [esp + 0x19] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x19u))) & 0xffu);
    /* 0062a74f: dec dl */ { u32 x = (u8)r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062a751: dec al */ { u32 x = (u8)r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062a753: mov byte ptr [esp + 0x1a], dl */ W8((u32)(r_esp+0x1au), (u8)r_edx);
    /* 0062a757: mov byte ptr [esp + 0x19], al */ W8((u32)(r_esp+0x19u), (u8)r_eax);
    /* 0062a75b: jmp 0x62a79a */ goto L_0062a79a;
L_0062a75d:; BB(0x0062a75d);
    /* 0062a75d: cmp byte ptr [ecx + 1], 0x36 */ {  u32 a = R8((u32)(r_ecx+0x1u)); u32 b = 0x36u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a761: jne 0x62a796 */ if (!fZ) goto L_0062a796;
L_0062a763:; BB(0x0062a763);
    /* 0062a763: cmp byte ptr [ecx + 2], 0x34 */ {  u32 a = R8((u32)(r_ecx+0x2u)); u32 b = 0x34u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a767: jne 0x62a796 */ if (!fZ) goto L_0062a796;
L_0062a769:; BB(0x0062a769);
    /* 0062a769: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a76c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062a76d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a76f: mov dword ptr [esp + 0x1e8], ecx */ W32((u32)(r_esp+0x1e8u), r_ecx);
    /* 0062a776: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0062a77a: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0062a77e: jmp 0x62a79a */ goto L_0062a79a;
L_0062a780:; BB(0x0062a780);
    /* 0062a780: inc byte ptr [esp + 0x1a] */ { u32 ad = (u32)(r_esp+0x1au); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0062a784: jmp 0x62a79a */ goto L_0062a79a;
L_0062a786:; BB(0x0062a786);
    /* 0062a786: inc byte ptr [esp + 0x1a] */ { u32 ad = (u32)(r_esp+0x1au); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0062a78a:; BB(0x0062a78a);
    /* 0062a78a: inc byte ptr [esp + 0x19] */ { u32 ad = (u32)(r_esp+0x19u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0062a78e: jmp 0x62a79a */ goto L_0062a79a;
L_0062a790:; BB(0x0062a790);
    /* 0062a790: inc byte ptr [esp + 0x1b] */ { u32 ad = (u32)(r_esp+0x1bu); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0062a794: jmp 0x62a79a */ goto L_0062a79a;
L_0062a796:; BB(0x0062a796);
    /* 0062a796: inc byte ptr [esp + 0x13] */ { u32 ad = (u32)(r_esp+0x13u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0062a79a:; BB(0x0062a79a);
    /* 0062a79a: mov al, byte ptr [esp + 0x13] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x13u))) & 0xffu);
    /* 0062a79e: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a7a0: je 0x62a6cc */ if (fZ) goto L_0062a6cc;
L_0062a7a6:; BB(0x0062a7a6);
    /* 0062a7a6: mov al, byte ptr [esp + 0x1b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x1bu))) & 0xffu);
    /* 0062a7aa: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 0062a7ae: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a7b0: jne 0x62a7ce */ if (!fZ) goto L_0062a7ce;
L_0062a7b2:; BB(0x0062a7b2);
    /* 0062a7b2: mov eax, dword ptr [esp + 0x1ec] */ r_eax = R32((u32)(r_esp+0x1ecu));
    /* 0062a7b9: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0062a7bd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a7c0: mov dword ptr [esp + 0x1ec], eax */ W32((u32)(r_esp+0x1ecu), r_eax);
    /* 0062a7c7: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 0062a7ca: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
L_0062a7ce:; BB(0x0062a7ce);
    /* 0062a7ce: mov al, byte ptr [esp + 0x19] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x19u))) & 0xffu);
    /* 0062a7d2: mov byte ptr [esp + 0x13], 0 */ W8((u32)(r_esp+0x13u), 0x0u);
    /* 0062a7d7: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a7d9: jne 0x62a7ef */ if (!fZ) goto L_0062a7ef;
L_0062a7db:; BB(0x0062a7db);
    /* 0062a7db: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0062a7dd: cmp al, 0x53 */ {  u32 a = (u8)r_eax; u32 b = 0x53u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a7df: je 0x62a7ea */ if (fZ) goto L_0062a7ea;
L_0062a7e1:; BB(0x0062a7e1);
    /* 0062a7e1: cmp al, 0x43 */ {  u32 a = (u8)r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a7e3: mov byte ptr [esp + 0x19], 0xff */ W8((u32)(r_esp+0x19u), 0xffu);
    /* 0062a7e8: jne 0x62a7ef */ if (!fZ) goto L_0062a7ef;
L_0062a7ea:; BB(0x0062a7ea);
    /* 0062a7ea: mov byte ptr [esp + 0x19], 1 */ W8((u32)(r_esp+0x19u), 0x1u);
L_0062a7ef:; BB(0x0062a7ef);
    /* 0062a7ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a7f1: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0062a7f3: or al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062a7f5: cmp eax, 0x6e */ {  u32 a = r_eax; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a7f8: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0062a7fc: je 0x62a82c */ if (fZ) goto L_0062a82c;
L_0062a7fe:; BB(0x0062a7fe);
    /* 0062a7fe: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a801: je 0x62a818 */ if (fZ) goto L_0062a818;
L_0062a803:; BB(0x0062a803);
    /* 0062a803: cmp eax, 0x7b */ {  u32 a = r_eax; u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a806: je 0x62a818 */ if (fZ) goto L_0062a818;
L_0062a808:; BB(0x0062a808);
    /* 0062a808: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0062a80c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a80d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a80e: call 0x62b390 */ r_esp -= 4; W32(r_esp, 0x62a813u); f_0062b390();
    /* 0062a813: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a816: jmp 0x62a82a */ goto L_0062a82a;
L_0062a818:; BB(0x0062a818);
    /* 0062a818: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0062a81c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a81d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062a81e: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0062a822: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62a827u); f_0062b340();
    /* 0062a827: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062a82a:; BB(0x0062a82a);
    /* 0062a82a: mov ebx, eax */ r_ebx = r_eax;
L_0062a82c:; BB(0x0062a82c);
    /* 0062a82c: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0062a830: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a832: je 0x62a840 */ if (fZ) goto L_0062a840;
L_0062a834:; BB(0x0062a834);
    /* 0062a834: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062a838: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a83a: je 0x62b1fd */ if (fZ) goto L_0062b1fd;
L_0062a840:; BB(0x0062a840);
    /* 0062a840: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0062a844: lea eax, [esi - 0x63] */ r_eax = (u32)(r_esi+0xffffff9du);
    /* 0062a847: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062a84a: ja 0x62b10f */ if ((!fC&&!fZ)) goto L_0062b10f;
L_0062a850:; BB(0x0062a850);
    /* 0062a850: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062a852: mov dl, byte ptr [eax + 0x62b2e0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x62b2e0u))) & 0xffu);
    /* 0062a858: jmp dword ptr [edx*4 + 0x62b2b0] */ { u32 t = R32((u32)(r_edx*4+0x62b2b0u)); switch (t) { case 0x62a85fu: goto L_0062a85f; case 0x62abb9u: goto L_0062abb9; case 0x62aee2u: goto L_0062aee2; case 0x62aaf8u: goto L_0062aaf8; case 0x62aea1u: goto L_0062aea1; case 0x62abb4u: goto L_0062abb4; case 0x62a888u: goto L_0062a888; case 0x62ab01u: goto L_0062ab01; case 0x62a89cu: goto L_0062a89c; case 0x62b10fu: goto L_0062b10f; default: UNSUP(0x0062a858, "jump table entry is not a known target"); } }
L_0062a85f:; BB(0x0062a85f);
    /* 0062a85f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a861: jne 0x62a874 */ if (!fZ) goto L_0062a874;
L_0062a863:; BB(0x0062a863);
    /* 0062a863: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062a867: mov dword ptr [esp + 0x30], 1 */ W32((u32)(r_esp+0x30u), 0x1u);
    /* 0062a86f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a870: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
L_0062a874:; BB(0x0062a874);
    /* 0062a874: mov al, byte ptr [esp + 0x19] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x19u))) & 0xffu);
    /* 0062a878: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = 0; }
    /* 0062a87a: jle 0x62a881 */ if ((fZ||fS!=fO)) goto L_0062a881;
L_0062a87c:; BB(0x0062a87c);
    /* 0062a87c: mov byte ptr [esp + 0x20], 1 */ W8((u32)(r_esp+0x20u), 0x1u);
L_0062a881:; BB(0x0062a881);
    /* 0062a881: mov edx, 0x6f274c */ r_edx = 0x6f274cu;
    /* 0062a886: jmp 0x62a8be */ goto L_0062a8be;
L_0062a888:; BB(0x0062a888);
    /* 0062a888: mov al, byte ptr [esp + 0x19] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x19u))) & 0xffu);
    /* 0062a88c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = 0; }
    /* 0062a88e: jle 0x62a895 */ if ((fZ||fS!=fO)) goto L_0062a895;
L_0062a890:; BB(0x0062a890);
    /* 0062a890: mov byte ptr [esp + 0x20], 1 */ W8((u32)(r_esp+0x20u), 0x1u);
L_0062a895:; BB(0x0062a895);
    /* 0062a895: mov edx, 0x6f2744 */ r_edx = 0x6f2744u;
    /* 0062a89a: jmp 0x62a8be */ goto L_0062a8be;
L_0062a89c:; BB(0x0062a89c);
    /* 0062a89c: mov al, byte ptr [esp + 0x19] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x19u))) & 0xffu);
    /* 0062a8a0: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = 0; }
    /* 0062a8a2: jle 0x62a8a9 */ if ((fZ||fS!=fO)) goto L_0062a8a9;
L_0062a8a4:; BB(0x0062a8a4);
    /* 0062a8a4: mov byte ptr [esp + 0x20], 1 */ W8((u32)(r_esp+0x20u), 0x1u);
L_0062a8a9:; BB(0x0062a8a9);
    /* 0062a8a9: mov edx, dword ptr [esp + 0x1e8] */ r_edx = R32((u32)(r_esp+0x1e8u));
    /* 0062a8b0: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062a8b1: mov dword ptr [esp + 0x1e8], edx */ W32((u32)(r_esp+0x1e8u), r_edx);
    /* 0062a8b8: cmp byte ptr [edx], 0x5e */ {  u32 a = R8((u32)(r_edx)); u32 b = 0x5eu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a8bb: jne 0x62a8c3 */ if (!fZ) goto L_0062a8c3;
L_0062a8bd:; BB(0x0062a8bd);
    /* 0062a8bd: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0062a8be:; BB(0x0062a8be);
    /* 0062a8be: mov byte ptr [esp + 0x23], 0xff */ W8((u32)(r_esp+0x23u), 0xffu);
L_0062a8c3:; BB(0x0062a8c3);
    /* 0062a8c3: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0062a8c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a8ca: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 0062a8ce: cmp esi, 0x7b */ {  u32 a = r_esi; u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a8d1: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062a8d3: jne 0x62a8e5 */ if (!fZ) goto L_0062a8e5;
L_0062a8d5:; BB(0x0062a8d5);
    /* 0062a8d5: cmp byte ptr [edx], 0x5d */ {  u32 a = R8((u32)(r_edx)); u32 b = 0x5du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a8d8: jne 0x62a8e5 */ if (!fZ) goto L_0062a8e5;
L_0062a8da:; BB(0x0062a8da);
    /* 0062a8da: mov byte ptr [esp + 0x2c], 0x5d */ W8((u32)(r_esp+0x2cu), 0x5du);
    /* 0062a8df: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062a8e0: mov byte ptr [esp + 0x6b], 0x20 */ W8((u32)(r_esp+0x6bu), 0x20u);
L_0062a8e5:; BB(0x0062a8e5);
    /* 0062a8e5: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0062a8e7: cmp al, 0x5d */ {  u32 a = (u8)r_eax; u32 b = 0x5du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a8e9: je 0x62a993 */ if (fZ) goto L_0062a993;
L_0062a8ef:; BB(0x0062a8ef);
    /* 0062a8ef: mov cl, al */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 0062a8f1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062a8f2: cmp cl, 0x2d */ {  u32 a = (u8)r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a8f5: mov byte ptr [esp + 0x5c], cl */ W8((u32)(r_esp+0x5cu), (u8)r_ecx);
    /* 0062a8f9: jne 0x62a969 */ if (!fZ) goto L_0062a969;
L_0062a8fb:; BB(0x0062a8fb);
    /* 0062a8fb: mov al, byte ptr [esp + 0x2c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x2cu))) & 0xffu);
    /* 0062a8ff: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a901: je 0x62a969 */ if (fZ) goto L_0062a969;
L_0062a903:; BB(0x0062a903);
    /* 0062a903: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0062a905: cmp al, 0x5d */ {  u32 a = (u8)r_eax; u32 b = 0x5du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a907: je 0x62a969 */ if (fZ) goto L_0062a969;
L_0062a909:; BB(0x0062a909);
    /* 0062a909: mov cl, byte ptr [esp + 0x2c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0x2cu))) & 0xffu);
    /* 0062a90d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062a90e: cmp cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 0062a910: jae 0x62a918 */ if (!fC) goto L_0062a918;
L_0062a912:; BB(0x0062a912);
    /* 0062a912: mov byte ptr [esp + 0x4c], al */ W8((u32)(r_esp+0x4cu), (u8)r_eax);
    /* 0062a916: jmp 0x62a922 */ goto L_0062a922;
L_0062a918:; BB(0x0062a918);
    /* 0062a918: mov byte ptr [esp + 0x4c], cl */ W8((u32)(r_esp+0x4cu), (u8)r_ecx);
    /* 0062a91c: mov byte ptr [esp + 0x2c], al */ W8((u32)(r_esp+0x2cu), (u8)r_eax);
    /* 0062a920: mov cl, al */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
L_0062a922:; BB(0x0062a922);
    /* 0062a922: cmp cl, byte ptr [esp + 0x4c] */ {  u32 a = (u8)r_ecx; u32 b = R8((u32)(r_esp+0x4cu)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062a926: ja 0x62a95b */ if ((!fC&&!fZ)) goto L_0062a95b;
L_0062a928:; BB(0x0062a928);
    /* 0062a928: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0062a92c: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 0062a930: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0062a936: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0062a93c: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0062a93e: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0062a93f:; BB(0x0062a93f);
    /* 0062a93f: mov eax, esi */ r_eax = r_esi;
    /* 0062a941: mov ecx, esi */ r_ecx = r_esi;
    /* 0062a943: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0062a946: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0062a949: lea edi, [esp + eax + 0x60] */ r_edi = (u32)(r_esp+r_eax+0x60u);
    /* 0062a94d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0062a94f: shl al, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (a << c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0062a951: mov cl, byte ptr [edi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0062a953: or cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062a955: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062a956: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0062a957: mov byte ptr [edi], cl */ W8((u32)(r_edi), (u8)r_ecx);
    /* 0062a959: jne 0x62a93f */ if (!fZ) goto L_0062a93f;
L_0062a95b:; BB(0x0062a95b);
    /* 0062a95b: mov ebp, dword ptr [esp + 0x1e4] */ r_ebp = R32((u32)(r_esp+0x1e4u));
    /* 0062a962: mov byte ptr [esp + 0x2c], 0 */ W8((u32)(r_esp+0x2cu), 0x0u);
    /* 0062a967: jmp 0x62a989 */ goto L_0062a989;
L_0062a969:; BB(0x0062a969);
    /* 0062a969: mov byte ptr [esp + 0x2c], cl */ W8((u32)(r_esp+0x2cu), (u8)r_ecx);
    /* 0062a96d: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 0062a971: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a977: mov eax, ecx */ r_eax = r_ecx;
    /* 0062a979: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a97c: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0062a97f: lea esi, [esp + eax + 0x60] */ r_esi = (u32)(r_esp+r_eax+0x60u);
    /* 0062a983: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0062a985: shl al, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (a << c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0062a987: or byte ptr [esi], al */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0062a989:; BB(0x0062a989);
    /* 0062a989: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0062a98b: cmp al, 0x5d */ {  u32 a = (u8)r_eax; u32 b = 0x5du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a98d: jne 0x62a8ef */ if (!fZ) goto L_0062a8ef;
L_0062a993:; BB(0x0062a993);
    /* 0062a993: cmp byte ptr [edx], 0 */ {  u32 a = R8((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062a996: je 0x62b216 */ if (fZ) goto L_0062b216;
L_0062a99c:; BB(0x0062a99c);
    /* 0062a99c: cmp dword ptr [esp + 0x24], 0x7b */ {  u32 a = R32((u32)(r_esp+0x24u)); u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a9a1: jne 0x62a9aa */ if (!fZ) goto L_0062a9aa;
L_0062a9a3:; BB(0x0062a9a3);
    /* 0062a9a3: mov dword ptr [esp + 0x1e8], edx */ W32((u32)(r_esp+0x1e8u), r_edx);
L_0062a9aa:; BB(0x0062a9aa);
    /* 0062a9aa: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062a9ae: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0062a9b2: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062a9b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9b5: mov esi, edi */ r_esi = r_edi;
    /* 0062a9b7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062a9bb: call 0x62b370 */ r_esp -= 4; W32(r_esp, 0x62a9c0u); f_0062b370();
    /* 0062a9c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062a9c3:; BB(0x0062a9c3);
    /* 0062a9c3: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0062a9c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a9c9: je 0x62a9de */ if (fZ) goto L_0062a9de;
L_0062a9cb:; BB(0x0062a9cb);
    /* 0062a9cb: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062a9cf: mov ecx, eax */ r_ecx = r_eax;
    /* 0062a9d1: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062a9d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a9d4: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062a9d8: je 0x62aaa8 */ if (fZ) goto L_0062aaa8;
L_0062a9de:; BB(0x0062a9de);
    /* 0062a9de: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062a9e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9e3: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062a9e4: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062a9e8: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62a9edu); f_0062b340();
    /* 0062a9ed: mov ebx, eax */ r_ebx = r_eax;
    /* 0062a9ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a9f2: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a9f5: je 0x62aa8f */ if (fZ) goto L_0062aa8f;
L_0062a9fb:; BB(0x0062a9fb);
    /* 0062a9fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062a9fd: mov edx, 1 */ r_edx = 0x1u;
    /* 0062aa02: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062aa05: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0062aa08: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062aa0a: movsx ecx, byte ptr [esp + eax + 0x60] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+r_eax+0x60u));
    /* 0062aa0f: movsx eax, byte ptr [esp + 0x23] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x23u));
    /* 0062aa14: xor ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062aa16: test ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062aa18: je 0x62aa8f */ if (fZ) goto L_0062aa8f;
L_0062aa1a:; BB(0x0062aa1a);
    /* 0062aa1a: mov al, byte ptr [esp + 0x1b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x1bu))) & 0xffu);
    /* 0062aa1e: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062aa20: jne 0x62aa89 */ if (!fZ) goto L_0062aa89;
L_0062aa22:; BB(0x0062aa22);
    /* 0062aa22: mov al, byte ptr [esp + 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x20u))) & 0xffu);
    /* 0062aa26: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062aa28: je 0x62aa81 */ if (fZ) goto L_0062aa81;
L_0062aa2a:; BB(0x0062aa2a);
    /* 0062aa2a: mov edx, dword ptr [0x6f2358] */ r_edx = R32((u32)(0x6f2358u));
    /* 0062aa30: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062aa32: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062aa38: mov byte ptr [esp + 0x42], bl */ W8((u32)(r_esp+0x42u), (u8)r_ebx);
    /* 0062aa3c: test byte ptr [edx + ecx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_edx+r_ecx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062aa41: je 0x62aa59 */ if (fZ) goto L_0062aa59;
L_0062aa43:; BB(0x0062aa43);
    /* 0062aa43: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062aa47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa48: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062aa49: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0062aa4d: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62aa52u); f_0062b340();
    /* 0062aa52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062aa55: mov byte ptr [esp + 0x43], al */ W8((u32)(r_esp+0x43u), (u8)r_eax);
L_0062aa59:; BB(0x0062aa59);
    /* 0062aa59: mov eax, dword ptr [0x6f2564] */ r_eax = R32((u32)(0x6f2564u));
    /* 0062aa5e: lea ecx, [esp + 0x42] */ r_ecx = (u32)(r_esp+0x42u);
    /* 0062aa62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa63: lea edx, [esp + 0x56] */ r_edx = (u32)(r_esp+0x56u);
    /* 0062aa67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa69: call 0x630310 */ r_esp -= 4; W32(r_esp, 0x62aa6eu); f_00630310();
    /* 0062aa6e: mov ax, word ptr [esp + 0x5e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esp+0x5eu))) & 0xffffu);
    /* 0062aa73: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062aa76: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0062aa79: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062aa7c: jmp 0x62a9c3 */ goto L_0062a9c3;
L_0062aa81:; BB(0x0062aa81);
    /* 0062aa81: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 0062aa83: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062aa84: jmp 0x62a9c3 */ goto L_0062a9c3;
L_0062aa89:; BB(0x0062aa89);
    /* 0062aa89: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062aa8a: jmp 0x62a9c3 */ goto L_0062a9c3;
L_0062aa8f:; BB(0x0062aa8f);
    /* 0062aa8f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062aa93: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa94: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062aa95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa96: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0062aa9a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062aa9e: call 0x62b370 */ r_esp -= 4; W32(r_esp, 0x62aaa3u); f_0062b370();
    /* 0062aaa3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062aaa6: jmp 0x62aaac */ goto L_0062aaac;
L_0062aaa8:; BB(0x0062aaa8);
    /* 0062aaa8: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
L_0062aaac:; BB(0x0062aaac);
    /* 0062aaac: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062aaae: je 0x62b216 */ if (fZ) goto L_0062b216;
L_0062aab4:; BB(0x0062aab4);
    /* 0062aab4: mov al, byte ptr [esp + 0x1b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x1bu))) & 0xffu);
    /* 0062aab8: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062aaba: jne 0x62b148 */ if (!fZ) goto L_0062b148;
L_0062aac0:; BB(0x0062aac0);
    /* 0062aac0: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0062aac4: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0062aac8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062aac9: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062aacc: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0062aad0: je 0x62b148 */ if (fZ) goto L_0062b148;
L_0062aad6:; BB(0x0062aad6);
    /* 0062aad6: mov al, byte ptr [esp + 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x20u))) & 0xffu);
    /* 0062aada: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062aadc: je 0x62aaec */ if (fZ) goto L_0062aaec;
L_0062aade:; BB(0x0062aade);
    /* 0062aade: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0062aae2: mov word ptr [ecx], 0 */ W16((u32)(r_ecx), 0x0u);
    /* 0062aae7: jmp 0x62b148 */ goto L_0062b148;
L_0062aaec:; BB(0x0062aaec);
    /* 0062aaec: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0062aaf0: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0062aaf3: jmp 0x62b148 */ goto L_0062b148;
L_0062aaf8:; BB(0x0062aaf8);
    /* 0062aaf8: mov esi, 0x64 */ r_esi = 0x64u;
    /* 0062aafd: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
L_0062ab01:; BB(0x0062ab01);
    /* 0062ab01: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ab04: jne 0x62ab0d */ if (!fZ) goto L_0062ab0d;
L_0062ab06:; BB(0x0062ab06);
    /* 0062ab06: mov byte ptr [esp + 0x22], 1 */ W8((u32)(r_esp+0x22u), 0x1u);
    /* 0062ab0b: jmp 0x62ab12 */ goto L_0062ab12;
L_0062ab0d:; BB(0x0062ab0d);
    /* 0062ab0d: cmp ebx, 0x2b */ {  u32 a = r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ab10: jne 0x62ab3c */ if (!fZ) goto L_0062ab3c;
L_0062ab12:; BB(0x0062ab12);
    /* 0062ab12: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062ab16: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062ab17: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062ab1b: jne 0x62ab28 */ if (!fZ) goto L_0062ab28;
L_0062ab1d:; BB(0x0062ab1d);
    /* 0062ab1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ab1f: je 0x62ab28 */ if (fZ) goto L_0062ab28;
L_0062ab21:; BB(0x0062ab21);
    /* 0062ab21: mov byte ptr [esp + 0x13], 1 */ W8((u32)(r_esp+0x13u), 0x1u);
    /* 0062ab26: jmp 0x62ab3c */ goto L_0062ab3c;
L_0062ab28:; BB(0x0062ab28);
    /* 0062ab28: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062ab2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ab2d: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062ab2e: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062ab32: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62ab37u); f_0062b340();
    /* 0062ab37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ab3a: mov ebx, eax */ r_ebx = r_eax;
L_0062ab3c:; BB(0x0062ab3c);
    /* 0062ab3c: cmp ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ab3f: jne 0x62abf4 */ if (!fZ) goto L_0062abf4;
L_0062ab45:; BB(0x0062ab45);
    /* 0062ab45: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062ab49: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ab4a: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062ab4b: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062ab4f: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62ab54u); f_0062b340();
    /* 0062ab54: mov ebx, eax */ r_ebx = r_eax;
    /* 0062ab56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ab59: cmp bl, 0x78 */ {  u32 a = (u8)r_ebx; u32 b = 0x78u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062ab5c: je 0x62ab95 */ if (fZ) goto L_0062ab95;
L_0062ab5e:; BB(0x0062ab5e);
    /* 0062ab5e: cmp bl, 0x58 */ {  u32 a = (u8)r_ebx; u32 b = 0x58u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062ab61: je 0x62ab95 */ if (fZ) goto L_0062ab95;
L_0062ab63:; BB(0x0062ab63);
    /* 0062ab63: cmp esi, 0x78 */ {  u32 a = r_esi; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ab66: mov dword ptr [esp + 0x38], 1 */ W32((u32)(r_esp+0x38u), 0x1u);
    /* 0062ab6e: je 0x62ab7b */ if (fZ) goto L_0062ab7b;
L_0062ab70:; BB(0x0062ab70);
    /* 0062ab70: mov esi, 0x6f */ r_esi = 0x6fu;
    /* 0062ab75: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0062ab79: jmp 0x62abf4 */ goto L_0062abf4;
L_0062ab7b:; BB(0x0062ab7b);
    /* 0062ab7b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062ab7f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ab80: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062ab81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ab82: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062ab86: call 0x62b370 */ r_esp -= 4; W32(r_esp, 0x62ab8bu); f_0062b370();
    /* 0062ab8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ab8e: mov ebx, 0x30 */ r_ebx = 0x30u;
    /* 0062ab93: jmp 0x62abf4 */ goto L_0062abf4;
L_0062ab95:; BB(0x0062ab95);
    /* 0062ab95: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0062ab99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ab9a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062ab9b: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0062ab9f: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62aba4u); f_0062b340();
    /* 0062aba4: mov esi, 0x78 */ r_esi = 0x78u;
    /* 0062aba9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062abac: mov ebx, eax */ r_ebx = r_eax;
    /* 0062abae: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0062abb2: jmp 0x62abf4 */ goto L_0062abf4;
L_0062abb4:; BB(0x0062abb4);
    /* 0062abb4: mov byte ptr [esp + 0x1a], 1 */ W8((u32)(r_esp+0x1au), 0x1u);
L_0062abb9:; BB(0x0062abb9);
    /* 0062abb9: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062abbc: jne 0x62abc5 */ if (!fZ) goto L_0062abc5;
L_0062abbe:; BB(0x0062abbe);
    /* 0062abbe: mov byte ptr [esp + 0x22], 1 */ W8((u32)(r_esp+0x22u), 0x1u);
    /* 0062abc3: jmp 0x62abca */ goto L_0062abca;
L_0062abc5:; BB(0x0062abc5);
    /* 0062abc5: cmp ebx, 0x2b */ {  u32 a = r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062abc8: jne 0x62abf4 */ if (!fZ) goto L_0062abf4;
L_0062abca:; BB(0x0062abca);
    /* 0062abca: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062abce: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062abcf: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062abd3: jne 0x62abe0 */ if (!fZ) goto L_0062abe0;
L_0062abd5:; BB(0x0062abd5);
    /* 0062abd5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062abd7: je 0x62abe0 */ if (fZ) goto L_0062abe0;
L_0062abd9:; BB(0x0062abd9);
    /* 0062abd9: mov byte ptr [esp + 0x13], 1 */ W8((u32)(r_esp+0x13u), 0x1u);
    /* 0062abde: jmp 0x62abf4 */ goto L_0062abf4;
L_0062abe0:; BB(0x0062abe0);
    /* 0062abe0: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062abe4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062abe5: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062abe6: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062abea: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62abefu); f_0062b340();
    /* 0062abef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062abf2: mov ebx, eax */ r_ebx = r_eax;
L_0062abf4:; BB(0x0062abf4);
    /* 0062abf4: mov al, byte ptr [esp + 0x13] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x13u))) & 0xffu);
    /* 0062abf8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062abfa: je 0x62ad59 */ if (fZ) goto L_0062ad59;
L_0062ac00:; BB(0x0062ac00);
    /* 0062ac00: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ac02: jne 0x62ad31 */ if (!fZ) goto L_0062ad31;
L_0062ac08:; BB(0x0062ac08);
    /* 0062ac08: mov ebp, dword ptr [esp + 0x1e4] */ r_ebp = R32((u32)(r_esp+0x1e4u));
    /* 0062ac0f: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 0062ac13: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
L_0062ac17:; BB(0x0062ac17);
    /* 0062ac17: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0062ac1b: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ac1e: mov eax, dword ptr [0x6f2564] */ r_eax = R32((u32)(0x6f2564u));
    /* 0062ac23: jne 0x62ac6a */ if (!fZ) goto L_0062ac6a;
L_0062ac25:; BB(0x0062ac25);
    /* 0062ac25: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ac28: jle 0x62ac3a */ if ((fZ||fS!=fO)) goto L_0062ac3a;
L_0062ac2a:; BB(0x0062ac2a);
    /* 0062ac2a: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ac2f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ac30: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x62ac35u); f_00628c40();
    /* 0062ac35: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ac38: jmp 0x62ac47 */ goto L_0062ac47;
L_0062ac3a:; BB(0x0062ac3a);
    /* 0062ac3a: mov eax, dword ptr [0x6f2358] */ r_eax = R32((u32)(0x6f2358u));
    /* 0062ac3f: mov al, byte ptr [eax + ebx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*2))) & 0xffu);
    /* 0062ac42: and eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0062ac47:; BB(0x0062ac47);
    /* 0062ac47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ac49: je 0x62acbd */ if (fZ) goto L_0062acbd;
L_0062ac4b:; BB(0x0062ac4b);
    /* 0062ac4b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 0062ac50: mov eax, esi */ r_eax = r_esi;
    /* 0062ac52: mov edx, edi */ r_edx = r_edi;
    /* 0062ac54: call 0x630410 */ r_esp -= 4; W32(r_esp, 0x62ac59u); f_00630410();
    /* 0062ac59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ac5a: mov esi, eax */ r_esi = r_eax;
    /* 0062ac5c: mov edi, edx */ r_edi = r_edx;
    /* 0062ac5e: call 0x62b300 */ r_esp -= 4; W32(r_esp, 0x62ac63u); f_0062b300();
    /* 0062ac63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ac66: mov ebx, eax */ r_ebx = r_eax;
    /* 0062ac68: jmp 0x62acc1 */ goto L_0062acc1;
L_0062ac6a:; BB(0x0062ac6a);
    /* 0062ac6a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ac6d: jle 0x62ac7c */ if ((fZ||fS!=fO)) goto L_0062ac7c;
L_0062ac6f:; BB(0x0062ac6f);
    /* 0062ac6f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ac71: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ac72: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x62ac77u); f_00628c40();
    /* 0062ac77: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ac7a: jmp 0x62ac88 */ goto L_0062ac88;
L_0062ac7c:; BB(0x0062ac7c);
    /* 0062ac7c: mov ecx, dword ptr [0x6f2358] */ r_ecx = R32((u32)(0x6f2358u));
    /* 0062ac82: mov al, byte ptr [ecx + ebx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_ebx*2))) & 0xffu);
    /* 0062ac85: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0062ac88:; BB(0x0062ac88);
    /* 0062ac88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ac8a: je 0x62acbd */ if (fZ) goto L_0062acbd;
L_0062ac8c:; BB(0x0062ac8c);
    /* 0062ac8c: cmp dword ptr [esp + 0x24], 0x6f */ {  u32 a = R32((u32)(r_esp+0x24u)); u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ac91: jne 0x62acac */ if (!fZ) goto L_0062acac;
L_0062ac93:; BB(0x0062ac93);
    /* 0062ac93: cmp ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ac96: jge 0x62acbd */ if ((fS==fO)) goto L_0062acbd;
L_0062ac98:; BB(0x0062ac98);
    /* 0062ac98: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0062ac9d: mov eax, esi */ r_eax = r_esi;
    /* 0062ac9f: mov edx, edi */ r_edx = r_edi;
    /* 0062aca1: call 0x630410 */ r_esp -= 4; W32(r_esp, 0x62aca6u); f_00630410();
    /* 0062aca6: mov esi, eax */ r_esi = r_eax;
    /* 0062aca8: mov edi, edx */ r_edi = r_edx;
    /* 0062acaa: jmp 0x62acc1 */ goto L_0062acc1;
L_0062acac:; BB(0x0062acac);
    /* 0062acac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062acae: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0062acb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062acb1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062acb2: call 0x6261f0 */ r_esp -= 4; W32(r_esp, 0x62acb7u); f_006261f0();
    /* 0062acb7: mov esi, eax */ r_esi = r_eax;
    /* 0062acb9: mov edi, edx */ r_edi = r_edx;
    /* 0062acbb: jmp 0x62acc1 */ goto L_0062acc1;
L_0062acbd:; BB(0x0062acbd);
    /* 0062acbd: inc byte ptr [esp + 0x13] */ { u32 ad = (u32)(r_esp+0x13u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0062acc1:; BB(0x0062acc1);
    /* 0062acc1: mov al, byte ptr [esp + 0x13] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x13u))) & 0xffu);
    /* 0062acc5: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062acc7: jne 0x62ad0a */ if (!fZ) goto L_0062ad0a;
L_0062acc9:; BB(0x0062acc9);
    /* 0062acc9: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0062accd: lea eax, [ebx - 0x30] */ r_eax = (u32)(r_ebx+0xffffffd0u);
    /* 0062acd0: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062acd1: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0062acd5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0062acd6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r; fC = (r < a); }
    /* 0062acd8: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0062acdc: adc edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 0062acde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ace0: je 0x62acf4 */ if (fZ) goto L_0062acf4;
L_0062ace2:; BB(0x0062ace2);
    /* 0062ace2: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062ace6: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062ace7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062aceb: jne 0x62acf4 */ if (!fZ) goto L_0062acf4;
L_0062aced:; BB(0x0062aced);
    /* 0062aced: mov byte ptr [esp + 0x13], 1 */ W8((u32)(r_esp+0x13u), 0x1u);
    /* 0062acf2: jmp 0x62ad1d */ goto L_0062ad1d;
L_0062acf4:; BB(0x0062acf4);
    /* 0062acf4: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062acf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062acf9: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062acfa: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062acfe: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62ad03u); f_0062b340();
    /* 0062ad03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ad06: mov ebx, eax */ r_ebx = r_eax;
    /* 0062ad08: jmp 0x62ad1d */ goto L_0062ad1d;
L_0062ad0a:; BB(0x0062ad0a);
    /* 0062ad0a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062ad0e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ad0f: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062ad10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ad11: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062ad15: call 0x62b370 */ r_esp -= 4; W32(r_esp, 0x62ad1au); f_0062b370();
    /* 0062ad1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062ad1d:; BB(0x0062ad1d);
    /* 0062ad1d: mov al, byte ptr [esp + 0x13] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x13u))) & 0xffu);
    /* 0062ad21: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ad23: je 0x62ac17 */ if (fZ) goto L_0062ac17;
L_0062ad29:; BB(0x0062ad29);
    /* 0062ad29: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 0062ad2d: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
L_0062ad31:; BB(0x0062ad31);
    /* 0062ad31: mov al, byte ptr [esp + 0x22] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x22u))) & 0xffu);
    /* 0062ad35: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ad37: je 0x62ae60 */ if (fZ) goto L_0062ae60;
L_0062ad3d:; BB(0x0062ad3d);
    /* 0062ad3d: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0062ad41: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0062ad45: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0062ad47: adc eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 0062ad4a: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0062ad4e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062ad50: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0062ad54: jmp 0x62ae60 */ goto L_0062ae60;
L_0062ad59:; BB(0x0062ad59);
    /* 0062ad59: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0062ad5d: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ad5f: jne 0x62ae52 */ if (!fZ) goto L_0062ae52;
L_0062ad65:; BB(0x0062ad65);
    /* 0062ad65: cmp esi, 0x78 */ {  u32 a = r_esi; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ad68: je 0x62adab */ if (fZ) goto L_0062adab;
L_0062ad6a:; BB(0x0062ad6a);
    /* 0062ad6a: cmp esi, 0x70 */ {  u32 a = r_esi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ad6d: je 0x62adab */ if (fZ) goto L_0062adab;
L_0062ad6f:; BB(0x0062ad6f);
    /* 0062ad6f: cmp dword ptr [0x6f2564], 1 */ {  u32 a = R32((u32)(0x6f2564u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ad76: jle 0x62ad85 */ if ((fZ||fS!=fO)) goto L_0062ad85;
L_0062ad78:; BB(0x0062ad78);
    /* 0062ad78: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ad7a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ad7b: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x62ad80u); f_00628c40();
    /* 0062ad80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ad83: jmp 0x62ad91 */ goto L_0062ad91;
L_0062ad85:; BB(0x0062ad85);
    /* 0062ad85: mov ecx, dword ptr [0x6f2358] */ r_ecx = R32((u32)(0x6f2358u));
    /* 0062ad8b: mov al, byte ptr [ecx + ebx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_ebx*2))) & 0xffu);
    /* 0062ad8e: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0062ad91:; BB(0x0062ad91);
    /* 0062ad91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ad93: je 0x62ade6 */ if (fZ) goto L_0062ade6;
L_0062ad95:; BB(0x0062ad95);
    /* 0062ad95: cmp esi, 0x6f */ {  u32 a = r_esi; u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ad98: jne 0x62ada4 */ if (!fZ) goto L_0062ada4;
L_0062ad9a:; BB(0x0062ad9a);
    /* 0062ad9a: cmp ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ad9d: jge 0x62ade6 */ if ((fS==fO)) goto L_0062ade6;
L_0062ad9f:; BB(0x0062ad9f);
    /* 0062ad9f: shl edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0062ada2: jmp 0x62adea */ goto L_0062adea;
L_0062ada4:; BB(0x0062ada4);
    /* 0062ada4: lea edi, [edi + edi*4] */ r_edi = (u32)(r_edi+r_edi*4);
    /* 0062ada7: shl edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0062ada9: jmp 0x62adea */ goto L_0062adea;
L_0062adab:; BB(0x0062adab);
    /* 0062adab: cmp dword ptr [0x6f2564], 1 */ {  u32 a = R32((u32)(0x6f2564u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062adb2: jle 0x62adc4 */ if ((fZ||fS!=fO)) goto L_0062adc4;
L_0062adb4:; BB(0x0062adb4);
    /* 0062adb4: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0062adb9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062adba: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x62adbfu); f_00628c40();
    /* 0062adbf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062adc2: jmp 0x62add2 */ goto L_0062add2;
L_0062adc4:; BB(0x0062adc4);
    /* 0062adc4: mov edx, dword ptr [0x6f2358] */ r_edx = R32((u32)(0x6f2358u));
    /* 0062adca: mov al, byte ptr [edx + ebx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_ebx*2))) & 0xffu);
    /* 0062adcd: and eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0062add2:; BB(0x0062add2);
    /* 0062add2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062add4: je 0x62ade6 */ if (fZ) goto L_0062ade6;
L_0062add6:; BB(0x0062add6);
    /* 0062add6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062add7: shl edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0062adda: call 0x62b300 */ r_esp -= 4; W32(r_esp, 0x62addfu); f_0062b300();
    /* 0062addf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ade2: mov ebx, eax */ r_ebx = r_eax;
    /* 0062ade4: jmp 0x62adea */ goto L_0062adea;
L_0062ade6:; BB(0x0062ade6);
    /* 0062ade6: inc byte ptr [esp + 0x13] */ { u32 ad = (u32)(r_esp+0x13u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0062adea:; BB(0x0062adea);
    /* 0062adea: mov al, byte ptr [esp + 0x13] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x13u))) & 0xffu);
    /* 0062adee: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062adf0: jne 0x62ae2f */ if (!fZ) goto L_0062ae2f;
L_0062adf2:; BB(0x0062adf2);
    /* 0062adf2: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 0062adf6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0062adfa: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062adfb: lea edi, [edi + ebx - 0x30] */ r_edi = (u32)(r_edi+r_ebx+0xffffffd0u);
    /* 0062adff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ae01: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0062ae05: je 0x62ae19 */ if (fZ) goto L_0062ae19;
L_0062ae07:; BB(0x0062ae07);
    /* 0062ae07: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062ae0b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062ae0c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062ae10: jne 0x62ae19 */ if (!fZ) goto L_0062ae19;
L_0062ae12:; BB(0x0062ae12);
    /* 0062ae12: mov byte ptr [esp + 0x13], 1 */ W8((u32)(r_esp+0x13u), 0x1u);
    /* 0062ae17: jmp 0x62ae42 */ goto L_0062ae42;
L_0062ae19:; BB(0x0062ae19);
    /* 0062ae19: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062ae1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ae1e: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062ae1f: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062ae23: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62ae28u); f_0062b340();
    /* 0062ae28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ae2b: mov ebx, eax */ r_ebx = r_eax;
    /* 0062ae2d: jmp 0x62ae42 */ goto L_0062ae42;
L_0062ae2f:; BB(0x0062ae2f);
    /* 0062ae2f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062ae33: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ae34: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062ae35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ae36: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062ae3a: call 0x62b370 */ r_esp -= 4; W32(r_esp, 0x62ae3fu); f_0062b370();
    /* 0062ae3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062ae42:; BB(0x0062ae42);
    /* 0062ae42: mov al, byte ptr [esp + 0x13] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x13u))) & 0xffu);
    /* 0062ae46: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ae48: je 0x62ad65 */ if (fZ) goto L_0062ad65;
L_0062ae4e:; BB(0x0062ae4e);
    /* 0062ae4e: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
L_0062ae52:; BB(0x0062ae52);
    /* 0062ae52: mov al, byte ptr [esp + 0x22] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x22u))) & 0xffu);
    /* 0062ae56: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ae58: je 0x62ae60 */ if (fZ) goto L_0062ae60;
L_0062ae5a:; BB(0x0062ae5a);
    /* 0062ae5a: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062ae5c: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
L_0062ae60:; BB(0x0062ae60);
    /* 0062ae60: cmp dword ptr [esp + 0x24], 0x46 */ {  u32 a = R32((u32)(r_esp+0x24u)); u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ae65: jne 0x62ae6b */ if (!fZ) goto L_0062ae6b;
L_0062ae67:; BB(0x0062ae67);
    /* 0062ae67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ae69: jmp 0x62ae6f */ goto L_0062ae6f;
L_0062ae6b:; BB(0x0062ae6b);
    /* 0062ae6b: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
L_0062ae6f:; BB(0x0062ae6f);
    /* 0062ae6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ae71: je 0x62b216 */ if (fZ) goto L_0062b216;
L_0062ae77:; BB(0x0062ae77);
    /* 0062ae77: mov al, byte ptr [esp + 0x1b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x1bu))) & 0xffu);
    /* 0062ae7b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ae7d: jne 0x62b141 */ if (!fZ) goto L_0062b141;
L_0062ae83:; BB(0x0062ae83);
    /* 0062ae83: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0062ae87: mov ebp, dword ptr [esp + 0x1e4] */ r_ebp = R32((u32)(r_esp+0x1e4u));
    /* 0062ae8e: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0062ae92: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 0062ae96: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062ae97: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0062ae9b: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0062ae9f: jmp 0x62aeb5 */ goto L_0062aeb5;
L_0062aea1:; BB(0x0062aea1);
    /* 0062aea1: mov cl, byte ptr [esp + 0x1b] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0x1bu))) & 0xffu);
    /* 0062aea5: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062aea9: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062aeab: jne 0x62b148 */ if (!fZ) goto L_0062b148;
L_0062aeb1:; BB(0x0062aeb1);
    /* 0062aeb1: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
L_0062aeb5:; BB(0x0062aeb5);
    /* 0062aeb5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062aeb7: je 0x62aecb */ if (fZ) goto L_0062aecb;
L_0062aeb9:; BB(0x0062aeb9);
    /* 0062aeb9: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0062aebd: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0062aec1: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0062aec3: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0062aec6: jmp 0x62b148 */ goto L_0062b148;
L_0062aecb:; BB(0x0062aecb);
    /* 0062aecb: mov dl, byte ptr [esp + 0x1a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esp+0x1au))) & 0xffu);
    /* 0062aecf: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062aed1: je 0x62aeda */ if (fZ) goto L_0062aeda;
L_0062aed3:; BB(0x0062aed3);
    /* 0062aed3: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0062aed5: jmp 0x62b148 */ goto L_0062b148;
L_0062aeda:; BB(0x0062aeda);
    /* 0062aeda: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 0062aedd: jmp 0x62b148 */ goto L_0062b148;
L_0062aee2:; BB(0x0062aee2);
    /* 0062aee2: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062aee5: lea esi, [esp + 0x80] */ r_esi = (u32)(r_esp+0x80u);
    /* 0062aeec: jne 0x62aefe */ if (!fZ) goto L_0062aefe;
L_0062aeee:; BB(0x0062aeee);
    /* 0062aeee: mov byte ptr [esp + 0x80], bl */ W8((u32)(r_esp+0x80u), (u8)r_ebx);
    /* 0062aef5: lea esi, [esp + 0x81] */ r_esi = (u32)(r_esp+0x81u);
    /* 0062aefc: jmp 0x62af03 */ goto L_0062af03;
L_0062aefe:; BB(0x0062aefe);
    /* 0062aefe: cmp ebx, 0x2b */ {  u32 a = r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062af01: jne 0x62af20 */ if (!fZ) goto L_0062af20;
L_0062af03:; BB(0x0062af03);
    /* 0062af03: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0062af07: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0062af0b: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0062af0c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062af0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062af0e: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0062af12: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0062af16: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62af1bu); f_0062b340();
    /* 0062af1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062af1e: mov ebx, eax */ r_ebx = r_eax;
L_0062af20:; BB(0x0062af20);
    /* 0062af20: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0062af24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062af26: je 0x62af32 */ if (fZ) goto L_0062af32;
L_0062af28:; BB(0x0062af28);
    /* 0062af28: cmp dword ptr [esp + 0x1c], 0x15d */ {  u32 a = R32((u32)(r_esp+0x1cu)); u32 b = 0x15du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062af30: jle 0x62af3a */ if ((fZ||fS!=fO)) goto L_0062af3a;
L_0062af32:; BB(0x0062af32);
    /* 0062af32: mov dword ptr [esp + 0x1c], 0x15d */ W32((u32)(r_esp+0x1cu), 0x15du);
L_0062af3a:; BB(0x0062af3a);
    /* 0062af3a: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
L_0062af3e:; BB(0x0062af3e);
    /* 0062af3e: cmp dword ptr [0x6f2564], 1 */ {  u32 a = R32((u32)(0x6f2564u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062af45: jle 0x62af54 */ if ((fZ||fS!=fO)) goto L_0062af54;
L_0062af47:; BB(0x0062af47);
    /* 0062af47: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062af49: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062af4a: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x62af4fu); f_00628c40();
    /* 0062af4f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062af52: jmp 0x62af5f */ goto L_0062af5f;
L_0062af54:; BB(0x0062af54);
    /* 0062af54: mov eax, dword ptr [0x6f2358] */ r_eax = R32((u32)(0x6f2358u));
    /* 0062af59: mov al, byte ptr [eax + ebx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*2))) & 0xffu);
    /* 0062af5c: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0062af5f:; BB(0x0062af5f);
    /* 0062af5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062af61: je 0x62af8c */ if (fZ) goto L_0062af8c;
L_0062af63:; BB(0x0062af63);
    /* 0062af63: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062af67: mov ecx, eax */ r_ecx = r_eax;
    /* 0062af69: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062af6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062af6c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062af70: je 0x62af8c */ if (fZ) goto L_0062af8c;
L_0062af72:; BB(0x0062af72);
    /* 0062af72: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 0062af74: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062af78: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062af79: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062af7a: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062af7b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062af7c: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062af80: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62af85u); f_0062b340();
    /* 0062af85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062af88: mov ebx, eax */ r_ebx = r_eax;
    /* 0062af8a: jmp 0x62af3e */ goto L_0062af3e;
L_0062af8c:; BB(0x0062af8c);
    /* 0062af8c: cmp byte ptr [0x6f2568], bl */ {  u32 a = R8((u32)(0x6f2568u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062af92: jne 0x62b00e */ if (!fZ) goto L_0062b00e;
L_0062af94:; BB(0x0062af94);
    /* 0062af94: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062af98: mov edx, eax */ r_edx = r_eax;
    /* 0062af9a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062af9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062af9d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062afa1: je 0x62b00e */ if (fZ) goto L_0062b00e;
L_0062afa3:; BB(0x0062afa3);
    /* 0062afa3: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062afa7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062afa8: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062afa9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062afad: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62afb2u); f_0062b340();
    /* 0062afb2: mov ebx, eax */ r_ebx = r_eax;
    /* 0062afb4: mov al, byte ptr [0x6f2568] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x6f2568u))) & 0xffu);
    /* 0062afb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062afbc: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 0062afbe: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0062afbf:; BB(0x0062afbf);
    /* 0062afbf: cmp dword ptr [0x6f2564], 1 */ {  u32 a = R32((u32)(0x6f2564u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062afc6: jle 0x62afd5 */ if ((fZ||fS!=fO)) goto L_0062afd5;
L_0062afc8:; BB(0x0062afc8);
    /* 0062afc8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062afca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062afcb: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x62afd0u); f_00628c40();
    /* 0062afd0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062afd3: jmp 0x62afe1 */ goto L_0062afe1;
L_0062afd5:; BB(0x0062afd5);
    /* 0062afd5: mov ecx, dword ptr [0x6f2358] */ r_ecx = R32((u32)(0x6f2358u));
    /* 0062afdb: mov al, byte ptr [ecx + ebx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_ebx*2))) & 0xffu);
    /* 0062afde: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0062afe1:; BB(0x0062afe1);
    /* 0062afe1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062afe3: je 0x62b00e */ if (fZ) goto L_0062b00e;
L_0062afe5:; BB(0x0062afe5);
    /* 0062afe5: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062afe9: mov edx, eax */ r_edx = r_eax;
    /* 0062afeb: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062afec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062afee: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062aff2: je 0x62b00e */ if (fZ) goto L_0062b00e;
L_0062aff4:; BB(0x0062aff4);
    /* 0062aff4: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 0062aff6: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062affa: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062affb: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062affc: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062affd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062affe: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062b002: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62b007u); f_0062b340();
    /* 0062b007: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b00a: mov ebx, eax */ r_ebx = r_eax;
    /* 0062b00c: jmp 0x62afbf */ goto L_0062afbf;
L_0062b00e:; BB(0x0062b00e);
    /* 0062b00e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b010: je 0x62b0c1 */ if (fZ) goto L_0062b0c1;
L_0062b016:; BB(0x0062b016);
    /* 0062b016: cmp ebx, 0x65 */ {  u32 a = r_ebx; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b019: je 0x62b024 */ if (fZ) goto L_0062b024;
L_0062b01b:; BB(0x0062b01b);
    /* 0062b01b: cmp ebx, 0x45 */ {  u32 a = r_ebx; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b01e: jne 0x62b0c1 */ if (!fZ) goto L_0062b0c1;
L_0062b024:; BB(0x0062b024);
    /* 0062b024: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062b028: mov ecx, eax */ r_ecx = r_eax;
    /* 0062b02a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062b02b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b02d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062b031: je 0x62b0c1 */ if (fZ) goto L_0062b0c1;
L_0062b037:; BB(0x0062b037);
    /* 0062b037: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062b03b: mov byte ptr [esi], 0x65 */ W8((u32)(r_esi), 0x65u);
    /* 0062b03e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062b03f: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062b040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b041: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062b045: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62b04au); f_0062b340();
    /* 0062b04a: mov ebx, eax */ r_ebx = r_eax;
    /* 0062b04c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b04f: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b052: jne 0x62b059 */ if (!fZ) goto L_0062b059;
L_0062b054:; BB(0x0062b054);
    /* 0062b054: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 0062b056: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062b057: jmp 0x62b05e */ goto L_0062b05e;
L_0062b059:; BB(0x0062b059);
    /* 0062b059: cmp ebx, 0x2b */ {  u32 a = r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b05c: jne 0x62b087 */ if (!fZ) goto L_0062b087;
L_0062b05e:; BB(0x0062b05e);
    /* 0062b05e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062b062: mov edx, eax */ r_edx = r_eax;
    /* 0062b064: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062b065: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b067: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062b06b: jne 0x62b073 */ if (!fZ) goto L_0062b073;
L_0062b06d:; BB(0x0062b06d);
    /* 0062b06d: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0062b071: jmp 0x62b087 */ goto L_0062b087;
L_0062b073:; BB(0x0062b073);
    /* 0062b073: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062b077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b078: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062b079: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062b07d: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62b082u); f_0062b340();
    /* 0062b082: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b085: mov ebx, eax */ r_ebx = r_eax;
L_0062b087:; BB(0x0062b087);
    /* 0062b087: cmp dword ptr [0x6f2564], 1 */ {  u32 a = R32((u32)(0x6f2564u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062b08e: jle 0x62b09d */ if ((fZ||fS!=fO)) goto L_0062b09d;
L_0062b090:; BB(0x0062b090);
    /* 0062b090: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b092: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b093: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x62b098u); f_00628c40();
    /* 0062b098: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b09b: jmp 0x62b0a8 */ goto L_0062b0a8;
L_0062b09d:; BB(0x0062b09d);
    /* 0062b09d: mov eax, dword ptr [0x6f2358] */ r_eax = R32((u32)(0x6f2358u));
    /* 0062b0a2: mov al, byte ptr [eax + ebx*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*2))) & 0xffu);
    /* 0062b0a5: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0062b0a8:; BB(0x0062b0a8);
    /* 0062b0a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b0aa: je 0x62b0c1 */ if (fZ) goto L_0062b0c1;
L_0062b0ac:; BB(0x0062b0ac);
    /* 0062b0ac: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062b0b0: mov ecx, eax */ r_ecx = r_eax;
    /* 0062b0b2: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062b0b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b0b5: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0062b0b9: je 0x62b0c1 */ if (fZ) goto L_0062b0c1;
L_0062b0bb:; BB(0x0062b0bb);
    /* 0062b0bb: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062b0bc: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 0062b0be: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062b0bf: jmp 0x62b073 */ goto L_0062b073;
L_0062b0c1:; BB(0x0062b0c1);
    /* 0062b0c1: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0062b0c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0c6: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b0c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0c8: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0062b0cc: call 0x62b370 */ r_esp -= 4; W32(r_esp, 0x62b0d1u); f_0062b370();
    /* 0062b0d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b0d4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b0d6: je 0x62b216 */ if (fZ) goto L_0062b216;
L_0062b0dc:; BB(0x0062b0dc);
    /* 0062b0dc: mov al, byte ptr [esp + 0x1b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x1bu))) & 0xffu);
    /* 0062b0e0: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062b0e2: jne 0x62b148 */ if (!fZ) goto L_0062b148;
L_0062b0e4:; BB(0x0062b0e4);
    /* 0062b0e4: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0062b0e8: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0062b0ec: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b0ed: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 0062b0f4: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0062b0f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0f9: movsx ecx, byte ptr [esp + 0x1e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+0x1eu));
    /* 0062b0fe: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b0ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b100: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b101: mov byte ptr [esi], 0 */ W8((u32)(r_esi), 0x0u);
    /* 0062b104: call dword ptr [0x6f2340] */ { u32 t = R32((u32)(0x6f2340u)); r_esp -= 4; W32(r_esp, 0x62b10au); call_ind(t); }
    /* 0062b10a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b10d: jmp 0x62b148 */ goto L_0062b148;
L_0062b10f:; BB(0x0062b10f);
    /* 0062b10f: mov eax, dword ptr [esp + 0x1e8] */ r_eax = R32((u32)(r_esp+0x1e8u));
    /* 0062b116: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062b118: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062b11a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b11c: jne 0x62b1fd */ if (!fZ) goto L_0062b1fd;
L_0062b122:; BB(0x0062b122);
    /* 0062b122: mov cl, byte ptr [esp + 0x21] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0x21u))) & 0xffu);
    /* 0062b126: mov al, byte ptr [esp + 0x1b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x1bu))) & 0xffu);
    /* 0062b12a: dec cl */ { u32 x = (u8)r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062b12c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062b12e: mov byte ptr [esp + 0x21], cl */ W8((u32)(r_esp+0x21u), (u8)r_ecx);
    /* 0062b132: jne 0x62b148 */ if (!fZ) goto L_0062b148;
L_0062b134:; BB(0x0062b134);
    /* 0062b134: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 0062b138: mov dword ptr [esp + 0x1ec], ecx */ W32((u32)(r_esp+0x1ecu), r_ecx);
    /* 0062b13f: jmp 0x62b148 */ goto L_0062b148;
L_0062b141:; BB(0x0062b141);
    /* 0062b141: mov ebp, dword ptr [esp + 0x1e4] */ r_ebp = R32((u32)(r_esp+0x1e4u));
L_0062b148:; BB(0x0062b148);
    /* 0062b148: mov cl, byte ptr [esp + 0x21] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0x21u))) & 0xffu);
    /* 0062b14c: mov eax, dword ptr [esp + 0x1e8] */ r_eax = R32((u32)(r_esp+0x1e8u));
    /* 0062b153: inc cl */ { u32 x = (u8)r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062b155: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062b156: mov byte ptr [esp + 0x21], cl */ W8((u32)(r_esp+0x21u), (u8)r_ecx);
    /* 0062b15a: mov dword ptr [esp + 0x1e8], eax */ W32((u32)(r_esp+0x1e8u), r_eax);
    /* 0062b161: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0062b163: mov esi, eax */ r_esi = r_eax;
    /* 0062b165: jmp 0x62b1c3 */ goto L_0062b1c3;
L_0062b167:; BB(0x0062b167);
    /* 0062b167: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062b16b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b16c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062b16d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0062b171: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62b176u); f_0062b340();
    /* 0062b176: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062b178: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b17b: mov dl, byte ptr [esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0062b17d: mov ebx, eax */ r_ebx = r_eax;
    /* 0062b17f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062b180: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b182: mov dword ptr [esp + 0x1e8], esi */ W32((u32)(r_esp+0x1e8u), r_esi);
    /* 0062b189: jne 0x62b1fd */ if (!fZ) goto L_0062b1fd;
L_0062b18b:; BB(0x0062b18b);
    /* 0062b18b: mov ecx, dword ptr [0x6f2358] */ r_ecx = R32((u32)(0x6f2358u));
    /* 0062b191: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062b196: test byte ptr [ecx + eax*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ecx+r_eax*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062b19b: je 0x62b1c3 */ if (fZ) goto L_0062b1c3;
L_0062b19d:; BB(0x0062b19d);
    /* 0062b19d: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0062b1a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1a2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b1a3: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0062b1a7: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62b1acu); f_0062b340();
    /* 0062b1ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062b1ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b1b1: mov dl, byte ptr [esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0062b1b3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062b1b4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b1b6: mov dword ptr [esp + 0x1e8], esi */ W32((u32)(r_esp+0x1e8u), r_esi);
    /* 0062b1bd: jne 0x62b1ea */ if (!fZ) goto L_0062b1ea;
L_0062b1bf:; BB(0x0062b1bf);
    /* 0062b1bf: dec dword ptr [esp + 0x14] */ { u32 ad = (u32)(r_esp+0x14u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0062b1c3:; BB(0x0062b1c3);
    /* 0062b1c3: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b1c6: jne 0x62b1de */ if (!fZ) goto L_0062b1de;
L_0062b1c8:; BB(0x0062b1c8);
    /* 0062b1c8: cmp byte ptr [esi], 0x25 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x25u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062b1cb: jne 0x62b216 */ if (!fZ) goto L_0062b216;
L_0062b1cd:; BB(0x0062b1cd);
    /* 0062b1cd: mov eax, dword ptr [esp + 0x1e8] */ r_eax = R32((u32)(r_esp+0x1e8u));
    /* 0062b1d4: cmp byte ptr [eax + 1], 0x6e */ {  u32 a = R8((u32)(r_eax+0x1u)); u32 b = 0x6eu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062b1d8: jne 0x62b216 */ if (!fZ) goto L_0062b216;
L_0062b1da:; BB(0x0062b1da);
    /* 0062b1da: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0062b1dc: mov esi, eax */ r_esi = r_eax;
L_0062b1de:; BB(0x0062b1de);
    /* 0062b1de: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0062b1e0: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062b1e2: jne 0x62a5fd */ if (!fZ) goto L_0062a5fd;
L_0062b1e8:; BB(0x0062b1e8);
    /* 0062b1e8: jmp 0x62b216 */ goto L_0062b216;
L_0062b1ea:; BB(0x0062b1ea);
    /* 0062b1ea: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0062b1ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1ef: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062b1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1f1: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0062b1f5: call 0x62b370 */ r_esp -= 4; W32(r_esp, 0x62b1fau); f_0062b370();
    /* 0062b1fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062b1fd:; BB(0x0062b1fd);
    /* 0062b1fd: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0062b201: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b202: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062b203: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b204: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0062b208: call 0x62b370 */ r_esp -= 4; W32(r_esp, 0x62b20du); f_0062b370();
    /* 0062b20d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b210: jmp 0x62b216 */ goto L_0062b216;
L_0062b212:; BB(0x0062b212);
    /* 0062b212: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
L_0062b216:; BB(0x0062b216);
    /* 0062b216: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0062b21a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b21d: jne 0x62b22e */ if (!fZ) goto L_0062b22e;
L_0062b21f:; BB(0x0062b21f);
    /* 0062b21f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b221: jne 0x62b22e */ if (!fZ) goto L_0062b22e;
L_0062b223:; BB(0x0062b223);
    /* 0062b223: mov cl, byte ptr [esp + 0x21] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0x21u))) & 0xffu);
    /* 0062b227: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062b229: jne 0x62b22e */ if (!fZ) goto L_0062b22e;
L_0062b22b:; BB(0x0062b22b);
    /* 0062b22b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0062b22e:; BB(0x0062b22e);
    /* 0062b22e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062b22f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b230: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b231: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062b232: add esp, 0x1d0 */ {  u32 a = r_esp; u32 b = 0x1d0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b238: ret  */ FN_RET(0x0062a5c0); r_esp += 4; return;
}

void f_0062b300(void) /* FUN_0062b300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b300);
    /* 0062b300: mov eax, dword ptr [0x6f2564] */ r_eax = R32((u32)(0x6f2564u));
    /* 0062b305: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b306: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062b309: jle 0x62b31c */ if ((fZ||fS!=fO)) goto L_0062b31c;
L_0062b30b:; BB(0x0062b30b);
    /* 0062b30b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0062b30f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b311: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b312: call 0x628c40 */ r_esp -= 4; W32(r_esp, 0x62b317u); f_00628c40();
    /* 0062b317: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b31a: jmp 0x62b32b */ goto L_0062b32b;
L_0062b31c:; BB(0x0062b31c);
    /* 0062b31c: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0062b320: mov eax, dword ptr [0x6f2358] */ r_eax = R32((u32)(0x6f2358u));
    /* 0062b325: mov al, byte ptr [eax + esi*2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_esi*2))) & 0xffu);
    /* 0062b328: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0062b32b:; BB(0x0062b32b);
    /* 0062b32b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b32d: jne 0x62b335 */ if (!fZ) goto L_0062b335;
L_0062b32f:; BB(0x0062b32f);
    /* 0062b32f: and esi, 0xffffffdf */ {  u32 a = r_esi; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0062b332: sub esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_0062b335:; BB(0x0062b335);
    /* 0062b335: mov eax, esi */ r_eax = r_esi;
    /* 0062b337: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b338: ret  */ FN_RET(0x0062b300); r_esp += 4; return;
}

void f_0062b340(void) /* FUN_0062b340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b340);
    /* 0062b340: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062b344: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0062b347: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 0062b348: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062b34b: js 0x62b357 */ if (fS) goto L_0062b357;
L_0062b34d:; BB(0x0062b34d);
    /* 0062b34d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062b34f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b351: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0062b353: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062b354: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0062b356: ret  */ FN_RET(0x0062b340); r_esp += 4; return;
L_0062b357:; BB(0x0062b357);
    /* 0062b357: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b358: call 0x628370 */ r_esp -= 4; W32(r_esp, 0x62b35du); f_00628370();
    /* 0062b35d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b360: ret  */ FN_RET(0x0062b340); r_esp += 4; return;
}

void f_0062b370(void) /* FUN_0062b370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b370);
    /* 0062b370: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062b374: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b377: je 0x62b387 */ if (fZ) goto L_0062b387;
L_0062b379:; BB(0x0062b379);
    /* 0062b379: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0062b37d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b37e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b37f: call 0x630430 */ r_esp -= 4; W32(r_esp, 0x62b384u); f_00630430();
    /* 0062b384: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062b387:; BB(0x0062b387);
    /* 0062b387: ret  */ FN_RET(0x0062b370); r_esp += 4; return;
}

void f_0062b390(void) /* FUN_0062b390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b390);
    /* 0062b390: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b391: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0062b395: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b396: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b397: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0062b39b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b39c: inc dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0062b39e: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62b3a3u); f_0062b340();
    /* 0062b3a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b3a6: mov esi, eax */ r_esi = r_eax;
    /* 0062b3a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b3a9: call 0x625830 */ r_esp -= 4; W32(r_esp, 0x62b3aeu); f_00625830();
    /* 0062b3ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b3b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b3b3: je 0x62b3d2 */ if (fZ) goto L_0062b3d2;
L_0062b3b5:; BB(0x0062b3b5);
    /* 0062b3b5: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0062b3b7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b3b8: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062b3b9: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 0062b3bb: call 0x62b340 */ r_esp -= 4; W32(r_esp, 0x62b3c0u); f_0062b340();
    /* 0062b3c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b3c3: mov esi, eax */ r_esi = r_eax;
    /* 0062b3c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b3c6: call 0x625830 */ r_esp -= 4; W32(r_esp, 0x62b3cbu); f_00625830();
    /* 0062b3cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b3ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b3d0: jne 0x62b3b5 */ if (!fZ) goto L_0062b3b5;
L_0062b3d2:; BB(0x0062b3d2);
    /* 0062b3d2: mov eax, esi */ r_eax = r_esi;
    /* 0062b3d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062b3d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b3d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062b3d7: ret  */ FN_RET(0x0062b390); r_esp += 4; return;
}

void f_0062b3e0(void) /* FUN_0062b3e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b3e0);
    /* 0062b3e0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0062b3e4: mov dword ptr [0x711460], edx */ W32((u32)(0x711460u), r_edx);
    /* 0062b3ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b3ec: mov eax, 0x6f2750 */ r_eax = 0x6f2750u;
L_0062b3f1:; BB(0x0062b3f1);
    /* 0062b3f1: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b3f3: je 0x62b43a */ if (fZ) goto L_0062b43a;
L_0062b3f5:; BB(0x0062b3f5);
    /* 0062b3f5: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062b3f8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b3f9: cmp eax, 0x6f28b8 */ {  u32 a = r_eax; u32 b = 0x6f28b8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062b3fe: jb 0x62b3f1 */ if (fC) goto L_0062b3f1;
L_0062b400:; BB(0x0062b400);
    /* 0062b400: cmp edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062b403: jb 0x62b415 */ if (fC) goto L_0062b415;
L_0062b405:; BB(0x0062b405);
    /* 0062b405: cmp edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062b408: ja 0x62b415 */ if ((!fC&&!fZ)) goto L_0062b415;
L_0062b40a:; BB(0x0062b40a);
    /* 0062b40a: mov dword ptr [0x71145c], 0xd */ W32((u32)(0x71145cu), 0xdu);
    /* 0062b414: ret  */ FN_RET(0x0062b3e0); r_esp += 4; return;
L_0062b415:; BB(0x0062b415);
    /* 0062b415: cmp edx, 0xbc */ {  u32 a = r_edx; u32 b = 0xbcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062b41b: jb 0x62b42f */ if (fC) goto L_0062b42f;
L_0062b41d:; BB(0x0062b41d);
    /* 0062b41d: cmp edx, 0xca */ {  u32 a = r_edx; u32 b = 0xcau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062b423: mov dword ptr [0x71145c], 8 */ W32((u32)(0x71145cu), 0x8u);
    /* 0062b42d: jbe 0x62b439 */ if ((fC||fZ)) goto L_0062b439;
L_0062b42f:; BB(0x0062b42f);
    /* 0062b42f: mov dword ptr [0x71145c], 0x16 */ W32((u32)(0x71145cu), 0x16u);
L_0062b439:; BB(0x0062b439);
    /* 0062b439: ret  */ FN_RET(0x0062b3e0); r_esp += 4; return;
L_0062b43a:; BB(0x0062b43a);
    /* 0062b43a: mov eax, dword ptr [ecx*8 + 0x6f2754] */ r_eax = R32((u32)(r_ecx*8+0x6f2754u));
    /* 0062b441: mov dword ptr [0x71145c], eax */ W32((u32)(0x71145cu), r_eax);
    /* 0062b446: ret  */ FN_RET(0x0062b3e0); r_esp += 4; return;
}

void f_0062b450(void) /* FUN_0062b450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b450);
    /* 0062b450: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b451: mov esi, ecx */ r_esi = r_ecx;
    /* 0062b453: call 0x62b540 */ r_esp -= 4; W32(r_esp, 0x62b458u); f_0062b540();
    /* 0062b458: test byte ptr [esp + 8], 1 */ {  u32 a = R8((u32)(r_esp+0x8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062b45d: je 0x62b468 */ if (fZ) goto L_0062b468;
L_0062b45f:; BB(0x0062b45f);
    /* 0062b45f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b460: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x62b465u); f_0048ac1b();
    /* 0062b465: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062b468:; BB(0x0062b468);
    /* 0062b468: mov eax, esi */ r_eax = r_esi;
    /* 0062b46a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b46b: ret 4 */ FN_RET(0x0062b450); r_esp += 8; return;
}

void f_0062b470(void) /* FUN_0062b470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b470);
    /* 0062b470: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b471: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b472: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0062b476: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062b478: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b479: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b47c: mov dword ptr [ebx], 0x63d2d4 */ W32((u32)(r_ebx), 0x63d2d4u);
    /* 0062b482: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0062b484: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b486: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062b488: not ecx */ r_ecx = ~r_ecx;
    /* 0062b48a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b48b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x62b490u); f_0048ab58();
    /* 0062b490: mov edx, eax */ r_edx = r_eax;
    /* 0062b492: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b495: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b497: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0062b49a: je 0x62b4bb */ if (fZ) goto L_0062b4bb;
L_0062b49c:; BB(0x0062b49c);
    /* 0062b49c: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0062b49e: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b4a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b4a3: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062b4a5: not ecx */ r_ecx = ~r_ecx;
    /* 0062b4a7: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062b4a9: mov eax, ecx */ r_eax = r_ecx;
    /* 0062b4ab: mov esi, edi */ r_esi = r_edi;
    /* 0062b4ad: mov edi, edx */ r_edi = r_edx;
    /* 0062b4af: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0062b4b2: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062b4b4: mov ecx, eax */ r_ecx = r_eax;
    /* 0062b4b6: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b4b9: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_0062b4bb:; BB(0x0062b4bb);
    /* 0062b4bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062b4bc: mov dword ptr [ebx + 8], 1 */ W32((u32)(r_ebx+0x8u), 0x1u);
    /* 0062b4c3: mov eax, ebx */ r_eax = r_ebx;
    /* 0062b4c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b4c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062b4c7: ret 4 */ FN_RET(0x0062b470); r_esp += 8; return;
}

void f_0062b540(void) /* FUN_0062b540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b540);
    /* 0062b540: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0062b543: mov dword ptr [ecx], 0x63d2d4 */ W32((u32)(r_ecx), 0x63d2d4u);
    /* 0062b549: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b54b: je 0x62b559 */ if (fZ) goto L_0062b559;
L_0062b54d:; BB(0x0062b54d);
    /* 0062b54d: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0062b550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b551: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x62b556u); f_0048ac1b();
    /* 0062b556: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062b559:; BB(0x0062b559);
    /* 0062b559: ret  */ FN_RET(0x0062b540); r_esp += 4; return;
}

void f_0062b570(void) /* FUN_0062b570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b570);
    /* 0062b570: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b573: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0062b577: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b578: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b579: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0062b57e: mov esi, 0x63d2f0 */ r_esi = 0x63d2f0u;
    /* 0062b583: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 0062b587: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062b589: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0062b58d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0062b591: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0062b595: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0062b599: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0062b59d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0062b5a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b5a2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0062b5a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b5a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b5a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b5a9: call dword ptr [0x6330a0] */ { u32 t = R32((u32)(0x6330a0u)); r_esp -= 4; W32(r_esp, 0x62b5afu); call_ind(t); }
    /* 0062b5af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062b5b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b5b1: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b5b4: ret 8 */ FN_RET(0x0062b570); r_esp += 12; return;
}

void f_0062b696(void) /* FUN_0062b696 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b696);
    /* 0062b696: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b697: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b698: mov ebx, 0x6f28bc */ r_ebx = 0x6f28bcu;
    /* 0062b69d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062b6a0: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 0062b6a3: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0062b6a6: mov dword ptr [ebx + 0xc], ebp */ W32((u32)(r_ebx+0xcu), r_ebp);
    /* 0062b6a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b6aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062b6ab: ret 4 */ FN_RET(0x0062b696); r_esp += 8; return;
}

void f_0062b775(void) /* FUN_0062b775 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b775);
    /* 0062b775: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b776: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0062b77a: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 0062b77c: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0062b77f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b780: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0062b783: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b784: call 0x62b602 */ r_esp -= 4; W32(r_esp, 0x62b789u); f_0062b602();
    /* 0062b789: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b78c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b78d: ret 4 */ FN_RET(0x0062b775); r_esp += 8; return;
}

void f_0062b790(void) /* FUN_0062b790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b790);
    /* 0062b790: mov eax, dword ptr [0x7114ac] */ r_eax = R32((u32)(0x7114acu));
    /* 0062b795: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b797: je 0x62b7ad */ if (fZ) goto L_0062b7ad;
L_0062b799:; BB(0x0062b799);
    /* 0062b799: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062b79d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b79e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62b7a0u); call_ind(t); }
    /* 0062b7a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b7a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b7a5: je 0x62b7ad */ if (fZ) goto L_0062b7ad;
L_0062b7a7:; BB(0x0062b7a7);
    /* 0062b7a7: mov eax, 1 */ r_eax = 0x1u;
    /* 0062b7ac: ret  */ FN_RET(0x0062b790); r_esp += 4; return;
L_0062b7ad:; BB(0x0062b7ad);
    /* 0062b7ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b7af: ret  */ FN_RET(0x0062b790); r_esp += 4; return;
}

void f_0062b7b0(void) /* FUN_0062b7b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b7b0);
    /* 0062b7b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7b2: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7b9: call dword ptr [0x63309c] */ { u32 t = R32((u32)(0x63309cu)); r_esp -= 4; W32(r_esp, 0x62b7bfu); call_ind(t); }
    /* 0062b7bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b7c1: mov dword ptr [0x7129e4], eax */ W32((u32)(0x7129e4u), r_eax);
    /* 0062b7c6: jne 0x62b7c9 */ if (!fZ) goto L_0062b7c9;
L_0062b7c8:; BB(0x0062b7c8);
    /* 0062b7c8: ret  */ FN_RET(0x0062b7b0); r_esp += 4; return;
L_0062b7c9:; BB(0x0062b7c9);
    /* 0062b7c9: call 0x62b7f0 */ r_esp -= 4; W32(r_esp, 0x62b7ceu); f_0062b7f0();
    /* 0062b7ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b7d0: jne 0x62b7e1 */ if (!fZ) goto L_0062b7e1;
L_0062b7d2:; BB(0x0062b7d2);
    /* 0062b7d2: mov eax, dword ptr [0x7129e4] */ r_eax = R32((u32)(0x7129e4u));
    /* 0062b7d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7d8: call dword ptr [0x63312c] */ { u32 t = R32((u32)(0x63312cu)); r_esp -= 4; W32(r_esp, 0x62b7deu); call_ind(t); }
    /* 0062b7de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b7e0: ret  */ FN_RET(0x0062b7b0); r_esp += 4; return;
L_0062b7e1:; BB(0x0062b7e1);
    /* 0062b7e1: mov eax, 1 */ r_eax = 0x1u;
    /* 0062b7e6: ret  */ FN_RET(0x0062b7b0); r_esp += 4; return;
}

void f_0062b7f0(void) /* FUN_0062b7f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b7f0);
    /* 0062b7f0: mov eax, dword ptr [0x6f28e0] */ r_eax = R32((u32)(0x6f28e0u));
    /* 0062b7f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7f7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b7fa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7fb: jne 0x62b804 */ if (!fZ) goto L_0062b804;
L_0062b7fd:; BB(0x0062b7fd);
    /* 0062b7fd: mov ebp, 0x6f28d0 */ r_ebp = 0x6f28d0u;
    /* 0062b802: jmp 0x62b821 */ goto L_0062b821;
L_0062b804:; BB(0x0062b804);
    /* 0062b804: mov eax, dword ptr [0x7129e4] */ r_eax = R32((u32)(0x7129e4u));
    /* 0062b809: push 0x2020 */ { u32 v = 0x2020u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b80e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b810: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b811: call dword ptr [0x6330dc] */ { u32 t = R32((u32)(0x6330dcu)); r_esp -= 4; W32(r_esp, 0x62b817u); call_ind(t); }
    /* 0062b817: mov ebp, eax */ r_ebp = r_eax;
    /* 0062b819: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b81b: je 0x62b94c */ if (fZ) goto L_0062b94c;
L_0062b821:; BB(0x0062b821);
    /* 0062b821: mov edi, dword ptr [0x633108] */ r_edi = R32((u32)(0x633108u));
    /* 0062b827: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b829: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b82e: push 0x400000 */ { u32 v = 0x400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b833: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b835: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x62b837u); call_ind(t); }
    /* 0062b837: mov esi, eax */ r_esi = r_eax;
    /* 0062b839: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b83b: je 0x62b935 */ if (fZ) goto L_0062b935;
L_0062b841:; BB(0x0062b841);
    /* 0062b841: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b843: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b848: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b84d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b84e: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x62b850u); call_ind(t); }
    /* 0062b850: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b852: je 0x62b927 */ if (fZ) goto L_0062b927;
L_0062b858:; BB(0x0062b858);
    /* 0062b858: cmp ebp, 0x6f28d0 */ {  u32 a = r_ebp; u32 b = 0x6f28d0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b85e: jne 0x62b888 */ if (!fZ) goto L_0062b888;
L_0062b860:; BB(0x0062b860);
    /* 0062b860: mov eax, dword ptr [0x6f28d0] */ r_eax = R32((u32)(0x6f28d0u));
    /* 0062b865: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b867: jne 0x62b873 */ if (!fZ) goto L_0062b873;
L_0062b869:; BB(0x0062b869);
    /* 0062b869: mov dword ptr [0x6f28d0], 0x6f28d0 */ W32((u32)(0x6f28d0u), 0x6f28d0u);
L_0062b873:; BB(0x0062b873);
    /* 0062b873: mov eax, dword ptr [0x6f28d4] */ r_eax = R32((u32)(0x6f28d4u));
    /* 0062b878: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b87a: jne 0x62b8a3 */ if (!fZ) goto L_0062b8a3;
L_0062b87c:; BB(0x0062b87c);
    /* 0062b87c: mov dword ptr [0x6f28d4], 0x6f28d0 */ W32((u32)(0x6f28d4u), 0x6f28d0u);
    /* 0062b886: jmp 0x62b8a3 */ goto L_0062b8a3;
L_0062b888:; BB(0x0062b888);
    /* 0062b888: mov dword ptr [ebp], 0x6f28d0 */ W32((u32)(r_ebp), 0x6f28d0u);
    /* 0062b88f: mov ecx, dword ptr [0x6f28d4] */ r_ecx = R32((u32)(0x6f28d4u));
    /* 0062b895: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 0062b898: mov dword ptr [0x6f28d4], ebp */ W32((u32)(0x6f28d4u), r_ebp);
    /* 0062b89e: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0062b8a1: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
L_0062b8a3:; BB(0x0062b8a3);
    /* 0062b8a3: lea eax, [esi + 0x400000] */ r_eax = (u32)(r_esi+0x400000u);
    /* 0062b8a9: lea ecx, [ebp + 0x18] */ r_ecx = (u32)(r_ebp+0x18u);
    /* 0062b8ac: lea edx, [ebp + 0x98] */ r_edx = (u32)(r_ebp+0x98u);
    /* 0062b8b2: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 0062b8b5: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 0062b8b8: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0062b8bb: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0062b8be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b8c0: mov edi, 0xf1 */ r_edi = 0xf1u;
L_0062b8c5:; BB(0x0062b8c5);
    /* 0062b8c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062b8c7: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062b8ca: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0062b8cd: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062b8ce: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b8d1: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062b8d3: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062b8d4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062b8d5: mov dword ptr [ecx - 8], edx */ W32((u32)(r_ecx+0xfffffff8u), r_edx);
    /* 0062b8d8: mov dword ptr [ecx - 4], edi */ W32((u32)(r_ecx+0xfffffffcu), r_edi);
    /* 0062b8db: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062b8e0: jl 0x62b8c5 */ if ((fS!=fO)) goto L_0062b8c5;
L_0062b8e2:; BB(0x0062b8e2);
    /* 0062b8e2: mov ecx, 0x4000 */ r_ecx = 0x4000u;
    /* 0062b8e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b8e9: mov edi, esi */ r_edi = r_esi;
    /* 0062b8eb: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062b8ed: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062b8f0: add eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062b8f5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062b8f7: jae 0x62b921 */ if (!fC) goto L_0062b921;
L_0062b8f9:; BB(0x0062b8f9);
    /* 0062b8f9: mov ecx, 0xf0 */ r_ecx = 0xf0u;
    /* 0062b8fe: mov al, 0xff */ r_eax = (r_eax & 0xffffff00u) | ((0xffu) & 0xffu);
L_0062b900:; BB(0x0062b900);
    /* 0062b900: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 0062b903: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 0062b906: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0062b908: mov byte ptr [esi + 0xf8], al */ W8((u32)(r_esi+0xf8u), (u8)r_eax);
    /* 0062b90e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0062b911: add esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062b917: add edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062b91d: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062b91f: jb 0x62b900 */ if (fC) goto L_0062b900;
L_0062b921:; BB(0x0062b921);
    /* 0062b921: mov eax, ebp */ r_eax = r_ebp;
    /* 0062b923: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062b924: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b925: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b926: ret  */ FN_RET(0x0062b7f0); r_esp += 4; return;
L_0062b927:; BB(0x0062b927);
    /* 0062b927: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b92c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b92e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b92f: call dword ptr [0x6330f8] */ { u32 t = R32((u32)(0x6330f8u)); r_esp -= 4; W32(r_esp, 0x62b935u); call_ind(t); }
L_0062b935:; BB(0x0062b935);
    /* 0062b935: cmp ebp, 0x6f28d0 */ {  u32 a = r_ebp; u32 b = 0x6f28d0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b93b: je 0x62b94c */ if (fZ) goto L_0062b94c;
L_0062b93d:; BB(0x0062b93d);
    /* 0062b93d: mov eax, dword ptr [0x7129e4] */ r_eax = R32((u32)(0x7129e4u));
    /* 0062b942: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b943: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b946: call dword ptr [0x6330e4] */ { u32 t = R32((u32)(0x6330e4u)); r_esp -= 4; W32(r_esp, 0x62b94cu); call_ind(t); }
L_0062b94c:; BB(0x0062b94c);
    /* 0062b94c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062b94d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b94e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b950: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b951: ret  */ FN_RET(0x0062b7f0); r_esp += 4; return;
}

void f_0062b960(void) /* FUN_0062b960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b960);
    /* 0062b960: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b961: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0062b965: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b96a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b96c: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0062b96f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b970: call dword ptr [0x6330f8] */ { u32 t = R32((u32)(0x6330f8u)); r_esp -= 4; W32(r_esp, 0x62b976u); call_ind(t); }
    /* 0062b976: cmp dword ptr [0x6f48f0], esi */ {  u32 a = R32((u32)(0x6f48f0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b97c: jne 0x62b987 */ if (!fZ) goto L_0062b987;
L_0062b97e:; BB(0x0062b97e);
    /* 0062b97e: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0062b981: mov dword ptr [0x6f48f0], ecx */ W32((u32)(0x6f48f0u), r_ecx);
L_0062b987:; BB(0x0062b987);
    /* 0062b987: cmp esi, 0x6f28d0 */ {  u32 a = r_esi; u32 b = 0x6f28d0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b98d: je 0x62b9af */ if (fZ) goto L_0062b9af;
L_0062b98f:; BB(0x0062b98f);
    /* 0062b98f: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0062b992: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062b994: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b995: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b997: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062b999: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0062b99b: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0062b99e: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0062b9a1: mov eax, dword ptr [0x7129e4] */ r_eax = R32((u32)(0x7129e4u));
    /* 0062b9a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9a7: call dword ptr [0x6330e4] */ { u32 t = R32((u32)(0x6330e4u)); r_esp -= 4; W32(r_esp, 0x62b9adu); call_ind(t); }
    /* 0062b9ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b9ae: ret  */ FN_RET(0x0062b960); r_esp += 4; return;
L_0062b9af:; BB(0x0062b9af);
    /* 0062b9af: mov dword ptr [0x6f28e0], 0xffffffff */ W32((u32)(0x6f28e0u), 0xffffffffu);
    /* 0062b9b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b9ba: ret  */ FN_RET(0x0062b960); r_esp += 4; return;
}

void f_0062b9c0(void) /* FUN_0062b9c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b9c0);
    /* 0062b9c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9c4: mov edi, dword ptr [0x6f28d4] */ r_edi = R32((u32)(0x6f28d4u));
L_0062b9ca:; BB(0x0062b9ca);
    /* 0062b9ca: cmp dword ptr [edi + 0x10], -1 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b9ce: je 0x62ba74 */ if (fZ) goto L_0062ba74;
L_0062b9d4:; BB(0x0062b9d4);
    /* 0062b9d4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0062b9d6: lea esi, [edi + 0x2010] */ r_esi = (u32)(r_edi+0x2010u);
    /* 0062b9dc: mov ebx, 0x3ff000 */ r_ebx = 0x3ff000u;
L_0062b9e1:; BB(0x0062b9e1);
    /* 0062b9e1: cmp dword ptr [esi], 0xf0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b9e7: jne 0x62ba30 */ if (!fZ) goto L_0062ba30;
L_0062b9e9:; BB(0x0062b9e9);
    /* 0062b9e9: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0062b9ec: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9f1: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062b9f3: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b9f9: call dword ptr [0x6330f8] */ { u32 t = R32((u32)(0x6330f8u)); r_esp -= 4; W32(r_esp, 0x62b9ffu); call_ind(t); }
    /* 0062b9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ba01: je 0x62ba30 */ if (fZ) goto L_0062ba30;
L_0062ba03:; BB(0x0062ba03);
    /* 0062ba03: mov dword ptr [esi], 0xffffffff */ W32((u32)(r_esi), 0xffffffffu);
    /* 0062ba09: mov edx, dword ptr [0x7114b0] */ r_edx = R32((u32)(0x7114b0u));
    /* 0062ba0f: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062ba10: mov dword ptr [0x7114b0], edx */ W32((u32)(0x7114b0u), r_edx);
    /* 0062ba16: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0062ba19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ba1b: je 0x62ba21 */ if (fZ) goto L_0062ba21;
L_0062ba1d:; BB(0x0062ba1d);
    /* 0062ba1d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062ba1f: jbe 0x62ba24 */ if ((fC||fZ)) goto L_0062ba24;
L_0062ba21:; BB(0x0062ba21);
    /* 0062ba21: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
L_0062ba24:; BB(0x0062ba24);
    /* 0062ba24: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062ba28: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0062ba29: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062ba2a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0062ba2e: je 0x62ba3d */ if (fZ) goto L_0062ba3d;
L_0062ba30:; BB(0x0062ba30);
    /* 0062ba30: sub ebx, 0x1000 */ {  u32 a = r_ebx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0062ba36: sub esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062ba39: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062ba3b: jge 0x62b9e1 */ if ((fS==fO)) goto L_0062b9e1;
L_0062ba3d:; BB(0x0062ba3d);
    /* 0062ba3d: mov edx, edi */ r_edx = r_edi;
    /* 0062ba3f: mov edi, dword ptr [edi + 4] */ r_edi = R32((u32)(r_edi+0x4u));
    /* 0062ba42: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ba44: je 0x62ba74 */ if (fZ) goto L_0062ba74;
L_0062ba46:; BB(0x0062ba46);
    /* 0062ba46: cmp dword ptr [edx + 0x18], -1 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ba4a: jne 0x62ba74 */ if (!fZ) goto L_0062ba74;
L_0062ba4c:; BB(0x0062ba4c);
    /* 0062ba4c: mov eax, 1 */ r_eax = 0x1u;
    /* 0062ba51: lea ecx, [edx + 0x20] */ r_ecx = (u32)(r_edx+0x20u);
L_0062ba54:; BB(0x0062ba54);
    /* 0062ba54: cmp dword ptr [ecx], -1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ba57: jne 0x62ba64 */ if (!fZ) goto L_0062ba64;
L_0062ba59:; BB(0x0062ba59);
    /* 0062ba59: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062ba5a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ba5d: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ba62: jl 0x62ba54 */ if ((fS!=fO)) goto L_0062ba54;
L_0062ba64:; BB(0x0062ba64);
    /* 0062ba64: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ba69: jne 0x62ba74 */ if (!fZ) goto L_0062ba74;
L_0062ba6b:; BB(0x0062ba6b);
    /* 0062ba6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba6c: call 0x62b960 */ r_esp -= 4; W32(r_esp, 0x62ba71u); f_0062b960();
    /* 0062ba71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062ba74:; BB(0x0062ba74);
    /* 0062ba74: cmp edi, dword ptr [0x6f28d4] */ {  u32 a = r_edi; u32 b = R32((u32)(0x6f28d4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ba7a: je 0x62ba88 */ if (fZ) goto L_0062ba88;
L_0062ba7c:; BB(0x0062ba7c);
    /* 0062ba7c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062ba80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062ba82: jg 0x62b9ca */ if ((!fZ&&fS==fO)) goto L_0062b9ca;
L_0062ba88:; BB(0x0062ba88);
    /* 0062ba88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062ba89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ba8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ba8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ba8c: ret  */ FN_RET(0x0062b9c0); r_esp += 4; return;
}

void f_0062ba90(void) /* FUN_0062ba90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ba90);
    /* 0062ba90: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062ba94: mov eax, 0x6f28d0 */ r_eax = 0x6f28d0u;
L_0062ba99:; BB(0x0062ba99);
    /* 0062ba99: cmp ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062ba9c: jbe 0x62baa3 */ if ((fC||fZ)) goto L_0062baa3;
L_0062ba9e:; BB(0x0062ba9e);
    /* 0062ba9e: cmp ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062baa1: jb 0x62baae */ if (fC) goto L_0062baae;
L_0062baa3:; BB(0x0062baa3);
    /* 0062baa3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0062baa5: cmp eax, 0x6f28d0 */ {  u32 a = r_eax; u32 b = 0x6f28d0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062baaa: je 0x62bae6 */ if (fZ) goto L_0062bae6;
L_0062baac:; BB(0x0062baac);
    /* 0062baac: jmp 0x62ba99 */ goto L_0062ba99;
L_0062baae:; BB(0x0062baae);
    /* 0062baae: test cl, 0xf */ {  u32 a = (u8)r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062bab1: jne 0x62bae6 */ if (!fZ) goto L_0062bae6;
L_0062bab3:; BB(0x0062bab3);
    /* 0062bab3: mov edx, ecx */ r_edx = r_ecx;
    /* 0062bab5: and edx, 0xfff */ {  u32 a = r_edx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062babb: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bac1: jb 0x62bae6 */ if (fC) goto L_0062bae6;
L_0062bac3:; BB(0x0062bac3);
    /* 0062bac3: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0062bac7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062bac9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0062bacd: mov eax, ecx */ r_eax = r_ecx;
    /* 0062bacf: and eax, 0xfffff000 */ {  u32 a = r_eax; u32 b = 0xfffff000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062bad4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062bad6: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062bad8: sub ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062bade: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062bae1: lea eax, [ecx + eax + 8] */ r_eax = (u32)(r_ecx+r_eax+0x8u);
    /* 0062bae5: ret  */ FN_RET(0x0062ba90); r_esp += 4; return;
L_0062bae6:; BB(0x0062bae6);
    /* 0062bae6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062bae8: ret  */ FN_RET(0x0062ba90); r_esp += 4; return;
}

void f_0062baf0(void) /* FUN_0062baf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062baf0);
    /* 0062baf0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062baf4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0062baf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062baf9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062bafb: sub ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062bafe: sar ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062bb01: mov esi, dword ptr [eax + ecx*8 + 0x18] */ r_esi = R32((u32)(r_eax+r_ecx*8+0x18u));
    /* 0062bb05: lea eax, [eax + ecx*8 + 0x18] */ r_eax = (u32)(r_eax+r_ecx*8+0x18u);
    /* 0062bb09: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0062bb0d: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0062bb0f: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062bb11: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0062bb13: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 0062bb16: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062bb18: mov dword ptr [eax + 4], 0xf1 */ W32((u32)(r_eax+0x4u), 0xf1u);
    /* 0062bb1f: cmp ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bb25: jne 0x62bb41 */ if (!fZ) goto L_0062bb41;
L_0062bb27:; BB(0x0062bb27);
    /* 0062bb27: mov eax, dword ptr [0x7114b0] */ r_eax = R32((u32)(0x7114b0u));
    /* 0062bb2c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062bb2d: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bb30: mov dword ptr [0x7114b0], eax */ W32((u32)(0x7114b0u), r_eax);
    /* 0062bb35: jne 0x62bb41 */ if (!fZ) goto L_0062bb41;
L_0062bb37:; BB(0x0062bb37);
    /* 0062bb37: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb39: call 0x62b9c0 */ r_esp -= 4; W32(r_esp, 0x62bb3eu); f_0062b9c0();
    /* 0062bb3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062bb41:; BB(0x0062bb41);
    /* 0062bb41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bb42: ret  */ FN_RET(0x0062baf0); r_esp += 4; return;
}

void f_0062bb50(void) /* FUN_0062bb50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062bb50);
    /* 0062bb50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb51: mov ecx, dword ptr [0x6f48f0] */ r_ecx = R32((u32)(0x6f48f0u));
    /* 0062bb57: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb58: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0062bb5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb5e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb5f: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
L_0062bb63:; BB(0x0062bb63);
    /* 0062bb63: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0062bb66: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bb69: je 0x62bbf4 */ if (fZ) goto L_0062bbf4;
L_0062bb6f:; BB(0x0062bb6f);
    /* 0062bb6f: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 0062bb72: lea ebp, [ecx + 0x2018] */ r_ebp = (u32)(r_ecx+0x2018u);
    /* 0062bb78: mov esi, edi */ r_esi = r_edi;
    /* 0062bb7a: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062bb7c: sub esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062bb7f: sar esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0062bb82: shl esi, 0xc */ { u32 c = (12u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0062bb85: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062bb87: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bb89: jae 0x62bbb9 */ if (!fC) goto L_0062bbb9;
L_0062bb8b:; BB(0x0062bb8b);
    /* 0062bb8b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062bb8d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062bb8f: jl 0x62bbac */ if ((fS!=fO)) goto L_0062bbac;
L_0062bb91:; BB(0x0062bb91);
    /* 0062bb91: cmp dword ptr [edi + 4], ebx */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062bb94: jbe 0x62bbac */ if ((fC||fZ)) goto L_0062bbac;
L_0062bb96:; BB(0x0062bb96);
    /* 0062bb96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb99: call 0x62bd90 */ r_esp -= 4; W32(r_esp, 0x62bb9eu); f_0062bd90();
    /* 0062bb9e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bba1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bba3: jne 0x62bc08 */ if (!fZ) goto L_0062bc08;
L_0062bba5:; BB(0x0062bba5);
    /* 0062bba5: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0062bba9: mov dword ptr [edi + 4], ebx */ W32((u32)(r_edi+0x4u), r_ebx);
L_0062bbac:; BB(0x0062bbac);
    /* 0062bbac: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062bbaf: add esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062bbb5: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bbb7: jb 0x62bb8b */ if (fC) goto L_0062bb8b;
L_0062bbb9:; BB(0x0062bbb9);
    /* 0062bbb9: mov ebp, dword ptr [ecx + 8] */ r_ebp = R32((u32)(r_ecx+0x8u));
    /* 0062bbbc: mov edi, dword ptr [ecx + 0x10] */ r_edi = R32((u32)(r_ecx+0x10u));
    /* 0062bbbf: lea esi, [ecx + 0x18] */ r_esi = (u32)(r_ecx+0x18u);
    /* 0062bbc2: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bbc4: jae 0x62bbf4 */ if (!fC) goto L_0062bbf4;
L_0062bbc6:; BB(0x0062bbc6);
    /* 0062bbc6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062bbc8: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062bbca: jl 0x62bbe7 */ if ((fS!=fO)) goto L_0062bbe7;
L_0062bbcc:; BB(0x0062bbcc);
    /* 0062bbcc: cmp dword ptr [esi + 4], ebx */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062bbcf: jbe 0x62bbe7 */ if ((fC||fZ)) goto L_0062bbe7;
L_0062bbd1:; BB(0x0062bbd1);
    /* 0062bbd1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bbd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bbd3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bbd4: call 0x62bd90 */ r_esp -= 4; W32(r_esp, 0x62bbd9u); f_0062bd90();
    /* 0062bbd9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bbdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bbde: jne 0x62bc21 */ if (!fZ) goto L_0062bc21;
L_0062bbe0:; BB(0x0062bbe0);
    /* 0062bbe0: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0062bbe4: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
L_0062bbe7:; BB(0x0062bbe7);
    /* 0062bbe7: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062bbea: add edi, 0x1000 */ {  u32 a = r_edi; u32 b = 0x1000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062bbf0: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bbf2: jb 0x62bbc6 */ if (fC) goto L_0062bbc6;
L_0062bbf4:; BB(0x0062bbf4);
    /* 0062bbf4: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0062bbf6: mov eax, dword ptr [0x6f48f0] */ r_eax = R32((u32)(0x6f48f0u));
    /* 0062bbfb: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bbfd: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0062bc01: je 0x62bc3a */ if (fZ) goto L_0062bc3a;
L_0062bc03:; BB(0x0062bc03);
    /* 0062bc03: jmp 0x62bb63 */ goto L_0062bb63;
L_0062bc08:; BB(0x0062bc08);
    /* 0062bc08: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0062bc0c: mov dword ptr [0x6f48f0], ecx */ W32((u32)(0x6f48f0u), r_ecx);
    /* 0062bc12: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0062bc14: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062bc16: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0062bc18: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 0062bc1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062bc1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bc1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bc1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062bc1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062bc20: ret  */ FN_RET(0x0062bb50); r_esp += 4; return;
L_0062bc21:; BB(0x0062bc21);
    /* 0062bc21: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0062bc25: mov dword ptr [0x6f48f0], ecx */ W32((u32)(0x6f48f0u), r_ecx);
    /* 0062bc2b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0062bc2d: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062bc2f: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0062bc31: mov dword ptr [ecx + 8], esi */ W32((u32)(r_ecx+0x8u), r_esi);
    /* 0062bc34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062bc35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bc36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bc37: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062bc38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062bc39: ret  */ FN_RET(0x0062bb50); r_esp += 4; return;
L_0062bc3a:; BB(0x0062bc3a);
    /* 0062bc3a: mov ebp, 0x6f28d0 */ r_ebp = 0x6f28d0u;
    /* 0062bc3f: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_0062bc42:; BB(0x0062bc42);
    /* 0062bc42: cmp dword ptr [ebp + 0x10], ecx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bc45: je 0x62bc4e */ if (fZ) goto L_0062bc4e;
L_0062bc47:; BB(0x0062bc47);
    /* 0062bc47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062bc4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bc4c: jne 0x62bc5f */ if (!fZ) goto L_0062bc5f;
L_0062bc4e:; BB(0x0062bc4e);
    /* 0062bc4e: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 0062bc51: cmp ebp, 0x6f28d0 */ {  u32 a = r_ebp; u32 b = 0x6f28d0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bc57: je 0x62bd3d */ if (fZ) goto L_0062bd3d;
L_0062bc5d:; BB(0x0062bc5d);
    /* 0062bc5d: jmp 0x62bc42 */ goto L_0062bc42;
L_0062bc5f:; BB(0x0062bc5f);
    /* 0062bc5f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062bc62: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0062bc65: mov edi, eax */ r_edi = r_eax;
    /* 0062bc67: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0062bc6b: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062bc6d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062bc6f: sub edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062bc72: sar edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0062bc75: shl edi, 0xc */ { u32 c = (12u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0062bc78: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062bc7a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0062bc7c: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bc7e: jne 0x62bc90 */ if (!fZ) goto L_0062bc90;
L_0062bc80:; BB(0x0062bc80);
    /* 0062bc80: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062bc83: jge 0x62bc90 */ if ((fS==fO)) goto L_0062bc90;
L_0062bc85:; BB(0x0062bc85);
    /* 0062bc85: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0062bc88: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062bc8b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062bc8c: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bc8e: je 0x62bc80 */ if (fZ) goto L_0062bc80;
L_0062bc90:; BB(0x0062bc90);
    /* 0062bc90: mov eax, esi */ r_eax = r_esi;
    /* 0062bc92: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc94: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062bc97: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc9d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc9e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0062bca2: call dword ptr [0x633108] */ { u32 t = R32((u32)(0x633108u)); r_esp -= 4; W32(r_esp, 0x62bca8u); call_ind(t); }
    /* 0062bca8: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bcaa: jne 0x62bd7b */ if (!fZ) goto L_0062bd7b;
L_0062bcb0:; BB(0x0062bcb0);
    /* 0062bcb0: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0062bcb4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062bcb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062bcba: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062bcbc: mov ecx, edx */ r_ecx = r_edx;
    /* 0062bcbe: jle 0x62bcf2 */ if ((fZ||fS!=fO)) goto L_0062bcf2;
L_0062bcc0:; BB(0x0062bcc0);
    /* 0062bcc0: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
L_0062bcc3:; BB(0x0062bcc3);
    /* 0062bcc3: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 0062bcc6: mov dword ptr [eax], 0xf0 */ W32((u32)(r_eax), 0xf0u);
    /* 0062bccc: mov dword ptr [eax - 4], edx */ W32((u32)(r_eax+0xfffffffcu), r_edx);
    /* 0062bccf: mov byte ptr [eax + 0xf4], 0xff */ W8((u32)(r_eax+0xf4u), 0xffu);
    /* 0062bcd6: mov dword ptr [ecx], 0xf0 */ W32((u32)(r_ecx), 0xf0u);
    /* 0062bcdc: mov dword ptr [ecx + 4], 0xf1 */ W32((u32)(r_ecx+0x4u), 0xf1u);
    /* 0062bce3: add eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062bce8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062bceb: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0062bcec: jne 0x62bcc3 */ if (!fZ) goto L_0062bcc3;
L_0062bcee:; BB(0x0062bcee);
    /* 0062bcee: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
L_0062bcf2:; BB(0x0062bcf2);
    /* 0062bcf2: lea eax, [ebp + 0x2018] */ r_eax = (u32)(r_ebp+0x2018u);
    /* 0062bcf8: mov dword ptr [0x6f48f0], ebp */ W32((u32)(0x6f48f0u), r_ebp);
    /* 0062bcfe: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bd00: jae 0x62bd10 */ if (!fC) goto L_0062bd10;
L_0062bd02:; BB(0x0062bd02);
    /* 0062bd02: cmp dword ptr [ecx], -1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bd05: je 0x62bd0e */ if (fZ) goto L_0062bd0e;
L_0062bd07:; BB(0x0062bd07);
    /* 0062bd07: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062bd0a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bd0c: jb 0x62bd02 */ if (fC) goto L_0062bd02;
L_0062bd0e:; BB(0x0062bd0e);
    /* 0062bd0e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
L_0062bd10:; BB(0x0062bd10);
    /* 0062bd10: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0062bd12: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062bd14: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0062bd17: mov byte ptr [edi + 8], bl */ W8((u32)(r_edi+0x8u), (u8)r_ebx);
    /* 0062bd1a: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0062bd1d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0062bd1f: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062bd21: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0062bd23: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0062bd26: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062bd28: lea ecx, [edi + ebx + 8] */ r_ecx = (u32)(r_edi+r_ebx+0x8u);
    /* 0062bd2c: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0062bd2f: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 0062bd31: lea eax, [edi + 0x100] */ r_eax = (u32)(r_edi+0x100u);
    /* 0062bd37: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062bd38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bd39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bd3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062bd3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062bd3c: ret  */ FN_RET(0x0062bb50); r_esp += 4; return;
L_0062bd3d:; BB(0x0062bd3d);
    /* 0062bd3d: call 0x62b7f0 */ r_esp -= 4; W32(r_esp, 0x62bd42u); f_0062b7f0();
    /* 0062bd42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bd44: je 0x62bd7b */ if (fZ) goto L_0062bd7b;
L_0062bd46:; BB(0x0062bd46);
    /* 0062bd46: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062bd49: mov byte ptr [ecx + 8], bl */ W8((u32)(r_ecx+0x8u), (u8)r_ebx);
    /* 0062bd4c: lea edx, [ecx + ebx + 8] */ r_edx = (u32)(r_ecx+r_ebx+0x8u);
    /* 0062bd50: mov dword ptr [0x6f48f0], eax */ W32((u32)(0x6f48f0u), r_eax);
    /* 0062bd55: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0062bd57: mov edx, 0xf0 */ r_edx = 0xf0u;
    /* 0062bd5c: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062bd5e: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0062bd64: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0062bd67: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0062bd6a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062bd6c: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0062bd6f: lea eax, [ecx + 0x100] */ r_eax = (u32)(r_ecx+0x100u);
    /* 0062bd75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062bd76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bd77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bd78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062bd79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062bd7a: ret  */ FN_RET(0x0062bb50); r_esp += 4; return;
L_0062bd7b:; BB(0x0062bd7b);
    /* 0062bd7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062bd7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bd7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bd7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062bd80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062bd81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062bd82: ret  */ FN_RET(0x0062bb50); r_esp += 4; return;
}

void f_0062bd90(void) /* FUN_0062bd90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062bd90);
    /* 0062bd90: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0062bd94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bd95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062bd96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bd97: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bd98: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0062bd9c: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0062bd9f: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0062bda1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bda3: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0062bda7: mov esi, ecx */ r_esi = r_ecx;
    /* 0062bda9: lea ebx, [edi + 0xf8] */ r_ebx = (u32)(r_edi+0xf8u);
    /* 0062bdaf: jb 0x62bdeb */ if (fC) goto L_0062bdeb;
L_0062bdb1:; BB(0x0062bdb1);
    /* 0062bdb1: lea eax, [ecx + edx] */ r_eax = (u32)(r_ecx+r_edx);
    /* 0062bdb4: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 0062bdb6: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bdb8: jae 0x62bdca */ if (!fC) goto L_0062bdca;
L_0062bdba:; BB(0x0062bdba);
    /* 0062bdba: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0062bdbc: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0062bdbf: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062bdc1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062bdc3: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 0062bdc5: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0062bdc8: jmp 0x62bdd6 */ goto L_0062bdd6;
L_0062bdca:; BB(0x0062bdca);
    /* 0062bdca: lea edx, [edi + 8] */ r_edx = (u32)(r_edi+0x8u);
    /* 0062bdcd: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 0062bdd4: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
L_0062bdd6:; BB(0x0062bdd6);
    /* 0062bdd6: lea eax, [edi + edi*2] */ r_eax = (u32)(r_edi+r_edi*2);
    /* 0062bdd9: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0062bddc: mov edx, eax */ r_edx = r_eax;
    /* 0062bdde: lea eax, [ecx + 8] */ r_eax = (u32)(r_ecx+0x8u);
    /* 0062bde1: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062bde4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062bde6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062bde7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bde8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bde9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062bdea: ret  */ FN_RET(0x0062bd90); r_esp += 4; return;
L_0062bdeb:; BB(0x0062bdeb);
    /* 0062bdeb: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062bded: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062bdf0: je 0x62bdf4 */ if (fZ) goto L_0062bdf4;
L_0062bdf2:; BB(0x0062bdf2);
    /* 0062bdf2: mov esi, eax */ r_esi = r_eax;
L_0062bdf4:; BB(0x0062bdf4);
    /* 0062bdf4: lea eax, [esi + edx] */ r_eax = (u32)(r_esi+r_edx);
    /* 0062bdf7: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bdf9: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0062bdfd: jae 0x62be74 */ if (!fC) goto L_0062be74;
L_0062bdff:; BB(0x0062bdff);
    /* 0062bdff: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0062be01: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062be03: jne 0x62be41 */ if (!fZ) goto L_0062be41;
L_0062be05:; BB(0x0062be05);
    /* 0062be05: cmp byte ptr [esi + 1], 0 */ {  u32 a = R8((u32)(r_esi+0x1u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062be09: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 0062be0c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0062be11: jne 0x62be1a */ if (!fZ) goto L_0062be1a;
L_0062be13:; BB(0x0062be13);
    /* 0062be13: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062be14: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062be15: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062be18: je 0x62be13 */ if (fZ) goto L_0062be13;
L_0062be1a:; BB(0x0062be1a);
    /* 0062be1a: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062be1c: jae 0x62be57 */ if (!fC) goto L_0062be57;
L_0062be1e:; BB(0x0062be1e);
    /* 0062be1e: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0062be22: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062be24: jne 0x62be2f */ if (!fZ) goto L_0062be2f;
L_0062be26:; BB(0x0062be26);
    /* 0062be26: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 0062be29: mov esi, eax */ r_esi = r_eax;
    /* 0062be2b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062be2d: jmp 0x62be48 */ goto L_0062be48;
L_0062be2f:; BB(0x0062be2f);
    /* 0062be2f: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0062be31: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062be33: jb 0x62befb */ if (fC) goto L_0062befb;
L_0062be39:; BB(0x0062be39);
    /* 0062be39: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0062be3d: mov esi, eax */ r_esi = r_eax;
    /* 0062be3f: jmp 0x62be48 */ goto L_0062be48;
L_0062be41:; BB(0x0062be41);
    /* 0062be41: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062be46: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0062be48:; BB(0x0062be48);
    /* 0062be48: lea ebp, [esi + edx] */ r_ebp = (u32)(r_esi+r_edx);
    /* 0062be4b: lea eax, [edi + 0xf8] */ r_eax = (u32)(r_edi+0xf8u);
    /* 0062be51: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062be53: jb 0x62bdff */ if (fC) goto L_0062bdff;
L_0062be55:; BB(0x0062be55);
    /* 0062be55: jmp 0x62be74 */ goto L_0062be74;
L_0062be57:; BB(0x0062be57);
    /* 0062be57: lea eax, [esi + edx] */ r_eax = (u32)(r_esi+r_edx);
    /* 0062be5a: lea ebx, [edi + 0xf8] */ r_ebx = (u32)(r_edi+0xf8u);
    /* 0062be60: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062be62: jae 0x62be6d */ if (!fC) goto L_0062be6d;
L_0062be64:; BB(0x0062be64);
    /* 0062be64: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062be66: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0062be68: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 0062be6b: jmp 0x62bee6 */ goto L_0062bee6;
L_0062be6d:; BB(0x0062be6d);
    /* 0062be6d: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0062be70: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 0062be72: jmp 0x62bedf */ goto L_0062bedf;
L_0062be74:; BB(0x0062be74);
    /* 0062be74: lea ebp, [edi + 8] */ r_ebp = (u32)(r_edi+0x8u);
    /* 0062be77: mov esi, ebp */ r_esi = r_ebp;
    /* 0062be79: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062be7b: jae 0x62befb */ if (!fC) goto L_0062befb;
L_0062be7d:; BB(0x0062be7d);
    /* 0062be7d: lea ecx, [esi + edx] */ r_ecx = (u32)(r_esi+r_edx);
    /* 0062be80: lea eax, [edi + 0xf8] */ r_eax = (u32)(r_edi+0xf8u);
    /* 0062be86: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062be88: jae 0x62befb */ if (!fC) goto L_0062befb;
L_0062be8a:; BB(0x0062be8a);
    /* 0062be8a: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0062be8c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062be8e: jne 0x62beb3 */ if (!fZ) goto L_0062beb3;
L_0062be90:; BB(0x0062be90);
    /* 0062be90: cmp byte ptr [esi + 1], 0 */ {  u32 a = R8((u32)(r_esi+0x1u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062be94: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 0062be97: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0062be9c: jne 0x62bea5 */ if (!fZ) goto L_0062bea5;
L_0062be9e:; BB(0x0062be9e);
    /* 0062be9e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062be9f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062bea0: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062bea3: je 0x62be9e */ if (fZ) goto L_0062be9e;
L_0062bea5:; BB(0x0062bea5);
    /* 0062bea5: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bea7: jae 0x62bec7 */ if (!fC) goto L_0062bec7;
L_0062bea9:; BB(0x0062bea9);
    /* 0062bea9: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0062beab: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bead: jb 0x62befb */ if (fC) goto L_0062befb;
L_0062beaf:; BB(0x0062beaf);
    /* 0062beaf: mov esi, eax */ r_esi = r_eax;
    /* 0062beb1: jmp 0x62beba */ goto L_0062beba;
L_0062beb3:; BB(0x0062beb3);
    /* 0062beb3: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062beb8: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0062beba:; BB(0x0062beba);
    /* 0062beba: cmp esi, dword ptr [esp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bebe: jb 0x62be7d */ if (fC) goto L_0062be7d;
L_0062bec0:; BB(0x0062bec0);
    /* 0062bec0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062bec2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062bec3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bec4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bec5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062bec6: ret  */ FN_RET(0x0062bd90); r_esp += 4; return;
L_0062bec7:; BB(0x0062bec7);
    /* 0062bec7: lea eax, [esi + edx] */ r_eax = (u32)(r_esi+r_edx);
    /* 0062beca: lea ebx, [edi + 0xf8] */ r_ebx = (u32)(r_edi+0xf8u);
    /* 0062bed0: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bed2: jae 0x62bedd */ if (!fC) goto L_0062bedd;
L_0062bed4:; BB(0x0062bed4);
    /* 0062bed4: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062bed6: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0062bed8: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 0062bedb: jmp 0x62bee6 */ goto L_0062bee6;
L_0062bedd:; BB(0x0062bedd);
    /* 0062bedd: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
L_0062bedf:; BB(0x0062bedf);
    /* 0062bedf: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
L_0062bee6:; BB(0x0062bee6);
    /* 0062bee6: lea eax, [edi + edi*2] */ r_eax = (u32)(r_edi+r_edi*2);
    /* 0062bee9: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0062beeb: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0062beee: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 0062bef1: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062bef4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062bef6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062bef7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bef8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bef9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062befa: ret  */ FN_RET(0x0062bd90); r_esp += 4; return;
L_0062befb:; BB(0x0062befb);
    /* 0062befb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062befc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062befd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062befe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062bf00: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062bf01: ret  */ FN_RET(0x0062bd90); r_esp += 4; return;
}

void f_0062bf10(void) /* FUN_0062bf10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062bf10);
    /* 0062bf10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062bf14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf16: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0062bf1a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf1b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf1c: mov edi, dword ptr [ecx + 0x10] */ r_edi = R32((u32)(r_ecx+0x10u));
    /* 0062bf1f: mov edx, ebp */ r_edx = r_ebp;
    /* 0062bf21: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062bf23: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0062bf27: sar edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0062bf2a: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0062bf2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062bf30: lea ecx, [ecx + edx*8 + 0x18] */ r_ecx = (u32)(r_ecx+r_edx*8+0x18u);
    /* 0062bf34: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062bf36: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0062bf38: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0062bf3c: mov esi, edx */ r_esi = r_edx;
    /* 0062bf3e: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062bf40: jbe 0x62bf5d */ if ((fC||fZ)) goto L_0062bf5d;
L_0062bf42:; BB(0x0062bf42);
    /* 0062bf42: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 0062bf44: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0062bf46: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062bf48: mov dword ptr [ecx + 4], 0xf1 */ W32((u32)(r_ecx+0x4u), 0xf1u);
    /* 0062bf4f: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062bf51: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0062bf53: mov eax, 1 */ r_eax = 0x1u;
    /* 0062bf58: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062bf59: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bf5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bf5b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062bf5c: ret  */ FN_RET(0x0062bf10); r_esp += 4; return;
L_0062bf5d:; BB(0x0062bf5d);
    /* 0062bf5d: jae 0x62bfcf */ if (!fC) goto L_0062bfcf;
L_0062bf5f:; BB(0x0062bf5f);
    /* 0062bf5f: lea ecx, [ebx + edi] */ r_ecx = (u32)(r_ebx+r_edi);
    /* 0062bf62: lea edx, [ebp + 0xf8] */ r_edx = (u32)(r_ebp+0xf8u);
    /* 0062bf68: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062bf6a: ja 0x62bfcf */ if ((!fC&&!fZ)) goto L_0062bfcf;
L_0062bf6c:; BB(0x0062bf6c);
    /* 0062bf6c: lea edx, [esi + edi] */ r_edx = (u32)(r_esi+r_edi);
    /* 0062bf6f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062bf71: jae 0x62bf7f */ if (!fC) goto L_0062bf7f;
L_0062bf73:; BB(0x0062bf73);
    /* 0062bf73: cmp byte ptr [edx], 0 */ {  u32 a = R8((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062bf76: jne 0x62bf7d */ if (!fZ) goto L_0062bf7d;
L_0062bf78:; BB(0x0062bf78);
    /* 0062bf78: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062bf79: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bf7b: jb 0x62bf73 */ if (fC) goto L_0062bf73;
L_0062bf7d:; BB(0x0062bf7d);
    /* 0062bf7d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_0062bf7f:; BB(0x0062bf7f);
    /* 0062bf7f: jne 0x62bfcf */ if (!fZ) goto L_0062bfcf;
L_0062bf81:; BB(0x0062bf81);
    /* 0062bf81: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 0062bf83: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0062bf86: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062bf88: ja 0x62bfbe */ if ((!fC&&!fZ)) goto L_0062bfbe;
L_0062bf8a:; BB(0x0062bf8a);
    /* 0062bf8a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062bf8c: jbe 0x62bfbe */ if ((fC||fZ)) goto L_0062bfbe;
L_0062bf8e:; BB(0x0062bf8e);
    /* 0062bf8e: lea eax, [ebp + 0xf8] */ r_eax = (u32)(r_ebp+0xf8u);
    /* 0062bf94: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bf96: jae 0x62bfb1 */ if (!fC) goto L_0062bfb1;
L_0062bf98:; BB(0x0062bf98);
    /* 0062bf98: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 0062bf9b: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0062bf9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062bf9f: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062bfa1: jne 0x62bfac */ if (!fZ) goto L_0062bfac;
L_0062bfa3:; BB(0x0062bfa3);
    /* 0062bfa3: mov dl, byte ptr [eax + ecx + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x1u))) & 0xffu);
    /* 0062bfa7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062bfa8: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062bfaa: je 0x62bfa3 */ if (fZ) goto L_0062bfa3;
L_0062bfac:; BB(0x0062bfac);
    /* 0062bfac: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 0062bfaf: jmp 0x62bfbe */ goto L_0062bfbe;
L_0062bfb1:; BB(0x0062bfb1);
    /* 0062bfb1: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 0062bfb4: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
    /* 0062bfbb: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
L_0062bfbe:; BB(0x0062bfbe);
    /* 0062bfbe: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0062bfc2: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062bfc4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062bfc6: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062bfc8: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062bfca: mov eax, 1 */ r_eax = 0x1u;
L_0062bfcf:; BB(0x0062bfcf);
    /* 0062bfcf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062bfd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bfd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bfd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062bfd3: ret  */ FN_RET(0x0062bf10); r_esp += 4; return;
}

void f_0062bfe0(void) /* FUN_0062bfe0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062bfe0);
    /* 0062bfe0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062bfe4: mov ecx, dword ptr [0x7129e0] */ r_ecx = R32((u32)(0x7129e0u));
    /* 0062bfea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bfeb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bfec: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bfee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062bfef: jae 0x62c082 */ if (!fC) goto L_0062c082;
L_0062bff5:; BB(0x0062bff5);
    /* 0062bff5: mov ecx, eax */ r_ecx = r_eax;
    /* 0062bff7: mov esi, eax */ r_esi = r_eax;
    /* 0062bff9: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062bffc: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0062bfff: mov edx, dword ptr [ecx*4 + 0x7128e0] */ r_edx = R32((u32)(r_ecx*4+0x7128e0u));
    /* 0062c006: lea ebx, [ecx*4 + 0x7128e0] */ r_ebx = (u32)(r_ecx*4+0x7128e0u);
    /* 0062c00d: shl esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0062c010: test byte ptr [edx + esi + 4], 1 */ {  u32 a = R8((u32)(r_edx+r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062c015: je 0x62c082 */ if (fZ) goto L_0062c082;
L_0062c017:; BB(0x0062c017);
    /* 0062c017: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c018: call 0x62faf0 */ r_esp -= 4; W32(r_esp, 0x62c01du); f_0062faf0();
    /* 0062c01d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c020: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c023: jne 0x62c035 */ if (!fZ) goto L_0062c035;
L_0062c025:; BB(0x0062c025);
    /* 0062c025: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
    /* 0062c02f: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062c031: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062c032: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062c033: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062c034: ret  */ FN_RET(0x0062bfe0); r_esp += 4; return;
L_0062c035:; BB(0x0062c035);
    /* 0062c035: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0062c039: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0062c03d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c03e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c040: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c042: call dword ptr [0x633100] */ { u32 t = R32((u32)(0x633100u)); r_esp -= 4; W32(r_esp, 0x62c048u); call_ind(t); }
    /* 0062c048: mov edi, eax */ r_edi = r_eax;
    /* 0062c04a: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c04d: jne 0x62c057 */ if (!fZ) goto L_0062c057;
L_0062c04f:; BB(0x0062c04f);
    /* 0062c04f: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x62c055u); call_ind(t); }
    /* 0062c055: jmp 0x62c059 */ goto L_0062c059;
L_0062c057:; BB(0x0062c057);
    /* 0062c057: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062c059:; BB(0x0062c059);
    /* 0062c059: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c05b: je 0x62c06d */ if (fZ) goto L_0062c06d;
L_0062c05d:; BB(0x0062c05d);
    /* 0062c05d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c05e: call 0x62b3e0 */ r_esp -= 4; W32(r_esp, 0x62c063u); f_0062b3e0();
    /* 0062c063: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c066: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062c069: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062c06a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062c06b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062c06c: ret  */ FN_RET(0x0062bfe0); r_esp += 4; return;
L_0062c06d:; BB(0x0062c06d);
    /* 0062c06d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0062c06f: mov cl, byte ptr [eax + esi + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+r_esi+0x4u))) & 0xffu);
    /* 0062c073: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
    /* 0062c077: and cl, 0xfd */ {  u32 a = (u8)r_ecx; u32 b = 0xfdu; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c07a: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0062c07c: mov eax, edi */ r_eax = r_edi;
    /* 0062c07e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062c07f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062c080: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062c081: ret  */ FN_RET(0x0062bfe0); r_esp += 4; return;
L_0062c082:; BB(0x0062c082);
    /* 0062c082: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062c083: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062c084: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
    /* 0062c08e: mov dword ptr [0x711460], 0 */ W32((u32)(0x711460u), 0x0u);
    /* 0062c098: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062c09b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062c09c: ret  */ FN_RET(0x0062bfe0); r_esp += 4; return;
}

void f_0062c0a0(void) /* FUN_0062c0a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c0a0);
    /* 0062c0a0: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062c0a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0a7: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0ac: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x62c0b1u); f_00626230();
    /* 0062c0b1: mov esi, eax */ r_esi = r_eax;
    /* 0062c0b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c0b6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c0b8: jne 0x62c0c4 */ if (!fZ) goto L_0062c0c4;
L_0062c0ba:; BB(0x0062c0ba);
    /* 0062c0ba: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0bc: call 0x627150 */ r_esp -= 4; W32(r_esp, 0x62c0c1u); f_00627150();
    /* 0062c0c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062c0c4:; BB(0x0062c0c4);
    /* 0062c0c4: lea eax, [esi + 0x100] */ r_eax = (u32)(r_esi+0x100u);
    /* 0062c0ca: mov dword ptr [0x7128e0], esi */ W32((u32)(0x7128e0u), r_esi);
    /* 0062c0d0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062c0d2: mov dword ptr [0x7129e0], 0x20 */ W32((u32)(0x7129e0u), 0x20u);
    /* 0062c0dc: mov bl, 0xa */ r_ebx = (r_ebx & 0xffffff00u) | ((0xau) & 0xffu);
    /* 0062c0de: jae 0x62c100 */ if (!fC) goto L_0062c100;
L_0062c0e0:; BB(0x0062c0e0);
    /* 0062c0e0: mov byte ptr [esi + 4], 0 */ W8((u32)(r_esi+0x4u), 0x0u);
    /* 0062c0e4: mov dword ptr [esi], 0xffffffff */ W32((u32)(r_esi), 0xffffffffu);
    /* 0062c0ea: mov byte ptr [esi + 5], bl */ W8((u32)(r_esi+0x5u), (u8)r_ebx);
    /* 0062c0ed: mov ecx, dword ptr [0x7128e0] */ r_ecx = R32((u32)(0x7128e0u));
    /* 0062c0f3: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062c0f6: add ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062c0fc: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062c0fe: jb 0x62c0e0 */ if (fC) goto L_0062c0e0;
L_0062c100:; BB(0x0062c100);
    /* 0062c100: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0062c104: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c105: call dword ptr [0x6330d8] */ { u32 t = R32((u32)(0x6330d8u)); r_esp -= 4; W32(r_esp, 0x62c10bu); call_ind(t); }
    /* 0062c10b: cmp word ptr [esp + 0x46], 0 */ {  u32 a = R16((u32)(r_esp+0x46u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062c111: je 0x62c209 */ if (fZ) goto L_0062c209;
L_0062c117:; BB(0x0062c117);
    /* 0062c117: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0062c11b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c11d: je 0x62c209 */ if (fZ) goto L_0062c209;
L_0062c123:; BB(0x0062c123);
    /* 0062c123: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062c125: lea edi, [eax + 4] */ r_edi = (u32)(r_eax+0x4u);
    /* 0062c128: cmp ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062c12e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0062c132: lea ebp, [edi + ecx] */ r_ebp = (u32)(r_edi+r_ecx);
    /* 0062c135: jl 0x62c13f */ if ((fS!=fO)) goto L_0062c13f;
L_0062c137:; BB(0x0062c137);
    /* 0062c137: mov dword ptr [esp + 0x10], 0x800 */ W32((u32)(r_esp+0x10u), 0x800u);
L_0062c13f:; BB(0x0062c13f);
    /* 0062c13f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062c143: mov ecx, dword ptr [0x7129e0] */ r_ecx = R32((u32)(0x7129e0u));
    /* 0062c149: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062c14b: jge 0x62c1b6 */ if ((fS==fO)) goto L_0062c1b6;
L_0062c14d:; BB(0x0062c14d);
    /* 0062c14d: mov esi, 0x7128e4 */ r_esi = 0x7128e4u;
L_0062c152:; BB(0x0062c152);
    /* 0062c152: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c157: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x62c15cu); f_00626230();
    /* 0062c15c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c15f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c161: je 0x62c1ac */ if (fZ) goto L_0062c1ac;
L_0062c163:; BB(0x0062c163);
    /* 0062c163: mov ecx, dword ptr [0x7129e0] */ r_ecx = R32((u32)(0x7129e0u));
    /* 0062c169: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0062c16b: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062c16e: mov dword ptr [0x7129e0], ecx */ W32((u32)(0x7129e0u), r_ecx);
    /* 0062c174: lea ecx, [eax + 0x100] */ r_ecx = (u32)(r_eax+0x100u);
    /* 0062c17a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062c17c: jae 0x62c19a */ if (!fC) goto L_0062c19a;
L_0062c17e:; BB(0x0062c17e);
    /* 0062c17e: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 0062c182: mov dword ptr [eax], 0xffffffff */ W32((u32)(r_eax), 0xffffffffu);
    /* 0062c188: mov byte ptr [eax + 5], bl */ W8((u32)(r_eax+0x5u), (u8)r_ebx);
    /* 0062c18b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0062c18d: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062c190: add edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062c196: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062c198: jb 0x62c17e */ if (fC) goto L_0062c17e;
L_0062c19a:; BB(0x0062c19a);
    /* 0062c19a: mov eax, dword ptr [0x7129e0] */ r_eax = R32((u32)(0x7129e0u));
    /* 0062c19f: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0062c1a3: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062c1a6: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062c1a8: jl 0x62c152 */ if ((fS!=fO)) goto L_0062c152;
L_0062c1aa:; BB(0x0062c1aa);
    /* 0062c1aa: jmp 0x62c1b6 */ goto L_0062c1b6;
L_0062c1ac:; BB(0x0062c1ac);
    /* 0062c1ac: mov ecx, dword ptr [0x7129e0] */ r_ecx = R32((u32)(0x7129e0u));
    /* 0062c1b2: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
L_0062c1b6:; BB(0x0062c1b6);
    /* 0062c1b6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062c1ba: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0062c1bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062c1be: jle 0x62c209 */ if ((fZ||fS!=fO)) goto L_0062c209;
L_0062c1c0:; BB(0x0062c1c0);
    /* 0062c1c0: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0062c1c3: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c1c6: je 0x62c1fc */ if (fZ) goto L_0062c1fc;
L_0062c1c8:; BB(0x0062c1c8);
    /* 0062c1c8: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0062c1ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062c1cc: je 0x62c1fc */ if (fZ) goto L_0062c1fc;
L_0062c1ce:; BB(0x0062c1ce);
    /* 0062c1ce: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062c1d0: jne 0x62c1dd */ if (!fZ) goto L_0062c1dd;
L_0062c1d2:; BB(0x0062c1d2);
    /* 0062c1d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c1d3: call dword ptr [0x63310c] */ { u32 t = R32((u32)(0x63310cu)); r_esp -= 4; W32(r_esp, 0x62c1d9u); call_ind(t); }
    /* 0062c1d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c1db: je 0x62c1fc */ if (fZ) goto L_0062c1fc;
L_0062c1dd:; BB(0x0062c1dd);
    /* 0062c1dd: mov edx, esi */ r_edx = r_esi;
    /* 0062c1df: mov eax, esi */ r_eax = r_esi;
    /* 0062c1e1: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0062c1e4: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062c1e7: mov ecx, dword ptr [edx*4 + 0x7128e0] */ r_ecx = R32((u32)(r_edx*4+0x7128e0u));
    /* 0062c1ee: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0062c1f1: mov dword ptr [ecx + eax*8], edx */ W32((u32)(r_ecx+r_eax*8), r_edx);
    /* 0062c1f4: lea eax, [ecx + eax*8] */ r_eax = (u32)(r_ecx+r_eax*8);
    /* 0062c1f7: mov cl, byte ptr [edi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0062c1f9: mov byte ptr [eax + 4], cl */ W8((u32)(r_eax+0x4u), (u8)r_ecx);
L_0062c1fc:; BB(0x0062c1fc);
    /* 0062c1fc: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062c200: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062c201: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062c202: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0062c205: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062c207: jl 0x62c1c0 */ if ((fS!=fO)) goto L_0062c1c0;
L_0062c209:; BB(0x0062c209);
    /* 0062c209: mov ebp, dword ptr [0x633114] */ r_ebp = R32((u32)(0x633114u));
    /* 0062c20f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0062c211:; BB(0x0062c211);
    /* 0062c211: mov edx, dword ptr [0x7128e0] */ r_edx = R32((u32)(0x7128e0u));
    /* 0062c217: mov eax, dword ptr [edx + ebx*8] */ r_eax = R32((u32)(r_edx+r_ebx*8));
    /* 0062c21a: lea esi, [edx + ebx*8] */ r_esi = (u32)(r_edx+r_ebx*8);
    /* 0062c21d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c220: jne 0x62c276 */ if (!fZ) goto L_0062c276;
L_0062c222:; BB(0x0062c222);
    /* 0062c222: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c224: mov byte ptr [esi + 4], 0x81 */ W8((u32)(r_esi+0x4u), 0x81u);
    /* 0062c228: jne 0x62c231 */ if (!fZ) goto L_0062c231;
L_0062c22a:; BB(0x0062c22a);
    /* 0062c22a: mov eax, 0xfffffff6 */ r_eax = 0xfffffff6u;
    /* 0062c22f: jmp 0x62c23b */ goto L_0062c23b;
L_0062c231:; BB(0x0062c231);
    /* 0062c231: mov eax, ebx */ r_eax = r_ebx;
    /* 0062c233: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062c234: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0062c236: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0062c238: add eax, -0xb */ {  u32 a = r_eax; u32 b = 0xfffffff5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0062c23b:; BB(0x0062c23b);
    /* 0062c23b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c23c: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x62c23eu); call_ind(t); }
    /* 0062c23e: mov edi, eax */ r_edi = r_eax;
    /* 0062c240: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c243: je 0x62c26f */ if (fZ) goto L_0062c26f;
L_0062c245:; BB(0x0062c245);
    /* 0062c245: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062c246: call dword ptr [0x63310c] */ { u32 t = R32((u32)(0x63310cu)); r_esp -= 4; W32(r_esp, 0x62c24cu); call_ind(t); }
    /* 0062c24c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c24e: je 0x62c26f */ if (fZ) goto L_0062c26f;
L_0062c250:; BB(0x0062c250);
    /* 0062c250: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062c255: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 0062c257: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c25a: jne 0x62c263 */ if (!fZ) goto L_0062c263;
L_0062c25c:; BB(0x0062c25c);
    /* 0062c25c: mov al, byte ptr [esi + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x4u))) & 0xffu);
    /* 0062c25f: or al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c261: jmp 0x62c27b */ goto L_0062c27b;
L_0062c263:; BB(0x0062c263);
    /* 0062c263: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c266: jne 0x62c27e */ if (!fZ) goto L_0062c27e;
L_0062c268:; BB(0x0062c268);
    /* 0062c268: mov al, byte ptr [esi + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x4u))) & 0xffu);
    /* 0062c26b: or al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c26d: jmp 0x62c27b */ goto L_0062c27b;
L_0062c26f:; BB(0x0062c26f);
    /* 0062c26f: mov al, byte ptr [esi + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x4u))) & 0xffu);
    /* 0062c272: or al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c274: jmp 0x62c27b */ goto L_0062c27b;
L_0062c276:; BB(0x0062c276);
    /* 0062c276: mov al, byte ptr [esi + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x4u))) & 0xffu);
    /* 0062c279: or al, 0x80 */ {  u32 a = (u8)r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062c27b:; BB(0x0062c27b);
    /* 0062c27b: mov byte ptr [esi + 4], al */ W8((u32)(r_esi+0x4u), (u8)r_eax);
L_0062c27e:; BB(0x0062c27e);
    /* 0062c27e: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062c27f: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062c282: jl 0x62c211 */ if ((fS!=fO)) goto L_0062c211;
L_0062c284:; BB(0x0062c284);
    /* 0062c284: mov eax, dword ptr [0x7129e0] */ r_eax = R32((u32)(0x7129e0u));
    /* 0062c289: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c28a: call dword ptr [0x633104] */ { u32 t = R32((u32)(0x633104u)); r_esp -= 4; W32(r_esp, 0x62c290u); call_ind(t); }
    /* 0062c290: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062c291: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062c292: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062c293: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062c294: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c297: ret  */ FN_RET(0x0062c0a0); r_esp += 4; return;
}

void f_0062c2a0(void) /* FUN_0062c2a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c2a0);
    /* 0062c2a0: mov eax, dword ptr [0x7114b4] */ r_eax = R32((u32)(0x7114b4u));
    /* 0062c2a5: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c2aa: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062c2ab: mov dword ptr [0x7114b4], eax */ W32((u32)(0x7114b4u), r_eax);
    /* 0062c2b0: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x62c2b5u); f_00626230();
    /* 0062c2b5: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0062c2b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c2bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c2be: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0062c2c1: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0062c2c4: je 0x62c2df */ if (fZ) goto L_0062c2df;
L_0062c2c6:; BB(0x0062c2c6);
    /* 0062c2c6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0062c2c9: or al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c2cb: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0062c2ce: mov dword ptr [ecx + 0x18], 0x1000 */ W32((u32)(r_ecx+0x18u), 0x1000u);
    /* 0062c2d5: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0062c2d7: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0062c2de: ret  */ FN_RET(0x0062c2a0); r_esp += 4; return;
L_0062c2df:; BB(0x0062c2df);
    /* 0062c2df: or al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c2e1: mov dword ptr [ecx + 0x18], 2 */ W32((u32)(r_ecx+0x18u), 0x2u);
    /* 0062c2e8: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0062c2eb: lea eax, [ecx + 0x14] */ r_eax = (u32)(r_ecx+0x14u);
    /* 0062c2ee: mov edx, eax */ r_edx = r_eax;
    /* 0062c2f0: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0062c2f3: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0062c2f5: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0062c2fc: ret  */ FN_RET(0x0062c2a0); r_esp += 4; return;
}

void f_0062c300(void) /* FUN_0062c300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c300);
    /* 0062c300: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062c304: mov ecx, dword ptr [0x7129e0] */ r_ecx = R32((u32)(0x7129e0u));
    /* 0062c30a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062c30c: jb 0x62c311 */ if (fC) goto L_0062c311;
L_0062c30e:; BB(0x0062c30e);
    /* 0062c30e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062c310: ret  */ FN_RET(0x0062c300); r_esp += 4; return;
L_0062c311:; BB(0x0062c311);
    /* 0062c311: mov ecx, eax */ r_ecx = r_eax;
    /* 0062c313: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062c316: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062c319: mov edx, dword ptr [ecx*4 + 0x7128e0] */ r_edx = R32((u32)(r_ecx*4+0x7128e0u));
    /* 0062c320: mov al, byte ptr [edx + eax*8 + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_eax*8+0x4u))) & 0xffu);
    /* 0062c324: and eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062c327: ret  */ FN_RET(0x0062c300); r_esp += 4; return;
}

void f_0062c410(void) /* FUN_0062c410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c410);
    /* 0062c410: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062c414: mov ecx, dword ptr [0x7129e0] */ r_ecx = R32((u32)(0x7129e0u));
    /* 0062c41a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062c41c: jae 0x62c45d */ if (!fC) goto L_0062c45d;
L_0062c41e:; BB(0x0062c41e);
    /* 0062c41e: mov ecx, eax */ r_ecx = r_eax;
    /* 0062c420: mov edx, eax */ r_edx = r_eax;
    /* 0062c422: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062c425: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062c428: mov ecx, dword ptr [ecx*4 + 0x7128e0] */ r_ecx = R32((u32)(r_ecx*4+0x7128e0u));
    /* 0062c42f: test byte ptr [ecx + edx*8 + 4], 1 */ {  u32 a = R8((u32)(r_ecx+r_edx*8+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062c434: je 0x62c45d */ if (fZ) goto L_0062c45d;
L_0062c436:; BB(0x0062c436);
    /* 0062c436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c437: call 0x62faf0 */ r_esp -= 4; W32(r_esp, 0x62c43cu); f_0062faf0();
    /* 0062c43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c43f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c440: call dword ptr [0x633110] */ { u32 t = R32((u32)(0x633110u)); r_esp -= 4; W32(r_esp, 0x62c446u); call_ind(t); }
    /* 0062c446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c448: jne 0x62c452 */ if (!fZ) goto L_0062c452;
L_0062c44a:; BB(0x0062c44a);
    /* 0062c44a: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x62c450u); call_ind(t); }
    /* 0062c450: jmp 0x62c454 */ goto L_0062c454;
L_0062c452:; BB(0x0062c452);
    /* 0062c452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062c454:; BB(0x0062c454);
    /* 0062c454: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c456: je 0x62c46a */ if (fZ) goto L_0062c46a;
L_0062c458:; BB(0x0062c458);
    /* 0062c458: mov dword ptr [0x711460], eax */ W32((u32)(0x711460u), r_eax);
L_0062c45d:; BB(0x0062c45d);
    /* 0062c45d: mov dword ptr [0x71145c], 9 */ W32((u32)(0x71145cu), 0x9u);
    /* 0062c467: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0062c46a:; BB(0x0062c46a);
    /* 0062c46a: ret  */ FN_RET(0x0062c410); r_esp += 4; return;
}

void f_0062c568(void) /* FUN_0062c568 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c568);
    /* 0062c568: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c56a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c56c: ret  */ FN_RET(0x0062c568); r_esp += 4; return;
}

void f_0062c640(void) /* FUN_0062c640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c640);
    /* 0062c640: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0062c642: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0062c644: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 0062c646: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c648: fchs  */ ST(0) = -ST(0);
    /* 0062c64a: f2xm1  */ ST(0) = exp2l(ST(0)) - 1.0;
    /* 0062c64c: fld1  */ FPUSH(1.0);
    /* 0062c64e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062c650: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 0062c652: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0062c654: ret  */ FN_RET(0x0062c640); r_esp += 4; return;
}

void f_0062c655(void) /* FUN_0062c655 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c655);
    /* 0062c655: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0062c659: and edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062c65f: or edx, 0x7f */ {  u32 a = r_edx; u32 b = 0x7fu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062c662: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0062c667: fldcw word ptr [esp + 6] */ fcw = R16((u32)(r_esp+0x6u));
    /* 0062c66b: ret  */ FN_RET(0x0062c655); r_esp += 4; return;
}

void f_0062c66c(void) /* FUN_0062c66c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c66c);
    /* 0062c66c: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c671: je 0x62c679 */ if (fZ) goto L_0062c679;
L_0062c673:; BB(0x0062c673);
    /* 0062c673: mov eax, 7 */ r_eax = 0x7u;
    /* 0062c678: ret  */ FN_RET(0x0062c66c); r_esp += 4; return;
L_0062c679:; BB(0x0062c679);
    /* 0062c679: fadd qword ptr [0x63d310] */ ST(0) = ST(0) + R_F64((u32)(0x63d310u));
    /* 0062c67f: mov eax, 1 */ r_eax = 0x1u;
    /* 0062c684: ret  */ FN_RET(0x0062c66c); r_esp += 4; return;
}

void f_0062c6c8(void) /* FUN_0062c6c8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c6c8);
    /* 0062c6c8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062c6cc: and eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062c6d1: cmp eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c6d6: je 0x62c6d9 */ if (fZ) goto L_0062c6d9;
L_0062c6d8:; BB(0x0062c6d8);
    /* 0062c6d8: ret  */ FN_RET(0x0062c6c8); r_esp += 4; return;
L_0062c6d9:; BB(0x0062c6d9);
    /* 0062c6d9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062c6dd: ret  */ FN_RET(0x0062c6c8); r_esp += 4; return;
}

void f_0062c6de(void) /* FUN_0062c6de */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c6de);
    /* 0062c6de: cmp word ptr [esp], 0x27f */ {  u32 a = R16((u32)(r_esp)); u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062c6e4: je 0x62c6e9 */ if (fZ) goto L_0062c6e9;
L_0062c6e6:; BB(0x0062c6e6);
    /* 0062c6e6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
L_0062c6e9:; BB(0x0062c6e9);
    /* 0062c6e9: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062c6ea: ret  */ FN_RET(0x0062c6de); r_esp += 4; return;
}

void f_0062c729(void) /* FUN_0062c729 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c729);
    /* 0062c729: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062c72c: fst qword ptr [esp] */ W_F64((u32)(r_esp), ST(0));
    /* 0062c72f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062c733: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c736: and eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062c73b: je 0x62c77a */ if (fZ) goto L_0062c77a;
L_0062c73d:; BB(0x0062c73d);
    /* 0062c73d: cmp eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c742: je 0x62c7a3 */ if (fZ) goto L_0062c7a3;
L_0062c744:; BB(0x0062c744);
    /* 0062c744: mov ax, word ptr [esp] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esp))) & 0xffffu);
    /* 0062c748: cmp ax, 0x27f */ {  u32 a = (u16)r_eax; u32 b = 0x27fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062c74c: je 0x62c778 */ if (fZ) goto L_0062c778;
L_0062c74e:; BB(0x0062c74e);
    /* 0062c74e: and ax, 0x20 */ {  u32 a = (u16)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); }
    /* 0062c752: jne 0x62c775 */ if (!fZ) goto L_0062c775;
L_0062c754:; BB(0x0062c754);
    /* 0062c754: wait  */ ;
    /* 0062c755: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c757: and ax, 0x20 */ {  u32 a = (u16)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); }
    /* 0062c75b: je 0x62c775 */ if (fZ) goto L_0062c775;
L_0062c75d:; BB(0x0062c75d);
    /* 0062c75d: mov eax, 8 */ r_eax = 0x8u;
L_0062c762:; BB(0x0062c762);
    /* 0062c762: cmp edx, 0x1d */ {  u32 a = r_edx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c765: je 0x62c76e */ if (fZ) goto L_0062c76e;
L_0062c767:; BB(0x0062c767);
    /* 0062c767: call 0x62c7e7 */ r_esp -= 4; W32(r_esp, 0x62c76cu); f_0062c7e7();
    /* 0062c76c: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062c76d: ret  */ FN_RET(0x0062c729); r_esp += 4; return;
L_0062c76e:; BB(0x0062c76e);
    /* 0062c76e: call 0x62c7d0 */ r_esp -= 4; W32(r_esp, 0x62c773u); f_0062c7d0();
    /* 0062c773: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062c774: ret  */ FN_RET(0x0062c729); r_esp += 4; return;
L_0062c775:; BB(0x0062c775);
    /* 0062c775: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
L_0062c778:; BB(0x0062c778);
    /* 0062c778: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062c779: ret  */ FN_RET(0x0062c729); r_esp += 4; return;
L_0062c77a:; BB(0x0062c77a);
    /* 0062c77a: fld qword ptr [0x63d33c] */ FPUSH(R_F64((u32)(0x63d33cu)));
    /* 0062c780: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c782: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 0062c784: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0062c786: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0062c788: fabs  */ ST(0) = fabsl(ST(0));
    /* 0062c78a: fcomp qword ptr [0x63d32c] */ fx_compare(ST(0), R_F64((u32)(0x63d32cu))); FPOP();
    /* 0062c790: wait  */ ;
    /* 0062c791: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c793: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c794: mov eax, 4 */ r_eax = 0x4u;
    /* 0062c799: jae 0x62c762 */ if (!fC) goto L_0062c762;
L_0062c79b:; BB(0x0062c79b);
    /* 0062c79b: fmul qword ptr [0x63d34c] */ ST(0) = ST(0) * R_F64((u32)(0x63d34cu));
    /* 0062c7a1: jmp 0x62c762 */ goto L_0062c762;
L_0062c7a3:; BB(0x0062c7a3);
    /* 0062c7a3: fld qword ptr [0x63d334] */ FPUSH(R_F64((u32)(0x63d334u)));
    /* 0062c7a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c7ab: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 0062c7ad: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0062c7af: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0062c7b1: fabs  */ ST(0) = fabsl(ST(0));
    /* 0062c7b3: fcomp qword ptr [0x63d324] */ fx_compare(ST(0), R_F64((u32)(0x63d324u))); FPOP();
    /* 0062c7b9: wait  */ ;
    /* 0062c7ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c7bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c7bd: mov eax, 3 */ r_eax = 0x3u;
    /* 0062c7c2: jbe 0x62c762 */ if ((fC||fZ)) goto L_0062c762;
L_0062c7c4:; BB(0x0062c7c4);
    /* 0062c7c4: fmul qword ptr [0x63d344] */ ST(0) = ST(0) * R_F64((u32)(0x63d344u));
    /* 0062c7ca: jmp 0x62c762 */ goto L_0062c762;
}

void f_0062c7d0(void) /* FUN_0062c7d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c7d0);
    /* 0062c7d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c7d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062c7d3: add esp, -0x20 */ {  u32 a = r_esp; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c7d6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062c7d9: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0062c7dc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062c7df: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0062c7e2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062c7e5: jmp 0x62c7f0 */ goto L_0062c7f0;
L_0062c7f0:; BB(0x0062c7f0);
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
    /* 0062c822: ret  */ FN_RET(0x0062c7d0); r_esp += 4; return;
}

void f_0062c8de(void) /* FUN_0062c8de */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c8de);
    /* 0062c8de: mov byte ptr [0x7114c8], 0 */ W8((u32)(0x7114c8u), 0x0u);
    /* 0062c8e5: cmp dword ptr [0x71130c], 0 */ {  u32 a = R32((u32)(0x71130cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c8ec: jne 0x62c93a */ if (!fZ) goto L_0062c93a;
L_0062c8ee:; BB(0x0062c8ee);
    /* 0062c8ee: fst qword ptr [0x7114c0] */ W_F64((u32)(0x7114c0u), ST(0));
    /* 0062c8f4: mov al, byte ptr [ebp - 0x90] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff70u))) & 0xffu);
    /* 0062c8fa: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0062c8fc: je 0x62c918 */ if (fZ) goto L_0062c918;
L_0062c8fe:; BB(0x0062c8fe);
    /* 0062c8fe: cmp al, 0xff */ {  u32 a = (u8)r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062c900: je 0x62c942 */ if (fZ) goto L_0062c942;
L_0062c902:; BB(0x0062c902);
    /* 0062c902: cmp al, 0xfe */ {  u32 a = (u8)r_eax; u32 b = 0xfeu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062c904: je 0x62c942 */ if (fZ) goto L_0062c942;
L_0062c906:; BB(0x0062c906);
    /* 0062c906: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0062c908: je 0x62c93a */ if (fZ) goto L_0062c93a;
L_0062c90a:; BB(0x0062c90a);
    /* 0062c90a: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0062c90d: mov dword ptr [ebp - 0x8e], eax */ W32((u32)(r_ebp+0xffffff72u), r_eax);
    /* 0062c913: jmp 0x62c9b3 */ goto L_0062c9b3;
L_0062c918:; BB(0x0062c918);
    /* 0062c918: mov ax, word ptr [ebp - 0xa4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff5cu))) & 0xffffu);
    /* 0062c91f: and ax, 0x20 */ {  u32 a = (u16)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); }
    /* 0062c923: jne 0x62c93a */ if (!fZ) goto L_0062c93a;
L_0062c925:; BB(0x0062c925);
    /* 0062c925: wait  */ ;
    /* 0062c926: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c928: and ax, 0x20 */ {  u32 a = (u16)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); }
    /* 0062c92c: je 0x62c93a */ if (fZ) goto L_0062c93a;
L_0062c92e:; BB(0x0062c92e);
    /* 0062c92e: mov dword ptr [ebp - 0x8e], 8 */ W32((u32)(r_ebp+0xffffff72u), 0x8u);
    /* 0062c938: jmp 0x62c9b3 */ goto L_0062c9b3;
L_0062c93a:; BB(0x0062c93a);
    /* 0062c93a: fldcw word ptr [ebp - 0xa4] */ fcw = R16((u32)(r_ebp+0xffffff5cu));
    /* 0062c940: wait  */ ;
    /* 0062c941: ret  */ FN_RET(0x0062c8de); r_esp += 4; return;
L_0062c942:; BB(0x0062c942);
    /* 0062c942: mov ax, word ptr [0x7114c6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x7114c6u))) & 0xffffu);
    /* 0062c948: and ax, 0x7ff0 */ {  u32 a = (u16)r_eax; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0062c94c: or ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); }
    /* 0062c94f: je 0x62c959 */ if (fZ) goto L_0062c959;
L_0062c951:; BB(0x0062c951);
    /* 0062c951: cmp ax, 0x7ff0 */ {  u32 a = (u16)r_eax; u32 b = 0x7ff0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062c955: je 0x62c987 */ if (fZ) goto L_0062c987;
L_0062c957:; BB(0x0062c957);
    /* 0062c957: jmp 0x62c918 */ goto L_0062c918;
L_0062c959:; BB(0x0062c959);
    /* 0062c959: mov dword ptr [ebp - 0x8e], 4 */ W32((u32)(r_ebp+0xffffff72u), 0x4u);
    /* 0062c963: fld qword ptr [0x63d378] */ FPUSH(R_F64((u32)(0x63d378u)));
    /* 0062c969: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c96b: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 0062c96d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0062c96f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0062c971: fabs  */ ST(0) = fabsl(ST(0));
    /* 0062c973: fcomp qword ptr [0x63d368] */ fx_compare(ST(0), R_F64((u32)(0x63d368u))); FPOP();
    /* 0062c979: wait  */ ;
    /* 0062c97a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c97c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c97d: jae 0x62c9b3 */ if (!fC) goto L_0062c9b3;
L_0062c97f:; BB(0x0062c97f);
    /* 0062c97f: fmul qword ptr [0x63d388] */ ST(0) = ST(0) * R_F64((u32)(0x63d388u));
    /* 0062c985: jmp 0x62c9b3 */ goto L_0062c9b3;
L_0062c987:; BB(0x0062c987);
    /* 0062c987: mov dword ptr [ebp - 0x8e], 3 */ W32((u32)(r_ebp+0xffffff72u), 0x3u);
    /* 0062c991: fld qword ptr [0x63d370] */ FPUSH(R_F64((u32)(0x63d370u)));
    /* 0062c997: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c999: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 0062c99b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0062c99d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0062c99f: fabs  */ ST(0) = fabsl(ST(0));
    /* 0062c9a1: fcomp qword ptr [0x63d360] */ fx_compare(ST(0), R_F64((u32)(0x63d360u))); FPOP();
    /* 0062c9a7: wait  */ ;
    /* 0062c9a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c9aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c9ab: jbe 0x62c9b3 */ if ((fC||fZ)) goto L_0062c9b3;
L_0062c9ad:; BB(0x0062c9ad);
    /* 0062c9ad: fmul qword ptr [0x63d380] */ ST(0) = ST(0) * R_F64((u32)(0x63d380u));
L_0062c9b3:; BB(0x0062c9b3);
    /* 0062c9b3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062c9b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062c9b5: mov ebx, dword ptr [ebp - 0x94] */ r_ebx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0062c9bb: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062c9bc: mov dword ptr [ebp - 0x8a], ebx */ W32((u32)(r_ebp+0xffffff76u), r_ebx);
    /* 0062c9c2: cmp byte ptr [0x7114c8], 0 */ {  u32 a = R8((u32)(0x7114c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062c9c9: jne 0x62c9e5 */ if (!fZ) goto L_0062c9e5;
L_0062c9cb:; BB(0x0062c9cb);
    /* 0062c9cb: cld  */ rt_df = 0;
    /* 0062c9cc: lea esi, [ebp + 8] */ r_esi = (u32)(r_ebp+0x8u);
    /* 0062c9cf: lea edi, [ebp - 0x86] */ r_edi = (u32)(r_ebp+0xffffff7au);
    /* 0062c9d5: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0062c9d6: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0062c9d7: cmp byte ptr [ebx + 0xc], 1 */ {  u32 a = R8((u32)(r_ebx+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062c9db: je 0x62c9e5 */ if (fZ) goto L_0062c9e5;
L_0062c9dd:; BB(0x0062c9dd);
    /* 0062c9dd: lea esi, [ebp + 0x10] */ r_esi = (u32)(r_ebp+0x10u);
    /* 0062c9e0: lea edi, [ebp - 0x7e] */ r_edi = (u32)(r_ebp+0xffffff82u);
    /* 0062c9e3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0062c9e4: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
L_0062c9e5:; BB(0x0062c9e5);
    /* 0062c9e5: fstp qword ptr [ebp - 0x76] */ W_F64((u32)(r_ebp+0xffffff8au), ST(0)); FPOP();
    /* 0062c9e8: lea eax, [ebp - 0x8e] */ r_eax = (u32)(r_ebp+0xffffff72u);
    /* 0062c9ee: lea ebx, [ebp - 0xa4] */ r_ebx = (u32)(r_ebp+0xffffff5cu);
    /* 0062c9f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c9f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c9f6: mov ebx, dword ptr [ebp - 0x94] */ r_ebx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0062c9fc: mov al, byte ptr [ebx + 0xe] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebx+0xeu))) & 0xffu);
    /* 0062c9ff: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0062ca02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca03: call 0x630660 */ r_esp -= 4; W32(r_esp, 0x62ca08u); f_00630660();
    /* 0062ca08: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ca0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062ca0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ca0d: fld qword ptr [ebp - 0x76] */ FPUSH(R_F64((u32)(r_ebp+0xffffff8au)));
    /* 0062ca10: jmp 0x62c93a */ goto L_0062c93a;
}

void f_0062c8e5(void) /* FUN_0062c8e5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c8e5);
    /* 0062c8e5: cmp dword ptr [0x71130c], 0 */ {  u32 a = R32((u32)(0x71130cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c8ec: jne 0x62c93a */ if (!fZ) goto L_0062c93a;
L_0062c8ee:; BB(0x0062c8ee);
    /* 0062c8ee: fst qword ptr [0x7114c0] */ W_F64((u32)(0x7114c0u), ST(0));
    /* 0062c8f4: mov al, byte ptr [ebp - 0x90] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff70u))) & 0xffu);
    /* 0062c8fa: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0062c8fc: je 0x62c918 */ if (fZ) goto L_0062c918;
L_0062c8fe:; BB(0x0062c8fe);
    /* 0062c8fe: cmp al, 0xff */ {  u32 a = (u8)r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062c900: je 0x62c942 */ if (fZ) goto L_0062c942;
L_0062c902:; BB(0x0062c902);
    /* 0062c902: cmp al, 0xfe */ {  u32 a = (u8)r_eax; u32 b = 0xfeu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062c904: je 0x62c942 */ if (fZ) goto L_0062c942;
L_0062c906:; BB(0x0062c906);
    /* 0062c906: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0062c908: je 0x62c93a */ if (fZ) goto L_0062c93a;
L_0062c90a:; BB(0x0062c90a);
    /* 0062c90a: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0062c90d: mov dword ptr [ebp - 0x8e], eax */ W32((u32)(r_ebp+0xffffff72u), r_eax);
    /* 0062c913: jmp 0x62c9b3 */ goto L_0062c9b3;
L_0062c918:; BB(0x0062c918);
    /* 0062c918: mov ax, word ptr [ebp - 0xa4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff5cu))) & 0xffffu);
    /* 0062c91f: and ax, 0x20 */ {  u32 a = (u16)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); }
    /* 0062c923: jne 0x62c93a */ if (!fZ) goto L_0062c93a;
L_0062c925:; BB(0x0062c925);
    /* 0062c925: wait  */ ;
    /* 0062c926: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c928: and ax, 0x20 */ {  u32 a = (u16)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); }
    /* 0062c92c: je 0x62c93a */ if (fZ) goto L_0062c93a;
L_0062c92e:; BB(0x0062c92e);
    /* 0062c92e: mov dword ptr [ebp - 0x8e], 8 */ W32((u32)(r_ebp+0xffffff72u), 0x8u);
    /* 0062c938: jmp 0x62c9b3 */ goto L_0062c9b3;
L_0062c93a:; BB(0x0062c93a);
    /* 0062c93a: fldcw word ptr [ebp - 0xa4] */ fcw = R16((u32)(r_ebp+0xffffff5cu));
    /* 0062c940: wait  */ ;
    /* 0062c941: ret  */ FN_RET(0x0062c8e5); r_esp += 4; return;
L_0062c942:; BB(0x0062c942);
    /* 0062c942: mov ax, word ptr [0x7114c6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x7114c6u))) & 0xffffu);
    /* 0062c948: and ax, 0x7ff0 */ {  u32 a = (u16)r_eax; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0062c94c: or ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); }
    /* 0062c94f: je 0x62c959 */ if (fZ) goto L_0062c959;
L_0062c951:; BB(0x0062c951);
    /* 0062c951: cmp ax, 0x7ff0 */ {  u32 a = (u16)r_eax; u32 b = 0x7ff0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062c955: je 0x62c987 */ if (fZ) goto L_0062c987;
L_0062c957:; BB(0x0062c957);
    /* 0062c957: jmp 0x62c918 */ goto L_0062c918;
L_0062c959:; BB(0x0062c959);
    /* 0062c959: mov dword ptr [ebp - 0x8e], 4 */ W32((u32)(r_ebp+0xffffff72u), 0x4u);
    /* 0062c963: fld qword ptr [0x63d378] */ FPUSH(R_F64((u32)(0x63d378u)));
    /* 0062c969: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c96b: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 0062c96d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0062c96f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0062c971: fabs  */ ST(0) = fabsl(ST(0));
    /* 0062c973: fcomp qword ptr [0x63d368] */ fx_compare(ST(0), R_F64((u32)(0x63d368u))); FPOP();
    /* 0062c979: wait  */ ;
    /* 0062c97a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c97c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c97d: jae 0x62c9b3 */ if (!fC) goto L_0062c9b3;
L_0062c97f:; BB(0x0062c97f);
    /* 0062c97f: fmul qword ptr [0x63d388] */ ST(0) = ST(0) * R_F64((u32)(0x63d388u));
    /* 0062c985: jmp 0x62c9b3 */ goto L_0062c9b3;
L_0062c987:; BB(0x0062c987);
    /* 0062c987: mov dword ptr [ebp - 0x8e], 3 */ W32((u32)(r_ebp+0xffffff72u), 0x3u);
    /* 0062c991: fld qword ptr [0x63d370] */ FPUSH(R_F64((u32)(0x63d370u)));
    /* 0062c997: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c999: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 0062c99b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0062c99d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0062c99f: fabs  */ ST(0) = fabsl(ST(0));
    /* 0062c9a1: fcomp qword ptr [0x63d360] */ fx_compare(ST(0), R_F64((u32)(0x63d360u))); FPOP();
    /* 0062c9a7: wait  */ ;
    /* 0062c9a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c9aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c9ab: jbe 0x62c9b3 */ if ((fC||fZ)) goto L_0062c9b3;
L_0062c9ad:; BB(0x0062c9ad);
    /* 0062c9ad: fmul qword ptr [0x63d380] */ ST(0) = ST(0) * R_F64((u32)(0x63d380u));
L_0062c9b3:; BB(0x0062c9b3);
    /* 0062c9b3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062c9b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062c9b5: mov ebx, dword ptr [ebp - 0x94] */ r_ebx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0062c9bb: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062c9bc: mov dword ptr [ebp - 0x8a], ebx */ W32((u32)(r_ebp+0xffffff76u), r_ebx);
    /* 0062c9c2: cmp byte ptr [0x7114c8], 0 */ {  u32 a = R8((u32)(0x7114c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062c9c9: jne 0x62c9e5 */ if (!fZ) goto L_0062c9e5;
L_0062c9cb:; BB(0x0062c9cb);
    /* 0062c9cb: cld  */ rt_df = 0;
    /* 0062c9cc: lea esi, [ebp + 8] */ r_esi = (u32)(r_ebp+0x8u);
    /* 0062c9cf: lea edi, [ebp - 0x86] */ r_edi = (u32)(r_ebp+0xffffff7au);
    /* 0062c9d5: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0062c9d6: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0062c9d7: cmp byte ptr [ebx + 0xc], 1 */ {  u32 a = R8((u32)(r_ebx+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062c9db: je 0x62c9e5 */ if (fZ) goto L_0062c9e5;
L_0062c9dd:; BB(0x0062c9dd);
    /* 0062c9dd: lea esi, [ebp + 0x10] */ r_esi = (u32)(r_ebp+0x10u);
    /* 0062c9e0: lea edi, [ebp - 0x7e] */ r_edi = (u32)(r_ebp+0xffffff82u);
    /* 0062c9e3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0062c9e4: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
L_0062c9e5:; BB(0x0062c9e5);
    /* 0062c9e5: fstp qword ptr [ebp - 0x76] */ W_F64((u32)(r_ebp+0xffffff8au), ST(0)); FPOP();
    /* 0062c9e8: lea eax, [ebp - 0x8e] */ r_eax = (u32)(r_ebp+0xffffff72u);
    /* 0062c9ee: lea ebx, [ebp - 0xa4] */ r_ebx = (u32)(r_ebp+0xffffff5cu);
    /* 0062c9f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c9f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c9f6: mov ebx, dword ptr [ebp - 0x94] */ r_ebx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0062c9fc: mov al, byte ptr [ebx + 0xe] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebx+0xeu))) & 0xffu);
    /* 0062c9ff: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0062ca02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca03: call 0x630660 */ r_esp -= 4; W32(r_esp, 0x62ca08u); f_00630660();
    /* 0062ca08: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ca0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062ca0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ca0d: fld qword ptr [ebp - 0x76] */ FPUSH(R_F64((u32)(r_ebp+0xffffff8au)));
    /* 0062ca10: jmp 0x62c93a */ goto L_0062c93a;
}

void f_0062ca80(void) /* FUN_0062ca80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ca80);
    /* 0062ca80: fld xword ptr [esp + 0x10] */ FPUSH(R_F80((u32)(r_esp+0x10u)));
    /* 0062ca84: fld xword ptr [esp + 4] */ FPUSH(R_F80((u32)(r_esp+0x4u)));
L_0062ca88:; BB(0x0062ca88);
    /* 0062ca88: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062ca8c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0062ca8e: jae 0x62cb1a */ if (!fC) goto L_0062cb1a;
L_0062ca94:; BB(0x0062ca94);
    /* 0062ca94: xor eax, 0xe000000 */ {  u32 a = r_eax; u32 b = 0xe000000u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ca99: test eax, 0xe000000 */ {  u32 a = r_eax; u32 b = 0xe000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ca9e: je 0x62caa3 */ if (fZ) goto L_0062caa3;
L_0062caa0:; BB(0x0062caa0);
    /* 0062caa0: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0062caa2: ret  */ FN_RET(0x0062ca80); r_esp += 4; return;
L_0062caa3:; BB(0x0062caa3);
    /* 0062caa3: shr eax, 0x1c */ { u32 c = (28u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0062caa6: cmp byte ptr [eax + 0x6f4bb0], 0 */ {  u32 a = R8((u32)(r_eax+0x6f4bb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062caad: jne 0x62cab2 */ if (!fZ) goto L_0062cab2;
L_0062caaf:; BB(0x0062caaf);
    /* 0062caaf: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0062cab1: ret  */ FN_RET(0x0062ca80); r_esp += 4; return;
L_0062cab2:; BB(0x0062cab2);
    /* 0062cab2: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0062cab6: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062cabb: je 0x62cb24 */ if (fZ) goto L_0062cb24;
L_0062cabd:; BB(0x0062cabd);
    /* 0062cabd: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cac2: je 0x62cb24 */ if (fZ) goto L_0062cb24;
L_0062cac4:; BB(0x0062cac4);
    /* 0062cac4: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 0062cac8: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062cacc: or eax, 0x33f */ {  u32 a = r_eax; u32 b = 0x33fu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062cad1: and eax, 0xf3ff */ {  u32 a = r_eax; u32 b = 0xf3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062cad6: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0062cada: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0062cade: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0062cae2: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062cae7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062caea: je 0x62cb03 */ if (fZ) goto L_0062cb03;
L_0062caec:; BB(0x0062caec);
    /* 0062caec: fmul dword ptr [0x6f4bc0] */ ST(0) = ST(0) * R_F32((u32)(0x6f4bc0u));
    /* 0062caf2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062caf4: fmul dword ptr [0x6f4bc0] */ ST(0) = ST(0) * R_F32((u32)(0x6f4bc0u));
    /* 0062cafa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062cafc: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0062cb00: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0062cb02: ret  */ FN_RET(0x0062ca80); r_esp += 4; return;
L_0062cb03:; BB(0x0062cb03);
    /* 0062cb03: fmul dword ptr [0x6f4bc4] */ ST(0) = ST(0) * R_F32((u32)(0x6f4bc4u));
    /* 0062cb09: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062cb0b: fmul dword ptr [0x6f4bc4] */ ST(0) = ST(0) * R_F32((u32)(0x6f4bc4u));
    /* 0062cb11: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062cb13: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0062cb17: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0062cb19: ret  */ FN_RET(0x0062ca80); r_esp += 4; return;
L_0062cb1a:; BB(0x0062cb1a);
    /* 0062cb1a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062cb1e: or eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062cb22: jne 0x62cb27 */ if (!fZ) goto L_0062cb27;
L_0062cb24:; BB(0x0062cb24);
    /* 0062cb24: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0062cb26: ret  */ FN_RET(0x0062ca80); r_esp += 4; return;
L_0062cb27:; BB(0x0062cb27);
    /* 0062cb27: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0062cb2b: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062cb30: jne 0x62cb24 */ if (!fZ) goto L_0062cb24;
L_0062cb32:; BB(0x0062cb32);
    /* 0062cb32: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 0062cb36: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062cb3a: or eax, 0x33f */ {  u32 a = r_eax; u32 b = 0x33fu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062cb3f: and eax, 0xf3ff */ {  u32 a = r_eax; u32 b = 0xf3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062cb44: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0062cb48: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0062cb4c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0062cb50: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062cb55: je 0x62cb68 */ if (fZ) goto L_0062cb68;
L_0062cb57:; BB(0x0062cb57);
    /* 0062cb57: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cb5c: je 0x62cb90 */ if (fZ) goto L_0062cb90;
L_0062cb5e:; BB(0x0062cb5e);
    /* 0062cb5e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062cb62: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0062cb64: jae 0x62cb90 */ if (!fC) goto L_0062cb90;
L_0062cb66:; BB(0x0062cb66);
    /* 0062cb66: jmp 0x62cb70 */ goto L_0062cb70;
L_0062cb68:; BB(0x0062cb68);
    /* 0062cb68: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062cb6c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0062cb6e: jb 0x62cb90 */ if (fC) goto L_0062cb90;
L_0062cb70:; BB(0x0062cb70);
    /* 0062cb70: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062cb72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062cb74: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0062cb76: fmul dword ptr [0x6f4bc8] */ ST(0) = ST(0) * R_F32((u32)(0x6f4bc8u));
    /* 0062cb7c: fstp xword ptr [esp + 4] */ W_F80((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0062cb80: fld xword ptr [esp + 0x10] */ FPUSH(R_F80((u32)(r_esp+0x10u)));
    /* 0062cb84: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062cb86: wait  */ ;
    /* 0062cb87: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0062cb8b: jmp 0x62ca88 */ goto L_0062ca88;
L_0062cb90:; BB(0x0062cb90);
    /* 0062cb90: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0062cb94: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0062cb96: ret  */ FN_RET(0x0062ca80); r_esp += 4; return;
}

void f_0062d271(void) /* FUN_0062d271 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d271);
    /* 0062d271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d272: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d275: fstp xword ptr [esp + 0xc] */ W_F80((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0062d279: fstp xword ptr [esp] */ W_F80((u32)(r_esp), ST(0)); FPOP();
    /* 0062d27c: call 0x62ca80 */ r_esp -= 4; W32(r_esp, 0x62d281u); f_0062ca80();
    /* 0062d281: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d284: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0062d285: ret  */ FN_RET(0x0062d271); r_esp += 4; return;
}

void f_0062d286(void) /* FUN_0062d286 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d286);
    /* 0062d286: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d287: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d288: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d289: mov eax, dword ptr [esp + 0x16] */ r_eax = R32((u32)(r_esp+0x16u));
    /* 0062d28d: xor eax, 0x700 */ {  u32 a = r_eax; u32 b = 0x700u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062d292: test eax, 0x700 */ {  u32 a = r_eax; u32 b = 0x700u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d297: jne 0x62d420 */ if (!fZ) goto L_0062d420;
L_0062d29d:; BB(0x0062d29d);
    /* 0062d29d: shr eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0062d2a0: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062d2a3: cmp byte ptr [eax + 0x6f4bcc], 0 */ {  u32 a = R8((u32)(r_eax+0x6f4bccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062d2aa: je 0x62d420 */ if (fZ) goto L_0062d420;
L_0062d2b0:; BB(0x0062d2b0);
    /* 0062d2b0: mov eax, dword ptr [esp + 0x16] */ r_eax = R32((u32)(r_esp+0x16u));
    /* 0062d2b4: and eax, 0x7fff0000 */ {  u32 a = r_eax; u32 b = 0x7fff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062d2b9: cmp eax, 0x7fff0000 */ {  u32 a = r_eax; u32 b = 0x7fff0000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d2be: je 0x62d420 */ if (fZ) goto L_0062d420;
L_0062d2c4:; BB(0x0062d2c4);
    /* 0062d2c4: mov eax, dword ptr [esp + 0x2e] */ r_eax = R32((u32)(r_esp+0x2eu));
    /* 0062d2c8: and eax, 0x7fff0000 */ {  u32 a = r_eax; u32 b = 0x7fff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062d2cd: je 0x62d420 */ if (fZ) goto L_0062d420;
L_0062d2d3:; BB(0x0062d2d3);
    /* 0062d2d3: cmp eax, 0x7fff0000 */ {  u32 a = r_eax; u32 b = 0x7fff0000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d2d8: je 0x62d420 */ if (fZ) goto L_0062d420;
L_0062d2de:; BB(0x0062d2de);
    /* 0062d2de: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0062d2e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062d2e4: jne 0x62d420 */ if (!fZ) goto L_0062d420;
L_0062d2ea:; BB(0x0062d2ea);
    /* 0062d2ea: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062d2ee: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062d2f0: jne 0x62d420 */ if (!fZ) goto L_0062d420;
L_0062d2f6:; BB(0x0062d2f6);
    /* 0062d2f6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0062d2fa: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062d2ff: add eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062d302: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0062d306: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d30c: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fC = (a < b); }
    /* 0062d30e: ja 0x62d36e */ if ((!fC&&!fZ)) goto L_0062d36e;
L_0062d310:; BB(0x0062d310);
    /* 0062d310: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0062d314: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062d319: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062d31c: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0062d320: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d326: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); }
    /* 0062d328: js 0x62d420 */ if (fS) goto L_0062d420;
L_0062d32e:; BB(0x0062d32e);
    /* 0062d32e: fld xword ptr [esp + 0x28] */ FPUSH(R_F80((u32)(r_esp+0x28u)));
    /* 0062d332: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0062d336: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0062d33a: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062d342: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d344: and ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d347: or ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d34a: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062d34c: mov ebx, eax */ r_ebx = r_eax;
    /* 0062d34e: and ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d354: or ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062d356: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0062d35a: fld xword ptr [esp + 0x10] */ FPUSH(R_F80((u32)(r_esp+0x10u)));
    /* 0062d35e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0062d362: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062d364: fprem  */ ST(0) = fmodl(ST(0), ST(1)); fsw &= ~0x400;
    /* 0062d366: fstp xword ptr [esp + 0x28] */ W_F80((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0062d36a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062d36c: jmp 0x62d310 */ goto L_0062d310;
L_0062d36e:; BB(0x0062d36e);
    /* 0062d36e: test edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d374: jne 0x62d37e */ if (!fZ) goto L_0062d37e;
L_0062d376:; BB(0x0062d376);
    /* 0062d376: fld xword ptr [esp + 0x10] */ FPUSH(R_F80((u32)(r_esp+0x10u)));
    /* 0062d37a: fstp xword ptr [esp + 0x1c] */ W_F80((u32)(r_esp+0x1cu), ST(0)); FPOP();
L_0062d37e:; BB(0x0062d37e);
    /* 0062d37e: fnstcw word ptr [esp + 0x34] */ W16((u32)(r_esp+0x34u), fcw);
    /* 0062d382: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0062d386: or eax, 0x33f */ {  u32 a = r_eax; u32 b = 0x33fu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062d38b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0062d38f: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0062d393: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0062d397: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062d39c: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0062d3a0: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d3a6: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d3a8: and ebx, 0x3f */ {  u32 a = r_ebx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d3ab: or ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d3ae: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d3b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062d3b3: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0062d3b7: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0062d3bb: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d3c1: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062d3c6: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0062d3c8: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0062d3cc: fld xword ptr [esp + 0x10] */ FPUSH(R_F80((u32)(r_esp+0x10u)));
    /* 0062d3d0: fabs  */ ST(0) = fabsl(ST(0));
    /* 0062d3d2: fld xword ptr [esp + 0x28] */ FPUSH(R_F80((u32)(r_esp+0x28u)));
    /* 0062d3d6: fabs  */ ST(0) = fabsl(ST(0));
L_0062d3d8:; BB(0x0062d3d8);
    /* 0062d3d8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062d3da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062d3dc: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062d3e1: jne 0x62d3e5 */ if (!fZ) goto L_0062d3e5;
L_0062d3e3:; BB(0x0062d3e3);
    /* 0062d3e3: fsub st(1) */ ST(0) = ST(0) - ST(1);
L_0062d3e5:; BB(0x0062d3e5);
    /* 0062d3e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062d3e7: fmul qword ptr [0x6f4bfc] */ ST(0) = ST(0) * R_F64((u32)(0x6f4bfcu));
    /* 0062d3ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062d3ef: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062d3f2: jne 0x62d3d8 */ if (!fZ) goto L_0062d3d8;
L_0062d3f4:; BB(0x0062d3f4);
    /* 0062d3f4: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0062d3f8: fstp xword ptr [esp + 0x28] */ W_F80((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0062d3fc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062d3fe: fld xword ptr [esp + 0x1c] */ FPUSH(R_F80((u32)(r_esp+0x1cu)));
    /* 0062d402: fld xword ptr [0x6f4c04] */ FPUSH(R_F80((u32)(0x6f4c04u)));
    /* 0062d408: fprem  */ ST(0) = fmodl(ST(0), ST(1)); fsw &= ~0x400;
    /* 0062d40a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062d40c: fld xword ptr [esp + 0x28] */ FPUSH(R_F80((u32)(r_esp+0x28u)));
    /* 0062d410: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0062d414: and ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0062d41a: je 0x62d42a */ if (fZ) goto L_0062d42a;
L_0062d41c:; BB(0x0062d41c);
    /* 0062d41c: fchs  */ ST(0) = -ST(0);
    /* 0062d41e: jmp 0x62d42a */ goto L_0062d42a;
L_0062d420:; BB(0x0062d420);
    /* 0062d420: fld xword ptr [esp + 0x10] */ FPUSH(R_F80((u32)(r_esp+0x10u)));
    /* 0062d424: fld xword ptr [esp + 0x28] */ FPUSH(R_F80((u32)(r_esp+0x28u)));
    /* 0062d428: fprem  */ ST(0) = fmodl(ST(0), ST(1)); fsw &= ~0x400;
L_0062d42a:; BB(0x0062d42a);
    /* 0062d42a: test edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d430: je 0x62d488 */ if (fZ) goto L_0062d488;
L_0062d432:; BB(0x0062d432);
    /* 0062d432: fnstsw word ptr [esp + 0x3c] */ W16((u32)(r_esp+0x3cu), fx_sw());
    /* 0062d436: test edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d43c: je 0x62d45d */ if (fZ) goto L_0062d45d;
L_0062d43e:; BB(0x0062d43e);
    /* 0062d43e: fnstcw word ptr [esp + 0x34] */ W16((u32)(r_esp+0x34u), fcw);
    /* 0062d442: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0062d446: or eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062d44b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0062d44f: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0062d453: fmul qword ptr [0x6f4bec] */ ST(0) = ST(0) * R_F64((u32)(0x6f4becu));
    /* 0062d459: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
L_0062d45d:; BB(0x0062d45d);
    /* 0062d45d: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0062d461: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062d463: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062d465: fld xword ptr [esp + 0x1c] */ FPUSH(R_F80((u32)(r_esp+0x1cu)));
    /* 0062d469: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062d46b: and eax, 0x4300 */ {  u32 a = r_eax; u32 b = 0x4300u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062d470: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d473: fnstenv [esp] */ UNSUP(0x0062d473, "fnstenv [esp]");
    /* 0062d476: and dword ptr [esp + 4], 0xbcff */ { u32 ad = (u32)(r_esp+0x4u);  u32 a = R32(ad); u32 b = 0xbcffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0062d47e: or dword ptr [esp + 4], eax */ { u32 ad = (u32)(r_esp+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0062d482: fldenv [esp] */ UNSUP(0x0062d482, "fldenv [esp]");
    /* 0062d485: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062d488:; BB(0x0062d488);
    /* 0062d488: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062d489: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062d48a: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0062d48b: ret  */ FN_RET(0x0062d286); r_esp += 4; return;
}

void f_0062d48c(void) /* FUN_0062d48c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d48c);
    /* 0062d48c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d48d: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d490: fstp xword ptr [esp + 0x18] */ W_F80((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0062d494: fstp xword ptr [esp] */ W_F80((u32)(r_esp), ST(0)); FPOP();
    /* 0062d497: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062d499: mov eax, dword ptr [esp + 6] */ r_eax = R32((u32)(r_esp+0x6u));
    /* 0062d49d: test eax, 0x7fff0000 */ {  u32 a = r_eax; u32 b = 0x7fff0000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d4a2: je 0x62d4ae */ if (fZ) goto L_0062d4ae;
L_0062d4a4:; BB(0x0062d4a4);
    /* 0062d4a4: call 0x62d286 */ r_esp -= 4; W32(r_esp, 0x62d4a9u); f_0062d286();
    /* 0062d4a9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d4ac: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062d4ad: ret  */ FN_RET(0x0062d48c); r_esp += 4; return;
L_0062d4ae:; BB(0x0062d4ae);
    /* 0062d4ae: fld xword ptr [esp] */ FPUSH(R_F80((u32)(r_esp)));
    /* 0062d4b1: fld xword ptr [esp + 0x18] */ FPUSH(R_F80((u32)(r_esp+0x18u)));
    /* 0062d4b5: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0062d4b8: or eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062d4bc: je 0x62d537 */ if (fZ) goto L_0062d537;
L_0062d4be:; BB(0x0062d4be);
    /* 0062d4be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062d4c0: fstp xword ptr [esp + 0xc] */ W_F80((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0062d4c4: fld xword ptr [esp] */ FPUSH(R_F80((u32)(r_esp)));
    /* 0062d4c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062d4c9: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062d4cc: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0062d4d0: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0062d4d4: or eax, 0x33f */ {  u32 a = r_eax; u32 b = 0x33fu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062d4d9: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0062d4dd: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0062d4e1: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0062d4e5: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062d4ea: cmp eax, 0x7fbe */ {  u32 a = r_eax; u32 b = 0x7fbeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062d4ef: ja 0x62d509 */ if ((!fC&&!fZ)) goto L_0062d509;
L_0062d4f1:; BB(0x0062d4f1);
    /* 0062d4f1: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062d4f4: fmul qword ptr [0x6f4be4] */ ST(0) = ST(0) * R_F64((u32)(0x6f4be4u));
    /* 0062d4fa: fstp xword ptr [esp + 0x18] */ W_F80((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0062d4fe: fmul qword ptr [0x6f4be4] */ ST(0) = ST(0) * R_F64((u32)(0x6f4be4u));
    /* 0062d504: fstp xword ptr [esp] */ W_F80((u32)(r_esp), ST(0)); FPOP();
    /* 0062d507: jmp 0x62d529 */ goto L_0062d529;
L_0062d509:; BB(0x0062d509);
    /* 0062d509: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0062d50d: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0062d511: or eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062d516: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0062d51a: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0062d51e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062d520: fmul qword ptr [0x6f4be4] */ ST(0) = ST(0) * R_F64((u32)(0x6f4be4u));
    /* 0062d526: fstp xword ptr [esp] */ W_F80((u32)(r_esp), ST(0)); FPOP();
L_0062d529:; BB(0x0062d529);
    /* 0062d529: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0062d52d: call 0x62d286 */ r_esp -= 4; W32(r_esp, 0x62d532u); f_0062d286();
    /* 0062d532: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d535: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062d536: ret  */ FN_RET(0x0062d48c); r_esp += 4; return;
L_0062d537:; BB(0x0062d537);
    /* 0062d537: fprem  */ ST(0) = fmodl(ST(0), ST(1)); fsw &= ~0x400;
    /* 0062d539: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d53c: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0062d53d: ret  */ FN_RET(0x0062d48c); r_esp += 4; return;
}

void f_0062d810(void) /* FUN_0062d810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d810);
    /* 0062d810: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d813: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0062d817: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0062d81b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d81c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d81d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0062d821: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062d822: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0062d824: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062d825: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062d826: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062d827: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062d828: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d82a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d82b: call 0x630780 */ r_esp -= 4; W32(r_esp, 0x62d830u); f_00630780();
    /* 0062d830: mov ebx, eax */ r_ebx = r_eax;
    /* 0062d832: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d835: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062d838: je 0x62d851 */ if (fZ) goto L_0062d851;
L_0062d83a:; BB(0x0062d83a);
    /* 0062d83a: mov esi, 0x200 */ r_esi = 0x200u;
    /* 0062d83f: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0062d847: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0062d84f: jmp 0x62d882 */ goto L_0062d882;
L_0062d851:; BB(0x0062d851);
    /* 0062d851: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0062d855: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0062d859: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d85a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d85b: call 0x62f180 */ r_esp -= 4; W32(r_esp, 0x62d860u); f_0062f180();
    /* 0062d860: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d863: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062d866: jne 0x62d86d */ if (!fZ) goto L_0062d86d;
L_0062d868:; BB(0x0062d868);
    /* 0062d868: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d86b: jne 0x62d872 */ if (!fZ) goto L_0062d872;
L_0062d86d:; BB(0x0062d86d);
    /* 0062d86d: mov esi, 0x80 */ r_esi = 0x80u;
L_0062d872:; BB(0x0062d872);
    /* 0062d872: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062d875: jne 0x62d87c */ if (!fZ) goto L_0062d87c;
L_0062d877:; BB(0x0062d877);
    /* 0062d877: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d87a: jne 0x62d882 */ if (!fZ) goto L_0062d882;
L_0062d87c:; BB(0x0062d87c);
    /* 0062d87c: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_0062d882:; BB(0x0062d882);
    /* 0062d882: mov ecx, dword ptr [0x6f4d10] */ r_ecx = R32((u32)(0x6f4d10u));
    /* 0062d888: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 0062d88a: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0062d88e: mov eax, dword ptr [0x6f4d10] */ r_eax = R32((u32)(0x6f4d10u));
    /* 0062d893: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062d895: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062d896: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d897: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0062d89a: mov ecx, dword ptr [0x6f4d10] */ r_ecx = R32((u32)(0x6f4d10u));
    /* 0062d8a0: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0062d8a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062d8a5: fstp qword ptr [ecx + 0x10] */ W_F64((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 0062d8a8: mov eax, dword ptr [0x6f4d10] */ r_eax = R32((u32)(0x6f4d10u));
    /* 0062d8ad: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d8b0: ret  */ FN_RET(0x0062d810); r_esp += 4; return;
}

void f_0062da1e(void) /* FUN_0062da1e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062da1e);
    goto L_0062da1e;
L_0062c576:; BB(0x0062c576);
    /* 0062c576: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c578: fldz  */ FPUSH(0.0);
    /* 0062c57a: ret  */ FN_RET(0x0062da1e); r_esp += 4; return;
L_0062d9d0:; BB(0x0062d9d0);
    /* 0062d9d0: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0062d9d1: ftst  */ fx_compare(ST(0), 0.0); 
    /* 0062d9d3: wait  */ ;
    /* 0062d9d4: fnstsw word ptr [ebp - 0xa0] */ W16((u32)(r_ebp+0xffffff60u), fx_sw());
    /* 0062d9da: wait  */ ;
    /* 0062d9db: test byte ptr [ebp - 0x9f], 1 */ {  u32 a = R8((u32)(r_ebp+0xffffff61u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062d9e2: jne 0x62d9f3 */ if (!fZ) goto L_0062d9f3;
L_0062d9e4:; BB(0x0062d9e4);
    /* 0062d9e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062d9e6: fld xword ptr [0x6f4d20] */ FPUSH(R_F80((u32)(0x6f4d20u)));
    /* 0062d9ec: or ch, ch */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); }
    /* 0062d9ee: je 0x62d9f2 */ if (fZ) goto L_0062d9f2;
L_0062d9f0:; BB(0x0062d9f0);
    /* 0062d9f0: fchs  */ ST(0) = -ST(0);
L_0062d9f2:; BB(0x0062d9f2);
    /* 0062d9f2: ret  */ FN_RET(0x0062da1e); r_esp += 4; return;
L_0062d9f3:; BB(0x0062d9f3);
    /* 0062d9f3: mov byte ptr [ebp - 0x90], 4 */ W8((u32)(r_ebp+0xffffff70u), 0x4u);
    /* 0062d9fa: jmp 0x62c576 */ goto L_0062c576;
L_0062da1e:; BB(0x0062da1e);
    /* 0062da1e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0062da20: fabs  */ ST(0) = fabsl(ST(0));
    /* 0062da22: fld xword ptr [0x6f4d3e] */ FPUSH(R_F80((u32)(0x6f4d3eu)));
    /* 0062da28: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0062da2a: wait  */ ;
    /* 0062da2b: fnstsw word ptr [ebp - 0xa0] */ W16((u32)(r_ebp+0xffffff60u), fx_sw());
    /* 0062da31: wait  */ ;
    /* 0062da32: test byte ptr [ebp - 0x9f], 0x41 */ {  u32 a = R8((u32)(r_ebp+0xffffff61u)); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062da39: jne 0x62d9d0 */ if (!fZ) goto L_0062d9d0;
L_0062da3b:; BB(0x0062da3b);
    /* 0062da3b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0062da3d: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0062da3f: ftst  */ fx_compare(ST(0), 0.0); 
    /* 0062da41: wait  */ ;
    /* 0062da42: fnstsw word ptr [ebp - 0xa0] */ W16((u32)(r_ebp+0xffffff60u), fx_sw());
    /* 0062da48: wait  */ ;
    /* 0062da49: mov dl, byte ptr [ebp - 0x9f] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff61u))) & 0xffu);
    /* 0062da4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062da51: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0062da53: ftst  */ fx_compare(ST(0), 0.0); 
    /* 0062da55: wait  */ ;
    /* 0062da56: fnstsw word ptr [ebp - 0xa0] */ W16((u32)(r_ebp+0xffffff60u), fx_sw());
    /* 0062da5c: fabs  */ ST(0) = fabsl(ST(0));
    /* 0062da5e: f2xm1  */ ST(0) = exp2l(ST(0)) - 1.0;
    /* 0062da60: ret  */ FN_RET(0x0062da1e); r_esp += 4; return;
}

void f_0062dad0(void) /* FUN_0062dad0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062dad0);
    /* 0062dad0: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0062dad4: fcomp qword ptr [0x63d390] */ fx_compare(ST(0), R_F64((u32)(0x63d390u))); FPOP();
    /* 0062dada: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0062dade: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062dadf: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0062dae3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062dae4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0062dae6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062dae8: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062daeb: je 0x62daf9 */ if (fZ) goto L_0062daf9;
L_0062daed:; BB(0x0062daed);
    /* 0062daed: fld qword ptr [esp + 0xc] */ FPUSH(R_F64((u32)(r_esp+0xcu)));
    /* 0062daf1: fchs  */ ST(0) = -ST(0);
    /* 0062daf3: fstp qword ptr [esp + 0xc] */ W_F64((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0062daf7: jmp 0x62db01 */ goto L_0062db01;
L_0062daf9:; BB(0x0062daf9);
    /* 0062daf9: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0062dafd: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_0062db01:; BB(0x0062db01);
    /* 0062db01: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0062db05: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0062db09: cmp eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062db0e: jne 0x62db5e */ if (!fZ) goto L_0062db5e;
L_0062db10:; BB(0x0062db10);
    /* 0062db10: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062db12: jne 0x62db5e */ if (!fZ) goto L_0062db5e;
L_0062db14:; BB(0x0062db14);
    /* 0062db14: fld qword ptr [esp + 0xc] */ FPUSH(R_F64((u32)(r_esp+0xcu)));
    /* 0062db18: fcomp qword ptr [0x63d398] */ fx_compare(ST(0), R_F64((u32)(0x63d398u))); FPOP();
    /* 0062db1e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062db20: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062db23: jne 0x62db3f */ if (!fZ) goto L_0062db3f;
L_0062db25:; BB(0x0062db25);
    /* 0062db25: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062db29: mov ecx, dword ptr [0x6f2700] */ r_ecx = R32((u32)(0x6f2700u));
    /* 0062db2f: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062db31: mov edx, dword ptr [0x6f2704] */ r_edx = R32((u32)(0x6f2704u));
    /* 0062db37: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0062db3a: mov eax, edi */ r_eax = r_edi;
    /* 0062db3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062db3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062db3e: ret  */ FN_RET(0x0062dad0); r_esp += 4; return;
L_0062db3f:; BB(0x0062db3f);
    /* 0062db3f: fld qword ptr [esp + 0xc] */ FPUSH(R_F64((u32)(r_esp+0xcu)));
    /* 0062db43: fcomp qword ptr [0x63d398] */ fx_compare(ST(0), R_F64((u32)(0x63d398u))); FPOP();
    /* 0062db49: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062db4b: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062db4e: je 0x62dbb3 */ if (fZ) goto L_0062dbb3;
L_0062db50:; BB(0x0062db50);
    /* 0062db50: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062db54: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 0062db56: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 0062db59: mov eax, edi */ r_eax = r_edi;
    /* 0062db5b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062db5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062db5d: ret  */ FN_RET(0x0062dad0); r_esp += 4; return;
L_0062db5e:; BB(0x0062db5e);
    /* 0062db5e: cmp eax, 0xfff00000 */ {  u32 a = r_eax; u32 b = 0xfff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062db63: jne 0x62dbd2 */ if (!fZ) goto L_0062dbd2;
L_0062db65:; BB(0x0062db65);
    /* 0062db65: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062db67: jne 0x62dbd2 */ if (!fZ) goto L_0062dbd2;
L_0062db69:; BB(0x0062db69);
    /* 0062db69: fld qword ptr [esp + 0xc] */ FPUSH(R_F64((u32)(r_esp+0xcu)));
    /* 0062db6d: fcomp qword ptr [0x63d398] */ fx_compare(ST(0), R_F64((u32)(0x63d398u))); FPOP();
    /* 0062db73: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062db75: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062db78: jne 0x62db88 */ if (!fZ) goto L_0062db88;
L_0062db7a:; BB(0x0062db7a);
    /* 0062db7a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062db7e: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 0062db80: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 0062db83: mov eax, edi */ r_eax = r_edi;
    /* 0062db85: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062db86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062db87: ret  */ FN_RET(0x0062dad0); r_esp += 4; return;
L_0062db88:; BB(0x0062db88);
    /* 0062db88: fld qword ptr [esp + 0xc] */ FPUSH(R_F64((u32)(r_esp+0xcu)));
    /* 0062db8c: fcomp qword ptr [0x63d398] */ fx_compare(ST(0), R_F64((u32)(0x63d398u))); FPOP();
    /* 0062db92: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062db94: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062db97: je 0x62dbb3 */ if (fZ) goto L_0062dbb3;
L_0062db99:; BB(0x0062db99);
    /* 0062db99: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062db9d: mov ecx, dword ptr [0x6f2700] */ r_ecx = R32((u32)(0x6f2700u));
    /* 0062dba3: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062dba5: mov edx, dword ptr [0x6f2704] */ r_edx = R32((u32)(0x6f2704u));
    /* 0062dbab: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0062dbae: mov eax, edi */ r_eax = r_edi;
    /* 0062dbb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062dbb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062dbb2: ret  */ FN_RET(0x0062dad0); r_esp += 4; return;
L_0062dbb3:; BB(0x0062dbb3);
    /* 0062dbb3: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062dbb7: mov ecx, dword ptr [0x6f2708] */ r_ecx = R32((u32)(0x6f2708u));
    /* 0062dbbd: mov edi, 1 */ r_edi = 0x1u;
    /* 0062dbc2: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062dbc4: mov edx, dword ptr [0x6f270c] */ r_edx = R32((u32)(0x6f270cu));
    /* 0062dbca: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0062dbcd: mov eax, edi */ r_eax = r_edi;
    /* 0062dbcf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062dbd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062dbd1: ret  */ FN_RET(0x0062dad0); r_esp += 4; return;
L_0062dbd2:; BB(0x0062dbd2);
    /* 0062dbd2: cmp edx, 0x7ff00000 */ {  u32 a = r_edx; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dbd8: jne 0x62dc2c */ if (!fZ) goto L_0062dc2c;
L_0062dbda:; BB(0x0062dbda);
    /* 0062dbda: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dbdc: jne 0x62dc2c */ if (!fZ) goto L_0062dc2c;
L_0062dbde:; BB(0x0062dbde);
    /* 0062dbde: fld qword ptr [esp + 0x14] */ FPUSH(R_F64((u32)(r_esp+0x14u)));
    /* 0062dbe2: fcomp qword ptr [0x63d390] */ fx_compare(ST(0), R_F64((u32)(0x63d390u))); FPOP();
    /* 0062dbe8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062dbea: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062dbed: jne 0x62dc09 */ if (!fZ) goto L_0062dc09;
L_0062dbef:; BB(0x0062dbef);
    /* 0062dbef: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062dbf3: mov ecx, dword ptr [0x6f2700] */ r_ecx = R32((u32)(0x6f2700u));
    /* 0062dbf9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062dbfb: mov edx, dword ptr [0x6f2704] */ r_edx = R32((u32)(0x6f2704u));
    /* 0062dc01: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0062dc04: mov eax, edi */ r_eax = r_edi;
    /* 0062dc06: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062dc07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062dc08: ret  */ FN_RET(0x0062dad0); r_esp += 4; return;
L_0062dc09:; BB(0x0062dc09);
    /* 0062dc09: fld qword ptr [esp + 0x14] */ FPUSH(R_F64((u32)(r_esp+0x14u)));
    /* 0062dc0d: fcomp qword ptr [0x63d390] */ fx_compare(ST(0), R_F64((u32)(0x63d390u))); FPOP();
    /* 0062dc13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062dc15: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062dc18: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062dc1c: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 0062dc1e: je 0x62dce5 */ if (fZ) goto L_0062dce5;
L_0062dc24:; BB(0x0062dc24);
    /* 0062dc24: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 0062dc27: mov eax, edi */ r_eax = r_edi;
    /* 0062dc29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062dc2a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062dc2b: ret  */ FN_RET(0x0062dad0); r_esp += 4; return;
L_0062dc2c:; BB(0x0062dc2c);
    /* 0062dc2c: cmp edx, 0xfff00000 */ {  u32 a = r_edx; u32 b = 0xfff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dc32: jne 0x62dcec */ if (!fZ) goto L_0062dcec;
L_0062dc38:; BB(0x0062dc38);
    /* 0062dc38: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dc3a: jne 0x62dcec */ if (!fZ) goto L_0062dcec;
L_0062dc40:; BB(0x0062dc40);
    /* 0062dc40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062dc41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dc42: call 0x62dd00 */ r_esp -= 4; W32(r_esp, 0x62dc47u); f_0062dd00();
    /* 0062dc47: fld qword ptr [esp + 0x1c] */ FPUSH(R_F64((u32)(r_esp+0x1cu)));
    /* 0062dc4b: fcomp qword ptr [0x63d390] */ fx_compare(ST(0), R_F64((u32)(0x63d390u))); FPOP();
    /* 0062dc51: mov ecx, eax */ r_ecx = r_eax;
    /* 0062dc53: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062dc56: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062dc58: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062dc5b: jne 0x62dc9e */ if (!fZ) goto L_0062dc9e;
L_0062dc5d:; BB(0x0062dc5d);
    /* 0062dc5d: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dc60: jne 0x62dc84 */ if (!fZ) goto L_0062dc84;
L_0062dc62:; BB(0x0062dc62);
    /* 0062dc62: fld qword ptr [0x6f2700] */ FPUSH(R_F64((u32)(0x6f2700u)));
    /* 0062dc68: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062dc6c: fchs  */ ST(0) = -ST(0);
    /* 0062dc6e: fstp qword ptr [esp + 0x14] */ W_F64((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0062dc72: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0062dc76: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0062dc7a: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062dc7c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0062dc7f: mov eax, edi */ r_eax = r_edi;
    /* 0062dc81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062dc82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062dc83: ret  */ FN_RET(0x0062dad0); r_esp += 4; return;
L_0062dc84:; BB(0x0062dc84);
    /* 0062dc84: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062dc88: mov ecx, dword ptr [0x6f2700] */ r_ecx = R32((u32)(0x6f2700u));
    /* 0062dc8e: mov edx, dword ptr [0x6f2704] */ r_edx = R32((u32)(0x6f2704u));
    /* 0062dc94: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062dc96: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0062dc99: mov eax, edi */ r_eax = r_edi;
    /* 0062dc9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062dc9c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062dc9d: ret  */ FN_RET(0x0062dad0); r_esp += 4; return;
L_0062dc9e:; BB(0x0062dc9e);
    /* 0062dc9e: fld qword ptr [esp + 0x14] */ FPUSH(R_F64((u32)(r_esp+0x14u)));
    /* 0062dca2: fcomp qword ptr [0x63d390] */ fx_compare(ST(0), R_F64((u32)(0x63d390u))); FPOP();
    /* 0062dca8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062dcaa: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062dcad: je 0x62dcdf */ if (fZ) goto L_0062dcdf;
L_0062dcaf:; BB(0x0062dcaf);
    /* 0062dcaf: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dcb2: jne 0x62dccd */ if (!fZ) goto L_0062dccd;
L_0062dcb4:; BB(0x0062dcb4);
    /* 0062dcb4: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0062dcb8: mov eax, dword ptr [0x6f2720] */ r_eax = R32((u32)(0x6f2720u));
    /* 0062dcbd: mov ecx, dword ptr [0x6f2724] */ r_ecx = R32((u32)(0x6f2724u));
    /* 0062dcc3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062dcc5: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0062dcc8: mov eax, edi */ r_eax = r_edi;
    /* 0062dcca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062dccb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062dccc: ret  */ FN_RET(0x0062dad0); r_esp += 4; return;
L_0062dccd:; BB(0x0062dccd);
    /* 0062dccd: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0062dcd1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062dcd3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062dcd5: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062dcd7: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0062dcda: mov eax, edi */ r_eax = r_edi;
    /* 0062dcdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062dcdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062dcde: ret  */ FN_RET(0x0062dad0); r_esp += 4; return;
L_0062dcdf:; BB(0x0062dcdf);
    /* 0062dcdf: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062dce3: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
L_0062dce5:; BB(0x0062dce5);
    /* 0062dce5: mov dword ptr [eax + 4], 0x3ff00000 */ W32((u32)(r_eax+0x4u), 0x3ff00000u);
L_0062dcec:; BB(0x0062dcec);
    /* 0062dcec: mov eax, edi */ r_eax = r_edi;
    /* 0062dcee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062dcef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062dcf0: ret  */ FN_RET(0x0062dad0); r_esp += 4; return;
}

void f_0062dd00(void) /* FUN_0062dd00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062dd00);
    /* 0062dd00: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062dd03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd04: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0062dd08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd09: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0062dd0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd0f: call 0x630f10 */ r_esp -= 4; W32(r_esp, 0x62dd14u); f_00630f10();
    /* 0062dd14: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062dd17: test al, 0x90 */ {  u32 a = (u8)r_eax; u32 b = 0x90u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062dd19: jne 0x62dd79 */ if (!fZ) goto L_0062dd79;
L_0062dd1b:; BB(0x0062dd1b);
    /* 0062dd1b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd1d: call 0x629840 */ r_esp -= 4; W32(r_esp, 0x62dd22u); f_00629840();
    /* 0062dd22: fstp qword ptr [esp + 0x10] */ W_F64((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0062dd26: fld qword ptr [esp + 0x10] */ FPUSH(R_F64((u32)(r_esp+0x10u)));
    /* 0062dd2a: fcomp qword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F64((u32)(r_esp+0x1cu))); FPOP();
    /* 0062dd2e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062dd31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062dd33: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062dd36: je 0x62dd79 */ if (fZ) goto L_0062dd79;
L_0062dd38:; BB(0x0062dd38);
    /* 0062dd38: fld qword ptr [esp + 0x14] */ FPUSH(R_F64((u32)(r_esp+0x14u)));
    /* 0062dd3c: fdiv qword ptr [0x63d3a0] */ ST(0) = ST(0) / R_F64((u32)(0x63d3a0u));
    /* 0062dd42: fstp qword ptr [esp + 0x14] */ W_F64((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0062dd46: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0062dd4a: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0062dd4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd50: call 0x629840 */ r_esp -= 4; W32(r_esp, 0x62dd55u); f_00629840();
    /* 0062dd55: fcomp qword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F64((u32)(r_esp+0x1cu))); FPOP();
    /* 0062dd59: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062dd5c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062dd5e: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062dd61: je 0x62dd6e */ if (fZ) goto L_0062dd6e;
L_0062dd63:; BB(0x0062dd63);
    /* 0062dd63: mov eax, 2 */ r_eax = 0x2u;
    /* 0062dd68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062dd69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062dd6a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062dd6d: ret  */ FN_RET(0x0062dd00); r_esp += 4; return;
L_0062dd6e:; BB(0x0062dd6e);
    /* 0062dd6e: mov eax, 1 */ r_eax = 0x1u;
    /* 0062dd73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062dd74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062dd75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062dd78: ret  */ FN_RET(0x0062dd00); r_esp += 4; return;
L_0062dd79:; BB(0x0062dd79);
    /* 0062dd79: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062dd7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062dd7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062dd7d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062dd80: ret  */ FN_RET(0x0062dd00); r_esp += 4; return;
}

void f_0062df20(void) /* FUN_0062df20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062df20);
    /* 0062df20: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062df24: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062df26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062df28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062df29: call 0x62df40 */ r_esp -= 4; W32(r_esp, 0x62df2eu); f_0062df40();
    /* 0062df2e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062df31: ret  */ FN_RET(0x0062df20); r_esp += 4; return;
}

void f_0062df40(void) /* FUN_0062df40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062df40);
    /* 0062df40: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062df44: mov cl, byte ptr [esp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0xcu))) & 0xffu);
    /* 0062df48: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062df4d: test byte ptr [eax + 0x711601], cl */ {  u32 a = R8((u32)(r_eax+0x711601u)); u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062df53: jne 0x62df74 */ if (!fZ) goto L_0062df74;
L_0062df55:; BB(0x0062df55);
    /* 0062df55: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0062df59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062df5b: je 0x62df6d */ if (fZ) goto L_0062df6d;
L_0062df5d:; BB(0x0062df5d);
    /* 0062df5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062df5f: mov dx, word ptr [eax*2 + 0x6f2362] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax*2+0x6f2362u))) & 0xffffu);
    /* 0062df67: mov eax, edx */ r_eax = r_edx;
    /* 0062df69: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062df6b: jmp 0x62df6f */ goto L_0062df6f;
L_0062df6d:; BB(0x0062df6d);
    /* 0062df6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062df6f:; BB(0x0062df6f);
    /* 0062df6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062df71: jne 0x62df74 */ if (!fZ) goto L_0062df74;
L_0062df73:; BB(0x0062df73);
    /* 0062df73: ret  */ FN_RET(0x0062df40); r_esp += 4; return;
L_0062df74:; BB(0x0062df74);
    /* 0062df74: mov eax, 1 */ r_eax = 0x1u;
    /* 0062df79: ret  */ FN_RET(0x0062df40); r_esp += 4; return;
}

void f_0062df80(void) /* FUN_0062df80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062df80);
    /* 0062df80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062df81: mov edx, dword ptr [0x711330] */ r_edx = R32((u32)(0x711330u));
    /* 0062df87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062df88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062df89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062df8a: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0062df8c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0062df8e: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062df90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062df91: je 0x62dfb0 */ if (fZ) goto L_0062dfb0;
L_0062df93:; BB(0x0062df93);
    /* 0062df93: cmp al, 0x3d */ {  u32 a = (u8)r_eax; u32 b = 0x3du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062df95: je 0x62df98 */ if (fZ) goto L_0062df98;
L_0062df97:; BB(0x0062df97);
    /* 0062df97: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0062df98:; BB(0x0062df98);
    /* 0062df98: mov edi, edx */ r_edi = r_edx;
    /* 0062df9a: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062df9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062df9f: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062dfa1: not ecx */ r_ecx = ~r_ecx;
    /* 0062dfa3: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062dfa4: mov al, byte ptr [edx + ecx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx+0x1u))) & 0xffu);
    /* 0062dfa8: lea edx, [edx + ecx + 1] */ r_edx = (u32)(r_edx+r_ecx+0x1u);
    /* 0062dfac: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062dfae: jne 0x62df93 */ if (!fZ) goto L_0062df93;
L_0062dfb0:; BB(0x0062dfb0);
    /* 0062dfb0: lea eax, [esi*4 + 4] */ r_eax = (u32)(r_esi*4+0x4u);
    /* 0062dfb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062dfb8: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x62dfbdu); f_00626230();
    /* 0062dfbd: mov esi, eax */ r_esi = r_eax;
    /* 0062dfbf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062dfc2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dfc4: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0062dfc8: mov dword ptr [0x711484], esi */ W32((u32)(0x711484u), r_esi);
    /* 0062dfce: jne 0x62dfda */ if (!fZ) goto L_0062dfda;
L_0062dfd0:; BB(0x0062dfd0);
    /* 0062dfd0: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0062dfd2: call 0x627150 */ r_esp -= 4; W32(r_esp, 0x62dfd7u); f_00627150();
    /* 0062dfd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062dfda:; BB(0x0062dfda);
    /* 0062dfda: mov ebp, dword ptr [0x711330] */ r_ebp = R32((u32)(0x711330u));
    /* 0062dfe0: mov dl, byte ptr [ebp] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 0062dfe3: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062dfe5: je 0x62e04a */ if (fZ) goto L_0062e04a;
L_0062dfe7:; BB(0x0062dfe7);
    /* 0062dfe7: mov edi, ebp */ r_edi = r_ebp;
    /* 0062dfe9: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062dfec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062dfee: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062dff0: not ecx */ r_ecx = ~r_ecx;
    /* 0062dff2: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062dff3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062dff5: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062dff6: cmp dl, 0x3d */ {  u32 a = (u8)r_edx; u32 b = 0x3du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062dff9: je 0x62e040 */ if (fZ) goto L_0062e040;
L_0062dffb:; BB(0x0062dffb);
    /* 0062dffb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dffc: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x62e001u); f_00626230();
    /* 0062e001: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e004: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0062e006: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e008: jne 0x62e014 */ if (!fZ) goto L_0062e014;
L_0062e00a:; BB(0x0062e00a);
    /* 0062e00a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e00c: call 0x627150 */ r_esp -= 4; W32(r_esp, 0x62e011u); f_00627150();
    /* 0062e011: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062e014:; BB(0x0062e014);
    /* 0062e014: mov edi, ebp */ r_edi = r_ebp;
    /* 0062e016: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e019: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e01b: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062e01d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062e021: not ecx */ r_ecx = ~r_ecx;
    /* 0062e023: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062e025: mov edx, ecx */ r_edx = r_ecx;
    /* 0062e027: mov esi, edi */ r_esi = r_edi;
    /* 0062e029: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0062e02b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0062e02e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062e030: mov ecx, edx */ r_ecx = r_edx;
    /* 0062e032: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e035: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e038: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0062e03a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0062e03e: mov esi, eax */ r_esi = r_eax;
L_0062e040:; BB(0x0062e040);
    /* 0062e040: mov dl, byte ptr [ebp + ebx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+r_ebx))) & 0xffu);
    /* 0062e044: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0062e046: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e048: jne 0x62dfe7 */ if (!fZ) goto L_0062dfe7;
L_0062e04a:; BB(0x0062e04a);
    /* 0062e04a: mov eax, dword ptr [0x711330] */ r_eax = R32((u32)(0x711330u));
    /* 0062e04f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e050: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x62e055u); f_006262e0();
    /* 0062e055: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e058: mov dword ptr [0x711330], 0 */ W32((u32)(0x711330u), 0x0u);
    /* 0062e062: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 0062e068: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e069: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e06a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e06b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e06c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062e06d: ret  */ FN_RET(0x0062df80); r_esp += 4; return;
}

void f_0062e070(void) /* FUN_0062e070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e070);
    /* 0062e070: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062e073: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e074: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e075: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e07a: push 0x7114f0 */ { u32 v = 0x7114f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e07f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e081: call dword ptr [0x633038] */ { u32 t = R32((u32)(0x633038u)); r_esp -= 4; W32(r_esp, 0x62e087u); call_ind(t); }
    /* 0062e087: mov edi, dword ptr [0x7129f0] */ r_edi = R32((u32)(0x7129f0u));
    /* 0062e08d: mov dword ptr [0x711494], 0x7114f0 */ W32((u32)(0x711494u), 0x7114f0u);
    /* 0062e097: cmp byte ptr [edi], 0 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e09a: jne 0x62e0a1 */ if (!fZ) goto L_0062e0a1;
L_0062e09c:; BB(0x0062e09c);
    /* 0062e09c: mov edi, 0x7114f0 */ r_edi = 0x7114f0u;
L_0062e0a1:; BB(0x0062e0a1);
    /* 0062e0a1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0062e0a5: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0062e0a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0b0: call 0x62e110 */ r_esp -= 4; W32(r_esp, 0x62e0b5u); f_0062e110();
    /* 0062e0b5: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0062e0b9: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062e0bd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e0c0: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 0062e0c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0c4: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x62e0c9u); f_00626230();
    /* 0062e0c9: mov esi, eax */ r_esi = r_eax;
    /* 0062e0cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e0ce: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e0d0: jne 0x62e0dc */ if (!fZ) goto L_0062e0dc;
L_0062e0d2:; BB(0x0062e0d2);
    /* 0062e0d2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0d4: call 0x627150 */ r_esp -= 4; W32(r_esp, 0x62e0d9u); f_00627150();
    /* 0062e0d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062e0dc:; BB(0x0062e0dc);
    /* 0062e0dc: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0062e0e0: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0062e0e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0e5: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0062e0e9: lea edx, [esi + ecx*4] */ r_edx = (u32)(r_esi+r_ecx*4);
    /* 0062e0ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0ef: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0f0: call 0x62e110 */ r_esp -= 4; W32(r_esp, 0x62e0f5u); f_0062e110();
    /* 0062e0f5: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062e0f9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e0fc: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062e0fd: mov dword ptr [0x71147c], esi */ W32((u32)(0x71147cu), r_esi);
    /* 0062e103: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e104: mov dword ptr [0x711478], eax */ W32((u32)(0x711478u), r_eax);
    /* 0062e109: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e10a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e10d: ret  */ FN_RET(0x0062e070); r_esp += 4; return;
}

void f_0062e110(void) /* FUN_0062e110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e110);
    /* 0062e110: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062e114: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e115: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e116: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0062e11a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e11b: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0062e11f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e120: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0062e124: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e126: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
    /* 0062e12c: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 0062e132: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0062e136: mov ebx, 4 */ r_ebx = 0x4u;
    /* 0062e13b: je 0x62e146 */ if (fZ) goto L_0062e146;
L_0062e13d:; BB(0x0062e13d);
    /* 0062e13d: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 0062e140: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0062e142: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
L_0062e146:; BB(0x0062e146);
    /* 0062e146: cmp byte ptr [eax], 0x22 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e149: jne 0x62e1a1 */ if (!fZ) goto L_0062e1a1;
L_0062e14b:; BB(0x0062e14b);
    /* 0062e14b: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0062e14e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e14f: cmp cl, 0x22 */ {  u32 a = (u8)r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e152: je 0x62e18c */ if (fZ) goto L_0062e18c;
L_0062e154:; BB(0x0062e154);
    /* 0062e154: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e156: je 0x62e18c */ if (fZ) goto L_0062e18c;
L_0062e158:; BB(0x0062e158);
    /* 0062e158: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e15e: test byte ptr [ecx + 0x711601], bl */ {  u32 a = R8((u32)(r_ecx+0x711601u)); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e164: je 0x62e175 */ if (fZ) goto L_0062e175;
L_0062e166:; BB(0x0062e166);
    /* 0062e166: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0062e168: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062e169: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e16b: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0062e16d: je 0x62e175 */ if (fZ) goto L_0062e175;
L_0062e16f:; BB(0x0062e16f);
    /* 0062e16f: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062e171: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 0062e173: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062e174: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0062e175:; BB(0x0062e175);
    /* 0062e175: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0062e177: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062e178: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e17a: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0062e17c: je 0x62e183 */ if (fZ) goto L_0062e183;
L_0062e17e:; BB(0x0062e17e);
    /* 0062e17e: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062e180: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0062e182: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0062e183:; BB(0x0062e183);
    /* 0062e183: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0062e186: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e187: cmp cl, 0x22 */ {  u32 a = (u8)r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e18a: jne 0x62e154 */ if (!fZ) goto L_0062e154;
L_0062e18c:; BB(0x0062e18c);
    /* 0062e18c: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0062e18e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062e18f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e191: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0062e193: je 0x62e199 */ if (fZ) goto L_0062e199;
L_0062e195:; BB(0x0062e195);
    /* 0062e195: mov byte ptr [esi], 0 */ W8((u32)(r_esi), 0x0u);
    /* 0062e198: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0062e199:; BB(0x0062e199);
    /* 0062e199: cmp byte ptr [eax], 0x22 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e19c: jne 0x62e1f4 */ if (!fZ) goto L_0062e1f4;
L_0062e19e:; BB(0x0062e19e);
    /* 0062e19e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e19f: jmp 0x62e1f4 */ goto L_0062e1f4;
L_0062e1a1:; BB(0x0062e1a1);
    /* 0062e1a1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0062e1a3: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062e1a4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e1a6: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0062e1a8: je 0x62e1af */ if (fZ) goto L_0062e1af;
L_0062e1aa:; BB(0x0062e1aa);
    /* 0062e1aa: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062e1ac: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 0062e1ae: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0062e1af:; BB(0x0062e1af);
    /* 0062e1af: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062e1b1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e1b2: mov byte ptr [esp + 0x24], cl */ W8((u32)(r_esp+0x24u), (u8)r_ecx);
    /* 0062e1b6: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0062e1ba: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062e1c0: test byte ptr [edx + 0x711601], bl */ {  u32 a = R8((u32)(r_edx+0x711601u)); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e1c6: je 0x62e1d7 */ if (fZ) goto L_0062e1d7;
L_0062e1c8:; BB(0x0062e1c8);
    /* 0062e1c8: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0062e1ca: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062e1cb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e1cd: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0062e1cf: je 0x62e1d6 */ if (fZ) goto L_0062e1d6;
L_0062e1d1:; BB(0x0062e1d1);
    /* 0062e1d1: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062e1d3: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0062e1d5: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0062e1d6:; BB(0x0062e1d6);
    /* 0062e1d6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0062e1d7:; BB(0x0062e1d7);
    /* 0062e1d7: cmp cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e1da: je 0x62e1e5 */ if (fZ) goto L_0062e1e5;
L_0062e1dc:; BB(0x0062e1dc);
    /* 0062e1dc: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e1de: je 0x62e1e9 */ if (fZ) goto L_0062e1e9;
L_0062e1e0:; BB(0x0062e1e0);
    /* 0062e1e0: cmp cl, 9 */ {  u32 a = (u8)r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e1e3: jne 0x62e1a1 */ if (!fZ) goto L_0062e1a1;
L_0062e1e5:; BB(0x0062e1e5);
    /* 0062e1e5: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e1e7: jne 0x62e1ec */ if (!fZ) goto L_0062e1ec;
L_0062e1e9:; BB(0x0062e1e9);
    /* 0062e1e9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062e1ea: jmp 0x62e1f4 */ goto L_0062e1f4;
L_0062e1ec:; BB(0x0062e1ec);
    /* 0062e1ec: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e1ee: je 0x62e1f4 */ if (fZ) goto L_0062e1f4;
L_0062e1f0:; BB(0x0062e1f0);
    /* 0062e1f0: mov byte ptr [esi - 1], 0 */ W8((u32)(r_esi+0xffffffffu), 0x0u);
L_0062e1f4:; BB(0x0062e1f4);
    /* 0062e1f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062e1f6: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
L_0062e1fa:; BB(0x0062e1fa);
    /* 0062e1fa: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e1fd: je 0x62e306 */ if (fZ) goto L_0062e306;
L_0062e203:; BB(0x0062e203);
    /* 0062e203: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062e205: cmp cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e208: je 0x62e20f */ if (fZ) goto L_0062e20f;
L_0062e20a:; BB(0x0062e20a);
    /* 0062e20a: cmp cl, 9 */ {  u32 a = (u8)r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e20d: jne 0x62e212 */ if (!fZ) goto L_0062e212;
L_0062e20f:; BB(0x0062e20f);
    /* 0062e20f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e210: jmp 0x62e203 */ goto L_0062e203;
L_0062e212:; BB(0x0062e212);
    /* 0062e212: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e215: je 0x62e306 */ if (fZ) goto L_0062e306;
L_0062e21b:; BB(0x0062e21b);
    /* 0062e21b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e21d: je 0x62e228 */ if (fZ) goto L_0062e228;
L_0062e21f:; BB(0x0062e21f);
    /* 0062e21f: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 0062e222: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0062e224: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
L_0062e228:; BB(0x0062e228);
    /* 0062e228: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0062e22c: inc dword ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0062e22e:; BB(0x0062e22e);
    /* 0062e22e: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062e230: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e232: cmp bl, 0x5c */ {  u32 a = (u8)r_ebx; u32 b = 0x5cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e235: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0062e23a: jne 0x62e246 */ if (!fZ) goto L_0062e246;
L_0062e23c:; BB(0x0062e23c);
    /* 0062e23c: mov bl, byte ptr [eax + 1] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0062e23f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e240: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e241: cmp bl, 0x5c */ {  u32 a = (u8)r_ebx; u32 b = 0x5cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e244: je 0x62e23c */ if (fZ) goto L_0062e23c;
L_0062e246:; BB(0x0062e246);
    /* 0062e246: cmp byte ptr [eax], 0x22 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e249: jne 0x62e270 */ if (!fZ) goto L_0062e270;
L_0062e24b:; BB(0x0062e24b);
    /* 0062e24b: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e24e: jne 0x62e26e */ if (!fZ) goto L_0062e26e;
L_0062e250:; BB(0x0062e250);
    /* 0062e250: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e252: je 0x62e25d */ if (fZ) goto L_0062e25d;
L_0062e254:; BB(0x0062e254);
    /* 0062e254: cmp byte ptr [eax + 1], 0x22 */ {  u32 a = R8((u32)(r_eax+0x1u)); u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e258: jne 0x62e25d */ if (!fZ) goto L_0062e25d;
L_0062e25a:; BB(0x0062e25a);
    /* 0062e25a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e25b: jmp 0x62e25f */ goto L_0062e25f;
L_0062e25d:; BB(0x0062e25d);
    /* 0062e25d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0062e25f:; BB(0x0062e25f);
    /* 0062e25f: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0062e263: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062e265: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e267: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0062e26a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
L_0062e26e:; BB(0x0062e26e);
    /* 0062e26e: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
L_0062e270:; BB(0x0062e270);
    /* 0062e270: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062e272: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e273: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e275: je 0x62e288 */ if (fZ) goto L_0062e288;
L_0062e277:; BB(0x0062e277);
    /* 0062e277: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0062e278:; BB(0x0062e278);
    /* 0062e278: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e27a: je 0x62e280 */ if (fZ) goto L_0062e280;
L_0062e27c:; BB(0x0062e27c);
    /* 0062e27c: mov byte ptr [esi], 0x5c */ W8((u32)(r_esi), 0x5cu);
    /* 0062e27f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0062e280:; BB(0x0062e280);
    /* 0062e280: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0062e282: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062e283: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062e284: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0062e286: jne 0x62e278 */ if (!fZ) goto L_0062e278;
L_0062e288:; BB(0x0062e288);
    /* 0062e288: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062e28a: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e28c: je 0x62e2eb */ if (fZ) goto L_0062e2eb;
L_0062e28e:; BB(0x0062e28e);
    /* 0062e28e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e290: jne 0x62e29c */ if (!fZ) goto L_0062e29c;
L_0062e292:; BB(0x0062e292);
    /* 0062e292: cmp cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e295: je 0x62e2eb */ if (fZ) goto L_0062e2eb;
L_0062e297:; BB(0x0062e297);
    /* 0062e297: cmp cl, 9 */ {  u32 a = (u8)r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062e29a: je 0x62e2eb */ if (fZ) goto L_0062e2eb;
L_0062e29c:; BB(0x0062e29c);
    /* 0062e29c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e29e: je 0x62e2e5 */ if (fZ) goto L_0062e2e5;
L_0062e2a0:; BB(0x0062e2a0);
    /* 0062e2a0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e2a2: je 0x62e2ce */ if (fZ) goto L_0062e2ce;
L_0062e2a4:; BB(0x0062e2a4);
    /* 0062e2a4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062e2a6: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0062e2ac: test byte ptr [ebx + 0x711601], 4 */ {  u32 a = R8((u32)(r_ebx+0x711601u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e2b3: je 0x62e2be */ if (fZ) goto L_0062e2be;
L_0062e2b5:; BB(0x0062e2b5);
    /* 0062e2b5: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 0062e2b7: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0062e2b9: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062e2ba: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e2bb: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e2bc: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
L_0062e2be:; BB(0x0062e2be);
    /* 0062e2be: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062e2c0: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 0062e2c2: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0062e2c4: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062e2c5: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e2c6: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 0062e2c8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e2c9: jmp 0x62e22e */ goto L_0062e22e;
L_0062e2ce:; BB(0x0062e2ce);
    /* 0062e2ce: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e2d4: test byte ptr [ecx + 0x711601], 4 */ {  u32 a = R8((u32)(r_ecx+0x711601u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e2db: je 0x62e2e3 */ if (fZ) goto L_0062e2e3;
L_0062e2dd:; BB(0x0062e2dd);
    /* 0062e2dd: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0062e2df: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e2e0: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e2e1: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
L_0062e2e3:; BB(0x0062e2e3);
    /* 0062e2e3: inc dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0062e2e5:; BB(0x0062e2e5);
    /* 0062e2e5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e2e6: jmp 0x62e22e */ goto L_0062e22e;
L_0062e2eb:; BB(0x0062e2eb);
    /* 0062e2eb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e2ed: je 0x62e2f3 */ if (fZ) goto L_0062e2f3;
L_0062e2ef:; BB(0x0062e2ef);
    /* 0062e2ef: mov byte ptr [esi], 0 */ W8((u32)(r_esi), 0x0u);
    /* 0062e2f2: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0062e2f3:; BB(0x0062e2f3);
    /* 0062e2f3: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0062e2f5: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0062e2f9: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e2fa: mov ebx, 4 */ r_ebx = 0x4u;
    /* 0062e2ff: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 0062e301: jmp 0x62e1fa */ goto L_0062e1fa;
L_0062e306:; BB(0x0062e306);
    /* 0062e306: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e308: je 0x62e311 */ if (fZ) goto L_0062e311;
L_0062e30a:; BB(0x0062e30a);
    /* 0062e30a: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
L_0062e311:; BB(0x0062e311);
    /* 0062e311: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0062e315: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e316: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e317: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e318: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062e31a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e31b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e31c: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062e31e: ret  */ FN_RET(0x0062e110); r_esp += 4; return;
}

void f_0062e320(void) /* FUN_0062e320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e320);
    /* 0062e320: mov eax, dword ptr [0x7115f8] */ r_eax = R32((u32)(0x7115f8u));
    /* 0062e325: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e326: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e327: mov ebp, dword ptr [0x633130] */ r_ebp = R32((u32)(0x633130u));
    /* 0062e32d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e32e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0062e330: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0062e332: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e333: mov edi, dword ptr [0x633124] */ r_edi = R32((u32)(0x633124u));
    /* 0062e339: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e33b: jne 0x62e362 */ if (!fZ) goto L_0062e362;
L_0062e33d:; BB(0x0062e33d);
    /* 0062e33d: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x62e33fu); call_ind(t); }
    /* 0062e33f: mov esi, eax */ r_esi = r_eax;
    /* 0062e341: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e343: je 0x62e34c */ if (fZ) goto L_0062e34c;
L_0062e345:; BB(0x0062e345);
    /* 0062e345: mov eax, 1 */ r_eax = 0x1u;
    /* 0062e34a: jmp 0x62e35d */ goto L_0062e35d;
L_0062e34c:; BB(0x0062e34c);
    /* 0062e34c: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x62e34eu); call_ind(t); }
    /* 0062e34e: mov ebx, eax */ r_ebx = r_eax;
    /* 0062e350: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e352: je 0x62e46f */ if (fZ) goto L_0062e46f;
L_0062e358:; BB(0x0062e358);
    /* 0062e358: mov eax, 2 */ r_eax = 0x2u;
L_0062e35d:; BB(0x0062e35d);
    /* 0062e35d: mov dword ptr [0x7115f8], eax */ W32((u32)(0x7115f8u), r_eax);
L_0062e362:; BB(0x0062e362);
    /* 0062e362: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e365: jne 0x62e402 */ if (!fZ) goto L_0062e402;
L_0062e36b:; BB(0x0062e36b);
    /* 0062e36b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e36d: jne 0x62e37b */ if (!fZ) goto L_0062e37b;
L_0062e36f:; BB(0x0062e36f);
    /* 0062e36f: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x62e371u); call_ind(t); }
    /* 0062e371: mov esi, eax */ r_esi = r_eax;
    /* 0062e373: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e375: je 0x62e46f */ if (fZ) goto L_0062e46f;
L_0062e37b:; BB(0x0062e37b);
    /* 0062e37b: cmp word ptr [esi], 0 */ {  u32 a = R16((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062e37f: mov eax, esi */ r_eax = r_esi;
    /* 0062e381: je 0x62e395 */ if (fZ) goto L_0062e395;
L_0062e383:; BB(0x0062e383);
    /* 0062e383: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e386: cmp word ptr [eax], 0 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062e38a: jne 0x62e383 */ if (!fZ) goto L_0062e383;
L_0062e38c:; BB(0x0062e38c);
    /* 0062e38c: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e38f: cmp word ptr [eax], 0 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062e393: jne 0x62e383 */ if (!fZ) goto L_0062e383;
L_0062e395:; BB(0x0062e395);
    /* 0062e395: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062e397: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e399: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0062e39b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e39c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e39e: mov ebp, eax */ r_ebp = r_eax;
    /* 0062e3a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3aa: call dword ptr [0x6330bc] */ { u32 t = R32((u32)(0x6330bcu)); r_esp -= 4; W32(r_esp, 0x62e3b0u); call_ind(t); }
    /* 0062e3b0: mov edi, eax */ r_edi = r_eax;
    /* 0062e3b2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e3b4: je 0x62e3f4 */ if (fZ) goto L_0062e3f4;
L_0062e3b6:; BB(0x0062e3b6);
    /* 0062e3b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3b7: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x62e3bcu); f_00626230();
    /* 0062e3bc: mov ebx, eax */ r_ebx = r_eax;
    /* 0062e3be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e3c1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e3c3: je 0x62e3f4 */ if (fZ) goto L_0062e3f4;
L_0062e3c5:; BB(0x0062e3c5);
    /* 0062e3c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3cb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3d1: call dword ptr [0x6330bc] */ { u32 t = R32((u32)(0x6330bcu)); r_esp -= 4; W32(r_esp, 0x62e3d7u); call_ind(t); }
    /* 0062e3d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e3d9: jne 0x62e3e6 */ if (!fZ) goto L_0062e3e6;
L_0062e3db:; BB(0x0062e3db);
    /* 0062e3db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3dc: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x62e3e1u); f_006262e0();
    /* 0062e3e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e3e4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0062e3e6:; BB(0x0062e3e6);
    /* 0062e3e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3e7: call dword ptr [0x63311c] */ { u32 t = R32((u32)(0x63311cu)); r_esp -= 4; W32(r_esp, 0x62e3edu); call_ind(t); }
    /* 0062e3ed: mov eax, ebx */ r_eax = r_ebx;
    /* 0062e3ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e3f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e3f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e3f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e3f3: ret  */ FN_RET(0x0062e320); r_esp += 4; return;
L_0062e3f4:; BB(0x0062e3f4);
    /* 0062e3f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3f5: call dword ptr [0x63311c] */ { u32 t = R32((u32)(0x63311cu)); r_esp -= 4; W32(r_esp, 0x62e3fbu); call_ind(t); }
    /* 0062e3fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e3fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e3fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e3ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e400: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e401: ret  */ FN_RET(0x0062e320); r_esp += 4; return;
L_0062e402:; BB(0x0062e402);
    /* 0062e402: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e405: jne 0x62e46f */ if (!fZ) goto L_0062e46f;
L_0062e407:; BB(0x0062e407);
    /* 0062e407: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e409: jne 0x62e413 */ if (!fZ) goto L_0062e413;
L_0062e40b:; BB(0x0062e40b);
    /* 0062e40b: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x62e40du); call_ind(t); }
    /* 0062e40d: mov ebx, eax */ r_ebx = r_eax;
    /* 0062e40f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e411: je 0x62e46f */ if (fZ) goto L_0062e46f;
L_0062e413:; BB(0x0062e413);
    /* 0062e413: mov cl, byte ptr [ebx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebx))) & 0xffu);
    /* 0062e415: mov eax, ebx */ r_eax = r_ebx;
    /* 0062e417: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e419: je 0x62e42b */ if (fZ) goto L_0062e42b;
L_0062e41b:; BB(0x0062e41b);
    /* 0062e41b: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0062e41e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e41f: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e421: jne 0x62e41b */ if (!fZ) goto L_0062e41b;
L_0062e423:; BB(0x0062e423);
    /* 0062e423: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0062e426: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e427: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e429: jne 0x62e41b */ if (!fZ) goto L_0062e41b;
L_0062e42b:; BB(0x0062e42b);
    /* 0062e42b: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062e42d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e42e: mov esi, eax */ r_esi = r_eax;
    /* 0062e430: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e431: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x62e436u); f_00626230();
    /* 0062e436: mov ebp, eax */ r_ebp = r_eax;
    /* 0062e438: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e43b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e43d: jne 0x62e44d */ if (!fZ) goto L_0062e44d;
L_0062e43f:; BB(0x0062e43f);
    /* 0062e43f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e440: call dword ptr [0x633118] */ { u32 t = R32((u32)(0x633118u)); r_esp -= 4; W32(r_esp, 0x62e446u); call_ind(t); }
    /* 0062e446: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e448: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e449: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e44a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e44b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e44c: ret  */ FN_RET(0x0062e320); r_esp += 4; return;
L_0062e44d:; BB(0x0062e44d);
    /* 0062e44d: mov ecx, esi */ r_ecx = r_esi;
    /* 0062e44f: mov esi, ebx */ r_esi = r_ebx;
    /* 0062e451: mov eax, ecx */ r_eax = r_ecx;
    /* 0062e453: mov edi, ebp */ r_edi = r_ebp;
    /* 0062e455: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0062e458: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062e45a: mov ecx, eax */ r_ecx = r_eax;
    /* 0062e45c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e45d: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e460: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0062e462: call dword ptr [0x633118] */ { u32 t = R32((u32)(0x633118u)); r_esp -= 4; W32(r_esp, 0x62e468u); call_ind(t); }
    /* 0062e468: mov eax, ebp */ r_eax = r_ebp;
    /* 0062e46a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e46b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e46c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e46d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e46e: ret  */ FN_RET(0x0062e320); r_esp += 4; return;
L_0062e46f:; BB(0x0062e46f);
    /* 0062e46f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e470: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e472: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e474: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e475: ret  */ FN_RET(0x0062e320); r_esp += 4; return;
}

void f_0062e480(void) /* FUN_0062e480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e480);
    /* 0062e480: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062e484: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062e487: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e488: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e489: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e48a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e48b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e48c: call 0x62e690 */ r_esp -= 4; W32(r_esp, 0x62e491u); f_0062e690();
    /* 0062e491: mov ecx, eax */ r_ecx = r_eax;
    /* 0062e493: mov eax, dword ptr [0x711808] */ r_eax = R32((u32)(0x711808u));
    /* 0062e498: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e49b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e49d: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0062e4a1: jne 0x62e4ad */ if (!fZ) goto L_0062e4ad;
L_0062e4a3:; BB(0x0062e4a3);
    /* 0062e4a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e4a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e4a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e4a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e4a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e4a9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e4ac: ret  */ FN_RET(0x0062e480); r_esp += 4; return;
L_0062e4ad:; BB(0x0062e4ad);
    /* 0062e4ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e4af: jne 0x62e4c5 */ if (!fZ) goto L_0062e4c5;
L_0062e4b1:; BB(0x0062e4b1);
    /* 0062e4b1: call 0x62e740 */ r_esp -= 4; W32(r_esp, 0x62e4b6u); f_0062e740();
    /* 0062e4b6: call 0x62e780 */ r_esp -= 4; W32(r_esp, 0x62e4bbu); f_0062e780();
    /* 0062e4bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e4bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e4be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e4bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e4c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e4c1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e4c4: ret  */ FN_RET(0x0062e480); r_esp += 4; return;
L_0062e4c5:; BB(0x0062e4c5);
    /* 0062e4c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062e4c7: mov eax, 0x6f4e18 */ r_eax = 0x6f4e18u;
L_0062e4cc:; BB(0x0062e4cc);
    /* 0062e4cc: cmp dword ptr [eax], ecx */ {  u32 a = R32((u32)(r_eax)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e4ce: je 0x62e5db */ if (fZ) goto L_0062e5db;
L_0062e4d4:; BB(0x0062e4d4);
    /* 0062e4d4: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e4d7: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062e4d8: cmp eax, 0x6f4f08 */ {  u32 a = r_eax; u32 b = 0x6f4f08u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062e4dd: jb 0x62e4cc */ if (fC) goto L_0062e4cc;
L_0062e4df:; BB(0x0062e4df);
    /* 0062e4df: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0062e4e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e4e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e4e5: call dword ptr [0x633128] */ { u32 t = R32((u32)(0x633128u)); r_esp -= 4; W32(r_esp, 0x62e4ebu); call_ind(t); }
    /* 0062e4eb: mov esi, 1 */ r_esi = 0x1u;
    /* 0062e4f0: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e4f2: jne 0x62e5b3 */ if (!fZ) goto L_0062e5b3;
L_0062e4f8:; BB(0x0062e4f8);
    /* 0062e4f8: mov ecx, 0x40 */ r_ecx = 0x40u;
    /* 0062e4fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e4ff: mov edi, 0x711600 */ r_edi = 0x711600u;
    /* 0062e504: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062e506: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0062e50a: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 0062e50b: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0062e50f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e511: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062e513: mov dword ptr [0x711808], edi */ W32((u32)(0x711808u), r_edi);
    /* 0062e519: mov dword ptr [0x71180c], eax */ W32((u32)(0x71180cu), r_eax);
    /* 0062e51e: jbe 0x62e58e */ if ((fC||fZ)) goto L_0062e58e;
L_0062e520:; BB(0x0062e520);
    /* 0062e520: mov al, byte ptr [esp + 0x16] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x16u))) & 0xffu);
    /* 0062e524: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e526: je 0x62e55f */ if (fZ) goto L_0062e55f;
L_0062e528:; BB(0x0062e528);
    /* 0062e528: lea edx, [esp + 0x17] */ r_edx = (u32)(r_esp+0x17u);
L_0062e52c:; BB(0x0062e52c);
    /* 0062e52c: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0062e52e: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e530: je 0x62e55f */ if (fZ) goto L_0062e55f;
L_0062e532:; BB(0x0062e532);
    /* 0062e532: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e534: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e53a: mov al, byte ptr [edx - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xffffffffu))) & 0xffu);
    /* 0062e53d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062e53f: ja 0x62e555 */ if ((!fC&&!fZ)) goto L_0062e555;
L_0062e541:; BB(0x0062e541);
    /* 0062e541: mov bl, byte ptr [eax + 0x711601] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+0x711601u))) & 0xffu);
    /* 0062e547: or bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062e54a: mov byte ptr [eax + 0x711601], bl */ W8((u32)(r_eax+0x711601u), (u8)r_ebx);
    /* 0062e550: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e551: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062e553: jbe 0x62e541 */ if ((fC||fZ)) goto L_0062e541;
L_0062e555:; BB(0x0062e555);
    /* 0062e555: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 0062e558: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062e55b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e55d: jne 0x62e52c */ if (!fZ) goto L_0062e52c;
L_0062e55f:; BB(0x0062e55f);
    /* 0062e55f: mov eax, esi */ r_eax = r_esi;
L_0062e561:; BB(0x0062e561);
    /* 0062e561: mov bl, byte ptr [eax + 0x711601] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+0x711601u))) & 0xffu);
    /* 0062e567: or bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062e56a: mov byte ptr [eax + 0x711601], bl */ W8((u32)(r_eax+0x711601u), (u8)r_ebx);
    /* 0062e570: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e571: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062e576: jb 0x62e561 */ if (fC) goto L_0062e561;
L_0062e578:; BB(0x0062e578);
    /* 0062e578: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e579: call 0x62e6e0 */ r_esp -= 4; W32(r_esp, 0x62e57eu); f_0062e6e0();
    /* 0062e57e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e581: mov dword ptr [0x71180c], eax */ W32((u32)(0x71180cu), r_eax);
    /* 0062e586: mov dword ptr [0x71189c], esi */ W32((u32)(0x71189cu), r_esi);
    /* 0062e58c: jmp 0x62e593 */ goto L_0062e593;
L_0062e58e:; BB(0x0062e58e);
    /* 0062e58e: mov dword ptr [0x71189c], eax */ W32((u32)(0x71189cu), r_eax);
L_0062e593:; BB(0x0062e593);
    /* 0062e593: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e595: mov dword ptr [0x711810], eax */ W32((u32)(0x711810u), r_eax);
    /* 0062e59a: mov dword ptr [0x711814], eax */ W32((u32)(0x711814u), r_eax);
    /* 0062e59f: mov dword ptr [0x711818], eax */ W32((u32)(0x711818u), r_eax);
    /* 0062e5a4: call 0x62e780 */ r_esp -= 4; W32(r_esp, 0x62e5a9u); f_0062e780();
    /* 0062e5a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e5ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e5ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e5ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e5ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e5af: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e5b2: ret  */ FN_RET(0x0062e480); r_esp += 4; return;
L_0062e5b3:; BB(0x0062e5b3);
    /* 0062e5b3: mov eax, dword ptr [0x71181c] */ r_eax = R32((u32)(0x71181cu));
    /* 0062e5b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e5ba: je 0x62e5d0 */ if (fZ) goto L_0062e5d0;
L_0062e5bc:; BB(0x0062e5bc);
    /* 0062e5bc: call 0x62e740 */ r_esp -= 4; W32(r_esp, 0x62e5c1u); f_0062e740();
    /* 0062e5c1: call 0x62e780 */ r_esp -= 4; W32(r_esp, 0x62e5c6u); f_0062e780();
    /* 0062e5c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e5c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e5c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e5ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e5cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e5cc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e5cf: ret  */ FN_RET(0x0062e480); r_esp += 4; return;
L_0062e5d0:; BB(0x0062e5d0);
    /* 0062e5d0: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062e5d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e5d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e5d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e5d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e5d7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e5da: ret  */ FN_RET(0x0062e480); r_esp += 4; return;
L_0062e5db:; BB(0x0062e5db);
    /* 0062e5db: mov ecx, 0x40 */ r_ecx = 0x40u;
    /* 0062e5e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e5e2: mov edi, 0x711600 */ r_edi = 0x711600u;
    /* 0062e5e7: lea ebx, [edx + edx*2] */ r_ebx = (u32)(r_edx+r_edx*2);
    /* 0062e5ea: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062e5ec: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 0062e5ed: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0062e5ef: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0062e5f2: lea ebp, [ebx + 0x6f4e28] */ r_ebp = (u32)(r_ebx+0x6f4e28u);
L_0062e5f8:; BB(0x0062e5f8);
    /* 0062e5f8: mov al, byte ptr [ebp] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 0062e5fb: mov esi, ebp */ r_esi = r_ebp;
    /* 0062e5fd: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e5ff: je 0x62e631 */ if (fZ) goto L_0062e631;
L_0062e601:; BB(0x0062e601);
    /* 0062e601: mov cl, byte ptr [esi + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 0062e604: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e606: je 0x62e631 */ if (fZ) goto L_0062e631;
L_0062e608:; BB(0x0062e608);
    /* 0062e608: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e60a: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e610: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0062e612: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062e614: ja 0x62e627 */ if ((!fC&&!fZ)) goto L_0062e627;
L_0062e616:; BB(0x0062e616);
    /* 0062e616: mov dl, byte ptr [edi + 0x6f4e10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x6f4e10u))) & 0xffu);
L_0062e61c:; BB(0x0062e61c);
    /* 0062e61c: or byte ptr [eax + 0x711601], dl */ { u32 ad = (u32)(r_eax+0x711601u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0062e622: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e623: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062e625: jbe 0x62e61c */ if ((fC||fZ)) goto L_0062e61c;
L_0062e627:; BB(0x0062e627);
    /* 0062e627: mov al, byte ptr [esi + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 0062e62a: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062e62d: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e62f: jne 0x62e601 */ if (!fZ) goto L_0062e601;
L_0062e631:; BB(0x0062e631);
    /* 0062e631: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062e632: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0062e635: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062e638: jb 0x62e5f8 */ if (fC) goto L_0062e5f8;
L_0062e63a:; BB(0x0062e63a);
    /* 0062e63a: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0062e63e: mov dword ptr [0x71189c], 1 */ W32((u32)(0x71189cu), 0x1u);
    /* 0062e648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e649: mov dword ptr [0x711808], eax */ W32((u32)(0x711808u), r_eax);
    /* 0062e64e: call 0x62e6e0 */ r_esp -= 4; W32(r_esp, 0x62e653u); f_0062e6e0();
    /* 0062e653: mov ecx, dword ptr [ebx + 0x6f4e1c] */ r_ecx = R32((u32)(r_ebx+0x6f4e1cu));
    /* 0062e659: mov edx, dword ptr [ebx + 0x6f4e20] */ r_edx = R32((u32)(r_ebx+0x6f4e20u));
    /* 0062e65f: mov dword ptr [0x71180c], eax */ W32((u32)(0x71180cu), r_eax);
    /* 0062e664: lea eax, [ebx + 0x6f4e1c] */ r_eax = (u32)(r_ebx+0x6f4e1cu);
    /* 0062e66a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e66d: mov dword ptr [0x711810], ecx */ W32((u32)(0x711810u), r_ecx);
    /* 0062e673: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0062e676: mov dword ptr [0x711814], edx */ W32((u32)(0x711814u), r_edx);
    /* 0062e67c: mov dword ptr [0x711818], eax */ W32((u32)(0x711818u), r_eax);
    /* 0062e681: call 0x62e780 */ r_esp -= 4; W32(r_esp, 0x62e686u); f_0062e780();
    /* 0062e686: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e687: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e689: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e68b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e68c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e68f: ret  */ FN_RET(0x0062e480); r_esp += 4; return;
}

void f_0062e690(void) /* FUN_0062e690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e690);
    /* 0062e690: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062e694: mov dword ptr [0x71181c], 0 */ W32((u32)(0x71181cu), 0x0u);
    /* 0062e69e: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e6a1: jne 0x62e6b3 */ if (!fZ) goto L_0062e6b3;
L_0062e6a3:; BB(0x0062e6a3);
    /* 0062e6a3: mov dword ptr [0x71181c], 1 */ W32((u32)(0x71181cu), 0x1u);
    /* 0062e6ad: jmp dword ptr [0x633138] */ { u32 t = R32((u32)(0x633138u)); call_ind(t); return; }
L_0062e6b3:; BB(0x0062e6b3);
    /* 0062e6b3: cmp eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e6b6: jne 0x62e6c8 */ if (!fZ) goto L_0062e6c8;
L_0062e6b8:; BB(0x0062e6b8);
    /* 0062e6b8: mov dword ptr [0x71181c], 1 */ W32((u32)(0x71181cu), 0x1u);
    /* 0062e6c2: jmp dword ptr [0x633134] */ { u32 t = R32((u32)(0x633134u)); call_ind(t); return; }
L_0062e6c8:; BB(0x0062e6c8);
    /* 0062e6c8: cmp eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e6cb: jne 0x62e6dc */ if (!fZ) goto L_0062e6dc;
L_0062e6cd:; BB(0x0062e6cd);
    /* 0062e6cd: mov eax, dword ptr [0x711370] */ r_eax = R32((u32)(0x711370u));
    /* 0062e6d2: mov dword ptr [0x71181c], 1 */ W32((u32)(0x71181cu), 0x1u);
L_0062e6dc:; BB(0x0062e6dc);
    /* 0062e6dc: ret  */ FN_RET(0x0062e690); r_esp += 4; return;
}

void f_0062e6e0(void) /* FUN_0062e6e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e6e0);
    /* 0062e6e0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0062e6e4: add eax, 0xfffffc5c */ {  u32 a = r_eax; u32 b = 0xfffffc5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e6e9: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062e6ec: ja 0x62e715 */ if ((!fC&&!fZ)) goto L_0062e715;
L_0062e6ee:; BB(0x0062e6ee);
    /* 0062e6ee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e6f0: mov cl, byte ptr [eax + 0x62e72c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x62e72cu))) & 0xffu);
    /* 0062e6f6: jmp dword ptr [ecx*4 + 0x62e718] */ { u32 t = R32((u32)(r_ecx*4+0x62e718u)); switch (t) { case 0x62e6fdu: goto L_0062e6fd; case 0x62e703u: goto L_0062e703; case 0x62e709u: goto L_0062e709; case 0x62e70fu: goto L_0062e70f; case 0x62e715u: goto L_0062e715; default: UNSUP(0x0062e6f6, "jump table entry is not a known target"); } }
L_0062e6fd:; BB(0x0062e6fd);
    /* 0062e6fd: mov eax, 0x411 */ r_eax = 0x411u;
    /* 0062e702: ret  */ FN_RET(0x0062e6e0); r_esp += 4; return;
L_0062e703:; BB(0x0062e703);
    /* 0062e703: mov eax, 0x804 */ r_eax = 0x804u;
    /* 0062e708: ret  */ FN_RET(0x0062e6e0); r_esp += 4; return;
L_0062e709:; BB(0x0062e709);
    /* 0062e709: mov eax, 0x412 */ r_eax = 0x412u;
    /* 0062e70e: ret  */ FN_RET(0x0062e6e0); r_esp += 4; return;
L_0062e70f:; BB(0x0062e70f);
    /* 0062e70f: mov eax, 0x404 */ r_eax = 0x404u;
    /* 0062e714: ret  */ FN_RET(0x0062e6e0); r_esp += 4; return;
L_0062e715:; BB(0x0062e715);
    /* 0062e715: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e717: ret  */ FN_RET(0x0062e6e0); r_esp += 4; return;
}

void f_0062e740(void) /* FUN_0062e740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e740);
    /* 0062e740: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e741: mov ecx, 0x40 */ r_ecx = 0x40u;
    /* 0062e746: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e748: mov edi, 0x711600 */ r_edi = 0x711600u;
    /* 0062e74d: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062e74f: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 0062e750: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e752: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e753: mov dword ptr [0x711808], eax */ W32((u32)(0x711808u), r_eax);
    /* 0062e758: mov dword ptr [0x71189c], eax */ W32((u32)(0x71189cu), r_eax);
    /* 0062e75d: mov dword ptr [0x71180c], eax */ W32((u32)(0x71180cu), r_eax);
    /* 0062e762: mov dword ptr [0x711810], eax */ W32((u32)(0x711810u), r_eax);
    /* 0062e767: mov dword ptr [0x711814], eax */ W32((u32)(0x711814u), r_eax);
    /* 0062e76c: mov dword ptr [0x711818], eax */ W32((u32)(0x711818u), r_eax);
    /* 0062e771: ret  */ FN_RET(0x0062e740); r_esp += 4; return;
}

void f_0062e780(void) /* FUN_0062e780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e780);
    /* 0062e780: mov ecx, dword ptr [0x711808] */ r_ecx = R32((u32)(0x711808u));
    /* 0062e786: sub esp, 0x514 */ {  u32 a = r_esp; u32 b = 0x514u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062e78c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0062e790: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e791: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e792: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e793: call dword ptr [0x633128] */ { u32 t = R32((u32)(0x633128u)); r_esp -= 4; W32(r_esp, 0x62e799u); call_ind(t); }
    /* 0062e799: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e79c: jne 0x62e8f4 */ if (!fZ) goto L_0062e8f4;
L_0062e7a2:; BB(0x0062e7a2);
    /* 0062e7a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e7a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e7a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062e7a6:; BB(0x0062e7a6);
    /* 0062e7a6: mov byte ptr [esp + eax + 0x20], al */ W8((u32)(r_esp+r_eax+0x20u), (u8)r_eax);
    /* 0062e7aa: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e7ab: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062e7b0: jb 0x62e7a6 */ if (fC) goto L_0062e7a6;
L_0062e7b2:; BB(0x0062e7b2);
    /* 0062e7b2: mov al, byte ptr [esp + 0x12] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x12u))) & 0xffu);
    /* 0062e7b6: mov byte ptr [esp + 0x20], 0x20 */ W8((u32)(r_esp+0x20u), 0x20u);
    /* 0062e7bb: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e7bd: je 0x62e7f4 */ if (fZ) goto L_0062e7f4;
L_0062e7bf:; BB(0x0062e7bf);
    /* 0062e7bf: lea edx, [esp + 0x13] */ r_edx = (u32)(r_esp+0x13u);
L_0062e7c3:; BB(0x0062e7c3);
    /* 0062e7c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e7c5: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062e7ca: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0062e7cc: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062e7ce: ja 0x62e7ea */ if ((!fC&&!fZ)) goto L_0062e7ea;
L_0062e7d0:; BB(0x0062e7d0);
    /* 0062e7d0: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e7d2: lea edi, [esp + eax + 0x20] */ r_edi = (u32)(r_esp+r_eax+0x20u);
    /* 0062e7d6: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e7d7: mov eax, 0x20202020 */ r_eax = 0x20202020u;
    /* 0062e7dc: mov esi, ecx */ r_esi = r_ecx;
    /* 0062e7de: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0062e7e1: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062e7e3: mov ecx, esi */ r_ecx = r_esi;
    /* 0062e7e5: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e7e8: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
L_0062e7ea:; BB(0x0062e7ea);
    /* 0062e7ea: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 0062e7ed: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062e7f0: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e7f2: jne 0x62e7c3 */ if (!fZ) goto L_0062e7c3;
L_0062e7f4:; BB(0x0062e7f4);
    /* 0062e7f4: mov edx, dword ptr [0x71180c] */ r_edx = R32((u32)(0x71180cu));
    /* 0062e7fa: mov eax, dword ptr [0x711808] */ r_eax = R32((u32)(0x711808u));
    /* 0062e7ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e801: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e802: lea ecx, [esp + 0x328] */ r_ecx = (u32)(r_esp+0x328u);
    /* 0062e809: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e80a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e80b: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0062e80f: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e814: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e815: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e817: call 0x62ff00 */ r_esp -= 4; W32(r_esp, 0x62e81cu); f_0062ff00();
    /* 0062e81c: mov eax, dword ptr [0x711808] */ r_eax = R32((u32)(0x711808u));
    /* 0062e821: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e824: lea ecx, [esp + 0x120] */ r_ecx = (u32)(r_esp+0x120u);
    /* 0062e82b: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0062e82f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e831: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e832: mov eax, dword ptr [0x71180c] */ r_eax = R32((u32)(0x71180cu));
    /* 0062e837: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e83c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e83d: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e842: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e843: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e849: call 0x628a10 */ r_esp -= 4; W32(r_esp, 0x62e84eu); f_00628a10();
    /* 0062e84e: mov ecx, dword ptr [0x711808] */ r_ecx = R32((u32)(0x711808u));
    /* 0062e854: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e857: lea edx, [esp + 0x220] */ r_edx = (u32)(r_esp+0x220u);
    /* 0062e85e: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0062e862: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e864: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e865: mov ecx, dword ptr [0x71180c] */ r_ecx = R32((u32)(0x71180cu));
    /* 0062e86b: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e870: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e871: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e876: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e877: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e87c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e87d: call 0x628a10 */ r_esp -= 4; W32(r_esp, 0x62e882u); f_00628a10();
    /* 0062e882: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e885: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e887: lea edx, [esp + 0x320] */ r_edx = (u32)(r_esp+0x320u);
    /* 0062e88e: mov bl, 0x10 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x10u) & 0xffu);
L_0062e890:; BB(0x0062e890);
    /* 0062e890: mov cx, word ptr [edx] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 0062e893: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e896: je 0x62e8b5 */ if (fZ) goto L_0062e8b5;
L_0062e898:; BB(0x0062e898);
    /* 0062e898: mov cl, byte ptr [eax + 0x711601] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x711601u))) & 0xffu);
    /* 0062e89e: or cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062e8a0: mov byte ptr [eax + 0x711601], cl */ W8((u32)(r_eax+0x711601u), (u8)r_ecx);
    /* 0062e8a6: mov cl, byte ptr [esp + eax + 0x120] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+r_eax+0x120u))) & 0xffu);
    /* 0062e8ad: mov byte ptr [eax + 0x711708], cl */ W8((u32)(r_eax+0x711708u), (u8)r_ecx);
    /* 0062e8b3: jmp 0x62e8df */ goto L_0062e8df;
L_0062e8b5:; BB(0x0062e8b5);
    /* 0062e8b5: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e8b8: je 0x62e8d8 */ if (fZ) goto L_0062e8d8;
L_0062e8ba:; BB(0x0062e8ba);
    /* 0062e8ba: mov cl, byte ptr [eax + 0x711601] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x711601u))) & 0xffu);
    /* 0062e8c0: or cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062e8c3: mov byte ptr [eax + 0x711601], cl */ W8((u32)(r_eax+0x711601u), (u8)r_ecx);
    /* 0062e8c9: mov cl, byte ptr [esp + eax + 0x220] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+r_eax+0x220u))) & 0xffu);
    /* 0062e8d0: mov byte ptr [eax + 0x711708], cl */ W8((u32)(r_eax+0x711708u), (u8)r_ecx);
    /* 0062e8d6: jmp 0x62e8df */ goto L_0062e8df;
L_0062e8d8:; BB(0x0062e8d8);
    /* 0062e8d8: mov byte ptr [eax + 0x711708], 0 */ W8((u32)(r_eax+0x711708u), 0x0u);
L_0062e8df:; BB(0x0062e8df);
    /* 0062e8df: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e8e0: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062e8e3: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062e8e8: jb 0x62e890 */ if (fC) goto L_0062e890;
L_0062e8ea:; BB(0x0062e8ea);
    /* 0062e8ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e8eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e8ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e8ed: add esp, 0x514 */ {  u32 a = r_esp; u32 b = 0x514u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e8f3: ret  */ FN_RET(0x0062e780); r_esp += 4; return;
L_0062e8f4:; BB(0x0062e8f4);
    /* 0062e8f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e8f6: mov bl, 0x10 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x10u) & 0xffu);
L_0062e8f8:; BB(0x0062e8f8);
    /* 0062e8f8: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062e8fb: jb 0x62e91d */ if (fC) goto L_0062e91d;
L_0062e8fd:; BB(0x0062e8fd);
    /* 0062e8fd: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062e900: ja 0x62e91d */ if ((!fC&&!fZ)) goto L_0062e91d;
L_0062e902:; BB(0x0062e902);
    /* 0062e902: mov dl, byte ptr [eax + 0x711601] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x711601u))) & 0xffu);
    /* 0062e908: or dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062e90a: mov byte ptr [eax + 0x711601], dl */ W8((u32)(r_eax+0x711601u), (u8)r_edx);
    /* 0062e910: mov dl, al */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 0062e912: add dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062e915: mov byte ptr [eax + 0x711708], dl */ W8((u32)(r_eax+0x711708u), (u8)r_edx);
    /* 0062e91b: jmp 0x62e94a */ goto L_0062e94a;
L_0062e91d:; BB(0x0062e91d);
    /* 0062e91d: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062e920: jb 0x62e943 */ if (fC) goto L_0062e943;
L_0062e922:; BB(0x0062e922);
    /* 0062e922: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062e925: ja 0x62e943 */ if ((!fC&&!fZ)) goto L_0062e943;
L_0062e927:; BB(0x0062e927);
    /* 0062e927: mov cl, byte ptr [eax + 0x711601] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x711601u))) & 0xffu);
    /* 0062e92d: or cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062e930: mov byte ptr [eax + 0x711601], cl */ W8((u32)(r_eax+0x711601u), (u8)r_ecx);
    /* 0062e936: mov cl, al */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 0062e938: sub cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062e93b: mov byte ptr [eax + 0x711708], cl */ W8((u32)(r_eax+0x711708u), (u8)r_ecx);
    /* 0062e941: jmp 0x62e94a */ goto L_0062e94a;
L_0062e943:; BB(0x0062e943);
    /* 0062e943: mov byte ptr [eax + 0x711708], 0 */ W8((u32)(r_eax+0x711708u), 0x0u);
L_0062e94a:; BB(0x0062e94a);
    /* 0062e94a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e94b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062e950: jb 0x62e8f8 */ if (fC) goto L_0062e8f8;
L_0062e952:; BB(0x0062e952);
    /* 0062e952: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e953: add esp, 0x514 */ {  u32 a = r_esp; u32 b = 0x514u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e959: ret  */ FN_RET(0x0062e780); r_esp += 4; return;
}

void f_0062e960(void) /* FUN_0062e960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e960);
    /* 0062e960: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 0062e962: call 0x62e480 */ r_esp -= 4; W32(r_esp, 0x62e967u); f_0062e480();
    /* 0062e967: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e96a: ret  */ FN_RET(0x0062e960); r_esp += 4; return;
}

void f_0062e970(void) /* FUN_0062e970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e970);
    /* 0062e970: mov eax, dword ptr [0x711338] */ r_eax = R32((u32)(0x711338u));
    /* 0062e975: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e978: je 0x62e987 */ if (fZ) goto L_0062e987;
L_0062e97a:; BB(0x0062e97a);
    /* 0062e97a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e97c: jne 0x62e9ac */ if (!fZ) goto L_0062e9ac;
L_0062e97e:; BB(0x0062e97e);
    /* 0062e97e: cmp dword ptr [0x6f2330], 1 */ {  u32 a = R32((u32)(0x6f2330u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e985: jne 0x62e9ac */ if (!fZ) goto L_0062e9ac;
L_0062e987:; BB(0x0062e987);
    /* 0062e987: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0062e98c: call 0x62e9b0 */ r_esp -= 4; W32(r_esp, 0x62e991u); f_0062e9b0();
    /* 0062e991: mov eax, dword ptr [0x711820] */ r_eax = R32((u32)(0x711820u));
    /* 0062e996: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e999: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e99b: je 0x62e99f */ if (fZ) goto L_0062e99f;
L_0062e99d:; BB(0x0062e99d);
    /* 0062e99d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62e99fu); call_ind(t); }
L_0062e99f:; BB(0x0062e99f);
    /* 0062e99f: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062e9a4: call 0x62e9b0 */ r_esp -= 4; W32(r_esp, 0x62e9a9u); f_0062e9b0();
    /* 0062e9a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062e9ac:; BB(0x0062e9ac);
    /* 0062e9ac: ret  */ FN_RET(0x0062e970); r_esp += 4; return;
}

void f_0062e9b0(void) /* FUN_0062e9b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e9b0);
    /* 0062e9b0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062e9b4: sub esp, 0x1a8 */ {  u32 a = r_esp; u32 b = 0x1a8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062e9ba: mov eax, 0x6f4f08 */ r_eax = 0x6f4f08u;
    /* 0062e9bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e9c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e9c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e9c3: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0062e9c5:; BB(0x0062e9c5);
    /* 0062e9c5: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e9c7: je 0x62e9d4 */ if (fZ) goto L_0062e9d4;
L_0062e9c9:; BB(0x0062e9c9);
    /* 0062e9c9: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e9cc: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0062e9cd: cmp eax, 0x6f4f98 */ {  u32 a = r_eax; u32 b = 0x6f4f98u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062e9d2: jb 0x62e9c5 */ if (fC) goto L_0062e9c5;
L_0062e9d4:; BB(0x0062e9d4);
    /* 0062e9d4: cmp ecx, dword ptr [ebp*8 + 0x6f4f08] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp*8+0x6f4f08u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e9db: jne 0x62eb7b */ if (!fZ) goto L_0062eb7b;
L_0062e9e1:; BB(0x0062e9e1);
    /* 0062e9e1: mov eax, dword ptr [0x711338] */ r_eax = R32((u32)(0x711338u));
    /* 0062e9e6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e9e9: je 0x62eb3d */ if (fZ) goto L_0062eb3d;
L_0062e9ef:; BB(0x0062e9ef);
    /* 0062e9ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e9f1: jne 0x62ea00 */ if (!fZ) goto L_0062ea00;
L_0062e9f3:; BB(0x0062e9f3);
    /* 0062e9f3: cmp dword ptr [0x6f2330], 1 */ {  u32 a = R32((u32)(0x6f2330u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e9fa: je 0x62eb3d */ if (fZ) goto L_0062eb3d;
L_0062ea00:; BB(0x0062ea00);
    /* 0062ea00: cmp ecx, 0xfc */ {  u32 a = r_ecx; u32 b = 0xfcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ea06: je 0x62eb7b */ if (fZ) goto L_0062eb7b;
L_0062ea0c:; BB(0x0062ea0c);
    /* 0062ea0c: lea eax, [esp + 0xb4] */ r_eax = (u32)(r_esp+0xb4u);
    /* 0062ea13: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea1b: call dword ptr [0x633038] */ { u32 t = R32((u32)(0x633038u)); r_esp -= 4; W32(r_esp, 0x62ea21u); call_ind(t); }
    /* 0062ea21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ea23: jne 0x62ea3b */ if (!fZ) goto L_0062ea3b;
L_0062ea25:; BB(0x0062ea25);
    /* 0062ea25: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0062ea2a: mov esi, 0x63d680 */ r_esi = 0x63d680u;
    /* 0062ea2f: lea edi, [esp + 0xb4] */ r_edi = (u32)(r_esp+0xb4u);
    /* 0062ea36: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062ea38: movsw word ptr es:[edi], word ptr [esi] */ W16(r_edi, R16(r_esi)); r_esi += rt_df ? -2 : 2; r_edi += rt_df ? -2 : 2;
    /* 0062ea3a: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
L_0062ea3b:; BB(0x0062ea3b);
    /* 0062ea3b: lea edi, [esp + 0xb4] */ r_edi = (u32)(r_esp+0xb4u);
    /* 0062ea42: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ea45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ea47: lea ebx, [esp + 0xb4] */ r_ebx = (u32)(r_esp+0xb4u);
    /* 0062ea4e: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062ea50: not ecx */ r_ecx = ~r_ecx;
    /* 0062ea52: cmp ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062ea55: jbe 0x62ea84 */ if ((fC||fZ)) goto L_0062ea84;
L_0062ea57:; BB(0x0062ea57);
    /* 0062ea57: lea edi, [esp + 0xb4] */ r_edi = (u32)(r_esp+0xb4u);
    /* 0062ea5e: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ea61: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062ea63: not ecx */ r_ecx = ~r_ecx;
    /* 0062ea65: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ea66: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea68: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062ea6a: lea ecx, [esp + 0xb8] */ r_ecx = (u32)(r_esp+0xb8u);
    /* 0062ea71: sub ecx, 0x3b */ {  u32 a = r_ecx; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ea74: push 0x63d67c */ { u32 v = 0x63d67cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea79: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062ea7b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea7c: call 0x6264f0 */ r_esp -= 4; W32(r_esp, 0x62ea81u); f_006264f0();
    /* 0062ea81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062ea84:; BB(0x0062ea84);
    /* 0062ea84: mov ecx, 6 */ r_ecx = 0x6u;
    /* 0062ea89: mov esi, 0x63d660 */ r_esi = 0x63d660u;
    /* 0062ea8e: lea edi, [esp + 0x14] */ r_edi = (u32)(r_esp+0x14u);
    /* 0062ea92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ea94: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062ea96: movsw word ptr es:[edi], word ptr [esi] */ W16(r_edi, R16(r_esi)); r_esi += rt_df ? -2 : 2; r_edi += rt_df ? -2 : 2;
    /* 0062ea98: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ea9b: mov edi, ebx */ r_edi = r_ebx;
    /* 0062ea9d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062ea9f: not ecx */ r_ecx = ~r_ecx;
    /* 0062eaa1: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062eaa3: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0062eaa7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062eaa9: mov esi, edi */ r_esi = r_edi;
    /* 0062eaab: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eaae: mov edi, edx */ r_edi = r_edx;
    /* 0062eab0: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062eab2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062eab4: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062eab5: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0062eab8: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062eaba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062eabc: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0062eac0: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eac3: push 0x12010 */ { u32 v = 0x12010u; r_esp -= 4; W32(r_esp, v); }
    /* 0062eac8: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0062eaca: mov edi, 0x63d65c */ r_edi = 0x63d65cu;
    /* 0062eacf: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ead2: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062ead4: not ecx */ r_ecx = ~r_ecx;
    /* 0062ead6: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062ead8: push 0x63d634 */ { u32 v = 0x63d634u; r_esp -= 4; W32(r_esp, v); }
    /* 0062eadd: mov esi, edi */ r_esi = r_edi;
    /* 0062eadf: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062eae1: mov edi, edx */ r_edi = r_edx;
    /* 0062eae3: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eae6: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062eae8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062eaea: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062eaeb: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0062eaee: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062eaf0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062eaf2: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0062eaf6: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eaf9: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0062eafb: mov edi, dword ptr [ebp*8 + 0x6f4f0c] */ r_edi = R32((u32)(r_ebp*8+0x6f4f0cu));
    /* 0062eb02: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eb05: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062eb07: not ecx */ r_ecx = ~r_ecx;
    /* 0062eb09: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062eb0b: mov esi, edi */ r_esi = r_edi;
    /* 0062eb0d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062eb0f: mov edi, edx */ r_edi = r_edx;
    /* 0062eb11: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eb14: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062eb16: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062eb18: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062eb19: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0062eb1c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0062eb1e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062eb20: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0062eb24: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eb27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb28: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0062eb2a: call 0x630fd0 */ r_esp -= 4; W32(r_esp, 0x62eb2fu); f_00630fd0();
    /* 0062eb2f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062eb32: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062eb33: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062eb34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062eb35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062eb36: add esp, 0x1a8 */ {  u32 a = r_esp; u32 b = 0x1a8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062eb3c: ret  */ FN_RET(0x0062e9b0); r_esp += 4; return;
L_0062eb3d:; BB(0x0062eb3d);
    /* 0062eb3d: mov eax, dword ptr [0x7128e0] */ r_eax = R32((u32)(0x7128e0u));
    /* 0062eb42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062eb44: je 0x62eb4e */ if (fZ) goto L_0062eb4e;
L_0062eb46:; BB(0x0062eb46);
    /* 0062eb46: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 0062eb49: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062eb4c: jne 0x62eb58 */ if (!fZ) goto L_0062eb58;
L_0062eb4e:; BB(0x0062eb4e);
    /* 0062eb4e: push -0xc */ { u32 v = 0xfffffff4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb50: call dword ptr [0x633114] */ { u32 t = R32((u32)(0x633114u)); r_esp -= 4; W32(r_esp, 0x62eb56u); call_ind(t); }
    /* 0062eb56: mov esi, eax */ r_esi = r_eax;
L_0062eb58:; BB(0x0062eb58);
    /* 0062eb58: mov edx, dword ptr [ebp*8 + 0x6f4f0c] */ r_edx = R32((u32)(r_ebp*8+0x6f4f0cu));
    /* 0062eb5f: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0062eb63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb66: mov edi, edx */ r_edi = r_edx;
    /* 0062eb68: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eb6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062eb6d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 0062eb6f: not ecx */ r_ecx = ~r_ecx;
    /* 0062eb71: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eb72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb75: call dword ptr [0x63302c] */ { u32 t = R32((u32)(0x63302cu)); r_esp -= 4; W32(r_esp, 0x62eb7bu); call_ind(t); }
L_0062eb7b:; BB(0x0062eb7b);
    /* 0062eb7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062eb7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062eb7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062eb7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062eb7f: add esp, 0x1a8 */ {  u32 a = r_esp; u32 b = 0x1a8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062eb85: ret  */ FN_RET(0x0062e9b0); r_esp += 4; return;
}

void f_0062eb90(void) /* FUN_0062eb90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062eb90);
    /* 0062eb90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb91: mov ebp, esp */ r_ebp = r_esp;
    /* 0062eb93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb95: wait  */ ;
    /* 0062eb96: fnstcw word ptr [ebp - 4] */ W16((u32)(r_ebp+0xfffffffcu), fcw);
    /* 0062eb99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062eb9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb9d: call 0x62ebf0 */ r_esp -= 4; W32(r_esp, 0x62eba2u); f_0062ebf0();
    /* 0062eba2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062eba5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062eba8: mov esi, ecx */ r_esi = r_ecx;
    /* 0062ebaa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ebad: not ecx */ r_ecx = ~r_ecx;
    /* 0062ebaf: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0062ebb1: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ebb3: or esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0062ebb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ebb6: call 0x62ec90 */ r_esp -= 4; W32(r_esp, 0x62ebbbu); f_0062ec90();
    /* 0062ebbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ebbe: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0062ebc1: fldcw word ptr [ebp + 0xc] */ fcw = R16((u32)(r_ebp+0xcu));
    /* 0062ebc4: mov eax, esi */ r_eax = r_esi;
    /* 0062ebc6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ebc7: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ebc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ebca: ret  */ FN_RET(0x0062eb90); r_esp += 4; return;
}

void f_0062ebd0(void) /* FUN_0062ebd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ebd0);
    /* 0062ebd0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062ebd4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062ebd8: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062ebdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ebde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ebdf: call 0x62eb90 */ r_esp -= 4; W32(r_esp, 0x62ebe4u); f_0062eb90();
    /* 0062ebe4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ebe7: ret  */ FN_RET(0x0062ebd0); r_esp += 4; return;
}

void f_0062ebf0(void) /* FUN_0062ebf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ebf0);
    /* 0062ebf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ebf1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0062ebf5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ebf7: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ebfa: je 0x62ec01 */ if (fZ) goto L_0062ec01;
L_0062ebfc:; BB(0x0062ebfc);
    /* 0062ebfc: mov eax, 0x10 */ r_eax = 0x10u;
L_0062ec01:; BB(0x0062ec01);
    /* 0062ec01: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ec04: je 0x62ec08 */ if (fZ) goto L_0062ec08;
L_0062ec06:; BB(0x0062ec06);
    /* 0062ec06: or al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062ec08:; BB(0x0062ec08);
    /* 0062ec08: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ec0b: je 0x62ec0f */ if (fZ) goto L_0062ec0f;
L_0062ec0d:; BB(0x0062ec0d);
    /* 0062ec0d: or al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062ec0f:; BB(0x0062ec0f);
    /* 0062ec0f: test bl, 0x10 */ {  u32 a = (u8)r_ebx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ec12: je 0x62ec16 */ if (fZ) goto L_0062ec16;
L_0062ec14:; BB(0x0062ec14);
    /* 0062ec14: or al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062ec16:; BB(0x0062ec16);
    /* 0062ec16: test bl, 0x20 */ {  u32 a = (u8)r_ebx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ec19: je 0x62ec1d */ if (fZ) goto L_0062ec1d;
L_0062ec1b:; BB(0x0062ec1b);
    /* 0062ec1b: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062ec1d:; BB(0x0062ec1d);
    /* 0062ec1d: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ec20: je 0x62ec27 */ if (fZ) goto L_0062ec27;
L_0062ec22:; BB(0x0062ec22);
    /* 0062ec22: or eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0062ec27:; BB(0x0062ec27);
    /* 0062ec27: mov edx, ebx */ r_edx = r_ebx;
    /* 0062ec29: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062ec2f: mov ecx, edx */ r_ecx = r_edx;
    /* 0062ec31: and ecx, 0xc00 */ {  u32 a = r_ecx; u32 b = 0xc00u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ec37: cmp ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ec3d: jg 0x62ec46 */ if ((!fZ&&fS==fO)) goto L_0062ec46;
L_0062ec3f:; BB(0x0062ec3f);
    /* 0062ec3f: jne 0x62ec5e */ if (!fZ) goto L_0062ec5e;
L_0062ec41:; BB(0x0062ec41);
    /* 0062ec41: or ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0062ec44: jmp 0x62ec5e */ goto L_0062ec5e;
L_0062ec46:; BB(0x0062ec46);
    /* 0062ec46: cmp ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ec4c: je 0x62ec5b */ if (fZ) goto L_0062ec5b;
L_0062ec4e:; BB(0x0062ec4e);
    /* 0062ec4e: cmp ecx, 0xc00 */ {  u32 a = r_ecx; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ec54: jne 0x62ec5e */ if (!fZ) goto L_0062ec5e;
L_0062ec56:; BB(0x0062ec56);
    /* 0062ec56: or ah, 3 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x3u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0062ec59: jmp 0x62ec5e */ goto L_0062ec5e;
L_0062ec5b:; BB(0x0062ec5b);
    /* 0062ec5b: or ah, 2 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
L_0062ec5e:; BB(0x0062ec5e);
    /* 0062ec5e: and edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0062ec64: je 0x62ec75 */ if (fZ) goto L_0062ec75;
L_0062ec66:; BB(0x0062ec66);
    /* 0062ec66: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ec6c: jne 0x62ec7a */ if (!fZ) goto L_0062ec7a;
L_0062ec6e:; BB(0x0062ec6e);
    /* 0062ec6e: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062ec73: jmp 0x62ec7a */ goto L_0062ec7a;
L_0062ec75:; BB(0x0062ec75);
    /* 0062ec75: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0062ec7a:; BB(0x0062ec7a);
    /* 0062ec7a: test bh, 0x10 */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ec7d: je 0x62ec84 */ if (fZ) goto L_0062ec84;
L_0062ec7f:; BB(0x0062ec7f);
    /* 0062ec7f: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0062ec84:; BB(0x0062ec84);
    /* 0062ec84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ec85: ret  */ FN_RET(0x0062ebf0); r_esp += 4; return;
}

void f_0062ec90(void) /* FUN_0062ec90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ec90);
    /* 0062ec90: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0062ec94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ec96: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ec99: je 0x62eca0 */ if (fZ) goto L_0062eca0;
L_0062ec9b:; BB(0x0062ec9b);
    /* 0062ec9b: mov eax, 1 */ r_eax = 0x1u;
L_0062eca0:; BB(0x0062eca0);
    /* 0062eca0: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062eca3: je 0x62eca7 */ if (fZ) goto L_0062eca7;
L_0062eca5:; BB(0x0062eca5);
    /* 0062eca5: or al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062eca7:; BB(0x0062eca7);
    /* 0062eca7: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ecaa: je 0x62ecae */ if (fZ) goto L_0062ecae;
L_0062ecac:; BB(0x0062ecac);
    /* 0062ecac: or al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062ecae:; BB(0x0062ecae);
    /* 0062ecae: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ecb1: je 0x62ecb5 */ if (fZ) goto L_0062ecb5;
L_0062ecb3:; BB(0x0062ecb3);
    /* 0062ecb3: or al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062ecb5:; BB(0x0062ecb5);
    /* 0062ecb5: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062ecb8: je 0x62ecbc */ if (fZ) goto L_0062ecbc;
L_0062ecba:; BB(0x0062ecba);
    /* 0062ecba: or al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062ecbc:; BB(0x0062ecbc);
    /* 0062ecbc: test edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ecc2: je 0x62ecc6 */ if (fZ) goto L_0062ecc6;
L_0062ecc4:; BB(0x0062ecc4);
    /* 0062ecc4: or al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062ecc6:; BB(0x0062ecc6);
    /* 0062ecc6: mov ecx, edx */ r_ecx = r_edx;
    /* 0062ecc8: and ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ecce: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062ecd4: ja 0x62ecdd */ if ((!fC&&!fZ)) goto L_0062ecdd;
L_0062ecd6:; BB(0x0062ecd6);
    /* 0062ecd6: jne 0x62ecf5 */ if (!fZ) goto L_0062ecf5;
L_0062ecd8:; BB(0x0062ecd8);
    /* 0062ecd8: or ah, 4 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x4u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0062ecdb: jmp 0x62ecf5 */ goto L_0062ecf5;
L_0062ecdd:; BB(0x0062ecdd);
    /* 0062ecdd: cmp ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ece3: je 0x62ecf2 */ if (fZ) goto L_0062ecf2;
L_0062ece5:; BB(0x0062ece5);
    /* 0062ece5: cmp ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062eceb: jne 0x62ecf5 */ if (!fZ) goto L_0062ecf5;
L_0062eced:; BB(0x0062eced);
    /* 0062eced: or ah, 0xc */ {  u32 a = (u8)(r_eax>>8); u32 b = 0xcu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0062ecf0: jmp 0x62ecf5 */ goto L_0062ecf5;
L_0062ecf2:; BB(0x0062ecf2);
    /* 0062ecf2: or ah, 8 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
L_0062ecf5:; BB(0x0062ecf5);
    /* 0062ecf5: mov ecx, edx */ r_ecx = r_edx;
    /* 0062ecf7: and ecx, 0x30000 */ {  u32 a = r_ecx; u32 b = 0x30000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062ecfd: je 0x62ed0c */ if (fZ) goto L_0062ed0c;
L_0062ecff:; BB(0x0062ecff);
    /* 0062ecff: cmp ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ed05: jne 0x62ed0f */ if (!fZ) goto L_0062ed0f;
L_0062ed07:; BB(0x0062ed07);
    /* 0062ed07: or ah, 2 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0062ed0a: jmp 0x62ed0f */ goto L_0062ed0f;
L_0062ed0c:; BB(0x0062ed0c);
    /* 0062ed0c: or ah, 3 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x3u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
L_0062ed0f:; BB(0x0062ed0f);
    /* 0062ed0f: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ed15: je 0x62ed1a */ if (fZ) goto L_0062ed1a;
L_0062ed17:; BB(0x0062ed17);
    /* 0062ed17: or ah, 0x10 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x10u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
L_0062ed1a:; BB(0x0062ed1a);
    /* 0062ed1a: ret  */ FN_RET(0x0062ec90); r_esp += 4; return;
}

void f_0062ed20(void) /* FUN_0062ed20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ed20);
    /* 0062ed20: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0062ed24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ed25: mov eax, ecx */ r_eax = r_ecx;
    /* 0062ed27: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0062ed28: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062ed2b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062ed2d: mov esi, eax */ r_esi = r_eax;
    /* 0062ed2f: mov eax, ecx */ r_eax = r_ecx;
    /* 0062ed31: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0062ed32: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ed34: mov ecx, 0x1f */ r_ecx = 0x1fu;
    /* 0062ed39: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062ed3b: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062ed3e: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ed40: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062ed42: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062ed45: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062ed47: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062ed4b: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062ed4d: sar esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0062ed50: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 0062ed53: not edx */ r_edx = ~r_edx;
    /* 0062ed55: test ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ed57: je 0x62ed5d */ if (fZ) goto L_0062ed5d;
L_0062ed59:; BB(0x0062ed59);
    /* 0062ed59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ed5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ed5c: ret  */ FN_RET(0x0062ed20); r_esp += 4; return;
L_0062ed5d:; BB(0x0062ed5d);
    /* 0062ed5d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062ed5e: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ed61: jge 0x62ed7f */ if ((fS==fO)) goto L_0062ed7f;
L_0062ed63:; BB(0x0062ed63);
    /* 0062ed63: lea eax, [eax + esi*4] */ r_eax = (u32)(r_eax+r_esi*4);
L_0062ed66:; BB(0x0062ed66);
    /* 0062ed66: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ed69: jne 0x62ed7b */ if (!fZ) goto L_0062ed7b;
L_0062ed6b:; BB(0x0062ed6b);
    /* 0062ed6b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062ed6c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062ed6f: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ed72: jl 0x62ed66 */ if ((fS!=fO)) goto L_0062ed66;
L_0062ed74:; BB(0x0062ed74);
    /* 0062ed74: mov eax, 1 */ r_eax = 0x1u;
    /* 0062ed79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ed7a: ret  */ FN_RET(0x0062ed20); r_esp += 4; return;
L_0062ed7b:; BB(0x0062ed7b);
    /* 0062ed7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ed7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ed7e: ret  */ FN_RET(0x0062ed20); r_esp += 4; return;
L_0062ed7f:; BB(0x0062ed7f);
    /* 0062ed7f: mov eax, 1 */ r_eax = 0x1u;
    /* 0062ed84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ed85: ret  */ FN_RET(0x0062ed20); r_esp += 4; return;
}

void f_0062ed90(void) /* FUN_0062ed90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ed90);
    /* 0062ed90: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0062ed94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ed95: mov eax, ecx */ r_eax = r_ecx;
    /* 0062ed97: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ed98: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0062ed99: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062ed9c: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0062eda0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062eda2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062eda3: mov esi, eax */ r_esi = r_eax;
    /* 0062eda5: mov eax, ecx */ r_eax = r_ecx;
    /* 0062eda7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0062eda8: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062edaa: mov ecx, 0x1f */ r_ecx = 0x1fu;
    /* 0062edaf: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062edb1: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062edb4: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062edb6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062edb8: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062edba: mov eax, 1 */ r_eax = 0x1u;
    /* 0062edbf: sar esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0062edc2: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062edc4: mov ecx, dword ptr [ebx + esi*4] */ r_ecx = R32((u32)(r_ebx+r_esi*4));
    /* 0062edc7: lea edi, [ebx + esi*4] */ r_edi = (u32)(r_ebx+r_esi*4);
    /* 0062edca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062edcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062edcc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062edcd: call 0x631060 */ r_esp -= 4; W32(r_esp, 0x62edd2u); f_00631060();
    /* 0062edd2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062edd5: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fS = ((r >> 31) & 1); }
    /* 0062edd6: js 0x62edf5 */ if (fS) goto L_0062edf5;
L_0062edd8:; BB(0x0062edd8);
    /* 0062edd8: lea edi, [ebx + esi*4] */ r_edi = (u32)(r_ebx+r_esi*4);
L_0062eddb:; BB(0x0062eddb);
    /* 0062eddb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062eddd: je 0x62edf5 */ if (fZ) goto L_0062edf5;
L_0062eddf:; BB(0x0062eddf);
    /* 0062eddf: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0062ede1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ede2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ede4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ede5: call 0x631060 */ r_esp -= 4; W32(r_esp, 0x62edeau); f_00631060();
    /* 0062edea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062eded: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062edee: sub edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062edf1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062edf3: jge 0x62eddb */ if ((fS==fO)) goto L_0062eddb;
L_0062edf5:; BB(0x0062edf5);
    /* 0062edf5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062edf6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062edf7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062edf8: ret  */ FN_RET(0x0062ed90); r_esp += 4; return;
}

void f_0062ee00(void) /* FUN_0062ee00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ee00);
    /* 0062ee00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee01: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0062ee05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee08: lea ebp, [eax - 1] */ r_ebp = (u32)(r_eax+0xffffffffu);
    /* 0062ee0b: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0062ee0f: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0062ee13: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0062ee14: mov eax, ebp */ r_eax = r_ebp;
    /* 0062ee16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee17: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0062ee18: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062ee1b: mov edi, 0x1f */ r_edi = 0x1fu;
    /* 0062ee20: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062ee22: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0062ee2a: mov esi, eax */ r_esi = r_eax;
    /* 0062ee2c: mov eax, ebp */ r_eax = r_ebp;
    /* 0062ee2e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0062ee2f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ee31: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062ee33: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062ee36: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ee38: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062ee3a: mov edx, 1 */ r_edx = 0x1u;
    /* 0062ee3f: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0062ee41: mov ecx, edi */ r_ecx = r_edi;
    /* 0062ee43: sar esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0062ee46: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062ee48: test dword ptr [ebx + esi*4], edx */ {  u32 a = R32((u32)(r_ebx+r_esi*4)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ee4b: je 0x62ee6e */ if (fZ) goto L_0062ee6e;
L_0062ee4d:; BB(0x0062ee4d);
    /* 0062ee4d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0062ee4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee50: call 0x62ed20 */ r_esp -= 4; W32(r_esp, 0x62ee55u); f_0062ed20();
    /* 0062ee55: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ee58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ee5a: jne 0x62ee6e */ if (!fZ) goto L_0062ee6e;
L_0062ee5c:; BB(0x0062ee5c);
    /* 0062ee5c: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0062ee60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee61: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee62: call 0x62ed90 */ r_esp -= 4; W32(r_esp, 0x62ee67u); f_0062ed90();
    /* 0062ee67: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ee6a: mov edx, eax */ r_edx = r_eax;
    /* 0062ee6c: jmp 0x62ee72 */ goto L_0062ee72;
L_0062ee6e:; BB(0x0062ee6e);
    /* 0062ee6e: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_0062ee72:; BB(0x0062ee72);
    /* 0062ee72: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0062ee75: mov ecx, edi */ r_ecx = r_edi;
    /* 0062ee77: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062ee79: mov ecx, dword ptr [ebx + esi*4] */ r_ecx = R32((u32)(r_ebx+r_esi*4));
    /* 0062ee7c: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ee7e: mov dword ptr [ebx + esi*4], ecx */ W32((u32)(r_ebx+r_esi*4), r_ecx);
    /* 0062ee81: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062ee82: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ee85: jge 0x62ee95 */ if ((fS==fO)) goto L_0062ee95;
L_0062ee87:; BB(0x0062ee87);
    /* 0062ee87: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0062ee8c: lea edi, [ebx + esi*4] */ r_edi = (u32)(r_ebx+r_esi*4);
    /* 0062ee8f: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ee91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ee93: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
L_0062ee95:; BB(0x0062ee95);
    /* 0062ee95: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062ee96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ee97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ee98: mov eax, edx */ r_eax = r_edx;
    /* 0062ee9a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ee9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062ee9c: ret  */ FN_RET(0x0062ee00); r_esp += 4; return;
}

void f_0062eea0(void) /* FUN_0062eea0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062eea0);
    /* 0062eea0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062eea4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062eea8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062eea9: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eeab: mov edx, 3 */ r_edx = 0x3u;
L_0062eeb0:; BB(0x0062eeb0);
    /* 0062eeb0: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0062eeb2: mov dword ptr [eax + ecx], esi */ W32((u32)(r_eax+r_ecx), r_esi);
    /* 0062eeb5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062eeb8: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0062eeb9: jne 0x62eeb0 */ if (!fZ) goto L_0062eeb0;
L_0062eebb:; BB(0x0062eebb);
    /* 0062eebb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062eebc: ret  */ FN_RET(0x0062eea0); r_esp += 4; return;
}

