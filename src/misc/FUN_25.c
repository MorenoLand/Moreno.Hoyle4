#include "protos.h"

void f_004f6390(void) /* FUN_004f6390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6390);
    /* 004f6390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6391: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f6397: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f639a: mov ax, word ptr [eax + 0x4f8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x4f8u))) & 0xffffu);
    /* 004f63a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004f63a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f63a4: ret  */ FN_RET(0x004f6390); r_esp += 4; return;
}

void f_004f63a5(void) /* FUN_004f63a5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f63a5);
    /* 004f63a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f63a6: mov ebp, esp */ r_ebp = r_esp;
    /* 004f63a8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f63ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f63ac: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f63af: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f63b2: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f63b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f63bb: jne 0x4f63fc */ if (!fZ) goto L_004f63fc;
L_004f63bd:; BB(0x004f63bd);
    /* 004f63bd: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f63c1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f63c4: jne 0x4f63d5 */ if (!fZ) goto L_004f63d5;
L_004f63c6:; BB(0x004f63c6);
    /* 004f63c6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f63c9: mov ax, word ptr [eax + 0x4fe] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x4feu))) & 0xffffu);
    /* 004f63d0: jmp 0x4f6615 */ goto L_004f6615;
L_004f63d5:; BB(0x004f63d5);
    /* 004f63d5: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f63d9: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f63dc: jne 0x4f63ed */ if (!fZ) goto L_004f63ed;
L_004f63de:; BB(0x004f63de);
    /* 004f63de: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f63e1: mov ax, word ptr [edx + 0x4fc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x4fcu))) & 0xffffu);
    /* 004f63e8: jmp 0x4f6615 */ goto L_004f6615;
L_004f63ed:; BB(0x004f63ed);
    /* 004f63ed: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f63f0: mov ax, word ptr [eax + 0x4fa] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x4fau))) & 0xffffu);
    /* 004f63f7: jmp 0x4f6615 */ goto L_004f6615;
L_004f63fc:; BB(0x004f63fc);
    /* 004f63fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f63ff: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f6406: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6409: jne 0x4f649f */ if (!fZ) goto L_004f649f;
L_004f640f:; BB(0x004f640f);
    /* 004f640f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6413: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6416: jne 0x4f6442 */ if (!fZ) goto L_004f6442;
L_004f6418:; BB(0x004f6418);
    /* 004f6418: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f641b: movsx esi, word ptr [ecx + 0x4fe] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x4feu));
    /* 004f6422: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6424: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f6429u); f_0060ee31();
    /* 004f6429: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f642c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f642e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6430: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f6435u); f_0060ee31();
    /* 004f6435: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f6438: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f643a: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f643d: jmp 0x4f6615 */ goto L_004f6615;
L_004f6442:; BB(0x004f6442);
    /* 004f6442: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6446: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6449: jne 0x4f6475 */ if (!fZ) goto L_004f6475;
L_004f644b:; BB(0x004f644b);
    /* 004f644b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f644e: movsx esi, word ptr [eax + 0x4fc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x4fcu));
    /* 004f6455: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6457: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f645cu); f_0060ee31();
    /* 004f645c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f645f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f6461: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6463: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f6468u); f_0060ee31();
    /* 004f6468: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f646b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f646d: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f6470: jmp 0x4f6615 */ goto L_004f6615;
L_004f6475:; BB(0x004f6475);
    /* 004f6475: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f6478: movsx esi, word ptr [ecx + 0x4fa] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x4fau));
    /* 004f647f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6481: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f6486u); f_0060ee31();
    /* 004f6486: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f6489: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f648b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f648d: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f6492u); f_0060ee31();
    /* 004f6492: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f6495: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f6497: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f649a: jmp 0x4f6615 */ goto L_004f6615;
L_004f649f:; BB(0x004f649f);
    /* 004f649f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f64a2: movsx eax, word ptr [edx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1dcu));
    /* 004f64a9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f64ac: jne 0x4f655b */ if (!fZ) goto L_004f655b;
L_004f64b2:; BB(0x004f64b2);
    /* 004f64b2: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f64b8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f64bc: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f64bf: jne 0x4f64e9 */ if (!fZ) goto L_004f64e9;
L_004f64c1:; BB(0x004f64c1);
    /* 004f64c1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f64c4: movsx esi, word ptr [edx + 0x4fe] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x4feu));
    /* 004f64cb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f64cd: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f64d2u); f_0060ee31();
    /* 004f64d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f64d5: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f64d7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f64d9: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f64deu); f_0060ee31();
    /* 004f64de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f64e1: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f64e3: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f64e7: jmp 0x4f6540 */ goto L_004f6540;
L_004f64e9:; BB(0x004f64e9);
    /* 004f64e9: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f64ed: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f64f0: jne 0x4f651a */ if (!fZ) goto L_004f651a;
L_004f64f2:; BB(0x004f64f2);
    /* 004f64f2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f64f5: movsx esi, word ptr [ecx + 0x4fc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x4fcu));
    /* 004f64fc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f64fe: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f6503u); f_0060ee31();
    /* 004f6503: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f6506: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f6508: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f650a: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f650fu); f_0060ee31();
    /* 004f650f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f6512: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f6514: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f6518: jmp 0x4f6540 */ goto L_004f6540;
L_004f651a:; BB(0x004f651a);
    /* 004f651a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f651d: movsx esi, word ptr [edx + 0x4fa] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x4fau));
    /* 004f6524: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6526: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f652bu); f_0060ee31();
    /* 004f652b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f652e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f6530: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6532: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f6537u); f_0060ee31();
    /* 004f6537: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f653a: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f653c: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004f6540:; BB(0x004f6540);
    /* 004f6540: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6544: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6547: jge 0x4f6552 */ if ((fS==fO)) goto L_004f6552;
L_004f6549:; BB(0x004f6549);
    /* 004f6549: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 004f654d: jmp 0x4f6615 */ goto L_004f6615;
L_004f6552:; BB(0x004f6552);
    /* 004f6552: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f6556: jmp 0x4f6615 */ goto L_004f6615;
L_004f655b:; BB(0x004f655b);
    /* 004f655b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f655e: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f6565: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6568: jne 0x4f6611 */ if (!fZ) goto L_004f6611;
L_004f656e:; BB(0x004f656e);
    /* 004f656e: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004f6574: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6578: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f657b: jne 0x4f65a5 */ if (!fZ) goto L_004f65a5;
L_004f657d:; BB(0x004f657d);
    /* 004f657d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f6580: movsx esi, word ptr [ecx + 0x4fe] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x4feu));
    /* 004f6587: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f6589: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f658eu); f_0060ee31();
    /* 004f658e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f6591: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f6593: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f6595: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f659au); f_0060ee31();
    /* 004f659a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f659d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f659f: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
    /* 004f65a3: jmp 0x4f65fc */ goto L_004f65fc;
L_004f65a5:; BB(0x004f65a5);
    /* 004f65a5: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f65a9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f65ac: jne 0x4f65d6 */ if (!fZ) goto L_004f65d6;
L_004f65ae:; BB(0x004f65ae);
    /* 004f65ae: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f65b1: movsx esi, word ptr [eax + 0x4fc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x4fcu));
    /* 004f65b8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f65ba: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f65bfu); f_0060ee31();
    /* 004f65bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f65c2: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f65c4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f65c6: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f65cbu); f_0060ee31();
    /* 004f65cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f65ce: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f65d0: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
    /* 004f65d4: jmp 0x4f65fc */ goto L_004f65fc;
L_004f65d6:; BB(0x004f65d6);
    /* 004f65d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f65d9: movsx esi, word ptr [ecx + 0x4fa] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x4fau));
    /* 004f65e0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f65e2: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f65e7u); f_0060ee31();
    /* 004f65e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f65ea: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f65ec: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f65ee: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f65f3u); f_0060ee31();
    /* 004f65f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f65f6: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f65f8: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
L_004f65fc:; BB(0x004f65fc);
    /* 004f65fc: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004f6600: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6603: jge 0x4f660b */ if ((fS==fO)) goto L_004f660b;
L_004f6605:; BB(0x004f6605);
    /* 004f6605: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 004f6609: jmp 0x4f6615 */ goto L_004f6615;
L_004f660b:; BB(0x004f660b);
    /* 004f660b: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004f660f: jmp 0x4f6615 */ goto L_004f6615;
L_004f6611:; BB(0x004f6611);
    /* 004f6611: mov ax, 0x64 */ r_eax = (r_eax & 0xffff0000u) | ((0x64u) & 0xffffu);
L_004f6615:; BB(0x004f6615);
    /* 004f6615: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f6616: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6618: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6619: ret 4 */ FN_RET(0x004f63a5); r_esp += 8; return;
}

void f_004f661c(void) /* FUN_004f661c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f661c);
    /* 004f661c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f661d: mov ebp, esp */ r_ebp = r_esp;
    /* 004f661f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6620: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f6623: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6626: mov ax, word ptr [eax + 0x500] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x500u))) & 0xffffu);
    /* 004f662d: mov esp, ebp */ r_esp = r_ebp;
    /* 004f662f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6630: ret  */ FN_RET(0x004f661c); r_esp += 4; return;
}

void f_004f6631(void) /* FUN_004f6631 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6631);
    /* 004f6631: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6632: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6634: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6635: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f6638: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f663b: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f6642: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6644: jne 0x4f6652 */ if (!fZ) goto L_004f6652;
L_004f6646:; BB(0x004f6646);
    /* 004f6646: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6649: mov ax, word ptr [edx + 0x502] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x502u))) & 0xffffu);
    /* 004f6650: jmp 0x4f66b7 */ goto L_004f66b7;
L_004f6652:; BB(0x004f6652);
    /* 004f6652: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6655: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f665c: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f665f: jne 0x4f666f */ if (!fZ) goto L_004f666f;
L_004f6661:; BB(0x004f6661);
    /* 004f6661: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6664: movsx eax, word ptr [edx + 0x502] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x502u));
    /* 004f666b: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004f666d: jmp 0x4f66b7 */ goto L_004f66b7;
L_004f666f:; BB(0x004f666f);
    /* 004f666f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6672: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f6679: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f667c: jne 0x4f668f */ if (!fZ) goto L_004f668f;
L_004f667e:; BB(0x004f667e);
    /* 004f667e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6681: movsx eax, word ptr [edx + 0x502] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x502u));
    /* 004f6688: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f6689: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f668b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f668d: jmp 0x4f66b7 */ goto L_004f66b7;
L_004f668f:; BB(0x004f668f);
    /* 004f668f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6692: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f6699: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f669c: jne 0x4f66b3 */ if (!fZ) goto L_004f66b3;
L_004f669e:; BB(0x004f669e);
    /* 004f669e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f66a1: movsx eax, word ptr [edx + 0x502] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x502u));
    /* 004f66a8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f66a9: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004f66ac: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f66ae: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f66b1: jmp 0x4f66b7 */ goto L_004f66b7;
L_004f66b3:; BB(0x004f66b3);
    /* 004f66b3: mov ax, 0x14 */ r_eax = (r_eax & 0xffff0000u) | ((0x14u) & 0xffffu);
L_004f66b7:; BB(0x004f66b7);
    /* 004f66b7: mov esp, ebp */ r_esp = r_ebp;
    /* 004f66b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f66ba: ret  */ FN_RET(0x004f6631); r_esp += 4; return;
}

void f_004f66bb(void) /* FUN_004f66bb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f66bb);
    /* 004f66bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f66bc: mov ebp, esp */ r_ebp = r_esp;
    /* 004f66be: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f66c1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f66c4: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f66c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f66ca: jne 0x4f66dd */ if (!fZ) goto L_004f66dd;
L_004f66cc:; BB(0x004f66cc);
    /* 004f66cc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f66ce: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f66d3u); f_0060ee31();
    /* 004f66d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f66d6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f66d9: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_004f66dd:; BB(0x004f66dd);
    /* 004f66dd: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f66e1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f66e4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f66e7: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f66ea: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004f66ed: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f66f1: ja 0x4f726e */ if ((!fC&&!fZ)) goto L_004f726e;
L_004f66f7:; BB(0x004f66f7);
    /* 004f66f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f66fa: jmp dword ptr [eax*4 + 0x4f7274] */ { u32 t = R32((u32)(r_eax*4+0x4f7274u)); switch (t) { case 0x4f6701u: goto L_004f6701; case 0x4f6826u: goto L_004f6826; case 0x4f694bu: goto L_004f694b; case 0x4f6a70u: goto L_004f6a70; case 0x4f6b95u: goto L_004f6b95; case 0x4f6cbau: goto L_004f6cba; case 0x4f6ddfu: goto L_004f6ddf; case 0x4f6f04u: goto L_004f6f04; case 0x4f7029u: goto L_004f7029; case 0x4f714eu: goto L_004f714e; default: UNSUP(0x004f66fa, "jump table entry is not a known target"); } }
L_004f6701:; BB(0x004f6701);
    /* 004f6701: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6704: mov word ptr [ecx + 0x516], 5 */ W16((u32)(r_ecx+0x516u), 0x5u);
    /* 004f670d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6710: mov word ptr [edx + 0x518], 0xf */ W16((u32)(r_edx+0x518u), 0xfu);
    /* 004f6719: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f671c: mov word ptr [eax + 0x51a], 0x28 */ W16((u32)(r_eax+0x51au), 0x28u);
    /* 004f6725: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6728: mov word ptr [ecx + 0x51c], 0x19 */ W16((u32)(r_ecx+0x51cu), 0x19u);
    /* 004f6731: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6734: mov word ptr [edx + 0x51e], 0x14 */ W16((u32)(r_edx+0x51eu), 0x14u);
    /* 004f673d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6740: mov word ptr [eax + 0x520], 6 */ W16((u32)(r_eax+0x520u), 0x6u);
    /* 004f6749: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f674c: mov word ptr [ecx + 0x522], 0x28 */ W16((u32)(r_ecx+0x522u), 0x28u);
    /* 004f6755: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6758: mov word ptr [edx + 0x524], 0xa */ W16((u32)(r_edx+0x524u), 0xau);
    /* 004f6761: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6764: mov word ptr [eax + 0x526], 0x14 */ W16((u32)(r_eax+0x526u), 0x14u);
    /* 004f676d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6770: mov word ptr [ecx + 0x528], 0x28 */ W16((u32)(r_ecx+0x528u), 0x28u);
    /* 004f6779: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f677c: mov word ptr [edx + 0x52a], 0x19 */ W16((u32)(r_edx+0x52au), 0x19u);
    /* 004f6785: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6788: mov word ptr [eax + 0x52c], 5 */ W16((u32)(r_eax+0x52cu), 0x5u);
    /* 004f6791: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6794: mov word ptr [ecx + 0x52e], 0x1e */ W16((u32)(r_ecx+0x52eu), 0x1eu);
    /* 004f679d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f67a0: mov word ptr [edx + 0x532], 0x4b */ W16((u32)(r_edx+0x532u), 0x4bu);
    /* 004f67a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f67ac: mov word ptr [eax + 0x534], 0x32 */ W16((u32)(r_eax+0x534u), 0x32u);
    /* 004f67b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f67b8: mov word ptr [ecx + 0x536], 0x19 */ W16((u32)(r_ecx+0x536u), 0x19u);
    /* 004f67c1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f67c4: mov word ptr [edx + 0x538], 0x46 */ W16((u32)(r_edx+0x538u), 0x46u);
    /* 004f67cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f67d0: mov word ptr [eax + 0x53a], 0x3c */ W16((u32)(r_eax+0x53au), 0x3cu);
    /* 004f67d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f67dc: mov word ptr [ecx + 0x530], 5 */ W16((u32)(r_ecx+0x530u), 0x5u);
    /* 004f67e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f67e8: mov word ptr [edx + 0x53c], 6 */ W16((u32)(r_edx+0x53cu), 0x6u);
    /* 004f67f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f67f4: mov word ptr [eax + 0x53e], 0x1e */ W16((u32)(r_eax+0x53eu), 0x1eu);
    /* 004f67fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6800: mov word ptr [ecx + 0x540], 0x14 */ W16((u32)(r_ecx+0x540u), 0x14u);
    /* 004f6809: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f680c: mov word ptr [edx + 0x542], 0x4b */ W16((u32)(r_edx+0x542u), 0x4bu);
    /* 004f6815: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6818: mov word ptr [eax + 0x544], 0x55 */ W16((u32)(r_eax+0x544u), 0x55u);
    /* 004f6821: jmp 0x4f726e */ goto L_004f726e;
L_004f6826:; BB(0x004f6826);
    /* 004f6826: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6829: mov word ptr [ecx + 0x516], 2 */ W16((u32)(r_ecx+0x516u), 0x2u);
    /* 004f6832: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6835: mov word ptr [edx + 0x518], 0x19 */ W16((u32)(r_edx+0x518u), 0x19u);
    /* 004f683e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6841: mov word ptr [eax + 0x51a], 0x37 */ W16((u32)(r_eax+0x51au), 0x37u);
    /* 004f684a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f684d: mov word ptr [ecx + 0x51c], 0x32 */ W16((u32)(r_ecx+0x51cu), 0x32u);
    /* 004f6856: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6859: mov word ptr [edx + 0x51e], 0x28 */ W16((u32)(r_edx+0x51eu), 0x28u);
    /* 004f6862: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6865: mov word ptr [eax + 0x520], 0xc */ W16((u32)(r_eax+0x520u), 0xcu);
    /* 004f686e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6871: mov word ptr [ecx + 0x522], 0x50 */ W16((u32)(r_ecx+0x522u), 0x50u);
    /* 004f687a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f687d: mov word ptr [edx + 0x524], 0x18 */ W16((u32)(r_edx+0x524u), 0x18u);
    /* 004f6886: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6889: mov word ptr [eax + 0x526], 8 */ W16((u32)(r_eax+0x526u), 0x8u);
    /* 004f6892: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6895: mov word ptr [ecx + 0x540], 0xc */ W16((u32)(r_ecx+0x540u), 0xcu);
    /* 004f689e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f68a1: mov word ptr [edx + 0x528], 0x2d */ W16((u32)(r_edx+0x528u), 0x2du);
    /* 004f68aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f68ad: mov word ptr [eax + 0x52a], 0x1c */ W16((u32)(r_eax+0x52au), 0x1cu);
    /* 004f68b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f68b9: mov word ptr [ecx + 0x52c], 0x11 */ W16((u32)(r_ecx+0x52cu), 0x11u);
    /* 004f68c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f68c5: mov word ptr [edx + 0x52e], 0x19 */ W16((u32)(r_edx+0x52eu), 0x19u);
    /* 004f68ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f68d1: mov word ptr [eax + 0x530], 8 */ W16((u32)(r_eax+0x530u), 0x8u);
    /* 004f68da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f68dd: mov word ptr [ecx + 0x532], 0x5a */ W16((u32)(r_ecx+0x532u), 0x5au);
    /* 004f68e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f68e9: mov word ptr [edx + 0x534], 0x32 */ W16((u32)(r_edx+0x534u), 0x32u);
    /* 004f68f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f68f5: mov word ptr [eax + 0x536], 0x1e */ W16((u32)(r_eax+0x536u), 0x1eu);
    /* 004f68fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6901: mov word ptr [ecx + 0x538], 0x55 */ W16((u32)(r_ecx+0x538u), 0x55u);
    /* 004f690a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f690d: mov word ptr [edx + 0x53a], 0x50 */ W16((u32)(r_edx+0x53au), 0x50u);
    /* 004f6916: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6919: mov word ptr [eax + 0x53c], 3 */ W16((u32)(r_eax+0x53cu), 0x3u);
    /* 004f6922: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6925: mov word ptr [ecx + 0x53e], 0x46 */ W16((u32)(r_ecx+0x53eu), 0x46u);
    /* 004f692e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6931: mov word ptr [edx + 0x542], 0x3c */ W16((u32)(r_edx+0x542u), 0x3cu);
    /* 004f693a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f693d: mov word ptr [eax + 0x544], 0x4b */ W16((u32)(r_eax+0x544u), 0x4bu);
    /* 004f6946: jmp 0x4f726e */ goto L_004f726e;
L_004f694b:; BB(0x004f694b);
    /* 004f694b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f694e: mov word ptr [ecx + 0x516], 8 */ W16((u32)(r_ecx+0x516u), 0x8u);
    /* 004f6957: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f695a: mov word ptr [edx + 0x518], 0xa */ W16((u32)(r_edx+0x518u), 0xau);
    /* 004f6963: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6966: mov word ptr [eax + 0x51a], 0x21 */ W16((u32)(r_eax+0x51au), 0x21u);
    /* 004f696f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6972: mov word ptr [ecx + 0x51c], 0xf */ W16((u32)(r_ecx+0x51cu), 0xfu);
    /* 004f697b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f697e: mov word ptr [edx + 0x51e], 0xe */ W16((u32)(r_edx+0x51eu), 0xeu);
    /* 004f6987: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f698a: mov word ptr [eax + 0x520], 8 */ W16((u32)(r_eax+0x520u), 0x8u);
    /* 004f6993: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6996: mov word ptr [ecx + 0x522], 0x1c */ W16((u32)(r_ecx+0x522u), 0x1cu);
    /* 004f699f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f69a2: mov word ptr [edx + 0x524], 0x10 */ W16((u32)(r_edx+0x524u), 0x10u);
    /* 004f69ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f69ae: mov word ptr [eax + 0x526], 0xf */ W16((u32)(r_eax+0x526u), 0xfu);
    /* 004f69b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f69ba: mov word ptr [ecx + 0x528], 0x1e */ W16((u32)(r_ecx+0x528u), 0x1eu);
    /* 004f69c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f69c6: mov word ptr [edx + 0x52a], 0x14 */ W16((u32)(r_edx+0x52au), 0x14u);
    /* 004f69cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f69d2: mov word ptr [eax + 0x52c], 4 */ W16((u32)(r_eax+0x52cu), 0x4u);
    /* 004f69db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f69de: mov word ptr [ecx + 0x52e], 0x28 */ W16((u32)(r_ecx+0x52eu), 0x28u);
    /* 004f69e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f69ea: mov word ptr [edx + 0x530], 2 */ W16((u32)(r_edx+0x530u), 0x2u);
    /* 004f69f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f69f6: mov word ptr [eax + 0x532], 0x5a */ W16((u32)(r_eax+0x532u), 0x5au);
    /* 004f69ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a02: mov word ptr [ecx + 0x534], 0x3c */ W16((u32)(r_ecx+0x534u), 0x3cu);
    /* 004f6a0b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a0e: mov word ptr [edx + 0x536], 0x1e */ W16((u32)(r_edx+0x536u), 0x1eu);
    /* 004f6a17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a1a: mov word ptr [eax + 0x538], 0x32 */ W16((u32)(r_eax+0x538u), 0x32u);
    /* 004f6a23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a26: mov word ptr [ecx + 0x53a], 0x32 */ W16((u32)(r_ecx+0x53au), 0x32u);
    /* 004f6a2f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a32: mov word ptr [edx + 0x53c], 0xc */ W16((u32)(r_edx+0x53cu), 0xcu);
    /* 004f6a3b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a3e: mov word ptr [eax + 0x53e], 0x14 */ W16((u32)(r_eax+0x53eu), 0x14u);
    /* 004f6a47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a4a: mov word ptr [ecx + 0x540], 0x1e */ W16((u32)(r_ecx+0x540u), 0x1eu);
    /* 004f6a53: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a56: mov word ptr [edx + 0x542], 0x5a */ W16((u32)(r_edx+0x542u), 0x5au);
    /* 004f6a5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a62: mov word ptr [eax + 0x544], 0x5f */ W16((u32)(r_eax+0x544u), 0x5fu);
    /* 004f6a6b: jmp 0x4f726e */ goto L_004f726e;
L_004f6a70:; BB(0x004f6a70);
    /* 004f6a70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a73: mov word ptr [ecx + 0x516], 0xa */ W16((u32)(r_ecx+0x516u), 0xau);
    /* 004f6a7c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a7f: mov word ptr [edx + 0x518], 0xe */ W16((u32)(r_edx+0x518u), 0xeu);
    /* 004f6a88: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a8b: mov word ptr [eax + 0x51a], 0x1e */ W16((u32)(r_eax+0x51au), 0x1eu);
    /* 004f6a94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a97: mov word ptr [ecx + 0x51c], 0x14 */ W16((u32)(r_ecx+0x51cu), 0x14u);
    /* 004f6aa0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6aa3: mov word ptr [edx + 0x51e], 0xa */ W16((u32)(r_edx+0x51eu), 0xau);
    /* 004f6aac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6aaf: mov word ptr [eax + 0x520], 0xe */ W16((u32)(r_eax+0x520u), 0xeu);
    /* 004f6ab8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6abb: mov word ptr [ecx + 0x522], 0x2c */ W16((u32)(r_ecx+0x522u), 0x2cu);
    /* 004f6ac4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6ac7: mov word ptr [edx + 0x524], 0x14 */ W16((u32)(r_edx+0x524u), 0x14u);
    /* 004f6ad0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6ad3: mov word ptr [eax + 0x526], 0x1c */ W16((u32)(r_eax+0x526u), 0x1cu);
    /* 004f6adc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6adf: mov word ptr [ecx + 0x528], 0x26 */ W16((u32)(r_ecx+0x528u), 0x26u);
    /* 004f6ae8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6aeb: mov word ptr [edx + 0x52a], 0x15 */ W16((u32)(r_edx+0x52au), 0x15u);
    /* 004f6af4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6af7: mov word ptr [eax + 0x52c], 5 */ W16((u32)(r_eax+0x52cu), 0x5u);
    /* 004f6b00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b03: mov word ptr [ecx + 0x52e], 0x23 */ W16((u32)(r_ecx+0x52eu), 0x23u);
    /* 004f6b0c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b0f: mov word ptr [edx + 0x530], 4 */ W16((u32)(r_edx+0x530u), 0x4u);
    /* 004f6b18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b1b: mov word ptr [eax + 0x532], 0x50 */ W16((u32)(r_eax+0x532u), 0x50u);
    /* 004f6b24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b27: mov word ptr [ecx + 0x534], 0x3c */ W16((u32)(r_ecx+0x534u), 0x3cu);
    /* 004f6b30: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b33: mov word ptr [edx + 0x536], 0x28 */ W16((u32)(r_edx+0x536u), 0x28u);
    /* 004f6b3c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b3f: mov word ptr [eax + 0x538], 0x3c */ W16((u32)(r_eax+0x538u), 0x3cu);
    /* 004f6b48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b4b: mov word ptr [ecx + 0x53a], 0x3c */ W16((u32)(r_ecx+0x53au), 0x3cu);
    /* 004f6b54: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b57: mov word ptr [edx + 0x53c], 0xa */ W16((u32)(r_edx+0x53cu), 0xau);
    /* 004f6b60: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b63: mov word ptr [eax + 0x53e], 0x1e */ W16((u32)(r_eax+0x53eu), 0x1eu);
    /* 004f6b6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b6f: mov word ptr [ecx + 0x540], 0x1a */ W16((u32)(r_ecx+0x540u), 0x1au);
    /* 004f6b78: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b7b: mov word ptr [edx + 0x542], 0x43 */ W16((u32)(r_edx+0x542u), 0x43u);
    /* 004f6b84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b87: mov word ptr [eax + 0x544], 0x50 */ W16((u32)(r_eax+0x544u), 0x50u);
    /* 004f6b90: jmp 0x4f726e */ goto L_004f726e;
L_004f6b95:; BB(0x004f6b95);
    /* 004f6b95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b98: mov word ptr [ecx + 0x516], 7 */ W16((u32)(r_ecx+0x516u), 0x7u);
    /* 004f6ba1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6ba4: mov word ptr [edx + 0x518], 0x12 */ W16((u32)(r_edx+0x518u), 0x12u);
    /* 004f6bad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6bb0: mov word ptr [eax + 0x51a], 0x25 */ W16((u32)(r_eax+0x51au), 0x25u);
    /* 004f6bb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6bbc: mov word ptr [ecx + 0x51c], 0x23 */ W16((u32)(r_ecx+0x51cu), 0x23u);
    /* 004f6bc5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6bc8: mov word ptr [edx + 0x51e], 0x1e */ W16((u32)(r_edx+0x51eu), 0x1eu);
    /* 004f6bd1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6bd4: mov word ptr [eax + 0x520], 4 */ W16((u32)(r_eax+0x520u), 0x4u);
    /* 004f6bdd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6be0: mov word ptr [ecx + 0x522], 0x3c */ W16((u32)(r_ecx+0x522u), 0x3cu);
    /* 004f6be9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6bec: mov word ptr [edx + 0x524], 6 */ W16((u32)(r_edx+0x524u), 0x6u);
    /* 004f6bf5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6bf8: mov word ptr [eax + 0x526], 0x23 */ W16((u32)(r_eax+0x526u), 0x23u);
    /* 004f6c01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c04: mov word ptr [ecx + 0x528], 0x23 */ W16((u32)(r_ecx+0x528u), 0x23u);
    /* 004f6c0d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c10: mov word ptr [edx + 0x52a], 0x1b */ W16((u32)(r_edx+0x52au), 0x1bu);
    /* 004f6c19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c1c: mov word ptr [eax + 0x52c], 7 */ W16((u32)(r_eax+0x52cu), 0x7u);
    /* 004f6c25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c28: mov word ptr [ecx + 0x52e], 0x19 */ W16((u32)(r_ecx+0x52eu), 0x19u);
    /* 004f6c31: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c34: mov word ptr [edx + 0x530], 6 */ W16((u32)(r_edx+0x530u), 0x6u);
    /* 004f6c3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c40: mov word ptr [eax + 0x532], 0x5a */ W16((u32)(r_eax+0x532u), 0x5au);
    /* 004f6c49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c4c: mov word ptr [ecx + 0x534], 0x28 */ W16((u32)(r_ecx+0x534u), 0x28u);
    /* 004f6c55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c58: mov word ptr [edx + 0x536], 0x14 */ W16((u32)(r_edx+0x536u), 0x14u);
    /* 004f6c61: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c64: mov word ptr [eax + 0x538], 0x37 */ W16((u32)(r_eax+0x538u), 0x37u);
    /* 004f6c6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c70: mov word ptr [ecx + 0x53a], 0x46 */ W16((u32)(r_ecx+0x53au), 0x46u);
    /* 004f6c79: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c7c: mov word ptr [edx + 0x53c], 4 */ W16((u32)(r_edx+0x53cu), 0x4u);
    /* 004f6c85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c88: mov word ptr [eax + 0x53e], 0x28 */ W16((u32)(r_eax+0x53eu), 0x28u);
    /* 004f6c91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c94: mov word ptr [ecx + 0x540], 0x12 */ W16((u32)(r_ecx+0x540u), 0x12u);
    /* 004f6c9d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6ca0: mov word ptr [edx + 0x542], 0x52 */ W16((u32)(r_edx+0x542u), 0x52u);
    /* 004f6ca9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6cac: mov word ptr [eax + 0x544], 0x58 */ W16((u32)(r_eax+0x544u), 0x58u);
    /* 004f6cb5: jmp 0x4f726e */ goto L_004f726e;
L_004f6cba:; BB(0x004f6cba);
    /* 004f6cba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6cbd: mov word ptr [ecx + 0x516], 0 */ W16((u32)(r_ecx+0x516u), 0x0u);
    /* 004f6cc6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6cc9: mov word ptr [edx + 0x518], 0x14 */ W16((u32)(r_edx+0x518u), 0x14u);
    /* 004f6cd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6cd5: mov word ptr [eax + 0x51a], 0x37 */ W16((u32)(r_eax+0x51au), 0x37u);
    /* 004f6cde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6ce1: mov word ptr [ecx + 0x51c], 0x64 */ W16((u32)(r_ecx+0x51cu), 0x64u);
    /* 004f6cea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6ced: mov word ptr [edx + 0x51e], 0x3c */ W16((u32)(r_edx+0x51eu), 0x3cu);
    /* 004f6cf6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6cf9: mov word ptr [eax + 0x520], 0x14 */ W16((u32)(r_eax+0x520u), 0x14u);
    /* 004f6d02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6d05: mov word ptr [ecx + 0x522], 0x50 */ W16((u32)(r_ecx+0x522u), 0x50u);
    /* 004f6d0e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6d11: mov word ptr [edx + 0x524], 0x28 */ W16((u32)(r_edx+0x524u), 0x28u);
    /* 004f6d1a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6d1d: mov word ptr [eax + 0x526], 0x1e */ W16((u32)(r_eax+0x526u), 0x1eu);
    /* 004f6d26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6d29: mov word ptr [ecx + 0x528], 0x2e */ W16((u32)(r_ecx+0x528u), 0x2eu);
    /* 004f6d32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6d35: mov word ptr [edx + 0x52a], 0x20 */ W16((u32)(r_edx+0x52au), 0x20u);
    /* 004f6d3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6d41: mov word ptr [eax + 0x52c], 0xf */ W16((u32)(r_eax+0x52cu), 0xfu);
    /* 004f6d4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6d4d: mov word ptr [ecx + 0x52e], 5 */ W16((u32)(r_ecx+0x52eu), 0x5u);
    /* 004f6d56: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6d59: mov word ptr [edx + 0x530], 8 */ W16((u32)(r_edx+0x530u), 0x8u);
    /* 004f6d62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6d65: mov word ptr [eax + 0x532], 0x41 */ W16((u32)(r_eax+0x532u), 0x41u);
    /* 004f6d6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6d71: mov word ptr [ecx + 0x534], 0x23 */ W16((u32)(r_ecx+0x534u), 0x23u);
    /* 004f6d7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6d7d: mov word ptr [edx + 0x536], 0xf */ W16((u32)(r_edx+0x536u), 0xfu);
    /* 004f6d86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6d89: mov word ptr [eax + 0x538], 0x4b */ W16((u32)(r_eax+0x538u), 0x4bu);
    /* 004f6d92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6d95: mov word ptr [ecx + 0x53a], 0x4b */ W16((u32)(r_ecx+0x53au), 0x4bu);
    /* 004f6d9e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6da1: mov word ptr [edx + 0x53c], 2 */ W16((u32)(r_edx+0x53cu), 0x2u);
    /* 004f6daa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6dad: mov word ptr [eax + 0x53e], 0x50 */ W16((u32)(r_eax+0x53eu), 0x50u);
    /* 004f6db6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6db9: mov word ptr [ecx + 0x540], 0xa */ W16((u32)(r_ecx+0x540u), 0xau);
    /* 004f6dc2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6dc5: mov word ptr [edx + 0x542], 0x32 */ W16((u32)(r_edx+0x542u), 0x32u);
    /* 004f6dce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6dd1: mov word ptr [eax + 0x544], 0x41 */ W16((u32)(r_eax+0x544u), 0x41u);
    /* 004f6dda: jmp 0x4f726e */ goto L_004f726e;
L_004f6ddf:; BB(0x004f6ddf);
    /* 004f6ddf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6de2: mov word ptr [ecx + 0x516], 3 */ W16((u32)(r_ecx+0x516u), 0x3u);
    /* 004f6deb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6dee: mov word ptr [edx + 0x518], 0xf */ W16((u32)(r_edx+0x518u), 0xfu);
    /* 004f6df7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6dfa: mov word ptr [eax + 0x51a], 0x1e */ W16((u32)(r_eax+0x51au), 0x1eu);
    /* 004f6e03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6e06: mov word ptr [ecx + 0x51c], 0x19 */ W16((u32)(r_ecx+0x51cu), 0x19u);
    /* 004f6e0f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6e12: mov word ptr [edx + 0x51e], 0x10 */ W16((u32)(r_edx+0x51eu), 0x10u);
    /* 004f6e1b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6e1e: mov word ptr [eax + 0x520], 4 */ W16((u32)(r_eax+0x520u), 0x4u);
    /* 004f6e27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6e2a: mov word ptr [ecx + 0x522], 0x1e */ W16((u32)(r_ecx+0x522u), 0x1eu);
    /* 004f6e33: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6e36: mov word ptr [edx + 0x524], 6 */ W16((u32)(r_edx+0x524u), 0x6u);
    /* 004f6e3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6e42: mov word ptr [eax + 0x526], 0x32 */ W16((u32)(r_eax+0x526u), 0x32u);
    /* 004f6e4b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6e4e: mov word ptr [ecx + 0x528], 0x2b */ W16((u32)(r_ecx+0x528u), 0x2bu);
    /* 004f6e57: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6e5a: mov word ptr [edx + 0x52a], 0x1c */ W16((u32)(r_edx+0x52au), 0x1cu);
    /* 004f6e63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6e66: mov word ptr [eax + 0x52c], 0xc */ W16((u32)(r_eax+0x52cu), 0xcu);
    /* 004f6e6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6e72: mov word ptr [ecx + 0x52e], 0x28 */ W16((u32)(r_ecx+0x52eu), 0x28u);
    /* 004f6e7b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6e7e: mov word ptr [edx + 0x530], 2 */ W16((u32)(r_edx+0x530u), 0x2u);
    /* 004f6e87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6e8a: mov word ptr [eax + 0x532], 0x3c */ W16((u32)(r_eax+0x532u), 0x3cu);
    /* 004f6e93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6e96: mov word ptr [ecx + 0x534], 0x28 */ W16((u32)(r_ecx+0x534u), 0x28u);
    /* 004f6e9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6ea2: mov word ptr [edx + 0x536], 0x14 */ W16((u32)(r_edx+0x536u), 0x14u);
    /* 004f6eab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6eae: mov word ptr [eax + 0x538], 0x3c */ W16((u32)(r_eax+0x538u), 0x3cu);
    /* 004f6eb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6eba: mov word ptr [ecx + 0x53a], 0x28 */ W16((u32)(r_ecx+0x53au), 0x28u);
    /* 004f6ec3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6ec6: mov word ptr [edx + 0x53c], 4 */ W16((u32)(r_edx+0x53cu), 0x4u);
    /* 004f6ecf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6ed2: mov word ptr [eax + 0x53e], 0x41 */ W16((u32)(r_eax+0x53eu), 0x41u);
    /* 004f6edb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6ede: mov word ptr [ecx + 0x540], 0xf */ W16((u32)(r_ecx+0x540u), 0xfu);
    /* 004f6ee7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6eea: mov word ptr [edx + 0x542], 0x41 */ W16((u32)(r_edx+0x542u), 0x41u);
    /* 004f6ef3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6ef6: mov word ptr [eax + 0x544], 0x52 */ W16((u32)(r_eax+0x544u), 0x52u);
    /* 004f6eff: jmp 0x4f726e */ goto L_004f726e;
L_004f6f04:; BB(0x004f6f04);
    /* 004f6f04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6f07: mov word ptr [ecx + 0x516], 5 */ W16((u32)(r_ecx+0x516u), 0x5u);
    /* 004f6f10: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6f13: mov word ptr [edx + 0x518], 0xe */ W16((u32)(r_edx+0x518u), 0xeu);
    /* 004f6f1c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6f1f: mov word ptr [eax + 0x51a], 0x27 */ W16((u32)(r_eax+0x51au), 0x27u);
    /* 004f6f28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6f2b: mov word ptr [ecx + 0x51c], 0x16 */ W16((u32)(r_ecx+0x51cu), 0x16u);
    /* 004f6f34: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6f37: mov word ptr [edx + 0x51e], 0x11 */ W16((u32)(r_edx+0x51eu), 0x11u);
    /* 004f6f40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6f43: mov word ptr [eax + 0x520], 8 */ W16((u32)(r_eax+0x520u), 0x8u);
    /* 004f6f4c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6f4f: mov word ptr [ecx + 0x522], 0x21 */ W16((u32)(r_ecx+0x522u), 0x21u);
    /* 004f6f58: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6f5b: mov word ptr [edx + 0x524], 0xc */ W16((u32)(r_edx+0x524u), 0xcu);
    /* 004f6f64: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6f67: mov word ptr [eax + 0x526], 0x14 */ W16((u32)(r_eax+0x526u), 0x14u);
    /* 004f6f70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6f73: mov word ptr [ecx + 0x528], 0x23 */ W16((u32)(r_ecx+0x528u), 0x23u);
    /* 004f6f7c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6f7f: mov word ptr [edx + 0x52a], 0x17 */ W16((u32)(r_edx+0x52au), 0x17u);
    /* 004f6f88: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6f8b: mov word ptr [eax + 0x52c], 6 */ W16((u32)(r_eax+0x52cu), 0x6u);
    /* 004f6f94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6f97: mov word ptr [ecx + 0x52e], 0x1e */ W16((u32)(r_ecx+0x52eu), 0x1eu);
    /* 004f6fa0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6fa3: mov word ptr [edx + 0x532], 0x4b */ W16((u32)(r_edx+0x532u), 0x4bu);
    /* 004f6fac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6faf: mov word ptr [eax + 0x534], 0x32 */ W16((u32)(r_eax+0x534u), 0x32u);
    /* 004f6fb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6fbb: mov word ptr [ecx + 0x536], 0x1e */ W16((u32)(r_ecx+0x536u), 0x1eu);
    /* 004f6fc4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6fc7: mov word ptr [edx + 0x538], 0x41 */ W16((u32)(r_edx+0x538u), 0x41u);
    /* 004f6fd0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6fd3: mov word ptr [eax + 0x53a], 0x32 */ W16((u32)(r_eax+0x53au), 0x32u);
    /* 004f6fdc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6fdf: mov word ptr [ecx + 0x530], 5 */ W16((u32)(r_ecx+0x530u), 0x5u);
    /* 004f6fe8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6feb: mov word ptr [edx + 0x53c], 0xc */ W16((u32)(r_edx+0x53cu), 0xcu);
    /* 004f6ff4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6ff7: mov word ptr [eax + 0x53e], 0xf */ W16((u32)(r_eax+0x53eu), 0xfu);
    /* 004f7000: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7003: mov word ptr [ecx + 0x540], 0x1d */ W16((u32)(r_ecx+0x540u), 0x1du);
    /* 004f700c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f700f: mov word ptr [edx + 0x542], 0x4b */ W16((u32)(r_edx+0x542u), 0x4bu);
    /* 004f7018: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f701b: mov word ptr [eax + 0x544], 0x57 */ W16((u32)(r_eax+0x544u), 0x57u);
    /* 004f7024: jmp 0x4f726e */ goto L_004f726e;
L_004f7029:; BB(0x004f7029);
    /* 004f7029: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f702c: mov word ptr [ecx + 0x516], 8 */ W16((u32)(r_ecx+0x516u), 0x8u);
    /* 004f7035: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7038: mov word ptr [edx + 0x518], 0xf */ W16((u32)(r_edx+0x518u), 0xfu);
    /* 004f7041: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7044: mov word ptr [eax + 0x51a], 0x28 */ W16((u32)(r_eax+0x51au), 0x28u);
    /* 004f704d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7050: mov word ptr [ecx + 0x51c], 0x19 */ W16((u32)(r_ecx+0x51cu), 0x19u);
    /* 004f7059: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f705c: mov word ptr [edx + 0x51e], 0x18 */ W16((u32)(r_edx+0x51eu), 0x18u);
    /* 004f7065: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7068: mov word ptr [eax + 0x520], 0xa */ W16((u32)(r_eax+0x520u), 0xau);
    /* 004f7071: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7074: mov word ptr [ecx + 0x522], 0x28 */ W16((u32)(r_ecx+0x522u), 0x28u);
    /* 004f707d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7080: mov word ptr [edx + 0x524], 0xe */ W16((u32)(r_edx+0x524u), 0xeu);
    /* 004f7089: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f708c: mov word ptr [eax + 0x526], 0x14 */ W16((u32)(r_eax+0x526u), 0x14u);
    /* 004f7095: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7098: mov word ptr [ecx + 0x528], 0x29 */ W16((u32)(r_ecx+0x528u), 0x29u);
    /* 004f70a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f70a4: mov word ptr [edx + 0x52a], 0x1e */ W16((u32)(r_edx+0x52au), 0x1eu);
    /* 004f70ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f70b0: mov word ptr [eax + 0x52c], 8 */ W16((u32)(r_eax+0x52cu), 0x8u);
    /* 004f70b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f70bc: mov word ptr [ecx + 0x52e], 0x1e */ W16((u32)(r_ecx+0x52eu), 0x1eu);
    /* 004f70c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f70c8: mov word ptr [edx + 0x532], 0x4b */ W16((u32)(r_edx+0x532u), 0x4bu);
    /* 004f70d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f70d4: mov word ptr [eax + 0x534], 0x32 */ W16((u32)(r_eax+0x534u), 0x32u);
    /* 004f70dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f70e0: mov word ptr [ecx + 0x536], 0x23 */ W16((u32)(r_ecx+0x536u), 0x23u);
    /* 004f70e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f70ec: mov word ptr [edx + 0x538], 0x3c */ W16((u32)(r_edx+0x538u), 0x3cu);
    /* 004f70f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f70f8: mov word ptr [eax + 0x53a], 0x28 */ W16((u32)(r_eax+0x53au), 0x28u);
    /* 004f7101: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7104: mov word ptr [ecx + 0x530], 5 */ W16((u32)(r_ecx+0x530u), 0x5u);
    /* 004f710d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7110: mov word ptr [edx + 0x53c], 6 */ W16((u32)(r_edx+0x53cu), 0x6u);
    /* 004f7119: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f711c: mov word ptr [eax + 0x53e], 0x1e */ W16((u32)(r_eax+0x53eu), 0x1eu);
    /* 004f7125: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7128: mov word ptr [ecx + 0x540], 0x15 */ W16((u32)(r_ecx+0x540u), 0x15u);
    /* 004f7131: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7134: mov word ptr [edx + 0x542], 0x55 */ W16((u32)(r_edx+0x542u), 0x55u);
    /* 004f713d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7140: mov word ptr [eax + 0x544], 0x55 */ W16((u32)(r_eax+0x544u), 0x55u);
    /* 004f7149: jmp 0x4f726e */ goto L_004f726e;
L_004f714e:; BB(0x004f714e);
    /* 004f714e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7151: mov word ptr [ecx + 0x516], 7 */ W16((u32)(r_ecx+0x516u), 0x7u);
    /* 004f715a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f715d: mov word ptr [edx + 0x518], 0x10 */ W16((u32)(r_edx+0x518u), 0x10u);
    /* 004f7166: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7169: mov word ptr [eax + 0x51a], 0x21 */ W16((u32)(r_eax+0x51au), 0x21u);
    /* 004f7172: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7175: mov word ptr [ecx + 0x51c], 0x12 */ W16((u32)(r_ecx+0x51cu), 0x12u);
    /* 004f717e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7181: mov word ptr [edx + 0x51e], 0x10 */ W16((u32)(r_edx+0x51eu), 0x10u);
    /* 004f718a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f718d: mov word ptr [eax + 0x520], 8 */ W16((u32)(r_eax+0x520u), 0x8u);
    /* 004f7196: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7199: mov word ptr [ecx + 0x522], 0x22 */ W16((u32)(r_ecx+0x522u), 0x22u);
    /* 004f71a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f71a5: mov word ptr [edx + 0x524], 0x10 */ W16((u32)(r_edx+0x524u), 0x10u);
    /* 004f71ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f71b1: mov word ptr [eax + 0x526], 0x11 */ W16((u32)(r_eax+0x526u), 0x11u);
    /* 004f71ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f71bd: mov word ptr [ecx + 0x528], 0x20 */ W16((u32)(r_ecx+0x528u), 0x20u);
    /* 004f71c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f71c9: mov word ptr [edx + 0x52a], 0x18 */ W16((u32)(r_edx+0x52au), 0x18u);
    /* 004f71d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f71d5: mov word ptr [eax + 0x52c], 5 */ W16((u32)(r_eax+0x52cu), 0x5u);
    /* 004f71de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f71e1: mov word ptr [ecx + 0x52e], 0x28 */ W16((u32)(r_ecx+0x52eu), 0x28u);
    /* 004f71ea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f71ed: mov word ptr [edx + 0x530], 3 */ W16((u32)(r_edx+0x530u), 0x3u);
    /* 004f71f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f71f9: mov word ptr [eax + 0x532], 0x5a */ W16((u32)(r_eax+0x532u), 0x5au);
    /* 004f7202: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7205: mov word ptr [ecx + 0x534], 0x3c */ W16((u32)(r_ecx+0x534u), 0x3cu);
    /* 004f720e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7211: mov word ptr [edx + 0x536], 0x1e */ W16((u32)(r_edx+0x536u), 0x1eu);
    /* 004f721a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f721d: mov word ptr [eax + 0x538], 0x32 */ W16((u32)(r_eax+0x538u), 0x32u);
    /* 004f7226: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7229: mov word ptr [ecx + 0x53a], 0x3c */ W16((u32)(r_ecx+0x53au), 0x3cu);
    /* 004f7232: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7235: mov word ptr [edx + 0x53c], 0xa */ W16((u32)(r_edx+0x53cu), 0xau);
    /* 004f723e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7241: mov word ptr [eax + 0x53e], 0x14 */ W16((u32)(r_eax+0x53eu), 0x14u);
    /* 004f724a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f724d: mov word ptr [ecx + 0x540], 0x22 */ W16((u32)(r_ecx+0x540u), 0x22u);
    /* 004f7256: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7259: mov word ptr [edx + 0x542], 0x50 */ W16((u32)(r_edx+0x542u), 0x50u);
    /* 004f7262: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7265: mov word ptr [eax + 0x544], 0x5a */ W16((u32)(r_eax+0x544u), 0x5au);
L_004f726e:; BB(0x004f726e);
    /* 004f726e: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7270: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7271: ret 4 */ FN_RET(0x004f66bb); r_esp += 8; return;
}

void f_004f729c(void) /* FUN_004f729c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f729c);
    /* 004f729c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f729d: mov ebp, esp */ r_ebp = r_esp;
    /* 004f729f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f72a2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f72a3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f72a6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f72a9: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f72b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f72b2: jne 0x4f72c3 */ if (!fZ) goto L_004f72c3;
L_004f72b4:; BB(0x004f72b4);
    /* 004f72b4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f72b7: mov ax, word ptr [edx + 0x516] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x516u))) & 0xffffu);
    /* 004f72be: jmp 0x4f7360 */ goto L_004f7360;
L_004f72c3:; BB(0x004f72c3);
    /* 004f72c3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f72c6: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f72cd: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f72d0: jne 0x4f7309 */ if (!fZ) goto L_004f7309;
L_004f72d2:; BB(0x004f72d2);
    /* 004f72d2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f72d5: mov ax, word ptr [edx + 0x516] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x516u))) & 0xffffu);
    /* 004f72dc: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004f72e0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f72e2: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f72e7u); f_0060ee31();
    /* 004f72e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f72ea: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f72ee: sub cx, ax */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f72f1: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004f72f5: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f72f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f72fb: jge 0x4f7303 */ if ((fS==fO)) goto L_004f7303;
L_004f72fd:; BB(0x004f72fd);
    /* 004f72fd: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004f7303:; BB(0x004f7303);
    /* 004f7303: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f7307: jmp 0x4f7360 */ goto L_004f7360;
L_004f7309:; BB(0x004f7309);
    /* 004f7309: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f730c: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f7313: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7316: jne 0x4f7333 */ if (!fZ) goto L_004f7333;
L_004f7318:; BB(0x004f7318);
    /* 004f7318: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f731b: movsx esi, word ptr [edx + 0x516] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x516u));
    /* 004f7322: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7324: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f7329u); f_0060ee31();
    /* 004f7329: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f732c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f732e: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f7331: jmp 0x4f7360 */ goto L_004f7360;
L_004f7333:; BB(0x004f7333);
    /* 004f7333: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7336: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f733d: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7340: jne 0x4f735d */ if (!fZ) goto L_004f735d;
L_004f7342:; BB(0x004f7342);
    /* 004f7342: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7345: movsx esi, word ptr [edx + 0x516] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x516u));
    /* 004f734c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f734e: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f7353u); f_0060ee31();
    /* 004f7353: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f7356: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f7358: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f735b: jmp 0x4f7360 */ goto L_004f7360;
L_004f735d:; BB(0x004f735d);
    /* 004f735d: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004f7360:; BB(0x004f7360);
    /* 004f7360: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f7361: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7363: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7364: ret  */ FN_RET(0x004f729c); r_esp += 4; return;
}

void f_004f7365(void) /* FUN_004f7365 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f7365);
    /* 004f7365: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7366: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7368: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f736b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f736e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7371: movsx ecx, word ptr [eax + 0x51a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x51au));
    /* 004f7378: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f737b: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f737e: fdiv qword ptr [0x638338] */ ST(0) = ST(0) / R_F64((u32)(0x638338u));
    /* 004f7384: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7386: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7387: ret  */ FN_RET(0x004f7365); r_esp += 4; return;
}

void f_004f7388(void) /* FUN_004f7388 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f7388);
    /* 004f7388: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7389: mov ebp, esp */ r_ebp = r_esp;
    /* 004f738b: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f738e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f7391: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7394: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f739b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f739d: jne 0x4f73b7 */ if (!fZ) goto L_004f73b7;
L_004f739f:; BB(0x004f739f);
    /* 004f739f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f73a2: movsx eax, word ptr [edx + 0x51e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x51eu));
    /* 004f73a9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f73ac: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f73af: fdiv qword ptr [0x638338] */ ST(0) = ST(0) / R_F64((u32)(0x638338u));
    /* 004f73b5: jmp 0x4f7432 */ goto L_004f7432;
L_004f73b7:; BB(0x004f73b7);
    /* 004f73b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f73ba: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f73c1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f73c4: jne 0x4f73de */ if (!fZ) goto L_004f73de;
L_004f73c6:; BB(0x004f73c6);
    /* 004f73c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f73c9: movsx ecx, word ptr [eax + 0x51e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x51eu));
    /* 004f73d0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f73d3: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004f73d6: fdiv qword ptr [0x638340] */ ST(0) = ST(0) / R_F64((u32)(0x638340u));
    /* 004f73dc: jmp 0x4f7432 */ goto L_004f7432;
L_004f73de:; BB(0x004f73de);
    /* 004f73de: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f73e1: movsx eax, word ptr [edx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1dcu));
    /* 004f73e8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f73eb: jne 0x4f7405 */ if (!fZ) goto L_004f7405;
L_004f73ed:; BB(0x004f73ed);
    /* 004f73ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f73f0: movsx edx, word ptr [ecx + 0x51e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x51eu));
    /* 004f73f7: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f73fa: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004f73fd: fdiv qword ptr [0x638348] */ ST(0) = ST(0) / R_F64((u32)(0x638348u));
    /* 004f7403: jmp 0x4f7432 */ goto L_004f7432;
L_004f7405:; BB(0x004f7405);
    /* 004f7405: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7408: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f740f: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7412: jne 0x4f742c */ if (!fZ) goto L_004f742c;
L_004f7414:; BB(0x004f7414);
    /* 004f7414: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7417: movsx eax, word ptr [edx + 0x51e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x51eu));
    /* 004f741e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f7421: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004f7424: fdiv qword ptr [0x638350] */ ST(0) = ST(0) / R_F64((u32)(0x638350u));
    /* 004f742a: jmp 0x4f7432 */ goto L_004f7432;
L_004f742c:; BB(0x004f742c);
    /* 004f742c: fld qword ptr [0x638358] */ FPUSH(R_F64((u32)(0x638358u)));
L_004f7432:; BB(0x004f7432);
    /* 004f7432: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7434: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7435: ret  */ FN_RET(0x004f7388); r_esp += 4; return;
}

void f_004f7436(void) /* FUN_004f7436 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f7436);
    /* 004f7436: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7437: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7439: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f743c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f743f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7442: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f7449: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f744b: jne 0x4f7465 */ if (!fZ) goto L_004f7465;
L_004f744d:; BB(0x004f744d);
    /* 004f744d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7450: movsx eax, word ptr [edx + 0x520] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x520u));
    /* 004f7457: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f745a: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f745d: fdiv qword ptr [0x638338] */ ST(0) = ST(0) / R_F64((u32)(0x638338u));
    /* 004f7463: jmp 0x4f74e0 */ goto L_004f74e0;
L_004f7465:; BB(0x004f7465);
    /* 004f7465: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7468: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f746f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7472: jne 0x4f748c */ if (!fZ) goto L_004f748c;
L_004f7474:; BB(0x004f7474);
    /* 004f7474: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7477: movsx ecx, word ptr [eax + 0x520] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x520u));
    /* 004f747e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f7481: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004f7484: fdiv qword ptr [0x638340] */ ST(0) = ST(0) / R_F64((u32)(0x638340u));
    /* 004f748a: jmp 0x4f74e0 */ goto L_004f74e0;
L_004f748c:; BB(0x004f748c);
    /* 004f748c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f748f: movsx eax, word ptr [edx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1dcu));
    /* 004f7496: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7499: jne 0x4f74b3 */ if (!fZ) goto L_004f74b3;
L_004f749b:; BB(0x004f749b);
    /* 004f749b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f749e: movsx edx, word ptr [ecx + 0x520] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x520u));
    /* 004f74a5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f74a8: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004f74ab: fdiv qword ptr [0x638348] */ ST(0) = ST(0) / R_F64((u32)(0x638348u));
    /* 004f74b1: jmp 0x4f74e0 */ goto L_004f74e0;
L_004f74b3:; BB(0x004f74b3);
    /* 004f74b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f74b6: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f74bd: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f74c0: jne 0x4f74da */ if (!fZ) goto L_004f74da;
L_004f74c2:; BB(0x004f74c2);
    /* 004f74c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f74c5: movsx eax, word ptr [edx + 0x520] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x520u));
    /* 004f74cc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f74cf: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004f74d2: fdiv qword ptr [0x638350] */ ST(0) = ST(0) / R_F64((u32)(0x638350u));
    /* 004f74d8: jmp 0x4f74e0 */ goto L_004f74e0;
L_004f74da:; BB(0x004f74da);
    /* 004f74da: fld qword ptr [0x638358] */ FPUSH(R_F64((u32)(0x638358u)));
L_004f74e0:; BB(0x004f74e0);
    /* 004f74e0: mov esp, ebp */ r_esp = r_ebp;
    /* 004f74e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f74e3: ret  */ FN_RET(0x004f7436); r_esp += 4; return;
}

void f_004f74e4(void) /* FUN_004f74e4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f74e4);
    /* 004f74e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f74e5: mov ebp, esp */ r_ebp = r_esp;
    /* 004f74e7: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f74ea: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f74ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f74f0: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f74f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f74f9: jne 0x4f7513 */ if (!fZ) goto L_004f7513;
L_004f74fb:; BB(0x004f74fb);
    /* 004f74fb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f74fe: movsx eax, word ptr [edx + 0x522] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x522u));
    /* 004f7505: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f7508: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f750b: fdiv qword ptr [0x638338] */ ST(0) = ST(0) / R_F64((u32)(0x638338u));
    /* 004f7511: jmp 0x4f758e */ goto L_004f758e;
L_004f7513:; BB(0x004f7513);
    /* 004f7513: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7516: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f751d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7520: jne 0x4f753a */ if (!fZ) goto L_004f753a;
L_004f7522:; BB(0x004f7522);
    /* 004f7522: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7525: movsx ecx, word ptr [eax + 0x522] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x522u));
    /* 004f752c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f752f: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004f7532: fdiv qword ptr [0x638340] */ ST(0) = ST(0) / R_F64((u32)(0x638340u));
    /* 004f7538: jmp 0x4f758e */ goto L_004f758e;
L_004f753a:; BB(0x004f753a);
    /* 004f753a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f753d: movsx eax, word ptr [edx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1dcu));
    /* 004f7544: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7547: jne 0x4f7561 */ if (!fZ) goto L_004f7561;
L_004f7549:; BB(0x004f7549);
    /* 004f7549: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f754c: movsx edx, word ptr [ecx + 0x522] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x522u));
    /* 004f7553: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f7556: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004f7559: fdiv qword ptr [0x638348] */ ST(0) = ST(0) / R_F64((u32)(0x638348u));
    /* 004f755f: jmp 0x4f758e */ goto L_004f758e;
L_004f7561:; BB(0x004f7561);
    /* 004f7561: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7564: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f756b: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f756e: jne 0x4f7588 */ if (!fZ) goto L_004f7588;
L_004f7570:; BB(0x004f7570);
    /* 004f7570: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7573: movsx eax, word ptr [edx + 0x522] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x522u));
    /* 004f757a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f757d: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004f7580: fdiv qword ptr [0x638350] */ ST(0) = ST(0) / R_F64((u32)(0x638350u));
    /* 004f7586: jmp 0x4f758e */ goto L_004f758e;
L_004f7588:; BB(0x004f7588);
    /* 004f7588: fld qword ptr [0x638358] */ FPUSH(R_F64((u32)(0x638358u)));
L_004f758e:; BB(0x004f758e);
    /* 004f758e: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7590: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7591: ret  */ FN_RET(0x004f74e4); r_esp += 4; return;
}

void f_004f7592(void) /* FUN_004f7592 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f7592);
    /* 004f7592: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7593: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7595: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7598: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f759b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f759e: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f75a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f75a7: jne 0x4f75c1 */ if (!fZ) goto L_004f75c1;
L_004f75a9:; BB(0x004f75a9);
    /* 004f75a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f75ac: movsx eax, word ptr [edx + 0x524] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x524u));
    /* 004f75b3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f75b6: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f75b9: fdiv qword ptr [0x638338] */ ST(0) = ST(0) / R_F64((u32)(0x638338u));
    /* 004f75bf: jmp 0x4f763c */ goto L_004f763c;
L_004f75c1:; BB(0x004f75c1);
    /* 004f75c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f75c4: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f75cb: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f75ce: jne 0x4f75e8 */ if (!fZ) goto L_004f75e8;
L_004f75d0:; BB(0x004f75d0);
    /* 004f75d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f75d3: movsx ecx, word ptr [eax + 0x524] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x524u));
    /* 004f75da: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f75dd: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004f75e0: fdiv qword ptr [0x638340] */ ST(0) = ST(0) / R_F64((u32)(0x638340u));
    /* 004f75e6: jmp 0x4f763c */ goto L_004f763c;
L_004f75e8:; BB(0x004f75e8);
    /* 004f75e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f75eb: movsx eax, word ptr [edx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1dcu));
    /* 004f75f2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f75f5: jne 0x4f760f */ if (!fZ) goto L_004f760f;
L_004f75f7:; BB(0x004f75f7);
    /* 004f75f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f75fa: movsx edx, word ptr [ecx + 0x524] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x524u));
    /* 004f7601: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f7604: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004f7607: fdiv qword ptr [0x638348] */ ST(0) = ST(0) / R_F64((u32)(0x638348u));
    /* 004f760d: jmp 0x4f763c */ goto L_004f763c;
L_004f760f:; BB(0x004f760f);
    /* 004f760f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7612: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f7619: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f761c: jne 0x4f7636 */ if (!fZ) goto L_004f7636;
L_004f761e:; BB(0x004f761e);
    /* 004f761e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7621: movsx eax, word ptr [edx + 0x524] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x524u));
    /* 004f7628: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f762b: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004f762e: fdiv qword ptr [0x638350] */ ST(0) = ST(0) / R_F64((u32)(0x638350u));
    /* 004f7634: jmp 0x4f763c */ goto L_004f763c;
L_004f7636:; BB(0x004f7636);
    /* 004f7636: fld qword ptr [0x638358] */ FPUSH(R_F64((u32)(0x638358u)));
L_004f763c:; BB(0x004f763c);
    /* 004f763c: mov esp, ebp */ r_esp = r_ebp;
    /* 004f763e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f763f: ret  */ FN_RET(0x004f7592); r_esp += 4; return;
}

void f_004f7640(void) /* FUN_004f7640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f7640);
    /* 004f7640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7641: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7643: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7646: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f7647: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f764a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f7650: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7653: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f765a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f765c: jne 0x4f769d */ if (!fZ) goto L_004f769d;
L_004f765e:; BB(0x004f765e);
    /* 004f765e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7662: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7665: jne 0x4f7676 */ if (!fZ) goto L_004f7676;
L_004f7667:; BB(0x004f7667);
    /* 004f7667: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f766a: mov ax, word ptr [eax + 0x536] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x536u))) & 0xffffu);
    /* 004f7671: jmp 0x4f77f5 */ goto L_004f77f5;
L_004f7676:; BB(0x004f7676);
    /* 004f7676: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f767a: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f767d: jne 0x4f768e */ if (!fZ) goto L_004f768e;
L_004f767f:; BB(0x004f767f);
    /* 004f767f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7682: mov ax, word ptr [edx + 0x534] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x534u))) & 0xffffu);
    /* 004f7689: jmp 0x4f77f5 */ goto L_004f77f5;
L_004f768e:; BB(0x004f768e);
    /* 004f768e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7691: mov ax, word ptr [eax + 0x532] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x532u))) & 0xffffu);
    /* 004f7698: jmp 0x4f77f5 */ goto L_004f77f5;
L_004f769d:; BB(0x004f769d);
    /* 004f769d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f76a0: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f76a7: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f76aa: jne 0x4f76fa */ if (!fZ) goto L_004f76fa;
L_004f76ac:; BB(0x004f76ac);
    /* 004f76ac: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f76b0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f76b3: jne 0x4f76c9 */ if (!fZ) goto L_004f76c9;
L_004f76b5:; BB(0x004f76b5);
    /* 004f76b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f76b8: movsx eax, word ptr [ecx + 0x536] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x536u));
    /* 004f76bf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f76c0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f76c2: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f76c4: jmp 0x4f77f5 */ goto L_004f77f5;
L_004f76c9:; BB(0x004f76c9);
    /* 004f76c9: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f76cd: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f76d0: jne 0x4f76e6 */ if (!fZ) goto L_004f76e6;
L_004f76d2:; BB(0x004f76d2);
    /* 004f76d2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f76d5: movsx eax, word ptr [eax + 0x534] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x534u));
    /* 004f76dc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f76dd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f76df: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f76e1: jmp 0x4f77f5 */ goto L_004f77f5;
L_004f76e6:; BB(0x004f76e6);
    /* 004f76e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f76e9: movsx eax, word ptr [ecx + 0x532] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x532u));
    /* 004f76f0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f76f1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f76f3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f76f5: jmp 0x4f77f5 */ goto L_004f77f5;
L_004f76fa:; BB(0x004f76fa);
    /* 004f76fa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f76fd: movsx eax, word ptr [edx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1dcu));
    /* 004f7704: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7707: jne 0x4f776f */ if (!fZ) goto L_004f776f;
L_004f7709:; BB(0x004f7709);
    /* 004f7709: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f770d: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7710: jne 0x4f772e */ if (!fZ) goto L_004f772e;
L_004f7712:; BB(0x004f7712);
    /* 004f7712: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7715: movsx esi, word ptr [edx + 0x536] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x536u));
    /* 004f771c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004f771e: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f7723u); f_0060ee31();
    /* 004f7723: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f7726: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f7728: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f772c: jmp 0x4f776d */ goto L_004f776d;
L_004f772e:; BB(0x004f772e);
    /* 004f772e: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7732: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7735: jne 0x4f7753 */ if (!fZ) goto L_004f7753;
L_004f7737:; BB(0x004f7737);
    /* 004f7737: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f773a: movsx esi, word ptr [ecx + 0x534] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x534u));
    /* 004f7741: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7743: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f7748u); f_0060ee31();
    /* 004f7748: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f774b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f774d: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f7751: jmp 0x4f776d */ goto L_004f776d;
L_004f7753:; BB(0x004f7753);
    /* 004f7753: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7756: movsx esi, word ptr [edx + 0x532] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x532u));
    /* 004f775d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004f775f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f7764u); f_0060ee31();
    /* 004f7764: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f7767: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f7769: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004f776d:; BB(0x004f776d);
    /* 004f776d: jmp 0x4f77e2 */ goto L_004f77e2;
L_004f776f:; BB(0x004f776f);
    /* 004f776f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7772: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f7779: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f777c: jne 0x4f77e2 */ if (!fZ) goto L_004f77e2;
L_004f777e:; BB(0x004f777e);
    /* 004f777e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7782: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7785: jne 0x4f77a3 */ if (!fZ) goto L_004f77a3;
L_004f7787:; BB(0x004f7787);
    /* 004f7787: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f778a: movsx esi, word ptr [eax + 0x536] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x536u));
    /* 004f7791: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7793: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f7798u); f_0060ee31();
    /* 004f7798: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f779b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f779d: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f77a1: jmp 0x4f77e2 */ goto L_004f77e2;
L_004f77a3:; BB(0x004f77a3);
    /* 004f77a3: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f77a7: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f77aa: jne 0x4f77c8 */ if (!fZ) goto L_004f77c8;
L_004f77ac:; BB(0x004f77ac);
    /* 004f77ac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f77af: movsx esi, word ptr [edx + 0x534] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x534u));
    /* 004f77b6: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004f77b8: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f77bdu); f_0060ee31();
    /* 004f77bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f77c0: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f77c2: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f77c6: jmp 0x4f77e2 */ goto L_004f77e2;
L_004f77c8:; BB(0x004f77c8);
    /* 004f77c8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f77cb: movsx esi, word ptr [eax + 0x532] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x532u));
    /* 004f77d2: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004f77d4: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f77d9u); f_0060ee31();
    /* 004f77d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f77dc: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f77de: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004f77e2:; BB(0x004f77e2);
    /* 004f77e2: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f77e6: cmp ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f77e9: jle 0x4f77f1 */ if ((fZ||fS!=fO)) goto L_004f77f1;
L_004f77eb:; BB(0x004f77eb);
    /* 004f77eb: mov word ptr [ebp - 4], 0x60 */ W16((u32)(r_ebp+0xfffffffcu), 0x60u);
L_004f77f1:; BB(0x004f77f1);
    /* 004f77f1: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004f77f5:; BB(0x004f77f5);
    /* 004f77f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f77f6: mov esp, ebp */ r_esp = r_ebp;
    /* 004f77f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f77f9: ret 4 */ FN_RET(0x004f7640); r_esp += 8; return;
}

void f_004f77fc(void) /* FUN_004f77fc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f77fc);
    /* 004f77fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f77fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004f77ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7800: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f7803: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7806: mov ax, word ptr [eax + 0x538] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x538u))) & 0xffffu);
    /* 004f780d: mov esp, ebp */ r_esp = r_ebp;
    /* 004f780f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7810: ret  */ FN_RET(0x004f77fc); r_esp += 4; return;
}

void f_004f7811(void) /* FUN_004f7811 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f7811);
    /* 004f7811: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7812: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7814: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7815: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f7818: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f781b: mov ax, word ptr [eax + 0x53a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x53au))) & 0xffffu);
    /* 004f7822: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7824: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7825: ret  */ FN_RET(0x004f7811); r_esp += 4; return;
}

void f_004f7826(void) /* FUN_004f7826 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f7826);
    /* 004f7826: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7827: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7829: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f782a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f782b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f782e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7831: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f7838: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f783a: jne 0x4f7848 */ if (!fZ) goto L_004f7848;
L_004f783c:; BB(0x004f783c);
    /* 004f783c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f783f: mov ax, word ptr [edx + 0x53c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x53cu))) & 0xffffu);
    /* 004f7846: jmp 0x4f78bf */ goto L_004f78bf;
L_004f7848:; BB(0x004f7848);
    /* 004f7848: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f784b: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f7852: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7855: jne 0x4f7868 */ if (!fZ) goto L_004f7868;
L_004f7857:; BB(0x004f7857);
    /* 004f7857: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f785a: movsx eax, word ptr [edx + 0x53c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x53cu));
    /* 004f7861: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f7862: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f7864: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f7866: jmp 0x4f78bf */ goto L_004f78bf;
L_004f7868:; BB(0x004f7868);
    /* 004f7868: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f786b: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f7872: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7875: jne 0x4f7892 */ if (!fZ) goto L_004f7892;
L_004f7877:; BB(0x004f7877);
    /* 004f7877: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f787a: movsx esi, word ptr [edx + 0x53c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x53cu));
    /* 004f7881: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7883: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f7888u); f_0060ee31();
    /* 004f7888: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f788b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f788d: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f7890: jmp 0x4f78bf */ goto L_004f78bf;
L_004f7892:; BB(0x004f7892);
    /* 004f7892: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7895: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f789c: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f789f: jne 0x4f78bc */ if (!fZ) goto L_004f78bc;
L_004f78a1:; BB(0x004f78a1);
    /* 004f78a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f78a4: movsx esi, word ptr [edx + 0x53c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x53cu));
    /* 004f78ab: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f78ad: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f78b2u); f_0060ee31();
    /* 004f78b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f78b5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f78b7: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f78ba: jmp 0x4f78bf */ goto L_004f78bf;
L_004f78bc:; BB(0x004f78bc);
    /* 004f78bc: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004f78bf:; BB(0x004f78bf);
    /* 004f78bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f78c0: mov esp, ebp */ r_esp = r_ebp;
    /* 004f78c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f78c3: ret  */ FN_RET(0x004f7826); r_esp += 4; return;
}

void f_004f78c4(void) /* FUN_004f78c4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f78c4);
    /* 004f78c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f78c5: mov ebp, esp */ r_ebp = r_esp;
    /* 004f78c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f78c8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f78cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f78ce: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f78d5: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f78d8: jne 0x4f78e8 */ if (!fZ) goto L_004f78e8;
L_004f78da:; BB(0x004f78da);
    /* 004f78da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f78dd: movsx eax, word ptr [edx + 0x53e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x53eu));
    /* 004f78e4: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004f78e6: jmp 0x4f78f2 */ goto L_004f78f2;
L_004f78e8:; BB(0x004f78e8);
    /* 004f78e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f78eb: mov ax, word ptr [eax + 0x53e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x53eu))) & 0xffffu);
L_004f78f2:; BB(0x004f78f2);
    /* 004f78f2: mov esp, ebp */ r_esp = r_ebp;
    /* 004f78f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f78f5: ret  */ FN_RET(0x004f78c4); r_esp += 4; return;
}

void f_004f78f6(void) /* FUN_004f78f6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f78f6);
    /* 004f78f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f78f7: mov ebp, esp */ r_ebp = r_esp;
    /* 004f78f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f78fa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f78fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7900: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f7907: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f790a: jne 0x4f791d */ if (!fZ) goto L_004f791d;
L_004f790c:; BB(0x004f790c);
    /* 004f790c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f790f: movsx eax, word ptr [edx + 0x540] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x540u));
    /* 004f7916: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f7917: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f7919: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f791b: jmp 0x4f7927 */ goto L_004f7927;
L_004f791d:; BB(0x004f791d);
    /* 004f791d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7920: mov ax, word ptr [eax + 0x540] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x540u))) & 0xffffu);
L_004f7927:; BB(0x004f7927);
    /* 004f7927: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7929: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f792a: ret  */ FN_RET(0x004f78f6); r_esp += 4; return;
}

void f_004f792b(void) /* FUN_004f792b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f792b);
    /* 004f792b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f792c: mov ebp, esp */ r_ebp = r_esp;
    /* 004f792e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7931: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f7934: mov word ptr [ebp - 4], 2 */ W16((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004f793a: jmp 0x4f7948 */ goto L_004f7948;
L_004f793c:; BB(0x004f793c);
    /* 004f793c: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f7940: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7944: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004f7948:; BB(0x004f7948);
    /* 004f7948: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f794c: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f794f: jg 0x4f79b7 */ if ((!fZ&&fS==fO)) goto L_004f79b7;
L_004f7951:; BB(0x004f7951);
    /* 004f7951: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7954: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f795a: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f795e: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7961: lea edx, [eax + ecx + 0xc78] */ r_edx = (u32)(r_eax+r_ecx+0xc78u);
    /* 004f7968: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f796c: mov word ptr [edx + eax*2 - 4], 0 */ W16((u32)(r_edx+r_eax*2+0xfffffffcu), 0x0u);
    /* 004f7973: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7976: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f797c: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7980: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7983: lea ecx, [edx + eax + 0xce8] */ r_ecx = (u32)(r_edx+r_eax+0xce8u);
    /* 004f798a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f798e: mov word ptr [ecx + edx*2 - 4], 0 */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), 0x0u);
    /* 004f7995: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7998: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f799e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f79a2: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f79a5: lea eax, [ecx + edx + 0xd58] */ r_eax = (u32)(r_ecx+r_edx+0xd58u);
    /* 004f79ac: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f79b0: mov byte ptr [eax + ecx - 2], 0 */ W8((u32)(r_eax+r_ecx+0xfffffffeu), 0x0u);
    /* 004f79b5: jmp 0x4f793c */ goto L_004f793c;
L_004f79b7:; BB(0x004f79b7);
    /* 004f79b7: mov esp, ebp */ r_esp = r_ebp;
    /* 004f79b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f79ba: ret 4 */ FN_RET(0x004f792b); r_esp += 8; return;
}

void f_004f79bd(void) /* FUN_004f79bd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f79bd);
    /* 004f79bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f79be: mov ebp, esp */ r_ebp = r_esp;
    /* 004f79c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f79c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f79c2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f79c5: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f79cc: je 0x4f79dc */ if (fZ) goto L_004f79dc;
L_004f79ce:; BB(0x004f79ce);
    /* 004f79ce: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f79d2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f79d5: jge 0x4f79dc */ if ((fS==fO)) goto L_004f79dc;
L_004f79d7:; BB(0x004f79d7);
    /* 004f79d7: jmp 0x4f7c0b */ goto L_004f7c0b;
L_004f79dc:; BB(0x004f79dc);
    /* 004f79dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f79df: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f79e5: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f79e9: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f79ec: lea ecx, [edx + eax + 0xc78] */ r_ecx = (u32)(r_edx+r_eax+0xc78u);
    /* 004f79f3: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f79f7: mov ax, word ptr [ecx + edx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004f79fc: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7a00: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7a04: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7a08: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7a0b: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7a0e: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7a14: lea edx, [esi + edx + 0xc78] */ r_edx = (u32)(r_esi+r_edx+0xc78u);
    /* 004f7a1b: mov word ptr [edx + ecx*2 - 4], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffcu), (u16)r_eax);
    /* 004f7a20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7a23: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f7a29: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7a2d: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7a30: lea eax, [ecx + edx + 0xc78] */ r_eax = (u32)(r_ecx+r_edx+0xc78u);
    /* 004f7a37: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7a3b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f7a3d: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f7a42: cmp edx, 0x3000 */ {  u32 a = r_edx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7a48: jne 0x4f7a8e */ if (!fZ) goto L_004f7a8e;
L_004f7a4a:; BB(0x004f7a4a);
    /* 004f7a4a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7a4d: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f7a53: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7a57: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7a5a: lea eax, [ecx + edx + 0xc78] */ r_eax = (u32)(r_ecx+r_edx+0xc78u);
    /* 004f7a61: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7a65: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f7a6a: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7a6e: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7a72: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7a76: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7a79: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7a7c: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7a82: lea ecx, [esi + ecx + 0xc78] */ r_ecx = (u32)(r_esi+r_ecx+0xc78u);
    /* 004f7a89: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
L_004f7a8e:; BB(0x004f7a8e);
    /* 004f7a8e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7a92: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7a95: jle 0x4f7b4d */ if ((fZ||fS!=fO)) goto L_004f7b4d;
L_004f7a9b:; BB(0x004f7a9b);
    /* 004f7a9b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7a9e: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f7aa4: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7aa8: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7aab: lea eax, [ecx + edx + 0xc78] */ r_eax = (u32)(r_ecx+r_edx+0xc78u);
    /* 004f7ab2: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7ab6: mov dx, word ptr [eax + ecx*2 - 6] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffau))) & 0xffffu);
    /* 004f7abb: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7abf: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7ac3: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7ac7: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7aca: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7acd: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7ad3: lea ecx, [esi + ecx + 0xc78] */ r_ecx = (u32)(r_esi+r_ecx+0xc78u);
    /* 004f7ada: mov word ptr [ecx + eax*2 - 6], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffau), (u16)r_edx);
    /* 004f7adf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7ae2: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f7ae8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7aec: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7aef: lea edx, [eax + ecx + 0xc78] */ r_edx = (u32)(r_eax+r_ecx+0xc78u);
    /* 004f7af6: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7afa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f7afc: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004f7b01: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7b07: jne 0x4f7b4d */ if (!fZ) goto L_004f7b4d;
L_004f7b09:; BB(0x004f7b09);
    /* 004f7b09: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7b0c: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f7b12: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7b16: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7b19: lea edx, [eax + ecx + 0xc78] */ r_edx = (u32)(r_eax+r_ecx+0xc78u);
    /* 004f7b20: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7b24: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004f7b29: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7b2d: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7b31: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7b35: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7b38: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7b3b: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7b41: lea eax, [esi + eax + 0xc78] */ r_eax = (u32)(r_esi+r_eax+0xc78u);
    /* 004f7b48: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
L_004f7b4d:; BB(0x004f7b4d);
    /* 004f7b4d: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7b51: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7b54: jge 0x4f7c0b */ if ((fS==fO)) goto L_004f7c0b;
L_004f7b5a:; BB(0x004f7b5a);
    /* 004f7b5a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7b5d: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f7b63: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7b67: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7b6a: lea edx, [eax + ecx + 0xc78] */ r_edx = (u32)(r_eax+r_ecx+0xc78u);
    /* 004f7b71: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7b75: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004f7b7a: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7b7e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7b82: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7b86: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7b89: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7b8c: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7b92: lea eax, [esi + eax + 0xc78] */ r_eax = (u32)(r_esi+r_eax+0xc78u);
    /* 004f7b99: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
    /* 004f7b9e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7ba1: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f7ba7: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7bab: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7bae: lea ecx, [edx + eax + 0xc78] */ r_ecx = (u32)(r_edx+r_eax+0xc78u);
    /* 004f7bb5: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7bb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f7bbb: mov ax, word ptr [ecx + edx*2 - 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffeu))) & 0xffffu);
    /* 004f7bc0: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7bc5: jne 0x4f7c0b */ if (!fZ) goto L_004f7c0b;
L_004f7bc7:; BB(0x004f7bc7);
    /* 004f7bc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7bca: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f7bd0: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7bd4: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7bd7: lea ecx, [edx + eax + 0xc78] */ r_ecx = (u32)(r_edx+r_eax+0xc78u);
    /* 004f7bde: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7be2: mov ax, word ptr [ecx + edx*2 - 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffeu))) & 0xffffu);
    /* 004f7be7: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7beb: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7bef: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7bf3: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7bf6: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7bf9: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7bff: lea edx, [esi + edx + 0xc78] */ r_edx = (u32)(r_esi+r_edx+0xc78u);
    /* 004f7c06: mov word ptr [edx + ecx*2 - 2], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffeu), (u16)r_eax);
L_004f7c0b:; BB(0x004f7c0b);
    /* 004f7c0b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f7c0c: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7c0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7c0f: ret 8 */ FN_RET(0x004f79bd); r_esp += 12; return;
}

void f_004f7c12(void) /* FUN_004f7c12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f7c12);
    /* 004f7c12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c13: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7c15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c17: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f7c1a: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c21: je 0x4f7c31 */ if (fZ) goto L_004f7c31;
L_004f7c23:; BB(0x004f7c23);
    /* 004f7c23: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7c27: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7c2a: jge 0x4f7c31 */ if ((fS==fO)) goto L_004f7c31;
L_004f7c2c:; BB(0x004f7c2c);
    /* 004f7c2c: jmp 0x4f7e60 */ goto L_004f7e60;
L_004f7c31:; BB(0x004f7c31);
    /* 004f7c31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7c34: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f7c3a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7c3e: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7c41: lea ecx, [edx + eax + 0xce8] */ r_ecx = (u32)(r_edx+r_eax+0xce8u);
    /* 004f7c48: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7c4c: mov ax, word ptr [ecx + edx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004f7c51: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7c55: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7c59: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7c5d: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7c60: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7c63: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7c69: lea edx, [esi + edx + 0xce8] */ r_edx = (u32)(r_esi+r_edx+0xce8u);
    /* 004f7c70: mov word ptr [edx + ecx*2 - 4], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffcu), (u16)r_eax);
    /* 004f7c75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7c78: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f7c7e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7c82: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7c85: lea eax, [ecx + edx + 0xce8] */ r_eax = (u32)(r_ecx+r_edx+0xce8u);
    /* 004f7c8c: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7c90: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f7c92: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f7c97: cmp edx, 0x3000 */ {  u32 a = r_edx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c9d: jne 0x4f7ce3 */ if (!fZ) goto L_004f7ce3;
L_004f7c9f:; BB(0x004f7c9f);
    /* 004f7c9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7ca2: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f7ca8: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7cac: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7caf: lea eax, [ecx + edx + 0xce8] */ r_eax = (u32)(r_ecx+r_edx+0xce8u);
    /* 004f7cb6: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7cba: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f7cbf: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7cc3: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7cc7: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7ccb: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7cce: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7cd1: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7cd7: lea ecx, [esi + ecx + 0xce8] */ r_ecx = (u32)(r_esi+r_ecx+0xce8u);
    /* 004f7cde: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
L_004f7ce3:; BB(0x004f7ce3);
    /* 004f7ce3: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7ce7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7cea: jle 0x4f7da2 */ if ((fZ||fS!=fO)) goto L_004f7da2;
L_004f7cf0:; BB(0x004f7cf0);
    /* 004f7cf0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7cf3: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f7cf9: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7cfd: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7d00: lea eax, [ecx + edx + 0xce8] */ r_eax = (u32)(r_ecx+r_edx+0xce8u);
    /* 004f7d07: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7d0b: mov dx, word ptr [eax + ecx*2 - 6] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffau))) & 0xffffu);
    /* 004f7d10: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7d14: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7d18: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7d1c: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7d1f: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7d22: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7d28: lea ecx, [esi + ecx + 0xce8] */ r_ecx = (u32)(r_esi+r_ecx+0xce8u);
    /* 004f7d2f: mov word ptr [ecx + eax*2 - 6], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffau), (u16)r_edx);
    /* 004f7d34: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7d37: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f7d3d: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7d41: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7d44: lea edx, [eax + ecx + 0xce8] */ r_edx = (u32)(r_eax+r_ecx+0xce8u);
    /* 004f7d4b: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7d4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f7d51: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004f7d56: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7d5c: jne 0x4f7da2 */ if (!fZ) goto L_004f7da2;
L_004f7d5e:; BB(0x004f7d5e);
    /* 004f7d5e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7d61: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f7d67: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7d6b: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7d6e: lea edx, [eax + ecx + 0xce8] */ r_edx = (u32)(r_eax+r_ecx+0xce8u);
    /* 004f7d75: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7d79: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004f7d7e: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7d82: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7d86: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7d8a: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7d8d: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7d90: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7d96: lea eax, [esi + eax + 0xce8] */ r_eax = (u32)(r_esi+r_eax+0xce8u);
    /* 004f7d9d: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
L_004f7da2:; BB(0x004f7da2);
    /* 004f7da2: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7da6: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7da9: jge 0x4f7e60 */ if ((fS==fO)) goto L_004f7e60;
L_004f7daf:; BB(0x004f7daf);
    /* 004f7daf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7db2: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f7db8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7dbc: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7dbf: lea edx, [eax + ecx + 0xce8] */ r_edx = (u32)(r_eax+r_ecx+0xce8u);
    /* 004f7dc6: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7dca: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004f7dcf: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7dd3: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7dd7: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7ddb: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7dde: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7de1: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7de7: lea eax, [esi + eax + 0xce8] */ r_eax = (u32)(r_esi+r_eax+0xce8u);
    /* 004f7dee: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
    /* 004f7df3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7df6: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f7dfc: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7e00: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7e03: lea ecx, [edx + eax + 0xce8] */ r_ecx = (u32)(r_edx+r_eax+0xce8u);
    /* 004f7e0a: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7e0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f7e10: mov ax, word ptr [ecx + edx*2 - 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffeu))) & 0xffffu);
    /* 004f7e15: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7e1a: jne 0x4f7e60 */ if (!fZ) goto L_004f7e60;
L_004f7e1c:; BB(0x004f7e1c);
    /* 004f7e1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7e1f: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f7e25: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7e29: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7e2c: lea ecx, [edx + eax + 0xce8] */ r_ecx = (u32)(r_edx+r_eax+0xce8u);
    /* 004f7e33: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7e37: mov ax, word ptr [ecx + edx*2 - 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffeu))) & 0xffffu);
    /* 004f7e3c: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7e40: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7e44: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7e48: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7e4b: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7e4e: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7e54: lea edx, [esi + edx + 0xce8] */ r_edx = (u32)(r_esi+r_edx+0xce8u);
    /* 004f7e5b: mov word ptr [edx + ecx*2 - 2], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffeu), (u16)r_eax);
L_004f7e60:; BB(0x004f7e60);
    /* 004f7e60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f7e61: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7e63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7e64: ret 8 */ FN_RET(0x004f7c12); r_esp += 12; return;
}

void f_004f7e67(void) /* FUN_004f7e67 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f7e67);
    /* 004f7e67: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7e68: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7e6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7e6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f7e6c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f7e6f: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7e76: je 0x4f7e86 */ if (fZ) goto L_004f7e86;
L_004f7e78:; BB(0x004f7e78);
    /* 004f7e78: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7e7c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7e7f: jge 0x4f7e86 */ if ((fS==fO)) goto L_004f7e86;
L_004f7e81:; BB(0x004f7e81);
    /* 004f7e81: jmp 0x4f823c */ goto L_004f823c;
L_004f7e86:; BB(0x004f7e86);
    /* 004f7e86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7e89: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f7e8f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7e93: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7e96: lea ecx, [edx + eax + 0xd58] */ r_ecx = (u32)(r_edx+r_eax+0xd58u);
    /* 004f7e9d: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7ea1: mov al, byte ptr [ecx + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004f7ea5: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f7ea7: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7eab: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7eaf: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7eb2: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7eb5: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7ebb: lea edx, [esi + edx + 0xd58] */ r_edx = (u32)(r_esi+r_edx+0xd58u);
    /* 004f7ec2: mov byte ptr [edx + ecx - 2], al */ W8((u32)(r_edx+r_ecx+0xfffffffeu), (u8)r_eax);
    /* 004f7ec6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7ec9: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f7ecf: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7ed3: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7ed6: lea eax, [ecx + edx + 0xd58] */ r_eax = (u32)(r_ecx+r_edx+0xd58u);
    /* 004f7edd: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7ee1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f7ee3: mov dl, byte ptr [eax + ecx - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffeu))) & 0xffu);
    /* 004f7ee7: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7eea: jne 0x4f7fba */ if (!fZ) goto L_004f7fba;
L_004f7ef0:; BB(0x004f7ef0);
    /* 004f7ef0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7ef3: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f7ef9: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7efd: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7f00: lea eax, [ecx + edx + 0xc78] */ r_eax = (u32)(r_ecx+r_edx+0xc78u);
    /* 004f7f07: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7f0b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f7f0d: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f7f12: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f7f14: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7f18: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7f1c: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7f1f: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7f22: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7f28: lea ecx, [esi + ecx + 0xc78] */ r_ecx = (u32)(r_esi+r_ecx+0xc78u);
    /* 004f7f2f: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
    /* 004f7f34: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7f37: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f7f3d: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7f41: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7f44: lea edx, [eax + ecx + 0xce8] */ r_edx = (u32)(r_eax+r_ecx+0xce8u);
    /* 004f7f4b: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7f4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f7f51: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004f7f56: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004f7f58: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7f5c: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7f60: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7f63: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7f66: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7f6c: lea eax, [esi + eax + 0xce8] */ r_eax = (u32)(r_esi+r_eax+0xce8u);
    /* 004f7f73: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
    /* 004f7f78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7f7b: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f7f81: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7f85: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7f88: lea ecx, [edx + eax + 0xd58] */ r_ecx = (u32)(r_edx+r_eax+0xd58u);
    /* 004f7f8f: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7f93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f7f95: mov al, byte ptr [ecx + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004f7f99: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004f7f9b: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7f9f: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7fa3: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7fa6: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7fa9: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7faf: lea edx, [esi + edx + 0xd58] */ r_edx = (u32)(r_esi+r_edx+0xd58u);
    /* 004f7fb6: mov byte ptr [edx + ecx - 2], al */ W8((u32)(r_edx+r_ecx+0xfffffffeu), (u8)r_eax);
L_004f7fba:; BB(0x004f7fba);
    /* 004f7fba: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7fbe: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7fc1: jle 0x4f80fb */ if ((fZ||fS!=fO)) goto L_004f80fb;
L_004f7fc7:; BB(0x004f7fc7);
    /* 004f7fc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7fca: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f7fd0: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7fd4: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7fd7: lea ecx, [edx + eax + 0xd58] */ r_ecx = (u32)(r_edx+r_eax+0xd58u);
    /* 004f7fde: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7fe2: mov al, byte ptr [ecx + edx - 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffdu))) & 0xffu);
    /* 004f7fe6: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f7fe8: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f7fec: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7ff0: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f7ff3: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7ff6: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f7ffc: lea edx, [esi + edx + 0xd58] */ r_edx = (u32)(r_esi+r_edx+0xd58u);
    /* 004f8003: mov byte ptr [edx + ecx - 3], al */ W8((u32)(r_edx+r_ecx+0xfffffffdu), (u8)r_eax);
    /* 004f8007: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f800a: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f8010: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f8014: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f8017: lea eax, [ecx + edx + 0xd58] */ r_eax = (u32)(r_ecx+r_edx+0xd58u);
    /* 004f801e: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f8022: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f8024: mov dl, byte ptr [eax + ecx - 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffdu))) & 0xffu);
    /* 004f8028: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f802b: jne 0x4f80fb */ if (!fZ) goto L_004f80fb;
L_004f8031:; BB(0x004f8031);
    /* 004f8031: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8034: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f803a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f803e: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f8041: lea eax, [ecx + edx + 0xc78] */ r_eax = (u32)(r_ecx+r_edx+0xc78u);
    /* 004f8048: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f804c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f804e: mov dx, word ptr [eax + ecx*2 - 6] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffau))) & 0xffffu);
    /* 004f8053: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f8055: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f8059: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f805d: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f8060: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8063: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f8069: lea ecx, [esi + ecx + 0xc78] */ r_ecx = (u32)(r_esi+r_ecx+0xc78u);
    /* 004f8070: mov word ptr [ecx + eax*2 - 6], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffau), (u16)r_edx);
    /* 004f8075: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8078: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f807e: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f8082: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f8085: lea edx, [eax + ecx + 0xce8] */ r_edx = (u32)(r_eax+r_ecx+0xce8u);
    /* 004f808c: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f8090: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8092: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004f8097: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004f8099: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f809d: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f80a1: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f80a4: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f80a7: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f80ad: lea eax, [esi + eax + 0xce8] */ r_eax = (u32)(r_esi+r_eax+0xce8u);
    /* 004f80b4: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004f80b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f80bc: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f80c2: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f80c6: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f80c9: lea ecx, [edx + eax + 0xd58] */ r_ecx = (u32)(r_edx+r_eax+0xd58u);
    /* 004f80d0: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f80d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f80d6: mov al, byte ptr [ecx + edx - 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffdu))) & 0xffu);
    /* 004f80da: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004f80dc: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f80e0: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f80e4: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f80e7: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f80ea: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f80f0: lea edx, [esi + edx + 0xd58] */ r_edx = (u32)(r_esi+r_edx+0xd58u);
    /* 004f80f7: mov byte ptr [edx + ecx - 3], al */ W8((u32)(r_edx+r_ecx+0xfffffffdu), (u8)r_eax);
L_004f80fb:; BB(0x004f80fb);
    /* 004f80fb: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f80ff: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8102: jge 0x4f823c */ if ((fS==fO)) goto L_004f823c;
L_004f8108:; BB(0x004f8108);
    /* 004f8108: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f810b: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f8111: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f8115: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f8118: lea ecx, [edx + eax + 0xd58] */ r_ecx = (u32)(r_edx+r_eax+0xd58u);
    /* 004f811f: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f8123: mov al, byte ptr [ecx + edx - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xffffffffu))) & 0xffu);
    /* 004f8127: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f8129: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f812d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f8131: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f8134: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8137: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f813d: lea edx, [esi + edx + 0xd58] */ r_edx = (u32)(r_esi+r_edx+0xd58u);
    /* 004f8144: mov byte ptr [edx + ecx - 1], al */ W8((u32)(r_edx+r_ecx+0xffffffffu), (u8)r_eax);
    /* 004f8148: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f814b: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f8151: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f8155: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f8158: lea eax, [ecx + edx + 0xd58] */ r_eax = (u32)(r_ecx+r_edx+0xd58u);
    /* 004f815f: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f8163: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f8165: mov dl, byte ptr [eax + ecx - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xffffffffu))) & 0xffu);
    /* 004f8169: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f816c: jne 0x4f823c */ if (!fZ) goto L_004f823c;
L_004f8172:; BB(0x004f8172);
    /* 004f8172: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8175: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f817b: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f817f: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f8182: lea eax, [ecx + edx + 0xc78] */ r_eax = (u32)(r_ecx+r_edx+0xc78u);
    /* 004f8189: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f818d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f818f: mov dx, word ptr [eax + ecx*2 - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffeu))) & 0xffffu);
    /* 004f8194: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f8196: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f819a: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f819e: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f81a1: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f81a4: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f81aa: lea ecx, [esi + ecx + 0xc78] */ r_ecx = (u32)(r_esi+r_ecx+0xc78u);
    /* 004f81b1: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004f81b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f81b9: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f81bf: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f81c3: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f81c6: lea edx, [eax + ecx + 0xce8] */ r_edx = (u32)(r_eax+r_ecx+0xce8u);
    /* 004f81cd: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f81d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f81d3: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004f81d8: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004f81da: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f81de: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f81e2: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f81e5: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f81e8: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f81ee: lea eax, [esi + eax + 0xce8] */ r_eax = (u32)(r_esi+r_eax+0xce8u);
    /* 004f81f5: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
    /* 004f81fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f81fd: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f8203: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f8207: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f820a: lea ecx, [edx + eax + 0xd58] */ r_ecx = (u32)(r_edx+r_eax+0xd58u);
    /* 004f8211: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f8215: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8217: mov al, byte ptr [ecx + edx - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xffffffffu))) & 0xffu);
    /* 004f821b: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004f821d: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f8221: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f8225: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f8228: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f822b: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f8231: lea edx, [esi + edx + 0xd58] */ r_edx = (u32)(r_esi+r_edx+0xd58u);
    /* 004f8238: mov byte ptr [edx + ecx - 1], al */ W8((u32)(r_edx+r_ecx+0xffffffffu), (u8)r_eax);
L_004f823c:; BB(0x004f823c);
    /* 004f823c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f823d: mov esp, ebp */ r_esp = r_ebp;
    /* 004f823f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8240: ret 8 */ FN_RET(0x004f7e67); r_esp += 12; return;
}

void f_004f8243(void) /* FUN_004f8243 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f8243);
    /* 004f8243: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8244: mov ebp, esp */ r_ebp = r_esp;
    /* 004f8246: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f8249: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004f824c: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8253: je 0x4f8269 */ if (fZ) goto L_004f8269;
L_004f8255:; BB(0x004f8255);
    /* 004f8255: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f8259: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f825c: jge 0x4f8269 */ if ((fS==fO)) goto L_004f8269;
L_004f825e:; BB(0x004f825e);
    /* 004f825e: fld qword ptr [0x638360] */ FPUSH(R_F64((u32)(0x638360u)));
    /* 004f8264: jmp 0x4f838f */ goto L_004f838f;
L_004f8269:; BB(0x004f8269);
    /* 004f8269: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f826c: movsx edx, word ptr [ecx + 0x518] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x518u));
    /* 004f8273: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004f8276: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 004f8279: fdiv qword ptr [0x638338] */ ST(0) = ST(0) / R_F64((u32)(0x638338u));
    /* 004f827f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f8283: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004f8286: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 004f8289: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f828b: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 004f828e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f8291: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f8297: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f829b: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f829e: lea ecx, [edx + eax + 0xc78] */ r_ecx = (u32)(r_edx+r_eax+0xc78u);
    /* 004f82a5: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f82a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f82ab: mov ax, word ptr [ecx + edx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004f82b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f82b2: jne 0x4f82bc */ if (!fZ) goto L_004f82bc;
L_004f82b4:; BB(0x004f82b4);
    /* 004f82b4: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 004f82b7: jmp 0x4f838f */ goto L_004f838f;
L_004f82bc:; BB(0x004f82bc);
    /* 004f82bc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f82bf: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f82c5: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f82c9: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f82cc: lea ecx, [edx + eax + 0xc78] */ r_ecx = (u32)(r_edx+r_eax+0xc78u);
    /* 004f82d3: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f82d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f82d9: mov ax, word ptr [ecx + edx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004f82de: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004f82e1: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004f82e4: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004f82e7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f82ea: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f82f0: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f82f4: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f82f7: lea ecx, [edx + eax + 0xce8] */ r_ecx = (u32)(r_edx+r_eax+0xce8u);
    /* 004f82fe: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f8302: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8304: mov ax, word ptr [ecx + edx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004f8309: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004f830c: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 004f830f: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004f8312: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004f8318: call 0x4b58ae */ r_esp -= 4; W32(r_esp, 0x4f831du); f_004b58ae();
    /* 004f831d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f831f: jne 0x4f8354 */ if (!fZ) goto L_004f8354;
L_004f8321:; BB(0x004f8321);
    /* 004f8321: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f8324: movsx edx, word ptr [ecx + 0x51c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x51cu));
    /* 004f832b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004f832e: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 004f8331: fdivr qword ptr [ebp - 0x10] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff0u)) / ST(0);
    /* 004f8334: fadd qword ptr [ebp - 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff8u));
    /* 004f8337: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f833a: movsx ecx, word ptr [eax + 0x51c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x51cu));
    /* 004f8341: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004f8344: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004f8347: fdivr qword ptr [ebp - 0x18] */ ST(0) = R_F64((u32)(r_ebp+0xffffffe8u)) / ST(0);
    /* 004f834a: fadd qword ptr [0x638360] */ ST(0) = ST(0) + R_F64((u32)(0x638360u));
    /* 004f8350: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f8352: jmp 0x4f838f */ goto L_004f838f;
L_004f8354:; BB(0x004f8354);
    /* 004f8354: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f8357: movsx eax, word ptr [edx + 0x51c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x51cu));
    /* 004f835e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f835f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f8361: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f8363: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004f8366: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 004f8369: fdivr qword ptr [ebp - 0x10] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff0u)) / ST(0);
    /* 004f836c: fadd qword ptr [ebp - 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff8u));
    /* 004f836f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f8372: movsx eax, word ptr [eax + 0x51c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x51cu));
    /* 004f8379: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f837a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f837c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f837e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004f8381: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 004f8384: fdivr qword ptr [ebp - 0x18] */ ST(0) = R_F64((u32)(r_ebp+0xffffffe8u)) / ST(0);
    /* 004f8387: fadd qword ptr [0x638360] */ ST(0) = ST(0) + R_F64((u32)(0x638360u));
    /* 004f838d: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
L_004f838f:; BB(0x004f838f);
    /* 004f838f: mov esp, ebp */ r_esp = r_ebp;
    /* 004f8391: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8392: ret 8 */ FN_RET(0x004f8243); r_esp += 12; return;
}

void f_004f8395(void) /* FUN_004f8395 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f8395);
    /* 004f8395: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8396: mov ebp, esp */ r_ebp = r_esp;
    /* 004f8398: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8399: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f839c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f839f: mov ax, word ptr [eax + 0x526] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x526u))) & 0xffffu);
    /* 004f83a6: mov esp, ebp */ r_esp = r_ebp;
    /* 004f83a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f83a9: ret  */ FN_RET(0x004f8395); r_esp += 4; return;
}

void f_004f83aa(void) /* FUN_004f83aa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f83aa);
    /* 004f83aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f83ab: mov ebp, esp */ r_ebp = r_esp;
    /* 004f83ad: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f83b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f83b1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f83b4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f83b7: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f83be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f83c0: jne 0x4f8401 */ if (!fZ) goto L_004f8401;
L_004f83c2:; BB(0x004f83c2);
    /* 004f83c2: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f83c6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f83c9: jne 0x4f83da */ if (!fZ) goto L_004f83da;
L_004f83cb:; BB(0x004f83cb);
    /* 004f83cb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f83ce: mov ax, word ptr [eax + 0x52c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x52cu))) & 0xffffu);
    /* 004f83d5: jmp 0x4f861a */ goto L_004f861a;
L_004f83da:; BB(0x004f83da);
    /* 004f83da: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f83de: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f83e1: jne 0x4f83f2 */ if (!fZ) goto L_004f83f2;
L_004f83e3:; BB(0x004f83e3);
    /* 004f83e3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f83e6: mov ax, word ptr [edx + 0x52a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x52au))) & 0xffffu);
    /* 004f83ed: jmp 0x4f861a */ goto L_004f861a;
L_004f83f2:; BB(0x004f83f2);
    /* 004f83f2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f83f5: mov ax, word ptr [eax + 0x528] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x528u))) & 0xffffu);
    /* 004f83fc: jmp 0x4f861a */ goto L_004f861a;
L_004f8401:; BB(0x004f8401);
    /* 004f8401: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8404: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f840b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f840e: jne 0x4f84a4 */ if (!fZ) goto L_004f84a4;
L_004f8414:; BB(0x004f8414);
    /* 004f8414: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f8418: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f841b: jne 0x4f8447 */ if (!fZ) goto L_004f8447;
L_004f841d:; BB(0x004f841d);
    /* 004f841d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8420: movsx esi, word ptr [ecx + 0x52c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x52cu));
    /* 004f8427: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8429: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f842eu); f_0060ee31();
    /* 004f842e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8431: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8433: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8435: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f843au); f_0060ee31();
    /* 004f843a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f843d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f843f: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f8442: jmp 0x4f861a */ goto L_004f861a;
L_004f8447:; BB(0x004f8447);
    /* 004f8447: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f844b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f844e: jne 0x4f847a */ if (!fZ) goto L_004f847a;
L_004f8450:; BB(0x004f8450);
    /* 004f8450: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8453: movsx esi, word ptr [eax + 0x52a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x52au));
    /* 004f845a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f845c: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f8461u); f_0060ee31();
    /* 004f8461: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8464: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8466: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8468: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f846du); f_0060ee31();
    /* 004f846d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8470: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8472: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f8475: jmp 0x4f861a */ goto L_004f861a;
L_004f847a:; BB(0x004f847a);
    /* 004f847a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f847d: movsx esi, word ptr [ecx + 0x528] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x528u));
    /* 004f8484: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8486: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f848bu); f_0060ee31();
    /* 004f848b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f848e: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8490: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8492: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f8497u); f_0060ee31();
    /* 004f8497: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f849a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f849c: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f849f: jmp 0x4f861a */ goto L_004f861a;
L_004f84a4:; BB(0x004f84a4);
    /* 004f84a4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f84a7: movsx eax, word ptr [edx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1dcu));
    /* 004f84ae: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f84b1: jne 0x4f8560 */ if (!fZ) goto L_004f8560;
L_004f84b7:; BB(0x004f84b7);
    /* 004f84b7: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f84bd: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f84c1: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f84c4: jne 0x4f84ee */ if (!fZ) goto L_004f84ee;
L_004f84c6:; BB(0x004f84c6);
    /* 004f84c6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f84c9: movsx esi, word ptr [edx + 0x52c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x52cu));
    /* 004f84d0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f84d2: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f84d7u); f_0060ee31();
    /* 004f84d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f84da: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f84dc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f84de: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f84e3u); f_0060ee31();
    /* 004f84e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f84e6: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f84e8: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f84ec: jmp 0x4f8545 */ goto L_004f8545;
L_004f84ee:; BB(0x004f84ee);
    /* 004f84ee: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f84f2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f84f5: jne 0x4f851f */ if (!fZ) goto L_004f851f;
L_004f84f7:; BB(0x004f84f7);
    /* 004f84f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f84fa: movsx esi, word ptr [ecx + 0x52a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x52au));
    /* 004f8501: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8503: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f8508u); f_0060ee31();
    /* 004f8508: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f850b: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f850d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f850f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f8514u); f_0060ee31();
    /* 004f8514: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8517: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f8519: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f851d: jmp 0x4f8545 */ goto L_004f8545;
L_004f851f:; BB(0x004f851f);
    /* 004f851f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8522: movsx esi, word ptr [edx + 0x528] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x528u));
    /* 004f8529: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f852b: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f8530u); f_0060ee31();
    /* 004f8530: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8533: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f8535: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8537: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f853cu); f_0060ee31();
    /* 004f853c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f853f: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f8541: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004f8545:; BB(0x004f8545);
    /* 004f8545: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f8549: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f854c: jge 0x4f8557 */ if ((fS==fO)) goto L_004f8557;
L_004f854e:; BB(0x004f854e);
    /* 004f854e: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 004f8552: jmp 0x4f861a */ goto L_004f861a;
L_004f8557:; BB(0x004f8557);
    /* 004f8557: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f855b: jmp 0x4f861a */ goto L_004f861a;
L_004f8560:; BB(0x004f8560);
    /* 004f8560: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8563: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f856a: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f856d: jne 0x4f8616 */ if (!fZ) goto L_004f8616;
L_004f8573:; BB(0x004f8573);
    /* 004f8573: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004f8579: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f857d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8580: jne 0x4f85aa */ if (!fZ) goto L_004f85aa;
L_004f8582:; BB(0x004f8582);
    /* 004f8582: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8585: movsx esi, word ptr [ecx + 0x52c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x52cu));
    /* 004f858c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f858e: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f8593u); f_0060ee31();
    /* 004f8593: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8596: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f8598: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f859a: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f859fu); f_0060ee31();
    /* 004f859f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f85a2: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f85a4: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
    /* 004f85a8: jmp 0x4f8601 */ goto L_004f8601;
L_004f85aa:; BB(0x004f85aa);
    /* 004f85aa: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f85ae: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f85b1: jne 0x4f85db */ if (!fZ) goto L_004f85db;
L_004f85b3:; BB(0x004f85b3);
    /* 004f85b3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f85b6: movsx esi, word ptr [eax + 0x52a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x52au));
    /* 004f85bd: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f85bf: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f85c4u); f_0060ee31();
    /* 004f85c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f85c7: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f85c9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f85cb: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f85d0u); f_0060ee31();
    /* 004f85d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f85d3: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f85d5: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
    /* 004f85d9: jmp 0x4f8601 */ goto L_004f8601;
L_004f85db:; BB(0x004f85db);
    /* 004f85db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f85de: movsx esi, word ptr [ecx + 0x528] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x528u));
    /* 004f85e5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f85e7: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f85ecu); f_0060ee31();
    /* 004f85ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f85ef: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f85f1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f85f3: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f85f8u); f_0060ee31();
    /* 004f85f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f85fb: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f85fd: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
L_004f8601:; BB(0x004f8601);
    /* 004f8601: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004f8605: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8608: jge 0x4f8610 */ if ((fS==fO)) goto L_004f8610;
L_004f860a:; BB(0x004f860a);
    /* 004f860a: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 004f860e: jmp 0x4f861a */ goto L_004f861a;
L_004f8610:; BB(0x004f8610);
    /* 004f8610: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004f8614: jmp 0x4f861a */ goto L_004f861a;
L_004f8616:; BB(0x004f8616);
    /* 004f8616: mov ax, 0x64 */ r_eax = (r_eax & 0xffff0000u) | ((0x64u) & 0xffffu);
L_004f861a:; BB(0x004f861a);
    /* 004f861a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f861b: mov esp, ebp */ r_esp = r_ebp;
    /* 004f861d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f861e: ret 4 */ FN_RET(0x004f83aa); r_esp += 8; return;
}

void f_004f8621(void) /* FUN_004f8621 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f8621);
    /* 004f8621: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8622: mov ebp, esp */ r_ebp = r_esp;
    /* 004f8624: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8625: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f8628: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f862b: mov ax, word ptr [eax + 0x52e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x52eu))) & 0xffffu);
    /* 004f8632: mov esp, ebp */ r_esp = r_ebp;
    /* 004f8634: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8635: ret  */ FN_RET(0x004f8621); r_esp += 4; return;
}

void f_004f8636(void) /* FUN_004f8636 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f8636);
    /* 004f8636: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8637: mov ebp, esp */ r_ebp = r_esp;
    /* 004f8639: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f863a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f863d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8640: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f8647: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8649: jne 0x4f8657 */ if (!fZ) goto L_004f8657;
L_004f864b:; BB(0x004f864b);
    /* 004f864b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f864e: mov ax, word ptr [edx + 0x530] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x530u))) & 0xffffu);
    /* 004f8655: jmp 0x4f86bc */ goto L_004f86bc;
L_004f8657:; BB(0x004f8657);
    /* 004f8657: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f865a: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f8661: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8664: jne 0x4f8674 */ if (!fZ) goto L_004f8674;
L_004f8666:; BB(0x004f8666);
    /* 004f8666: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8669: movsx eax, word ptr [edx + 0x530] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x530u));
    /* 004f8670: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004f8672: jmp 0x4f86bc */ goto L_004f86bc;
L_004f8674:; BB(0x004f8674);
    /* 004f8674: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8677: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f867e: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8681: jne 0x4f8694 */ if (!fZ) goto L_004f8694;
L_004f8683:; BB(0x004f8683);
    /* 004f8683: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8686: movsx eax, word ptr [edx + 0x530] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x530u));
    /* 004f868d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f868e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f8690: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f8692: jmp 0x4f86bc */ goto L_004f86bc;
L_004f8694:; BB(0x004f8694);
    /* 004f8694: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8697: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f869e: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f86a1: jne 0x4f86b8 */ if (!fZ) goto L_004f86b8;
L_004f86a3:; BB(0x004f86a3);
    /* 004f86a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f86a6: movsx eax, word ptr [edx + 0x530] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x530u));
    /* 004f86ad: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f86ae: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004f86b1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f86b3: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f86b6: jmp 0x4f86bc */ goto L_004f86bc;
L_004f86b8:; BB(0x004f86b8);
    /* 004f86b8: mov ax, 0x14 */ r_eax = (r_eax & 0xffff0000u) | ((0x14u) & 0xffffu);
L_004f86bc:; BB(0x004f86bc);
    /* 004f86bc: mov esp, ebp */ r_esp = r_ebp;
    /* 004f86be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f86bf: ret  */ FN_RET(0x004f8636); r_esp += 4; return;
}

void f_004f86c0(void) /* FUN_004f86c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f86c0);
    /* 004f86c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f86c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f86c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f86c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f86c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f86ca: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f86d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f86d3: jne 0x4f86e1 */ if (!fZ) goto L_004f86e1;
L_004f86d5:; BB(0x004f86d5);
    /* 004f86d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f86d8: mov ax, word ptr [edx + 0x542] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x542u))) & 0xffffu);
    /* 004f86df: jmp 0x4f873e */ goto L_004f873e;
L_004f86e1:; BB(0x004f86e1);
    /* 004f86e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f86e4: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f86eb: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f86ee: jne 0x4f86ff */ if (!fZ) goto L_004f86ff;
L_004f86f0:; BB(0x004f86f0);
    /* 004f86f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f86f3: movsx eax, word ptr [edx + 0x542] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x542u));
    /* 004f86fa: sub eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f86fd: jmp 0x4f873e */ goto L_004f873e;
L_004f86ff:; BB(0x004f86ff);
    /* 004f86ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8702: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f8709: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f870c: jne 0x4f871d */ if (!fZ) goto L_004f871d;
L_004f870e:; BB(0x004f870e);
    /* 004f870e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8711: movsx eax, word ptr [edx + 0x542] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x542u));
    /* 004f8718: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f871b: jmp 0x4f873e */ goto L_004f873e;
L_004f871d:; BB(0x004f871d);
    /* 004f871d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8720: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f8727: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f872a: jne 0x4f873b */ if (!fZ) goto L_004f873b;
L_004f872c:; BB(0x004f872c);
    /* 004f872c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f872f: movsx eax, word ptr [edx + 0x542] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x542u));
    /* 004f8736: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f8739: jmp 0x4f873e */ goto L_004f873e;
L_004f873b:; BB(0x004f873b);
    /* 004f873b: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004f873e:; BB(0x004f873e);
    /* 004f873e: mov esp, ebp */ r_esp = r_ebp;
    /* 004f8740: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8741: ret  */ FN_RET(0x004f86c0); r_esp += 4; return;
}

void f_004f8742(void) /* FUN_004f8742 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f8742);
    /* 004f8742: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8743: mov ebp, esp */ r_ebp = r_esp;
    /* 004f8745: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8746: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f8749: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f874c: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f8753: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8755: jne 0x4f8763 */ if (!fZ) goto L_004f8763;
L_004f8757:; BB(0x004f8757);
    /* 004f8757: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f875a: mov ax, word ptr [edx + 0x544] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x544u))) & 0xffffu);
    /* 004f8761: jmp 0x4f87c0 */ goto L_004f87c0;
L_004f8763:; BB(0x004f8763);
    /* 004f8763: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8766: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f876d: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8770: jne 0x4f8781 */ if (!fZ) goto L_004f8781;
L_004f8772:; BB(0x004f8772);
    /* 004f8772: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8775: movsx eax, word ptr [edx + 0x544] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x544u));
    /* 004f877c: sub eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f877f: jmp 0x4f87c0 */ goto L_004f87c0;
L_004f8781:; BB(0x004f8781);
    /* 004f8781: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8784: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f878b: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f878e: jne 0x4f879f */ if (!fZ) goto L_004f879f;
L_004f8790:; BB(0x004f8790);
    /* 004f8790: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8793: movsx eax, word ptr [edx + 0x544] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x544u));
    /* 004f879a: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f879d: jmp 0x4f87c0 */ goto L_004f87c0;
L_004f879f:; BB(0x004f879f);
    /* 004f879f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f87a2: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f87a9: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f87ac: jne 0x4f87bd */ if (!fZ) goto L_004f87bd;
L_004f87ae:; BB(0x004f87ae);
    /* 004f87ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f87b1: movsx eax, word ptr [edx + 0x544] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x544u));
    /* 004f87b8: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f87bb: jmp 0x4f87c0 */ goto L_004f87c0;
L_004f87bd:; BB(0x004f87bd);
    /* 004f87bd: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004f87c0:; BB(0x004f87c0);
    /* 004f87c0: mov esp, ebp */ r_esp = r_ebp;
    /* 004f87c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f87c3: ret  */ FN_RET(0x004f8742); r_esp += 4; return;
}

void f_004f87c4(void) /* FUN_004f87c4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f87c4);
    /* 004f87c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f87c5: mov ebp, esp */ r_ebp = r_esp;
    /* 004f87c7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f87ca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f87cd: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f87d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f87d3: jne 0x4f87e6 */ if (!fZ) goto L_004f87e6;
L_004f87d5:; BB(0x004f87d5);
    /* 004f87d5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f87d7: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f87dcu); f_0060ee31();
    /* 004f87dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f87df: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f87e2: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_004f87e6:; BB(0x004f87e6);
    /* 004f87e6: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f87ea: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f87ed: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f87f0: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f87f3: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004f87f6: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f87fa: ja 0x4f9287 */ if ((!fC&&!fZ)) goto L_004f9287;
L_004f8800:; BB(0x004f8800);
    /* 004f8800: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8803: jmp dword ptr [eax*4 + 0x4f928d] */ { u32 t = R32((u32)(r_eax*4+0x4f928du)); switch (t) { case 0x4f880au: goto L_004f880a; case 0x4f8917u: goto L_004f8917; case 0x4f8a24u: goto L_004f8a24; case 0x4f8b31u: goto L_004f8b31; case 0x4f8c3eu: goto L_004f8c3e; case 0x4f8d4bu: goto L_004f8d4b; case 0x4f8e58u: goto L_004f8e58; case 0x4f8f65u: goto L_004f8f65; case 0x4f9072u: goto L_004f9072; case 0x4f917fu: goto L_004f917f; default: UNSUP(0x004f8803, "jump table entry is not a known target"); } }
L_004f880a:; BB(0x004f880a);
    /* 004f880a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f880d: mov word ptr [ecx + 0x546], 5 */ W16((u32)(r_ecx+0x546u), 0x5u);
    /* 004f8816: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8819: mov word ptr [edx + 0x548], 0x1e */ W16((u32)(r_edx+0x548u), 0x1eu);
    /* 004f8822: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8825: mov word ptr [eax + 0x54a], 0x32 */ W16((u32)(r_eax+0x54au), 0x32u);
    /* 004f882e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8831: mov word ptr [ecx + 0x54c], 0x19 */ W16((u32)(r_ecx+0x54cu), 0x19u);
    /* 004f883a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f883d: mov word ptr [edx + 0x54e], 0x3c */ W16((u32)(r_edx+0x54eu), 0x3cu);
    /* 004f8846: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8849: mov word ptr [eax + 0x550], 0x1e */ W16((u32)(r_eax+0x550u), 0x1eu);
    /* 004f8852: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8855: mov word ptr [ecx + 0x552], 0x4b */ W16((u32)(r_ecx+0x552u), 0x4bu);
    /* 004f885e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8861: mov word ptr [edx + 0x554], 0x28 */ W16((u32)(r_edx+0x554u), 0x28u);
    /* 004f886a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f886d: mov word ptr [eax + 0x556], 0x14 */ W16((u32)(r_eax+0x556u), 0x14u);
    /* 004f8876: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8879: mov word ptr [ecx + 0x558], 0x28 */ W16((u32)(r_ecx+0x558u), 0x28u);
    /* 004f8882: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8885: mov word ptr [edx + 0x55a], 0x14 */ W16((u32)(r_edx+0x55au), 0x14u);
    /* 004f888e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8891: mov word ptr [eax + 0x55c], 5 */ W16((u32)(r_eax+0x55cu), 0x5u);
    /* 004f889a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f889d: mov word ptr [ecx + 0x55e], 0x1e */ W16((u32)(r_ecx+0x55eu), 0x1eu);
    /* 004f88a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f88a9: mov word ptr [edx + 0x562], 0x4b */ W16((u32)(r_edx+0x562u), 0x4bu);
    /* 004f88b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f88b5: mov word ptr [eax + 0x564], 0x32 */ W16((u32)(r_eax+0x564u), 0x32u);
    /* 004f88be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f88c1: mov word ptr [ecx + 0x566], 0x19 */ W16((u32)(r_ecx+0x566u), 0x19u);
    /* 004f88ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f88cd: mov word ptr [edx + 0x568], 0x46 */ W16((u32)(r_edx+0x568u), 0x46u);
    /* 004f88d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f88d9: mov word ptr [eax + 0x56a], 0x3c */ W16((u32)(r_eax+0x56au), 0x3cu);
    /* 004f88e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f88e5: mov word ptr [ecx + 0x560], 5 */ W16((u32)(r_ecx+0x560u), 0x5u);
    /* 004f88ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f88f1: mov word ptr [edx + 0x56c], 6 */ W16((u32)(r_edx+0x56cu), 0x6u);
    /* 004f88fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f88fd: mov word ptr [eax + 0x56e], 0x1e */ W16((u32)(r_eax+0x56eu), 0x1eu);
    /* 004f8906: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8909: mov word ptr [ecx + 0x570], 0x1e */ W16((u32)(r_ecx+0x570u), 0x1eu);
    /* 004f8912: jmp 0x4f9287 */ goto L_004f9287;
L_004f8917:; BB(0x004f8917);
    /* 004f8917: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f891a: mov word ptr [edx + 0x546], 2 */ W16((u32)(r_edx+0x546u), 0x2u);
    /* 004f8923: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8926: mov word ptr [eax + 0x548], 0x32 */ W16((u32)(r_eax+0x548u), 0x32u);
    /* 004f892f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8932: mov word ptr [ecx + 0x54a], 0x46 */ W16((u32)(r_ecx+0x54au), 0x46u);
    /* 004f893b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f893e: mov word ptr [edx + 0x54c], 0x32 */ W16((u32)(r_edx+0x54cu), 0x32u);
    /* 004f8947: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f894a: mov word ptr [eax + 0x54e], 0x69 */ W16((u32)(r_eax+0x54eu), 0x69u);
    /* 004f8953: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8956: mov word ptr [ecx + 0x550], 0x2c */ W16((u32)(r_ecx+0x550u), 0x2cu);
    /* 004f895f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8962: mov word ptr [edx + 0x552], 0x96 */ W16((u32)(r_edx+0x552u), 0x96u);
    /* 004f896b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f896e: mov word ptr [eax + 0x554], 0x3c */ W16((u32)(r_eax+0x554u), 0x3cu);
    /* 004f8977: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f897a: mov word ptr [ecx + 0x556], 8 */ W16((u32)(r_ecx+0x556u), 0x8u);
    /* 004f8983: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8986: mov word ptr [edx + 0x570], 0x12 */ W16((u32)(r_edx+0x570u), 0x12u);
    /* 004f898f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8992: mov word ptr [eax + 0x558], 0x2d */ W16((u32)(r_eax+0x558u), 0x2du);
    /* 004f899b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f899e: mov word ptr [ecx + 0x55a], 0x17 */ W16((u32)(r_ecx+0x55au), 0x17u);
    /* 004f89a7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f89aa: mov word ptr [edx + 0x55c], 0x11 */ W16((u32)(r_edx+0x55cu), 0x11u);
    /* 004f89b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f89b6: mov word ptr [eax + 0x55e], 0x19 */ W16((u32)(r_eax+0x55eu), 0x19u);
    /* 004f89bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f89c2: mov word ptr [ecx + 0x560], 8 */ W16((u32)(r_ecx+0x560u), 0x8u);
    /* 004f89cb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f89ce: mov word ptr [edx + 0x562], 0x5a */ W16((u32)(r_edx+0x562u), 0x5au);
    /* 004f89d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f89da: mov word ptr [eax + 0x564], 0x32 */ W16((u32)(r_eax+0x564u), 0x32u);
    /* 004f89e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f89e6: mov word ptr [ecx + 0x566], 0x1e */ W16((u32)(r_ecx+0x566u), 0x1eu);
    /* 004f89ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f89f2: mov word ptr [edx + 0x568], 0x55 */ W16((u32)(r_edx+0x568u), 0x55u);
    /* 004f89fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f89fe: mov word ptr [eax + 0x56a], 0x50 */ W16((u32)(r_eax+0x56au), 0x50u);
    /* 004f8a07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8a0a: mov word ptr [ecx + 0x56c], 3 */ W16((u32)(r_ecx+0x56cu), 0x3u);
    /* 004f8a13: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8a16: mov word ptr [edx + 0x56e], 0x46 */ W16((u32)(r_edx+0x56eu), 0x46u);
    /* 004f8a1f: jmp 0x4f9287 */ goto L_004f9287;
L_004f8a24:; BB(0x004f8a24);
    /* 004f8a24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8a27: mov word ptr [eax + 0x546], 8 */ W16((u32)(r_eax+0x546u), 0x8u);
    /* 004f8a30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8a33: mov word ptr [ecx + 0x548], 0x19 */ W16((u32)(r_ecx+0x548u), 0x19u);
    /* 004f8a3c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8a3f: mov word ptr [edx + 0x54a], 0x28 */ W16((u32)(r_edx+0x54au), 0x28u);
    /* 004f8a48: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8a4b: mov word ptr [eax + 0x54c], 0xf */ W16((u32)(r_eax+0x54cu), 0xfu);
    /* 004f8a54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8a57: mov word ptr [ecx + 0x54e], 0x2d */ W16((u32)(r_ecx+0x54eu), 0x2du);
    /* 004f8a60: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8a63: mov word ptr [edx + 0x550], 0x12 */ W16((u32)(r_edx+0x550u), 0x12u);
    /* 004f8a6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8a6f: mov word ptr [eax + 0x552], 0x3c */ W16((u32)(r_eax+0x552u), 0x3cu);
    /* 004f8a78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8a7b: mov word ptr [ecx + 0x554], 0x1c */ W16((u32)(r_ecx+0x554u), 0x1cu);
    /* 004f8a84: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8a87: mov word ptr [edx + 0x556], 0xf */ W16((u32)(r_edx+0x556u), 0xfu);
    /* 004f8a90: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8a93: mov word ptr [eax + 0x558], 0x1e */ W16((u32)(r_eax+0x558u), 0x1eu);
    /* 004f8a9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8a9f: mov word ptr [ecx + 0x55a], 0xf */ W16((u32)(r_ecx+0x55au), 0xfu);
    /* 004f8aa8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8aab: mov word ptr [edx + 0x55c], 4 */ W16((u32)(r_edx+0x55cu), 0x4u);
    /* 004f8ab4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8ab7: mov word ptr [eax + 0x55e], 0x28 */ W16((u32)(r_eax+0x55eu), 0x28u);
    /* 004f8ac0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8ac3: mov word ptr [ecx + 0x560], 2 */ W16((u32)(r_ecx+0x560u), 0x2u);
    /* 004f8acc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8acf: mov word ptr [edx + 0x562], 0x5a */ W16((u32)(r_edx+0x562u), 0x5au);
    /* 004f8ad8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8adb: mov word ptr [eax + 0x564], 0x3c */ W16((u32)(r_eax+0x564u), 0x3cu);
    /* 004f8ae4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8ae7: mov word ptr [ecx + 0x566], 0x1e */ W16((u32)(r_ecx+0x566u), 0x1eu);
    /* 004f8af0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8af3: mov word ptr [edx + 0x568], 0x32 */ W16((u32)(r_edx+0x568u), 0x32u);
    /* 004f8afc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8aff: mov word ptr [eax + 0x56a], 0x32 */ W16((u32)(r_eax+0x56au), 0x32u);
    /* 004f8b08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8b0b: mov word ptr [ecx + 0x56c], 0xc */ W16((u32)(r_ecx+0x56cu), 0xcu);
    /* 004f8b14: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8b17: mov word ptr [edx + 0x56e], 0x14 */ W16((u32)(r_edx+0x56eu), 0x14u);
    /* 004f8b20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8b23: mov word ptr [eax + 0x570], 0x2d */ W16((u32)(r_eax+0x570u), 0x2du);
    /* 004f8b2c: jmp 0x4f9287 */ goto L_004f9287;
L_004f8b31:; BB(0x004f8b31);
    /* 004f8b31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8b34: mov word ptr [ecx + 0x546], 0xa */ W16((u32)(r_ecx+0x546u), 0xau);
    /* 004f8b3d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8b40: mov word ptr [edx + 0x548], 0x1c */ W16((u32)(r_edx+0x548u), 0x1cu);
    /* 004f8b49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8b4c: mov word ptr [eax + 0x54a], 0x23 */ W16((u32)(r_eax+0x54au), 0x23u);
    /* 004f8b55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8b58: mov word ptr [ecx + 0x54c], 0x14 */ W16((u32)(r_ecx+0x54cu), 0x14u);
    /* 004f8b61: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8b64: mov word ptr [edx + 0x54e], 0x37 */ W16((u32)(r_edx+0x54eu), 0x37u);
    /* 004f8b6d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8b70: mov word ptr [eax + 0x550], 0x18 */ W16((u32)(r_eax+0x550u), 0x18u);
    /* 004f8b79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8b7c: mov word ptr [ecx + 0x552], 0x50 */ W16((u32)(r_ecx+0x552u), 0x50u);
    /* 004f8b85: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8b88: mov word ptr [edx + 0x554], 0x22 */ W16((u32)(r_edx+0x554u), 0x22u);
    /* 004f8b91: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8b94: mov word ptr [eax + 0x556], 0xe */ W16((u32)(r_eax+0x556u), 0xeu);
    /* 004f8b9d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8ba0: mov word ptr [ecx + 0x558], 0x26 */ W16((u32)(r_ecx+0x558u), 0x26u);
    /* 004f8ba9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8bac: mov word ptr [edx + 0x55a], 0x15 */ W16((u32)(r_edx+0x55au), 0x15u);
    /* 004f8bb5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8bb8: mov word ptr [eax + 0x55c], 5 */ W16((u32)(r_eax+0x55cu), 0x5u);
    /* 004f8bc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8bc4: mov word ptr [ecx + 0x55e], 0x23 */ W16((u32)(r_ecx+0x55eu), 0x23u);
    /* 004f8bcd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8bd0: mov word ptr [edx + 0x560], 4 */ W16((u32)(r_edx+0x560u), 0x4u);
    /* 004f8bd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8bdc: mov word ptr [eax + 0x562], 0x50 */ W16((u32)(r_eax+0x562u), 0x50u);
    /* 004f8be5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8be8: mov word ptr [ecx + 0x564], 0x3c */ W16((u32)(r_ecx+0x564u), 0x3cu);
    /* 004f8bf1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8bf4: mov word ptr [edx + 0x566], 0x28 */ W16((u32)(r_edx+0x566u), 0x28u);
    /* 004f8bfd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8c00: mov word ptr [eax + 0x568], 0x3c */ W16((u32)(r_eax+0x568u), 0x3cu);
    /* 004f8c09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8c0c: mov word ptr [ecx + 0x56a], 0x3c */ W16((u32)(r_ecx+0x56au), 0x3cu);
    /* 004f8c15: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8c18: mov word ptr [edx + 0x56c], 0xa */ W16((u32)(r_edx+0x56cu), 0xau);
    /* 004f8c21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8c24: mov word ptr [eax + 0x56e], 0x1e */ W16((u32)(r_eax+0x56eu), 0x1eu);
    /* 004f8c2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8c30: mov word ptr [ecx + 0x570], 0x23 */ W16((u32)(r_ecx+0x570u), 0x23u);
    /* 004f8c39: jmp 0x4f9287 */ goto L_004f9287;
L_004f8c3e:; BB(0x004f8c3e);
    /* 004f8c3e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8c41: mov word ptr [edx + 0x546], 7 */ W16((u32)(r_edx+0x546u), 0x7u);
    /* 004f8c4a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8c4d: mov word ptr [eax + 0x548], 0x23 */ W16((u32)(r_eax+0x548u), 0x23u);
    /* 004f8c56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8c59: mov word ptr [ecx + 0x54a], 0x2d */ W16((u32)(r_ecx+0x54au), 0x2du);
    /* 004f8c62: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8c65: mov word ptr [edx + 0x54c], 0x23 */ W16((u32)(r_edx+0x54cu), 0x23u);
    /* 004f8c6e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8c71: mov word ptr [eax + 0x54e], 0x46 */ W16((u32)(r_eax+0x54eu), 0x46u);
    /* 004f8c7a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8c7d: mov word ptr [ecx + 0x550], 0x22 */ W16((u32)(r_ecx+0x550u), 0x22u);
    /* 004f8c86: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8c89: mov word ptr [edx + 0x552], 0x69 */ W16((u32)(r_edx+0x552u), 0x69u);
    /* 004f8c92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8c95: mov word ptr [eax + 0x554], 0x30 */ W16((u32)(r_eax+0x554u), 0x30u);
    /* 004f8c9e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8ca1: mov word ptr [ecx + 0x556], 0x23 */ W16((u32)(r_ecx+0x556u), 0x23u);
    /* 004f8caa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8cad: mov word ptr [edx + 0x558], 0x23 */ W16((u32)(r_edx+0x558u), 0x23u);
    /* 004f8cb6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8cb9: mov word ptr [eax + 0x55a], 0x1b */ W16((u32)(r_eax+0x55au), 0x1bu);
    /* 004f8cc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8cc5: mov word ptr [ecx + 0x55c], 7 */ W16((u32)(r_ecx+0x55cu), 0x7u);
    /* 004f8cce: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8cd1: mov word ptr [edx + 0x55e], 0x19 */ W16((u32)(r_edx+0x55eu), 0x19u);
    /* 004f8cda: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8cdd: mov word ptr [eax + 0x560], 6 */ W16((u32)(r_eax+0x560u), 0x6u);
    /* 004f8ce6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8ce9: mov word ptr [ecx + 0x562], 0x5a */ W16((u32)(r_ecx+0x562u), 0x5au);
    /* 004f8cf2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8cf5: mov word ptr [edx + 0x564], 0x28 */ W16((u32)(r_edx+0x564u), 0x28u);
    /* 004f8cfe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8d01: mov word ptr [eax + 0x566], 0x14 */ W16((u32)(r_eax+0x566u), 0x14u);
    /* 004f8d0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8d0d: mov word ptr [ecx + 0x568], 0x37 */ W16((u32)(r_ecx+0x568u), 0x37u);
    /* 004f8d16: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8d19: mov word ptr [edx + 0x56a], 0x46 */ W16((u32)(r_edx+0x56au), 0x46u);
    /* 004f8d22: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8d25: mov word ptr [eax + 0x56c], 4 */ W16((u32)(r_eax+0x56cu), 0x4u);
    /* 004f8d2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8d31: mov word ptr [ecx + 0x56e], 0x28 */ W16((u32)(r_ecx+0x56eu), 0x28u);
    /* 004f8d3a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8d3d: mov word ptr [edx + 0x570], 0x19 */ W16((u32)(r_edx+0x570u), 0x19u);
    /* 004f8d46: jmp 0x4f9287 */ goto L_004f9287;
L_004f8d4b:; BB(0x004f8d4b);
    /* 004f8d4b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8d4e: mov word ptr [eax + 0x546], 0 */ W16((u32)(r_eax+0x546u), 0x0u);
    /* 004f8d57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8d5a: mov word ptr [ecx + 0x548], 0x28 */ W16((u32)(r_ecx+0x548u), 0x28u);
    /* 004f8d63: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8d66: mov word ptr [edx + 0x54a], 0x41 */ W16((u32)(r_edx+0x54au), 0x41u);
    /* 004f8d6f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8d72: mov word ptr [eax + 0x54c], 0x64 */ W16((u32)(r_eax+0x54cu), 0x64u);
    /* 004f8d7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8d7e: mov word ptr [ecx + 0x54e], 0x69 */ W16((u32)(r_ecx+0x54eu), 0x69u);
    /* 004f8d87: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8d8a: mov word ptr [edx + 0x550], 0x36 */ W16((u32)(r_edx+0x550u), 0x36u);
    /* 004f8d93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8d96: mov word ptr [eax + 0x552], 0x96 */ W16((u32)(r_eax+0x552u), 0x96u);
    /* 004f8d9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8da2: mov word ptr [ecx + 0x554], 0x46 */ W16((u32)(r_ecx+0x554u), 0x46u);
    /* 004f8dab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8dae: mov word ptr [edx + 0x556], 0x1e */ W16((u32)(r_edx+0x556u), 0x1eu);
    /* 004f8db7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8dba: mov word ptr [eax + 0x558], 0x2e */ W16((u32)(r_eax+0x558u), 0x2eu);
    /* 004f8dc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8dc6: mov word ptr [ecx + 0x55a], 0x1e */ W16((u32)(r_ecx+0x55au), 0x1eu);
    /* 004f8dcf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8dd2: mov word ptr [edx + 0x55c], 0xf */ W16((u32)(r_edx+0x55cu), 0xfu);
    /* 004f8ddb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8dde: mov word ptr [eax + 0x55e], 5 */ W16((u32)(r_eax+0x55eu), 0x5u);
    /* 004f8de7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8dea: mov word ptr [ecx + 0x560], 8 */ W16((u32)(r_ecx+0x560u), 0x8u);
    /* 004f8df3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8df6: mov word ptr [edx + 0x562], 0x41 */ W16((u32)(r_edx+0x562u), 0x41u);
    /* 004f8dff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8e02: mov word ptr [eax + 0x564], 0x23 */ W16((u32)(r_eax+0x564u), 0x23u);
    /* 004f8e0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8e0e: mov word ptr [ecx + 0x566], 0xf */ W16((u32)(r_ecx+0x566u), 0xfu);
    /* 004f8e17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8e1a: mov word ptr [edx + 0x568], 0x4b */ W16((u32)(r_edx+0x568u), 0x4bu);
    /* 004f8e23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8e26: mov word ptr [eax + 0x56a], 0x4b */ W16((u32)(r_eax+0x56au), 0x4bu);
    /* 004f8e2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8e32: mov word ptr [ecx + 0x56c], 2 */ W16((u32)(r_ecx+0x56cu), 0x2u);
    /* 004f8e3b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8e3e: mov word ptr [edx + 0x56e], 0x50 */ W16((u32)(r_edx+0x56eu), 0x50u);
    /* 004f8e47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8e4a: mov word ptr [eax + 0x570], 0xc */ W16((u32)(r_eax+0x570u), 0xcu);
    /* 004f8e53: jmp 0x4f9287 */ goto L_004f9287;
L_004f8e58:; BB(0x004f8e58);
    /* 004f8e58: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8e5b: mov word ptr [ecx + 0x546], 3 */ W16((u32)(r_ecx+0x546u), 0x3u);
    /* 004f8e64: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8e67: mov word ptr [edx + 0x548], 0x1e */ W16((u32)(r_edx+0x548u), 0x1eu);
    /* 004f8e70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8e73: mov word ptr [eax + 0x54a], 0x23 */ W16((u32)(r_eax+0x54au), 0x23u);
    /* 004f8e7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8e7f: mov word ptr [ecx + 0x54c], 0x19 */ W16((u32)(r_ecx+0x54cu), 0x19u);
    /* 004f8e88: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8e8b: mov word ptr [edx + 0x54e], 0x37 */ W16((u32)(r_edx+0x54eu), 0x37u);
    /* 004f8e94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8e97: mov word ptr [eax + 0x550], 0x10 */ W16((u32)(r_eax+0x550u), 0x10u);
    /* 004f8ea0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8ea3: mov word ptr [ecx + 0x552], 0x4b */ W16((u32)(r_ecx+0x552u), 0x4bu);
    /* 004f8eac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8eaf: mov word ptr [edx + 0x554], 0x16 */ W16((u32)(r_edx+0x554u), 0x16u);
    /* 004f8eb8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8ebb: mov word ptr [eax + 0x556], 0x32 */ W16((u32)(r_eax+0x556u), 0x32u);
    /* 004f8ec4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8ec7: mov word ptr [ecx + 0x558], 0x2b */ W16((u32)(r_ecx+0x558u), 0x2bu);
    /* 004f8ed0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8ed3: mov word ptr [edx + 0x55a], 0x17 */ W16((u32)(r_edx+0x55au), 0x17u);
    /* 004f8edc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8edf: mov word ptr [eax + 0x55c], 0xc */ W16((u32)(r_eax+0x55cu), 0xcu);
    /* 004f8ee8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8eeb: mov word ptr [ecx + 0x55e], 0x28 */ W16((u32)(r_ecx+0x55eu), 0x28u);
    /* 004f8ef4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8ef7: mov word ptr [edx + 0x560], 2 */ W16((u32)(r_edx+0x560u), 0x2u);
    /* 004f8f00: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8f03: mov word ptr [eax + 0x562], 0x3c */ W16((u32)(r_eax+0x562u), 0x3cu);
    /* 004f8f0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8f0f: mov word ptr [ecx + 0x564], 0x28 */ W16((u32)(r_ecx+0x564u), 0x28u);
    /* 004f8f18: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8f1b: mov word ptr [edx + 0x566], 0x14 */ W16((u32)(r_edx+0x566u), 0x14u);
    /* 004f8f24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8f27: mov word ptr [eax + 0x568], 0x3c */ W16((u32)(r_eax+0x568u), 0x3cu);
    /* 004f8f30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8f33: mov word ptr [ecx + 0x56a], 0x28 */ W16((u32)(r_ecx+0x56au), 0x28u);
    /* 004f8f3c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8f3f: mov word ptr [edx + 0x56c], 4 */ W16((u32)(r_edx+0x56cu), 0x4u);
    /* 004f8f48: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8f4b: mov word ptr [eax + 0x56e], 0x41 */ W16((u32)(r_eax+0x56eu), 0x41u);
    /* 004f8f54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8f57: mov word ptr [ecx + 0x570], 0x14 */ W16((u32)(r_ecx+0x570u), 0x14u);
    /* 004f8f60: jmp 0x4f9287 */ goto L_004f9287;
L_004f8f65:; BB(0x004f8f65);
    /* 004f8f65: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8f68: mov word ptr [edx + 0x546], 5 */ W16((u32)(r_edx+0x546u), 0x5u);
    /* 004f8f71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8f74: mov word ptr [eax + 0x548], 0x1c */ W16((u32)(r_eax+0x548u), 0x1cu);
    /* 004f8f7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8f80: mov word ptr [ecx + 0x54a], 0x2e */ W16((u32)(r_ecx+0x54au), 0x2eu);
    /* 004f8f89: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8f8c: mov word ptr [edx + 0x54c], 0x16 */ W16((u32)(r_edx+0x54cu), 0x16u);
    /* 004f8f95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8f98: mov word ptr [eax + 0x54e], 0x4b */ W16((u32)(r_eax+0x54eu), 0x4bu);
    /* 004f8fa1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8fa4: mov word ptr [ecx + 0x550], 0x22 */ W16((u32)(r_ecx+0x550u), 0x22u);
    /* 004f8fad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8fb0: mov word ptr [edx + 0x552], 0x69 */ W16((u32)(r_edx+0x552u), 0x69u);
    /* 004f8fb9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8fbc: mov word ptr [eax + 0x554], 0x2c */ W16((u32)(r_eax+0x554u), 0x2cu);
    /* 004f8fc5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8fc8: mov word ptr [ecx + 0x556], 0x14 */ W16((u32)(r_ecx+0x556u), 0x14u);
    /* 004f8fd1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8fd4: mov word ptr [edx + 0x558], 0x29 */ W16((u32)(r_edx+0x558u), 0x29u);
    /* 004f8fdd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8fe0: mov word ptr [eax + 0x55a], 0x17 */ W16((u32)(r_eax+0x55au), 0x17u);
    /* 004f8fe9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8fec: mov word ptr [ecx + 0x55c], 6 */ W16((u32)(r_ecx+0x55cu), 0x6u);
    /* 004f8ff5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f8ff8: mov word ptr [edx + 0x55e], 0x1e */ W16((u32)(r_edx+0x55eu), 0x1eu);
    /* 004f9001: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9004: mov word ptr [eax + 0x562], 0x4b */ W16((u32)(r_eax+0x562u), 0x4bu);
    /* 004f900d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9010: mov word ptr [ecx + 0x564], 0x32 */ W16((u32)(r_ecx+0x564u), 0x32u);
    /* 004f9019: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f901c: mov word ptr [edx + 0x566], 0x1e */ W16((u32)(r_edx+0x566u), 0x1eu);
    /* 004f9025: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9028: mov word ptr [eax + 0x568], 0x41 */ W16((u32)(r_eax+0x568u), 0x41u);
    /* 004f9031: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9034: mov word ptr [ecx + 0x56a], 0x32 */ W16((u32)(r_ecx+0x56au), 0x32u);
    /* 004f903d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9040: mov word ptr [edx + 0x560], 5 */ W16((u32)(r_edx+0x560u), 0x5u);
    /* 004f9049: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f904c: mov word ptr [eax + 0x56c], 0xc */ W16((u32)(r_eax+0x56cu), 0xcu);
    /* 004f9055: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9058: mov word ptr [ecx + 0x56e], 0xf */ W16((u32)(r_ecx+0x56eu), 0xfu);
    /* 004f9061: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9064: mov word ptr [edx + 0x570], 0x28 */ W16((u32)(r_edx+0x570u), 0x28u);
    /* 004f906d: jmp 0x4f9287 */ goto L_004f9287;
L_004f9072:; BB(0x004f9072);
    /* 004f9072: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9075: mov word ptr [eax + 0x546], 8 */ W16((u32)(r_eax+0x546u), 0x8u);
    /* 004f907e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9081: mov word ptr [ecx + 0x548], 0x1e */ W16((u32)(r_ecx+0x548u), 0x1eu);
    /* 004f908a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f908d: mov word ptr [edx + 0x54a], 0x32 */ W16((u32)(r_edx+0x54au), 0x32u);
    /* 004f9096: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9099: mov word ptr [eax + 0x54c], 0x19 */ W16((u32)(r_eax+0x54cu), 0x19u);
    /* 004f90a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f90a5: mov word ptr [ecx + 0x54e], 0x2d */ W16((u32)(r_ecx+0x54eu), 0x2du);
    /* 004f90ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f90b1: mov word ptr [edx + 0x550], 0x14 */ W16((u32)(r_edx+0x550u), 0x14u);
    /* 004f90ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f90bd: mov word ptr [eax + 0x552], 0x3c */ W16((u32)(r_eax+0x552u), 0x3cu);
    /* 004f90c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f90c9: mov word ptr [ecx + 0x554], 0x20 */ W16((u32)(r_ecx+0x554u), 0x20u);
    /* 004f90d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f90d5: mov word ptr [edx + 0x556], 0x14 */ W16((u32)(r_edx+0x556u), 0x14u);
    /* 004f90de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f90e1: mov word ptr [eax + 0x558], 0x29 */ W16((u32)(r_eax+0x558u), 0x29u);
    /* 004f90ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f90ed: mov word ptr [ecx + 0x55a], 0x1a */ W16((u32)(r_ecx+0x55au), 0x1au);
    /* 004f90f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f90f9: mov word ptr [edx + 0x55c], 8 */ W16((u32)(r_edx+0x55cu), 0x8u);
    /* 004f9102: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9105: mov word ptr [eax + 0x55e], 0x1e */ W16((u32)(r_eax+0x55eu), 0x1eu);
    /* 004f910e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9111: mov word ptr [ecx + 0x562], 0x4b */ W16((u32)(r_ecx+0x562u), 0x4bu);
    /* 004f911a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f911d: mov word ptr [edx + 0x564], 0x32 */ W16((u32)(r_edx+0x564u), 0x32u);
    /* 004f9126: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9129: mov word ptr [eax + 0x566], 0x23 */ W16((u32)(r_eax+0x566u), 0x23u);
    /* 004f9132: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9135: mov word ptr [ecx + 0x568], 0x3c */ W16((u32)(r_ecx+0x568u), 0x3cu);
    /* 004f913e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9141: mov word ptr [edx + 0x56a], 0x28 */ W16((u32)(r_edx+0x56au), 0x28u);
    /* 004f914a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f914d: mov word ptr [eax + 0x560], 5 */ W16((u32)(r_eax+0x560u), 0x5u);
    /* 004f9156: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9159: mov word ptr [ecx + 0x56c], 6 */ W16((u32)(r_ecx+0x56cu), 0x6u);
    /* 004f9162: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9165: mov word ptr [edx + 0x56e], 0x1e */ W16((u32)(r_edx+0x56eu), 0x1eu);
    /* 004f916e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9171: mov word ptr [eax + 0x570], 0x19 */ W16((u32)(r_eax+0x570u), 0x19u);
    /* 004f917a: jmp 0x4f9287 */ goto L_004f9287;
L_004f917f:; BB(0x004f917f);
    /* 004f917f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9182: mov word ptr [ecx + 0x546], 7 */ W16((u32)(r_ecx+0x546u), 0x7u);
    /* 004f918b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f918e: mov word ptr [edx + 0x548], 0x19 */ W16((u32)(r_edx+0x548u), 0x19u);
    /* 004f9197: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f919a: mov word ptr [eax + 0x54a], 0x28 */ W16((u32)(r_eax+0x54au), 0x28u);
    /* 004f91a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f91a6: mov word ptr [ecx + 0x54c], 0x12 */ W16((u32)(r_ecx+0x54cu), 0x12u);
    /* 004f91af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f91b2: mov word ptr [edx + 0x54e], 0x32 */ W16((u32)(r_edx+0x54eu), 0x32u);
    /* 004f91bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f91be: mov word ptr [eax + 0x550], 0x16 */ W16((u32)(r_eax+0x550u), 0x16u);
    /* 004f91c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f91ca: mov word ptr [ecx + 0x552], 0x4b */ W16((u32)(r_ecx+0x552u), 0x4bu);
    /* 004f91d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f91d6: mov word ptr [edx + 0x554], 0x1e */ W16((u32)(r_edx+0x554u), 0x1eu);
    /* 004f91df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f91e2: mov word ptr [eax + 0x556], 0x11 */ W16((u32)(r_eax+0x556u), 0x11u);
    /* 004f91eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f91ee: mov word ptr [ecx + 0x558], 0x20 */ W16((u32)(r_ecx+0x558u), 0x20u);
    /* 004f91f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f91fa: mov word ptr [edx + 0x55a], 0x15 */ W16((u32)(r_edx+0x55au), 0x15u);
    /* 004f9203: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9206: mov word ptr [eax + 0x55c], 5 */ W16((u32)(r_eax+0x55cu), 0x5u);
    /* 004f920f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9212: mov word ptr [ecx + 0x55e], 0x28 */ W16((u32)(r_ecx+0x55eu), 0x28u);
    /* 004f921b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f921e: mov word ptr [edx + 0x560], 3 */ W16((u32)(r_edx+0x560u), 0x3u);
    /* 004f9227: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f922a: mov word ptr [eax + 0x562], 0x5a */ W16((u32)(r_eax+0x562u), 0x5au);
    /* 004f9233: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9236: mov word ptr [ecx + 0x564], 0x3c */ W16((u32)(r_ecx+0x564u), 0x3cu);
    /* 004f923f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9242: mov word ptr [edx + 0x566], 0x1e */ W16((u32)(r_edx+0x566u), 0x1eu);
    /* 004f924b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f924e: mov word ptr [eax + 0x568], 0x32 */ W16((u32)(r_eax+0x568u), 0x32u);
    /* 004f9257: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f925a: mov word ptr [ecx + 0x56a], 0x3c */ W16((u32)(r_ecx+0x56au), 0x3cu);
    /* 004f9263: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9266: mov word ptr [edx + 0x56c], 0xa */ W16((u32)(r_edx+0x56cu), 0xau);
    /* 004f926f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9272: mov word ptr [eax + 0x56e], 0x14 */ W16((u32)(r_eax+0x56eu), 0x14u);
    /* 004f927b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f927e: mov word ptr [ecx + 0x570], 0x28 */ W16((u32)(r_ecx+0x570u), 0x28u);
L_004f9287:; BB(0x004f9287);
    /* 004f9287: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9289: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f928a: ret 4 */ FN_RET(0x004f87c4); r_esp += 8; return;
}

void f_004f92b5(void) /* FUN_004f92b5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f92b5);
    /* 004f92b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f92b6: mov ebp, esp */ r_ebp = r_esp;
    /* 004f92b8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f92bb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f92bc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f92bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f92c2: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f92c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f92cb: jne 0x4f92dc */ if (!fZ) goto L_004f92dc;
L_004f92cd:; BB(0x004f92cd);
    /* 004f92cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f92d0: mov ax, word ptr [edx + 0x546] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x546u))) & 0xffffu);
    /* 004f92d7: jmp 0x4f9379 */ goto L_004f9379;
L_004f92dc:; BB(0x004f92dc);
    /* 004f92dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f92df: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f92e6: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f92e9: jne 0x4f9322 */ if (!fZ) goto L_004f9322;
L_004f92eb:; BB(0x004f92eb);
    /* 004f92eb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f92ee: mov ax, word ptr [edx + 0x546] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x546u))) & 0xffffu);
    /* 004f92f5: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004f92f9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f92fb: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f9300u); f_0060ee31();
    /* 004f9300: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9303: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f9307: sub cx, ax */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f930a: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004f930e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f9312: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9314: jge 0x4f931c */ if ((fS==fO)) goto L_004f931c;
L_004f9316:; BB(0x004f9316);
    /* 004f9316: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004f931c:; BB(0x004f931c);
    /* 004f931c: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f9320: jmp 0x4f9379 */ goto L_004f9379;
L_004f9322:; BB(0x004f9322);
    /* 004f9322: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9325: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f932c: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f932f: jne 0x4f934c */ if (!fZ) goto L_004f934c;
L_004f9331:; BB(0x004f9331);
    /* 004f9331: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9334: movsx esi, word ptr [edx + 0x546] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x546u));
    /* 004f933b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f933d: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f9342u); f_0060ee31();
    /* 004f9342: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9345: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9347: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f934a: jmp 0x4f9379 */ goto L_004f9379;
L_004f934c:; BB(0x004f934c);
    /* 004f934c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f934f: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f9356: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9359: jne 0x4f9376 */ if (!fZ) goto L_004f9376;
L_004f935b:; BB(0x004f935b);
    /* 004f935b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f935e: movsx esi, word ptr [edx + 0x546] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x546u));
    /* 004f9365: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9367: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f936cu); f_0060ee31();
    /* 004f936c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f936f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9371: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f9374: jmp 0x4f9379 */ goto L_004f9379;
L_004f9376:; BB(0x004f9376);
    /* 004f9376: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004f9379:; BB(0x004f9379);
    /* 004f9379: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f937a: mov esp, ebp */ r_esp = r_ebp;
    /* 004f937c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f937d: ret  */ FN_RET(0x004f92b5); r_esp += 4; return;
}

void f_004f937e(void) /* FUN_004f937e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f937e);
    /* 004f937e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f937f: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9381: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f9384: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f9387: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f938a: movsx ecx, word ptr [eax + 0x54a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x54au));
    /* 004f9391: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f9394: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f9397: fdiv qword ptr [0x638338] */ ST(0) = ST(0) / R_F64((u32)(0x638338u));
    /* 004f939d: mov esp, ebp */ r_esp = r_ebp;
    /* 004f939f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f93a0: ret  */ FN_RET(0x004f937e); r_esp += 4; return;
}

void f_004f93a1(void) /* FUN_004f93a1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f93a1);
    /* 004f93a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f93a2: mov ebp, esp */ r_ebp = r_esp;
    /* 004f93a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f93a7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f93aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f93ad: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f93b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f93b6: jne 0x4f93d0 */ if (!fZ) goto L_004f93d0;
L_004f93b8:; BB(0x004f93b8);
    /* 004f93b8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f93bb: movsx eax, word ptr [edx + 0x54e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x54eu));
    /* 004f93c2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f93c5: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f93c8: fdiv qword ptr [0x638338] */ ST(0) = ST(0) / R_F64((u32)(0x638338u));
    /* 004f93ce: jmp 0x4f944b */ goto L_004f944b;
L_004f93d0:; BB(0x004f93d0);
    /* 004f93d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f93d3: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f93da: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f93dd: jne 0x4f93f7 */ if (!fZ) goto L_004f93f7;
L_004f93df:; BB(0x004f93df);
    /* 004f93df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f93e2: movsx ecx, word ptr [eax + 0x54e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x54eu));
    /* 004f93e9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f93ec: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004f93ef: fdiv qword ptr [0x638340] */ ST(0) = ST(0) / R_F64((u32)(0x638340u));
    /* 004f93f5: jmp 0x4f944b */ goto L_004f944b;
L_004f93f7:; BB(0x004f93f7);
    /* 004f93f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f93fa: movsx eax, word ptr [edx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1dcu));
    /* 004f9401: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9404: jne 0x4f941e */ if (!fZ) goto L_004f941e;
L_004f9406:; BB(0x004f9406);
    /* 004f9406: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9409: movsx edx, word ptr [ecx + 0x54e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x54eu));
    /* 004f9410: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f9413: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004f9416: fdiv qword ptr [0x638348] */ ST(0) = ST(0) / R_F64((u32)(0x638348u));
    /* 004f941c: jmp 0x4f944b */ goto L_004f944b;
L_004f941e:; BB(0x004f941e);
    /* 004f941e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9421: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f9428: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f942b: jne 0x4f9445 */ if (!fZ) goto L_004f9445;
L_004f942d:; BB(0x004f942d);
    /* 004f942d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9430: movsx eax, word ptr [edx + 0x54e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x54eu));
    /* 004f9437: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f943a: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004f943d: fdiv qword ptr [0x638350] */ ST(0) = ST(0) / R_F64((u32)(0x638350u));
    /* 004f9443: jmp 0x4f944b */ goto L_004f944b;
L_004f9445:; BB(0x004f9445);
    /* 004f9445: fld qword ptr [0x638358] */ FPUSH(R_F64((u32)(0x638358u)));
L_004f944b:; BB(0x004f944b);
    /* 004f944b: mov esp, ebp */ r_esp = r_ebp;
    /* 004f944d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f944e: ret  */ FN_RET(0x004f93a1); r_esp += 4; return;
}

void f_004f944f(void) /* FUN_004f944f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f944f);
    /* 004f944f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9450: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9452: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f9455: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f9458: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f945b: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f9462: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9464: jne 0x4f947e */ if (!fZ) goto L_004f947e;
L_004f9466:; BB(0x004f9466);
    /* 004f9466: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9469: movsx eax, word ptr [edx + 0x550] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x550u));
    /* 004f9470: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f9473: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f9476: fdiv qword ptr [0x638338] */ ST(0) = ST(0) / R_F64((u32)(0x638338u));
    /* 004f947c: jmp 0x4f94f9 */ goto L_004f94f9;
L_004f947e:; BB(0x004f947e);
    /* 004f947e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9481: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f9488: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f948b: jne 0x4f94a5 */ if (!fZ) goto L_004f94a5;
L_004f948d:; BB(0x004f948d);
    /* 004f948d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9490: movsx ecx, word ptr [eax + 0x550] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x550u));
    /* 004f9497: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f949a: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004f949d: fdiv qword ptr [0x638340] */ ST(0) = ST(0) / R_F64((u32)(0x638340u));
    /* 004f94a3: jmp 0x4f94f9 */ goto L_004f94f9;
L_004f94a5:; BB(0x004f94a5);
    /* 004f94a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f94a8: movsx eax, word ptr [edx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1dcu));
    /* 004f94af: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f94b2: jne 0x4f94cc */ if (!fZ) goto L_004f94cc;
L_004f94b4:; BB(0x004f94b4);
    /* 004f94b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f94b7: movsx edx, word ptr [ecx + 0x550] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x550u));
    /* 004f94be: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f94c1: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004f94c4: fdiv qword ptr [0x638348] */ ST(0) = ST(0) / R_F64((u32)(0x638348u));
    /* 004f94ca: jmp 0x4f94f9 */ goto L_004f94f9;
L_004f94cc:; BB(0x004f94cc);
    /* 004f94cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f94cf: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f94d6: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f94d9: jne 0x4f94f3 */ if (!fZ) goto L_004f94f3;
L_004f94db:; BB(0x004f94db);
    /* 004f94db: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f94de: movsx eax, word ptr [edx + 0x550] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x550u));
    /* 004f94e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f94e8: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004f94eb: fdiv qword ptr [0x638350] */ ST(0) = ST(0) / R_F64((u32)(0x638350u));
    /* 004f94f1: jmp 0x4f94f9 */ goto L_004f94f9;
L_004f94f3:; BB(0x004f94f3);
    /* 004f94f3: fld qword ptr [0x638358] */ FPUSH(R_F64((u32)(0x638358u)));
L_004f94f9:; BB(0x004f94f9);
    /* 004f94f9: mov esp, ebp */ r_esp = r_ebp;
    /* 004f94fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f94fc: ret  */ FN_RET(0x004f944f); r_esp += 4; return;
}

void f_004f94fd(void) /* FUN_004f94fd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f94fd);
    /* 004f94fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f94fe: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9500: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f9503: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f9506: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9509: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f9510: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9512: jne 0x4f952c */ if (!fZ) goto L_004f952c;
L_004f9514:; BB(0x004f9514);
    /* 004f9514: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9517: movsx eax, word ptr [edx + 0x552] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x552u));
    /* 004f951e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f9521: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f9524: fdiv qword ptr [0x638338] */ ST(0) = ST(0) / R_F64((u32)(0x638338u));
    /* 004f952a: jmp 0x4f95a7 */ goto L_004f95a7;
L_004f952c:; BB(0x004f952c);
    /* 004f952c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f952f: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f9536: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9539: jne 0x4f9553 */ if (!fZ) goto L_004f9553;
L_004f953b:; BB(0x004f953b);
    /* 004f953b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f953e: movsx ecx, word ptr [eax + 0x552] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x552u));
    /* 004f9545: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f9548: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004f954b: fdiv qword ptr [0x638340] */ ST(0) = ST(0) / R_F64((u32)(0x638340u));
    /* 004f9551: jmp 0x4f95a7 */ goto L_004f95a7;
L_004f9553:; BB(0x004f9553);
    /* 004f9553: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9556: movsx eax, word ptr [edx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1dcu));
    /* 004f955d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9560: jne 0x4f957a */ if (!fZ) goto L_004f957a;
L_004f9562:; BB(0x004f9562);
    /* 004f9562: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9565: movsx edx, word ptr [ecx + 0x552] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x552u));
    /* 004f956c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f956f: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004f9572: fdiv qword ptr [0x638348] */ ST(0) = ST(0) / R_F64((u32)(0x638348u));
    /* 004f9578: jmp 0x4f95a7 */ goto L_004f95a7;
L_004f957a:; BB(0x004f957a);
    /* 004f957a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f957d: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f9584: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9587: jne 0x4f95a1 */ if (!fZ) goto L_004f95a1;
L_004f9589:; BB(0x004f9589);
    /* 004f9589: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f958c: movsx eax, word ptr [edx + 0x552] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x552u));
    /* 004f9593: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f9596: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004f9599: fdiv qword ptr [0x638350] */ ST(0) = ST(0) / R_F64((u32)(0x638350u));
    /* 004f959f: jmp 0x4f95a7 */ goto L_004f95a7;
L_004f95a1:; BB(0x004f95a1);
    /* 004f95a1: fld qword ptr [0x638358] */ FPUSH(R_F64((u32)(0x638358u)));
L_004f95a7:; BB(0x004f95a7);
    /* 004f95a7: mov esp, ebp */ r_esp = r_ebp;
    /* 004f95a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f95aa: ret  */ FN_RET(0x004f94fd); r_esp += 4; return;
}

void f_004f95ab(void) /* FUN_004f95ab */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f95ab);
    /* 004f95ab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f95ac: mov ebp, esp */ r_ebp = r_esp;
    /* 004f95ae: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f95b1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f95b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f95b7: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f95be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f95c0: jne 0x4f95da */ if (!fZ) goto L_004f95da;
L_004f95c2:; BB(0x004f95c2);
    /* 004f95c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f95c5: movsx eax, word ptr [edx + 0x554] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x554u));
    /* 004f95cc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f95cf: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f95d2: fdiv qword ptr [0x638338] */ ST(0) = ST(0) / R_F64((u32)(0x638338u));
    /* 004f95d8: jmp 0x4f9655 */ goto L_004f9655;
L_004f95da:; BB(0x004f95da);
    /* 004f95da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f95dd: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f95e4: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f95e7: jne 0x4f9601 */ if (!fZ) goto L_004f9601;
L_004f95e9:; BB(0x004f95e9);
    /* 004f95e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f95ec: movsx ecx, word ptr [eax + 0x554] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x554u));
    /* 004f95f3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f95f6: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004f95f9: fdiv qword ptr [0x638340] */ ST(0) = ST(0) / R_F64((u32)(0x638340u));
    /* 004f95ff: jmp 0x4f9655 */ goto L_004f9655;
L_004f9601:; BB(0x004f9601);
    /* 004f9601: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9604: movsx eax, word ptr [edx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1dcu));
    /* 004f960b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f960e: jne 0x4f9628 */ if (!fZ) goto L_004f9628;
L_004f9610:; BB(0x004f9610);
    /* 004f9610: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9613: movsx edx, word ptr [ecx + 0x554] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x554u));
    /* 004f961a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f961d: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004f9620: fdiv qword ptr [0x638348] */ ST(0) = ST(0) / R_F64((u32)(0x638348u));
    /* 004f9626: jmp 0x4f9655 */ goto L_004f9655;
L_004f9628:; BB(0x004f9628);
    /* 004f9628: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f962b: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f9632: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9635: jne 0x4f964f */ if (!fZ) goto L_004f964f;
L_004f9637:; BB(0x004f9637);
    /* 004f9637: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f963a: movsx eax, word ptr [edx + 0x554] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x554u));
    /* 004f9641: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f9644: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004f9647: fdiv qword ptr [0x638350] */ ST(0) = ST(0) / R_F64((u32)(0x638350u));
    /* 004f964d: jmp 0x4f9655 */ goto L_004f9655;
L_004f964f:; BB(0x004f964f);
    /* 004f964f: fld qword ptr [0x638358] */ FPUSH(R_F64((u32)(0x638358u)));
L_004f9655:; BB(0x004f9655);
    /* 004f9655: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9657: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9658: ret  */ FN_RET(0x004f95ab); r_esp += 4; return;
}

void f_004f9659(void) /* FUN_004f9659 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9659);
    /* 004f9659: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f965a: mov ebp, esp */ r_ebp = r_esp;
    /* 004f965c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f965f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f9660: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f9663: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9669: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f966c: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f9673: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9675: jne 0x4f96b6 */ if (!fZ) goto L_004f96b6;
L_004f9677:; BB(0x004f9677);
    /* 004f9677: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f967b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f967e: jne 0x4f968f */ if (!fZ) goto L_004f968f;
L_004f9680:; BB(0x004f9680);
    /* 004f9680: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9683: mov ax, word ptr [eax + 0x566] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x566u))) & 0xffffu);
    /* 004f968a: jmp 0x4f980e */ goto L_004f980e;
L_004f968f:; BB(0x004f968f);
    /* 004f968f: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9693: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9696: jne 0x4f96a7 */ if (!fZ) goto L_004f96a7;
L_004f9698:; BB(0x004f9698);
    /* 004f9698: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f969b: mov ax, word ptr [edx + 0x564] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x564u))) & 0xffffu);
    /* 004f96a2: jmp 0x4f980e */ goto L_004f980e;
L_004f96a7:; BB(0x004f96a7);
    /* 004f96a7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f96aa: mov ax, word ptr [eax + 0x562] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x562u))) & 0xffffu);
    /* 004f96b1: jmp 0x4f980e */ goto L_004f980e;
L_004f96b6:; BB(0x004f96b6);
    /* 004f96b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f96b9: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004f96c0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f96c3: jne 0x4f9713 */ if (!fZ) goto L_004f9713;
L_004f96c5:; BB(0x004f96c5);
    /* 004f96c5: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f96c9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f96cc: jne 0x4f96e2 */ if (!fZ) goto L_004f96e2;
L_004f96ce:; BB(0x004f96ce);
    /* 004f96ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f96d1: movsx eax, word ptr [ecx + 0x566] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x566u));
    /* 004f96d8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f96d9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f96db: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f96dd: jmp 0x4f980e */ goto L_004f980e;
L_004f96e2:; BB(0x004f96e2);
    /* 004f96e2: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f96e6: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f96e9: jne 0x4f96ff */ if (!fZ) goto L_004f96ff;
L_004f96eb:; BB(0x004f96eb);
    /* 004f96eb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f96ee: movsx eax, word ptr [eax + 0x564] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x564u));
    /* 004f96f5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f96f6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f96f8: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f96fa: jmp 0x4f980e */ goto L_004f980e;
L_004f96ff:; BB(0x004f96ff);
    /* 004f96ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9702: movsx eax, word ptr [ecx + 0x562] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x562u));
    /* 004f9709: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f970a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f970c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f970e: jmp 0x4f980e */ goto L_004f980e;
L_004f9713:; BB(0x004f9713);
    /* 004f9713: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9716: movsx eax, word ptr [edx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1dcu));
    /* 004f971d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9720: jne 0x4f9788 */ if (!fZ) goto L_004f9788;
L_004f9722:; BB(0x004f9722);
    /* 004f9722: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9726: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9729: jne 0x4f9747 */ if (!fZ) goto L_004f9747;
L_004f972b:; BB(0x004f972b);
    /* 004f972b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f972e: movsx esi, word ptr [edx + 0x566] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x566u));
    /* 004f9735: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9737: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f973cu); f_0060ee31();
    /* 004f973c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f973f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9741: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f9745: jmp 0x4f9786 */ goto L_004f9786;
L_004f9747:; BB(0x004f9747);
    /* 004f9747: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f974b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f974e: jne 0x4f976c */ if (!fZ) goto L_004f976c;
L_004f9750:; BB(0x004f9750);
    /* 004f9750: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9753: movsx esi, word ptr [ecx + 0x564] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x564u));
    /* 004f975a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004f975c: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f9761u); f_0060ee31();
    /* 004f9761: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9764: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9766: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f976a: jmp 0x4f9786 */ goto L_004f9786;
L_004f976c:; BB(0x004f976c);
    /* 004f976c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f976f: movsx esi, word ptr [edx + 0x562] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x562u));
    /* 004f9776: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9778: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f977du); f_0060ee31();
    /* 004f977d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9780: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9782: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004f9786:; BB(0x004f9786);
    /* 004f9786: jmp 0x4f97fb */ goto L_004f97fb;
L_004f9788:; BB(0x004f9788);
    /* 004f9788: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f978b: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f9792: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9795: jne 0x4f97fb */ if (!fZ) goto L_004f97fb;
L_004f9797:; BB(0x004f9797);
    /* 004f9797: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f979b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f979e: jne 0x4f97bc */ if (!fZ) goto L_004f97bc;
L_004f97a0:; BB(0x004f97a0);
    /* 004f97a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f97a3: movsx esi, word ptr [eax + 0x566] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x566u));
    /* 004f97aa: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004f97ac: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f97b1u); f_0060ee31();
    /* 004f97b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f97b4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f97b6: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f97ba: jmp 0x4f97fb */ goto L_004f97fb;
L_004f97bc:; BB(0x004f97bc);
    /* 004f97bc: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f97c0: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97c3: jne 0x4f97e1 */ if (!fZ) goto L_004f97e1;
L_004f97c5:; BB(0x004f97c5);
    /* 004f97c5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f97c8: movsx esi, word ptr [edx + 0x564] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x564u));
    /* 004f97cf: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004f97d1: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f97d6u); f_0060ee31();
    /* 004f97d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f97d9: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f97db: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f97df: jmp 0x4f97fb */ goto L_004f97fb;
L_004f97e1:; BB(0x004f97e1);
    /* 004f97e1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f97e4: movsx esi, word ptr [eax + 0x562] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x562u));
    /* 004f97eb: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004f97ed: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f97f2u); f_0060ee31();
    /* 004f97f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f97f5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f97f7: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004f97fb:; BB(0x004f97fb);
    /* 004f97fb: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f97ff: cmp ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9802: jle 0x4f980a */ if ((fZ||fS!=fO)) goto L_004f980a;
L_004f9804:; BB(0x004f9804);
    /* 004f9804: mov word ptr [ebp - 4], 0x60 */ W16((u32)(r_ebp+0xfffffffcu), 0x60u);
L_004f980a:; BB(0x004f980a);
    /* 004f980a: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004f980e:; BB(0x004f980e);
    /* 004f980e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f980f: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9811: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9812: ret 4 */ FN_RET(0x004f9659); r_esp += 8; return;
}

void f_004f9815(void) /* FUN_004f9815 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9815);
    /* 004f9815: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9816: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9818: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9819: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f981c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f981f: mov ax, word ptr [eax + 0x568] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x568u))) & 0xffffu);
    /* 004f9826: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9828: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9829: ret  */ FN_RET(0x004f9815); r_esp += 4; return;
}

void f_004f982a(void) /* FUN_004f982a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f982a);
    /* 004f982a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f982b: mov ebp, esp */ r_ebp = r_esp;
    /* 004f982d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f982e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f9831: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9834: mov ax, word ptr [eax + 0x56a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x56au))) & 0xffffu);
    /* 004f983b: mov esp, ebp */ r_esp = r_ebp;
    /* 004f983d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f983e: ret  */ FN_RET(0x004f982a); r_esp += 4; return;
}

void f_004f983f(void) /* FUN_004f983f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f983f);
    /* 004f983f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9840: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9842: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9843: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f9844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f9847: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f984a: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f9851: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9853: jne 0x4f9861 */ if (!fZ) goto L_004f9861;
L_004f9855:; BB(0x004f9855);
    /* 004f9855: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9858: mov ax, word ptr [edx + 0x56c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x56cu))) & 0xffffu);
    /* 004f985f: jmp 0x4f98d8 */ goto L_004f98d8;
L_004f9861:; BB(0x004f9861);
    /* 004f9861: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9864: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f986b: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f986e: jne 0x4f9881 */ if (!fZ) goto L_004f9881;
L_004f9870:; BB(0x004f9870);
    /* 004f9870: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9873: movsx eax, word ptr [edx + 0x56c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x56cu));
    /* 004f987a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f987b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f987d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f987f: jmp 0x4f98d8 */ goto L_004f98d8;
L_004f9881:; BB(0x004f9881);
    /* 004f9881: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9884: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f988b: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f988e: jne 0x4f98ab */ if (!fZ) goto L_004f98ab;
L_004f9890:; BB(0x004f9890);
    /* 004f9890: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9893: movsx esi, word ptr [edx + 0x56c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x56cu));
    /* 004f989a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f98a1u); f_0060ee31();
    /* 004f98a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98a4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98a6: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f98a9: jmp 0x4f98d8 */ goto L_004f98d8;
L_004f98ab:; BB(0x004f98ab);
    /* 004f98ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f98ae: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f98b5: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98b8: jne 0x4f98d5 */ if (!fZ) goto L_004f98d5;
L_004f98ba:; BB(0x004f98ba);
    /* 004f98ba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f98bd: movsx esi, word ptr [edx + 0x56c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x56cu));
    /* 004f98c4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f98c6: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4f98cbu); f_0060ee31();
    /* 004f98cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98ce: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98d0: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f98d3: jmp 0x4f98d8 */ goto L_004f98d8;
L_004f98d5:; BB(0x004f98d5);
    /* 004f98d5: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004f98d8:; BB(0x004f98d8);
    /* 004f98d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f98d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004f98db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f98dc: ret  */ FN_RET(0x004f983f); r_esp += 4; return;
}

void f_004f98dd(void) /* FUN_004f98dd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f98dd);
    /* 004f98dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f98de: mov ebp, esp */ r_ebp = r_esp;
    /* 004f98e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98e1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f98e4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f98e7: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f98ee: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98f1: jne 0x4f9901 */ if (!fZ) goto L_004f9901;
L_004f98f3:; BB(0x004f98f3);
    /* 004f98f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f98f6: movsx eax, word ptr [edx + 0x56e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x56eu));
    /* 004f98fd: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004f98ff: jmp 0x4f990b */ goto L_004f990b;
L_004f9901:; BB(0x004f9901);
    /* 004f9901: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9904: mov ax, word ptr [eax + 0x56e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x56eu))) & 0xffffu);
L_004f990b:; BB(0x004f990b);
    /* 004f990b: mov esp, ebp */ r_esp = r_ebp;
    /* 004f990d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f990e: ret  */ FN_RET(0x004f98dd); r_esp += 4; return;
}

void f_004f990f(void) /* FUN_004f990f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f990f);
    /* 004f990f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9910: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9912: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9913: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f9916: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9919: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004f9920: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9923: jne 0x4f9936 */ if (!fZ) goto L_004f9936;
L_004f9925:; BB(0x004f9925);
    /* 004f9925: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9928: movsx eax, word ptr [edx + 0x570] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x570u));
    /* 004f992f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f9930: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f9932: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f9934: jmp 0x4f9940 */ goto L_004f9940;
L_004f9936:; BB(0x004f9936);
    /* 004f9936: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9939: mov ax, word ptr [eax + 0x570] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x570u))) & 0xffffu);
L_004f9940:; BB(0x004f9940);
    /* 004f9940: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9942: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9943: ret  */ FN_RET(0x004f990f); r_esp += 4; return;
}

void f_004f9944(void) /* FUN_004f9944 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9944);
    /* 004f9944: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9945: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9947: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f994a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f994d: mov word ptr [ebp - 4], 2 */ W16((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004f9953: jmp 0x4f9961 */ goto L_004f9961;
L_004f9955:; BB(0x004f9955);
    /* 004f9955: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f9959: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f995d: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004f9961:; BB(0x004f9961);
    /* 004f9961: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f9965: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9968: jg 0x4f99d0 */ if ((!fZ&&fS==fO)) goto L_004f99d0;
L_004f996a:; BB(0x004f996a);
    /* 004f996a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f996d: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f9973: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9977: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f997a: lea edx, [eax + ecx + 0xd90] */ r_edx = (u32)(r_eax+r_ecx+0xd90u);
    /* 004f9981: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f9985: mov word ptr [edx + eax*2 - 4], 0 */ W16((u32)(r_edx+r_eax*2+0xfffffffcu), 0x0u);
    /* 004f998c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f998f: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f9995: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9999: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f999c: lea ecx, [edx + eax + 0xe00] */ r_ecx = (u32)(r_edx+r_eax+0xe00u);
    /* 004f99a3: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f99a7: mov word ptr [ecx + edx*2 - 4], 0 */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), 0x0u);
    /* 004f99ae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f99b1: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f99b7: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f99bb: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f99be: lea eax, [ecx + edx + 0xe70] */ r_eax = (u32)(r_ecx+r_edx+0xe70u);
    /* 004f99c5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f99c9: mov byte ptr [eax + ecx - 2], 0 */ W8((u32)(r_eax+r_ecx+0xfffffffeu), 0x0u);
    /* 004f99ce: jmp 0x4f9955 */ goto L_004f9955;
L_004f99d0:; BB(0x004f99d0);
    /* 004f99d0: mov esp, ebp */ r_esp = r_ebp;
    /* 004f99d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f99d3: ret 4 */ FN_RET(0x004f9944); r_esp += 8; return;
}

void f_004f99d6(void) /* FUN_004f99d6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f99d6);
    /* 004f99d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f99d7: mov ebp, esp */ r_ebp = r_esp;
    /* 004f99d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f99da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f99db: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f99de: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99e5: je 0x4f99f5 */ if (fZ) goto L_004f99f5;
L_004f99e7:; BB(0x004f99e7);
    /* 004f99e7: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f99eb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f99ee: jge 0x4f99f5 */ if ((fS==fO)) goto L_004f99f5;
L_004f99f0:; BB(0x004f99f0);
    /* 004f99f0: jmp 0x4f9c24 */ goto L_004f9c24;
L_004f99f5:; BB(0x004f99f5);
    /* 004f99f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f99f8: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f99fe: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9a02: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9a05: lea ecx, [edx + eax + 0xd90] */ r_ecx = (u32)(r_edx+r_eax+0xd90u);
    /* 004f9a0c: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9a10: mov ax, word ptr [ecx + edx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004f9a15: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9a19: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9a1d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9a21: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9a24: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9a27: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9a2d: lea edx, [esi + edx + 0xd90] */ r_edx = (u32)(r_esi+r_edx+0xd90u);
    /* 004f9a34: mov word ptr [edx + ecx*2 - 4], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffcu), (u16)r_eax);
    /* 004f9a39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9a3c: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f9a42: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9a46: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9a49: lea eax, [ecx + edx + 0xd90] */ r_eax = (u32)(r_ecx+r_edx+0xd90u);
    /* 004f9a50: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9a54: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f9a56: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f9a5b: cmp edx, 0x3000 */ {  u32 a = r_edx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a61: jne 0x4f9aa7 */ if (!fZ) goto L_004f9aa7;
L_004f9a63:; BB(0x004f9a63);
    /* 004f9a63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9a66: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f9a6c: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9a70: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9a73: lea eax, [ecx + edx + 0xd90] */ r_eax = (u32)(r_ecx+r_edx+0xd90u);
    /* 004f9a7a: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9a7e: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f9a83: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9a87: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9a8b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9a8f: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9a92: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9a95: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9a9b: lea ecx, [esi + ecx + 0xd90] */ r_ecx = (u32)(r_esi+r_ecx+0xd90u);
    /* 004f9aa2: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
L_004f9aa7:; BB(0x004f9aa7);
    /* 004f9aa7: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9aab: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aae: jle 0x4f9b66 */ if ((fZ||fS!=fO)) goto L_004f9b66;
L_004f9ab4:; BB(0x004f9ab4);
    /* 004f9ab4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9ab7: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f9abd: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9ac1: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9ac4: lea eax, [ecx + edx + 0xd90] */ r_eax = (u32)(r_ecx+r_edx+0xd90u);
    /* 004f9acb: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9acf: mov dx, word ptr [eax + ecx*2 - 6] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffau))) & 0xffffu);
    /* 004f9ad4: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9ad8: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9adc: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9ae0: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9ae3: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9ae6: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9aec: lea ecx, [esi + ecx + 0xd90] */ r_ecx = (u32)(r_esi+r_ecx+0xd90u);
    /* 004f9af3: mov word ptr [ecx + eax*2 - 6], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffau), (u16)r_edx);
    /* 004f9af8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9afb: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f9b01: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9b05: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9b08: lea edx, [eax + ecx + 0xd90] */ r_edx = (u32)(r_eax+r_ecx+0xd90u);
    /* 004f9b0f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9b13: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b15: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004f9b1a: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b20: jne 0x4f9b66 */ if (!fZ) goto L_004f9b66;
L_004f9b22:; BB(0x004f9b22);
    /* 004f9b22: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9b25: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f9b2b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9b2f: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9b32: lea edx, [eax + ecx + 0xd90] */ r_edx = (u32)(r_eax+r_ecx+0xd90u);
    /* 004f9b39: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9b3d: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004f9b42: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9b46: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9b4a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9b4e: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9b51: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9b54: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9b5a: lea eax, [esi + eax + 0xd90] */ r_eax = (u32)(r_esi+r_eax+0xd90u);
    /* 004f9b61: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
L_004f9b66:; BB(0x004f9b66);
    /* 004f9b66: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9b6a: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b6d: jge 0x4f9c24 */ if ((fS==fO)) goto L_004f9c24;
L_004f9b73:; BB(0x004f9b73);
    /* 004f9b73: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9b76: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f9b7c: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9b80: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9b83: lea edx, [eax + ecx + 0xd90] */ r_edx = (u32)(r_eax+r_ecx+0xd90u);
    /* 004f9b8a: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9b8e: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004f9b93: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9b97: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9b9b: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9b9f: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9ba2: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9ba5: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9bab: lea eax, [esi + eax + 0xd90] */ r_eax = (u32)(r_esi+r_eax+0xd90u);
    /* 004f9bb2: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
    /* 004f9bb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9bba: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f9bc0: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9bc4: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9bc7: lea ecx, [edx + eax + 0xd90] */ r_ecx = (u32)(r_edx+r_eax+0xd90u);
    /* 004f9bce: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9bd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9bd4: mov ax, word ptr [ecx + edx*2 - 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffeu))) & 0xffffu);
    /* 004f9bd9: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9bde: jne 0x4f9c24 */ if (!fZ) goto L_004f9c24;
L_004f9be0:; BB(0x004f9be0);
    /* 004f9be0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9be3: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f9be9: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9bed: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9bf0: lea ecx, [edx + eax + 0xd90] */ r_ecx = (u32)(r_edx+r_eax+0xd90u);
    /* 004f9bf7: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9bfb: mov ax, word ptr [ecx + edx*2 - 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffeu))) & 0xffffu);
    /* 004f9c00: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9c04: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9c08: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9c0c: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9c0f: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9c12: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9c18: lea edx, [esi + edx + 0xd90] */ r_edx = (u32)(r_esi+r_edx+0xd90u);
    /* 004f9c1f: mov word ptr [edx + ecx*2 - 2], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffeu), (u16)r_eax);
L_004f9c24:; BB(0x004f9c24);
    /* 004f9c24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f9c25: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9c27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9c28: ret 8 */ FN_RET(0x004f99d6); r_esp += 12; return;
}

void f_004f9c2b(void) /* FUN_004f9c2b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9c2b);
    /* 004f9c2b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c2c: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9c2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c2f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c30: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f9c33: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9c3a: je 0x4f9c4a */ if (fZ) goto L_004f9c4a;
L_004f9c3c:; BB(0x004f9c3c);
    /* 004f9c3c: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9c40: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9c43: jge 0x4f9c4a */ if ((fS==fO)) goto L_004f9c4a;
L_004f9c45:; BB(0x004f9c45);
    /* 004f9c45: jmp 0x4f9e79 */ goto L_004f9e79;
L_004f9c4a:; BB(0x004f9c4a);
    /* 004f9c4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9c4d: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f9c53: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9c57: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9c5a: lea ecx, [edx + eax + 0xe00] */ r_ecx = (u32)(r_edx+r_eax+0xe00u);
    /* 004f9c61: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9c65: mov ax, word ptr [ecx + edx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004f9c6a: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9c6e: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9c72: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9c76: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9c79: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9c7c: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9c82: lea edx, [esi + edx + 0xe00] */ r_edx = (u32)(r_esi+r_edx+0xe00u);
    /* 004f9c89: mov word ptr [edx + ecx*2 - 4], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffcu), (u16)r_eax);
    /* 004f9c8e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9c91: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f9c97: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9c9b: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9c9e: lea eax, [ecx + edx + 0xe00] */ r_eax = (u32)(r_ecx+r_edx+0xe00u);
    /* 004f9ca5: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9ca9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f9cab: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f9cb0: cmp edx, 0x3000 */ {  u32 a = r_edx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9cb6: jne 0x4f9cfc */ if (!fZ) goto L_004f9cfc;
L_004f9cb8:; BB(0x004f9cb8);
    /* 004f9cb8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9cbb: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f9cc1: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9cc5: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9cc8: lea eax, [ecx + edx + 0xe00] */ r_eax = (u32)(r_ecx+r_edx+0xe00u);
    /* 004f9ccf: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9cd3: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f9cd8: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9cdc: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9ce0: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9ce4: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9ce7: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9cea: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9cf0: lea ecx, [esi + ecx + 0xe00] */ r_ecx = (u32)(r_esi+r_ecx+0xe00u);
    /* 004f9cf7: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
L_004f9cfc:; BB(0x004f9cfc);
    /* 004f9cfc: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9d00: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9d03: jle 0x4f9dbb */ if ((fZ||fS!=fO)) goto L_004f9dbb;
L_004f9d09:; BB(0x004f9d09);
    /* 004f9d09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9d0c: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f9d12: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9d16: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9d19: lea eax, [ecx + edx + 0xe00] */ r_eax = (u32)(r_ecx+r_edx+0xe00u);
    /* 004f9d20: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9d24: mov dx, word ptr [eax + ecx*2 - 6] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffau))) & 0xffffu);
    /* 004f9d29: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9d2d: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9d31: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9d35: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9d38: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9d3b: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9d41: lea ecx, [esi + ecx + 0xe00] */ r_ecx = (u32)(r_esi+r_ecx+0xe00u);
    /* 004f9d48: mov word ptr [ecx + eax*2 - 6], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffau), (u16)r_edx);
    /* 004f9d4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9d50: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f9d56: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9d5a: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9d5d: lea edx, [eax + ecx + 0xe00] */ r_edx = (u32)(r_eax+r_ecx+0xe00u);
    /* 004f9d64: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9d68: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9d6a: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004f9d6f: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9d75: jne 0x4f9dbb */ if (!fZ) goto L_004f9dbb;
L_004f9d77:; BB(0x004f9d77);
    /* 004f9d77: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9d7a: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f9d80: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9d84: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9d87: lea edx, [eax + ecx + 0xe00] */ r_edx = (u32)(r_eax+r_ecx+0xe00u);
    /* 004f9d8e: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9d92: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004f9d97: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9d9b: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9d9f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9da3: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9da6: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9da9: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9daf: lea eax, [esi + eax + 0xe00] */ r_eax = (u32)(r_esi+r_eax+0xe00u);
    /* 004f9db6: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
L_004f9dbb:; BB(0x004f9dbb);
    /* 004f9dbb: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9dbf: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9dc2: jge 0x4f9e79 */ if ((fS==fO)) goto L_004f9e79;
L_004f9dc8:; BB(0x004f9dc8);
    /* 004f9dc8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9dcb: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f9dd1: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9dd5: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9dd8: lea edx, [eax + ecx + 0xe00] */ r_edx = (u32)(r_eax+r_ecx+0xe00u);
    /* 004f9ddf: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9de3: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004f9de8: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9dec: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9df0: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9df4: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9df7: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9dfa: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9e00: lea eax, [esi + eax + 0xe00] */ r_eax = (u32)(r_esi+r_eax+0xe00u);
    /* 004f9e07: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
    /* 004f9e0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9e0f: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f9e15: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9e19: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9e1c: lea ecx, [edx + eax + 0xe00] */ r_ecx = (u32)(r_edx+r_eax+0xe00u);
    /* 004f9e23: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9e27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9e29: mov ax, word ptr [ecx + edx*2 - 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffeu))) & 0xffffu);
    /* 004f9e2e: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9e33: jne 0x4f9e79 */ if (!fZ) goto L_004f9e79;
L_004f9e35:; BB(0x004f9e35);
    /* 004f9e35: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9e38: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f9e3e: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9e42: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9e45: lea ecx, [edx + eax + 0xe00] */ r_ecx = (u32)(r_edx+r_eax+0xe00u);
    /* 004f9e4c: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9e50: mov ax, word ptr [ecx + edx*2 - 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffeu))) & 0xffffu);
    /* 004f9e55: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9e59: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9e5d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9e61: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9e64: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9e67: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9e6d: lea edx, [esi + edx + 0xe00] */ r_edx = (u32)(r_esi+r_edx+0xe00u);
    /* 004f9e74: mov word ptr [edx + ecx*2 - 2], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffeu), (u16)r_eax);
L_004f9e79:; BB(0x004f9e79);
    /* 004f9e79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f9e7a: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9e7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9e7d: ret 8 */ FN_RET(0x004f9c2b); r_esp += 12; return;
}

void f_004f9e80(void) /* FUN_004f9e80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9e80);
    /* 004f9e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9e81: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9e84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f9e85: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f9e88: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9e8f: je 0x4f9e9f */ if (fZ) goto L_004f9e9f;
L_004f9e91:; BB(0x004f9e91);
    /* 004f9e91: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9e95: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9e98: jge 0x4f9e9f */ if ((fS==fO)) goto L_004f9e9f;
L_004f9e9a:; BB(0x004f9e9a);
    /* 004f9e9a: jmp 0x4fa255 */ goto L_004fa255;
L_004f9e9f:; BB(0x004f9e9f);
    /* 004f9e9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9ea2: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f9ea8: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9eac: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9eaf: lea ecx, [edx + eax + 0xe70] */ r_ecx = (u32)(r_edx+r_eax+0xe70u);
    /* 004f9eb6: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9eba: mov al, byte ptr [ecx + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004f9ebe: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f9ec0: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9ec4: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9ec8: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9ecb: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9ece: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9ed4: lea edx, [esi + edx + 0xe70] */ r_edx = (u32)(r_esi+r_edx+0xe70u);
    /* 004f9edb: mov byte ptr [edx + ecx - 2], al */ W8((u32)(r_edx+r_ecx+0xfffffffeu), (u8)r_eax);
    /* 004f9edf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9ee2: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f9ee8: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9eec: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9eef: lea eax, [ecx + edx + 0xe70] */ r_eax = (u32)(r_ecx+r_edx+0xe70u);
    /* 004f9ef6: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9efa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f9efc: mov dl, byte ptr [eax + ecx - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffeu))) & 0xffu);
    /* 004f9f00: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9f03: jne 0x4f9fd3 */ if (!fZ) goto L_004f9fd3;
L_004f9f09:; BB(0x004f9f09);
    /* 004f9f09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9f0c: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004f9f12: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9f16: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9f19: lea eax, [ecx + edx + 0xd90] */ r_eax = (u32)(r_ecx+r_edx+0xd90u);
    /* 004f9f20: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9f24: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f9f26: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f9f2b: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f9f2d: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9f31: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9f35: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9f38: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9f3b: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9f41: lea ecx, [esi + ecx + 0xd90] */ r_ecx = (u32)(r_esi+r_ecx+0xd90u);
    /* 004f9f48: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
    /* 004f9f4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9f50: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004f9f56: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9f5a: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9f5d: lea edx, [eax + ecx + 0xe00] */ r_edx = (u32)(r_eax+r_ecx+0xe00u);
    /* 004f9f64: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9f68: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9f6a: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004f9f6f: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004f9f71: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9f75: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9f79: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9f7c: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9f7f: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9f85: lea eax, [esi + eax + 0xe00] */ r_eax = (u32)(r_esi+r_eax+0xe00u);
    /* 004f9f8c: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
    /* 004f9f91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9f94: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f9f9a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9f9e: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9fa1: lea ecx, [edx + eax + 0xe70] */ r_ecx = (u32)(r_edx+r_eax+0xe70u);
    /* 004f9fa8: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9fac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9fae: mov al, byte ptr [ecx + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004f9fb2: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004f9fb4: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9fb8: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9fbc: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9fbf: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9fc2: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004f9fc8: lea edx, [esi + edx + 0xe70] */ r_edx = (u32)(r_esi+r_edx+0xe70u);
    /* 004f9fcf: mov byte ptr [edx + ecx - 2], al */ W8((u32)(r_edx+r_ecx+0xfffffffeu), (u8)r_eax);
L_004f9fd3:; BB(0x004f9fd3);
    /* 004f9fd3: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9fd7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9fda: jle 0x4fa114 */ if ((fZ||fS!=fO)) goto L_004fa114;
L_004f9fe0:; BB(0x004f9fe0);
    /* 004f9fe0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9fe3: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004f9fe9: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f9fed: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f9ff0: lea ecx, [edx + eax + 0xe70] */ r_ecx = (u32)(r_edx+r_eax+0xe70u);
    /* 004f9ff7: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f9ffb: mov al, byte ptr [ecx + edx - 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffdu))) & 0xffu);
    /* 004f9fff: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fa001: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa005: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa009: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa00c: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa00f: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004fa015: lea edx, [esi + edx + 0xe70] */ r_edx = (u32)(r_esi+r_edx+0xe70u);
    /* 004fa01c: mov byte ptr [edx + ecx - 3], al */ W8((u32)(r_edx+r_ecx+0xfffffffdu), (u8)r_eax);
    /* 004fa020: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa023: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004fa029: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa02d: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa030: lea eax, [ecx + edx + 0xe70] */ r_eax = (u32)(r_ecx+r_edx+0xe70u);
    /* 004fa037: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa03b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fa03d: mov dl, byte ptr [eax + ecx - 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffdu))) & 0xffu);
    /* 004fa041: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa044: jne 0x4fa114 */ if (!fZ) goto L_004fa114;
L_004fa04a:; BB(0x004fa04a);
    /* 004fa04a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa04d: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004fa053: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa057: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa05a: lea eax, [ecx + edx + 0xd90] */ r_eax = (u32)(r_ecx+r_edx+0xd90u);
    /* 004fa061: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa065: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fa067: mov dx, word ptr [eax + ecx*2 - 6] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffau))) & 0xffffu);
    /* 004fa06c: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004fa06e: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa072: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa076: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa079: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa07c: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004fa082: lea ecx, [esi + ecx + 0xd90] */ r_ecx = (u32)(r_esi+r_ecx+0xd90u);
    /* 004fa089: mov word ptr [ecx + eax*2 - 6], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffau), (u16)r_edx);
    /* 004fa08e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa091: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004fa097: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa09b: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa09e: lea edx, [eax + ecx + 0xe00] */ r_edx = (u32)(r_eax+r_ecx+0xe00u);
    /* 004fa0a5: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa0a9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fa0ab: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004fa0b0: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004fa0b2: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa0b6: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa0ba: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa0bd: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa0c0: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004fa0c6: lea eax, [esi + eax + 0xe00] */ r_eax = (u32)(r_esi+r_eax+0xe00u);
    /* 004fa0cd: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004fa0d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa0d5: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004fa0db: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa0df: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa0e2: lea ecx, [edx + eax + 0xe70] */ r_ecx = (u32)(r_edx+r_eax+0xe70u);
    /* 004fa0e9: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa0ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fa0ef: mov al, byte ptr [ecx + edx - 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffdu))) & 0xffu);
    /* 004fa0f3: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004fa0f5: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa0f9: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa0fd: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa100: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa103: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004fa109: lea edx, [esi + edx + 0xe70] */ r_edx = (u32)(r_esi+r_edx+0xe70u);
    /* 004fa110: mov byte ptr [edx + ecx - 3], al */ W8((u32)(r_edx+r_ecx+0xfffffffdu), (u8)r_eax);
L_004fa114:; BB(0x004fa114);
    /* 004fa114: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa118: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa11b: jge 0x4fa255 */ if ((fS==fO)) goto L_004fa255;
L_004fa121:; BB(0x004fa121);
    /* 004fa121: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa124: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004fa12a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa12e: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa131: lea ecx, [edx + eax + 0xe70] */ r_ecx = (u32)(r_edx+r_eax+0xe70u);
    /* 004fa138: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa13c: mov al, byte ptr [ecx + edx - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xffffffffu))) & 0xffu);
    /* 004fa140: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fa142: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa146: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa14a: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa14d: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa150: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004fa156: lea edx, [esi + edx + 0xe70] */ r_edx = (u32)(r_esi+r_edx+0xe70u);
    /* 004fa15d: mov byte ptr [edx + ecx - 1], al */ W8((u32)(r_edx+r_ecx+0xffffffffu), (u8)r_eax);
    /* 004fa161: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa164: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004fa16a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa16e: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa171: lea eax, [ecx + edx + 0xe70] */ r_eax = (u32)(r_ecx+r_edx+0xe70u);
    /* 004fa178: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa17c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fa17e: mov dl, byte ptr [eax + ecx - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xffffffffu))) & 0xffu);
    /* 004fa182: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa185: jne 0x4fa255 */ if (!fZ) goto L_004fa255;
L_004fa18b:; BB(0x004fa18b);
    /* 004fa18b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa18e: mov ecx, dword ptr [eax + 0x574] */ r_ecx = R32((u32)(r_eax+0x574u));
    /* 004fa194: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa198: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa19b: lea eax, [ecx + edx + 0xd90] */ r_eax = (u32)(r_ecx+r_edx+0xd90u);
    /* 004fa1a2: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa1a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fa1a8: mov dx, word ptr [eax + ecx*2 - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffeu))) & 0xffffu);
    /* 004fa1ad: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004fa1af: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa1b3: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa1b7: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa1ba: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa1bd: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004fa1c3: lea ecx, [esi + ecx + 0xd90] */ r_ecx = (u32)(r_esi+r_ecx+0xd90u);
    /* 004fa1ca: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004fa1cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa1d2: mov eax, dword ptr [edx + 0x574] */ r_eax = R32((u32)(r_edx+0x574u));
    /* 004fa1d8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa1dc: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa1df: lea edx, [eax + ecx + 0xe00] */ r_edx = (u32)(r_eax+r_ecx+0xe00u);
    /* 004fa1e6: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa1ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fa1ec: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004fa1f1: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004fa1f3: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa1f7: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa1fb: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa1fe: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa201: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004fa207: lea eax, [esi + eax + 0xe00] */ r_eax = (u32)(r_esi+r_eax+0xe00u);
    /* 004fa20e: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
    /* 004fa213: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa216: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004fa21c: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa220: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa223: lea ecx, [edx + eax + 0xe70] */ r_ecx = (u32)(r_edx+r_eax+0xe70u);
    /* 004fa22a: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa22e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fa230: mov al, byte ptr [ecx + edx - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xffffffffu))) & 0xffu);
    /* 004fa234: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004fa236: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa23a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa23e: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa241: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa244: mov esi, dword ptr [esi + 0x574] */ r_esi = R32((u32)(r_esi+0x574u));
    /* 004fa24a: lea edx, [esi + edx + 0xe70] */ r_edx = (u32)(r_esi+r_edx+0xe70u);
    /* 004fa251: mov byte ptr [edx + ecx - 1], al */ W8((u32)(r_edx+r_ecx+0xffffffffu), (u8)r_eax);
L_004fa255:; BB(0x004fa255);
    /* 004fa255: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fa256: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa258: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa259: ret 8 */ FN_RET(0x004f9e80); r_esp += 12; return;
}

void f_004fa25c(void) /* FUN_004fa25c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa25c);
    /* 004fa25c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa25d: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa25f: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa262: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004fa265: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa26c: je 0x4fa282 */ if (fZ) goto L_004fa282;
L_004fa26e:; BB(0x004fa26e);
    /* 004fa26e: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa272: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa275: jge 0x4fa282 */ if ((fS==fO)) goto L_004fa282;
L_004fa277:; BB(0x004fa277);
    /* 004fa277: fld qword ptr [0x638360] */ FPUSH(R_F64((u32)(0x638360u)));
    /* 004fa27d: jmp 0x4fa3a8 */ goto L_004fa3a8;
L_004fa282:; BB(0x004fa282);
    /* 004fa282: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fa285: movsx edx, word ptr [ecx + 0x548] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x548u));
    /* 004fa28c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004fa28f: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 004fa292: fdiv qword ptr [0x638338] */ ST(0) = ST(0) / R_F64((u32)(0x638338u));
    /* 004fa298: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa29c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004fa29f: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 004fa2a2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004fa2a4: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 004fa2a7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fa2aa: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004fa2b0: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa2b4: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa2b7: lea ecx, [edx + eax + 0xd90] */ r_ecx = (u32)(r_edx+r_eax+0xd90u);
    /* 004fa2be: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa2c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fa2c4: mov ax, word ptr [ecx + edx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004fa2c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa2cb: jne 0x4fa2d5 */ if (!fZ) goto L_004fa2d5;
L_004fa2cd:; BB(0x004fa2cd);
    /* 004fa2cd: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 004fa2d0: jmp 0x4fa3a8 */ goto L_004fa3a8;
L_004fa2d5:; BB(0x004fa2d5);
    /* 004fa2d5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fa2d8: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004fa2de: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa2e2: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa2e5: lea ecx, [edx + eax + 0xd90] */ r_ecx = (u32)(r_edx+r_eax+0xd90u);
    /* 004fa2ec: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa2f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fa2f2: mov ax, word ptr [ecx + edx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004fa2f7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004fa2fa: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004fa2fd: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004fa300: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fa303: mov edx, dword ptr [ecx + 0x574] */ r_edx = R32((u32)(r_ecx+0x574u));
    /* 004fa309: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa30d: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fa310: lea ecx, [edx + eax + 0xe00] */ r_ecx = (u32)(r_edx+r_eax+0xe00u);
    /* 004fa317: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa31b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fa31d: mov ax, word ptr [ecx + edx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004fa322: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004fa325: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 004fa328: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004fa32b: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004fa331: call 0x4b58ae */ r_esp -= 4; W32(r_esp, 0x4fa336u); f_004b58ae();
    /* 004fa336: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa338: jne 0x4fa36d */ if (!fZ) goto L_004fa36d;
L_004fa33a:; BB(0x004fa33a);
    /* 004fa33a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fa33d: movsx edx, word ptr [ecx + 0x54c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x54cu));
    /* 004fa344: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004fa347: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 004fa34a: fdivr qword ptr [ebp - 0x10] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff0u)) / ST(0);
    /* 004fa34d: fadd qword ptr [ebp - 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff8u));
    /* 004fa350: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fa353: movsx ecx, word ptr [eax + 0x54c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x54cu));
    /* 004fa35a: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004fa35d: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004fa360: fdivr qword ptr [ebp - 0x18] */ ST(0) = R_F64((u32)(r_ebp+0xffffffe8u)) / ST(0);
    /* 004fa363: fadd qword ptr [0x638360] */ ST(0) = ST(0) + R_F64((u32)(0x638360u));
    /* 004fa369: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004fa36b: jmp 0x4fa3a8 */ goto L_004fa3a8;
L_004fa36d:; BB(0x004fa36d);
    /* 004fa36d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fa370: movsx eax, word ptr [edx + 0x54c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x54cu));
    /* 004fa377: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004fa378: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004fa37a: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004fa37c: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004fa37f: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 004fa382: fdivr qword ptr [ebp - 0x10] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff0u)) / ST(0);
    /* 004fa385: fadd qword ptr [ebp - 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff8u));
    /* 004fa388: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fa38b: movsx eax, word ptr [eax + 0x54c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x54cu));
    /* 004fa392: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004fa393: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004fa395: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004fa397: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004fa39a: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 004fa39d: fdivr qword ptr [ebp - 0x18] */ ST(0) = R_F64((u32)(r_ebp+0xffffffe8u)) / ST(0);
    /* 004fa3a0: fadd qword ptr [0x638360] */ ST(0) = ST(0) + R_F64((u32)(0x638360u));
    /* 004fa3a6: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
L_004fa3a8:; BB(0x004fa3a8);
    /* 004fa3a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa3aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa3ab: ret 8 */ FN_RET(0x004fa25c); r_esp += 12; return;
}

void f_004fa3ae(void) /* FUN_004fa3ae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa3ae);
    /* 004fa3ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa3af: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa3b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa3b2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa3b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa3b8: mov ax, word ptr [eax + 0x556] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x556u))) & 0xffffu);
    /* 004fa3bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa3c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa3c2: ret  */ FN_RET(0x004fa3ae); r_esp += 4; return;
}

void f_004fa3c3(void) /* FUN_004fa3c3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa3c3);
    /* 004fa3c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa3c4: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa3c6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa3c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fa3ca: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004fa3cd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa3d0: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004fa3d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa3d9: jne 0x4fa41a */ if (!fZ) goto L_004fa41a;
L_004fa3db:; BB(0x004fa3db);
    /* 004fa3db: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa3df: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa3e2: jne 0x4fa3f3 */ if (!fZ) goto L_004fa3f3;
L_004fa3e4:; BB(0x004fa3e4);
    /* 004fa3e4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa3e7: mov ax, word ptr [eax + 0x55c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x55cu))) & 0xffffu);
    /* 004fa3ee: jmp 0x4fa633 */ goto L_004fa633;
L_004fa3f3:; BB(0x004fa3f3);
    /* 004fa3f3: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa3f7: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa3fa: jne 0x4fa40b */ if (!fZ) goto L_004fa40b;
L_004fa3fc:; BB(0x004fa3fc);
    /* 004fa3fc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa3ff: mov ax, word ptr [edx + 0x55a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x55au))) & 0xffffu);
    /* 004fa406: jmp 0x4fa633 */ goto L_004fa633;
L_004fa40b:; BB(0x004fa40b);
    /* 004fa40b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa40e: mov ax, word ptr [eax + 0x558] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x558u))) & 0xffffu);
    /* 004fa415: jmp 0x4fa633 */ goto L_004fa633;
L_004fa41a:; BB(0x004fa41a);
    /* 004fa41a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa41d: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004fa424: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa427: jne 0x4fa4bd */ if (!fZ) goto L_004fa4bd;
L_004fa42d:; BB(0x004fa42d);
    /* 004fa42d: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa431: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa434: jne 0x4fa460 */ if (!fZ) goto L_004fa460;
L_004fa436:; BB(0x004fa436);
    /* 004fa436: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa439: movsx esi, word ptr [ecx + 0x55c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x55cu));
    /* 004fa440: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa442: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa447u); f_0060ee31();
    /* 004fa447: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa44a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fa44c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa44e: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa453u); f_0060ee31();
    /* 004fa453: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa456: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fa458: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004fa45b: jmp 0x4fa633 */ goto L_004fa633;
L_004fa460:; BB(0x004fa460);
    /* 004fa460: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa464: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa467: jne 0x4fa493 */ if (!fZ) goto L_004fa493;
L_004fa469:; BB(0x004fa469);
    /* 004fa469: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa46c: movsx esi, word ptr [eax + 0x55a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x55au));
    /* 004fa473: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa475: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa47au); f_0060ee31();
    /* 004fa47a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa47d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fa47f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa481: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa486u); f_0060ee31();
    /* 004fa486: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa489: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fa48b: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004fa48e: jmp 0x4fa633 */ goto L_004fa633;
L_004fa493:; BB(0x004fa493);
    /* 004fa493: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa496: movsx esi, word ptr [ecx + 0x558] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x558u));
    /* 004fa49d: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa49f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa4a4u); f_0060ee31();
    /* 004fa4a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa4a7: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fa4a9: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa4ab: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa4b0u); f_0060ee31();
    /* 004fa4b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa4b3: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fa4b5: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004fa4b8: jmp 0x4fa633 */ goto L_004fa633;
L_004fa4bd:; BB(0x004fa4bd);
    /* 004fa4bd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa4c0: movsx eax, word ptr [edx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1dcu));
    /* 004fa4c7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa4ca: jne 0x4fa579 */ if (!fZ) goto L_004fa579;
L_004fa4d0:; BB(0x004fa4d0);
    /* 004fa4d0: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fa4d6: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa4da: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa4dd: jne 0x4fa507 */ if (!fZ) goto L_004fa507;
L_004fa4df:; BB(0x004fa4df);
    /* 004fa4df: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa4e2: movsx esi, word ptr [edx + 0x55c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x55cu));
    /* 004fa4e9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa4eb: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa4f0u); f_0060ee31();
    /* 004fa4f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa4f3: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004fa4f5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa4f7: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa4fcu); f_0060ee31();
    /* 004fa4fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa4ff: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004fa501: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004fa505: jmp 0x4fa55e */ goto L_004fa55e;
L_004fa507:; BB(0x004fa507);
    /* 004fa507: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa50b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa50e: jne 0x4fa538 */ if (!fZ) goto L_004fa538;
L_004fa510:; BB(0x004fa510);
    /* 004fa510: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa513: movsx esi, word ptr [ecx + 0x55a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x55au));
    /* 004fa51a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa51c: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa521u); f_0060ee31();
    /* 004fa521: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa524: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004fa526: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa528: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa52du); f_0060ee31();
    /* 004fa52d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa530: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004fa532: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004fa536: jmp 0x4fa55e */ goto L_004fa55e;
L_004fa538:; BB(0x004fa538);
    /* 004fa538: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa53b: movsx esi, word ptr [edx + 0x558] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x558u));
    /* 004fa542: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa544: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa549u); f_0060ee31();
    /* 004fa549: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa54c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004fa54e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa550: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa555u); f_0060ee31();
    /* 004fa555: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa558: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004fa55a: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004fa55e:; BB(0x004fa55e);
    /* 004fa55e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fa562: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa565: jge 0x4fa570 */ if ((fS==fO)) goto L_004fa570;
L_004fa567:; BB(0x004fa567);
    /* 004fa567: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 004fa56b: jmp 0x4fa633 */ goto L_004fa633;
L_004fa570:; BB(0x004fa570);
    /* 004fa570: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fa574: jmp 0x4fa633 */ goto L_004fa633;
L_004fa579:; BB(0x004fa579);
    /* 004fa579: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa57c: movsx edx, word ptr [ecx + 0x1dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 004fa583: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa586: jne 0x4fa62f */ if (!fZ) goto L_004fa62f;
L_004fa58c:; BB(0x004fa58c);
    /* 004fa58c: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fa592: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa596: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa599: jne 0x4fa5c3 */ if (!fZ) goto L_004fa5c3;
L_004fa59b:; BB(0x004fa59b);
    /* 004fa59b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa59e: movsx esi, word ptr [ecx + 0x55c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x55cu));
    /* 004fa5a5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004fa5a7: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa5acu); f_0060ee31();
    /* 004fa5ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa5af: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004fa5b1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004fa5b3: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa5b8u); f_0060ee31();
    /* 004fa5b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa5bb: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004fa5bd: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
    /* 004fa5c1: jmp 0x4fa61a */ goto L_004fa61a;
L_004fa5c3:; BB(0x004fa5c3);
    /* 004fa5c3: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fa5c7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa5ca: jne 0x4fa5f4 */ if (!fZ) goto L_004fa5f4;
L_004fa5cc:; BB(0x004fa5cc);
    /* 004fa5cc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa5cf: movsx esi, word ptr [eax + 0x55a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x55au));
    /* 004fa5d6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004fa5d8: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa5ddu); f_0060ee31();
    /* 004fa5dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa5e0: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004fa5e2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004fa5e4: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa5e9u); f_0060ee31();
    /* 004fa5e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa5ec: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004fa5ee: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
    /* 004fa5f2: jmp 0x4fa61a */ goto L_004fa61a;
L_004fa5f4:; BB(0x004fa5f4);
    /* 004fa5f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa5f7: movsx esi, word ptr [ecx + 0x558] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x558u));
    /* 004fa5fe: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004fa600: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa605u); f_0060ee31();
    /* 004fa605: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa608: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004fa60a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004fa60c: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa611u); f_0060ee31();
    /* 004fa611: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa614: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004fa616: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
L_004fa61a:; BB(0x004fa61a);
    /* 004fa61a: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fa61e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa621: jge 0x4fa629 */ if ((fS==fO)) goto L_004fa629;
L_004fa623:; BB(0x004fa623);
    /* 004fa623: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 004fa627: jmp 0x4fa633 */ goto L_004fa633;
L_004fa629:; BB(0x004fa629);
    /* 004fa629: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fa62d: jmp 0x4fa633 */ goto L_004fa633;
L_004fa62f:; BB(0x004fa62f);
    /* 004fa62f: mov ax, 0x64 */ r_eax = (r_eax & 0xffff0000u) | ((0x64u) & 0xffffu);
L_004fa633:; BB(0x004fa633);
    /* 004fa633: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fa634: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa636: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa637: ret 4 */ FN_RET(0x004fa3c3); r_esp += 8; return;
}

void f_004fa63a(void) /* FUN_004fa63a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa63a);
    /* 004fa63a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa63b: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa63d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa63e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa641: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa644: mov ax, word ptr [eax + 0x55e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x55eu))) & 0xffffu);
    /* 004fa64b: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa64d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa64e: ret  */ FN_RET(0x004fa63a); r_esp += 4; return;
}

void f_004fa64f(void) /* FUN_004fa64f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa64f);
    /* 004fa64f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa650: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa652: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa653: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa656: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa659: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004fa660: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa662: jne 0x4fa670 */ if (!fZ) goto L_004fa670;
L_004fa664:; BB(0x004fa664);
    /* 004fa664: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa667: mov ax, word ptr [edx + 0x560] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x560u))) & 0xffffu);
    /* 004fa66e: jmp 0x4fa6d5 */ goto L_004fa6d5;
L_004fa670:; BB(0x004fa670);
    /* 004fa670: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa673: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004fa67a: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa67d: jne 0x4fa68d */ if (!fZ) goto L_004fa68d;
L_004fa67f:; BB(0x004fa67f);
    /* 004fa67f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa682: movsx eax, word ptr [edx + 0x560] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x560u));
    /* 004fa689: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004fa68b: jmp 0x4fa6d5 */ goto L_004fa6d5;
L_004fa68d:; BB(0x004fa68d);
    /* 004fa68d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa690: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004fa697: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa69a: jne 0x4fa6ad */ if (!fZ) goto L_004fa6ad;
L_004fa69c:; BB(0x004fa69c);
    /* 004fa69c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa69f: movsx eax, word ptr [edx + 0x560] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x560u));
    /* 004fa6a6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004fa6a7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004fa6a9: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004fa6ab: jmp 0x4fa6d5 */ goto L_004fa6d5;
L_004fa6ad:; BB(0x004fa6ad);
    /* 004fa6ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa6b0: movsx ecx, word ptr [eax + 0x1dc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1dcu));
    /* 004fa6b7: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa6ba: jne 0x4fa6d1 */ if (!fZ) goto L_004fa6d1;
L_004fa6bc:; BB(0x004fa6bc);
    /* 004fa6bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa6bf: movsx eax, word ptr [edx + 0x560] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x560u));
    /* 004fa6c6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004fa6c7: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004fa6ca: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fa6cc: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004fa6cf: jmp 0x4fa6d5 */ goto L_004fa6d5;
L_004fa6d1:; BB(0x004fa6d1);
    /* 004fa6d1: mov ax, 0x14 */ r_eax = (r_eax & 0xffff0000u) | ((0x14u) & 0xffffu);
L_004fa6d5:; BB(0x004fa6d5);
    /* 004fa6d5: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa6d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa6d8: ret  */ FN_RET(0x004fa64f); r_esp += 4; return;
}

void f_004fa6d9(void) /* FUN_004fa6d9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa6d9);
    /* 004fa6d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa6da: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa6dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa6dd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa6e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa6e3: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa6e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa6e6: ret  */ FN_RET(0x004fa6d9); r_esp += 4; return;
}

void f_004fa6e7(void) /* FUN_004fa6e7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa6e7);
    /* 004fa6e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa6e8: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa6ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa6eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa6ee: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa6f1: ret  */ FN_RET(0x004fa6e7); r_esp += 4; return;
}

void f_004fa6f2(void) /* FUN_004fa6f2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa6f2);
    /* 004fa6f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa6f3: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa6f5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa6f8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fa6fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa6fd: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 004fa700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa701: push 0xea8 */ { u32 v = 0xea8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa706: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fa709: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa70a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fa70d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa70e: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x4fa714u); call_ind(t); }
    /* 004fa714: cmp dword ptr [ebp - 4], 0xea8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xea8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa71b: je 0x4fa721 */ if (fZ) goto L_004fa721;
L_004fa71d:; BB(0x004fa71d);
    /* 004fa71d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fa71f: jmp 0x4fa726 */ goto L_004fa726;
L_004fa721:; BB(0x004fa721);
    /* 004fa721: mov eax, 1 */ r_eax = 0x1u;
L_004fa726:; BB(0x004fa726);
    /* 004fa726: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa728: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa729: ret 4 */ FN_RET(0x004fa6f2); r_esp += 8; return;
}

void f_004fa72c(void) /* FUN_004fa72c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa72c);
    /* 004fa72c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa72d: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa72f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa732: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fa735: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa737: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 004fa73a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa73b: push 0xea8 */ { u32 v = 0xea8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa740: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fa743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa744: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fa747: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa748: call dword ptr [0x63302c] */ { u32 t = R32((u32)(0x63302cu)); r_esp -= 4; W32(r_esp, 0x4fa74eu); call_ind(t); }
    /* 004fa74e: cmp dword ptr [ebp - 4], 0xea8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xea8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa755: je 0x4fa75b */ if (fZ) goto L_004fa75b;
L_004fa757:; BB(0x004fa757);
    /* 004fa757: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fa759: jmp 0x4fa760 */ goto L_004fa760;
L_004fa75b:; BB(0x004fa75b);
    /* 004fa75b: mov eax, 1 */ r_eax = 0x1u;
L_004fa760:; BB(0x004fa760);
    /* 004fa760: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa763: ret 4 */ FN_RET(0x004fa72c); r_esp += 8; return;
}

void f_004fa766(void) /* FUN_004fa766 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa766);
    /* 004fa766: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa767: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa769: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa76a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa76d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa76f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fa772: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa773: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa776: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa777: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa77a: call 0x41e7f0 */ r_esp -= 4; W32(r_esp, 0x4fa77fu); f_0041e7f0();
    /* 004fa77f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa782: mov dword ptr [edx], 0x6383bc */ W32((u32)(r_edx), 0x6383bcu);
    /* 004fa788: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004fa78b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa78c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa78f: call 0x4fa7b9 */ r_esp -= 4; W32(r_esp, 0x4fa794u); f_004fa7b9();
    /* 004fa794: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa797: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa799: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa79a: ret 0x1c */ FN_RET(0x004fa766); r_esp += 32; return;
}

void f_004fa79d(void) /* FUN_004fa79d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa79d);
    /* 004fa79d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa79e: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa7a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7a1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa7a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa7a7: mov dword ptr [eax], 0x6383bc */ W32((u32)(r_eax), 0x6383bcu);
    /* 004fa7ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa7b0: call 0x41f100 */ r_esp -= 4; W32(r_esp, 0x4fa7b5u); f_0041f100();
    /* 004fa7b5: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa7b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa7b8: ret  */ FN_RET(0x004fa79d); r_esp += 4; return;
}

void f_004fa7b9(void) /* FUN_004fa7b9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa7b9);
    /* 004fa7b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7ba: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa7bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7bd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa7c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa7c3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa7c6: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 004fa7c9: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa7cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa7cc: ret 4 */ FN_RET(0x004fa7b9); r_esp += 8; return;
}

void f_004fa7cf(void) /* FUN_004fa7cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa7cf);
    /* 004fa7cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7d0: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa7d2: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa7d5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004fa7d8: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 004fa7de: cmp dword ptr [ebp + 0xc], 0xcf */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xcfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa7e5: je 0x4fa80f */ if (fZ) goto L_004fa80f;
L_004fa7e7:; BB(0x004fa7e7);
    /* 004fa7e7: cmp dword ptr [ebp + 0xc], 0xd0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xd0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa7ee: je 0x4fa80f */ if (fZ) goto L_004fa80f;
L_004fa7f0:; BB(0x004fa7f0);
    /* 004fa7f0: cmp dword ptr [ebp + 0xc], 0xe9 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xe9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa7f7: je 0x4fa80f */ if (fZ) goto L_004fa80f;
L_004fa7f9:; BB(0x004fa7f9);
    /* 004fa7f9: cmp dword ptr [ebp + 0xc], 0xea */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xeau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa800: je 0x4fa80f */ if (fZ) goto L_004fa80f;
L_004fa802:; BB(0x004fa802);
    /* 004fa802: cmp dword ptr [ebp + 0xc], 0xeb */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xebu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa809: jne 0x4fa8b5 */ if (!fZ) goto L_004fa8b5;
L_004fa80f:; BB(0x004fa80f);
    /* 004fa80f: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fa815: jmp 0x4fa823 */ goto L_004fa823;
L_004fa817:; BB(0x004fa817);
    /* 004fa817: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fa81b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fa81f: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004fa823:; BB(0x004fa823);
    /* 004fa823: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fa827: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa82a: jge 0x4fa8b5 */ if ((fS==fO)) goto L_004fa8b5;
L_004fa830:; BB(0x004fa830);
    /* 004fa830: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fa834: mov eax, dword ptr [0x6f9228] */ r_eax = R32((u32)(0x6f9228u));
    /* 004fa839: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004fa83d: call 0x4d5dbc */ r_esp -= 4; W32(r_esp, 0x4fa842u); f_004d5dbc();
    /* 004fa842: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa844: je 0x4fa8b0 */ if (fZ) goto L_004fa8b0;
L_004fa846:; BB(0x004fa846);
    /* 004fa846: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fa84a: mov edx, dword ptr [0x6f9228] */ r_edx = R32((u32)(0x6f9228u));
    /* 004fa850: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004fa854: mov ecx, dword ptr [eax + 0x138] */ r_ecx = R32((u32)(r_eax+0x138u));
    /* 004fa85a: call 0x42087c */ r_esp -= 4; W32(r_esp, 0x4fa85fu); f_0042087c();
    /* 004fa85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa861: jne 0x4fa8b0 */ if (!fZ) goto L_004fa8b0;
L_004fa863:; BB(0x004fa863);
    /* 004fa863: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fa867: mov edx, dword ptr [0x6f9228] */ r_edx = R32((u32)(0x6f9228u));
    /* 004fa86d: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004fa871: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4fa876u); f_004d5baa();
    /* 004fa876: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa878: jne 0x4fa8b0 */ if (!fZ) goto L_004fa8b0;
L_004fa87a:; BB(0x004fa87a);
    /* 004fa87a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa87c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fa87f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa880: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa885: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa887: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa889: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa88b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa88d: push 0xe2 */ { u32 v = 0xe2u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa892: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fa896: mov edx, dword ptr [0x6f9228] */ r_edx = R32((u32)(0x6f9228u));
    /* 004fa89c: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004fa8a0: mov ecx, dword ptr [eax + 0x138] */ r_ecx = R32((u32)(r_eax+0x138u));
    /* 004fa8a6: call 0x42099e */ r_esp -= 4; W32(r_esp, 0x4fa8abu); f_0042099e();
    /* 004fa8ab: jmp 0x4faae9 */ goto L_004faae9;
L_004fa8b0:; BB(0x004fa8b0);
    /* 004fa8b0: jmp 0x4fa817 */ goto L_004fa817;
L_004fa8b5:; BB(0x004fa8b5);
    /* 004fa8b5: cmp dword ptr [ebp + 0xc], 0xcf */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xcfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa8bc: jne 0x4fa9f6 */ if (!fZ) goto L_004fa9f6;
L_004fa8c2:; BB(0x004fa8c2);
    /* 004fa8c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa8c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa8c6: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004fa8cc: call 0x4b0e0b */ r_esp -= 4; W32(r_esp, 0x4fa8d1u); f_004b0e0b();
    /* 004fa8d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa8d2: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004fa8d8: call 0x4b0c56 */ r_esp -= 4; W32(r_esp, 0x4fa8ddu); f_004b0c56();
    /* 004fa8dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa8df: je 0x4fa8f6 */ if (fZ) goto L_004fa8f6;
L_004fa8e1:; BB(0x004fa8e1);
    /* 004fa8e1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa8e3: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa8e8u); f_0060ee31();
    /* 004fa8e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa8eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa8ed: je 0x4fa8f6 */ if (fZ) goto L_004fa8f6;
L_004fa8ef:; BB(0x004fa8ef);
    /* 004fa8ef: mov dword ptr [ebp + 0xc], 0xc */ W32((u32)(r_ebp+0xcu), 0xcu);
L_004fa8f6:; BB(0x004fa8f6);
    /* 004fa8f6: cmp dword ptr [ebp + 0xc], 0xcf */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xcfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa8fd: jne 0x4fa9f6 */ if (!fZ) goto L_004fa9f6;
L_004fa903:; BB(0x004fa903);
    /* 004fa903: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa905: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fa90au); f_0060ee31();
    /* 004fa90a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa90d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa90f: jne 0x4fa9f6 */ if (!fZ) goto L_004fa9f6;
L_004fa915:; BB(0x004fa915);
    /* 004fa915: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fa91b: jmp 0x4fa929 */ goto L_004fa929;
L_004fa91d:; BB(0x004fa91d);
    /* 004fa91d: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fa921: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fa925: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_004fa929:; BB(0x004fa929);
    /* 004fa929: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fa92d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa930: jge 0x4fa9f6 */ if ((fS==fO)) goto L_004fa9f6;
L_004fa936:; BB(0x004fa936);
    /* 004fa936: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fa93a: mov edx, dword ptr [0x6f9228] */ r_edx = R32((u32)(0x6f9228u));
    /* 004fa940: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004fa944: call 0x4d5dbc */ r_esp -= 4; W32(r_esp, 0x4fa949u); f_004d5dbc();
    /* 004fa949: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa94c: je 0x4fa96a */ if (fZ) goto L_004fa96a;
L_004fa94e:; BB(0x004fa94e);
    /* 004fa94e: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fa952: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004fa958: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004fa95c: call 0x4d5dbc */ r_esp -= 4; W32(r_esp, 0x4fa961u); f_004d5dbc();
    /* 004fa961: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa964: jne 0x4fa9f1 */ if (!fZ) goto L_004fa9f1;
L_004fa96a:; BB(0x004fa96a);
    /* 004fa96a: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fa96e: mov eax, dword ptr [0x6f9228] */ r_eax = R32((u32)(0x6f9228u));
    /* 004fa973: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004fa977: mov edx, dword ptr [ecx + 0x138] */ r_edx = R32((u32)(r_ecx+0x138u));
    /* 004fa97d: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa980: je 0x4fa9f1 */ if (fZ) goto L_004fa9f1;
L_004fa982:; BB(0x004fa982);
    /* 004fa982: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fa986: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004fa98c: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004fa990: mov ecx, dword ptr [edx + 0x138] */ r_ecx = R32((u32)(r_edx+0x138u));
    /* 004fa996: call 0x42087c */ r_esp -= 4; W32(r_esp, 0x4fa99bu); f_0042087c();
    /* 004fa99b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa99d: jne 0x4fa9f1 */ if (!fZ) goto L_004fa9f1;
L_004fa99f:; BB(0x004fa99f);
    /* 004fa99f: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fa9a3: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004fa9a9: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004fa9ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa9ae: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004fa9b4: call 0x4b0d31 */ r_esp -= 4; W32(r_esp, 0x4fa9b9u); f_004b0d31();
    /* 004fa9b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa9bb: je 0x4fa9f1 */ if (fZ) goto L_004fa9f1;
L_004fa9bd:; BB(0x004fa9bd);
    /* 004fa9bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa9bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fa9c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa9c3: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004fa9c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa9c7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004fa9ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa9cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa9cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa9cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa9d1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa9d3: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fa9d7: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004fa9dd: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004fa9e1: mov ecx, dword ptr [edx + 0x138] */ r_ecx = R32((u32)(r_edx+0x138u));
    /* 004fa9e7: call 0x42099e */ r_esp -= 4; W32(r_esp, 0x4fa9ecu); f_0042099e();
    /* 004fa9ec: jmp 0x4faae9 */ goto L_004faae9;
L_004fa9f1:; BB(0x004fa9f1);
    /* 004fa9f1: jmp 0x4fa91d */ goto L_004fa91d;
L_004fa9f6:; BB(0x004fa9f6);
    /* 004fa9f6: cmp dword ptr [ebp + 0xc], 0xd0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xd0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa9fd: jne 0x4faa5a */ if (!fZ) goto L_004faa5a;
L_004fa9ff:; BB(0x004fa9ff);
    /* 004fa9ff: mov eax, dword ptr [0x6f9228] */ r_eax = R32((u32)(0x6f9228u));
    /* 004faa04: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004faa07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004faa08: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004faa0e: call 0x4b0c56 */ r_esp -= 4; W32(r_esp, 0x4faa13u); f_004b0c56();
    /* 004faa13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faa15: je 0x4faa2c */ if (fZ) goto L_004faa2c;
L_004faa17:; BB(0x004faa17);
    /* 004faa17: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004faa19: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4faa1eu); f_0060ee31();
    /* 004faa1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004faa21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faa23: je 0x4faa2c */ if (fZ) goto L_004faa2c;
L_004faa25:; BB(0x004faa25);
    /* 004faa25: mov dword ptr [ebp + 0xc], 0xd */ W32((u32)(r_ebp+0xcu), 0xdu);
L_004faa2c:; BB(0x004faa2c);
    /* 004faa2c: mov edx, dword ptr [0x6f9228] */ r_edx = R32((u32)(0x6f9228u));
    /* 004faa32: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004faa35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faa36: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004faa3c: call 0x4b0d31 */ r_esp -= 4; W32(r_esp, 0x4faa41u); f_004b0d31();
    /* 004faa41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faa43: je 0x4faa5a */ if (fZ) goto L_004faa5a;
L_004faa45:; BB(0x004faa45);
    /* 004faa45: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004faa47: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4faa4cu); f_0060ee31();
    /* 004faa4c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004faa4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faa51: je 0x4faa5a */ if (fZ) goto L_004faa5a;
L_004faa53:; BB(0x004faa53);
    /* 004faa53: mov dword ptr [ebp + 0xc], 0x11 */ W32((u32)(r_ebp+0xcu), 0x11u);
L_004faa5a:; BB(0x004faa5a);
    /* 004faa5a: cmp dword ptr [ebp + 0xc], 0xe9 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xe9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faa61: jne 0x4faa69 */ if (!fZ) goto L_004faa69;
L_004faa63:; BB(0x004faa63);
    /* 004faa63: mov word ptr [ebp - 4], 0xcf */ W16((u32)(r_ebp+0xfffffffcu), 0xcfu);
L_004faa69:; BB(0x004faa69);
    /* 004faa69: cmp dword ptr [ebp + 0xc], 0xea */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xeau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faa70: jne 0x4faa78 */ if (!fZ) goto L_004faa78;
L_004faa72:; BB(0x004faa72);
    /* 004faa72: mov word ptr [ebp - 4], 0xd0 */ W16((u32)(r_ebp+0xfffffffcu), 0xd0u);
L_004faa78:; BB(0x004faa78);
    /* 004faa78: cmp dword ptr [ebp + 0xc], 0xeb */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xebu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faa7f: jne 0x4faa87 */ if (!fZ) goto L_004faa87;
L_004faa81:; BB(0x004faa81);
    /* 004faa81: mov word ptr [ebp - 4], 0xe2 */ W16((u32)(r_ebp+0xfffffffcu), 0xe2u);
L_004faa87:; BB(0x004faa87);
    /* 004faa87: cmp dword ptr [ebp + 0xc], 0xcf */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xcfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faa8e: jne 0x4faaa5 */ if (!fZ) goto L_004faaa5;
L_004faa90:; BB(0x004faa90);
    /* 004faa90: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004faa92: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4faa97u); f_0060ee31();
    /* 004faa97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004faa9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faa9c: jne 0x4faaa5 */ if (!fZ) goto L_004faaa5;
L_004faa9e:; BB(0x004faa9e);
    /* 004faa9e: mov dword ptr [ebp + 0xc], 0xe1 */ W32((u32)(r_ebp+0xcu), 0xe1u);
L_004faaa5:; BB(0x004faaa5);
    /* 004faaa5: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faaa9: je 0x4faad6 */ if (fZ) goto L_004faad6;
L_004faaab:; BB(0x004faaab);
    /* 004faaab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faaad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004faab0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004faab1: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 004faab4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004faab5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004faab8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faab9: push 0x3fb99999 */ { u32 v = 0x3fb99999u; r_esp -= 4; W32(r_esp, v); }
    /* 004faabe: push 0x9999999a */ { u32 v = 0x9999999au; r_esp -= 4; W32(r_esp, v); }
    /* 004faac3: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004faac7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004faac8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004faacb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004faacc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faacf: call 0x42099e */ r_esp -= 4; W32(r_esp, 0x4faad4u); f_0042099e();
    /* 004faad4: jmp 0x4faae9 */ goto L_004faae9;
L_004faad6:; BB(0x004faad6);
    /* 004faad6: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faada: je 0x4faae9 */ if (fZ) goto L_004faae9;
L_004faadc:; BB(0x004faadc);
    /* 004faadc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faade: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004faae1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004faae3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004faae6: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4faae9u); call_ind(t); }
L_004faae9:; BB(0x004faae9);
    /* 004faae9: mov esp, ebp */ r_esp = r_ebp;
    /* 004faaeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004faaec: ret 0x10 */ FN_RET(0x004fa7cf); r_esp += 20; return;
}

void f_004faaef(void) /* FUN_004faaef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004faaef);
    /* 004faaef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004faaf0: mov ebp, esp */ r_ebp = r_esp;
    /* 004faaf2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004faaf3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004faaf6: push 0x3fd00000 */ { u32 v = 0x3fd00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004faafb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faafd: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fab02: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fab05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fab06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fab09: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fab0eu); f_004fa7cf();
    /* 004fab0e: mov esp, ebp */ r_esp = r_ebp;
    /* 004fab10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fab11: ret 4 */ FN_RET(0x004faaef); r_esp += 8; return;
}

void f_004fab14(void) /* FUN_004fab14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fab14);
    /* 004fab14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fab15: mov ebp, esp */ r_ebp = r_esp;
    /* 004fab17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fab18: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fab1b: push 0x3fe80000 */ { u32 v = 0x3fe80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fab20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fab22: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fab27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fab2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fab2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fab2e: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fab33u); f_004fa7cf();
    /* 004fab33: mov esp, ebp */ r_esp = r_ebp;
    /* 004fab35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fab36: ret 4 */ FN_RET(0x004fab14); r_esp += 8; return;
}

void f_004fab39(void) /* FUN_004fab39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fab39);
    /* 004fab39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fab3a: mov ebp, esp */ r_ebp = r_esp;
    /* 004fab3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fab3d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fab40: push 0x3fe80000 */ { u32 v = 0x3fe80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fab45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fab47: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fab4c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fab4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fab50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fab53: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fab58u); f_004fa7cf();
    /* 004fab58: mov esp, ebp */ r_esp = r_ebp;
    /* 004fab5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fab5b: ret 4 */ FN_RET(0x004fab39); r_esp += 8; return;
}

void f_004fab5e(void) /* FUN_004fab5e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fab5e);
    /* 004fab5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fab5f: mov ebp, esp */ r_ebp = r_esp;
    /* 004fab61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fab62: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fab65: push 0x3fd00000 */ { u32 v = 0x3fd00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fab6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fab6c: push 0xe5 */ { u32 v = 0xe5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fab71: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fab74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fab75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fab78: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fab7du); f_004fa7cf();
    /* 004fab7d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fab7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fab80: ret 4 */ FN_RET(0x004fab5e); r_esp += 8; return;
}

void f_004fab83(void) /* FUN_004fab83 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fab83);
    /* 004fab83: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fab84: mov ebp, esp */ r_ebp = r_esp;
    /* 004fab86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fab87: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fab8a: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fab8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fab91: push 0xe7 */ { u32 v = 0xe7u; r_esp -= 4; W32(r_esp, v); }
    /* 004fab96: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fab99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fab9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fab9d: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4faba2u); f_004fa7cf();
    /* 004faba2: mov esp, ebp */ r_esp = r_ebp;
    /* 004faba4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004faba5: ret 4 */ FN_RET(0x004fab83); r_esp += 8; return;
}

void f_004faba8(void) /* FUN_004faba8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004faba8);
    /* 004faba8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004faba9: mov ebp, esp */ r_ebp = r_esp;
    /* 004fabab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fabac: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fabaf: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fabb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fabb6: push 0xe7 */ { u32 v = 0xe7u; r_esp -= 4; W32(r_esp, v); }
    /* 004fabbb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fabbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fabbf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fabc2: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fabc7u); f_004fa7cf();
    /* 004fabc7: mov esp, ebp */ r_esp = r_ebp;
    /* 004fabc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fabca: ret 4 */ FN_RET(0x004faba8); r_esp += 8; return;
}

void f_004fabcd(void) /* FUN_004fabcd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fabcd);
    /* 004fabcd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fabce: mov ebp, esp */ r_ebp = r_esp;
    /* 004fabd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fabd1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fabd4: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fabd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fabdb: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fabe0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fabe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fabe4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fabe7: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fabecu); f_004fa7cf();
    /* 004fabec: mov esp, ebp */ r_esp = r_ebp;
    /* 004fabee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fabef: ret 4 */ FN_RET(0x004fabcd); r_esp += 8; return;
}

void f_004fabf2(void) /* FUN_004fabf2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fabf2);
    /* 004fabf2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fabf3: mov ebp, esp */ r_ebp = r_esp;
    /* 004fabf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fabf6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fabf9: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fabfe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac00: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac05: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fac08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fac09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fac0c: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fac11u); f_004fa7cf();
    /* 004fac11: mov esp, ebp */ r_esp = r_ebp;
    /* 004fac13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fac14: ret 4 */ FN_RET(0x004fabf2); r_esp += 8; return;
}

void f_004fac17(void) /* FUN_004fac17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fac17);
    /* 004fac17: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fac18: mov ebp, esp */ r_ebp = r_esp;
    /* 004fac1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fac1b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fac1e: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac25: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fac27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fac2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fac2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fac2e: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fac33u); f_004fa7cf();
    /* 004fac33: mov esp, ebp */ r_esp = r_ebp;
    /* 004fac35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fac36: ret 4 */ FN_RET(0x004fac17); r_esp += 8; return;
}

void f_004fac39(void) /* FUN_004fac39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fac39);
    /* 004fac39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fac3a: mov ebp, esp */ r_ebp = r_esp;
    /* 004fac3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fac3d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fac40: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac47: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac4c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fac4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fac50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fac53: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fac58u); f_004fa7cf();
    /* 004fac58: mov esp, ebp */ r_esp = r_ebp;
    /* 004fac5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fac5b: ret 4 */ FN_RET(0x004fac39); r_esp += 8; return;
}

void f_004fac5e(void) /* FUN_004fac5e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fac5e);
    /* 004fac5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fac5f: mov ebp, esp */ r_ebp = r_esp;
    /* 004fac61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fac62: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fac65: push 0x3fe80000 */ { u32 v = 0x3fe80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac6c: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac71: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fac74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fac75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fac78: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fac7du); f_004fa7cf();
    /* 004fac7d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fac7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fac80: ret 4 */ FN_RET(0x004fac5e); r_esp += 8; return;
}

void f_004fac83(void) /* FUN_004fac83 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fac83);
    /* 004fac83: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fac84: mov ebp, esp */ r_ebp = r_esp;
    /* 004fac86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fac87: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fac8a: push 0x3fe80000 */ { u32 v = 0x3fe80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac91: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac96: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fac99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fac9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fac9d: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4faca2u); f_004fa7cf();
    /* 004faca2: mov esp, ebp */ r_esp = r_ebp;
    /* 004faca4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004faca5: ret 4 */ FN_RET(0x004fac83); r_esp += 8; return;
}

void f_004faca8(void) /* FUN_004faca8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004faca8);
    /* 004faca8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004faca9: mov ebp, esp */ r_ebp = r_esp;
    /* 004facab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004facac: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004facaf: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004facb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004facb6: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 004facbb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004facbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004facbf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004facc2: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4facc7u); f_004fa7cf();
    /* 004facc7: mov esp, ebp */ r_esp = r_ebp;
    /* 004facc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004facca: ret 4 */ FN_RET(0x004faca8); r_esp += 8; return;
}

void f_004faccd(void) /* FUN_004faccd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004faccd);
    /* 004faccd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004facce: mov ebp, esp */ r_ebp = r_esp;
    /* 004facd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004facd1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004facd4: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004facd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004facdb: push 0xe9 */ { u32 v = 0xe9u; r_esp -= 4; W32(r_esp, v); }
    /* 004face0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004face3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004face4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004face7: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4facecu); f_004fa7cf();
    /* 004facec: mov esp, ebp */ r_esp = r_ebp;
    /* 004facee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004facef: ret 4 */ FN_RET(0x004faccd); r_esp += 8; return;
}

void f_004facf2(void) /* FUN_004facf2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004facf2);
    /* 004facf2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004facf3: mov ebp, esp */ r_ebp = r_esp;
    /* 004facf5: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004facf8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004facfb: mov eax, dword ptr [0x6f92f4] */ r_eax = R32((u32)(0x6f92f4u));
    /* 004fad00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fad01: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004fad04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fad05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fad07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fad09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fad0b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fad0d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fad0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fad11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fad13: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 004fad16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fad17: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004fad1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fad1b: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004fad21: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 004fad24: call 0x4d6aed */ r_esp -= 4; W32(r_esp, 0x4fad29u); f_004d6aed();
    /* 004fad29: mov ecx, eax */ r_ecx = r_eax;
    /* 004fad2b: call 0x4b88fe */ r_esp -= 4; W32(r_esp, 0x4fad30u); f_004b88fe();
    /* 004fad30: mov ecx, eax */ r_ecx = r_eax;
    /* 004fad32: call 0x4b7955 */ r_esp -= 4; W32(r_esp, 0x4fad37u); f_004b7955();
    /* 004fad37: mov ecx, eax */ r_ecx = r_eax;
    /* 004fad39: call 0x4b778f */ r_esp -= 4; W32(r_esp, 0x4fad3eu); f_004b778f();
    /* 004fad3e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fad41: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004fad44: call 0x4b78f3 */ r_esp -= 4; W32(r_esp, 0x4fad49u); f_004b78f3();
    /* 004fad49: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 004fad4c: call 0x4b7ce2 */ r_esp -= 4; W32(r_esp, 0x4fad51u); f_004b7ce2();
    /* 004fad51: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fad55: je 0x4fad71 */ if (fZ) goto L_004fad71;
L_004fad57:; BB(0x004fad57);
    /* 004fad57: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fad5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fad5e: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 004fad63: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fad66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fad67: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fad6a: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fad6fu); f_004fa7cf();
    /* 004fad6f: jmp 0x4fad89 */ goto L_004fad89;
L_004fad71:; BB(0x004fad71);
    /* 004fad71: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fad76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fad78: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 004fad7d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fad80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fad81: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fad84: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fad89u); f_004fa7cf();
L_004fad89:; BB(0x004fad89);
    /* 004fad89: mov esp, ebp */ r_esp = r_ebp;
    /* 004fad8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fad8c: ret 4 */ FN_RET(0x004facf2); r_esp += 8; return;
}

void f_004fad8f(void) /* FUN_004fad8f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fad8f);
    /* 004fad8f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fad90: mov ebp, esp */ r_ebp = r_esp;
    /* 004fad92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fad93: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fad96: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fad9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fad9d: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 004fada2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fada5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fada6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fada9: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fadaeu); f_004fa7cf();
    /* 004fadae: mov esp, ebp */ r_esp = r_ebp;
    /* 004fadb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fadb1: ret 4 */ FN_RET(0x004fad8f); r_esp += 8; return;
}

void f_004fadb4(void) /* FUN_004fadb4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fadb4);
    /* 004fadb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fadb5: mov ebp, esp */ r_ebp = r_esp;
    /* 004fadb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fadb8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fadbb: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fadc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fadc2: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 004fadc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fadca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fadcb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fadce: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fadd3u); f_004fa7cf();
    /* 004fadd3: mov esp, ebp */ r_esp = r_ebp;
    /* 004fadd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fadd6: ret 4 */ FN_RET(0x004fadb4); r_esp += 8; return;
}

void f_004fadd9(void) /* FUN_004fadd9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fadd9);
    /* 004fadd9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fadda: mov ebp, esp */ r_ebp = r_esp;
    /* 004faddc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004faddd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fade0: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fade5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fade7: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fadec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fadef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fadf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fadf3: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fadf8u); f_004fa7cf();
    /* 004fadf8: mov esp, ebp */ r_esp = r_ebp;
    /* 004fadfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fadfb: ret 4 */ FN_RET(0x004fadd9); r_esp += 8; return;
}

void f_004fadfe(void) /* FUN_004fadfe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fadfe);
    /* 004fadfe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fadff: mov ebp, esp */ r_ebp = r_esp;
    /* 004fae01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fae02: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fae05: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fae0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fae0c: push 0xea */ { u32 v = 0xeau; r_esp -= 4; W32(r_esp, v); }
    /* 004fae11: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fae14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fae15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fae18: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fae1du); f_004fa7cf();
    /* 004fae1d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fae1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fae20: ret 4 */ FN_RET(0x004fadfe); r_esp += 8; return;
}

void f_004fae23(void) /* FUN_004fae23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fae23);
    /* 004fae23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fae24: mov ebp, esp */ r_ebp = r_esp;
    /* 004fae26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fae27: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fae2a: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fae2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fae31: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fae36: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fae39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fae3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fae3d: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fae42u); f_004fa7cf();
    /* 004fae42: mov esp, ebp */ r_esp = r_ebp;
    /* 004fae44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fae45: ret 4 */ FN_RET(0x004fae23); r_esp += 8; return;
}

void f_004fae48(void) /* FUN_004fae48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fae48);
    /* 004fae48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fae49: mov ebp, esp */ r_ebp = r_esp;
    /* 004fae4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fae4c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fae4f: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fae54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fae56: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fae5b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fae5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fae5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fae62: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fae67u); f_004fa7cf();
    /* 004fae67: mov esp, ebp */ r_esp = r_ebp;
    /* 004fae69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fae6a: ret 4 */ FN_RET(0x004fae48); r_esp += 8; return;
}

void f_004fae6d(void) /* FUN_004fae6d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fae6d);
    /* 004fae6d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fae6e: mov ebp, esp */ r_ebp = r_esp;
    /* 004fae70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fae71: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fae74: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fae79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fae7b: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fae80: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fae83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fae84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fae87: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fae8cu); f_004fa7cf();
    /* 004fae8c: mov esp, ebp */ r_esp = r_ebp;
    /* 004fae8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fae8f: ret 4 */ FN_RET(0x004fae6d); r_esp += 8; return;
}

void f_004fae92(void) /* FUN_004fae92 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fae92);
    /* 004fae92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fae93: mov ebp, esp */ r_ebp = r_esp;
    /* 004fae95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fae96: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fae99: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fae9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faea0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004faea2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004faea5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faea6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004faea9: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4faeaeu); f_004fa7cf();
    /* 004faeae: mov esp, ebp */ r_esp = r_ebp;
    /* 004faeb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004faeb1: ret 4 */ FN_RET(0x004fae92); r_esp += 8; return;
}

void f_004faeb4(void) /* FUN_004faeb4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004faeb4);
    /* 004faeb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004faeb5: mov ebp, esp */ r_ebp = r_esp;
    /* 004faeb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004faeb8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004faebb: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004faec0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faec2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004faec4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004faec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faec8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004faecb: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4faed0u); f_004fa7cf();
    /* 004faed0: mov esp, ebp */ r_esp = r_ebp;
    /* 004faed2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004faed3: ret 4 */ FN_RET(0x004faeb4); r_esp += 8; return;
}

void f_004faed6(void) /* FUN_004faed6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004faed6);
    /* 004faed6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004faed7: mov ebp, esp */ r_ebp = r_esp;
    /* 004faed9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004faeda: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004faedd: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004faee2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faee4: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 004faee9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004faeec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faeed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004faef0: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4faef5u); f_004fa7cf();
    /* 004faef5: mov esp, ebp */ r_esp = r_ebp;
    /* 004faef7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004faef8: ret 4 */ FN_RET(0x004faed6); r_esp += 8; return;
}

void f_004faefb(void) /* FUN_004faefb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004faefb);
    /* 004faefb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004faefc: mov ebp, esp */ r_ebp = r_esp;
    /* 004faefe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004faeff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004faf02: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004faf07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faf09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004faf0b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004faf0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faf0f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004faf12: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4faf17u); f_004fa7cf();
    /* 004faf17: mov esp, ebp */ r_esp = r_ebp;
    /* 004faf19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004faf1a: ret 4 */ FN_RET(0x004faefb); r_esp += 8; return;
}

void f_004faf1d(void) /* FUN_004faf1d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004faf1d);
    /* 004faf1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004faf1e: mov ebp, esp */ r_ebp = r_esp;
    /* 004faf20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004faf21: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004faf24: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004faf29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faf2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004faf2d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004faf30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faf31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004faf34: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4faf39u); f_004fa7cf();
    /* 004faf39: mov esp, ebp */ r_esp = r_ebp;
    /* 004faf3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004faf3c: ret 4 */ FN_RET(0x004faf1d); r_esp += 8; return;
}

void f_004faf3f(void) /* FUN_004faf3f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004faf3f);
    /* 004faf3f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004faf40: mov ebp, esp */ r_ebp = r_esp;
    /* 004faf42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004faf43: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004faf46: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004faf4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faf4d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004faf4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004faf52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faf53: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004faf56: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4faf5bu); f_004fa7cf();
    /* 004faf5b: mov esp, ebp */ r_esp = r_ebp;
    /* 004faf5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004faf5e: ret 4 */ FN_RET(0x004faf3f); r_esp += 8; return;
}

void f_004faf61(void) /* FUN_004faf61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004faf61);
    /* 004faf61: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004faf62: mov ebp, esp */ r_ebp = r_esp;
    /* 004faf64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004faf65: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004faf68: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004faf6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faf6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004faf71: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004faf74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faf75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004faf78: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4faf7du); f_004fa7cf();
    /* 004faf7d: mov esp, ebp */ r_esp = r_ebp;
    /* 004faf7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004faf80: ret 4 */ FN_RET(0x004faf61); r_esp += 8; return;
}

void f_004faf83(void) /* FUN_004faf83 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004faf83);
    /* 004faf83: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004faf84: mov ebp, esp */ r_ebp = r_esp;
    /* 004faf86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004faf87: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004faf8a: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004faf8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faf91: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004faf93: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004faf96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faf97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004faf9a: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4faf9fu); f_004fa7cf();
    /* 004faf9f: mov esp, ebp */ r_esp = r_ebp;
    /* 004fafa1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fafa2: ret 4 */ FN_RET(0x004faf83); r_esp += 8; return;
}

void f_004fafa5(void) /* FUN_004fafa5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fafa5);
    /* 004fafa5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fafa6: mov ebp, esp */ r_ebp = r_esp;
    /* 004fafa8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fafa9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fafac: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fafb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fafb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fafb5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fafb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fafb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fafbc: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fafc1u); f_004fa7cf();
    /* 004fafc1: mov esp, ebp */ r_esp = r_ebp;
    /* 004fafc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fafc4: ret 4 */ FN_RET(0x004fafa5); r_esp += 8; return;
}

void f_004fafc7(void) /* FUN_004fafc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fafc7);
    /* 004fafc7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fafc8: mov ebp, esp */ r_ebp = r_esp;
    /* 004fafca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fafcb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fafce: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fafd3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fafd5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fafd7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fafda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fafdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fafde: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fafe3u); f_004fa7cf();
    /* 004fafe3: mov esp, ebp */ r_esp = r_ebp;
    /* 004fafe5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fafe6: ret 4 */ FN_RET(0x004fafc7); r_esp += 8; return;
}

void f_004fafe9(void) /* FUN_004fafe9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fafe9);
    /* 004fafe9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fafea: mov ebp, esp */ r_ebp = r_esp;
    /* 004fafec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fafed: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004faff0: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004faff5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faff7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004faff9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004faffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faffd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb000: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb005u); f_004fa7cf();
    /* 004fb005: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb007: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb008: ret 4 */ FN_RET(0x004fafe9); r_esp += 8; return;
}

void f_004fb00b(void) /* FUN_004fb00b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb00b);
    /* 004fb00b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb00c: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb00e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb00f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb012: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb017: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb019: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb01b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb01e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb01f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb022: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb027u); f_004fa7cf();
    /* 004fb027: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb029: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb02a: ret 4 */ FN_RET(0x004fb00b); r_esp += 8; return;
}

void f_004fb02d(void) /* FUN_004fb02d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb02d);
    /* 004fb02d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb02e: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb030: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb031: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb034: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb039: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb03b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb03d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb041: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb044: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb049u); f_004fa7cf();
    /* 004fb049: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb04b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb04c: ret 4 */ FN_RET(0x004fb02d); r_esp += 8; return;
}

void f_004fb04f(void) /* FUN_004fb04f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb04f);
    /* 004fb04f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb050: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb052: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb053: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb056: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb05b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb05d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb05f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb062: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb063: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb066: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb06bu); f_004fa7cf();
    /* 004fb06b: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb06d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb06e: ret 4 */ FN_RET(0x004fb04f); r_esp += 8; return;
}

void f_004fb071(void) /* FUN_004fb071 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb071);
    /* 004fb071: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb072: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb074: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb075: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb078: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb07d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb07f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb081: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb085: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb088: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb08du); f_004fa7cf();
    /* 004fb08d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb08f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb090: ret 4 */ FN_RET(0x004fb071); r_esp += 8; return;
}

void f_004fb093(void) /* FUN_004fb093 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb093);
    /* 004fb093: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb094: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb096: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb097: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb09a: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb09f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0a1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb0a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb0aa: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb0afu); f_004fa7cf();
    /* 004fb0af: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb0b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb0b2: ret 4 */ FN_RET(0x004fb093); r_esp += 8; return;
}

void f_004fb0b5(void) /* FUN_004fb0b5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb0b5);
    /* 004fb0b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0b6: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb0b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0b9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb0bc: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb0c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb0cc: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb0d1u); f_004fa7cf();
    /* 004fb0d1: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb0d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb0d4: ret 4 */ FN_RET(0x004fb0b5); r_esp += 8; return;
}

void f_004fb0d7(void) /* FUN_004fb0d7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb0d7);
    /* 004fb0d7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0d8: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb0da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0db: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb0de: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb0ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb0ee: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb0f3u); f_004fa7cf();
    /* 004fb0f3: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb0f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb0f6: ret 4 */ FN_RET(0x004fb0d7); r_esp += 8; return;
}

void f_004fb0f9(void) /* FUN_004fb0f9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb0f9);
    /* 004fb0f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0fa: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb0fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0fd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb100: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb105: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb107: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb109: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb10c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb10d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb110: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb115u); f_004fa7cf();
    /* 004fb115: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb117: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb118: ret 4 */ FN_RET(0x004fb0f9); r_esp += 8; return;
}

void f_004fb11b(void) /* FUN_004fb11b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb11b);
    /* 004fb11b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb11c: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb11e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb11f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb122: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb127: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb129: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb12b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb12e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb12f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb132: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb137u); f_004fa7cf();
    /* 004fb137: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb13a: ret 4 */ FN_RET(0x004fb11b); r_esp += 8; return;
}

void f_004fb13d(void) /* FUN_004fb13d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb13d);
    /* 004fb13d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb13e: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb140: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb141: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb144: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb149: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb14b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb14d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb151: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb154: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb159u); f_004fa7cf();
    /* 004fb159: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb15b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb15c: ret 4 */ FN_RET(0x004fb13d); r_esp += 8; return;
}

void f_004fb15f(void) /* FUN_004fb15f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb15f);
    /* 004fb15f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb160: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb162: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb163: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb166: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb16b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb16d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb16f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb172: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb173: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb176: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb17bu); f_004fa7cf();
    /* 004fb17b: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb17d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb17e: ret 4 */ FN_RET(0x004fb15f); r_esp += 8; return;
}

void f_004fb181(void) /* FUN_004fb181 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb181);
    /* 004fb181: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb182: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb184: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb185: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb188: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb18d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb18f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb191: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb195: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb198: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb19du); f_004fa7cf();
    /* 004fb19d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb19f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb1a0: ret 4 */ FN_RET(0x004fb181); r_esp += 8; return;
}

void f_004fb1a3(void) /* FUN_004fb1a3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb1a3);
    /* 004fb1a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1a4: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb1a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1a7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb1aa: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1b1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb1b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb1ba: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb1bfu); f_004fa7cf();
    /* 004fb1bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb1c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb1c2: ret 4 */ FN_RET(0x004fb1a3); r_esp += 8; return;
}

void f_004fb1c5(void) /* FUN_004fb1c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb1c5);
    /* 004fb1c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1c6: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb1c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1c9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb1cc: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb1d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb1dc: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb1e1u); f_004fa7cf();
    /* 004fb1e1: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb1e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb1e4: ret 4 */ FN_RET(0x004fb1c5); r_esp += 8; return;
}

void f_004fb1e7(void) /* FUN_004fb1e7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb1e7);
    /* 004fb1e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1e8: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb1ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb1ee: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1f5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fb1f8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004fb1fa: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fb1fc: and eax, 0xc7 */ {  u32 a = r_eax; u32 b = 0xc7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004fb201: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fb204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb205: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fb208: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb209: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb20c: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb211u); f_004fa7cf();
    /* 004fb211: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb213: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb214: ret 8 */ FN_RET(0x004fb1e7); r_esp += 12; return;
}

void f_004fb217(void) /* FUN_004fb217 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb217);
    /* 004fb217: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb218: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb21a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb21b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb21e: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb223: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb225: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb227: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb22a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb22b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb22e: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb233u); f_004fa7cf();
    /* 004fb233: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb235: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb236: ret 4 */ FN_RET(0x004fb217); r_esp += 8; return;
}

void f_004fb239(void) /* FUN_004fb239 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb239);
    /* 004fb239: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb23a: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb23c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb23d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb240: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb245: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb247: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fb24a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004fb24c: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fb24e: and eax, 0xc7 */ {  u32 a = r_eax; u32 b = 0xc7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004fb253: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fb256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb257: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fb25a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb25b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb25e: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb263u); f_004fa7cf();
    /* 004fb263: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb265: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb266: ret 8 */ FN_RET(0x004fb239); r_esp += 12; return;
}

void f_004fb269(void) /* FUN_004fb269 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb269);
    /* 004fb269: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb26a: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb26c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb26d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb270: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb275: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb277: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb279: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb27c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb27d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb280: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb285u); f_004fa7cf();
    /* 004fb285: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb287: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb288: ret 4 */ FN_RET(0x004fb269); r_esp += 8; return;
}

void f_004fb28b(void) /* FUN_004fb28b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb28b);
    /* 004fb28b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb28c: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb28e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb28f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb292: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb297: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb299: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb29b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb29e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb29f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb2a2: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb2a7u); f_004fa7cf();
    /* 004fb2a7: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb2a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb2aa: ret 4 */ FN_RET(0x004fb28b); r_esp += 8; return;
}

void f_004fb2ad(void) /* FUN_004fb2ad */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb2ad);
    /* 004fb2ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2ae: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb2b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2b1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb2b4: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb2c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb2c4: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb2c9u); f_004fa7cf();
    /* 004fb2c9: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb2cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb2cc: ret 4 */ FN_RET(0x004fb2ad); r_esp += 8; return;
}

void f_004fb2cf(void) /* FUN_004fb2cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb2cf);
    /* 004fb2cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2d0: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb2d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2d3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb2d6: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb2e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb2e6: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb2ebu); f_004fa7cf();
    /* 004fb2eb: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb2ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb2ee: ret 4 */ FN_RET(0x004fb2cf); r_esp += 8; return;
}

void f_004fb2f1(void) /* FUN_004fb2f1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb2f1);
    /* 004fb2f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2f2: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb2f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2f5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb2f8: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb301: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb305: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb308: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb30du); f_004fa7cf();
    /* 004fb30d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb30f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb310: ret 4 */ FN_RET(0x004fb2f1); r_esp += 8; return;
}

void f_004fb313(void) /* FUN_004fb313 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb313);
    /* 004fb313: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb314: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb316: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb317: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb31a: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb31f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb321: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb323: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb326: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb327: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb32a: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb32fu); f_004fa7cf();
    /* 004fb32f: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb331: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb332: ret 4 */ FN_RET(0x004fb313); r_esp += 8; return;
}

void f_004fb335(void) /* FUN_004fb335 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb335);
    /* 004fb335: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb336: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb338: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb339: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb33c: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb341: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb343: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb345: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb349: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb34c: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb351u); f_004fa7cf();
    /* 004fb351: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb353: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb354: ret 4 */ FN_RET(0x004fb335); r_esp += 8; return;
}

void f_004fb357(void) /* FUN_004fb357 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb357);
    /* 004fb357: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb358: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb35a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb35b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb35e: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb363: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb365: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb367: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb36a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb36b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb36e: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb373u); f_004fa7cf();
    /* 004fb373: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb375: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb376: ret 4 */ FN_RET(0x004fb357); r_esp += 8; return;
}

void f_004fb379(void) /* FUN_004fb379 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb379);
    /* 004fb379: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb37a: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb37c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb37d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb380: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb385: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb387: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb389: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb38c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb38d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb390: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb395u); f_004fa7cf();
    /* 004fb395: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb397: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb398: ret 4 */ FN_RET(0x004fb379); r_esp += 8; return;
}

void f_004fb39b(void) /* FUN_004fb39b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb39b);
    /* 004fb39b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb39c: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb39e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb39f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb3a2: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3a9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3ab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb3ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb3b2: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb3b7u); f_004fa7cf();
    /* 004fb3b7: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb3b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb3ba: ret 4 */ FN_RET(0x004fb39b); r_esp += 8; return;
}

void f_004fb3bd(void) /* FUN_004fb3bd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb3bd);
    /* 004fb3bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3be: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb3c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3c1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb3c4: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb3d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb3d4: call 0x4fa7cf */ r_esp -= 4; W32(r_esp, 0x4fb3d9u); f_004fa7cf();
    /* 004fb3d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb3db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb3dc: ret 4 */ FN_RET(0x004fb3bd); r_esp += 8; return;
}

void f_004fb3df(void) /* FUN_004fb3df */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb3df);
    /* 004fb3df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3e0: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb3e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb3e7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004fb3ed: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x4fb3f2u); f_0045cd09();
    /* 004fb3f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb3f4: jne 0x4fb3fa */ if (!fZ) goto L_004fb3fa;
L_004fb3f6:; BB(0x004fb3f6);
    /* 004fb3f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fb3f8: jmp 0x4fb435 */ goto L_004fb435;
L_004fb3fa:; BB(0x004fb3fa);
    /* 004fb3fa: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004fb400: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x4fb405u); f_0045cd09();
    /* 004fb405: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb408: jne 0x4fb411 */ if (!fZ) goto L_004fb411;
L_004fb40a:; BB(0x004fb40a);
    /* 004fb40a: mov eax, 1 */ r_eax = 0x1u;
    /* 004fb40f: jmp 0x4fb435 */ goto L_004fb435;
L_004fb411:; BB(0x004fb411);
    /* 004fb411: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004fb413: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fb418u); f_0060ee31();
    /* 004fb418: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb41b: mov esi, eax */ r_esi = r_eax;
    /* 004fb41d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004fb423: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x4fb428u); f_0045cd09();
    /* 004fb428: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb42a: jge 0x4fb433 */ if ((fS==fO)) goto L_004fb433;
L_004fb42c:; BB(0x004fb42c);
    /* 004fb42c: mov eax, 1 */ r_eax = 0x1u;
    /* 004fb431: jmp 0x4fb435 */ goto L_004fb435;
L_004fb433:; BB(0x004fb433);
    /* 004fb433: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fb435:; BB(0x004fb435);
    /* 004fb435: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fb436: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb438: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb439: ret  */ FN_RET(0x004fb3df); r_esp += 4; return;
}

void f_004fb43a(void) /* FUN_004fb43a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb43a);
    /* 004fb43a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb43b: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb43d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb43e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb441: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004fb447: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x4fb44cu); f_0045cd09();
    /* 004fb44c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb44e: jne 0x4fb454 */ if (!fZ) goto L_004fb454;
L_004fb450:; BB(0x004fb450);
    /* 004fb450: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fb452: jmp 0x4fb459 */ goto L_004fb459;
L_004fb454:; BB(0x004fb454);
    /* 004fb454: mov eax, 1 */ r_eax = 0x1u;
L_004fb459:; BB(0x004fb459);
    /* 004fb459: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb45b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb45c: ret  */ FN_RET(0x004fb43a); r_esp += 4; return;
}

void f_004fb45d(void) /* FUN_004fb45d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb45d);
    /* 004fb45d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb45e: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb460: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb461: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb462: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb465: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004fb46b: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x4fb470u); f_0045cd09();
    /* 004fb470: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb472: jne 0x4fb478 */ if (!fZ) goto L_004fb478;
L_004fb474:; BB(0x004fb474);
    /* 004fb474: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fb476: jmp 0x4fb49c */ goto L_004fb49c;
L_004fb478:; BB(0x004fb478);
    /* 004fb478: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb47a: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fb47fu); f_0060ee31();
    /* 004fb47f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb482: mov esi, eax */ r_esi = r_eax;
    /* 004fb484: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004fb48a: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x4fb48fu); f_0045cd09();
    /* 004fb48f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb491: jge 0x4fb49a */ if ((fS==fO)) goto L_004fb49a;
L_004fb493:; BB(0x004fb493);
    /* 004fb493: mov eax, 1 */ r_eax = 0x1u;
    /* 004fb498: jmp 0x4fb49c */ goto L_004fb49c;
L_004fb49a:; BB(0x004fb49a);
    /* 004fb49a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fb49c:; BB(0x004fb49c);
    /* 004fb49c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fb49d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb49f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb4a0: ret  */ FN_RET(0x004fb45d); r_esp += 4; return;
}

void f_004fb4a1(void) /* FUN_004fb4a1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb4a1);
    /* 004fb4a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4a2: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb4a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb4a9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004fb4af: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x4fb4b4u); f_0045cd09();
    /* 004fb4b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb4b6: jne 0x4fb4bc */ if (!fZ) goto L_004fb4bc;
L_004fb4b8:; BB(0x004fb4b8);
    /* 004fb4b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fb4ba: jmp 0x4fb4e0 */ goto L_004fb4e0;
L_004fb4bc:; BB(0x004fb4bc);
    /* 004fb4bc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4be: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4fb4c3u); f_0060ee31();
    /* 004fb4c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb4c6: mov esi, eax */ r_esi = r_eax;
    /* 004fb4c8: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004fb4ce: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x4fb4d3u); f_0045cd09();
    /* 004fb4d3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb4d5: jge 0x4fb4de */ if ((fS==fO)) goto L_004fb4de;
L_004fb4d7:; BB(0x004fb4d7);
    /* 004fb4d7: mov eax, 1 */ r_eax = 0x1u;
    /* 004fb4dc: jmp 0x4fb4e0 */ goto L_004fb4e0;
L_004fb4de:; BB(0x004fb4de);
    /* 004fb4de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fb4e0:; BB(0x004fb4e0);
    /* 004fb4e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fb4e1: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb4e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb4e4: ret  */ FN_RET(0x004fb4a1); r_esp += 4; return;
}

void f_004fb4f0(void) /* FUN_004fb4f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb4f0);
    /* 004fb4f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb4f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb4f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb4fa: call 0x4d1de7 */ r_esp -= 4; W32(r_esp, 0x4fb4ffu); f_004d1de7();
    /* 004fb4ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb502: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004fb505: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb507: je 0x4fb515 */ if (fZ) goto L_004fb515;
L_004fb509:; BB(0x004fb509);
    /* 004fb509: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb50c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb50d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4fb512u); f_0048ac1b();
    /* 004fb512: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fb515:; BB(0x004fb515);
    /* 004fb515: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb518: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb51a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb51b: ret 4 */ FN_RET(0x004fb4f0); r_esp += 8; return;
}

void f_004fb520(void) /* FUN_004fb520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb520);
    /* 004fb520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb521: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb527: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb52a: call 0x4fa79d */ r_esp -= 4; W32(r_esp, 0x4fb52fu); f_004fa79d();
    /* 004fb52f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb532: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004fb535: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb537: je 0x4fb545 */ if (fZ) goto L_004fb545;
L_004fb539:; BB(0x004fb539);
    /* 004fb539: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb53c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb53d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4fb542u); f_0048ac1b();
    /* 004fb542: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fb545:; BB(0x004fb545);
    /* 004fb545: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb548: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb54a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb54b: ret 4 */ FN_RET(0x004fb520); r_esp += 8; return;
}

void f_004fb550(void) /* FUN_004fb550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb550);
    /* 004fb550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb551: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb557: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb55a: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004fb560: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb563: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 004fb56a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb56d: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 004fb574: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb577: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 004fb57e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb581: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
    /* 004fb588: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb58b: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
    /* 004fb592: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb595: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
    /* 004fb59c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb59f: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 004fb5a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb5a9: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 004fb5b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb5b3: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
    /* 004fb5ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb5bd: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 004fb5c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb5c7: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 004fb5ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb5d1: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 004fb5d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb5db: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 004fb5e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb5e5: mov dword ptr [edx + 0x74], 0 */ W32((u32)(r_edx+0x74u), 0x0u);
    /* 004fb5ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb5ef: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 004fb5f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb5f9: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
    /* 004fb600: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb603: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
    /* 004fb60d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb610: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
    /* 004fb61a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb61d: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 004fb627: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb62a: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
    /* 004fb634: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb637: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 004fb641: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb644: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 004fb64e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb651: mov word ptr [edx + 0x18], 0 */ W16((u32)(r_edx+0x18u), 0x0u);
    /* 004fb657: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb65a: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb65c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb65d: ret  */ FN_RET(0x004fb550); r_esp += 4; return;
}

void f_004fb65e(void) /* FUN_004fb65e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb65e);
    /* 004fb65e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb65f: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb661: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb662: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb665: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb668: call 0x4fec0a */ r_esp -= 4; W32(r_esp, 0x4fb66du); f_004fec0a();
    /* 004fb66d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb66f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb670: ret  */ FN_RET(0x004fb65e); r_esp += 4; return;
}

void f_004fb671(void) /* FUN_004fb671 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb671);
    /* 004fb671: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb672: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb674: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fb677: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004fb67a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb67d: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fb681: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fb683: jle 0x4fb68d */ if ((fZ||fS!=fO)) goto L_004fb68d;
L_004fb685:; BB(0x004fb685);
    /* 004fb685: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb688: call 0x4fec0a */ r_esp -= 4; W32(r_esp, 0x4fb68du); f_004fec0a();
L_004fb68d:; BB(0x004fb68d);
    /* 004fb68d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb690: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
    /* 004fb696: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb699: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004fb69d: mov word ptr [eax + 0x18], cx */ W16((u32)(r_eax+0x18u), (u16)r_ecx);
    /* 004fb6a1: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb6a4: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 004fb6ab: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb6ae: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 004fb6b5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb6b8: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 004fb6bf: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb6c2: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 004fb6c9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb6cc: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 004fb6d3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb6d6: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 004fb6dd: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb6e0: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fb6e4: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004fb6e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb6e8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb6edu); f_0048ab58();
    /* 004fb6ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb6f0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb6f3: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 004fb6f6: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb6fc: jmp 0x4fb70a */ goto L_004fb70a;
L_004fb6fe:; BB(0x004fb6fe);
    /* 004fb6fe: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fb702: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fb706: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_004fb70a:; BB(0x004fb70a);
    /* 004fb70a: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb70e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb711: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 004fb715: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb717: jge 0x4fb72c */ if ((fS==fO)) goto L_004fb72c;
L_004fb719:; BB(0x004fb719);
    /* 004fb719: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb71d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb720: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004fb723: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 004fb72a: jmp 0x4fb6fe */ goto L_004fb6fe;
L_004fb72c:; BB(0x004fb72c);
    /* 004fb72c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb72f: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fb733: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004fb736: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb737: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb73cu); f_0048ab58();
    /* 004fb73c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb73f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb742: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 004fb745: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb74b: jmp 0x4fb759 */ goto L_004fb759;
L_004fb74d:; BB(0x004fb74d);
    /* 004fb74d: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fb751: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fb755: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004fb759:; BB(0x004fb759);
    /* 004fb759: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb75d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb760: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fb764: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb766: jge 0x4fb77b */ if ((fS==fO)) goto L_004fb77b;
L_004fb768:; BB(0x004fb768);
    /* 004fb768: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb76c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb76f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004fb772: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
    /* 004fb779: jmp 0x4fb74d */ goto L_004fb74d;
L_004fb77b:; BB(0x004fb77b);
    /* 004fb77b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb77e: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 004fb782: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004fb785: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb786: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb78bu); f_0048ab58();
    /* 004fb78b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb78e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb791: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 004fb794: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb797: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fb79b: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004fb79e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb79f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb7a4u); f_0048ab58();
    /* 004fb7a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb7a7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb7aa: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 004fb7ad: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb7b3: jmp 0x4fb7c1 */ goto L_004fb7c1;
L_004fb7b5:; BB(0x004fb7b5);
    /* 004fb7b5: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fb7b9: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fb7bd: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_004fb7c1:; BB(0x004fb7c1);
    /* 004fb7c1: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb7c5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb7c8: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 004fb7cc: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb7ce: jge 0x4fb7e3 */ if ((fS==fO)) goto L_004fb7e3;
L_004fb7d0:; BB(0x004fb7d0);
    /* 004fb7d0: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb7d4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb7d7: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 004fb7da: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 004fb7e1: jmp 0x4fb7b5 */ goto L_004fb7b5;
L_004fb7e3:; BB(0x004fb7e3);
    /* 004fb7e3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb7e6: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fb7ea: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004fb7ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb7ee: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb7f3u); f_0048ab58();
    /* 004fb7f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb7f6: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb7f9: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 004fb7fc: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb7ff: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fb803: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004fb806: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb807: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb80cu); f_0048ab58();
    /* 004fb80c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb80f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb812: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 004fb815: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb818: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fb81c: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004fb81f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb820: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb825u); f_0048ab58();
    /* 004fb825: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb828: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb82b: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 004fb82e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb831: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fb835: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004fb838: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb839: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb83eu); f_0048ab58();
    /* 004fb83e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb841: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb844: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 004fb847: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb84d: jmp 0x4fb85b */ goto L_004fb85b;
L_004fb84f:; BB(0x004fb84f);
    /* 004fb84f: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fb853: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fb857: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004fb85b:; BB(0x004fb85b);
    /* 004fb85b: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb85f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb862: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fb866: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb868: jge 0x4fb87d */ if ((fS==fO)) goto L_004fb87d;
L_004fb86a:; BB(0x004fb86a);
    /* 004fb86a: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb86e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb871: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004fb874: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
    /* 004fb87b: jmp 0x4fb84f */ goto L_004fb84f;
L_004fb87d:; BB(0x004fb87d);
    /* 004fb87d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb880: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 004fb884: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004fb887: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb888: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb88du); f_0048ab58();
    /* 004fb88d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb890: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb893: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 004fb896: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb89c: jmp 0x4fb8aa */ goto L_004fb8aa;
L_004fb89e:; BB(0x004fb89e);
    /* 004fb89e: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fb8a2: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fb8a6: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_004fb8aa:; BB(0x004fb8aa);
    /* 004fb8aa: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb8ae: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb8b1: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 004fb8b5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb8b7: jge 0x4fb8cc */ if ((fS==fO)) goto L_004fb8cc;
L_004fb8b9:; BB(0x004fb8b9);
    /* 004fb8b9: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb8bd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb8c0: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 004fb8c3: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 004fb8ca: jmp 0x4fb89e */ goto L_004fb89e;
L_004fb8cc:; BB(0x004fb8cc);
    /* 004fb8cc: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb8cf: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fb8d3: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004fb8d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb8d7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb8dcu); f_0048ab58();
    /* 004fb8dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb8df: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb8e2: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 004fb8e8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb8eb: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fb8ef: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004fb8f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb8f3: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb8f8u); f_0048ab58();
    /* 004fb8f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb8fb: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb8fe: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 004fb904: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb907: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fb90b: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004fb90e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb90f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb914u); f_0048ab58();
    /* 004fb914: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb917: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb91a: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 004fb920: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb923: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fb927: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004fb929: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb92a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb92fu); f_0048ab58();
    /* 004fb92f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb932: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb935: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 004fb938: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb93e: jmp 0x4fb94c */ goto L_004fb94c;
L_004fb940:; BB(0x004fb940);
    /* 004fb940: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fb944: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fb948: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004fb94c:; BB(0x004fb94c);
    /* 004fb94c: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb950: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb953: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fb957: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb959: jge 0x4fb96f */ if ((fS==fO)) goto L_004fb96f;
L_004fb95b:; BB(0x004fb95b);
    /* 004fb95b: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb95f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb962: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 004fb965: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fb969: mov word ptr [eax + ecx*2], dx */ W16((u32)(r_eax+r_ecx*2), (u16)r_edx);
    /* 004fb96d: jmp 0x4fb940 */ goto L_004fb940;
L_004fb96f:; BB(0x004fb96f);
    /* 004fb96f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb972: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb975: mov dx, word ptr [ecx + 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x18u))) & 0xffffu);
    /* 004fb979: mov word ptr [eax + 0x3c], dx */ W16((u32)(r_eax+0x3cu), (u16)r_edx);
    /* 004fb97d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb980: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fb984: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004fb986: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb987: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb98cu); f_0048ab58();
    /* 004fb98c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb98f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb992: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 004fb995: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb99b: jmp 0x4fb9a9 */ goto L_004fb9a9;
L_004fb99d:; BB(0x004fb99d);
    /* 004fb99d: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fb9a1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fb9a5: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004fb9a9:; BB(0x004fb9a9);
    /* 004fb9a9: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb9ad: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb9b0: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fb9b4: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb9b6: jge 0x4fb9ca */ if ((fS==fO)) goto L_004fb9ca;
L_004fb9b8:; BB(0x004fb9b8);
    /* 004fb9b8: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb9bc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb9bf: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004fb9c2: mov word ptr [eax + ecx*2], 0 */ W16((u32)(r_eax+r_ecx*2), 0x0u);
    /* 004fb9c8: jmp 0x4fb99d */ goto L_004fb99d;
L_004fb9ca:; BB(0x004fb9ca);
    /* 004fb9ca: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb9cd: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 004fb9d1: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004fb9d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb9d4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fb9d9u); f_0048ab58();
    /* 004fb9d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb9dc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb9df: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 004fb9e2: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb9e8: jmp 0x4fb9f6 */ goto L_004fb9f6;
L_004fb9ea:; BB(0x004fb9ea);
    /* 004fb9ea: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fb9ee: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fb9f2: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_004fb9f6:; BB(0x004fb9f6);
    /* 004fb9f6: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fb9fa: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb9fd: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 004fba01: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fba03: jge 0x4fba17 */ if ((fS==fO)) goto L_004fba17;
L_004fba05:; BB(0x004fba05);
    /* 004fba05: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fba09: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fba0c: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 004fba0f: mov word ptr [edx + eax*2], 0 */ W16((u32)(r_edx+r_eax*2), 0x0u);
    /* 004fba15: jmp 0x4fb9ea */ goto L_004fb9ea;
L_004fba17:; BB(0x004fba17);
    /* 004fba17: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fba1a: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fba1e: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004fba20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fba21: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fba26u); f_0048ab58();
    /* 004fba26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fba29: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fba2c: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 004fba2f: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fba35: jmp 0x4fba43 */ goto L_004fba43;
L_004fba37:; BB(0x004fba37);
    /* 004fba37: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fba3b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fba3f: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004fba43:; BB(0x004fba43);
    /* 004fba43: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fba47: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fba4a: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fba4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fba50: jge 0x4fba64 */ if ((fS==fO)) goto L_004fba64;
L_004fba52:; BB(0x004fba52);
    /* 004fba52: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004fba56: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fba59: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004fba5c: mov word ptr [eax + ecx*2], 0 */ W16((u32)(r_eax+r_ecx*2), 0x0u);
    /* 004fba62: jmp 0x4fba37 */ goto L_004fba37;
L_004fba64:; BB(0x004fba64);
    /* 004fba64: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fba67: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 004fba6b: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004fba6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fba6e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fba73u); f_0048ab58();
    /* 004fba73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fba76: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fba79: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 004fba7c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fba7f: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fba83: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004fba85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fba86: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fba8bu); f_0048ab58();
    /* 004fba8b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fba8e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fba91: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 004fba94: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fba97: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fba9b: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004fba9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fba9e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fbaa3u); f_0048ab58();
    /* 004fbaa3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fbaa6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbaa9: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 004fbaac: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbaaf: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fbab3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fbab6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbab9: lea edx, [ecx*4 + 4] */ r_edx = (u32)(r_ecx*4+0x4u);
    /* 004fbac0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbac1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fbac6u); f_0048ab58();
    /* 004fbac6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fbac9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004fbacc: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbad0: je 0x4fbb1d */ if (fZ) goto L_004fbb1d;
L_004fbad2:; BB(0x004fbad2);
    /* 004fbad2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fbad5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbad8: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004fbada: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbadd: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004fbae0: mov dword ptr [ebp - 0x1c], 4 */ W32((u32)(r_ebp+0xffffffe4u), 0x4u);
    /* 004fbae7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fbaea: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fbaed: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_004fbaf0:; BB(0x004fbaf0);
    /* 004fbaf0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbaf3: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004fbaf6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004fbaf9: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbafd: jl 0x4fbb12 */ if ((fS!=fO)) goto L_004fbb12;
L_004fbaff:; BB(0x004fbaff);
    /* 004fbaff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fbb02: call 0x4b78d6 */ r_esp -= 4; W32(r_esp, 0x4fbb07u); f_004b78d6();
    /* 004fbb07: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fbb0a: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fbb0d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004fbb10: jmp 0x4fbaf0 */ goto L_004fbaf0;
L_004fbb12:; BB(0x004fbb12);
    /* 004fbb12: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fbb15: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fbb18: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004fbb1b: jmp 0x4fbb24 */ goto L_004fbb24;
L_004fbb1d:; BB(0x004fbb1d);
    /* 004fbb1d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fbb24:; BB(0x004fbb24);
    /* 004fbb24: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbb27: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004fbb2a: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 004fbb30: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbb33: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fbb37: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004fbb3a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbb3d: lea eax, [edx*4 + 4] */ r_eax = (u32)(r_edx*4+0x4u);
    /* 004fbb44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fbb45: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fbb4au); f_0048ab58();
    /* 004fbb4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fbb4d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fbb50: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbb54: je 0x4fbba1 */ if (fZ) goto L_004fbba1;
L_004fbb56:; BB(0x004fbb56);
    /* 004fbb56: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fbb59: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbb5c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004fbb5e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbb61: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004fbb64: mov dword ptr [ebp - 0x28], 4 */ W32((u32)(r_ebp+0xffffffd8u), 0x4u);
    /* 004fbb6b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fbb6e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fbb71: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_004fbb74:; BB(0x004fbb74);
    /* 004fbb74: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fbb77: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004fbb7a: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004fbb7d: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbb81: jl 0x4fbb96 */ if ((fS!=fO)) goto L_004fbb96;
L_004fbb83:; BB(0x004fbb83);
    /* 004fbb83: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fbb86: call 0x4b78d6 */ r_esp -= 4; W32(r_esp, 0x4fbb8bu); f_004b78d6();
    /* 004fbb8b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fbb8e: add eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fbb91: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004fbb94: jmp 0x4fbb74 */ goto L_004fbb74;
L_004fbb96:; BB(0x004fbb96);
    /* 004fbb96: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fbb99: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fbb9c: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004fbb9f: jmp 0x4fbba8 */ goto L_004fbba8;
L_004fbba1:; BB(0x004fbba1);
    /* 004fbba1: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_004fbba8:; BB(0x004fbba8);
    /* 004fbba8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbbab: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fbbae: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 004fbbb4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbbb7: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 004fbbbb: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004fbbbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbbbf: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4fbbc4u); f_0048ab58();
    /* 004fbbc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fbbc7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbbca: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 004fbbd0: mov esp, ebp */ r_esp = r_ebp;
    /* 004fbbd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbbd3: ret 4 */ FN_RET(0x004fb671); r_esp += 8; return;
}

void f_004fbbd6(void) /* FUN_004fbbd6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fbbd6);
    /* 004fbbd6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fbbd7: mov ebp, esp */ r_ebp = r_esp;
    /* 004fbbd9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fbbdc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fbbdf: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbbe5: jmp 0x4fbbf3 */ goto L_004fbbf3;
L_004fbbe7:; BB(0x004fbbe7);
    /* 004fbbe7: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fbbeb: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fbbef: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004fbbf3:; BB(0x004fbbf3);
    /* 004fbbf3: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbbf7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbbfa: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fbbfe: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbc00: jge 0x4fbc14 */ if ((fS==fO)) goto L_004fbc14;
L_004fbc02:; BB(0x004fbc02);
    /* 004fbc02: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbc06: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbc09: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004fbc0c: mov word ptr [eax + ecx*2], 0 */ W16((u32)(r_eax+r_ecx*2), 0x0u);
    /* 004fbc12: jmp 0x4fbbe7 */ goto L_004fbbe7;
L_004fbc14:; BB(0x004fbc14);
    /* 004fbc14: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbc1a: jmp 0x4fbc28 */ goto L_004fbc28;
L_004fbc1c:; BB(0x004fbc1c);
    /* 004fbc1c: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fbc20: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fbc24: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_004fbc28:; BB(0x004fbc28);
    /* 004fbc28: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbc2c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbc2f: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fbc33: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbc35: jge 0x4fbc49 */ if ((fS==fO)) goto L_004fbc49;
L_004fbc37:; BB(0x004fbc37);
    /* 004fbc37: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbc3b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbc3e: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004fbc41: mov word ptr [ecx + edx*2], 0 */ W16((u32)(r_ecx+r_edx*2), 0x0u);
    /* 004fbc47: jmp 0x4fbc1c */ goto L_004fbc1c;
L_004fbc49:; BB(0x004fbc49);
    /* 004fbc49: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbc4f: jmp 0x4fbc5d */ goto L_004fbc5d;
L_004fbc51:; BB(0x004fbc51);
    /* 004fbc51: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fbc55: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fbc59: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004fbc5d:; BB(0x004fbc5d);
    /* 004fbc5d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbc61: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbc64: movsx edx, word ptr [ecx + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 004fbc68: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbc6a: jge 0x4fbc7e */ if ((fS==fO)) goto L_004fbc7e;
L_004fbc6c:; BB(0x004fbc6c);
    /* 004fbc6c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbc70: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbc73: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 004fbc76: mov word ptr [edx + eax*2], 0 */ W16((u32)(r_edx+r_eax*2), 0x0u);
    /* 004fbc7c: jmp 0x4fbc51 */ goto L_004fbc51;
L_004fbc7e:; BB(0x004fbc7e);
    /* 004fbc7e: mov esp, ebp */ r_esp = r_ebp;
    /* 004fbc80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbc81: ret  */ FN_RET(0x004fbbd6); r_esp += 4; return;
}

void f_004fbc82(void) /* FUN_004fbc82 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fbc82);
    /* 004fbc82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fbc83: mov ebp, esp */ r_ebp = r_esp;
    /* 004fbc85: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fbc88: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fbc8b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbc8e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004fbc91: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fbc94: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbc97: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004fbc9a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbc9d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004fbca0: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fbca3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbca6: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 004fbca9: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbcaf: jmp 0x4fbcbd */ goto L_004fbcbd;
L_004fbcb1:; BB(0x004fbcb1);
    /* 004fbcb1: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fbcb5: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fbcb9: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004fbcbd:; BB(0x004fbcbd);
    /* 004fbcbd: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbcc1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbcc4: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fbcc8: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbcca: jge 0x4fbd0b */ if ((fS==fO)) goto L_004fbd0b;
L_004fbccc:; BB(0x004fbccc);
    /* 004fbccc: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbcd0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbcd3: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004fbcd6: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbcda: jne 0x4fbd09 */ if (!fZ) goto L_004fbd09;
L_004fbcdc:; BB(0x004fbcdc);
    /* 004fbcdc: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbce0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbce3: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004fbce6: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbcea: jne 0x4fbd09 */ if (!fZ) goto L_004fbd09;
L_004fbcec:; BB(0x004fbcec);
    /* 004fbcec: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbcf0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbcf3: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 004fbcf6: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004fbcf9: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fbcfc: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbd00: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbd03: mov eax, dword ptr [eax + 0x7c] */ r_eax = R32((u32)(r_eax+0x7cu));
    /* 004fbd06: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
L_004fbd09:; BB(0x004fbd09);
    /* 004fbd09: jmp 0x4fbcb1 */ goto L_004fbcb1;
L_004fbd0b:; BB(0x004fbd0b);
    /* 004fbd0b: mov esp, ebp */ r_esp = r_ebp;
    /* 004fbd0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbd0e: ret 4 */ FN_RET(0x004fbc82); r_esp += 8; return;
}

void f_004fbd11(void) /* FUN_004fbd11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fbd11);
    /* 004fbd11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fbd12: mov ebp, esp */ r_ebp = r_esp;
    /* 004fbd14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbd15: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fbd18: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fbd1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbd1f: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004fbd22: mov dword ptr [edx + eax*4], 1 */ W32((u32)(r_edx+r_eax*4), 0x1u);
    /* 004fbd29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbd2c: call 0x4fe5cb */ r_esp -= 4; W32(r_esp, 0x4fbd31u); f_004fe5cb();
    /* 004fbd31: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004fbd34: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbd37: jne 0x4fbd47 */ if (!fZ) goto L_004fbd47;
L_004fbd39:; BB(0x004fbd39);
    /* 004fbd39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbd3c: call 0x4fe71c */ r_esp -= 4; W32(r_esp, 0x4fbd41u); f_004fe71c();
    /* 004fbd41: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 004fbd45: jmp 0x4fbd4b */ goto L_004fbd4b;
L_004fbd47:; BB(0x004fbd47);
    /* 004fbd47: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004fbd4b:; BB(0x004fbd4b);
    /* 004fbd4b: mov esp, ebp */ r_esp = r_ebp;
    /* 004fbd4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbd4e: ret 4 */ FN_RET(0x004fbd11); r_esp += 8; return;
}

void f_004fbd51(void) /* FUN_004fbd51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fbd51);
    /* 004fbd51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fbd52: mov ebp, esp */ r_ebp = r_esp;
    /* 004fbd54: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fbd57: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fbd5a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbd5d: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
    /* 004fbd64: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbd67: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004fbd6b: mov word ptr [ecx + 0x1a], dx */ W16((u32)(r_ecx+0x1au), (u16)r_edx);
    /* 004fbd6f: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbd75: jmp 0x4fbd83 */ goto L_004fbd83;
L_004fbd77:; BB(0x004fbd77);
    /* 004fbd77: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fbd7b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fbd7f: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004fbd83:; BB(0x004fbd83);
    /* 004fbd83: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbd87: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbd8a: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fbd8e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbd90: jge 0x4fbda5 */ if ((fS==fO)) goto L_004fbda5;
L_004fbd92:; BB(0x004fbd92);
    /* 004fbd92: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbd96: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbd99: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004fbd9c: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
    /* 004fbda3: jmp 0x4fbd77 */ goto L_004fbd77;
L_004fbda5:; BB(0x004fbda5);
    /* 004fbda5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbda8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fbdab: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 004fbdae: mov esp, ebp */ r_esp = r_ebp;
    /* 004fbdb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbdb1: ret 8 */ FN_RET(0x004fbd51); r_esp += 12; return;
}

void f_004fbdb4(void) /* FUN_004fbdb4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fbdb4);
    /* 004fbdb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fbdb5: mov ebp, esp */ r_ebp = r_esp;
    /* 004fbdb7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fbdba: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fbdbd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbdc0: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004fbdc3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbdc6: add ecx, dword ptr [edx + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fbdc9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbdcc: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 004fbdcf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbdd2: movsx edx, word ptr [ecx + 0x1a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1au));
    /* 004fbdd6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbdd9: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004fbddc: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004fbddf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbde2: add edx, dword ptr [eax + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x28u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fbde5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbde8: movsx eax, word ptr [ecx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x1au));
    /* 004fbdec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbdef: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 004fbdf2: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 004fbdf5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbdf8: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fbdfc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbdff: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004fbe02: mov dword ptr [edx + eax*4], 1 */ W32((u32)(r_edx+r_eax*4), 0x1u);
    /* 004fbe09: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe0c: call 0x4fe51b */ r_esp -= 4; W32(r_esp, 0x4fbe11u); f_004fe51b();
    /* 004fbe11: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004fbe15: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbe19: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe1c: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004fbe1f: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbe23: je 0x4fbe53 */ if (fZ) goto L_004fbe53;
L_004fbe25:; BB(0x004fbe25);
    /* 004fbe25: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe28: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 004fbe2f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe32: call 0x4fe5cb */ r_esp -= 4; W32(r_esp, 0x4fbe37u); f_004fe5cb();
    /* 004fbe37: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004fbe3a: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbe3d: jg 0x4fbe4d */ if ((!fZ&&fS==fO)) goto L_004fbe4d;
L_004fbe3f:; BB(0x004fbe3f);
    /* 004fbe3f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe42: call 0x4fe71c */ r_esp -= 4; W32(r_esp, 0x4fbe47u); f_004fe71c();
    /* 004fbe47: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 004fbe4b: jmp 0x4fbe57 */ goto L_004fbe57;
L_004fbe4d:; BB(0x004fbe4d);
    /* 004fbe4d: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fbe51: jmp 0x4fbe57 */ goto L_004fbe57;
L_004fbe53:; BB(0x004fbe53);
    /* 004fbe53: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004fbe57:; BB(0x004fbe57);
    /* 004fbe57: mov esp, ebp */ r_esp = r_ebp;
    /* 004fbe59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbe5a: ret  */ FN_RET(0x004fbdb4); r_esp += 4; return;
}

void f_004fbe5b(void) /* FUN_004fbe5b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fbe5b);
    /* 004fbe5b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fbe5c: mov ebp, esp */ r_ebp = r_esp;
    /* 004fbe5e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fbe61: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fbe64: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbe68: jne 0x4fbe73 */ if (!fZ) goto L_004fbe73;
L_004fbe6a:; BB(0x004fbe6a);
    /* 004fbe6a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe6d: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 004fbe70: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_004fbe73:; BB(0x004fbe73);
    /* 004fbe73: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe76: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004fbe79: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fbe7c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe7f: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 004fbe82: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe85: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fbe89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe8c: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 004fbe8f: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004fbe92: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fbe95: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe98: movsx edx, word ptr [ecx + 0x1a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1au));
    /* 004fbe9c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe9f: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 004fbea2: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 004fbea5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbea8: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fbeac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbeaf: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004fbeb2: mov dword ptr [edx + eax*4], 1 */ W32((u32)(r_edx+r_eax*4), 0x1u);
    /* 004fbeb9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbebc: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fbec0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbec3: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004fbec6: mov dword ptr [eax + ecx*4], 1 */ W32((u32)(r_eax+r_ecx*4), 0x1u);
    /* 004fbecd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbed0: call 0x4fe51b */ r_esp -= 4; W32(r_esp, 0x4fbed5u); f_004fe51b();
    /* 004fbed5: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004fbed9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbedd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbee0: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004fbee3: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbee7: je 0x4fbf17 */ if (fZ) goto L_004fbf17;
L_004fbee9:; BB(0x004fbee9);
    /* 004fbee9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbeec: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 004fbef3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbef6: call 0x4fe5cb */ r_esp -= 4; W32(r_esp, 0x4fbefbu); f_004fe5cb();
    /* 004fbefb: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004fbefe: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbf01: jg 0x4fbf11 */ if ((!fZ&&fS==fO)) goto L_004fbf11;
L_004fbf03:; BB(0x004fbf03);
    /* 004fbf03: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbf06: call 0x4fe71c */ r_esp -= 4; W32(r_esp, 0x4fbf0bu); f_004fe71c();
    /* 004fbf0b: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 004fbf0f: jmp 0x4fbf1b */ goto L_004fbf1b;
L_004fbf11:; BB(0x004fbf11);
    /* 004fbf11: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fbf15: jmp 0x4fbf1b */ goto L_004fbf1b;
L_004fbf17:; BB(0x004fbf17);
    /* 004fbf17: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004fbf1b:; BB(0x004fbf1b);
    /* 004fbf1b: mov esp, ebp */ r_esp = r_ebp;
    /* 004fbf1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbf1e: ret 4 */ FN_RET(0x004fbe5b); r_esp += 8; return;
}

void f_004fbf21(void) /* FUN_004fbf21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fbf21);
    /* 004fbf21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fbf22: mov ebp, esp */ r_ebp = r_esp;
    /* 004fbf24: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fbf27: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fbf2a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbf2d: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004fbf31: mov word ptr [eax + 0x98], cx */ W16((u32)(r_eax+0x98u), (u16)r_ecx);
    /* 004fbf38: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbf3b: mov dword ptr [edx + 4], 1 */ W32((u32)(r_edx+0x4u), 0x1u);
    /* 004fbf42: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbf45: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004fbf49: mov word ptr [eax + 0x1a], cx */ W16((u32)(r_eax+0x1au), (u16)r_ecx);
    /* 004fbf4d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbf50: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fbf54: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbf57: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 004fbf5a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbf5d: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 004fbf60: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 004fbf63: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbf69: jmp 0x4fbf77 */ goto L_004fbf77;
L_004fbf6b:; BB(0x004fbf6b);
    /* 004fbf6b: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fbf6f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fbf73: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004fbf77:; BB(0x004fbf77);
    /* 004fbf77: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbf7b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbf7e: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fbf82: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbf84: jge 0x4fbf99 */ if ((fS==fO)) goto L_004fbf99;
L_004fbf86:; BB(0x004fbf86);
    /* 004fbf86: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbf8a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbf8d: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004fbf90: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
    /* 004fbf97: jmp 0x4fbf6b */ goto L_004fbf6b;
L_004fbf99:; BB(0x004fbf99);
    /* 004fbf99: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbf9f: jmp 0x4fbfad */ goto L_004fbfad;
L_004fbfa1:; BB(0x004fbfa1);
    /* 004fbfa1: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fbfa5: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fbfa9: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_004fbfad:; BB(0x004fbfad);
    /* 004fbfad: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbfb1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbfb4: movsx ecx, word ptr [eax + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 004fbfb8: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbfba: jge 0x4fbfee */ if ((fS==fO)) goto L_004fbfee;
L_004fbfbc:; BB(0x004fbfbc);
    /* 004fbfbc: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbfc0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbfc3: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 004fbfc6: mov word ptr [ecx + edx*2], 0 */ W16((u32)(r_ecx+r_edx*2), 0x0u);
    /* 004fbfcc: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbfd0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbfd3: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 004fbfd6: mov word ptr [ecx + edx*2], 0 */ W16((u32)(r_ecx+r_edx*2), 0x0u);
    /* 004fbfdc: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fbfe0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbfe3: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004fbfe6: mov word ptr [ecx + edx*2], 0 */ W16((u32)(r_ecx+r_edx*2), 0x0u);
    /* 004fbfec: jmp 0x4fbfa1 */ goto L_004fbfa1;
L_004fbfee:; BB(0x004fbfee);
    /* 004fbfee: mov esp, ebp */ r_esp = r_ebp;
    /* 004fbff0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbff1: ret 8 */ FN_RET(0x004fbf21); r_esp += 12; return;
}

void f_004fbff4(void) /* FUN_004fbff4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fbff4);
    /* 004fbff4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fbff5: mov ebp, esp */ r_ebp = r_esp;
    /* 004fbff7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fbffa: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fbffd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc000: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc004: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc007: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004fc00a: mov dword ptr [eax + ecx*4], 1 */ W32((u32)(r_eax+r_ecx*4), 0x1u);
    /* 004fc011: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc014: movsx edx, word ptr [ecx + 0x1a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1au));
    /* 004fc018: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc01b: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004fc01e: mov dx, word ptr [ecx + edx*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2))) & 0xffffu);
    /* 004fc022: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc026: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc029: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc02d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc030: mov eax, dword ptr [eax + 0x68] */ r_eax = R32((u32)(r_eax+0x68u));
    /* 004fc033: mov word ptr [eax + ecx*2], dx */ W16((u32)(r_eax+r_ecx*2), (u16)r_edx);
    /* 004fc037: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc03a: movsx edx, word ptr [ecx + 0x1a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1au));
    /* 004fc03e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc041: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 004fc044: mov dx, word ptr [ecx + edx*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2))) & 0xffffu);
    /* 004fc048: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc04c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc04f: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc053: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc056: mov eax, dword ptr [eax + 0x74] */ r_eax = R32((u32)(r_eax+0x74u));
    /* 004fc059: mov word ptr [eax + ecx*2], dx */ W16((u32)(r_eax+r_ecx*2), (u16)r_edx);
    /* 004fc05d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc060: call 0x4fe40e */ r_esp -= 4; W32(r_esp, 0x4fc065u); f_004fe40e();
    /* 004fc065: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004fc069: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc070: je 0x4fc080 */ if (fZ) goto L_004fc080;
L_004fc072:; BB(0x004fc072);
    /* 004fc072: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc076: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc078: jge 0x4fc080 */ if ((fS==fO)) goto L_004fc080;
L_004fc07a:; BB(0x004fc07a);
    /* 004fc07a: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fc07e: jmp 0x4fc0b9 */ goto L_004fc0b9;
L_004fc080:; BB(0x004fc080);
    /* 004fc080: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc084: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc087: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 004fc08a: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc08e: je 0x4fc0b5 */ if (fZ) goto L_004fc0b5;
L_004fc090:; BB(0x004fc090);
    /* 004fc090: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc094: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc097: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004fc09a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc09d: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004fc0a0: cmp ecx, dword ptr [eax + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc0a3: jne 0x4fc0b5 */ if (!fZ) goto L_004fc0b5;
L_004fc0a5:; BB(0x004fc0a5);
    /* 004fc0a5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc0a8: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 004fc0af: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc0b3: jmp 0x4fc0b9 */ goto L_004fc0b9;
L_004fc0b5:; BB(0x004fc0b5);
    /* 004fc0b5: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004fc0b9:; BB(0x004fc0b9);
    /* 004fc0b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc0bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc0bc: ret  */ FN_RET(0x004fbff4); r_esp += 4; return;
}

void f_004fc0bd(void) /* FUN_004fc0bd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc0bd);
    /* 004fc0bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc0be: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc0c0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc0c3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fc0c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc0c9: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc0cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc0d0: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 004fc0d3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc0d6: mov dx, word ptr [edx + 0x3c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+0x3cu))) & 0xffffu);
    /* 004fc0da: mov word ptr [eax + ecx*2], dx */ W16((u32)(r_eax+r_ecx*2), (u16)r_edx);
    /* 004fc0de: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc0e1: mov cx, word ptr [eax + 0x3c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x3cu))) & 0xffffu);
    /* 004fc0e5: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc0e9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc0ec: mov word ptr [edx + 0x3c], cx */ W16((u32)(r_edx+0x3cu), (u16)r_ecx);
    /* 004fc0f0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc0f3: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc0f7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc0fa: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004fc0fd: mov cx, word ptr [eax + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2))) & 0xffffu);
    /* 004fc101: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc105: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc108: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fc10c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc10f: mov edx, dword ptr [edx + 0x6c] */ r_edx = R32((u32)(r_edx+0x6cu));
    /* 004fc112: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004fc116: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc119: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc11d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc120: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 004fc123: mov cx, word ptr [eax + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2))) & 0xffffu);
    /* 004fc127: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc12b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc12e: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fc132: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc135: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 004fc138: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004fc13c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc13f: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004fc142: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc145: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc148: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004fc14b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc14e: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc152: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc155: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004fc158: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004fc15b: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc15e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc161: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fc165: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc168: mov edx, dword ptr [edx + 0x78] */ r_edx = R32((u32)(r_edx+0x78u));
    /* 004fc16b: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 004fc16e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc171: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004fc174: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc177: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc17a: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 004fc17d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc180: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc184: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc187: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004fc18a: mov dword ptr [eax + ecx*4], 1 */ W32((u32)(r_eax+r_ecx*4), 0x1u);
    /* 004fc191: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc194: call 0x4fe40e */ r_esp -= 4; W32(r_esp, 0x4fc199u); f_004fe40e();
    /* 004fc199: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004fc19d: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc1a4: je 0x4fc1b4 */ if (fZ) goto L_004fc1b4;
L_004fc1a6:; BB(0x004fc1a6);
    /* 004fc1a6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc1aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc1ac: jge 0x4fc1b4 */ if ((fS==fO)) goto L_004fc1b4;
L_004fc1ae:; BB(0x004fc1ae);
    /* 004fc1ae: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fc1b2: jmp 0x4fc1b8 */ goto L_004fc1b8;
L_004fc1b4:; BB(0x004fc1b4);
    /* 004fc1b4: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004fc1b8:; BB(0x004fc1b8);
    /* 004fc1b8: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc1ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc1bb: ret 4 */ FN_RET(0x004fc0bd); r_esp += 8; return;
}

void f_004fc1be(void) /* FUN_004fc1be */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc1be);
    /* 004fc1be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc1bf: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc1c1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc1c4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fc1c7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc1ca: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc1ce: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc1d1: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 004fc1d4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc1d7: mov dx, word ptr [edx + 0x3c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+0x3cu))) & 0xffffu);
    /* 004fc1db: mov word ptr [eax + ecx*2], dx */ W16((u32)(r_eax+r_ecx*2), (u16)r_edx);
    /* 004fc1df: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc1e2: mov cx, word ptr [eax + 0x3c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x3cu))) & 0xffffu);
    /* 004fc1e6: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc1ea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc1ed: mov word ptr [edx + 0x3c], cx */ W16((u32)(r_edx+0x3cu), (u16)r_ecx);
    /* 004fc1f1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc1f4: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc1f8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc1fb: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004fc1fe: mov cx, word ptr [eax + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2))) & 0xffffu);
    /* 004fc202: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc206: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc209: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fc20d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc210: mov edx, dword ptr [edx + 0x6c] */ r_edx = R32((u32)(r_edx+0x6cu));
    /* 004fc213: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004fc217: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc21a: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc21e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc221: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 004fc224: mov cx, word ptr [eax + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2))) & 0xffffu);
    /* 004fc228: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc22c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc22f: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fc233: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc236: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 004fc239: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004fc23d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc240: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004fc243: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc246: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc249: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004fc24c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc24f: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc253: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc256: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004fc259: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004fc25c: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc25f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc262: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fc266: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc269: mov edx, dword ptr [edx + 0x78] */ r_edx = R32((u32)(r_edx+0x78u));
    /* 004fc26c: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 004fc26f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc272: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004fc275: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc278: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc27b: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 004fc27e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc281: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc285: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc288: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004fc28b: mov dword ptr [eax + ecx*4], 1 */ W32((u32)(r_eax+r_ecx*4), 0x1u);
    /* 004fc292: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc295: call 0x4fe40e */ r_esp -= 4; W32(r_esp, 0x4fc29au); f_004fe40e();
    /* 004fc29a: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004fc29e: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc2a5: je 0x4fc2b5 */ if (fZ) goto L_004fc2b5;
L_004fc2a7:; BB(0x004fc2a7);
    /* 004fc2a7: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc2ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc2ad: jge 0x4fc2b5 */ if ((fS==fO)) goto L_004fc2b5;
L_004fc2af:; BB(0x004fc2af);
    /* 004fc2af: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fc2b3: jmp 0x4fc2b9 */ goto L_004fc2b9;
L_004fc2b5:; BB(0x004fc2b5);
    /* 004fc2b5: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004fc2b9:; BB(0x004fc2b9);
    /* 004fc2b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc2bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc2bc: ret 4 */ FN_RET(0x004fc1be); r_esp += 8; return;
}

void f_004fc2bf(void) /* FUN_004fc2bf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc2bf);
    /* 004fc2bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc2c0: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc2c2: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc2c5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004fc2c8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc2cb: mov cx, word ptr [eax + 0x1a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x1au))) & 0xffffu);
    /* 004fc2cf: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004fc2d3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fc2d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc2d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc2da: call 0x4fc0bd */ r_esp -= 4; W32(r_esp, 0x4fc2dfu); f_004fc0bd();
    /* 004fc2df: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 004fc2e3: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc2e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc2ea: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 004fc2ed: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004fc2f1: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc2f5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc2f9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc2fc: mov edx, dword ptr [edx + 0x6c] */ r_edx = R32((u32)(r_edx+0x6cu));
    /* 004fc2ff: mov word ptr [edx + ecx*2], ax */ W16((u32)(r_edx+r_ecx*2), (u16)r_eax);
    /* 004fc303: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc307: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc30a: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 004fc30d: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004fc311: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc315: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc319: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc31c: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 004fc31f: mov word ptr [edx + ecx*2], ax */ W16((u32)(r_edx+r_ecx*2), (u16)r_eax);
    /* 004fc323: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc327: je 0x4fc33a */ if (fZ) goto L_004fc33a;
L_004fc329:; BB(0x004fc329);
    /* 004fc329: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc32d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc330: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004fc333: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
L_004fc33a:; BB(0x004fc33a);
    /* 004fc33a: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fc33e: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc340: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc341: ret 8 */ FN_RET(0x004fc2bf); r_esp += 12; return;
}

void f_004fc344(void) /* FUN_004fc344 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc344);
    /* 004fc344: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc345: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc347: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc34a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fc34b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fc34c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fc34f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc352: call 0x4fc9d5 */ r_esp -= 4; W32(r_esp, 0x4fc357u); f_004fc9d5();
    /* 004fc357: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc35a: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004fc35d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc35f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc362: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004fc365: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc368: movsx esi, word ptr [ecx + 0x1a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x1au));
    /* 004fc36c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc36f: mov edi, dword ptr [edx + 0x78] */ r_edi = R32((u32)(r_edx+0x78u));
    /* 004fc372: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc375: call 0x4fc9d5 */ r_esp -= 4; W32(r_esp, 0x4fc37au); f_004fc9d5();
    /* 004fc37a: mov ecx, dword ptr [edi + esi*4] */ r_ecx = R32((u32)(r_edi+r_esi*4));
    /* 004fc37d: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc37f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc382: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fc386: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc389: mov edx, dword ptr [edx + 0x78] */ r_edx = R32((u32)(r_edx+0x78u));
    /* 004fc38c: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 004fc38f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc392: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc396: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc399: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004fc39c: mov dword ptr [eax + ecx*4], 1 */ W32((u32)(r_eax+r_ecx*4), 0x1u);
    /* 004fc3a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc3a6: movsx edx, word ptr [ecx + 0x1a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1au));
    /* 004fc3aa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc3ad: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004fc3b0: mov dx, word ptr [ecx + edx*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2))) & 0xffffu);
    /* 004fc3b4: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc3b8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc3bb: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc3bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc3c2: mov eax, dword ptr [eax + 0x70] */ r_eax = R32((u32)(r_eax+0x70u));
    /* 004fc3c5: mov word ptr [eax + ecx*2], dx */ W16((u32)(r_eax+r_ecx*2), (u16)r_edx);
    /* 004fc3c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc3cc: movsx edx, word ptr [ecx + 0x1a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1au));
    /* 004fc3d0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc3d3: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 004fc3d6: mov dx, word ptr [ecx + edx*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2))) & 0xffffu);
    /* 004fc3da: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc3de: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc3e1: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc3e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc3e8: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 004fc3eb: mov word ptr [eax + ecx*2], dx */ W16((u32)(r_eax+r_ecx*2), (u16)r_edx);
    /* 004fc3ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc3f2: call 0x4fe40e */ r_esp -= 4; W32(r_esp, 0x4fc3f7u); f_004fe40e();
    /* 004fc3f7: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004fc3fb: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc3ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc401: jl 0x4fc456 */ if ((fS!=fO)) goto L_004fc456;
L_004fc403:; BB(0x004fc403);
    /* 004fc403: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc407: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc40a: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 004fc40d: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc411: je 0x4fc456 */ if (fZ) goto L_004fc456;
L_004fc413:; BB(0x004fc413);
    /* 004fc413: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc417: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc41a: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004fc41d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc420: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004fc423: cmp ecx, dword ptr [eax + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc426: jne 0x4fc456 */ if (!fZ) goto L_004fc456;
L_004fc428:; BB(0x004fc428);
    /* 004fc428: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc42b: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 004fc432: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc435: call 0x4fe5cb */ r_esp -= 4; W32(r_esp, 0x4fc43au); f_004fe5cb();
    /* 004fc43a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004fc43d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc440: jne 0x4fc450 */ if (!fZ) goto L_004fc450;
L_004fc442:; BB(0x004fc442);
    /* 004fc442: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc445: call 0x4fe71c */ r_esp -= 4; W32(r_esp, 0x4fc44au); f_004fe71c();
    /* 004fc44a: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 004fc44e: jmp 0x4fc45a */ goto L_004fc45a;
L_004fc450:; BB(0x004fc450);
    /* 004fc450: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc454: jmp 0x4fc45a */ goto L_004fc45a;
L_004fc456:; BB(0x004fc456);
    /* 004fc456: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004fc45a:; BB(0x004fc45a);
    /* 004fc45a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fc45b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fc45c: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc45e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc45f: ret  */ FN_RET(0x004fc344); r_esp += 4; return;
}

void f_004fc460(void) /* FUN_004fc460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc460);
    /* 004fc460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc461: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc463: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc466: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fc469: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc46d: jne 0x4fc47a */ if (!fZ) goto L_004fc47a;
L_004fc46f:; BB(0x004fc46f);
    /* 004fc46f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc472: call 0x4fc9d5 */ r_esp -= 4; W32(r_esp, 0x4fc477u); f_004fc9d5();
    /* 004fc477: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_004fc47a:; BB(0x004fc47a);
    /* 004fc47a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc47d: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004fc480: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc483: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc486: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004fc489: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc48c: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc490: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc493: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004fc496: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004fc499: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc49c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc49f: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fc4a3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc4a6: mov edx, dword ptr [edx + 0x78] */ r_edx = R32((u32)(r_edx+0x78u));
    /* 004fc4a9: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 004fc4ac: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc4af: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc4b3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc4b6: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004fc4b9: mov dword ptr [eax + ecx*4], 1 */ W32((u32)(r_eax+r_ecx*4), 0x1u);
    /* 004fc4c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc4c3: movsx edx, word ptr [ecx + 0x1a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1au));
    /* 004fc4c7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc4ca: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004fc4cd: mov dx, word ptr [ecx + edx*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2))) & 0xffffu);
    /* 004fc4d1: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc4d5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc4d8: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc4dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc4df: mov eax, dword ptr [eax + 0x70] */ r_eax = R32((u32)(r_eax+0x70u));
    /* 004fc4e2: mov word ptr [eax + ecx*2], dx */ W16((u32)(r_eax+r_ecx*2), (u16)r_edx);
    /* 004fc4e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc4e9: movsx edx, word ptr [ecx + 0x1a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1au));
    /* 004fc4ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc4f0: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 004fc4f3: mov dx, word ptr [ecx + edx*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2))) & 0xffffu);
    /* 004fc4f7: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc4fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc4fe: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc502: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc505: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 004fc508: mov word ptr [eax + ecx*2], dx */ W16((u32)(r_eax+r_ecx*2), (u16)r_edx);
    /* 004fc50c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc50f: call 0x4fe40e */ r_esp -= 4; W32(r_esp, 0x4fc514u); f_004fe40e();
    /* 004fc514: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004fc518: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc51c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc51e: jl 0x4fc583 */ if ((fS!=fO)) goto L_004fc583;
L_004fc520:; BB(0x004fc520);
    /* 004fc520: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc524: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc527: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004fc52a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc52d: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004fc530: cmp ecx, dword ptr [eax + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc533: jne 0x4fc583 */ if (!fZ) goto L_004fc583;
L_004fc535:; BB(0x004fc535);
    /* 004fc535: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc538: call 0x4fe5cb */ r_esp -= 4; W32(r_esp, 0x4fc53du); f_004fe5cb();
    /* 004fc53d: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004fc540: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc543: jg 0x4fc55d */ if ((!fZ&&fS==fO)) goto L_004fc55d;
L_004fc545:; BB(0x004fc545);
    /* 004fc545: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc548: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 004fc54f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc552: call 0x4fe71c */ r_esp -= 4; W32(r_esp, 0x4fc557u); f_004fe71c();
    /* 004fc557: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 004fc55b: jmp 0x4fc587 */ goto L_004fc587;
L_004fc55d:; BB(0x004fc55d);
    /* 004fc55d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc561: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc564: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004fc567: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc56b: je 0x4fc57d */ if (fZ) goto L_004fc57d;
L_004fc56d:; BB(0x004fc56d);
    /* 004fc56d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc570: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 004fc577: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc57b: jmp 0x4fc587 */ goto L_004fc587;
L_004fc57d:; BB(0x004fc57d);
    /* 004fc57d: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fc581: jmp 0x4fc587 */ goto L_004fc587;
L_004fc583:; BB(0x004fc583);
    /* 004fc583: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004fc587:; BB(0x004fc587);
    /* 004fc587: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc589: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc58a: ret 4 */ FN_RET(0x004fc460); r_esp += 8; return;
}

void f_004fc58d(void) /* FUN_004fc58d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc58d);
    /* 004fc58d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc58e: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc590: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc593: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fc594: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fc595: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fc598: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc59b: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc59f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc5a2: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 004fc5a5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc5a8: mov dx, word ptr [edx + 0x3c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+0x3cu))) & 0xffffu);
    /* 004fc5ac: mov word ptr [eax + ecx*2], dx */ W16((u32)(r_eax+r_ecx*2), (u16)r_edx);
    /* 004fc5b0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc5b3: mov cx, word ptr [eax + 0x3c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x3cu))) & 0xffffu);
    /* 004fc5b7: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc5bb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc5be: mov word ptr [edx + 0x3c], cx */ W16((u32)(r_edx+0x3cu), (u16)r_ecx);
    /* 004fc5c2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc5c5: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc5c9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc5cc: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004fc5cf: mov cx, word ptr [eax + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2))) & 0xffffu);
    /* 004fc5d3: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc5d7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc5da: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fc5de: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc5e1: mov edx, dword ptr [edx + 0x6c] */ r_edx = R32((u32)(r_edx+0x6cu));
    /* 004fc5e4: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004fc5e8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc5eb: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc5ef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc5f2: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 004fc5f5: mov cx, word ptr [eax + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2))) & 0xffffu);
    /* 004fc5f9: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc5fd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc600: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fc604: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc607: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 004fc60a: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004fc60e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc611: mov cx, word ptr [eax + 0x98] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x98u))) & 0xffffu);
    /* 004fc618: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc61c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc61f: mov word ptr [edx + 0x98], cx */ W16((u32)(r_edx+0x98u), (u16)r_ecx);
    /* 004fc626: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc629: call 0x4fc9d5 */ r_esp -= 4; W32(r_esp, 0x4fc62eu); f_004fc9d5();
    /* 004fc62e: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fc631: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc634: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004fc637: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc639: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc63c: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004fc63f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc642: movsx esi, word ptr [ecx + 0x1a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x1au));
    /* 004fc646: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc649: mov edi, dword ptr [edx + 0x78] */ r_edi = R32((u32)(r_edx+0x78u));
    /* 004fc64c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc64f: call 0x4fc9d5 */ r_esp -= 4; W32(r_esp, 0x4fc654u); f_004fc9d5();
    /* 004fc654: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fc657: mov ecx, dword ptr [edi + esi*4] */ r_ecx = R32((u32)(r_edi+r_esi*4));
    /* 004fc65a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc65c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc65f: movsx eax, word ptr [edx + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1au));
    /* 004fc663: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc666: mov edx, dword ptr [edx + 0x78] */ r_edx = R32((u32)(r_edx+0x78u));
    /* 004fc669: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 004fc66c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc66f: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc673: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc676: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004fc679: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc67c: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 004fc67f: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004fc682: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc685: movsx edx, word ptr [ecx + 0x1a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1au));
    /* 004fc689: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc68c: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 004fc68f: mov dword ptr [ecx + edx*4], 1 */ W32((u32)(r_ecx+r_edx*4), 0x1u);
    /* 004fc696: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc699: call 0x4fe40e */ r_esp -= 4; W32(r_esp, 0x4fc69eu); f_004fe40e();
    /* 004fc69e: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004fc6a2: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc6a9: je 0x4fc6b9 */ if (fZ) goto L_004fc6b9;
L_004fc6ab:; BB(0x004fc6ab);
    /* 004fc6ab: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc6af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc6b1: jge 0x4fc6b9 */ if ((fS==fO)) goto L_004fc6b9;
L_004fc6b3:; BB(0x004fc6b3);
    /* 004fc6b3: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fc6b7: jmp 0x4fc6bd */ goto L_004fc6bd;
L_004fc6b9:; BB(0x004fc6b9);
    /* 004fc6b9: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004fc6bd:; BB(0x004fc6bd);
    /* 004fc6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fc6be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fc6bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc6c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc6c2: ret 4 */ FN_RET(0x004fc58d); r_esp += 8; return;
}

void f_004fc6c5(void) /* FUN_004fc6c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc6c5);
    /* 004fc6c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6c6: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc6c8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc6cb: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004fc6ce: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc6d1: mov cx, word ptr [eax + 0x1a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x1au))) & 0xffffu);
    /* 004fc6d5: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004fc6d9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fc6dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc6e0: call 0x4fc58d */ r_esp -= 4; W32(r_esp, 0x4fc6e5u); f_004fc58d();
    /* 004fc6e5: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 004fc6e9: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc6ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc6f0: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004fc6f3: mov dword ptr [edx + eax*4], 1 */ W32((u32)(r_edx+r_eax*4), 0x1u);
    /* 004fc6fa: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fc6fe: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc700: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc701: ret 4 */ FN_RET(0x004fc6c5); r_esp += 8; return;
}

void f_004fc704(void) /* FUN_004fc704 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc704);
    /* 004fc704: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc705: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc707: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc70a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004fc70d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc710: mov cx, word ptr [eax + 0x1a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x1au))) & 0xffffu);
    /* 004fc714: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004fc718: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fc71b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc71c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc71f: call 0x4fc58d */ r_esp -= 4; W32(r_esp, 0x4fc724u); f_004fc58d();
    /* 004fc724: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 004fc728: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc72c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc72f: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 004fc732: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004fc736: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc73a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc73e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc741: mov edx, dword ptr [edx + 0x6c] */ r_edx = R32((u32)(r_edx+0x6cu));
    /* 004fc744: mov word ptr [edx + ecx*2], ax */ W16((u32)(r_edx+r_ecx*2), (u16)r_eax);
    /* 004fc748: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc74c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc74f: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 004fc752: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004fc756: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc75a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc75e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc761: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 004fc764: mov word ptr [edx + ecx*2], ax */ W16((u32)(r_edx+r_ecx*2), (u16)r_eax);
    /* 004fc768: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc76c: je 0x4fc77f */ if (fZ) goto L_004fc77f;
L_004fc76e:; BB(0x004fc76e);
    /* 004fc76e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc772: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc775: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004fc778: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
L_004fc77f:; BB(0x004fc77f);
    /* 004fc77f: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004fc783: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc785: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc786: ret 8 */ FN_RET(0x004fc704); r_esp += 12; return;
}

void f_004fc789(void) /* FUN_004fc789 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc789);
    /* 004fc789: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc78a: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc78c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc78d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fc790: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004fc794: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc797: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004fc79a: mov dword ptr [edx + eax*4], 1 */ W32((u32)(r_edx+r_eax*4), 0x1u);
    /* 004fc7a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc7a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc7a4: ret 4 */ FN_RET(0x004fc789); r_esp += 8; return;
}

void f_004fc7a7(void) /* FUN_004fc7a7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc7a7);
    /* 004fc7a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc7a8: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc7aa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc7ad: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fc7b0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc7b3: movsx ecx, word ptr [eax + 0x1a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1au));
    /* 004fc7b7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc7ba: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004fc7bd: mov dword ptr [eax + ecx*4], 1 */ W32((u32)(r_eax+r_ecx*4), 0x1u);
    /* 004fc7c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc7c7: call 0x4fe40e */ r_esp -= 4; W32(r_esp, 0x4fc7ccu); f_004fe40e();
    /* 004fc7cc: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004fc7d0: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc7d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc7d6: jge 0x4fc7e1 */ if ((fS==fO)) goto L_004fc7e1;
L_004fc7d8:; BB(0x004fc7d8);
    /* 004fc7d8: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fc7dc: jmp 0x4fc890 */ goto L_004fc890;
L_004fc7e1:; BB(0x004fc7e1);
    /* 004fc7e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc7e4: call 0x4fe633 */ r_esp -= 4; W32(r_esp, 0x4fc7e9u); f_004fe633();
    /* 004fc7e9: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004fc7ec: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc7ef: jne 0x4fc804 */ if (!fZ) goto L_004fc804;
L_004fc7f1:; BB(0x004fc7f1);
    /* 004fc7f1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc7f4: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 004fc7fb: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 004fc7ff: jmp 0x4fc890 */ goto L_004fc890;
L_004fc804:; BB(0x004fc804);
    /* 004fc804: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc807: call 0x4fe5cb */ r_esp -= 4; W32(r_esp, 0x4fc80cu); f_004fe5cb();
    /* 004fc80c: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004fc80f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc812: jg 0x4fc857 */ if ((!fZ&&fS==fO)) goto L_004fc857;
L_004fc814:; BB(0x004fc814);
    /* 004fc814: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc818: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc81b: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004fc81e: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc822: jne 0x4fc83f */ if (!fZ) goto L_004fc83f;
L_004fc824:; BB(0x004fc824);
    /* 004fc824: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc828: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc82b: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004fc82e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc831: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004fc834: cmp ecx, dword ptr [eax + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc837: je 0x4fc83f */ if (fZ) goto L_004fc83f;
L_004fc839:; BB(0x004fc839);
    /* 004fc839: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fc83d: jmp 0x4fc890 */ goto L_004fc890;
L_004fc83f:; BB(0x004fc83f);
    /* 004fc83f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc842: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 004fc849: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc84c: call 0x4fe71c */ r_esp -= 4; W32(r_esp, 0x4fc851u); f_004fe71c();
    /* 004fc851: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 004fc855: jmp 0x4fc890 */ goto L_004fc890;
L_004fc857:; BB(0x004fc857);
    /* 004fc857: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc85b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc85e: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004fc861: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc865: je 0x4fc88c */ if (fZ) goto L_004fc88c;
L_004fc867:; BB(0x004fc867);
    /* 004fc867: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc86b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc86e: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 004fc871: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc874: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 004fc877: cmp edx, dword ptr [ecx + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc87a: jne 0x4fc88c */ if (!fZ) goto L_004fc88c;
L_004fc87c:; BB(0x004fc87c);
    /* 004fc87c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc87f: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 004fc886: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc88a: jmp 0x4fc890 */ goto L_004fc890;
L_004fc88c:; BB(0x004fc88c);
    /* 004fc88c: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004fc890:; BB(0x004fc890);
    /* 004fc890: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc892: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc893: ret  */ FN_RET(0x004fc7a7); r_esp += 4; return;
}

void f_004fc894(void) /* FUN_004fc894 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc894);
    /* 004fc894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc895: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc897: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc898: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fc89b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc89e: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 004fc8a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc8a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc8a4: ret  */ FN_RET(0x004fc894); r_esp += 4; return;
}

void f_004fc8a5(void) /* FUN_004fc8a5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc8a5);
    /* 004fc8a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc8a6: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc8a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc8a9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fc8ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc8af: mov ax, word ptr [eax + 0x30] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x30u))) & 0xffffu);
    /* 004fc8b3: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc8b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc8b6: ret  */ FN_RET(0x004fc8a5); r_esp += 4; return;
}

void f_004fc8b7(void) /* FUN_004fc8b7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc8b7);
    /* 004fc8b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc8b8: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc8ba: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc8bd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fc8c0: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fc8c6: jmp 0x4fc8d4 */ goto L_004fc8d4;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fc8cc: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004fc8d0: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004fc8d4:; BB(0x004fc8d4);
    /* 004fc8d4: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc8d8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc8db: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 004fc8df: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc8e1: jge 0x4fc8fb */ if ((fS==fO)) goto L_004fc8fb;
L_004fc8e3:; BB(0x004fc8e3);
    /* 004fc8e3: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004fc8e7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc8ea: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004fc8ed: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8f1: jne 0x4fc8f9 */ if (!fZ) goto L_004fc8f9;
L_004fc8f3:; BB(0x004fc8f3);
    /* 004fc8f3: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004fc8f7: jmp 0x4fc8ff */ goto L_004fc8ff;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: jmp 0x4fc8c8 */ goto L_004fc8c8;
L_004fc8fb:; BB(0x004fc8fb);
    /* 004fc8fb: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004fc8ff:; BB(0x004fc8ff);
    /* 004fc8ff: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc901: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc902: ret  */ FN_RET(0x004fc8b7); r_esp += 4; return;
}

void f_004fc903(void) /* FUN_004fc903 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc903);
    /* 004fc903: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc904: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc906: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc907: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fc90a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc90d: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc911: jne 0x4fc917 */ if (!fZ) goto L_004fc917;
L_004fc913:; BB(0x004fc913);
    /* 004fc913: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc915: jmp 0x4fc92c */ goto L_004fc92c;
L_004fc917:; BB(0x004fc917);
    /* 004fc917: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc91a: call 0x4fc9d5 */ r_esp -= 4; W32(r_esp, 0x4fc91fu); f_004fc9d5();
    /* 004fc91f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc921: jne 0x4fc92a */ if (!fZ) goto L_004fc92a;
L_004fc923:; BB(0x004fc923);
    /* 004fc923: mov eax, 1 */ r_eax = 0x1u;
    /* 004fc928: jmp 0x4fc92c */ goto L_004fc92c;
L_004fc92a:; BB(0x004fc92a);
    /* 004fc92a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fc92c:; BB(0x004fc92c);
    /* 004fc92c: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc92e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc92f: ret  */ FN_RET(0x004fc903); r_esp += 4; return;
}

