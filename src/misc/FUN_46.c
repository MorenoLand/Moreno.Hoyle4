#include "protos.h"

void f_005fce90(void) /* FUN_005fce90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fce90);
    /* 005fce90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fce91: mov ebp, esp */ r_ebp = r_esp;
    /* 005fce93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fce94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fce97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fce9a: call 0x5fc3d5 */ r_esp -= 4; W32(r_esp, 0x5fce9fu); f_005fc3d5();
    /* 005fce9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fcea2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fcea5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcea7: je 0x5fceb5 */ if (fZ) goto L_005fceb5;
L_005fcea9:; BB(0x005fcea9);
    /* 005fcea9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fceac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcead: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5fceb2u); f_0048ac1b();
    /* 005fceb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fceb5:; BB(0x005fceb5);
    /* 005fceb5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fceb8: mov esp, ebp */ r_esp = r_ebp;
    /* 005fceba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fcebb: ret 4 */ FN_RET(0x005fce90); r_esp += 8; return;
}

void f_005fcec0(void) /* FUN_005fcec0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fcec0);
    /* 005fcec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fcec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fcec7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fceca: call 0x5fc499 */ r_esp -= 4; W32(r_esp, 0x5fcecfu); f_005fc499();
    /* 005fcecf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fced2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fced5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fced7: je 0x5fcee5 */ if (fZ) goto L_005fcee5;
L_005fced9:; BB(0x005fced9);
    /* 005fced9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcedc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcedd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5fcee2u); f_0048ac1b();
    /* 005fcee2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fcee5:; BB(0x005fcee5);
    /* 005fcee5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcee8: mov esp, ebp */ r_esp = r_ebp;
    /* 005fceea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fceeb: ret 4 */ FN_RET(0x005fcec0); r_esp += 8; return;
}

void f_005fcef0(void) /* FUN_005fcef0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fcef0);
    /* 005fcef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcef1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fcef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fcef7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcefa: call 0x5fc7a7 */ r_esp -= 4; W32(r_esp, 0x5fceffu); f_005fc7a7();
    /* 005fceff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fcf02: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fcf05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcf07: je 0x5fcf15 */ if (fZ) goto L_005fcf15;
L_005fcf09:; BB(0x005fcf09);
    /* 005fcf09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcf0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcf0d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5fcf12u); f_0048ac1b();
    /* 005fcf12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fcf15:; BB(0x005fcf15);
    /* 005fcf15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcf18: mov esp, ebp */ r_esp = r_ebp;
    /* 005fcf1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fcf1b: ret 4 */ FN_RET(0x005fcef0); r_esp += 8; return;
}

void f_005fcf20(void) /* FUN_005fcf20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fcf20);
    /* 005fcf20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcf21: mov ebp, esp */ r_ebp = r_esp;
    /* 005fcf23: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fcf26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fcf29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcf2c: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5fcf31u); f_005e3fb0();
    /* 005fcf31: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcf34: mov dword ptr [eax], 0x63c3d4 */ W32((u32)(r_eax), 0x63c3d4u);
    /* 005fcf3a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcf3d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fcf40: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 005fcf43: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcf46: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fcf49: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 005fcf4c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcf4f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005fcf52: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005fcf55: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcf58: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005fcf5b: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 005fcf5e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcf61: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 005fcf68: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcf6d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5fcf72u); f_0048ab58();
    /* 005fcf72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fcf75: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fcf78: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcf7c: je 0x5fcf8b */ if (fZ) goto L_005fcf8b;
L_005fcf7e:; BB(0x005fcf7e);
    /* 005fcf7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcf81: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5fcf86u); f_005e8590();
    /* 005fcf86: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005fcf89: jmp 0x5fcf92 */ goto L_005fcf92;
L_005fcf8b:; BB(0x005fcf8b);
    /* 005fcf8b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005fcf92:; BB(0x005fcf92);
    /* 005fcf92: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcf95: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcf98: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 005fcf9b: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcf9d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcfa0: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fcfa3: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5fcfa8u); f_005e87aa();
    /* 005fcfa8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcfab: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fcfae: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcfb1: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fcfb4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fcfb6: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5fcfb9u); call_ind(t); }
    /* 005fcfb9: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005fcfbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcfbd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcfc0: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fcfc3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcfc6: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fcfc9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fcfcb: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5fcfceu); call_ind(t); }
    /* 005fcfce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcfd1: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005fcfd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcfd5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcfd8: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005fcfdb: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fcfde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcfdf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcfe2: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fcfe5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcfe8: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fcfeb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fcfed: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5fcff0u); call_ind(t); }
    /* 005fcff0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcff3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcff6: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005fcff9: sub edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005fcffc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcffd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd000: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd003: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5fd008u); f_005e8775();
    /* 005fd008: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd00b: mov dword ptr [ecx + 0x8c], 0xffffffff */ W32((u32)(r_ecx+0x8cu), 0xffffffffu);
    /* 005fd015: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd018: mov dword ptr [edx + 0xb4], 0 */ W32((u32)(r_edx+0xb4u), 0x0u);
    /* 005fd022: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd025: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 005fd02f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd032: mov dword ptr [ecx + 0x6c], 0x14 */ W32((u32)(r_ecx+0x6cu), 0x14u);
    /* 005fd039: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd03c: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
    /* 005fd046: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd049: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
    /* 005fd053: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd056: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 005fd060: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd063: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 005fd06d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd070: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 005fd07a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd07d: call 0x5e4035 */ r_esp -= 4; W32(r_esp, 0x5fd082u); f_005e4035();
    /* 005fd082: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd085: call 0x5fd306 */ r_esp -= 4; W32(r_esp, 0x5fd08au); f_005fd306();
    /* 005fd08a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd08d: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd08f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd090: ret 0x14 */ FN_RET(0x005fcf20); r_esp += 24; return;
}

void f_005fd093(void) /* FUN_005fd093 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd093);
    /* 005fd093: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd094: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd096: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd099: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fd09c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd09f: mov dword ptr [eax], 0x63c3d4 */ W32((u32)(r_eax), 0x63c3d4u);
    /* 005fd0a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd0a8: cmp dword ptr [ecx + 0x7c], 0 */ {  u32 a = R32((u32)(r_ecx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd0ac: je 0x5fd0e5 */ if (fZ) goto L_005fd0e5;
L_005fd0ae:; BB(0x005fd0ae);
    /* 005fd0ae: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd0b1: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd0b4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005fd0b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd0ba: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fd0bd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd0c1: je 0x5fd0d4 */ if (fZ) goto L_005fd0d4;
L_005fd0c3:; BB(0x005fd0c3);
    /* 005fd0c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd0c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd0c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fd0ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd0cd: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5fd0cfu); call_ind(t); }
    /* 005fd0cf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fd0d2: jmp 0x5fd0db */ goto L_005fd0db;
L_005fd0d4:; BB(0x005fd0d4);
    /* 005fd0d4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005fd0db:; BB(0x005fd0db);
    /* 005fd0db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd0de: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
L_005fd0e5:; BB(0x005fd0e5);
    /* 005fd0e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd0e8: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x5fd0edu); f_005e3fed();
    /* 005fd0ed: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd0ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd0f0: ret  */ FN_RET(0x005fd093); r_esp += 4; return;
}

void f_005fd0f1(void) /* FUN_005fd0f1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd0f1);
    /* 005fd0f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd0f2: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd0f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd0f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fd0f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fd0f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd0fc: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd100: je 0x5fd107 */ if (fZ) goto L_005fd107;
L_005fd102:; BB(0x005fd102);
    /* 005fd102: jmp 0x5fd301 */ goto L_005fd301;
L_005fd107:; BB(0x005fd107);
    /* 005fd107: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd10a: cmp dword ptr [ecx + 0xb4], 0 */ {  u32 a = R32((u32)(r_ecx+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd111: je 0x5fd1a6 */ if (fZ) goto L_005fd1a6;
L_005fd117:; BB(0x005fd117);
    /* 005fd117: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd11a: call 0x5fd97c */ r_esp -= 4; W32(r_esp, 0x5fd11fu); f_005fd97c();
    /* 005fd11f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd121: je 0x5fd16b */ if (fZ) goto L_005fd16b;
L_005fd123:; BB(0x005fd123);
    /* 005fd123: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd126: mov ecx, dword ptr [edx + 0x7c] */ r_ecx = R32((u32)(r_edx+0x7cu));
    /* 005fd129: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x5fd12eu); f_005d96a9();
    /* 005fd12e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd130: je 0x5fd15a */ if (fZ) goto L_005fd15a;
L_005fd132:; BB(0x005fd132);
    /* 005fd132: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd135: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd138: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd13b: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd13e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd140: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5fd143u); call_ind(t); }
    /* 005fd143: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd146: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 005fd14c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd14f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd152: mov dword ptr [edx + 0x94], ecx */ W32((u32)(r_edx+0x94u), r_ecx);
    /* 005fd158: jmp 0x5fd16b */ goto L_005fd16b;
L_005fd15a:; BB(0x005fd15a);
    /* 005fd15a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd15d: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd160: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd163: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd166: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd168: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5fd16bu); call_ind(t); }
L_005fd16b:; BB(0x005fd16b);
    /* 005fd16b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd16e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd171: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 005fd177: cmp edx, dword ptr [ecx + 0x98] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x98u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fd17d: jl 0x5fd1a1 */ if ((fS!=fO)) goto L_005fd1a1;
L_005fd17f:; BB(0x005fd17f);
    /* 005fd17f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd182: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 005fd18c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd18f: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 005fd199: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd19c: call 0x5fd32a */ r_esp -= 4; W32(r_esp, 0x5fd1a1u); f_005fd32a();
L_005fd1a1:; BB(0x005fd1a1);
    /* 005fd1a1: jmp 0x5fd301 */ goto L_005fd301;
L_005fd1a6:; BB(0x005fd1a6);
    /* 005fd1a6: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005fd1ac: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5fd1b1u); f_005d9e23();
    /* 005fd1b1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005fd1b2: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fd1b4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005fd1b6: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fd1b9: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fd1bb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005fd1bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd1bf: jne 0x5fd301 */ if (!fZ) goto L_005fd301;
L_005fd1c5:; BB(0x005fd1c5);
    /* 005fd1c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd1c8: cmp dword ptr [edx + 0x80], 3 */ {  u32 a = R32((u32)(r_edx+0x80u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd1cf: jne 0x5fd2a6 */ if (!fZ) goto L_005fd2a6;
L_005fd1d5:; BB(0x005fd1d5);
    /* 005fd1d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd1d8: mov esi, dword ptr [eax + 0xac] */ r_esi = R32((u32)(r_eax+0xacu));
    /* 005fd1de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd1e1: add esi, dword ptr [ecx + 0xb0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xb0u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005fd1e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd1ea: call 0x5fd9f9 */ r_esp -= 4; W32(r_esp, 0x5fd1efu); f_005fd9f9();
    /* 005fd1ef: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fd1f1: jle 0x5fd2a6 */ if ((fZ||fS!=fO)) goto L_005fd2a6;
L_005fd1f7:; BB(0x005fd1f7);
    /* 005fd1f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd1fa: call 0x5fd9c9 */ r_esp -= 4; W32(r_esp, 0x5fd1ffu); f_005fd9c9();
    /* 005fd1ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd202: add edx, 0x9c */ {  u32 a = r_edx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fd208: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd209: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd20c: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd20f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd212: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd215: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd217: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5fd21au); call_ind(t); }
    /* 005fd21a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd21d: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd220: call 0x5e8dcc */ r_esp -= 4; W32(r_esp, 0x5fd225u); f_005e8dcc();
    /* 005fd225: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd228: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd22b: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 005fd231: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd234: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005fd23a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd23b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd23e: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd241: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5fd246u); f_005e8740();
    /* 005fd246: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd249: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd24c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005fd24f: sub ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd252: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd255: sub ecx, dword ptr [edx + 0x84] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x84u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd25b: mov eax, ecx */ r_eax = r_ecx;
    /* 005fd25d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005fd25e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005fd260: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005fd262: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd265: add eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd268: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd26b: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 005fd271: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd274: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005fd277: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd278: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd27b: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005fd281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd282: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd285: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd288: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd28b: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd28e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd290: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5fd293u); call_ind(t); }
    /* 005fd293: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd296: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd299: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd29c: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd29f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd2a1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5fd2a4u); call_ind(t); }
    /* 005fd2a4: jmp 0x5fd301 */ goto L_005fd301;
L_005fd2a6:; BB(0x005fd2a6);
    /* 005fd2a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd2a9: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005fd2af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd2b2: add ecx, dword ptr [edx + 0x84] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x84u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd2b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd2bb: cmp ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fd2be: jle 0x5fd2f9 */ if ((fZ||fS!=fO)) goto L_005fd2f9;
L_005fd2c0:; BB(0x005fd2c0);
    /* 005fd2c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd2c3: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 005fd2c9: sub edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005fd2cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd2cf: mov dword ptr [eax + 0x88], edx */ W32((u32)(r_eax+0x88u), r_edx);
    /* 005fd2d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd2d8: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005fd2db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd2dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd2df: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005fd2e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd2e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd2e9: mov ecx, dword ptr [edx + 0x7c] */ r_ecx = R32((u32)(r_edx+0x7cu));
    /* 005fd2ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd2ef: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 005fd2f2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fd2f4: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5fd2f7u); call_ind(t); }
    /* 005fd2f7: jmp 0x5fd301 */ goto L_005fd301;
L_005fd2f9:; BB(0x005fd2f9);
    /* 005fd2f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd2fc: call 0x5fd32a */ r_esp -= 4; W32(r_esp, 0x5fd301u); f_005fd32a();
L_005fd301:; BB(0x005fd301);
    /* 005fd301: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fd302: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd304: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd305: ret  */ FN_RET(0x005fd0f1); r_esp += 4; return;
}

void f_005fd306(void) /* FUN_005fd306 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd306);
    /* 005fd306: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd307: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd309: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd30a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fd30d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd310: call 0x5ea28a */ r_esp -= 4; W32(r_esp, 0x5fd315u); f_005ea28a();
    /* 005fd315: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd318: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd31b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd31e: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd321: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd323: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5fd326u); call_ind(t); }
    /* 005fd326: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd328: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd329: ret  */ FN_RET(0x005fd306); r_esp += 4; return;
}

void f_005fd32a(void) /* FUN_005fd32a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd32a);
    /* 005fd32a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd32b: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd32d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd330: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fd333: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd336: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005fd33c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd33f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd342: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
    /* 005fd348: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd34b: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd34f: je 0x5fd3b4 */ if (fZ) goto L_005fd3b4;
L_005fd351:; BB(0x005fd351);
    /* 005fd351: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd354: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd357: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd35a: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd35d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd35f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5fd362u); call_ind(t); }
    /* 005fd362: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd365: call 0x5fd679 */ r_esp -= 4; W32(r_esp, 0x5fd36au); f_005fd679();
    /* 005fd36a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd36d: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005fd370: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd373: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd376: mov dword ptr [edx + 0x88], ecx */ W32((u32)(r_edx+0x88u), r_ecx);
    /* 005fd37c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd37f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005fd382: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd383: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd386: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005fd38c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd38d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd390: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd393: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd396: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd399: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd39b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5fd39eu); call_ind(t); }
    /* 005fd39e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd3a1: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd3a4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd3a7: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd3aa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd3ac: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5fd3afu); call_ind(t); }
    /* 005fd3af: jmp 0x5fd636 */ goto L_005fd636;
L_005fd3b4:; BB(0x005fd3b4);
    /* 005fd3b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd3b7: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005fd3bd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fd3c0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd3c3: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005fd3c6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005fd3c9: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005fd3cd: ja 0x5fd629 */ if ((!fC&&!fZ)) goto L_005fd629;
L_005fd3d3:; BB(0x005fd3d3);
    /* 005fd3d3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd3d6: jmp dword ptr [eax*4 + 0x5fd642] */ { u32 t = R32((u32)(r_eax*4+0x5fd642u)); switch (t) { case 0x5fd3ddu: goto L_005fd3dd; case 0x5fd47au: goto L_005fd47a; case 0x5fd48bu: goto L_005fd48b; case 0x5fd57eu: goto L_005fd57e; case 0x5fd5cdu: goto L_005fd5cd; case 0x5fd4c6u: goto L_005fd4c6; case 0x5fd4edu: goto L_005fd4ed; case 0x5fd510u: goto L_005fd510; case 0x5fd534u: goto L_005fd534; case 0x5fd558u: goto L_005fd558; case 0x5fd579u: goto L_005fd579; default: UNSUP(0x005fd3d6, "jump table entry is not a known target"); } }
L_005fd3dd:; BB(0x005fd3dd);
    /* 005fd3dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd3e0: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd3e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd3e6: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd3e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd3eb: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5fd3eeu); call_ind(t); }
    /* 005fd3ee: push 0x69c294 */ { u32 v = 0x69c294u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd3f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd3f6: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd3f9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd3fc: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd3ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd401: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5fd404u); call_ind(t); }
    /* 005fd404: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd407: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd40a: call 0x5e8dcc */ r_esp -= 4; W32(r_esp, 0x5fd40fu); f_005e8dcc();
    /* 005fd40f: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd412: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd415: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 005fd41b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd41e: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005fd424: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd425: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd428: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd42b: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5fd430u); f_005e8740();
    /* 005fd430: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd433: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005fd436: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd439: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd43c: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 005fd442: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd445: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005fd448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd449: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd44c: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 005fd452: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd453: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd456: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd459: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd45c: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd45f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd461: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5fd464u); call_ind(t); }
    /* 005fd464: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd467: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd46a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd46d: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd470: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd472: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5fd475u); call_ind(t); }
    /* 005fd475: jmp 0x5fd636 */ goto L_005fd636;
L_005fd47a:; BB(0x005fd47a);
    /* 005fd47a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd47c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd47e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd481: call 0x5fd77c */ r_esp -= 4; W32(r_esp, 0x5fd486u); f_005fd77c();
    /* 005fd486: jmp 0x5fd636 */ goto L_005fd636;
L_005fd48b:; BB(0x005fd48b);
    /* 005fd48b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd48e: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd491: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd494: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd497: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd499: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5fd49cu); call_ind(t); }
    /* 005fd49c: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005fd4a1: mov ecx, dword ptr [eax + 0x12eb0] */ r_ecx = R32((u32)(r_eax+0x12eb0u));
    /* 005fd4a7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fd4aa: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005fd4ae: ja 0x5fd579 */ if ((!fC&&!fZ)) goto L_005fd579;
L_005fd4b4:; BB(0x005fd4b4);
    /* 005fd4b4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd4b7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fd4b9: mov dl, byte ptr [eax + 0x5fd66e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x5fd66eu))) & 0xffu);
    /* 005fd4bf: jmp dword ptr [edx*4 + 0x5fd656] */ { u32 t = R32((u32)(r_edx*4+0x5fd656u)); switch (t) { case 0x5fd5cdu: goto L_005fd5cd; case 0x5fd57eu: goto L_005fd57e; case 0x5fd48bu: goto L_005fd48b; case 0x5fd47au: goto L_005fd47a; case 0x5fd3ddu: goto L_005fd3dd; case 0x5fd4c6u: goto L_005fd4c6; case 0x5fd4edu: goto L_005fd4ed; case 0x5fd510u: goto L_005fd510; case 0x5fd534u: goto L_005fd534; case 0x5fd558u: goto L_005fd558; case 0x5fd579u: goto L_005fd579; default: UNSUP(0x005fd4bf, "jump table entry is not a known target"); } }
L_005fd4c6:; BB(0x005fd4c6);
    /* 005fd4c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd4c9: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005fd4cf: mov eax, dword ptr [edx + 0x12e90] */ r_eax = R32((u32)(r_edx+0x12e90u));
    /* 005fd4d5: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 005fd4db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd4de: mov dword ptr [ecx + 0xb0], 0xfa */ W32((u32)(r_ecx+0xb0u), 0xfau);
    /* 005fd4e8: jmp 0x5fd579 */ goto L_005fd579;
L_005fd4ed:; BB(0x005fd4ed);
    /* 005fd4ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd4f0: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005fd4f5: mov ecx, dword ptr [eax + 0x12e94] */ r_ecx = R32((u32)(r_eax+0x12e94u));
    /* 005fd4fb: mov dword ptr [edx + 0xac], ecx */ W32((u32)(r_edx+0xacu), r_ecx);
    /* 005fd501: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd504: mov dword ptr [edx + 0xb0], 0x2ee */ W32((u32)(r_edx+0xb0u), 0x2eeu);
    /* 005fd50e: jmp 0x5fd579 */ goto L_005fd579;
L_005fd510:; BB(0x005fd510);
    /* 005fd510: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd513: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005fd519: mov edx, dword ptr [ecx + 0x12e98] */ r_edx = R32((u32)(r_ecx+0x12e98u));
    /* 005fd51f: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 005fd525: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd528: mov dword ptr [eax + 0xb0], 0x3e8 */ W32((u32)(r_eax+0xb0u), 0x3e8u);
    /* 005fd532: jmp 0x5fd579 */ goto L_005fd579;
L_005fd534:; BB(0x005fd534);
    /* 005fd534: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd537: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005fd53d: mov eax, dword ptr [edx + 0x12e9c] */ r_eax = R32((u32)(r_edx+0x12e9cu));
    /* 005fd543: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 005fd549: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd54c: mov dword ptr [ecx + 0xb0], 0x9c4 */ W32((u32)(r_ecx+0xb0u), 0x9c4u);
    /* 005fd556: jmp 0x5fd579 */ goto L_005fd579;
L_005fd558:; BB(0x005fd558);
    /* 005fd558: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd55b: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005fd560: mov ecx, dword ptr [eax + 0x12ea0] */ r_ecx = R32((u32)(r_eax+0x12ea0u));
    /* 005fd566: mov dword ptr [edx + 0xac], ecx */ W32((u32)(r_edx+0xacu), r_ecx);
    /* 005fd56c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd56f: mov dword ptr [edx + 0xb0], 0x1d4c */ W32((u32)(r_edx+0xb0u), 0x1d4cu);
L_005fd579:; BB(0x005fd579);
    /* 005fd579: jmp 0x5fd636 */ goto L_005fd636;
L_005fd57e:; BB(0x005fd57e);
    /* 005fd57e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd581: call 0x5fd679 */ r_esp -= 4; W32(r_esp, 0x5fd586u); f_005fd679();
    /* 005fd586: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd589: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005fd58c: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd58f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd592: mov dword ptr [edx + 0x88], ecx */ W32((u32)(r_edx+0x88u), r_ecx);
    /* 005fd598: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd59b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005fd59e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd59f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd5a2: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005fd5a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd5a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd5ac: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd5af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd5b2: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd5b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd5b7: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5fd5bau); call_ind(t); }
    /* 005fd5ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd5bd: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd5c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd5c3: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd5c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd5c8: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5fd5cbu); call_ind(t); }
    /* 005fd5cb: jmp 0x5fd636 */ goto L_005fd636;
L_005fd5cd:; BB(0x005fd5cd);
    /* 005fd5cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd5d0: call 0x5fd679 */ r_esp -= 4; W32(r_esp, 0x5fd5d5u); f_005fd679();
    /* 005fd5d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd5d8: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005fd5db: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd5de: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd5e1: mov dword ptr [edx + 0x88], ecx */ W32((u32)(r_edx+0x88u), r_ecx);
    /* 005fd5e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd5ea: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005fd5ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd5ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd5f1: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005fd5f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd5f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd5fb: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd5fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd601: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd604: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd606: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5fd609u); call_ind(t); }
    /* 005fd609: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd60c: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd60f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd612: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd615: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd617: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5fd61au); call_ind(t); }
    /* 005fd61a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd61d: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 005fd627: jmp 0x5fd636 */ goto L_005fd636;
L_005fd629:; BB(0x005fd629);
    /* 005fd629: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd62c: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
L_005fd636:; BB(0x005fd636);
    /* 005fd636: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd639: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x5fd63eu); f_005ea2c1();
    /* 005fd63e: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd640: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd641: ret  */ FN_RET(0x005fd32a); r_esp += 4; return;
}

void f_005fd679(void) /* FUN_005fd679 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd679);
    /* 005fd679: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd67a: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd67c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd67d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fd680: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd683: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd687: je 0x5fd713 */ if (fZ) goto L_005fd713;
L_005fd68d:; BB(0x005fd68d);
    /* 005fd68d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd68f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd691: call 0x60ee42 */ r_esp -= 4; W32(r_esp, 0x5fd696u); f_0060ee42();
    /* 005fd696: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd699: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd69b: je 0x5fd6d8 */ if (fZ) goto L_005fd6d8;
L_005fd69d:; BB(0x005fd69d);
    /* 005fd69d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd69f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5fd6a4u); f_0060ee31();
    /* 005fd6a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd6a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd6aa: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 005fd6b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd6b3: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005fd6b9: imul eax, eax, 0xff */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fd6bf: add eax, 0x69bd98 */ {  u32 a = r_eax; u32 b = 0x69bd98u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd6c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd6c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd6c8: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd6cb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd6ce: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd6d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd6d3: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5fd6d6u); call_ind(t); }
    /* 005fd6d6: jmp 0x5fd711 */ goto L_005fd711;
L_005fd6d8:; BB(0x005fd6d8);
    /* 005fd6d8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd6da: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5fd6dfu); f_0060ee31();
    /* 005fd6df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd6e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd6e5: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 005fd6eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd6ee: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005fd6f4: imul eax, eax, 0xff */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fd6fa: add eax, 0x69b798 */ {  u32 a = r_eax; u32 b = 0x69b798u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd6ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd700: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd703: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd706: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd709: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd70c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd70e: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5fd711u); call_ind(t); }
L_005fd711:; BB(0x005fd711);
    /* 005fd711: jmp 0x5fd74c */ goto L_005fd74c;
L_005fd713:; BB(0x005fd713);
    /* 005fd713: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd715: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5fd71au); f_0060ee31();
    /* 005fd71a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd71d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd720: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 005fd726: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd729: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005fd72f: imul eax, eax, 0xff */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fd735: add eax, 0x69b798 */ {  u32 a = r_eax; u32 b = 0x69b798u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd73a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd73b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd73e: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd741: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd744: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd747: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd749: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5fd74cu); call_ind(t); }
L_005fd74c:; BB(0x005fd74c);
    /* 005fd74c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd74f: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd752: call 0x5e8dcc */ r_esp -= 4; W32(r_esp, 0x5fd757u); f_005e8dcc();
    /* 005fd757: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd75a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd75d: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 005fd763: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd766: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005fd76c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd76d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd770: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd773: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5fd778u); f_005e8740();
    /* 005fd778: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd77a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd77b: ret  */ FN_RET(0x005fd679); r_esp += 4; return;
}

void f_005fd77c(void) /* FUN_005fd77c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd77c);
    /* 005fd77c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd77d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd77f: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd782: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fd785: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fd788: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fd78b: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd78f: je 0x5fd7a2 */ if (fZ) goto L_005fd7a2;
L_005fd791:; BB(0x005fd791);
    /* 005fd791: cmp dword ptr [ebp - 0x18], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd795: je 0x5fd7d7 */ if (fZ) goto L_005fd7d7;
L_005fd797:; BB(0x005fd797);
    /* 005fd797: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd79b: je 0x5fd80c */ if (fZ) goto L_005fd80c;
L_005fd79d:; BB(0x005fd79d);
    /* 005fd79d: jmp 0x5fd853 */ goto L_005fd853;
L_005fd7a2:; BB(0x005fd7a2);
    /* 005fd7a2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd7a5: mov dword ptr [ecx + 0xb4], 1 */ W32((u32)(r_ecx+0xb4u), 0x1u);
    /* 005fd7af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd7b2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fd7b5: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 005fd7bb: push 0x69c2a8 */ { u32 v = 0x69c2a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd7c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd7c3: call 0x5fd898 */ r_esp -= 4; W32(r_esp, 0x5fd7c8u); f_005fd898();
    /* 005fd7c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd7cb: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 005fd7d5: jmp 0x5fd853 */ goto L_005fd853;
L_005fd7d7:; BB(0x005fd7d7);
    /* 005fd7d7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd7da: mov dword ptr [edx + 0xb4], 1 */ W32((u32)(r_edx+0xb4u), 0x1u);
    /* 005fd7e4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd7e7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fd7ea: mov dword ptr [eax + 0x98], ecx */ W32((u32)(r_eax+0x98u), r_ecx);
    /* 005fd7f0: push 0x69c2b0 */ { u32 v = 0x69c2b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd7f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd7f8: call 0x5fd898 */ r_esp -= 4; W32(r_esp, 0x5fd7fdu); f_005fd898();
    /* 005fd7fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd800: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
    /* 005fd80a: jmp 0x5fd853 */ goto L_005fd853;
L_005fd80c:; BB(0x005fd80c);
    /* 005fd80c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd80f: call 0x5fd9c9 */ r_esp -= 4; W32(r_esp, 0x5fd814u); f_005fd9c9();
    /* 005fd814: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd817: add eax, 0x9c */ {  u32 a = r_eax; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd81c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd81d: push 0x69c2bc */ { u32 v = 0x69c2bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd822: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005fd825: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd826: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5fd82bu); f_00624050();
    /* 005fd82b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd82e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd831: mov dword ptr [edx + 0xb4], 1 */ W32((u32)(r_edx+0xb4u), 0x1u);
    /* 005fd83b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd83e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fd841: mov dword ptr [eax + 0x98], ecx */ W32((u32)(r_eax+0x98u), r_ecx);
    /* 005fd847: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005fd84a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd84b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd84e: call 0x5fd898 */ r_esp -= 4; W32(r_esp, 0x5fd853u); f_005fd898();
L_005fd853:; BB(0x005fd853);
    /* 005fd853: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd855: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd856: ret 8 */ FN_RET(0x005fd77c); r_esp += 12; return;
}

void f_005fd859(void) /* FUN_005fd859 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd859);
    /* 005fd859: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd85a: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd85c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd85d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fd860: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd863: mov dword ptr [eax + 0xb4], 1 */ W32((u32)(r_eax+0xb4u), 0x1u);
    /* 005fd86d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd870: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fd873: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 005fd879: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fd87c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd87d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd880: call 0x5fd898 */ r_esp -= 4; W32(r_esp, 0x5fd885u); f_005fd898();
    /* 005fd885: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd888: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 005fd892: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd894: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd895: ret 8 */ FN_RET(0x005fd859); r_esp += 12; return;
}

void f_005fd898(void) /* FUN_005fd898 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd898);
    /* 005fd898: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd899: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd89b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd89c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fd89f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd8a2: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd8a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd8a8: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd8ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd8ad: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5fd8b0u); call_ind(t); }
    /* 005fd8b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd8b3: mov dword ptr [eax + 0x8c], 0xffffffff */ W32((u32)(r_eax+0x8cu), 0xffffffffu);
    /* 005fd8bd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fd8c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd8c1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd8c4: mov ecx, dword ptr [edx + 0x7c] */ r_ecx = R32((u32)(r_edx+0x7cu));
    /* 005fd8c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd8ca: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 005fd8cd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fd8cf: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5fd8d2u); call_ind(t); }
    /* 005fd8d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd8d5: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd8d8: call 0x5e8dcc */ r_esp -= 4; W32(r_esp, 0x5fd8ddu); f_005e8dcc();
    /* 005fd8dd: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd8e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd8e3: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 005fd8e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd8ec: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 005fd8f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd8f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd8f6: mov ecx, dword ptr [edx + 0x7c] */ r_ecx = R32((u32)(r_edx+0x7cu));
    /* 005fd8f9: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5fd8feu); f_005e8740();
    /* 005fd8fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd901: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd904: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 005fd907: sub eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005fd90a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd90d: sub eax, dword ptr [edx + 0x84] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x84u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005fd913: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005fd914: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005fd916: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005fd918: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd91b: add eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd91e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd921: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 005fd927: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd92a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005fd92d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd92e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd931: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005fd937: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd938: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd93b: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005fd93e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd941: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd944: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd946: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5fd949u); call_ind(t); }
    /* 005fd949: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd94c: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005fd94f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd952: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005fd955: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd957: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5fd95au); call_ind(t); }
    /* 005fd95a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd95d: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x5fd962u); f_005ea2c1();
    /* 005fd962: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005fd968: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5fd96du); f_005d9e23();
    /* 005fd96d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd970: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 005fd976: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd978: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd979: ret 4 */ FN_RET(0x005fd898); r_esp += 8; return;
}

void f_005fd97c(void) /* FUN_005fd97c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd97c);
    /* 005fd97c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd97d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd97f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd980: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fd983: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005fd989: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5fd98eu); f_005d9e23();
    /* 005fd98e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd991: sub eax, dword ptr [ecx + 0x90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x90u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005fd997: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd998: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5fd99du); f_00624700();
    /* 005fd99d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd9a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd9a3: cmp eax, dword ptr [edx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fd9a6: jge 0x5fd9ac */ if ((fS==fO)) goto L_005fd9ac;
L_005fd9a8:; BB(0x005fd9a8);
    /* 005fd9a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fd9aa: jmp 0x5fd9c5 */ goto L_005fd9c5;
L_005fd9ac:; BB(0x005fd9ac);
    /* 005fd9ac: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005fd9b2: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5fd9b7u); f_005d9e23();
    /* 005fd9b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd9ba: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 005fd9c0: mov eax, 1 */ r_eax = 0x1u;
L_005fd9c5:; BB(0x005fd9c5);
    /* 005fd9c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd9c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd9c8: ret  */ FN_RET(0x005fd97c); r_esp += 4; return;
}

void f_005fd9c9(void) /* FUN_005fd9c9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd9c9);
    /* 005fd9c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd9ca: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd9cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd9cd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fd9d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd9d3: mov byte ptr [eax + 0x9c], 0 */ W8((u32)(r_eax+0x9cu), 0x0u);
    /* 005fd9da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd9dd: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd9e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd9e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd9e7: call 0x5fd9f9 */ r_esp -= 4; W32(r_esp, 0x5fd9ecu); f_005fd9f9();
    /* 005fd9ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd9ed: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x5fd9f2u); f_0060fb42();
    /* 005fd9f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd9f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd9f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd9f8: ret  */ FN_RET(0x005fd9c9); r_esp += 4; return;
}

void f_005fd9f9(void) /* FUN_005fd9f9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd9f9);
    /* 005fd9f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd9fa: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd9fc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd9ff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fda02: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005fda07: mov ecx, dword ptr [eax + 0x12eb0] */ r_ecx = R32((u32)(r_eax+0x12eb0u));
    /* 005fda0d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fda10: cmp dword ptr [ebp - 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005fda14: ja 0x5fda6d */ if ((!fC&&!fZ)) goto L_005fda6d;
L_005fda16:; BB(0x005fda16);
    /* 005fda16: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fda19: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fda1b: mov dl, byte ptr [eax + 0x5fda8b] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x5fda8bu))) & 0xffu);
    /* 005fda21: jmp dword ptr [edx*4 + 0x5fda73] */ { u32 t = R32((u32)(r_edx*4+0x5fda73u)); switch (t) { case 0x5fda28u: goto L_005fda28; case 0x5fda36u: goto L_005fda36; case 0x5fda44u: goto L_005fda44; case 0x5fda51u: goto L_005fda51; case 0x5fda5fu: goto L_005fda5f; case 0x5fda6du: goto L_005fda6d; default: UNSUP(0x005fda21, "jump table entry is not a known target"); } }
L_005fda28:; BB(0x005fda28);
    /* 005fda28: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005fda2e: mov eax, dword ptr [ecx + 0x12e90] */ r_eax = R32((u32)(r_ecx+0x12e90u));
    /* 005fda34: jmp 0x5fda6f */ goto L_005fda6f;
L_005fda36:; BB(0x005fda36);
    /* 005fda36: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005fda3c: mov eax, dword ptr [edx + 0x12e94] */ r_eax = R32((u32)(r_edx+0x12e94u));
    /* 005fda42: jmp 0x5fda6f */ goto L_005fda6f;
L_005fda44:; BB(0x005fda44);
    /* 005fda44: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005fda49: mov eax, dword ptr [eax + 0x12e98] */ r_eax = R32((u32)(r_eax+0x12e98u));
    /* 005fda4f: jmp 0x5fda6f */ goto L_005fda6f;
L_005fda51:; BB(0x005fda51);
    /* 005fda51: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005fda57: mov eax, dword ptr [ecx + 0x12e9c] */ r_eax = R32((u32)(r_ecx+0x12e9cu));
    /* 005fda5d: jmp 0x5fda6f */ goto L_005fda6f;
L_005fda5f:; BB(0x005fda5f);
    /* 005fda5f: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005fda65: mov eax, dword ptr [edx + 0x12ea0] */ r_eax = R32((u32)(r_edx+0x12ea0u));
    /* 005fda6b: jmp 0x5fda6f */ goto L_005fda6f;
L_005fda6d:; BB(0x005fda6d);
    /* 005fda6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fda6f:; BB(0x005fda6f);
    /* 005fda6f: mov esp, ebp */ r_esp = r_ebp;
    /* 005fda71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fda72: ret  */ FN_RET(0x005fd9f9); r_esp += 4; return;
}

void f_005fdaa0(void) /* FUN_005fdaa0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdaa0);
    /* 005fdaa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdaa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdaa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdaa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fdaa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdaaa: call 0x5fd093 */ r_esp -= 4; W32(r_esp, 0x5fdaafu); f_005fd093();
    /* 005fdaaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fdab2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fdab5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdab7: je 0x5fdac5 */ if (fZ) goto L_005fdac5;
L_005fdab9:; BB(0x005fdab9);
    /* 005fdab9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdabc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdabd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5fdac2u); f_0048ac1b();
    /* 005fdac2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fdac5:; BB(0x005fdac5);
    /* 005fdac5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdac8: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdaca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdacb: ret 4 */ FN_RET(0x005fdaa0); r_esp += 8; return;
}

void f_005fdad0(void) /* FUN_005fdad0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdad0);
    /* 005fdad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdad1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdad3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fdad6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fdad9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdadc: call 0x446fe0 */ r_esp -= 4; W32(r_esp, 0x5fdae1u); f_00446fe0();
    /* 005fdae1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdae4: mov dword ptr [eax], 0x63c424 */ W32((u32)(r_eax), 0x63c424u);
    /* 005fdaea: push 0x69c2e0 */ { u32 v = 0x69c2e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdaef: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005fdaf5: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x5fdafau); f_005da413();
    /* 005fdafa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdafd: mov dword ptr [0x6fc564], ecx */ W32((u32)(0x6fc564u), r_ecx);
    /* 005fdb03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdb05: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdb08: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5fdb0du); f_005e5ec3();
    /* 005fdb0d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdb0f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5fdb14u); f_0048ab58();
    /* 005fdb14: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fdb17: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005fdb1a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdb1e: je 0x5fdb2f */ if (fZ) goto L_005fdb2f;
L_005fdb20:; BB(0x005fdb20);
    /* 005fdb20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdb22: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fdb25: call 0x5e82f0 */ r_esp -= 4; W32(r_esp, 0x5fdb2au); f_005e82f0();
    /* 005fdb2a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fdb2d: jmp 0x5fdb36 */ goto L_005fdb36;
L_005fdb2f:; BB(0x005fdb2f);
    /* 005fdb2f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005fdb36:; BB(0x005fdb36);
    /* 005fdb36: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdb39: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fdb3c: mov dword ptr [edx + 0x1cb0], eax */ W32((u32)(r_edx+0x1cb0u), r_eax);
    /* 005fdb42: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fdb48: jmp 0x5fdb56 */ goto L_005fdb56;
L_005fdb4a:; BB(0x005fdb4a);
    /* 005fdb4a: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005fdb4e: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005fdb52: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_005fdb56:; BB(0x005fdb56);
    /* 005fdb56: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005fdb5a: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fdb5d: jge 0x5fdb7b */ if ((fS==fO)) goto L_005fdb7b;
L_005fdb5f:; BB(0x005fdb5f);
    /* 005fdb5f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005fdb63: add eax, 0x1601d */ {  u32 a = r_eax; u32 b = 0x1601du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fdb68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdb69: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdb6b: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005fdb71: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005fdb74: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x5fdb79u); f_005ba9e1();
    /* 005fdb79: jmp 0x5fdb4a */ goto L_005fdb4a;
L_005fdb7b:; BB(0x005fdb7b);
    /* 005fdb7b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdb7e: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdb80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdb81: ret  */ FN_RET(0x005fdad0); r_esp += 4; return;
}

void f_005fdb82(void) /* FUN_005fdb82 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdb82);
    /* 005fdb82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdb83: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdb85: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fdb88: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fdb8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fdb8e: mov dword ptr [eax], 0x63c424 */ W32((u32)(r_eax), 0x63c424u);
    /* 005fdb94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdb96: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005fdb9c: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x5fdba1u); f_005da413();
    /* 005fdba1: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdba7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fdbaa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fdbad: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005fdbb0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdbb4: je 0x5fdbc7 */ if (fZ) goto L_005fdbc7;
L_005fdbb6:; BB(0x005fdbb6);
    /* 005fdbb6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdbb8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdbbb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fdbbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdbc0: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5fdbc2u); call_ind(t); }
    /* 005fdbc2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fdbc5: jmp 0x5fdbce */ goto L_005fdbce;
L_005fdbc7:; BB(0x005fdbc7);
    /* 005fdbc7: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005fdbce:; BB(0x005fdbce);
    /* 005fdbce: mov dword ptr [0x6fc568], 0 */ W32((u32)(0x6fc568u), 0x0u);
    /* 005fdbd8: mov dword ptr [0x6fc564], 0 */ W32((u32)(0x6fc564u), 0x0u);
    /* 005fdbe2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fdbe5: cmp dword ptr [eax + 0x1cb0], 0 */ {  u32 a = R32((u32)(r_eax+0x1cb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdbec: je 0x5fdc2b */ if (fZ) goto L_005fdc2b;
L_005fdbee:; BB(0x005fdbee);
    /* 005fdbee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fdbf1: mov edx, dword ptr [ecx + 0x1cb0] */ r_edx = R32((u32)(r_ecx+0x1cb0u));
    /* 005fdbf7: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005fdbfa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fdbfd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005fdc00: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdc04: je 0x5fdc17 */ if (fZ) goto L_005fdc17;
L_005fdc06:; BB(0x005fdc06);
    /* 005fdc06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdc08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdc0b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fdc0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdc10: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5fdc12u); call_ind(t); }
    /* 005fdc12: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fdc15: jmp 0x5fdc1e */ goto L_005fdc1e;
L_005fdc17:; BB(0x005fdc17);
    /* 005fdc17: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005fdc1e:; BB(0x005fdc1e);
    /* 005fdc1e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fdc21: mov dword ptr [eax + 0x1cb0], 0 */ W32((u32)(r_eax+0x1cb0u), 0x0u);
L_005fdc2b:; BB(0x005fdc2b);
    /* 005fdc2b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fdc2e: call 0x44711a */ r_esp -= 4; W32(r_esp, 0x5fdc33u); f_0044711a();
    /* 005fdc33: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdc35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdc36: ret  */ FN_RET(0x005fdb82); r_esp += 4; return;
}

void f_005fdc37(void) /* FUN_005fdc37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdc37);
    /* 005fdc37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdc38: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdc3a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fdc3d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fdc40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdc43: call 0x4476a6 */ r_esp -= 4; W32(r_esp, 0x5fdc48u); f_004476a6();
    /* 005fdc48: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005fdc4e: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5fdc53u); f_005d9e23();
    /* 005fdc53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdc56: mov dword ptr [ecx + 0x1cb4], eax */ W32((u32)(r_ecx+0x1cb4u), r_eax);
    /* 005fdc5c: cmp dword ptr [0x6fc568], 0 */ {  u32 a = R32((u32)(0x6fc568u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdc63: jne 0x5fdc98 */ if (!fZ) goto L_005fdc98;
L_005fdc65:; BB(0x005fdc65);
    /* 005fdc65: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdc6a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5fdc6fu); f_0048ab58();
    /* 005fdc6f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fdc72: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fdc75: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdc79: je 0x5fdc88 */ if (fZ) goto L_005fdc88;
L_005fdc7b:; BB(0x005fdc7b);
    /* 005fdc7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdc7e: call 0x600981 */ r_esp -= 4; W32(r_esp, 0x5fdc83u); f_00600981();
    /* 005fdc83: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fdc86: jmp 0x5fdc8f */ goto L_005fdc8f;
L_005fdc88:; BB(0x005fdc88);
    /* 005fdc88: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005fdc8f:; BB(0x005fdc8f);
    /* 005fdc8f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fdc92: mov dword ptr [0x6fc568], edx */ W32((u32)(0x6fc568u), r_edx);
L_005fdc98:; BB(0x005fdc98);
    /* 005fdc98: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdc9a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5fdc9fu); f_0048ab58();
    /* 005fdc9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fdca2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005fdca5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdca9: je 0x5fdcc6 */ if (fZ) goto L_005fdcc6;
L_005fdcab:; BB(0x005fdcab);
    /* 005fdcab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdcad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fdcb0: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5fdcb5u); f_005e6160();
    /* 005fdcb5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fdcb8: mov dword ptr [eax], 0x63c4dc */ W32((u32)(r_eax), 0x63c4dcu);
    /* 005fdcbe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fdcc1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fdcc4: jmp 0x5fdccd */ goto L_005fdccd;
L_005fdcc6:; BB(0x005fdcc6);
    /* 005fdcc6: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005fdccd:; BB(0x005fdccd);
    /* 005fdccd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fdcd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdcd1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdcd4: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x5fdcd9u); f_005e5d66();
    /* 005fdcd9: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdcdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdcdc: ret  */ FN_RET(0x005fdc37); r_esp += 4; return;
}

void f_005fdcdd(void) /* FUN_005fdcdd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdcdd);
    /* 005fdcdd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdcde: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdce0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdce1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fdce4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fdce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdce8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdceb: call 0x447ba4 */ r_esp -= 4; W32(r_esp, 0x5fdcf0u); f_00447ba4();
    /* 005fdcf0: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdcf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdcf3: ret 4 */ FN_RET(0x005fdcdd); r_esp += 8; return;
}

void f_005fdcf6(void) /* FUN_005fdcf6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdcf6);
    /* 005fdcf6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdcf7: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdcf9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdcfa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fdcfd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdd00: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005fdd03: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x5fdd08u); f_005e63b4();
    /* 005fdd08: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdd0b: je 0x5fdd1d */ if (fZ) goto L_005fdd1d;
L_005fdd0d:; BB(0x005fdd0d);
    /* 005fdd0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdd10: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005fdd13: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x5fdd18u); f_005e63b4();
    /* 005fdd18: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdd1b: jne 0x5fdd25 */ if (!fZ) goto L_005fdd25;
L_005fdd1d:; BB(0x005fdd1d);
    /* 005fdd1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdd20: call 0x5fe0e2 */ r_esp -= 4; W32(r_esp, 0x5fdd25u); f_005fe0e2();
L_005fdd25:; BB(0x005fdd25);
    /* 005fdd25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdd28: call 0x4240a0 */ r_esp -= 4; W32(r_esp, 0x5fdd2du); f_004240a0();
    /* 005fdd2d: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdd2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdd30: ret  */ FN_RET(0x005fdcf6); r_esp += 4; return;
}

void f_005fdd31(void) /* FUN_005fdd31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdd31);
    /* 005fdd31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd32: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdd34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd35: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fdd38: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fdd3d: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 005fdd40: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdd42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdd43: ret  */ FN_RET(0x005fdd31); r_esp += 4; return;
}

void f_005fdd44(void) /* FUN_005fdd44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdd44);
    /* 005fdd44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd45: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdd47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd48: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fdd4b: cmp dword ptr [0x6fc568], 0 */ {  u32 a = R32((u32)(0x6fc568u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdd52: je 0x5fdd6a */ if (fZ) goto L_005fdd6a;
L_005fdd54:; BB(0x005fdd54);
    /* 005fdd54: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fdd59: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdd5d: je 0x5fdd6a */ if (fZ) goto L_005fdd6a;
L_005fdd5f:; BB(0x005fdd5f);
    /* 005fdd5f: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdd65: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005fdd68: jmp 0x5fdd6c */ goto L_005fdd6c;
L_005fdd6a:; BB(0x005fdd6a);
    /* 005fdd6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fdd6c:; BB(0x005fdd6c);
    /* 005fdd6c: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdd6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdd6f: ret  */ FN_RET(0x005fdd44); r_esp += 4; return;
}

void f_005fdd70(void) /* FUN_005fdd70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdd70);
    /* 005fdd70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd71: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdd73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fdd77: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fdd7c: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdd80: je 0x5fdd9e */ if (fZ) goto L_005fdd9e;
L_005fdd82:; BB(0x005fdd82);
    /* 005fdd82: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdd88: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005fdd8b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005fdd8e: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdd91: jne 0x5fdd9e */ if (!fZ) goto L_005fdd9e;
L_005fdd93:; BB(0x005fdd93);
    /* 005fdd93: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdd99: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005fdd9c: jmp 0x5fdda0 */ goto L_005fdda0;
L_005fdd9e:; BB(0x005fdd9e);
    /* 005fdd9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fdda0:; BB(0x005fdda0);
    /* 005fdda0: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdda2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdda3: ret 4 */ FN_RET(0x005fdd70); r_esp += 8; return;
}

void f_005fdda6(void) /* FUN_005fdda6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdda6);
    /* 005fdda6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdda7: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdda9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fddaa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fddad: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fddb2: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fddb6: je 0x5fdde1 */ if (fZ) goto L_005fdde1;
L_005fddb8:; BB(0x005fddb8);
    /* 005fddb8: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fddbe: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005fddc1: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x5fddc6u); f_004259cd();
    /* 005fddc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fddc7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fddca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fddcb: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5fddd0u); f_006240c0();
    /* 005fddd0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fddd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fddd5: jne 0x5fdde1 */ if (!fZ) goto L_005fdde1;
L_005fddd7:; BB(0x005fddd7);
    /* 005fddd7: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fdddc: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005fdddf: jmp 0x5fdde3 */ goto L_005fdde3;
L_005fdde1:; BB(0x005fdde1);
    /* 005fdde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fdde3:; BB(0x005fdde3);
    /* 005fdde3: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdde5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdde6: ret 4 */ FN_RET(0x005fdda6); r_esp += 8; return;
}

void f_005fdde9(void) /* FUN_005fdde9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdde9);
    /* 005fdde9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fddea: mov ebp, esp */ r_ebp = r_esp;
    /* 005fddec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdded: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fddf0: mov esp, ebp */ r_esp = r_ebp;
    /* 005fddf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fddf3: ret  */ FN_RET(0x005fdde9); r_esp += 4; return;
}

void f_005fddf4(void) /* FUN_005fddf4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fddf4);
    /* 005fddf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fddf5: mov ebp, esp */ r_ebp = r_esp;
    /* 005fddf7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fddf8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fddfb: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fde00: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005fde03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fde04: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fde0a: call 0x6029c3 */ r_esp -= 4; W32(r_esp, 0x5fde0fu); f_006029c3();
    /* 005fde0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fde11: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fde17: call 0x602a47 */ r_esp -= 4; W32(r_esp, 0x5fde1cu); f_00602a47();
    /* 005fde1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fde1e: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fde24: call 0x602a88 */ r_esp -= 4; W32(r_esp, 0x5fde29u); f_00602a88();
    /* 005fde29: mov esp, ebp */ r_esp = r_ebp;
    /* 005fde2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fde2c: ret 4 */ FN_RET(0x005fddf4); r_esp += 8; return;
}

void f_005fde2f(void) /* FUN_005fde2f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fde2f);
    /* 005fde2f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fde30: mov ebp, esp */ r_ebp = r_esp;
    /* 005fde32: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fde35: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fde38: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fde3d: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fde41: jne 0x5fde58 */ if (!fZ) goto L_005fde58;
L_005fde43:; BB(0x005fde43);
    /* 005fde43: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fde49: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fde4d: jne 0x5fde58 */ if (!fZ) goto L_005fde58;
L_005fde4f:; BB(0x005fde4f);
    /* 005fde4f: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005fde56: jmp 0x5fde5f */ goto L_005fde5f;
L_005fde58:; BB(0x005fde58);
    /* 005fde58: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005fde5f:; BB(0x005fde5f);
    /* 005fde5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fde62: mov esp, ebp */ r_esp = r_ebp;
    /* 005fde64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fde65: ret 4 */ FN_RET(0x005fde2f); r_esp += 8; return;
}

void f_005fde68(void) /* FUN_005fde68 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fde68);
    /* 005fde68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fde69: mov ebp, esp */ r_ebp = r_esp;
    /* 005fde6b: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fde6e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fde71: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005fde78: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005fde7f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005fde86: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fde8d: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fde92: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005fde95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fde96: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005fde99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fde9a: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdea0: call 0x601da7 */ r_esp -= 4; W32(r_esp, 0x5fdea5u); f_00601da7();
    /* 005fdea5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005fdea7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005fdeaa: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005fdead: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005fdeb0: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fdeb5: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005fdeb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdeb9: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 005fdebc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdebd: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdec3: call 0x601da7 */ r_esp -= 4; W32(r_esp, 0x5fdec8u); f_00601da7();
    /* 005fdec8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005fdeca: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005fdecd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fded0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005fded3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fded6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fded7: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005fdeda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdedb: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005fdede: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdedf: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x5fdee4u); f_00429a59();
    /* 005fdee4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fdee7: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdee9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdeea: ret 8 */ FN_RET(0x005fde68); r_esp += 12; return;
}

void f_005fdeed(void) /* FUN_005fdeed */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdeed);
    /* 005fdeed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdeee: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdef0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fdef3: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005fdef6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005fdefd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fdf04: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fdf09: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005fdf0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf0d: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005fdf10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf11: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdf17: call 0x601da7 */ r_esp -= 4; W32(r_esp, 0x5fdf1cu); f_00601da7();
    /* 005fdf1c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005fdf1e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005fdf21: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fdf24: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005fdf27: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005fdf2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf2b: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdf31: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005fdf34: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005fdf37: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x5fdf3cu); f_004267ae();
    /* 005fdf3c: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fdf41: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005fdf44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf45: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005fdf48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf49: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdf4f: call 0x601da7 */ r_esp -= 4; W32(r_esp, 0x5fdf54u); f_00601da7();
    /* 005fdf54: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005fdf56: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005fdf59: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fdf5c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005fdf5f: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005fdf62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf63: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdf69: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005fdf6c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005fdf6f: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x5fdf74u); f_004267ae();
    /* 005fdf74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf76: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdf7c: call 0x602a47 */ r_esp -= 4; W32(r_esp, 0x5fdf81u); f_00602a47();
    /* 005fdf81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf83: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdf89: call 0x602a88 */ r_esp -= 4; W32(r_esp, 0x5fdf8eu); f_00602a88();
    /* 005fdf8e: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fdf93: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005fdf96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf97: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdf9d: call 0x6029c3 */ r_esp -= 4; W32(r_esp, 0x5fdfa2u); f_006029c3();
    /* 005fdfa2: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdfa4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdfa5: ret  */ FN_RET(0x005fdeed); r_esp += 4; return;
}

void f_005fdfa6(void) /* FUN_005fdfa6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdfa6);
    /* 005fdfa6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdfa7: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdfa9: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fdfac: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fdfaf: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005fdfb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdfb3: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdfb9: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005fdfbc: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005fdfbf: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x5fdfc4u); f_004267fb();
    /* 005fdfc4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fdfc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdfc8: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005fdfcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdfcc: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fdfd2: call 0x601da7 */ r_esp -= 4; W32(r_esp, 0x5fdfd7u); f_00601da7();
    /* 005fdfd7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fdfd9: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005fdfdc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005fdfdf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fdfe2: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005fdfe5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdfe6: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005fdfe9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdfea: call 0x600940 */ r_esp -= 4; W32(r_esp, 0x5fdfefu); f_00600940();
    /* 005fdfef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fdff2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdff4: je 0x5fe00c */ if (fZ) goto L_005fe00c;
L_005fdff6:; BB(0x005fdff6);
    /* 005fdff6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdff9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdffa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fdffd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdffe: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe004: call 0x601f6f */ r_esp -= 4; W32(r_esp, 0x5fe009u); f_00601f6f();
    /* 005fe009: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005fe00c:; BB(0x005fe00c);
    /* 005fe00c: mov edx, dword ptr [0x6fc568] */ r_edx = R32((u32)(0x6fc568u));
    /* 005fe012: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fe015: add eax, dword ptr [edx + 0x74] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x74u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fe018: cmp eax, 0x3b9ac9ff */ {  u32 a = r_eax; u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005fe01d: jbe 0x5fe030 */ if ((fC||fZ)) goto L_005fe030;
L_005fe01f:; BB(0x005fe01f);
    /* 005fe01f: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe025: mov edx, 0x3b9ac9ff */ r_edx = 0x3b9ac9ffu;
    /* 005fe02a: sub edx, dword ptr [ecx + 0x74] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x74u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005fe02d: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_005fe030:; BB(0x005fe030);
    /* 005fe030: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fe033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe034: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005fe037: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe038: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe03e: call 0x601da7 */ r_esp -= 4; W32(r_esp, 0x5fe043u); f_00601da7();
    /* 005fe043: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe045: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005fe048: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005fe04b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fe04e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fe051: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fe054: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fe057: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe05a: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fe05d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005fe060: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005fe063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe064: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe06a: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005fe06d: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005fe070: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x5fe075u); f_004267ae();
    /* 005fe075: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe079: je 0x5fe0dc */ if (fZ) goto L_005fe0dc;
L_005fe07b:; BB(0x005fe07b);
    /* 005fe07b: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fe080: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe084: jne 0x5fe09d */ if (!fZ) goto L_005fe09d;
L_005fe086:; BB(0x005fe086);
    /* 005fe086: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe08c: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe090: jne 0x5fe09d */ if (!fZ) goto L_005fe09d;
L_005fe092:; BB(0x005fe092);
    /* 005fe092: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe098: call 0x602ce9 */ r_esp -= 4; W32(r_esp, 0x5fe09du); f_00602ce9();
L_005fe09d:; BB(0x005fe09d);
    /* 005fe09d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fe0a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0a1: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe0a7: call 0x60290a */ r_esp -= 4; W32(r_esp, 0x5fe0acu); f_0060290a();
    /* 005fe0ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0ae: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 005fe0b3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005fe0b6: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 005fe0bc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005fe0bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe0c1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5fe0c4u); call_ind(t); }
    /* 005fe0c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0c6: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 005fe0cb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005fe0ce: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 005fe0d4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005fe0d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe0d9: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5fe0dcu); call_ind(t); }
L_005fe0dc:; BB(0x005fe0dc);
    /* 005fe0dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe0de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe0df: ret 4 */ FN_RET(0x005fdfa6); r_esp += 8; return;
}

void f_005fe0e2(void) /* FUN_005fe0e2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe0e2);
    /* 005fe0e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0e3: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe0e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fe0e9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005fe0ef: call 0x45cb5f */ r_esp -= 4; W32(r_esp, 0x5fe0f4u); f_0045cb5f();
    /* 005fe0f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe0f6: jne 0x5fe0fa */ if (!fZ) goto L_005fe0fa;
L_005fe0f8:; BB(0x005fe0f8);
    /* 005fe0f8: jmp 0x5fe102 */ goto L_005fe102;
L_005fe0fa:; BB(0x005fe0fa);
    /* 005fe0fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe0fd: call 0x5fe106 */ r_esp -= 4; W32(r_esp, 0x5fe102u); f_005fe106();
L_005fe102:; BB(0x005fe102);
    /* 005fe102: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe104: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe105: ret  */ FN_RET(0x005fe0e2); r_esp += 4; return;
}

void f_005fe106(void) /* FUN_005fe106 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe106);
    /* 005fe106: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe107: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe109: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe10a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fe10d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005fe113: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5fe118u); f_005d9e23();
    /* 005fe118: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe11b: cmp eax, dword ptr [ecx + 0x1cb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe121: jle 0x5fe152 */ if ((fZ||fS!=fO)) goto L_005fe152;
L_005fe123:; BB(0x005fe123);
    /* 005fe123: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005fe129: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5fe12eu); f_005d9e23();
    /* 005fe12e: add eax, 0xe10 */ {  u32 a = r_eax; u32 b = 0xe10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fe133: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe136: mov dword ptr [edx + 0x1cb4], eax */ W32((u32)(r_edx+0x1cb4u), r_eax);
    /* 005fe13c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe13e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe140: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe142: push 0x1925a */ { u32 v = 0x1925au; r_esp -= 4; W32(r_esp, v); }
    /* 005fe147: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe14a: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005fe14d: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5fe152u); f_005e8389();
L_005fe152:; BB(0x005fe152);
    /* 005fe152: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe154: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe155: ret  */ FN_RET(0x005fe106); r_esp += 4; return;
}

void f_005fe156(void) /* FUN_005fe156 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe156);
    /* 005fe156: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe157: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe159: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe15c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fe15f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fe162: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe163: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe166: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5fe16bu); f_005e626d();
    /* 005fe16b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe16e: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005fe171: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005fe174: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005fe178: ja 0x5fe2ff */ if ((!fC&&!fZ)) goto L_005fe2ff;
L_005fe17e:; BB(0x005fe17e);
    /* 005fe17e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fe181: jmp dword ptr [eax*4 + 0x5fe305] */ { u32 t = R32((u32)(r_eax*4+0x5fe305u)); switch (t) { case 0x5fe188u: goto L_005fe188; case 0x5fe1b2u: goto L_005fe1b2; case 0x5fe2dau: goto L_005fe2da; case 0x5fe1fbu: goto L_005fe1fb; case 0x5fe233u: goto L_005fe233; case 0x5fe2b3u: goto L_005fe2b3; case 0x5fe2c0u: goto L_005fe2c0; case 0x5fe2cdu: goto L_005fe2cd; default: UNSUP(0x005fe181, "jump table entry is not a known target"); } }
L_005fe188:; BB(0x005fe188);
    /* 005fe188: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe18e: call 0x6010c3 */ r_esp -= 4; W32(r_esp, 0x5fe193u); f_006010c3();
    /* 005fe193: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe195: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe198: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fe19a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe19d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5fe1a0u); call_ind(t); }
    /* 005fe1a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe1a2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe1a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe1a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe1aa: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5fe1adu); call_ind(t); }
    /* 005fe1ad: jmp 0x5fe2ff */ goto L_005fe2ff;
L_005fe1b2:; BB(0x005fe1b2);
    /* 005fe1b2: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fe1b7: mov dword ptr [eax + 0x6c], 1 */ W32((u32)(r_eax+0x6cu), 0x1u);
    /* 005fe1be: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe1c4: call 0x602862 */ r_esp -= 4; W32(r_esp, 0x5fe1c9u); f_00602862();
    /* 005fe1c9: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe1cf: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe1d3: jne 0x5fe1eb */ if (!fZ) goto L_005fe1eb;
L_005fe1d5:; BB(0x005fe1d5);
    /* 005fe1d5: mov edx, dword ptr [0x6fc568] */ r_edx = R32((u32)(0x6fc568u));
    /* 005fe1db: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 005fe1de: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fe1e3: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 005fe1e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fe1e8: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5fe1ebu); call_ind(t); }
L_005fe1eb:; BB(0x005fe1eb);
    /* 005fe1eb: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe1f1: call 0x602d42 */ r_esp -= 4; W32(r_esp, 0x5fe1f6u); f_00602d42();
    /* 005fe1f6: jmp 0x5fe2ff */ goto L_005fe2ff;
L_005fe1fb:; BB(0x005fe1fb);
    /* 005fe1fb: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe1fd: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5fe202u); f_0048ab58();
    /* 005fe202: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe205: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fe208: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe20c: je 0x5fe21b */ if (fZ) goto L_005fe21b;
L_005fe20e:; BB(0x005fe20e);
    /* 005fe20e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe211: call 0x6043dc */ r_esp -= 4; W32(r_esp, 0x5fe216u); f_006043dc();
    /* 005fe216: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fe219: jmp 0x5fe222 */ goto L_005fe222;
L_005fe21b:; BB(0x005fe21b);
    /* 005fe21b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005fe222:; BB(0x005fe222);
    /* 005fe222: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe225: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe226: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe229: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x5fe22eu); f_005e62ca();
    /* 005fe22e: jmp 0x5fe2ff */ goto L_005fe2ff;
L_005fe233:; BB(0x005fe233);
    /* 005fe233: mov edx, dword ptr [0x6fc568] */ r_edx = R32((u32)(0x6fc568u));
    /* 005fe239: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005fe23c: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fe241: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005fe244: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fe246: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5fe249u); call_ind(t); }
    /* 005fe249: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe24f: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005fe252: mov dword ptr [edx + 0x6c], 6 */ W32((u32)(r_edx+0x6cu), 0x6u);
    /* 005fe259: push 0x16020 */ { u32 v = 0x16020u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe25e: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 005fe263: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005fe266: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5fe26bu); f_005ea0c3();
    /* 005fe26b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe26d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5fe272u); f_0048ab58();
    /* 005fe272: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe275: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005fe278: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe27c: je 0x5fe28d */ if (fZ) goto L_005fe28d;
L_005fe27e:; BB(0x005fe27e);
    /* 005fe27e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe280: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fe283: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x5fe288u); f_005d7698();
    /* 005fe288: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fe28b: jmp 0x5fe294 */ goto L_005fe294;
L_005fe28d:; BB(0x005fe28d);
    /* 005fe28d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005fe294:; BB(0x005fe294);
    /* 005fe294: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fe297: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe298: mov edx, dword ptr [0x6fc568] */ r_edx = R32((u32)(0x6fc568u));
    /* 005fe29e: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005fe2a1: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5fe2a6u); f_005e4060();
    /* 005fe2a6: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe2ac: call 0x603292 */ r_esp -= 4; W32(r_esp, 0x5fe2b1u); f_00603292();
    /* 005fe2b1: jmp 0x5fe2ff */ goto L_005fe2ff;
L_005fe2b3:; BB(0x005fe2b3);
    /* 005fe2b3: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe2b9: call 0x6021e9 */ r_esp -= 4; W32(r_esp, 0x5fe2beu); f_006021e9();
    /* 005fe2be: jmp 0x5fe2ff */ goto L_005fe2ff;
L_005fe2c0:; BB(0x005fe2c0);
    /* 005fe2c0: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe2c6: call 0x60245a */ r_esp -= 4; W32(r_esp, 0x5fe2cbu); f_0060245a();
    /* 005fe2cb: jmp 0x5fe2ff */ goto L_005fe2ff;
L_005fe2cd:; BB(0x005fe2cd);
    /* 005fe2cd: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe2d3: call 0x602627 */ r_esp -= 4; W32(r_esp, 0x5fe2d8u); f_00602627();
    /* 005fe2d8: jmp 0x5fe2ff */ goto L_005fe2ff;
L_005fe2da:; BB(0x005fe2da);
    /* 005fe2da: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 005fe2e0: call 0x602c71 */ r_esp -= 4; W32(r_esp, 0x5fe2e5u); f_00602c71();
    /* 005fe2e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe2e7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe2ea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe2ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe2ef: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5fe2f2u); call_ind(t); }
    /* 005fe2f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe2f4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe2f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe2f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe2fc: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5fe2ffu); call_ind(t); }
L_005fe2ff:; BB(0x005fe2ff);
    /* 005fe2ff: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe301: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe302: ret 4 */ FN_RET(0x005fe156); r_esp += 8; return;
}

void f_005fe330(void) /* FUN_005fe330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe330);
    /* 005fe330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe331: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fe337: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe33a: call 0x5fdb82 */ r_esp -= 4; W32(r_esp, 0x5fe33fu); f_005fdb82();
    /* 005fe33f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fe342: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fe345: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe347: je 0x5fe355 */ if (fZ) goto L_005fe355;
L_005fe349:; BB(0x005fe349);
    /* 005fe349: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe34c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe34d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5fe352u); f_0048ac1b();
    /* 005fe352: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fe355:; BB(0x005fe355);
    /* 005fe355: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe358: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe35a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe35b: ret 4 */ FN_RET(0x005fe330); r_esp += 8; return;
}

void f_005fe360(void) /* FUN_005fe360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe360);
    /* 005fe360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe361: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe363: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fe366: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fe36b: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe370: jne 0x5fe37d */ if (!fZ) goto L_005fe37d;
L_005fe372:; BB(0x005fe372);
    /* 005fe372: mov word ptr [0x6fe984], 0 */ W16((u32)(0x6fe984u), 0x0u);
    /* 005fe37b: jmp 0x5fe386 */ goto L_005fe386;
L_005fe37d:; BB(0x005fe37d);
    /* 005fe37d: mov word ptr [0x6fe984], 1 */ W16((u32)(0x6fe984u), 0x1u);
L_005fe386:; BB(0x005fe386);
    /* 005fe386: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe388: mov cx, word ptr [0x6fe980] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x6fe980u))) & 0xffffu);
    /* 005fe38f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe391: jne 0x5fe528 */ if (!fZ) goto L_005fe528;
L_005fe397:; BB(0x005fe397);
    /* 005fe397: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fe399: mov dx, word ptr [0x6fe984] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x6fe984u))) & 0xffffu);
    /* 005fe3a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe3a2: je 0x5fe528 */ if (fZ) goto L_005fe528;
L_005fe3a8:; BB(0x005fe3a8);
    /* 005fe3a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe3aa: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005fe3ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe3af: call 0x623474 */ r_esp -= 4; W32(r_esp, 0x5fe3b4u); f_00623474();
    /* 005fe3b4: mov dword ptr [0x6fe97c], eax */ W32((u32)(0x6fe97cu), r_eax);
    /* 005fe3b9: cmp dword ptr [0x6fe97c], 0 */ {  u32 a = R32((u32)(0x6fe97cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe3c0: je 0x5fe3cc */ if (fZ) goto L_005fe3cc;
L_005fe3c2:; BB(0x005fe3c2);
    /* 005fe3c2: mov eax, 1 */ r_eax = 0x1u;
    /* 005fe3c7: jmp 0x5fe52a */ goto L_005fe52a;
L_005fe3cc:; BB(0x005fe3cc);
    /* 005fe3cc: push 0x6fe908 */ { u32 v = 0x6fe908u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe3d1: call 0x6234ab */ r_esp -= 4; W32(r_esp, 0x5fe3d6u); f_006234ab();
    /* 005fe3d6: mov dword ptr [0x6fe97c], eax */ W32((u32)(0x6fe97cu), r_eax);
    /* 005fe3db: cmp dword ptr [0x6fe97c], 0 */ {  u32 a = R32((u32)(0x6fe97cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe3e2: je 0x5fe3f3 */ if (fZ) goto L_005fe3f3;
L_005fe3e4:; BB(0x005fe3e4);
    /* 005fe3e4: call 0x623495 */ r_esp -= 4; W32(r_esp, 0x5fe3e9u); f_00623495();
    /* 005fe3e9: mov eax, 1 */ r_eax = 0x1u;
    /* 005fe3ee: jmp 0x5fe52a */ goto L_005fe52a;
L_005fe3f3:; BB(0x005fe3f3);
    /* 005fe3f3: call 0x623495 */ r_esp -= 4; W32(r_esp, 0x5fe3f8u); f_00623495();
    /* 005fe3f8: mov dword ptr [0x6fe97c], eax */ W32((u32)(0x6fe97cu), r_eax);
    /* 005fe3fd: cmp dword ptr [0x6fe97c], 0 */ {  u32 a = R32((u32)(0x6fe97cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe404: je 0x5fe410 */ if (fZ) goto L_005fe410;
L_005fe406:; BB(0x005fe406);
    /* 005fe406: mov eax, 1 */ r_eax = 0x1u;
    /* 005fe40b: jmp 0x5fe52a */ goto L_005fe52a;
L_005fe410:; BB(0x005fe410);
    /* 005fe410: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe412: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe414: call 0x623258 */ r_esp -= 4; W32(r_esp, 0x5fe419u); f_00623258();
    /* 005fe419: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe41b: call 0x6232cc */ r_esp -= 4; W32(r_esp, 0x5fe420u); f_006232cc();
    /* 005fe420: mov dword ptr [0x6fe97c], eax */ W32((u32)(0x6fe97cu), r_eax);
    /* 005fe425: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005fe429: mov word ptr [0x6fe908], dx */ W16((u32)(0x6fe908u), (u16)r_edx);
    /* 005fe430: mov word ptr [0x6fe978], 1 */ W16((u32)(0x6fe978u), 0x1u);
    /* 005fe439: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe43b: mov ax, word ptr [0x6fe954] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6fe954u))) & 0xffffu);
    /* 005fe441: mov ecx, dword ptr [0x69c330] */ r_ecx = R32((u32)(0x69c330u));
    /* 005fe447: or ecx, dword ptr [0x69c334] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x69c334u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe44d: or ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe450: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fe452: mov edx, dword ptr [0x69c330] */ r_edx = R32((u32)(0x69c330u));
    /* 005fe458: or edx, dword ptr [0x69c334] */ {  u32 a = r_edx; u32 b = R32((u32)(0x69c334u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005fe45e: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005fe461: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe463: je 0x5fe481 */ if (fZ) goto L_005fe481;
L_005fe465:; BB(0x005fe465);
    /* 005fe465: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe467: mov ax, word ptr [0x6fe954] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6fe954u))) & 0xffffu);
    /* 005fe46d: or eax, 0x1c0000 */ {  u32 a = r_eax; u32 b = 0x1c0000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005fe472: mov dword ptr [0x6fe97c], eax */ W32((u32)(0x6fe97cu), r_eax);
    /* 005fe477: mov eax, dword ptr [0x6fe97c] */ r_eax = R32((u32)(0x6fe97cu));
    /* 005fe47c: jmp 0x5fe52a */ goto L_005fe52a;
L_005fe481:; BB(0x005fe481);
    /* 005fe481: mov ecx, dword ptr [0x69c330] */ r_ecx = R32((u32)(0x69c330u));
    /* 005fe487: or ecx, dword ptr [0x69c334] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x69c334u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe48d: or ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe490: mov word ptr [0x6fe956], cx */ W16((u32)(0x6fe956u), (u16)r_ecx);
    /* 005fe497: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005fe49a: mov dword ptr [0x6fe95e], edx */ W32((u32)(0x6fe95eu), r_edx);
    /* 005fe4a0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005fe4a3: mov dword ptr [0x6fe962], eax */ W32((u32)(0x6fe962u), r_eax);
    /* 005fe4a8: mov word ptr [0x6fe970], 0xf0 */ W16((u32)(0x6fe970u), 0xf0u);
    /* 005fe4b1: mov cx, word ptr [0x69c338] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x69c338u))) & 0xffffu);
    /* 005fe4b8: mov word ptr [0x6fe976], cx */ W16((u32)(0x6fe976u), (u16)r_ecx);
    /* 005fe4bf: mov word ptr [0x6fe972], 0x40 */ W16((u32)(0x6fe972u), 0x40u);
    /* 005fe4c8: mov dx, word ptr [0x69c33c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x69c33cu))) & 0xffffu);
    /* 005fe4cf: mov word ptr [0x6fe974], dx */ W16((u32)(0x6fe974u), (u16)r_edx);
    /* 005fe4d6: push 0x6fe904 */ { u32 v = 0x6fe904u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe4db: push 0x6fe908 */ { u32 v = 0x6fe908u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe4e0: call 0x62328f */ r_esp -= 4; W32(r_esp, 0x5fe4e5u); f_0062328f();
    /* 005fe4e5: mov dword ptr [0x6fe97c], eax */ W32((u32)(0x6fe97cu), r_eax);
    /* 005fe4ea: cmp dword ptr [0x6fe97c], 0 */ {  u32 a = R32((u32)(0x6fe97cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe4f1: je 0x5fe503 */ if (fZ) goto L_005fe503;
L_005fe4f3:; BB(0x005fe4f3);
    /* 005fe4f3: mov word ptr [0x6fe980], 0 */ W16((u32)(0x6fe980u), 0x0u);
    /* 005fe4fc: mov eax, dword ptr [0x6fe97c] */ r_eax = R32((u32)(0x6fe97cu));
    /* 005fe501: jmp 0x5fe52a */ goto L_005fe52a;
L_005fe503:; BB(0x005fe503);
    /* 005fe503: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005fe506: mov dword ptr [0x6fe370], eax */ W32((u32)(0x6fe370u), r_eax);
    /* 005fe50b: mov ecx, dword ptr [0x6fe370] */ r_ecx = R32((u32)(0x6fe370u));
    /* 005fe511: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe512: mov dx, word ptr [0x6fe904] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x6fe904u))) & 0xffffu);
    /* 005fe519: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe51a: call 0x623437 */ r_esp -= 4; W32(r_esp, 0x5fe51fu); f_00623437();
    /* 005fe51f: mov word ptr [0x6fe980], 1 */ W16((u32)(0x6fe980u), 0x1u);
L_005fe528:; BB(0x005fe528);
    /* 005fe528: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fe52a:; BB(0x005fe52a);
    /* 005fe52a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe52b: ret  */ FN_RET(0x005fe360); r_esp += 4; return;
}

void f_005fe52c(void) /* FUN_005fe52c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe52c);
    /* 005fe52c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe52d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe52f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe531: mov ax, word ptr [0x6fe980] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6fe980u))) & 0xffffu);
    /* 005fe537: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe539: je 0x5fe55c */ if (fZ) goto L_005fe55c;
L_005fe53b:; BB(0x005fe53b);
    /* 005fe53b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fe53e: mov dword ptr [0x6fe370], ecx */ W32((u32)(0x6fe370u), r_ecx);
    /* 005fe544: mov edx, dword ptr [0x6fe370] */ r_edx = R32((u32)(0x6fe370u));
    /* 005fe54a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe54b: mov ax, word ptr [0x6fe904] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6fe904u))) & 0xffffu);
    /* 005fe551: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe552: call 0x623437 */ r_esp -= 4; W32(r_esp, 0x5fe557u); f_00623437();
    /* 005fe557: mov dword ptr [0x6fe97c], eax */ W32((u32)(0x6fe97cu), r_eax);
L_005fe55c:; BB(0x005fe55c);
    /* 005fe55c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe55d: ret  */ FN_RET(0x005fe52c); r_esp += 4; return;
}

void f_005fe55e(void) /* FUN_005fe55e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe55e);
    /* 005fe55e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe55f: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe561: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe563: mov ax, word ptr [0x6fe980] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6fe980u))) & 0xffffu);
    /* 005fe569: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe56b: je 0x5fe5bd */ if (fZ) goto L_005fe5bd;
L_005fe56d:; BB(0x005fe56d);
    /* 005fe56d: mov word ptr [0x6fe980], 0 */ W16((u32)(0x6fe980u), 0x0u);
    /* 005fe576: mov cx, word ptr [0x6fe904] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x6fe904u))) & 0xffffu);
    /* 005fe57d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe57e: call 0x6238d3 */ r_esp -= 4; W32(r_esp, 0x5fe583u); f_006238d3();
    /* 005fe583: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe585: mov dx, word ptr [0x6fe904] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x6fe904u))) & 0xffffu);
    /* 005fe58c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe58d: call 0x623437 */ r_esp -= 4; W32(r_esp, 0x5fe592u); f_00623437();
    /* 005fe592: mov ax, word ptr [0x6fe904] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6fe904u))) & 0xffffu);
    /* 005fe598: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe599: call 0x6232af */ r_esp -= 4; W32(r_esp, 0x5fe59eu); f_006232af();
    /* 005fe59e: mov dword ptr [0x6fe97c], eax */ W32((u32)(0x6fe97cu), r_eax);
    /* 005fe5a3: cmp dword ptr [0x6fe97c], 0 */ {  u32 a = R32((u32)(0x6fe97cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe5aa: je 0x5fe5b3 */ if (fZ) goto L_005fe5b3;
L_005fe5ac:; BB(0x005fe5ac);
    /* 005fe5ac: mov eax, 1 */ r_eax = 0x1u;
    /* 005fe5b1: jmp 0x5fe5bf */ goto L_005fe5bf;
L_005fe5b3:; BB(0x005fe5b3);
    /* 005fe5b3: call 0x6232e9 */ r_esp -= 4; W32(r_esp, 0x5fe5b8u); f_006232e9();
    /* 005fe5b8: call 0x623279 */ r_esp -= 4; W32(r_esp, 0x5fe5bdu); f_00623279();
L_005fe5bd:; BB(0x005fe5bd);
    /* 005fe5bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fe5bf:; BB(0x005fe5bf);
    /* 005fe5bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe5c0: ret  */ FN_RET(0x005fe55e); r_esp += 4; return;
}

void f_005fe5c1(void) /* FUN_005fe5c1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe5c1);
    /* 005fe5c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5c2: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe5c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe5c6: mov ax, word ptr [0x6fe980] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6fe980u))) & 0xffffu);
    /* 005fe5cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe5ce: mov cx, word ptr [0x6fe984] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x6fe984u))) & 0xffffu);
    /* 005fe5d5: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fe5d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe5d8: ret  */ FN_RET(0x005fe5c1); r_esp += 4; return;
}

void f_005fe5d9(void) /* FUN_005fe5d9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe5d9);
    /* 005fe5d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5da: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe5dc: mov ax, word ptr [0x6fe904] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6fe904u))) & 0xffffu);
    /* 005fe5e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe5e3: ret  */ FN_RET(0x005fe5d9); r_esp += 4; return;
}

void f_005fe5e4(void) /* FUN_005fe5e4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe5e4);
    /* 005fe5e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5e5: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe5e7: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5ec: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fe5ef: mov ecx, dword ptr [eax + 2] */ r_ecx = R32((u32)(r_eax+0x2u));
    /* 005fe5f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5f3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fe5f6: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005fe5fc: mov eax, dword ptr [edx*4 + 0x6fe378] */ r_eax = R32((u32)(r_edx*4+0x6fe378u));
    /* 005fe603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe604: call dword ptr [0x633060] */ { u32 t = R32((u32)(0x633060u)); r_esp -= 4; W32(r_esp, 0x5fe60au); call_ind(t); }
    /* 005fe60a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fe60d: mov dword ptr [ecx + 0xe], eax */ W32((u32)(r_ecx+0xeu), r_eax);
    /* 005fe610: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fe613: cmp dword ptr [edx + 0xe], 0 */ {  u32 a = R32((u32)(r_edx+0xeu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe617: je 0x5fe62f */ if (fZ) goto L_005fe62f;
L_005fe619:; BB(0x005fe619);
    /* 005fe619: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fe61c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe61d: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005fe621: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe622: mov dx, word ptr [0x6fe904] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x6fe904u))) & 0xffffu);
    /* 005fe629: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe62a: call 0x6235d7 */ r_esp -= 4; W32(r_esp, 0x5fe62fu); f_006235d7();
L_005fe62f:; BB(0x005fe62f);
    /* 005fe62f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe631: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe632: ret  */ FN_RET(0x005fe5e4); r_esp += 4; return;
}

void f_005fe633(void) /* FUN_005fe633 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe633);
    /* 005fe633: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe634: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe636: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe637: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005fe63b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe63c: mov cx, word ptr [0x6fe904] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x6fe904u))) & 0xffffu);
    /* 005fe643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe644: call 0x62361f */ r_esp -= 4; W32(r_esp, 0x5fe649u); f_0062361f();
    /* 005fe649: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005fe64d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe64e: mov ax, word ptr [0x6fe904] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6fe904u))) & 0xffffu);
    /* 005fe654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe655: call 0x623569 */ r_esp -= 4; W32(r_esp, 0x5fe65au); f_00623569();
    /* 005fe65a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fe65d: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe663: mov edx, dword ptr [ecx*4 + 0x6fe378] */ r_edx = R32((u32)(r_ecx*4+0x6fe378u));
    /* 005fe66a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe66b: call dword ptr [0x63306c] */ { u32 t = R32((u32)(0x63306cu)); r_esp -= 4; W32(r_esp, 0x5fe671u); call_ind(t); }
    /* 005fe671: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fe677: jmp 0x5fe685 */ goto L_005fe685;
L_005fe679:; BB(0x005fe679);
    /* 005fe679: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005fe67d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005fe681: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005fe685:; BB(0x005fe685);
    /* 005fe685: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe688: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe68e: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe691: jge 0x5fe765 */ if ((fS==fO)) goto L_005fe765;
L_005fe697:; BB(0x005fe697);
    /* 005fe697: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fe69a: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005fe6a0: imul edx, edx, 0xf0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xf0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fe6a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe6a9: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fe6ae: imul eax, eax, 0x1e */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1eu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fe6b1: lea ecx, [edx + eax + 0x6fc570] */ r_ecx = (u32)(r_edx+r_eax+0x6fc570u);
    /* 005fe6b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe6b9: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005fe6bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe6be: mov ax, word ptr [0x6fe904] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6fe904u))) & 0xffffu);
    /* 005fe6c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe6c5: call 0x6235b1 */ r_esp -= 4; W32(r_esp, 0x5fe6cau); f_006235b1();
    /* 005fe6ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fe6cd: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe6d3: imul ecx, ecx, 0xf0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xf0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fe6d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe6dc: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005fe6e2: imul edx, edx, 0x1e */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1eu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fe6e5: mov eax, dword ptr [ecx + edx + 0x6fc57a] */ r_eax = R32((u32)(r_ecx+r_edx+0x6fc57au));
    /* 005fe6ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe6ed: call 0x623e9f */ r_esp -= 4; W32(r_esp, 0x5fe6f2u); f_00623e9f();
    /* 005fe6f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fe6f5: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe6fb: imul ecx, ecx, 0xf0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xf0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fe701: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe704: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005fe70a: imul edx, edx, 0x1e */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1eu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fe70d: mov eax, dword ptr [ecx + edx + 0x6fc576] */ r_eax = R32((u32)(r_ecx+r_edx+0x6fc576u));
    /* 005fe714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe715: call 0x623e9f */ r_esp -= 4; W32(r_esp, 0x5fe71au); f_00623e9f();
    /* 005fe71a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fe71d: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe723: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005fe726: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe729: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005fe72f: mov eax, dword ptr [ecx + edx*4 + 0x6fe3f8] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x6fe3f8u));
    /* 005fe736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe737: call dword ptr [0x633068] */ { u32 t = R32((u32)(0x633068u)); r_esp -= 4; W32(r_esp, 0x5fe73du); call_ind(t); }
    /* 005fe73d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fe740: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe746: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005fe749: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe74c: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005fe752: mov eax, dword ptr [ecx + edx*4 + 0x6fe3f8] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x6fe3f8u));
    /* 005fe759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe75a: call dword ptr [0x633064] */ { u32 t = R32((u32)(0x633064u)); r_esp -= 4; W32(r_esp, 0x5fe760u); call_ind(t); }
    /* 005fe760: jmp 0x5fe679 */ goto L_005fe679;
L_005fe765:; BB(0x005fe765);
    /* 005fe765: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe767: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe769: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe76a: ret  */ FN_RET(0x005fe633); r_esp += 4; return;
}

void f_005fe770(void) /* FUN_005fe770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe770);
    /* 005fe770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe771: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe773: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe776: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 005fe779: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fe77c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe77d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fe780: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe781: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe783: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe786: call 0x61c340 */ r_esp -= 4; W32(r_esp, 0x5fe78bu); f_0061c340();
    /* 005fe78b: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe78e: mov dword ptr [edx], 0x63c4f4 */ W32((u32)(r_edx), 0x63c4f4u);
    /* 005fe794: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe797: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe79b: je 0x5fe7ad */ if (fZ) goto L_005fe7ad;
L_005fe79d:; BB(0x005fe79d);
    /* 005fe79d: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe7a0: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 005fe7a3: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x5fe7a8u); f_0060ebea();
    /* 005fe7a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fe7ab: jmp 0x5fe7b4 */ goto L_005fe7b4;
L_005fe7ad:; BB(0x005fe7ad);
    /* 005fe7ad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005fe7b4:; BB(0x005fe7b4);
    /* 005fe7b4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe7b8: jne 0x5fe7bf */ if (!fZ) goto L_005fe7bf;
L_005fe7ba:; BB(0x005fe7ba);
    /* 005fe7ba: jmp 0x5feb7f */ goto L_005feb7f;
L_005fe7bf:; BB(0x005fe7bf);
    /* 005fe7bf: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe7c1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5fe7c6u); f_0048ab58();
    /* 005fe7c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe7c9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fe7cc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe7cf: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 005fe7d6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe7d9: mov dword ptr [eax + 4], 0x204d454d */ W32((u32)(r_eax+0x4u), 0x204d454du);
    /* 005fe7e0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe7e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe7e6: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 005fe7e9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe7ec: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe7ef: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005fe7f2: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 005fe7f5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe7f8: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 005fe7ff: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe802: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 005fe808: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe80b: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005fe812: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe815: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005fe81c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe81f: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 005fe826: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe829: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 005fe830: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe833: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 005fe83a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe83d: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 005fe844: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe847: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 005fe84e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe851: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 005fe858: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe85b: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 005fe862: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe865: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 005fe86c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe86e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe874: call dword ptr [0x633298] */ { u32 t = R32((u32)(0x633298u)); r_esp -= 4; W32(r_esp, 0x5fe87au); call_ind(t); }
    /* 005fe87a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005fe87d: mov dword ptr [ebp - 0x44], 0x45564157 */ W32((u32)(r_ebp+0xffffffbcu), 0x45564157u);
    /* 005fe884: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe886: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe888: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 005fe88b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe88c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fe88f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe890: call dword ptr [0x63329c] */ { u32 t = R32((u32)(0x63329cu)); r_esp -= 4; W32(r_esp, 0x5fe896u); call_ind(t); }
    /* 005fe896: mov dword ptr [ebp - 0x38], 0x20746d66 */ W32((u32)(r_ebp+0xffffffc8u), 0x20746d66u);
    /* 005fe89d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe89f: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 005fe8a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe8a3: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005fe8a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe8a7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fe8aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe8ab: call dword ptr [0x63329c] */ { u32 t = R32((u32)(0x63329cu)); r_esp -= 4; W32(r_esp, 0x5fe8b1u); call_ind(t); }
    /* 005fe8b1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe8b3: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005fe8b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe8b7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fe8ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe8bb: call dword ptr [0x6332a0] */ { u32 t = R32((u32)(0x6332a0u)); r_esp -= 4; W32(r_esp, 0x5fe8c1u); call_ind(t); }
    /* 005fe8c1: mov edx, dword ptr [ebp - 0x12] */ r_edx = R32((u32)(r_ebp+0xffffffeeu));
    /* 005fe8c4: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005fe8ca: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 005fe8cd: cmp dword ptr [ebp - 0x64], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe8d1: je 0x5fe8db */ if (fZ) goto L_005fe8db;
L_005fe8d3:; BB(0x005fe8d3);
    /* 005fe8d3: cmp dword ptr [ebp - 0x64], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe8d7: je 0x5fe90c */ if (fZ) goto L_005fe90c;
L_005fe8d9:; BB(0x005fe8d9);
    /* 005fe8d9: jmp 0x5fe93b */ goto L_005fe93b;
L_005fe8db:; BB(0x005fe8db);
    /* 005fe8db: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fe8de: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fe8e3: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005fe8e6: cmp dword ptr [ebp - 0x68], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe8ea: je 0x5fe8f4 */ if (fZ) goto L_005fe8f4;
L_005fe8ec:; BB(0x005fe8ec);
    /* 005fe8ec: cmp dword ptr [ebp - 0x68], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe8f0: je 0x5fe900 */ if (fZ) goto L_005fe900;
L_005fe8f2:; BB(0x005fe8f2);
    /* 005fe8f2: jmp 0x5fe90a */ goto L_005fe90a;
L_005fe8f4:; BB(0x005fe8f4);
    /* 005fe8f4: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe8f7: mov dword ptr [ecx + 0x30], 1 */ W32((u32)(r_ecx+0x30u), 0x1u);
    /* 005fe8fe: jmp 0x5fe90a */ goto L_005fe90a;
L_005fe900:; BB(0x005fe900);
    /* 005fe900: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe903: mov dword ptr [edx + 0x30], 3 */ W32((u32)(r_edx+0x30u), 0x3u);
L_005fe90a:; BB(0x005fe90a);
    /* 005fe90a: jmp 0x5fe93b */ goto L_005fe93b;
L_005fe90c:; BB(0x005fe90c);
    /* 005fe90c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fe90f: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fe914: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005fe917: cmp dword ptr [ebp - 0x6c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe91b: je 0x5fe925 */ if (fZ) goto L_005fe925;
L_005fe91d:; BB(0x005fe91d);
    /* 005fe91d: cmp dword ptr [ebp - 0x6c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe921: je 0x5fe931 */ if (fZ) goto L_005fe931;
L_005fe923:; BB(0x005fe923);
    /* 005fe923: jmp 0x5fe93b */ goto L_005fe93b;
L_005fe925:; BB(0x005fe925);
    /* 005fe925: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe928: mov dword ptr [ecx + 0x30], 2 */ W32((u32)(r_ecx+0x30u), 0x2u);
    /* 005fe92f: jmp 0x5fe93b */ goto L_005fe93b;
L_005fe931:; BB(0x005fe931);
    /* 005fe931: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe934: mov dword ptr [edx + 0x30], 4 */ W32((u32)(r_edx+0x30u), 0x4u);
L_005fe93b:; BB(0x005fe93b);
    /* 005fe93b: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe93e: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 005fe942: mov word ptr [eax + 0x34], cx */ W16((u32)(r_eax+0x34u), (u16)r_ecx);
    /* 005fe946: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe949: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe94b: mov ax, word ptr [edx + 0x34] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x34u))) & 0xffffu);
    /* 005fe94f: cmp eax, 0x2b11 */ {  u32 a = r_eax; u32 b = 0x2b11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe954: je 0x5fe9b7 */ if (fZ) goto L_005fe9b7;
L_005fe956:; BB(0x005fe956);
    /* 005fe956: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe959: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fe95b: mov dx, word ptr [ecx + 0x34] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x34u))) & 0xffffu);
    /* 005fe95f: cmp edx, 0x5622 */ {  u32 a = r_edx; u32 b = 0x5622u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe965: je 0x5fe9b7 */ if (fZ) goto L_005fe9b7;
L_005fe967:; BB(0x005fe967);
    /* 005fe967: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe96a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe96c: mov cx, word ptr [eax + 0x34] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x34u))) & 0xffffu);
    /* 005fe970: cmp ecx, 0xac44 */ {  u32 a = r_ecx; u32 b = 0xac44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe976: je 0x5fe9b7 */ if (fZ) goto L_005fe9b7;
L_005fe978:; BB(0x005fe978);
    /* 005fe978: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe97b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe97d: mov ax, word ptr [edx + 0x34] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x34u))) & 0xffffu);
    /* 005fe981: cmp eax, 0x5622 */ {  u32 a = r_eax; u32 b = 0x5622u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe986: jge 0x5fe993 */ if ((fS==fO)) goto L_005fe993;
L_005fe988:; BB(0x005fe988);
    /* 005fe988: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe98b: mov word ptr [ecx + 0x34], 0x2b11 */ W16((u32)(r_ecx+0x34u), 0x2b11u);
    /* 005fe991: jmp 0x5fe9b7 */ goto L_005fe9b7;
L_005fe993:; BB(0x005fe993);
    /* 005fe993: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe996: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe998: mov ax, word ptr [edx + 0x34] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x34u))) & 0xffffu);
    /* 005fe99c: cmp eax, 0xac44 */ {  u32 a = r_eax; u32 b = 0xac44u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe9a1: jge 0x5fe9ae */ if ((fS==fO)) goto L_005fe9ae;
L_005fe9a3:; BB(0x005fe9a3);
    /* 005fe9a3: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe9a6: mov word ptr [ecx + 0x34], 0x5622 */ W16((u32)(r_ecx+0x34u), 0x5622u);
    /* 005fe9ac: jmp 0x5fe9b7 */ goto L_005fe9b7;
L_005fe9ae:; BB(0x005fe9ae);
    /* 005fe9ae: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe9b1: mov word ptr [edx + 0x34], 0xac44 */ W16((u32)(r_edx+0x34u), 0xac44u);
L_005fe9b7:; BB(0x005fe9b7);
    /* 005fe9b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe9b9: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005fe9bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe9bd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fe9c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe9c1: call dword ptr [0x6332a4] */ { u32 t = R32((u32)(0x6332a4u)); r_esp -= 4; W32(r_esp, 0x5fe9c7u); call_ind(t); }
    /* 005fe9c7: mov dword ptr [ebp - 0x38], 0x61746164 */ W32((u32)(r_ebp+0xffffffc8u), 0x61746164u);
    /* 005fe9ce: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe9d0: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 005fe9d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe9d4: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005fe9d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe9d8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fe9db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe9dc: call dword ptr [0x63329c] */ { u32 t = R32((u32)(0x63329cu)); r_esp -= 4; W32(r_esp, 0x5fe9e2u); call_ind(t); }
    /* 005fe9e2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005fe9e5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005fe9e8: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe9eb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fe9ee: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 005fe9f1: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe9f3: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5fe9f8u); f_0048ab58();
    /* 005fe9f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe9fb: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005fe9fe: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fea02: je 0x5fea15 */ if (fZ) goto L_005fea15;
L_005fea04:; BB(0x005fea04);
    /* 005fea04: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fea07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fea08: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005fea0b: call 0x60eb40 */ r_esp -= 4; W32(r_esp, 0x5fea10u); f_0060eb40();
    /* 005fea10: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005fea13: jmp 0x5fea1c */ goto L_005fea1c;
L_005fea15:; BB(0x005fea15);
    /* 005fea15: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_005fea1c:; BB(0x005fea1c);
    /* 005fea1c: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fea1f: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fea22: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 005fea25: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fea28: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005fea2b: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x5fea30u); f_0060ebea();
    /* 005fea30: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fea33: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fea36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fea37: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fea3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fea3b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fea3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fea3f: call dword ptr [0x6332a0] */ { u32 t = R32((u32)(0x6332a0u)); r_esp -= 4; W32(r_esp, 0x5fea45u); call_ind(t); }
    /* 005fea45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fea47: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fea4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fea4b: call dword ptr [0x6332a8] */ { u32 t = R32((u32)(0x6332a8u)); r_esp -= 4; W32(r_esp, 0x5fea51u); call_ind(t); }
    /* 005fea51: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fea54: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005fea57: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005fea5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fea5b: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5fea60u); f_0048ac1b();
    /* 005fea60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fea63: mov eax, dword ptr [ebp - 6] */ r_eax = R32((u32)(r_ebp+0xfffffffau));
    /* 005fea66: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fea6b: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fea6e: jne 0x5feab8 */ if (!fZ) goto L_005feab8;
L_005fea70:; BB(0x005fea70);
    /* 005fea70: mov ecx, dword ptr [ebp - 0x12] */ r_ecx = R32((u32)(r_ebp+0xffffffeeu));
    /* 005fea73: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005fea79: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fea7c: jne 0x5fea93 */ if (!fZ) goto L_005fea93;
L_005fea7e:; BB(0x005fea7e);
    /* 005fea7e: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fea81: mov dword ptr [edx + 0x30], 1 */ W32((u32)(r_edx+0x30u), 0x1u);
    /* 005fea88: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fea8b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fea8e: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 005fea91: jmp 0x5feab6 */ goto L_005feab6;
L_005fea93:; BB(0x005fea93);
    /* 005fea93: mov edx, dword ptr [ebp - 0x12] */ r_edx = R32((u32)(r_ebp+0xffffffeeu));
    /* 005fea96: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005fea9c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fea9f: jne 0x5feab6 */ if (!fZ) goto L_005feab6;
L_005feaa1:; BB(0x005feaa1);
    /* 005feaa1: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005feaa4: mov dword ptr [eax + 0x30], 2 */ W32((u32)(r_eax+0x30u), 0x2u);
    /* 005feaab: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005feaae: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005feab0: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005feab3: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
L_005feab6:; BB(0x005feab6);
    /* 005feab6: jmp 0x5feb0e */ goto L_005feb0e;
L_005feab8:; BB(0x005feab8);
    /* 005feab8: mov eax, dword ptr [ebp - 6] */ r_eax = R32((u32)(r_ebp+0xfffffffau));
    /* 005feabb: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005feac0: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feac3: jne 0x5feb0e */ if (!fZ) goto L_005feb0e;
L_005feac5:; BB(0x005feac5);
    /* 005feac5: mov ecx, dword ptr [ebp - 0x12] */ r_ecx = R32((u32)(r_ebp+0xffffffeeu));
    /* 005feac8: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005feace: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fead1: jne 0x5feaea */ if (!fZ) goto L_005feaea;
L_005fead3:; BB(0x005fead3);
    /* 005fead3: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fead6: mov dword ptr [edx + 0x30], 3 */ W32((u32)(r_edx+0x30u), 0x3u);
    /* 005feadd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005feae0: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005feae2: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005feae5: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 005feae8: jmp 0x5feb0e */ goto L_005feb0e;
L_005feaea:; BB(0x005feaea);
    /* 005feaea: mov edx, dword ptr [ebp - 0x12] */ r_edx = R32((u32)(r_ebp+0xffffffeeu));
    /* 005feaed: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005feaf3: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feaf6: jne 0x5feb0e */ if (!fZ) goto L_005feb0e;
L_005feaf8:; BB(0x005feaf8);
    /* 005feaf8: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005feafb: mov dword ptr [eax + 0x30], 4 */ W32((u32)(r_eax+0x30u), 0x4u);
    /* 005feb02: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005feb05: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005feb08: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005feb0b: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
L_005feb0e:; BB(0x005feb0e);
    /* 005feb0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005feb10: mov al, byte ptr [0x6f6ef8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x6f6ef8u))) & 0xffu);
    /* 005feb15: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feb18: jne 0x5feb34 */ if (!fZ) goto L_005feb34;
L_005feb1a:; BB(0x005feb1a);
    /* 005feb1a: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005feb1d: cmp dword ptr [ecx + 0x30], 3 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feb21: je 0x5feb2c */ if (fZ) goto L_005feb2c;
L_005feb23:; BB(0x005feb23);
    /* 005feb23: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005feb26: cmp dword ptr [edx + 0x30], 4 */ {  u32 a = R32((u32)(r_edx+0x30u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feb2a: jne 0x5feb34 */ if (!fZ) goto L_005feb34;
L_005feb2c:; BB(0x005feb2c);
    /* 005feb2c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005feb2f: call 0x61c42c */ r_esp -= 4; W32(r_esp, 0x5feb34u); f_0061c42c();
L_005feb34:; BB(0x005feb34);
    /* 005feb34: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005feb37: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feb3b: je 0x5feb74 */ if (fZ) goto L_005feb74;
L_005feb3d:; BB(0x005feb3d);
    /* 005feb3d: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005feb40: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005feb43: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005feb46: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005feb49: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005feb4c: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feb50: je 0x5feb63 */ if (fZ) goto L_005feb63;
L_005feb52:; BB(0x005feb52);
    /* 005feb52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005feb54: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005feb57: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005feb59: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005feb5c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5feb5eu); call_ind(t); }
    /* 005feb5e: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005feb61: jmp 0x5feb6a */ goto L_005feb6a;
L_005feb63:; BB(0x005feb63);
    /* 005feb63: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_005feb6a:; BB(0x005feb6a);
    /* 005feb6a: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005feb6d: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_005feb74:; BB(0x005feb74);
    /* 005feb74: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005feb77: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005feb7a: call 0x60ec47 */ r_esp -= 4; W32(r_esp, 0x5feb7fu); f_0060ec47();
L_005feb7f:; BB(0x005feb7f);
    /* 005feb7f: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005feb82: mov esp, ebp */ r_esp = r_ebp;
    /* 005feb84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005feb85: ret 8 */ FN_RET(0x005fe770); r_esp += 12; return;
}

void f_005feb88(void) /* FUN_005feb88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005feb88);
    /* 005feb88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005feb89: mov ebp, esp */ r_ebp = r_esp;
    /* 005feb8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005feb8c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005feb8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005feb92: mov dword ptr [eax], 0x63c4f4 */ W32((u32)(r_eax), 0x63c4f4u);
    /* 005feb98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005feb9b: call 0x61c3aa */ r_esp -= 4; W32(r_esp, 0x5feba0u); f_0061c3aa();
    /* 005feba0: mov esp, ebp */ r_esp = r_ebp;
    /* 005feba2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005feba3: ret  */ FN_RET(0x005feb88); r_esp += 4; return;
}

void f_005feba4(void) /* FUN_005feba4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005feba4);
    /* 005feba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005feba5: mov ebp, esp */ r_ebp = r_esp;
    /* 005feba7: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005febaa: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005febad: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005febb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005febb1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005febb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005febb5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005febb7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005febba: call 0x61c340 */ r_esp -= 4; W32(r_esp, 0x5febbfu); f_0061c340();
    /* 005febbf: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005febc2: mov dword ptr [edx], 0x63c504 */ W32((u32)(r_edx), 0x63c504u);
    /* 005febc8: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005febcb: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005febcf: je 0x5febe1 */ if (fZ) goto L_005febe1;
L_005febd1:; BB(0x005febd1);
    /* 005febd1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005febd4: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 005febd7: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x5febdcu); f_0060ebea();
    /* 005febdc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005febdf: jmp 0x5febe8 */ goto L_005febe8;
L_005febe1:; BB(0x005febe1);
    /* 005febe1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005febe8:; BB(0x005febe8);
    /* 005febe8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005febec: jne 0x5febf3 */ if (!fZ) goto L_005febf3;
L_005febee:; BB(0x005febee);
    /* 005febee: jmp 0x5fed1f */ goto L_005fed1f;
L_005febf3:; BB(0x005febf3);
    /* 005febf3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005febf6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005febf9: mov dword ptr [ebp - 0x38], 0x10 */ W32((u32)(r_ebp+0xffffffc8u), 0x10u);
    /* 005fec00: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005fec02: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5fec07u); f_0048ab58();
    /* 005fec07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fec0a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005fec0d: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fec11: je 0x5fec27 */ if (fZ) goto L_005fec27;
L_005fec13:; BB(0x005fec13);
    /* 005fec13: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fec16: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005fec19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fec1a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005fec1d: call 0x60eb40 */ r_esp -= 4; W32(r_esp, 0x5fec22u); f_0060eb40();
    /* 005fec22: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005fec25: jmp 0x5fec2e */ goto L_005fec2e;
L_005fec27:; BB(0x005fec27);
    /* 005fec27: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005fec2e:; BB(0x005fec2e);
    /* 005fec2e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005fec31: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fec34: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 005fec37: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005fec3a: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005fec3d: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x5fec42u); f_0060ebea();
    /* 005fec42: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005fec45: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fec48: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005fec4b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005fec4e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fec51: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005fec54: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005fec57: mov ax, word ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 005fec5b: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 005fec5f: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 005fec62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fec63: call 0x46ce10 */ r_esp -= 4; W32(r_esp, 0x5fec68u); f_0046ce10();
    /* 005fec68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fec6b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fec6e: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fec71: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005fec74: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005fec77: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005fec7a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fec7d: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005fec80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fec81: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 005fec84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fec85: call 0x46ce3b */ r_esp -= 4; W32(r_esp, 0x5fec8au); f_0046ce3b();
    /* 005fec8a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fec8d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005fec90: mov dword ptr [ecx + 0x30], 3 */ W32((u32)(r_ecx+0x30u), 0x3u);
    /* 005fec97: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005fec9a: mov word ptr [edx + 0x34], 0x5622 */ W16((u32)(r_edx+0x34u), 0x5622u);
    /* 005feca0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005feca3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005feca6: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005feca8: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005fecab: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 005fecae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fecb0: mov al, byte ptr [0x6f6ef8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x6f6ef8u))) & 0xffu);
    /* 005fecb5: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fecb8: jne 0x5fecd4 */ if (!fZ) goto L_005fecd4;
L_005fecba:; BB(0x005fecba);
    /* 005fecba: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005fecbd: cmp dword ptr [ecx + 0x30], 3 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fecc1: je 0x5feccc */ if (fZ) goto L_005feccc;
L_005fecc3:; BB(0x005fecc3);
    /* 005fecc3: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005fecc6: cmp dword ptr [edx + 0x30], 4 */ {  u32 a = R32((u32)(r_edx+0x30u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fecca: jne 0x5fecd4 */ if (!fZ) goto L_005fecd4;
L_005feccc:; BB(0x005feccc);
    /* 005feccc: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005feccf: call 0x61c42c */ r_esp -= 4; W32(r_esp, 0x5fecd4u); f_0061c42c();
L_005fecd4:; BB(0x005fecd4);
    /* 005fecd4: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005fecd7: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fecdb: je 0x5fed14 */ if (fZ) goto L_005fed14;
L_005fecdd:; BB(0x005fecdd);
    /* 005fecdd: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005fece0: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005fece3: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005fece6: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005fece9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005fecec: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fecf0: je 0x5fed03 */ if (fZ) goto L_005fed03;
L_005fecf2:; BB(0x005fecf2);
    /* 005fecf2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fecf4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005fecf7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fecf9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005fecfc: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5fecfeu); call_ind(t); }
    /* 005fecfe: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005fed01: jmp 0x5fed0a */ goto L_005fed0a;
L_005fed03:; BB(0x005fed03);
    /* 005fed03: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005fed0a:; BB(0x005fed0a);
    /* 005fed0a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005fed0d: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_005fed14:; BB(0x005fed14);
    /* 005fed14: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005fed17: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005fed1a: call 0x60ec47 */ r_esp -= 4; W32(r_esp, 0x5fed1fu); f_0060ec47();
L_005fed1f:; BB(0x005fed1f);
    /* 005fed1f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005fed22: mov esp, ebp */ r_esp = r_ebp;
    /* 005fed24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fed25: ret 8 */ FN_RET(0x005feba4); r_esp += 12; return;
}

void f_005fed28(void) /* FUN_005fed28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fed28);
    /* 005fed28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fed29: mov ebp, esp */ r_ebp = r_esp;
    /* 005fed2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fed2c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fed2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fed32: mov dword ptr [eax], 0x63c504 */ W32((u32)(r_eax), 0x63c504u);
    /* 005fed38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fed3b: call 0x61c3aa */ r_esp -= 4; W32(r_esp, 0x5fed40u); f_0061c3aa();
    /* 005fed40: mov esp, ebp */ r_esp = r_ebp;
    /* 005fed42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fed43: ret  */ FN_RET(0x005fed28); r_esp += 4; return;
}

void f_005fed50(void) /* FUN_005fed50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fed50);
    /* 005fed50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fed51: mov ebp, esp */ r_ebp = r_esp;
    /* 005fed53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fed54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fed57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fed5a: call 0x5feb88 */ r_esp -= 4; W32(r_esp, 0x5fed5fu); f_005feb88();
    /* 005fed5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fed62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fed65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fed67: je 0x5fed75 */ if (fZ) goto L_005fed75;
L_005fed69:; BB(0x005fed69);
    /* 005fed69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fed6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fed6d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5fed72u); f_0048ac1b();
    /* 005fed72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fed75:; BB(0x005fed75);
    /* 005fed75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fed78: mov esp, ebp */ r_esp = r_ebp;
    /* 005fed7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fed7b: ret 4 */ FN_RET(0x005fed50); r_esp += 8; return;
}

void f_005fed80(void) /* FUN_005fed80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fed80);
    /* 005fed80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fed81: mov ebp, esp */ r_ebp = r_esp;
    /* 005fed83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fed84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fed87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fed8a: call 0x5fed28 */ r_esp -= 4; W32(r_esp, 0x5fed8fu); f_005fed28();
    /* 005fed8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fed92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fed95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fed97: je 0x5feda5 */ if (fZ) goto L_005feda5;
L_005fed99:; BB(0x005fed99);
    /* 005fed99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fed9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fed9d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5feda2u); f_0048ac1b();
    /* 005feda2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005feda5:; BB(0x005feda5);
    /* 005feda5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005feda8: mov esp, ebp */ r_esp = r_ebp;
    /* 005fedaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fedab: ret 4 */ FN_RET(0x005fed80); r_esp += 8; return;
}

void f_005fedb0(void) /* FUN_005fedb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fedb0);
    /* 005fedb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fedb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fedb3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fedb7: je 0x5fede5 */ if (fZ) goto L_005fede5;
L_005fedb9:; BB(0x005fedb9);
    /* 005fedb9: push 0x69c388 */ { u32 v = 0x69c388u; r_esp -= 4; W32(r_esp, v); }
    /* 005fedbe: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5fedc3u); f_0060fc40();
    /* 005fedc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fedc6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fedc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fedca: call 0x623458 */ r_esp -= 4; W32(r_esp, 0x5fedcfu); f_00623458();
    /* 005fedcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fedd0: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5fedd5u); f_0060fc40();
    /* 005fedd5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fedd8: push 0x69c394 */ { u32 v = 0x69c394u; r_esp -= 4; W32(r_esp, v); }
    /* 005feddd: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5fede2u); f_0060fc40();
    /* 005fede2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fede5:; BB(0x005fede5);
    /* 005fede5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fede6: ret  */ FN_RET(0x005fedb0); r_esp += 4; return;
}

void f_005fede7(void) /* FUN_005fede7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fede7);
    /* 005fede7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fede8: mov ebp, esp */ r_ebp = r_esp;
    /* 005fedea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fedec: push 0x69c398 */ { u32 v = 0x69c398u; r_esp -= 4; W32(r_esp, v); }
    /* 005fedf1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fedf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fedf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fedf7: call dword ptr [0x6331f8] */ { u32 t = R32((u32)(0x6331f8u)); r_esp -= 4; W32(r_esp, 0x5fedfdu); call_ind(t); }
    /* 005fedfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fedfe: ret  */ FN_RET(0x005fede7); r_esp += 4; return;
}

void f_005fedff(void) /* FUN_005fedff */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fedff);
    /* 005fedff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fee00: mov ebp, esp */ r_ebp = r_esp;
    /* 005fee02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fee03: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fee06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fee09: call 0x61c5c0 */ r_esp -= 4; W32(r_esp, 0x5fee0eu); f_0061c5c0();
    /* 005fee0e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fee11: mov dword ptr [eax], 0x63c514 */ W32((u32)(r_eax), 0x63c514u);
    /* 005fee17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fee1a: mov dword ptr [ecx + 0xf4], 0 */ W32((u32)(r_ecx+0xf4u), 0x0u);
    /* 005fee24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fee27: call 0x5ff854 */ r_esp -= 4; W32(r_esp, 0x5fee2cu); f_005ff854();
    /* 005fee2c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fee2e: mov dl, byte ptr [0x6f6ef8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x6f6ef8u))) & 0xffu);
    /* 005fee34: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fee37: je 0x5fee42 */ if (fZ) goto L_005fee42;
L_005fee39:; BB(0x005fee39);
    /* 005fee39: cmp dword ptr [0x6f6f04], 0 */ {  u32 a = R32((u32)(0x6f6f04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fee40: je 0x5fee56 */ if (fZ) goto L_005fee56;
L_005fee42:; BB(0x005fee42);
    /* 005fee42: mov dword ptr [0x69c330], 1 */ W32((u32)(0x69c330u), 0x1u);
    /* 005fee4c: mov dword ptr [0x69c334], 4 */ W32((u32)(0x69c334u), 0x4u);
L_005fee56:; BB(0x005fee56);
    /* 005fee56: cmp dword ptr [0x6f6f04], 0 */ {  u32 a = R32((u32)(0x6f6f04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fee5d: je 0x5fee6b */ if (fZ) goto L_005fee6b;
L_005fee5f:; BB(0x005fee5f);
    /* 005fee5f: mov dword ptr [0x700788], 1 */ W32((u32)(0x700788u), 0x1u);
    /* 005fee69: jmp 0x5fee84 */ goto L_005fee84;
L_005fee6b:; BB(0x005fee6b);
    /* 005fee6b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fee6d: push 0x69c39c */ { u32 v = 0x69c39cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fee72: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005fee77: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005fee7a: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x5fee7fu); f_0061ba62();
    /* 005fee7f: mov dword ptr [0x700788], eax */ W32((u32)(0x700788u), r_eax);
L_005fee84:; BB(0x005fee84);
    /* 005fee84: cmp dword ptr [0x700788], 0 */ {  u32 a = R32((u32)(0x700788u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fee8b: jne 0x5fefa5 */ if (!fZ) goto L_005fefa5;
L_005fee91:; BB(0x005fee91);
    /* 005fee91: call 0x623090 */ r_esp -= 4; W32(r_esp, 0x5fee96u); f_00623090();
    /* 005fee96: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005fee9b: cmp dword ptr [0x70078c], 0 */ {  u32 a = R32((u32)(0x70078cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feea2: jne 0x5fef9b */ if (!fZ) goto L_005fef9b;
L_005feea8:; BB(0x005feea8);
    /* 005feea8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005feeaa: push 0x69c3a8 */ { u32 v = 0x69c3a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005feeaf: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005feeb5: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 005feeb8: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x5feebdu); f_0061ba62();
    /* 005feebd: mov dword ptr [0x700d1c], eax */ W32((u32)(0x700d1cu), r_eax);
    /* 005feec2: cmp dword ptr [0x700d1c], 0 */ {  u32 a = R32((u32)(0x700d1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feec9: je 0x5feefb */ if (fZ) goto L_005feefb;
L_005feecb:; BB(0x005feecb);
    /* 005feecb: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005feed1: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005feed4: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005feed7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005feed8: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005feede: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005feee1: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005feee4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005feee5: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005feeea: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005feeec: call 0x5fe360 */ r_esp -= 4; W32(r_esp, 0x5feef1u); f_005fe360();
    /* 005feef1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005feef4: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005feef9: jmp 0x5fef29 */ goto L_005fef29;
L_005feefb:; BB(0x005feefb);
    /* 005feefb: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005fef01: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005fef04: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005fef07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fef08: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005fef0e: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005fef11: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005fef14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fef15: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fef1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fef1c: call 0x5fe360 */ r_esp -= 4; W32(r_esp, 0x5fef21u); f_005fe360();
    /* 005fef21: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fef24: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
L_005fef29:; BB(0x005fef29);
    /* 005fef29: mov edx, dword ptr [0x70078c] */ r_edx = R32((u32)(0x70078cu));
    /* 005fef2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fef30: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5fef35u); f_005fedb0();
    /* 005fef35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fef38: cmp dword ptr [0x70078c], 0 */ {  u32 a = R32((u32)(0x70078cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fef3f: jne 0x5fef82 */ if (!fZ) goto L_005fef82;
L_005fef41:; BB(0x005fef41);
    /* 005fef41: mov dword ptr [0x700d20], 1 */ W32((u32)(0x700d20u), 0x1u);
    /* 005fef4b: call 0x5fe5d9 */ r_esp -= 4; W32(r_esp, 0x5fef50u); f_005fe5d9();
    /* 005fef50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fef53: mov word ptr [ecx + 0x100], ax */ W16((u32)(r_ecx+0x100u), (u16)r_eax);
    /* 005fef5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fef5c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fef5f: mov ax, word ptr [edx + 0x100] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x100u))) & 0xffffu);
    /* 005fef66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fef67: call 0x623500 */ r_esp -= 4; W32(r_esp, 0x5fef6cu); f_00623500();
    /* 005fef6c: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005fef71: mov ecx, dword ptr [0x70078c] */ r_ecx = R32((u32)(0x70078cu));
    /* 005fef77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fef78: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5fef7du); f_005fedb0();
    /* 005fef7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fef80: jmp 0x5fef8c */ goto L_005fef8c;
L_005fef82:; BB(0x005fef82);
    /* 005fef82: mov dword ptr [0x700d20], 0 */ W32((u32)(0x700d20u), 0x0u);
L_005fef8c:; BB(0x005fef8c);
    /* 005fef8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fef8f: mov dword ptr [edx + 0x104], 0 */ W32((u32)(r_edx+0x104u), 0x0u);
    /* 005fef99: jmp 0x5fefa5 */ goto L_005fefa5;
L_005fef9b:; BB(0x005fef9b);
    /* 005fef9b: mov dword ptr [0x700788], 1 */ W32((u32)(0x700788u), 0x1u);
L_005fefa5:; BB(0x005fefa5);
    /* 005fefa5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fefa8: mov dword ptr [eax + 0x108], 0 */ W32((u32)(r_eax+0x108u), 0x0u);
    /* 005fefb2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fefb5: mov dword ptr [ecx + 0x10c], 0 */ W32((u32)(r_ecx+0x10cu), 0x0u);
    /* 005fefbf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fefc2: mov dword ptr [edx + 0x118], 0 */ W32((u32)(r_edx+0x118u), 0x0u);
    /* 005fefcc: mov dword ptr [edx + 0x11c], 0x3ff00000 */ W32((u32)(r_edx+0x11cu), 0x3ff00000u);
    /* 005fefd6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fefd9: mov esp, ebp */ r_esp = r_ebp;
    /* 005fefdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fefdc: ret  */ FN_RET(0x005fedff); r_esp += 4; return;
}

void f_005fefdd(void) /* FUN_005fefdd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fefdd);
    /* 005fefdd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fefde: mov ebp, esp */ r_ebp = r_esp;
    /* 005fefe0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fefe1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fefe4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fefe7: mov dword ptr [eax], 0x63c514 */ W32((u32)(r_eax), 0x63c514u);
    /* 005fefed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005feff0: call 0x5ff86c */ r_esp -= 4; W32(r_esp, 0x5feff5u); f_005ff86c();
    /* 005feff5: cmp dword ptr [0x700788], 0 */ {  u32 a = R32((u32)(0x700788u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feffc: jne 0x5ff05f */ if (!fZ) goto L_005ff05f;
L_005feffe:; BB(0x005feffe);
    /* 005feffe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff001: cmp dword ptr [ecx + 0x104], 0 */ {  u32 a = R32((u32)(r_ecx+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff008: jne 0x5ff02e */ if (!fZ) goto L_005ff02e;
L_005ff00a:; BB(0x005ff00a);
    /* 005ff00a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff00d: mov ax, word ptr [edx + 0x100] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x100u))) & 0xffffu);
    /* 005ff014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff015: call 0x6234e3 */ r_esp -= 4; W32(r_esp, 0x5ff01au); f_006234e3();
    /* 005ff01a: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005ff01f: mov ecx, dword ptr [0x70078c] */ r_ecx = R32((u32)(0x70078cu));
    /* 005ff025: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff026: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5ff02bu); f_005fedb0();
    /* 005ff02b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ff02e:; BB(0x005ff02e);
    /* 005ff02e: call 0x5fe55e */ r_esp -= 4; W32(r_esp, 0x5ff033u); f_005fe55e();
    /* 005ff033: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005ff038: mov edx, dword ptr [0x70078c] */ r_edx = R32((u32)(0x70078cu));
    /* 005ff03e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff03f: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5ff044u); f_005fedb0();
    /* 005ff044: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff047: call 0x623213 */ r_esp -= 4; W32(r_esp, 0x5ff04cu); f_00623213();
    /* 005ff04c: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005ff051: mov eax, dword ptr [0x70078c] */ r_eax = R32((u32)(0x70078cu));
    /* 005ff056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff057: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5ff05cu); f_005fedb0();
    /* 005ff05c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ff05f:; BB(0x005ff05f);
    /* 005ff05f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff062: call 0x61c68c */ r_esp -= 4; W32(r_esp, 0x5ff067u); f_0061c68c();
    /* 005ff067: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff069: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff06a: ret  */ FN_RET(0x005fefdd); r_esp += 4; return;
}

void f_005ff06b(void) /* FUN_005ff06b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff06b);
    /* 005ff06b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff06c: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff06e: sub esp, 0x12c */ {  u32 a = r_esp; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    { u32 th = r_ecx, ix = R32(r_ebp + 8), smp = (th && th < 0x10000000u) ? R32(th + ix * 4 + 8) : 0; if (smp >= 0x10000000u) smp = 0; fprintf(stderr, "wasmSND f06b this=%08x idx=%u smp=%08x en=%u mode=%u cnt=%u fmt=%u at=%08x\n", th, ix, smp, th ? R32(th + 0xfc) : 0, R32(0x700788), smp ? R32(smp + 0x3c) : 0, smp ? R32(smp + 0x30) : 0, smp ? R32(smp) : 0); }
    /* 005ff074: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ff075: mov dword ptr [ebp - 0x11c], ecx */ W32((u32)(r_ebp+0xfffffee4u), r_ecx);
    /* 005ff07b: mov word ptr [ebp - 0x110], 0 */ W16((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 005ff084: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff087: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff08d: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005ff091: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 005ff097: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff09d: cmp dword ptr [eax + 0xfc], 0 */ {  u32 a = R32((u32)(r_eax+0xfcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff0a4: jne 0x5ff0e8 */ if (!fZ) goto L_005ff0e8;
L_005ff0a6:; BB(0x005ff0a6);
    /* 005ff0a6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff0a9: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff0af: mov dword ptr [edx + ecx*4 + 8], 0 */ W32((u32)(r_edx+r_ecx*4+0x8u), 0x0u);
    /* 005ff0b7: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff0bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0be: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff0c4: call 0x61c800 */ r_esp -= 4; W32(r_esp, 0x5ff0c9u); f_0061c800();
    /* 005ff0c9: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 005ff0cf: cmp dword ptr [ebp - 0x10c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff0d6: jne 0x5ff0e3 */ if (!fZ) goto L_005ff0e3;
L_005ff0d8:; BB(0x005ff0d8);
    /* 005ff0d8: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff0de: call 0x61c3f5 */ r_esp -= 4; W32(r_esp, 0x5ff0e3u); f_0061c3f5();
L_005ff0e3:; BB(0x005ff0e3);
    /* 005ff0e3: jmp 0x5ff6ba */ goto L_005ff6ba;
L_005ff0e8:; BB(0x005ff0e8);
    /* 005ff0e8: cmp dword ptr [0x700788], 0 */ {  u32 a = R32((u32)(0x700788u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff0ef: je 0x5ff206 */ if (fZ) goto L_005ff206;
L_005ff0f5:; BB(0x005ff0f5);
    /* 005ff0f5: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 005ff0ff: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 005ff109: jmp 0x5ff11a */ goto L_005ff11a;
L_005ff10b:; BB(0x005ff10b);
    /* 005ff10b: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005ff111: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ff114: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
L_005ff11a:; BB(0x005ff11a);
    /* 005ff11a: cmp dword ptr [ebp - 0x10c], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ff121: jge 0x5ff164 */ if ((fS==fO)) goto L_005ff164;
L_005ff123:; BB(0x005ff123);
    /* 005ff123: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005ff129: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff12f: cmp dword ptr [eax + edx*4 + 8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff134: je 0x5ff162 */ if (fZ) goto L_005ff162;
L_005ff136:; BB(0x005ff136);
    /* 005ff136: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005ff13c: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff142: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005ff146: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff14a: je 0x5ff162 */ if (fZ) goto L_005ff162;
L_005ff14c:; BB(0x005ff14c);
    /* 005ff14c: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005ff152: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff158: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005ff15c: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
L_005ff162:; BB(0x005ff162);
    /* 005ff162: jmp 0x5ff10b */ goto L_005ff10b;
L_005ff164:; BB(0x005ff164);
    /* 005ff164: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff16a: cmp dword ptr [ecx + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff16e: jne 0x5ff1c7 */ if (!fZ) goto L_005ff1c7;
L_005ff170:; BB(0x005ff170);
    /* 005ff170: cmp dword ptr [ebp - 0x104], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff177: je 0x5ff1c7 */ if (fZ) goto L_005ff1c7;
L_005ff179:; BB(0x005ff179);
    /* 005ff179: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005ff17f: cmp dword ptr [edx + 0x4c], 0 */ {  u32 a = R32((u32)(r_edx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff183: je 0x5ff1c7 */ if (fZ) goto L_005ff1c7;
L_005ff185:; BB(0x005ff185);
    /* 005ff185: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff188: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff18e: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 005ff196: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff19c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff19d: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff1a3: call 0x61c800 */ r_esp -= 4; W32(r_esp, 0x5ff1a8u); f_0061c800();
    /* 005ff1a8: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 005ff1ae: cmp dword ptr [ebp - 0x10c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff1b5: jne 0x5ff1c2 */ if (!fZ) goto L_005ff1c2;
L_005ff1b7:; BB(0x005ff1b7);
    /* 005ff1b7: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff1bd: call 0x61c3f5 */ r_esp -= 4; W32(r_esp, 0x5ff1c2u); f_0061c3f5();
L_005ff1c2:; BB(0x005ff1c2);
    /* 005ff1c2: jmp 0x5ff6ba */ goto L_005ff6ba;
L_005ff1c7:; BB(0x005ff1c7);
    /* 005ff1c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff1c9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff1cb: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff1d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ff1d3: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff1d9: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5ff1dcu); call_ind(t); }
    /* 005ff1dc: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff1e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff1e3: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff1e9: call 0x6004d0 */ r_esp -= 4; W32(r_esp, 0x5ff1eeu); f_006004d0();
    /* 005ff1ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff1f1: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff1f7: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff1fd: mov dword ptr [edx + ecx*4 + 8], eax */ W32((u32)(r_edx+r_ecx*4+0x8u), r_eax);
    /* 005ff201: jmp 0x5ff5b4 */ goto L_005ff5b4;
L_005ff206:; BB(0x005ff206);
    /* 005ff206: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff20c: cmp dword ptr [ecx + 0x104], 0 */ {  u32 a = R32((u32)(r_ecx+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff213: jne 0x5ff34b */ if (!fZ) goto L_005ff34b;
L_005ff219:; BB(0x005ff219);
    /* 005ff219: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff21f: mov ax, word ptr [edx + 0x100] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x100u))) & 0xffffu);
    /* 005ff226: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff227: call 0x6234e3 */ r_esp -= 4; W32(r_esp, 0x5ff22cu); f_006234e3();
    /* 005ff22c: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005ff231: mov ecx, dword ptr [0x70078c] */ r_ecx = R32((u32)(0x70078cu));
    /* 005ff237: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff238: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5ff23du); f_005fedb0();
    /* 005ff23d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff240: cmp dword ptr [0x70078c], 0 */ {  u32 a = R32((u32)(0x70078cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff247: jne 0x5ff25e */ if (!fZ) goto L_005ff25e;
L_005ff249:; BB(0x005ff249);
    /* 005ff249: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff24f: mov dword ptr [edx + 0x104], 1 */ W32((u32)(r_edx+0x104u), 0x1u);
    /* 005ff259: jmp 0x5ff34b */ goto L_005ff34b;
L_005ff25e:; BB(0x005ff25e);
    /* 005ff25e: cmp dword ptr [0x700d20], 0 */ {  u32 a = R32((u32)(0x700d20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff265: jne 0x5ff34b */ if (!fZ) goto L_005ff34b;
L_005ff26b:; BB(0x005ff26b);
    /* 005ff26b: cmp dword ptr [0x700d1c], 0 */ {  u32 a = R32((u32)(0x700d1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff272: je 0x5ff2a2 */ if (fZ) goto L_005ff2a2;
L_005ff274:; BB(0x005ff274);
    /* 005ff274: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005ff279: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005ff27c: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005ff27f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff280: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005ff285: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005ff288: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005ff28b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff28c: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff291: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff293: call 0x5fe360 */ r_esp -= 4; W32(r_esp, 0x5ff298u); f_005fe360();
    /* 005ff298: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff29b: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005ff2a0: jmp 0x5ff2ce */ goto L_005ff2ce;
L_005ff2a2:; BB(0x005ff2a2);
    /* 005ff2a2: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005ff2a7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005ff2aa: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005ff2ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff2ae: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005ff2b3: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005ff2b6: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005ff2b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff2ba: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff2bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff2c1: call 0x5fe360 */ r_esp -= 4; W32(r_esp, 0x5ff2c6u); f_005fe360();
    /* 005ff2c6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff2c9: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
L_005ff2ce:; BB(0x005ff2ce);
    /* 005ff2ce: mov eax, dword ptr [0x70078c] */ r_eax = R32((u32)(0x70078cu));
    /* 005ff2d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff2d4: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5ff2d9u); f_005fedb0();
    /* 005ff2d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff2dc: call 0x5fe5d9 */ r_esp -= 4; W32(r_esp, 0x5ff2e1u); f_005fe5d9();
    /* 005ff2e1: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff2e7: mov word ptr [ecx + 0x100], ax */ W16((u32)(r_ecx+0x100u), (u16)r_eax);
    /* 005ff2ee: cmp dword ptr [0x70078c], 0 */ {  u32 a = R32((u32)(0x70078cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff2f5: jne 0x5ff309 */ if (!fZ) goto L_005ff309;
L_005ff2f7:; BB(0x005ff2f7);
    /* 005ff2f7: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff2fd: mov dword ptr [edx + 0x104], 1 */ W32((u32)(r_edx+0x104u), 0x1u);
    /* 005ff307: jmp 0x5ff34b */ goto L_005ff34b;
L_005ff309:; BB(0x005ff309);
    /* 005ff309: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff30c: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff312: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 005ff31a: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff320: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff321: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff327: call 0x61c800 */ r_esp -= 4; W32(r_esp, 0x5ff32cu); f_0061c800();
    /* 005ff32c: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 005ff332: cmp dword ptr [ebp - 0x10c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff339: jne 0x5ff346 */ if (!fZ) goto L_005ff346;
L_005ff33b:; BB(0x005ff33b);
    /* 005ff33b: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff341: call 0x61c3f5 */ r_esp -= 4; W32(r_esp, 0x5ff346u); f_0061c3f5();
L_005ff346:; BB(0x005ff346);
    /* 005ff346: jmp 0x5ff6ba */ goto L_005ff6ba;
L_005ff34b:; BB(0x005ff34b);
    /* 005ff34b: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff351: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff355: je 0x5ff373 */ if (fZ) goto L_005ff373;
L_005ff357:; BB(0x005ff357);
    /* 005ff357: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff35d: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005ff360: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x5ff365u); f_0060ebea();
    /* 005ff365: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff36b: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 005ff371: jmp 0x5ff3c2 */ goto L_005ff3c2;
L_005ff373:; BB(0x005ff373);
    /* 005ff373: push 0x69c3b8 */ { u32 v = 0x69c3b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff378: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5ff37du); f_0060fc40();
    /* 005ff37d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff380: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff383: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff389: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 005ff391: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff397: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff398: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff39e: call 0x61c800 */ r_esp -= 4; W32(r_esp, 0x5ff3a3u); f_0061c800();
    /* 005ff3a3: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 005ff3a9: cmp dword ptr [ebp - 0x10c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff3b0: jne 0x5ff3bd */ if (!fZ) goto L_005ff3bd;
L_005ff3b2:; BB(0x005ff3b2);
    /* 005ff3b2: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff3b8: call 0x61c3f5 */ r_esp -= 4; W32(r_esp, 0x5ff3bdu); f_0061c3f5();
L_005ff3bd:; BB(0x005ff3bd);
    /* 005ff3bd: jmp 0x5ff6ba */ goto L_005ff6ba;
L_005ff3c2:; BB(0x005ff3c2);
    /* 005ff3c2: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff3c8: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005ff3cb: mov dword ptr [ebp - 0x120], ecx */ W32((u32)(r_ebp+0xfffffee0u), r_ecx);
    /* 005ff3d1: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 005ff3d7: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ff3da: mov dword ptr [ebp - 0x120], edx */ W32((u32)(r_ebp+0xfffffee0u), r_edx);
    /* 005ff3e0: cmp dword ptr [ebp - 0x120], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ff3e7: ja 0x5ff468 */ if ((!fC&&!fZ)) goto L_005ff468;
L_005ff3e9:; BB(0x005ff3e9);
    /* 005ff3e9: mov eax, dword ptr [ebp - 0x120] */ r_eax = R32((u32)(r_ebp+0xfffffee0u));
    /* 005ff3ef: jmp dword ptr [eax*4 + 0x5ff6c1] */ { u32 t = R32((u32)(r_eax*4+0x5ff6c1u)); switch (t) { case 0x5ff3f6u: goto L_005ff3f6; case 0x5ff413u: goto L_005ff413; case 0x5ff430u: goto L_005ff430; case 0x5ff44du: goto L_005ff44d; default: UNSUP(0x005ff3ef, "jump table entry is not a known target"); } }
L_005ff3f6:; BB(0x005ff3f6);
    /* 005ff3f6: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 005ff3fd: mov dword ptr [ebp - 0x114], 1 */ W32((u32)(r_ebp+0xfffffeecu), 0x1u);
    /* 005ff407: mov dword ptr [ebp - 0x118], 1 */ W32((u32)(r_ebp+0xfffffee8u), 0x1u);
    /* 005ff411: jmp 0x5ff468 */ goto L_005ff468;
L_005ff413:; BB(0x005ff413);
    /* 005ff413: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 005ff41a: mov dword ptr [ebp - 0x114], 2 */ W32((u32)(r_ebp+0xfffffeecu), 0x2u);
    /* 005ff424: mov dword ptr [ebp - 0x118], 2 */ W32((u32)(r_ebp+0xfffffee8u), 0x2u);
    /* 005ff42e: jmp 0x5ff468 */ goto L_005ff468;
L_005ff430:; BB(0x005ff430);
    /* 005ff430: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 005ff437: mov dword ptr [ebp - 0x114], 1 */ W32((u32)(r_ebp+0xfffffeecu), 0x1u);
    /* 005ff441: mov dword ptr [ebp - 0x118], 2 */ W32((u32)(r_ebp+0xfffffee8u), 0x2u);
    /* 005ff44b: jmp 0x5ff468 */ goto L_005ff468;
L_005ff44d:; BB(0x005ff44d);
    /* 005ff44d: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 005ff454: mov dword ptr [ebp - 0x114], 2 */ W32((u32)(r_ebp+0xfffffeecu), 0x2u);
    /* 005ff45e: mov dword ptr [ebp - 0x118], 4 */ W32((u32)(r_ebp+0xfffffee8u), 0x4u);
L_005ff468:; BB(0x005ff468);
    /* 005ff468: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff46d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff46f: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005ff475: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff476: call 0x624170 */ r_esp -= 4; W32(r_esp, 0x5ff47bu); f_00624170();
    /* 005ff47b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff47e: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff484: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005ff48a: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 005ff490: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
    /* 005ff49a: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff4a0: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005ff4a6: imul edx, dword ptr [ecx + 0x38] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0x38u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ff4aa: mov dword ptr [ebp - 0xf0], edx */ W32((u32)(r_ebp+0xffffff10u), r_edx);
    /* 005ff4b0: mov dword ptr [ebp - 0xd0], 0x7fff7fff */ W32((u32)(r_ebp+0xffffff30u), 0x7fff7fffu);
    /* 005ff4ba: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff4c0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005ff4c3: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 005ff4c9: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff4cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ff4d1: mov ax, word ptr [edx + 0x34] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x34u))) & 0xffffu);
    /* 005ff4d5: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 005ff4db: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff4df: jne 0x5ff4f7 */ if (!fZ) goto L_005ff4f7;
L_005ff4e1:; BB(0x005ff4e1);
    /* 005ff4e1: mov dword ptr [ebp - 0xc4], 8 */ W32((u32)(r_ebp+0xffffff3cu), 0x8u);
    /* 005ff4eb: mov dword ptr [ebp - 0xbc], 0x8000 */ W32((u32)(r_ebp+0xffffff44u), 0x8000u);
    /* 005ff4f5: jmp 0x5ff50b */ goto L_005ff50b;
L_005ff4f7:; BB(0x005ff4f7);
    /* 005ff4f7: mov dword ptr [ebp - 0xc4], 0x10 */ W32((u32)(r_ebp+0xffffff3cu), 0x10u);
    /* 005ff501: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_005ff50b:; BB(0x005ff50b);
    /* 005ff50b: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ff511: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 005ff517: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff51d: cmp dword ptr [edx + 0x48], -1 */ {  u32 a = R32((u32)(r_edx+0x48u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff521: jne 0x5ff52f */ if (!fZ) goto L_005ff52f;
L_005ff523:; BB(0x005ff523);
    /* 005ff523: mov dword ptr [ebp - 0xb8], 0x8000 */ W32((u32)(r_ebp+0xffffff48u), 0x8000u);
    /* 005ff52d: jmp 0x5ff53e */ goto L_005ff53e;
L_005ff52f:; BB(0x005ff52f);
    /* 005ff52f: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff535: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005ff538: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
L_005ff53e:; BB(0x005ff53e);
    /* 005ff53e: lea edx, [ebp - 0xfc] */ r_edx = (u32)(r_ebp+0xffffff04u);
    /* 005ff544: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff545: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005ff54b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff54c: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 005ff552: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff553: call 0x623e57 */ r_esp -= 4; W32(r_esp, 0x5ff558u); f_00623e57();
    /* 005ff558: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005ff55d: cmp dword ptr [ebp - 0xfc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff564: jne 0x5ff570 */ if (!fZ) goto L_005ff570;
L_005ff566:; BB(0x005ff566);
    /* 005ff566: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff568: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5ff56du); f_005fedb0();
    /* 005ff56d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ff570:; BB(0x005ff570);
    /* 005ff570: mov edx, dword ptr [0x70078c] */ r_edx = R32((u32)(0x70078cu));
    /* 005ff576: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff577: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5ff57cu); f_005fedb0();
    /* 005ff57c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff57f: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 005ff585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff586: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005ff58c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff58d: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff593: mov ax, word ptr [edx + 0x100] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x100u))) & 0xffffu);
    /* 005ff59a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff59b: call 0x62388c */ r_esp -= 4; W32(r_esp, 0x5ff5a0u); f_0062388c();
    /* 005ff5a0: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005ff5a5: mov ecx, dword ptr [0x70078c] */ r_ecx = R32((u32)(0x70078cu));
    /* 005ff5ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff5ac: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5ff5b1u); f_005fedb0();
    /* 005ff5b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ff5b4:; BB(0x005ff5b4);
    /* 005ff5b4: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005ff5ba: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ff5c0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff5c3: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff5c9: mov dword ptr [ecx + eax*4 + 0x48], edx */ W32((u32)(r_ecx+r_eax*4+0x48u), r_edx);
    /* 005ff5cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ff5d0: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff5d6: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff5dc: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 005ff5e2: mov dword ptr [eax + edx*4 + 0x88], ecx */ W32((u32)(r_eax+r_edx*4+0x88u), r_ecx);
    /* 005ff5e9: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff5ed: je 0x5ff600 */ if (fZ) goto L_005ff600;
L_005ff5ef:; BB(0x005ff5ef);
    /* 005ff5ef: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ff5f2: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff5f8: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 005ff5fe: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_005ff600:; BB(0x005ff600);
    /* 005ff600: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff606: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005ff60c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ff60f: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ff615: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 005ff61b: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff621: cmp dword ptr [edx + 0x40], -1 */ {  u32 a = R32((u32)(r_edx+0x40u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff625: jne 0x5ff639 */ if (!fZ) goto L_005ff639;
L_005ff627:; BB(0x005ff627);
    /* 005ff627: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff62d: mov dword ptr [eax + 0x50], 0xffffffff */ W32((u32)(r_eax+0x50u), 0xffffffffu);
    /* 005ff634: jmp 0x5ff6ba */ goto L_005ff6ba;
L_005ff639:; BB(0x005ff639);
    /* 005ff639: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ff63f: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x5ff644u); f_005d9e34();
    /* 005ff644: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff64a: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 005ff64d: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff653: mov esi, dword ptr [edx + 0x40] */ r_esi = R32((u32)(r_edx+0x40u));
    /* 005ff656: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ff659: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff65f: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005ff662: mov dword ptr [ebp - 0x128], ecx */ W32((u32)(r_ebp+0xfffffed8u), r_ecx);
    /* 005ff668: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 005ff672: fild qword ptr [ebp - 0x128] */ FPUSH((long double)(i64)R64((u32)(r_ebp+0xfffffed8u)));
    /* 005ff678: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff67e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ff680: mov ax, word ptr [edx + 0x34] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x34u))) & 0xffffu);
    /* 005ff684: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005ff68a: fild dword ptr [ebp - 0x12c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffed4u)));
    /* 005ff690: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005ff692: fmul qword ptr [0x63c528] */ ST(0) = ST(0) * R_F64((u32)(0x63c528u));
    /* 005ff698: fadd qword ptr [0x63c530] */ ST(0) = ST(0) + R_F64((u32)(0x63c530u));
    /* 005ff69e: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5ff6a3u); f_00624144();
    /* 005ff6a3: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ff6a6: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff6ac: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005ff6af: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ff6b1: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005ff6b7: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
L_005ff6ba:; BB(0x005ff6ba);
    /* 005ff6ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ff6bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff6bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff6be: ret 8 */ FN_RET(0x005ff06b); r_esp += 12; return;
}

void f_005ff6d1(void) /* FUN_005ff6d1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff6d1);
    /* 005ff6d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff6d2: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff6d4: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff6d7: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005ff6da: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff6dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff6de: push 0x69c3c8 */ { u32 v = 0x69c3c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff6e3: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005ff6e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff6e7: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5ff6ecu); f_00624050();
    /* 005ff6ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff6ef: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005ff6f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff6f3: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5ff6f8u); f_0060fc40();
    /* 005ff6f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff6fb: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff6ff: jne 0x5ff731 */ if (!fZ) goto L_005ff731;
L_005ff701:; BB(0x005ff701);
    /* 005ff701: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005ff708: jmp 0x5ff713 */ goto L_005ff713;
L_005ff70a:; BB(0x005ff70a);
    /* 005ff70a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ff70d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ff710: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
L_005ff713:; BB(0x005ff713);
    /* 005ff713: cmp dword ptr [ebp - 0x48], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ff717: jge 0x5ff72c */ if ((fS==fO)) goto L_005ff72c;
L_005ff719:; BB(0x005ff719);
    /* 005ff719: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff71b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ff71e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff71f: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff722: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ff724: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff727: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5ff72au); call_ind(t); }
    /* 005ff72a: jmp 0x5ff70a */ goto L_005ff70a;
L_005ff72c:; BB(0x005ff72c);
    /* 005ff72c: jmp 0x5ff84e */ goto L_005ff84e;
L_005ff731:; BB(0x005ff731);
    /* 005ff731: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff734: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff737: cmp dword ptr [edx + ecx*4 + 8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff73c: jne 0x5ff743 */ if (!fZ) goto L_005ff743;
L_005ff73e:; BB(0x005ff73e);
    /* 005ff73e: jmp 0x5ff84e */ goto L_005ff84e;
L_005ff743:; BB(0x005ff743);
    /* 005ff743: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff746: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff749: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005ff74d: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005ff750: cmp dword ptr [0x700788], 0 */ {  u32 a = R32((u32)(0x700788u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff757: je 0x5ff76a */ if (fZ) goto L_005ff76a;
L_005ff759:; BB(0x005ff759);
    /* 005ff759: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ff75c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff75d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff760: call 0x6007de */ r_esp -= 4; W32(r_esp, 0x5ff765u); f_006007de();
    /* 005ff765: jmp 0x5ff7f0 */ goto L_005ff7f0;
L_005ff76a:; BB(0x005ff76a);
    /* 005ff76a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff76d: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff770: mov ax, word ptr [edx + ecx*4 + 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*4+0x48u))) & 0xffffu);
    /* 005ff775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff776: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff779: mov dx, word ptr [ecx + 0x100] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x100u))) & 0xffffu);
    /* 005ff780: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff781: call 0x623eed */ r_esp -= 4; W32(r_esp, 0x5ff786u); f_00623eed();
    /* 005ff786: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005ff789: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff78d: je 0x5ff7af */ if (fZ) goto L_005ff7af;
L_005ff78f:; BB(0x005ff78f);
    /* 005ff78f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ff792: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ff795: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff796: call 0x623e9f */ r_esp -= 4; W32(r_esp, 0x5ff79bu); f_00623e9f();
    /* 005ff79b: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005ff7a0: mov edx, dword ptr [0x70078c] */ r_edx = R32((u32)(0x70078cu));
    /* 005ff7a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff7a7: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5ff7acu); f_005fedb0();
    /* 005ff7ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ff7af:; BB(0x005ff7af);
    /* 005ff7af: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff7b3: je 0x5ff7e5 */ if (fZ) goto L_005ff7e5;
L_005ff7b5:; BB(0x005ff7b5);
    /* 005ff7b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff7b8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff7bb: mov dx, word ptr [ecx + eax*4 + 0x48] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*4+0x48u))) & 0xffffu);
    /* 005ff7c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff7c1: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff7c4: mov cx, word ptr [eax + 0x100] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x100u))) & 0xffffu);
    /* 005ff7cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff7cc: call 0x6238b1 */ r_esp -= 4; W32(r_esp, 0x5ff7d1u); f_006238b1();
    /* 005ff7d1: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005ff7d6: mov edx, dword ptr [0x70078c] */ r_edx = R32((u32)(0x70078cu));
    /* 005ff7dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff7dd: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5ff7e2u); f_005fedb0();
    /* 005ff7e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ff7e5:; BB(0x005ff7e5);
    /* 005ff7e5: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ff7e8: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005ff7eb: call 0x60ec47 */ r_esp -= 4; W32(r_esp, 0x5ff7f0u); f_0060ec47();
L_005ff7f0:; BB(0x005ff7f0);
    /* 005ff7f0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff7f3: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff7f6: mov dword ptr [edx + ecx*4 + 8], 0 */ W32((u32)(r_edx+r_ecx*4+0x8u), 0x0u);
    /* 005ff7fe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff801: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff804: mov dword ptr [ecx + eax*4 + 0x48], 0 */ W32((u32)(r_ecx+r_eax*4+0x48u), 0x0u);
    /* 005ff80c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ff80f: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff812: mov dword ptr [eax + edx*4 + 0x88], 0 */ W32((u32)(r_eax+r_edx*4+0x88u), 0x0u);
    /* 005ff81d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ff820: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff821: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff824: call 0x61c800 */ r_esp -= 4; W32(r_esp, 0x5ff829u); f_0061c800();
    /* 005ff829: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005ff82c: cmp dword ptr [ebp - 0x48], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff830: jne 0x5ff83a */ if (!fZ) goto L_005ff83a;
L_005ff832:; BB(0x005ff832);
    /* 005ff832: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ff835: call 0x61c3f5 */ r_esp -= 4; W32(r_esp, 0x5ff83au); f_0061c3f5();
L_005ff83a:; BB(0x005ff83a);
    /* 005ff83a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ff840: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5ff845u); f_005d9e23();
    /* 005ff845: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ff848: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
L_005ff84e:; BB(0x005ff84e);
    /* 005ff84e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff851: ret 8 */ FN_RET(0x005ff6d1); r_esp += 12; return;
}

void f_005ff854(void) /* FUN_005ff854 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff854);
    /* 005ff854: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff855: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff857: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff858: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff85b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff85e: mov dword ptr [eax + 0xfc], 1 */ W32((u32)(r_eax+0xfcu), 0x1u);
    /* 005ff868: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff86a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff86b: ret  */ FN_RET(0x005ff854); r_esp += 4; return;
}

void f_005ff86c(void) /* FUN_005ff86c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff86c);
    /* 005ff86c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff86d: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff86f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff870: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff873: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff876: mov dword ptr [eax + 0xfc], 0 */ W32((u32)(r_eax+0xfcu), 0x0u);
    /* 005ff880: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff882: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff884: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff887: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ff889: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff88c: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5ff88fu); call_ind(t); }
    /* 005ff88f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff891: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff892: ret  */ FN_RET(0x005ff86c); r_esp += 4; return;
}

void f_005ff893(void) /* FUN_005ff893 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff893);
    /* 005ff893: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff894: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff896: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff899: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005ff89c: cmp dword ptr [0x700788], 0 */ {  u32 a = R32((u32)(0x700788u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff8a3: je 0x5ff900 */ if (fZ) goto L_005ff900;
L_005ff8a5:; BB(0x005ff8a5);
    /* 005ff8a5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ff8ac: jmp 0x5ff8b7 */ goto L_005ff8b7;
L_005ff8ae:; BB(0x005ff8ae);
    /* 005ff8ae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff8b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ff8b4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005ff8b7:; BB(0x005ff8b7);
    /* 005ff8b7: cmp dword ptr [ebp - 8], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ff8bb: jge 0x5ff8fb */ if ((fS==fO)) goto L_005ff8fb;
L_005ff8bd:; BB(0x005ff8bd);
    /* 005ff8bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff8c0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff8c3: cmp dword ptr [edx + ecx*4 + 8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff8c8: je 0x5ff8f9 */ if (fZ) goto L_005ff8f9;
L_005ff8ca:; BB(0x005ff8ca);
    /* 005ff8ca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff8cd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff8d0: mov edx, dword ptr [ecx + eax*4 + 0x88] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x88u));
    /* 005ff8d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff8d8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff8db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ff8dd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff8e0: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5ff8e3u); call_ind(t); }
    /* 005ff8e3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff8e6: jne 0x5ff8f9 */ if (!fZ) goto L_005ff8f9;
L_005ff8e8:; BB(0x005ff8e8);
    /* 005ff8e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff8ea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff8ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff8ee: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff8f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ff8f3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff8f6: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5ff8f9u); call_ind(t); }
L_005ff8f9:; BB(0x005ff8f9);
    /* 005ff8f9: jmp 0x5ff8ae */ goto L_005ff8ae;
L_005ff8fb:; BB(0x005ff8fb);
    /* 005ff8fb: jmp 0x5ff9fa */ goto L_005ff9fa;
L_005ff900:; BB(0x005ff900);
    /* 005ff900: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff903: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff90a: je 0x5ff91c */ if (fZ) goto L_005ff91c;
L_005ff90c:; BB(0x005ff90c);
    /* 005ff90c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff90f: mov dx, word ptr [ecx + 0x100] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x100u))) & 0xffffu);
    /* 005ff916: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff917: call 0x6233be */ r_esp -= 4; W32(r_esp, 0x5ff91cu); f_006233be();
L_005ff91c:; BB(0x005ff91c);
    /* 005ff91c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff91e: push 0xa000 */ { u32 v = 0xa000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff923: push 0xa000 */ { u32 v = 0xa000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff928: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff92a: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 005ff92d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff92e: call dword ptr [0x633230] */ { u32 t = R32((u32)(0x633230u)); r_esp -= 4; W32(r_esp, 0x5ff934u); call_ind(t); }
    /* 005ff934: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff936: je 0x5ff94c */ if (fZ) goto L_005ff94c;
L_005ff938:; BB(0x005ff938);
    /* 005ff938: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005ff93b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff93c: call dword ptr [0x633240] */ { u32 t = R32((u32)(0x633240u)); r_esp -= 4; W32(r_esp, 0x5ff942u); call_ind(t); }
    /* 005ff942: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 005ff945: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff946: call dword ptr [0x633244] */ { u32 t = R32((u32)(0x633244u)); r_esp -= 4; W32(r_esp, 0x5ff94cu); call_ind(t); }
L_005ff94c:; BB(0x005ff94c);
    /* 005ff94c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ff953: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ff95a: jmp 0x5ff965 */ goto L_005ff965;
L_005ff95c:; BB(0x005ff95c);
    /* 005ff95c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff95f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ff962: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005ff965:; BB(0x005ff965);
    /* 005ff965: cmp dword ptr [ebp - 8], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ff969: jge 0x5ff981 */ if ((fS==fO)) goto L_005ff981;
L_005ff96b:; BB(0x005ff96b);
    /* 005ff96b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff96e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff971: cmp dword ptr [edx + ecx*4 + 8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff976: je 0x5ff97f */ if (fZ) goto L_005ff97f;
L_005ff978:; BB(0x005ff978);
    /* 005ff978: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_005ff97f:; BB(0x005ff97f);
    /* 005ff97f: jmp 0x5ff95c */ goto L_005ff95c;
L_005ff981:; BB(0x005ff981);
    /* 005ff981: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff985: je 0x5ff989 */ if (fZ) goto L_005ff989;
L_005ff987:; BB(0x005ff987);
    /* 005ff987: jmp 0x5ff9fa */ goto L_005ff9fa;
L_005ff989:; BB(0x005ff989);
    /* 005ff989: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff98c: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff993: je 0x5ff9fa */ if (fZ) goto L_005ff9fa;
L_005ff995:; BB(0x005ff995);
    /* 005ff995: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ff99b: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5ff9a0u); f_005d9e23();
    /* 005ff9a0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff9a3: mov edx, dword ptr [ecx + 0x108] */ r_edx = R32((u32)(r_ecx+0x108u));
    /* 005ff9a9: add edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ff9af: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ff9b1: jle 0x5ff9fa */ if ((fZ||fS!=fO)) goto L_005ff9fa;
L_005ff9b3:; BB(0x005ff9b3);
    /* 005ff9b3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff9b6: cmp dword ptr [eax + 0x10c], 0 */ {  u32 a = R32((u32)(r_eax+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff9bd: jne 0x5ff9fa */ if (!fZ) goto L_005ff9fa;
L_005ff9bf:; BB(0x005ff9bf);
    /* 005ff9bf: cmp dword ptr [0x6f6f04], 0 */ {  u32 a = R32((u32)(0x6f6f04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff9c6: jne 0x5ff9fa */ if (!fZ) goto L_005ff9fa;
L_005ff9c8:; BB(0x005ff9c8);
    /* 005ff9c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff9ca: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff9cd: mov dx, word ptr [ecx + 0x100] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x100u))) & 0xffffu);
    /* 005ff9d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff9d5: call 0x623500 */ r_esp -= 4; W32(r_esp, 0x5ff9dau); f_00623500();
    /* 005ff9da: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005ff9df: mov eax, dword ptr [0x70078c] */ r_eax = R32((u32)(0x70078cu));
    /* 005ff9e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff9e5: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5ff9eau); f_005fedb0();
    /* 005ff9ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff9ed: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ff9f0: mov dword ptr [ecx + 0x104], 0 */ W32((u32)(r_ecx+0x104u), 0x0u);
L_005ff9fa:; BB(0x005ff9fa);
    /* 005ff9fa: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff9fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff9fd: ret  */ FN_RET(0x005ff893); r_esp += 4; return;
}

void f_005ff9fe(void) /* FUN_005ff9fe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff9fe);
    /* 005ff9fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff9ff: mov ebp, esp */ r_ebp = r_esp;
    /* 005ffa01: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ffa04: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ffa07: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005ffa0e:; BB(0x005ffa0e);
    /* 005ffa0e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ffa11: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ffa14: mov edx, dword ptr [ecx + eax*4 + 0x88] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x88u));
    /* 005ffa1b: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffa1e: je 0x5ffa31 */ if (fZ) goto L_005ffa31;
L_005ffa20:; BB(0x005ffa20);
    /* 005ffa20: cmp dword ptr [ebp - 0x20], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ffa24: jge 0x5ffa31 */ if ((fS==fO)) goto L_005ffa31;
L_005ffa26:; BB(0x005ffa26);
    /* 005ffa26: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ffa29: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ffa2c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ffa2f: jmp 0x5ffa0e */ goto L_005ffa0e;
L_005ffa31:; BB(0x005ffa31);
    /* 005ffa31: cmp dword ptr [ebp - 0x20], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ffa35: jge 0x5ffaf8 */ if ((fS==fO)) goto L_005ffaf8;
L_005ffa3b:; BB(0x005ffa3b);
    /* 005ffa3b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ffa3e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ffa41: mov eax, dword ptr [edx + ecx*4 + 0x88] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x88u));
    /* 005ffa48: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffa4b: jne 0x5ffaf8 */ if (!fZ) goto L_005ffaf8;
L_005ffa51:; BB(0x005ffa51);
    /* 005ffa51: mov dword ptr [ebp - 0x10], 0x5622 */ W32((u32)(r_ebp+0xfffffff0u), 0x5622u);
    /* 005ffa58: cmp dword ptr [0x700788], 0 */ {  u32 a = R32((u32)(0x700788u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffa5f: je 0x5ffaa5 */ if (fZ) goto L_005ffaa5;
L_005ffa61:; BB(0x005ffa61);
    /* 005ffa61: mov dword ptr [ebp - 0x1c], 4 */ W32((u32)(r_ebp+0xffffffe4u), 0x4u);
    /* 005ffa68: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa6a: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005ffa6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa6e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ffa71: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005ffa77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa78: call dword ptr [0x633294] */ { u32 t = R32((u32)(0x633294u)); r_esp -= 4; W32(r_esp, 0x5ffa7eu); call_ind(t); }
    /* 005ffa7e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffa81: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ffa84: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ffa8a: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x5ffa8fu); f_005d9e34();
    /* 005ffa8f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ffa92: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ffa95: mov edx, dword ptr [ecx + edx*4 + 8] */ r_edx = R32((u32)(r_ecx+r_edx*4+0x8u));
    /* 005ffa99: cmp eax, dword ptr [edx + 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x50u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ffa9c: jle 0x5ffaa3 */ if ((fZ||fS!=fO)) goto L_005ffaa3;
L_005ffa9e:; BB(0x005ffa9e);
    /* 005ffa9e: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ffaa1: jmp 0x5ffafb */ goto L_005ffafb;
L_005ffaa3:; BB(0x005ffaa3);
    /* 005ffaa3: jmp 0x5ffac4 */ goto L_005ffac4;
L_005ffaa5:; BB(0x005ffaa5);
    /* 005ffaa5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ffaa8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ffaab: mov dx, word ptr [ecx + eax*4 + 0x48] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*4+0x48u))) & 0xffffu);
    /* 005ffab0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffab1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ffab4: mov cx, word ptr [eax + 0x100] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x100u))) & 0xffffu);
    /* 005ffabb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffabc: call 0x6236ea */ r_esp -= 4; W32(r_esp, 0x5ffac1u); f_006236ea();
    /* 005ffac1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ffac4:; BB(0x005ffac4);
    /* 005ffac4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ffac8: jle 0x5ffad0 */ if ((fZ||fS!=fO)) goto L_005ffad0;
L_005ffaca:; BB(0x005ffaca);
    /* 005ffaca: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fface: jg 0x5ffad7 */ if ((!fZ&&fS==fO)) goto L_005ffad7;
L_005ffad0:; BB(0x005ffad0);
    /* 005ffad0: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 005ffad5: jmp 0x5ffafb */ goto L_005ffafb;
L_005ffad7:; BB(0x005ffad7);
    /* 005ffad7: mov dword ptr [ebp - 0xc], 0x3c */ W32((u32)(r_ebp+0xfffffff4u), 0x3cu);
    /* 005ffade: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 005ffae5: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 005ffae8: fimul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffaeb: fidiv dword ptr [ebp - 0x10] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xfffffff0u));
    /* 005ffaee: fidiv dword ptr [ebp - 8] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xfffffff8u));
    /* 005ffaf1: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5ffaf6u); f_00624144();
    /* 005ffaf6: jmp 0x5ffafb */ goto L_005ffafb;
L_005ffaf8:; BB(0x005ffaf8);
    /* 005ffaf8: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005ffafb:; BB(0x005ffafb);
    /* 005ffafb: mov esp, ebp */ r_esp = r_ebp;
    /* 005ffafd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffafe: ret 4 */ FN_RET(0x005ff9fe); r_esp += 8; return;
}

void f_005ffb01(void) /* FUN_005ffb01 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ffb01);
    /* 005ffb01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb02: mov ebp, esp */ r_ebp = r_esp;
    /* 005ffb04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    fprintf(stderr, "wasmSND fb01 this=%08x mode=%u snd=%08x\n", r_ecx, R32(0x700788), (r_ecx && r_ecx < 0x10000000u) ? R32(r_ecx + 0x10c) : 0);
    /* 005ffb07: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ffb0a: cmp dword ptr [0x700788], 0 */ {  u32 a = R32((u32)(0x700788u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffb11: je 0x5ffb18 */ if (fZ) goto L_005ffb18;
L_005ffb13:; BB(0x005ffb13);
    /* 005ffb13: jmp 0x6000d2 */ goto L_006000d2;
L_005ffb18:; BB(0x005ffb18);
    /* 005ffb18: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffb1b: cmp dword ptr [eax + 0x10c], 0 */ {  u32 a = R32((u32)(r_eax+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffb22: je 0x5ffb2c */ if (fZ) goto L_005ffb2c;
L_005ffb24:; BB(0x005ffb24);
    /* 005ffb24: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffb27: call 0x600259 */ r_esp -= 4; W32(r_esp, 0x5ffb2cu); f_00600259();
L_005ffb2c:; BB(0x005ffb2c);
    /* 005ffb2c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffb2f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ffb32: mov dword ptr [ecx + 0x10c], edx */ W32((u32)(r_ecx+0x10cu), r_edx);
    /* 005ffb38: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffb3c: jne 0x5ffb4b */ if (!fZ) goto L_005ffb4b;
L_005ffb3e:; BB(0x005ffb3e);
    /* 005ffb3e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffb41: mov dword ptr [eax + 0x10c], 0 */ W32((u32)(r_eax+0x10cu), 0x0u);
L_005ffb4b:; BB(0x005ffb4b);
    /* 005ffb4b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffb4f: je 0x5ffb67 */ if (fZ) goto L_005ffb67;
L_005ffb51:; BB(0x005ffb51);
    /* 005ffb51: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ffb54: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffb58: jne 0x5ffb67 */ if (!fZ) goto L_005ffb67;
L_005ffb5a:; BB(0x005ffb5a);
    /* 005ffb5a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffb5d: mov dword ptr [edx + 0x10c], 0 */ W32((u32)(r_edx+0x10cu), 0x0u);
L_005ffb67:; BB(0x005ffb67);
    /* 005ffb67: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffb6a: cmp dword ptr [eax + 0x10c], 0 */ {  u32 a = R32((u32)(r_eax+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffb71: je 0x6000d2 */ if (fZ) goto L_006000d2;
L_005ffb77:; BB(0x005ffb77);
    /* 005ffb77: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffb7a: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 005ffb80: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005ffb83: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ffb86: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffb89: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 005ffb8f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005ffb92: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ffb95: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffb98: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 005ffb9e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005ffba1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ffba4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffba7: cmp dword ptr [ecx + 0x104], 0 */ {  u32 a = R32((u32)(r_ecx+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffbae: jne 0x5ffbfe */ if (!fZ) goto L_005ffbfe;
L_005ffbb0:; BB(0x005ffbb0);
    /* 005ffbb0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffbb3: mov ax, word ptr [edx + 0x100] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x100u))) & 0xffffu);
    /* 005ffbba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffbbb: call 0x6234e3 */ r_esp -= 4; W32(r_esp, 0x5ffbc0u); f_006234e3();
    /* 005ffbc0: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005ffbc5: cmp dword ptr [0x70078c], 0 */ {  u32 a = R32((u32)(0x70078cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffbcc: jne 0x5ffbec */ if (!fZ) goto L_005ffbec;
L_005ffbce:; BB(0x005ffbce);
    /* 005ffbce: mov ecx, dword ptr [0x70078c] */ r_ecx = R32((u32)(0x70078cu));
    /* 005ffbd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffbd5: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5ffbdau); f_005fedb0();
    /* 005ffbda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ffbdd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffbe0: mov dword ptr [edx + 0x104], 1 */ W32((u32)(r_edx+0x104u), 0x1u);
    /* 005ffbea: jmp 0x5ffbfe */ goto L_005ffbfe;
L_005ffbec:; BB(0x005ffbec);
    /* 005ffbec: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffbef: mov dword ptr [eax + 0x10c], 0 */ W32((u32)(r_eax+0x10cu), 0x0u);
    /* 005ffbf9: jmp 0x6000d2 */ goto L_006000d2;
L_005ffbfe:; BB(0x005ffbfe);
    /* 005ffbfe: call 0x5fe5d9 */ r_esp -= 4; W32(r_esp, 0x5ffc03u); f_005fe5d9();
    /* 005ffc03: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 005ffc07: mov word ptr [0x700c10], 0 */ W16((u32)(0x700c10u), 0x0u);
    /* 005ffc10: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005ffc16: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005ffc19: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005ffc1c: mov dword ptr [0x700d18], eax */ W32((u32)(0x700d18u), r_eax);
    /* 005ffc21: mov dword ptr [0x700c36], 0 */ W32((u32)(0x700c36u), 0x0u);
    /* 005ffc2b: mov dword ptr [0x700c5a], 0x8000 */ W32((u32)(0x700c5au), 0x8000u);
    /* 005ffc35: mov dword ptr [0x700c4e], 8 */ W32((u32)(0x700c4eu), 0x8u);
    /* 005ffc3f: mov dword ptr [0x700c52], 1 */ W32((u32)(0x700c52u), 0x1u);
    /* 005ffc49: mov dword ptr [0x700c56], 0x8000 */ W32((u32)(0x700c56u), 0x8000u);
    /* 005ffc53: mov dword ptr [0x700c4a], 0x5622 */ W32((u32)(0x700c4au), 0x5622u);
    /* 005ffc5d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ffc63: call 0x45cbd8 */ r_esp -= 4; W32(r_esp, 0x5ffc68u); f_0045cbd8();
    /* 005ffc68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffc6a: je 0x5ffc8a */ if (fZ) goto L_005ffc8a;
L_005ffc6c:; BB(0x005ffc6c);
    /* 005ffc6c: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ffc72: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x5ffc77u); f_005da3ec();
    /* 005ffc77: cmp eax, 0x232e */ {  u32 a = r_eax; u32 b = 0x232eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffc7c: je 0x5ffc8a */ if (fZ) goto L_005ffc8a;
L_005ffc7e:; BB(0x005ffc7e);
    /* 005ffc7e: mov dword ptr [0x700c42], 0x2fff2fff */ W32((u32)(0x700c42u), 0x2fff2fffu);
    /* 005ffc88: jmp 0x5ffc94 */ goto L_005ffc94;
L_005ffc8a:; BB(0x005ffc8a);
    /* 005ffc8a: mov dword ptr [0x700c42], 0x6fff6fff */ W32((u32)(0x700c42u), 0x6fff6fffu);
L_005ffc94:; BB(0x005ffc94);
    /* 005ffc94: push 0x700d24 */ { u32 v = 0x700d24u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffc99: push 0x700c10 */ { u32 v = 0x700c10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffc9e: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005ffca2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffca3: call 0x623522 */ r_esp -= 4; W32(r_esp, 0x5ffca8u); f_00623522();
    /* 005ffca8: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005ffcad: mov edx, dword ptr [0x70078c] */ r_edx = R32((u32)(0x70078cu));
    /* 005ffcb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffcb4: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5ffcb9u); f_005fedb0();
    /* 005ffcb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ffcbc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffcbf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ffcc2: mov dword ptr [eax + 0x110], ecx */ W32((u32)(r_eax+0x110u), r_ecx);
    /* 005ffcc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffcca: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffccd: mov eax, dword ptr [edx + 0x110] */ r_eax = R32((u32)(r_edx+0x110u));
    /* 005ffcd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffcd4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ffcd7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffcd8: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5ffcddu); f_00626620();
    /* 005ffcdd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ffce0: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005ffce6: jmp 0x5ffcf4 */ goto L_005ffcf4;
L_005ffce8:; BB(0x005ffce8);
    /* 005ffce8: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 005ffcec: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005ffcf0: mov word ptr [ebp - 0x14], dx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_edx);
L_005ffcf4:; BB(0x005ffcf4);
    /* 005ffcf4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffcf7: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ffcfc: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ffcff: jge 0x5ffe92 */ if ((fS==fO)) goto L_005ffe92;
L_005ffd05:; BB(0x005ffd05);
    /* 005ffd05: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd0a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd0c: call dword ptr [0x633074] */ { u32 t = R32((u32)(0x633074u)); r_esp -= 4; W32(r_esp, 0x5ffd12u); call_ind(t); }
    /* 005ffd12: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ffd14: mov cx, word ptr [0x700d24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005ffd1b: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005ffd1e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffd21: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ffd27: mov dword ptr [ecx + edx*4 + 0x700810], eax */ W32((u32)(r_ecx+r_edx*4+0x700810u), r_eax);
    /* 005ffd2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ffd30: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005ffd36: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005ffd39: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffd3c: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005ffd42: cmp dword ptr [eax + ecx*4 + 0x700810], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4+0x700810u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffd4a: jne 0x5ffd51 */ if (!fZ) goto L_005ffd51;
L_005ffd4c:; BB(0x005ffd4c);
    /* 005ffd4c: jmp 0x6000d2 */ goto L_006000d2;
L_005ffd51:; BB(0x005ffd51);
    /* 005ffd51: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ffd53: mov dx, word ptr [0x700d24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005ffd5a: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005ffd5d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffd60: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ffd65: mov ecx, dword ptr [edx + eax*4 + 0x700810] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x700810u));
    /* 005ffd6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd6d: call dword ptr [0x633070] */ { u32 t = R32((u32)(0x633070u)); r_esp -= 4; W32(r_esp, 0x5ffd73u); call_ind(t); }
    /* 005ffd73: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ffd75: mov dx, word ptr [0x700d24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005ffd7c: imul edx, edx, 0xf0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xf0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffd82: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffd85: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005ffd8b: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffd8e: mov dword ptr [edx + ecx + 0x6fe98a], eax */ W32((u32)(r_edx+r_ecx+0x6fe98au), r_eax);
    /* 005ffd95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ffd97: mov dx, word ptr [0x700d24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005ffd9e: imul edx, edx, 0xf0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xf0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffda4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffda7: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ffdac: imul eax, eax, 0x1e */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1eu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffdaf: mov dword ptr [edx + eax + 0x6fe996], 0 */ W32((u32)(r_edx+r_eax+0x6fe996u), 0x0u);
    /* 005ffdba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ffdbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffdbe: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffdc3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffdc5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ffdc7: mov dx, word ptr [0x700d24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005ffdce: imul edx, edx, 0xf0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xf0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffdd4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffdd7: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ffddc: imul eax, eax, 0x1e */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1eu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffddf: mov ecx, dword ptr [edx + eax + 0x6fe98a] */ r_ecx = R32((u32)(r_edx+r_eax+0x6fe98au));
    /* 005ffde6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffde7: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x5ffdecu); f_00624250();
    /* 005ffdec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ffdef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ffdf1: mov dx, word ptr [0x700d24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005ffdf8: imul edx, edx, 0xf0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xf0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffdfe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffe01: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005ffe07: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffe0a: mov dword ptr [edx + ecx + 0x6fe996], eax */ W32((u32)(r_edx+r_ecx+0x6fe996u), r_eax);
    /* 005ffe11: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffe14: mov eax, dword ptr [edx + 0x110] */ r_eax = R32((u32)(r_edx+0x110u));
    /* 005ffe1a: add eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ffe1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ffe22: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ffe25: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ffe27: jle 0x5ffe59 */ if ((fZ||fS!=fO)) goto L_005ffe59;
L_005ffe29:; BB(0x005ffe29);
    /* 005ffe29: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ffe2c: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ffe2f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffe32: sub edx, dword ptr [eax + 0x110] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x110u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ffe38: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ffe3a: mov cx, word ptr [0x700d24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005ffe41: imul ecx, ecx, 0xf0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xf0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffe47: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffe4a: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ffe4f: imul eax, eax, 0x1e */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1eu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffe52: mov dword ptr [ecx + eax + 0x6fe996], edx */ W32((u32)(r_ecx+r_eax+0x6fe996u), r_edx);
L_005ffe59:; BB(0x005ffe59);
    /* 005ffe59: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ffe5b: mov cx, word ptr [0x700d24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005ffe62: imul ecx, ecx, 0xf0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xf0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffe68: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffe6b: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ffe71: imul edx, edx, 0x1e */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1eu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffe74: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffe77: mov eax, dword ptr [eax + 0x110] */ r_eax = R32((u32)(r_eax+0x110u));
    /* 005ffe7d: add eax, dword ptr [ecx + edx + 0x6fe996] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx+0x6fe996u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ffe84: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ffe87: mov dword ptr [ecx + 0x110], eax */ W32((u32)(r_ecx+0x110u), r_eax);
    /* 005ffe8d: jmp 0x5ffce8 */ goto L_005ffce8;
L_005ffe92:; BB(0x005ffe92);
    /* 005ffe92: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005ffe98: jmp 0x5ffea6 */ goto L_005ffea6;
L_005ffe9a:; BB(0x005ffe9a);
    /* 005ffe9a: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 005ffe9e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005ffea2: mov word ptr [ebp - 0x14], dx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_edx);
L_005ffea6:; BB(0x005ffea6);
    /* 005ffea6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffea9: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ffeae: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ffeb1: jge 0x6000ad */ if ((fS==fO)) goto L_006000ad;
L_005ffeb7:; BB(0x005ffeb7);
    /* 005ffeb7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ffeb9: mov cx, word ptr [0x700d24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005ffec0: imul ecx, ecx, 0xf0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xf0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffec6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffec9: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ffecf: imul edx, edx, 0x1e */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1eu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffed2: cmp dword ptr [ecx + edx + 0x6fe996], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx+0x6fe996u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffeda: je 0x6000a8 */ if (fZ) goto L_006000a8;
L_005ffee0:; BB(0x005ffee0);
    /* 005ffee0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ffee2: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005ffee8: imul eax, eax, 0xf0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffeee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffef1: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005ffef7: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffefa: lea edx, [eax + ecx + 0x6fe98e] */ r_edx = (u32)(r_eax+r_ecx+0x6fe98eu);
    /* 005fff01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fff02: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fff04: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005fff0a: imul eax, eax, 0xf0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fff10: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fff13: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005fff19: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fff1c: mov edx, dword ptr [eax + ecx + 0x6fe996] */ r_edx = R32((u32)(r_eax+r_ecx+0x6fe996u));
    /* 005fff23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fff24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fff26: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005fff2c: imul eax, eax, 0xf0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fff32: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fff35: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005fff3b: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fff3e: mov edx, dword ptr [eax + ecx + 0x6fe98a] */ r_edx = R32((u32)(r_eax+r_ecx+0x6fe98au));
    /* 005fff45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fff46: call 0x623e57 */ r_esp -= 4; W32(r_esp, 0x5fff4bu); f_00623e57();
    /* 005fff4b: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005fff50: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fff52: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005fff58: imul eax, eax, 0xf0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fff5e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fff61: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005fff67: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fff6a: cmp dword ptr [eax + ecx + 0x6fe98e], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx+0x6fe98eu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fff72: jne 0x5fff7e */ if (!fZ) goto L_005fff7e;
L_005fff74:; BB(0x005fff74);
    /* 005fff74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fff76: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5fff7bu); f_005fedb0();
    /* 005fff7b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fff7e:; BB(0x005fff7e);
    /* 005fff7e: mov edx, dword ptr [0x70078c] */ r_edx = R32((u32)(0x70078cu));
    /* 005fff84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fff85: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x5fff8au); f_005fedb0();
    /* 005fff8a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fff8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fff8f: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005fff95: imul eax, eax, 0xf0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fff9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fff9e: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005fffa4: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fffa7: lea edx, [eax + ecx + 0x6fe992] */ r_edx = (u32)(r_eax+r_ecx+0x6fe992u);
    /* 005fffae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fffaf: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005fffb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fffb3: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005fffb9: imul eax, eax, 0xf0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fffbf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fffc2: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005fffc8: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fffcb: lea edx, [eax + ecx + 0x6fe988] */ r_edx = (u32)(r_eax+r_ecx+0x6fe988u);
    /* 005fffd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fffd3: call 0x623e57 */ r_esp -= 4; W32(r_esp, 0x5fffd8u); f_00623e57();
    /* 005fffd8: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 005fffdd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fffdf: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 005fffe5: imul eax, eax, 0xf0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fffeb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fffee: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005ffff4: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ffff7: cmp dword ptr [eax + ecx + 0x6fe992], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx+0x6fe992u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fffff: jne 0x60000b */ if (!fZ) goto L_0060000b;
L_00600001:; BB(0x00600001);
    /* 00600001: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600003: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x600008u); f_005fedb0();
    /* 00600008: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060000b:; BB(0x0060000b);
    /* 0060000b: mov edx, dword ptr [0x70078c] */ r_edx = R32((u32)(0x70078cu));
    /* 00600011: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600012: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x600017u); f_005fedb0();
    /* 00600017: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060001a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060001c: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 00600022: imul eax, eax, 0xf0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00600028: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060002b: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00600031: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00600034: lea edx, [eax + ecx + 0x6fe988] */ r_edx = (u32)(r_eax+r_ecx+0x6fe988u);
    /* 0060003b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060003c: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 00600042: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600043: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00600047: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600048: call 0x62358b */ r_esp -= 4; W32(r_esp, 0x60004du); f_0062358b();
    /* 0060004d: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 00600052: mov edx, dword ptr [0x70078c] */ r_edx = R32((u32)(0x70078cu));
    /* 00600058: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600059: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x60005eu); f_005fedb0();
    /* 0060005e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00600061: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00600063: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 00600069: imul eax, eax, 0xf0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060006f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00600072: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00600078: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060007b: lea edx, [eax + ecx + 0x6fe988] */ r_edx = (u32)(r_eax+r_ecx+0x6fe988u);
    /* 00600082: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600083: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 00600089: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060008a: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0060008e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060008f: call 0x6235d7 */ r_esp -= 4; W32(r_esp, 0x600094u); f_006235d7();
    /* 00600094: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 00600099: mov edx, dword ptr [0x70078c] */ r_edx = R32((u32)(0x70078cu));
    /* 0060009f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006000a0: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x6000a5u); f_005fedb0();
    /* 006000a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006000a8:; BB(0x006000a8);
    /* 006000a8: jmp 0x5ffe9a */ goto L_005ffe9a;
L_006000ad:; BB(0x006000ad);
    /* 006000ad: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 006000b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006000b4: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 006000b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006000b9: call 0x6235fd */ r_esp -= 4; W32(r_esp, 0x6000beu); f_006235fd();
    /* 006000be: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 006000c3: mov edx, dword ptr [0x70078c] */ r_edx = R32((u32)(0x70078cu));
    /* 006000c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006000ca: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x6000cfu); f_005fedb0();
    /* 006000cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006000d2:; BB(0x006000d2);
    /* 006000d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006000d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006000d5: ret 4 */ FN_RET(0x005ffb01); r_esp += 8; return;
}

void f_006000d8(void) /* FUN_006000d8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006000d8);
    /* 006000d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006000d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006000db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006000dc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006000df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006000e2: cmp dword ptr [eax + 0x10c], 0 */ {  u32 a = R32((u32)(r_eax+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006000e9: jne 0x6000f0 */ if (!fZ) goto L_006000f0;
L_006000eb:; BB(0x006000eb);
    /* 006000eb: jmp 0x600253 */ goto L_00600253;
L_006000f0:; BB(0x006000f0);
    /* 006000f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006000f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006000f5: mov edx, dword ptr [ecx + 0x110] */ r_edx = R32((u32)(r_ecx+0x110u));
    /* 006000fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006000fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006000ff: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 00600105: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00600108: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600109: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x60010eu); f_00626620();
    /* 0060010e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00600111: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600114: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 0060011a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0060011d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060011e: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 00600123: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600125: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600128: mov ecx, dword ptr [eax + 2] */ r_ecx = R32((u32)(r_eax+0x2u));
    /* 0060012b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060012c: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x600131u); f_00624250();
    /* 00600131: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00600134: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00600137: mov dword ptr [edx + 0xe], eax */ W32((u32)(r_edx+0xeu), r_eax);
    /* 0060013a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060013d: cmp dword ptr [eax + 0xe], 0x10000 */ {  u32 a = R32((u32)(r_eax+0xeu)); u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600144: jne 0x6001da */ if (!fZ) goto L_006001da;
L_0060014a:; BB(0x0060014a);
    /* 0060014a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060014d: mov edx, dword ptr [ecx + 0x110] */ r_edx = R32((u32)(r_ecx+0x110u));
    /* 00600153: add edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00600159: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060015c: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 00600162: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600165: mov eax, dword ptr [eax + 0x10c] */ r_eax = R32((u32)(r_eax+0x10cu));
    /* 0060016b: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0060016e: add ecx, dword ptr [eax + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00600171: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00600173: jle 0x6001c0 */ if ((fZ||fS!=fO)) goto L_006001c0;
L_00600175:; BB(0x00600175);
    /* 00600175: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600178: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0060017e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600181: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 00600187: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 0060018a: add eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060018d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600190: sub eax, dword ptr [ecx + 0x110] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x110u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00600196: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00600199: mov dword ptr [edx + 0xe], eax */ W32((u32)(r_edx+0xeu), r_eax);
    /* 0060019c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060019f: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 006001a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006001a8: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 006001ab: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 006001b1: push 0x69c3d8 */ { u32 v = 0x69c3d8u; r_esp -= 4; W32(r_esp, v); }
    /* 006001b6: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x6001bbu); f_0060fc40();
    /* 006001bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006001be: jmp 0x6001d8 */ goto L_006001d8;
L_006001c0:; BB(0x006001c0);
    /* 006001c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006001c3: mov edx, dword ptr [ecx + 0x110] */ r_edx = R32((u32)(r_ecx+0x110u));
    /* 006001c9: add edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006001cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006001d2: mov dword ptr [eax + 0x110], edx */ W32((u32)(r_eax+0x110u), r_edx);
L_006001d8:; BB(0x006001d8);
    /* 006001d8: jmp 0x600223 */ goto L_00600223;
L_006001da:; BB(0x006001da);
    /* 006001da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006001dd: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 006001e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006001e6: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 006001ec: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 006001ef: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006001f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006001f5: sub edx, dword ptr [eax + 0x110] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x110u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006001fb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006001fe: mov dword ptr [ecx + 0xe], edx */ W32((u32)(r_ecx+0xeu), r_edx);
    /* 00600201: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600204: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0060020a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060020d: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00600210: mov dword ptr [ecx + 0x110], edx */ W32((u32)(r_ecx+0x110u), r_edx);
    /* 00600216: push 0x69c3f4 */ { u32 v = 0x69c3f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060021b: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x600220u); f_0060fc40();
    /* 00600220: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00600223:; BB(0x00600223);
    /* 00600223: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600226: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600227: mov cx, word ptr [0x700d24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 0060022e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060022f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600232: mov ax, word ptr [edx + 0x100] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x100u))) & 0xffffu);
    /* 00600239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060023a: call 0x6235d7 */ r_esp -= 4; W32(r_esp, 0x60023fu); f_006235d7();
    /* 0060023f: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 00600244: mov ecx, dword ptr [0x70078c] */ r_ecx = R32((u32)(0x70078cu));
    /* 0060024a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060024b: call 0x5fedb0 */ r_esp -= 4; W32(r_esp, 0x600250u); f_005fedb0();
    /* 00600250: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00600253:; BB(0x00600253);
    /* 00600253: mov esp, ebp */ r_esp = r_ebp;
    /* 00600255: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600256: ret 4 */ FN_RET(0x006000d8); r_esp += 8; return;
}

void f_00600259(void) /* FUN_00600259 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600259);
    /* 00600259: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060025a: mov ebp, esp */ r_ebp = r_esp;
    /* 0060025c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060025f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00600262: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00600265: cmp dword ptr [eax + 0x10c], 0 */ {  u32 a = R32((u32)(r_eax+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060026c: jne 0x600273 */ if (!fZ) goto L_00600273;
L_0060026e:; BB(0x0060026e);
    /* 0060026e: jmp 0x6003d6 */ goto L_006003d6;
L_00600273:; BB(0x00600273);
    /* 00600273: mov cx, word ptr [0x700d24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 0060027a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060027b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060027e: mov ax, word ptr [edx + 0x100] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x100u))) & 0xffffu);
    /* 00600285: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600286: call 0x62361f */ r_esp -= 4; W32(r_esp, 0x60028bu); f_0062361f();
    /* 0060028b: mov cx, word ptr [0x700d24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 00600292: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600293: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00600296: mov ax, word ptr [edx + 0x100] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x100u))) & 0xffffu);
    /* 0060029d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060029e: call 0x623569 */ r_esp -= 4; W32(r_esp, 0x6002a3u); f_00623569();
    /* 006002a3: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006002a9: jmp 0x6002b7 */ goto L_006002b7;
L_006002ab:; BB(0x006002ab);
    /* 006002ab: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 006002af: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 006002b3: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_006002b7:; BB(0x006002b7);
    /* 006002b7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006002ba: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006002c0: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006002c3: jge 0x600399 */ if ((fS==fO)) goto L_00600399;
L_006002c9:; BB(0x006002c9);
    /* 006002c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006002cb: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 006002d1: imul eax, eax, 0xf0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006002d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006002da: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006002e0: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006002e3: lea edx, [eax + ecx + 0x6fe988] */ r_edx = (u32)(r_eax+r_ecx+0x6fe988u);
    /* 006002ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006002eb: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 006002f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006002f2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006002f5: mov dx, word ptr [ecx + 0x100] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x100u))) & 0xffffu);
    /* 006002fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006002fd: call 0x6235b1 */ r_esp -= 4; W32(r_esp, 0x600302u); f_006235b1();
    /* 00600302: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00600304: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 0060030a: imul eax, eax, 0xf0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00600310: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600313: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00600319: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060031c: mov edx, dword ptr [eax + ecx + 0x6fe992] */ r_edx = R32((u32)(r_eax+r_ecx+0x6fe992u));
    /* 00600323: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600324: call 0x623e9f */ r_esp -= 4; W32(r_esp, 0x600329u); f_00623e9f();
    /* 00600329: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060032b: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 00600331: imul eax, eax, 0xf0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00600337: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060033a: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00600340: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00600343: mov edx, dword ptr [eax + ecx + 0x6fe98e] */ r_edx = R32((u32)(r_eax+r_ecx+0x6fe98eu));
    /* 0060034a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060034b: call 0x623e9f */ r_esp -= 4; W32(r_esp, 0x600350u); f_00623e9f();
    /* 00600350: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00600352: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 00600358: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0060035b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060035e: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00600364: mov edx, dword ptr [eax + ecx*4 + 0x700810] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x700810u));
    /* 0060036b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060036c: call dword ptr [0x633068] */ { u32 t = R32((u32)(0x633068u)); r_esp -= 4; W32(r_esp, 0x600372u); call_ind(t); }
    /* 00600372: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00600374: mov ax, word ptr [0x700d24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 0060037a: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0060037d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600380: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00600386: mov edx, dword ptr [eax + ecx*4 + 0x700810] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x700810u));
    /* 0060038d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060038e: call dword ptr [0x633064] */ { u32 t = R32((u32)(0x633064u)); r_esp -= 4; W32(r_esp, 0x600394u); call_ind(t); }
    /* 00600394: jmp 0x6002ab */ goto L_006002ab;
L_00600399:; BB(0x00600399);
    /* 00600399: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060039c: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 006003a2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006003a5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006003a8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006003ab: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006003af: je 0x6003c2 */ if (fZ) goto L_006003c2;
L_006003b1:; BB(0x006003b1);
    /* 006003b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006003b3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006003b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006003b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006003bb: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x6003bdu); call_ind(t); }
    /* 006003bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006003c0: jmp 0x6003c9 */ goto L_006003c9;
L_006003c2:; BB(0x006003c2);
    /* 006003c2: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_006003c9:; BB(0x006003c9);
    /* 006003c9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006003cc: mov dword ptr [eax + 0x10c], 0 */ W32((u32)(r_eax+0x10cu), 0x0u);
L_006003d6:; BB(0x006003d6);
    /* 006003d6: mov esp, ebp */ r_esp = r_ebp;
    /* 006003d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006003d9: ret  */ FN_RET(0x00600259); r_esp += 4; return;
}

void f_006003da(void) /* FUN_006003da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006003da);
    /* 006003da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006003db: mov ebp, esp */ r_ebp = r_esp;
    /* 006003dd: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006003e0: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 006003e3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006003ea: mov dword ptr [ebp - 0x3c], 0xdaf */ W32((u32)(r_ebp+0xffffffc4u), 0xdafu);
    /* 006003f1: mov dword ptr [ebp - 0x38], 0xdb0 */ W32((u32)(r_ebp+0xffffffc8u), 0xdb0u);
    /* 006003f8: mov dword ptr [ebp - 0x34], 0xdb1 */ W32((u32)(r_ebp+0xffffffccu), 0xdb1u);
    /* 006003ff: mov dword ptr [ebp - 0x30], 0xdb4 */ W32((u32)(r_ebp+0xffffffd0u), 0xdb4u);
    /* 00600406: mov dword ptr [ebp - 0x2c], 0xdb5 */ W32((u32)(r_ebp+0xffffffd4u), 0xdb5u);
    /* 0060040d: mov dword ptr [ebp - 0x28], 0xdb6 */ W32((u32)(r_ebp+0xffffffd8u), 0xdb6u);
    /* 00600414: mov dword ptr [ebp - 0x24], 0xdb2 */ W32((u32)(r_ebp+0xffffffdcu), 0xdb2u);
    /* 0060041b: mov dword ptr [ebp - 0x20], 0xdb9 */ W32((u32)(r_ebp+0xffffffe0u), 0xdb9u);
    /* 00600422: mov dword ptr [ebp - 0x1c], 0xdb8 */ W32((u32)(r_ebp+0xffffffe4u), 0xdb8u);
    /* 00600429: mov dword ptr [ebp - 0x18], 0xdb7 */ W32((u32)(r_ebp+0xffffffe8u), 0xdb7u);
    /* 00600430: mov dword ptr [ebp - 0x14], 0xdac */ W32((u32)(r_ebp+0xffffffecu), 0xdacu);
    /* 00600437: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
#if defined(__EMSCRIPTEN__)
    for (int mi = 0; mi < 11; ++mi) W32((u32)(r_ebp - 0x3c + mi * 4), 0x18a89u);
#endif
    /* 0060043e: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600442: jne 0x60047e */ if (!fZ) goto L_0060047e;
L_00600444:; BB(0x00600444);
    /* 00600444: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0060044b: jmp 0x600456 */ goto L_00600456;
L_0060044d:; BB(0x0060044d);
    /* 0060044d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600450: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00600453: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00600456:; BB(0x00600456);
    /* 00600456: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600459: cmp dword ptr [ebp + ecx*4 - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+r_ecx*4+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060045e: je 0x60046b */ if (fZ) goto L_0060046b;
L_00600460:; BB(0x00600460);
    /* 00600460: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600463: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00600466: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00600469: jmp 0x60044d */ goto L_0060044d;
L_0060046b:; BB(0x0060046b);
    /* 0060046b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060046e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060046f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x600474u); f_0060ee31();
    /* 00600474: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00600477: mov ecx, dword ptr [ebp + eax*4 - 0x3c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffc4u));
    /* 0060047b: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_0060047e:; BB(0x0060047e);
    /* 0060047e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00600485: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600489: je 0x6004be */ if (fZ) goto L_006004be;
L_0060048b:; BB(0x0060048b);
    /* 0060048b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0060048d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x600492u); f_0048ab58();
    /* 00600492: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00600495: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00600498: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060049c: je 0x6004b1 */ if (fZ) goto L_006004b1;
L_0060049e:; BB(0x0060049e);
    /* 0060049e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006004a0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006004a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006004a4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006004a7: call 0x5e8220 */ r_esp -= 4; W32(r_esp, 0x6004acu); f_005e8220();
    /* 006004ac: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006004af: jmp 0x6004b8 */ goto L_006004b8;
L_006004b1:; BB(0x006004b1);
    /* 006004b1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006004b8:; BB(0x006004b8);
    /* 006004b8: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006004bb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_006004be:; BB(0x006004be);
    /* 006004be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006004c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006004c2: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006004c5: call 0x5ffb01 */ r_esp -= 4; W32(r_esp, 0x6004cau); f_005ffb01();
    /* 006004ca: mov esp, ebp */ r_esp = r_ebp;
    /* 006004cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006004cd: ret 4 */ FN_RET(0x006003da); r_esp += 8; return;
}

void f_006004d0(void) /* FUN_006004d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006004d0);
    /* 006004d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006004d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006004d3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    { u32 smp = R32(r_ebp + 8); if (smp >= 0x10000000u) smp = 0; fprintf(stderr, "wasmSND 004d0 this=%08x smp=%08x en=%u cnt=%u fmt=%u rate=%u\n", r_ecx, smp, (r_ecx && r_ecx < 0x10000000u) ? R32(r_ecx + 0xfc) : 0, smp ? R32(smp + 0x3c) : 0, smp ? R32(smp + 0x30) : 0, smp ? R16(smp + 0x34) : 0); }
    /* 006004d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006004d7: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006004da: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006004dd: cmp dword ptr [eax + 0xfc], 0 */ {  u32 a = R32((u32)(r_eax+0xfcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006004e4: jne 0x6004eb */ if (!fZ) goto L_006004eb;
L_006004e6:; BB(0x006004e6);
    /* 006004e6: jmp 0x6007c7 */ goto L_006007c7;
L_006004eb:; BB(0x006004eb);
    /* 006004eb: mov word ptr [ebp - 0x14], 1 */ W16((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 006004f1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006004f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006004f6: mov dx, word ptr [ecx + 0x34] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x34u))) & 0xffffu);
    /* 006004fa: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006004fd: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00600503: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600506: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00600509: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060050c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060050f: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00600512: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00600515: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00600519: ja 0x600573 */ if ((!fC&&!fZ)) goto L_00600573;
L_0060051b:; BB(0x0060051b);
    /* 0060051b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060051e: jmp dword ptr [eax*4 + 0x6007ce] */ { u32 t = R32((u32)(r_eax*4+0x6007ceu)); switch (t) { case 0x600525u: goto L_00600525; case 0x600539u: goto L_00600539; case 0x60054du: goto L_0060054d; case 0x600561u: goto L_00600561; default: UNSUP(0x0060051e, "jump table entry is not a known target"); } }
L_00600525:; BB(0x00600525);
    /* 00600525: mov word ptr [ebp - 6], 8 */ W16((u32)(r_ebp+0xfffffffau), 0x8u);
    /* 0060052b: mov word ptr [ebp - 0x12], 1 */ W16((u32)(r_ebp+0xffffffeeu), 0x1u);
    /* 00600531: mov word ptr [ebp - 8], 1 */ W16((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00600537: jmp 0x600573 */ goto L_00600573;
L_00600539:; BB(0x00600539);
    /* 00600539: mov word ptr [ebp - 6], 8 */ W16((u32)(r_ebp+0xfffffffau), 0x8u);
    /* 0060053f: mov word ptr [ebp - 0x12], 2 */ W16((u32)(r_ebp+0xffffffeeu), 0x2u);
    /* 00600545: mov word ptr [ebp - 8], 2 */ W16((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 0060054b: jmp 0x600573 */ goto L_00600573;
L_0060054d:; BB(0x0060054d);
    /* 0060054d: mov word ptr [ebp - 6], 0x10 */ W16((u32)(r_ebp+0xfffffffau), 0x10u);
    /* 00600553: mov word ptr [ebp - 0x12], 1 */ W16((u32)(r_ebp+0xffffffeeu), 0x1u);
    /* 00600559: mov word ptr [ebp - 8], 2 */ W16((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 0060055f: jmp 0x600573 */ goto L_00600573;
L_00600561:; BB(0x00600561);
    /* 00600561: mov word ptr [ebp - 6], 0x10 */ W16((u32)(r_ebp+0xfffffffau), 0x10u);
    /* 00600567: mov word ptr [ebp - 0x12], 2 */ W16((u32)(r_ebp+0xffffffeeu), 0x2u);
    /* 0060056d: mov word ptr [ebp - 8], 4 */ W16((u32)(r_ebp+0xfffffff8u), 0x4u);
L_00600573:; BB(0x00600573);
    /* 00600573: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600576: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0060057c: imul ecx, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00600580: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00600583: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00600586: cmp dword ptr [edx + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060058a: je 0x6005a2 */ if (fZ) goto L_006005a2;
L_0060058c:; BB(0x0060058c);
    /* 0060058c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060058f: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00600592: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x600597u); f_0060ebea();
    /* 00600597: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060059a: mov dword ptr [ecx + 0xf0], eax */ W32((u32)(r_ecx+0xf0u), r_eax);
    /* 006005a0: jmp 0x6005bb */ goto L_006005bb;
L_006005a2:; BB(0x006005a2);
    /* 006005a2: push 0x69c410 */ { u32 v = 0x69c410u; r_esp -= 4; W32(r_esp, v); }
    /* 006005a7: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x6005acu); f_0060fc40();
    /* 006005ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006005af: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 006005b6: jmp 0x6007c7 */ goto L_006007c7;
L_006005bb:; BB(0x006005bb);
    /* 006005bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006005bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006005bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006005c1: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 006005c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006005c5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006005c7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006005ca: add eax, 0xf4 */ {  u32 a = r_eax; u32 b = 0xf4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006005cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006005d0: call dword ptr [0x633288] */ { u32 t = R32((u32)(0x633288u)); r_esp -= 4; W32(r_esp, 0x6005d6u); call_ind(t); }
    /* 006005d6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006005d9: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006005dd: je 0x6005fd */ if (fZ) goto L_006005fd;
L_006005df:; BB(0x006005df);
    /* 006005df: push 0x69c420 */ { u32 v = 0x69c420u; r_esp -= 4; W32(r_esp, v); }
    /* 006005e4: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x6005e9u); f_0060fc40();
    /* 006005e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006005ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006005ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006005f0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006005f3: call 0x6007de */ r_esp -= 4; W32(r_esp, 0x6005f8u); f_006007de();
    /* 006005f8: jmp 0x6007c7 */ goto L_006007c7;
L_006005fd:; BB(0x006005fd);
    /* 006005fd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00600600: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00600603: mov ecx, dword ptr [eax + 0xf0] */ r_ecx = R32((u32)(r_eax+0xf0u));
    /* 00600609: mov dword ptr [edx + 0xd0], ecx */ W32((u32)(r_edx+0xd0u), r_ecx);
    /* 0060060f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600612: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00600618: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060061b: imul edx, dword ptr [eax + 0x38] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_eax+0x38u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060061f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00600622: mov dword ptr [ecx + 0xd4], edx */ W32((u32)(r_ecx+0xd4u), r_edx);
    /* 00600628: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060062b: mov dword ptr [edx + 0xd8], 0 */ W32((u32)(r_edx+0xd8u), 0x0u);
    /* 00600635: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00600638: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
    /* 00600642: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00600645: mov dword ptr [ecx + 0xe8], 0 */ W32((u32)(r_ecx+0xe8u), 0x0u);
    /* 0060064f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00600652: mov dword ptr [edx + 0xec], 0 */ W32((u32)(r_edx+0xecu), 0x0u);
    /* 0060065c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060065f: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600663: je 0x600683 */ if (fZ) goto L_00600683;
L_00600665:; BB(0x00600665);
    /* 00600665: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00600668: mov dword ptr [ecx + 0xe0], 0xc */ W32((u32)(r_ecx+0xe0u), 0xcu);
    /* 00600672: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00600675: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600678: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0060067b: mov dword ptr [edx + 0xe4], ecx */ W32((u32)(r_edx+0xe4u), r_ecx);
    /* 00600681: jmp 0x60069d */ goto L_0060069d;
L_00600683:; BB(0x00600683);
    /* 00600683: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00600686: mov dword ptr [edx + 0xe0], 0 */ W32((u32)(r_edx+0xe0u), 0x0u);
    /* 00600690: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00600693: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
L_0060069d:; BB(0x0060069d);
    /* 0060069d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060069f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006006a2: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006006a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006006a9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006006ac: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 006006b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006006b3: call dword ptr [0x633264] */ { u32 t = R32((u32)(0x633264u)); r_esp -= 4; W32(r_esp, 0x6006b9u); call_ind(t); }
    /* 006006b9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006006bc: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006006c0: jne 0x6006ce */ if (!fZ) goto L_006006ce;
L_006006c2:; BB(0x006006c2);
    /* 006006c2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006006c5: cmp dword ptr [ecx + 0xf4], 0 */ {  u32 a = R32((u32)(r_ecx+0xf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006006cc: jne 0x6006f9 */ if (!fZ) goto L_006006f9;
L_006006ce:; BB(0x006006ce);
    /* 006006ce: push 0x69c434 */ { u32 v = 0x69c434u; r_esp -= 4; W32(r_esp, v); }
    /* 006006d3: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x6006d8u); f_0060fc40();
    /* 006006d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006006db: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006006de: mov dword ptr [edx + 0xf8], 0 */ W32((u32)(r_edx+0xf8u), 0x0u);
    /* 006006e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006006eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006006ec: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006006ef: call 0x6007de */ r_esp -= 4; W32(r_esp, 0x6006f4u); f_006007de();
    /* 006006f4: jmp 0x6007c7 */ goto L_006007c7;
L_006006f9:; BB(0x006006f9);
    /* 006006f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006006fc: mov dword ptr [ecx + 0xf8], 1 */ W32((u32)(r_ecx+0xf8u), 0x1u);
    /* 00600706: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00600708: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060070b: add edx, 0xd0 */ {  u32 a = r_edx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00600711: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600712: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00600715: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 0060071b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060071c: call dword ptr [0x633260] */ { u32 t = R32((u32)(0x633260u)); r_esp -= 4; W32(r_esp, 0x600722u); call_ind(t); }
    /* 00600722: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00600725: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600729: jne 0x600737 */ if (!fZ) goto L_00600737;
L_0060072b:; BB(0x0060072b);
    /* 0060072b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060072e: cmp dword ptr [edx + 0xf4], 0 */ {  u32 a = R32((u32)(r_edx+0xf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600735: jne 0x600752 */ if (!fZ) goto L_00600752;
L_00600737:; BB(0x00600737);
    /* 00600737: push 0x69c454 */ { u32 v = 0x69c454u; r_esp -= 4; W32(r_esp, v); }
    /* 0060073c: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x600741u); f_0060fc40();
    /* 00600741: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00600744: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600747: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600748: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060074b: call 0x6007de */ r_esp -= 4; W32(r_esp, 0x600750u); f_006007de();
    /* 00600750: jmp 0x6007c7 */ goto L_006007c7;
L_00600752:; BB(0x00600752);
    /* 00600752: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00600755: cmp dword ptr [ecx + 0x40], -1 */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600759: jne 0x600767 */ if (!fZ) goto L_00600767;
L_0060075b:; BB(0x0060075b);
    /* 0060075b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060075e: mov dword ptr [edx + 0x50], 0xffffffff */ W32((u32)(r_edx+0x50u), 0xffffffffu);
    /* 00600765: jmp 0x6007c7 */ goto L_006007c7;
L_00600767:; BB(0x00600767);
    /* 00600767: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0060076d: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x600772u); f_005d9e34();
    /* 00600772: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00600775: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 00600778: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060077b: mov esi, dword ptr [edx + 0x40] */ r_esi = R32((u32)(r_edx+0x40u));
    /* 0060077e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00600781: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600784: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00600787: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0060078a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00600791: fild qword ptr [ebp - 0x28] */ FPUSH((long double)(i64)R64((u32)(r_ebp+0xffffffd8u)));
    /* 00600794: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00600797: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00600799: mov ax, word ptr [edx + 0x34] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x34u))) & 0xffffu);
    /* 0060079d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006007a0: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 006007a3: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006007a5: fmul qword ptr [0x63c528] */ ST(0) = ST(0) * R_F64((u32)(0x63c528u));
    /* 006007ab: fadd qword ptr [0x63c530] */ ST(0) = ST(0) + R_F64((u32)(0x63c530u));
    /* 006007b1: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x6007b6u); f_00624144();
    /* 006007b6: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006007b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006007bc: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 006007bf: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006007c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006007c4: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
L_006007c7:; BB(0x006007c7);
    /* 006007c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006007c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006007ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006007cb: ret 4 */ FN_RET(0x006004d0); r_esp += 8; return;
}

void f_006007de(void) /* FUN_006007de */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006007de);
    /* 006007de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006007df: mov ebp, esp */ r_ebp = r_esp;
    /* 006007e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006007e2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006007e5: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006007e9: jne 0x6007ed */ if (!fZ) goto L_006007ed;
L_006007eb:; BB(0x006007eb);
    /* 006007eb: jmp 0x60086c */ goto L_0060086c;
L_006007ed:; BB(0x006007ed);
    /* 006007ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006007f0: cmp dword ptr [eax + 0xf4], 0 */ {  u32 a = R32((u32)(r_eax+0xf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006007f7: je 0x600831 */ if (fZ) goto L_00600831;
L_006007f9:; BB(0x006007f9);
    /* 006007f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006007fc: mov edx, dword ptr [ecx + 0xf4] */ r_edx = R32((u32)(r_ecx+0xf4u));
    /* 00600802: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600803: call dword ptr [0x63327c] */ { u32 t = R32((u32)(0x63327cu)); r_esp -= 4; W32(r_esp, 0x600809u); call_ind(t); }
    /* 00600809: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060080c: cmp dword ptr [eax + 0xf8], 0 */ {  u32 a = R32((u32)(r_eax+0xf8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600813: je 0x600831 */ if (fZ) goto L_00600831;
L_00600815:; BB(0x00600815);
    /* 00600815: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00600817: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060081a: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00600820: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600821: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600824: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0060082a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060082b: call dword ptr [0x633280] */ { u32 t = R32((u32)(0x633280u)); r_esp -= 4; W32(r_esp, 0x600831u); call_ind(t); }
L_00600831:; BB(0x00600831);
    /* 00600831: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00600834: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 00600837: call 0x60ec47 */ r_esp -= 4; W32(r_esp, 0x60083cu); f_0060ec47();
    /* 0060083c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060083f: cmp dword ptr [edx + 0xf4], 0 */ {  u32 a = R32((u32)(r_edx+0xf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600846: je 0x600865 */ if (fZ) goto L_00600865;
L_00600848:; BB(0x00600848);
    /* 00600848: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060084b: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 00600851: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600852: call dword ptr [0x633284] */ { u32 t = R32((u32)(0x633284u)); r_esp -= 4; W32(r_esp, 0x600858u); call_ind(t); }
    /* 00600858: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060085b: mov dword ptr [edx + 0xf4], 0 */ W32((u32)(r_edx+0xf4u), 0x0u);
L_00600865:; BB(0x00600865);
    /* 00600865: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_0060086c:; BB(0x0060086c);
    /* 0060086c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060086e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060086f: ret 4 */ FN_RET(0x006007de); r_esp += 8; return;
}

void f_00600872(void) /* FUN_00600872 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600872);
    /* 00600872: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600873: mov ebp, esp */ r_ebp = r_esp;
    /* 00600875: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600876: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600879: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060087c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060087f: mov dword ptr [eax + 0x118], ecx */ W32((u32)(r_eax+0x118u), r_ecx);
    /* 00600885: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00600888: mov dword ptr [eax + 0x11c], edx */ W32((u32)(r_eax+0x11cu), r_edx);
    /* 0060088e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600891: fld qword ptr [eax + 0x118] */ FPUSH(R_F64((u32)(r_eax+0x118u)));
    /* 00600897: fmul qword ptr [0x63c538] */ ST(0) = ST(0) * R_F64((u32)(0x63c538u));
    /* 0060089d: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x6008a2u); f_00624144();
    /* 006008a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006008a3: mov cx, word ptr [0x700d24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x700d24u))) & 0xffffu);
    /* 006008aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006008ab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006008ae: mov ax, word ptr [edx + 0x100] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x100u))) & 0xffffu);
    /* 006008b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006008b6: call 0x62379e */ r_esp -= 4; W32(r_esp, 0x6008bbu); f_0062379e();
    /* 006008bb: mov dword ptr [0x70078c], eax */ W32((u32)(0x70078cu), r_eax);
    /* 006008c0: mov esp, ebp */ r_esp = r_ebp;
    /* 006008c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006008c3: ret 8 */ FN_RET(0x00600872); r_esp += 12; return;
}

void f_006008c6(void) /* FUN_006008c6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006008c6);
    /* 006008c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006008c7: mov ebp, esp */ r_ebp = r_esp;
    /* 006008c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006008ca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006008cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006008d0: fld qword ptr [eax + 0x118] */ FPUSH(R_F64((u32)(r_eax+0x118u)));
    /* 006008d6: mov esp, ebp */ r_esp = r_ebp;
    /* 006008d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006008d9: ret  */ FN_RET(0x006008c6); r_esp += 4; return;
}

void f_006008da(void) /* FUN_006008da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006008da);
    /* 006008da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006008db: mov ebp, esp */ r_ebp = r_esp;
    /* 006008dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006008de: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006008e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006008e4: fld qword ptr [eax + 0x118] */ FPUSH(R_F64((u32)(r_eax+0x118u)));
    /* 006008ea: fmul qword ptr [ebp + 8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0x8u));
    /* 006008ed: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006008f0: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 006008f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006008f6: call 0x600872 */ r_esp -= 4; W32(r_esp, 0x6008fbu); f_00600872();
    /* 006008fb: mov esp, ebp */ r_esp = r_ebp;
    /* 006008fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006008fe: ret 8 */ FN_RET(0x006008da); r_esp += 12; return;
}

void f_00600910(void) /* FUN_00600910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600910);
    /* 00600910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600911: mov ebp, esp */ r_ebp = r_esp;
    /* 00600913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600917: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060091a: call 0x5fefdd */ r_esp -= 4; W32(r_esp, 0x60091fu); f_005fefdd();
    /* 0060091f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600922: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00600925: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600927: je 0x600935 */ if (fZ) goto L_00600935;
L_00600929:; BB(0x00600929);
    /* 00600929: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060092c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060092d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x600932u); f_0048ac1b();
    /* 00600932: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00600935:; BB(0x00600935);
    /* 00600935: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600938: mov esp, ebp */ r_esp = r_ebp;
    /* 0060093a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060093b: ret 4 */ FN_RET(0x00600910); r_esp += 8; return;
}

void f_00600940(void) /* FUN_00600940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600940);
    /* 00600940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600941: mov ebp, esp */ r_ebp = r_esp;
    /* 00600943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600944: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600947: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060094a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060094c: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060094e: jl 0x600973 */ if ((fS!=fO)) goto L_00600973;
L_00600950:; BB(0x00600950);
    /* 00600950: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600953: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00600956: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600958: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060095a: jne 0x60096a */ if (!fZ) goto L_0060096a;
L_0060095c:; BB(0x0060095c);
    /* 0060095c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060095f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00600962: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00600965: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00600968: jl 0x600973 */ if ((fS!=fO)) goto L_00600973;
L_0060096a:; BB(0x0060096a);
    /* 0060096a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00600971: jmp 0x60097a */ goto L_0060097a;
L_00600973:; BB(0x00600973);
    /* 00600973: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0060097a:; BB(0x0060097a);
    /* 0060097a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060097d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060097f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600980: ret  */ FN_RET(0x00600940); r_esp += 4; return;
}

void f_00600981(void) /* FUN_00600981 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600981);
    /* 00600981: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600982: mov ebp, esp */ r_ebp = r_esp;
    /* 00600984: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00600987: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060098a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060098d: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x600992u); f_005dfbf0();
    /* 00600992: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600995: mov dword ptr [eax], 0x63c544 */ W32((u32)(r_eax), 0x63c544u);
    /* 0060099b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060099e: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 006009a5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006009a8: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 006009af: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006009b2: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 006009b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006009bc: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 006009c3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006009c6: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 006009cd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006009d0: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 006009d7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006009da: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 006009e1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006009e4: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 006009eb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006009ee: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 006009f5: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006009fb: jmp 0x600a09 */ goto L_00600a09;
L_006009fd:; BB(0x006009fd);
    /* 006009fd: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00600a01: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00600a05: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_00600a09:; BB(0x00600a09);
    /* 00600a09: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600a0d: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00600a10: jge 0x600a23 */ if ((fS==fO)) goto L_00600a23;
L_00600a12:; BB(0x00600a12);
    /* 00600a12: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600a16: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600a19: mov dword ptr [ecx + eax*4 + 0x2c], 0 */ W32((u32)(r_ecx+r_eax*4+0x2cu), 0x0u);
    /* 00600a21: jmp 0x6009fd */ goto L_006009fd;
L_00600a23:; BB(0x00600a23);
    /* 00600a23: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00600a29: jmp 0x600a37 */ goto L_00600a37;
L_00600a2b:; BB(0x00600a2b);
    /* 00600a2b: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00600a2f: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00600a33: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00600a37:; BB(0x00600a37);
    /* 00600a37: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600a3b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00600a3e: jge 0x600a51 */ if ((fS==fO)) goto L_00600a51;
L_00600a40:; BB(0x00600a40);
    /* 00600a40: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600a44: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600a47: mov dword ptr [edx + ecx*4 + 0x48], 0 */ W32((u32)(r_edx+r_ecx*4+0x48u), 0x0u);
    /* 00600a4f: jmp 0x600a2b */ goto L_00600a2b;
L_00600a51:; BB(0x00600a51);
    /* 00600a51: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00600a57: jmp 0x600a65 */ goto L_00600a65;
L_00600a59:; BB(0x00600a59);
    /* 00600a59: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00600a5d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00600a61: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00600a65:; BB(0x00600a65);
    /* 00600a65: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600a69: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00600a6c: jge 0x600a7f */ if ((fS==fO)) goto L_00600a7f;
L_00600a6e:; BB(0x00600a6e);
    /* 00600a6e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600a72: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600a75: mov dword ptr [eax + edx*4 + 0x3c], 0 */ W32((u32)(r_eax+r_edx*4+0x3cu), 0x0u);
    /* 00600a7d: jmp 0x600a59 */ goto L_00600a59;
L_00600a7f:; BB(0x00600a7f);
    /* 00600a7f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600a82: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
    /* 00600a89: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600a8c: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
    /* 00600a93: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600a96: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 00600a9d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600aa0: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 00600aa7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600aaa: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00600ab1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600ab4: mov esp, ebp */ r_esp = r_ebp;
    /* 00600ab6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600ab7: ret  */ FN_RET(0x00600981); r_esp += 4; return;
}

void f_00600ab8(void) /* FUN_00600ab8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600ab8);
    /* 00600ab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600ab9: mov ebp, esp */ r_ebp = r_esp;
    /* 00600abb: sub esp, 0xd4 */ {  u32 a = r_esp; u32 b = 0xd4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00600ac1: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 00600ac7: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00600acd: mov dword ptr [eax], 0x63c544 */ W32((u32)(r_eax), 0x63c544u);
    /* 00600ad3: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600ad9: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600add: je 0x600b22 */ if (fZ) goto L_00600b22;
L_00600adf:; BB(0x00600adf);
    /* 00600adf: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600ae5: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00600ae8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00600aeb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600aee: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00600af1: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600af5: je 0x600b0b */ if (fZ) goto L_00600b0b;
L_00600af7:; BB(0x00600af7);
    /* 00600af7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600af9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600afc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00600afe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600b01: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x600b03u); call_ind(t); }
    /* 00600b03: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00600b09: jmp 0x600b15 */ goto L_00600b15;
L_00600b0b:; BB(0x00600b0b);
    /* 00600b0b: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_00600b15:; BB(0x00600b15);
    /* 00600b15: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600b1b: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
L_00600b22:; BB(0x00600b22);
    /* 00600b22: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600b28: cmp dword ptr [edx + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600b2c: je 0x600b71 */ if (fZ) goto L_00600b71;
L_00600b2e:; BB(0x00600b2e);
    /* 00600b2e: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00600b34: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00600b37: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00600b3a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00600b3d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00600b40: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600b44: je 0x600b5a */ if (fZ) goto L_00600b5a;
L_00600b46:; BB(0x00600b46);
    /* 00600b46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600b48: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00600b4b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600b4d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00600b50: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x600b52u); call_ind(t); }
    /* 00600b52: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00600b58: jmp 0x600b64 */ goto L_00600b64;
L_00600b5a:; BB(0x00600b5a);
    /* 00600b5a: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_00600b64:; BB(0x00600b64);
    /* 00600b64: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00600b6a: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
L_00600b71:; BB(0x00600b71);
    /* 00600b71: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600b77: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600b7b: je 0x600bc0 */ if (fZ) goto L_00600bc0;
L_00600b7d:; BB(0x00600b7d);
    /* 00600b7d: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600b83: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00600b86: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00600b89: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00600b8c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00600b8f: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600b93: je 0x600ba9 */ if (fZ) goto L_00600ba9;
L_00600b95:; BB(0x00600b95);
    /* 00600b95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600b97: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00600b9a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00600b9c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00600b9f: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x600ba1u); call_ind(t); }
    /* 00600ba1: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00600ba7: jmp 0x600bb3 */ goto L_00600bb3;
L_00600ba9:; BB(0x00600ba9);
    /* 00600ba9: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_00600bb3:; BB(0x00600bb3);
    /* 00600bb3: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600bb9: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
L_00600bc0:; BB(0x00600bc0);
    /* 00600bc0: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600bc6: cmp dword ptr [edx + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600bca: je 0x600c0f */ if (fZ) goto L_00600c0f;
L_00600bcc:; BB(0x00600bcc);
    /* 00600bcc: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00600bd2: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00600bd5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00600bd8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00600bdb: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00600bde: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600be2: je 0x600bf8 */ if (fZ) goto L_00600bf8;
L_00600be4:; BB(0x00600be4);
    /* 00600be4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600be6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00600be9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600beb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00600bee: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x600bf0u); call_ind(t); }
    /* 00600bf0: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00600bf6: jmp 0x600c02 */ goto L_00600c02;
L_00600bf8:; BB(0x00600bf8);
    /* 00600bf8: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_00600c02:; BB(0x00600c02);
    /* 00600c02: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00600c08: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
L_00600c0f:; BB(0x00600c0f);
    /* 00600c0f: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600c15: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600c19: je 0x600c5e */ if (fZ) goto L_00600c5e;
L_00600c1b:; BB(0x00600c1b);
    /* 00600c1b: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600c21: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00600c24: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00600c27: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00600c2a: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00600c2d: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600c31: je 0x600c47 */ if (fZ) goto L_00600c47;
L_00600c33:; BB(0x00600c33);
    /* 00600c33: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600c35: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00600c38: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00600c3a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00600c3d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x600c3fu); call_ind(t); }
    /* 00600c3f: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00600c45: jmp 0x600c51 */ goto L_00600c51;
L_00600c47:; BB(0x00600c47);
    /* 00600c47: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_00600c51:; BB(0x00600c51);
    /* 00600c51: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600c57: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
L_00600c5e:; BB(0x00600c5e);
    /* 00600c5e: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600c64: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600c68: je 0x600cad */ if (fZ) goto L_00600cad;
L_00600c6a:; BB(0x00600c6a);
    /* 00600c6a: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00600c70: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00600c73: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00600c76: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00600c79: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00600c7c: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600c80: je 0x600c96 */ if (fZ) goto L_00600c96;
L_00600c82:; BB(0x00600c82);
    /* 00600c82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600c84: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00600c87: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600c89: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00600c8c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x600c8eu); call_ind(t); }
    /* 00600c8e: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00600c94: jmp 0x600ca0 */ goto L_00600ca0;
L_00600c96:; BB(0x00600c96);
    /* 00600c96: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_00600ca0:; BB(0x00600ca0);
    /* 00600ca0: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00600ca6: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_00600cad:; BB(0x00600cad);
    /* 00600cad: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600cb3: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600cb7: je 0x600cfc */ if (fZ) goto L_00600cfc;
L_00600cb9:; BB(0x00600cb9);
    /* 00600cb9: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600cbf: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00600cc2: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00600cc5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00600cc8: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00600ccb: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600ccf: je 0x600ce5 */ if (fZ) goto L_00600ce5;
L_00600cd1:; BB(0x00600cd1);
    /* 00600cd1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600cd3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00600cd6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00600cd8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00600cdb: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x600cddu); call_ind(t); }
    /* 00600cdd: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00600ce3: jmp 0x600cef */ goto L_00600cef;
L_00600ce5:; BB(0x00600ce5);
    /* 00600ce5: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_00600cef:; BB(0x00600cef);
    /* 00600cef: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600cf5: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
L_00600cfc:; BB(0x00600cfc);
    /* 00600cfc: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600d02: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600d06: je 0x600d4b */ if (fZ) goto L_00600d4b;
L_00600d08:; BB(0x00600d08);
    /* 00600d08: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00600d0e: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00600d11: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00600d14: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00600d17: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00600d1a: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600d1e: je 0x600d34 */ if (fZ) goto L_00600d34;
L_00600d20:; BB(0x00600d20);
    /* 00600d20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600d22: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00600d25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600d27: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00600d2a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x600d2cu); call_ind(t); }
    /* 00600d2c: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00600d32: jmp 0x600d3e */ goto L_00600d3e;
L_00600d34:; BB(0x00600d34);
    /* 00600d34: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_00600d3e:; BB(0x00600d3e);
    /* 00600d3e: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00600d44: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_00600d4b:; BB(0x00600d4b);
    /* 00600d4b: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600d51: cmp dword ptr [ecx + 0x38], 0 */ {  u32 a = R32((u32)(r_ecx+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600d55: je 0x600d9a */ if (fZ) goto L_00600d9a;
L_00600d57:; BB(0x00600d57);
    /* 00600d57: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600d5d: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00600d60: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00600d63: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00600d66: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00600d69: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600d6d: je 0x600d83 */ if (fZ) goto L_00600d83;
L_00600d6f:; BB(0x00600d6f);
    /* 00600d6f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600d71: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00600d74: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00600d76: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00600d79: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x600d7bu); call_ind(t); }
    /* 00600d7b: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00600d81: jmp 0x600d8d */ goto L_00600d8d;
L_00600d83:; BB(0x00600d83);
    /* 00600d83: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_00600d8d:; BB(0x00600d8d);
    /* 00600d8d: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600d93: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_00600d9a:; BB(0x00600d9a);
    /* 00600d9a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00600da0: jmp 0x600dae */ goto L_00600dae;
L_00600da2:; BB(0x00600da2);
    /* 00600da2: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00600da6: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00600daa: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00600dae:; BB(0x00600dae);
    /* 00600dae: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600db2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00600db5: jge 0x600e17 */ if ((fS==fO)) goto L_00600e17;
L_00600db7:; BB(0x00600db7);
    /* 00600db7: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600dbb: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600dc1: cmp dword ptr [edx + ecx*4 + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600dc6: je 0x600e15 */ if (fZ) goto L_00600e15;
L_00600dc8:; BB(0x00600dc8);
    /* 00600dc8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600dcc: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600dd2: mov edx, dword ptr [ecx + eax*4 + 0x2c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x2cu));
    /* 00600dd6: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00600dd9: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00600ddc: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00600ddf: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600de3: je 0x600df9 */ if (fZ) goto L_00600df9;
L_00600de5:; BB(0x00600de5);
    /* 00600de5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600de7: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00600dea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00600dec: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00600def: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x600df1u); call_ind(t); }
    /* 00600df1: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00600df7: jmp 0x600e03 */ goto L_00600e03;
L_00600df9:; BB(0x00600df9);
    /* 00600df9: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_00600e03:; BB(0x00600e03);
    /* 00600e03: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600e07: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600e0d: mov dword ptr [ecx + eax*4 + 0x2c], 0 */ W32((u32)(r_ecx+r_eax*4+0x2cu), 0x0u);
L_00600e15:; BB(0x00600e15);
    /* 00600e15: jmp 0x600da2 */ goto L_00600da2;
L_00600e17:; BB(0x00600e17);
    /* 00600e17: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00600e1d: jmp 0x600e2b */ goto L_00600e2b;
L_00600e1f:; BB(0x00600e1f);
    /* 00600e1f: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00600e23: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00600e27: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00600e2b:; BB(0x00600e2b);
    /* 00600e2b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600e2f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00600e32: jge 0x600e94 */ if ((fS==fO)) goto L_00600e94;
L_00600e34:; BB(0x00600e34);
    /* 00600e34: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600e38: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600e3e: cmp dword ptr [edx + ecx*4 + 0x48], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600e43: je 0x600e92 */ if (fZ) goto L_00600e92;
L_00600e45:; BB(0x00600e45);
    /* 00600e45: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600e49: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600e4f: mov edx, dword ptr [ecx + eax*4 + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 00600e53: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00600e56: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00600e59: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00600e5c: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600e60: je 0x600e76 */ if (fZ) goto L_00600e76;
L_00600e62:; BB(0x00600e62);
    /* 00600e62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600e64: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00600e67: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00600e69: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00600e6c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x600e6eu); call_ind(t); }
    /* 00600e6e: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00600e74: jmp 0x600e80 */ goto L_00600e80;
L_00600e76:; BB(0x00600e76);
    /* 00600e76: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_00600e80:; BB(0x00600e80);
    /* 00600e80: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600e84: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600e8a: mov dword ptr [ecx + eax*4 + 0x48], 0 */ W32((u32)(r_ecx+r_eax*4+0x48u), 0x0u);
L_00600e92:; BB(0x00600e92);
    /* 00600e92: jmp 0x600e1f */ goto L_00600e1f;
L_00600e94:; BB(0x00600e94);
    /* 00600e94: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00600e9a: jmp 0x600ea8 */ goto L_00600ea8;
L_00600e9c:; BB(0x00600e9c);
    /* 00600e9c: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00600ea0: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00600ea4: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00600ea8:; BB(0x00600ea8);
    /* 00600ea8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600eac: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00600eaf: jge 0x600f11 */ if ((fS==fO)) goto L_00600f11;
L_00600eb1:; BB(0x00600eb1);
    /* 00600eb1: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600eb5: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600ebb: cmp dword ptr [edx + ecx*4 + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600ec0: je 0x600f0f */ if (fZ) goto L_00600f0f;
L_00600ec2:; BB(0x00600ec2);
    /* 00600ec2: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600ec6: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600ecc: mov edx, dword ptr [ecx + eax*4 + 0x3c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 00600ed0: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00600ed3: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00600ed6: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00600ed9: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600edd: je 0x600ef3 */ if (fZ) goto L_00600ef3;
L_00600edf:; BB(0x00600edf);
    /* 00600edf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600ee1: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00600ee4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00600ee6: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00600ee9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x600eebu); call_ind(t); }
    /* 00600eeb: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00600ef1: jmp 0x600efd */ goto L_00600efd;
L_00600ef3:; BB(0x00600ef3);
    /* 00600ef3: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_00600efd:; BB(0x00600efd);
    /* 00600efd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00600f01: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600f07: mov dword ptr [ecx + eax*4 + 0x3c], 0 */ W32((u32)(r_ecx+r_eax*4+0x3cu), 0x0u);
L_00600f0f:; BB(0x00600f0f);
    /* 00600f0f: jmp 0x600e9c */ goto L_00600e9c;
L_00600f11:; BB(0x00600f11);
    /* 00600f11: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600f17: cmp dword ptr [edx + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600f1b: je 0x600f60 */ if (fZ) goto L_00600f60;
L_00600f1d:; BB(0x00600f1d);
    /* 00600f1d: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00600f23: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00600f26: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00600f29: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00600f2c: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00600f2f: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600f33: je 0x600f49 */ if (fZ) goto L_00600f49;
L_00600f35:; BB(0x00600f35);
    /* 00600f35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600f37: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00600f3a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600f3c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00600f3f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x600f41u); call_ind(t); }
    /* 00600f41: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00600f47: jmp 0x600f53 */ goto L_00600f53;
L_00600f49:; BB(0x00600f49);
    /* 00600f49: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_00600f53:; BB(0x00600f53);
    /* 00600f53: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00600f59: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
L_00600f60:; BB(0x00600f60);
    /* 00600f60: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600f66: cmp dword ptr [ecx + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600f6a: je 0x600faf */ if (fZ) goto L_00600faf;
L_00600f6c:; BB(0x00600f6c);
    /* 00600f6c: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600f72: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 00600f75: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00600f78: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00600f7b: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00600f7e: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600f82: je 0x600f98 */ if (fZ) goto L_00600f98;
L_00600f84:; BB(0x00600f84);
    /* 00600f84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600f86: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00600f89: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00600f8b: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00600f8e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x600f90u); call_ind(t); }
    /* 00600f90: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00600f96: jmp 0x600fa2 */ goto L_00600fa2;
L_00600f98:; BB(0x00600f98);
    /* 00600f98: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_00600fa2:; BB(0x00600fa2);
    /* 00600fa2: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600fa8: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
L_00600faf:; BB(0x00600faf);
    /* 00600faf: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00600fb5: cmp dword ptr [edx + 0x64], 0 */ {  u32 a = R32((u32)(r_edx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600fb9: je 0x600ffe */ if (fZ) goto L_00600ffe;
L_00600fbb:; BB(0x00600fbb);
    /* 00600fbb: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00600fc1: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00600fc4: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 00600fc7: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00600fca: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 00600fcd: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600fd1: je 0x600fe7 */ if (fZ) goto L_00600fe7;
L_00600fd3:; BB(0x00600fd3);
    /* 00600fd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600fd5: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00600fd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600fda: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00600fdd: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x600fdfu); call_ind(t); }
    /* 00600fdf: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00600fe5: jmp 0x600ff1 */ goto L_00600ff1;
L_00600fe7:; BB(0x00600fe7);
    /* 00600fe7: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_00600ff1:; BB(0x00600ff1);
    /* 00600ff1: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00600ff7: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
L_00600ffe:; BB(0x00600ffe);
    /* 00600ffe: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00601004: cmp dword ptr [ecx + 0x68], 0 */ {  u32 a = R32((u32)(r_ecx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601008: je 0x601053 */ if (fZ) goto L_00601053;
L_0060100a:; BB(0x0060100a);
    /* 0060100a: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00601010: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 00601013: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00601019: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0060101f: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 00601022: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601026: je 0x60103c */ if (fZ) goto L_0060103c;
L_00601028:; BB(0x00601028);
    /* 00601028: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060102a: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0060102d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060102f: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00601032: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x601034u); call_ind(t); }
    /* 00601034: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0060103a: jmp 0x601046 */ goto L_00601046;
L_0060103c:; BB(0x0060103c);
    /* 0060103c: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_00601046:; BB(0x00601046);
    /* 00601046: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0060104c: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
L_00601053:; BB(0x00601053);
    /* 00601053: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00601059: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060105d: je 0x6010b4 */ if (fZ) goto L_006010b4;
L_0060105f:; BB(0x0060105f);
    /* 0060105f: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00601065: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00601068: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 0060106e: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00601074: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0060107a: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601081: je 0x60109d */ if (fZ) goto L_0060109d;
L_00601083:; BB(0x00601083);
    /* 00601083: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00601085: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0060108b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060108d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00601093: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x601095u); call_ind(t); }
    /* 00601095: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0060109b: jmp 0x6010a7 */ goto L_006010a7;
L_0060109d:; BB(0x0060109d);
    /* 0060109d: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_006010a7:; BB(0x006010a7);
    /* 006010a7: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 006010ad: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
L_006010b4:; BB(0x006010b4);
    /* 006010b4: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 006010ba: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x6010bfu); f_005dfc0f();
    /* 006010bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006010c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006010c2: ret  */ FN_RET(0x00600ab8); r_esp += 4; return;
}

void f_006010c3(void) /* FUN_006010c3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006010c3);
    /* 006010c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006010c4: mov ebp, esp */ r_ebp = r_esp;
    /* 006010c6: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006010cc: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 006010cf: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006010d2: call 0x601d1a */ r_esp -= 4; W32(r_esp, 0x6010d7u); f_00601d1a();
    /* 006010d7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006010da: call 0x601d6e */ r_esp -= 4; W32(r_esp, 0x6010dfu); f_00601d6e();
    /* 006010df: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006010e2: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 006010e9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006010ec: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 006010f3: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006010f6: mov dword ptr [edx + 0x80], 0xffffffff */ W32((u32)(r_edx+0x80u), 0xffffffffu);
    /* 00601100: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601103: mov dword ptr [eax + 0x6c], 1 */ W32((u32)(r_eax+0x6cu), 0x1u);
    /* 0060110a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060110d: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601111: jne 0x601143 */ if (!fZ) goto L_00601143;
L_00601113:; BB(0x00601113);
    /* 00601113: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00601115: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x60111au); f_0048ab58();
    /* 0060111a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060111d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00601120: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601124: je 0x601133 */ if (fZ) goto L_00601133;
L_00601126:; BB(0x00601126);
    /* 00601126: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601129: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x60112eu); f_005e9d30();
    /* 0060112e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00601131: jmp 0x60113a */ goto L_0060113a;
L_00601133:; BB(0x00601133);
    /* 00601133: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0060113a:; BB(0x0060113a);
    /* 0060113a: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060113d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00601140: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
L_00601143:; BB(0x00601143);
    /* 00601143: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601145: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601147: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060114a: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0060114d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601150: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00601153: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601155: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x601158u); call_ind(t); }
    /* 00601158: push 0x16021 */ { u32 v = 0x16021u; r_esp -= 4; W32(r_esp, v); }
    /* 0060115d: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601160: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00601163: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x601168u); f_005ea0c3();
    /* 00601168: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060116a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060116d: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00601170: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x601175u); f_005ea1cf();
    /* 00601175: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601178: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0060117b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060117e: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00601181: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601183: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x601186u); call_ind(t); }
    /* 00601186: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00601188: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060118b: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0060118e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601191: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00601194: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601196: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x601199u); call_ind(t); }
    /* 00601199: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060119c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0060119f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006011a2: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 006011a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006011a7: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6011aau); call_ind(t); }
    /* 006011aa: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006011ad: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006011b1: jne 0x6011e3 */ if (!fZ) goto L_006011e3;
L_006011b3:; BB(0x006011b3);
    /* 006011b3: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 006011b5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6011bau); f_0048ab58();
    /* 006011ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006011bd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006011c0: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006011c4: je 0x6011d3 */ if (fZ) goto L_006011d3;
L_006011c6:; BB(0x006011c6);
    /* 006011c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006011c9: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x6011ceu); f_005e3fb0();
    /* 006011ce: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006011d1: jmp 0x6011da */ goto L_006011da;
L_006011d3:; BB(0x006011d3);
    /* 006011d3: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_006011da:; BB(0x006011da);
    /* 006011da: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006011dd: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006011e0: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
L_006011e3:; BB(0x006011e3);
    /* 006011e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006011e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006011e7: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006011ea: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006011ed: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006011f0: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 006011f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006011f5: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x6011f8u); call_ind(t); }
    /* 006011f8: push 0x16020 */ { u32 v = 0x16020u; r_esp -= 4; W32(r_esp, v); }
    /* 006011fd: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601200: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00601203: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x601208u); f_005ea0c3();
    /* 00601208: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060120b: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0060120e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601211: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00601214: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601216: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x601219u); call_ind(t); }
    /* 00601219: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0060121b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060121e: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00601221: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601224: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00601227: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601229: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x60122cu); call_ind(t); }
    /* 0060122c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060122f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00601232: mov dword ptr [ecx + 0x6c], 6 */ W32((u32)(r_ecx+0x6cu), 0x6u);
    /* 00601239: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060123b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x601240u); f_0048ab58();
    /* 00601240: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601243: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00601246: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060124a: je 0x60125b */ if (fZ) goto L_0060125b;
L_0060124c:; BB(0x0060124c);
    /* 0060124c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060124e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00601251: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x601256u); f_005d7698();
    /* 00601256: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00601259: jmp 0x601262 */ goto L_00601262;
L_0060125b:; BB(0x0060125b);
    /* 0060125b: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00601262:; BB(0x00601262);
    /* 00601262: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00601265: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00601266: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601269: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0060126c: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x601271u); f_005e4060();
    /* 00601271: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601274: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00601277: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060127a: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0060127d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060127f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x601282u); call_ind(t); }
    /* 00601282: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601285: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601289: jne 0x6012bb */ if (!fZ) goto L_006012bb;
L_0060128b:; BB(0x0060128b);
    /* 0060128b: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060128d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x601292u); f_0048ab58();
    /* 00601292: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601295: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00601298: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060129c: je 0x6012ab */ if (fZ) goto L_006012ab;
L_0060129e:; BB(0x0060129e);
    /* 0060129e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006012a1: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x6012a6u); f_005e9d30();
    /* 006012a6: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006012a9: jmp 0x6012b2 */ goto L_006012b2;
L_006012ab:; BB(0x006012ab);
    /* 006012ab: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_006012b2:; BB(0x006012b2);
    /* 006012b2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006012b5: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006012b8: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
L_006012bb:; BB(0x006012bb);
    /* 006012bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006012bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006012bf: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006012c2: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006012c5: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006012c8: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006012cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006012cd: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x6012d0u); call_ind(t); }
    /* 006012d0: push 0x1602c */ { u32 v = 0x1602cu; r_esp -= 4; W32(r_esp, v); }
    /* 006012d5: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006012d8: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006012db: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x6012e0u); f_005ea0c3();
    /* 006012e0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006012e3: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 006012e6: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006012e9: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006012ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006012ee: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x6012f1u); call_ind(t); }
    /* 006012f1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006012f3: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006012f6: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006012f9: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006012fc: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006012ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601301: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x601304u); call_ind(t); }
    /* 00601304: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601307: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0060130a: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060130d: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00601310: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601312: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x601315u); call_ind(t); }
    /* 00601315: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060131b: jmp 0x601329 */ goto L_00601329;
L_0060131d:; BB(0x0060131d);
    /* 0060131d: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00601321: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00601325: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00601329:; BB(0x00601329);
    /* 00601329: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060132d: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601330: jge 0x6014cb */ if ((fS==fO)) goto L_006014cb;
L_00601336:; BB(0x00601336);
    /* 00601336: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060133a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060133d: cmp dword ptr [eax + edx*4 + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601342: jne 0x601381 */ if (!fZ) goto L_00601381;
L_00601344:; BB(0x00601344);
    /* 00601344: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601349: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x60134eu); f_0048ab58();
    /* 0060134e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601351: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00601354: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601358: je 0x60136c */ if (fZ) goto L_0060136c;
L_0060135a:; BB(0x0060135a);
    /* 0060135a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060135e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060135f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601362: call 0x603795 */ r_esp -= 4; W32(r_esp, 0x601367u); f_00603795();
    /* 00601367: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0060136a: jmp 0x601373 */ goto L_00601373;
L_0060136c:; BB(0x0060136c);
    /* 0060136c: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00601373:; BB(0x00601373);
    /* 00601373: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601377: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060137a: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0060137d: mov dword ptr [eax + edx*4 + 0x48], ecx */ W32((u32)(r_eax+r_edx*4+0x48u), r_ecx);
L_00601381:; BB(0x00601381);
    /* 00601381: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601383: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601385: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601389: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060138c: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 00601390: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601394: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601397: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 0060139b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060139d: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x6013a0u); call_ind(t); }
    /* 006013a0: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006013a4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006013a6: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006013a9: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 006013ac: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006013ad: and edx, 0xffffffe1 */ {  u32 a = r_edx; u32 b = 0xffffffe1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006013b0: add edx, 0x16041 */ {  u32 a = r_edx; u32 b = 0x16041u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006013b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006013b7: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006013bb: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006013be: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 006013c2: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006013c6: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006013c9: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 006013cd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006013cf: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x6013d2u); call_ind(t); }
    /* 006013d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006013d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006013d6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006013da: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006013dd: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 006013e1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006013e5: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006013e8: mov eax, dword ptr [edx + eax*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_eax*4+0x48u));
    /* 006013ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006013ee: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x6013f1u); call_ind(t); }
    /* 006013f1: push 0x5dc */ { u32 v = 0x5dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006013f6: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006013fa: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006013fd: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 00601401: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601405: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601408: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 0060140c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060140e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x601411u); call_ind(t); }
    /* 00601411: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601415: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601418: jge 0x601452 */ if ((fS==fO)) goto L_00601452;
L_0060141a:; BB(0x0060141a);
    /* 0060141a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060141e: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601421: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00601424: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00601425: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601429: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060142c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060142d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601431: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601434: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00601437: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601438: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060143c: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060143f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00601440: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601444: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601447: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 0060144b: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x601450u); f_005d5ff2();
    /* 00601450: jmp 0x60146a */ goto L_0060146a;
L_00601452:; BB(0x00601452);
    /* 00601452: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00601454: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601456: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00601458: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060145a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060145e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601461: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 00601465: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x60146au); f_005d5ff2();
L_0060146a:; BB(0x0060146a);
    /* 0060146a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060146e: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601471: jge 0x601490 */ if ((fS==fO)) goto L_00601490;
L_00601473:; BB(0x00601473);
    /* 00601473: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601477: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060147a: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 0060147e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601482: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601485: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 00601489: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060148b: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x60148eu); call_ind(t); }
    /* 0060148e: jmp 0x6014ab */ goto L_006014ab;
L_00601490:; BB(0x00601490);
    /* 00601490: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601494: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601497: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 0060149b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060149f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006014a2: mov eax, dword ptr [edx + eax*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_eax*4+0x48u));
    /* 006014a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006014a8: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x6014abu); call_ind(t); }
L_006014ab:; BB(0x006014ab);
    /* 006014ab: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006014af: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006014b2: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 006014b6: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006014ba: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006014bd: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 006014c1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006014c3: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6014c6u); call_ind(t); }
    /* 006014c6: jmp 0x60131d */ goto L_0060131d;
L_006014cb:; BB(0x006014cb);
    /* 006014cb: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006014ce: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006014d2: jne 0x601507 */ if (!fZ) goto L_00601507;
L_006014d4:; BB(0x006014d4);
    /* 006014d4: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 006014d9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6014deu); f_0048ab58();
    /* 006014de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006014e1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006014e4: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006014e8: je 0x6014f7 */ if (fZ) goto L_006014f7;
L_006014ea:; BB(0x006014ea);
    /* 006014ea: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006014ed: call 0x6039f9 */ r_esp -= 4; W32(r_esp, 0x6014f2u); f_006039f9();
    /* 006014f2: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006014f5: jmp 0x6014fe */ goto L_006014fe;
L_006014f7:; BB(0x006014f7);
    /* 006014f7: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_006014fe:; BB(0x006014fe);
    /* 006014fe: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601501: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00601504: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
L_00601507:; BB(0x00601507);
    /* 00601507: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601509: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060150b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060150e: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00601511: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601514: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00601517: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601519: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x60151cu); call_ind(t); }
    /* 0060151c: push 0x16042 */ { u32 v = 0x16042u; r_esp -= 4; W32(r_esp, v); }
    /* 00601521: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601524: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00601527: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060152a: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0060152d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060152f: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x601532u); call_ind(t); }
    /* 00601532: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601534: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601536: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601539: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0060153c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060153f: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00601542: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601544: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x601547u); call_ind(t); }
    /* 00601547: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00601549: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060154c: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0060154f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601552: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00601555: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601557: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x60155au); call_ind(t); }
    /* 0060155a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060155d: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00601560: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601563: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00601566: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601568: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x60156bu); call_ind(t); }
    /* 0060156b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060156e: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00601571: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601574: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00601577: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601579: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x60157cu); call_ind(t); }
    /* 0060157c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060157f: cmp dword ptr [eax + 0x60], 0 */ {  u32 a = R32((u32)(r_eax+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601583: jne 0x6015ba */ if (!fZ) goto L_006015ba;
L_00601585:; BB(0x00601585);
    /* 00601585: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 0060158a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x60158fu); f_0048ab58();
    /* 0060158f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601592: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00601595: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601599: je 0x6015aa */ if (fZ) goto L_006015aa;
L_0060159b:; BB(0x0060159b);
    /* 0060159b: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0060159d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006015a0: call 0x603a4a */ r_esp -= 4; W32(r_esp, 0x6015a5u); f_00603a4a();
    /* 006015a5: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 006015a8: jmp 0x6015b1 */ goto L_006015b1;
L_006015aa:; BB(0x006015aa);
    /* 006015aa: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_006015b1:; BB(0x006015b1);
    /* 006015b1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006015b4: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006015b7: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
L_006015ba:; BB(0x006015ba);
    /* 006015ba: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006015bd: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 006015c0: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006015c3: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 006015c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006015c8: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x6015cbu); call_ind(t); }
    /* 006015cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006015cd: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006015d0: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 006015d3: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x6015d8u); f_005ea0c3();
    /* 006015d8: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 006015da: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006015dc: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006015df: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 006015e2: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006015e5: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 006015e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006015ea: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x6015edu); call_ind(t); }
    /* 006015ed: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006015ef: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006015f2: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 006015f5: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006015f8: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 006015fb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006015fd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x601600u); call_ind(t); }
    /* 00601600: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601603: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00601606: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601609: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0060160c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060160e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x601611u); call_ind(t); }
    /* 00601611: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601614: cmp dword ptr [eax + 0x64], 0 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601618: jne 0x60164f */ if (!fZ) goto L_0060164f;
L_0060161a:; BB(0x0060161a);
    /* 0060161a: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 0060161f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x601624u); f_0048ab58();
    /* 00601624: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601627: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060162a: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060162e: je 0x60163f */ if (fZ) goto L_0060163f;
L_00601630:; BB(0x00601630);
    /* 00601630: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00601632: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00601635: call 0x603a4a */ r_esp -= 4; W32(r_esp, 0x60163au); f_00603a4a();
    /* 0060163a: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0060163d: jmp 0x601646 */ goto L_00601646;
L_0060163f:; BB(0x0060163f);
    /* 0060163f: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00601646:; BB(0x00601646);
    /* 00601646: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601649: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0060164c: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
L_0060164f:; BB(0x0060164f);
    /* 0060164f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601652: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00601655: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601658: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0060165b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060165d: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x601660u); call_ind(t); }
    /* 00601660: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601662: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601665: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00601668: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x60166du); f_005ea0c3();
    /* 0060166d: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 00601672: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00601674: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601677: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0060167a: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060167d: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00601680: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601682: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x601685u); call_ind(t); }
    /* 00601685: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00601687: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060168a: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0060168d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601690: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00601693: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601695: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x601698u); call_ind(t); }
    /* 00601698: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060169b: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0060169e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006016a1: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 006016a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006016a6: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6016a9u); call_ind(t); }
    /* 006016a9: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006016ac: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006016b0: jne 0x6016e7 */ if (!fZ) goto L_006016e7;
L_006016b2:; BB(0x006016b2);
    /* 006016b2: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 006016b7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6016bcu); f_0048ab58();
    /* 006016bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006016bf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006016c2: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006016c6: je 0x6016d7 */ if (fZ) goto L_006016d7;
L_006016c8:; BB(0x006016c8);
    /* 006016c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006016ca: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006016cd: call 0x603a4a */ r_esp -= 4; W32(r_esp, 0x6016d2u); f_00603a4a();
    /* 006016d2: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 006016d5: jmp 0x6016de */ goto L_006016de;
L_006016d7:; BB(0x006016d7);
    /* 006016d7: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_006016de:; BB(0x006016de);
    /* 006016de: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006016e1: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 006016e4: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
L_006016e7:; BB(0x006016e7);
    /* 006016e7: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006016ea: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 006016ed: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006016f0: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 006016f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006016f5: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x6016f8u); call_ind(t); }
    /* 006016f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006016fa: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006016fd: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00601700: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x601705u); f_005ea0c3();
    /* 00601705: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 0060170a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0060170c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060170f: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 00601712: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601715: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 00601718: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060171a: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x60171du); call_ind(t); }
    /* 0060171d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0060171f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601722: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00601725: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601728: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0060172b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060172d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x601730u); call_ind(t); }
    /* 00601730: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601733: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00601736: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601739: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0060173c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060173e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x601741u); call_ind(t); }
    /* 00601741: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00601747: jmp 0x601755 */ goto L_00601755;
L_00601749:; BB(0x00601749);
    /* 00601749: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0060174d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00601751: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00601755:; BB(0x00601755);
    /* 00601755: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601759: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060175c: jge 0x601887 */ if ((fS==fO)) goto L_00601887;
L_00601762:; BB(0x00601762);
    /* 00601762: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601766: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601769: cmp dword ptr [eax + edx*4 + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060176e: jne 0x6017b1 */ if (!fZ) goto L_006017b1;
L_00601770:; BB(0x00601770);
    /* 00601770: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00601772: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x601777u); f_0048ab58();
    /* 00601777: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060177a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060177d: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601781: je 0x60179c */ if (fZ) goto L_0060179c;
L_00601783:; BB(0x00601783);
    /* 00601783: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00601786: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x60178bu); f_005e3fb0();
    /* 0060178b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060178e: mov dword ptr [ecx], 0x63c54c */ W32((u32)(r_ecx), 0x63c54cu);
    /* 00601794: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00601797: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0060179a: jmp 0x6017a3 */ goto L_006017a3;
L_0060179c:; BB(0x0060179c);
    /* 0060179c: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_006017a3:; BB(0x006017a3);
    /* 006017a3: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006017a7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006017aa: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 006017ad: mov dword ptr [ecx + eax*4 + 0x3c], edx */ W32((u32)(r_ecx+r_eax*4+0x3cu), r_edx);
L_006017b1:; BB(0x006017b1);
    /* 006017b1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006017b5: mov ecx, dword ptr [eax*8 + 0x69c4a4] */ r_ecx = R32((u32)(r_eax*8+0x69c4a4u));
    /* 006017bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006017bd: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006017c1: mov eax, dword ptr [edx*8 + 0x69c4a0] */ r_eax = R32((u32)(r_edx*8+0x69c4a0u));
    /* 006017c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006017c9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006017cd: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006017d0: mov ecx, dword ptr [edx + ecx*4 + 0x3c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x3cu));
    /* 006017d4: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006017d8: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006017db: mov eax, dword ptr [edx + eax*4 + 0x3c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x3cu));
    /* 006017df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006017e1: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x6017e4u); call_ind(t); }
    /* 006017e4: push 0x16024 */ { u32 v = 0x16024u; r_esp -= 4; W32(r_esp, v); }
    /* 006017e9: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006017ed: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006017f0: mov ecx, dword ptr [ecx + eax*4 + 0x3c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 006017f4: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x6017f9u); f_005ea0c3();
    /* 006017f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006017fb: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006017ff: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601802: mov ecx, dword ptr [eax + edx*4 + 0x3c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 00601806: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x60180bu); f_005ea1cf();
    /* 0060180b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060180f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601812: mov ecx, dword ptr [edx + ecx*4 + 0x3c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x3cu));
    /* 00601816: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060181a: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060181d: mov eax, dword ptr [edx + eax*4 + 0x3c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x3cu));
    /* 00601821: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601823: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x601826u); call_ind(t); }
    /* 00601826: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00601828: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060182c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060182f: mov ecx, dword ptr [ecx + eax*4 + 0x3c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 00601833: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601837: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060183a: mov edx, dword ptr [eax + edx*4 + 0x3c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 0060183e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601840: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x601843u); call_ind(t); }
    /* 00601843: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601847: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060184a: mov eax, dword ptr [edx + ecx*4 + 0x3c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3cu));
    /* 0060184e: mov dword ptr [eax + 0x6c], 2 */ W32((u32)(r_eax+0x6cu), 0x2u);
    /* 00601855: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601857: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060185b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060185e: mov ecx, dword ptr [edx + ecx*4 + 0x3c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x3cu));
    /* 00601862: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x601867u); f_005ea454();
    /* 00601867: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060186b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060186e: mov ecx, dword ptr [ecx + eax*4 + 0x3c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 00601872: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601876: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601879: mov edx, dword ptr [eax + edx*4 + 0x3c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 0060187d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060187f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x601882u); call_ind(t); }
    /* 00601882: jmp 0x601749 */ goto L_00601749;
L_00601887:; BB(0x00601887);
    /* 00601887: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060188a: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060188e: jne 0x6018c0 */ if (!fZ) goto L_006018c0;
L_00601890:; BB(0x00601890);
    /* 00601890: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00601892: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x601897u); f_0048ab58();
    /* 00601897: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060189a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0060189d: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006018a1: je 0x6018b0 */ if (fZ) goto L_006018b0;
L_006018a3:; BB(0x006018a3);
    /* 006018a3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006018a6: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x6018abu); f_005e3fb0();
    /* 006018ab: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 006018ae: jmp 0x6018b7 */ goto L_006018b7;
L_006018b0:; BB(0x006018b0);
    /* 006018b0: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_006018b7:; BB(0x006018b7);
    /* 006018b7: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006018ba: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 006018bd: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
L_006018c0:; BB(0x006018c0);
    /* 006018c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006018c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006018c4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006018c7: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 006018ca: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006018cd: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006018d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006018d2: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x6018d5u); call_ind(t); }
    /* 006018d5: push 0x16025 */ { u32 v = 0x16025u; r_esp -= 4; W32(r_esp, v); }
    /* 006018da: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006018dd: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006018e0: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x6018e5u); f_005ea0c3();
    /* 006018e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006018e7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006018ea: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 006018ed: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x6018f2u); f_005ea1cf();
    /* 006018f2: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006018f5: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 006018f8: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006018fb: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006018fe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601900: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x601903u); call_ind(t); }
    /* 00601903: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00601905: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601908: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0060190b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060190e: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00601911: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601913: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x601916u); call_ind(t); }
    /* 00601916: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601919: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0060191c: mov dword ptr [ecx + 0x6c], 4 */ W32((u32)(r_ecx+0x6cu), 0x4u);
    /* 00601923: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601926: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00601929: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060192c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0060192f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601931: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x601934u); call_ind(t); }
    /* 00601934: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601937: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060193b: jne 0x60196d */ if (!fZ) goto L_0060196d;
L_0060193d:; BB(0x0060193d);
    /* 0060193d: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0060193f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x601944u); f_0048ab58();
    /* 00601944: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601947: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0060194a: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060194e: je 0x60195d */ if (fZ) goto L_0060195d;
L_00601950:; BB(0x00601950);
    /* 00601950: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00601953: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x601958u); f_005e3fb0();
    /* 00601958: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0060195b: jmp 0x601964 */ goto L_00601964;
L_0060195d:; BB(0x0060195d);
    /* 0060195d: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00601964:; BB(0x00601964);
    /* 00601964: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601967: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0060196a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
L_0060196d:; BB(0x0060196d);
    /* 0060196d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060196f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601971: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601974: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00601977: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060197a: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0060197d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060197f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x601982u); call_ind(t); }
    /* 00601982: push 0x16027 */ { u32 v = 0x16027u; r_esp -= 4; W32(r_esp, v); }
    /* 00601987: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060198a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0060198d: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x601992u); f_005ea0c3();
    /* 00601992: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601994: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601997: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0060199a: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x60199fu); f_005ea1cf();
    /* 0060199f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006019a2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 006019a5: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006019a8: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006019ab: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006019ad: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x6019b0u); call_ind(t); }
    /* 006019b0: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006019b2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006019b5: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 006019b8: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006019bb: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006019be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006019c0: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6019c3u); call_ind(t); }
    /* 006019c3: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006019c6: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006019c9: mov dword ptr [ecx + 0x6c], 4 */ W32((u32)(r_ecx+0x6cu), 0x4u);
    /* 006019d0: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006019d3: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 006019d6: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006019d9: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006019dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006019de: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6019e1u); call_ind(t); }
    /* 006019e1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006019e4: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006019e8: jne 0x601a1a */ if (!fZ) goto L_00601a1a;
L_006019ea:; BB(0x006019ea);
    /* 006019ea: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006019ec: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6019f1u); f_0048ab58();
    /* 006019f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006019f4: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006019f7: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006019fb: je 0x601a0a */ if (fZ) goto L_00601a0a;
L_006019fd:; BB(0x006019fd);
    /* 006019fd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00601a00: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x601a05u); f_005e9d30();
    /* 00601a05: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00601a08: jmp 0x601a11 */ goto L_00601a11;
L_00601a0a:; BB(0x00601a0a);
    /* 00601a0a: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00601a11:; BB(0x00601a11);
    /* 00601a11: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601a14: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00601a17: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
L_00601a1a:; BB(0x00601a1a);
    /* 00601a1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601a1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601a1e: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601a21: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00601a24: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601a27: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00601a2a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601a2c: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x601a2fu); call_ind(t); }
    /* 00601a2f: push 0x16028 */ { u32 v = 0x16028u; r_esp -= 4; W32(r_esp, v); }
    /* 00601a34: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601a37: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00601a3a: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x601a3fu); f_005ea0c3();
    /* 00601a3f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601a42: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00601a45: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601a48: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00601a4b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601a4d: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x601a50u); call_ind(t); }
    /* 00601a50: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00601a52: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601a55: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00601a58: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601a5b: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00601a5e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601a60: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x601a63u); call_ind(t); }
    /* 00601a63: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601a66: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00601a69: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601a6c: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00601a6f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601a71: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x601a74u); call_ind(t); }
    /* 00601a74: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601a77: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601a7b: jne 0x601aad */ if (!fZ) goto L_00601aad;
L_00601a7d:; BB(0x00601a7d);
    /* 00601a7d: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00601a7f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x601a84u); f_0048ab58();
    /* 00601a84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601a87: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00601a8a: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601a8e: je 0x601a9d */ if (fZ) goto L_00601a9d;
L_00601a90:; BB(0x00601a90);
    /* 00601a90: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00601a93: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x601a98u); f_005e9d30();
    /* 00601a98: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00601a9b: jmp 0x601aa4 */ goto L_00601aa4;
L_00601a9d:; BB(0x00601a9d);
    /* 00601a9d: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00601aa4:; BB(0x00601aa4);
    /* 00601aa4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601aa7: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00601aaa: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
L_00601aad:; BB(0x00601aad);
    /* 00601aad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601aaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601ab1: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601ab4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00601ab7: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601aba: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00601abd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601abf: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x601ac2u); call_ind(t); }
    /* 00601ac2: push 0x16029 */ { u32 v = 0x16029u; r_esp -= 4; W32(r_esp, v); }
    /* 00601ac7: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601aca: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00601acd: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x601ad2u); f_005ea0c3();
    /* 00601ad2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601ad5: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 00601ad8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00601ad9: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601adc: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00601adf: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x601ae4u); f_005ea1cf();
    /* 00601ae4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601ae7: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00601aea: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601aed: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00601af0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601af2: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x601af5u); call_ind(t); }
    /* 00601af5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00601af7: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601afa: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00601afd: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601b00: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00601b03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601b05: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x601b08u); call_ind(t); }
    /* 00601b08: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601b0b: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00601b0e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601b11: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00601b14: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601b16: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x601b19u); call_ind(t); }
    /* 00601b19: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601b1c: cmp dword ptr [eax + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601b20: jne 0x601b5b */ if (!fZ) goto L_00601b5b;
L_00601b22:; BB(0x00601b22);
    /* 00601b22: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00601b24: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x601b29u); f_0048ab58();
    /* 00601b29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601b2c: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00601b2f: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601b33: je 0x601b45 */ if (fZ) goto L_00601b45;
L_00601b35:; BB(0x00601b35);
    /* 00601b35: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00601b38: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x601b3du); f_005e3fb0();
    /* 00601b3d: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00601b43: jmp 0x601b4f */ goto L_00601b4f;
L_00601b45:; BB(0x00601b45);
    /* 00601b45: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00601b4f:; BB(0x00601b4f);
    /* 00601b4f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601b52: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00601b58: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
L_00601b5b:; BB(0x00601b5b);
    /* 00601b5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601b5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601b5f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601b62: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00601b65: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601b68: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00601b6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601b6d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x601b70u); call_ind(t); }
    /* 00601b70: push 0x1602b */ { u32 v = 0x1602bu; r_esp -= 4; W32(r_esp, v); }
    /* 00601b75: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601b78: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00601b7b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x601b80u); f_005ea0c3();
    /* 00601b80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601b82: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601b85: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 00601b88: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x601b8du); f_005ea1cf();
    /* 00601b8d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601b90: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00601b93: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601b96: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00601b99: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601b9b: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x601b9eu); call_ind(t); }
    /* 00601b9e: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00601ba0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601ba3: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 00601ba6: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601ba9: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00601bac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601bae: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x601bb1u); call_ind(t); }
    /* 00601bb1: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601bb4: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00601bb7: mov dword ptr [ecx + 0x6c], 6 */ W32((u32)(r_ecx+0x6cu), 0x6u);
    /* 00601bbe: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601bc1: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00601bc4: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601bc7: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00601bca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601bcc: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x601bcfu); call_ind(t); }
    /* 00601bcf: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00601bd5: jmp 0x601be3 */ goto L_00601be3;
L_00601bd7:; BB(0x00601bd7);
    /* 00601bd7: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00601bdb: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00601bdf: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_00601be3:; BB(0x00601be3);
    /* 00601be3: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601be7: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601bea: jge 0x601cde */ if ((fS==fO)) goto L_00601cde;
L_00601bf0:; BB(0x00601bf0);
    /* 00601bf0: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601bf4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601bf7: cmp dword ptr [ecx + eax*4 + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601bfc: jne 0x601c3c */ if (!fZ) goto L_00601c3c;
L_00601bfe:; BB(0x00601bfe);
    /* 00601bfe: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00601c00: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x601c05u); f_0048ab58();
    /* 00601c05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601c08: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00601c0b: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601c0f: je 0x601c21 */ if (fZ) goto L_00601c21;
L_00601c11:; BB(0x00601c11);
    /* 00601c11: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00601c14: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x601c19u); f_005e3fb0();
    /* 00601c19: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00601c1f: jmp 0x601c2b */ goto L_00601c2b;
L_00601c21:; BB(0x00601c21);
    /* 00601c21: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00601c2b:; BB(0x00601c2b);
    /* 00601c2b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601c2f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601c32: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00601c38: mov dword ptr [eax + edx*4 + 0x2c], ecx */ W32((u32)(r_eax+r_edx*4+0x2cu), r_ecx);
L_00601c3c:; BB(0x00601c3c);
    /* 00601c3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601c3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601c40: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601c44: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601c47: mov ecx, dword ptr [eax + edx*4 + 0x2c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2cu));
    /* 00601c4b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601c4f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601c52: mov edx, dword ptr [eax + edx*4 + 0x2c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x2cu));
    /* 00601c56: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601c58: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x601c5bu); call_ind(t); }
    /* 00601c5b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601c5f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00601c61: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00601c63: and ecx, 0xfffffffd */ {  u32 a = r_ecx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00601c66: add ecx, 0x1602d */ {  u32 a = r_ecx; u32 b = 0x1602du; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00601c6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601c6d: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601c71: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601c74: mov ecx, dword ptr [eax + edx*4 + 0x2c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2cu));
    /* 00601c78: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x601c7du); f_005ea0c3();
    /* 00601c7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601c7f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601c83: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601c86: mov ecx, dword ptr [edx + ecx*4 + 0x2c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2cu));
    /* 00601c8a: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x601c8fu); f_005ea1cf();
    /* 00601c8f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601c93: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601c96: mov ecx, dword ptr [ecx + eax*4 + 0x2c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2cu));
    /* 00601c9a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601c9e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601ca1: mov edx, dword ptr [eax + edx*4 + 0x2c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x2cu));
    /* 00601ca5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601ca7: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x601caau); call_ind(t); }
    /* 00601caa: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00601cac: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601cb0: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601cb3: mov ecx, dword ptr [edx + ecx*4 + 0x2c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2cu));
    /* 00601cb7: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601cbb: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601cbe: mov eax, dword ptr [edx + eax*4 + 0x2c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x2cu));
    /* 00601cc2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601cc4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x601cc7u); call_ind(t); }
    /* 00601cc7: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00601ccb: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601cce: mov edx, dword ptr [ecx + eax*4 + 0x2c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x2cu));
    /* 00601cd2: mov dword ptr [edx + 0x6c], 0xa */ W32((u32)(r_edx+0x6cu), 0xau);
    /* 00601cd9: jmp 0x601bd7 */ goto L_00601bd7;
L_00601cde:; BB(0x00601cde);
    /* 00601cde: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00601ce1: call 0x602c71 */ r_esp -= 4; W32(r_esp, 0x601ce6u); f_00602c71();
    /* 00601ce6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00601ce8: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00601ced: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00601cf0: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00601cf6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00601cf9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601cfb: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x601cfeu); call_ind(t); }
    /* 00601cfe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601d00: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00601d05: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00601d08: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00601d0e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00601d11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601d13: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x601d16u); call_ind(t); }
    /* 00601d16: mov esp, ebp */ r_esp = r_ebp;
    /* 00601d18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601d19: ret  */ FN_RET(0x006010c3); r_esp += 4; return;
}

void f_00601d1a(void) /* FUN_00601d1a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601d1a);
    /* 00601d1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601d1b: mov ebp, esp */ r_ebp = r_esp;
    /* 00601d1d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601d20: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00601d23: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601d26: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601d2a: jne 0x601d6a */ if (!fZ) goto L_00601d6a;
L_00601d2c:; BB(0x00601d2c);
    /* 00601d2c: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 00601d31: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x601d36u); f_0048ab58();
    /* 00601d36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601d39: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00601d3c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601d40: je 0x601d4f */ if (fZ) goto L_00601d4f;
L_00601d42:; BB(0x00601d42);
    /* 00601d42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601d45: call 0x6036f8 */ r_esp -= 4; W32(r_esp, 0x601d4au); f_006036f8();
    /* 00601d4a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00601d4d: jmp 0x601d56 */ goto L_00601d56;
L_00601d4f:; BB(0x00601d4f);
    /* 00601d4f: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00601d56:; BB(0x00601d56);
    /* 00601d56: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601d59: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00601d5c: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00601d5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601d62: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00601d65: call 0x603770 */ r_esp -= 4; W32(r_esp, 0x601d6au); f_00603770();
L_00601d6a:; BB(0x00601d6a);
    /* 00601d6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00601d6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601d6d: ret  */ FN_RET(0x00601d1a); r_esp += 4; return;
}

void f_00601d6e(void) /* FUN_00601d6e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601d6e);
    /* 00601d6e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601d6f: mov ebp, esp */ r_ebp = r_esp;
    /* 00601d71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601d72: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00601d75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601d78: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00601d7e: mov edx, dword ptr [ecx + 0x12ec0] */ r_edx = R32((u32)(r_ecx+0x12ec0u));
    /* 00601d84: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 00601d87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601d8a: cmp dword ptr [eax + 0x70], 0 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601d8e: jl 0x601d99 */ if ((fS!=fO)) goto L_00601d99;
L_00601d90:; BB(0x00601d90);
    /* 00601d90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601d93: cmp dword ptr [ecx + 0x70], 0xa */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601d97: jle 0x601da3 */ if ((fZ||fS!=fO)) goto L_00601da3;
L_00601d99:; BB(0x00601d99);
    /* 00601d99: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601d9c: mov dword ptr [edx + 0x70], 3 */ W32((u32)(r_edx+0x70u), 0x3u);
L_00601da3:; BB(0x00601da3);
    /* 00601da3: mov esp, ebp */ r_esp = r_ebp;
    /* 00601da5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601da6: ret  */ FN_RET(0x00601d6e); r_esp += 4; return;
}

void f_00601da7(void) /* FUN_00601da7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601da7);
    /* 00601da7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601da8: mov ebp, esp */ r_ebp = r_esp;
    /* 00601daa: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601dad: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00601db0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00601db7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00601dbe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00601dc1: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00601dc4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00601dc7: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00601dcb: ja 0x601f2c */ if ((!fC&&!fZ)) goto L_00601f2c;
L_00601dd1:; BB(0x00601dd1);
    /* 00601dd1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00601dd4: jmp dword ptr [edx*4 + 0x601f43] */ { u32 t = R32((u32)(r_edx*4+0x601f43u)); switch (t) { case 0x601ddbu: goto L_00601ddb; case 0x601dffu: goto L_00601dff; case 0x601e23u: goto L_00601e23; case 0x601e4cu: goto L_00601e4c; case 0x601e57u: goto L_00601e57; case 0x601e77u: goto L_00601e77; case 0x601e97u: goto L_00601e97; case 0x601eb4u: goto L_00601eb4; case 0x601ed1u: goto L_00601ed1; case 0x601eeeu: goto L_00601eee; case 0x601f0eu: goto L_00601f0e; default: UNSUP(0x00601dd4, "jump table entry is not a known target"); } }
L_00601ddb:; BB(0x00601ddb);
    /* 00601ddb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00601dde: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00601ddf: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 00601de4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00601de4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00601de4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00601de6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00601de9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00601dec: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00601ded: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 00601df2: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00601df2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00601df2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00601df4: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601df7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00601dfa: jmp 0x601f2c */ goto L_00601f2c;
L_00601dff:; BB(0x00601dff);
    /* 00601dff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00601e02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00601e03: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00601e08: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00601e08, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00601e08, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00601e0a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00601e0d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00601e10: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00601e11: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00601e16: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00601e16, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00601e16, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00601e18: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601e1b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00601e1e: jmp 0x601f2c */ goto L_00601f2c;
L_00601e23:; BB(0x00601e23);
    /* 00601e23: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00601e26: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00601e27: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00601e2a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00601e2c: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00601e2f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00601e32: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00601e35: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00601e36: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00601e38: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00601e3a: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00601e3d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00601e3f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00601e41: imul eax, eax, 0x19 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x19u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601e44: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00601e47: jmp 0x601f2c */ goto L_00601f2c;
L_00601e4c:; BB(0x00601e4c);
    /* 00601e4c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00601e4f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00601e52: jmp 0x601f2c */ goto L_00601f2c;
L_00601e57:; BB(0x00601e57);
    /* 00601e57: cmp dword ptr [ebp + 0xc], 0xbebc200 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xbebc200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601e5e: jl 0x601e69 */ if ((fS!=fO)) goto L_00601e69;
L_00601e60:; BB(0x00601e60);
    /* 00601e60: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00601e67: jmp 0x601e72 */ goto L_00601e72;
L_00601e69:; BB(0x00601e69);
    /* 00601e69: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00601e6c: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601e6f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00601e72:; BB(0x00601e72);
    /* 00601e72: jmp 0x601f2c */ goto L_00601f2c;
L_00601e77:; BB(0x00601e77);
    /* 00601e77: cmp dword ptr [ebp + 0xc], 0x5f5e100 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x5f5e100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601e7e: jl 0x601e89 */ if ((fS!=fO)) goto L_00601e89;
L_00601e80:; BB(0x00601e80);
    /* 00601e80: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00601e87: jmp 0x601e92 */ goto L_00601e92;
L_00601e89:; BB(0x00601e89);
    /* 00601e89: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00601e8c: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601e8f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00601e92:; BB(0x00601e92);
    /* 00601e92: jmp 0x601f2c */ goto L_00601f2c;
L_00601e97:; BB(0x00601e97);
    /* 00601e97: cmp dword ptr [ebp + 0xc], 0x2625a00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2625a00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601e9e: jl 0x601ea9 */ if ((fS!=fO)) goto L_00601ea9;
L_00601ea0:; BB(0x00601ea0);
    /* 00601ea0: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00601ea7: jmp 0x601eb2 */ goto L_00601eb2;
L_00601ea9:; BB(0x00601ea9);
    /* 00601ea9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00601eac: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601eaf: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00601eb2:; BB(0x00601eb2);
    /* 00601eb2: jmp 0x601f2c */ goto L_00601f2c;
L_00601eb4:; BB(0x00601eb4);
    /* 00601eb4: cmp dword ptr [ebp + 0xc], 0x1312d00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1312d00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601ebb: jl 0x601ec6 */ if ((fS!=fO)) goto L_00601ec6;
L_00601ebd:; BB(0x00601ebd);
    /* 00601ebd: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00601ec4: jmp 0x601ecf */ goto L_00601ecf;
L_00601ec6:; BB(0x00601ec6);
    /* 00601ec6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00601ec9: imul eax, eax, 0x32 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x32u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601ecc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00601ecf:; BB(0x00601ecf);
    /* 00601ecf: jmp 0x601f2c */ goto L_00601f2c;
L_00601ed1:; BB(0x00601ed1);
    /* 00601ed1: cmp dword ptr [ebp + 0xc], 0x989680 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x989680u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601ed8: jl 0x601ee3 */ if ((fS!=fO)) goto L_00601ee3;
L_00601eda:; BB(0x00601eda);
    /* 00601eda: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00601ee1: jmp 0x601eec */ goto L_00601eec;
L_00601ee3:; BB(0x00601ee3);
    /* 00601ee3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00601ee6: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601ee9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00601eec:; BB(0x00601eec);
    /* 00601eec: jmp 0x601f2c */ goto L_00601f2c;
L_00601eee:; BB(0x00601eee);
    /* 00601eee: cmp dword ptr [ebp + 0xc], 0x1e8480 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1e8480u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601ef5: jl 0x601f00 */ if ((fS!=fO)) goto L_00601f00;
L_00601ef7:; BB(0x00601ef7);
    /* 00601ef7: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00601efe: jmp 0x601f0c */ goto L_00601f0c;
L_00601f00:; BB(0x00601f00);
    /* 00601f00: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00601f03: imul edx, edx, 0x1f4 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1f4u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601f09: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00601f0c:; BB(0x00601f0c);
    /* 00601f0c: jmp 0x601f2c */ goto L_00601f2c;
L_00601f0e:; BB(0x00601f0e);
    /* 00601f0e: cmp dword ptr [ebp + 0xc], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601f15: jl 0x601f20 */ if ((fS!=fO)) goto L_00601f20;
L_00601f17:; BB(0x00601f17);
    /* 00601f17: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00601f1e: jmp 0x601f2c */ goto L_00601f2c;
L_00601f20:; BB(0x00601f20);
    /* 00601f20: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00601f23: imul eax, eax, 0x3e8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3e8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601f29: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00601f2c:; BB(0x00601f2c);
    /* 00601f2c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00601f2f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601f32: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00601f34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601f37: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00601f3a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00601f3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00601f3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601f40: ret 8 */ FN_RET(0x00601da7); r_esp += 12; return;
}

void f_00601f6f(void) /* FUN_00601f6f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601f6f);
    /* 00601f6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601f70: mov ebp, esp */ r_ebp = r_esp;
    /* 00601f72: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601f75: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00601f78: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00601f7f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601f82: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00601f85: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00601f88: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00601f8c: ja 0x6020bd */ if ((!fC&&!fZ)) goto L_006020bd;
L_00601f92:; BB(0x00601f92);
    /* 00601f92: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00601f95: jmp dword ptr [edx*4 + 0x6020c6] */ { u32 t = R32((u32)(r_edx*4+0x6020c6u)); switch (t) { case 0x601f9cu: goto L_00601f9c; case 0x601fcfu: goto L_00601fcf; case 0x602002u: goto L_00602002; case 0x602035u: goto L_00602035; case 0x60204fu: goto L_0060204f; case 0x60205fu: goto L_0060205f; case 0x60206fu: goto L_0060206f; case 0x60207fu: goto L_0060207f; case 0x60208fu: goto L_0060208f; case 0x60209fu: goto L_0060209f; case 0x6020afu: goto L_006020af; default: UNSUP(0x00601f95, "jump table entry is not a known target"); } }
L_00601f9c:; BB(0x00601f9c);
    /* 00601f9c: cmp dword ptr [ebp + 8], 0x2faf07f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2faf07fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601fa3: jle 0x601fae */ if ((fZ||fS!=fO)) goto L_00601fae;
L_00601fa5:; BB(0x00601fa5);
    /* 00601fa5: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 00601fac: jmp 0x601fca */ goto L_00601fca;
L_00601fae:; BB(0x00601fae);
    /* 00601fae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00601fb1: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601fb4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00601fb7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00601fba: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00601fbb: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00601fc0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00601fc0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00601fc0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00601fc2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601fc5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00601fc7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00601fca:; BB(0x00601fca);
    /* 00601fca: jmp 0x6020bd */ goto L_006020bd;
L_00601fcf:; BB(0x00601fcf);
    /* 00601fcf: cmp dword ptr [ebp + 8], 0x5f5e0ff */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5f5e0ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601fd6: jle 0x601fe1 */ if ((fZ||fS!=fO)) goto L_00601fe1;
L_00601fd8:; BB(0x00601fd8);
    /* 00601fd8: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 00601fdf: jmp 0x601ffd */ goto L_00601ffd;
L_00601fe1:; BB(0x00601fe1);
    /* 00601fe1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00601fe4: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00601fe7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00601fea: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00601fed: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00601fee: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00601ff3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00601ff3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00601ff3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00601ff5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601ff8: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00601ffa: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00601ffd:; BB(0x00601ffd);
    /* 00601ffd: jmp 0x6020bd */ goto L_006020bd;
L_00602002:; BB(0x00602002);
    /* 00602002: cmp dword ptr [ebp + 8], 0xee6b27f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xee6b27fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602009: jle 0x602014 */ if ((fZ||fS!=fO)) goto L_00602014;
L_0060200b:; BB(0x0060200b);
    /* 0060200b: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 00602012: jmp 0x602030 */ goto L_00602030;
L_00602014:; BB(0x00602014);
    /* 00602014: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602017: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0060201a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060201d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00602020: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00602021: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 00602026: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00602026, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00602026, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00602028: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060202b: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060202d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00602030:; BB(0x00602030);
    /* 00602030: jmp 0x6020bd */ goto L_006020bd;
L_00602035:; BB(0x00602035);
    /* 00602035: cmp dword ptr [ebp + 8], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060203c: jle 0x602047 */ if ((fZ||fS!=fO)) goto L_00602047;
L_0060203e:; BB(0x0060203e);
    /* 0060203e: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 00602045: jmp 0x60204d */ goto L_0060204d;
L_00602047:; BB(0x00602047);
    /* 00602047: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060204a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060204d:; BB(0x0060204d);
    /* 0060204d: jmp 0x6020bd */ goto L_006020bd;
L_0060204f:; BB(0x0060204f);
    /* 0060204f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602052: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00602053: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00602058: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00602058, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00602058, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0060205a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060205d: jmp 0x6020bd */ goto L_006020bd;
L_0060205f:; BB(0x0060205f);
    /* 0060205f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602062: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00602063: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00602068: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00602068, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00602068, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0060206a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060206d: jmp 0x6020bd */ goto L_006020bd;
L_0060206f:; BB(0x0060206f);
    /* 0060206f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602072: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00602073: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 00602078: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00602078, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00602078, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0060207a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060207d: jmp 0x6020bd */ goto L_006020bd;
L_0060207f:; BB(0x0060207f);
    /* 0060207f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602082: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00602083: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 00602088: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00602088, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00602088, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0060208a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060208d: jmp 0x6020bd */ goto L_006020bd;
L_0060208f:; BB(0x0060208f);
    /* 0060208f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602092: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00602093: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 00602098: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00602098, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00602098, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0060209a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060209d: jmp 0x6020bd */ goto L_006020bd;
L_0060209f:; BB(0x0060209f);
    /* 0060209f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006020a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006020a3: mov ecx, 0x1f4 */ r_ecx = 0x1f4u;
    /* 006020a8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006020a8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006020a8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006020aa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006020ad: jmp 0x6020bd */ goto L_006020bd;
L_006020af:; BB(0x006020af);
    /* 006020af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006020b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006020b3: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 006020b8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006020b8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006020b8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006020ba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006020bd:; BB(0x006020bd);
    /* 006020bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006020c0: mov esp, ebp */ r_esp = r_ebp;
    /* 006020c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006020c3: ret 8 */ FN_RET(0x00601f6f); r_esp += 12; return;
}

void f_006020f2(void) /* FUN_006020f2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006020f2);
    /* 006020f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006020f3: mov ebp, esp */ r_ebp = r_esp;
    /* 006020f5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006020f8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006020fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006020fe: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00602101: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602104: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00602107: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602109: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x60210cu); call_ind(t); }
    /* 0060210c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060210f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00602112: mov dword ptr [ecx + 0x6c], 6 */ W32((u32)(r_ecx+0x6cu), 0x6u);
    /* 00602119: push 0x1601e */ { u32 v = 0x1601eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060211e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602121: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00602124: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x602129u); f_005ea0c3();
    /* 00602129: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060212b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060212e: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00602131: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x602136u); f_005ea1cf();
    /* 00602136: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00602138: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x60213du); f_0048ab58();
    /* 0060213d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602140: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00602143: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602147: je 0x60215a */ if (fZ) goto L_0060215a;
L_00602149:; BB(0x00602149);
    /* 00602149: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060214c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060214d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602150: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x602155u); f_005d7b34();
    /* 00602155: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00602158: jmp 0x602161 */ goto L_00602161;
L_0060215a:; BB(0x0060215a);
    /* 0060215a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00602161:; BB(0x00602161);
    /* 00602161: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602164: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602165: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602168: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0060216b: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x602170u); f_005e4060();
    /* 00602170: mov esp, ebp */ r_esp = r_ebp;
    /* 00602172: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602173: ret 4 */ FN_RET(0x006020f2); r_esp += 8; return;
}

void f_00602176(void) /* FUN_00602176 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602176);
    /* 00602176: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602177: mov ebp, esp */ r_ebp = r_esp;
    /* 00602179: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060217c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060217f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602182: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00602185: mov dword ptr [ecx + 0x6c], 6 */ W32((u32)(r_ecx+0x6cu), 0x6u);
    /* 0060218c: push 0x1601f */ { u32 v = 0x1601fu; r_esp -= 4; W32(r_esp, v); }
    /* 00602191: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602194: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00602197: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x60219cu); f_005ea0c3();
    /* 0060219c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060219e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006021a1: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006021a4: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x6021a9u); f_005ea1cf();
    /* 006021a9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006021ab: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6021b0u); f_0048ab58();
    /* 006021b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006021b3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006021b6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006021ba: je 0x6021cd */ if (fZ) goto L_006021cd;
L_006021bc:; BB(0x006021bc);
    /* 006021bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006021bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006021c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006021c3: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x6021c8u); f_005d7b34();
    /* 006021c8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006021cb: jmp 0x6021d4 */ goto L_006021d4;
L_006021cd:; BB(0x006021cd);
    /* 006021cd: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_006021d4:; BB(0x006021d4);
    /* 006021d4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006021d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006021d8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006021db: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006021de: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x6021e3u); f_005e4060();
    /* 006021e3: mov esp, ebp */ r_esp = r_ebp;
    /* 006021e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006021e6: ret 4 */ FN_RET(0x00602176); r_esp += 8; return;
}

void f_006021e9(void) /* FUN_006021e9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006021e9);
    /* 006021e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006021ea: mov ebp, esp */ r_ebp = r_esp;
    /* 006021ec: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006021ef: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006021f2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006021f5: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006021f8: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x6021fdu); f_005d96a9();
    /* 006021fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006021ff: je 0x602332 */ if (fZ) goto L_00602332;
L_00602205:; BB(0x00602205);
    /* 00602205: push 0x16025 */ { u32 v = 0x16025u; r_esp -= 4; W32(r_esp, v); }
    /* 0060220a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060220d: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00602210: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x602215u); f_005ea0c3();
    /* 00602215: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602218: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0060221b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060221e: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00602221: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00602223: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x602226u); call_ind(t); }
    /* 00602226: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0060222c: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x602231u); f_0045cb85();
    /* 00602231: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602233: je 0x60224e */ if (fZ) goto L_0060224e;
L_00602235:; BB(0x00602235);
    /* 00602235: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00602237: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602239: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060223b: push 0x19259 */ { u32 v = 0x19259u; r_esp -= 4; W32(r_esp, v); }
    /* 00602240: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 00602246: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00602249: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x60224eu); f_005e8389();
L_0060224e:; BB(0x0060224e);
    /* 0060224e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00602254: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x602259u); f_0045cb0a();
    /* 00602259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060225b: je 0x60229f */ if (fZ) goto L_0060229f;
L_0060225d:; BB(0x0060225d);
    /* 0060225d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060225f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602262: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00602265: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x60226au); f_005ea1cf();
    /* 0060226a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0060226c: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00602271: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00602274: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 0060227a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060227d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060227f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x602282u); call_ind(t); }
    /* 00602282: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00602284: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00602289: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0060228c: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00602292: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00602295: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602297: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x60229au); call_ind(t); }
    /* 0060229a: jmp 0x60232d */ goto L_0060232d;
L_0060229f:; BB(0x0060229f);
    /* 0060229f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022a2: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006022a5: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x6022aau); f_005ea2f8();
    /* 006022aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006022ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022ae: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 006022b1: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x6022b6u); f_005ea1cf();
    /* 006022b6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022b9: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 006022bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006022c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022c3: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 006022c6: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x6022cbu); f_005ea1cf();
    /* 006022cb: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006022d0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022d3: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 006022d6: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x6022dbu); f_005ea454();
    /* 006022db: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022de: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006022e1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022e4: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006022e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006022e9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6022ecu); call_ind(t); }
    /* 006022ec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022ef: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006022f2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022f5: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 006022f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006022fa: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6022fdu); call_ind(t); }
    /* 006022fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006022ff: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00602304: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00602307: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 0060230d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00602310: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602312: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x602315u); call_ind(t); }
    /* 00602315: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602317: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 0060231c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0060231f: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00602325: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00602328: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060232a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x60232du); call_ind(t); }
L_0060232d:; BB(0x0060232d);
    /* 0060232d: jmp 0x602456 */ goto L_00602456;
L_00602332:; BB(0x00602332);
    /* 00602332: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602335: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00602338: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x60233du); f_005ea257();
    /* 0060233d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00602340: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602344: jne 0x6023c0 */ if (!fZ) goto L_006023c0;
L_00602346:; BB(0x00602346);
    /* 00602346: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602349: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0060234c: mov dword ptr [edx + 0x6c], 4 */ W32((u32)(r_edx+0x6cu), 0x4u);
    /* 00602353: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602356: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 0060235c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060235d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602360: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00602363: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x602368u); f_005ea1cf();
    /* 00602368: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060236a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060236d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00602370: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x602375u); f_005ea454();
    /* 00602375: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602378: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0060237b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060237e: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00602381: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602383: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x602386u); call_ind(t); }
    /* 00602386: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00602388: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x60238du); f_0048ab58();
    /* 0060238d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602390: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00602393: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602397: je 0x6023aa */ if (fZ) goto L_006023aa;
L_00602399:; BB(0x00602399);
    /* 00602399: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060239b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060239d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006023a0: call 0x604246 */ r_esp -= 4; W32(r_esp, 0x6023a5u); f_00604246();
    /* 006023a5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006023a8: jmp 0x6023b1 */ goto L_006023b1;
L_006023aa:; BB(0x006023aa);
    /* 006023aa: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_006023b1:; BB(0x006023b1);
    /* 006023b1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006023b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006023b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006023b8: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 006023bb: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x6023c0u); f_005e4060();
L_006023c0:; BB(0x006023c0);
    /* 006023c0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006023c3: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 006023c6: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x6023cbu); f_005ea2f8();
    /* 006023cb: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006023ce: jge 0x602415 */ if ((fS==fO)) goto L_00602415;
L_006023d0:; BB(0x006023d0);
    /* 006023d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006023d3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006023d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006023d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006023da: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 006023dd: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x6023e2u); f_005ea1cf();
    /* 006023e2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006023e4: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 006023ea: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 006023ed: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 006023f2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006023f5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006023f7: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6023fau); call_ind(t); }
    /* 006023fa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006023fc: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 00602402: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00602405: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 0060240b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060240e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602410: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x602413u); call_ind(t); }
    /* 00602413: jmp 0x602456 */ goto L_00602456;
L_00602415:; BB(0x00602415);
    /* 00602415: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602418: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0060241b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060241e: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00602421: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602423: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x602426u); call_ind(t); }
    /* 00602426: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00602428: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 0060242d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00602430: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00602436: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00602439: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060243b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x60243eu); call_ind(t); }
    /* 0060243e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602440: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00602445: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00602448: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 0060244e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00602451: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602453: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x602456u); call_ind(t); }
L_00602456:; BB(0x00602456);
    /* 00602456: mov esp, ebp */ r_esp = r_ebp;
    /* 00602458: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602459: ret  */ FN_RET(0x006021e9); r_esp += 4; return;
}

void f_0060245a(void) /* FUN_0060245a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060245a);
    /* 0060245a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060245b: mov ebp, esp */ r_ebp = r_esp;
    /* 0060245d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602460: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00602463: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00602466: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00602469: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x60246eu); f_005ea257();
    /* 0060246e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00602471: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00602474: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00602477: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x60247cu); f_005ea2f8();
    /* 0060247c: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060247f: jne 0x602518 */ if (!fZ) goto L_00602518;
L_00602485:; BB(0x00602485);
    /* 00602485: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00602487: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060248a: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0060248d: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x602492u); f_005ea1cf();
    /* 00602492: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00602494: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00602499: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0060249c: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 006024a2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006024a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006024a7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6024aau); call_ind(t); }
    /* 006024aa: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006024ac: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6024b1u); f_0048ab58();
    /* 006024b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006024b4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006024b7: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006024bb: je 0x6024d5 */ if (fZ) goto L_006024d5;
L_006024bd:; BB(0x006024bd);
    /* 006024bd: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 006024c2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006024c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006024c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006024c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006024cb: call 0x604246 */ r_esp -= 4; W32(r_esp, 0x6024d0u); f_00604246();
    /* 006024d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006024d3: jmp 0x6024dc */ goto L_006024dc;
L_006024d5:; BB(0x006024d5);
    /* 006024d5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_006024dc:; BB(0x006024dc);
    /* 006024dc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006024df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006024e0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006024e3: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006024e6: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x6024ebu); f_005e4060();
    /* 006024eb: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 006024f1: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x6024f6u); f_0045cb85();
    /* 006024f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006024f8: je 0x602513 */ if (fZ) goto L_00602513;
L_006024fa:; BB(0x006024fa);
    /* 006024fa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006024fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006024fe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00602500: push 0x19259 */ { u32 v = 0x19259u; r_esp -= 4; W32(r_esp, v); }
    /* 00602505: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 0060250b: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0060250e: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x602513u); f_005e8389();
L_00602513:; BB(0x00602513);
    /* 00602513: jmp 0x602623 */ goto L_00602623;
L_00602518:; BB(0x00602518);
    /* 00602518: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060251b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060251e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00602521: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602525: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00602528: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0060252b: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x602530u); f_005ea1cf();
    /* 00602530: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602534: jne 0x6025b0 */ if (!fZ) goto L_006025b0;
L_00602536:; BB(0x00602536);
    /* 00602536: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00602539: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0060253c: mov dword ptr [eax + 0x6c], 4 */ W32((u32)(r_eax+0x6cu), 0x4u);
    /* 00602543: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00602546: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 0060254c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060254d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00602550: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00602553: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x602558u); f_005ea1cf();
    /* 00602558: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060255a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060255d: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00602560: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x602565u); f_005ea454();
    /* 00602565: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00602568: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0060256b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060256e: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00602571: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00602573: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x602576u); call_ind(t); }
    /* 00602576: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00602578: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x60257du); f_0048ab58();
    /* 0060257d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602580: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00602583: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602587: je 0x60259a */ if (fZ) goto L_0060259a;
L_00602589:; BB(0x00602589);
    /* 00602589: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060258b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060258d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602590: call 0x604246 */ r_esp -= 4; W32(r_esp, 0x602595u); f_00604246();
    /* 00602595: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00602598: jmp 0x6025a1 */ goto L_006025a1;
L_0060259a:; BB(0x0060259a);
    /* 0060259a: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_006025a1:; BB(0x006025a1);
    /* 006025a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006025a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006025a5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006025a8: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 006025ab: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x6025b0u); f_005e4060();
L_006025b0:; BB(0x006025b0);
    /* 006025b0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006025b3: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006025b6: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x6025bbu); f_005ea2f8();
    /* 006025bb: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006025be: jge 0x6025f3 */ if ((fS==fO)) goto L_006025f3;
L_006025c0:; BB(0x006025c0);
    /* 006025c0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006025c2: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 006025c8: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 006025cb: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 006025d1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006025d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006025d6: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6025d9u); call_ind(t); }
    /* 006025d9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006025db: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 006025e0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006025e3: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 006025e9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006025ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006025ee: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x6025f1u); call_ind(t); }
    /* 006025f1: jmp 0x602623 */ goto L_00602623;
L_006025f3:; BB(0x006025f3);
    /* 006025f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006025f5: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 006025fa: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006025fd: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00602603: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00602606: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602608: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x60260bu); call_ind(t); }
    /* 0060260b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060260d: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00602612: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00602615: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 0060261b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060261e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602620: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x602623u); call_ind(t); }
L_00602623:; BB(0x00602623);
    /* 00602623: mov esp, ebp */ r_esp = r_ebp;
    /* 00602625: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602626: ret  */ FN_RET(0x0060245a); r_esp += 4; return;
}

void f_00602627(void) /* FUN_00602627 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602627);
    /* 00602627: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602628: mov ebp, esp */ r_ebp = r_esp;
    /* 0060262a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060262d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00602630: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602633: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00602636: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x60263bu); f_005d96a9();
    /* 0060263b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060263d: jne 0x602796 */ if (!fZ) goto L_00602796;
L_00602643:; BB(0x00602643);
    /* 00602643: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602646: mov dword ptr [ecx + 0x80], 0xffffffff */ W32((u32)(r_ecx+0x80u), 0xffffffffu);
    /* 00602650: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602653: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 00602656: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602659: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0060265c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060265e: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x602661u); call_ind(t); }
    /* 00602661: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00602667: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x60266cu); f_0045cb0a();
    /* 0060266c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060266e: je 0x60271b */ if (fZ) goto L_0060271b;
L_00602674:; BB(0x00602674);
    /* 00602674: push 0x16026 */ { u32 v = 0x16026u; r_esp -= 4; W32(r_esp, v); }
    /* 00602679: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060267c: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0060267f: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x602684u); f_005ea0c3();
    /* 00602684: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602687: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0060268a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060268d: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00602690: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00602692: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x602695u); call_ind(t); }
    /* 00602695: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602697: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060269a: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0060269d: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x6026a2u); f_005ea1cf();
    /* 006026a2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006026a5: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006026a8: mov dword ptr [eax + 0x6c], 2 */ W32((u32)(r_eax+0x6cu), 0x2u);
    /* 006026af: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006026b1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6026b6u); f_0048ab58();
    /* 006026b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006026b9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006026bc: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006026c0: je 0x6026d3 */ if (fZ) goto L_006026d3;
L_006026c2:; BB(0x006026c2);
    /* 006026c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006026c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006026c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006026c9: call 0x604246 */ r_esp -= 4; W32(r_esp, 0x6026ceu); f_00604246();
    /* 006026ce: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006026d1: jmp 0x6026da */ goto L_006026da;
L_006026d3:; BB(0x006026d3);
    /* 006026d3: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_006026da:; BB(0x006026da);
    /* 006026da: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006026dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006026de: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006026e1: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 006026e4: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x6026e9u); f_005e4060();
    /* 006026e9: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006026eb: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 006026f0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006026f3: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 006026f9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006026fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006026fe: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x602701u); call_ind(t); }
    /* 00602701: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00602703: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00602708: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0060270b: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00602711: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00602714: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602716: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x602719u); call_ind(t); }
    /* 00602719: jmp 0x602791 */ goto L_00602791;
L_0060271b:; BB(0x0060271b);
    /* 0060271b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060271e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00602721: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602724: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00602727: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602729: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x60272cu); call_ind(t); }
    /* 0060272c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060272f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00602732: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602735: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00602738: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060273a: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x60273du); call_ind(t); }
    /* 0060273d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602740: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602744: je 0x602761 */ if (fZ) goto L_00602761;
L_00602746:; BB(0x00602746);
    /* 00602746: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00602748: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 0060274e: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00602751: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00602757: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060275a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060275c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x60275fu); call_ind(t); }
    /* 0060275f: jmp 0x602779 */ goto L_00602779;
L_00602761:; BB(0x00602761);
    /* 00602761: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00602763: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00602768: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0060276b: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00602771: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00602774: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602776: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x602779u); call_ind(t); }
L_00602779:; BB(0x00602779);
    /* 00602779: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060277b: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00602780: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00602783: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00602789: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060278c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060278e: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x602791u); call_ind(t); }
L_00602791:; BB(0x00602791);
    /* 00602791: jmp 0x60285e */ goto L_0060285e;
L_00602796:; BB(0x00602796);
    /* 00602796: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602799: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0060279c: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x6027a1u); f_005ea257();
    /* 006027a1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006027a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006027a7: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 006027aa: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x6027afu); f_005ea2f8();
    /* 006027af: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006027b2: jge 0x6027f9 */ if ((fS==fO)) goto L_006027f9;
L_006027b4:; BB(0x006027b4);
    /* 006027b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006027b7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006027ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006027bb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006027be: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006027c1: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x6027c6u); f_005ea1cf();
    /* 006027c6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006027c8: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 006027ce: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 006027d1: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 006027d7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006027da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006027dc: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6027dfu); call_ind(t); }
    /* 006027df: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006027e1: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 006027e6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006027e9: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 006027ef: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006027f2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006027f4: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x6027f7u); call_ind(t); }
    /* 006027f7: jmp 0x60285e */ goto L_0060285e;
L_006027f9:; BB(0x006027f9);
    /* 006027f9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006027fc: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006027ff: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602802: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00602805: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602807: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x60280au); call_ind(t); }
    /* 0060280a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060280d: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602811: je 0x60282e */ if (fZ) goto L_0060282e;
L_00602813:; BB(0x00602813);
    /* 00602813: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00602815: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 0060281b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0060281e: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00602824: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00602827: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602829: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x60282cu); call_ind(t); }
    /* 0060282c: jmp 0x602846 */ goto L_00602846;
L_0060282e:; BB(0x0060282e);
    /* 0060282e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00602830: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00602835: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00602838: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 0060283e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00602841: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602843: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x602846u); call_ind(t); }
L_00602846:; BB(0x00602846);
    /* 00602846: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602848: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 0060284d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00602850: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00602856: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00602859: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060285b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x60285eu); call_ind(t); }
L_0060285e:; BB(0x0060285e);
    /* 0060285e: mov esp, ebp */ r_esp = r_ebp;
    /* 00602860: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602861: ret  */ FN_RET(0x00602627); r_esp += 4; return;
}

void f_00602862(void) /* FUN_00602862 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602862);
    /* 00602862: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602863: mov ebp, esp */ r_ebp = r_esp;
    /* 00602865: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602868: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060286b: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00602871: jmp 0x60287f */ goto L_0060287f;
L_00602873:; BB(0x00602873);
    /* 00602873: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00602877: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0060287b: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0060287f:; BB(0x0060287f);
    /* 0060287f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00602883: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602886: jge 0x6028a5 */ if ((fS==fO)) goto L_006028a5;
L_00602888:; BB(0x00602888);
    /* 00602888: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060288c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060288f: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 00602893: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00602897: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060289a: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 0060289e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006028a0: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x6028a3u); call_ind(t); }
    /* 006028a3: jmp 0x602873 */ goto L_00602873;
L_006028a5:; BB(0x006028a5);
    /* 006028a5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006028a8: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006028ac: jne 0x6028bf */ if (!fZ) goto L_006028bf;
L_006028ae:; BB(0x006028ae);
    /* 006028ae: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006028b1: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 006028b4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006028b7: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 006028ba: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006028bc: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x6028bfu); call_ind(t); }
L_006028bf:; BB(0x006028bf);
    /* 006028bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006028c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006028c2: ret  */ FN_RET(0x00602862); r_esp += 4; return;
}

void f_006028c3(void) /* FUN_006028c3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006028c3);
    /* 006028c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006028c4: mov ebp, esp */ r_ebp = r_esp;
    /* 006028c6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006028c9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006028cc: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006028d2: jmp 0x6028e0 */ goto L_006028e0;
L_006028d4:; BB(0x006028d4);
    /* 006028d4: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 006028d8: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 006028dc: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_006028e0:; BB(0x006028e0);
    /* 006028e0: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006028e4: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006028e7: jge 0x602906 */ if ((fS==fO)) goto L_00602906;
L_006028e9:; BB(0x006028e9);
    /* 006028e9: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006028ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006028f0: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 006028f4: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006028f8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006028fb: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 006028ff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00602901: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x602904u); call_ind(t); }
    /* 00602904: jmp 0x6028d4 */ goto L_006028d4;
L_00602906:; BB(0x00602906);
    /* 00602906: mov esp, ebp */ r_esp = r_ebp;
    /* 00602908: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602909: ret  */ FN_RET(0x006028c3); r_esp += 4; return;
}

void f_0060290a(void) /* FUN_0060290a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060290a);
    /* 0060290a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060290b: mov ebp, esp */ r_ebp = r_esp;
    /* 0060290d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602910: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00602913: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00602919: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x60291eu); f_0045cb0a();
    /* 0060291e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602920: je 0x60296f */ if (fZ) goto L_0060296f;
L_00602922:; BB(0x00602922);
    /* 00602922: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602926: jle 0x60296f */ if ((fZ||fS!=fO)) goto L_0060296f;
L_00602928:; BB(0x00602928);
    /* 00602928: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060292b: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0060292e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602931: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00602934: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602936: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x602939u); call_ind(t); }
    /* 00602939: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060293b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x602940u); f_0048ab58();
    /* 00602940: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602943: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00602946: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060294a: je 0x602959 */ if (fZ) goto L_00602959;
L_0060294c:; BB(0x0060294c);
    /* 0060294c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060294f: call 0x60473a */ r_esp -= 4; W32(r_esp, 0x602954u); f_0060473a();
    /* 00602954: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00602957: jmp 0x602960 */ goto L_00602960;
L_00602959:; BB(0x00602959);
    /* 00602959: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00602960:; BB(0x00602960);
    /* 00602960: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602963: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602964: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602967: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 0060296a: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x60296fu); f_005e4060();
L_0060296f:; BB(0x0060296f);
    /* 0060296f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602972: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00602975: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00602978: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060297b: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0060297e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602981: cmp dword ptr [edx + 0x74], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00602988: jbe 0x6029ab */ if ((fC||fZ)) goto L_006029ab;
L_0060298a:; BB(0x0060298a);
    /* 0060298a: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0060298f: push 0x69c598 */ { u32 v = 0x69c598u; r_esp -= 4; W32(r_esp, v); }
    /* 00602994: push 0x69c5a8 */ { u32 v = 0x69c5a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00602999: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060299b: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x6029a0u); f_0060f9f3();
    /* 006029a0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006029a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006029a6: call 0x603026 */ r_esp -= 4; W32(r_esp, 0x6029abu); f_00603026();
L_006029ab:; BB(0x006029ab);
    /* 006029ab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006029ae: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 006029b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006029b2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006029b5: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006029b8: call 0x603f66 */ r_esp -= 4; W32(r_esp, 0x6029bdu); f_00603f66();
    /* 006029bd: mov esp, ebp */ r_esp = r_ebp;
    /* 006029bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006029c0: ret 4 */ FN_RET(0x0060290a); r_esp += 8; return;
}

void f_006029c3(void) /* FUN_006029c3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006029c3);
    /* 006029c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006029c4: mov ebp, esp */ r_ebp = r_esp;
    /* 006029c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006029c7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006029ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006029cd: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 006029d0: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006029d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006029d6: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 006029d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006029dc: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006029e0: jae 0x6029ec */ if (!fC) goto L_006029ec;
L_006029e2:; BB(0x006029e2);
    /* 006029e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006029e5: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
L_006029ec:; BB(0x006029ec);
    /* 006029ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006029ef: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006029f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006029f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006029f6: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 006029f9: call 0x603f66 */ r_esp -= 4; W32(r_esp, 0x6029feu); f_00603f66();
    /* 006029fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602a01: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602a05: jne 0x602a41 */ if (!fZ) goto L_00602a41;
L_00602a07:; BB(0x00602a07);
    /* 00602a07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602a0a: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602a0e: jne 0x602a41 */ if (!fZ) goto L_00602a41;
L_00602a10:; BB(0x00602a10);
    /* 00602a10: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00602a12: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 00602a18: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00602a1b: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00602a21: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00602a24: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602a26: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x602a29u); call_ind(t); }
    /* 00602a29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602a2b: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00602a30: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00602a33: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00602a39: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00602a3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602a3e: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x602a41u); call_ind(t); }
L_00602a41:; BB(0x00602a41);
    /* 00602a41: mov esp, ebp */ r_esp = r_ebp;
    /* 00602a43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602a44: ret 4 */ FN_RET(0x006029c3); r_esp += 8; return;
}

void f_00602a47(void) /* FUN_00602a47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602a47);
    /* 00602a47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602a48: mov ebp, esp */ r_ebp = r_esp;
    /* 00602a4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602a4b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602a4e: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602a52: jle 0x602a5b */ if ((fZ||fS!=fO)) goto L_00602a5b;
L_00602a54:; BB(0x00602a54);
    /* 00602a54: mov dword ptr [ebp + 8], 3 */ W32((u32)(r_ebp+0x8u), 0x3u);
L_00602a5b:; BB(0x00602a5b);
    /* 00602a5b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602a5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602a62: call 0x602ade */ r_esp -= 4; W32(r_esp, 0x602a67u); f_00602ade();
    /* 00602a67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602a6a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00602a6d: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00602a70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602a73: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00602a76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602a77: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602a7a: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 00602a7d: call 0x603f66 */ r_esp -= 4; W32(r_esp, 0x602a82u); f_00603f66();
    /* 00602a82: mov esp, ebp */ r_esp = r_ebp;
    /* 00602a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602a85: ret 4 */ FN_RET(0x00602a47); r_esp += 8; return;
}

void f_00602a88(void) /* FUN_00602a88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602a88);
    /* 00602a88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602a89: mov ebp, esp */ r_ebp = r_esp;
    /* 00602a8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602a8c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602a8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602a92: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00602a95: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
    /* 00602a98: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602a9b: cmp dword ptr [edx + 0x7c], 0xf423f */ {  u32 a = R32((u32)(r_edx+0x7cu)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602aa2: jle 0x602aae */ if ((fZ||fS!=fO)) goto L_00602aae;
L_00602aa4:; BB(0x00602aa4);
    /* 00602aa4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602aa7: mov dword ptr [eax + 0x7c], 0xf423f */ W32((u32)(r_eax+0x7cu), 0xf423fu);
L_00602aae:; BB(0x00602aae);
    /* 00602aae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602ab1: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 00602ab4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602ab5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602ab8: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00602abb: call 0x603f66 */ r_esp -= 4; W32(r_esp, 0x602ac0u); f_00603f66();
    /* 00602ac0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602ac3: cmp dword ptr [ecx + 0x7c], 0 */ {  u32 a = R32((u32)(r_ecx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602ac7: jle 0x602ad8 */ if ((fZ||fS!=fO)) goto L_00602ad8;
L_00602ac9:; BB(0x00602ac9);
    /* 00602ac9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602acc: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 00602acf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602ad0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602ad3: call 0x60290a */ r_esp -= 4; W32(r_esp, 0x602ad8u); f_0060290a();
L_00602ad8:; BB(0x00602ad8);
    /* 00602ad8: mov esp, ebp */ r_esp = r_ebp;
    /* 00602ada: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602adb: ret 4 */ FN_RET(0x00602a88); r_esp += 8; return;
}

void f_00602ade(void) /* FUN_00602ade */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602ade);
    /* 00602ade: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602adf: mov ebp, esp */ r_ebp = r_esp;
    /* 00602ae1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602ae4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00602ae7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602aeb: je 0x602ba8 */ if (fZ) goto L_00602ba8;
L_00602af1:; BB(0x00602af1);
    /* 00602af1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602af4: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00602af7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602afa: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00602afd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602aff: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x602b02u); call_ind(t); }
    /* 00602b02: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602b05: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00602b08: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602b0b: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00602b0e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602b10: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x602b13u); call_ind(t); }
    /* 00602b13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602b15: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602b18: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00602b1b: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x602b20u); f_005e4060();
    /* 00602b20: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602b23: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 00602b26: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602b29: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00602b2c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602b2e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x602b31u); call_ind(t); }
    /* 00602b31: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602b34: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00602b37: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00602b3a: cmp dword ptr [ebp + 8], ecx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602b3d: jg 0x602b53 */ if ((!fZ&&fS==fO)) goto L_00602b53;
L_00602b3f:; BB(0x00602b3f);
    /* 00602b3f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00602b42: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602b45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602b46: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602b49: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00602b4c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x602b51u); f_005ea1cf();
    /* 00602b51: jmp 0x602ba8 */ goto L_00602ba8;
L_00602b53:; BB(0x00602b53);
    /* 00602b53: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602b56: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602b5a: jne 0x602b69 */ if (!fZ) goto L_00602b69;
L_00602b5c:; BB(0x00602b5c);
    /* 00602b5c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00602b5e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602b61: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00602b64: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x602b69u); f_005ea1cf();
L_00602b69:; BB(0x00602b69);
    /* 00602b69: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00602b6b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x602b70u); f_0048ab58();
    /* 00602b70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602b73: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00602b76: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602b7a: je 0x602b92 */ if (fZ) goto L_00602b92;
L_00602b7c:; BB(0x00602b7c);
    /* 00602b7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602b7e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602b81: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00602b84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602b85: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602b88: call 0x5d7a01 */ r_esp -= 4; W32(r_esp, 0x602b8du); f_005d7a01();
    /* 00602b8d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00602b90: jmp 0x602b99 */ goto L_00602b99;
L_00602b92:; BB(0x00602b92);
    /* 00602b92: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00602b99:; BB(0x00602b99);
    /* 00602b99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602b9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602b9d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602ba0: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00602ba3: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x602ba8u); f_005e4060();
L_00602ba8:; BB(0x00602ba8);
    /* 00602ba8: mov esp, ebp */ r_esp = r_ebp;
    /* 00602baa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602bab: ret 4 */ FN_RET(0x00602ade); r_esp += 8; return;
}

void f_00602bae(void) /* FUN_00602bae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602bae);
    /* 00602bae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602baf: mov ebp, esp */ r_ebp = r_esp;
    /* 00602bb1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602bb4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00602bb7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602bba: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00602bc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602bc1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602bc4: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00602bc7: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x602bccu); f_005ea1cf();
    /* 00602bcc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602bcf: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00602bd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602bd3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602bd6: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00602bd9: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x602bdeu); f_005ea1cf();
    /* 00602bde: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00602be1: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00602be4: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00602be7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602bea: add edx, dword ptr [eax + 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x84u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602bf0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602bf1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602bf4: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 00602bf7: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x602bfcu); f_005ea1cf();
    /* 00602bfc: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00602bfe: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x602c03u); f_0048ab58();
    /* 00602c03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602c06: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00602c09: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602c0d: je 0x602c22 */ if (fZ) goto L_00602c22;
L_00602c0f:; BB(0x00602c0f);
    /* 00602c0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00602c11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602c13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602c15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602c18: call 0x5d7c5c */ r_esp -= 4; W32(r_esp, 0x602c1du); f_005d7c5c();
    /* 00602c1d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00602c20: jmp 0x602c29 */ goto L_00602c29;
L_00602c22:; BB(0x00602c22);
    /* 00602c22: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00602c29:; BB(0x00602c29);
    /* 00602c29: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602c2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602c2d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602c30: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00602c33: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x602c38u); f_005e4060();
    /* 00602c38: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602c3b: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 00602c3e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602c41: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00602c44: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602c46: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x602c49u); call_ind(t); }
    /* 00602c49: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602c4c: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00602c4f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602c52: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00602c55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602c57: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x602c5au); call_ind(t); }
    /* 00602c5a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602c5d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00602c60: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602c63: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00602c66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602c68: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x602c6bu); call_ind(t); }
    /* 00602c6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00602c6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602c6e: ret 4 */ FN_RET(0x00602bae); r_esp += 8; return;
}

void f_00602c71(void) /* FUN_00602c71 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602c71);
    /* 00602c71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602c72: mov ebp, esp */ r_ebp = r_esp;
    /* 00602c74: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602c77: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00602c7a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602c7d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00602c80: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602c83: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00602c86: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602c88: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x602c8bu); call_ind(t); }
    /* 00602c8b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602c8e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00602c91: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602c94: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00602c97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602c99: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x602c9cu); call_ind(t); }
    /* 00602c9c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602c9f: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00602ca2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602ca5: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00602ca8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602caa: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x602cadu); call_ind(t); }
    /* 00602cad: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00602caf: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x602cb4u); f_0048ab58();
    /* 00602cb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602cb7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00602cba: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602cbe: je 0x602ccf */ if (fZ) goto L_00602ccf;
L_00602cc0:; BB(0x00602cc0);
    /* 00602cc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602cc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602cc5: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x602ccau); f_005d7698();
    /* 00602cca: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00602ccd: jmp 0x602cd6 */ goto L_00602cd6;
L_00602ccf:; BB(0x00602ccf);
    /* 00602ccf: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00602cd6:; BB(0x00602cd6);
    /* 00602cd6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602cd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602cda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602cdd: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 00602ce0: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x602ce5u); f_005e4060();
    /* 00602ce5: mov esp, ebp */ r_esp = r_ebp;
    /* 00602ce7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602ce8: ret  */ FN_RET(0x00602c71); r_esp += 4; return;
}

void f_00602ce9(void) /* FUN_00602ce9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602ce9);
    /* 00602ce9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602cea: mov ebp, esp */ r_ebp = r_esp;
    /* 00602cec: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602cef: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00602cf2: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00602cf8: jmp 0x602d06 */ goto L_00602d06;
L_00602cfa:; BB(0x00602cfa);
    /* 00602cfa: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00602cfe: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00602d02: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00602d06:; BB(0x00602d06);
    /* 00602d06: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00602d0a: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602d0d: jge 0x602d3e */ if ((fS==fO)) goto L_00602d3e;
L_00602d0f:; BB(0x00602d0f);
    /* 00602d0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602d11: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00602d15: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602d18: mov ecx, dword ptr [eax + edx*4 + 0x2c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2cu));
    /* 00602d1c: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x602d21u); f_005e4060();
    /* 00602d21: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00602d25: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602d28: mov ecx, dword ptr [edx + ecx*4 + 0x2c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2cu));
    /* 00602d2c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00602d30: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602d33: mov eax, dword ptr [edx + eax*4 + 0x2c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x2cu));
    /* 00602d37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602d39: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x602d3cu); call_ind(t); }
    /* 00602d3c: jmp 0x602cfa */ goto L_00602cfa;
L_00602d3e:; BB(0x00602d3e);
    /* 00602d3e: mov esp, ebp */ r_esp = r_ebp;
    /* 00602d40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602d41: ret  */ FN_RET(0x00602ce9); r_esp += 4; return;
}

void f_00602d42(void) /* FUN_00602d42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602d42);
    /* 00602d42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602d43: mov ebp, esp */ r_ebp = r_esp;
    /* 00602d45: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602d48: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00602d4b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00602d52: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00602d59: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00602d5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602d5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602d60: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00602d63: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00602d66: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x602d6bu); f_004267fb();
    /* 00602d6b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602d6e: cmp dword ptr [eax + 0x70], 2 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602d72: jle 0x602d88 */ if ((fZ||fS!=fO)) goto L_00602d88;
L_00602d74:; BB(0x00602d74);
    /* 00602d74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602d77: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 00602d7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602d7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602d7e: call 0x602de2 */ r_esp -= 4; W32(r_esp, 0x602d83u); f_00602de2();
    /* 00602d83: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602d86: jl 0x602dab */ if ((fS!=fO)) goto L_00602dab;
L_00602d88:; BB(0x00602d88);
    /* 00602d88: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602d8b: cmp dword ptr [eax + 0x70], 2 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602d8f: jg 0x602dde */ if ((!fZ&&fS==fO)) goto L_00602dde;
L_00602d91:; BB(0x00602d91);
    /* 00602d91: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602d95: jne 0x602dde */ if (!fZ) goto L_00602dde;
L_00602d97:; BB(0x00602d97);
    /* 00602d97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602d9a: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 00602d9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602d9e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602da1: call 0x602e6f */ r_esp -= 4; W32(r_esp, 0x602da6u); f_00602e6f();
    /* 00602da6: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602da9: jge 0x602dde */ if ((fS==fO)) goto L_00602dde;
L_00602dab:; BB(0x00602dab);
    /* 00602dab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602dae: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602db2: jne 0x602dde */ if (!fZ) goto L_00602dde;
L_00602db4:; BB(0x00602db4);
    /* 00602db4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602db7: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602dbb: jne 0x602dde */ if (!fZ) goto L_00602dde;
L_00602dbd:; BB(0x00602dbd);
    /* 00602dbd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602dc0: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00602dc3: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602dca: jne 0x602dde */ if (!fZ) goto L_00602dde;
L_00602dcc:; BB(0x00602dcc);
    /* 00602dcc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602dcf: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00602dd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602dd3: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 00602dd9: call 0x449908 */ r_esp -= 4; W32(r_esp, 0x602ddeu); f_00449908();
L_00602dde:; BB(0x00602dde);
    /* 00602dde: mov esp, ebp */ r_esp = r_ebp;
    /* 00602de0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602de1: ret  */ FN_RET(0x00602d42); r_esp += 4; return;
}

void f_00602de2(void) /* FUN_00602de2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602de2);
    /* 00602de2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602de3: mov ebp, esp */ r_ebp = r_esp;
    /* 00602de5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602de8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602deb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602dee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00602df1: cmp dword ptr [ebp - 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00602df5: ja 0x602e3b */ if ((!fC&&!fZ)) goto L_00602e3b;
L_00602df7:; BB(0x00602df7);
    /* 00602df7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602dfa: jmp dword ptr [ecx*4 + 0x602e43] */ { u32 t = R32((u32)(r_ecx*4+0x602e43u)); switch (t) { case 0x602e01u: goto L_00602e01; case 0x602e3bu: goto L_00602e3b; case 0x602e03u: goto L_00602e03; case 0x602e0au: goto L_00602e0a; case 0x602e11u: goto L_00602e11; case 0x602e18u: goto L_00602e18; case 0x602e1fu: goto L_00602e1f; case 0x602e26u: goto L_00602e26; case 0x602e2du: goto L_00602e2d; case 0x602e34u: goto L_00602e34; default: UNSUP(0x00602dfa, "jump table entry is not a known target"); } }
L_00602e01:; BB(0x00602e01);
    /* 00602e01: jmp 0x602e3b */ goto L_00602e3b;
L_00602e03:; BB(0x00602e03);
    /* 00602e03: mov eax, 1 */ r_eax = 0x1u;
    /* 00602e08: jmp 0x602e3d */ goto L_00602e3d;
L_00602e0a:; BB(0x00602e0a);
    /* 00602e0a: mov eax, 5 */ r_eax = 0x5u;
    /* 00602e0f: jmp 0x602e3d */ goto L_00602e3d;
L_00602e11:; BB(0x00602e11);
    /* 00602e11: mov eax, 0xa */ r_eax = 0xau;
    /* 00602e16: jmp 0x602e3d */ goto L_00602e3d;
L_00602e18:; BB(0x00602e18);
    /* 00602e18: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00602e1d: jmp 0x602e3d */ goto L_00602e3d;
L_00602e1f:; BB(0x00602e1f);
    /* 00602e1f: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00602e24: jmp 0x602e3d */ goto L_00602e3d;
L_00602e26:; BB(0x00602e26);
    /* 00602e26: mov eax, 0x64 */ r_eax = 0x64u;
    /* 00602e2b: jmp 0x602e3d */ goto L_00602e3d;
L_00602e2d:; BB(0x00602e2d);
    /* 00602e2d: mov eax, 0x1f4 */ r_eax = 0x1f4u;
    /* 00602e32: jmp 0x602e3d */ goto L_00602e3d;
L_00602e34:; BB(0x00602e34);
    /* 00602e34: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 00602e39: jmp 0x602e3d */ goto L_00602e3d;
L_00602e3b:; BB(0x00602e3b);
    /* 00602e3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00602e3d:; BB(0x00602e3d);
    /* 00602e3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00602e3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602e40: ret 4 */ FN_RET(0x00602de2); r_esp += 8; return;
}

void f_00602e6f(void) /* FUN_00602e6f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602e6f);
    /* 00602e6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602e70: mov ebp, esp */ r_ebp = r_esp;
    /* 00602e72: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602e75: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602e78: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602e7b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00602e7e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602e82: je 0x602e92 */ if (fZ) goto L_00602e92;
L_00602e84:; BB(0x00602e84);
    /* 00602e84: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602e88: je 0x602e99 */ if (fZ) goto L_00602e99;
L_00602e8a:; BB(0x00602e8a);
    /* 00602e8a: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602e8e: je 0x602ea0 */ if (fZ) goto L_00602ea0;
L_00602e90:; BB(0x00602e90);
    /* 00602e90: jmp 0x602ea7 */ goto L_00602ea7;
L_00602e92:; BB(0x00602e92);
    /* 00602e92: mov eax, 5 */ r_eax = 0x5u;
    /* 00602e97: jmp 0x602ea9 */ goto L_00602ea9;
L_00602e99:; BB(0x00602e99);
    /* 00602e99: mov eax, 0xa */ r_eax = 0xau;
    /* 00602e9e: jmp 0x602ea9 */ goto L_00602ea9;
L_00602ea0:; BB(0x00602ea0);
    /* 00602ea0: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00602ea5: jmp 0x602ea9 */ goto L_00602ea9;
L_00602ea7:; BB(0x00602ea7);
    /* 00602ea7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00602ea9:; BB(0x00602ea9);
    /* 00602ea9: mov esp, ebp */ r_esp = r_ebp;
    /* 00602eab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602eac: ret 4 */ FN_RET(0x00602e6f); r_esp += 8; return;
}

void f_00602eaf(void) /* FUN_00602eaf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602eaf);
    /* 00602eaf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602eb0: mov ebp, esp */ r_ebp = r_esp;
    /* 00602eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602eb3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602eb6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602eb9: cmp dword ptr [eax + 0x78], 3 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602ebd: jne 0x602ec1 */ if (!fZ) goto L_00602ec1;
L_00602ebf:; BB(0x00602ebf);
    /* 00602ebf: jmp 0x602f0c */ goto L_00602f0c;
L_00602ec1:; BB(0x00602ec1);
    /* 00602ec1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602ec4: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602ec8: je 0x602f02 */ if (fZ) goto L_00602f02;
L_00602eca:; BB(0x00602eca);
    /* 00602eca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602ecd: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00602ed0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602ed3: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00602ed6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00602ed8: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x602edbu); call_ind(t); }
    /* 00602edb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602ede: cmp dword ptr [ecx + 0x78], 3 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602ee2: jge 0x602f00 */ if ((fS==fO)) goto L_00602f00;
L_00602ee4:; BB(0x00602ee4);
    /* 00602ee4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602ee7: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00602eea: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00602eed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602eee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602ef1: call 0x602a47 */ r_esp -= 4; W32(r_esp, 0x602ef6u); f_00602a47();
    /* 00602ef6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00602ef8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602efb: call 0x6029c3 */ r_esp -= 4; W32(r_esp, 0x602f00u); f_006029c3();
L_00602f00:; BB(0x00602f00);
    /* 00602f00: jmp 0x602f0c */ goto L_00602f0c;
L_00602f02:; BB(0x00602f02);
    /* 00602f02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00602f04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f07: call 0x6030f1 */ r_esp -= 4; W32(r_esp, 0x602f0cu); f_006030f1();
L_00602f0c:; BB(0x00602f0c);
    /* 00602f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00602f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602f0f: ret  */ FN_RET(0x00602eaf); r_esp += 4; return;
}

void f_00602f10(void) /* FUN_00602f10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602f10);
    /* 00602f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00602f13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602f14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602f17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f1a: cmp dword ptr [eax + 0x78], 3 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602f1e: jne 0x602f25 */ if (!fZ) goto L_00602f25;
L_00602f20:; BB(0x00602f20);
    /* 00602f20: jmp 0x602fa6 */ goto L_00602fa6;
L_00602f25:; BB(0x00602f25);
    /* 00602f25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f28: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602f2c: je 0x602f92 */ if (fZ) goto L_00602f92;
L_00602f2e:; BB(0x00602f2e);
    /* 00602f2e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f31: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00602f34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f37: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00602f3a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00602f3c: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x602f3fu); call_ind(t); }
    /* 00602f3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f42: mov edx, 3 */ r_edx = 0x3u;
    /* 00602f47: sub edx, dword ptr [ecx + 0x78] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x78u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00602f4a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f4d: cmp dword ptr [eax + 0x74], edx */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00602f50: jbe 0x602f72 */ if ((fC||fZ)) goto L_00602f72;
L_00602f52:; BB(0x00602f52);
    /* 00602f52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f55: mov edx, 3 */ r_edx = 0x3u;
    /* 00602f5a: sub edx, dword ptr [ecx + 0x78] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x78u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00602f5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602f5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f61: call 0x6029c3 */ r_esp -= 4; W32(r_esp, 0x602f66u); f_006029c3();
    /* 00602f66: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00602f68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f6b: call 0x602a47 */ r_esp -= 4; W32(r_esp, 0x602f70u); f_00602a47();
    /* 00602f70: jmp 0x602f90 */ goto L_00602f90;
L_00602f72:; BB(0x00602f72);
    /* 00602f72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f75: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00602f78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602f79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f7c: call 0x602a47 */ r_esp -= 4; W32(r_esp, 0x602f81u); f_00602a47();
    /* 00602f81: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f84: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00602f87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602f88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f8b: call 0x6029c3 */ r_esp -= 4; W32(r_esp, 0x602f90u); f_006029c3();
L_00602f90:; BB(0x00602f90);
    /* 00602f90: jmp 0x602fa6 */ goto L_00602fa6;
L_00602f92:; BB(0x00602f92);
    /* 00602f92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f95: mov edx, 3 */ r_edx = 0x3u;
    /* 00602f9a: sub edx, dword ptr [ecx + 0x78] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x78u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00602f9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602f9e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602fa1: call 0x6030f1 */ r_esp -= 4; W32(r_esp, 0x602fa6u); f_006030f1();
L_00602fa6:; BB(0x00602fa6);
    /* 00602fa6: mov esp, ebp */ r_esp = r_ebp;
    /* 00602fa8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602fa9: ret  */ FN_RET(0x00602f10); r_esp += 4; return;
}

void f_00602faa(void) /* FUN_00602faa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602faa);
    /* 00602faa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602fab: mov ebp, esp */ r_ebp = r_esp;
    /* 00602fad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602fae: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602fb1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602fb4: call 0x602f10 */ r_esp -= 4; W32(r_esp, 0x602fb9u); f_00602f10();
    /* 00602fb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602fbc: call 0x602fc5 */ r_esp -= 4; W32(r_esp, 0x602fc1u); f_00602fc5();
    /* 00602fc1: mov esp, ebp */ r_esp = r_ebp;
    /* 00602fc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602fc4: ret  */ FN_RET(0x00602faa); r_esp += 4; return;
}

void f_00602fc5(void) /* FUN_00602fc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602fc5);
    /* 00602fc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602fc6: mov ebp, esp */ r_ebp = r_esp;
    /* 00602fc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602fc9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602fcc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602fcf: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602fd3: je 0x603022 */ if (fZ) goto L_00603022;
L_00602fd5:; BB(0x00602fd5);
    /* 00602fd5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602fd8: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 00602fdf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602fe2: call 0x6028c3 */ r_esp -= 4; W32(r_esp, 0x602fe7u); f_006028c3();
    /* 00602fe7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602fe9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602fec: call 0x602a88 */ r_esp -= 4; W32(r_esp, 0x602ff1u); f_00602a88();
    /* 00602ff1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00602ff3: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00602ff9: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00602ffc: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00603001: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00603004: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00603006: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x603009u); call_ind(t); }
    /* 00603009: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060300b: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 00603011: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00603014: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 0060301a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060301d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060301f: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x603022u); call_ind(t); }
L_00603022:; BB(0x00603022);
    /* 00603022: mov esp, ebp */ r_esp = r_ebp;
    /* 00603024: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603025: ret  */ FN_RET(0x00602fc5); r_esp += 4; return;
}

void f_00603026(void) /* FUN_00603026 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603026);
    /* 00603026: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603027: mov ebp, esp */ r_ebp = r_esp;
    /* 00603029: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060302c: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0060302f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00603032: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00603035: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603036: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00603039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060303a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060303d: call 0x601da7 */ r_esp -= 4; W32(r_esp, 0x603042u); f_00601da7();
    /* 00603042: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00603044: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00603047: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0060304a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0060304d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00603050: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00603053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603054: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 00603057: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603058: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060305b: call 0x601da7 */ r_esp -= 4; W32(r_esp, 0x603060u); f_00601da7();
    /* 00603060: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00603062: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00603065: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00603068: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0060306b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060306d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00603070: call 0x602a47 */ r_esp -= 4; W32(r_esp, 0x603075u); f_00602a47();
    /* 00603075: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00603077: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060307a: call 0x602a88 */ r_esp -= 4; W32(r_esp, 0x60307fu); f_00602a88();
    /* 0060307f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00603082: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00603085: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603086: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00603089: call 0x6029c3 */ r_esp -= 4; W32(r_esp, 0x60308eu); f_006029c3();
    /* 0060308e: cmp dword ptr [ebp - 0x18], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603095: jl 0x6030a5 */ if ((fS!=fO)) goto L_006030a5;
L_00603097:; BB(0x00603097);
    /* 00603097: mov dword ptr [ebp - 0x18], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe8u), 0x3b9aca00u);
    /* 0060309e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_006030a5:; BB(0x006030a5);
    /* 006030a5: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006030a8: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 006030ab: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006030ae: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 006030b1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006030b3: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x6030b6u); call_ind(t); }
    /* 006030b6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006030b9: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 006030bc: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006030bf: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 006030c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006030c4: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x6030c7u); call_ind(t); }
    /* 006030c7: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 006030ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006030cb: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 006030ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006030cf: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 006030d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006030d3: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x6030d8u); f_00429a59();
    /* 006030d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006030db: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 006030de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006030df: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006030e2: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006030e5: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 006030e8: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x6030edu); f_004267ae();
    /* 006030ed: mov esp, ebp */ r_esp = r_ebp;
    /* 006030ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006030f0: ret  */ FN_RET(0x00603026); r_esp += 4; return;
}

void f_006030f1(void) /* FUN_006030f1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006030f1);
    /* 006030f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006030f2: mov ebp, esp */ r_ebp = r_esp;
    /* 006030f4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006030f7: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006030fa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006030fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006030fe: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00603101: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603102: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00603105: call 0x601da7 */ r_esp -= 4; W32(r_esp, 0x60310au); f_00601da7();
    /* 0060310a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060310c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0060310f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00603112: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00603115: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00603118: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603119: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060311c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0060311f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00603122: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x603127u); f_004267fb();
    /* 00603127: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0060312a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060312b: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0060312e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060312f: call 0x600940 */ r_esp -= 4; W32(r_esp, 0x603134u); f_00600940();
    /* 00603134: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603137: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603139: je 0x603169 */ if (fZ) goto L_00603169;
L_0060313b:; BB(0x0060313b);
    /* 0060313b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060313e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060313f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603142: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603143: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00603146: call 0x601f6f */ r_esp -= 4; W32(r_esp, 0x60314bu); f_00601f6f();
    /* 0060314b: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0060314e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00603151: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603152: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00603155: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603156: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00603159: call 0x601da7 */ r_esp -= 4; W32(r_esp, 0x60315eu); f_00601da7();
    /* 0060315e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00603160: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00603163: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00603166: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00603169:; BB(0x00603169);
    /* 00603169: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060316c: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0060316f: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603172: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603173: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00603176: call 0x602a47 */ r_esp -= 4; W32(r_esp, 0x60317bu); f_00602a47();
    /* 0060317b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060317e: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603182: je 0x6031a6 */ if (fZ) goto L_006031a6;
L_00603184:; BB(0x00603184);
    /* 00603184: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00603187: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0060318a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060318d: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00603190: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603192: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x603195u); call_ind(t); }
    /* 00603195: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00603198: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0060319b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060319e: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 006031a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006031a3: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x6031a6u); call_ind(t); }
L_006031a6:; BB(0x006031a6);
    /* 006031a6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006031a9: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006031ac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006031af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006031b2: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006031b5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006031b8: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 006031bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006031bc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006031bf: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006031c2: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 006031c5: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x6031cau); f_004267ae();
    /* 006031ca: mov esp, ebp */ r_esp = r_ebp;
    /* 006031cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006031cd: ret 4 */ FN_RET(0x006030f1); r_esp += 8; return;
}

void f_006031d0(void) /* FUN_006031d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006031d0);
    /* 006031d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006031d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006031d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006031d6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006031d9: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 006031df: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 006031e6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006031ed: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006031f2: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x6031f7u); f_0060ee31();
    /* 006031f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006031fa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006031fd: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00603203: jmp 0x603211 */ goto L_00603211;
L_00603205:; BB(0x00603205);
    /* 00603205: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00603209: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0060320d: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_00603211:; BB(0x00603211);
    /* 00603211: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00603215: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603218: jge 0x60324a */ if ((fS==fO)) goto L_0060324a;
L_0060321a:; BB(0x0060321a);
    /* 0060321a: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0060321e: fld qword ptr [0x63c598] */ FPUSH(R_F64((u32)(0x63c598u)));
    /* 00603224: fmul qword ptr [edx*8 + 0x69c528] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x69c528u));
    /* 0060322b: fadd qword ptr [ebp - 0x14] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffecu));
    /* 0060322e: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00603231: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 00603234: fcomp qword ptr [ebp - 0x14] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffecu))); FPOP();
    /* 00603237: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00603239: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0060323c: je 0x603248 */ if (fZ) goto L_00603248;
L_0060323e:; BB(0x0060323e);
    /* 0060323e: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00603242: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00603246: jmp 0x60324a */ goto L_0060324a;
L_00603248:; BB(0x00603248);
    /* 00603248: jmp 0x603205 */ goto L_00603205;
L_0060324a:; BB(0x0060324a);
    /* 0060324a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060324e: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603251: jne 0x60325d */ if (!fZ) goto L_0060325d;
L_00603253:; BB(0x00603253);
    /* 00603253: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603256: call 0x603491 */ r_esp -= 4; W32(r_esp, 0x60325bu); f_00603491();
    /* 0060325b: jmp 0x60328e */ goto L_0060328e;
L_0060325d:; BB(0x0060325d);
    /* 0060325d: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00603263: jmp 0x603271 */ goto L_00603271;
L_00603265:; BB(0x00603265);
    /* 00603265: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00603269: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0060326d: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
L_00603271:; BB(0x00603271);
    /* 00603271: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00603275: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603278: jge 0x60328e */ if ((fS==fO)) goto L_0060328e;
L_0060327a:; BB(0x0060327a);
    /* 0060327a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060327e: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00603282: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603285: mov dword ptr [eax + edx*4 + 0x84], ecx */ W32((u32)(r_eax+r_edx*4+0x84u), r_ecx);
    /* 0060328c: jmp 0x603265 */ goto L_00603265;
L_0060328e:; BB(0x0060328e);
    /* 0060328e: mov esp, ebp */ r_esp = r_ebp;
    /* 00603290: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603291: ret  */ FN_RET(0x006031d0); r_esp += 4; return;
}

void f_00603292(void) /* FUN_00603292 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603292);
    /* 00603292: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603293: mov ebp, esp */ r_ebp = r_esp;
    /* 00603295: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603298: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0060329b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006032a2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006032a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006032ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006032ae: cmp dword ptr [eax + 0x80], -1 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006032b5: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 006032b8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006032bb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006032be: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 006032c1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006032c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006032c6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006032c9: call 0x602a47 */ r_esp -= 4; W32(r_esp, 0x6032ceu); f_00602a47();
    /* 006032ce: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006032d1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006032d4: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 006032da: cmp eax, dword ptr [edx + 0x88] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006032e0: jne 0x6032f6 */ if (!fZ) goto L_006032f6;
L_006032e2:; BB(0x006032e2);
    /* 006032e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006032e5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006032e8: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 006032ee: cmp eax, dword ptr [edx + 0x8c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006032f4: je 0x603314 */ if (fZ) goto L_00603314;
L_006032f6:; BB(0x006032f6);
    /* 006032f6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006032fd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603300: call 0x602ce9 */ r_esp -= 4; W32(r_esp, 0x603305u); f_00602ce9();
    /* 00603305: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00603307: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060330a: call 0x602a88 */ r_esp -= 4; W32(r_esp, 0x60330fu); f_00602a88();
    /* 0060330f: jmp 0x6033bd */ goto L_006033bd;
L_00603314:; BB(0x00603314);
    /* 00603314: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603317: cmp dword ptr [ecx + 0x84], 7 */ {  u32 a = R32((u32)(r_ecx+0x84u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060331e: je 0x6033a4 */ if (fZ) goto L_006033a4;
L_00603324:; BB(0x00603324);
    /* 00603324: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603327: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0060332d: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00603330: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603333: mov edx, dword ptr [eax + ecx*4 + 0x69c4cc] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x69c4ccu));
    /* 0060333a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0060333d: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603341: je 0x603362 */ if (fZ) goto L_00603362;
L_00603343:; BB(0x00603343);
    /* 00603343: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00603346: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 0060334c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060334f: imul edx, dword ptr [ecx*4 + 0x69c4b8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx*4+0x69c4b8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00603357: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603358: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060335b: call 0x602a88 */ r_esp -= 4; W32(r_esp, 0x603360u); f_00602a88();
    /* 00603360: jmp 0x60336e */ goto L_0060336e;
L_00603362:; BB(0x00603362);
    /* 00603362: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603366: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603369: call 0x602a88 */ r_esp -= 4; W32(r_esp, 0x60336eu); f_00602a88();
L_0060336e:; BB(0x0060336e);
    /* 0060336e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603371: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603372: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603375: call 0x602bae */ r_esp -= 4; W32(r_esp, 0x60337au); f_00602bae();
    /* 0060337a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00603380: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x603385u); f_0045cb85();
    /* 00603385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603387: je 0x6033a2 */ if (fZ) goto L_006033a2;
L_00603389:; BB(0x00603389);
    /* 00603389: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060338b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060338d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060338f: push 0x19258 */ { u32 v = 0x19258u; r_esp -= 4; W32(r_esp, v); }
    /* 00603394: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 0060339a: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0060339d: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x6033a2u); f_005e8389();
L_006033a2:; BB(0x006033a2);
    /* 006033a2: jmp 0x6033bd */ goto L_006033bd;
L_006033a4:; BB(0x006033a4);
    /* 006033a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006033a7: call 0x602ce9 */ r_esp -= 4; W32(r_esp, 0x6033acu); f_00602ce9();
    /* 006033ac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006033af: call 0x603527 */ r_esp -= 4; W32(r_esp, 0x6033b4u); f_00603527();
    /* 006033b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006033b7: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
L_006033bd:; BB(0x006033bd);
    /* 006033bd: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006033c1: je 0x6033f2 */ if (fZ) goto L_006033f2;
L_006033c3:; BB(0x006033c3);
    /* 006033c3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006033c6: cmp dword ptr [edx + 0x84], 7 */ {  u32 a = R32((u32)(r_edx+0x84u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006033cd: jne 0x6033d5 */ if (!fZ) goto L_006033d5;
L_006033cf:; BB(0x006033cf);
    /* 006033cf: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006033d3: jne 0x6033f2 */ if (!fZ) goto L_006033f2;
L_006033d5:; BB(0x006033d5);
    /* 006033d5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006033d7: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 006033dc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006033df: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 006033e5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006033e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006033ea: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6033edu); call_ind(t); }
    /* 006033ed: jmp 0x603475 */ goto L_00603475;
L_006033f2:; BB(0x006033f2);
    /* 006033f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006033f5: cmp dword ptr [eax + 0x80], -1 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006033fc: je 0x603439 */ if (fZ) goto L_00603439;
L_006033fe:; BB(0x006033fe);
    /* 006033fe: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603402: je 0x60341f */ if (fZ) goto L_0060341f;
L_00603404:; BB(0x00603404);
    /* 00603404: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00603406: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 0060340c: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0060340f: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00603415: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00603418: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060341a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x60341du); call_ind(t); }
    /* 0060341d: jmp 0x603437 */ goto L_00603437;
L_0060341f:; BB(0x0060341f);
    /* 0060341f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00603421: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00603426: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00603429: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 0060342f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00603432: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603434: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x603437u); call_ind(t); }
L_00603437:; BB(0x00603437);
    /* 00603437: jmp 0x603475 */ goto L_00603475;
L_00603439:; BB(0x00603439);
    /* 00603439: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060343c: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603440: jne 0x60345d */ if (!fZ) goto L_0060345d;
L_00603442:; BB(0x00603442);
    /* 00603442: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00603444: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 0060344a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0060344d: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00603453: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00603456: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603458: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x60345bu); call_ind(t); }
    /* 0060345b: jmp 0x603475 */ goto L_00603475;
L_0060345d:; BB(0x0060345d);
    /* 0060345d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060345f: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00603464: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00603467: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 0060346d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00603470: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603472: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x603475u); call_ind(t); }
L_00603475:; BB(0x00603475);
    /* 00603475: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00603477: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 0060347c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0060347f: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00603485: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00603488: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060348a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x60348du); call_ind(t); }
    /* 0060348d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060348f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603490: ret  */ FN_RET(0x00603292); r_esp += 4; return;
}

void f_00603491(void) /* FUN_00603491 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603491);
    /* 00603491: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603492: mov ebp, esp */ r_ebp = r_esp;
    /* 00603494: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603495: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00603498: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060349a: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x60349fu); f_0060ee31();
    /* 0060349f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006034a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006034a5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 006034ab: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006034ad: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x6034b2u); f_0060ee31();
    /* 006034b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006034b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006034b8: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 006034be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006034c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006034c4: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 006034ca: cmp edx, dword ptr [ecx + 0x88] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006034d0: je 0x6034e7 */ if (fZ) goto L_006034e7;
L_006034d2:; BB(0x006034d2);
    /* 006034d2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006034d4: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x6034d9u); f_0060ee31();
    /* 006034d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006034dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006034df: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 006034e5: jmp 0x603523 */ goto L_00603523;
L_006034e7:; BB(0x006034e7);
    /* 006034e7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006034e9: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x6034eeu); f_0060ee31();
    /* 006034ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006034f1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006034f4: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
    /* 006034fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006034fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603500: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00603506: cmp edx, dword ptr [ecx + 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x84u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060350c: jl 0x603523 */ if ((fS!=fO)) goto L_00603523;
L_0060350e:; BB(0x0060350e);
    /* 0060350e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603511: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00603517: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060351a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060351d: mov dword ptr [edx + 0x8c], ecx */ W32((u32)(r_edx+0x8cu), r_ecx);
L_00603523:; BB(0x00603523);
    /* 00603523: mov esp, ebp */ r_esp = r_ebp;
    /* 00603525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603526: ret  */ FN_RET(0x00603491); r_esp += 4; return;
}

void f_00603527(void) /* FUN_00603527 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603527);
    /* 00603527: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603528: mov ebp, esp */ r_ebp = r_esp;
    /* 0060352a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060352d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00603530: mov word ptr [ebp - 0xc], 0xffff */ W16((u32)(r_ebp+0xfffffff4u), 0xffffu);
    /* 00603536: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0060353c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00603543: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0060354a: jmp 0x603558 */ goto L_00603558;
L_0060354c:; BB(0x0060354c);
    /* 0060354c: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00603550: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00603554: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00603558:; BB(0x00603558);
    /* 00603558: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0060355c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060355f: jge 0x603574 */ if ((fS==fO)) goto L_00603574;
L_00603561:; BB(0x00603561);
    /* 00603561: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00603565: fld qword ptr [ebp - 0x14] */ FPUSH(R_F64((u32)(r_ebp+0xffffffecu)));
    /* 00603568: fadd qword ptr [edx*8 + 0x69c568] */ ST(0) = ST(0) + R_F64((u32)(r_edx*8+0x69c568u));
    /* 0060356f: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00603572: jmp 0x60354c */ goto L_0060354c;
L_00603574:; BB(0x00603574);
    /* 00603574: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00603579: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x60357eu); f_0060ee31();
    /* 0060357e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603581: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00603584: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0060358a: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00603591: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00603598: jmp 0x6035a6 */ goto L_006035a6;
L_0060359a:; BB(0x0060359a);
    /* 0060359a: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0060359e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 006035a2: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_006035a6:; BB(0x006035a6);
    /* 006035a6: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 006035aa: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006035ad: jge 0x6035df */ if ((fS==fO)) goto L_006035df;
L_006035af:; BB(0x006035af);
    /* 006035af: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 006035b3: fld qword ptr [0x63c598] */ FPUSH(R_F64((u32)(0x63c598u)));
    /* 006035b9: fmul qword ptr [edx*8 + 0x69c568] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x69c568u));
    /* 006035c0: fadd qword ptr [ebp - 0x14] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffecu));
    /* 006035c3: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 006035c6: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 006035c9: fcomp qword ptr [ebp - 0x14] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffecu))); FPOP();
    /* 006035cc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006035ce: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006035d1: je 0x6035dd */ if (fZ) goto L_006035dd;
L_006035d3:; BB(0x006035d3);
    /* 006035d3: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 006035d7: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 006035db: jmp 0x6035df */ goto L_006035df;
L_006035dd:; BB(0x006035dd);
    /* 006035dd: jmp 0x60359a */ goto L_0060359a;
L_006035df:; BB(0x006035df);
    /* 006035df: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 006035e3: mov esp, ebp */ r_esp = r_ebp;
    /* 006035e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006035e6: ret  */ FN_RET(0x00603527); r_esp += 4; return;
}

void f_006035e7(void) /* FUN_006035e7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006035e7);
    /* 006035e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006035e8: mov ebp, esp */ r_ebp = r_esp;
    /* 006035ea: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006035ed: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006035f0: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006035f6: jmp 0x603604 */ goto L_00603604;
L_006035f8:; BB(0x006035f8);
    /* 006035f8: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 006035fc: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00603600: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00603604:; BB(0x00603604);
    /* 00603604: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603608: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060360b: jge 0x60366c */ if ((fS==fO)) goto L_0060366c;
L_0060360d:; BB(0x0060360d);
    /* 0060360d: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603611: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603614: mov ecx, dword ptr [eax + edx*4 + 0x3c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 00603618: mov dword ptr [ecx + 0x6c], 2 */ W32((u32)(r_ecx+0x6cu), 0x2u);
    /* 0060361f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00603621: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x603626u); f_0048ab58();
    /* 00603626: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603629: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060362c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603630: je 0x60364f */ if (fZ) goto L_0060364f;
L_00603632:; BB(0x00603632);
    /* 00603632: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603636: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00603638: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0060363a: not edx */ r_edx = ~r_edx;
    /* 0060363c: and edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0060363f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603640: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00603642: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603645: call 0x604246 */ r_esp -= 4; W32(r_esp, 0x60364au); f_00604246();
    /* 0060364a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0060364d: jmp 0x603656 */ goto L_00603656;
L_0060364f:; BB(0x0060364f);
    /* 0060364f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00603656:; BB(0x00603656);
    /* 00603656: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603659: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060365a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060365e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603661: mov ecx, dword ptr [edx + ecx*4 + 0x3c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x3cu));
    /* 00603665: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x60366au); f_005e4060();
    /* 0060366a: jmp 0x6035f8 */ goto L_006035f8;
L_0060366c:; BB(0x0060366c);
    /* 0060366c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060366e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060366f: ret 4 */ FN_RET(0x006035e7); r_esp += 8; return;
}

void f_00603672(void) /* FUN_00603672 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603672);
    /* 00603672: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603673: mov ebp, esp */ r_ebp = r_esp;
    /* 00603675: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603678: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0060367b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060367e: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603682: je 0x6036bb */ if (fZ) goto L_006036bb;
L_00603684:; BB(0x00603684);
    /* 00603684: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603687: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0060368a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0060368d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603690: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00603693: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603697: je 0x6036aa */ if (fZ) goto L_006036aa;
L_00603699:; BB(0x00603699);
    /* 00603699: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060369b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060369e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006036a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006036a3: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x6036a5u); call_ind(t); }
    /* 006036a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006036a8: jmp 0x6036b1 */ goto L_006036b1;
L_006036aa:; BB(0x006036aa);
    /* 006036aa: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_006036b1:; BB(0x006036b1);
    /* 006036b1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006036b4: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
L_006036bb:; BB(0x006036bb);
    /* 006036bb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006036be: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006036c2: jne 0x6036f4 */ if (!fZ) goto L_006036f4;
L_006036c4:; BB(0x006036c4);
    /* 006036c4: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006036c6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6036cbu); f_0048ab58();
    /* 006036cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006036ce: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006036d1: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006036d5: je 0x6036e4 */ if (fZ) goto L_006036e4;
L_006036d7:; BB(0x006036d7);
    /* 006036d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006036da: call 0x6047b3 */ r_esp -= 4; W32(r_esp, 0x6036dfu); f_006047b3();
    /* 006036df: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006036e2: jmp 0x6036eb */ goto L_006036eb;
L_006036e4:; BB(0x006036e4);
    /* 006036e4: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_006036eb:; BB(0x006036eb);
    /* 006036eb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006036ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006036f1: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_006036f4:; BB(0x006036f4);
    /* 006036f4: mov esp, ebp */ r_esp = r_ebp;
    /* 006036f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006036f7: ret  */ FN_RET(0x00603672); r_esp += 4; return;
}

void f_006036f8(void) /* FUN_006036f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006036f8);
    /* 006036f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006036f9: mov ebp, esp */ r_ebp = r_esp;
    /* 006036fb: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006036fe: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00603701: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00603703: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603706: call 0x425366 */ r_esp -= 4; W32(r_esp, 0x60370bu); f_00425366();
    /* 0060370b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060370e: mov dword ptr [eax], 0x63c5ac */ W32((u32)(r_eax), 0x63c5acu);
    /* 00603714: push 0x3250 */ { u32 v = 0x3250u; r_esp -= 4; W32(r_esp, v); }
    /* 00603719: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x60371eu); f_0048ab58();
    /* 0060371e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603721: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00603724: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603728: je 0x60373d */ if (fZ) goto L_0060373d;
L_0060372a:; BB(0x0060372a);
    /* 0060372a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060372c: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0060372e: push -0x64 */ { u32 v = 0xffffff9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00603730: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603733: call 0x41e7f0 */ r_esp -= 4; W32(r_esp, 0x603738u); f_0041e7f0();
    /* 00603738: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0060373b: jmp 0x603744 */ goto L_00603744;
L_0060373d:; BB(0x0060373d);
    /* 0060373d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00603744:; BB(0x00603744);
    /* 00603744: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603747: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060374a: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0060374d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603750: mov esp, ebp */ r_esp = r_ebp;
    /* 00603752: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603753: ret  */ FN_RET(0x006036f8); r_esp += 4; return;
}

void f_00603754(void) /* FUN_00603754 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603754);
    /* 00603754: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603755: mov ebp, esp */ r_ebp = r_esp;
    /* 00603757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603758: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060375b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060375e: mov dword ptr [eax], 0x63c5ac */ W32((u32)(r_eax), 0x63c5acu);
    /* 00603764: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603767: call 0x425495 */ r_esp -= 4; W32(r_esp, 0x60376cu); f_00425495();
    /* 0060376c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060376e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060376f: ret  */ FN_RET(0x00603754); r_esp += 4; return;
}

void f_00603770(void) /* FUN_00603770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603770);
    /* 00603770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603771: mov ebp, esp */ r_ebp = r_esp;
    /* 00603773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00603777: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060377a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0060377d: call 0x426404 */ r_esp -= 4; W32(r_esp, 0x603782u); f_00426404();
    /* 00603782: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603785: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603786: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 0060378c: call 0x447faa */ r_esp -= 4; W32(r_esp, 0x603791u); f_00447faa();
    /* 00603791: mov esp, ebp */ r_esp = r_ebp;
    /* 00603793: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603794: ret  */ FN_RET(0x00603770); r_esp += 4; return;
}

void f_00603795(void) /* FUN_00603795 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603795);
    /* 00603795: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603796: mov ebp, esp */ r_ebp = r_esp;
    /* 00603798: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603799: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060379c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060379f: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x6037a4u); f_005d5d20();
    /* 006037a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006037a7: mov dword ptr [eax], 0x63c5dc */ W32((u32)(r_eax), 0x63c5dcu);
    /* 006037ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006037b0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006037b3: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 006037b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006037bc: mov esp, ebp */ r_esp = r_ebp;
    /* 006037be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006037bf: ret 4 */ FN_RET(0x00603795); r_esp += 8; return;
}

void f_006037c2(void) /* FUN_006037c2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006037c2);
    /* 006037c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006037c3: mov ebp, esp */ r_ebp = r_esp;
    /* 006037c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006037c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006037c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006037cc: mov dword ptr [eax], 0x63c5dc */ W32((u32)(r_eax), 0x63c5dcu);
    /* 006037d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006037d5: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x6037dau); f_005d5dfb();
    /* 006037da: mov esp, ebp */ r_esp = r_ebp;
    /* 006037dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006037dd: ret  */ FN_RET(0x006037c2); r_esp += 4; return;
}

void f_006037de(void) /* FUN_006037de */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006037de);
    /* 006037de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006037df: mov ebp, esp */ r_ebp = r_esp;
    /* 006037e1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006037e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006037e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006037e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006037eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006037ed: push 0x186a4 */ { u32 v = 0x186a4u; r_esp -= 4; W32(r_esp, v); }
    /* 006037f2: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 006037f7: mov ecx, dword ptr [eax + 0x1cb0] */ r_ecx = R32((u32)(r_eax+0x1cb0u));
    /* 006037fd: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x603802u); f_005e8389();
    /* 00603802: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603805: mov edx, dword ptr [ecx + 0xcc] */ r_edx = R32((u32)(r_ecx+0xccu));
    /* 0060380b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0060380e: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00603812: ja 0x60385d */ if ((!fC&&!fZ)) goto L_0060385d;
L_00603814:; BB(0x00603814);
    /* 00603814: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603817: jmp dword ptr [eax*4 + 0x603861] */ { u32 t = R32((u32)(r_eax*4+0x603861u)); switch (t) { case 0x60381eu: goto L_0060381e; case 0x60382bu: goto L_0060382b; case 0x603838u: goto L_00603838; case 0x603845u: goto L_00603845; case 0x603852u: goto L_00603852; default: UNSUP(0x00603817, "jump table entry is not a known target"); } }
L_0060381e:; BB(0x0060381e);
    /* 0060381e: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 00603824: call 0x602eaf */ r_esp -= 4; W32(r_esp, 0x603829u); f_00602eaf();
    /* 00603829: jmp 0x60385d */ goto L_0060385d;
L_0060382b:; BB(0x0060382b);
    /* 0060382b: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 00603831: call 0x602f10 */ r_esp -= 4; W32(r_esp, 0x603836u); f_00602f10();
    /* 00603836: jmp 0x60385d */ goto L_0060385d;
L_00603838:; BB(0x00603838);
    /* 00603838: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 0060383e: call 0x602faa */ r_esp -= 4; W32(r_esp, 0x603843u); f_00602faa();
    /* 00603843: jmp 0x60385d */ goto L_0060385d;
L_00603845:; BB(0x00603845);
    /* 00603845: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 0060384b: call 0x602fc5 */ r_esp -= 4; W32(r_esp, 0x603850u); f_00602fc5();
    /* 00603850: jmp 0x60385d */ goto L_0060385d;
L_00603852:; BB(0x00603852);
    /* 00603852: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 00603858: call 0x603026 */ r_esp -= 4; W32(r_esp, 0x60385du); f_00603026();
L_0060385d:; BB(0x0060385d);
    /* 0060385d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060385f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603860: ret  */ FN_RET(0x006037de); r_esp += 4; return;
}

void f_00603875(void) /* FUN_00603875 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603875);
    /* 00603875: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603876: mov ebp, esp */ r_ebp = r_esp;
    /* 00603878: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603879: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060387c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060387f: mov eax, dword ptr [eax + 0xcc] */ r_eax = R32((u32)(r_eax+0xccu));
    /* 00603885: mov esp, ebp */ r_esp = r_ebp;
    /* 00603887: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603888: ret  */ FN_RET(0x00603875); r_esp += 4; return;
}

void f_00603889(void) /* FUN_00603889 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603889);
    /* 00603889: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060388a: mov ebp, esp */ r_ebp = r_esp;
    /* 0060388c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060388f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00603892: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603895: call 0x5d6575 */ r_esp -= 4; W32(r_esp, 0x60389au); f_005d6575();
    /* 0060389a: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 0060389f: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006038a3: je 0x603929 */ if (fZ) goto L_00603929;
L_006038a9:; BB(0x006038a9);
    /* 006038a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006038ac: call 0x603875 */ r_esp -= 4; W32(r_esp, 0x6038b1u); f_00603875();
    /* 006038b1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006038b4: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006038b8: ja 0x603929 */ if ((!fC&&!fZ)) goto L_00603929;
L_006038ba:; BB(0x006038ba);
    /* 006038ba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006038bd: jmp dword ptr [ecx*4 + 0x60392d] */ { u32 t = R32((u32)(r_ecx*4+0x60392du)); switch (t) { case 0x6038c4u: goto L_006038c4; case 0x6038d9u: goto L_006038d9; case 0x6038edu: goto L_006038ed; case 0x603902u: goto L_00603902; case 0x603917u: goto L_00603917; default: UNSUP(0x006038bd, "jump table entry is not a known target"); } }
L_006038c4:; BB(0x006038c4);
    /* 006038c4: push 0x221 */ { u32 v = 0x221u; r_esp -= 4; W32(r_esp, v); }
    /* 006038c9: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 006038cf: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 006038d2: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x6038d7u); f_00444067();
    /* 006038d7: jmp 0x603929 */ goto L_00603929;
L_006038d9:; BB(0x006038d9);
    /* 006038d9: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 006038de: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 006038e3: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006038e6: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x6038ebu); f_00444067();
    /* 006038eb: jmp 0x603929 */ goto L_00603929;
L_006038ed:; BB(0x006038ed);
    /* 006038ed: push 0x21f */ { u32 v = 0x21fu; r_esp -= 4; W32(r_esp, v); }
    /* 006038f2: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 006038f8: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 006038fb: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x603900u); f_00444067();
    /* 00603900: jmp 0x603929 */ goto L_00603929;
L_00603902:; BB(0x00603902);
    /* 00603902: push 0x21e */ { u32 v = 0x21eu; r_esp -= 4; W32(r_esp, v); }
    /* 00603907: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 0060390d: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00603910: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x603915u); f_00444067();
    /* 00603915: jmp 0x603929 */ goto L_00603929;
L_00603917:; BB(0x00603917);
    /* 00603917: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0060391c: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00603921: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00603924: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x603929u); f_00444067();
L_00603929:; BB(0x00603929);
    /* 00603929: mov esp, ebp */ r_esp = r_ebp;
    /* 0060392b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060392c: ret  */ FN_RET(0x00603889); r_esp += 4; return;
}

void f_00603941(void) /* FUN_00603941 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603941);
    /* 00603941: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603942: mov ebp, esp */ r_ebp = r_esp;
    /* 00603944: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603947: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060394a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060394d: call 0x5d650a */ r_esp -= 4; W32(r_esp, 0x603952u); f_005d650a();
    /* 00603952: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00603957: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060395b: je 0x6039e1 */ if (fZ) goto L_006039e1;
L_00603961:; BB(0x00603961);
    /* 00603961: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603964: call 0x603875 */ r_esp -= 4; W32(r_esp, 0x603969u); f_00603875();
    /* 00603969: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060396c: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00603970: ja 0x6039e1 */ if ((!fC&&!fZ)) goto L_006039e1;
L_00603972:; BB(0x00603972);
    /* 00603972: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603975: jmp dword ptr [ecx*4 + 0x6039e5] */ { u32 t = R32((u32)(r_ecx*4+0x6039e5u)); switch (t) { case 0x60397cu: goto L_0060397c; case 0x603991u: goto L_00603991; case 0x6039a5u: goto L_006039a5; case 0x6039bau: goto L_006039ba; case 0x6039cfu: goto L_006039cf; default: UNSUP(0x00603975, "jump table entry is not a known target"); } }
L_0060397c:; BB(0x0060397c);
    /* 0060397c: push 0x221 */ { u32 v = 0x221u; r_esp -= 4; W32(r_esp, v); }
    /* 00603981: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00603987: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 0060398a: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x60398fu); f_00443fda();
    /* 0060398f: jmp 0x6039e1 */ goto L_006039e1;
L_00603991:; BB(0x00603991);
    /* 00603991: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00603996: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 0060399b: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0060399e: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x6039a3u); f_00443fda();
    /* 006039a3: jmp 0x6039e1 */ goto L_006039e1;
L_006039a5:; BB(0x006039a5);
    /* 006039a5: push 0x21f */ { u32 v = 0x21fu; r_esp -= 4; W32(r_esp, v); }
    /* 006039aa: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 006039b0: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 006039b3: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x6039b8u); f_00443fda();
    /* 006039b8: jmp 0x6039e1 */ goto L_006039e1;
L_006039ba:; BB(0x006039ba);
    /* 006039ba: push 0x21e */ { u32 v = 0x21eu; r_esp -= 4; W32(r_esp, v); }
    /* 006039bf: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 006039c5: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 006039c8: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x6039cdu); f_00443fda();
    /* 006039cd: jmp 0x6039e1 */ goto L_006039e1;
L_006039cf:; BB(0x006039cf);
    /* 006039cf: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 006039d4: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 006039d9: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006039dc: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x6039e1u); f_00443fda();
L_006039e1:; BB(0x006039e1);
    /* 006039e1: mov esp, ebp */ r_esp = r_ebp;
    /* 006039e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006039e4: ret  */ FN_RET(0x00603941); r_esp += 4; return;
}

void f_006039f9(void) /* FUN_006039f9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006039f9);
    /* 006039f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006039fa: mov ebp, esp */ r_ebp = r_esp;
    /* 006039fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006039fd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00603a00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603a03: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x603a08u); f_005d5d20();
    /* 00603a08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603a0b: mov dword ptr [eax], 0x63c64c */ W32((u32)(r_eax), 0x63c64cu);
    /* 00603a11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603a14: mov esp, ebp */ r_esp = r_ebp;
    /* 00603a16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603a17: ret  */ FN_RET(0x006039f9); r_esp += 4; return;
}

void f_00603a18(void) /* FUN_00603a18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603a18);
    /* 00603a18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603a19: mov ebp, esp */ r_ebp = r_esp;
    /* 00603a1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603a1c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00603a1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603a22: mov dword ptr [eax], 0x63c64c */ W32((u32)(r_eax), 0x63c64cu);
    /* 00603a28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603a2b: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x603a30u); f_005d5dfb();
    /* 00603a30: mov esp, ebp */ r_esp = r_ebp;
    /* 00603a32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603a33: ret  */ FN_RET(0x00603a18); r_esp += 4; return;
}

void f_00603a34(void) /* FUN_00603a34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603a34);
    /* 00603a34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603a35: mov ebp, esp */ r_ebp = r_esp;
    /* 00603a37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603a38: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00603a3b: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 00603a41: call 0x448c07 */ r_esp -= 4; W32(r_esp, 0x603a46u); f_00448c07();
    /* 00603a46: mov esp, ebp */ r_esp = r_ebp;
    /* 00603a48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603a49: ret  */ FN_RET(0x00603a34); r_esp += 4; return;
}

void f_00603a4a(void) /* FUN_00603a4a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603a4a);
    /* 00603a4a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603a4b: mov ebp, esp */ r_ebp = r_esp;
    /* 00603a4d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603a50: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00603a53: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603a56: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x603a5bu); f_005e3fb0();
    /* 00603a5b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603a5e: mov dword ptr [eax], 0x63c6bc */ W32((u32)(r_eax), 0x63c6bcu);
    /* 00603a64: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00603a68: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00603a6a: jle 0x603a79 */ if ((fZ||fS!=fO)) goto L_00603a79;
L_00603a6c:; BB(0x00603a6c);
    /* 00603a6c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603a6f: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00603a73: mov word ptr [edx + 0x78], ax */ W16((u32)(r_edx+0x78u), (u16)r_eax);
    /* 00603a77: jmp 0x603a82 */ goto L_00603a82;
L_00603a79:; BB(0x00603a79);
    /* 00603a79: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603a7c: mov word ptr [ecx + 0x78], 1 */ W16((u32)(r_ecx+0x78u), 0x1u);
L_00603a82:; BB(0x00603a82);
    /* 00603a82: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603a85: movsx eax, word ptr [edx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x78u));
    /* 00603a89: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00603a8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603a8d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x603a92u); f_0048ab58();
    /* 00603a92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603a95: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603a98: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00603a9e: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00603aa4: jmp 0x603ab2 */ goto L_00603ab2;
L_00603aa6:; BB(0x00603aa6);
    /* 00603aa6: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00603aaa: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00603aae: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00603ab2:; BB(0x00603ab2);
    /* 00603ab2: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603ab6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603ab9: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 00603abd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603abf: jge 0x603ad7 */ if ((fS==fO)) goto L_00603ad7;
L_00603ac1:; BB(0x00603ac1);
    /* 00603ac1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603ac5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603ac8: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00603ace: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 00603ad5: jmp 0x603aa6 */ goto L_00603aa6;
L_00603ad7:; BB(0x00603ad7);
    /* 00603ad7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603ada: mov esp, ebp */ r_esp = r_ebp;
    /* 00603adc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603add: ret 4 */ FN_RET(0x00603a4a); r_esp += 8; return;
}

void f_00603ae0(void) /* FUN_00603ae0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603ae0);
    /* 00603ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00603ae3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603ae6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00603ae9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00603aec: mov dword ptr [eax], 0x63c6bc */ W32((u32)(r_eax), 0x63c6bcu);
    /* 00603af2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603af5: cmp dword ptr [ecx + 0x80], 0 */ {  u32 a = R32((u32)(r_ecx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603afc: je 0x603baa */ if (fZ) goto L_00603baa;
L_00603b02:; BB(0x00603b02);
    /* 00603b02: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00603b08: jmp 0x603b16 */ goto L_00603b16;
L_00603b0a:; BB(0x00603b0a);
    /* 00603b0a: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00603b0e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00603b12: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00603b16:; BB(0x00603b16);
    /* 00603b16: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603b1a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603b1d: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 00603b21: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603b23: jge 0x603b85 */ if ((fS==fO)) goto L_00603b85;
L_00603b25:; BB(0x00603b25);
    /* 00603b25: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603b29: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603b2c: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00603b32: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603b36: je 0x603b83 */ if (fZ) goto L_00603b83;
L_00603b38:; BB(0x00603b38);
    /* 00603b38: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603b3c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603b3f: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00603b45: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00603b48: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00603b4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603b4e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00603b51: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603b55: je 0x603b68 */ if (fZ) goto L_00603b68;
L_00603b57:; BB(0x00603b57);
    /* 00603b57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00603b59: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603b5c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00603b5e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603b61: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x603b63u); call_ind(t); }
    /* 00603b63: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00603b66: jmp 0x603b6f */ goto L_00603b6f;
L_00603b68:; BB(0x00603b68);
    /* 00603b68: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00603b6f:; BB(0x00603b6f);
    /* 00603b6f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603b73: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603b76: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00603b7c: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
L_00603b83:; BB(0x00603b83);
    /* 00603b83: jmp 0x603b0a */ goto L_00603b0a;
L_00603b85:; BB(0x00603b85);
    /* 00603b85: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603b88: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00603b8e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00603b91: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603b94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603b95: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x603b9au); f_0048ac1b();
    /* 00603b9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603b9d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603ba0: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
L_00603baa:; BB(0x00603baa);
    /* 00603baa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603bad: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x603bb2u); f_005e3fed();
    /* 00603bb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00603bb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603bb5: ret  */ FN_RET(0x00603ae0); r_esp += 4; return;
}

void f_00603bb6(void) /* FUN_00603bb6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603bb6);
    /* 00603bb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603bb7: mov ebp, esp */ r_ebp = r_esp;
    /* 00603bb9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603bbc: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00603bbf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603bc2: call 0x5e4035 */ r_esp -= 4; W32(r_esp, 0x603bc7u); f_005e4035();
    /* 00603bc7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603bca: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 00603bd1: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00603bd3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603bd6: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 00603bda: imul edx, edx, 0x11 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x11u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00603bdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603bde: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603be1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603be3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603be6: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x603be9u); call_ind(t); }
    /* 00603be9: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00603bef: jmp 0x603bfd */ goto L_00603bfd;
L_00603bf1:; BB(0x00603bf1);
    /* 00603bf1: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00603bf5: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00603bf9: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00603bfd:; BB(0x00603bfd);
    /* 00603bfd: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603c01: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603c04: movsx eax, word ptr [edx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x78u));
    /* 00603c08: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603c0a: jge 0x603d6f */ if ((fS==fO)) goto L_00603d6f;
L_00603c10:; BB(0x00603c10);
    /* 00603c10: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00603c12: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x603c17u); f_0048ab58();
    /* 00603c17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603c1a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00603c1d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603c21: je 0x603c30 */ if (fZ) goto L_00603c30;
L_00603c23:; BB(0x00603c23);
    /* 00603c23: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603c26: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x603c2bu); f_005e9d30();
    /* 00603c2b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00603c2e: jmp 0x603c37 */ goto L_00603c37;
L_00603c30:; BB(0x00603c30);
    /* 00603c30: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00603c37:; BB(0x00603c37);
    /* 00603c37: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603c3b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603c3e: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00603c44: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603c47: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 00603c4a: push 0x16023 */ { u32 v = 0x16023u; r_esp -= 4; W32(r_esp, v); }
    /* 00603c4f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603c53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603c56: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00603c5c: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00603c5f: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x603c64u); f_005ea0c3();
    /* 00603c64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00603c66: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603c6a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603c6d: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00603c73: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00603c76: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x603c7bu); f_005ea1cf();
    /* 00603c7b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603c7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603c82: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00603c88: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00603c8b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603c8f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603c92: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 00603c98: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00603c9b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603c9d: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x603ca0u); call_ind(t); }
    /* 00603ca0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603ca3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603ca5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603ca8: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x603cabu); call_ind(t); }
    /* 00603cab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603cac: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603cb0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603cb3: imul eax, eax, 0x11 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x11u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00603cb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603cb9: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00603cbc: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00603cbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603cbf: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603cc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603cc6: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00603ccc: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00603ccf: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603cd3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603cd6: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 00603cdc: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00603cdf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603ce1: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x603ce4u); call_ind(t); }
    /* 00603ce4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603ce7: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x603cecu); f_005d9883();
    /* 00603cec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603ced: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603cf1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603cf4: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00603cfa: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00603cfd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603d01: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603d04: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 00603d0a: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00603d0d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603d0f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x603d12u); call_ind(t); }
    /* 00603d12: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603d15: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x603d1au); f_005d96a9();
    /* 00603d1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603d1c: je 0x603d45 */ if (fZ) goto L_00603d45;
L_00603d1e:; BB(0x00603d1e);
    /* 00603d1e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603d22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603d25: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00603d2b: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00603d2e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603d32: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603d35: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 00603d3b: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00603d3e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603d40: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x603d43u); call_ind(t); }
    /* 00603d43: jmp 0x603d6a */ goto L_00603d6a;
L_00603d45:; BB(0x00603d45);
    /* 00603d45: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603d49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603d4c: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00603d52: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00603d55: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603d59: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603d5c: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 00603d62: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00603d65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603d67: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x603d6au); call_ind(t); }
L_00603d6a:; BB(0x00603d6a);
    /* 00603d6a: jmp 0x603bf1 */ goto L_00603bf1;
L_00603d6f:; BB(0x00603d6f);
    /* 00603d6f: mov esp, ebp */ r_esp = r_ebp;
    /* 00603d71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603d72: ret  */ FN_RET(0x00603bb6); r_esp += 4; return;
}

void f_00603d73(void) /* FUN_00603d73 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603d73);
    /* 00603d73: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603d74: mov ebp, esp */ r_ebp = r_esp;
    /* 00603d76: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603d79: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00603d7c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00603d7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603d80: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00603d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603d84: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603d87: call 0x5e9f7d */ r_esp -= 4; W32(r_esp, 0x603d8cu); f_005e9f7d();
    /* 00603d8c: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00603d92: jmp 0x603da0 */ goto L_00603da0;
L_00603d94:; BB(0x00603d94);
    /* 00603d94: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00603d98: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00603d9c: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00603da0:; BB(0x00603da0);
    /* 00603da0: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603da4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603da7: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 00603dab: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603dad: jge 0x603e00 */ if ((fS==fO)) goto L_00603e00;
L_00603daf:; BB(0x00603daf);
    /* 00603daf: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603db3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603db6: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00603dbc: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603dc0: je 0x603dfe */ if (fZ) goto L_00603dfe;
L_00603dc2:; BB(0x00603dc2);
    /* 00603dc2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00603dc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603dc6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603dca: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603dcd: imul ecx, ecx, 0x11 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x11u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00603dd0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603dd3: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00603dd6: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00603dd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603dd9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603ddd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603de0: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00603de6: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 00603de9: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603ded: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603df0: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 00603df6: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 00603df9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00603dfb: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x603dfeu); call_ind(t); }
L_00603dfe:; BB(0x00603dfe);
    /* 00603dfe: jmp 0x603d94 */ goto L_00603d94;
L_00603e00:; BB(0x00603e00);
    /* 00603e00: mov esp, ebp */ r_esp = r_ebp;
    /* 00603e02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603e03: ret 8 */ FN_RET(0x00603d73); r_esp += 12; return;
}

void f_00603e06(void) /* FUN_00603e06 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603e06);
    /* 00603e06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603e07: mov ebp, esp */ r_ebp = r_esp;
    /* 00603e09: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603e0c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00603e0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00603e12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603e13: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603e16: call 0x5d975e */ r_esp -= 4; W32(r_esp, 0x603e1bu); f_005d975e();
    /* 00603e1b: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00603e21: jmp 0x603e2f */ goto L_00603e2f;
L_00603e23:; BB(0x00603e23);
    /* 00603e23: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00603e27: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00603e2b: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_00603e2f:; BB(0x00603e2f);
    /* 00603e2f: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603e33: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603e36: movsx ecx, word ptr [eax + 0x78] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x78u));
    /* 00603e3a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603e3c: jge 0x603e7c */ if ((fS==fO)) goto L_00603e7c;
L_00603e3e:; BB(0x00603e3e);
    /* 00603e3e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603e42: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603e45: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00603e4b: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603e4f: je 0x603e7a */ if (fZ) goto L_00603e7a;
L_00603e51:; BB(0x00603e51);
    /* 00603e51: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00603e54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603e55: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603e59: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603e5c: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00603e62: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00603e65: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603e69: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603e6c: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 00603e72: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00603e75: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603e77: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x603e7au); call_ind(t); }
L_00603e7a:; BB(0x00603e7a);
    /* 00603e7a: jmp 0x603e23 */ goto L_00603e23;
L_00603e7c:; BB(0x00603e7c);
    /* 00603e7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00603e7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603e7f: ret 4 */ FN_RET(0x00603e06); r_esp += 8; return;
}

void f_00603e82(void) /* FUN_00603e82 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603e82);
    /* 00603e82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603e83: mov ebp, esp */ r_ebp = r_esp;
    /* 00603e85: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603e88: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00603e8b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603e8e: call 0x5ea28a */ r_esp -= 4; W32(r_esp, 0x603e93u); f_005ea28a();
    /* 00603e93: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00603e99: jmp 0x603ea7 */ goto L_00603ea7;
L_00603e9b:; BB(0x00603e9b);
    /* 00603e9b: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00603e9f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00603ea3: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00603ea7:; BB(0x00603ea7);
    /* 00603ea7: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603eab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603eae: movsx eax, word ptr [edx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x78u));
    /* 00603eb2: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603eb4: jge 0x603ef0 */ if ((fS==fO)) goto L_00603ef0;
L_00603eb6:; BB(0x00603eb6);
    /* 00603eb6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603eba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603ebd: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00603ec3: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603ec7: je 0x603eee */ if (fZ) goto L_00603eee;
L_00603ec9:; BB(0x00603ec9);
    /* 00603ec9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603ecd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603ed0: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00603ed6: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 00603ed9: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603edd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603ee0: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 00603ee6: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 00603ee9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00603eeb: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x603eeeu); call_ind(t); }
L_00603eee:; BB(0x00603eee);
    /* 00603eee: jmp 0x603e9b */ goto L_00603e9b;
L_00603ef0:; BB(0x00603ef0);
    /* 00603ef0: mov esp, ebp */ r_esp = r_ebp;
    /* 00603ef2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603ef3: ret  */ FN_RET(0x00603e82); r_esp += 4; return;
}

void f_00603ef4(void) /* FUN_00603ef4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603ef4);
    /* 00603ef4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603ef5: mov ebp, esp */ r_ebp = r_esp;
    /* 00603ef7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603efa: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00603efd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603f00: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x603f05u); f_005ea2c1();
    /* 00603f05: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00603f0b: jmp 0x603f19 */ goto L_00603f19;
L_00603f0d:; BB(0x00603f0d);
    /* 00603f0d: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00603f11: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00603f15: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00603f19:; BB(0x00603f19);
    /* 00603f19: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603f1d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603f20: movsx eax, word ptr [edx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x78u));
    /* 00603f24: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603f26: jge 0x603f62 */ if ((fS==fO)) goto L_00603f62;
L_00603f28:; BB(0x00603f28);
    /* 00603f28: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603f2c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603f2f: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00603f35: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603f39: je 0x603f60 */ if (fZ) goto L_00603f60;
L_00603f3b:; BB(0x00603f3b);
    /* 00603f3b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603f3f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603f42: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00603f48: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 00603f4b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00603f4f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603f52: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 00603f58: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 00603f5b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00603f5d: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x603f60u); call_ind(t); }
L_00603f60:; BB(0x00603f60);
    /* 00603f60: jmp 0x603f0d */ goto L_00603f0d;
L_00603f62:; BB(0x00603f62);
    /* 00603f62: mov esp, ebp */ r_esp = r_ebp;
    /* 00603f64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603f65: ret  */ FN_RET(0x00603ef4); r_esp += 4; return;
}

void f_00603f66(void) /* FUN_00603f66 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603f66);
    /* 00603f66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603f67: mov ebp, esp */ r_ebp = r_esp;
    /* 00603f69: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603f6c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00603f6f: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00603f76: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00603f7d: jmp 0x603f88 */ goto L_00603f88;
L_00603f7f:; BB(0x00603f7f);
    /* 00603f7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603f82: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603f85: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00603f88:; BB(0x00603f88);
    /* 00603f88: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603f8b: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 00603f8f: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603f92: jge 0x603f9f */ if ((fS==fO)) goto L_00603f9f;
L_00603f94:; BB(0x00603f94);
    /* 00603f94: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603f97: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00603f9a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00603f9d: jmp 0x603f7f */ goto L_00603f7f;
L_00603f9f:; BB(0x00603f9f);
    /* 00603f9f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603fa2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00603fa5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00603fa8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603fac: jge 0x603fb5 */ if ((fS==fO)) goto L_00603fb5;
L_00603fae:; BB(0x00603fae);
    /* 00603fae: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_00603fb5:; BB(0x00603fb5);
    /* 00603fb5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00603fb8: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603fbb: jle 0x603fc3 */ if ((fZ||fS!=fO)) goto L_00603fc3;
L_00603fbd:; BB(0x00603fbd);
    /* 00603fbd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00603fc0: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00603fc3:; BB(0x00603fc3);
    /* 00603fc3: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00603fc5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x603fcau); f_0048ab58();
    /* 00603fca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603fcd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00603fd0: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603fd4: je 0x603feb */ if (fZ) goto L_00603feb;
L_00603fd6:; BB(0x00603fd6);
    /* 00603fd6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603fd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603fda: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00603fdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603fde: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603fe1: call 0x604004 */ r_esp -= 4; W32(r_esp, 0x603fe6u); f_00604004();
    /* 00603fe6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00603fe9: jmp 0x603ff2 */ goto L_00603ff2;
L_00603feb:; BB(0x00603feb);
    /* 00603feb: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00603ff2:; BB(0x00603ff2);
    /* 00603ff2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00603ff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603ff6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603ff9: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x603ffeu); f_005e40dc();
    /* 00603ffe: mov esp, ebp */ r_esp = r_ebp;
    /* 00604000: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604001: ret 4 */ FN_RET(0x00603f66); r_esp += 8; return;
}

void f_00604004(void) /* FUN_00604004 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604004);
    /* 00604004: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604005: mov ebp, esp */ r_ebp = r_esp;
    /* 00604007: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604008: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060400b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060400d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604010: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x604015u); f_005e6160();
    /* 00604015: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604018: mov dword ptr [eax], 0x63c70c */ W32((u32)(r_eax), 0x63c70cu);
    /* 0060401e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604021: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00604024: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00604027: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060402a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060402d: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00604030: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604033: mov dword ptr [edx + 0x24], 1 */ W32((u32)(r_edx+0x24u), 0x1u);
    /* 0060403a: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x604040u); call_ind(t); }
    /* 00604040: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604043: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00604046: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604049: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0060404c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060404f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00604052: cmp edx, dword ptr [eax + 0x7c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x7cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00604055: jge 0x604063 */ if ((fS==fO)) goto L_00604063;
L_00604057:; BB(0x00604057);
    /* 00604057: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060405a: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00604061: jmp 0x60406d */ goto L_0060406d;
L_00604063:; BB(0x00604063);
    /* 00604063: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604066: mov dword ptr [ecx + 0x2c], 1 */ W32((u32)(r_ecx+0x2cu), 0x1u);
L_0060406d:; BB(0x0060406d);
    /* 0060406d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604070: mov esp, ebp */ r_esp = r_ebp;
    /* 00604072: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604073: ret 8 */ FN_RET(0x00604004); r_esp += 12; return;
}

void f_00604076(void) /* FUN_00604076 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604076);
    /* 00604076: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604077: mov ebp, esp */ r_ebp = r_esp;
    /* 00604079: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060407a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060407d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604080: mov dword ptr [eax], 0x63c70c */ W32((u32)(r_eax), 0x63c70cu);
    /* 00604086: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604089: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 00604090: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604093: call 0x5e61d1 */ r_esp -= 4; W32(r_esp, 0x604098u); f_005e61d1();
    /* 00604098: mov esp, ebp */ r_esp = r_ebp;
    /* 0060409a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060409b: ret  */ FN_RET(0x00604076); r_esp += 4; return;
}

void f_0060409c(void) /* FUN_0060409c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060409c);
    /* 0060409c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060409d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060409f: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006040a2: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006040a5: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x6040abu); call_ind(t); }
    /* 006040ab: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006040ae: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 006040b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006040b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006040b9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006040bc: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x6040c1u); f_005e626d();
    /* 006040c1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006040c4: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006040c7: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006040cb: je 0x6040d2 */ if (fZ) goto L_006040d2;
L_006040cd:; BB(0x006040cd);
    /* 006040cd: jmp 0x604240 */ goto L_00604240;
L_006040d2:; BB(0x006040d2);
    /* 006040d2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006040d5: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006040d8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006040db: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006040e2: jmp 0x6040ed */ goto L_006040ed;
L_006040e4:; BB(0x006040e4);
    /* 006040e4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006040e7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006040ea: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_006040ed:; BB(0x006040ed);
    /* 006040ed: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006040f0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006040f3: cmp eax, dword ptr [edx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006040f6: jge 0x6041d5 */ if ((fS==fO)) goto L_006041d5;
L_006040fc:; BB(0x006040fc);
    /* 006040fc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006040ff: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00604102: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00604108: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060410b: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0060410e: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x604113u); f_005ea257();
    /* 00604113: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00604116: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604119: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0060411a: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0060411f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0060411f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0060411f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00604121: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00604124: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604127: je 0x60418a */ if (fZ) goto L_0060418a;
L_00604129:; BB(0x00604129);
    /* 00604129: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060412c: cmp dword ptr [edx + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604130: je 0x60413d */ if (fZ) goto L_0060413d;
L_00604132:; BB(0x00604132);
    /* 00604132: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604135: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604138: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060413b: jmp 0x604146 */ goto L_00604146;
L_0060413d:; BB(0x0060413d);
    /* 0060413d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604140: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00604143: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00604146:; BB(0x00604146);
    /* 00604146: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604149: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0060414c: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604150: jne 0x604159 */ if (!fZ) goto L_00604159;
L_00604152:; BB(0x00604152);
    /* 00604152: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00604159:; BB(0x00604159);
    /* 00604159: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060415d: jne 0x604166 */ if (!fZ) goto L_00604166;
L_0060415f:; BB(0x0060415f);
    /* 0060415f: mov dword ptr [ebp - 4], 0x1d */ W32((u32)(r_ebp+0xfffffffcu), 0x1du);
L_00604166:; BB(0x00604166);
    /* 00604166: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604169: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060416a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060416d: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00604170: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00604176: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604179: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0060417c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x604181u); f_005ea1cf();
    /* 00604181: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00604188: jmp 0x6041c2 */ goto L_006041c2;
L_0060418a:; BB(0x0060418a);
    /* 0060418a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060418d: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00604190: movsx ecx, word ptr [eax + 0x78] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x78u));
    /* 00604194: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604197: cmp dword ptr [edx + 0x24], ecx */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060419a: jge 0x6041c2 */ if ((fS==fO)) goto L_006041c2;
L_0060419c:; BB(0x0060419c);
    /* 0060419c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060419f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006041a2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006041a5: cmp dword ptr [ecx + 0x24], eax */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006041a8: jne 0x6041c2 */ if (!fZ) goto L_006041c2;
L_006041aa:; BB(0x006041aa);
    /* 006041aa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006041ad: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 006041b0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006041b3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006041b6: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006041b9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006041bc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006041bf: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
L_006041c2:; BB(0x006041c2);
    /* 006041c2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006041c5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006041c6: mov ecx, 0xa */ r_ecx = 0xau;
    /* 006041cb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006041cb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006041cb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006041cd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006041d0: jmp 0x6040e4 */ goto L_006040e4;
L_006041d5:; BB(0x006041d5);
    /* 006041d5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006041d9: je 0x604231 */ if (fZ) goto L_00604231;
L_006041db:; BB(0x006041db);
    /* 006041db: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006041de: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 006041e1: add eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006041e6: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006041e9: jbe 0x604215 */ if ((fC||fZ)) goto L_00604215;
L_006041eb:; BB(0x006041eb);
    /* 006041eb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006041ee: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 006041f1: movsx eax, word ptr [edx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x78u));
    /* 006041f5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006041f8: cmp dword ptr [ecx + 0x24], eax */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006041fb: jge 0x60420c */ if ((fS==fO)) goto L_0060420c;
L_006041fd:; BB(0x006041fd);
    /* 006041fd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604200: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00604203: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604206: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604209: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
L_0060420c:; BB(0x0060420c);
    /* 0060420c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060420f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00604212: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
L_00604215:; BB(0x00604215);
    /* 00604215: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00604217: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060421a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060421c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060421f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x604222u); call_ind(t); }
    /* 00604222: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00604224: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604227: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00604229: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060422c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x60422fu); call_ind(t); }
    /* 0060422f: jmp 0x604240 */ goto L_00604240;
L_00604231:; BB(0x00604231);
    /* 00604231: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604234: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00604237: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060423a: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0060423d: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
L_00604240:; BB(0x00604240);
    /* 00604240: mov esp, ebp */ r_esp = r_ebp;
    /* 00604242: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604243: ret 4 */ FN_RET(0x0060409c); r_esp += 8; return;
}

void f_00604246(void) /* FUN_00604246 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604246);
    /* 00604246: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604247: mov ebp, esp */ r_ebp = r_esp;
    /* 00604249: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060424a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060424d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00604250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604251: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604254: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x604259u); f_005d7540();
    /* 00604259: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060425c: mov dword ptr [ecx], 0x63c724 */ W32((u32)(r_ecx), 0x63c724u);
    /* 00604262: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604266: je 0x604274 */ if (fZ) goto L_00604274;
L_00604268:; BB(0x00604268);
    /* 00604268: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060426b: mov dword ptr [edx + 0x10], 1 */ W32((u32)(r_edx+0x10u), 0x1u);
    /* 00604272: jmp 0x60427e */ goto L_0060427e;
L_00604274:; BB(0x00604274);
    /* 00604274: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604277: mov dword ptr [eax + 0x10], 0xffffffff */ W32((u32)(r_eax+0x10u), 0xffffffffu);
L_0060427e:; BB(0x0060427e);
    /* 0060427e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604281: mov esp, ebp */ r_esp = r_ebp;
    /* 00604283: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604284: ret 8 */ FN_RET(0x00604246); r_esp += 12; return;
}

void f_00604287(void) /* FUN_00604287 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604287);
    /* 00604287: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604288: mov ebp, esp */ r_ebp = r_esp;
    /* 0060428a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060428b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060428e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604291: mov dword ptr [eax], 0x63c724 */ W32((u32)(r_eax), 0x63c724u);
    /* 00604297: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060429a: call 0x5d75a3 */ r_esp -= 4; W32(r_esp, 0x60429fu); f_005d75a3();
    /* 0060429f: mov esp, ebp */ r_esp = r_ebp;
    /* 006042a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006042a2: ret  */ FN_RET(0x00604287); r_esp += 4; return;
}

void f_006042a3(void) /* FUN_006042a3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006042a3);
    /* 006042a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006042a4: mov ebp, esp */ r_ebp = r_esp;
    /* 006042a6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006042a9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006042ac: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006042af: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006042b3: jne 0x6042b7 */ if (!fZ) goto L_006042b7;
L_006042b5:; BB(0x006042b5);
    /* 006042b5: jmp 0x604302 */ goto L_00604302;
L_006042b7:; BB(0x006042b7);
    /* 006042b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006042ba: call 0x604306 */ r_esp -= 4; W32(r_esp, 0x6042bfu); f_00604306();
    /* 006042bf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006042c2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006042c5: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 006042c8: call 0x5ea491 */ r_esp -= 4; W32(r_esp, 0x6042cdu); f_005ea491();
    /* 006042cd: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006042d2: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006042d5: je 0x604302 */ if (fZ) goto L_00604302;
L_006042d7:; BB(0x006042d7);
    /* 006042d7: cmp dword ptr [ebp - 4], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006042de: jge 0x6042e6 */ if ((fS==fO)) goto L_006042e6;
L_006042e0:; BB(0x006042e0);
    /* 006042e0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006042e4: jg 0x6042f3 */ if ((!fZ&&fS==fO)) goto L_006042f3;
L_006042e6:; BB(0x006042e6);
    /* 006042e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006042e9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006042eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006042ee: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x6042f1u); call_ind(t); }
    /* 006042f1: jmp 0x604302 */ goto L_00604302;
L_006042f3:; BB(0x006042f3);
    /* 006042f3: mov cl, byte ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 006042f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006042f7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006042fa: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 006042fd: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x604302u); f_005ea454();
L_00604302:; BB(0x00604302);
    /* 00604302: mov esp, ebp */ r_esp = r_ebp;
    /* 00604304: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604305: ret  */ FN_RET(0x006042a3); r_esp += 4; return;
}

void f_00604306(void) /* FUN_00604306 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604306);
    /* 00604306: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604307: mov ebp, esp */ r_ebp = r_esp;
    /* 00604309: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060430a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060430d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00604313: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x604318u); f_005d9e23();
    /* 00604318: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060431b: sub eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060431e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060431f: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x604324u); f_00624700();
    /* 00604324: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604327: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060432a: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0060432d: cmp eax, dword ptr [ecx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00604330: jge 0x604344 */ if ((fS==fO)) goto L_00604344;
L_00604332:; BB(0x00604332);
    /* 00604332: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604335: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00604338: call 0x5ea491 */ r_esp -= 4; W32(r_esp, 0x60433du); f_005ea491();
    /* 0060433d: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00604342: jmp 0x604370 */ goto L_00604370;
L_00604344:; BB(0x00604344);
    /* 00604344: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0060434a: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x60434fu); f_005d9e23();
    /* 0060434f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604352: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00604355: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604358: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0060435b: call 0x5ea491 */ r_esp -= 4; W32(r_esp, 0x604360u); f_005ea491();
    /* 00604360: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00604365: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604368: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0060436b: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0060436e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00604370:; BB(0x00604370);
    /* 00604370: mov esp, ebp */ r_esp = r_ebp;
    /* 00604372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604373: ret  */ FN_RET(0x00604306); r_esp += 4; return;
}

void f_00604374(void) /* FUN_00604374 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604374);
    /* 00604374: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604375: mov ebp, esp */ r_ebp = r_esp;
    /* 00604377: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604378: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060437b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060437e: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604382: je 0x604397 */ if (fZ) goto L_00604397;
L_00604384:; BB(0x00604384);
    /* 00604384: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00604386: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604389: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0060438c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060438f: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00604392: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00604394: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x604397u); call_ind(t); }
L_00604397:; BB(0x00604397);
    /* 00604397: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060439a: cmp dword ptr [eax + 0x10], 1 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060439e: jne 0x6043b2 */ if (!fZ) goto L_006043b2;
L_006043a0:; BB(0x006043a0);
    /* 006043a0: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006043a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006043a8: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 006043ab: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x6043b0u); f_005ea454();
    /* 006043b0: jmp 0x6043d0 */ goto L_006043d0;
L_006043b2:; BB(0x006043b2);
    /* 006043b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006043b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006043b7: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 006043ba: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x6043bfu); f_005ea454();
    /* 006043bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006043c2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006043c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006043c8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006043cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006043cd: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6043d0u); call_ind(t); }
L_006043d0:; BB(0x006043d0);
    /* 006043d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006043d3: call 0x5d765a */ r_esp -= 4; W32(r_esp, 0x6043d8u); f_005d765a();
    /* 006043d8: mov esp, ebp */ r_esp = r_ebp;
    /* 006043da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006043db: ret  */ FN_RET(0x00604374); r_esp += 4; return;
}

void f_006043dc(void) /* FUN_006043dc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006043dc);
    /* 006043dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006043dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006043df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006043e0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006043e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006043e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006043e8: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x6043edu); f_005e6160();
    /* 006043ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006043f0: mov dword ptr [eax], 0x63c73c */ W32((u32)(r_eax), 0x63c73cu);
    /* 006043f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006043f9: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00604400: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604403: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 0060440a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060440d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060440f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604410: ret  */ FN_RET(0x006043dc); r_esp += 4; return;
}

void f_00604411(void) /* FUN_00604411 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604411);
    /* 00604411: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604412: mov ebp, esp */ r_ebp = r_esp;
    /* 00604414: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604415: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00604418: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060441b: mov dword ptr [eax], 0x63c73c */ W32((u32)(r_eax), 0x63c73cu);
    /* 00604421: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604424: call 0x5e61d1 */ r_esp -= 4; W32(r_esp, 0x604429u); f_005e61d1();
    /* 00604429: mov esp, ebp */ r_esp = r_ebp;
    /* 0060442b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060442c: ret  */ FN_RET(0x00604411); r_esp += 4; return;
}

void f_0060442d(void) /* FUN_0060442d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060442d);
    /* 0060442d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060442e: mov ebp, esp */ r_ebp = r_esp;
    /* 00604430: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604433: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00604436: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00604439: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060443a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060443d: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x604442u); f_005e626d();
    /* 00604442: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00604445: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00604448: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060444c: je 0x604463 */ if (fZ) goto L_00604463;
L_0060444e:; BB(0x0060444e);
    /* 0060444e: cmp dword ptr [ebp - 0x18], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604452: je 0x60449c */ if (fZ) goto L_0060449c;
L_00604454:; BB(0x00604454);
    /* 00604454: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604458: je 0x6046f8 */ if (fZ) goto L_006046f8;
L_0060445e:; BB(0x0060445e);
    /* 0060445e: jmp 0x604734 */ goto L_00604734;
L_00604463:; BB(0x00604463);
    /* 00604463: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00604465: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00604468: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060446a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060446d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x604470u); call_ind(t); }
    /* 00604470: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 00604476: call 0x6031d0 */ r_esp -= 4; W32(r_esp, 0x60447bu); f_006031d0();
    /* 0060447b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060447d: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 00604483: call 0x6035e7 */ r_esp -= 4; W32(r_esp, 0x604488u); f_006035e7();
    /* 00604488: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060448b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060448c: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 00604492: call 0x6020f2 */ r_esp -= 4; W32(r_esp, 0x604497u); f_006020f2();
    /* 00604497: jmp 0x604734 */ goto L_00604734;
L_0060449c:; BB(0x0060449c);
    /* 0060449c: mov edx, dword ptr [0x6fc568] */ r_edx = R32((u32)(0x6fc568u));
    /* 006044a2: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 006044a5: mov dword ptr [eax + 0x6c], 6 */ W32((u32)(r_eax+0x6cu), 0x6u);
    /* 006044ac: push 0x1601d */ { u32 v = 0x1601du; r_esp -= 4; W32(r_esp, v); }
    /* 006044b1: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 006044b7: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 006044ba: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x6044bfu); f_005ea0c3();
    /* 006044bf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006044c1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6044c6u); f_0048ab58();
    /* 006044c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006044c9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006044cc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006044d0: je 0x6044e1 */ if (fZ) goto L_006044e1;
L_006044d2:; BB(0x006044d2);
    /* 006044d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006044d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006044d7: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x6044dcu); f_005d7698();
    /* 006044dc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006044df: jmp 0x6044e8 */ goto L_006044e8;
L_006044e1:; BB(0x006044e1);
    /* 006044e1: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_006044e8:; BB(0x006044e8);
    /* 006044e8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006044eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006044ec: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 006044f1: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006044f4: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x6044f9u); f_005e4060();
    /* 006044f9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006044fc: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604500: jne 0x604542 */ if (!fZ) goto L_00604542;
L_00604502:; BB(0x00604502);
    /* 00604502: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00604505: cmp dword ptr [edx + 0x24], 0 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604509: jne 0x604542 */ if (!fZ) goto L_00604542;
L_0060450b:; BB(0x0060450b);
    /* 0060450b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00604511: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x604516u); f_0045cb85();
    /* 00604516: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604518: je 0x604542 */ if (fZ) goto L_00604542;
L_0060451a:; BB(0x0060451a);
    /* 0060451a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0060451c: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00604521: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00604524: call 0x5e84f9 */ r_esp -= 4; W32(r_esp, 0x604529u); f_005e84f9();
    /* 00604529: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060452b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060452d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060452f: push 0x1925b */ { u32 v = 0x1925bu; r_esp -= 4; W32(r_esp, v); }
    /* 00604534: mov ecx, dword ptr [0x6fc564] */ r_ecx = R32((u32)(0x6fc564u));
    /* 0060453a: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0060453d: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x604542u); f_005e8389();
L_00604542:; BB(0x00604542);
    /* 00604542: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00604545: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00604548: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 0060454e: mov ecx, dword ptr [ecx + eax*4 + 0x3c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 00604552: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00604555: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00604558: mov edx, dword ptr [0x6fc568] */ r_edx = R32((u32)(0x6fc568u));
    /* 0060455e: mov eax, dword ptr [edx + eax*4 + 0x3c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x3cu));
    /* 00604562: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00604564: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x604567u); call_ind(t); }
    /* 00604567: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060456a: cmp dword ptr [eax + 0x24], 2 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060456e: jl 0x60459a */ if ((fS!=fO)) goto L_0060459a;
L_00604570:; BB(0x00604570);
    /* 00604570: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00604573: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00604576: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 0060457b: mov ecx, dword ptr [eax + edx*4 + 0x84] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x84u));
    /* 00604582: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604583: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00604586: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00604589: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 0060458f: mov ecx, dword ptr [ecx + eax*4 + 0x3c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 00604593: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x604598u); f_005ea1cf();
    /* 00604598: jmp 0x6045ba */ goto L_006045ba;
L_0060459a:; BB(0x0060459a);
    /* 0060459a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060459c: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x6045a1u); f_0060ee31();
    /* 006045a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006045a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006045a5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006045a8: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006045ab: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 006045b1: mov ecx, dword ptr [ecx + eax*4 + 0x3c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 006045b5: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x6045bau); f_005ea1cf();
L_006045ba:; BB(0x006045ba);
    /* 006045ba: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006045bc: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6045c1u); f_0048ab58();
    /* 006045c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006045c4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006045c7: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006045cb: je 0x6045e0 */ if (fZ) goto L_006045e0;
L_006045cd:; BB(0x006045cd);
    /* 006045cd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006045d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006045d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006045d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006045d6: call 0x604246 */ r_esp -= 4; W32(r_esp, 0x6045dbu); f_00604246();
    /* 006045db: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006045de: jmp 0x6045e7 */ goto L_006045e7;
L_006045e0:; BB(0x006045e0);
    /* 006045e0: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_006045e7:; BB(0x006045e7);
    /* 006045e7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006045ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006045eb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006045ee: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 006045f1: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 006045f6: mov ecx, dword ptr [eax + edx*4 + 0x3c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 006045fa: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x6045ffu); f_005e4060();
    /* 006045ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00604602: cmp dword ptr [ecx + 0x24], 2 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00604606: jl 0x604615 */ if ((fS!=fO)) goto L_00604615;
L_00604608:; BB(0x00604608);
    /* 00604608: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060460b: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060460f: jne 0x6046a0 */ if (!fZ) goto L_006046a0;
L_00604615:; BB(0x00604615);
    /* 00604615: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00604618: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060461c: je 0x604664 */ if (fZ) goto L_00604664;
L_0060461e:; BB(0x0060461e);
    /* 0060461e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00604620: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x604625u); f_0048ab58();
    /* 00604625: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604628: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0060462b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060462f: je 0x604642 */ if (fZ) goto L_00604642;
L_00604631:; BB(0x00604631);
    /* 00604631: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00604633: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00604635: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604638: call 0x604246 */ r_esp -= 4; W32(r_esp, 0x60463du); f_00604246();
    /* 0060463d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00604640: jmp 0x604649 */ goto L_00604649;
L_00604642:; BB(0x00604642);
    /* 00604642: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00604649:; BB(0x00604649);
    /* 00604649: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060464c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060464d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00604650: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00604653: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 00604659: mov ecx, dword ptr [ecx + eax*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 0060465d: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x604662u); f_005e4060();
    /* 00604662: jmp 0x6046a0 */ goto L_006046a0;
L_00604664:; BB(0x00604664);
    /* 00604664: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00604666: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x60466bu); f_0048ab58();
    /* 0060466b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060466e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00604671: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604675: je 0x604688 */ if (fZ) goto L_00604688;
L_00604677:; BB(0x00604677);
    /* 00604677: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00604679: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060467b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060467e: call 0x604246 */ r_esp -= 4; W32(r_esp, 0x604683u); f_00604246();
    /* 00604683: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00604686: jmp 0x60468f */ goto L_0060468f;
L_00604688:; BB(0x00604688);
    /* 00604688: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060468f:; BB(0x0060468f);
    /* 0060468f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00604692: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604693: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 00604698: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0060469b: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x6046a0u); f_005e4060();
L_006046a0:; BB(0x006046a0);
    /* 006046a0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006046a3: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 006046a6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006046a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006046ac: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 006046af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006046b2: cmp dword ptr [ecx + 0x20], 3 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006046b6: jl 0x6046d1 */ if ((fS!=fO)) goto L_006046d1;
L_006046b8:; BB(0x006046b8);
    /* 006046b8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006046bb: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 006046c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006046c5: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006046c8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006046cb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006046ce: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
L_006046d1:; BB(0x006046d1);
    /* 006046d1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006046d4: cmp dword ptr [eax + 0x24], 3 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006046d8: jge 0x6046e9 */ if ((fS==fO)) goto L_006046e9;
L_006046da:; BB(0x006046da);
    /* 006046da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006046dc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006046df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006046e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006046e4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6046e7u); call_ind(t); }
    /* 006046e7: jmp 0x6046f6 */ goto L_006046f6;
L_006046e9:; BB(0x006046e9);
    /* 006046e9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006046eb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006046ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006046f0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006046f3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6046f6u); call_ind(t); }
L_006046f6:; BB(0x006046f6);
    /* 006046f6: jmp 0x604734 */ goto L_00604734;
L_006046f8:; BB(0x006046f8);
    /* 006046f8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006046fa: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 006046ff: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00604702: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 00604708: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060470b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060470d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x604710u); call_ind(t); }
    /* 00604710: mov eax, dword ptr [0x6fc564] */ r_eax = R32((u32)(0x6fc564u));
    /* 00604715: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00604718: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604719: mov ecx, dword ptr [0x6fc568] */ r_ecx = R32((u32)(0x6fc568u));
    /* 0060471f: call 0x602176 */ r_esp -= 4; W32(r_esp, 0x604724u); f_00602176();
    /* 00604724: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00604726: mov edx, dword ptr [0x6fc564] */ r_edx = R32((u32)(0x6fc564u));
    /* 0060472c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0060472f: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x604734u); f_005e62ca();
L_00604734:; BB(0x00604734);
    /* 00604734: mov esp, ebp */ r_esp = r_ebp;
    /* 00604736: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604737: ret 4 */ FN_RET(0x0060442d); r_esp += 8; return;
}

void f_0060473a(void) /* FUN_0060473a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060473a);
    /* 0060473a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060473b: mov ebp, esp */ r_ebp = r_esp;
    /* 0060473d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060473e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00604741: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604744: call 0x5d7b88 */ r_esp -= 4; W32(r_esp, 0x604749u); f_005d7b88();
    /* 00604749: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060474c: mov dword ptr [eax], 0x63c754 */ W32((u32)(r_eax), 0x63c754u);
    /* 00604752: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604755: mov esp, ebp */ r_esp = r_ebp;
    /* 00604757: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604758: ret  */ FN_RET(0x0060473a); r_esp += 4; return;
}

void f_00604759(void) /* FUN_00604759 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604759);
    /* 00604759: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060475a: mov ebp, esp */ r_ebp = r_esp;
    /* 0060475c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060475d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00604760: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604763: mov dword ptr [eax], 0x63c754 */ W32((u32)(r_eax), 0x63c754u);
    /* 00604769: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060476c: call 0x5d7bb3 */ r_esp -= 4; W32(r_esp, 0x604771u); f_005d7bb3();
    /* 00604771: mov esp, ebp */ r_esp = r_ebp;
    /* 00604773: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604774: ret  */ FN_RET(0x00604759); r_esp += 4; return;
}

void f_00604775(void) /* FUN_00604775 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604775);
    /* 00604775: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604776: mov ebp, esp */ r_ebp = r_esp;
    /* 00604778: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604779: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060477c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060477f: cmp dword ptr [eax + 0x10], 1 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604783: jne 0x604791 */ if (!fZ) goto L_00604791;
L_00604785:; BB(0x00604785);
    /* 00604785: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604788: mov dword ptr [ecx + 0x10], 0xffffffff */ W32((u32)(r_ecx+0x10u), 0xffffffffu);
    /* 0060478f: jmp 0x6047af */ goto L_006047af;
L_00604791:; BB(0x00604791);
    /* 00604791: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604794: call 0x5d765a */ r_esp -= 4; W32(r_esp, 0x604799u); f_005d765a();
    /* 00604799: mov edx, dword ptr [0x6fc568] */ r_edx = R32((u32)(0x6fc568u));
    /* 0060479f: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 006047a2: mov eax, dword ptr [0x6fc568] */ r_eax = R32((u32)(0x6fc568u));
    /* 006047a7: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006047aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006047ac: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6047afu); call_ind(t); }
L_006047af:; BB(0x006047af);
    /* 006047af: mov esp, ebp */ r_esp = r_ebp;
    /* 006047b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006047b2: ret  */ FN_RET(0x00604775); r_esp += 4; return;
}

void f_006047b3(void) /* FUN_006047b3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006047b3);
    /* 006047b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006047b4: mov ebp, esp */ r_ebp = r_esp;
    /* 006047b6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006047b9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006047bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006047bf: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x6047c4u); f_005dfbf0();
    /* 006047c4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006047c7: mov dword ptr [eax], 0x63c76c */ W32((u32)(r_eax), 0x63c76cu);
    /* 006047cd: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006047d3: jmp 0x6047e1 */ goto L_006047e1;
L_006047d5:; BB(0x006047d5);
    /* 006047d5: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 006047d9: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 006047dd: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_006047e1:; BB(0x006047e1);
    /* 006047e1: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006047e5: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006047e8: jge 0x6047fb */ if ((fS==fO)) goto L_006047fb;
L_006047ea:; BB(0x006047ea);
    /* 006047ea: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006047ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006047f1: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 006047f9: jmp 0x6047d5 */ goto L_006047d5;
L_006047fb:; BB(0x006047fb);
    /* 006047fb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006047fe: mov dword ptr [edx + 0x14], 0xffffffff */ W32((u32)(r_edx+0x14u), 0xffffffffu);
    /* 00604805: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00604808: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 0060480f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00604812: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00604819: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060481c: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 00604823: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00604826: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 0060482d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00604830: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 00604837: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060483a: mov esp, ebp */ r_esp = r_ebp;
    /* 0060483c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060483d: ret  */ FN_RET(0x006047b3); r_esp += 4; return;
}

void f_0060483e(void) /* FUN_0060483e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060483e);
    /* 0060483e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060483f: mov ebp, esp */ r_ebp = r_esp;
    /* 00604841: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604842: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00604845: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604848: mov dword ptr [eax], 0x63c76c */ W32((u32)(r_eax), 0x63c76cu);
    /* 0060484e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604851: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x604856u); f_005dfc0f();
    /* 00604856: mov esp, ebp */ r_esp = r_ebp;
    /* 00604858: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604859: ret  */ FN_RET(0x0060483e); r_esp += 4; return;
}

void f_0060485a(void) /* FUN_0060485a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060485a);
    /* 0060485a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060485b: mov ebp, esp */ r_ebp = r_esp;
    /* 0060485d: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604863: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
    /* 00604869: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 0060486f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00604872: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 00604875: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 0060487f: jmp 0x604890 */ goto L_00604890;
L_00604881:; BB(0x00604881);
    /* 00604881: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00604887: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060488a: mov dword ptr [ebp - 0x104], edx */ W32((u32)(r_ebp+0xfffffefcu), r_edx);
L_00604890:; BB(0x00604890);
    /* 00604890: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 00604896: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00604899: jge 0x6048f5 */ if ((fS==fO)) goto L_006048f5;
L_0060489b:; BB(0x0060489b);
    /* 0060489b: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 006048a1: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006048a5: jl 0x6048b6 */ if ((fS!=fO)) goto L_006048b6;
L_006048a7:; BB(0x006048a7);
    /* 006048a7: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 006048ad: mov dword ptr [edx + 0x28], 3 */ W32((u32)(r_edx+0x28u), 0x3u);
    /* 006048b4: jmp 0x6048c2 */ goto L_006048c2;
L_006048b6:; BB(0x006048b6);
    /* 006048b6: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 006048bc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006048bf: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
L_006048c2:; BB(0x006048c2);
    /* 006048c2: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 006048c8: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 006048cb: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 006048d1: add eax, dword ptr [ecx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x28u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006048d4: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 006048da: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006048dd: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 006048e3: call 0x60498c */ r_esp -= 4; W32(r_esp, 0x6048e8u); f_0060498c();
    /* 006048e8: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 006048ee: call 0x604a4b */ r_esp -= 4; W32(r_esp, 0x6048f3u); f_00604a4b();
    /* 006048f3: jmp 0x604881 */ goto L_00604881;
L_006048f5:; BB(0x006048f5);
    /* 006048f5: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 006048fb: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006048fe: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00604904: add ecx, dword ptr [edx + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x20u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00604907: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 0060490d: fild dword ptr [ebp - 0x10c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffef4u)));
    /* 00604913: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00604919: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060491c: imul ecx, dword ptr [eax + 0x28] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x28u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00604920: mov dword ptr [ebp - 0x110], ecx */ W32((u32)(r_ebp+0xfffffef0u), r_ecx);
    /* 00604926: fidiv dword ptr [ebp - 0x110] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xfffffef0u));
    /* 0060492c: fmul dword ptr [0x63c5a0] */ ST(0) = ST(0) * R_F32((u32)(0x63c5a0u));
    /* 00604932: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604935: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00604938: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0060493e: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00604941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604942: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00604948: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0060494b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060494c: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00604952: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00604955: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0060495b: add ecx, dword ptr [edx + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x20u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060495e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060495f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00604962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604963: push 0x69c608 */ { u32 v = 0x69c608u; r_esp -= 4; W32(r_esp, v); }
    /* 00604968: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 0060496e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060496f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x604974u); f_00624050();
    /* 00604974: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604977: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 0060497d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060497e: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x604983u); f_0060fc40();
    /* 00604983: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604986: mov esp, ebp */ r_esp = r_ebp;
    /* 00604988: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604989: ret 8 */ FN_RET(0x0060485a); r_esp += 12; return;
}

void f_0060498c(void) /* FUN_0060498c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060498c);
    /* 0060498c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060498d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060498f: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604992: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00604995: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 0060499b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 006049a2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006049a9: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006049ae: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x6049b3u); f_0060ee31();
    /* 006049b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006049b6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006049b9: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 006049bf: jmp 0x6049cd */ goto L_006049cd;
L_006049c1:; BB(0x006049c1);
    /* 006049c1: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 006049c5: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 006049c9: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_006049cd:; BB(0x006049cd);
    /* 006049cd: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 006049d1: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006049d4: jge 0x604a06 */ if ((fS==fO)) goto L_00604a06;
L_006049d6:; BB(0x006049d6);
    /* 006049d6: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 006049da: fld qword ptr [0x63c598] */ FPUSH(R_F64((u32)(0x63c598u)));
    /* 006049e0: fmul qword ptr [edx*8 + 0x69c528] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x69c528u));
    /* 006049e7: fadd qword ptr [ebp - 0x14] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffecu));
    /* 006049ea: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 006049ed: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 006049f0: fcomp qword ptr [ebp - 0x14] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffecu))); FPOP();
    /* 006049f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006049f5: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006049f8: je 0x604a04 */ if (fZ) goto L_00604a04;
L_006049fa:; BB(0x006049fa);
    /* 006049fa: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 006049fe: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00604a02: jmp 0x604a06 */ goto L_00604a06;
L_00604a04:; BB(0x00604a04);
    /* 00604a04: jmp 0x6049c1 */ goto L_006049c1;
L_00604a06:; BB(0x00604a06);
    /* 00604a06: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00604a0a: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a0d: jne 0x604a19 */ if (!fZ) goto L_00604a19;
L_00604a0f:; BB(0x00604a0f);
    /* 00604a0f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604a12: call 0x604b0c */ r_esp -= 4; W32(r_esp, 0x604a17u); f_00604b0c();
    /* 00604a17: jmp 0x604a47 */ goto L_00604a47;
L_00604a19:; BB(0x00604a19);
    /* 00604a19: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00604a1f: jmp 0x604a2d */ goto L_00604a2d;
L_00604a21:; BB(0x00604a21);
    /* 00604a21: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00604a25: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00604a29: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
L_00604a2d:; BB(0x00604a2d);
    /* 00604a2d: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00604a31: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00604a34: jge 0x604a47 */ if ((fS==fO)) goto L_00604a47;
L_00604a36:; BB(0x00604a36);
    /* 00604a36: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00604a3a: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00604a3e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604a41: mov dword ptr [eax + edx*4 + 8], ecx */ W32((u32)(r_eax+r_edx*4+0x8u), r_ecx);
    /* 00604a45: jmp 0x604a21 */ goto L_00604a21;
L_00604a47:; BB(0x00604a47);
    /* 00604a47: mov esp, ebp */ r_esp = r_ebp;
    /* 00604a49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604a4a: ret  */ FN_RET(0x0060498c); r_esp += 4; return;
}

void f_00604a4b(void) /* FUN_00604a4b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604a4b);
    /* 00604a4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604a4c: mov ebp, esp */ r_ebp = r_esp;
    /* 00604a4e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604a51: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00604a54: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00604a5b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604a5e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00604a60: cmp dword ptr [eax + 0x14], -1 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a64: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00604a67: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00604a6a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604a6d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604a70: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00604a73: cmp ecx, dword ptr [eax + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a76: jne 0x604afe */ if (!fZ) goto L_00604afe;
L_00604a7c:; BB(0x00604a7c);
    /* 00604a7c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604a7f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604a82: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00604a85: cmp ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a88: jne 0x604afe */ if (!fZ) goto L_00604afe;
L_00604a8a:; BB(0x00604a8a);
    /* 00604a8a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604a8d: cmp dword ptr [edx + 8], 7 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a91: jne 0x604aa3 */ if (!fZ) goto L_00604aa3;
L_00604a93:; BB(0x00604a93);
    /* 00604a93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604a96: call 0x604b84 */ r_esp -= 4; W32(r_esp, 0x604a9bu); f_00604b84();
    /* 00604a9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604a9e: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00604aa1: jmp 0x604afc */ goto L_00604afc;
L_00604aa3:; BB(0x00604aa3);
    /* 00604aa3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604aa6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00604aa9: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00604aac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604aaf: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00604ab2: mov eax, dword ptr [eax + edx*4 + 0x69c4cc] */ r_eax = R32((u32)(r_eax+r_edx*4+0x69c4ccu));
    /* 00604ab9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00604abc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604ac0: je 0x604ae3 */ if (fZ) goto L_00604ae3;
L_00604ac2:; BB(0x00604ac2);
    /* 00604ac2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604ac5: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00604ac8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00604acb: imul eax, dword ptr [edx*4 + 0x69c4b8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx*4+0x69c4b8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00604ad3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604ad6: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00604ad9: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00604adb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604ade: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00604ae1: jmp 0x604af2 */ goto L_00604af2;
L_00604ae3:; BB(0x00604ae3);
    /* 00604ae3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604ae6: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00604ae9: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00604aec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604aef: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
L_00604af2:; BB(0x00604af2);
    /* 00604af2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604af5: mov dword ptr [ecx + 0x14], 0xffffffff */ W32((u32)(r_ecx+0x14u), 0xffffffffu);
L_00604afc:; BB(0x00604afc);
    /* 00604afc: jmp 0x604b08 */ goto L_00604b08;
L_00604afe:; BB(0x00604afe);
    /* 00604afe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604b01: mov dword ptr [edx + 0x14], 0xffffffff */ W32((u32)(r_edx+0x14u), 0xffffffffu);
L_00604b08:; BB(0x00604b08);
    /* 00604b08: mov esp, ebp */ r_esp = r_ebp;
    /* 00604b0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604b0b: ret  */ FN_RET(0x00604a4b); r_esp += 4; return;
}

void f_00604b0c(void) /* FUN_00604b0c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604b0c);
    /* 00604b0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604b0d: mov ebp, esp */ r_ebp = r_esp;
    /* 00604b0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604b10: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00604b13: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00604b15: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x604b1au); f_0060ee31();
    /* 00604b1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604b1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b20: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00604b23: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00604b25: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x604b2au); f_0060ee31();
    /* 00604b2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604b2d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b30: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00604b33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b39: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00604b3c: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b3f: je 0x604b53 */ if (fZ) goto L_00604b53;
L_00604b41:; BB(0x00604b41);
    /* 00604b41: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00604b43: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x604b48u); f_0060ee31();
    /* 00604b48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604b4b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b4e: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00604b51: jmp 0x604b80 */ goto L_00604b80;
L_00604b53:; BB(0x00604b53);
    /* 00604b53: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00604b55: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x604b5au); f_0060ee31();
    /* 00604b5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604b5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b60: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00604b63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b69: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00604b6c: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00604b6f: jl 0x604b80 */ if ((fS!=fO)) goto L_00604b80;
L_00604b71:; BB(0x00604b71);
    /* 00604b71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b74: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00604b77: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00604b7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b7d: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
L_00604b80:; BB(0x00604b80);
    /* 00604b80: mov esp, ebp */ r_esp = r_ebp;
    /* 00604b82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604b83: ret  */ FN_RET(0x00604b0c); r_esp += 4; return;
}

void f_00604b84(void) /* FUN_00604b84 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604b84);
    /* 00604b84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604b85: mov ebp, esp */ r_ebp = r_esp;
    /* 00604b87: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604b8a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00604b8d: mov word ptr [ebp - 0xc], 0xffff */ W16((u32)(r_ebp+0xfffffff4u), 0xffffu);
    /* 00604b93: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00604b99: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00604ba0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00604ba7: jmp 0x604bb5 */ goto L_00604bb5;
L_00604ba9:; BB(0x00604ba9);
    /* 00604ba9: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00604bad: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00604bb1: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00604bb5:; BB(0x00604bb5);
    /* 00604bb5: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00604bb9: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00604bbc: jge 0x604bd1 */ if ((fS==fO)) goto L_00604bd1;
L_00604bbe:; BB(0x00604bbe);
    /* 00604bbe: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00604bc2: fld qword ptr [ebp - 0x14] */ FPUSH(R_F64((u32)(r_ebp+0xffffffecu)));
    /* 00604bc5: fadd qword ptr [edx*8 + 0x69c568] */ ST(0) = ST(0) + R_F64((u32)(r_edx*8+0x69c568u));
    /* 00604bcc: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00604bcf: jmp 0x604ba9 */ goto L_00604ba9;
L_00604bd1:; BB(0x00604bd1);
    /* 00604bd1: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00604bd6: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x604bdbu); f_0060ee31();
    /* 00604bdb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604bde: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00604be1: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00604be7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00604bee: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00604bf5: jmp 0x604c03 */ goto L_00604c03;
L_00604bf7:; BB(0x00604bf7);
    /* 00604bf7: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00604bfb: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00604bff: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00604c03:; BB(0x00604c03);
    /* 00604c03: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00604c07: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00604c0a: jge 0x604c3c */ if ((fS==fO)) goto L_00604c3c;
L_00604c0c:; BB(0x00604c0c);
    /* 00604c0c: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00604c10: fld qword ptr [0x63c598] */ FPUSH(R_F64((u32)(0x63c598u)));
    /* 00604c16: fmul qword ptr [edx*8 + 0x69c568] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x69c568u));
    /* 00604c1d: fadd qword ptr [ebp - 0x14] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffecu));
    /* 00604c20: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00604c23: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 00604c26: fcomp qword ptr [ebp - 0x14] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffecu))); FPOP();
    /* 00604c29: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00604c2b: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00604c2e: je 0x604c3a */ if (fZ) goto L_00604c3a;
L_00604c30:; BB(0x00604c30);
    /* 00604c30: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00604c34: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 00604c38: jmp 0x604c3c */ goto L_00604c3c;
L_00604c3a:; BB(0x00604c3a);
    /* 00604c3a: jmp 0x604bf7 */ goto L_00604bf7;
L_00604c3c:; BB(0x00604c3c);
    /* 00604c3c: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00604c40: mov esp, ebp */ r_esp = r_ebp;
    /* 00604c42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604c43: ret  */ FN_RET(0x00604b84); r_esp += 4; return;
}

void f_00604c50(void) /* FUN_00604c50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604c50);
    /* 00604c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00604c53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604c54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00604c57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604c5a: call 0x600ab8 */ r_esp -= 4; W32(r_esp, 0x604c5fu); f_00600ab8();
    /* 00604c5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00604c62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00604c65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c67: je 0x604c75 */ if (fZ) goto L_00604c75;
L_00604c69:; BB(0x00604c69);
    /* 00604c69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604c6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604c6d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x604c72u); f_0048ac1b();
    /* 00604c72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00604c75:; BB(0x00604c75);
    /* 00604c75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604c78: mov esp, ebp */ r_esp = r_ebp;
    /* 00604c7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604c7b: ret 4 */ FN_RET(0x00604c50); r_esp += 8; return;
}

void f_00604c80(void) /* FUN_00604c80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604c80);
    /* 00604c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00604c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604c84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00604c87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604c8a: mov dword ptr [eax], 0x63c54c */ W32((u32)(r_eax), 0x63c54cu);
    /* 00604c90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604c93: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x604c98u); f_005e3fed();
    /* 00604c98: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00604c9b: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00604c9e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604ca0: je 0x604cae */ if (fZ) goto L_00604cae;
L_00604ca2:; BB(0x00604ca2);
    /* 00604ca2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604ca5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604ca6: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x604cabu); f_0048ac1b();
    /* 00604cab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00604cae:; BB(0x00604cae);
    /* 00604cae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604cb1: mov esp, ebp */ r_esp = r_ebp;
    /* 00604cb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604cb4: ret 4 */ FN_RET(0x00604c80); r_esp += 8; return;
}

void f_00604cc0(void) /* FUN_00604cc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604cc0);
    /* 00604cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00604cc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604cc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00604cc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604cca: call 0x603754 */ r_esp -= 4; W32(r_esp, 0x604ccfu); f_00603754();
    /* 00604ccf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00604cd2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00604cd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604cd7: je 0x604ce5 */ if (fZ) goto L_00604ce5;
L_00604cd9:; BB(0x00604cd9);
    /* 00604cd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604cdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604cdd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x604ce2u); f_0048ac1b();
    /* 00604ce2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00604ce5:; BB(0x00604ce5);
    /* 00604ce5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604ce8: mov esp, ebp */ r_esp = r_ebp;
    /* 00604cea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604ceb: ret 4 */ FN_RET(0x00604cc0); r_esp += 8; return;
}

