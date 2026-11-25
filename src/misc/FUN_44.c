#include "protos.h"

void f_005e6882(void) /* FUN_005e6882 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6882);
    /* 005e6882: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6883: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6885: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6888: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e688b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e688e: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x5e6893u); f_005e4bb0();
    /* 005e6893: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6896: mov dword ptr [eax], 0x63bedc */ W32((u32)(r_eax), 0x63bedcu);
    /* 005e689c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e689f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e68a2: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 005e68a5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e68a8: mov dword ptr [eax + 0x4c], 1 */ W32((u32)(r_eax+0x4cu), 0x1u);
    /* 005e68af: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e68b2: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 005e68b9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e68bc: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
    /* 005e68c3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e68c6: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
    /* 005e68cd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e68d0: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
    /* 005e68d7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e68da: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
    /* 005e68e1: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e68e6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e68ebu); f_0048ab58();
    /* 005e68eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e68ee: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e68f1: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e68f5: je 0x5e690a */ if (fZ) goto L_005e690a;
L_005e68f7:; BB(0x005e68f7);
    /* 005e68f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e68f9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e68fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e68fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6900: call 0x5e6420 */ r_esp -= 4; W32(r_esp, 0x5e6905u); f_005e6420();
    /* 005e6905: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e6908: jmp 0x5e6911 */ goto L_005e6911;
L_005e690a:; BB(0x005e690a);
    /* 005e690a: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005e6911:; BB(0x005e6911);
    /* 005e6911: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6914: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e6917: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 005e691a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005e691c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e691e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6921: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005e6924: call 0x5d678c */ r_esp -= 4; W32(r_esp, 0x5e6929u); f_005d678c();
    /* 005e6929: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e692e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e6933u); f_0048ab58();
    /* 005e6933: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6936: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e6939: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e693d: je 0x5e6952 */ if (fZ) goto L_005e6952;
L_005e693f:; BB(0x005e693f);
    /* 005e693f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6941: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6944: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6945: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6948: call 0x5e6420 */ r_esp -= 4; W32(r_esp, 0x5e694du); f_005e6420();
    /* 005e694d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e6950: jmp 0x5e6959 */ goto L_005e6959;
L_005e6952:; BB(0x005e6952);
    /* 005e6952: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005e6959:; BB(0x005e6959);
    /* 005e6959: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e695c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e695f: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005e6962: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005e6964: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6966: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6969: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005e696c: call 0x5d678c */ r_esp -= 4; W32(r_esp, 0x5e6971u); f_005d678c();
    /* 005e6971: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6976: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e697bu); f_0048ab58();
    /* 005e697b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e697e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e6981: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6985: je 0x5e6998 */ if (fZ) goto L_005e6998;
L_005e6987:; BB(0x005e6987);
    /* 005e6987: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e698a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e698b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e698e: call 0x5e64a3 */ r_esp -= 4; W32(r_esp, 0x5e6993u); f_005e64a3();
    /* 005e6993: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e6996: jmp 0x5e699f */ goto L_005e699f;
L_005e6998:; BB(0x005e6998);
    /* 005e6998: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005e699f:; BB(0x005e699f);
    /* 005e699f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e69a2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e69a5: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 005e69a8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e69ab: mov esp, ebp */ r_esp = r_ebp;
    /* 005e69ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e69ae: ret 4 */ FN_RET(0x005e6882); r_esp += 8; return;
}

void f_005e69b1(void) /* FUN_005e69b1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e69b1);
    /* 005e69b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e69b2: mov ebp, esp */ r_ebp = r_esp;
    /* 005e69b4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e69b7: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005e69ba: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e69bd: mov dword ptr [eax], 0x63bedc */ W32((u32)(r_eax), 0x63bedcu);
    /* 005e69c3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e69c6: cmp dword ptr [ecx + 0x3c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e69ca: je 0x5e6a03 */ if (fZ) goto L_005e6a03;
L_005e69cc:; BB(0x005e69cc);
    /* 005e69cc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e69cf: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005e69d2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e69d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e69d8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e69db: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e69df: je 0x5e69f2 */ if (fZ) goto L_005e69f2;
L_005e69e1:; BB(0x005e69e1);
    /* 005e69e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e69e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e69e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e69e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e69eb: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5e69edu); call_ind(t); }
    /* 005e69ed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e69f0: jmp 0x5e69f9 */ goto L_005e69f9;
L_005e69f2:; BB(0x005e69f2);
    /* 005e69f2: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005e69f9:; BB(0x005e69f9);
    /* 005e69f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e69fc: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_005e6a03:; BB(0x005e6a03);
    /* 005e6a03: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6a06: cmp dword ptr [edx + 0x40], 0 */ {  u32 a = R32((u32)(r_edx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6a0a: je 0x5e6a43 */ if (fZ) goto L_005e6a43;
L_005e6a0c:; BB(0x005e6a0c);
    /* 005e6a0c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6a0f: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e6a12: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e6a15: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6a18: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e6a1b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6a1f: je 0x5e6a32 */ if (fZ) goto L_005e6a32;
L_005e6a21:; BB(0x005e6a21);
    /* 005e6a21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a23: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6a26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6a28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6a2b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e6a2du); call_ind(t); }
    /* 005e6a2d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e6a30: jmp 0x5e6a39 */ goto L_005e6a39;
L_005e6a32:; BB(0x005e6a32);
    /* 005e6a32: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e6a39:; BB(0x005e6a39);
    /* 005e6a39: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6a3c: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_005e6a43:; BB(0x005e6a43);
    /* 005e6a43: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6a46: cmp dword ptr [ecx + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6a4a: je 0x5e6a83 */ if (fZ) goto L_005e6a83;
L_005e6a4c:; BB(0x005e6a4c);
    /* 005e6a4c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6a4f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e6a52: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e6a55: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e6a58: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e6a5b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6a5f: je 0x5e6a72 */ if (fZ) goto L_005e6a72;
L_005e6a61:; BB(0x005e6a61);
    /* 005e6a61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a63: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e6a66: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e6a68: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e6a6b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5e6a6du); call_ind(t); }
    /* 005e6a6d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e6a70: jmp 0x5e6a79 */ goto L_005e6a79;
L_005e6a72:; BB(0x005e6a72);
    /* 005e6a72: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005e6a79:; BB(0x005e6a79);
    /* 005e6a79: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6a7c: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_005e6a83:; BB(0x005e6a83);
    /* 005e6a83: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6a86: call 0x5e4c26 */ r_esp -= 4; W32(r_esp, 0x5e6a8bu); f_005e4c26();
    /* 005e6a8b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6a8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6a8e: ret  */ FN_RET(0x005e69b1); r_esp += 4; return;
}

void f_005e6a8f(void) /* FUN_005e6a8f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6a8f);
    /* 005e6a8f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a90: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6a92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a93: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6a96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6a9f: call 0x5e4e7f */ r_esp -= 4; W32(r_esp, 0x5e6aa4u); f_005e4e7f();
    /* 005e6aa4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6aa7: call 0x5d95c3 */ r_esp -= 4; W32(r_esp, 0x5e6aacu); f_005d95c3();
    /* 005e6aac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6aaf: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005e6ab2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6ab5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e6ab8: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005e6abb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6abe: cmp dword ptr [ecx + 0x58], 0 */ {  u32 a = R32((u32)(r_ecx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6ac2: je 0x5e6ade */ if (fZ) goto L_005e6ade;
L_005e6ac4:; BB(0x005e6ac4);
    /* 005e6ac4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6ac7: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005e6aca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6acb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6ace: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005e6ad1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6ad4: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005e6ad7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6ad9: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5e6adcu); call_ind(t); }
    /* 005e6adc: jmp 0x5e6b03 */ goto L_005e6b03;
L_005e6ade:; BB(0x005e6ade);
    /* 005e6ade: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6ae1: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005e6ae4: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005e6ae6: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005e6ae8: and ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6aeb: add ecx, 0x61be */ {  u32 a = r_ecx; u32 b = 0x61beu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6af1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6af2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6af5: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005e6af8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6afb: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005e6afe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e6b00: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x5e6b03u); call_ind(t); }
L_005e6b03:; BB(0x005e6b03);
    /* 005e6b03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b08: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005e6b0b: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5e6b10u); f_005ea1cf();
    /* 005e6b10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b14: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b17: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005e6b1a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b1d: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005e6b20: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e6b22: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5e6b25u); call_ind(t); }
    /* 005e6b25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b28: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005e6b2b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b2e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e6b31: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005e6b34: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b37: cmp dword ptr [edx + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6b3b: je 0x5e6b57 */ if (fZ) goto L_005e6b57;
L_005e6b3d:; BB(0x005e6b3d);
    /* 005e6b3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b40: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005e6b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b44: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b47: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005e6b4a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b4d: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005e6b50: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e6b52: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x5e6b55u); call_ind(t); }
    /* 005e6b55: jmp 0x5e6b7c */ goto L_005e6b7c;
L_005e6b57:; BB(0x005e6b57);
    /* 005e6b57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b5a: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 005e6b5d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 005e6b5f: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 005e6b61: and edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e6b64: add edx, 0x61bb */ {  u32 a = r_edx; u32 b = 0x61bbu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e6b6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b6e: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e6b71: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b74: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e6b77: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6b79: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5e6b7cu); call_ind(t); }
L_005e6b7c:; BB(0x005e6b7c);
    /* 005e6b7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b7e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b81: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e6b84: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5e6b89u); f_005ea1cf();
    /* 005e6b89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b90: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005e6b93: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6b96: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e6b99: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6b9b: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5e6b9eu); call_ind(t); }
    /* 005e6b9e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6ba1: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6ba4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6ba7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e6baa: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005e6bad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6bb0: cmp dword ptr [ecx + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6bb4: je 0x5e6bca */ if (fZ) goto L_005e6bca;
L_005e6bb6:; BB(0x005e6bb6);
    /* 005e6bb6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6bb9: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005e6bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6bbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6bc0: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e6bc3: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e6bc8u); f_005ea0c3();
    /* 005e6bc8: jmp 0x5e6be8 */ goto L_005e6be8;
L_005e6bca:; BB(0x005e6bca);
    /* 005e6bca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6bcd: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e6bd0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005e6bd2: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005e6bd4: and eax, 0x4f */ {  u32 a = r_eax; u32 b = 0x4fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e6bd7: add eax, 0x61bd */ {  u32 a = r_eax; u32 b = 0x61bdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6bdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6bdd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6be0: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e6be3: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e6be8u); f_005ea0c3();
L_005e6be8:; BB(0x005e6be8);
    /* 005e6be8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6bea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6bed: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 005e6bf0: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5e6bf5u); f_005ea1cf();
    /* 005e6bf5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6bf8: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6bfb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6bfe: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e6c01: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6c03: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e6c06u); call_ind(t); }
    /* 005e6c06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6c09: call 0x5e7208 */ r_esp -= 4; W32(r_esp, 0x5e6c0eu); f_005e7208();
    /* 005e6c0e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6c10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6c11: ret  */ FN_RET(0x005e6a8f); r_esp += 4; return;
}

void f_005e6c12(void) /* FUN_005e6c12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6c12);
    /* 005e6c12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c13: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6c15: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6c18: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6c1b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6c1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6c22: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x5e6c27u); f_005d9738();
    /* 005e6c27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6c29: je 0x5e6c3d */ if (fZ) goto L_005e6c3d;
L_005e6c2b:; BB(0x005e6c2b);
    /* 005e6c2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6c2e: cmp dword ptr [ecx + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6c32: je 0x5e6c3d */ if (fZ) goto L_005e6c3d;
L_005e6c34:; BB(0x005e6c34);
    /* 005e6c34: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6c37: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6c3b: je 0x5e6c44 */ if (fZ) goto L_005e6c44;
L_005e6c3d:; BB(0x005e6c3d);
    /* 005e6c3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e6c3f: jmp 0x5e6cf1 */ goto L_005e6cf1;
L_005e6c44:; BB(0x005e6c44);
    /* 005e6c44: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6c47: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005e6c4a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e6c4d: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6c51: je 0x5e6c5e */ if (fZ) goto L_005e6c5e;
L_005e6c53:; BB(0x005e6c53);
    /* 005e6c53: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6c57: je 0x5e6cd4 */ if (fZ) goto L_005e6cd4;
L_005e6c59:; BB(0x005e6c59);
    /* 005e6c59: jmp 0x5e6ceb */ goto L_005e6ceb;
L_005e6c5e:; BB(0x005e6c5e);
    /* 005e6c5e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6c61: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005e6c64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6c68: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005e6c6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6c6f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6c71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6c74: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5e6c77u); call_ind(t); }
    /* 005e6c77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6c79: je 0x5e6c92 */ if (fZ) goto L_005e6c92;
L_005e6c7b:; BB(0x005e6c7b);
    /* 005e6c7b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6c7e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005e6c81: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6c84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6c86: je 0x5e6c92 */ if (fZ) goto L_005e6c92;
L_005e6c88:; BB(0x005e6c88);
    /* 005e6c88: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6c8b: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
L_005e6c92:; BB(0x005e6c92);
    /* 005e6c92: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6c95: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e6c98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c99: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6c9c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005e6c9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ca0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6ca3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e6ca5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6ca8: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5e6cabu); call_ind(t); }
    /* 005e6cab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6cad: je 0x5e6cd2 */ if (fZ) goto L_005e6cd2;
L_005e6caf:; BB(0x005e6caf);
    /* 005e6caf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6cb2: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005e6cb5: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6cb8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6cba: je 0x5e6cd2 */ if (fZ) goto L_005e6cd2;
L_005e6cbc:; BB(0x005e6cbc);
    /* 005e6cbc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6cbf: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 005e6cc6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6cc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6ccd: call 0x5e7373 */ r_esp -= 4; W32(r_esp, 0x5e6cd2u); f_005e7373();
L_005e6cd2:; BB(0x005e6cd2);
    /* 005e6cd2: jmp 0x5e6ceb */ goto L_005e6ceb;
L_005e6cd4:; BB(0x005e6cd4);
    /* 005e6cd4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6cd7: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005e6cda: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e6cdd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6cdf: je 0x5e6ceb */ if (fZ) goto L_005e6ceb;
L_005e6ce1:; BB(0x005e6ce1);
    /* 005e6ce1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6ce4: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
L_005e6ceb:; BB(0x005e6ceb);
    /* 005e6ceb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6cee: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
L_005e6cf1:; BB(0x005e6cf1);
    /* 005e6cf1: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6cf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6cf4: ret 4 */ FN_RET(0x005e6c12); r_esp += 8; return;
}

void f_005e6cf7(void) /* FUN_005e6cf7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6cf7);
    /* 005e6cf7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cf8: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6cfa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cfb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cfc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6cff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e6d02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d03: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6d06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6d0a: call 0x5e4f55 */ r_esp -= 4; W32(r_esp, 0x5e6d0fu); f_005e4f55();
    /* 005e6d0f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e6d12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d13: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6d16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6d1a: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005e6d1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6d20: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005e6d23: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6d25: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e6d28u); call_ind(t); }
    /* 005e6d28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6d2b: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6d2f: jne 0x5e6dd1 */ if (!fZ) goto L_005e6dd1;
L_005e6d35:; BB(0x005e6d35);
    /* 005e6d35: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6d38: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e6d3du); f_005d98da();
    /* 005e6d3d: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005e6d40: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e6d42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6d45: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005e6d48: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e6d4du); f_005d98da();
    /* 005e6d4d: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e6d50: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e6d52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d53: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6d56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6d5a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e6d5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6d60: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e6d63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6d65: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e6d68u); call_ind(t); }
    /* 005e6d68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6d6b: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005e6d6e: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e6d73u); f_005d98da();
    /* 005e6d73: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e6d76: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6d78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d79: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6d7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d7d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6d80: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6d83: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6d86: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e6d89: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6d8b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e6d8eu); call_ind(t); }
    /* 005e6d8e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6d91: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e6d94: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6d97: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e6d9a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6d9c: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e6d9fu); call_ind(t); }
    /* 005e6d9f: mov esi, eax */ r_esi = r_eax;
    /* 005e6da1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6da4: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6da7: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e6dacu); f_005d98da();
    /* 005e6dac: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e6dae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6daf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6db2: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e6db5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6db8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e6dbb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6dbd: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e6dc0u); call_ind(t); }
    /* 005e6dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6dc1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6dc4: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6dc7: call 0x5e652d */ r_esp -= 4; W32(r_esp, 0x5e6dccu); f_005e652d();
    /* 005e6dcc: jmp 0x5e6e68 */ goto L_005e6e68;
L_005e6dd1:; BB(0x005e6dd1);
    /* 005e6dd1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e6dd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6dd5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6dd8: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e6dddu); f_005d98c3();
    /* 005e6ddd: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005e6de0: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e6de2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6de5: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005e6de8: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e6dedu); f_005d98c3();
    /* 005e6ded: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e6df0: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e6df2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6df3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6df6: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e6df9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6dfc: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e6dff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6e01: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e6e04u); call_ind(t); }
    /* 005e6e04: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e6e07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6e0b: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005e6e0e: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e6e13u); f_005d98c3();
    /* 005e6e13: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6e16: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e6e18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6e1c: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6e1f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6e22: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e6e25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6e27: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e6e2au); call_ind(t); }
    /* 005e6e2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6e2d: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e6e30: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6e33: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e6e36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6e38: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e6e3bu); call_ind(t); }
    /* 005e6e3b: mov esi, eax */ r_esi = r_eax;
    /* 005e6e3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6e40: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6e43: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e6e48u); f_005d98c3();
    /* 005e6e48: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e6e4a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e4b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6e4e: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e6e51: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6e54: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e6e57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6e59: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e6e5cu); call_ind(t); }
    /* 005e6e5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6e60: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6e63: call 0x5e652d */ r_esp -= 4; W32(r_esp, 0x5e6e68u); f_005e652d();
L_005e6e68:; BB(0x005e6e68);
    /* 005e6e68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6e6b: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e6e6e: call 0x5e6566 */ r_esp -= 4; W32(r_esp, 0x5e6e73u); f_005e6566();
    /* 005e6e73: mov esi, eax */ r_esi = r_eax;
    /* 005e6e75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6e78: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 005e6e7b: call 0x5e6552 */ r_esp -= 4; W32(r_esp, 0x5e6e80u); f_005e6552();
    /* 005e6e80: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e6e82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6e85: mov dword ptr [eax + 0x50], esi */ W32((u32)(r_eax+0x50u), r_esi);
    /* 005e6e88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e6e89: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6e8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6e8c: ret 8 */ FN_RET(0x005e6cf7); r_esp += 12; return;
}

void f_005e6e8f(void) /* FUN_005e6e8f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6e8f);
    /* 005e6e8f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e90: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6e92: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6e95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e96: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e6e99: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e6e9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e9d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6ea0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ea1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6ea4: call 0x5e4f82 */ r_esp -= 4; W32(r_esp, 0x5e6ea9u); f_005e4f82();
    /* 005e6ea9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6eac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e6eae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6eb1: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x5e6eb4u); call_ind(t); }
    /* 005e6eb4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e6eb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6eba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e6ebc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6ebf: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e6ec2u); call_ind(t); }
    /* 005e6ec2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e6ec5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6ec8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ec9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6ecc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ecd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6ed0: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005e6ed3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6ed6: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005e6ed9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e6edb: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5e6edeu); call_ind(t); }
    /* 005e6ede: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6ee1: cmp dword ptr [ecx + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6ee5: jne 0x5e6f87 */ if (!fZ) goto L_005e6f87;
L_005e6eeb:; BB(0x005e6eeb);
    /* 005e6eeb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6eee: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e6ef3u); f_005d98da();
    /* 005e6ef3: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6ef6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e6ef8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6efb: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005e6efe: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e6f03u); f_005d98da();
    /* 005e6f03: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e6f06: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e6f08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6f09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6f0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6f0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6f10: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005e6f13: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6f16: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e6f19: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6f1b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e6f1eu); call_ind(t); }
    /* 005e6f1e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6f21: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005e6f24: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e6f29u); f_005d98da();
    /* 005e6f29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6f2c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6f2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6f2f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6f32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6f33: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6f36: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6f39: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6f3c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e6f3f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6f41: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e6f44u); call_ind(t); }
    /* 005e6f44: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6f47: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e6f4a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6f4d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e6f50: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6f52: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e6f55u); call_ind(t); }
    /* 005e6f55: mov esi, eax */ r_esi = r_eax;
    /* 005e6f57: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6f5a: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6f5d: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e6f62u); f_005d98da();
    /* 005e6f62: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e6f64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6f65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6f68: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e6f6b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6f6e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e6f71: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6f73: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e6f76u); call_ind(t); }
    /* 005e6f76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6f77: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6f7a: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6f7d: call 0x5e652d */ r_esp -= 4; W32(r_esp, 0x5e6f82u); f_005e652d();
    /* 005e6f82: jmp 0x5e701e */ goto L_005e701e;
L_005e6f87:; BB(0x005e6f87);
    /* 005e6f87: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6f8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6f8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6f8e: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e6f93u); f_005d98c3();
    /* 005e6f93: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6f96: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e6f98: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6f9b: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005e6f9e: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e6fa3u); f_005d98c3();
    /* 005e6fa3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e6fa6: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e6fa8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e6fa9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6fac: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e6faf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6fb2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e6fb5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6fb7: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e6fbau); call_ind(t); }
    /* 005e6fba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6fbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6fbe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6fc1: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005e6fc4: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e6fc9u); f_005d98c3();
    /* 005e6fc9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6fcc: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e6fce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6fcf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6fd2: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6fd5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6fd8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e6fdb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6fdd: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e6fe0u); call_ind(t); }
    /* 005e6fe0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6fe3: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e6fe6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6fe9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e6fec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6fee: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e6ff1u); call_ind(t); }
    /* 005e6ff1: mov esi, eax */ r_esi = r_eax;
    /* 005e6ff3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6ff6: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6ff9: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e6ffeu); f_005d98c3();
    /* 005e6ffe: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e7000: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7001: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e7004: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e7007: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e700a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e700d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e700f: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e7012u); call_ind(t); }
    /* 005e7012: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7013: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e7016: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e7019: call 0x5e652d */ r_esp -= 4; W32(r_esp, 0x5e701eu); f_005e652d();
L_005e701e:; BB(0x005e701e);
    /* 005e701e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e7021: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e7024: call 0x5e6566 */ r_esp -= 4; W32(r_esp, 0x5e7029u); f_005e6566();
    /* 005e7029: mov esi, eax */ r_esi = r_eax;
    /* 005e702b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e702e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 005e7031: call 0x5e6552 */ r_esp -= 4; W32(r_esp, 0x5e7036u); f_005e6552();
    /* 005e7036: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e7038: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e703b: mov dword ptr [eax + 0x50], esi */ W32((u32)(r_eax+0x50u), r_esi);
    /* 005e703e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e703f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7041: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7042: ret 8 */ FN_RET(0x005e6e8f); r_esp += 12; return;
}

void f_005e7045(void) /* FUN_005e7045 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7045);
    /* 005e7045: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7046: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7048: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7049: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e704c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e704f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7050: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7053: call 0x5d975e */ r_esp -= 4; W32(r_esp, 0x5e7058u); f_005d975e();
    /* 005e7058: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e705b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e705e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e705f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7062: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005e7065: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7068: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005e706b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e706d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5e7070u); call_ind(t); }
    /* 005e7070: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7073: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7076: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7077: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e707a: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005e707d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7080: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005e7083: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e7085: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5e7088u); call_ind(t); }
    /* 005e7088: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e708b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e708e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e708f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7092: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 005e7095: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7098: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005e709b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e709d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5e70a0u); call_ind(t); }
    /* 005e70a0: mov esp, ebp */ r_esp = r_ebp;
    /* 005e70a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e70a3: ret 4 */ FN_RET(0x005e7045); r_esp += 8; return;
}

void f_005e70a6(void) /* FUN_005e70a6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e70a6);
    /* 005e70a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e70a7: mov ebp, esp */ r_ebp = r_esp;
    /* 005e70a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e70aa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e70ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e70b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e70b3: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 005e70b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e70b9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e70bc: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 005e70bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e70c2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e70c5: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 005e70c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e70cb: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005e70ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e70cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e70d2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005e70d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e70d8: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005e70db: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e70dd: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x5e70e0u); call_ind(t); }
    /* 005e70e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e70e3: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005e70e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e70e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e70ea: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e70ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e70f0: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e70f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e70f5: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5e70f8u); call_ind(t); }
    /* 005e70f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e70fb: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005e70fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e70ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7102: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 005e7105: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e710au); f_005ea0c3();
    /* 005e710a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e710c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e710d: ret 0xc */ FN_RET(0x005e70a6); r_esp += 16; return;
}

void f_005e7110(void) /* FUN_005e7110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7110);
    /* 005e7110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7111: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7117: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e711a: call 0x5e4fdf */ r_esp -= 4; W32(r_esp, 0x5e711fu); f_005e4fdf();
    /* 005e711f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7122: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005e7125: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7128: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005e712b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e712d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e7130u); call_ind(t); }
    /* 005e7130: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7133: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e7136: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7139: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e713c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e713e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e7141u); call_ind(t); }
    /* 005e7141: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7144: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7148: je 0x5e715d */ if (fZ) goto L_005e715d;
L_005e714a:; BB(0x005e714a);
    /* 005e714a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e714d: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e7150: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7153: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e7156: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7158: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e715bu); call_ind(t); }
    /* 005e715b: jmp 0x5e716e */ goto L_005e716e;
L_005e715d:; BB(0x005e715d);
    /* 005e715d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7160: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e7163: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7166: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e7169: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e716b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e716eu); call_ind(t); }
L_005e716e:; BB(0x005e716e);
    /* 005e716e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7170: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7171: ret  */ FN_RET(0x005e7110); r_esp += 4; return;
}

void f_005e7172(void) /* FUN_005e7172 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7172);
    /* 005e7172: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7173: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7175: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7176: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7179: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e717c: call 0x5e4faf */ r_esp -= 4; W32(r_esp, 0x5e7181u); f_005e4faf();
    /* 005e7181: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7184: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005e7187: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e718a: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005e718d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e718f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e7192u); call_ind(t); }
    /* 005e7192: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7195: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e7198: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e719b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e719e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e71a0: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e71a3u); call_ind(t); }
    /* 005e71a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e71a6: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e71a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e71ac: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e71af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e71b1: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e71b4u); call_ind(t); }
    /* 005e71b4: mov esp, ebp */ r_esp = r_ebp;
    /* 005e71b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e71b7: ret  */ FN_RET(0x005e7172); r_esp += 4; return;
}

void f_005e71b8(void) /* FUN_005e71b8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e71b8);
    /* 005e71b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e71b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005e71bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e71bc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e71bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e71c2: mov dword ptr [eax + 0x4c], 1 */ W32((u32)(r_eax+0x4cu), 0x1u);
    /* 005e71c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e71cc: call 0x5e7258 */ r_esp -= 4; W32(r_esp, 0x5e71d1u); f_005e7258();
    /* 005e71d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e71d4: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e71d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e71da: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e71dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e71df: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e71e2u); call_ind(t); }
    /* 005e71e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e71e5: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005e71e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e71eb: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005e71ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e71f0: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5e71f3u); call_ind(t); }
    /* 005e71f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e71f6: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e71f9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e71fc: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e71ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7201: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5e7204u); call_ind(t); }
    /* 005e7204: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7206: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7207: ret  */ FN_RET(0x005e71b8); r_esp += 4; return;
}

void f_005e7208(void) /* FUN_005e7208 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7208);
    /* 005e7208: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7209: mov ebp, esp */ r_ebp = r_esp;
    /* 005e720b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e720c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e720f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7212: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 005e7219: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e721c: call 0x5e7271 */ r_esp -= 4; W32(r_esp, 0x5e7221u); f_005e7271();
    /* 005e7221: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7224: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e7227: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e722a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e722d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e722f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e7232u); call_ind(t); }
    /* 005e7232: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7235: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005e7238: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e723b: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005e723e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7240: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5e7243u); call_ind(t); }
    /* 005e7243: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7246: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e7249: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e724c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e724f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7251: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5e7254u); call_ind(t); }
    /* 005e7254: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7256: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7257: ret  */ FN_RET(0x005e7208); r_esp += 4; return;
}

void f_005e7258(void) /* FUN_005e7258 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7258);
    /* 005e7258: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7259: mov ebp, esp */ r_ebp = r_esp;
    /* 005e725b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e725c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e725f: mov eax, dword ptr [0x6870a0] */ r_eax = R32((u32)(0x6870a0u));
    /* 005e7264: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7265: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7268: call 0x5e4eac */ r_esp -= 4; W32(r_esp, 0x5e726du); f_005e4eac();
    /* 005e726d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e726f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7270: ret  */ FN_RET(0x005e7258); r_esp += 4; return;
}

void f_005e7271(void) /* FUN_005e7271 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7271);
    /* 005e7271: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7272: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7274: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7275: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7278: mov eax, dword ptr [0x68709c] */ r_eax = R32((u32)(0x68709cu));
    /* 005e727d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e727e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7281: call 0x5e4eac */ r_esp -= 4; W32(r_esp, 0x5e7286u); f_005e4eac();
    /* 005e7286: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7288: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7289: ret  */ FN_RET(0x005e7271); r_esp += 4; return;
}

void f_005e728a(void) /* FUN_005e728a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e728a);
    /* 005e728a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e728b: mov ebp, esp */ r_ebp = r_esp;
    /* 005e728d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e728e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7291: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7294: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 005e7297: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7299: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e729a: ret  */ FN_RET(0x005e728a); r_esp += 4; return;
}

void f_005e729b(void) /* FUN_005e729b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e729b);
    /* 005e729b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e729c: mov ebp, esp */ r_ebp = r_esp;
    /* 005e729e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e72a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e72a2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e72a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e72a8: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e72ab: call 0x5e6552 */ r_esp -= 4; W32(r_esp, 0x5e72b0u); f_005e6552();
    /* 005e72b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e72b3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e72b7: je 0x5e72e6 */ if (fZ) goto L_005e72e6;
L_005e72b9:; BB(0x005e72b9);
    /* 005e72b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e72bc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e72be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e72c1: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5e72c4u); call_ind(t); }
    /* 005e72c4: mov esi, eax */ r_esi = r_eax;
    /* 005e72c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e72c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e72cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e72ce: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5e72d1u); call_ind(t); }
    /* 005e72d1: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e72d3: cmp dword ptr [ebp + 8], esi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e72d6: jl 0x5e72e6 */ if ((fS!=fO)) goto L_005e72e6;
L_005e72d8:; BB(0x005e72d8);
    /* 005e72d8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e72db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e72de: add ecx, dword ptr [eax + 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x50u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e72e1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e72e4: jmp 0x5e7313 */ goto L_005e7313;
L_005e72e6:; BB(0x005e72e6);
    /* 005e72e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e72e9: call 0x5e7526 */ r_esp -= 4; W32(r_esp, 0x5e72eeu); f_005e7526();
    /* 005e72ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e72f0: je 0x5e7313 */ if (fZ) goto L_005e7313;
L_005e72f2:; BB(0x005e72f2);
    /* 005e72f2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e72f5: mov esi, dword ptr [edx + 0x50] */ r_esi = R32((u32)(r_edx+0x50u));
    /* 005e72f8: imul esi, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e72fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e72ff: call 0x5e7526 */ r_esp -= 4; W32(r_esp, 0x5e7304u); f_005e7526();
    /* 005e7304: mov ecx, eax */ r_ecx = r_eax;
    /* 005e7306: mov eax, esi */ r_eax = r_esi;
    /* 005e7308: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e7309: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005e7309, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e7309, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e730b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e730e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e7310: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005e7313:; BB(0x005e7313);
    /* 005e7313: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7316: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e731a: jne 0x5e7345 */ if (!fZ) goto L_005e7345;
L_005e731c:; BB(0x005e731c);
    /* 005e731c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e731f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7320: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7323: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 005e7326: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7329: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005e732c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e732e: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x5e7331u); call_ind(t); }
    /* 005e7331: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7332: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7335: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e7338: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e733b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e733e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7340: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e7343u); call_ind(t); }
    /* 005e7343: jmp 0x5e736c */ goto L_005e736c;
L_005e7345:; BB(0x005e7345);
    /* 005e7345: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7348: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e734b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e734e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e7351: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7353: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e7356u); call_ind(t); }
    /* 005e7356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7357: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e735a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e735b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e735e: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e7361: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7364: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e7367: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7369: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e736cu); call_ind(t); }
L_005e736c:; BB(0x005e736c);
    /* 005e736c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e736d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e736f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7370: ret 4 */ FN_RET(0x005e729b); r_esp += 8; return;
}

void f_005e7373(void) /* FUN_005e7373 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7373);
    /* 005e7373: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7374: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7376: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7379: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e737c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e737f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7381: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7384: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5e7387u); call_ind(t); }
    /* 005e7387: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e738a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e738d: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7391: jne 0x5e73b2 */ if (!fZ) goto L_005e73b2;
L_005e7393:; BB(0x005e7393);
    /* 005e7393: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7396: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e7399: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005e739c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e739f: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e73a2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e73a5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e73a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e73aa: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e73adu); call_ind(t); }
    /* 005e73ad: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e73b0: jmp 0x5e73cf */ goto L_005e73cf;
L_005e73b2:; BB(0x005e73b2);
    /* 005e73b2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e73b5: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005e73b8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e73bb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e73be: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 005e73c1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e73c4: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005e73c7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e73c9: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x5e73ccu); call_ind(t); }
    /* 005e73cc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005e73cf:; BB(0x005e73cf);
    /* 005e73cf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e73d2: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e73d5: jge 0x5e7402 */ if ((fS==fO)) goto L_005e7402;
L_005e73d7:; BB(0x005e73d7);
    /* 005e73d7: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e73db: jg 0x5e73e6 */ if ((!fZ&&fS==fO)) goto L_005e73e6;
L_005e73dd:; BB(0x005e73dd);
    /* 005e73dd: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 005e73e4: jmp 0x5e73ef */ goto L_005e73ef;
L_005e73e6:; BB(0x005e73e6);
    /* 005e73e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e73e9: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e73ec: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005e73ef:; BB(0x005e73ef);
    /* 005e73ef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e73f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e73f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e73f5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e73f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e73fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e73fd: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5e7400u); call_ind(t); }
    /* 005e7400: jmp 0x5e742b */ goto L_005e742b;
L_005e7402:; BB(0x005e7402);
    /* 005e7402: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7406: jg 0x5e7411 */ if ((!fZ&&fS==fO)) goto L_005e7411;
L_005e7408:; BB(0x005e7408);
    /* 005e7408: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 005e740f: jmp 0x5e741a */ goto L_005e741a;
L_005e7411:; BB(0x005e7411);
    /* 005e7411: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7414: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e7417: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005e741a:; BB(0x005e741a);
    /* 005e741a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e741d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e741e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7420: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7423: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e7425: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7428: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5e742bu); call_ind(t); }
L_005e742b:; BB(0x005e742b);
    /* 005e742b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e742d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e742e: ret 4 */ FN_RET(0x005e7373); r_esp += 8; return;
}

void f_005e7431(void) /* FUN_005e7431 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7431);
    /* 005e7431: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7432: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7434: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7437: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e743a: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005e7441: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e7448: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e744b: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e744f: jne 0x5e7467 */ if (!fZ) goto L_005e7467;
L_005e7451:; BB(0x005e7451);
    /* 005e7451: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e7454: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 005e7457: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e745a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e745d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e745f: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e7462u); call_ind(t); }
    /* 005e7462: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e7465: jmp 0x5e747b */ goto L_005e747b;
L_005e7467:; BB(0x005e7467);
    /* 005e7467: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e746a: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e746d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e7470: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e7473: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7475: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e7478u); call_ind(t); }
    /* 005e7478: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005e747b:; BB(0x005e747b);
    /* 005e747b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e747e: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e7481: call 0x5e6552 */ r_esp -= 4; W32(r_esp, 0x5e7486u); f_005e6552();
    /* 005e7486: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e7489: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e748b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e748e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e7491: call 0x5e7526 */ r_esp -= 4; W32(r_esp, 0x5e7496u); f_005e7526();
    /* 005e7496: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7498: je 0x5e750c */ if (fZ) goto L_005e750c;
L_005e749a:; BB(0x005e749a);
    /* 005e749a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e749d: fild dword ptr [edx + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x50u)));
    /* 005e74a0: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 005e74a3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e74a6: call 0x5e7526 */ r_esp -= 4; W32(r_esp, 0x5e74abu); f_005e7526();
    /* 005e74ab: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e74ae: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 005e74b1: fdivr qword ptr [ebp - 0x20] */ ST(0) = R_F64((u32)(r_ebp+0xffffffe0u)) / ST(0);
    /* 005e74b4: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 005e74b7: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 005e74ba: fdiv qword ptr [ebp - 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xfffffff8u));
    /* 005e74bd: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005e74c0: push 0x3ff00000 */ { u32 v = 0x3ff00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005e74c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e74c7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e74ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e74cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e74ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e74cf: call 0x626c50 */ r_esp -= 4; W32(r_esp, 0x5e74d4u); f_00626c50();
    /* 005e74d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e74d7: fcomp qword ptr [0x63bf30] */ fx_compare(ST(0), R_F64((u32)(0x63bf30u))); FPOP();
    /* 005e74dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e74df: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e74e2: je 0x5e74f9 */ if (fZ) goto L_005e74f9;
L_005e74e4:; BB(0x005e74e4);
    /* 005e74e4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e74e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e74e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e74eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e74ec: call 0x626b50 */ r_esp -= 4; W32(r_esp, 0x5e74f1u); f_00626b50();
    /* 005e74f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e74f4: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005e74f7: jmp 0x5e750c */ goto L_005e750c;
L_005e74f9:; BB(0x005e74f9);
    /* 005e74f9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e74fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e74fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e7500: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7501: call 0x624af0 */ r_esp -= 4; W32(r_esp, 0x5e7506u); f_00624af0();
    /* 005e7506: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7509: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
L_005e750c:; BB(0x005e750c);
    /* 005e750c: fld qword ptr [ebp - 0x14] */ FPUSH(R_F64((u32)(r_ebp+0xffffffecu)));
    /* 005e750f: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5e7514u); f_00624144();
    /* 005e7514: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7515: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e7518: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e751a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e751d: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5e7520u); call_ind(t); }
    /* 005e7520: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7522: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7523: ret 4 */ FN_RET(0x005e7431); r_esp += 8; return;
}

void f_005e7526(void) /* FUN_005e7526 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7526);
    /* 005e7526: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7527: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7529: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e752c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e752d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e7530: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7533: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7535: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7538: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5e753bu); call_ind(t); }
    /* 005e753b: mov esi, eax */ r_esi = r_eax;
    /* 005e753d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7540: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7542: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7545: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5e7548u); call_ind(t); }
    /* 005e7548: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e754a: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 005e754d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7551: jge 0x5e755a */ if ((fS==fO)) goto L_005e755a;
L_005e7553:; BB(0x005e7553);
    /* 005e7553: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005e755a:; BB(0x005e755a);
    /* 005e755a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e755d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e755e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7560: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7561: ret  */ FN_RET(0x005e7526); r_esp += 4; return;
}

void f_005e7562(void) /* FUN_005e7562 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7562);
    /* 005e7562: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7563: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7565: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7566: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7569: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e756c: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 005e756f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7571: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7572: ret  */ FN_RET(0x005e7562); r_esp += 4; return;
}

void f_005e7573(void) /* FUN_005e7573 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7573);
    /* 005e7573: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7574: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7576: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7577: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e757a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e757c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e757e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e757f: ret  */ FN_RET(0x005e7573); r_esp += 4; return;
}

void f_005e7580(void) /* FUN_005e7580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7580);
    /* 005e7580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7581: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7587: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e7589: mov esp, ebp */ r_esp = r_ebp;
    /* 005e758b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e758c: ret  */ FN_RET(0x005e7580); r_esp += 4; return;
}

void f_005e758d(void) /* FUN_005e758d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e758d);
    /* 005e758d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e758e: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7590: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7591: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7592: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7595: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7599: jne 0x5e75c5 */ if (!fZ) goto L_005e75c5;
L_005e759b:; BB(0x005e759b);
    /* 005e759b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e759e: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005e75a1: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e75a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e75a6: jge 0x5e75b4 */ if ((fS==fO)) goto L_005e75b4;
L_005e75a8:; BB(0x005e75a8);
    /* 005e75a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e75ab: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
    /* 005e75b2: jmp 0x5e75c3 */ goto L_005e75c3;
L_005e75b4:; BB(0x005e75b4);
    /* 005e75b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e75b7: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005e75ba: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e75bd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e75c0: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
L_005e75c3:; BB(0x005e75c3);
    /* 005e75c3: jmp 0x5e7605 */ goto L_005e7605;
L_005e75c5:; BB(0x005e75c5);
    /* 005e75c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e75c8: mov esi, dword ptr [eax + 0x54] */ r_esi = R32((u32)(r_eax+0x54u));
    /* 005e75cb: add esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e75ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e75d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e75d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e75d6: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5e75d9u); call_ind(t); }
    /* 005e75d9: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e75dc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e75de: jle 0x5e75f6 */ if ((fZ||fS!=fO)) goto L_005e75f6;
L_005e75e0:; BB(0x005e75e0);
    /* 005e75e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e75e3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e75e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e75e8: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5e75ebu); call_ind(t); }
    /* 005e75eb: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e75ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e75f1: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 005e75f4: jmp 0x5e7605 */ goto L_005e7605;
L_005e75f6:; BB(0x005e75f6);
    /* 005e75f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e75f9: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005e75fc: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e75ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7602: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
L_005e7605:; BB(0x005e7605);
    /* 005e7605: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7608: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005e760b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e760c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e760f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e7611: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7614: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5e7617u); call_ind(t); }
    /* 005e7617: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e7618: mov esp, ebp */ r_esp = r_ebp;
    /* 005e761a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e761b: ret 8 */ FN_RET(0x005e758d); r_esp += 12; return;
}

void f_005e761e(void) /* FUN_005e761e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e761e);
    /* 005e761e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e761f: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7621: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7622: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7625: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7628: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e762b: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 005e762e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7631: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005e7634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7635: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7638: call 0x5e729b */ r_esp -= 4; W32(r_esp, 0x5e763du); f_005e729b();
    /* 005e763d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e763f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7640: ret 4 */ FN_RET(0x005e761e); r_esp += 8; return;
}

void f_005e7650(void) /* FUN_005e7650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7650);
    /* 005e7650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7651: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7657: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e765a: call 0x5e6459 */ r_esp -= 4; W32(r_esp, 0x5e765fu); f_005e6459();
    /* 005e765f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7662: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e7665: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7667: je 0x5e7675 */ if (fZ) goto L_005e7675;
L_005e7669:; BB(0x005e7669);
    /* 005e7669: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e766c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e766d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e7672u); f_0048ac1b();
    /* 005e7672: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e7675:; BB(0x005e7675);
    /* 005e7675: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7678: mov esp, ebp */ r_esp = r_ebp;
    /* 005e767a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e767b: ret 4 */ FN_RET(0x005e7650); r_esp += 8; return;
}

void f_005e7680(void) /* FUN_005e7680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7680);
    /* 005e7680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7681: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7687: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e768a: call 0x5e6511 */ r_esp -= 4; W32(r_esp, 0x5e768fu); f_005e6511();
    /* 005e768f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7692: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e7695: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7697: je 0x5e76a5 */ if (fZ) goto L_005e76a5;
L_005e7699:; BB(0x005e7699);
    /* 005e7699: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e769c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e769d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e76a2u); f_0048ac1b();
    /* 005e76a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e76a5:; BB(0x005e76a5);
    /* 005e76a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e76a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005e76aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e76ab: ret 4 */ FN_RET(0x005e7680); r_esp += 8; return;
}

void f_005e76b0(void) /* FUN_005e76b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e76b0);
    /* 005e76b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e76b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e76b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e76b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e76b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e76ba: call 0x5e69b1 */ r_esp -= 4; W32(r_esp, 0x5e76bfu); f_005e69b1();
    /* 005e76bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e76c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e76c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e76c7: je 0x5e76d5 */ if (fZ) goto L_005e76d5;
L_005e76c9:; BB(0x005e76c9);
    /* 005e76c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e76cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e76cd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e76d2u); f_0048ac1b();
    /* 005e76d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e76d5:; BB(0x005e76d5);
    /* 005e76d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e76d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005e76da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e76db: ret 4 */ FN_RET(0x005e76b0); r_esp += 8; return;
}

void f_005e76e0(void) /* FUN_005e76e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e76e0);
    /* 005e76e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e76e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e76e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e76e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e76e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e76ea: call 0x5d4d90 */ r_esp -= 4; W32(r_esp, 0x5e76efu); f_005d4d90();
    /* 005e76ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e76f2: mov dword ptr [eax], 0x63bf3c */ W32((u32)(r_eax), 0x63bf3cu);
    /* 005e76f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e76fb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e76fe: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
    /* 005e7704: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7707: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e770a: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 005e7710: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7713: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
    /* 005e771d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7720: mov dword ptr [eax + 0xa8], 0 */ W32((u32)(r_eax+0xa8u), 0x0u);
    /* 005e772a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e772d: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 005e7737: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e773a: mov dword ptr [edx + 0x84], 0 */ W32((u32)(r_edx+0x84u), 0x0u);
    /* 005e7744: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7747: mov dword ptr [eax + 0xb0], 1 */ W32((u32)(r_eax+0xb0u), 0x1u);
    /* 005e7751: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7754: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7756: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7757: ret 8 */ FN_RET(0x005e76e0); r_esp += 12; return;
}

void f_005e775a(void) /* FUN_005e775a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e775a);
    /* 005e775a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e775b: mov ebp, esp */ r_ebp = r_esp;
    /* 005e775d: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7760: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e7763: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e7766: mov dword ptr [eax], 0x63bf3c */ W32((u32)(r_eax), 0x63bf3cu);
    /* 005e776c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e776f: cmp dword ptr [ecx + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7776: je 0x5e77b5 */ if (fZ) goto L_005e77b5;
L_005e7778:; BB(0x005e7778);
    /* 005e7778: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e777b: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e7781: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e7784: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7787: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e778a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e778e: je 0x5e77a1 */ if (fZ) goto L_005e77a1;
L_005e7790:; BB(0x005e7790);
    /* 005e7790: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7792: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7795: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e7797: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e779a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5e779cu); call_ind(t); }
    /* 005e779c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e779f: jmp 0x5e77a8 */ goto L_005e77a8;
L_005e77a1:; BB(0x005e77a1);
    /* 005e77a1: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005e77a8:; BB(0x005e77a8);
    /* 005e77a8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e77ab: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
L_005e77b5:; BB(0x005e77b5);
    /* 005e77b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e77b8: cmp dword ptr [edx + 0x84], 0 */ {  u32 a = R32((u32)(r_edx+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e77bf: je 0x5e77fe */ if (fZ) goto L_005e77fe;
L_005e77c1:; BB(0x005e77c1);
    /* 005e77c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e77c4: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 005e77ca: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e77cd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e77d0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e77d3: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e77d7: je 0x5e77ea */ if (fZ) goto L_005e77ea;
L_005e77d9:; BB(0x005e77d9);
    /* 005e77d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e77db: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e77de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e77e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e77e3: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e77e5u); call_ind(t); }
    /* 005e77e5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e77e8: jmp 0x5e77f1 */ goto L_005e77f1;
L_005e77ea:; BB(0x005e77ea);
    /* 005e77ea: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005e77f1:; BB(0x005e77f1);
    /* 005e77f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e77f4: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
L_005e77fe:; BB(0x005e77fe);
    /* 005e77fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e7801: call 0x5d4dd0 */ r_esp -= 4; W32(r_esp, 0x5e7806u); f_005d4dd0();
    /* 005e7806: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7808: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7809: ret  */ FN_RET(0x005e775a); r_esp += 4; return;
}

void f_005e780a(void) /* FUN_005e780a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e780a);
    /* 005e780a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e780b: mov ebp, esp */ r_ebp = r_esp;
    /* 005e780d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7810: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e7813: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7816: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e781d: je 0x5e784f */ if (fZ) goto L_005e784f;
L_005e781f:; BB(0x005e781f);
    /* 005e781f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7822: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 005e7828: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005e782b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e782e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e7831: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7835: je 0x5e7848 */ if (fZ) goto L_005e7848;
L_005e7837:; BB(0x005e7837);
    /* 005e7837: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7839: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e783c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e783e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7841: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e7843u); call_ind(t); }
    /* 005e7843: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e7846: jmp 0x5e784f */ goto L_005e784f;
L_005e7848:; BB(0x005e7848);
    /* 005e7848: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005e784f:; BB(0x005e784f);
    /* 005e784f: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7851: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e7856u); f_0048ab58();
    /* 005e7856: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7859: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e785c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7860: je 0x5e7873 */ if (fZ) goto L_005e7873;
L_005e7862:; BB(0x005e7862);
    /* 005e7862: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7865: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7866: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e7869: call 0x5e7f90 */ r_esp -= 4; W32(r_esp, 0x5e786eu); f_005e7f90();
    /* 005e786e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e7871: jmp 0x5e787a */ goto L_005e787a;
L_005e7873:; BB(0x005e7873);
    /* 005e7873: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005e787a:; BB(0x005e787a);
    /* 005e787a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e787d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e7880: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 005e7886: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7889: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005e788f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7892: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e7895: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005e7898: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e789b: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005e78a1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e78a4: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e78aa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e78ac: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e78afu); call_ind(t); }
    /* 005e78af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e78b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e78b3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e78b6: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005e78bc: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e78c1u); f_005ea0c3();
    /* 005e78c1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e78c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e78c5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e78c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e78c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e78cc: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005e78d2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e78d5: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e78db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e78dd: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e78e0u); call_ind(t); }
    /* 005e78e0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005e78e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e78e4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e78e7: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005e78ed: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e78f0: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e78f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e78f8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e78fbu); call_ind(t); }
    /* 005e78fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005e78fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e78fe: ret 0x10 */ FN_RET(0x005e780a); r_esp += 20; return;
}

void f_005e7901(void) /* FUN_005e7901 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7901);
    /* 005e7901: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7902: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7904: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7905: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7908: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e790b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e790e: mov dword ptr [eax + 0x94], ecx */ W32((u32)(r_eax+0x94u), r_ecx);
    /* 005e7914: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7917: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e791a: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 005e7920: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7922: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7923: ret 8 */ FN_RET(0x005e7901); r_esp += 12; return;
}

void f_005e7926(void) /* FUN_005e7926 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7926);
    /* 005e7926: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7927: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7929: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e792a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e792d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7930: mov eax, dword ptr [eax + 0x94] */ r_eax = R32((u32)(r_eax+0x94u));
    /* 005e7936: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7938: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7939: ret  */ FN_RET(0x005e7926); r_esp += 4; return;
}

void f_005e793a(void) /* FUN_005e793a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e793a);
    /* 005e793a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e793b: mov ebp, esp */ r_ebp = r_esp;
    /* 005e793d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e793e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7941: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7944: mov eax, dword ptr [eax + 0x98] */ r_eax = R32((u32)(r_eax+0x98u));
    /* 005e794a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e794c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e794d: ret  */ FN_RET(0x005e793a); r_esp += 4; return;
}

void f_005e794e(void) /* FUN_005e794e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e794e);
    /* 005e794e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e794f: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7951: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7954: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e7957: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e795a: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7961: je 0x5e7993 */ if (fZ) goto L_005e7993;
L_005e7963:; BB(0x005e7963);
    /* 005e7963: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7966: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 005e796c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005e796f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7972: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e7975: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7979: je 0x5e798c */ if (fZ) goto L_005e798c;
L_005e797b:; BB(0x005e797b);
    /* 005e797b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e797d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7980: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e7982: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7985: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e7987u); call_ind(t); }
    /* 005e7987: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e798a: jmp 0x5e7993 */ goto L_005e7993;
L_005e798c:; BB(0x005e798c);
    /* 005e798c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005e7993:; BB(0x005e7993);
    /* 005e7993: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7998: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e799du); f_0048ab58();
    /* 005e799d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e79a0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e79a3: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e79a7: je 0x5e79b6 */ if (fZ) goto L_005e79b6;
L_005e79a9:; BB(0x005e79a9);
    /* 005e79a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e79ac: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5e79b1u); f_005e8590();
    /* 005e79b1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e79b4: jmp 0x5e79bd */ goto L_005e79bd;
L_005e79b6:; BB(0x005e79b6);
    /* 005e79b6: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005e79bd:; BB(0x005e79bd);
    /* 005e79bd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e79c0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e79c3: mov dword ptr [eax + 0x84], ecx */ W32((u32)(r_eax+0x84u), r_ecx);
    /* 005e79c9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e79cc: cmp dword ptr [edx + 0x84], 0 */ {  u32 a = R32((u32)(r_edx+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e79d3: je 0x5e7a19 */ if (fZ) goto L_005e7a19;
L_005e79d5:; BB(0x005e79d5);
    /* 005e79d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e79d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e79d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e79dc: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 005e79e2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e79e5: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005e79eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e79ed: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5e79f0u); call_ind(t); }
    /* 005e79f0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e79f3: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 005e79f9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e79fc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e79ff: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005e7a02: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7a05: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 005e7a0b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7a0e: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005e7a14: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7a16: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e7a19u); call_ind(t); }
L_005e7a19:; BB(0x005e7a19);
    /* 005e7a19: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7a1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7a1c: ret 4 */ FN_RET(0x005e794e); r_esp += 8; return;
}

void f_005e7a1f(void) /* FUN_005e7a1f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7a1f);
    /* 005e7a1f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a20: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7a22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a23: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7a26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7a29: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x5e7a2eu); f_005ea2c1();
    /* 005e7a2e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7a31: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7a38: je 0x5e7a51 */ if (fZ) goto L_005e7a51;
L_005e7a3a:; BB(0x005e7a3a);
    /* 005e7a3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7a3d: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 005e7a43: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7a46: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005e7a4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7a4e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e7a51u); call_ind(t); }
L_005e7a51:; BB(0x005e7a51);
    /* 005e7a51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7a54: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7a5b: je 0x5e7ad6 */ if (fZ) goto L_005e7ad6;
L_005e7a5d:; BB(0x005e7a5d);
    /* 005e7a5d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7a60: cmp dword ptr [ecx + 0x90], 0 */ {  u32 a = R32((u32)(r_ecx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7a67: je 0x5e7a95 */ if (fZ) goto L_005e7a95;
L_005e7a69:; BB(0x005e7a69);
    /* 005e7a69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7a6c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e7a6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7a71: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5e7a74u); call_ind(t); }
    /* 005e7a74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7a78: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 005e7a7e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7a81: add edx, dword ptr [eax + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xa8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e7a87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7a8b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e7a8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7a90: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e7a93u); call_ind(t); }
    /* 005e7a93: jmp 0x5e7abf */ goto L_005e7abf;
L_005e7a95:; BB(0x005e7a95);
    /* 005e7a95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7a98: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 005e7a9e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7aa1: add ecx, dword ptr [edx + 0xa8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xa8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7aa7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7aa8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7aab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7aad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ab0: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e7ab3u); call_ind(t); }
    /* 005e7ab3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ab4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ab7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7ab9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7abc: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e7abfu); call_ind(t); }
L_005e7abf:; BB(0x005e7abf);
    /* 005e7abf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ac2: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005e7ac8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7acb: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e7ad1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7ad3: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e7ad6u); call_ind(t); }
L_005e7ad6:; BB(0x005e7ad6);
    /* 005e7ad6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7ad8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7ad9: ret  */ FN_RET(0x005e7a1f); r_esp += 4; return;
}

void f_005e7ada(void) /* FUN_005e7ada */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7ada);
    /* 005e7ada: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7adb: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7add: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ade: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7ae1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ae4: call 0x5ea28a */ r_esp -= 4; W32(r_esp, 0x5e7ae9u); f_005ea28a();
    /* 005e7ae9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7aec: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7af3: je 0x5e7b0c */ if (fZ) goto L_005e7b0c;
L_005e7af5:; BB(0x005e7af5);
    /* 005e7af5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7af8: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 005e7afe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7b01: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005e7b07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7b09: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e7b0cu); call_ind(t); }
L_005e7b0c:; BB(0x005e7b0c);
    /* 005e7b0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7b0f: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7b16: je 0x5e7b2f */ if (fZ) goto L_005e7b2f;
L_005e7b18:; BB(0x005e7b18);
    /* 005e7b18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7b1b: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005e7b21: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7b24: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e7b2a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7b2c: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e7b2fu); call_ind(t); }
L_005e7b2f:; BB(0x005e7b2f);
    /* 005e7b2f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7b31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7b32: ret  */ FN_RET(0x005e7ada); r_esp += 4; return;
}

void f_005e7b33(void) /* FUN_005e7b33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7b33);
    /* 005e7b33: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7b34: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7b36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7b37: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7b3a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7b3d: mov dword ptr [eax + 0xb0], 1 */ W32((u32)(r_eax+0xb0u), 0x1u);
    /* 005e7b47: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7b49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7b4a: ret  */ FN_RET(0x005e7b33); r_esp += 4; return;
}

void f_005e7b4b(void) /* FUN_005e7b4b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7b4b);
    /* 005e7b4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7b4c: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7b4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7b4f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7b52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7b55: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 005e7b5f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7b61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7b62: ret  */ FN_RET(0x005e7b4b); r_esp += 4; return;
}

void f_005e7b63(void) /* FUN_005e7b63 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7b63);
    /* 005e7b63: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7b64: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7b66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7b67: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7b6a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7b6d: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 005e7b73: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7b75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7b76: ret  */ FN_RET(0x005e7b63); r_esp += 4; return;
}

void f_005e7b77(void) /* FUN_005e7b77 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7b77);
    /* 005e7b77: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7b78: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7b7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7b7b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7b7e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7b82: jge 0x5e7b93 */ if ((fS==fO)) goto L_005e7b93;
L_005e7b84:; BB(0x005e7b84);
    /* 005e7b84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7b87: mov dword ptr [eax + 0xa8], 0 */ W32((u32)(r_eax+0xa8u), 0x0u);
    /* 005e7b91: jmp 0x5e7be5 */ goto L_005e7be5;
L_005e7b93:; BB(0x005e7b93);
    /* 005e7b93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7b96: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7b99: mov eax, dword ptr [ecx + 0x98] */ r_eax = R32((u32)(r_ecx+0x98u));
    /* 005e7b9f: sub eax, dword ptr [edx + 0x94] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x94u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e7ba5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ba6: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5e7babu); f_00624700();
    /* 005e7bab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7bae: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7bb1: jle 0x5e7bd9 */ if ((fZ||fS!=fO)) goto L_005e7bd9;
L_005e7bb3:; BB(0x005e7bb3);
    /* 005e7bb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7bb6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7bb9: mov eax, dword ptr [ecx + 0x98] */ r_eax = R32((u32)(r_ecx+0x98u));
    /* 005e7bbf: sub eax, dword ptr [edx + 0x94] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x94u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e7bc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7bc6: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5e7bcbu); f_00624700();
    /* 005e7bcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7bce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7bd1: mov dword ptr [ecx + 0xa8], eax */ W32((u32)(r_ecx+0xa8u), r_eax);
    /* 005e7bd7: jmp 0x5e7be5 */ goto L_005e7be5;
L_005e7bd9:; BB(0x005e7bd9);
    /* 005e7bd9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7bdc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7bdf: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
L_005e7be5:; BB(0x005e7be5);
    /* 005e7be5: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7be7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7be8: ret 4 */ FN_RET(0x005e7b77); r_esp += 8; return;
}

void f_005e7beb(void) /* FUN_005e7beb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7beb);
    /* 005e7beb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7bec: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7bee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7bef: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7bf2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7bf5: mov eax, dword ptr [eax + 0xa8] */ r_eax = R32((u32)(r_eax+0xa8u));
    /* 005e7bfb: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7bfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7bfe: ret  */ FN_RET(0x005e7beb); r_esp += 4; return;
}

void f_005e7bff(void) /* FUN_005e7bff */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7bff);
    /* 005e7bff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7c00: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7c02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7c03: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7c06: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7c08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7c09: ret 8 */ FN_RET(0x005e7bff); r_esp += 12; return;
}

void f_005e7c0c(void) /* FUN_005e7c0c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7c0c);
    /* 005e7c0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7c0d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7c0f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7c12: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7c15: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7c18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7c19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7c1c: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x5e7c21u); f_005d9738();
    /* 005e7c21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7c23: jne 0x5e7c31 */ if (!fZ) goto L_005e7c31;
L_005e7c25:; BB(0x005e7c25);
    /* 005e7c25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7c28: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7c2f: je 0x5e7c46 */ if (fZ) goto L_005e7c46;
L_005e7c31:; BB(0x005e7c31);
    /* 005e7c31: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7c34: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7c38: jne 0x5e7c46 */ if (!fZ) goto L_005e7c46;
L_005e7c3a:; BB(0x005e7c3a);
    /* 005e7c3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7c3d: call 0x5e7b63 */ r_esp -= 4; W32(r_esp, 0x5e7c42u); f_005e7b63();
    /* 005e7c42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7c44: jne 0x5e7c4d */ if (!fZ) goto L_005e7c4d;
L_005e7c46:; BB(0x005e7c46);
    /* 005e7c46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e7c48: jmp 0x5e7f8a */ goto L_005e7f8a;
L_005e7c4d:; BB(0x005e7c4d);
    /* 005e7c4d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7c50: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005e7c53: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e7c56: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7c5a: je 0x5e7c75 */ if (fZ) goto L_005e7c75;
L_005e7c5c:; BB(0x005e7c5c);
    /* 005e7c5c: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7c60: je 0x5e7f0c */ if (fZ) goto L_005e7f0c;
L_005e7c66:; BB(0x005e7c66);
    /* 005e7c66: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7c6a: je 0x5e7d41 */ if (fZ) goto L_005e7d41;
L_005e7c70:; BB(0x005e7c70);
    /* 005e7c70: jmp 0x5e7f84 */ goto L_005e7f84;
L_005e7c75:; BB(0x005e7c75);
    /* 005e7c75: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7c78: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005e7c7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7c7c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7c7f: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005e7c82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7c83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7c86: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7c88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7c8b: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5e7c8eu); call_ind(t); }
    /* 005e7c8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7c90: je 0x5e7ca9 */ if (fZ) goto L_005e7ca9;
L_005e7c92:; BB(0x005e7c92);
    /* 005e7c92: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7c95: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005e7c98: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7c9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7c9d: je 0x5e7ca9 */ if (fZ) goto L_005e7ca9;
L_005e7c9f:; BB(0x005e7c9f);
    /* 005e7c9f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7ca2: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
L_005e7ca9:; BB(0x005e7ca9);
    /* 005e7ca9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7cac: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e7caf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7cb0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7cb3: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005e7cb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7cb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7cba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e7cbc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7cbf: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5e7cc2u); call_ind(t); }
    /* 005e7cc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7cc4: je 0x5e7d3c */ if (fZ) goto L_005e7d3c;
L_005e7cc6:; BB(0x005e7cc6);
    /* 005e7cc6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7cc9: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005e7ccc: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7ccf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7cd1: je 0x5e7d3c */ if (fZ) goto L_005e7d3c;
L_005e7cd3:; BB(0x005e7cd3);
    /* 005e7cd3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7cd6: cmp dword ptr [edx + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7cdd: jne 0x5e7d3c */ if (!fZ) goto L_005e7d3c;
L_005e7cdf:; BB(0x005e7cdf);
    /* 005e7cdf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ce2: mov dword ptr [eax + 0x8c], 1 */ W32((u32)(r_eax+0x8cu), 0x1u);
    /* 005e7cec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7cef: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
    /* 005e7cf6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7cf9: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7d00: je 0x5e7d20 */ if (fZ) goto L_005e7d20;
L_005e7d02:; BB(0x005e7d02);
    /* 005e7d02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d05: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7d07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d0a: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e7d0du); call_ind(t); }
    /* 005e7d0d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7d10: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005e7d13: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e7d15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d18: mov dword ptr [eax + 0x9c], edx */ W32((u32)(r_eax+0x9cu), r_edx);
    /* 005e7d1e: jmp 0x5e7d3c */ goto L_005e7d3c;
L_005e7d20:; BB(0x005e7d20);
    /* 005e7d20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d23: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e7d25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d28: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e7d2bu); call_ind(t); }
    /* 005e7d2b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7d2e: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e7d31: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e7d33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d36: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
L_005e7d3c:; BB(0x005e7d3c);
    /* 005e7d3c: jmp 0x5e7f84 */ goto L_005e7f84;
L_005e7d41:; BB(0x005e7d41);
    /* 005e7d41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d44: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7d4b: je 0x5e7f0a */ if (fZ) goto L_005e7f0a;
L_005e7d51:; BB(0x005e7d51);
    /* 005e7d51: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d54: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7d5b: je 0x5e7e33 */ if (fZ) goto L_005e7e33;
L_005e7d61:; BB(0x005e7d61);
    /* 005e7d61: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7d64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d67: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005e7d6a: sub edx, dword ptr [ecx + 0x9c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x9cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e7d70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d73: cmp edx, dword ptr [eax + 0x94] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x94u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7d79: jge 0x5e7d9e */ if ((fS==fO)) goto L_005e7d9e;
L_005e7d7b:; BB(0x005e7d7b);
    /* 005e7d7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d7e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e7d80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d83: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e7d86u); call_ind(t); }
    /* 005e7d86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7d87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d8a: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 005e7d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7d91: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d94: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e7d96: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7d99: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5e7d9cu); call_ind(t); }
    /* 005e7d9c: jmp 0x5e7e02 */ goto L_005e7e02;
L_005e7d9e:; BB(0x005e7d9e);
    /* 005e7d9e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7da1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7da4: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005e7da7: sub eax, dword ptr [edx + 0x9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x9cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e7dad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7db0: cmp eax, dword ptr [ecx + 0x98] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x98u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7db6: jle 0x5e7ddb */ if ((fZ||fS!=fO)) goto L_005e7ddb;
L_005e7db8:; BB(0x005e7db8);
    /* 005e7db8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7dbb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e7dbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7dc0: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5e7dc3u); call_ind(t); }
    /* 005e7dc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7dc4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7dc7: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 005e7dcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7dce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7dd1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7dd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7dd6: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e7dd9u); call_ind(t); }
    /* 005e7dd9: jmp 0x5e7e02 */ goto L_005e7e02;
L_005e7ddb:; BB(0x005e7ddb);
    /* 005e7ddb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7dde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7de0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7de3: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e7de6u); call_ind(t); }
    /* 005e7de6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7de7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7dea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ded: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005e7df0: sub edx, dword ptr [ecx + 0x9c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x9cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e7df6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7df7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7dfa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7dfc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7dff: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e7e02u); call_ind(t); }
L_005e7e02:; BB(0x005e7e02);
    /* 005e7e02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e05: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7e07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e0a: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e7e0du); call_ind(t); }
    /* 005e7e0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e0e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7e13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e16: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e7e19u); call_ind(t); }
    /* 005e7e19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e1c: sub eax, dword ptr [ecx + 0x94] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x94u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e7e22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e23: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e26: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e7e28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e2b: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5e7e2eu); call_ind(t); }
    /* 005e7e2e: jmp 0x5e7f00 */ goto L_005e7f00;
L_005e7e33:; BB(0x005e7e33);
    /* 005e7e33: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7e36: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e39: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 005e7e3c: sub eax, dword ptr [edx + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e7e42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e45: cmp eax, dword ptr [ecx + 0x94] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x94u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7e4b: jge 0x5e7e70 */ if ((fS==fO)) goto L_005e7e70;
L_005e7e4d:; BB(0x005e7e4d);
    /* 005e7e4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e50: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 005e7e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e5a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e7e5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e5f: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e7e62u); call_ind(t); }
    /* 005e7e62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7e68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e6b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e7e6eu); call_ind(t); }
    /* 005e7e6e: jmp 0x5e7ed4 */ goto L_005e7ed4;
L_005e7e70:; BB(0x005e7e70);
    /* 005e7e70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7e73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e76: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005e7e79: sub edx, dword ptr [ecx + 0xa0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e7e7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e82: cmp edx, dword ptr [eax + 0x98] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x98u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7e88: jle 0x5e7ead */ if ((fZ||fS!=fO)) goto L_005e7ead;
L_005e7e8a:; BB(0x005e7e8a);
    /* 005e7e8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e8d: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 005e7e93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7e99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7e9c: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e7e9fu); call_ind(t); }
    /* 005e7e9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ea0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ea3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7ea5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ea8: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e7eabu); call_ind(t); }
    /* 005e7eab: jmp 0x5e7ed4 */ goto L_005e7ed4;
L_005e7ead:; BB(0x005e7ead);
    /* 005e7ead: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7eb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7eb3: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005e7eb6: sub edx, dword ptr [ecx + 0xa0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e7ebc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ebd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ec0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7ec2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ec5: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e7ec8u); call_ind(t); }
    /* 005e7ec8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ec9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ecc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7ece: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ed1: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e7ed4u); call_ind(t); }
L_005e7ed4:; BB(0x005e7ed4);
    /* 005e7ed4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ed7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7ed9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7edc: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e7edfu); call_ind(t); }
    /* 005e7edf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ee0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ee3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7ee5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ee8: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e7eebu); call_ind(t); }
    /* 005e7eeb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7eee: sub eax, dword ptr [ecx + 0x94] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x94u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e7ef4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ef5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ef8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e7efa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7efd: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5e7f00u); call_ind(t); }
L_005e7f00:; BB(0x005e7f00);
    /* 005e7f00: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7f03: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_005e7f0a:; BB(0x005e7f0a);
    /* 005e7f0a: jmp 0x5e7f84 */ goto L_005e7f84;
L_005e7f0c:; BB(0x005e7f0c);
    /* 005e7f0c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7f0f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005e7f12: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e7f15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7f17: je 0x5e7f84 */ if (fZ) goto L_005e7f84;
L_005e7f19:; BB(0x005e7f19);
    /* 005e7f19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7f1c: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7f23: je 0x5e7f84 */ if (fZ) goto L_005e7f84;
L_005e7f25:; BB(0x005e7f25);
    /* 005e7f25: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7f28: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7f2f: je 0x5e7f50 */ if (fZ) goto L_005e7f50;
L_005e7f31:; BB(0x005e7f31);
    /* 005e7f31: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7f34: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7f36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7f39: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e7f3cu); call_ind(t); }
    /* 005e7f3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7f3f: sub eax, dword ptr [ecx + 0x94] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x94u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e7f45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7f46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7f49: call 0x5e7b77 */ r_esp -= 4; W32(r_esp, 0x5e7f4eu); f_005e7b77();
    /* 005e7f4e: jmp 0x5e7f6d */ goto L_005e7f6d;
L_005e7f50:; BB(0x005e7f50);
    /* 005e7f50: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7f53: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e7f55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7f58: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5e7f5bu); call_ind(t); }
    /* 005e7f5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7f5e: sub eax, dword ptr [ecx + 0x94] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x94u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e7f64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7f65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7f68: call 0x5e7b77 */ r_esp -= 4; W32(r_esp, 0x5e7f6du); f_005e7b77();
L_005e7f6d:; BB(0x005e7f6d);
    /* 005e7f6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7f70: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
    /* 005e7f7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7f7d: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
L_005e7f84:; BB(0x005e7f84);
    /* 005e7f84: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7f87: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
L_005e7f8a:; BB(0x005e7f8a);
    /* 005e7f8a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7f8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7f8d: ret 4 */ FN_RET(0x005e7c0c); r_esp += 8; return;
}

void f_005e7fc4(void) /* FUN_005e7fc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7fc4);
    /* 005e7fc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7fc5: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7fc7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7fc8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7fcb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7fce: mov dword ptr [eax], 0x63bf8c */ W32((u32)(r_eax), 0x63bf8cu);
    /* 005e7fd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7fd7: call 0x5e9dde */ r_esp -= 4; W32(r_esp, 0x5e7fdcu); f_005e9dde();
    /* 005e7fdc: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7fde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7fdf: ret  */ FN_RET(0x005e7fc4); r_esp += 4; return;
}

void f_005e7fe0(void) /* FUN_005e7fe0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7fe0);
    /* 005e7fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7fe3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7fe6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7fe7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e7fea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7fed: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e7ff0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ff1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7ff4: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005e7ff7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ff8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7ffb: call 0x5ea4a2 */ r_esp -= 4; W32(r_esp, 0x5e8000u); f_005ea4a2();
    /* 005e8000: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8002: je 0x5e800d */ if (fZ) goto L_005e800d;
L_005e8004:; BB(0x005e8004);
    /* 005e8004: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8007: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e800b: je 0x5e8018 */ if (fZ) goto L_005e8018;
L_005e800d:; BB(0x005e800d);
    /* 005e800d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e8010: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e8013: jmp 0x5e81af */ goto L_005e81af;
L_005e8018:; BB(0x005e8018);
    /* 005e8018: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e801b: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005e801e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e8021: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8025: je 0x5e802c */ if (fZ) goto L_005e802c;
L_005e8027:; BB(0x005e8027);
    /* 005e8027: jmp 0x5e81a9 */ goto L_005e81a9;
L_005e802c:; BB(0x005e802c);
    /* 005e802c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e802f: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005e8032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8033: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8036: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005e8039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e803a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e803d: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e8040: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8043: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005e8046: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e8048: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5e804bu); call_ind(t); }
    /* 005e804b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e804d: jne 0x5e81a9 */ if (!fZ) goto L_005e81a9;
L_005e8053:; BB(0x005e8053);
    /* 005e8053: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8056: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e8059: call 0x5e7b63 */ r_esp -= 4; W32(r_esp, 0x5e805eu); f_005e7b63();
    /* 005e805e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8060: je 0x5e81a9 */ if (fZ) goto L_005e81a9;
L_005e8066:; BB(0x005e8066);
    /* 005e8066: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8069: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 005e806c: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8073: je 0x5e80d2 */ if (fZ) goto L_005e80d2;
L_005e8075:; BB(0x005e8075);
    /* 005e8075: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8078: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e807b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e807e: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 005e8081: sub esi, dword ptr [ecx + 0x94] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x94u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e8087: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e808a: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e808d: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e8092u); f_005d98c3();
    /* 005e8092: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e8093: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e8095: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e8097: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e8099: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e809a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e809d: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005e80a0: call 0x5e7b77 */ r_esp -= 4; W32(r_esp, 0x5e80a5u); f_005e7b77();
    /* 005e80a5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e80a8: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005e80ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e80ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e80af: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 005e80b2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e80b5: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005e80b8: sub ecx, dword ptr [edx + 0x94] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x94u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e80be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e80bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e80c2: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005e80c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e80c8: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005e80cb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e80cd: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5e80d0u); call_ind(t); }
    /* 005e80d0: jmp 0x5e812d */ goto L_005e812d;
L_005e80d2:; BB(0x005e80d2);
    /* 005e80d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e80d5: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 005e80d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e80db: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 005e80de: sub esi, dword ptr [edx + 0x94] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x94u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e80e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e80e7: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005e80ea: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e80efu); f_005d98da();
    /* 005e80ef: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e80f0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e80f2: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e80f4: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e80f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e80f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e80fa: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005e80fd: call 0x5e7b77 */ r_esp -= 4; W32(r_esp, 0x5e8102u); f_005e7b77();
    /* 005e8102: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e8105: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e8108: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8109: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e810c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005e810f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8112: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e8115: sub edx, dword ptr [eax + 0x94] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x94u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e811b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e811c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e811f: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e8122: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8125: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005e8128: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e812a: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5e812du); call_ind(t); }
L_005e812d:; BB(0x005e812d);
    /* 005e812d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8130: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e8133: mov dword ptr [ecx + 0x8c], 1 */ W32((u32)(r_ecx+0x8cu), 0x1u);
    /* 005e813d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8140: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005e8143: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8146: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005e8149: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e814b: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5e814eu); call_ind(t); }
    /* 005e814e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8151: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 005e8154: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e815b: je 0x5e8184 */ if (fZ) goto L_005e8184;
L_005e815d:; BB(0x005e815d);
    /* 005e815d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8160: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e8163: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8166: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005e8169: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e816b: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e816eu); call_ind(t); }
    /* 005e816e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8171: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005e8174: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e8176: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8179: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e817c: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 005e8182: jmp 0x5e81a9 */ goto L_005e81a9;
L_005e8184:; BB(0x005e8184);
    /* 005e8184: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8187: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005e818a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e818d: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005e8190: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e8192: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5e8195u); call_ind(t); }
    /* 005e8195: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8198: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e819b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e819d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e81a0: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e81a3: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
L_005e81a9:; BB(0x005e81a9);
    /* 005e81a9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e81ac: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
L_005e81af:; BB(0x005e81af);
    /* 005e81af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e81b0: mov esp, ebp */ r_esp = r_ebp;
    /* 005e81b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e81b3: ret 4 */ FN_RET(0x005e7fe0); r_esp += 8; return;
}

void f_005e81c0(void) /* FUN_005e81c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e81c0);
    /* 005e81c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e81c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e81c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e81c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e81c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e81ca: call 0x5e775a */ r_esp -= 4; W32(r_esp, 0x5e81cfu); f_005e775a();
    /* 005e81cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e81d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e81d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e81d7: je 0x5e81e5 */ if (fZ) goto L_005e81e5;
L_005e81d9:; BB(0x005e81d9);
    /* 005e81d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e81dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e81dd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e81e2u); f_0048ac1b();
    /* 005e81e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e81e5:; BB(0x005e81e5);
    /* 005e81e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e81e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005e81ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e81eb: ret 4 */ FN_RET(0x005e81c0); r_esp += 8; return;
}

void f_005e81f0(void) /* FUN_005e81f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e81f0);
    /* 005e81f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e81f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e81f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e81f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e81f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e81fa: call 0x5e7fc4 */ r_esp -= 4; W32(r_esp, 0x5e81ffu); f_005e7fc4();
    /* 005e81ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e8202: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e8205: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8207: je 0x5e8215 */ if (fZ) goto L_005e8215;
L_005e8209:; BB(0x005e8209);
    /* 005e8209: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e820c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e820d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e8212u); f_0048ac1b();
    /* 005e8212: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e8215:; BB(0x005e8215);
    /* 005e8215: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8218: mov esp, ebp */ r_esp = r_ebp;
    /* 005e821a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e821b: ret 4 */ FN_RET(0x005e81f0); r_esp += 8; return;
}

void f_005e8220(void) /* FUN_005e8220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8220);
    /* 005e8220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8221: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8227: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8229: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e822c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e822d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8230: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8231: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8233: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8236: call 0x5bac50 */ r_esp -= 4; W32(r_esp, 0x5e823bu); f_005bac50();
    /* 005e823b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e823e: mov dword ptr [edx], 0x63bfd4 */ W32((u32)(r_edx), 0x63bfd4u);
    /* 005e8244: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8247: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005e824a: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e824d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8250: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 005e8253: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8256: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e8259: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e825c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e825f: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 005e8262: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8265: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005e8268: sub ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e826b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e826e: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 005e8271: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8274: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8277: ret 8 */ FN_RET(0x005e8220); r_esp += 12; return;
}

void f_005e827a(void) /* FUN_005e827a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e827a);
    /* 005e827a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e827b: mov ebp, esp */ r_ebp = r_esp;
    /* 005e827d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e827e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8281: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8284: mov dword ptr [eax], 0x63bfd4 */ W32((u32)(r_eax), 0x63bfd4u);
    /* 005e828a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e828d: call 0x5bad47 */ r_esp -= 4; W32(r_esp, 0x5e8292u); f_005bad47();
    /* 005e8292: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8294: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8295: ret  */ FN_RET(0x005e827a); r_esp += 4; return;
}

void f_005e8296(void) /* FUN_005e8296 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8296);
    /* 005e8296: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8297: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8299: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e829a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e829d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e82a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e82a1: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005e82a7: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e82aa: call 0x5ffb01 */ r_esp -= 4; W32(r_esp, 0x5e82afu); f_005ffb01();
    /* 005e82af: mov esp, ebp */ r_esp = r_ebp;
    /* 005e82b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e82b2: ret  */ FN_RET(0x005e8296); r_esp += 4; return;
}

void f_005e82c0(void) /* FUN_005e82c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e82c0);
    /* 005e82c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e82c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e82c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e82c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e82c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e82ca: call 0x5e827a */ r_esp -= 4; W32(r_esp, 0x5e82cfu); f_005e827a();
    /* 005e82cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e82d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e82d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e82d7: je 0x5e82e5 */ if (fZ) goto L_005e82e5;
L_005e82d9:; BB(0x005e82d9);
    /* 005e82d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e82dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e82dd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e82e2u); f_0048ac1b();
    /* 005e82e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e82e5:; BB(0x005e82e5);
    /* 005e82e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e82e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005e82ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e82eb: ret 4 */ FN_RET(0x005e82c0); r_esp += 8; return;
}

void f_005e82f0(void) /* FUN_005e82f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e82f0);
    /* 005e82f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e82f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e82f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e82f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e82f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e82fa: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5e82ffu); f_005dfbf0();
    /* 005e82ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8302: mov dword ptr [eax], 0x63bfe4 */ W32((u32)(r_eax), 0x63bfe4u);
    /* 005e8308: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e830b: mov dword ptr [ecx + 0x14], 0x7f */ W32((u32)(r_ecx+0x14u), 0x7fu);
    /* 005e8312: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8315: mov dword ptr [edx + 0x10], 0xffffffff */ W32((u32)(r_edx+0x10u), 0xffffffffu);
    /* 005e831c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e831f: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005e8326: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e832a: je 0x5e8337 */ if (fZ) goto L_005e8337;
L_005e832c:; BB(0x005e832c);
    /* 005e832c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e832f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e8332: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 005e8335: jmp 0x5e8346 */ goto L_005e8346;
L_005e8337:; BB(0x005e8337);
    /* 005e8337: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e833a: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005e8340: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005e8343: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
L_005e8346:; BB(0x005e8346);
    /* 005e8346: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8349: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 005e8350: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8353: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 005e835a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e835d: mov dword ptr [edx + 0x20], 0xffffffff */ W32((u32)(r_edx+0x20u), 0xffffffffu);
    /* 005e8364: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8367: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e836a: ret 4 */ FN_RET(0x005e82f0); r_esp += 8; return;
}

void f_005e836d(void) /* FUN_005e836d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e836d);
    /* 005e836d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e836e: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8370: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8371: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8374: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8377: mov dword ptr [eax], 0x63bfe4 */ W32((u32)(r_eax), 0x63bfe4u);
    /* 005e837d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8380: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5e8385u); f_005dfc0f();
    /* 005e8385: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8387: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8388: ret  */ FN_RET(0x005e836d); r_esp += 4; return;
}

void f_005e8389(void) /* FUN_005e8389 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8389);
    /* 005e8389: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e838a: mov ebp, esp */ r_ebp = r_esp;
    /* 005e838c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e838f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e8390: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    { u32 th = r_ecx; fprintf(stderr, "wasmVOICE seq this=%08x en=%u id=%x\n", th, (th && th < 0x10000000u) ? R32(th+8) : 0, R32(r_ebp+0x8u)); }
    /* 005e8393: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e839a: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e839e: je 0x5e83ac */ if (fZ) goto L_005e83ac;
L_005e83a0:; BB(0x005e83a0);
    /* 005e83a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e83a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e83a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e83a7: call 0x5e8499 */ r_esp -= 4; W32(r_esp, 0x5e83acu); f_005e8499();
L_005e83ac:; BB(0x005e83ac);
    /* 005e83ac: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e83b0: jne 0x5e83b9 */ if (!fZ) goto L_005e83b9;
L_005e83b2:; BB(0x005e83b2);
    /* 005e83b2: mov dword ptr [ebp + 0xc], 0x7f */ W32((u32)(r_ebp+0xcu), 0x7fu);
L_005e83b9:; BB(0x005e83b9);
    /* 005e83b9: cmp dword ptr [ebp + 0x14], -1 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e83bd: je 0x5e83cb */ if (fZ) goto L_005e83cb;
L_005e83bf:; BB(0x005e83bf);
    /* 005e83bf: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005e83c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e83c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e83c6: call 0x5e8545 */ r_esp -= 4; W32(r_esp, 0x5e83cbu); f_005e8545();
L_005e83cb:; BB(0x005e83cb);
    /* 005e83cb: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e83d1: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x5e83d6u); f_0045cb85();
    /* 005e83d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e83d8: jne 0x5e83e3 */ if (!fZ) goto L_005e83e3;
L_005e83da:; BB(0x005e83da);
    /* 005e83da: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e83dd: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e83e1: je 0x5e8454 */ if (fZ) goto L_005e8454;
L_005e83e3:; BB(0x005e83e3);
    /* 005e83e3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e83e6: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e83ea: je 0x5e8402 */ if (fZ) goto L_005e8402;
L_005e83ec:; BB(0x005e83ec);
    /* 005e83ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e83ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e83f1: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005e83f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e83f5: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005e83fa: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e83fd: call 0x61c8b1 */ r_esp -= 4; W32(r_esp, 0x5e8402u); f_0061c8b1();
L_005e8402:; BB(0x005e8402);
    /* 005e8402: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8405: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8409: je 0x5e8414 */ if (fZ) goto L_005e8414;
L_005e840b:; BB(0x005e840b);
    /* 005e840b: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005e8412: jmp 0x5e841b */ goto L_005e841b;
L_005e8414:; BB(0x005e8414);
    /* 005e8414: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005e841b:; BB(0x005e841b);
    /* 005e841b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e841e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e841f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8422: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005e8425: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8426: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8428: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e842b: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e842e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e842f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8432: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005e8435: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8436: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8439: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005e843c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e843d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8440: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e8443: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8444: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005e8449: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e844c: call 0x61c6a8 */ r_esp -= 4; W32(r_esp, 0x5e8451u); f_0061c6a8();
    /* 005e8451: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e8454:; BB(0x005e8454);
    /* 005e8454: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8458: je 0x5e8485 */ if (fZ) goto L_005e8485;
L_005e845a:; BB(0x005e845a);
    /* 005e845a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e8460: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x5e8465u); f_005d9e34();
    /* 005e8465: mov esi, eax */ r_esi = r_eax;
    /* 005e8467: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e846d: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5e8472u); f_005d9e23();
    /* 005e8472: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005e8474: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8477: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8479: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e847a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e847d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e847f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e8482: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5e8485u); call_ind(t); }
L_005e8485:; BB(0x005e8485);
    /* 005e8485: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8488: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 005e848f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8492: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e8493: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8495: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8496: ret 0x10 */ FN_RET(0x005e8389); r_esp += 20; return;
}

void f_005e8499(void) /* FUN_005e8499 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8499);
    /* 005e8499: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e849a: mov ebp, esp */ r_ebp = r_esp;
    /* 005e849c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e849d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e84a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e84a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e84a6: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 005e84a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005e84ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e84ac: ret 4 */ FN_RET(0x005e8499); r_esp += 8; return;
}

void f_005e84af(void) /* FUN_005e84af */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e84af);
    /* 005e84af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e84b0: mov ebp, esp */ r_ebp = r_esp;
    /* 005e84b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e84b3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e84b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e84b9: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e84bd: je 0x5e84f5 */ if (fZ) goto L_005e84f5;
L_005e84bf:; BB(0x005e84bf);
    /* 005e84bf: cmp dword ptr [0x6f6ee8], 0 */ {  u32 a = R32((u32)(0x6f6ee8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e84c6: je 0x5e84f5 */ if (fZ) goto L_005e84f5;
L_005e84c8:; BB(0x005e84c8);
    /* 005e84c8: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005e84ce: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e84d2: je 0x5e84f5 */ if (fZ) goto L_005e84f5;
L_005e84d4:; BB(0x005e84d4);
    /* 005e84d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e84d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e84d9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005e84dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e84dd: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005e84e3: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e84e6: call 0x61c8b1 */ r_esp -= 4; W32(r_esp, 0x5e84ebu); f_0061c8b1();
    /* 005e84eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e84ee: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
L_005e84f5:; BB(0x005e84f5);
    /* 005e84f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005e84f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e84f8: ret  */ FN_RET(0x005e84af); r_esp += 4; return;
}

void f_005e84f9(void) /* FUN_005e84f9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e84f9);
    /* 005e84f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e84fa: mov ebp, esp */ r_ebp = r_esp;
    /* 005e84fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e84fd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8500: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8503: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8506: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 005e8509: mov esp, ebp */ r_esp = r_ebp;
    /* 005e850b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e850c: ret 4 */ FN_RET(0x005e84f9); r_esp += 8; return;
}

void f_005e850f(void) /* FUN_005e850f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e850f);
    /* 005e850f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8510: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8512: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8513: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8516: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8519: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e851d: je 0x5e853e */ if (fZ) goto L_005e853e;
L_005e851f:; BB(0x005e851f);
    /* 005e851f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8522: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005e8525: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8526: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005e852b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e852e: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005e8534: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e8537: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e8539: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5e853cu); call_ind(t); }
    /* 005e853c: jmp 0x5e8541 */ goto L_005e8541;
L_005e853e:; BB(0x005e853e);
    /* 005e853e: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005e8541:; BB(0x005e8541);
    /* 005e8541: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8543: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8544: ret  */ FN_RET(0x005e850f); r_esp += 4; return;
}

void f_005e8545(void) /* FUN_005e8545 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8545);
    /* 005e8545: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8546: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8548: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8549: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e854c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e854f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8552: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 005e8555: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8557: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8558: ret 4 */ FN_RET(0x005e8545); r_esp += 8; return;
}

void f_005e8560(void) /* FUN_005e8560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8560);
    /* 005e8560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8561: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8567: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e856a: call 0x5e836d */ r_esp -= 4; W32(r_esp, 0x5e856fu); f_005e836d();
    /* 005e856f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e8572: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e8575: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8577: je 0x5e8585 */ if (fZ) goto L_005e8585;
L_005e8579:; BB(0x005e8579);
    /* 005e8579: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e857c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e857d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e8582u); f_0048ac1b();
    /* 005e8582: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e8585:; BB(0x005e8585);
    /* 005e8585: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8588: mov esp, ebp */ r_esp = r_ebp;
    /* 005e858a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e858b: ret 4 */ FN_RET(0x005e8560); r_esp += 8; return;
}

void f_005e8590(void) /* FUN_005e8590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8590);
    /* 005e8590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8591: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8597: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e859a: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x5e859fu); f_005e4bb0();
    /* 005e859f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e85a2: mov dword ptr [eax], 0x63bfec */ W32((u32)(r_eax), 0x63bfecu);
    /* 005e85a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e85ab: mov dword ptr [ecx + 0x85c], 0xffffffff */ W32((u32)(r_ecx+0x85cu), 0xffffffffu);
    /* 005e85b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e85b8: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 005e85bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e85c2: mov dword ptr [eax + 0x860], 0xffffffff */ W32((u32)(r_eax+0x860u), 0xffffffffu);
    /* 005e85cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e85cf: mov byte ptr [ecx + 0x3e], 0 */ W8((u32)(r_ecx+0x3eu), 0x0u);
    /* 005e85d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e85d6: mov byte ptr [edx + 0x3d], 0 */ W8((u32)(r_edx+0x3du), 0x0u);
    /* 005e85da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e85dd: mov byte ptr [eax + 0x3c], 0 */ W8((u32)(r_eax+0x3cu), 0x0u);
    /* 005e85e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e85e4: mov dword ptr [ecx + 0x864], 0 */ W32((u32)(r_ecx+0x864u), 0x0u);
    /* 005e85ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e85f1: mov byte ptr [edx + 0x868], 0xff */ W8((u32)(r_edx+0x868u), 0xffu);
    /* 005e85f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e85fb: mov dword ptr [eax + 0x86c], 0 */ W32((u32)(r_eax+0x86cu), 0x0u);
    /* 005e8605: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8608: mov dword ptr [ecx + 0x870], 0 */ W32((u32)(r_ecx+0x870u), 0x0u);
    /* 005e8612: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8617: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e861a: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5e861fu); f_005e8740();
    /* 005e861f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8621: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8624: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5e8629u); f_005e8775();
    /* 005e8629: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e862b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e862e: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x5e8633u); f_005e8e99();
    /* 005e8633: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8635: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8638: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e863du); f_005e87aa();
    /* 005e863d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8640: mov dword ptr [edx + 0x878], 0 */ W32((u32)(r_edx+0x878u), 0x0u);
    /* 005e864a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e864d: mov dword ptr [eax + 0x87c], 0 */ W32((u32)(r_eax+0x87cu), 0x0u);
    /* 005e8657: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e865a: mov dword ptr [ecx + 0x880], 0 */ W32((u32)(r_ecx+0x880u), 0x0u);
    /* 005e8664: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8667: mov dword ptr [edx + 0x884], 0 */ W32((u32)(r_edx+0x884u), 0x0u);
    /* 005e8671: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8674: call 0x5e9bfc */ r_esp -= 4; W32(r_esp, 0x5e8679u); f_005e9bfc();
    /* 005e8679: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e867c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e867e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e867f: ret  */ FN_RET(0x005e8590); r_esp += 4; return;
}

void f_005e8680(void) /* FUN_005e8680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8680);
    /* 005e8680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8681: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8683: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8686: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e8689: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e868c: mov dword ptr [eax], 0x63bfec */ W32((u32)(r_eax), 0x63bfecu);
    /* 005e8692: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8695: cmp dword ptr [ecx + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8699: je 0x5e86b0 */ if (fZ) goto L_005e86b0;
L_005e869b:; BB(0x005e869b);
    /* 005e869b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e869e: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e86a1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e86a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e86a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e86a8: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e86adu); f_0048ac1b();
    /* 005e86ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e86b0:; BB(0x005e86b0);
    /* 005e86b0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e86b3: cmp dword ptr [edx + 0x864], 0 */ {  u32 a = R32((u32)(r_edx+0x864u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e86ba: je 0x5e86d4 */ if (fZ) goto L_005e86d4;
L_005e86bc:; BB(0x005e86bc);
    /* 005e86bc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e86bf: mov ecx, dword ptr [eax + 0x864] */ r_ecx = R32((u32)(r_eax+0x864u));
    /* 005e86c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e86c6: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005e86cc: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e86cf: call 0x5ba79b */ r_esp -= 4; W32(r_esp, 0x5e86d4u); f_005ba79b();
L_005e86d4:; BB(0x005e86d4);
    /* 005e86d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e86d7: call 0x5e4c26 */ r_esp -= 4; W32(r_esp, 0x5e86dcu); f_005e4c26();
    /* 005e86dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005e86de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e86df: ret  */ FN_RET(0x005e8680); r_esp += 4; return;
}

void f_005e86e0(void) /* FUN_005e86e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e86e0);
    /* 005e86e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e86e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e86e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e86e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e86e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e86ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e86eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e86ee: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e86f3u); f_005e87aa();
    /* 005e86f3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e86f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e86f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e86fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e86fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e86ff: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5e8702u); call_ind(t); }
    /* 005e8702: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005e8705: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8706: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 005e8709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e870a: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005e870d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e870e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8711: call 0x5d9647 */ r_esp -= 4; W32(r_esp, 0x5e8716u); f_005d9647();
    /* 005e8716: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e8719: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e871a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e871d: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5e8722u); f_005e8740();
    /* 005e8722: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005e8725: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8726: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8729: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5e872eu); f_005e8775();
    /* 005e872e: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005e8731: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8732: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8735: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x5e873au); f_005e8e99();
    /* 005e873a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e873c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e873d: ret 0x20 */ FN_RET(0x005e86e0); r_esp += 36; return;
}

void f_005e8740(void) /* FUN_005e8740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8740);
    /* 005e8740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8741: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8747: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e874a: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e874fu); f_005d9aa5();
    /* 005e874f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8752: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8755: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 005e8758: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e875b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e875e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e875f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8762: call 0x5d9916 */ r_esp -= 4; W32(r_esp, 0x5e8767u); f_005d9916();
    /* 005e8767: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e876a: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e876fu); f_005d9aa5();
    /* 005e876f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8771: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8772: ret 4 */ FN_RET(0x005e8740); r_esp += 8; return;
}

void f_005e8775(void) /* FUN_005e8775 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8775);
    /* 005e8775: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8776: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8778: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8779: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e877c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e877f: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e8784u); f_005d9aa5();
    /* 005e8784: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8787: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e878a: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 005e878d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8790: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e8793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8794: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8797: call 0x5d9932 */ r_esp -= 4; W32(r_esp, 0x5e879cu); f_005d9932();
    /* 005e879c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e879f: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e87a4u); f_005d9aa5();
    /* 005e87a4: mov esp, ebp */ r_esp = r_ebp;
    /* 005e87a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e87a7: ret 4 */ FN_RET(0x005e8775); r_esp += 8; return;
}

void f_005e87aa(void) /* FUN_005e87aa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e87aa);
    /* 005e87aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e87ab: mov ebp, esp */ r_ebp = r_esp;
    /* 005e87ad: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e87b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e87b1: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e87b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e87b7: mov ecx, dword ptr [eax + 0x85c] */ r_ecx = R32((u32)(r_eax+0x85cu));
    /* 005e87bd: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e87c0: jne 0x5e87c7 */ if (!fZ) goto L_005e87c7;
L_005e87c2:; BB(0x005e87c2);
    /* 005e87c2: jmp 0x5e89d2 */ goto L_005e89d2;
L_005e87c7:; BB(0x005e87c7);
    /* 005e87c7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e87ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e87cb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e87cd: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005e87d2: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e87d5: call 0x5ba399 */ r_esp -= 4; W32(r_esp, 0x5e87dau); f_005ba399();
    /* 005e87da: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e87dd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e87e1: je 0x5e87f2 */ if (fZ) goto L_005e87f2;
L_005e87e3:; BB(0x005e87e3);
    /* 005e87e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e87e6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e87e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e87eb: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e87eeu); call_ind(t); }
    /* 005e87ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e87f0: jne 0x5e8810 */ if (!fZ) goto L_005e8810;
L_005e87f2:; BB(0x005e87f2);
    /* 005e87f2: mov dword ptr [ebp + 8], 2 */ W32((u32)(r_ebp+0x8u), 0x2u);
    /* 005e87f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e87fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e87fd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e87ff: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005e8805: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e8808: call 0x5ba399 */ r_esp -= 4; W32(r_esp, 0x5e880du); f_005ba399();
    /* 005e880d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e8810:; BB(0x005e8810);
    /* 005e8810: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8813: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e8816: mov dword ptr [edx + 0x85c], eax */ W32((u32)(r_edx+0x85cu), r_eax);
    /* 005e881c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e881f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e8821: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8824: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e8827u); call_ind(t); }
    /* 005e8827: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e882a: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e882e: je 0x5e88ca */ if (fZ) goto L_005e88ca;
L_005e8834:; BB(0x005e8834);
    /* 005e8834: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8837: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e883a: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 005e883d: mov word ptr [eax + 0x4c], dx */ W16((u32)(r_eax+0x4cu), (u16)r_edx);
    /* 005e8841: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8844: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8847: mov dx, word ptr [ecx + 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x2u))) & 0xffffu);
    /* 005e884b: mov word ptr [eax + 0x4e], dx */ W16((u32)(r_eax+0x4eu), (u16)r_edx);
    /* 005e884f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8852: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8855: mov dx, word ptr [ecx + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4u))) & 0xffffu);
    /* 005e8859: mov word ptr [eax + 0x50], dx */ W16((u32)(r_eax+0x50u), (u16)r_edx);
    /* 005e885d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8860: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8863: mov dx, word ptr [ecx + 6] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x6u))) & 0xffffu);
    /* 005e8867: mov word ptr [eax + 0x52], dx */ W16((u32)(r_eax+0x52u), (u16)r_edx);
    /* 005e886b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e886e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8871: mov dx, word ptr [ecx + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x8u))) & 0xffffu);
    /* 005e8875: mov word ptr [eax + 0x54], dx */ W16((u32)(r_eax+0x54u), (u16)r_edx);
    /* 005e8879: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e887c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e887f: mov dx, word ptr [ecx + 0xa] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0xau))) & 0xffffu);
    /* 005e8883: mov word ptr [eax + 0x56], dx */ W16((u32)(r_eax+0x56u), (u16)r_edx);
    /* 005e8887: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e888e: jmp 0x5e8899 */ goto L_005e8899;
L_005e8890:; BB(0x005e8890);
    /* 005e8890: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8893: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e8896: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e8899:; BB(0x005e8899);
    /* 005e8899: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e889c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e889e: mov dx, word ptr [ecx + 0x56] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x56u))) & 0xffffu);
    /* 005e88a2: cmp dword ptr [ebp - 8], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e88a5: jge 0x5e88c5 */ if ((fS==fO)) goto L_005e88c5;
L_005e88a7:; BB(0x005e88a7);
    /* 005e88a7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e88aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e88ad: mov edx, dword ptr [ecx + eax*8 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*8+0xcu));
    /* 005e88b1: mov eax, dword ptr [ecx + eax*8 + 0x10] */ r_eax = R32((u32)(r_ecx+r_eax*8+0x10u));
    /* 005e88b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e88b8: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e88bb: mov dword ptr [esi + ecx*8 + 0x58], edx */ W32((u32)(r_esi+r_ecx*8+0x58u), r_edx);
    /* 005e88bf: mov dword ptr [esi + ecx*8 + 0x5c], eax */ W32((u32)(r_esi+r_ecx*8+0x5cu), r_eax);
    /* 005e88c3: jmp 0x5e8890 */ goto L_005e8890;
L_005e88c5:; BB(0x005e88c5);
    /* 005e88c5: jmp 0x5e8956 */ goto L_005e8956;
L_005e88ca:; BB(0x005e88ca);
    /* 005e88ca: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e88cd: mov word ptr [edx + 0x4c], 0 */ W16((u32)(r_edx+0x4cu), 0x0u);
    /* 005e88d3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e88d6: mov word ptr [eax + 0x4e], 0 */ W16((u32)(r_eax+0x4eu), 0x0u);
    /* 005e88dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e88df: mov word ptr [ecx + 0x50], 0 */ W16((u32)(r_ecx+0x50u), 0x0u);
    /* 005e88e5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e88e8: mov word ptr [edx + 0x52], 0 */ W16((u32)(r_edx+0x52u), 0x0u);
    /* 005e88ee: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e88f1: mov word ptr [eax + 0x54], 0 */ W16((u32)(r_eax+0x54u), 0x0u);
    /* 005e88f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e88fa: mov word ptr [ecx + 0x56], 0 */ W16((u32)(r_ecx+0x56u), 0x0u);
    /* 005e8900: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e8907: jmp 0x5e8912 */ goto L_005e8912;
L_005e8909:; BB(0x005e8909);
    /* 005e8909: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e890c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e890f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005e8912:; BB(0x005e8912);
    /* 005e8912: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8915: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8917: mov cx, word ptr [eax + 0x56] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x56u))) & 0xffffu);
    /* 005e891b: cmp dword ptr [ebp - 8], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e891e: jge 0x5e8956 */ if ((fS==fO)) goto L_005e8956;
L_005e8920:; BB(0x005e8920);
    /* 005e8920: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8923: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8926: mov word ptr [eax + edx*8 + 0x58], 0 */ W16((u32)(r_eax+r_edx*8+0x58u), 0x0u);
    /* 005e892d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8930: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8933: mov word ptr [edx + ecx*8 + 0x5a], 0 */ W16((u32)(r_edx+r_ecx*8+0x5au), 0x0u);
    /* 005e893a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e893d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8940: mov word ptr [ecx + eax*8 + 0x5c], 0 */ W16((u32)(r_ecx+r_eax*8+0x5cu), 0x0u);
    /* 005e8947: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e894a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e894d: mov word ptr [eax + edx*8 + 0x5e], 0 */ W16((u32)(r_eax+r_edx*8+0x5eu), 0x0u);
    /* 005e8954: jmp 0x5e8909 */ goto L_005e8909;
L_005e8956:; BB(0x005e8956);
    /* 005e8956: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8959: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e895a: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005e8960: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e8963: call 0x5ba79b */ r_esp -= 4; W32(r_esp, 0x5e8968u); f_005ba79b();
    /* 005e8968: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e896b: cmp dword ptr [eax + 0x864], 0 */ {  u32 a = R32((u32)(r_eax+0x864u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8972: je 0x5e898b */ if (fZ) goto L_005e898b;
L_005e8974:; BB(0x005e8974);
    /* 005e8974: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8977: mov edx, dword ptr [ecx + 0x864] */ r_edx = R32((u32)(r_ecx+0x864u));
    /* 005e897d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e897e: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005e8983: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e8986: call 0x5ba79b */ r_esp -= 4; W32(r_esp, 0x5e898bu); f_005ba79b();
L_005e898b:; BB(0x005e898b);
    /* 005e898b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e898e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e8990: mov dx, word ptr [ecx + 0x4c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4cu))) & 0xffffu);
    /* 005e8994: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8995: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8997: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005e899c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e899f: call 0x5ba399 */ r_esp -= 4; W32(r_esp, 0x5e89a4u); f_005ba399();
    /* 005e89a4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e89a7: mov dword ptr [ecx + 0x864], eax */ W32((u32)(r_ecx+0x864u), r_eax);
    /* 005e89ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e89b0: cmp dword ptr [edx + 0x860], -1 */ {  u32 a = R32((u32)(r_edx+0x860u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e89b7: je 0x5e89ca */ if (fZ) goto L_005e89ca;
L_005e89b9:; BB(0x005e89b9);
    /* 005e89b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e89bc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e89bf: mov dx, word ptr [ecx + 0x860] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x860u))) & 0xffffu);
    /* 005e89c6: mov word ptr [eax + 0x54], dx */ W16((u32)(r_eax+0x54u), (u16)r_edx);
L_005e89ca:; BB(0x005e89ca);
    /* 005e89ca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e89cd: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e89d2u); f_005d9aa5();
L_005e89d2:; BB(0x005e89d2);
    /* 005e89d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e89d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e89d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e89d6: ret 4 */ FN_RET(0x005e87aa); r_esp += 8; return;
}

void f_005e89d9(void) /* FUN_005e89d9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e89d9);
    /* 005e89d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e89da: mov ebp, esp */ r_ebp = r_esp;
    /* 005e89dc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e89df: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e89e2: push 0x6fc400 */ { u32 v = 0x6fc400u; r_esp -= 4; W32(r_esp, v); }
    /* 005e89e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e89ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e89eb: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5e89f0u); f_006240c0();
    /* 005e89f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e89f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e89f5: jne 0x5e8a04 */ if (!fZ) goto L_005e8a04;
L_005e89f7:; BB(0x005e89f7);
    /* 005e89f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e89fa: mov dword ptr [ecx + 0x87c], 0 */ W32((u32)(r_ecx+0x87cu), 0x0u);
L_005e8a04:; BB(0x005e8a04);
    /* 005e8a04: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8a07: cmp dword ptr [edx + 0x48], 0 */ {  u32 a = R32((u32)(r_edx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8a0b: je 0x5e8a2c */ if (fZ) goto L_005e8a2c;
L_005e8a0d:; BB(0x005e8a0d);
    /* 005e8a0d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8a11: je 0x5e8a2c */ if (fZ) goto L_005e8a2c;
L_005e8a13:; BB(0x005e8a13);
    /* 005e8a13: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e8a16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8a1a: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 005e8a1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a1e: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5e8a23u); f_006240c0();
    /* 005e8a23: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8a26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8a28: jne 0x5e8a2c */ if (!fZ) goto L_005e8a2c;
L_005e8a2a:; BB(0x005e8a2a);
    /* 005e8a2a: jmp 0x5e8a8f */ goto L_005e8a8f;
L_005e8a2c:; BB(0x005e8a2c);
    /* 005e8a2c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8a2f: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8a33: je 0x5e8a4a */ if (fZ) goto L_005e8a4a;
L_005e8a35:; BB(0x005e8a35);
    /* 005e8a35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8a38: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 005e8a3b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005e8a3e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8a41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a42: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e8a47u); f_0048ac1b();
    /* 005e8a47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e8a4a:; BB(0x005e8a4a);
    /* 005e8a4a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8a4e: je 0x5e8a87 */ if (fZ) goto L_005e8a87;
L_005e8a50:; BB(0x005e8a50);
    /* 005e8a50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a54: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x5e8a59u); f_00624990();
    /* 005e8a59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8a5c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e8a5f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8a62: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8a65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a66: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e8a6bu); f_0048ab58();
    /* 005e8a6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8a6e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8a71: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 005e8a74: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e8a77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a78: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8a7b: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005e8a7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a7f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5e8a84u); f_00624510();
    /* 005e8a84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e8a87:; BB(0x005e8a87);
    /* 005e8a87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8a8a: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e8a8fu); f_005d9aa5();
L_005e8a8f:; BB(0x005e8a8f);
    /* 005e8a8f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8a91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8a92: ret 4 */ FN_RET(0x005e89d9); r_esp += 8; return;
}

void f_005e8a95(void) /* FUN_005e8a95 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8a95);
    /* 005e8a95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a96: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8a98: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8a9e: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 005e8aa4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e8aa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8aa8: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005e8aae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e8ab0: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005e8ab6: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5e8ab9u); call_ind(t); }
    /* 005e8ab9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e8abc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8abd: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x5e8ac2u); f_00624990();
    /* 005e8ac2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8ac5: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005e8aca: jb 0x5e8ace */ if (fC) goto L_005e8ace;
L_005e8acc:; BB(0x005e8acc);
    /* 005e8acc: jmp 0x5e8b33 */ goto L_005e8b33;
L_005e8ace:; BB(0x005e8ace);
    /* 005e8ace: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8ad1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8ad2: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 005e8ad8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8ad9: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5e8adeu); f_00624510();
    /* 005e8ade: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e8ae1:; BB(0x005e8ae1);
    /* 005e8ae1: movsx eax, byte ptr [ebp - 0x100] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff00u));
    /* 005e8ae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8aea: je 0x5e8b33 */ if (fZ) goto L_005e8b33;
L_005e8aec:; BB(0x005e8aec);
    /* 005e8aec: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005e8af2: call 0x5e8dcc */ r_esp -= 4; W32(r_esp, 0x5e8af7u); f_005e8dcc();
    /* 005e8af7: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005e8afd: cmp eax, dword ptr [ecx + 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e8b00: jl 0x5e8b33 */ if ((fS!=fO)) goto L_005e8b33;
L_005e8b02:; BB(0x005e8b02);
    /* 005e8b02: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 005e8b08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b09: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x5e8b0eu); f_00624990();
    /* 005e8b0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8b11: mov byte ptr [ebp + eax - 0x101], 0 */ W8((u32)(r_ebp+r_eax+0xfffffeffu), 0x0u);
    /* 005e8b19: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 005e8b1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b20: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005e8b26: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e8b28: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005e8b2e: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5e8b31u); call_ind(t); }
    /* 005e8b31: jmp 0x5e8ae1 */ goto L_005e8ae1;
L_005e8b33:; BB(0x005e8b33);
    /* 005e8b33: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8b35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8b36: ret 4 */ FN_RET(0x005e8a95); r_esp += 8; return;
}

void f_005e8b39(void) /* FUN_005e8b39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8b39);
    /* 005e8b39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b3a: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8b3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b3d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8b40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b43: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8b47: je 0x5e8b51 */ if (fZ) goto L_005e8b51;
L_005e8b49:; BB(0x005e8b49);
    /* 005e8b49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b4c: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 005e8b4f: jmp 0x5e8b56 */ goto L_005e8b56;
L_005e8b51:; BB(0x005e8b51);
    /* 005e8b51: mov eax, 0x6fc404 */ r_eax = 0x6fc404u;
L_005e8b56:; BB(0x005e8b56);
    /* 005e8b56: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8b58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8b59: ret  */ FN_RET(0x005e8b39); r_esp += 4; return;
}

void f_005e8b5a(void) /* FUN_005e8b5a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8b5a);
    /* 005e8b5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b5b: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8b5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b5e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8b61: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005e8b64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b65: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005e8b68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b69: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e8b6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b70: call 0x5e4e52 */ r_esp -= 4; W32(r_esp, 0x5e8b75u); f_005e4e52();
    /* 005e8b75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b78: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e8b7b: mov byte ptr [eax + 0x3e], cl */ W8((u32)(r_eax+0x3eu), (u8)r_ecx);
    /* 005e8b7e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b81: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005e8b84: mov byte ptr [edx + 0x3d], al */ W8((u32)(r_edx+0x3du), (u8)r_eax);
    /* 005e8b87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b8a: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005e8b8d: mov byte ptr [ecx + 0x3c], dl */ W8((u32)(r_ecx+0x3cu), (u8)r_edx);
    /* 005e8b90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8b93: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e8b98u); f_005d9aa5();
    /* 005e8b98: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8b9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8b9b: ret 0xc */ FN_RET(0x005e8b5a); r_esp += 16; return;
}

void f_005e8b9e(void) /* FUN_005e8b9e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8b9e);
    /* 005e8b9e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8b9f: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8ba1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8ba2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8ba5: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e8ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8ba9: mov cl, byte ptr [ebp + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 005e8bac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bad: mov dl, byte ptr [ebp + 0xa] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 005e8bb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bb1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8bb4: call 0x5e8b5a */ r_esp -= 4; W32(r_esp, 0x5e8bb9u); f_005e8b5a();
    /* 005e8bb9: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8bbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8bbc: ret 4 */ FN_RET(0x005e8b9e); r_esp += 8; return;
}

void f_005e8bbf(void) /* FUN_005e8bbf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8bbf);
    /* 005e8bbf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bc0: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8bc2: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8bc5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8bc6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e8bc9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e8bd0: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e8bd4: jle 0x5e8bf4 */ if ((fZ||fS!=fO)) goto L_005e8bf4;
L_005e8bd6:; BB(0x005e8bd6);
    /* 005e8bd6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8bd9: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005e8bdc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e8bdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e8be1: mov al, byte ptr [ecx + edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx))) & 0xffu);
    /* 005e8be4: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8be7: jne 0x5e8bf4 */ if (!fZ) goto L_005e8bf4;
L_005e8be9:; BB(0x005e8be9);
    /* 005e8be9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8bec: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8bef: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 005e8bf2: jmp 0x5e8bd6 */ goto L_005e8bd6;
L_005e8bf4:; BB(0x005e8bf4);
    /* 005e8bf4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e8bf7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e8bfa: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005e8bfc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8bff: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8c02: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e8c05: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005e8c07: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005e8c0a: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005e8c10: jmp 0x5e8c1b */ goto L_005e8c1b;
L_005e8c12:; BB(0x005e8c12);
    /* 005e8c12: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8c15: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8c18: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005e8c1b:; BB(0x005e8c1b);
    /* 005e8c1b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8c1e: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e8c21: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8c24: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e8c26: mov dl, byte ptr [eax + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 005e8c29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8c2b: je 0x5e8d10 */ if (fZ) goto L_005e8d10;
L_005e8c31:; BB(0x005e8c31);
    /* 005e8c31: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8c34: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005e8c37: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e8c3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e8c3c: mov al, byte ptr [ecx + edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx))) & 0xffu);
    /* 005e8c3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8c42: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e8c44: mov dx, word ptr [ecx + eax*8 + 0x5e] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*8+0x5eu))) & 0xffffu);
    /* 005e8c49: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8c4c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8c4e: mov cx, word ptr [eax + 0x4e] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4eu))) & 0xffffu);
    /* 005e8c52: lea edx, [edx + ecx + 1] */ r_edx = (u32)(r_edx+r_ecx+0x1u);
    /* 005e8c56: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8c59: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005e8c5c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e8c5f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005e8c61: mov bl, byte ptr [ecx + eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax))) & 0xffu);
    /* 005e8c64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8c67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e8c69: mov ax, word ptr [ecx + ebx*8 + 0x5a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_ebx*8+0x5au))) & 0xffffu);
    /* 005e8c6e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e8c70: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e8c73: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005e8c76: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e8c78: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8c7b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8c7e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8c80: mov cx, word ptr [eax + 0x4e] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4eu))) & 0xffffu);
    /* 005e8c84: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e8c86: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8c89: movsx ecx, word ptr [eax + 0x52] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x52u));
    /* 005e8c8d: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8c8f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005e8c92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8c95: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e8c98: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8c9b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e8c9d: mov dl, byte ptr [eax + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 005e8ca0: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8ca3: jne 0x5e8cb5 */ if (!fZ) goto L_005e8cb5;
L_005e8ca5:; BB(0x005e8ca5);
    /* 005e8ca5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e8ca8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005e8caa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8cad: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005e8cb0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e8cb2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e8cb5:; BB(0x005e8cb5);
    /* 005e8cb5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8cb8: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 005e8cbb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e8cbe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8cc0: mov cl, byte ptr [edx + eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 005e8cc3: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8cc6: jne 0x5e8cd5 */ if (!fZ) goto L_005e8cd5;
L_005e8cc8:; BB(0x005e8cc8);
    /* 005e8cc8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e8ccb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8cce: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e8cd1: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005e8cd3: jmp 0x5e8d10 */ goto L_005e8d10;
L_005e8cd5:; BB(0x005e8cd5);
    /* 005e8cd5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8cd8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8cdb: cmp edx, dword ptr [ecx + 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x40u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e8cde: jle 0x5e8cf8 */ if ((fZ||fS!=fO)) goto L_005e8cf8;
L_005e8ce0:; BB(0x005e8ce0);
    /* 005e8ce0: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8ce4: je 0x5e8cf6 */ if (fZ) goto L_005e8cf6;
L_005e8ce6:; BB(0x005e8ce6);
    /* 005e8ce6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e8ce9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8cec: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005e8cee: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005e8cf1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8cf4: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_005e8cf6:; BB(0x005e8cf6);
    /* 005e8cf6: jmp 0x5e8d10 */ goto L_005e8d10;
L_005e8cf8:; BB(0x005e8cf8);
    /* 005e8cf8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8cfb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8cfe: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e8d01: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005e8d03: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005e8d06: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8d09: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005e8d0b: jmp 0x5e8c12 */ goto L_005e8c12;
L_005e8d10:; BB(0x005e8d10);
    /* 005e8d10: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e8d11: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8d13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8d14: ret 0x10 */ FN_RET(0x005e8bbf); r_esp += 20; return;
}

void f_005e8d17(void) /* FUN_005e8d17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8d17);
    /* 005e8d17: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d18: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8d1a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8d1d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e8d20: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e8d23: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005e8d29: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e8d30: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005e8d37: jmp 0x5e8d3f */ goto L_005e8d3f;
L_005e8d39:; BB(0x005e8d39);
    /* 005e8d39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8d3c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005e8d3f:; BB(0x005e8d3f);
    /* 005e8d3f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e8d42: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8d45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e8d47: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 005e8d49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8d4b: je 0x5e8d92 */ if (fZ) goto L_005e8d92;
L_005e8d4d:; BB(0x005e8d4d);
    /* 005e8d4d: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 005e8d50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d51: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005e8d54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d55: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005e8d58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8d5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8d5d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8d60: call 0x5e8bbf */ r_esp -= 4; W32(r_esp, 0x5e8d65u); f_005e8bbf();
    /* 005e8d65: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e8d68: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8d6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e8d6d: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 005e8d6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8d71: jne 0x5e8d75 */ if (!fZ) goto L_005e8d75;
L_005e8d73:; BB(0x005e8d73);
    /* 005e8d73: jmp 0x5e8d92 */ goto L_005e8d92;
L_005e8d75:; BB(0x005e8d75);
    /* 005e8d75: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e8d78: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8d7b: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e8d7d: jle 0x5e8d87 */ if ((fZ||fS!=fO)) goto L_005e8d87;
L_005e8d7f:; BB(0x005e8d7f);
    /* 005e8d7f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e8d82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8d85: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_005e8d87:; BB(0x005e8d87);
    /* 005e8d87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8d8a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8d8d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005e8d90: jmp 0x5e8d39 */ goto L_005e8d39;
L_005e8d92:; BB(0x005e8d92);
    /* 005e8d92: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8d96: jne 0x5e8d9f */ if (!fZ) goto L_005e8d9f;
L_005e8d98:; BB(0x005e8d98);
    /* 005e8d98: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005e8d9f:; BB(0x005e8d9f);
    /* 005e8d9f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8da2: movsx ecx, word ptr [eax + 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x54u));
    /* 005e8da6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8da9: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e8dac: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e8daf: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005e8db1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8db4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e8db6: mov dx, word ptr [ecx + 0x4e] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4eu))) & 0xffffu);
    /* 005e8dba: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e8dbd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005e8dbf: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8dc1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e8dc4: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005e8dc6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8dc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8dc9: ret 0xc */ FN_RET(0x005e8d17); r_esp += 16; return;
}

void f_005e8dcc(void) /* FUN_005e8dcc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8dcc);
    /* 005e8dcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8dcd: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8dcf: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8dd2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e8dd3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e8dd6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e8ddd: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e8de4: jmp 0x5e8def */ goto L_005e8def;
L_005e8de6:; BB(0x005e8de6);
    /* 005e8de6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8de9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e8dec: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005e8def:; BB(0x005e8def);
    /* 005e8def: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8df2: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 005e8df5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8df8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8dfa: mov cl, byte ptr [edx + eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 005e8dfd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8dff: je 0x5e8e7f */ if (fZ) goto L_005e8e7f;
L_005e8e01:; BB(0x005e8e01);
    /* 005e8e01: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8e04: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e8e07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8e0a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e8e0c: mov dl, byte ptr [eax + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 005e8e0f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8e12: jne 0x5e8e1a */ if (!fZ) goto L_005e8e1a;
L_005e8e14:; BB(0x005e8e14);
    /* 005e8e14: mov byte ptr [ebp - 0x15], 0x20 */ W8((u32)(r_ebp+0xffffffebu), 0x20u);
    /* 005e8e18: jmp 0x5e8e29 */ goto L_005e8e29;
L_005e8e1a:; BB(0x005e8e1a);
    /* 005e8e1a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8e1d: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005e8e20: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8e23: mov al, byte ptr [ecx + edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx))) & 0xffu);
    /* 005e8e26: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
L_005e8e29:; BB(0x005e8e29);
    /* 005e8e29: mov cl, byte ptr [ebp - 0x15] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffebu))) & 0xffu);
    /* 005e8e2c: mov byte ptr [ebp - 4], cl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_ecx);
    /* 005e8e2f: movsx edx, byte ptr [ebp - 4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffcu));
    /* 005e8e33: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8e36: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8e38: mov cx, word ptr [eax + edx*8 + 0x5e] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*8+0x5eu))) & 0xffffu);
    /* 005e8e3d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8e40: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e8e42: mov ax, word ptr [edx + 0x4e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x4eu))) & 0xffffu);
    /* 005e8e46: lea ecx, [ecx + eax + 1] */ r_ecx = (u32)(r_ecx+r_eax+0x1u);
    /* 005e8e4a: movsx edx, byte ptr [ebp - 4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffcu));
    /* 005e8e4e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8e51: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005e8e53: mov si, word ptr [eax + edx*8 + 0x5a] */ r_esi = (r_esi & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*8+0x5au))) & 0xffffu);
    /* 005e8e58: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8e5a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e8e5d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8e60: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e8e62: mov dx, word ptr [ecx + 0x4e] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4eu))) & 0xffffu);
    /* 005e8e66: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8e69: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e8e6b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8e6e: movsx edx, word ptr [ecx + 0x52] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x52u));
    /* 005e8e72: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8e75: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8e77: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005e8e7a: jmp 0x5e8de6 */ goto L_005e8de6;
L_005e8e7f:; BB(0x005e8e7f);
    /* 005e8e7f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8e82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e8e83: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8e85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8e86: ret  */ FN_RET(0x005e8dcc); r_esp += 4; return;
}

void f_005e8e87(void) /* FUN_005e8e87 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8e87);
    /* 005e8e87: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8e88: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8e8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8e8b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8e8e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8e91: movsx eax, word ptr [eax + 0x54] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x54u));
    /* 005e8e95: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8e97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8e98: ret  */ FN_RET(0x005e8e87); r_esp += 4; return;
}

void f_005e8e99(void) /* FUN_005e8e99 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8e99);
    /* 005e8e99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8e9a: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8e9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8e9d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8ea0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8ea3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8ea6: mov dword ptr [eax + 0x858], ecx */ W32((u32)(r_eax+0x858u), r_ecx);
    /* 005e8eac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8eaf: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e8eb4u); f_005d9aa5();
    /* 005e8eb4: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8eb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8eb7: ret 4 */ FN_RET(0x005e8e99); r_esp += 8; return;
}

void f_005e8eba(void) /* FUN_005e8eba */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8eba);
    /* 005e8eba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8ebb: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8ebd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8ebe: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8ec1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8ec4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8ec7: mov dword ptr [eax + 0x86c], ecx */ W32((u32)(r_eax+0x86cu), r_ecx);
    /* 005e8ecd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8ed0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e8ed3: mov dword ptr [edx + 0x870], eax */ W32((u32)(r_edx+0x870u), r_eax);
    /* 005e8ed9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8edc: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e8ee1u); f_005d9aa5();
    /* 005e8ee1: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8ee3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8ee4: ret 8 */ FN_RET(0x005e8eba); r_esp += 12; return;
}

void f_005e8ee7(void) /* FUN_005e8ee7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8ee7);
    /* 005e8ee7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8ee8: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8eea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8eeb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8eee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8ef1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8ef4: mov dword ptr [eax + 0x860], ecx */ W32((u32)(r_eax+0x860u), r_ecx);
    /* 005e8efa: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8efc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8efd: ret 4 */ FN_RET(0x005e8ee7); r_esp += 8; return;
}

void f_005e8f00(void) /* FUN_005e8f00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8f00);
    /* 005e8f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f01: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e8f07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8f0a: call 0x5d95c3 */ r_esp -= 4; W32(r_esp, 0x5e8f0fu); f_005d95c3();
    /* 005e8f0f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8f12: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e8f17u); f_005d9aa5();
    /* 005e8f17: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8f19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8f1a: ret  */ FN_RET(0x005e8f00); r_esp += 4; return;
}

void f_005e8f1b(void) /* FUN_005e8f1b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8f1b);
    /* 005e8f1b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f1c: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8f1e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8f21: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e8f24: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005e8f27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f28: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 005e8f2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f2c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8f2f: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e8f32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8f36: call 0x5e8d17 */ r_esp -= 4; W32(r_esp, 0x5e8f3bu); f_005e8d17();
    /* 005e8f3b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8f3e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8f40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8f41: ret  */ FN_RET(0x005e8f1b); r_esp += 4; return;
}

void f_005e8f42(void) /* FUN_005e8f42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8f42);
    /* 005e8f42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f43: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8f45: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8f48: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e8f4b: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005e8f4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f4f: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 005e8f52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f53: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8f56: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e8f59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8f5d: call 0x5e8d17 */ r_esp -= 4; W32(r_esp, 0x5e8f62u); f_005e8d17();
    /* 005e8f62: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8f65: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8f67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8f68: ret  */ FN_RET(0x005e8f42); r_esp += 4; return;
}

void f_005e8f69(void) /* FUN_005e8f69 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8f69);
    /* 005e8f69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8f6a: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8f6c: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8f6f: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 005e8f72: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e8f75: cmp dword ptr [eax + 0x87c], 0 */ {  u32 a = R32((u32)(r_eax+0x87cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8f7c: jne 0x5e8fe1 */ if (!fZ) goto L_005e8fe1;
L_005e8f7e:; BB(0x005e8f7e);
    /* 005e8f7e: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e8f81: mov edx, dword ptr [ecx + 0x858] */ r_edx = R32((u32)(r_ecx+0x858u));
    /* 005e8f87: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e8f8a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8f8c: je 0x5e8f95 */ if (fZ) goto L_005e8f95;
L_005e8f8e:; BB(0x005e8f8e);
    /* 005e8f8e: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_005e8f95:; BB(0x005e8f95);
    /* 005e8f95: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e8f98: mov ecx, dword ptr [eax + 0x858] */ r_ecx = R32((u32)(r_eax+0x858u));
    /* 005e8f9e: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e8fa1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8fa3: je 0x5e8fb1 */ if (fZ) goto L_005e8fb1;
L_005e8fa5:; BB(0x005e8fa5);
    /* 005e8fa5: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e8fa8: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e8fab: sub eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e8fae: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005e8fb1:; BB(0x005e8fb1);
    /* 005e8fb1: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e8fb4: mov edx, dword ptr [ecx + 0x858] */ r_edx = R32((u32)(r_ecx+0x858u));
    /* 005e8fba: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e8fbd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8fbf: je 0x5e8fd2 */ if (fZ) goto L_005e8fd2;
L_005e8fc1:; BB(0x005e8fc1);
    /* 005e8fc1: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e8fc4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005e8fc7: sub eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e8fca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e8fcb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e8fcd: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e8fcf: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005e8fd2:; BB(0x005e8fd2);
    /* 005e8fd2: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e8fd5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e8fd8: add edx, dword ptr [ecx + 0x86c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x86cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8fde: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_005e8fe1:; BB(0x005e8fe1);
    /* 005e8fe1: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e8fe4: movsx ecx, word ptr [eax + 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x54u));
    /* 005e8fe8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e8feb: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e8fed: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 005e8ff0: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e8ff3: cmp dword ptr [eax + 0x87c], 0 */ {  u32 a = R32((u32)(r_eax+0x87cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8ffa: je 0x5e9005 */ if (fZ) goto L_005e9005;
L_005e8ffc:; BB(0x005e8ffc);
    /* 005e8ffc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8fff: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9002: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005e9005:; BB(0x005e9005);
    /* 005e9005: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e9008: cmp dword ptr [edx + 0x874], 0 */ {  u32 a = R32((u32)(r_edx+0x874u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e900f: je 0x5e91df */ if (fZ) goto L_005e91df;
L_005e9015:; BB(0x005e9015);
    /* 005e9015: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e9018: cmp dword ptr [eax + 0x878], 0 */ {  u32 a = R32((u32)(r_eax+0x878u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e901f: je 0x5e91df */ if (fZ) goto L_005e91df;
L_005e9025:; BB(0x005e9025);
    /* 005e9025: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e9028: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e902a: mov dx, word ptr [ecx + 0x438] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x438u))) & 0xffffu);
    /* 005e9031: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005e9034: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e9037: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9039: mov cx, word ptr [eax + 0x43a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x43au))) & 0xffffu);
    /* 005e9040: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e9043: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e9046: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e9048: mov ax, word ptr [edx + 0x43c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x43cu))) & 0xffffu);
    /* 005e904f: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e9052: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e9054: mov dx, word ptr [ecx + 0x50] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x50u))) & 0xffffu);
    /* 005e9058: lea eax, [eax + edx + 1] */ r_eax = (u32)(r_eax+r_edx+0x1u);
    /* 005e905c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e905f: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e9062: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e9064: mov dx, word ptr [ecx + 0x43e] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x43eu))) & 0xffffu);
    /* 005e906b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e906e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9070: mov cx, word ptr [eax + 0x4e] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4eu))) & 0xffffu);
    /* 005e9074: lea edx, [edx + ecx + 1] */ r_edx = (u32)(r_edx+r_ecx+0x1u);
    /* 005e9078: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005e907b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e907e: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005e9081: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e9084: movsx edx, word ptr [ecx + 0x54] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x54u));
    /* 005e9088: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e908b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e908d: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005e9090: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e9093: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9096: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e9099: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e909b: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005e909e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e90a1: sub eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e90a4: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005e90a7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e90a9: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005e90ac: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e90af: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005e90b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e90b3: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e90b6: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e90b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e90ba: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 005e90bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e90be: call dword ptr [0x6331dc] */ { u32 t = R32((u32)(0x6331dcu)); r_esp -= 4; W32(r_esp, 0x5e90c4u); call_ind(t); }
    /* 005e90c4: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005e90c7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e90ca: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005e90cd: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e90d0: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005e90d3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e90d6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e90d9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e90dc: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e90df: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e90e1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e90e4: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005e90e7: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005e90ea: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e90ed: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e90f0: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005e90f3: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e90f6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e90f9: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005e90fc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e90ff: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005e9102: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e9105: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005e9108: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e910b: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005e910e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e9111: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005e9114: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e9117: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005e911a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e911d: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005e9120: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9123: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005e9126: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005e9129: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e912a: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005e912d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e912e: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 005e9131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9132: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005e9135: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9136: call 0x409320 */ r_esp -= 4; W32(r_esp, 0x5e913bu); f_00409320();
    /* 005e913b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e913e: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005e9141: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9142: call dword ptr [0x633224] */ { u32 t = R32((u32)(0x633224u)); r_esp -= 4; W32(r_esp, 0x5e9148u); call_ind(t); }
    /* 005e9148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e914a: jne 0x5e91df */ if (!fZ) goto L_005e91df;
L_005e9150:; BB(0x005e9150);
    /* 005e9150: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e9153: mov cl, byte ptr [eax + 0x868] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x868u))) & 0xffu);
    /* 005e9159: mov byte ptr [0x69c864], cl */ W8((u32)(0x69c864u), (u8)r_ecx);
    /* 005e915f: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e9162: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e9165: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e916au); f_005e06e1();
    /* 005e916a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e916b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e916e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e9171: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e9176u); f_005e06d0();
    /* 005e9176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9177: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005e917a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e917b: call dword ptr [0x6331dc] */ { u32 t = R32((u32)(0x6331dcu)); r_esp -= 4; W32(r_esp, 0x5e9181u); call_ind(t); }
    /* 005e9181: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9184: mov edx, esp */ r_edx = r_esp;
    /* 005e9186: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e9189: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005e918b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e918e: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005e9191: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e9194: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005e9197: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e919a: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005e919d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e91a0: mov edx, esp */ r_edx = r_esp;
    /* 005e91a2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e91a5: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005e91a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e91aa: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005e91ad: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e91b0: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005e91b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e91b6: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005e91b9: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005e91bf: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005e91c2: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005e91c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e91c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e91c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e91ca: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e91cd: mov ecx, dword ptr [edx + 0x864] */ r_ecx = R32((u32)(r_edx+0x864u));
    /* 005e91d3: call 0x60c16b */ r_esp -= 4; W32(r_esp, 0x5e91d8u); f_0060c16b();
    /* 005e91d8: mov byte ptr [0x69c864], 0xff */ W8((u32)(0x69c864u), 0xffu);
L_005e91df:; BB(0x005e91df);
    /* 005e91df: mov esp, ebp */ r_esp = r_ebp;
    /* 005e91e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e91e2: ret 0x10 */ FN_RET(0x005e8f69); r_esp += 20; return;
}

void f_005e91e5(void) /* FUN_005e91e5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e91e5);
    /* 005e91e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e91e6: mov ebp, esp */ r_ebp = r_esp;
    /* 005e91e8: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e91eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e91ec: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005e91ef: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e91f6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e91fd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005e9204: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e920b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e920e: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005e9211: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e9213: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 005e9215: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9217: jne 0x5e921e */ if (!fZ) goto L_005e921e;
L_005e9219:; BB(0x005e9219);
    /* 005e9219: jmp 0x5e94c6 */ goto L_005e94c6;
L_005e921e:; BB(0x005e921e);
    /* 005e921e: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005e9221: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9222: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005e9225: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9226: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9229: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e922c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e922d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9230: call 0x5e8d17 */ r_esp -= 4; W32(r_esp, 0x5e9235u); f_005e8d17();
    /* 005e9235: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9238: mov edx, dword ptr [ecx + 0x858] */ r_edx = R32((u32)(r_ecx+0x858u));
    /* 005e923e: and edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e9241: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9243: je 0x5e924c */ if (fZ) goto L_005e924c;
L_005e9245:; BB(0x005e9245);
    /* 005e9245: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005e924c:; BB(0x005e924c);
    /* 005e924c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e924f: mov ecx, dword ptr [eax + 0x858] */ r_ecx = R32((u32)(r_eax+0x858u));
    /* 005e9255: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9258: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e925a: je 0x5e9268 */ if (fZ) goto L_005e9268;
L_005e925c:; BB(0x005e925c);
    /* 005e925c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e925f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e9262: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e9265: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005e9268:; BB(0x005e9268);
    /* 005e9268: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e926b: mov edx, dword ptr [ecx + 0x858] */ r_edx = R32((u32)(r_ecx+0x858u));
    /* 005e9271: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e9274: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9276: je 0x5e9289 */ if (fZ) goto L_005e9289;
L_005e9278:; BB(0x005e9278);
    /* 005e9278: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e927b: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 005e927e: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e9281: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e9282: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e9284: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e9286: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005e9289:; BB(0x005e9289);
    /* 005e9289: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e928c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e928f: add edx, dword ptr [ecx + 0x870] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x870u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9295: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005e9298: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005e929f: jmp 0x5e92a7 */ goto L_005e92a7;
L_005e92a1:; BB(0x005e92a1);
    /* 005e92a1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e92a4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005e92a7:; BB(0x005e92a7);
    /* 005e92a7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e92aa: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 005e92ad: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e92b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e92b2: mov cl, byte ptr [edx + eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 005e92b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e92b7: je 0x5e94c6 */ if (fZ) goto L_005e94c6;
L_005e92bd:; BB(0x005e92bd);
    /* 005e92bd: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 005e92c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e92c1: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005e92c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e92c5: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005e92c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e92c9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e92cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e92cd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e92d0: call 0x5e8bbf */ r_esp -= 4; W32(r_esp, 0x5e92d5u); f_005e8bbf();
    /* 005e92d5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e92d8: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005e92db: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e92de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e92e0: mov al, byte ptr [ecx + edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx))) & 0xffu);
    /* 005e92e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e92e5: jne 0x5e92ec */ if (!fZ) goto L_005e92ec;
L_005e92e7:; BB(0x005e92e7);
    /* 005e92e7: jmp 0x5e94c6 */ goto L_005e94c6;
L_005e92ec:; BB(0x005e92ec);
    /* 005e92ec: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e92ef: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e92f2: jl 0x5e9305 */ if ((fS!=fO)) goto L_005e9305;
L_005e92f4:; BB(0x005e92f4);
    /* 005e92f4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e92f7: movsx eax, word ptr [edx + 0x54] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x54u));
    /* 005e92fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e92fe: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9300: cmp dword ptr [ebp + 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9303: jle 0x5e931f */ if ((fZ||fS!=fO)) goto L_005e931f;
L_005e9305:; BB(0x005e9305);
    /* 005e9305: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e9308: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e930b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005e930e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9311: movsx ecx, word ptr [eax + 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x54u));
    /* 005e9315: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e9318: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e931a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005e931d: jmp 0x5e92a1 */ goto L_005e92a1;
L_005e931f:; BB(0x005e931f);
    /* 005e931f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9322: mov ecx, dword ptr [eax + 0x858] */ r_ecx = R32((u32)(r_eax+0x858u));
    /* 005e9328: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e932b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e932d: je 0x5e9336 */ if (fZ) goto L_005e9336;
L_005e932f:; BB(0x005e932f);
    /* 005e932f: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005e9336:; BB(0x005e9336);
    /* 005e9336: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9339: mov eax, dword ptr [edx + 0x858] */ r_eax = R32((u32)(r_edx+0x858u));
    /* 005e933f: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e9342: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9344: je 0x5e9352 */ if (fZ) goto L_005e9352;
L_005e9346:; BB(0x005e9346);
    /* 005e9346: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9349: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005e934c: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e934f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005e9352:; BB(0x005e9352);
    /* 005e9352: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9355: mov ecx, dword ptr [eax + 0x858] */ r_ecx = R32((u32)(r_eax+0x858u));
    /* 005e935b: and ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e935e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9360: je 0x5e9373 */ if (fZ) goto L_005e9373;
L_005e9362:; BB(0x005e9362);
    /* 005e9362: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9365: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e9368: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e936b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e936c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e936e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e9370: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005e9373:; BB(0x005e9373);
    /* 005e9373: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9376: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e9379: add ecx, dword ptr [eax + 0x86c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x86cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e937f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e9382: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e9385: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005e9388: jmp 0x5e9393 */ goto L_005e9393;
L_005e938a:; BB(0x005e938a);
    /* 005e938a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e938d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9390: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005e9393:; BB(0x005e9393);
    /* 005e9393: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e9396: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9399: jge 0x5e94b2 */ if ((fS==fO)) goto L_005e94b2;
L_005e939f:; BB(0x005e939f);
    /* 005e939f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e93a2: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e93a5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e93a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e93aa: mov dl, byte ptr [eax + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 005e93ad: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e93b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e93b2: mov cx, word ptr [eax + edx*8 + 0x5e] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*8+0x5eu))) & 0xffffu);
    /* 005e93b7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e93ba: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e93bc: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e93bf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e93c1: mov cx, word ptr [eax + 0x4e] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4eu))) & 0xffffu);
    /* 005e93c5: lea edx, [edx + ecx + 1] */ r_edx = (u32)(r_edx+r_ecx+0x1u);
    /* 005e93c9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e93cc: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005e93cf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e93d2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005e93d4: mov bl, byte ptr [ecx + eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax))) & 0xffu);
    /* 005e93d7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e93da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e93dc: mov ax, word ptr [ecx + ebx*8 + 0x5a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_ebx*8+0x5au))) & 0xffffu);
    /* 005e93e1: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e93e3: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005e93e6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e93e9: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e93ec: jl 0x5e9428 */ if ((fS!=fO)) goto L_005e9428;
L_005e93ee:; BB(0x005e93ee);
    /* 005e93ee: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e93f1: cmp edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e93f4: jg 0x5e9428 */ if ((!fZ&&fS==fO)) goto L_005e9428;
L_005e93f6:; BB(0x005e93f6);
    /* 005e93f6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e93f9: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e93fc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e93fd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e93ff: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e9401: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9404: jge 0x5e9414 */ if ((fS==fO)) goto L_005e9414;
L_005e9406:; BB(0x005e9406);
    /* 005e9406: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9409: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e940c: mov dword ptr [eax + 0x87c], ecx */ W32((u32)(r_eax+0x87cu), r_ecx);
    /* 005e9412: jmp 0x5e9423 */ goto L_005e9423;
L_005e9414:; BB(0x005e9414);
    /* 005e9414: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e9417: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e941a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e941d: mov dword ptr [eax + 0x87c], edx */ W32((u32)(r_eax+0x87cu), r_edx);
L_005e9423:; BB(0x005e9423);
    /* 005e9423: jmp 0x5e94c6 */ goto L_005e94c6;
L_005e9428:; BB(0x005e9428);
    /* 005e9428: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e942b: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 005e942e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e9431: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9433: mov cl, byte ptr [edx + eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0x1u))) & 0xffu);
    /* 005e9437: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9439: jne 0x5e9454 */ if (!fZ) goto L_005e9454;
L_005e943b:; BB(0x005e943b);
    /* 005e943b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e943e: cmp edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9441: jle 0x5e9454 */ if ((fZ||fS!=fO)) goto L_005e9454;
L_005e9443:; BB(0x005e9443);
    /* 005e9443: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e9446: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9449: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e944c: mov dword ptr [ecx + 0x87c], eax */ W32((u32)(r_ecx+0x87cu), r_eax);
    /* 005e9452: jmp 0x5e94c6 */ goto L_005e94c6;
L_005e9454:; BB(0x005e9454);
    /* 005e9454: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9457: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e945a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e945d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e945f: mov dl, byte ptr [eax + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 005e9462: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9465: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9467: mov cx, word ptr [eax + edx*8 + 0x5e] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*8+0x5eu))) & 0xffffu);
    /* 005e946c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e946f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e9471: mov ax, word ptr [edx + 0x4e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x4eu))) & 0xffffu);
    /* 005e9475: lea ecx, [ecx + eax + 1] */ r_ecx = (u32)(r_ecx+r_eax+0x1u);
    /* 005e9479: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e947c: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e947f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e9482: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005e9484: mov bl, byte ptr [eax + edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+r_edx))) & 0xffu);
    /* 005e9487: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e948a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e948c: mov dx, word ptr [eax + ebx*8 + 0x5a] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ebx*8+0x5au))) & 0xffffu);
    /* 005e9491: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9493: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e9496: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e9498: mov dx, word ptr [eax + 0x4e] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+0x4eu))) & 0xffffu);
    /* 005e949c: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e949e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e94a1: movsx edx, word ptr [eax + 0x52] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x52u));
    /* 005e94a5: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e94a8: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e94aa: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e94ad: jmp 0x5e938a */ goto L_005e938a;
L_005e94b2:; BB(0x005e94b2);
    /* 005e94b2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e94b5: movsx ecx, word ptr [eax + 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x54u));
    /* 005e94b9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e94bc: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e94be: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005e94c1: jmp 0x5e92a1 */ goto L_005e92a1;
L_005e94c6:; BB(0x005e94c6);
    /* 005e94c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e94c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005e94c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e94ca: ret 8 */ FN_RET(0x005e91e5); r_esp += 12; return;
}

void f_005e94cd(void) /* FUN_005e94cd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e94cd);
    /* 005e94cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e94ce: mov ebp, esp */ r_ebp = r_esp;
    /* 005e94d0: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e94d6: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 005e94dc: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005e94e3: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 005e94ea: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 005e94f4: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e94fa: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e94fe: je 0x5e951b */ if (fZ) goto L_005e951b;
L_005e9500:; BB(0x005e9500);
    /* 005e9500: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9506: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e950a: je 0x5e951b */ if (fZ) goto L_005e951b;
L_005e950c:; BB(0x005e950c);
    /* 005e950c: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9512: cmp dword ptr [edx + 0x864], 0 */ {  u32 a = R32((u32)(r_edx+0x864u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9519: jne 0x5e9520 */ if (!fZ) goto L_005e9520;
L_005e951b:; BB(0x005e951b);
    /* 005e951b: jmp 0x5e9b6a */ goto L_005e9b6a;
L_005e9520:; BB(0x005e9520);
    /* 005e9520: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e9523: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9524: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e952a: call 0x5e4c42 */ r_esp -= 4; W32(r_esp, 0x5e952fu); f_005e4c42();
    /* 005e952f: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9535: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005e9538: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9539: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e953f: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005e9542: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9543: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9549: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005e954c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e954d: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9553: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e9556: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9557: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005e955a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e955b: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x5e9561u); call_ind(t); }
    /* 005e9561: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9564: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9565: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 005e9568: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9569: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005e956c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e956d: call dword ptr [0x633238] */ { u32 t = R32((u32)(0x633238u)); r_esp -= 4; W32(r_esp, 0x5e9573u); call_ind(t); }
    /* 005e9573: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005e9576: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9577: call dword ptr [0x633224] */ { u32 t = R32((u32)(0x633224u)); r_esp -= 4; W32(r_esp, 0x5e957du); call_ind(t); }
    /* 005e957d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e957f: je 0x5e9586 */ if (fZ) goto L_005e9586;
L_005e9581:; BB(0x005e9581);
    /* 005e9581: jmp 0x5e9b6a */ goto L_005e9b6a;
L_005e9586:; BB(0x005e9586);
    /* 005e9586: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 005e958c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e958d: lea eax, [ebp - 0x98] */ r_eax = (u32)(r_ebp+0xffffff68u);
    /* 005e9593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9594: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e959a: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 005e959d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e959e: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e95a4: call 0x5e8d17 */ r_esp -= 4; W32(r_esp, 0x5e95a9u); f_005e8d17();
    /* 005e95a9: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e95af: mov ecx, dword ptr [eax + 0x858] */ r_ecx = R32((u32)(r_eax+0x858u));
    /* 005e95b5: and ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e95b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e95ba: je 0x5e95c6 */ if (fZ) goto L_005e95c6;
L_005e95bc:; BB(0x005e95bc);
    /* 005e95bc: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_005e95c6:; BB(0x005e95c6);
    /* 005e95c6: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e95cc: mov eax, dword ptr [edx + 0x858] */ r_eax = R32((u32)(r_edx+0x858u));
    /* 005e95d2: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e95d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e95d7: je 0x5e95ee */ if (fZ) goto L_005e95ee;
L_005e95d9:; BB(0x005e95d9);
    /* 005e95d9: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e95df: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 005e95e2: sub edx, dword ptr [ebp - 0x88] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff78u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e95e8: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
L_005e95ee:; BB(0x005e95ee);
    /* 005e95ee: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e95f4: mov ecx, dword ptr [eax + 0x858] */ r_ecx = R32((u32)(r_eax+0x858u));
    /* 005e95fa: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e95fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e95ff: je 0x5e961b */ if (fZ) goto L_005e961b;
L_005e9601:; BB(0x005e9601);
    /* 005e9601: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9607: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e960a: sub eax, dword ptr [ebp - 0x88] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff78u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e9610: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e9611: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e9613: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e9615: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
L_005e961b:; BB(0x005e961b);
    /* 005e961b: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9621: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e9627: add ecx, dword ptr [eax + 0x870] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x870u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e962d: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005e9633: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 005e963a: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 005e9641: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9647: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e964cu); f_005d98c3();
    /* 005e964c: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005e964f: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9655: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e965au); f_005d98da();
    /* 005e965a: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005e965d: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 005e9667: jmp 0x5e9672 */ goto L_005e9672;
L_005e9669:; BB(0x005e9669);
    /* 005e9669: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005e966c: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
L_005e9672:; BB(0x005e9672);
    /* 005e9672: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9678: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005e967b: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005e9681: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e9683: mov al, byte ptr [ecx + edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx))) & 0xffu);
    /* 005e9686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9688: je 0x5e9a3b */ if (fZ) goto L_005e9a3b;
L_005e968e:; BB(0x005e968e);
    /* 005e968e: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005e9691: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9692: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 005e9695: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9696: lea eax, [ebp - 0x9c] */ r_eax = (u32)(r_ebp+0xffffff64u);
    /* 005e969c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e969d: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005e96a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e96a4: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e96aa: call 0x5e8bbf */ r_esp -= 4; W32(r_esp, 0x5e96afu); f_005e8bbf();
    /* 005e96af: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e96b5: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e96b8: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005e96be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e96c0: mov dl, byte ptr [eax + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 005e96c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e96c5: jne 0x5e96cc */ if (!fZ) goto L_005e96cc;
L_005e96c7:; BB(0x005e96c7);
    /* 005e96c7: jmp 0x5e9a3b */ goto L_005e9a3b;
L_005e96cc:; BB(0x005e96cc);
    /* 005e96cc: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e96d2: mov ecx, dword ptr [eax + 0x858] */ r_ecx = R32((u32)(r_eax+0x858u));
    /* 005e96d8: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e96db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e96dd: je 0x5e96e6 */ if (fZ) goto L_005e96e6;
L_005e96df:; BB(0x005e96df);
    /* 005e96df: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_005e96e6:; BB(0x005e96e6);
    /* 005e96e6: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e96ec: mov eax, dword ptr [edx + 0x858] */ r_eax = R32((u32)(r_edx+0x858u));
    /* 005e96f2: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e96f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e96f7: je 0x5e9708 */ if (fZ) goto L_005e9708;
L_005e96f9:; BB(0x005e96f9);
    /* 005e96f9: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e96ff: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005e9702: sub edx, dword ptr [ebp - 0x44] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e9705: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
L_005e9708:; BB(0x005e9708);
    /* 005e9708: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e970e: mov ecx, dword ptr [eax + 0x858] */ r_ecx = R32((u32)(r_eax+0x858u));
    /* 005e9714: and ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9717: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9719: je 0x5e972f */ if (fZ) goto L_005e972f;
L_005e971b:; BB(0x005e971b);
    /* 005e971b: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9721: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005e9724: sub eax, dword ptr [ebp - 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e9727: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e9728: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e972a: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e972c: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
L_005e972f:; BB(0x005e972f);
    /* 005e972f: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9735: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005e9738: add ecx, dword ptr [eax + 0x86c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x86cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e973e: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 005e9741: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005e9747: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 005e974d: jmp 0x5e975e */ goto L_005e975e;
L_005e974f:; BB(0x005e974f);
    /* 005e974f: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005e9755: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9758: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
L_005e975e:; BB(0x005e975e);
    /* 005e975e: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005e9764: cmp ecx, dword ptr [ebp - 0x68] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff98u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9767: jge 0x5e9a1e */ if ((fS==fO)) goto L_005e9a1e;
L_005e976d:; BB(0x005e976d);
    /* 005e976d: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9773: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e9776: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005e977c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e977e: mov dl, byte ptr [eax + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 005e9781: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9787: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9789: mov cx, word ptr [eax + edx*8 + 0x58] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*8+0x58u))) & 0xffffu);
    /* 005e978e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005e9791: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9797: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e979a: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005e97a0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e97a2: mov dl, byte ptr [eax + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 005e97a5: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e97ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e97ad: mov cx, word ptr [eax + edx*8 + 0x5a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*8+0x5au))) & 0xffffu);
    /* 005e97b2: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e97b5: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e97bb: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e97be: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005e97c4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e97c6: mov dl, byte ptr [eax + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 005e97c9: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e97cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e97d1: mov cx, word ptr [eax + edx*8 + 0x5c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*8+0x5cu))) & 0xffffu);
    /* 005e97d6: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e97dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e97de: mov ax, word ptr [edx + 0x50] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x50u))) & 0xffffu);
    /* 005e97e2: lea ecx, [ecx + eax + 1] */ r_ecx = (u32)(r_ecx+r_eax+0x1u);
    /* 005e97e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e97e9: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e97ef: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e97f2: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005e97f8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e97fa: mov dl, byte ptr [eax + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 005e97fd: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9803: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9805: mov cx, word ptr [eax + edx*8 + 0x5e] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*8+0x5eu))) & 0xffffu);
    /* 005e980a: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9810: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e9812: mov ax, word ptr [edx + 0x4e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x4eu))) & 0xffffu);
    /* 005e9816: lea ecx, [ecx + eax + 1] */ r_ecx = (u32)(r_ecx+r_eax+0x1u);
    /* 005e981a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e981d: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005e9820: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 005e9823: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e9829: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005e982c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e982f: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9832: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005e9835: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9837: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 005e983a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e983d: sub eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e9840: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005e9843: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9845: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005e9848: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e984e: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005e9851: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9852: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9858: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e985b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e985c: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 005e985f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9860: call dword ptr [0x6331dc] */ { u32 t = R32((u32)(0x6331dcu)); r_esp -= 4; W32(r_esp, 0x5e9866u); call_ind(t); }
    /* 005e9866: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005e9869: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e986c: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005e986f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e9872: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005e9875: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e9878: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005e987b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e987e: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e9881: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005e9884: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005e9887: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005e988a: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005e988d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005e9890: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005e9893: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005e9896: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e9899: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005e989c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e989f: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005e98a2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e98a5: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005e98a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e98ab: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005e98ae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e98b1: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005e98b4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e98b7: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005e98ba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e98bd: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005e98c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e98c3: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005e98c6: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 005e98c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e98ca: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005e98cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e98ce: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 005e98d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e98d2: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005e98d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e98d6: call 0x409320 */ r_esp -= 4; W32(r_esp, 0x5e98dbu); f_00409320();
    /* 005e98db: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e98de: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005e98e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e98e2: call dword ptr [0x633224] */ { u32 t = R32((u32)(0x633224u)); r_esp -= 4; W32(r_esp, 0x5e98e8u); call_ind(t); }
    /* 005e98e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e98ea: jne 0x5e998a */ if (!fZ) goto L_005e998a;
L_005e98f0:; BB(0x005e98f0);
    /* 005e98f0: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e98f6: mov dl, byte ptr [ecx + 0x868] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x868u))) & 0xffu);
    /* 005e98fc: mov byte ptr [0x69c864], dl */ W8((u32)(0x69c864u), (u8)r_edx);
    /* 005e9902: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9908: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e990b: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e9910u); f_005e06e1();
    /* 005e9910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9911: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9917: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e991a: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e991fu); f_005e06d0();
    /* 005e991f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9920: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005e9923: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9924: call dword ptr [0x6331dc] */ { u32 t = R32((u32)(0x6331dcu)); r_esp -= 4; W32(r_esp, 0x5e992au); call_ind(t); }
    /* 005e992a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e992d: mov eax, esp */ r_eax = r_esp;
    /* 005e992f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e9932: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005e9934: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e9937: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005e993a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e993d: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005e9940: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e9943: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005e9946: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9949: mov eax, esp */ r_eax = r_esp;
    /* 005e994b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e994e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005e9950: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e9953: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005e9956: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e9959: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005e995c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e995f: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005e9962: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005e9967: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e996a: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005e996d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e996e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9970: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9972: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9978: mov ecx, dword ptr [eax + 0x864] */ r_ecx = R32((u32)(r_eax+0x864u));
    /* 005e997e: call 0x60c16b */ r_esp -= 4; W32(r_esp, 0x5e9983u); f_0060c16b();
    /* 005e9983: mov byte ptr [0x69c864], 0xff */ W8((u32)(0x69c864u), 0xffu);
L_005e998a:; BB(0x005e998a);
    /* 005e998a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e998d: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9990: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9996: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e9998: mov ax, word ptr [edx + 0x4e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x4eu))) & 0xffffu);
    /* 005e999c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e999e: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e99a4: movsx eax, word ptr [edx + 0x52] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x52u));
    /* 005e99a8: add eax, dword ptr [ebp - 0x7c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff84u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e99ab: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e99ad: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005e99b0: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005e99b6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e99b9: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e99bf: cmp ecx, dword ptr [edx + 0x87c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x87cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e99c5: jne 0x5e9a19 */ if (!fZ) goto L_005e9a19;
L_005e99c7:; BB(0x005e99c7);
    /* 005e99c7: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005e99ca: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005e99cd: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e99d3: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 005e99d9: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e99df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e99e1: mov ax, word ptr [edx + 0x43e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x43eu))) & 0xffffu);
    /* 005e99e8: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e99ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e99f0: mov dx, word ptr [ecx + 0x43a] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x43au))) & 0xffffu);
    /* 005e99f7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e99f9: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e99ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e9a01: mov dx, word ptr [ecx + 0x4e] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4eu))) & 0xffffu);
    /* 005e9a05: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e9a07: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9a0d: movsx edx, word ptr [ecx + 0x52] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x52u));
    /* 005e9a11: add edx, dword ptr [ebp - 0x7c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff84u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9a14: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9a16: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
L_005e9a19:; BB(0x005e9a19);
    /* 005e9a19: jmp 0x5e974f */ goto L_005e974f;
L_005e9a1e:; BB(0x005e9a1e);
    /* 005e9a1e: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9a24: movsx ecx, word ptr [eax + 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x54u));
    /* 005e9a28: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e9a2e: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9a30: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 005e9a36: jmp 0x5e9669 */ goto L_005e9669;
L_005e9a3b:; BB(0x005e9a3b);
    /* 005e9a3b: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9a41: cmp dword ptr [eax + 0x880], 0 */ {  u32 a = R32((u32)(r_eax+0x880u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9a48: je 0x5e9a83 */ if (fZ) goto L_005e9a83;
L_005e9a4a:; BB(0x005e9a4a);
    /* 005e9a4a: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9a50: mov dword ptr [ecx + 0x880], 0 */ W32((u32)(r_ecx+0x880u), 0x0u);
    /* 005e9a5a: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9a60: movsx eax, word ptr [edx + 0x54] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x54u));
    /* 005e9a64: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e9a65: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e9a67: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e9a69: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e9a6f: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9a71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a72: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 005e9a75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a76: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9a7c: call 0x5e91e5 */ r_esp -= 4; W32(r_esp, 0x5e9a81u); f_005e91e5();
    /* 005e9a81: jmp 0x5e9aec */ goto L_005e9aec;
L_005e9a83:; BB(0x005e9a83);
    /* 005e9a83: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9a89: cmp dword ptr [eax + 0x884], 0 */ {  u32 a = R32((u32)(r_eax+0x884u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9a90: je 0x5e9ace */ if (fZ) goto L_005e9ace;
L_005e9a92:; BB(0x005e9a92);
    /* 005e9a92: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9a98: mov dword ptr [ecx + 0x884], 0 */ W32((u32)(r_ecx+0x884u), 0x0u);
    /* 005e9aa2: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9aa8: movsx eax, word ptr [edx + 0x54] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x54u));
    /* 005e9aac: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e9aaf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e9ab0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e9ab2: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e9ab4: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e9aba: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9abc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9abd: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 005e9ac0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ac1: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9ac7: call 0x5e91e5 */ r_esp -= 4; W32(r_esp, 0x5e9accu); f_005e91e5();
    /* 005e9acc: jmp 0x5e9aec */ goto L_005e9aec;
L_005e9ace:; BB(0x005e9ace);
    /* 005e9ace: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e9ad1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ad2: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005e9ad5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ad6: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e9adc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9add: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 005e9ae0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ae1: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9ae7: call 0x5e8f69 */ r_esp -= 4; W32(r_esp, 0x5e9aecu); f_005e8f69();
L_005e9aec:; BB(0x005e9aec);
    /* 005e9aec: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9af2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e9af4: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9afa: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e9afdu); call_ind(t); }
    /* 005e9afd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e9b00: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9b06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e9b08: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9b0e: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e9b11u); call_ind(t); }
    /* 005e9b11: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e9b14: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9b1a: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e9b1fu); f_005d98da();
    /* 005e9b1f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e9b22: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9b24: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e9b27: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9b2d: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e9b32u); f_005d98c3();
    /* 005e9b32: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e9b35: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9b37: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005e9b3a: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9b40: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e9b43: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 005e9b46: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9b4c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e9b4f: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005e9b52: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9b58: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9b5b: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 005e9b5e: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005e9b64: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e9b67: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
L_005e9b6a:; BB(0x005e9b6a);
    /* 005e9b6a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9b6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9b6d: ret 4 */ FN_RET(0x005e94cd); r_esp += 8; return;
}

void f_005e9b70(void) /* FUN_005e9b70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9b70);
    /* 005e9b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b71: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9b73: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9b76: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e9b79: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9b7c: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005e9b7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b80: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9b83: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005e9b86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b87: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9b8a: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005e9b8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b8e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9b91: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e9b94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b95: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005e9b98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b99: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x5e9b9fu); call_ind(t); }
    /* 005e9b9f: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e9ba2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ba3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9ba6: call 0x5e500f */ r_esp -= 4; W32(r_esp, 0x5e9babu); f_005e500f();
    /* 005e9bab: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9bae: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e9bb1: mov byte ptr [ecx + 0x868], dl */ W8((u32)(r_ecx+0x868u), (u8)r_edx);
    /* 005e9bb7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9bba: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9bbe: je 0x5e9bde */ if (fZ) goto L_005e9bde;
L_005e9bc0:; BB(0x005e9bc0);
    /* 005e9bc0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9bc3: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5e9bc8u); f_005d9690();
    /* 005e9bc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9bca: je 0x5e9bde */ if (fZ) goto L_005e9bde;
L_005e9bcc:; BB(0x005e9bcc);
    /* 005e9bcc: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005e9bcf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9bd0: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005e9bd6: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005e9bd9: call 0x61cf53 */ r_esp -= 4; W32(r_esp, 0x5e9bdeu); f_0061cf53();
L_005e9bde:; BB(0x005e9bde);
    /* 005e9bde: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9be0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9be1: ret 4 */ FN_RET(0x005e9b70); r_esp += 8; return;
}

void f_005e9be4(void) /* FUN_005e9be4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9be4);
    /* 005e9be4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9be5: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9be7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9be8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e9beb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9bee: mov dword ptr [eax + 0x874], 1 */ W32((u32)(r_eax+0x874u), 0x1u);
    /* 005e9bf8: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9bfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9bfb: ret  */ FN_RET(0x005e9be4); r_esp += 4; return;
}

void f_005e9bfc(void) /* FUN_005e9bfc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9bfc);
    /* 005e9bfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9bfd: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9bff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c00: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e9c03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9c06: mov dword ptr [eax + 0x874], 0 */ W32((u32)(r_eax+0x874u), 0x0u);
    /* 005e9c10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9c13: mov dword ptr [ecx + 0x878], 0 */ W32((u32)(r_ecx+0x878u), 0x0u);
    /* 005e9c1d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9c1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9c20: ret  */ FN_RET(0x005e9bfc); r_esp += 4; return;
}

void f_005e9c21(void) /* FUN_005e9c21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9c21);
    /* 005e9c21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c22: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9c24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c25: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e9c28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9c2b: cmp dword ptr [eax + 0x874], 0 */ {  u32 a = R32((u32)(r_eax+0x874u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9c32: je 0x5e9c48 */ if (fZ) goto L_005e9c48;
L_005e9c34:; BB(0x005e9c34);
    /* 005e9c34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9c37: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e9c3a: mov dword ptr [ecx + 0x878], edx */ W32((u32)(r_ecx+0x878u), r_edx);
    /* 005e9c40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9c43: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e9c48u); f_005d9aa5();
L_005e9c48:; BB(0x005e9c48);
    /* 005e9c48: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9c4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9c4b: ret 4 */ FN_RET(0x005e9c21); r_esp += 8; return;
}

void f_005e9c7a(void) /* FUN_005e9c7a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9c7a);
    /* 005e9c7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c7b: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9c7d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9c80: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e9c83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e9c86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9c8a: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5e9c8fu); f_005e626d();
    /* 005e9c8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9c92: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005e9c95: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005e9c98: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9c9c: je 0x5e9ca6 */ if (fZ) goto L_005e9ca6;
L_005e9c9e:; BB(0x005e9c9e);
    /* 005e9c9e: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9ca2: je 0x5e9ccf */ if (fZ) goto L_005e9ccf;
L_005e9ca4:; BB(0x005e9ca4);
    /* 005e9ca4: jmp 0x5e9cf6 */ goto L_005e9cf6;
L_005e9ca6:; BB(0x005e9ca6);
    /* 005e9ca6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ca8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9cab: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005e9cae: call 0x5e9c21 */ r_esp -= 4; W32(r_esp, 0x5e9cb3u); f_005e9c21();
    /* 005e9cb3: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9cb8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e9cba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9cbd: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5e9cc0u); call_ind(t); }
    /* 005e9cc0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9cc5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e9cc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9cca: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e9ccdu); call_ind(t); }
    /* 005e9ccd: jmp 0x5e9cf6 */ goto L_005e9cf6;
L_005e9ccf:; BB(0x005e9ccf);
    /* 005e9ccf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cd1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9cd4: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005e9cd7: call 0x5e9c21 */ r_esp -= 4; W32(r_esp, 0x5e9cdcu); f_005e9c21();
    /* 005e9cdc: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9ce1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e9ce3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9ce6: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5e9ce9u); call_ind(t); }
    /* 005e9ce9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ceb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9cee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e9cf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9cf3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e9cf6u); call_ind(t); }
L_005e9cf6:; BB(0x005e9cf6);
    /* 005e9cf6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9cf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9cf9: ret 4 */ FN_RET(0x005e9c7a); r_esp += 8; return;
}

void f_005e9d00(void) /* FUN_005e9d00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9d00);
    /* 005e9d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d01: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e9d07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d0a: call 0x5e8680 */ r_esp -= 4; W32(r_esp, 0x5e9d0fu); f_005e8680();
    /* 005e9d0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e9d12: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e9d15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9d17: je 0x5e9d25 */ if (fZ) goto L_005e9d25;
L_005e9d19:; BB(0x005e9d19);
    /* 005e9d19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d1d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e9d22u); f_0048ac1b();
    /* 005e9d22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e9d25:; BB(0x005e9d25);
    /* 005e9d25: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d28: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9d2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9d2b: ret 4 */ FN_RET(0x005e9d00); r_esp += 8; return;
}

void f_005e9d30(void) /* FUN_005e9d30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9d30);
    /* 005e9d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d31: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9d33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e9d37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d3a: call 0x5d94ef */ r_esp -= 4; W32(r_esp, 0x5e9d3fu); f_005d94ef();
    /* 005e9d3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d42: mov dword ptr [eax], 0x63c054 */ W32((u32)(r_eax), 0x63c054u);
    /* 005e9d48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d4b: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 005e9d52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d55: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 005e9d5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d5f: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 005e9d66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d69: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 005e9d70: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d73: mov byte ptr [edx + 0x58], 0xff */ W8((u32)(r_edx+0x58u), 0xffu);
    /* 005e9d77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d7a: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
    /* 005e9d81: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d84: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 005e9d8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d90: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x5e9d95u); f_005ea514();
    /* 005e9d95: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d98: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
    /* 005e9d9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9da2: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 005e9da9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9dab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9dad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9daf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9db1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9db4: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9db7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9db8: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x5e9dbeu); call_ind(t); }
    /* 005e9dbe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9dc1: mov dword ptr [edx + 0x68], 4 */ W32((u32)(r_edx+0x68u), 0x4u);
    /* 005e9dc8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9dcb: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005e9dd1: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005e9dd4: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 005e9dd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9dda: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9ddc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9ddd: ret  */ FN_RET(0x005e9d30); r_esp += 4; return;
}

void f_005e9dde(void) /* FUN_005e9dde */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9dde);
    /* 005e9dde: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ddf: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9de1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9de2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e9de5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9de8: mov dword ptr [eax], 0x63c054 */ W32((u32)(r_eax), 0x63c054u);
    /* 005e9dee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9df1: cmp dword ptr [ecx + 0x3c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9df5: je 0x5e9e09 */ if (fZ) goto L_005e9e09;
L_005e9df7:; BB(0x005e9df7);
    /* 005e9df7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9dfa: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005e9dfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9dfe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e01: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 005e9e04: call 0x5ba79b */ r_esp -= 4; W32(r_esp, 0x5e9e09u); f_005ba79b();
L_005e9e09:; BB(0x005e9e09);
    /* 005e9e09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e0c: call 0x5d9576 */ r_esp -= 4; W32(r_esp, 0x5e9e11u); f_005d9576();
    /* 005e9e11: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9e13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9e14: ret  */ FN_RET(0x005e9dde); r_esp += 4; return;
}

void f_005e9e15(void) /* FUN_005e9e15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9e15);
    /* 005e9e15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9e16: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9e18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9e19: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e9e1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e1f: call 0x5d95c3 */ r_esp -= 4; W32(r_esp, 0x5e9e24u); f_005d95c3();
    /* 005e9e24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e27: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9e2b: je 0x5e9e3f */ if (fZ) goto L_005e9e3f;
L_005e9e2d:; BB(0x005e9e2d);
    /* 005e9e2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e30: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005e9e33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9e34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e37: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005e9e3a: call 0x5ba79b */ r_esp -= 4; W32(r_esp, 0x5e9e3fu); f_005ba79b();
L_005e9e3f:; BB(0x005e9e3f);
    /* 005e9e3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e42: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 005e9e49: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e4c: cmp dword ptr [edx + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9e50: je 0x5e9f4c */ if (fZ) goto L_005e9f4c;
L_005e9e56:; BB(0x005e9e56);
    /* 005e9e56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e59: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005e9e5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9e5d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9e5f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e62: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005e9e65: call 0x5ba399 */ r_esp -= 4; W32(r_esp, 0x5e9e6au); f_005ba399();
    /* 005e9e6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e6d: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 005e9e70: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e73: cmp dword ptr [edx + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9e77: je 0x5e9ea3 */ if (fZ) goto L_005e9ea3;
L_005e9e79:; BB(0x005e9e79);
    /* 005e9e79: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e7c: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005e9e7f: call 0x60c06b */ r_esp -= 4; W32(r_esp, 0x5e9e84u); f_0060c06b();
    /* 005e9e84: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e9e87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e8a: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 005e9e8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9e8f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9e92: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005e9e95: call 0x60c07d */ r_esp -= 4; W32(r_esp, 0x5e9e9au); f_0060c07d();
    /* 005e9e9a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e9e9d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9ea0: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
L_005e9ea3:; BB(0x005e9ea3);
    /* 005e9ea3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9ea6: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x5e9eabu); f_005ea2f8();
    /* 005e9eab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9eae: cmp dword ptr [edx + 0x38], eax */ {  u32 a = R32((u32)(r_edx+0x38u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9eb1: jle 0x5e9ec1 */ if ((fZ||fS!=fO)) goto L_005e9ec1;
L_005e9eb3:; BB(0x005e9eb3);
    /* 005e9eb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9eb6: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x5e9ebbu); f_005ea2f8();
    /* 005e9ebb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9ebe: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
L_005e9ec1:; BB(0x005e9ec1);
    /* 005e9ec1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9ec4: cmp dword ptr [edx + 0x38], 0 */ {  u32 a = R32((u32)(r_edx+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9ec8: jge 0x5e9ed4 */ if ((fS==fO)) goto L_005e9ed4;
L_005e9eca:; BB(0x005e9eca);
    /* 005e9eca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9ecd: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_005e9ed4:; BB(0x005e9ed4);
    /* 005e9ed4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9ed7: call 0x5ea309 */ r_esp -= 4; W32(r_esp, 0x5e9edcu); f_005ea309();
    /* 005e9edc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9edf: cmp dword ptr [ecx + 0x34], eax */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9ee2: jle 0x5e9ef2 */ if ((fZ||fS!=fO)) goto L_005e9ef2;
L_005e9ee4:; BB(0x005e9ee4);
    /* 005e9ee4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9ee7: call 0x5ea309 */ r_esp -= 4; W32(r_esp, 0x5e9eecu); f_005ea309();
    /* 005e9eec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9eef: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
L_005e9ef2:; BB(0x005e9ef2);
    /* 005e9ef2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9ef5: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9ef9: jge 0x5e9f05 */ if ((fS==fO)) goto L_005e9f05;
L_005e9efb:; BB(0x005e9efb);
    /* 005e9efb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9efe: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_005e9f05:; BB(0x005e9f05);
    /* 005e9f05: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f08: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9f0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f0f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e9f12: call 0x5e087b */ r_esp -= 4; W32(r_esp, 0x5e9f17u); f_005e087b();
    /* 005e9f17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f1a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e9f1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f1f: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e9f22u); call_ind(t); }
    /* 005e9f22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e9f28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f2b: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e9f2eu); call_ind(t); }
    /* 005e9f2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f32: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e9f34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f37: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e9f3au); call_ind(t); }
    /* 005e9f3a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f3d: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9f40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f44: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e9f47: call 0x5e087b */ r_esp -= 4; W32(r_esp, 0x5e9f4cu); f_005e087b();
L_005e9f4c:; BB(0x005e9f4c);
    /* 005e9f4c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9f4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9f4f: ret  */ FN_RET(0x005e9e15); r_esp += 4; return;
}

void f_005e9f50(void) /* FUN_005e9f50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9f50);
    /* 005e9f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f51: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e9f57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e9f5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f5e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e9f63u); f_005ea0c3();
    /* 005e9f63: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005e9f66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f67: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e9f6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f6b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e9f6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f72: call 0x5d9647 */ r_esp -= 4; W32(r_esp, 0x5e9f77u); f_005d9647();
    /* 005e9f77: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9f79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9f7a: ret 0x10 */ FN_RET(0x005e9f50); r_esp += 20; return;
}

void f_005e9f7d(void) /* FUN_005e9f7d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9f7d);
    /* 005e9f7d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f7e: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9f80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f81: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e9f84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f87: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9f8b: je 0x5e9fab */ if (fZ) goto L_005e9fab;
L_005e9f8d:; BB(0x005e9f8d);
    /* 005e9f8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f90: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5e9f95u); f_005d9690();
    /* 005e9f95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9f97: je 0x5e9fab */ if (fZ) goto L_005e9fab;
L_005e9f99:; BB(0x005e9f99);
    /* 005e9f99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9f9c: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9f9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9fa0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9fa3: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e9fa6: call 0x5e087b */ r_esp -= 4; W32(r_esp, 0x5e9fabu); f_005e087b();
L_005e9fab:; BB(0x005e9fab);
    /* 005e9fab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9fae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9fb1: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 005e9fb4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9fb7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e9fba: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 005e9fbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9fc0: cmp dword ptr [ecx + 0x3c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9fc4: je 0x5ea057 */ if (fZ) goto L_005ea057;
L_005e9fca:; BB(0x005e9fca);
    /* 005e9fca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9fcd: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005e9fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9fd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9fd4: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005e9fd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9fd8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9fdb: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005e9fde: call 0x60c0d5 */ r_esp -= 4; W32(r_esp, 0x5e9fe3u); f_0060c0d5();
    /* 005e9fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9fe4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9fe7: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005e9fea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9feb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9fee: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005e9ff1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ff2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9ff5: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005e9ff8: call 0x60c0a4 */ r_esp -= 4; W32(r_esp, 0x5e9ffdu); f_0060c0a4();
    /* 005e9ffd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ffe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea001: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ea003: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea006: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x5ea009u); call_ind(t); }
    /* 005ea009: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea00c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005ea00f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea010: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea013: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005ea016: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea01a: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005ea01d: call 0x60c139 */ r_esp -= 4; W32(r_esp, 0x5ea022u); f_0060c139();
    /* 005ea022: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea025: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 005ea028: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea02a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea02b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea02e: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005ea031: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea032: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea035: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005ea038: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea039: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea03c: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005ea03f: call 0x60c107 */ r_esp -= 4; W32(r_esp, 0x5ea044u); f_0060c107();
    /* 005ea044: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea047: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 005ea04a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ea04c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea04d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea050: call 0x5d994e */ r_esp -= 4; W32(r_esp, 0x5ea055u); f_005d994e();
    /* 005ea055: jmp 0x5ea06d */ goto L_005ea06d;
L_005ea057:; BB(0x005ea057);
    /* 005ea057: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea05a: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005ea05d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea05e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea061: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005ea064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea065: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea068: call 0x5d994e */ r_esp -= 4; W32(r_esp, 0x5ea06du); f_005d994e();
L_005ea06d:; BB(0x005ea06d);
    /* 005ea06d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea070: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005ea073: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea074: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea077: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005ea07a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea07b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea07e: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005ea081: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea082: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea085: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005ea088: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea089: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea08c: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ea08f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea090: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x5ea096u); call_ind(t); }
    /* 005ea096: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea099: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea09d: je 0x5ea0bd */ if (fZ) goto L_005ea0bd;
L_005ea09f:; BB(0x005ea09f);
    /* 005ea09f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea0a2: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5ea0a7u); f_005d9690();
    /* 005ea0a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea0a9: je 0x5ea0bd */ if (fZ) goto L_005ea0bd;
L_005ea0ab:; BB(0x005ea0ab);
    /* 005ea0ab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea0ae: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ea0b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea0b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea0b5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ea0b8: call 0x5e087b */ r_esp -= 4; W32(r_esp, 0x5ea0bdu); f_005e087b();
L_005ea0bd:; BB(0x005ea0bd);
    /* 005ea0bd: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea0bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea0c0: ret 8 */ FN_RET(0x005e9f7d); r_esp += 12; return;
}

void f_005ea0c3(void) /* FUN_005ea0c3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea0c3);
    /* 005ea0c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea0c4: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea0c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea0c7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea0ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea0cd: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005ea0d0: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea0d3: je 0x5ea121 */ if (fZ) goto L_005ea121;
L_005ea0d5:; BB(0x005ea0d5);
    /* 005ea0d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea0d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea0db: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 005ea0de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea0e1: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea0e5: je 0x5ea11f */ if (fZ) goto L_005ea11f;
L_005ea0e7:; BB(0x005ea0e7);
    /* 005ea0e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea0ea: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ea0ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea0ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea0f1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ea0f4: call 0x5e087b */ r_esp -= 4; W32(r_esp, 0x5ea0f9u); f_005e087b();
    /* 005ea0f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea0fc: call 0x5e9e15 */ r_esp -= 4; W32(r_esp, 0x5ea101u); f_005e9e15();
    /* 005ea101: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea104: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5ea109u); f_005d9690();
    /* 005ea109: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea10b: je 0x5ea11f */ if (fZ) goto L_005ea11f;
L_005ea10d:; BB(0x005ea10d);
    /* 005ea10d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea110: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea114: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea117: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005ea11a: call 0x5e087b */ r_esp -= 4; W32(r_esp, 0x5ea11fu); f_005e087b();
L_005ea11f:; BB(0x005ea11f);
    /* 005ea11f: jmp 0x5ea12a */ goto L_005ea12a;
L_005ea121:; BB(0x005ea121);
    /* 005ea121: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea124: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea127: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
L_005ea12a:; BB(0x005ea12a);
    /* 005ea12a: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea12c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea12d: ret 4 */ FN_RET(0x005ea0c3); r_esp += 8; return;
}

void f_005ea130(void) /* FUN_005ea130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea130);
    /* 005ea130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea131: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea137: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea13a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005ea13d: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea140: je 0x5ea18d */ if (fZ) goto L_005ea18d;
L_005ea142:; BB(0x005ea142);
    /* 005ea142: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea145: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea149: je 0x5ea18d */ if (fZ) goto L_005ea18d;
L_005ea14b:; BB(0x005ea14b);
    /* 005ea14b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea14e: call 0x5ea309 */ r_esp -= 4; W32(r_esp, 0x5ea153u); f_005ea309();
    /* 005ea153: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea156: jle 0x5ea163 */ if ((fZ||fS!=fO)) goto L_005ea163;
L_005ea158:; BB(0x005ea158);
    /* 005ea158: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea15b: call 0x5ea309 */ r_esp -= 4; W32(r_esp, 0x5ea160u); f_005ea309();
    /* 005ea160: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005ea163:; BB(0x005ea163);
    /* 005ea163: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea167: jge 0x5ea170 */ if ((fS==fO)) goto L_005ea170;
L_005ea169:; BB(0x005ea169);
    /* 005ea169: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_005ea170:; BB(0x005ea170);
    /* 005ea170: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea173: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005ea176: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea179: je 0x5ea18d */ if (fZ) goto L_005ea18d;
L_005ea17b:; BB(0x005ea17b);
    /* 005ea17b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea17e: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ea181: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea182: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea185: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ea188: call 0x5e087b */ r_esp -= 4; W32(r_esp, 0x5ea18du); f_005e087b();
L_005ea18d:; BB(0x005ea18d);
    /* 005ea18d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea190: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ea193: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 005ea196: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea199: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea19d: je 0x5ea1ba */ if (fZ) goto L_005ea1ba;
L_005ea19f:; BB(0x005ea19f);
    /* 005ea19f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea1a2: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005ea1a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea1a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea1a9: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005ea1ac: call 0x60c07d */ r_esp -= 4; W32(r_esp, 0x5ea1b1u); f_0060c07d();
    /* 005ea1b1: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ea1b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea1b7: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
L_005ea1ba:; BB(0x005ea1ba);
    /* 005ea1ba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea1bd: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005ea1c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea1c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea1c4: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5ea1c9u); f_005ea1cf();
    /* 005ea1c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea1cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea1cc: ret 4 */ FN_RET(0x005ea130); r_esp += 8; return;
}

void f_005ea1cf(void) /* FUN_005ea1cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea1cf);
    /* 005ea1cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea1d0: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea1d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea1d3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea1d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea1d9: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005ea1dc: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea1df: je 0x5ea251 */ if (fZ) goto L_005ea251;
L_005ea1e1:; BB(0x005ea1e1);
    /* 005ea1e1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea1e4: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea1e8: je 0x5ea248 */ if (fZ) goto L_005ea248;
L_005ea1ea:; BB(0x005ea1ea);
    /* 005ea1ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea1ed: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x5ea1f2u); f_005ea2f8();
    /* 005ea1f2: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea1f5: jle 0x5ea202 */ if ((fZ||fS!=fO)) goto L_005ea202;
L_005ea1f7:; BB(0x005ea1f7);
    /* 005ea1f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea1fa: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x5ea1ffu); f_005ea2f8();
    /* 005ea1ff: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005ea202:; BB(0x005ea202);
    /* 005ea202: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea206: jge 0x5ea20f */ if ((fS==fO)) goto L_005ea20f;
L_005ea208:; BB(0x005ea208);
    /* 005ea208: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_005ea20f:; BB(0x005ea20f);
    /* 005ea20f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea212: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005ea215: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea218: je 0x5ea246 */ if (fZ) goto L_005ea246;
L_005ea21a:; BB(0x005ea21a);
    /* 005ea21a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea21d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea220: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 005ea223: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea226: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ea228: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea22b: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5ea22eu); call_ind(t); }
    /* 005ea22e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea22f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea232: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ea234: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea237: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5ea23au); call_ind(t); }
    /* 005ea23a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea23b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea23e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ea240: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea243: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5ea246u); call_ind(t); }
L_005ea246:; BB(0x005ea246);
    /* 005ea246: jmp 0x5ea251 */ goto L_005ea251;
L_005ea248:; BB(0x005ea248);
    /* 005ea248: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea24b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea24e: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
L_005ea251:; BB(0x005ea251);
    /* 005ea251: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea253: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea254: ret 4 */ FN_RET(0x005ea1cf); r_esp += 8; return;
}

void f_005ea257(void) /* FUN_005ea257 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea257);
    /* 005ea257: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea258: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea25a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea25b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea25e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea261: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 005ea264: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea266: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea267: ret  */ FN_RET(0x005ea257); r_esp += 4; return;
}

void f_005ea268(void) /* FUN_005ea268 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea268);
    /* 005ea268: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea269: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea26b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea26c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea26f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea272: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 005ea275: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea277: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea278: ret  */ FN_RET(0x005ea268); r_esp += 4; return;
}

void f_005ea279(void) /* FUN_005ea279 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea279);
    /* 005ea279: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea27a: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea27c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea27d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea280: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea283: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005ea286: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea288: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea289: ret  */ FN_RET(0x005ea279); r_esp += 4; return;
}

void f_005ea28a(void) /* FUN_005ea28a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea28a);
    /* 005ea28a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea28b: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea28d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea28e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea291: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea294: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea298: jne 0x5ea2bd */ if (!fZ) goto L_005ea2bd;
L_005ea29a:; BB(0x005ea29a);
    /* 005ea29a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea29d: call 0x5d9a0f */ r_esp -= 4; W32(r_esp, 0x5ea2a2u); f_005d9a0f();
    /* 005ea2a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea2a5: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea2a9: je 0x5ea2bd */ if (fZ) goto L_005ea2bd;
L_005ea2ab:; BB(0x005ea2ab);
    /* 005ea2ab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea2ae: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ea2b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea2b5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ea2b8: call 0x5e087b */ r_esp -= 4; W32(r_esp, 0x5ea2bdu); f_005e087b();
L_005ea2bd:; BB(0x005ea2bd);
    /* 005ea2bd: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea2bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea2c0: ret  */ FN_RET(0x005ea28a); r_esp += 4; return;
}

void f_005ea2c1(void) /* FUN_005ea2c1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea2c1);
    /* 005ea2c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2c2: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea2c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2c5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea2c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea2cb: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea2cf: je 0x5ea2f4 */ if (fZ) goto L_005ea2f4;
L_005ea2d1:; BB(0x005ea2d1);
    /* 005ea2d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea2d4: call 0x5d9a24 */ r_esp -= 4; W32(r_esp, 0x5ea2d9u); f_005d9a24();
    /* 005ea2d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea2dc: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea2e0: je 0x5ea2f4 */ if (fZ) goto L_005ea2f4;
L_005ea2e2:; BB(0x005ea2e2);
    /* 005ea2e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea2e5: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ea2e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea2ec: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ea2ef: call 0x5e087b */ r_esp -= 4; W32(r_esp, 0x5ea2f4u); f_005e087b();
L_005ea2f4:; BB(0x005ea2f4);
    /* 005ea2f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea2f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea2f7: ret  */ FN_RET(0x005ea2c1); r_esp += 4; return;
}

void f_005ea2f8(void) /* FUN_005ea2f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea2f8);
    /* 005ea2f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea2fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2fc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea2ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea302: mov eax, dword ptr [eax + 0x50] */ r_eax = R32((u32)(r_eax+0x50u));
    /* 005ea305: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea307: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea308: ret  */ FN_RET(0x005ea2f8); r_esp += 4; return;
}

void f_005ea309(void) /* FUN_005ea309 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea309);
    /* 005ea309: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea30a: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea30c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea30d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea310: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea313: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 005ea316: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea318: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea319: ret  */ FN_RET(0x005ea309); r_esp += 4; return;
}

void f_005ea31a(void) /* FUN_005ea31a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea31a);
    /* 005ea31a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea31b: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea31d: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea320: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ea323: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea326: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ea329: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ea32b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ea32e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005ea331: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005ea334: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ea337: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ea33a: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005ea33d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005ea340: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea343: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea344: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005ea347: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea348: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005ea34b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea34c: call dword ptr [0x633238] */ { u32 t = R32((u32)(0x633238u)); r_esp -= 4; W32(r_esp, 0x5ea352u); call_ind(t); }
    /* 005ea352: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea355: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea359: je 0x5ea44e */ if (fZ) goto L_005ea44e;
L_005ea35f:; BB(0x005ea35f);
    /* 005ea35f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea362: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea366: je 0x5ea44e */ if (fZ) goto L_005ea44e;
L_005ea36c:; BB(0x005ea36c);
    /* 005ea36c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea36f: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5ea374u); f_005d9690();
    /* 005ea374: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea376: je 0x5ea44e */ if (fZ) goto L_005ea44e;
L_005ea37c:; BB(0x005ea37c);
    /* 005ea37c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea37f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea382: sub eax, dword ptr [edx + 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x40u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ea385: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ea388: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea38b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea38e: sub edx, dword ptr [ecx + 0x44] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x44u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ea391: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005ea394: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ea397: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ea39a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea39d: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea39f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ea3a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea3a5: sub edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ea3a8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ea3ab: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ea3ad: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ea3b0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea3b3: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005ea3b6: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5ea3bbu); f_005e06e1();
    /* 005ea3bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea3bc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea3bf: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005ea3c2: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5ea3c7u); f_005e06d0();
    /* 005ea3c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea3c8: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005ea3cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea3cc: call dword ptr [0x6331dc] */ { u32 t = R32((u32)(0x6331dcu)); r_esp -= 4; W32(r_esp, 0x5ea3d2u); call_ind(t); }
    /* 005ea3d2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea3d5: mov dl, byte ptr [ecx + 0x58] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x58u))) & 0xffu);
    /* 005ea3d8: mov byte ptr [0x69c864], dl */ W8((u32)(0x69c864u), (u8)r_edx);
    /* 005ea3de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ea3e0: mov al, byte ptr [0x69c864] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x69c864u))) & 0xffu);
    /* 005ea3e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005ea3e7: jle 0x5ea447 */ if ((fZ||fS!=fO)) goto L_005ea447;
L_005ea3e9:; BB(0x005ea3e9);
    /* 005ea3e9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea3ec: mov ecx, esp */ r_ecx = r_esp;
    /* 005ea3ee: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea3f1: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005ea3f3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ea3f6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005ea3f9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea3fc: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005ea3ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ea402: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005ea405: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea408: mov ecx, esp */ r_ecx = r_esp;
    /* 005ea40a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea40d: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005ea40f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea412: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005ea415: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ea418: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005ea41b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea41e: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005ea421: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005ea427: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005ea42a: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005ea42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea42e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea431: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005ea434: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea435: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea438: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005ea43b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea43c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea43f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005ea442: call 0x60c16b */ r_esp -= 4; W32(r_esp, 0x5ea447u); f_0060c16b();
L_005ea447:; BB(0x005ea447);
    /* 005ea447: mov byte ptr [0x69c864], 0xff */ W8((u32)(0x69c864u), 0xffu);
L_005ea44e:; BB(0x005ea44e);
    /* 005ea44e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea450: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea451: ret 4 */ FN_RET(0x005ea31a); r_esp += 8; return;
}

void f_005ea454(void) /* FUN_005ea454 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea454);
    /* 005ea454: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea455: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea457: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea458: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea45b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea45e: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005ea461: mov byte ptr [eax + 0x58], cl */ W8((u32)(r_eax+0x58u), (u8)r_ecx);
    /* 005ea464: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea467: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea46b: je 0x5ea48b */ if (fZ) goto L_005ea48b;
L_005ea46d:; BB(0x005ea46d);
    /* 005ea46d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea470: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5ea475u); f_005d9690();
    /* 005ea475: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea477: je 0x5ea48b */ if (fZ) goto L_005ea48b;
L_005ea479:; BB(0x005ea479);
    /* 005ea479: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea47c: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ea47f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea480: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea483: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005ea486: call 0x5e087b */ r_esp -= 4; W32(r_esp, 0x5ea48bu); f_005e087b();
L_005ea48b:; BB(0x005ea48b);
    /* 005ea48b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea48d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea48e: ret 4 */ FN_RET(0x005ea454); r_esp += 8; return;
}

void f_005ea491(void) /* FUN_005ea491 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea491);
    /* 005ea491: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea492: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea494: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea495: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea498: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea49b: mov al, byte ptr [eax + 0x58] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x58u))) & 0xffu);
    /* 005ea49e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea4a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea4a1: ret  */ FN_RET(0x005ea491); r_esp += 4; return;
}

void f_005ea4a2(void) /* FUN_005ea4a2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea4a2);
    /* 005ea4a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea4a3: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea4a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea4a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea4a9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ea4ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea4ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea4b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea4b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea4b4: call 0x5d96ba */ r_esp -= 4; W32(r_esp, 0x5ea4b9u); f_005d96ba();
    /* 005ea4b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea4bb: je 0x5ea50c */ if (fZ) goto L_005ea50c;
L_005ea4bd:; BB(0x005ea4bd);
    /* 005ea4bd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea4c0: cmp dword ptr [edx + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea4c4: je 0x5ea505 */ if (fZ) goto L_005ea505;
L_005ea4c6:; BB(0x005ea4c6);
    /* 005ea4c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea4c9: cmp dword ptr [eax + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea4cd: je 0x5ea505 */ if (fZ) goto L_005ea505;
L_005ea4cf:; BB(0x005ea4cf);
    /* 005ea4cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea4d2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ea4d5: sub edx, dword ptr [ecx + 0x44] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x44u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ea4d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea4d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea4dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea4df: sub ecx, dword ptr [eax + 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea4e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea4e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea4e6: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005ea4e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea4ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea4ed: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005ea4f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea4f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea4f4: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005ea4f7: call 0x60c2b4 */ r_esp -= 4; W32(r_esp, 0x5ea4fcu); f_0060c2b4();
    /* 005ea4fc: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ea501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea503: je 0x5ea50c */ if (fZ) goto L_005ea50c;
L_005ea505:; BB(0x005ea505);
    /* 005ea505: mov eax, 1 */ r_eax = 0x1u;
    /* 005ea50a: jmp 0x5ea50e */ goto L_005ea50e;
L_005ea50c:; BB(0x005ea50c);
    /* 005ea50c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005ea50e:; BB(0x005ea50e);
    /* 005ea50e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea510: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea511: ret 8 */ FN_RET(0x005ea4a2); r_esp += 12; return;
}

void f_005ea514(void) /* FUN_005ea514 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea514);
    /* 005ea514: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea515: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea517: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea518: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea51b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea51e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea521: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 005ea524: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea526: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea527: ret 4 */ FN_RET(0x005ea514); r_esp += 8; return;
}

void f_005ea52a(void) /* FUN_005ea52a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea52a);
    /* 005ea52a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea52b: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea52d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea52e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea531: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea534: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 005ea537: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea539: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea53a: ret  */ FN_RET(0x005ea52a); r_esp += 4; return;
}

void f_005ea53b(void) /* FUN_005ea53b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea53b);
    /* 005ea53b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea53c: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea53e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea53f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea542: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea545: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 005ea548: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea54a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea54b: ret  */ FN_RET(0x005ea53b); r_esp += 4; return;
}

void f_005ea54c(void) /* FUN_005ea54c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea54c);
    /* 005ea54c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea54d: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea54f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea550: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea553: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea556: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea55a: je 0x5ea577 */ if (fZ) goto L_005ea577;
L_005ea55c:; BB(0x005ea55c);
    /* 005ea55c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea55f: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005ea562: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea563: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea566: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005ea569: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea56a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea56d: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005ea570: call 0x60c107 */ r_esp -= 4; W32(r_esp, 0x5ea575u); f_0060c107();
    /* 005ea575: jmp 0x5ea579 */ goto L_005ea579;
L_005ea577:; BB(0x005ea577);
    /* 005ea577: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005ea579:; BB(0x005ea579);
    /* 005ea579: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea57b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea57c: ret  */ FN_RET(0x005ea54c); r_esp += 4; return;
}

void f_005ea57d(void) /* FUN_005ea57d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea57d);
    /* 005ea57d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea57e: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea580: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea581: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea584: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea587: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea58b: je 0x5ea5a8 */ if (fZ) goto L_005ea5a8;
L_005ea58d:; BB(0x005ea58d);
    /* 005ea58d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea590: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005ea593: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea594: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea597: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005ea59a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea59b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea59e: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005ea5a1: call 0x60c139 */ r_esp -= 4; W32(r_esp, 0x5ea5a6u); f_0060c139();
    /* 005ea5a6: jmp 0x5ea5aa */ goto L_005ea5aa;
L_005ea5a8:; BB(0x005ea5a8);
    /* 005ea5a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005ea5aa:; BB(0x005ea5aa);
    /* 005ea5aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea5ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea5ad: ret  */ FN_RET(0x005ea57d); r_esp += 4; return;
}

void f_005ea5ae(void) /* FUN_005ea5ae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea5ae);
    /* 005ea5ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5af: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea5b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5b2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea5b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea5b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea5bb: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 005ea5be: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea5c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea5c1: ret 4 */ FN_RET(0x005ea5ae); r_esp += 8; return;
}

void f_005ea5c4(void) /* FUN_005ea5c4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea5c4);
    /* 005ea5c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5c5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea5c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5c8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea5cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea5ce: mov eax, dword ptr [eax + 0x68] */ r_eax = R32((u32)(r_eax+0x68u));
    /* 005ea5d1: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea5d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea5d4: ret  */ FN_RET(0x005ea5c4); r_esp += 4; return;
}

void f_005ea5d5(void) /* FUN_005ea5d5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea5d5);
    /* 005ea5d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5d6: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea5d8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea5db: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ea5de: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005ea5e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5e2: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005ea5e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5e6: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 005ea5e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5ea: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 005ea5ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5ee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea5f1: call 0x5ea649 */ r_esp -= 4; W32(r_esp, 0x5ea5f6u); f_005ea649();
    /* 005ea5f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea5f9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ea5fc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ea5ff: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005ea602: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea605: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea608: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005ea60b: sub edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ea60e: sub edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ea611: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005ea614: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea617: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ea61a: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005ea61d: sub edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ea620: sub edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ea623: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005ea626: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea629: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea62c: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005ea62e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea631: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005ea634: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ea637: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005ea63a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea63d: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005ea640: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea643: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea645: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea646: ret 4 */ FN_RET(0x005ea5d5); r_esp += 8; return;
}

void f_005ea649(void) /* FUN_005ea649 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea649);
    /* 005ea649: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea64a: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea64c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea64f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ea652: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea655: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5ea65au); f_005d98c3();
    /* 005ea65a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ea65d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea660: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5ea665u); f_005d98da();
    /* 005ea665: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ea668: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ea66b: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005ea671: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005ea678: jmp 0x5ea683 */ goto L_005ea683;
L_005ea67a:; BB(0x005ea67a);
    /* 005ea67a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea67d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea680: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005ea683:; BB(0x005ea683);
    /* 005ea683: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea686: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea689: jge 0x5ea717 */ if ((fS==fO)) goto L_005ea717;
L_005ea68f:; BB(0x005ea68f);
    /* 005ea68f: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 005ea696: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ea69d: jmp 0x5ea6a8 */ goto L_005ea6a8;
L_005ea69f:; BB(0x005ea69f);
    /* 005ea69f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea6a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ea6a5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005ea6a8:; BB(0x005ea6a8);
    /* 005ea6a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea6ab: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea6ae: jge 0x5ea6f9 */ if ((fS==fO)) goto L_005ea6f9;
L_005ea6b0:; BB(0x005ea6b0);
    /* 005ea6b0: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 005ea6b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6b4: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005ea6b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6b8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea6bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6bc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea6bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6c0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea6c3: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005ea6c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6c7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea6ca: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005ea6cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea6d1: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005ea6d4: call 0x60c304 */ r_esp -= 4; W32(r_esp, 0x5ea6d9u); f_0060c304();
    /* 005ea6d9: mov edx, dword ptr [ebp - 5] */ r_edx = R32((u32)(r_ebp+0xfffffffbu));
    /* 005ea6dc: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ea6e2: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea6e8: jne 0x5ea6f7 */ if (!fZ) goto L_005ea6f7;
L_005ea6ea:; BB(0x005ea6ea);
    /* 005ea6ea: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005ea6f1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea6f4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005ea6f7:; BB(0x005ea6f7);
    /* 005ea6f7: jmp 0x5ea69f */ goto L_005ea69f;
L_005ea6f9:; BB(0x005ea6f9);
    /* 005ea6f9: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea6fd: je 0x5ea70c */ if (fZ) goto L_005ea70c;
L_005ea6ff:; BB(0x005ea6ff);
    /* 005ea6ff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea702: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea705: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ea708: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005ea70a: jmp 0x5ea712 */ goto L_005ea712;
L_005ea70c:; BB(0x005ea70c);
    /* 005ea70c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ea70f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005ea712:; BB(0x005ea712);
    /* 005ea712: jmp 0x5ea67a */ goto L_005ea67a;
L_005ea717:; BB(0x005ea717);
    /* 005ea717: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea71a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 005ea720: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ea727: jmp 0x5ea732 */ goto L_005ea732;
L_005ea729:; BB(0x005ea729);
    /* 005ea729: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea72c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ea72f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005ea732:; BB(0x005ea732);
    /* 005ea732: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea735: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea738: jge 0x5ea7c4 */ if ((fS==fO)) goto L_005ea7c4;
L_005ea73e:; BB(0x005ea73e);
    /* 005ea73e: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 005ea745: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005ea74c: jmp 0x5ea757 */ goto L_005ea757;
L_005ea74e:; BB(0x005ea74e);
    /* 005ea74e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea751: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea754: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005ea757:; BB(0x005ea757);
    /* 005ea757: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea75a: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea75d: jge 0x5ea7a6 */ if ((fS==fO)) goto L_005ea7a6;
L_005ea75f:; BB(0x005ea75f);
    /* 005ea75f: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 005ea762: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea763: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005ea766: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea767: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea76a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea76b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea76e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea76f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea772: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005ea775: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea776: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea779: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005ea77c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea77d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea780: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005ea783: call 0x60c304 */ r_esp -= 4; W32(r_esp, 0x5ea788u); f_0060c304();
    /* 005ea788: mov eax, dword ptr [ebp - 5] */ r_eax = R32((u32)(r_ebp+0xfffffffbu));
    /* 005ea78b: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ea790: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea795: jne 0x5ea7a4 */ if (!fZ) goto L_005ea7a4;
L_005ea797:; BB(0x005ea797);
    /* 005ea797: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005ea79e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ea7a1: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005ea7a4:; BB(0x005ea7a4);
    /* 005ea7a4: jmp 0x5ea74e */ goto L_005ea74e;
L_005ea7a6:; BB(0x005ea7a6);
    /* 005ea7a6: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea7aa: je 0x5ea7b9 */ if (fZ) goto L_005ea7b9;
L_005ea7ac:; BB(0x005ea7ac);
    /* 005ea7ac: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea7af: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ea7b2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea7b5: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005ea7b7: jmp 0x5ea7bf */ goto L_005ea7bf;
L_005ea7b9:; BB(0x005ea7b9);
    /* 005ea7b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea7bc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005ea7bf:; BB(0x005ea7bf);
    /* 005ea7bf: jmp 0x5ea729 */ goto L_005ea729;
L_005ea7c4:; BB(0x005ea7c4);
    /* 005ea7c4: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005ea7c7: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 005ea7cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ea7d0: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ea7d3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005ea7d6: jmp 0x5ea7e1 */ goto L_005ea7e1;
L_005ea7d8:; BB(0x005ea7d8);
    /* 005ea7d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea7db: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea7de: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005ea7e1:; BB(0x005ea7e1);
    /* 005ea7e1: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea7e5: jl 0x5ea874 */ if ((fS!=fO)) goto L_005ea874;
L_005ea7eb:; BB(0x005ea7eb);
    /* 005ea7eb: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 005ea7f2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ea7f9: jmp 0x5ea804 */ goto L_005ea804;
L_005ea7fb:; BB(0x005ea7fb);
    /* 005ea7fb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea7fe: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ea801: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005ea804:; BB(0x005ea804);
    /* 005ea804: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea807: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea80a: jge 0x5ea855 */ if ((fS==fO)) goto L_005ea855;
L_005ea80c:; BB(0x005ea80c);
    /* 005ea80c: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 005ea80f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea810: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005ea813: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea814: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea817: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea818: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea81b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea81c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea81f: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005ea822: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea823: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea826: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005ea829: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea82a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea82d: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005ea830: call 0x60c304 */ r_esp -= 4; W32(r_esp, 0x5ea835u); f_0060c304();
    /* 005ea835: mov ecx, dword ptr [ebp - 5] */ r_ecx = R32((u32)(r_ebp+0xfffffffbu));
    /* 005ea838: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea83e: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea844: jne 0x5ea853 */ if (!fZ) goto L_005ea853;
L_005ea846:; BB(0x005ea846);
    /* 005ea846: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005ea84d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea850: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005ea853:; BB(0x005ea853);
    /* 005ea853: jmp 0x5ea7fb */ goto L_005ea7fb;
L_005ea855:; BB(0x005ea855);
    /* 005ea855: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea859: je 0x5ea868 */ if (fZ) goto L_005ea868;
L_005ea85b:; BB(0x005ea85b);
    /* 005ea85b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ea85e: sub eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ea861: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005ea864: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 005ea866: jmp 0x5ea86f */ goto L_005ea86f;
L_005ea868:; BB(0x005ea868);
    /* 005ea868: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005ea86f:; BB(0x005ea86f);
    /* 005ea86f: jmp 0x5ea7d8 */ goto L_005ea7d8;
L_005ea874:; BB(0x005ea874);
    /* 005ea874: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ea877: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 005ea87d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea880: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ea883: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ea886: jmp 0x5ea891 */ goto L_005ea891;
L_005ea888:; BB(0x005ea888);
    /* 005ea888: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea88b: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea88e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005ea891:; BB(0x005ea891);
    /* 005ea891: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea895: jl 0x5ea924 */ if ((fS!=fO)) goto L_005ea924;
L_005ea89b:; BB(0x005ea89b);
    /* 005ea89b: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 005ea8a2: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005ea8a9: jmp 0x5ea8b4 */ goto L_005ea8b4;
L_005ea8ab:; BB(0x005ea8ab);
    /* 005ea8ab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea8ae: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ea8b1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_005ea8b4:; BB(0x005ea8b4);
    /* 005ea8b4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea8b7: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea8ba: jge 0x5ea905 */ if ((fS==fO)) goto L_005ea905;
L_005ea8bc:; BB(0x005ea8bc);
    /* 005ea8bc: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 005ea8bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8c0: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005ea8c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8c4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ea8c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8c8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea8cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8cc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea8cf: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005ea8d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8d3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea8d6: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005ea8d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8da: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ea8dd: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005ea8e0: call 0x60c304 */ r_esp -= 4; W32(r_esp, 0x5ea8e5u); f_0060c304();
    /* 005ea8e5: mov ecx, dword ptr [ebp - 5] */ r_ecx = R32((u32)(r_ebp+0xfffffffbu));
    /* 005ea8e8: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea8ee: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea8f4: jne 0x5ea903 */ if (!fZ) goto L_005ea903;
L_005ea8f6:; BB(0x005ea8f6);
    /* 005ea8f6: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005ea8fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ea900: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_005ea903:; BB(0x005ea903);
    /* 005ea903: jmp 0x5ea8ab */ goto L_005ea8ab;
L_005ea905:; BB(0x005ea905);
    /* 005ea905: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea909: je 0x5ea918 */ if (fZ) goto L_005ea918;
L_005ea90b:; BB(0x005ea90b);
    /* 005ea90b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea90e: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ea911: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ea914: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 005ea916: jmp 0x5ea91f */ goto L_005ea91f;
L_005ea918:; BB(0x005ea918);
    /* 005ea918: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005ea91f:; BB(0x005ea91f);
    /* 005ea91f: jmp 0x5ea888 */ goto L_005ea888;
L_005ea924:; BB(0x005ea924);
    /* 005ea924: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea926: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea927: ret 0x10 */ FN_RET(0x005ea649); r_esp += 20; return;
}

void f_005ea92a(void) /* FUN_005ea92a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea92a);
    /* 005ea92a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea92b: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea92d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea92e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea931: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea934: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea938: je 0x5ea94d */ if (fZ) goto L_005ea94d;
L_005ea93a:; BB(0x005ea93a);
    /* 005ea93a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ea93d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea93e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ea941: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea942: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea945: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005ea948: call 0x60c3ee */ r_esp -= 4; W32(r_esp, 0x5ea94du); f_0060c3ee();
L_005ea94d:; BB(0x005ea94d);
    /* 005ea94d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea950: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea954: je 0x5ea968 */ if (fZ) goto L_005ea968;
L_005ea956:; BB(0x005ea956);
    /* 005ea956: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea959: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ea95c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea95d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea960: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ea963: call 0x5e087b */ r_esp -= 4; W32(r_esp, 0x5ea968u); f_005e087b();
L_005ea968:; BB(0x005ea968);
    /* 005ea968: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea96a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea96b: ret 8 */ FN_RET(0x005ea92a); r_esp += 12; return;
}

void f_005ea970(void) /* FUN_005ea970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea970);
    /* 005ea970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea971: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea973: sub esp, 0x270 */ {  u32 a = r_esp; u32 b = 0x270u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea979: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ea97a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ea97b: mov dword ptr [ebp - 0x268], ecx */ W32((u32)(r_ebp+0xfffffd98u), r_ecx);
    /* 005ea981: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005ea987: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5ea98cu); f_005dfbf0();
    /* 005ea98c: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005ea992: add ecx, 0x2b0 */ {  u32 a = r_ecx; u32 b = 0x2b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea998: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x5ea99du); f_005dd290();
    /* 005ea99d: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005ea9a3: mov dword ptr [eax], 0x63c09c */ W32((u32)(r_eax), 0x63c09cu);
    /* 005ea9a9: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005ea9af: mov dword ptr [0x6fc470], ecx */ W32((u32)(0x6fc470u), r_ecx);
    /* 005ea9b5: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005ea9bb: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005ea9be: call 0x6201dc */ r_esp -= 4; W32(r_esp, 0x5ea9c3u); f_006201dc();
    /* 005ea9c3: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005ea9c9: mov dword ptr [ecx + 0x304], eax */ W32((u32)(r_ecx+0x304u), r_eax);
    /* 005ea9cf: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005ea9d5: cmp dword ptr [edx + 0x304], 0 */ {  u32 a = R32((u32)(r_edx+0x304u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea9dc: je 0x5ea9ed */ if (fZ) goto L_005ea9ed;
L_005ea9de:; BB(0x005ea9de);
    /* 005ea9de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea9e0: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005ea9e5: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005ea9e8: call 0x6201af */ r_esp -= 4; W32(r_esp, 0x5ea9edu); f_006201af();
L_005ea9ed:; BB(0x005ea9ed);
    /* 005ea9ed: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005ea9f3: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005ea9f6: call 0x61d4f3 */ r_esp -= 4; W32(r_esp, 0x5ea9fbu); f_0061d4f3();
    /* 005ea9fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea9fd: push 0x699d20 */ { u32 v = 0x699d20u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa02: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005eaa08: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005eaa0b: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x5eaa10u); f_0061ba62();
    /* 005eaa10: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaa16: mov dword ptr [ecx + 0x314], eax */ W32((u32)(r_ecx+0x314u), r_eax);
    /* 005eaa1c: mov dword ptr [ebp - 0x258], 0 */ W32((u32)(r_ebp+0xfffffda8u), 0x0u);
    /* 005eaa26: jmp 0x5eaa37 */ goto L_005eaa37;
L_005eaa28:; BB(0x005eaa28);
    /* 005eaa28: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 005eaa2e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eaa31: mov dword ptr [ebp - 0x258], edx */ W32((u32)(r_ebp+0xfffffda8u), r_edx);
L_005eaa37:; BB(0x005eaa37);
    /* 005eaa37: cmp dword ptr [ebp - 0x258], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffda8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eaa3e: jge 0x5eaa77 */ if ((fS==fO)) goto L_005eaa77;
L_005eaa40:; BB(0x005eaa40);
    /* 005eaa40: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 005eaa46: imul eax, eax, 0x1c00 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1c00u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005eaa4c: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaa52: lea edi, [ecx + eax + 0x318] */ r_edi = (u32)(r_ecx+r_eax+0x318u);
    /* 005eaa59: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 005eaa5f: imul edx, edx, 0x1c00 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1c00u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005eaa65: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005eaa6a: lea esi, [eax + edx + 0x48] */ r_esi = (u32)(r_eax+r_edx+0x48u);
    /* 005eaa6e: mov ecx, 0x700 */ r_ecx = 0x700u;
    /* 005eaa73: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005eaa75: jmp 0x5eaa28 */ goto L_005eaa28;
L_005eaa77:; BB(0x005eaa77);
    /* 005eaa77: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaa7d: mov dword ptr [ecx + 0x274], 0 */ W32((u32)(r_ecx+0x274u), 0x0u);
    /* 005eaa87: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaa8d: call 0x5eb284 */ r_esp -= 4; W32(r_esp, 0x5eaa92u); f_005eb284();
    /* 005eaa92: push 0x699d34 */ { u32 v = 0x699d34u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa97: call dword ptr [0x63305c] */ { u32 t = R32((u32)(0x63305cu)); r_esp -= 4; W32(r_esp, 0x5eaa9du); call_ind(t); }
    /* 005eaa9d: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaaa3: mov dword ptr [edx + 0x2c8], eax */ W32((u32)(r_edx+0x2c8u), r_eax);
    /* 005eaaa9: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaaaf: cmp dword ptr [eax + 0x2c8], 0 */ {  u32 a = R32((u32)(r_eax+0x2c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eaab6: jne 0x5eaae3 */ if (!fZ) goto L_005eaae3;
L_005eaab8:; BB(0x005eaab8);
    /* 005eaab8: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaabd: mov ecx, dword ptr [0x68712c] */ r_ecx = R32((u32)(0x68712cu));
    /* 005eaac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaac4: push 0x699d44 */ { u32 v = 0x699d44u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaac9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaacb: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5eaad0u); f_0060f9f3();
    /* 005eaad0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eaad3: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaad9: call 0x5eb4bf */ r_esp -= 4; W32(r_esp, 0x5eaadeu); f_005eb4bf();
    /* 005eaade: jmp 0x5eb11a */ goto L_005eb11a;
L_005eaae3:; BB(0x005eaae3);
    /* 005eaae3: push 0x699d78 */ { u32 v = 0x699d78u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaae8: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaaee: mov eax, dword ptr [edx + 0x2c8] */ r_eax = R32((u32)(r_edx+0x2c8u));
    /* 005eaaf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaaf5: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eaafbu); call_ind(t); }
    /* 005eaafb: mov dword ptr [0x6fc408], eax */ W32((u32)(0x6fc408u), r_eax);
    /* 005eab00: push 0x6f6dc0 */ { u32 v = 0x6f6dc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eab05: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 005eab0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eab0c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5eab11u); f_00624510();
    /* 005eab11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eab14: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 005eab1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eab1b: lea eax, [ebp - 0x240] */ r_eax = (u32)(r_ebp+0xfffffdc0u);
    /* 005eab21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eab22: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5eab27u); f_00624510();
    /* 005eab27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eab2a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005eab2d: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 005eab30: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eab33: je 0x5eab49 */ if (fZ) goto L_005eab49;
L_005eab35:; BB(0x005eab35);
    /* 005eab35: push 0x699d84 */ { u32 v = 0x699d84u; r_esp -= 4; W32(r_esp, v); }
    /* 005eab3a: lea eax, [ebp - 0x240] */ r_eax = (u32)(r_ebp+0xfffffdc0u);
    /* 005eab40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eab41: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5eab46u); f_00624520();
    /* 005eab46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005eab49:; BB(0x005eab49);
    /* 005eab49: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005eab4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eab4d: lea edx, [ebp - 0x240] */ r_edx = (u32)(r_ebp+0xfffffdc0u);
    /* 005eab53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eab54: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5eab59u); f_00624520();
    /* 005eab59: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eab5c: push 0x6f6cb8 */ { u32 v = 0x6f6cb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005eab61: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 005eab67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eab68: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5eab6du); f_00624510();
    /* 005eab6d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eab70: mov dword ptr [0x6fc474], 1 */ W32((u32)(0x6fc474u), 0x1u);
    /* 005eab7a: cmp dword ptr [0x6fc408], 0 */ {  u32 a = R32((u32)(0x6fc408u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eab81: je 0x5eabc8 */ if (fZ) goto L_005eabc8;
L_005eab83:; BB(0x005eab83);
    /* 005eab83: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005eab89: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005eab8c: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005eab8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eab90: lea ecx, [ebp - 0x240] */ r_ecx = (u32)(r_ebp+0xfffffdc0u);
    /* 005eab96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eab97: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 005eab9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eab9e: lea eax, [ebp - 0x264] */ r_eax = (u32)(r_ebp+0xfffffd9cu);
    /* 005eaba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaba5: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 005eabab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eabac: lea edx, [ebp - 0x254] */ r_edx = (u32)(r_ebp+0xfffffdacu);
    /* 005eabb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eabb3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eabb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eabb7: call dword ptr [0x6fc408] */ { u32 t = R32((u32)(0x6fc408u)); r_esp -= 4; W32(r_esp, 0x5eabbdu); call_ind(t); }
    /* 005eabbd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eabc0: mov dword ptr [ebp - 0x25c], eax */ W32((u32)(r_ebp+0xfffffda4u), r_eax);
    /* 005eabc6: jmp 0x5eabd2 */ goto L_005eabd2;
L_005eabc8:; BB(0x005eabc8);
    /* 005eabc8: mov dword ptr [ebp - 0x25c], 0xffffffff */ W32((u32)(r_ebp+0xfffffda4u), 0xffffffffu);
L_005eabd2:; BB(0x005eabd2);
    /* 005eabd2: mov dword ptr [0x6fc474], 0 */ W32((u32)(0x6fc474u), 0x0u);
    /* 005eabdc: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eabe2: mov edx, dword ptr [ecx + 0x2c8] */ r_edx = R32((u32)(r_ecx+0x2c8u));
    /* 005eabe8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eabe9: call dword ptr [0x633054] */ { u32 t = R32((u32)(0x633054u)); r_esp -= 4; W32(r_esp, 0x5eabefu); call_ind(t); }
    /* 005eabef: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eabf5: mov dword ptr [eax + 0x2c8], 0 */ W32((u32)(r_eax+0x2c8u), 0x0u);
    /* 005eabff: mov dword ptr [0x6fc408], 0 */ W32((u32)(0x6fc408u), 0x0u);
    /* 005eac09: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 005eac0f: mov dword ptr [ebp - 0x26c], ecx */ W32((u32)(r_ebp+0xfffffd94u), r_ecx);
    /* 005eac15: cmp dword ptr [ebp - 0x26c], -2 */ {  u32 a = R32((u32)(r_ebp+0xfffffd94u)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eac1c: je 0x5eac39 */ if (fZ) goto L_005eac39;
L_005eac1e:; BB(0x005eac1e);
    /* 005eac1e: cmp dword ptr [ebp - 0x26c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffd94u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eac25: je 0x5eac29 */ if (fZ) goto L_005eac29;
L_005eac27:; BB(0x005eac27);
    /* 005eac27: jmp 0x5eac56 */ goto L_005eac56;
L_005eac29:; BB(0x005eac29);
    /* 005eac29: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eac2f: call 0x5eb4bf */ r_esp -= 4; W32(r_esp, 0x5eac34u); f_005eb4bf();
    /* 005eac34: jmp 0x5eb11a */ goto L_005eb11a;
L_005eac39:; BB(0x005eac39);
    /* 005eac39: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eac3f: call 0x5eb4bf */ r_esp -= 4; W32(r_esp, 0x5eac44u); f_005eb4bf();
    /* 005eac44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005eac46: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005eac4c: call 0x45b98a */ r_esp -= 4; W32(r_esp, 0x5eac51u); f_0045b98a();
    /* 005eac51: jmp 0x5eb11a */ goto L_005eb11a;
L_005eac56:; BB(0x005eac56);
    /* 005eac56: push 0x699d88 */ { u32 v = 0x699d88u; r_esp -= 4; W32(r_esp, v); }
    /* 005eac5b: call dword ptr [0x63305c] */ { u32 t = R32((u32)(0x63305cu)); r_esp -= 4; W32(r_esp, 0x5eac61u); call_ind(t); }
    /* 005eac61: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eac67: mov dword ptr [edx + 0x2c4], eax */ W32((u32)(r_edx+0x2c4u), r_eax);
    /* 005eac6d: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eac73: cmp dword ptr [eax + 0x2c4], 0 */ {  u32 a = R32((u32)(r_eax+0x2c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eac7a: jne 0x5eacec */ if (!fZ) goto L_005eacec;
L_005eac7c:; BB(0x005eac7c);
    /* 005eac7c: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x5eac82u); call_ind(t); }
    /* 005eac82: mov dword ptr [ebp - 0x260], eax */ W32((u32)(r_ebp+0xfffffda0u), r_eax);
    /* 005eac88: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 005eac8e: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005eac94: mov dword ptr [ebp - 0x270], ecx */ W32((u32)(r_ebp+0xfffffd90u), r_ecx);
    /* 005eac9a: cmp dword ptr [ebp - 0x270], 0x485 */ {  u32 a = R32((u32)(r_ebp+0xfffffd90u)); u32 b = 0x485u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eaca4: je 0x5eaca8 */ if (fZ) goto L_005eaca8;
L_005eaca6:; BB(0x005eaca6);
    /* 005eaca6: jmp 0x5eacc3 */ goto L_005eacc3;
L_005eaca8:; BB(0x005eaca8);
    /* 005eaca8: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eacad: push 0x699d98 */ { u32 v = 0x699d98u; r_esp -= 4; W32(r_esp, v); }
    /* 005eacb2: push 0x699da8 */ { u32 v = 0x699da8u; r_esp -= 4; W32(r_esp, v); }
    /* 005eacb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eacb9: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5eacbeu); f_0060f9f3();
    /* 005eacbe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eacc1: jmp 0x5eacdc */ goto L_005eacdc;
L_005eacc3:; BB(0x005eacc3);
    /* 005eacc3: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eacc8: push 0x699dcc */ { u32 v = 0x699dccu; r_esp -= 4; W32(r_esp, v); }
    /* 005eaccd: push 0x699ddc */ { u32 v = 0x699ddcu; r_esp -= 4; W32(r_esp, v); }
    /* 005eacd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eacd4: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5eacd9u); f_0060f9f3();
    /* 005eacd9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005eacdc:; BB(0x005eacdc);
    /* 005eacdc: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eace2: call 0x5eb4bf */ r_esp -= 4; W32(r_esp, 0x5eace7u); f_005eb4bf();
    /* 005eace7: jmp 0x5eb11a */ goto L_005eb11a;
L_005eacec:; BB(0x005eacec);
    /* 005eacec: push 0x699e00 */ { u32 v = 0x699e00u; r_esp -= 4; W32(r_esp, v); }
    /* 005eacf1: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eacf7: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005eacfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eacfe: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5ead04u); call_ind(t); }
    /* 005ead04: mov dword ptr [0x6fc40c], eax */ W32((u32)(0x6fc40cu), r_eax);
    /* 005ead09: push 0x699e10 */ { u32 v = 0x699e10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ead0e: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005ead14: mov edx, dword ptr [ecx + 0x2c4] */ r_edx = R32((u32)(r_ecx+0x2c4u));
    /* 005ead1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ead1b: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5ead21u); call_ind(t); }
    /* 005ead21: mov dword ptr [0x6fc410], eax */ W32((u32)(0x6fc410u), r_eax);
    /* 005ead26: push 0x699e1c */ { u32 v = 0x699e1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ead2b: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005ead31: mov ecx, dword ptr [eax + 0x2c4] */ r_ecx = R32((u32)(r_eax+0x2c4u));
    /* 005ead37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ead38: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5ead3eu); call_ind(t); }
    /* 005ead3e: mov dword ptr [0x6fc414], eax */ W32((u32)(0x6fc414u), r_eax);
    /* 005ead43: push 0x699e2c */ { u32 v = 0x699e2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ead48: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005ead4e: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005ead54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ead55: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5ead5bu); call_ind(t); }
    /* 005ead5b: mov dword ptr [0x6fc418], eax */ W32((u32)(0x6fc418u), r_eax);
    /* 005ead60: push 0x699e44 */ { u32 v = 0x699e44u; r_esp -= 4; W32(r_esp, v); }
    /* 005ead65: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005ead6b: mov edx, dword ptr [ecx + 0x2c4] */ r_edx = R32((u32)(r_ecx+0x2c4u));
    /* 005ead71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ead72: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5ead78u); call_ind(t); }
    /* 005ead78: mov dword ptr [0x6fc41c], eax */ W32((u32)(0x6fc41cu), r_eax);
    /* 005ead7d: push 0x699e58 */ { u32 v = 0x699e58u; r_esp -= 4; W32(r_esp, v); }
    /* 005ead82: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005ead88: mov ecx, dword ptr [eax + 0x2c4] */ r_ecx = R32((u32)(r_eax+0x2c4u));
    /* 005ead8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ead8f: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5ead95u); call_ind(t); }
    /* 005ead95: mov dword ptr [0x6fc420], eax */ W32((u32)(0x6fc420u), r_eax);
    /* 005ead9a: push 0x699e68 */ { u32 v = 0x699e68u; r_esp -= 4; W32(r_esp, v); }
    /* 005ead9f: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eada5: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005eadab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eadac: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eadb2u); call_ind(t); }
    /* 005eadb2: mov dword ptr [0x6fc424], eax */ W32((u32)(0x6fc424u), r_eax);
    /* 005eadb7: push 0x699e7c */ { u32 v = 0x699e7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eadbc: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eadc2: mov edx, dword ptr [ecx + 0x2c4] */ r_edx = R32((u32)(r_ecx+0x2c4u));
    /* 005eadc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eadc9: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eadcfu); call_ind(t); }
    /* 005eadcf: mov dword ptr [0x6fc428], eax */ W32((u32)(0x6fc428u), r_eax);
    /* 005eadd4: push 0x699e90 */ { u32 v = 0x699e90u; r_esp -= 4; W32(r_esp, v); }
    /* 005eadd9: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaddf: mov ecx, dword ptr [eax + 0x2c4] */ r_ecx = R32((u32)(r_eax+0x2c4u));
    /* 005eade5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eade6: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eadecu); call_ind(t); }
    /* 005eadec: mov dword ptr [0x6fc42c], eax */ W32((u32)(0x6fc42cu), r_eax);
    /* 005eadf1: push 0x699ea0 */ { u32 v = 0x699ea0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eadf6: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eadfc: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005eae02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae03: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eae09u); call_ind(t); }
    /* 005eae09: mov dword ptr [0x6fc430], eax */ W32((u32)(0x6fc430u), r_eax);
    /* 005eae0e: push 0x699eb8 */ { u32 v = 0x699eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005eae13: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eae19: mov edx, dword ptr [ecx + 0x2c4] */ r_edx = R32((u32)(r_ecx+0x2c4u));
    /* 005eae1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eae20: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eae26u); call_ind(t); }
    /* 005eae26: mov dword ptr [0x6fc434], eax */ W32((u32)(0x6fc434u), r_eax);
    /* 005eae2b: push 0x699ec4 */ { u32 v = 0x699ec4u; r_esp -= 4; W32(r_esp, v); }
    /* 005eae30: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eae36: mov ecx, dword ptr [eax + 0x2c4] */ r_ecx = R32((u32)(r_eax+0x2c4u));
    /* 005eae3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eae3d: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eae43u); call_ind(t); }
    /* 005eae43: mov dword ptr [0x6fc438], eax */ W32((u32)(0x6fc438u), r_eax);
    /* 005eae48: push 0x699ed4 */ { u32 v = 0x699ed4u; r_esp -= 4; W32(r_esp, v); }
    /* 005eae4d: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eae53: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005eae59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae5a: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eae60u); call_ind(t); }
    /* 005eae60: mov dword ptr [0x6fc43c], eax */ W32((u32)(0x6fc43cu), r_eax);
    /* 005eae65: push 0x699ef0 */ { u32 v = 0x699ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eae6a: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eae70: mov edx, dword ptr [ecx + 0x2c4] */ r_edx = R32((u32)(r_ecx+0x2c4u));
    /* 005eae76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eae77: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eae7du); call_ind(t); }
    /* 005eae7d: mov dword ptr [0x6fc440], eax */ W32((u32)(0x6fc440u), r_eax);
    /* 005eae82: push 0x699f04 */ { u32 v = 0x699f04u; r_esp -= 4; W32(r_esp, v); }
    /* 005eae87: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eae8d: mov ecx, dword ptr [eax + 0x2c4] */ r_ecx = R32((u32)(r_eax+0x2c4u));
    /* 005eae93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eae94: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eae9au); call_ind(t); }
    /* 005eae9a: mov dword ptr [0x6fc444], eax */ W32((u32)(0x6fc444u), r_eax);
    /* 005eae9f: push 0x699f18 */ { u32 v = 0x699f18u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaea4: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaeaa: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005eaeb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaeb1: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eaeb7u); call_ind(t); }
    /* 005eaeb7: mov dword ptr [0x6fc448], eax */ W32((u32)(0x6fc448u), r_eax);
    /* 005eaebc: push 0x699f28 */ { u32 v = 0x699f28u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaec1: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaec7: mov edx, dword ptr [ecx + 0x2c4] */ r_edx = R32((u32)(r_ecx+0x2c4u));
    /* 005eaecd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaece: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eaed4u); call_ind(t); }
    /* 005eaed4: mov dword ptr [0x6fc44c], eax */ W32((u32)(0x6fc44cu), r_eax);
    /* 005eaed9: push 0x699f38 */ { u32 v = 0x699f38u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaede: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaee4: mov ecx, dword ptr [eax + 0x2c4] */ r_ecx = R32((u32)(r_eax+0x2c4u));
    /* 005eaeea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaeeb: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eaef1u); call_ind(t); }
    /* 005eaef1: mov dword ptr [0x6fc450], eax */ W32((u32)(0x6fc450u), r_eax);
    /* 005eaef6: push 0x699f50 */ { u32 v = 0x699f50u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaefb: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaf01: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005eaf07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf08: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eaf0eu); call_ind(t); }
    /* 005eaf0e: mov dword ptr [0x6fc454], eax */ W32((u32)(0x6fc454u), r_eax);
    /* 005eaf13: push 0x699f6c */ { u32 v = 0x699f6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf18: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaf1e: mov edx, dword ptr [ecx + 0x2c4] */ r_edx = R32((u32)(r_ecx+0x2c4u));
    /* 005eaf24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf25: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eaf2bu); call_ind(t); }
    /* 005eaf2b: mov dword ptr [0x6fc458], eax */ W32((u32)(0x6fc458u), r_eax);
    /* 005eaf30: push 0x699f84 */ { u32 v = 0x699f84u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf35: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaf3b: mov ecx, dword ptr [eax + 0x2c4] */ r_ecx = R32((u32)(r_eax+0x2c4u));
    /* 005eaf41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf42: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eaf48u); call_ind(t); }
    /* 005eaf48: mov dword ptr [0x6fc45c], eax */ W32((u32)(0x6fc45cu), r_eax);
    /* 005eaf4d: push 0x699f9c */ { u32 v = 0x699f9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf52: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaf58: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005eaf5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf5f: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eaf65u); call_ind(t); }
    /* 005eaf65: mov dword ptr [0x6fc460], eax */ W32((u32)(0x6fc460u), r_eax);
    /* 005eaf6a: push 0x699fb4 */ { u32 v = 0x699fb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf6f: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaf75: mov edx, dword ptr [ecx + 0x2c4] */ r_edx = R32((u32)(r_ecx+0x2c4u));
    /* 005eaf7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf7c: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eaf82u); call_ind(t); }
    /* 005eaf82: mov dword ptr [0x6fc464], eax */ W32((u32)(0x6fc464u), r_eax);
    /* 005eaf87: push 0x699fc8 */ { u32 v = 0x699fc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf8c: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eaf92: mov ecx, dword ptr [eax + 0x2c4] */ r_ecx = R32((u32)(r_eax+0x2c4u));
    /* 005eaf98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf99: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eaf9fu); call_ind(t); }
    /* 005eaf9f: mov dword ptr [0x6fc468], eax */ W32((u32)(0x6fc468u), r_eax);
    /* 005eafa4: push 0x699fd8 */ { u32 v = 0x699fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 005eafa9: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eafaf: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005eafb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eafb6: call dword ptr [0x633058] */ { u32 t = R32((u32)(0x633058u)); r_esp -= 4; W32(r_esp, 0x5eafbcu); call_ind(t); }
    /* 005eafbc: mov dword ptr [0x6fc46c], eax */ W32((u32)(0x6fc46cu), r_eax);
    /* 005eafc1: cmp dword ptr [0x6fc40c], 0 */ {  u32 a = R32((u32)(0x6fc40cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eafc8: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eafce:; BB(0x005eafce);
    /* 005eafce: cmp dword ptr [0x6fc410], 0 */ {  u32 a = R32((u32)(0x6fc410u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eafd5: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eafdb:; BB(0x005eafdb);
    /* 005eafdb: cmp dword ptr [0x6fc414], 0 */ {  u32 a = R32((u32)(0x6fc414u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eafe2: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eafe8:; BB(0x005eafe8);
    /* 005eafe8: cmp dword ptr [0x6fc418], 0 */ {  u32 a = R32((u32)(0x6fc418u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eafef: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eaff5:; BB(0x005eaff5);
    /* 005eaff5: cmp dword ptr [0x6fc41c], 0 */ {  u32 a = R32((u32)(0x6fc41cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eaffc: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb002:; BB(0x005eb002);
    /* 005eb002: cmp dword ptr [0x6fc420], 0 */ {  u32 a = R32((u32)(0x6fc420u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb009: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb00f:; BB(0x005eb00f);
    /* 005eb00f: cmp dword ptr [0x6fc424], 0 */ {  u32 a = R32((u32)(0x6fc424u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb016: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb01c:; BB(0x005eb01c);
    /* 005eb01c: cmp dword ptr [0x6fc428], 0 */ {  u32 a = R32((u32)(0x6fc428u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb023: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb025:; BB(0x005eb025);
    /* 005eb025: cmp dword ptr [0x6fc42c], 0 */ {  u32 a = R32((u32)(0x6fc42cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb02c: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb02e:; BB(0x005eb02e);
    /* 005eb02e: cmp dword ptr [0x6fc430], 0 */ {  u32 a = R32((u32)(0x6fc430u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb035: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb037:; BB(0x005eb037);
    /* 005eb037: cmp dword ptr [0x6fc434], 0 */ {  u32 a = R32((u32)(0x6fc434u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb03e: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb040:; BB(0x005eb040);
    /* 005eb040: cmp dword ptr [0x6fc438], 0 */ {  u32 a = R32((u32)(0x6fc438u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb047: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb049:; BB(0x005eb049);
    /* 005eb049: cmp dword ptr [0x6fc43c], 0 */ {  u32 a = R32((u32)(0x6fc43cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb050: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb052:; BB(0x005eb052);
    /* 005eb052: cmp dword ptr [0x6fc440], 0 */ {  u32 a = R32((u32)(0x6fc440u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb059: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb05b:; BB(0x005eb05b);
    /* 005eb05b: cmp dword ptr [0x6fc444], 0 */ {  u32 a = R32((u32)(0x6fc444u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb062: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb064:; BB(0x005eb064);
    /* 005eb064: cmp dword ptr [0x6fc448], 0 */ {  u32 a = R32((u32)(0x6fc448u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb06b: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb06d:; BB(0x005eb06d);
    /* 005eb06d: cmp dword ptr [0x6fc44c], 0 */ {  u32 a = R32((u32)(0x6fc44cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb074: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb076:; BB(0x005eb076);
    /* 005eb076: cmp dword ptr [0x6fc450], 0 */ {  u32 a = R32((u32)(0x6fc450u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb07d: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb07f:; BB(0x005eb07f);
    /* 005eb07f: cmp dword ptr [0x6fc454], 0 */ {  u32 a = R32((u32)(0x6fc454u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb086: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb088:; BB(0x005eb088);
    /* 005eb088: cmp dword ptr [0x6fc464], 0 */ {  u32 a = R32((u32)(0x6fc464u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb08f: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb091:; BB(0x005eb091);
    /* 005eb091: cmp dword ptr [0x6fc468], 0 */ {  u32 a = R32((u32)(0x6fc468u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb098: je 0x5eb0a3 */ if (fZ) goto L_005eb0a3;
L_005eb09a:; BB(0x005eb09a);
    /* 005eb09a: cmp dword ptr [0x6fc46c], 0 */ {  u32 a = R32((u32)(0x6fc46cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb0a1: jne 0x5eb0b0 */ if (!fZ) goto L_005eb0b0;
L_005eb0a3:; BB(0x005eb0a3);
    /* 005eb0a3: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eb0a9: call 0x5eb4bf */ r_esp -= 4; W32(r_esp, 0x5eb0aeu); f_005eb4bf();
    /* 005eb0ae: jmp 0x5eb11a */ goto L_005eb11a;
L_005eb0b0:; BB(0x005eb0b0);
    /* 005eb0b0: mov ecx, dword ptr [ebp - 0x264] */ r_ecx = R32((u32)(r_ebp+0xfffffd9cu));
    /* 005eb0b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb0b7: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005eb0bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb0be: lea eax, [ebp - 0x254] */ r_eax = (u32)(r_ebp+0xfffffdacu);
    /* 005eb0c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb0c5: call dword ptr [0x6fc40c] */ { u32 t = R32((u32)(0x6fc40cu)); r_esp -= 4; W32(r_esp, 0x5eb0cbu); call_ind(t); }
    /* 005eb0cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb0ce: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 005eb0d4: cmp dword ptr [ebp - 0x258], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffda8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb0db: je 0x5eb0ea */ if (fZ) goto L_005eb0ea;
L_005eb0dd:; BB(0x005eb0dd);
    /* 005eb0dd: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eb0e3: call 0x5eb4bf */ r_esp -= 4; W32(r_esp, 0x5eb0e8u); f_005eb4bf();
    /* 005eb0e8: jmp 0x5eb11a */ goto L_005eb11a;
L_005eb0ea:; BB(0x005eb0ea);
    /* 005eb0ea: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eb0f0: mov dword ptr [ecx + 0x2a8], 1 */ W32((u32)(r_ecx+0x2a8u), 0x1u);
    /* 005eb0fa: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eb100: mov dword ptr [edx + 0x2d4], 0xffffffff */ W32((u32)(r_edx+0x2d4u), 0xffffffffu);
    /* 005eb10a: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eb110: mov dword ptr [eax + 0x2d8], 0xffffffff */ W32((u32)(r_eax+0x2d8u), 0xffffffffu);
L_005eb11a:; BB(0x005eb11a);
    /* 005eb11a: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005eb120: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005eb121: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005eb122: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb124: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb125: ret 8 */ FN_RET(0x005ea970); r_esp += 12; return;
}

void f_005eb128(void) /* FUN_005eb128 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb128);
    /* 005eb128: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb129: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb12b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb12e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005eb12f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005eb130: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005eb133: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb136: mov dword ptr [eax], 0x63c09c */ W32((u32)(r_eax), 0x63c09cu);
    /* 005eb13c: mov dword ptr [0x6fc470], 0 */ W32((u32)(0x6fc470u), 0x0u);
    /* 005eb146: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb149: call 0x5ecdb3 */ r_esp -= 4; W32(r_esp, 0x5eb14eu); f_005ecdb3();
    /* 005eb14e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb150: je 0x5eb174 */ if (fZ) goto L_005eb174;
L_005eb152:; BB(0x005eb152);
    /* 005eb152: cmp dword ptr [0x6fc410], 0 */ {  u32 a = R32((u32)(0x6fc410u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb159: je 0x5eb16c */ if (fZ) goto L_005eb16c;
L_005eb15b:; BB(0x005eb15b);
    /* 005eb15b: call dword ptr [0x6fc410] */ { u32 t = R32((u32)(0x6fc410u)); r_esp -= 4; W32(r_esp, 0x5eb161u); call_ind(t); }
    /* 005eb161: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 005eb166: call dword ptr [0x633090] */ { u32 t = R32((u32)(0x633090u)); r_esp -= 4; W32(r_esp, 0x5eb16cu); call_ind(t); }
L_005eb16c:; BB(0x005eb16c);
    /* 005eb16c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb16f: call 0x5eb4bf */ r_esp -= 4; W32(r_esp, 0x5eb174u); f_005eb4bf();
L_005eb174:; BB(0x005eb174);
    /* 005eb174: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb177: cmp dword ptr [ecx + 0x29c], 0 */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb17e: je 0x5eb198 */ if (fZ) goto L_005eb198;
L_005eb180:; BB(0x005eb180);
    /* 005eb180: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb183: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 005eb189: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005eb18c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb18f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb190: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5eb195u); f_0048ac1b();
    /* 005eb195: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005eb198:; BB(0x005eb198);
    /* 005eb198: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb19b: call 0x5ebf22 */ r_esp -= 4; W32(r_esp, 0x5eb1a0u); f_005ebf22();
    /* 005eb1a0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb1a3: cmp dword ptr [edx + 0x274], 0 */ {  u32 a = R32((u32)(r_edx+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb1aa: je 0x5eb200 */ if (fZ) goto L_005eb200;
L_005eb1ac:; BB(0x005eb1ac);
    /* 005eb1ac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb1af: mov ecx, dword ptr [eax + 0x274] */ r_ecx = R32((u32)(r_eax+0x274u));
    /* 005eb1b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb1b8: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005eb1be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005eb1c0: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5eb1c3u); call_ind(t); }
    /* 005eb1c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb1c6: mov ecx, dword ptr [eax + 0x274] */ r_ecx = R32((u32)(r_eax+0x274u));
    /* 005eb1cc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005eb1cf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eb1d2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005eb1d5: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb1d9: je 0x5eb1ec */ if (fZ) goto L_005eb1ec;
L_005eb1db:; BB(0x005eb1db);
    /* 005eb1db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb1dd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb1e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005eb1e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb1e5: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5eb1e7u); call_ind(t); }
    /* 005eb1e7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005eb1ea: jmp 0x5eb1f3 */ goto L_005eb1f3;
L_005eb1ec:; BB(0x005eb1ec);
    /* 005eb1ec: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005eb1f3:; BB(0x005eb1f3);
    /* 005eb1f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb1f6: mov dword ptr [eax + 0x274], 0 */ W32((u32)(r_eax+0x274u), 0x0u);
L_005eb200:; BB(0x005eb200);
    /* 005eb200: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eb206: jmp 0x5eb214 */ goto L_005eb214;
L_005eb208:; BB(0x005eb208);
    /* 005eb208: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005eb20c: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005eb210: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_005eb214:; BB(0x005eb214);
    /* 005eb214: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005eb218: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eb21b: jge 0x5eb24e */ if ((fS==fO)) goto L_005eb24e;
L_005eb21d:; BB(0x005eb21d);
    /* 005eb21d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005eb221: imul eax, eax, 0x1c00 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1c00u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005eb227: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005eb22d: lea edi, [ecx + eax + 0x48] */ r_edi = (u32)(r_ecx+r_eax+0x48u);
    /* 005eb231: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005eb235: imul edx, edx, 0x1c00 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1c00u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005eb23b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb23e: lea esi, [eax + edx + 0x318] */ r_esi = (u32)(r_eax+r_edx+0x318u);
    /* 005eb245: mov ecx, 0x700 */ r_ecx = 0x700u;
    /* 005eb24a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005eb24c: jmp 0x5eb208 */ goto L_005eb208;
L_005eb24e:; BB(0x005eb24e);
    /* 005eb24e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb251: cmp dword ptr [ecx + 0x304], 0 */ {  u32 a = R32((u32)(r_ecx+0x304u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb258: je 0x5eb268 */ if (fZ) goto L_005eb268;
L_005eb25a:; BB(0x005eb25a);
    /* 005eb25a: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005eb260: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005eb263: call 0x620188 */ r_esp -= 4; W32(r_esp, 0x5eb268u); f_00620188();
L_005eb268:; BB(0x005eb268);
    /* 005eb268: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb26b: add ecx, 0x2b0 */ {  u32 a = r_ecx; u32 b = 0x2b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb271: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x5eb276u); f_005dd2d3();
    /* 005eb276: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb279: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5eb27eu); f_005dfc0f();
    /* 005eb27e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005eb27f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005eb280: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb282: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb283: ret  */ FN_RET(0x005eb128); r_esp += 4; return;
}

void f_005eb284(void) /* FUN_005eb284 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb284);
    /* 005eb284: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb285: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb287: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb28a: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005eb28d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb290: call 0x5ed5c3 */ r_esp -= 4; W32(r_esp, 0x5eb295u); f_005ed5c3();
    /* 005eb295: mov word ptr [ebp - 0x44], 0 */ W16((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005eb29b: jmp 0x5eb2a9 */ goto L_005eb2a9;
L_005eb29d:; BB(0x005eb29d);
    /* 005eb29d: mov ax, word ptr [ebp - 0x44] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffbcu))) & 0xffffu);
    /* 005eb2a1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005eb2a5: mov word ptr [ebp - 0x44], ax */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_eax);
L_005eb2a9:; BB(0x005eb2a9);
    /* 005eb2a9: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 005eb2ad: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eb2b0: jge 0x5eb2c6 */ if ((fS==fO)) goto L_005eb2c6;
L_005eb2b2:; BB(0x005eb2b2);
    /* 005eb2b2: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 005eb2b6: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb2b9: mov dword ptr [eax + edx*4 + 0x234], 0 */ W32((u32)(r_eax+r_edx*4+0x234u), 0x0u);
    /* 005eb2c4: jmp 0x5eb29d */ goto L_005eb29d;
L_005eb2c6:; BB(0x005eb2c6);
    /* 005eb2c6: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb2c9: mov dword ptr [ecx + 0x2e0], 0 */ W32((u32)(r_ecx+0x2e0u), 0x0u);
    /* 005eb2d3: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb2d6: mov dword ptr [edx + 0x2dc], 0 */ W32((u32)(r_edx+0x2dcu), 0x0u);
    /* 005eb2e0: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb2e3: mov dword ptr [eax + 0x300], 0xffffffff */ W32((u32)(r_eax+0x300u), 0xffffffffu);
    /* 005eb2ed: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb2f0: mov dword ptr [ecx + 0x2ac], 0 */ W32((u32)(r_ecx+0x2acu), 0x0u);
    /* 005eb2fa: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb2fd: call 0x5eb613 */ r_esp -= 4; W32(r_esp, 0x5eb302u); f_005eb613();
    /* 005eb302: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb305: mov dword ptr [edx + 0x10], 0xffffffff */ W32((u32)(r_edx+0x10u), 0xffffffffu);
    /* 005eb30c: push 0x6f6ec8 */ { u32 v = 0x6f6ec8u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb311: mov eax, dword ptr [0x687130] */ r_eax = R32((u32)(0x687130u));
    /* 005eb316: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb317: push 0x699fec */ { u32 v = 0x699fecu; r_esp -= 4; W32(r_esp, v); }
    /* 005eb31c: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005eb31f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb320: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5eb325u); f_00624050();
    /* 005eb325: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb328: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb32b: mov dword ptr [edx + 0x2cc], 0 */ W32((u32)(r_edx+0x2ccu), 0x0u);
    /* 005eb335: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb338: mov dword ptr [eax + 0x2d0], 0 */ W32((u32)(r_eax+0x2d0u), 0x0u);
    /* 005eb342: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb345: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005eb34c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb34f: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005eb356: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb359: mov dword ptr [eax + 0x2e8], 0xffffffff */ W32((u32)(r_eax+0x2e8u), 0xffffffffu);
    /* 005eb363: mov word ptr [ebp - 0x44], 0 */ W16((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005eb369: jmp 0x5eb377 */ goto L_005eb377;
L_005eb36b:; BB(0x005eb36b);
    /* 005eb36b: mov cx, word ptr [ebp - 0x44] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffbcu))) & 0xffffu);
    /* 005eb36f: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005eb373: mov word ptr [ebp - 0x44], cx */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_ecx);
L_005eb377:; BB(0x005eb377);
    /* 005eb377: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 005eb37b: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eb37e: jge 0x5eb3e8 */ if ((fS==fO)) goto L_005eb3e8;
L_005eb380:; BB(0x005eb380);
    /* 005eb380: movsx eax, word ptr [ebp - 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 005eb384: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb387: mov dword ptr [ecx + eax*4 + 0x214], 0 */ W32((u32)(r_ecx+r_eax*4+0x214u), 0x0u);
    /* 005eb392: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 005eb396: shl edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005eb399: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb39c: mov byte ptr [eax + edx + 0x14], 0 */ W8((u32)(r_eax+r_edx+0x14u), 0x0u);
    /* 005eb3a1: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 005eb3a5: shl ecx, 6 */ { u32 c = (6u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005eb3a8: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb3ab: mov byte ptr [edx + ecx + 0x34], 0 */ W8((u32)(r_edx+r_ecx+0x34u), 0x0u);
    /* 005eb3b0: movsx eax, word ptr [ebp - 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 005eb3b4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb3b7: mov dword ptr [ecx + eax*4 + 0x254], 0 */ W32((u32)(r_ecx+r_eax*4+0x254u), 0x0u);
    /* 005eb3c2: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 005eb3c6: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb3c9: mov dword ptr [eax + edx*4 + 0x234], 0 */ W32((u32)(r_eax+r_edx*4+0x234u), 0x0u);
    /* 005eb3d4: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 005eb3d8: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb3db: mov dword ptr [edx + ecx*4 + 0x278], 0 */ W32((u32)(r_edx+r_ecx*4+0x278u), 0x0u);
    /* 005eb3e6: jmp 0x5eb36b */ goto L_005eb36b;
L_005eb3e8:; BB(0x005eb3e8);
    /* 005eb3e8: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb3eb: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005eb3f2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb3f5: mov dword ptr [ecx + 0x29c], 0 */ W32((u32)(r_ecx+0x29cu), 0x0u);
    /* 005eb3ff: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb402: mov dword ptr [edx + 0x2a0], 0 */ W32((u32)(r_edx+0x2a0u), 0x0u);
    /* 005eb40c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb40f: mov dword ptr [eax + 0x2a4], 0 */ W32((u32)(r_eax+0x2a4u), 0x0u);
    /* 005eb419: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb41c: mov dword ptr [ecx + 0x298], 0 */ W32((u32)(r_ecx+0x298u), 0x0u);
    /* 005eb426: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb429: mov dword ptr [edx + 0x308], 0 */ W32((u32)(r_edx+0x308u), 0x0u);
    /* 005eb433: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb436: mov dword ptr [eax + 0x30c], 0 */ W32((u32)(r_eax+0x30cu), 0x0u);
    /* 005eb440: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb443: mov dword ptr [ecx + 0x310], 0 */ W32((u32)(r_ecx+0x310u), 0x0u);
    /* 005eb44d: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb44f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb450: ret  */ FN_RET(0x005eb284); r_esp += 4; return;
}

void f_005eb451(void) /* FUN_005eb451 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb451);
    /* 005eb451: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb452: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb454: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb457: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005eb45a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb45d: cmp dword ptr [eax + 0x274], 0 */ {  u32 a = R32((u32)(r_eax+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb464: je 0x5eb4ad */ if (fZ) goto L_005eb4ad;
L_005eb466:; BB(0x005eb466);
    /* 005eb466: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb469: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005eb46f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb472: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005eb478: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005eb47a: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5eb47du); call_ind(t); }
    /* 005eb47d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb480: mov ecx, dword ptr [eax + 0x274] */ r_ecx = R32((u32)(r_eax+0x274u));
    /* 005eb486: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005eb489: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb48c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005eb48f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb493: je 0x5eb4a6 */ if (fZ) goto L_005eb4a6;
L_005eb495:; BB(0x005eb495);
    /* 005eb495: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb497: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb49a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005eb49c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb49f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5eb4a1u); call_ind(t); }
    /* 005eb4a1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005eb4a4: jmp 0x5eb4ad */ goto L_005eb4ad;
L_005eb4a6:; BB(0x005eb4a6);
    /* 005eb4a6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005eb4ad:; BB(0x005eb4ad);
    /* 005eb4ad: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb4b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eb4b3: mov dword ptr [eax + 0x274], ecx */ W32((u32)(r_eax+0x274u), r_ecx);
    /* 005eb4b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb4bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb4bc: ret 4 */ FN_RET(0x005eb451); r_esp += 8; return;
}

void f_005eb4bf(void) /* FUN_005eb4bf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb4bf);
    /* 005eb4bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4c0: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb4c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4c3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb4c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb4c9: cmp dword ptr [eax + 0x2c8], 0 */ {  u32 a = R32((u32)(r_eax+0x2c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb4d0: je 0x5eb4e2 */ if (fZ) goto L_005eb4e2;
L_005eb4d2:; BB(0x005eb4d2);
    /* 005eb4d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb4d5: mov edx, dword ptr [ecx + 0x2c8] */ r_edx = R32((u32)(r_ecx+0x2c8u));
    /* 005eb4db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4dc: call dword ptr [0x633054] */ { u32 t = R32((u32)(0x633054u)); r_esp -= 4; W32(r_esp, 0x5eb4e2u); call_ind(t); }
L_005eb4e2:; BB(0x005eb4e2);
    /* 005eb4e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb4e5: cmp dword ptr [eax + 0x2c4], 0 */ {  u32 a = R32((u32)(r_eax+0x2c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb4ec: je 0x5eb4fe */ if (fZ) goto L_005eb4fe;
L_005eb4ee:; BB(0x005eb4ee);
    /* 005eb4ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb4f1: mov edx, dword ptr [ecx + 0x2c4] */ r_edx = R32((u32)(r_ecx+0x2c4u));
    /* 005eb4f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4f8: call dword ptr [0x633054] */ { u32 t = R32((u32)(0x633054u)); r_esp -= 4; W32(r_esp, 0x5eb4feu); call_ind(t); }
L_005eb4fe:; BB(0x005eb4fe);
    /* 005eb4fe: mov dword ptr [0x6fc408], 0 */ W32((u32)(0x6fc408u), 0x0u);
    /* 005eb508: mov dword ptr [0x6fc40c], 0 */ W32((u32)(0x6fc40cu), 0x0u);
    /* 005eb512: mov dword ptr [0x6fc410], 0 */ W32((u32)(0x6fc410u), 0x0u);
    /* 005eb51c: mov dword ptr [0x6fc414], 0 */ W32((u32)(0x6fc414u), 0x0u);
    /* 005eb526: mov dword ptr [0x6fc418], 0 */ W32((u32)(0x6fc418u), 0x0u);
    /* 005eb530: mov dword ptr [0x6fc41c], 0 */ W32((u32)(0x6fc41cu), 0x0u);
    /* 005eb53a: mov dword ptr [0x6fc420], 0 */ W32((u32)(0x6fc420u), 0x0u);
    /* 005eb544: mov dword ptr [0x6fc424], 0 */ W32((u32)(0x6fc424u), 0x0u);
    /* 005eb54e: mov dword ptr [0x6fc428], 0 */ W32((u32)(0x6fc428u), 0x0u);
    /* 005eb558: mov dword ptr [0x6fc42c], 0 */ W32((u32)(0x6fc42cu), 0x0u);
    /* 005eb562: mov dword ptr [0x6fc430], 0 */ W32((u32)(0x6fc430u), 0x0u);
    /* 005eb56c: mov dword ptr [0x6fc434], 0 */ W32((u32)(0x6fc434u), 0x0u);
    /* 005eb576: mov dword ptr [0x6fc438], 0 */ W32((u32)(0x6fc438u), 0x0u);
    /* 005eb580: mov dword ptr [0x6fc43c], 0 */ W32((u32)(0x6fc43cu), 0x0u);
    /* 005eb58a: mov dword ptr [0x6fc444], 0 */ W32((u32)(0x6fc444u), 0x0u);
    /* 005eb594: mov dword ptr [0x6fc440], 0 */ W32((u32)(0x6fc440u), 0x0u);
    /* 005eb59e: mov dword ptr [0x6fc448], 0 */ W32((u32)(0x6fc448u), 0x0u);
    /* 005eb5a8: mov dword ptr [0x6fc44c], 0 */ W32((u32)(0x6fc44cu), 0x0u);
    /* 005eb5b2: mov dword ptr [0x6fc450], 0 */ W32((u32)(0x6fc450u), 0x0u);
    /* 005eb5bc: mov dword ptr [0x6fc454], 0 */ W32((u32)(0x6fc454u), 0x0u);
    /* 005eb5c6: mov dword ptr [0x6fc458], 0 */ W32((u32)(0x6fc458u), 0x0u);
    /* 005eb5d0: mov dword ptr [0x6fc45c], 0 */ W32((u32)(0x6fc45cu), 0x0u);
    /* 005eb5da: mov dword ptr [0x6fc460], 0 */ W32((u32)(0x6fc460u), 0x0u);
    /* 005eb5e4: mov dword ptr [0x6fc464], 0 */ W32((u32)(0x6fc464u), 0x0u);
    /* 005eb5ee: mov dword ptr [0x6fc468], 0 */ W32((u32)(0x6fc468u), 0x0u);
    /* 005eb5f8: mov dword ptr [0x6fc46c], 0 */ W32((u32)(0x6fc46cu), 0x0u);
    /* 005eb602: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb605: mov dword ptr [eax + 0x2a8], 0 */ W32((u32)(r_eax+0x2a8u), 0x0u);
    /* 005eb60f: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb611: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb612: ret  */ FN_RET(0x005eb4bf); r_esp += 4; return;
}

void f_005eb613(void) /* FUN_005eb613 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb613);
    /* 005eb613: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb614: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb616: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb617: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb61a: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5eb620u); call_ind(t); }
    /* 005eb620: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb623: mov dword ptr [ecx + 0x2ec], eax */ W32((u32)(r_ecx+0x2ecu), r_eax);
    /* 005eb629: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5eb62fu); call_ind(t); }
    /* 005eb62f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb632: mov dword ptr [edx + 0x2f0], eax */ W32((u32)(r_edx+0x2f0u), r_eax);
    /* 005eb638: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5eb63eu); call_ind(t); }
    /* 005eb63e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb641: mov dword ptr [ecx + 0x2f4], eax */ W32((u32)(r_ecx+0x2f4u), r_eax);
    /* 005eb647: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5eb64du); call_ind(t); }
    /* 005eb64d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb650: mov dword ptr [edx + 0x2f8], eax */ W32((u32)(r_edx+0x2f8u), r_eax);
    /* 005eb656: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5eb65cu); call_ind(t); }
    /* 005eb65c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb65f: mov dword ptr [ecx + 0x2fc], eax */ W32((u32)(r_ecx+0x2fcu), r_eax);
    /* 005eb665: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb667: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb668: ret  */ FN_RET(0x005eb613); r_esp += 4; return;
}

void f_005eb669(void) /* FUN_005eb669 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb669);
    /* 005eb669: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb66a: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb66c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb66f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005eb672: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eb679: jmp 0x5eb684 */ goto L_005eb684;
L_005eb67b:; BB(0x005eb67b);
    /* 005eb67b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb67e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eb681: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005eb684:; BB(0x005eb684);
    /* 005eb684: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb687: add ecx, 0x2b0 */ {  u32 a = r_ecx; u32 b = 0x2b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb68d: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5eb692u); f_005dd4d2();
    /* 005eb692: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eb695: jge 0x5eb6d0 */ if ((fS==fO)) goto L_005eb6d0;
L_005eb697:; BB(0x005eb697);
    /* 005eb697: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb69a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb69b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb69e: add ecx, 0x2b0 */ {  u32 a = r_ecx; u32 b = 0x2b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb6a4: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5eb6a9u); f_005dd560();
    /* 005eb6a9: cmp dword ptr [eax + 0xc], 0x10 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb6ad: je 0x5eb6c7 */ if (fZ) goto L_005eb6c7;
L_005eb6af:; BB(0x005eb6af);
    /* 005eb6af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb6b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb6b3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb6b6: add ecx, 0x2b0 */ {  u32 a = r_ecx; u32 b = 0x2b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb6bc: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5eb6c1u); f_005dd560();
    /* 005eb6c1: cmp dword ptr [eax + 0xc], 0x11 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb6c5: jne 0x5eb6ce */ if (!fZ) goto L_005eb6ce;
L_005eb6c7:; BB(0x005eb6c7);
    /* 005eb6c7: mov eax, 1 */ r_eax = 0x1u;
    /* 005eb6cc: jmp 0x5eb6d2 */ goto L_005eb6d2;
L_005eb6ce:; BB(0x005eb6ce);
    /* 005eb6ce: jmp 0x5eb67b */ goto L_005eb67b;
L_005eb6d0:; BB(0x005eb6d0);
    /* 005eb6d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005eb6d2:; BB(0x005eb6d2);
    /* 005eb6d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb6d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb6d5: ret  */ FN_RET(0x005eb669); r_esp += 4; return;
}

void f_005eb6d6(void) /* FUN_005eb6d6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb6d6);
    /* 005eb6d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb6d7: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb6d9: sub esp, 0x44c */ {  u32 a = r_esp; u32 b = 0x44cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb6df: mov dword ptr [ebp - 0x43c], ecx */ W32((u32)(r_ebp+0xfffffbc4u), r_ecx);
    /* 005eb6e5: mov ecx, dword ptr [ebp - 0x43c] */ r_ecx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005eb6eb: call 0x5ecdb3 */ r_esp -= 4; W32(r_esp, 0x5eb6f0u); f_005ecdb3();
    /* 005eb6f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb6f2: jne 0x5eb6f9 */ if (!fZ) goto L_005eb6f9;
L_005eb6f4:; BB(0x005eb6f4);
    /* 005eb6f4: jmp 0x5ebb4c */ goto L_005ebb4c;
L_005eb6f9:; BB(0x005eb6f9);
    /* 005eb6f9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005eb6ff: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5eb704u); f_005d9e23();
    /* 005eb704: mov ecx, dword ptr [0x6fc478] */ r_ecx = R32((u32)(0x6fc478u));
    /* 005eb70a: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb70d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eb70f: jg 0x5eb716 */ if ((!fZ&&fS==fO)) goto L_005eb716;
L_005eb711:; BB(0x005eb711);
    /* 005eb711: jmp 0x5ebb4c */ goto L_005ebb4c;
L_005eb716:; BB(0x005eb716);
    /* 005eb716: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005eb71c: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5eb721u); f_005d9e23();
    /* 005eb721: mov dword ptr [0x6fc478], eax */ W32((u32)(0x6fc478u), r_eax);
L_005eb726:; BB(0x005eb726);
    /* 005eb726: call dword ptr [0x6fc418] */ { u32 t = R32((u32)(0x6fc418u)); r_esp -= 4; W32(r_esp, 0x5eb72cu); call_ind(t); }
    /* 005eb72c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005eb72f: cmp dword ptr [ebp - 4], -2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb733: jne 0x5eb73a */ if (!fZ) goto L_005eb73a;
L_005eb735:; BB(0x005eb735);
    /* 005eb735: jmp 0x5eba32 */ goto L_005eba32;
L_005eb73a:; BB(0x005eb73a);
    /* 005eb73a: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb73e: jne 0x5eb745 */ if (!fZ) goto L_005eb745;
L_005eb740:; BB(0x005eb740);
    /* 005eb740: jmp 0x5eba32 */ goto L_005eba32;
L_005eb745:; BB(0x005eb745);
    /* 005eb745: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb749: je 0x5eb750 */ if (fZ) goto L_005eb750;
L_005eb74b:; BB(0x005eb74b);
    /* 005eb74b: jmp 0x5eba32 */ goto L_005eba32;
L_005eb750:; BB(0x005eb750);
    /* 005eb750: mov dword ptr [ebp - 0x41c], 0 */ W32((u32)(r_ebp+0xfffffbe4u), 0x0u);
    /* 005eb75a: jmp 0x5eb76b */ goto L_005eb76b;
L_005eb75c:; BB(0x005eb75c);
    /* 005eb75c: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005eb762: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eb765: mov dword ptr [ebp - 0x41c], edx */ W32((u32)(r_ebp+0xfffffbe4u), r_edx);
L_005eb76b:; BB(0x005eb76b);
    /* 005eb76b: cmp dword ptr [ebp - 0x41c], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eb772: jge 0x5eba2d */ if ((fS==fO)) goto L_005eba2d;
L_005eb778:; BB(0x005eb778);
    /* 005eb778: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005eb77e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb77f: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb784: lea ecx, [ebp - 0x410] */ r_ecx = (u32)(r_ebp+0xfffffbf0u);
    /* 005eb78a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb78b: call dword ptr [0x6fc41c] */ { u32 t = R32((u32)(0x6fc41cu)); r_esp -= 4; W32(r_esp, 0x5eb791u); call_ind(t); }
    /* 005eb791: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb794: mov dword ptr [ebp - 0x420], eax */ W32((u32)(r_ebp+0xfffffbe0u), r_eax);
    /* 005eb79a: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 005eb7a0: mov dword ptr [ebp - 0x418], edx */ W32((u32)(r_ebp+0xfffffbe8u), r_edx);
    /* 005eb7a6: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 005eb7ac: mov dword ptr [ebp - 0x440], eax */ W32((u32)(r_ebp+0xfffffbc0u), r_eax);
    /* 005eb7b2: cmp dword ptr [ebp - 0x440], -2 */ {  u32 a = R32((u32)(r_ebp+0xfffffbc0u)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb7b9: je 0x5eb7cb */ if (fZ) goto L_005eb7cb;
L_005eb7bb:; BB(0x005eb7bb);
    /* 005eb7bb: cmp dword ptr [ebp - 0x440], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffbc0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb7c2: je 0x5eb7c6 */ if (fZ) goto L_005eb7c6;
L_005eb7c4:; BB(0x005eb7c4);
    /* 005eb7c4: jmp 0x5eb7d0 */ goto L_005eb7d0;
L_005eb7c6:; BB(0x005eb7c6);
    /* 005eb7c6: jmp 0x5eba28 */ goto L_005eba28;
L_005eb7cb:; BB(0x005eb7cb);
    /* 005eb7cb: jmp 0x5eba28 */ goto L_005eba28;
L_005eb7d0:; BB(0x005eb7d0);
    /* 005eb7d0: mov ecx, dword ptr [ebp - 0x43c] */ r_ecx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005eb7d6: mov edx, dword ptr [ecx + 0x2d0] */ r_edx = R32((u32)(r_ecx+0x2d0u));
    /* 005eb7dc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eb7df: mov eax, dword ptr [ebp - 0x43c] */ r_eax = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005eb7e5: mov dword ptr [eax + 0x2d0], edx */ W32((u32)(r_eax+0x2d0u), r_edx);
    /* 005eb7eb: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005eb7f1: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb7f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb7f5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5eb7fau); f_0048ab58();
    /* 005eb7fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb7fd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005eb800: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005eb806: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb807: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005eb80d: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eb810: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb811: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eb814: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb815: call dword ptr [0x6fc420] */ { u32 t = R32((u32)(0x6fc420u)); r_esp -= 4; W32(r_esp, 0x5eb81bu); call_ind(t); }
    /* 005eb81b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb81e: mov dword ptr [ebp - 0x424], eax */ W32((u32)(r_ebp+0xfffffbdcu), r_eax);
    /* 005eb824: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005eb82a: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eb82d: cmp dword ptr [ebp - 0x424], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb833: jne 0x5eb9f5 */ if (!fZ) goto L_005eb9f5;
L_005eb839:; BB(0x005eb839);
    /* 005eb839: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 005eb83f: cmp eax, dword ptr [ebp - 0x424] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffbdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb845: jne 0x5eb9f5 */ if (!fZ) goto L_005eb9f5;
L_005eb84b:; BB(0x005eb84b);
    /* 005eb84b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eb84e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005eb850: mov dl, byte ptr [ecx + 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4u))) & 0xffu);
    /* 005eb853: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005eb856: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eb859: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eb85c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005eb85f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb861: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5eb866u); f_0048ab58();
    /* 005eb866: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb869: mov dword ptr [ebp - 0x42c], eax */ W32((u32)(r_ebp+0xfffffbd4u), r_eax);
    /* 005eb86f: cmp dword ptr [ebp - 0x42c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb876: je 0x5eb89d */ if (fZ) goto L_005eb89d;
L_005eb878:; BB(0x005eb878);
    /* 005eb878: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 005eb87e: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5eb883u); f_005dfbf0();
    /* 005eb883: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 005eb889: mov dword ptr [ecx], 0x63c0bc */ W32((u32)(r_ecx), 0x63c0bcu);
    /* 005eb88f: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 005eb895: mov dword ptr [ebp - 0x444], edx */ W32((u32)(r_ebp+0xfffffbbcu), r_edx);
    /* 005eb89b: jmp 0x5eb8a7 */ goto L_005eb8a7;
L_005eb89d:; BB(0x005eb89d);
    /* 005eb89d: mov dword ptr [ebp - 0x444], 0 */ W32((u32)(r_ebp+0xfffffbbcu), 0x0u);
L_005eb8a7:; BB(0x005eb8a7);
    /* 005eb8a7: mov eax, dword ptr [ebp - 0x444] */ r_eax = R32((u32)(r_ebp+0xfffffbbcu));
    /* 005eb8ad: mov dword ptr [ebp - 0x414], eax */ W32((u32)(r_ebp+0xfffffbecu), r_eax);
    /* 005eb8b3: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 005eb8b9: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005eb8bf: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005eb8c2: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 005eb8c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb8cb: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 005eb8ce: cmp dword ptr [ebp - 0x418], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb8d5: je 0x5eb90e */ if (fZ) goto L_005eb90e;
L_005eb8d7:; BB(0x005eb8d7);
    /* 005eb8d7: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005eb8dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8de: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5eb8e3u); f_0048ab58();
    /* 005eb8e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb8e6: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 005eb8ec: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 005eb8ef: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005eb8f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb8f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8fa: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 005eb900: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005eb903: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb904: call 0x625050 */ r_esp -= 4; W32(r_esp, 0x5eb909u); f_00625050();
    /* 005eb909: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb90c: jmp 0x5eb91b */ goto L_005eb91b;
L_005eb90e:; BB(0x005eb90e);
    /* 005eb90e: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 005eb914: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
L_005eb91b:; BB(0x005eb91b);
    /* 005eb91b: mov word ptr [ebp - 0x428], 0 */ W16((u32)(r_ebp+0xfffffbd8u), 0x0u);
    /* 005eb924: mov ecx, dword ptr [ebp - 0x43c] */ r_ecx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005eb92a: cmp dword ptr [ecx + 0x274], 0 */ {  u32 a = R32((u32)(r_ecx+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb931: je 0x5eb97f */ if (fZ) goto L_005eb97f;
L_005eb933:; BB(0x005eb933);
    /* 005eb933: mov edx, dword ptr [ebp - 0x43c] */ r_edx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005eb939: mov ecx, dword ptr [edx + 0x274] */ r_ecx = R32((u32)(r_edx+0x274u));
    /* 005eb93f: mov eax, dword ptr [ebp - 0x43c] */ r_eax = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005eb945: mov edx, dword ptr [eax + 0x274] */ r_edx = R32((u32)(r_eax+0x274u));
    /* 005eb94b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005eb94d: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5eb950u); call_ind(t); }
    /* 005eb950: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb952: je 0x5eb97f */ if (fZ) goto L_005eb97f;
L_005eb954:; BB(0x005eb954);
    /* 005eb954: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 005eb95a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb95b: mov edx, dword ptr [ebp - 0x43c] */ r_edx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005eb961: mov ecx, dword ptr [edx + 0x274] */ r_ecx = R32((u32)(r_edx+0x274u));
    /* 005eb967: mov eax, dword ptr [ebp - 0x43c] */ r_eax = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005eb96d: mov edx, dword ptr [eax + 0x274] */ r_edx = R32((u32)(r_eax+0x274u));
    /* 005eb973: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005eb975: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5eb978u); call_ind(t); }
    /* 005eb978: mov word ptr [ebp - 0x428], ax */ W16((u32)(r_ebp+0xfffffbd8u), (u16)r_eax);
L_005eb97f:; BB(0x005eb97f);
    /* 005eb97f: movsx ecx, word ptr [ebp - 0x428] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbd8u));
    /* 005eb986: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb988: jne 0x5eb9a4 */ if (!fZ) goto L_005eb9a4;
L_005eb98a:; BB(0x005eb98a);
    /* 005eb98a: mov edx, dword ptr [ebp - 0x414] */ r_edx = R32((u32)(r_ebp+0xfffffbecu));
    /* 005eb990: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb991: mov ecx, dword ptr [ebp - 0x43c] */ r_ecx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005eb997: add ecx, 0x2b0 */ {  u32 a = r_ecx; u32 b = 0x2b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb99d: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x5eb9a2u); f_005dd425();
    /* 005eb9a2: jmp 0x5eb9e9 */ goto L_005eb9e9;
L_005eb9a4:; BB(0x005eb9a4);
    /* 005eb9a4: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 005eb9aa: mov dword ptr [ebp - 0x434], eax */ W32((u32)(r_ebp+0xfffffbccu), r_eax);
    /* 005eb9b0: mov ecx, dword ptr [ebp - 0x434] */ r_ecx = R32((u32)(r_ebp+0xfffffbccu));
    /* 005eb9b6: mov dword ptr [ebp - 0x430], ecx */ W32((u32)(r_ebp+0xfffffbd0u), r_ecx);
    /* 005eb9bc: cmp dword ptr [ebp - 0x430], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb9c3: je 0x5eb9df */ if (fZ) goto L_005eb9df;
L_005eb9c5:; BB(0x005eb9c5);
    /* 005eb9c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb9c7: mov edx, dword ptr [ebp - 0x430] */ r_edx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 005eb9cd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005eb9cf: mov ecx, dword ptr [ebp - 0x430] */ r_ecx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 005eb9d5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5eb9d7u); call_ind(t); }
    /* 005eb9d7: mov dword ptr [ebp - 0x448], eax */ W32((u32)(r_ebp+0xfffffbb8u), r_eax);
    /* 005eb9dd: jmp 0x5eb9e9 */ goto L_005eb9e9;
L_005eb9df:; BB(0x005eb9df);
    /* 005eb9df: mov dword ptr [ebp - 0x448], 0 */ W32((u32)(r_ebp+0xfffffbb8u), 0x0u);
L_005eb9e9:; BB(0x005eb9e9);
    /* 005eb9e9: mov dword ptr [ebp - 0x41c], 8 */ W32((u32)(r_ebp+0xfffffbe4u), 0x8u);
    /* 005eb9f3: jmp 0x5eba10 */ goto L_005eba10;
L_005eb9f5:; BB(0x005eb9f5);
    /* 005eb9f5: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb9fa: mov ecx, dword ptr [0x68712c] */ r_ecx = R32((u32)(0x68712cu));
    /* 005eba00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eba01: push 0x699ff4 */ { u32 v = 0x699ff4u; r_esp -= 4; W32(r_esp, v); }
    /* 005eba06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eba08: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5eba0du); f_0060f9f3();
    /* 005eba0d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005eba10:; BB(0x005eba10);
    /* 005eba10: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eba13: mov dword ptr [ebp - 0x438], edx */ W32((u32)(r_ebp+0xfffffbc8u), r_edx);
    /* 005eba19: mov eax, dword ptr [ebp - 0x438] */ r_eax = R32((u32)(r_ebp+0xfffffbc8u));
    /* 005eba1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eba20: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5eba25u); f_0048ac1b();
    /* 005eba25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005eba28:; BB(0x005eba28);
    /* 005eba28: jmp 0x5eb75c */ goto L_005eb75c;
L_005eba2d:; BB(0x005eba2d);
    /* 005eba2d: jmp 0x5eb726 */ goto L_005eb726;
L_005eba32:; BB(0x005eba32);
    /* 005eba32: mov ecx, dword ptr [ebp - 0x43c] */ r_ecx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005eba38: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005eba3e: mov edx, dword ptr [ebp - 0x43c] */ r_edx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005eba44: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005eba4a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005eba4c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5eba4fu); call_ind(t); }
    /* 005eba4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eba51: je 0x5ebb20 */ if (fZ) goto L_005ebb20;
L_005eba57:; BB(0x005eba57);
    /* 005eba57: mov ecx, dword ptr [ebp - 0x43c] */ r_ecx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005eba5d: call 0x5ecec1 */ r_esp -= 4; W32(r_esp, 0x5eba62u); f_005ecec1();
    /* 005eba62: mov dword ptr [ebp - 0x44c], eax */ W32((u32)(r_ebp+0xfffffbb4u), r_eax);
    /* 005eba68: cmp dword ptr [ebp - 0x44c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eba6f: je 0x5ebae0 */ if (fZ) goto L_005ebae0;
L_005eba71:; BB(0x005eba71);
    /* 005eba71: cmp dword ptr [ebp - 0x44c], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffbb4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eba78: je 0x5ebade */ if (fZ) goto L_005ebade;
L_005eba7a:; BB(0x005eba7a);
    /* 005eba7a: cmp dword ptr [ebp - 0x44c], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffbb4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eba81: je 0x5eba88 */ if (fZ) goto L_005eba88;
L_005eba83:; BB(0x005eba83);
    /* 005eba83: jmp 0x5ebb20 */ goto L_005ebb20;
L_005eba88:; BB(0x005eba88);
    /* 005eba88: mov dword ptr [ebp - 0x41c], 0 */ W32((u32)(r_ebp+0xfffffbe4u), 0x0u);
    /* 005eba92: jmp 0x5ebaa3 */ goto L_005ebaa3;
L_005eba94:; BB(0x005eba94);
    /* 005eba94: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005eba9a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eba9d: mov dword ptr [ebp - 0x41c], eax */ W32((u32)(r_ebp+0xfffffbe4u), r_eax);
L_005ebaa3:; BB(0x005ebaa3);
    /* 005ebaa3: cmp dword ptr [ebp - 0x41c], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebaaa: jge 0x5ebadc */ if ((fS==fO)) goto L_005ebadc;
L_005ebaac:; BB(0x005ebaac);
    /* 005ebaac: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005ebab2: mov edx, dword ptr [ebp - 0x43c] */ r_edx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005ebab8: cmp dword ptr [edx + ecx*4 + 0x214], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x214u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebac0: je 0x5ebada */ if (fZ) goto L_005ebada;
L_005ebac2:; BB(0x005ebac2);
    /* 005ebac2: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005ebac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebac9: mov ecx, dword ptr [ebp - 0x43c] */ r_ecx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005ebacf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ebad1: mov ecx, dword ptr [ebp - 0x43c] */ r_ecx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005ebad7: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5ebadau); call_ind(t); }
L_005ebada:; BB(0x005ebada);
    /* 005ebada: jmp 0x5eba94 */ goto L_005eba94;
L_005ebadc:; BB(0x005ebadc);
    /* 005ebadc: jmp 0x5ebb20 */ goto L_005ebb20;
L_005ebade:; BB(0x005ebade);
    /* 005ebade: jmp 0x5ebb4c */ goto L_005ebb4c;
L_005ebae0:; BB(0x005ebae0);
    /* 005ebae0: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ebae6: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x5ebaebu); f_005da3ec();
    /* 005ebaeb: cmp eax, 0x2330 */ {  u32 a = r_eax; u32 b = 0x2330u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebaf0: je 0x5ebb09 */ if (fZ) goto L_005ebb09;
L_005ebaf2:; BB(0x005ebaf2);
    /* 005ebaf2: push 0x2330 */ { u32 v = 0x2330u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebaf7: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005ebafc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ebafe: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ebb04: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5ebb07u); call_ind(t); }
    /* 005ebb07: jmp 0x5ebb1e */ goto L_005ebb1e;
L_005ebb09:; BB(0x005ebb09);
    /* 005ebb09: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebb0e: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005ebb13: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ebb15: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ebb1b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5ebb1eu); call_ind(t); }
L_005ebb1e:; BB(0x005ebb1e);
    /* 005ebb1e: jmp 0x5ebb4c */ goto L_005ebb4c;
L_005ebb20:; BB(0x005ebb20);
    /* 005ebb20: mov eax, dword ptr [ebp - 0x43c] */ r_eax = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005ebb26: mov ecx, dword ptr [eax + 0x274] */ r_ecx = R32((u32)(r_eax+0x274u));
    /* 005ebb2c: mov edx, dword ptr [ebp - 0x43c] */ r_edx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005ebb32: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ebb38: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ebb3a: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5ebb3du); call_ind(t); }
    /* 005ebb3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebb3f: je 0x5ebb4c */ if (fZ) goto L_005ebb4c;
L_005ebb41:; BB(0x005ebb41);
    /* 005ebb41: mov ecx, dword ptr [ebp - 0x43c] */ r_ecx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 005ebb47: call 0x5ebb50 */ r_esp -= 4; W32(r_esp, 0x5ebb4cu); f_005ebb50();
L_005ebb4c:; BB(0x005ebb4c);
    /* 005ebb4c: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebb4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebb4f: ret  */ FN_RET(0x005eb6d6); r_esp += 4; return;
}

void f_005ebb50(void) /* FUN_005ebb50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ebb50);
    /* 005ebb50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebb51: mov ebp, esp */ r_ebp = r_esp;
    /* 005ebb53: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ebb56: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ebb59: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ebb60: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ebb67: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ebb6e: jmp 0x5ebb79 */ goto L_005ebb79;
L_005ebb70:; BB(0x005ebb70);
    /* 005ebb70: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebb73: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ebb76: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005ebb79:; BB(0x005ebb79);
    /* 005ebb79: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebb7c: add ecx, 0x2b0 */ {  u32 a = r_ecx; u32 b = 0x2b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ebb82: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5ebb87u); f_005dd4d2();
    /* 005ebb87: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebb8a: jge 0x5ebc0a */ if ((fS==fO)) goto L_005ebc0a;
L_005ebb8c:; BB(0x005ebb8c);
    /* 005ebb8c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebb8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebb90: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebb93: add ecx, 0x2b0 */ {  u32 a = r_ecx; u32 b = 0x2b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ebb99: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5ebb9eu); f_005dd560();
    /* 005ebb9e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ebba1: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebba5: jne 0x5ebba9 */ if (!fZ) goto L_005ebba9;
L_005ebba7:; BB(0x005ebba7);
    /* 005ebba7: jmp 0x5ebc0a */ goto L_005ebc0a;
L_005ebba9:; BB(0x005ebba9);
    /* 005ebba9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebbac: mov ecx, dword ptr [edx + 0x274] */ r_ecx = R32((u32)(r_edx+0x274u));
    /* 005ebbb2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebbb5: mov edx, dword ptr [eax + 0x274] */ r_edx = R32((u32)(r_eax+0x274u));
    /* 005ebbbb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ebbbd: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5ebbc0u); call_ind(t); }
    /* 005ebbc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebbc2: jne 0x5ebbd2 */ if (!fZ) goto L_005ebbd2;
L_005ebbc4:; BB(0x005ebbc4);
    /* 005ebbc4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebbc7: cmp dword ptr [ecx + 0xc], 0x80 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebbce: jge 0x5ebbd2 */ if ((fS==fO)) goto L_005ebbd2;
L_005ebbd0:; BB(0x005ebbd0);
    /* 005ebbd0: jmp 0x5ebb70 */ goto L_005ebb70;
L_005ebbd2:; BB(0x005ebbd2);
    /* 005ebbd2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebbd5: call 0x5ed800 */ r_esp -= 4; W32(r_esp, 0x5ebbdau); f_005ed800();
    /* 005ebbda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebbdc: je 0x5ebc0a */ if (fZ) goto L_005ebc0a;
L_005ebbde:; BB(0x005ebbde);
    /* 005ebbde: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebbe1: cmp dword ptr [edx + 0xc], 0x80 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebbe8: jge 0x5ebc0a */ if ((fS==fO)) goto L_005ebc0a;
L_005ebbea:; BB(0x005ebbea);
    /* 005ebbea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebbed: cmp dword ptr [eax + 0xc], 0x13 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebbf1: je 0x5ebc0a */ if (fZ) goto L_005ebc0a;
L_005ebbf3:; BB(0x005ebbf3);
    /* 005ebbf3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebbf6: cmp dword ptr [ecx + 0xc], 0x12 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebbfa: je 0x5ebc0a */ if (fZ) goto L_005ebc0a;
L_005ebbfc:; BB(0x005ebbfc);
    /* 005ebbfc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebbff: cmp dword ptr [edx + 0xc], 0x16 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebc03: je 0x5ebc0a */ if (fZ) goto L_005ebc0a;
L_005ebc05:; BB(0x005ebc05);
    /* 005ebc05: jmp 0x5ebb70 */ goto L_005ebb70;
L_005ebc0a:; BB(0x005ebc0a);
    /* 005ebc0a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebc0e: je 0x5ebc23 */ if (fZ) goto L_005ebc23;
L_005ebc10:; BB(0x005ebc10);
    /* 005ebc10: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebc13: add ecx, 0x2b0 */ {  u32 a = r_ecx; u32 b = 0x2b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ebc19: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5ebc1eu); f_005dd4d2();
    /* 005ebc1e: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebc21: jne 0x5ebc28 */ if (!fZ) goto L_005ebc28;
L_005ebc23:; BB(0x005ebc23);
    /* 005ebc23: jmp 0x5ebcf6 */ goto L_005ebcf6;
L_005ebc28:; BB(0x005ebc28);
    /* 005ebc28: push 0x69a018 */ { u32 v = 0x69a018u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc2d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebc30: call 0x5ed723 */ r_esp -= 4; W32(r_esp, 0x5ebc35u); f_005ed723();
    /* 005ebc35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebc38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc39: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebc3c: add ecx, 0x2b0 */ {  u32 a = r_ecx; u32 b = 0x2b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ebc42: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5ebc47u); f_005dd469();
    /* 005ebc47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebc4a: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005ebc4d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebc50: cmp dword ptr [eax + edx*4 + 0x254], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x254u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebc58: jne 0x5ebca1 */ if (!fZ) goto L_005ebca1;
L_005ebc5a:; BB(0x005ebc5a);
    /* 005ebc5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebc5d: cmp dword ptr [ecx + 0xc], 0x10 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebc61: jl 0x5ebc7b */ if ((fS!=fO)) goto L_005ebc7b;
L_005ebc63:; BB(0x005ebc63);
    /* 005ebc63: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebc66: cmp dword ptr [edx + 0xc], 0x60 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebc6a: jg 0x5ebc7b */ if ((!fZ&&fS==fO)) goto L_005ebc7b;
L_005ebc6c:; BB(0x005ebc6c);
    /* 005ebc6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebc6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc70: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebc73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ebc75: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebc78: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5ebc7bu); call_ind(t); }
L_005ebc7b:; BB(0x005ebc7b);
    /* 005ebc7b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebc7e: cmp dword ptr [eax + 0xc], 0x80 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebc85: jl 0x5ebc9f */ if ((fS!=fO)) goto L_005ebc9f;
L_005ebc87:; BB(0x005ebc87);
    /* 005ebc87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebc8a: cmp dword ptr [ecx + 0xc], 0x89 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x89u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebc91: jg 0x5ebc9f */ if ((!fZ&&fS==fO)) goto L_005ebc9f;
L_005ebc93:; BB(0x005ebc93);
    /* 005ebc93: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebc96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc97: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebc9a: call 0x5ec642 */ r_esp -= 4; W32(r_esp, 0x5ebc9fu); f_005ec642();
L_005ebc9f:; BB(0x005ebc9f);
    /* 005ebc9f: jmp 0x5ebcae */ goto L_005ebcae;
L_005ebca1:; BB(0x005ebca1);
    /* 005ebca1: push 0x69a044 */ { u32 v = 0x69a044u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebca6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebca9: call 0x5ed723 */ r_esp -= 4; W32(r_esp, 0x5ebcaeu); f_005ed723();
L_005ebcae:; BB(0x005ebcae);
    /* 005ebcae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebcb1: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebcb5: je 0x5ebccc */ if (fZ) goto L_005ebccc;
L_005ebcb7:; BB(0x005ebcb7);
    /* 005ebcb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebcba: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005ebcbd: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005ebcc0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebcc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebcc4: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5ebcc9u); f_0048ac1b();
    /* 005ebcc9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ebccc:; BB(0x005ebccc);
    /* 005ebccc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebccf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ebcd2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebcd5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005ebcd8: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebcdc: je 0x5ebcef */ if (fZ) goto L_005ebcef;
L_005ebcde:; BB(0x005ebcde);
    /* 005ebcde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebce0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ebce3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ebce5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ebce8: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5ebceau); call_ind(t); }
    /* 005ebcea: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ebced: jmp 0x5ebcf6 */ goto L_005ebcf6;
L_005ebcef:; BB(0x005ebcef);
    /* 005ebcef: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005ebcf6:; BB(0x005ebcf6);
    /* 005ebcf6: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebcf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebcf9: ret  */ FN_RET(0x005ebb50); r_esp += 4; return;
}

void f_005ebcfa(void) /* FUN_005ebcfa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ebcfa);
    /* 005ebcfa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebcfb: mov ebp, esp */ r_ebp = r_esp;
    /* 005ebcfd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ebd00: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ebd03: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd06: cmp dword ptr [eax + 0x274], 0 */ {  u32 a = R32((u32)(r_eax+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebd0d: jne 0x5ebd14 */ if (!fZ) goto L_005ebd14;
L_005ebd0f:; BB(0x005ebd0f);
    /* 005ebd0f: jmp 0x5ebdf6 */ goto L_005ebdf6;
L_005ebd14:; BB(0x005ebd14);
    /* 005ebd14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd17: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ebd1d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd20: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ebd26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ebd28: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5ebd2bu); call_ind(t); }
    /* 005ebd2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebd2d: jne 0x5ebd34 */ if (!fZ) goto L_005ebd34;
L_005ebd2f:; BB(0x005ebd2f);
    /* 005ebd2f: jmp 0x5ebdf6 */ goto L_005ebdf6;
L_005ebd34:; BB(0x005ebd34);
    /* 005ebd34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd37: call 0x5eb6d6 */ r_esp -= 4; W32(r_esp, 0x5ebd3cu); f_005eb6d6();
    /* 005ebd3c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd3f: cmp dword ptr [eax + 0x274], 0 */ {  u32 a = R32((u32)(r_eax+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebd46: jne 0x5ebd4d */ if (!fZ) goto L_005ebd4d;
L_005ebd48:; BB(0x005ebd48);
    /* 005ebd48: jmp 0x5ebdf6 */ goto L_005ebdf6;
L_005ebd4d:; BB(0x005ebd4d);
    /* 005ebd4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd50: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ebd56: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd59: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ebd5f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ebd61: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5ebd64u); call_ind(t); }
    /* 005ebd64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebd66: jne 0x5ebd6d */ if (!fZ) goto L_005ebd6d;
L_005ebd68:; BB(0x005ebd68);
    /* 005ebd68: jmp 0x5ebdf6 */ goto L_005ebdf6;
L_005ebd6d:; BB(0x005ebd6d);
    /* 005ebd6d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd70: cmp dword ptr [eax + 0x2ac], 0 */ {  u32 a = R32((u32)(r_eax+0x2acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebd77: jne 0x5ebdae */ if (!fZ) goto L_005ebdae;
L_005ebd79:; BB(0x005ebd79);
    /* 005ebd79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd7c: cmp dword ptr [ecx + 0x2e0], 0 */ {  u32 a = R32((u32)(r_ecx+0x2e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebd83: jne 0x5ebdae */ if (!fZ) goto L_005ebdae;
L_005ebd85:; BB(0x005ebd85);
    /* 005ebd85: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd88: call 0x5eb669 */ r_esp -= 4; W32(r_esp, 0x5ebd8du); f_005eb669();
    /* 005ebd8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebd8f: jne 0x5ebdae */ if (!fZ) goto L_005ebdae;
L_005ebd91:; BB(0x005ebd91);
    /* 005ebd91: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd94: mov ecx, dword ptr [edx + 0x274] */ r_ecx = R32((u32)(r_edx+0x274u));
    /* 005ebd9a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd9d: mov edx, dword ptr [eax + 0x274] */ r_edx = R32((u32)(r_eax+0x274u));
    /* 005ebda3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ebda5: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5ebda8u); call_ind(t); }
    /* 005ebda8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebdaa: jne 0x5ebdae */ if (!fZ) goto L_005ebdae;
L_005ebdac:; BB(0x005ebdac);
    /* 005ebdac: jmp 0x5ebdf6 */ goto L_005ebdf6;
L_005ebdae:; BB(0x005ebdae);
    /* 005ebdae: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5ebdb4u); call_ind(t); }
    /* 005ebdb4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebdb7: mov ecx, dword ptr [edx + 0x2ec] */ r_ecx = R32((u32)(r_edx+0x2ecu));
    /* 005ebdbd: add ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ebdc3: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ebdc5: jb 0x5ebde0 */ if (fC) goto L_005ebde0;
L_005ebdc7:; BB(0x005ebdc7);
    /* 005ebdc7: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5ebdcdu); call_ind(t); }
    /* 005ebdcd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebdd0: mov ecx, dword ptr [edx + 0x2f0] */ r_ecx = R32((u32)(r_edx+0x2f0u));
    /* 005ebdd6: add ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ebddc: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ebdde: jae 0x5ebde2 */ if (!fC) goto L_005ebde2;
L_005ebde0:; BB(0x005ebde0);
    /* 005ebde0: jmp 0x5ebdf6 */ goto L_005ebdf6;
L_005ebde2:; BB(0x005ebde2);
    /* 005ebde2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebde5: cmp dword ptr [edx + 0x2ac], 0 */ {  u32 a = R32((u32)(r_edx+0x2acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebdec: jne 0x5ebdf6 */ if (!fZ) goto L_005ebdf6;
L_005ebdee:; BB(0x005ebdee);
    /* 005ebdee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebdf1: call 0x5ed800 */ r_esp -= 4; W32(r_esp, 0x5ebdf6u); f_005ed800();
L_005ebdf6:; BB(0x005ebdf6);
    /* 005ebdf6: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebdf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebdf9: ret  */ FN_RET(0x005ebcfa); r_esp += 4; return;
}

void f_005ebdfa(void) /* FUN_005ebdfa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ebdfa);
    /* 005ebdfa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebdfb: mov ebp, esp */ r_ebp = r_esp;
    /* 005ebdfd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebdfe: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ebe01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebe04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebe07: mov edx, dword ptr [ecx + 0x2dc] */ r_edx = R32((u32)(r_ecx+0x2dcu));
    /* 005ebe0d: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005ebe0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebe12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebe15: mov dl, byte ptr [ecx + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0xcu))) & 0xffu);
    /* 005ebe18: mov byte ptr [eax + 4], dl */ W8((u32)(r_eax+0x4u), (u8)r_edx);
    /* 005ebe1b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebe1e: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005ebe25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebe28: cmp dword ptr [ecx + 0x274], 0 */ {  u32 a = R32((u32)(r_ecx+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebe2f: je 0x5ebe4c */ if (fZ) goto L_005ebe4c;
L_005ebe31:; BB(0x005ebe31);
    /* 005ebe31: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ebe34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebe38: mov ecx, dword ptr [eax + 0x274] */ r_ecx = R32((u32)(r_eax+0x274u));
    /* 005ebe3e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebe41: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ebe47: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ebe49: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x5ebe4cu); call_ind(t); }
L_005ebe4c:; BB(0x005ebe4c);
    /* 005ebe4c: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebe4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebe4f: ret 4 */ FN_RET(0x005ebdfa); r_esp += 8; return;
}

void f_005ebe52(void) /* FUN_005ebe52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ebe52);
    /* 005ebe52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe53: mov ebp, esp */ r_ebp = r_esp;
    /* 005ebe55: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ebe5b: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 005ebe61: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 005ebe67: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ebe6a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ebe6c: mov dword ptr [eax + 0x2dc], edx */ W32((u32)(r_eax+0x2dcu), r_edx);
    /* 005ebe72: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 005ebe78: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005ebe7b: shl ecx, 6 */ { u32 c = (6u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005ebe7e: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005ebe84: lea eax, [edx + ecx + 0x14] */ r_eax = (u32)(r_edx+r_ecx+0x14u);
    /* 005ebe88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe89: push 0x69a0c0 */ { u32 v = 0x69a0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe8e: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005ebe94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe95: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5ebe9au); f_00624050();
    /* 005ebe9a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ebe9d: push 0x69a0c8 */ { u32 v = 0x69a0c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebea2: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 005ebea8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebea9: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5ebeaeu); f_00624520();
    /* 005ebeae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ebeb1: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebeb6: push 0x69a14c */ { u32 v = 0x69a14cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebebb: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 005ebec1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebec2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebec4: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5ebec9u); f_0060f9f3();
    /* 005ebec9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ebecc: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005ebed2: cmp dword ptr [ecx + 0x274], 0 */ {  u32 a = R32((u32)(r_ecx+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebed9: je 0x5ebefc */ if (fZ) goto L_005ebefc;
L_005ebedb:; BB(0x005ebedb);
    /* 005ebedb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ebede: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebedf: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 005ebee5: mov ecx, dword ptr [eax + 0x274] */ r_ecx = R32((u32)(r_eax+0x274u));
    /* 005ebeeb: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005ebef1: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ebef7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ebef9: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x5ebefcu); call_ind(t); }
L_005ebefc:; BB(0x005ebefc);
    /* 005ebefc: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebefe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebeff: ret 4 */ FN_RET(0x005ebe52); r_esp += 8; return;
}

void f_005ebf02(void) /* FUN_005ebf02 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ebf02);
    /* 005ebf02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf03: mov ebp, esp */ r_ebp = r_esp;
    /* 005ebf05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ebf09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebf0c: mov ecx, dword ptr [eax + 0x2dc] */ r_ecx = R32((u32)(r_eax+0x2dcu));
    /* 005ebf12: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ebf15: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebf18: mov dword ptr [edx + 0x2dc], ecx */ W32((u32)(r_edx+0x2dcu), r_ecx);
    /* 005ebf1e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebf20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebf21: ret  */ FN_RET(0x005ebf02); r_esp += 4; return;
}

void f_005ebf22(void) /* FUN_005ebf22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ebf22);
    /* 005ebf22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf23: mov ebp, esp */ r_ebp = r_esp;
    /* 005ebf25: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ebf28: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005ebf2b:; BB(0x005ebf2b);
    /* 005ebf2b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebf2e: cmp dword ptr [eax + 0x2e0], 0 */ {  u32 a = R32((u32)(r_eax+0x2e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebf35: je 0x5ebf81 */ if (fZ) goto L_005ebf81;
L_005ebf37:; BB(0x005ebf37);
    /* 005ebf37: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebf3a: mov edx, dword ptr [ecx + 0x2e0] */ r_edx = R32((u32)(r_ecx+0x2e0u));
    /* 005ebf40: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ebf43: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ebf46: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebf49: cmp dword ptr [ecx + 0x274], 0 */ {  u32 a = R32((u32)(r_ecx+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebf50: je 0x5ebf73 */ if (fZ) goto L_005ebf73;
L_005ebf52:; BB(0x005ebf52);
    /* 005ebf52: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebf55: mov eax, dword ptr [edx + 0x2e0] */ r_eax = R32((u32)(r_edx+0x2e0u));
    /* 005ebf5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf5c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebf5f: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ebf65: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebf68: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ebf6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ebf70: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5ebf73u); call_ind(t); }
L_005ebf73:; BB(0x005ebf73);
    /* 005ebf73: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebf76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebf79: mov dword ptr [eax + 0x2e0], ecx */ W32((u32)(r_eax+0x2e0u), r_ecx);
    /* 005ebf7f: jmp 0x5ebf2b */ goto L_005ebf2b;
L_005ebf81:; BB(0x005ebf81);
    /* 005ebf81: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebf83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebf84: ret  */ FN_RET(0x005ebf22); r_esp += 4; return;
}

void f_005ebf85(void) /* FUN_005ebf85 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ebf85);
    /* 005ebf85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf86: mov ebp, esp */ r_ebp = r_esp;
    /* 005ebf88: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ebf8b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ebf8e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebf91: cmp dword ptr [eax + 0x274], 0 */ {  u32 a = R32((u32)(r_eax+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebf98: je 0x5ebfb6 */ if (fZ) goto L_005ebfb6;
L_005ebf9a:; BB(0x005ebf9a);
    /* 005ebf9a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebf9d: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ebfa3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebfa6: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ebfac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ebfae: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5ebfb1u); call_ind(t); }
    /* 005ebfb1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ebfb4: jmp 0x5ebfbd */ goto L_005ebfbd;
L_005ebfb6:; BB(0x005ebfb6);
    /* 005ebfb6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005ebfbd:; BB(0x005ebfbd);
    /* 005ebfbd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ebfc0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ebfc3: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebfc7: jne 0x5ebfdb */ if (!fZ) goto L_005ebfdb;
L_005ebfc9:; BB(0x005ebfc9);
    /* 005ebfc9: push 0x69a15c */ { u32 v = 0x69a15cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebfce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebfd1: call 0x5ed6c2 */ r_esp -= 4; W32(r_esp, 0x5ebfd6u); f_005ed6c2();
    /* 005ebfd6: jmp 0x5ec0fb */ goto L_005ec0fb;
L_005ebfdb:; BB(0x005ebfdb);
    /* 005ebfdb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebfde: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ebfe4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebfe7: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ebfed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ebfef: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x5ebff2u); call_ind(t); }
    /* 005ebff2: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005ebff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebff6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ebff9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebffa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebffd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebffe: call 0x625050 */ r_esp -= 4; W32(r_esp, 0x5ec003u); f_00625050();
    /* 005ec003: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec006: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec009: cmp dword ptr [eax + 0x2e0], 0 */ {  u32 a = R32((u32)(r_eax+0x2e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec010: je 0x5ec024 */ if (fZ) goto L_005ec024;
L_005ec012:; BB(0x005ec012);
    /* 005ec012: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec015: mov edx, dword ptr [ecx + 0x2e0] */ r_edx = R32((u32)(r_ecx+0x2e0u));
    /* 005ec01b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec01e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ec020: cmp ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec022: jg 0x5ec041 */ if ((!fZ&&fS==fO)) goto L_005ec041;
L_005ec024:; BB(0x005ec024);
    /* 005ec024: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec027: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec02a: mov ecx, dword ptr [eax + 0x2e0] */ r_ecx = R32((u32)(r_eax+0x2e0u));
    /* 005ec030: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005ec033: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec036: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec039: mov dword ptr [edx + 0x2e0], eax */ W32((u32)(r_edx+0x2e0u), r_eax);
    /* 005ec03f: jmp 0x5ec08f */ goto L_005ec08f;
L_005ec041:; BB(0x005ec041);
    /* 005ec041: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec044: mov edx, dword ptr [ecx + 0x2e0] */ r_edx = R32((u32)(r_ecx+0x2e0u));
    /* 005ec04a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005ec04d: jmp 0x5ec058 */ goto L_005ec058;
L_005ec04f:; BB(0x005ec04f);
    /* 005ec04f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec052: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ec055: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005ec058:; BB(0x005ec058);
    /* 005ec058: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec05c: je 0x5ec08f */ if (fZ) goto L_005ec08f;
L_005ec05e:; BB(0x005ec05e);
    /* 005ec05e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec061: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec065: je 0x5ec076 */ if (fZ) goto L_005ec076;
L_005ec067:; BB(0x005ec067);
    /* 005ec067: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec06a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ec06d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec070: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ec072: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec074: jg 0x5ec08d */ if ((!fZ&&fS==fO)) goto L_005ec08d;
L_005ec076:; BB(0x005ec076);
    /* 005ec076: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec079: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec07c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ec07f: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005ec082: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec085: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec088: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005ec08b: jmp 0x5ec08f */ goto L_005ec08f;
L_005ec08d:; BB(0x005ec08d);
    /* 005ec08d: jmp 0x5ec04f */ goto L_005ec04f;
L_005ec08f:; BB(0x005ec08f);
    /* 005ec08f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec092: mov ecx, dword ptr [eax + 0x2e0] */ r_ecx = R32((u32)(r_eax+0x2e0u));
    /* 005ec098: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ec09b: jmp 0x5ec0a6 */ goto L_005ec0a6;
L_005ec09d:; BB(0x005ec09d);
    /* 005ec09d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec0a0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ec0a3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ec0a6:; BB(0x005ec0a6);
    /* 005ec0a6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec0aa: je 0x5ec0fb */ if (fZ) goto L_005ec0fb;
L_005ec0ac:; BB(0x005ec0ac);
    /* 005ec0ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec0af: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec0b3: je 0x5ec0f9 */ if (fZ) goto L_005ec0f9;
L_005ec0b5:; BB(0x005ec0b5);
    /* 005ec0b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec0b8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ec0bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec0be: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ec0c0: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec0c2: jne 0x5ec0f9 */ if (!fZ) goto L_005ec0f9;
L_005ec0c4:; BB(0x005ec0c4);
    /* 005ec0c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec0c7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ec0ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec0cb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec0ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec0cf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec0d2: mov ecx, dword ptr [eax + 0x274] */ r_ecx = R32((u32)(r_eax+0x274u));
    /* 005ec0d8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec0db: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ec0e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec0e3: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x5ec0e6u); call_ind(t); }
    /* 005ec0e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec0e8: jne 0x5ec0f9 */ if (!fZ) goto L_005ec0f9;
L_005ec0ea:; BB(0x005ec0ea);
    /* 005ec0ea: push 0x69a18c */ { u32 v = 0x69a18cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec0ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec0f2: call 0x5ed6c2 */ r_esp -= 4; W32(r_esp, 0x5ec0f7u); f_005ed6c2();
    /* 005ec0f7: jmp 0x5ec0fb */ goto L_005ec0fb;
L_005ec0f9:; BB(0x005ec0f9);
    /* 005ec0f9: jmp 0x5ec09d */ goto L_005ec09d;
L_005ec0fb:; BB(0x005ec0fb);
    /* 005ec0fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec0fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec0fe: ret 4 */ FN_RET(0x005ebf85); r_esp += 8; return;
}

void f_005ec101(void) /* FUN_005ec101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ec101);
    /* 005ec101: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec102: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec104: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec107: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ec10a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec10d: mov ecx, dword ptr [eax + 0x2dc] */ r_ecx = R32((u32)(r_eax+0x2dcu));
    /* 005ec113: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec116: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec119: cmp dword ptr [edx], ecx */ {  u32 a = R32((u32)(r_edx)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec11b: jne 0x5ec254 */ if (!fZ) goto L_005ec254;
L_005ec121:; BB(0x005ec121);
    /* 005ec121: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5ec127u); call_ind(t); }
    /* 005ec127: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec12a: mov edx, dword ptr [ecx + 0x2ec] */ r_edx = R32((u32)(r_ecx+0x2ecu));
    /* 005ec130: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ec136: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ec138: jb 0x5ec153 */ if (fC) goto L_005ec153;
L_005ec13a:; BB(0x005ec13a);
    /* 005ec13a: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5ec140u); call_ind(t); }
    /* 005ec140: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec143: mov edx, dword ptr [ecx + 0x2f0] */ r_edx = R32((u32)(r_ecx+0x2f0u));
    /* 005ec149: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ec14f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ec151: jae 0x5ec164 */ if (!fC) goto L_005ec164;
L_005ec153:; BB(0x005ec153);
    /* 005ec153: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec156: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec157: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec15a: call 0x5ebf85 */ r_esp -= 4; W32(r_esp, 0x5ec15fu); f_005ebf85();
    /* 005ec15f: jmp 0x5ec24f */ goto L_005ec24f;
L_005ec164:; BB(0x005ec164);
    /* 005ec164: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec167: cmp dword ptr [ecx + 0x274], 0 */ {  u32 a = R32((u32)(r_ecx+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec16e: je 0x5ec18c */ if (fZ) goto L_005ec18c;
L_005ec170:; BB(0x005ec170);
    /* 005ec170: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec173: mov ecx, dword ptr [edx + 0x274] */ r_ecx = R32((u32)(r_edx+0x274u));
    /* 005ec179: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec17c: mov edx, dword ptr [eax + 0x274] */ r_edx = R32((u32)(r_eax+0x274u));
    /* 005ec182: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ec184: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5ec187u); call_ind(t); }
    /* 005ec187: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ec18a: jmp 0x5ec193 */ goto L_005ec193;
L_005ec18c:; BB(0x005ec18c);
    /* 005ec18c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005ec193:; BB(0x005ec193);
    /* 005ec193: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ec196: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ec199: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec19d: jne 0x5ec1a4 */ if (!fZ) goto L_005ec1a4;
L_005ec19f:; BB(0x005ec19f);
    /* 005ec19f: jmp 0x5ec34e */ goto L_005ec34e;
L_005ec1a4:; BB(0x005ec1a4);
    /* 005ec1a4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec1a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec1a8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec1ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec1ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec1af: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ec1b5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec1b8: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ec1be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec1c0: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5ec1c3u); call_ind(t); }
    /* 005ec1c3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec1c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec1c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec1ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec1cb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec1ce: mov ecx, dword ptr [edx + 0x274] */ r_ecx = R32((u32)(r_edx+0x274u));
    /* 005ec1d4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec1d7: mov edx, dword ptr [eax + 0x274] */ r_edx = R32((u32)(r_eax+0x274u));
    /* 005ec1dd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ec1df: call dword ptr [eax + 0x2c] */ { u32 t = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, 0x5ec1e2u); call_ind(t); }
    /* 005ec1e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec1e4: je 0x5ec211 */ if (fZ) goto L_005ec211;
L_005ec1e6:; BB(0x005ec1e6);
    /* 005ec1e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec1e9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec1ec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ec1ee: mov dword ptr [ecx + 0x2dc], eax */ W32((u32)(r_ecx+0x2dcu), r_eax);
    /* 005ec1f4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec1f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec1f8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec1fb: mov ecx, dword ptr [edx + 0x274] */ r_ecx = R32((u32)(r_edx+0x274u));
    /* 005ec201: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec204: mov edx, dword ptr [eax + 0x274] */ r_edx = R32((u32)(r_eax+0x274u));
    /* 005ec20a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ec20c: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x5ec20fu); call_ind(t); }
    /* 005ec20f: jmp 0x5ec225 */ goto L_005ec225;
L_005ec211:; BB(0x005ec211);
    /* 005ec211: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec214: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec215: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec218: call 0x5ebe52 */ r_esp -= 4; W32(r_esp, 0x5ec21du); f_005ebe52();
    /* 005ec21d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec220: call 0x5eb613 */ r_esp -= 4; W32(r_esp, 0x5ec225u); f_005eb613();
L_005ec225:; BB(0x005ec225);
    /* 005ec225: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec228: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec229: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec22c: mov ecx, dword ptr [eax + 0x274] */ r_ecx = R32((u32)(r_eax+0x274u));
    /* 005ec232: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec235: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ec23b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec23d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5ec240u); call_ind(t); }
    /* 005ec240: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5ec246u); call_ind(t); }
    /* 005ec246: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec249: mov dword ptr [ecx + 0x2ec], eax */ W32((u32)(r_ecx+0x2ecu), r_eax);
L_005ec24f:; BB(0x005ec24f);
    /* 005ec24f: jmp 0x5ec34e */ goto L_005ec34e;
L_005ec254:; BB(0x005ec254);
    /* 005ec254: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec257: mov eax, dword ptr [edx + 0x2dc] */ r_eax = R32((u32)(r_edx+0x2dcu));
    /* 005ec25d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ec260: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec263: cmp dword ptr [ecx], eax */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec265: jle 0x5ec278 */ if ((fZ||fS!=fO)) goto L_005ec278;
L_005ec267:; BB(0x005ec267);
    /* 005ec267: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec26a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec26b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec26e: call 0x5ebf85 */ r_esp -= 4; W32(r_esp, 0x5ec273u); f_005ebf85();
    /* 005ec273: jmp 0x5ec34e */ goto L_005ec34e;
L_005ec278:; BB(0x005ec278);
    /* 005ec278: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec27b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec27e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec280: cmp edx, dword ptr [ecx + 0x2dc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec286: jne 0x5ec34e */ if (!fZ) goto L_005ec34e;
L_005ec28c:; BB(0x005ec28c);
    /* 005ec28c: push 0x69a1cc */ { u32 v = 0x69a1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec291: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec294: call 0x5ed723 */ r_esp -= 4; W32(r_esp, 0x5ec299u); f_005ed723();
    /* 005ec299: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec29c: cmp dword ptr [eax + 0x274], 0 */ {  u32 a = R32((u32)(r_eax+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec2a3: je 0x5ec2c1 */ if (fZ) goto L_005ec2c1;
L_005ec2a5:; BB(0x005ec2a5);
    /* 005ec2a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec2a8: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ec2ae: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec2b1: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ec2b7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec2b9: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5ec2bcu); call_ind(t); }
    /* 005ec2bc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ec2bf: jmp 0x5ec2c8 */ goto L_005ec2c8;
L_005ec2c1:; BB(0x005ec2c1);
    /* 005ec2c1: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005ec2c8:; BB(0x005ec2c8);
    /* 005ec2c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec2cb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ec2ce: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec2d2: je 0x5ec34e */ if (fZ) goto L_005ec34e;
L_005ec2d4:; BB(0x005ec2d4);
    /* 005ec2d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec2d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec2d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec2db: call 0x5ebdfa */ r_esp -= 4; W32(r_esp, 0x5ec2e0u); f_005ebdfa();
    /* 005ec2e0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec2e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec2e4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec2e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec2e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec2eb: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ec2f1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec2f4: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ec2fa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec2fc: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x5ec2ffu); call_ind(t); }
    /* 005ec2ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec301: jne 0x5ec333 */ if (!fZ) goto L_005ec333;
L_005ec303:; BB(0x005ec303);
    /* 005ec303: push 0x69a200 */ { u32 v = 0x69a200u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec308: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec30b: call 0x5ed723 */ r_esp -= 4; W32(r_esp, 0x5ec310u); f_005ed723();
    /* 005ec310: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec313: movsx ecx, byte ptr [eax + 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x4u));
    /* 005ec317: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec31a: cmp ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec31d: jge 0x5ec333 */ if ((fS==fO)) goto L_005ec333;
L_005ec31f:; BB(0x005ec31f);
    /* 005ec31f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec322: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec323: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec326: call 0x5ebe52 */ r_esp -= 4; W32(r_esp, 0x5ec32bu); f_005ebe52();
    /* 005ec32b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec32e: call 0x5eb613 */ r_esp -= 4; W32(r_esp, 0x5ec333u); f_005eb613();
L_005ec333:; BB(0x005ec333);
    /* 005ec333: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec336: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec337: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec33a: mov ecx, dword ptr [edx + 0x274] */ r_ecx = R32((u32)(r_edx+0x274u));
    /* 005ec340: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec343: mov edx, dword ptr [eax + 0x274] */ r_edx = R32((u32)(r_eax+0x274u));
    /* 005ec349: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ec34b: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5ec34eu); call_ind(t); }
L_005ec34e:; BB(0x005ec34e);
    /* 005ec34e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec350: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec351: ret 4 */ FN_RET(0x005ec101); r_esp += 8; return;
}

void f_005ec354(void) /* FUN_005ec354 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ec354);
    /* 005ec354: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec355: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec357: sub esp, 0x11c */ {  u32 a = r_esp; u32 b = 0x11cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec35d: mov dword ptr [ebp - 0x110], ecx */ W32((u32)(r_ebp+0xfffffef0u), r_ecx);
    /* 005ec363: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec369: cmp dword ptr [eax + 0x2ac], 0 */ {  u32 a = R32((u32)(r_eax+0x2acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec370: je 0x5ec465 */ if (fZ) goto L_005ec465;
L_005ec376:; BB(0x005ec376);
    /* 005ec376: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec379: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005ec37c: mov dword ptr [ebp - 0x114], edx */ W32((u32)(r_ebp+0xfffffeecu), r_edx);
    /* 005ec382: cmp dword ptr [ebp - 0x114], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec389: je 0x5ec3a6 */ if (fZ) goto L_005ec3a6;
L_005ec38b:; BB(0x005ec38b);
    /* 005ec38b: cmp dword ptr [ebp - 0x114], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec392: je 0x5ec3cd */ if (fZ) goto L_005ec3cd;
L_005ec394:; BB(0x005ec394);
    /* 005ec394: cmp dword ptr [ebp - 0x114], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec39b: je 0x5ec429 */ if (fZ) goto L_005ec429;
L_005ec3a1:; BB(0x005ec3a1);
    /* 005ec3a1: jmp 0x5ec43b */ goto L_005ec43b;
L_005ec3a6:; BB(0x005ec3a6);
    /* 005ec3a6: push 0x69a234 */ { u32 v = 0x69a234u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec3ab: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec3b1: call 0x5ed723 */ r_esp -= 4; W32(r_esp, 0x5ec3b6u); f_005ed723();
    /* 005ec3b6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec3b9: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005ec3bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec3bd: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec3c3: call 0x5ebf85 */ r_esp -= 4; W32(r_esp, 0x5ec3c8u); f_005ebf85();
    /* 005ec3c8: jmp 0x5ec460 */ goto L_005ec460;
L_005ec3cd:; BB(0x005ec3cd);
    /* 005ec3cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec3d0: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005ec3d3: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec3d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec3db: cmp edx, dword ptr [ecx + 0x2dc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec3e1: jg 0x5ec3e5 */ if ((!fZ&&fS==fO)) goto L_005ec3e5;
L_005ec3e3:; BB(0x005ec3e3);
    /* 005ec3e3: jmp 0x5ec460 */ goto L_005ec460;
L_005ec3e5:; BB(0x005ec3e5);
    /* 005ec3e5: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec3eb: cmp dword ptr [eax + 0x2e0], 0 */ {  u32 a = R32((u32)(r_eax+0x2e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec3f2: jne 0x5ec403 */ if (!fZ) goto L_005ec403;
L_005ec3f4:; BB(0x005ec3f4);
    /* 005ec3f4: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec3fa: call 0x5eb669 */ r_esp -= 4; W32(r_esp, 0x5ec3ffu); f_005eb669();
    /* 005ec3ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec401: je 0x5ec405 */ if (fZ) goto L_005ec405;
L_005ec403:; BB(0x005ec403);
    /* 005ec403: jmp 0x5ec460 */ goto L_005ec460;
L_005ec405:; BB(0x005ec405);
    /* 005ec405: push 0x69a274 */ { u32 v = 0x69a274u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec40a: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec410: call 0x5ed723 */ r_esp -= 4; W32(r_esp, 0x5ec415u); f_005ed723();
    /* 005ec415: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec418: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005ec41b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec41c: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec422: call 0x5ebf85 */ r_esp -= 4; W32(r_esp, 0x5ec427u); f_005ebf85();
    /* 005ec427: jmp 0x5ec460 */ goto L_005ec460;
L_005ec429:; BB(0x005ec429);
    /* 005ec429: push 0x69a2b4 */ { u32 v = 0x69a2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec42e: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec434: call 0x5ed723 */ r_esp -= 4; W32(r_esp, 0x5ec439u); f_005ed723();
    /* 005ec439: jmp 0x5ec460 */ goto L_005ec460;
L_005ec43b:; BB(0x005ec43b);
    /* 005ec43b: push 0x69a2fc */ { u32 v = 0x69a2fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec440: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec446: call 0x5ed723 */ r_esp -= 4; W32(r_esp, 0x5ec44bu); f_005ed723();
    /* 005ec44b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec44e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec44f: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec455: add ecx, 0x2b0 */ {  u32 a = r_ecx; u32 b = 0x2b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec45b: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x5ec460u); f_005dd425();
L_005ec460:; BB(0x005ec460);
    /* 005ec460: jmp 0x5ec5d1 */ goto L_005ec5d1;
L_005ec465:; BB(0x005ec465);
    /* 005ec465: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec46b: mov dword ptr [ecx + 0x2ac], 1 */ W32((u32)(r_ecx+0x2acu), 0x1u);
    /* 005ec475: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec478: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005ec47b: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 005ec481: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005ec487: sub ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec48a: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 005ec490: cmp dword ptr [ebp - 0x118], 0x42 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0x42u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ec497: ja 0x5ec5c1 */ if ((!fC&&!fZ)) goto L_005ec5c1;
L_005ec49d:; BB(0x005ec49d);
    /* 005ec49d: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 005ec4a3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ec4a5: mov dl, byte ptr [eax + 0x5ec5ff] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x5ec5ffu))) & 0xffu);
    /* 005ec4ab: jmp dword ptr [edx*4 + 0x5ec5d7] */ { u32 t = R32((u32)(r_edx*4+0x5ec5d7u)); switch (t) { case 0x5ec4b2u: goto L_005ec4b2; case 0x5ec4b7u: goto L_005ec4b7; case 0x5ec4bcu: goto L_005ec4bc; case 0x5ec4c1u: goto L_005ec4c1; case 0x5ec4eeu: goto L_005ec4ee; case 0x5ec51eu: goto L_005ec51e; case 0x5ec548u: goto L_005ec548; case 0x5ec562u: goto L_005ec562; case 0x5ec58fu: goto L_005ec58f; case 0x5ec5c1u: goto L_005ec5c1; default: UNSUP(0x005ec4ab, "jump table entry is not a known target"); } }
L_005ec4b2:; BB(0x005ec4b2);
    /* 005ec4b2: jmp 0x5ec5d1 */ goto L_005ec5d1;
L_005ec4b7:; BB(0x005ec4b7);
    /* 005ec4b7: jmp 0x5ec5d1 */ goto L_005ec5d1;
L_005ec4bc:; BB(0x005ec4bc);
    /* 005ec4bc: jmp 0x5ec5d1 */ goto L_005ec5d1;
L_005ec4c1:; BB(0x005ec4c1);
    /* 005ec4c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec4c5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec4c8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005ec4cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec4cc: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec4d2: mov ecx, dword ptr [eax + 0x274] */ r_ecx = R32((u32)(r_eax+0x274u));
    /* 005ec4d8: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec4de: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ec4e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec4e6: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5ec4e9u); call_ind(t); }
    /* 005ec4e9: jmp 0x5ec5c1 */ goto L_005ec5c1;
L_005ec4ee:; BB(0x005ec4ee);
    /* 005ec4ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec4f1: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005ec4f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec4f5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec4f8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ec4fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec4fc: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec502: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ec508: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec50e: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ec514: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec516: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5ec519u); call_ind(t); }
    /* 005ec519: jmp 0x5ec5c1 */ goto L_005ec5c1;
L_005ec51e:; BB(0x005ec51e);
    /* 005ec51e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec522: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec525: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005ec528: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec529: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec52f: mov ecx, dword ptr [eax + 0x274] */ r_ecx = R32((u32)(r_eax+0x274u));
    /* 005ec535: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec53b: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ec541: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec543: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5ec546u); call_ind(t); }
    /* 005ec546: jmp 0x5ec5c1 */ goto L_005ec5c1;
L_005ec548:; BB(0x005ec548);
    /* 005ec548: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec54b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ec54e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec54f: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec555: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ec557: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec55d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5ec560u); call_ind(t); }
    /* 005ec560: jmp 0x5ec5c1 */ goto L_005ec5c1;
L_005ec562:; BB(0x005ec562);
    /* 005ec562: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec565: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005ec568: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec569: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec56c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ec56f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec570: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec576: mov ecx, dword ptr [edx + 0x274] */ r_ecx = R32((u32)(r_edx+0x274u));
    /* 005ec57c: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec582: mov edx, dword ptr [eax + 0x274] */ r_edx = R32((u32)(r_eax+0x274u));
    /* 005ec588: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ec58a: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5ec58du); call_ind(t); }
    /* 005ec58d: jmp 0x5ec5c1 */ goto L_005ec5c1;
L_005ec58f:; BB(0x005ec58f);
    /* 005ec58f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec592: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005ec595: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec596: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec599: mov cl, byte ptr [eax + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xcu))) & 0xffu);
    /* 005ec59c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec59d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec5a0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ec5a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec5a4: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec5aa: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ec5b0: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec5b6: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ec5bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec5be: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5ec5c1u); call_ind(t); }
L_005ec5c1:; BB(0x005ec5c1);
    /* 005ec5c1: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec5c7: mov dword ptr [eax + 0x2ac], 0 */ W32((u32)(r_eax+0x2acu), 0x0u);
L_005ec5d1:; BB(0x005ec5d1);
    /* 005ec5d1: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec5d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec5d4: ret 4 */ FN_RET(0x005ec354); r_esp += 8; return;
}

void f_005ec642(void) /* FUN_005ec642 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ec642);
    /* 005ec642: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec643: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec645: sub esp, 0x114 */ {  u32 a = r_esp; u32 b = 0x114u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec64b: mov dword ptr [ebp - 0x110], ecx */ W32((u32)(r_ebp+0xfffffef0u), r_ecx);
    /* 005ec651: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec654: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005ec657: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 005ec65d: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ec663: sub edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ec669: mov dword ptr [ebp - 0x114], edx */ W32((u32)(r_ebp+0xfffffeecu), r_edx);
    /* 005ec66f: cmp dword ptr [ebp - 0x114], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ec676: ja 0x5eca8b */ if ((!fC&&!fZ)) goto L_005eca8b;
L_005ec67c:; BB(0x005ec67c);
    /* 005ec67c: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ec682: jmp dword ptr [eax*4 + 0x5eca91] */ { u32 t = R32((u32)(r_eax*4+0x5eca91u)); switch (t) { case 0x5ec689u: goto L_005ec689; case 0x5ec6d2u: goto L_005ec6d2; case 0x5ec6ffu: goto L_005ec6ff; case 0x5ec757u: goto L_005ec757; case 0x5ec7f3u: goto L_005ec7f3; case 0x5ec82du: goto L_005ec82d; case 0x5ec893u: goto L_005ec893; case 0x5ec8f7u: goto L_005ec8f7; case 0x5ec9c1u: goto L_005ec9c1; case 0x5eca04u: goto L_005eca04; default: UNSUP(0x005ec682, "jump table entry is not a known target"); } }
L_005ec689:; BB(0x005ec689);
    /* 005ec689: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec68c: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec692: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005ec695: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec698: jne 0x5ec69f */ if (!fZ) goto L_005ec69f;
L_005ec69a:; BB(0x005ec69a);
    /* 005ec69a: jmp 0x5eca8b */ goto L_005eca8b;
L_005ec69f:; BB(0x005ec69f);
    /* 005ec69f: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec6a5: cmp dword ptr [ecx + 0x298], 0 */ {  u32 a = R32((u32)(r_ecx+0x298u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec6ac: je 0x5ec6cd */ if (fZ) goto L_005ec6cd;
L_005ec6ae:; BB(0x005ec6ae);
    /* 005ec6ae: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec6b1: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005ec6b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec6b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec6b8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005ec6bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec6bc: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec6c2: mov ecx, dword ptr [eax + 0x298] */ r_ecx = R32((u32)(r_eax+0x298u));
    /* 005ec6c8: call 0x42c6e2 */ r_esp -= 4; W32(r_esp, 0x5ec6cdu); f_0042c6e2();
L_005ec6cd:; BB(0x005ec6cd);
    /* 005ec6cd: jmp 0x5eca8b */ goto L_005eca8b;
L_005ec6d2:; BB(0x005ec6d2);
    /* 005ec6d2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec6d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec6d6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec6d9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ec6dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec6dd: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec6e3: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ec6e9: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec6ef: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ec6f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec6f7: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5ec6fau); call_ind(t); }
    /* 005ec6fa: jmp 0x5eca8b */ goto L_005eca8b;
L_005ec6ff:; BB(0x005ec6ff);
    /* 005ec6ff: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec701: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec703: push 0x69a4c8 */ { u32 v = 0x69a4c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec708: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec70b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec70c: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec712: call 0x5eda7c */ r_esp -= 4; W32(r_esp, 0x5ec717u); f_005eda7c();
    /* 005ec717: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec71d: cmp dword ptr [ecx + 0xc], eax */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec720: jne 0x5ec752 */ if (!fZ) goto L_005ec752;
L_005ec722:; BB(0x005ec722);
    /* 005ec722: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec728: call 0x5edcdd */ r_esp -= 4; W32(r_esp, 0x5ec72du); f_005edcdd();
    /* 005ec72d: push 0x6f6ec8 */ { u32 v = 0x6f6ec8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec732: push 0x69a4d4 */ { u32 v = 0x69a4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec737: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec73d: call 0x5edaed */ r_esp -= 4; W32(r_esp, 0x5ec742u); f_005edaed();
    /* 005ec742: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec747: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec74d: call 0x5edd35 */ r_esp -= 4; W32(r_esp, 0x5ec752u); f_005edd35();
L_005ec752:; BB(0x005ec752);
    /* 005ec752: jmp 0x5eca8b */ goto L_005eca8b;
L_005ec757:; BB(0x005ec757);
    /* 005ec757: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec75a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ec75d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec75e: push 0x69a4dc */ { u32 v = 0x69a4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec763: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 005ec769: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec76a: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5ec76fu); f_00624050();
    /* 005ec76f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec772: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 005ec778: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec779: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x5ec77eu); f_00624990();
    /* 005ec77e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec781: lea eax, [ebp + eax - 0x104] */ r_eax = (u32)(r_ebp+r_eax+0xfffffefcu);
    /* 005ec788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec789: push 0x69a4f4 */ { u32 v = 0x69a4f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec78e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec791: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec792: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec798: call 0x5eda58 */ r_esp -= 4; W32(r_esp, 0x5ec79du); f_005eda58();
    /* 005ec79d: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec7a3: cmp dword ptr [edx + 0x298], 0 */ {  u32 a = R32((u32)(r_edx+0x298u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec7aa: je 0x5ec7cb */ if (fZ) goto L_005ec7cb;
L_005ec7ac:; BB(0x005ec7ac);
    /* 005ec7ac: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 005ec7b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec7b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec7b6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005ec7b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec7ba: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec7c0: mov ecx, dword ptr [eax + 0x298] */ r_ecx = R32((u32)(r_eax+0x298u));
    /* 005ec7c6: call 0x42c6e2 */ r_esp -= 4; W32(r_esp, 0x5ec7cbu); f_0042c6e2();
L_005ec7cb:; BB(0x005ec7cb);
    /* 005ec7cb: push 0x69a4fc */ { u32 v = 0x69a4fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec7d0: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 005ec7d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec7d7: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5ec7dcu); f_00624520();
    /* 005ec7dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec7df: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 005ec7e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec7e6: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5ec7ebu); f_0060fc40();
    /* 005ec7eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec7ee: jmp 0x5eca8b */ goto L_005eca8b;
L_005ec7f3:; BB(0x005ec7f3);
    /* 005ec7f3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec7f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec7f7: push 0x69a500 */ { u32 v = 0x69a500u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec7fc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec7ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec800: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec806: call 0x5eda7c */ r_esp -= 4; W32(r_esp, 0x5ec80bu); f_005eda7c();
    /* 005ec80b: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec811: cmp dword ptr [ecx + 0xc], eax */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec814: jne 0x5ec828 */ if (!fZ) goto L_005ec828;
L_005ec816:; BB(0x005ec816);
    /* 005ec816: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec81c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec81f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ec822: mov dword ptr [edx + 0x2d4], ecx */ W32((u32)(r_edx+0x2d4u), r_ecx);
L_005ec828:; BB(0x005ec828);
    /* 005ec828: jmp 0x5eca8b */ goto L_005eca8b;
L_005ec82d:; BB(0x005ec82d);
    /* 005ec82d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec830: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ec833: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec834: push 0x69a50c */ { u32 v = 0x69a50cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec839: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 005ec83f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec840: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5ec845u); f_00624050();
    /* 005ec845: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec848: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 005ec84e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec84f: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5ec854u); f_0060fc40();
    /* 005ec854: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec857: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 005ec85d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec85e: push 0x69a524 */ { u32 v = 0x69a524u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec863: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec866: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec867: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec86d: call 0x5eda58 */ r_esp -= 4; W32(r_esp, 0x5ec872u); f_005eda58();
    /* 005ec872: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 005ec878: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec879: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5ec87eu); f_0060fc40();
    /* 005ec87e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec881: push 0x69a52c */ { u32 v = 0x69a52cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec886: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5ec88bu); f_0060fc40();
    /* 005ec88b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec88e: jmp 0x5eca8b */ goto L_005eca8b;
L_005ec893:; BB(0x005ec893);
    /* 005ec893: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec896: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec89c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005ec89f: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec8a2: jne 0x5ec8a9 */ if (!fZ) goto L_005ec8a9;
L_005ec8a4:; BB(0x005ec8a4);
    /* 005ec8a4: jmp 0x5eca8b */ goto L_005eca8b;
L_005ec8a9:; BB(0x005ec8a9);
    /* 005ec8a9: push 0x7fffffff */ { u32 v = 0x7fffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8b0: push 0x69a530 */ { u32 v = 0x69a530u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec8b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8b9: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec8bf: call 0x5eda7c */ r_esp -= 4; W32(r_esp, 0x5ec8c4u); f_005eda7c();
    /* 005ec8c4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ec8c7: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec8cd: cmp dword ptr [ecx + 0x298], 0 */ {  u32 a = R32((u32)(r_ecx+0x298u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec8d4: je 0x5ec8f2 */ if (fZ) goto L_005ec8f2;
L_005ec8d6:; BB(0x005ec8d6);
    /* 005ec8d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec8d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8da: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec8dd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ec8e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8e1: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec8e7: mov ecx, dword ptr [edx + 0x298] */ r_ecx = R32((u32)(r_edx+0x298u));
    /* 005ec8ed: call 0x42ca5a */ r_esp -= 4; W32(r_esp, 0x5ec8f2u); f_0042ca5a();
L_005ec8f2:; BB(0x005ec8f2);
    /* 005ec8f2: jmp 0x5eca8b */ goto L_005eca8b;
L_005ec8f7:; BB(0x005ec8f7);
    /* 005ec8f7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8fb: push 0x69a538 */ { u32 v = 0x69a538u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec900: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec903: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec904: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec90a: call 0x5eda7c */ r_esp -= 4; W32(r_esp, 0x5ec90fu); f_005eda7c();
    /* 005ec90f: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 005ec915: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec917: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec919: push 0x69a544 */ { u32 v = 0x69a544u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec91e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec921: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec922: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec928: call 0x5eda7c */ r_esp -= 4; W32(r_esp, 0x5ec92du); f_005eda7c();
    /* 005ec92d: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 005ec933: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec939: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005ec93c: cmp eax, dword ptr [ebp - 0x10c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffef4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec942: jne 0x5ec9bc */ if (!fZ) goto L_005ec9bc;
L_005ec944:; BB(0x005ec944);
    /* 005ec944: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec94a: call 0x5ed5c3 */ r_esp -= 4; W32(r_esp, 0x5ec94fu); f_005ed5c3();
    /* 005ec94f: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005ec955: shl ecx, 6 */ { u32 c = (6u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005ec958: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec95e: lea eax, [edx + ecx + 0x14] */ r_eax = (u32)(r_edx+r_ecx+0x14u);
    /* 005ec962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec963: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec966: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005ec969: shl edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005ec96c: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec972: lea ecx, [eax + edx + 0x14] */ r_ecx = (u32)(r_eax+r_edx+0x14u);
    /* 005ec976: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec977: push 0x69a54c */ { u32 v = 0x69a54cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec97c: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 005ec982: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec983: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5ec988u); f_00624050();
    /* 005ec988: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec98b: push 0x2030 */ { u32 v = 0x2030u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec990: push 0x69a578 */ { u32 v = 0x69a578u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec995: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 005ec99b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec99c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec99e: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5ec9a3u); f_0060f9f3();
    /* 005ec9a3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec9a6: push 0x2330 */ { u32 v = 0x2330u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec9ab: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ec9b1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ec9b3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ec9b9: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5ec9bcu); call_ind(t); }
L_005ec9bc:; BB(0x005ec9bc);
    /* 005ec9bc: jmp 0x5eca8b */ goto L_005eca8b;
L_005ec9c1:; BB(0x005ec9c1);
    /* 005ec9c1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec9c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec9c5: push 0x69a588 */ { u32 v = 0x69a588u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec9ca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec9cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec9ce: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec9d4: call 0x5eda7c */ r_esp -= 4; W32(r_esp, 0x5ec9d9u); f_005eda7c();
    /* 005ec9d9: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec9df: cmp dword ptr [ecx + 0xc], eax */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec9e2: jne 0x5ec9ff */ if (!fZ) goto L_005ec9ff;
L_005ec9e4:; BB(0x005ec9e4);
    /* 005ec9e4: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec9ea: call 0x5edcdd */ r_esp -= 4; W32(r_esp, 0x5ec9efu); f_005edcdd();
    /* 005ec9ef: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec9f4: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ec9fa: call 0x5edd35 */ r_esp -= 4; W32(r_esp, 0x5ec9ffu); f_005edd35();
L_005ec9ff:; BB(0x005ec9ff);
    /* 005ec9ff: jmp 0x5eca8b */ goto L_005eca8b;
L_005eca04:; BB(0x005eca04);
    /* 005eca04: cmp dword ptr [0x699d1c], -1 */ {  u32 a = R32((u32)(0x699d1cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eca0b: jne 0x5eca0f */ if (!fZ) goto L_005eca0f;
L_005eca0d:; BB(0x005eca0d);
    /* 005eca0d: jmp 0x5eca8b */ goto L_005eca8b;
L_005eca0f:; BB(0x005eca0f);
    /* 005eca0f: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5eca15u); call_ind(t); }
    /* 005eca15: sub eax, dword ptr [0x699d1c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x699d1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005eca1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eca1c: push 0x69a594 */ { u32 v = 0x69a594u; r_esp -= 4; W32(r_esp, v); }
    /* 005eca21: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 005eca27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eca28: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5eca2du); f_00624050();
    /* 005eca2d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eca30: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005eca36: cmp dword ptr [eax + 0x298], 0 */ {  u32 a = R32((u32)(r_eax+0x298u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eca3d: je 0x5eca5e */ if (fZ) goto L_005eca5e;
L_005eca3f:; BB(0x005eca3f);
    /* 005eca3f: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 005eca45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eca46: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005eca49: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005eca4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eca4d: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005eca53: mov ecx, dword ptr [ecx + 0x298] */ r_ecx = R32((u32)(r_ecx+0x298u));
    /* 005eca59: call 0x42c6e2 */ r_esp -= 4; W32(r_esp, 0x5eca5eu); f_0042c6e2();
L_005eca5e:; BB(0x005eca5e);
    /* 005eca5e: push 0x69a5a0 */ { u32 v = 0x69a5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eca63: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 005eca69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eca6a: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5eca6fu); f_00624520();
    /* 005eca6f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eca72: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 005eca78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eca79: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5eca7eu); f_0060fc40();
    /* 005eca7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eca81: mov dword ptr [0x699d1c], 0xffffffff */ W32((u32)(0x699d1cu), 0xffffffffu);
L_005eca8b:; BB(0x005eca8b);
    /* 005eca8b: mov esp, ebp */ r_esp = r_ebp;
    /* 005eca8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eca8e: ret 4 */ FN_RET(0x005ec642); r_esp += 8; return;
}

void f_005ecab9(void) /* FUN_005ecab9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ecab9);
    /* 005ecab9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecaba: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecabc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecabf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ecac2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005ecac5: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 005ecac8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 005ecacc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ecacf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ecad2: sub edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ecad5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005ecad8: cmp dword ptr [ebp - 8], 0x41 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ecadc: ja 0x5ecbbd */ if ((!fC&&!fZ)) goto L_005ecbbd;
L_005ecae2:; BB(0x005ecae2);
    /* 005ecae2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ecae5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ecae7: mov al, byte ptr [ecx + 0x5ecbeb] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x5ecbebu))) & 0xffu);
    /* 005ecaed: jmp dword ptr [eax*4 + 0x5ecbc3] */ { u32 t = R32((u32)(r_eax*4+0x5ecbc3u)); switch (t) { case 0x5ecaf4u: goto L_005ecaf4; case 0x5ecb24u: goto L_005ecb24; case 0x5ecb3au: goto L_005ecb3a; case 0x5ecb4du: goto L_005ecb4d; case 0x5ecb60u: goto L_005ecb60; case 0x5ecb73u: goto L_005ecb73; case 0x5ecb86u: goto L_005ecb86; case 0x5ecb99u: goto L_005ecb99; case 0x5ecbacu: goto L_005ecbac; case 0x5ecbbdu: goto L_005ecbbd; default: UNSUP(0x005ecaed, "jump table entry is not a known target"); } }
L_005ecaf4:; BB(0x005ecaf4);
    /* 005ecaf4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecaf7: cmp dword ptr [edx + 0x274], 0 */ {  u32 a = R32((u32)(r_edx+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecafe: je 0x5ecb1f */ if (fZ) goto L_005ecb1f;
L_005ecb00:; BB(0x005ecb00);
    /* 005ecb00: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005ecb03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb04: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ecb07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb08: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecb0b: mov ecx, dword ptr [edx + 0x274] */ r_ecx = R32((u32)(r_edx+0x274u));
    /* 005ecb11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecb14: mov edx, dword ptr [eax + 0x274] */ r_edx = R32((u32)(r_eax+0x274u));
    /* 005ecb1a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ecb1c: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x5ecb1fu); call_ind(t); }
L_005ecb1f:; BB(0x005ecb1f);
    /* 005ecb1f: jmp 0x5ecbbd */ goto L_005ecbbd;
L_005ecb24:; BB(0x005ecb24);
    /* 005ecb24: push 0x69a5a4 */ { u32 v = 0x69a5a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb29: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ecb2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb2d: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5ecb32u); f_00624510();
    /* 005ecb32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecb35: jmp 0x5ecbbd */ goto L_005ecbbd;
L_005ecb3a:; BB(0x005ecb3a);
    /* 005ecb3a: push 0x69a5b4 */ { u32 v = 0x69a5b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb3f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ecb42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb43: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5ecb48u); f_00624510();
    /* 005ecb48: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecb4b: jmp 0x5ecbbd */ goto L_005ecbbd;
L_005ecb4d:; BB(0x005ecb4d);
    /* 005ecb4d: push 0x69a5cc */ { u32 v = 0x69a5ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb52: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005ecb55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb56: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5ecb5bu); f_00624510();
    /* 005ecb5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecb5e: jmp 0x5ecbbd */ goto L_005ecbbd;
L_005ecb60:; BB(0x005ecb60);
    /* 005ecb60: push 0x69a5dc */ { u32 v = 0x69a5dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb65: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ecb68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb69: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5ecb6eu); f_00624510();
    /* 005ecb6e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecb71: jmp 0x5ecbbd */ goto L_005ecbbd;
L_005ecb73:; BB(0x005ecb73);
    /* 005ecb73: push 0x69a5f0 */ { u32 v = 0x69a5f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb78: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ecb7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb7c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5ecb81u); f_00624510();
    /* 005ecb81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecb84: jmp 0x5ecbbd */ goto L_005ecbbd;
L_005ecb86:; BB(0x005ecb86);
    /* 005ecb86: push 0x69a604 */ { u32 v = 0x69a604u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb8b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005ecb8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb8f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5ecb94u); f_00624510();
    /* 005ecb94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecb97: jmp 0x5ecbbd */ goto L_005ecbbd;
L_005ecb99:; BB(0x005ecb99);
    /* 005ecb99: push 0x69a614 */ { u32 v = 0x69a614u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb9e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ecba1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecba2: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5ecba7u); f_00624510();
    /* 005ecba7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecbaa: jmp 0x5ecbbd */ goto L_005ecbbd;
L_005ecbac:; BB(0x005ecbac);
    /* 005ecbac: push 0x69a620 */ { u32 v = 0x69a620u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecbb1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ecbb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecbb5: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5ecbbau); f_00624510();
    /* 005ecbba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ecbbd:; BB(0x005ecbbd);
    /* 005ecbbd: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecbbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecbc0: ret 0xc */ FN_RET(0x005ecab9); r_esp += 16; return;
}

void f_005ecc3c(void) /* FUN_005ecc3c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ecc3c);
    /* 005ecc3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecc3d: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecc3f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecc42: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ecc45: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecc47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecc48: ret 4 */ FN_RET(0x005ecc3c); r_esp += 8; return;
}

void f_005ecc4b(void) /* FUN_005ecc4b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ecc4b);
    /* 005ecc4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecc4c: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecc4e: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecc54: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005ecc5a: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecc5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecc5d: ret  */ FN_RET(0x005ecc4b); r_esp += 4; return;
}

void f_005ecc5e(void) /* FUN_005ecc5e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ecc5e);
    /* 005ecc5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecc5f: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecc61: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecc64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ecc67: push 0x69a7d8 */ { u32 v = 0x69a7d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecc6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecc6f: call 0x5ed723 */ r_esp -= 4; W32(r_esp, 0x5ecc74u); f_005ed723();
    /* 005ecc74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecc77: cmp dword ptr [eax + 0x274], 0 */ {  u32 a = R32((u32)(r_eax+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecc7e: je 0x5ecc9f */ if (fZ) goto L_005ecc9f;
L_005ecc80:; BB(0x005ecc80);
    /* 005ecc80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecc83: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ecc89: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecc8c: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ecc92: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ecc94: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x5ecc97u); call_ind(t); }
    /* 005ecc97: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005ecc9a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ecc9d: jmp 0x5ecca6 */ goto L_005ecca6;
L_005ecc9f:; BB(0x005ecc9f);
    /* 005ecc9f: mov dword ptr [ebp - 8], 0xc */ W32((u32)(r_ebp+0xfffffff8u), 0xcu);
L_005ecca6:; BB(0x005ecca6);
    /* 005ecca6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ecca9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eccaa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005eccad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eccae: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005eccb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eccb3: call 0x5eccec */ r_esp -= 4; W32(r_esp, 0x5eccb8u); f_005eccec();
    /* 005eccb8: mov esp, ebp */ r_esp = r_ebp;
    /* 005eccba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eccbb: ret 4 */ FN_RET(0x005ecc5e); r_esp += 8; return;
}

void f_005eccbe(void) /* FUN_005eccbe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eccbe);
    /* 005eccbe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eccbf: mov ebp, esp */ r_ebp = r_esp;
    /* 005eccc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eccc2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eccc5: push 0x69a7fc */ { u32 v = 0x69a7fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005eccca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecccd: call 0x5ed723 */ r_esp -= 4; W32(r_esp, 0x5eccd2u); f_005ed723();
    /* 005eccd2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005eccd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eccd6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005eccd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eccda: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005eccdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eccde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecce1: call 0x5eccec */ r_esp -= 4; W32(r_esp, 0x5ecce6u); f_005eccec();
    /* 005ecce6: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecce8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecce9: ret 0xc */ FN_RET(0x005eccbe); r_esp += 16; return;
}

void f_005eccec(void) /* FUN_005eccec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eccec);
    /* 005eccec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecced: mov ebp, esp */ r_ebp = r_esp;
    /* 005eccef: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eccf2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005eccf5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eccf8: call 0x5ecdb3 */ r_esp -= 4; W32(r_esp, 0x5eccfdu); f_005ecdb3();
    /* 005eccfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eccff: jne 0x5ecd06 */ if (!fZ) goto L_005ecd06;
L_005ecd01:; BB(0x005ecd01);
    /* 005ecd01: jmp 0x5ecdad */ goto L_005ecdad;
L_005ecd06:; BB(0x005ecd06);
    /* 005ecd06: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005ecd09: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ecd0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd0d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ecd12u); f_0048ab58();
    /* 005ecd12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecd15: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ecd18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecd1b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ecd1e: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005ecd20: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ecd23: cmp dword ptr [eax + 0x274], 0 */ {  u32 a = R32((u32)(r_eax+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecd2a: je 0x5ecd49 */ if (fZ) goto L_005ecd49;
L_005ecd2c:; BB(0x005ecd2c);
    /* 005ecd2c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ecd2f: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ecd35: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ecd38: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ecd3e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ecd40: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x5ecd43u); call_ind(t); }
    /* 005ecd43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecd46: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
L_005ecd49:; BB(0x005ecd49);
    /* 005ecd49: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecd4c: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005ecd4f: mov byte ptr [edx + 4], al */ W8((u32)(r_edx+0x4u), (u8)r_eax);
    /* 005ecd52: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecd56: je 0x5ecd6f */ if (fZ) goto L_005ecd6f;
L_005ecd58:; BB(0x005ecd58);
    /* 005ecd58: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ecd5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd5c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ecd5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd60: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecd63: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ecd66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd67: call 0x625050 */ r_esp -= 4; W32(r_esp, 0x5ecd6cu); f_00625050();
    /* 005ecd6c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ecd6f:; BB(0x005ecd6f);
    /* 005ecd6f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ecd72: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ecd75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd76: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecd79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd7a: call dword ptr [0x6fc414] */ { u32 t = R32((u32)(0x6fc414u)); r_esp -= 4; W32(r_esp, 0x5ecd80u); call_ind(t); }
    /* 005ecd80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecd83: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ecd86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecd89: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ecd8c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ecd8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd90: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5ecd95u); f_0048ac1b();
    /* 005ecd95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecd98: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ecd9b: mov eax, dword ptr [edx + 0x2cc] */ r_eax = R32((u32)(r_edx+0x2ccu));
    /* 005ecda1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ecda4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ecda7: mov dword ptr [ecx + 0x2cc], eax */ W32((u32)(r_ecx+0x2ccu), r_eax);
L_005ecdad:; BB(0x005ecdad);
    /* 005ecdad: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecdaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecdb0: ret 0xc */ FN_RET(0x005eccec); r_esp += 16; return;
}

void f_005ecdb3(void) /* FUN_005ecdb3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ecdb3);
    /* 005ecdb3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecdb4: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecdb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecdb7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ecdba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecdbd: mov eax, dword ptr [eax + 0x2a8] */ r_eax = R32((u32)(r_eax+0x2a8u));
    /* 005ecdc3: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecdc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecdc6: ret  */ FN_RET(0x005ecdb3); r_esp += 4; return;
}

void f_005ecdc7(void) /* FUN_005ecdc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ecdc7);
    /* 005ecdc7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecdc8: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecdca: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecdcd: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005ecdd0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ecdd3: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ecdd6: cmp dword ptr [ecx + eax*4 + 0x254], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x254u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecdde: je 0x5ecde5 */ if (fZ) goto L_005ecde5;
L_005ecde0:; BB(0x005ecde0);
    /* 005ecde0: jmp 0x5ecebb */ goto L_005ecebb;
L_005ecde5:; BB(0x005ecde5);
    /* 005ecde5: cmp dword ptr [ebp + 8], 8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ecde9: jge 0x5ece18 */ if ((fS==fO)) goto L_005ece18;
L_005ecdeb:; BB(0x005ecdeb);
    /* 005ecdeb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ecdee: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ecdf1: cmp dword ptr [eax + edx*4 + 0x214], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x214u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecdf9: je 0x5ece18 */ if (fZ) goto L_005ece18;
L_005ecdfb:; BB(0x005ecdfb);
    /* 005ecdfb: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ecdfe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ece01: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ece04: je 0x5ece18 */ if (fZ) goto L_005ece18;
L_005ece06:; BB(0x005ece06);
    /* 005ece06: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ece09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ece0a: call dword ptr [0x6fc43c] */ { u32 t = R32((u32)(0x6fc43cu)); r_esp -= 4; W32(r_esp, 0x5ece10u); call_ind(t); }
    /* 005ece10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ece13: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005ece16: jmp 0x5ece1f */ goto L_005ece1f;
L_005ece18:; BB(0x005ece18);
    /* 005ece18: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005ece1f:; BB(0x005ece1f);
    /* 005ece1f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ece22: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005ece25: cmp dword ptr [ebp - 0x4c], -2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ece29: je 0x5ecea1 */ if (fZ) goto L_005ecea1;
L_005ece2b:; BB(0x005ece2b);
    /* 005ece2b: cmp dword ptr [ebp - 0x4c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ece2f: je 0x5ece36 */ if (fZ) goto L_005ece36;
L_005ece31:; BB(0x005ece31);
    /* 005ece31: jmp 0x5ecebb */ goto L_005ecebb;
L_005ece36:; BB(0x005ece36);
    /* 005ece36: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ece39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ece3a: push 0x69a814 */ { u32 v = 0x69a814u; r_esp -= 4; W32(r_esp, v); }
    /* 005ece3f: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005ece42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ece43: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5ece48u); f_00624050();
    /* 005ece48: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ece4b: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005ece4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ece4f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ece52: call 0x5ed723 */ r_esp -= 4; W32(r_esp, 0x5ece57u); f_005ed723();
    /* 005ece57: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ece5a: cmp dword ptr [edx + 0x2e0], 0 */ {  u32 a = R32((u32)(r_edx+0x2e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ece61: jne 0x5ece9f */ if (!fZ) goto L_005ece9f;
L_005ece63:; BB(0x005ece63);
    /* 005ece63: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ece66: call 0x5eb669 */ r_esp -= 4; W32(r_esp, 0x5ece6bu); f_005eb669();
    /* 005ece6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ece6d: jne 0x5ece9f */ if (!fZ) goto L_005ece9f;
L_005ece6f:; BB(0x005ece6f);
    /* 005ece6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ece72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ece73: push 0x69a840 */ { u32 v = 0x69a840u; r_esp -= 4; W32(r_esp, v); }
    /* 005ece78: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005ece7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ece7c: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5ece81u); f_00624050();
    /* 005ece81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ece84: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005ece87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ece88: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ece8b: call 0x5ed723 */ r_esp -= 4; W32(r_esp, 0x5ece90u); f_005ed723();
    /* 005ece90: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ece93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ece94: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ece97: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ece99: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ece9c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5ece9fu); call_ind(t); }
L_005ece9f:; BB(0x005ece9f);
    /* 005ece9f: jmp 0x5ecebb */ goto L_005ecebb;
L_005ecea1:; BB(0x005ecea1);
    /* 005ecea1: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecea6: mov eax, dword ptr [0x68712c] */ r_eax = R32((u32)(0x68712cu));
    /* 005eceab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eceac: push 0x69a85c */ { u32 v = 0x69a85cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eceb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eceb3: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5eceb8u); f_0060f9f3();
    /* 005eceb8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ecebb:; BB(0x005ecebb);
    /* 005ecebb: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecebd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecebe: ret 4 */ FN_RET(0x005ecdc7); r_esp += 8; return;
}

void f_005ecec1(void) /* FUN_005ecec1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ecec1);
    /* 005ecec1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecec2: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecec4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecec7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ececa: cmp dword ptr [0x6fc430], 0 */ {  u32 a = R32((u32)(0x6fc430u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eced1: je 0x5ecf76 */ if (fZ) goto L_005ecf76;
L_005eced7:; BB(0x005eced7);
    /* 005eced7: call dword ptr [0x6fc430] */ { u32 t = R32((u32)(0x6fc430u)); r_esp -= 4; W32(r_esp, 0x5eceddu); call_ind(t); }
    /* 005ecedd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ecee0: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ecee4: jl 0x5ecf50 */ if ((fS!=fO)) goto L_005ecf50;
L_005ecee6:; BB(0x005ecee6);
    /* 005ecee6: call dword ptr [0x6fc444] */ { u32 t = R32((u32)(0x6fc444u)); r_esp -= 4; W32(r_esp, 0x5eceecu); call_ind(t); }
    /* 005eceec: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005eceef: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecef3: jne 0x5ecf3a */ if (!fZ) goto L_005ecf3a;
L_005ecef5:; BB(0x005ecef5);
    /* 005ecef5: push 0x10002000 */ { u32 v = 0x10002000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecefa: push 0x69a884 */ { u32 v = 0x69a884u; r_esp -= 4; W32(r_esp, v); }
    /* 005eceff: push 0x69a894 */ { u32 v = 0x69a894u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf06: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5ecf0bu); f_0060f9f3();
    /* 005ecf0b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecf0e: call dword ptr [0x6fc444] */ { u32 t = R32((u32)(0x6fc444u)); r_esp -= 4; W32(r_esp, 0x5ecf14u); call_ind(t); }
    /* 005ecf14: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ecf17: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecf1b: jne 0x5ecf3a */ if (!fZ) goto L_005ecf3a;
L_005ecf1d:; BB(0x005ecf1d);
    /* 005ecf1d: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf22: push 0x69a8fc */ { u32 v = 0x69a8fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf27: push 0x69a90c */ { u32 v = 0x69a90cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf2e: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5ecf33u); f_0060f9f3();
    /* 005ecf33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecf36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ecf38: jmp 0x5ecf78 */ goto L_005ecf78;
L_005ecf3a:; BB(0x005ecf3a);
    /* 005ecf3a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ecf3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf3e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ecf41: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ecf43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ecf46: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5ecf49u); call_ind(t); }
    /* 005ecf49: mov eax, 2 */ r_eax = 0x2u;
    /* 005ecf4e: jmp 0x5ecf78 */ goto L_005ecf78;
L_005ecf50:; BB(0x005ecf50);
    /* 005ecf50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecf53: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ecf56: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecf5a: je 0x5ecf6b */ if (fZ) goto L_005ecf6b;
L_005ecf5c:; BB(0x005ecf5c);
    /* 005ecf5c: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecf60: je 0x5ecf64 */ if (fZ) goto L_005ecf64;
L_005ecf62:; BB(0x005ecf62);
    /* 005ecf62: jmp 0x5ecf72 */ goto L_005ecf72;
L_005ecf64:; BB(0x005ecf64);
    /* 005ecf64: mov eax, 2 */ r_eax = 0x2u;
    /* 005ecf69: jmp 0x5ecf78 */ goto L_005ecf78;
L_005ecf6b:; BB(0x005ecf6b);
    /* 005ecf6b: mov eax, 1 */ r_eax = 0x1u;
    /* 005ecf70: jmp 0x5ecf78 */ goto L_005ecf78;
L_005ecf72:; BB(0x005ecf72);
    /* 005ecf72: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ecf74: jmp 0x5ecf78 */ goto L_005ecf78;
L_005ecf76:; BB(0x005ecf76);
    /* 005ecf76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005ecf78:; BB(0x005ecf78);
    /* 005ecf78: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecf7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecf7b: ret  */ FN_RET(0x005ecec1); r_esp += 4; return;
}

void f_005ecf7c(void) /* FUN_005ecf7c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ecf7c);
    /* 005ecf7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf7d: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecf7f: sub esp, 0x114 */ {  u32 a = r_esp; u32 b = 0x114u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecf85: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 005ecf8b: mov word ptr [ebp - 0x110], 0 */ W16((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 005ecf94: mov word ptr [ebp - 0x108], 0 */ W16((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 005ecf9d: jmp 0x5ecfb1 */ goto L_005ecfb1;
L_005ecf9f:; BB(0x005ecf9f);
    /* 005ecf9f: mov ax, word ptr [ebp - 0x108] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffef8u))) & 0xffffu);
    /* 005ecfa6: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005ecfaa: mov word ptr [ebp - 0x108], ax */ W16((u32)(r_ebp+0xfffffef8u), (u16)r_eax);
L_005ecfb1:; BB(0x005ecfb1);
    /* 005ecfb1: movsx ecx, word ptr [ebp - 0x108] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef8u));
    /* 005ecfb8: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ecfbb: jge 0x5ecfe6 */ if ((fS==fO)) goto L_005ecfe6;
L_005ecfbd:; BB(0x005ecfbd);
    /* 005ecfbd: movsx edx, word ptr [ebp - 0x108] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef8u));
    /* 005ecfc4: shl edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005ecfc7: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ecfcd: lea ecx, [eax + edx + 0x14] */ r_ecx = (u32)(r_eax+r_edx+0x14u);
    /* 005ecfd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecfd2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ecfd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecfd6: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5ecfdbu); f_006240c0();
    /* 005ecfdb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecfde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecfe0: jne 0x5ecfe4 */ if (!fZ) goto L_005ecfe4;
L_005ecfe2:; BB(0x005ecfe2);
    /* 005ecfe2: jmp 0x5ecfe6 */ goto L_005ecfe6;
L_005ecfe4:; BB(0x005ecfe4);
    /* 005ecfe4: jmp 0x5ecf9f */ goto L_005ecf9f;
L_005ecfe6:; BB(0x005ecfe6);
    /* 005ecfe6: movsx eax, word ptr [ebp - 0x108] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef8u));
    /* 005ecfed: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecff0: jne 0x5ecff7 */ if (!fZ) goto L_005ecff7;
L_005ecff2:; BB(0x005ecff2);
    /* 005ecff2: jmp 0x5ed199 */ goto L_005ed199;
L_005ecff7:; BB(0x005ecff7);
    /* 005ecff7: movsx ecx, word ptr [ebp - 0x108] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef8u));
    /* 005ecffe: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ed004: cmp ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed007: jne 0x5ed00e */ if (!fZ) goto L_005ed00e;
L_005ed009:; BB(0x005ed009);
    /* 005ed009: jmp 0x5ed199 */ goto L_005ed199;
L_005ed00e:; BB(0x005ed00e);
    /* 005ed00e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed010: call dword ptr [0x6331e4] */ { u32 t = R32((u32)(0x6331e4u)); r_esp -= 4; W32(r_esp, 0x5ed016u); call_ind(t); }
    /* 005ed016: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005ed019: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ed01e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed020: je 0x5ed065 */ if (fZ) goto L_005ed065;
L_005ed022:; BB(0x005ed022);
    /* 005ed022: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ed028: call 0x5edcdd */ r_esp -= 4; W32(r_esp, 0x5ed02du); f_005edcdd();
    /* 005ed02d: movsx ecx, word ptr [ebp - 0x108] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef8u));
    /* 005ed034: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed035: push 0x69a960 */ { u32 v = 0x69a960u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed03a: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ed040: call 0x5edca9 */ r_esp -= 4; W32(r_esp, 0x5ed045u); f_005edca9();
    /* 005ed045: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed04a: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ed050: call 0x5edd35 */ r_esp -= 4; W32(r_esp, 0x5ed055u); f_005edd35();
    /* 005ed055: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5ed05bu); call_ind(t); }
    /* 005ed05b: mov dword ptr [0x699d1c], eax */ W32((u32)(0x699d1cu), r_eax);
    /* 005ed060: jmp 0x5ed199 */ goto L_005ed199;
L_005ed065:; BB(0x005ed065);
    /* 005ed065: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ed06b: call 0x5ed832 */ r_esp -= 4; W32(r_esp, 0x5ed070u); f_005ed832();
    /* 005ed070: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ed076: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed079: je 0x5ed099 */ if (fZ) goto L_005ed099;
L_005ed07b:; BB(0x005ed07b);
    /* 005ed07b: push 0x2020 */ { u32 v = 0x2020u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed080: push 0x69a96c */ { u32 v = 0x69a96cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed085: push 0x69a97c */ { u32 v = 0x69a97cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed08a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed08c: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5ed091u); f_0060f9f3();
    /* 005ed091: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed094: jmp 0x5ed199 */ goto L_005ed199;
L_005ed099:; BB(0x005ed099);
    /* 005ed099: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed09c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed09d: push 0x69a9b0 */ { u32 v = 0x69a9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0a2: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005ed0a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0a9: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5ed0aeu); f_00624050();
    /* 005ed0ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed0b1: push 0x2024 */ { u32 v = 0x2024u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0b6: push 0x69a9f0 */ { u32 v = 0x69a9f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0bb: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 005ed0c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0c4: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5ed0c9u); f_0060f9f3();
    /* 005ed0c9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed0cc: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 005ed0d2: cmp dword ptr [ebp - 0x104], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed0d9: je 0x5ed0e0 */ if (fZ) goto L_005ed0e0;
L_005ed0db:; BB(0x005ed0db);
    /* 005ed0db: jmp 0x5ed199 */ goto L_005ed199;
L_005ed0e0:; BB(0x005ed0e0);
    /* 005ed0e0: mov word ptr [ebp - 0x10c], 0 */ W16((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 005ed0e9: jmp 0x5ed0fd */ goto L_005ed0fd;
L_005ed0eb:; BB(0x005ed0eb);
    /* 005ed0eb: mov ax, word ptr [ebp - 0x10c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffef4u))) & 0xffffu);
    /* 005ed0f2: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005ed0f6: mov word ptr [ebp - 0x10c], ax */ W16((u32)(r_ebp+0xfffffef4u), (u16)r_eax);
L_005ed0fd:; BB(0x005ed0fd);
    /* 005ed0fd: movsx ecx, word ptr [ebp - 0x10c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef4u));
    /* 005ed104: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed107: jge 0x5ed14b */ if ((fS==fO)) goto L_005ed14b;
L_005ed109:; BB(0x005ed109);
    /* 005ed109: movsx edx, word ptr [ebp - 0x10c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef4u));
    /* 005ed110: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ed116: cmp dword ptr [eax + edx*4 + 0x214], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x214u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed11e: je 0x5ed149 */ if (fZ) goto L_005ed149;
L_005ed120:; BB(0x005ed120);
    /* 005ed120: movsx ecx, word ptr [ebp - 0x10c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef4u));
    /* 005ed127: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ed12d: cmp dword ptr [edx + ecx*4 + 0x254], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x254u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed135: jne 0x5ed149 */ if (!fZ) goto L_005ed149;
L_005ed137:; BB(0x005ed137);
    /* 005ed137: mov ax, word ptr [ebp - 0x110] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffef0u))) & 0xffffu);
    /* 005ed13e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005ed142: mov word ptr [ebp - 0x110], ax */ W16((u32)(r_ebp+0xfffffef0u), (u16)r_eax);
L_005ed149:; BB(0x005ed149);
    /* 005ed149: jmp 0x5ed0eb */ goto L_005ed0eb;
L_005ed14b:; BB(0x005ed14b);
    /* 005ed14b: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ed151: call 0x5edcdd */ r_esp -= 4; W32(r_esp, 0x5ed156u); f_005edcdd();
    /* 005ed156: movsx ecx, word ptr [ebp - 0x108] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef8u));
    /* 005ed15d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed15e: push 0x69aa00 */ { u32 v = 0x69aa00u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed163: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ed169: call 0x5edca9 */ r_esp -= 4; W32(r_esp, 0x5ed16eu); f_005edca9();
    /* 005ed16e: movsx edx, word ptr [ebp - 0x110] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef0u));
    /* 005ed175: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ed178: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed179: push 0x69aa0c */ { u32 v = 0x69aa0cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed17e: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ed184: call 0x5edca9 */ r_esp -= 4; W32(r_esp, 0x5ed189u); f_005edca9();
    /* 005ed189: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed18e: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ed194: call 0x5edd35 */ r_esp -= 4; W32(r_esp, 0x5ed199u); f_005edd35();
L_005ed199:; BB(0x005ed199);
    /* 005ed199: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed19b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed19c: ret 4 */ FN_RET(0x005ecf7c); r_esp += 8; return;
}

void f_005ed19f(void) /* FUN_005ed19f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ed19f);
    /* 005ed19f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1a0: mov ebp, esp */ r_ebp = r_esp;
    /* 005ed1a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1a3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ed1a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ed1a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ed1ac: mov dword ptr [eax + 0x2e8], ecx */ W32((u32)(r_eax+0x2e8u), r_ecx);
    /* 005ed1b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed1b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed1b5: ret 4 */ FN_RET(0x005ed19f); r_esp += 8; return;
}

void f_005ed1b8(void) /* FUN_005ed1b8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ed1b8);
    /* 005ed1b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005ed1bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1bc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ed1bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ed1c2: mov eax, dword ptr [eax + 0x2e8] */ r_eax = R32((u32)(r_eax+0x2e8u));
    /* 005ed1c8: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed1ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed1cb: ret  */ FN_RET(0x005ed1b8); r_esp += 4; return;
}

void f_005ed1cc(void) /* FUN_005ed1cc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ed1cc);
    /* 005ed1cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1cd: mov ebp, esp */ r_ebp = r_esp;
    /* 005ed1cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1d0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ed1d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed1d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ed1d9: mov dword ptr [ecx + eax*4 + 0x234], 0 */ W32((u32)(r_ecx+r_eax*4+0x234u), 0x0u);
    /* 005ed1e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ed1e7: cmp dword ptr [edx + 0x274], 0 */ {  u32 a = R32((u32)(r_edx+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed1ee: je 0x5ed211 */ if (fZ) goto L_005ed211;
L_005ed1f0:; BB(0x005ed1f0);
    /* 005ed1f0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed1f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ed1f7: mov ecx, dword ptr [ecx + 0x274] */ r_ecx = R32((u32)(r_ecx+0x274u));
    /* 005ed1fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ed200: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005ed206: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ed208: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5ed20bu); call_ind(t); }
    /* 005ed20b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed20d: je 0x5ed211 */ if (fZ) goto L_005ed211;
L_005ed20f:; BB(0x005ed20f);
    /* 005ed20f: jmp 0x5ed25d */ goto L_005ed25d;
L_005ed211:; BB(0x005ed211);
    /* 005ed211: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed214: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ed217: cmp dword ptr [ecx + eax*4 + 0x214], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x214u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed21f: je 0x5ed241 */ if (fZ) goto L_005ed241;
L_005ed221:; BB(0x005ed221);
    /* 005ed221: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ed224: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ed227: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ed22a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ed22d: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005ed230: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ed233: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ed236: mov dword ptr [eax + edx*4 + 0x214], 0 */ W32((u32)(r_eax+r_edx*4+0x214u), 0x0u);
L_005ed241:; BB(0x005ed241);
    /* 005ed241: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ed244: shl ecx, 6 */ { u32 c = (6u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005ed247: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ed24a: mov byte ptr [edx + ecx + 0x14], 0 */ W8((u32)(r_edx+r_ecx+0x14u), 0x0u);
    /* 005ed24f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed252: shl eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005ed255: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ed258: mov byte ptr [ecx + eax + 0x34], 0 */ W8((u32)(r_ecx+r_eax+0x34u), 0x0u);
L_005ed25d:; BB(0x005ed25d);
    /* 005ed25d: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed25f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed260: ret 4 */ FN_RET(0x005ed1cc); r_esp += 8; return;
}

