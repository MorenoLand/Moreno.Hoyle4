#include "protos.h"

void f_00408e5e(void) /* FUN_00408e5e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408e5e);
    /* 00408e5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408e5f: mov ebp, esp */ r_ebp = r_esp;
    /* 00408e61: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408e64: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00408e67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408e6a: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408e6e: je 0x408e7b */ if (fZ) goto L_00408e7b;
L_00408e70:; BB(0x00408e70);
    /* 00408e70: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00408e73: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00408e76: jmp 0x40904f */ goto L_0040904f;
L_00408e7b:; BB(0x00408e7b);
    /* 00408e7b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00408e7e: cmp dword ptr [edx + 0x18], 3 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408e82: jne 0x409043 */ if (!fZ) goto L_00409043;
L_00408e88:; BB(0x00408e88);
    /* 00408e88: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408e8b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00408e8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408e8f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00408e92: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00408e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408e96: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408e99: call 0x5ea4a2 */ r_esp -= 4; W32(r_esp, 0x408e9eu); f_005ea4a2();
    /* 00408e9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408ea0: je 0x408fe3 */ if (fZ) goto L_00408fe3;
L_00408ea6:; BB(0x00408ea6);
    /* 00408ea6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408ea9: cmp dword ptr [ecx + 0xcc], 0 */ {  u32 a = R32((u32)(r_ecx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408eb0: jne 0x408fe1 */ if (!fZ) goto L_00408fe1;
L_00408eb6:; BB(0x00408eb6);
    /* 00408eb6: push 0x88c */ { u32 v = 0x88cu; r_esp -= 4; W32(r_esp, v); }
    /* 00408ebb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x408ec0u); f_0048ab58();
    /* 00408ec0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408ec3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00408ec6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408eca: je 0x408ed9 */ if (fZ) goto L_00408ed9;
L_00408ecc:; BB(0x00408ecc);
    /* 00408ecc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408ecf: call 0x42683b */ r_esp -= 4; W32(r_esp, 0x408ed4u); f_0042683b();
    /* 00408ed4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00408ed7: jmp 0x408ee0 */ goto L_00408ee0;
L_00408ed9:; BB(0x00408ed9);
    /* 00408ed9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00408ee0:; BB(0x00408ee0);
    /* 00408ee0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408ee3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00408ee6: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 00408eec: push 0x64cb70 */ { u32 v = 0x64cb70u; r_esp -= 4; W32(r_esp, v); }
    /* 00408ef1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408ef4: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00408efa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408efd: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00408f03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408f05: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x408f08u); call_ind(t); }
    /* 00408f08: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408f0b: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00408f11: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408f14: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00408f1a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408f1c: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x408f1fu); call_ind(t); }
    /* 00408f1f: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00408f21: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408f24: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00408f2a: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x408f2fu); f_005e87aa();
    /* 00408f2f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00408f31: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408f34: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00408f3a: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x408f3fu); f_005e8740();
    /* 00408f3f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00408f41: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408f44: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 00408f4a: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x408f4fu); f_005e8775();
    /* 00408f4f: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00408f54: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408f57: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00408f5d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408f60: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00408f66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408f68: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x408f6bu); call_ind(t); }
    /* 00408f6b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00408f6d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408f70: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00408f76: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x408f7bu); f_005e8e99();
    /* 00408f7b: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00408f80: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408f85: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408f8a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408f8d: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00408f93: call 0x5e8b5a */ r_esp -= 4; W32(r_esp, 0x408f98u); f_005e8b5a();
    /* 00408f98: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408f9b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00408f9d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408fa0: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x408fa3u); call_ind(t); }
    /* 00408fa3: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00408fa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408fa7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408faa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00408fac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408faf: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x408fb2u); call_ind(t); }
    /* 00408fb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408fb3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408fb6: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00408fbc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408fbf: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00408fc5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408fc7: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x408fcau); call_ind(t); }
    /* 00408fca: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408fcd: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00408fd3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408fd6: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00408fdc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408fde: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x408fe1u); call_ind(t); }
L_00408fe1:; BB(0x00408fe1);
    /* 00408fe1: jmp 0x409043 */ goto L_00409043;
L_00408fe3:; BB(0x00408fe3);
    /* 00408fe3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408fe6: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408fed: je 0x409043 */ if (fZ) goto L_00409043;
L_00408fef:; BB(0x00408fef);
    /* 00408fef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408ff2: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00408ff8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408ffb: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00409001: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00409003: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x409006u); call_ind(t); }
    /* 00409006: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409009: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0040900f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00409012: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409015: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00409018: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040901c: je 0x40902f */ if (fZ) goto L_0040902f;
L_0040901e:; BB(0x0040901e);
    /* 0040901e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00409020: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409023: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00409025: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409028: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40902au); call_ind(t); }
    /* 0040902a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0040902d: jmp 0x409036 */ goto L_00409036;
L_0040902f:; BB(0x0040902f);
    /* 0040902f: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00409036:; BB(0x00409036);
    /* 00409036: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409039: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
L_00409043:; BB(0x00409043);
    /* 00409043: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409046: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409047: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040904a: call 0x5d6084 */ r_esp -= 4; W32(r_esp, 0x40904fu); f_005d6084();
L_0040904f:; BB(0x0040904f);
    /* 0040904f: mov esp, ebp */ r_esp = r_ebp;
    /* 00409051: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409052: ret 4 */ FN_RET(0x00408e5e); r_esp += 8; return;
}

void f_00409055(void) /* FUN_00409055 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409055);
    /* 00409055: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409056: mov ebp, esp */ r_ebp = r_esp;
    /* 00409058: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409059: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040905c: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00409061: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00409064: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00409067: call 0x408407 */ r_esp -= 4; W32(r_esp, 0x40906cu); f_00408407();
    /* 0040906c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040906e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040906f: ret  */ FN_RET(0x00409055); r_esp += 4; return;
}

void f_00409070(void) /* FUN_00409070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409070);
    /* 00409070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409071: mov ebp, esp */ r_ebp = r_esp;
    /* 00409073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409074: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409077: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040907a: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x40907fu); f_005d5d20();
    /* 0040907f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409082: mov dword ptr [eax], 0x633724 */ W32((u32)(r_eax), 0x633724u);
    /* 00409088: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040908b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040908e: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00409094: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00409096: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00409098: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040909b: call 0x5d678c */ r_esp -= 4; W32(r_esp, 0x4090a0u); f_005d678c();
    /* 004090a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004090a3: mov esp, ebp */ r_esp = r_ebp;
    /* 004090a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004090a6: ret 4 */ FN_RET(0x00409070); r_esp += 8; return;
}

void f_004090a9(void) /* FUN_004090a9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004090a9);
    /* 004090a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004090aa: mov ebp, esp */ r_ebp = r_esp;
    /* 004090ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004090ad: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004090b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004090b3: mov dword ptr [eax], 0x633724 */ W32((u32)(r_eax), 0x633724u);
    /* 004090b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004090bc: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x4090c1u); f_005d5dfb();
    /* 004090c1: mov esp, ebp */ r_esp = r_ebp;
    /* 004090c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004090c4: ret  */ FN_RET(0x004090a9); r_esp += 4; return;
}

void f_004090c5(void) /* FUN_004090c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004090c5);
    /* 004090c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004090c6: mov ebp, esp */ r_ebp = r_esp;
    /* 004090c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004090c9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004090cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004090cf: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 004090d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004090d6: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 004090dc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004090df: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 004090e2: call 0x408391 */ r_esp -= 4; W32(r_esp, 0x4090e7u); f_00408391();
    /* 004090e7: mov esp, ebp */ r_esp = r_ebp;
    /* 004090e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004090ea: ret  */ FN_RET(0x004090c5); r_esp += 4; return;
}

void f_004090f0(void) /* FUN_004090f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004090f0);
    /* 004090f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004090f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004090f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004090f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004090f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004090fa: call 0x40798f */ r_esp -= 4; W32(r_esp, 0x4090ffu); f_0040798f();
    /* 004090ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409102: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00409105: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409107: je 0x409115 */ if (fZ) goto L_00409115;
L_00409109:; BB(0x00409109);
    /* 00409109: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040910c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040910d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x409112u); f_0048ac1b();
    /* 00409112: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00409115:; BB(0x00409115);
    /* 00409115: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409118: mov esp, ebp */ r_esp = r_ebp;
    /* 0040911a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040911b: ret 4 */ FN_RET(0x004090f0); r_esp += 8; return;
}

void f_00409120(void) /* FUN_00409120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409120);
    /* 00409120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409121: mov ebp, esp */ r_ebp = r_esp;
    /* 00409123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409127: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040912a: call 0x4085fb */ r_esp -= 4; W32(r_esp, 0x40912fu); f_004085fb();
    /* 0040912f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409132: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00409135: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409137: je 0x409145 */ if (fZ) goto L_00409145;
L_00409139:; BB(0x00409139);
    /* 00409139: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040913c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040913d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x409142u); f_0048ac1b();
    /* 00409142: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00409145:; BB(0x00409145);
    /* 00409145: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409148: mov esp, ebp */ r_esp = r_ebp;
    /* 0040914a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040914b: ret 4 */ FN_RET(0x00409120); r_esp += 8; return;
}

void f_00409150(void) /* FUN_00409150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409150);
    /* 00409150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409151: mov ebp, esp */ r_ebp = r_esp;
    /* 00409153: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409154: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409157: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040915a: call 0x408e42 */ r_esp -= 4; W32(r_esp, 0x40915fu); f_00408e42();
    /* 0040915f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409162: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00409165: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409167: je 0x409175 */ if (fZ) goto L_00409175;
L_00409169:; BB(0x00409169);
    /* 00409169: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040916c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040916d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x409172u); f_0048ac1b();
    /* 00409172: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00409175:; BB(0x00409175);
    /* 00409175: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409178: mov esp, ebp */ r_esp = r_ebp;
    /* 0040917a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040917b: ret 4 */ FN_RET(0x00409150); r_esp += 8; return;
}

void f_00409180(void) /* FUN_00409180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409180);
    /* 00409180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409181: mov ebp, esp */ r_ebp = r_esp;
    /* 00409183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409187: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040918a: call 0x4090a9 */ r_esp -= 4; W32(r_esp, 0x40918fu); f_004090a9();
    /* 0040918f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409192: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00409195: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409197: je 0x4091a5 */ if (fZ) goto L_004091a5;
L_00409199:; BB(0x00409199);
    /* 00409199: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040919c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040919d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4091a2u); f_0048ac1b();
    /* 004091a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004091a5:; BB(0x004091a5);
    /* 004091a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004091a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004091aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004091ab: ret 4 */ FN_RET(0x00409180); r_esp += 8; return;
}

void f_004091b0(void) /* FUN_004091b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004091b0);
    /* 004091b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004091b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004091b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004091b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004091b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004091bc: mov dword ptr [eax], 0x633794 */ W32((u32)(r_eax), 0x633794u);
    /* 004091c2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004091c5: mov dword ptr [ecx + 0x404], 0 */ W32((u32)(r_ecx+0x404u), 0x0u);
    /* 004091cf: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004091d3: je 0x4091db */ if (fZ) goto L_004091db;
L_004091d5:; BB(0x004091d5);
    /* 004091d5: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004091d9: jne 0x409214 */ if (!fZ) goto L_00409214;
L_004091db:; BB(0x004091db);
    /* 004091db: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004091de: mov dword ptr [edx + 0x408], 0 */ W32((u32)(r_edx+0x408u), 0x0u);
    /* 004091e8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004091eb: mov dword ptr [eax + 0x40c], 0 */ W32((u32)(r_eax+0x40cu), 0x0u);
    /* 004091f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004091f8: mov dword ptr [ecx + 0x410], 0 */ W32((u32)(r_ecx+0x410u), 0x0u);
    /* 00409202: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409205: mov dword ptr [edx + 0x414], 0 */ W32((u32)(r_edx+0x414u), 0x0u);
    /* 0040920f: jmp 0x4092c1 */ goto L_004092c1;
L_00409214:; BB(0x00409214);
    /* 00409214: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409217: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040921a: mov dword ptr [eax + 0x408], ecx */ W32((u32)(r_eax+0x408u), r_ecx);
    /* 00409220: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409223: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00409226: mov dword ptr [edx + 0x40c], eax */ W32((u32)(r_edx+0x40cu), r_eax);
    /* 0040922c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040922f: mov dword ptr [ecx + 0x414], 4 */ W32((u32)(r_ecx+0x414u), 0x4u);
    /* 00409239: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040923c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040923f: mov ecx, dword ptr [edx + 0x408] */ r_ecx = R32((u32)(r_edx+0x408u));
    /* 00409245: imul ecx, dword ptr [eax + 0x414] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x414u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040924c: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040924f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409252: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409255: mov edx, dword ptr [edx + 0x408] */ r_edx = R32((u32)(r_edx+0x408u));
    /* 0040925b: imul edx, dword ptr [eax + 0x414] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_eax+0x414u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409262: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409265: mov eax, edx */ r_eax = r_edx;
    /* 00409267: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00409268: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040926a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040926c: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040926f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00409271: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00409273: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409275: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409278: mov dword ptr [eax + 0x410], ecx */ W32((u32)(r_eax+0x410u), r_ecx);
    /* 0040927e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409281: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409284: mov eax, dword ptr [ecx + 0x410] */ r_eax = R32((u32)(r_ecx+0x410u));
    /* 0040928a: imul eax, dword ptr [edx + 0x40c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x40cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409291: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00409294: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409297: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409298: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40929du); f_0048ab58();
    /* 0040929d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004092a0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004092a3: mov dword ptr [edx + 0x404], eax */ W32((u32)(r_edx+0x404u), r_eax);
    /* 004092a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004092ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004092ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004092af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004092b2: mov edx, dword ptr [ecx + 0x404] */ r_edx = R32((u32)(r_ecx+0x404u));
    /* 004092b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004092b9: call 0x624170 */ r_esp -= 4; W32(r_esp, 0x4092beu); f_00624170();
    /* 004092be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004092c1:; BB(0x004092c1);
    /* 004092c1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004092c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004092c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004092c7: ret 8 */ FN_RET(0x004091b0); r_esp += 12; return;
}

void f_004092ca(void) /* FUN_004092ca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004092ca);
    /* 004092ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004092cb: mov ebp, esp */ r_ebp = r_esp;
    /* 004092cd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004092d0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004092d3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004092d6: mov dword ptr [eax], 0x633794 */ W32((u32)(r_eax), 0x633794u);
    /* 004092dc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004092df: mov edx, dword ptr [ecx + 0x404] */ r_edx = R32((u32)(r_ecx+0x404u));
    /* 004092e5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004092e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004092eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004092ec: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4092f1u); f_0048ac1b();
    /* 004092f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004092f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004092f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004092f7: ret  */ FN_RET(0x004092ca); r_esp += 4; return;
}

void f_004092f8(void) /* FUN_004092f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004092f8);
    /* 004092f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004092f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004092fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004092fc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004092ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409302: mov eax, dword ptr [eax + 0x408] */ r_eax = R32((u32)(r_eax+0x408u));
    /* 00409308: mov esp, ebp */ r_esp = r_ebp;
    /* 0040930a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040930b: ret  */ FN_RET(0x004092f8); r_esp += 4; return;
}

void f_0040930c(void) /* FUN_0040930c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040930c);
    /* 0040930c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040930d: mov ebp, esp */ r_ebp = r_esp;
    /* 0040930f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409310: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409313: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409316: mov eax, dword ptr [eax + 0x40c] */ r_eax = R32((u32)(r_eax+0x40cu));
    /* 0040931c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040931e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040931f: ret  */ FN_RET(0x0040930c); r_esp += 4; return;
}

void f_00409320(void) /* FUN_00409320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409320);
    /* 00409320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409321: mov ebp, esp */ r_ebp = r_esp;
    /* 00409323: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409326: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409329: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040932c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0040932f: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409331: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00409334: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00409337: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0040933a: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040933c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040933e: jne 0x40938e */ if (!fZ) goto L_0040938e;
L_00409340:; BB(0x00409340);
    /* 00409340: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409343: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409346: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00409349: sub eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040934b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040934e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00409351: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00409354: sub ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409356: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409358: jne 0x40938e */ if (!fZ) goto L_0040938e;
L_0040935a:; BB(0x0040935a);
    /* 0040935a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040935d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409360: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00409363: sub ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409365: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00409368: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0040936b: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0040936e: sub edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409370: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409372: jne 0x40938e */ if (!fZ) goto L_0040938e;
L_00409374:; BB(0x00409374);
    /* 00409374: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409377: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040937a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0040937d: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040937f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00409382: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00409385: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00409388: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040938a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040938c: je 0x4093b7 */ if (fZ) goto L_004093b7;
L_0040938e:; BB(0x0040938e);
    /* 0040938e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409390: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409392: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409394: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409396: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409399: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040939a: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x4093a0u); call_ind(t); }
    /* 004093a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004093a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004093a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004093a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004093a8: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004093ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004093ac: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x4093b2u); call_ind(t); }
    /* 004093b2: jmp 0x4095ac */ goto L_004095ac;
L_004093b7:; BB(0x004093b7);
    /* 004093b7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004093ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004093bb: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004093be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004093bf: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 004093c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004093c3: call dword ptr [0x633238] */ { u32 t = R32((u32)(0x633238u)); r_esp -= 4; W32(r_esp, 0x4093c9u); call_ind(t); }
    /* 004093c9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004093cc: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004093cf: sub ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004093d1: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004093d4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004093d7: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004093da: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004093dd: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004093e0: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004093e3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004093e6: sub edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004093e9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004093ec: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004093ef: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004093f2: sub ecx, dword ptr [eax + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004093f5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004093f8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004093fb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004093fd: add eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409400: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409403: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00409405: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409408: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0040940b: add eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040940e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409411: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00409414: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409417: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040941a: add eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040941d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409420: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00409423: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409426: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00409429: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040942c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040942f: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00409432: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00409435: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00409437: add eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040943a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040943d: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0040943f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00409442: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00409445: add eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409448: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040944b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0040944e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00409451: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00409454: add eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409457: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040945a: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0040945d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00409460: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00409463: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409466: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00409469: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0040946c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040946f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409472: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00409475: sub ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409477: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00409479: jle 0x40948b */ if ((fZ||fS!=fO)) goto L_0040948b;
L_0040947b:; BB(0x0040947b);
    /* 0040947b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040947e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409481: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00409484: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409487: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00409489: jg 0x4094b4 */ if ((!fZ&&fS==fO)) goto L_004094b4;
L_0040948b:; BB(0x0040948b);
    /* 0040948b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040948d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040948f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409491: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409493: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409496: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409497: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x40949du); call_ind(t); }
    /* 0040949d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040949f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004094a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004094a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004094a5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004094a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004094a9: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x4094afu); call_ind(t); }
    /* 004094af: jmp 0x4095ac */ goto L_004095ac;
L_004094b4:; BB(0x004094b4);
    /* 004094b4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004094b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004094b8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004094bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004094bc: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 004094bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004094c0: call dword ptr [0x633238] */ { u32 t = R32((u32)(0x633238u)); r_esp -= 4; W32(r_esp, 0x4094c6u); call_ind(t); }
    /* 004094c6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004094c9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004094cc: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004094ce: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004094d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004094d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004094d7: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004094da: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004094dd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004094e0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004094e3: sub eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004094e6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004094e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004094ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004094ef: sub edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004094f2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004094f5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004094f8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004094fa: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004094fd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00409500: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00409502: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00409505: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00409508: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040950b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040950e: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00409511: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00409514: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00409517: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040951a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040951d: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00409520: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00409523: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00409526: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409529: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040952c: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0040952f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409532: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00409534: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409537: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040953a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0040953c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040953f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00409542: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409545: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409548: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0040954b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040954e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00409551: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409554: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409557: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0040955a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040955d: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00409560: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409563: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409566: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00409569: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0040956c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040956f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00409572: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409574: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00409576: jle 0x409588 */ if ((fZ||fS!=fO)) goto L_00409588;
L_00409578:; BB(0x00409578);
    /* 00409578: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0040957b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040957e: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00409581: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409584: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00409586: jg 0x4095ac */ if ((!fZ&&fS==fO)) goto L_004095ac;
L_00409588:; BB(0x00409588);
    /* 00409588: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040958a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040958c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040958e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409590: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409594: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x40959au); call_ind(t); }
    /* 0040959a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040959c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040959e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004095a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004095a2: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004095a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004095a6: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x4095acu); call_ind(t); }
L_004095ac:; BB(0x004095ac);
    /* 004095ac: mov esp, ebp */ r_esp = r_ebp;
    /* 004095ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004095af: ret  */ FN_RET(0x00409320); r_esp += 4; return;
}

void f_004095b0(void) /* FUN_004095b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004095b0);
    /* 004095b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004095b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004095b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004095b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004095b7:; BB(0x004095b7);
    /* 004095b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004095ba: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004095bd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004095bf: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004095c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004095c4: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004095c7: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 004095ca: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004095cd: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004095d0: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 004095d3: mov dx, word ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 004095d7: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004095db: mov word ptr [ebp + 0x10], dx */ W16((u32)(r_ebp+0x10u), (u16)r_edx);
    /* 004095df: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004095e2: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004095e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095e9: jne 0x4095b7 */ if (!fZ) goto L_004095b7;
L_004095eb:; BB(0x004095eb);
    /* 004095eb: mov esp, ebp */ r_esp = r_ebp;
    /* 004095ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004095ee: ret 0xc */ FN_RET(0x004095b0); r_esp += 16; return;
}

void f_004095f1(void) /* FUN_004095f1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004095f1);
    /* 004095f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004095f2: mov ebp, esp */ r_ebp = r_esp;
    /* 004095f4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004095f7: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004095fa: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004095fd: cmp dword ptr [eax + 0x404], 0 */ {  u32 a = R32((u32)(r_eax+0x404u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960b */ if (!fZ) goto L_0040960b;
L_00409606:; BB(0x00409606);
    /* 00409606: jmp 0x4096b6 */ goto L_004096b6;
L_0040960b:; BB(0x0040960b);
    /* 0040960b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040960e: call 0x40930c */ r_esp -= 4; W32(r_esp, 0x409613u); f_0040930c();
    /* 00409613: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409614: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00409617: call 0x4092f8 */ r_esp -= 4; W32(r_esp, 0x40961cu); f_004092f8();
    /* 0040961c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040961d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040961f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409621: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00409624: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409625: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x40962bu); call_ind(t); }
    /* 0040962b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040962e: call 0x45a952 */ r_esp -= 4; W32(r_esp, 0x409633u); f_0045a952();
    /* 00409633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409634: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409637: call 0x45a942 */ r_esp -= 4; W32(r_esp, 0x40963cu); f_0045a942();
    /* 0040963c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040963d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040963f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409641: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00409644: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409645: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x40964bu); call_ind(t); }
    /* 0040964b: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0040964e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040964f: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 00409652: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409653: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00409656: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409657: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 0040965a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040965b: call 0x409320 */ r_esp -= 4; W32(r_esp, 0x409660u); f_00409320();
    /* 00409660: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409663: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 00409666: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409667: call dword ptr [0x633224] */ { u32 t = R32((u32)(0x633224u)); r_esp -= 4; W32(r_esp, 0x40966du); call_ind(t); }
    /* 0040966d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040966f: jne 0x4096b6 */ if (!fZ) goto L_004096b6;
L_00409671:; BB(0x00409671);
    /* 00409671: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00409674: mov ax, word ptr [edx + 0x410] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x410u))) & 0xffffu);
    /* 0040967b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040967c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040967f: call 0x45a90e */ r_esp -= 4; W32(r_esp, 0x409684u); f_0045a90e();
    /* 00409684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409685: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 00409688: sub ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040968b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040968c: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 0040968f: sub edx, dword ptr [ebp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409692: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409693: mov ax, word ptr [ebp + 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x20u))) & 0xffffu);
    /* 00409697: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409698: mov cx, word ptr [ebp + 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x1cu))) & 0xffffu);
    /* 0040969c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040969d: mov dx, word ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 004096a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004096a2: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004096a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004096a7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004096aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004096ab: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004096ae: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004096b0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004096b3: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4096b6u); call_ind(t); }
L_004096b6:; BB(0x004096b6);
    /* 004096b6: mov esp, ebp */ r_esp = r_ebp;
    /* 004096b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004096b9: ret 0x24 */ FN_RET(0x004095f1); r_esp += 40; return;
}

void f_004096bc(void) /* FUN_004096bc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004096bc);
    /* 004096bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004096bd: mov ebp, esp */ r_ebp = r_esp;
    /* 004096bf: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004096c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004096c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004096c4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004096c7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004096ca: mov ecx, dword ptr [eax + 0x404] */ r_ecx = R32((u32)(r_eax+0x404u));
    /* 004096d0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004096d3: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 004096d6: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004096dc: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 004096df: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004096e4: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004096e7: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004096ea: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004096f0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004096f3: imul ecx, dword ptr [eax + 0x414] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x414u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004096fa: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004096fd: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004096ff: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00409702:; BB(0x00409702);
    /* 00409702: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00409705: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0040970b: mov dx, word ptr [ebp + 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x20u))) & 0xffffu);
    /* 0040970f: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00409713: mov word ptr [ebp + 0x20], dx */ W16((u32)(r_ebp+0x20u), (u16)r_edx);
    /* 00409717: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x40977b */ if (fZ) goto L_0040977b;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0040971e: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00409723: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409724: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409727: call 0x45a91f */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0045a91f();
    /* 0040972c: mov esi, eax */ r_esi = r_eax;
    /* 0040972e: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00409731: and edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00409737: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040973a: call 0x45a963 */ r_esp -= 4; W32(r_esp, 0x40973fu); f_0045a963();
    /* 0040973f: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409742: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409744: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00409747: mov cx, word ptr [ebp + 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x1cu))) & 0xffffu);
    /* 0040974b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040974c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040974f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409750: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409753: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409754: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409757: call 0x4095b0 */ r_esp -= 4; W32(r_esp, 0x40975cu); f_004095b0();
    /* 0040975c: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 0040975f: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00409765: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409768: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040976a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040976d: mov ax, word ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 00409771: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00409775: mov word ptr [ebp + 0x10], ax */ W16((u32)(r_ebp+0x10u), (u16)r_eax);
    /* 00409779: jmp 0x409702 */ goto L_00409702;
L_0040977b:; BB(0x0040977b);
    /* 0040977b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040977c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040977d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040977f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409780: ret 0x24 */ FN_RET(0x004096bc); r_esp += 40; return;
}

void f_00409783(void) /* FUN_00409783 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409783);
    /* 00409783: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409784: mov ebp, esp */ r_ebp = r_esp;
    /* 00409786: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409789: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0040978c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040978f: cmp dword ptr [eax + 0x404], 0 */ {  u32 a = R32((u32)(r_eax+0x404u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409796: jne 0x40979d */ if (!fZ) goto L_0040979d;
L_00409798:; BB(0x00409798);
    /* 00409798: jmp 0x40989f */ goto L_0040989f;
L_0040979d:; BB(0x0040979d);
    /* 0040979d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004097a0: call 0x40930c */ r_esp -= 4; W32(r_esp, 0x4097a5u); f_0040930c();
    /* 004097a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004097a6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004097a9: call 0x4092f8 */ r_esp -= 4; W32(r_esp, 0x4097aeu); f_004092f8();
    /* 004097ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004097af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004097b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004097b3: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 004097b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004097b7: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x4097bdu); call_ind(t); }
    /* 004097bd: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 004097c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004097c1: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 004097c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004097c5: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004097c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004097c9: call dword ptr [0x633238] */ { u32 t = R32((u32)(0x633238u)); r_esp -= 4; W32(r_esp, 0x4097cfu); call_ind(t); }
    /* 004097cf: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 004097d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004097d3: call dword ptr [0x633224] */ { u32 t = R32((u32)(0x633224u)); r_esp -= 4; W32(r_esp, 0x4097d9u); call_ind(t); }
    /* 004097d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004097db: je 0x4097e2 */ if (fZ) goto L_004097e2;
L_004097dd:; BB(0x004097dd);
    /* 004097dd: jmp 0x40989f */ goto L_0040989f;
L_004097e2:; BB(0x004097e2);
    /* 004097e2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004097e5: mov ecx, dword ptr [eax + 0x404] */ r_ecx = R32((u32)(r_eax+0x404u));
    /* 004097eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004097ee: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004097f2: je 0x40989f */ if (fZ) goto L_0040989f;
L_004097f8:; BB(0x004097f8);
    /* 004097f8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004097fb: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004097fe: jmp 0x409809 */ goto L_00409809;
L_00409800:; BB(0x00409800);
    /* 00409800: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409803: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409806: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00409809:; BB(0x00409809);
    /* 00409809: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040980c: cmp ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040980f: jge 0x40989f */ if ((fS==fO)) goto L_0040989f;
L_00409815:; BB(0x00409815);
    /* 00409815: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409818: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040981b: imul eax, dword ptr [edx + 0x410] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x410u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409822: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409825: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409828: imul edx, dword ptr [ecx + 0x414] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0x414u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040982f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409831: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00409834: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409837: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040983a: imul ecx, dword ptr [eax + 0x410] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x410u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409841: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409844: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409847: imul eax, dword ptr [edx + 0x414] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x414u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040984e: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409850: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00409853: sub edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409856: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409859: imul edx, dword ptr [eax + 0x414] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_eax+0x414u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409860: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409862: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00409865: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00409868: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040986b: jmp 0x40987c */ goto L_0040987c;
L_0040986d:; BB(0x0040986d);
    /* 0040986d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409870: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409873: add eax, dword ptr [edx + 0x414] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x414u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409879: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0040987c:; BB(0x0040987c);
    /* 0040987c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040987f: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409882: jge 0x40989a */ if ((fS==fO)) goto L_0040989a;
L_00409884:; BB(0x00409884);
    /* 00409884: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00409887: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409888: call 0x6088b5 */ r_esp -= 4; W32(r_esp, 0x40988du); f_006088b5();
    /* 0040988d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409890: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409893: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409896: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00409898: jmp 0x40986d */ goto L_0040986d;
L_0040989a:; BB(0x0040989a);
    /* 0040989a: jmp 0x409800 */ goto L_00409800;
L_0040989f:; BB(0x0040989f);
    /* 0040989f: mov esp, ebp */ r_esp = r_ebp;
    /* 004098a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004098a2: ret 0x14 */ FN_RET(0x00409783); r_esp += 24; return;
}

void f_004098a5(void) /* FUN_004098a5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004098a5);
    /* 004098a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004098a6: mov ebp, esp */ r_ebp = r_esp;
    /* 004098a8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004098ab: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004098ae: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004098b1: mov ecx, dword ptr [eax + 0x404] */ r_ecx = R32((u32)(r_eax+0x404u));
    /* 004098b7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004098ba: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004098bd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004098c0: imul eax, dword ptr [edx + 0x410] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x410u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098c7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004098ca: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004098cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004098cf: mov al, byte ptr [edx + ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx))) & 0xffu);
    /* 004098d2: mov byte ptr [ebp - 8], al */ W8((u32)(r_ebp+0xfffffff8u), (u8)r_eax);
    /* 004098d5: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 004098d8: mov esp, ebp */ r_esp = r_ebp;
    /* 004098da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004098db: ret 8 */ FN_RET(0x004098a5); r_esp += 12; return;
}

void f_004098de(void) /* FUN_004098de */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004098de);
    /* 004098de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004098df: mov ebp, esp */ r_ebp = r_esp;
    /* 004098e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004098e2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004098e5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004098e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004098e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004098ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004098ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004098f0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004098f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004098f5: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4098f8u); call_ind(t); }
    /* 004098f8: mov esp, ebp */ r_esp = r_ebp;
    /* 004098fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004098fb: ret 8 */ FN_RET(0x004098de); r_esp += 12; return;
}

void f_004098fe(void) /* FUN_004098fe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004098fe);
    /* 004098fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004098ff: mov ebp, esp */ r_ebp = r_esp;
    /* 00409901: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409902: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409905: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409908: mov eax, dword ptr [eax + 0x410] */ r_eax = R32((u32)(r_eax+0x410u));
    /* 0040990e: mov esp, ebp */ r_esp = r_ebp;
    /* 00409910: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409911: ret  */ FN_RET(0x004098fe); r_esp += 4; return;
}

void f_00409912(void) /* FUN_00409912 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409912);
    /* 00409912: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409913: mov ebp, esp */ r_ebp = r_esp;
    /* 00409915: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409916: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409919: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040991c: mov eax, dword ptr [eax + 0x404] */ r_eax = R32((u32)(r_eax+0x404u));
    /* 00409922: mov esp, ebp */ r_esp = r_ebp;
    /* 00409924: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409925: ret  */ FN_RET(0x00409912); r_esp += 4; return;
}

void f_00409926(void) /* FUN_00409926 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409926);
    /* 00409926: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409927: mov ebp, esp */ r_ebp = r_esp;
    /* 00409929: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040992c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040992d: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00409930: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00409933: cmp dword ptr [eax + 0x404], 0 */ {  u32 a = R32((u32)(r_eax+0x404u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040993a: je 0x409948 */ if (fZ) goto L_00409948;
L_0040993c:; BB(0x0040993c);
    /* 0040993c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040993f: cmp dword ptr [ecx + 0x404], 0 */ {  u32 a = R32((u32)(r_ecx+0x404u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409946: jne 0x40994d */ if (!fZ) goto L_0040994d;
L_00409948:; BB(0x00409948);
    /* 00409948: jmp 0x409a4d */ goto L_00409a4d;
L_0040994d:; BB(0x0040994d);
    /* 0040994d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00409954: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0040995b: jmp 0x409969 */ goto L_00409969;
L_0040995d:; BB(0x0040995d);
    /* 0040995d: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00409960: fadd qword ptr [0x6337a8] */ ST(0) = ST(0) + R_F64((u32)(0x6337a8u));
    /* 00409966: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00409969:; BB(0x00409969);
    /* 00409969: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040996c: call 0x40930c */ r_esp -= 4; W32(r_esp, 0x409971u); f_0040930c();
    /* 00409971: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00409974: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00409977: fmul qword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0x14u));
    /* 0040997a: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 0040997d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040997f: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00409982: jne 0x409a4d */ if (!fZ) goto L_00409a4d;
L_00409988:; BB(0x00409988);
    /* 00409988: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040998b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0040998e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409991: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00409994: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00409997: fdiv qword ptr [ebp + 0x14] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0x14u));
    /* 0040999a: fstp qword ptr [ebp - 0x24] */ W_F64((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 0040999d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004099a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004099ab: jmp 0x4099b9 */ goto L_004099b9;
L_004099ad:; BB(0x004099ad);
    /* 004099ad: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 004099b0: fadd qword ptr [0x6337a8] */ ST(0) = ST(0) + R_F64((u32)(0x6337a8u));
    /* 004099b6: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
L_004099b9:; BB(0x004099b9);
    /* 004099b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004099bc: call 0x4092f8 */ r_esp -= 4; W32(r_esp, 0x4099c1u); f_004092f8();
    /* 004099c1: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004099c4: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004099c7: fmul qword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xcu));
    /* 004099ca: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 004099cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004099cf: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004099d2: jne 0x409a48 */ if (!fZ) goto L_00409a48;
L_004099d4:; BB(0x004099d4);
    /* 004099d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004099d7: call 0x4098fe */ r_esp -= 4; W32(r_esp, 0x4099dcu); f_004098fe();
    /* 004099dc: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004099df: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 004099e2: fmul qword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe8u));
    /* 004099e5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004099e8: fild dword ptr [ecx + 0x414] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x414u)));
    /* 004099ee: fmul qword ptr [ebp - 8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff8u));
    /* 004099f1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004099f3: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x4099f8u); f_00624144();
    /* 004099f8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004099fb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004099fe: call 0x4098fe */ r_esp -= 4; W32(r_esp, 0x409a03u); f_004098fe();
    /* 00409a03: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00409a06: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 00409a09: fmul qword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffdcu));
    /* 00409a0c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00409a0f: fild dword ptr [edx + 0x414] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x414u)));
    /* 00409a15: fmul qword ptr [ebp - 8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff8u));
    /* 00409a18: fdiv qword ptr [ebp + 0xc] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xcu));
    /* 00409a1b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409a1d: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x409a22u); f_00624144();
    /* 00409a22: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00409a25: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00409a28: mov ecx, dword ptr [eax + 0x404] */ r_ecx = R32((u32)(r_eax+0x404u));
    /* 00409a2e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409a31: mov eax, dword ptr [edx + 0x404] */ r_eax = R32((u32)(r_edx+0x404u));
    /* 00409a37: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00409a3a: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409a3d: mov ecx, dword ptr [ecx + esi] */ r_ecx = R32((u32)(r_ecx+r_esi));
    /* 00409a40: mov dword ptr [eax + edx], ecx */ W32((u32)(r_eax+r_edx), r_ecx);
    /* 00409a43: jmp 0x4099ad */ goto L_004099ad;
L_00409a48:; BB(0x00409a48);
    /* 00409a48: jmp 0x40995d */ goto L_0040995d;
L_00409a4d:; BB(0x00409a4d);
    /* 00409a4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409a4e: mov esp, ebp */ r_esp = r_ebp;
    /* 00409a50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409a51: ret 0x14 */ FN_RET(0x00409926); r_esp += 24; return;
}

void f_00409a54(void) /* FUN_00409a54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409a54);
    /* 00409a54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a55: mov ebp, esp */ r_ebp = r_esp;
    /* 00409a57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409a58: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409a5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409a5e: mov eax, dword ptr [eax + 0x414] */ r_eax = R32((u32)(r_eax+0x414u));
    /* 00409a64: mov esp, ebp */ r_esp = r_ebp;
    /* 00409a66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409a67: ret  */ FN_RET(0x00409a54); r_esp += 4; return;
}

void f_00409a68(void) /* FUN_00409a68 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409a68);
    /* 00409a68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a69: mov ebp, esp */ r_ebp = r_esp;
    /* 00409a6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409a6c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409a6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00409a71: mov esp, ebp */ r_esp = r_ebp;
    /* 00409a73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409a74: ret  */ FN_RET(0x00409a68); r_esp += 4; return;
}

void f_00409a75(void) /* FUN_00409a75 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409a75);
    /* 00409a75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a76: mov ebp, esp */ r_ebp = r_esp;
    /* 00409a78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409a79: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409a7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00409a7e: mov esp, ebp */ r_esp = r_ebp;
    /* 00409a80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409a81: ret  */ FN_RET(0x00409a75); r_esp += 4; return;
}

void f_00409a82(void) /* FUN_00409a82 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409a82);
    /* 00409a82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a83: mov ebp, esp */ r_ebp = r_esp;
    /* 00409a85: sub esp, 0x424 */ {  u32 a = r_esp; u32 b = 0x424u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409a8b: mov dword ptr [ebp - 0x420], ecx */ W32((u32)(r_ebp+0xfffffbe0u), r_ecx);
    /* 00409a91: push 0x64cc0c */ { u32 v = 0x64cc0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00409a96: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409a99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9a: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x409a9fu); f_006243c0();
    /* 00409a9f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409aa2: mov dword ptr [ebp - 0x414], eax */ W32((u32)(r_ebp+0xfffffbecu), r_eax);
    /* 00409aa8: cmp dword ptr [ebp - 0x414], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aaf: je 0x409e12 */ if (fZ) goto L_00409e12;
L_00409ab5:; BB(0x00409ab5);
    /* 00409ab5: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 00409abb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409abc: call 0x5baf01 */ r_esp -= 4; W32(r_esp, 0x409ac1u); f_005baf01();
    /* 00409ac1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409ac4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00409ac7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409aca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409acb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x409ad0u); f_0048ab58();
    /* 00409ad0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409ad3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00409ad6: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 00409adc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409add: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409ae0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409ae1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00409ae3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409ae6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409ae7: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x409aecu); f_00624250();
    /* 00409aec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409aef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409af2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00409af4: mov cx, word ptr [eax + 0x12] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x12u))) & 0xffffu);
    /* 00409af8: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409afe: mov dword ptr [edx + 0x408], ecx */ W32((u32)(r_edx+0x408u), r_ecx);
    /* 00409b04: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409b07: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00409b09: mov cx, word ptr [eax + 0x16] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x16u))) & 0xffffu);
    /* 00409b0d: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409b13: mov dword ptr [edx + 0x40c], ecx */ W32((u32)(r_edx+0x40cu), r_ecx);
    /* 00409b19: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409b1f: mov dword ptr [eax + 0x414], 4 */ W32((u32)(r_eax+0x414u), 0x4u);
    /* 00409b29: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409b2f: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409b35: mov ecx, dword ptr [ecx + 0x408] */ r_ecx = R32((u32)(r_ecx+0x408u));
    /* 00409b3b: imul ecx, dword ptr [edx + 0x414] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_edx+0x414u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b42: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409b45: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409b4b: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409b51: mov edx, dword ptr [edx + 0x408] */ r_edx = R32((u32)(r_edx+0x408u));
    /* 00409b57: imul edx, dword ptr [eax + 0x414] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_eax+0x414u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b5e: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b61: mov eax, edx */ r_eax = r_edx;
    /* 00409b63: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00409b64: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00409b66: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00409b68: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6f: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409b71: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409b77: mov dword ptr [eax + 0x410], ecx */ W32((u32)(r_eax+0x410u), r_ecx);
    /* 00409b7d: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409b83: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409b89: mov eax, dword ptr [ecx + 0x410] */ r_eax = R32((u32)(r_ecx+0x410u));
    /* 00409b8f: imul eax, dword ptr [edx + 0x40c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x40cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b96: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00409b99: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409b9f: mov edx, dword ptr [ecx + 0x404] */ r_edx = R32((u32)(r_ecx+0x404u));
    /* 00409ba5: mov dword ptr [ebp - 0x418], edx */ W32((u32)(r_ebp+0xfffffbe8u), r_edx);
    /* 00409bab: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00409bb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409bb2: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x409bb7u); f_0048ac1b();
    /* 00409bb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409bba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409bbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409bbe: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x409bc3u); f_0048ab58();
    /* 00409bc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409bc6: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409bcc: mov dword ptr [edx + 0x404], eax */ W32((u32)(r_edx+0x404u), r_eax);
    /* 00409bd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409bd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409bd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409bd8: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409bde: mov edx, dword ptr [ecx + 0x404] */ r_edx = R32((u32)(r_ecx+0x404u));
    /* 00409be4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409be5: call 0x624170 */ r_esp -= 4; W32(r_esp, 0x409beau); f_00624170();
    /* 00409bea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409bed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409bf0: mov ecx, dword ptr [eax + 0x2e] */ r_ecx = R32((u32)(r_eax+0x2eu));
    /* 00409bf3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00409bf6: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409bfa: je 0x409c7b */ if (fZ) goto L_00409c7b;
L_00409bfc:; BB(0x00409bfc);
    /* 00409bfc: mov dword ptr [ebp - 0x410], 0 */ W32((u32)(r_ebp+0xfffffbf0u), 0x0u);
    /* 00409c06: jmp 0x409c17 */ goto L_00409c17;
L_00409c08:; BB(0x00409c08);
    /* 00409c08: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00409c0e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00409c11: mov dword ptr [ebp - 0x410], edx */ W32((u32)(r_ebp+0xfffffbf0u), r_edx);
L_00409c17:; BB(0x00409c17);
    /* 00409c17: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00409c1d: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409c20: jge 0x409c3e */ if ((fS==fO)) goto L_00409c3e;
L_00409c22:; BB(0x00409c22);
    /* 00409c22: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00409c28: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409c2b: mov eax, dword ptr [edx + ecx*4 + 0x36] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x36u));
    /* 00409c2f: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00409c35: mov dword ptr [ebp + ecx*4 - 0x40c], eax */ W32((u32)(r_ebp+r_ecx*4+0xfffffbf4u), r_eax);
    /* 00409c3c: jmp 0x409c08 */ goto L_00409c08;
L_00409c3e:; BB(0x00409c3e);
    /* 00409c3e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409c41: mov dword ptr [ebp - 0x410], edx */ W32((u32)(r_ebp+0xfffffbf0u), r_edx);
    /* 00409c47: jmp 0x409c58 */ goto L_00409c58;
L_00409c49:; BB(0x00409c49);
    /* 00409c49: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00409c4f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409c52: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
L_00409c58:; BB(0x00409c58);
    /* 00409c58: cmp dword ptr [ebp - 0x410], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409c62: jge 0x409c79 */ if ((fS==fO)) goto L_00409c79;
L_00409c64:; BB(0x00409c64);
    /* 00409c64: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409c67: mov edx, dword ptr [ecx + 0x36] */ r_edx = R32((u32)(r_ecx+0x36u));
    /* 00409c6a: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00409c70: mov dword ptr [ebp + eax*4 - 0x40c], edx */ W32((u32)(r_ebp+r_eax*4+0xfffffbf4u), r_edx);
    /* 00409c77: jmp 0x409c49 */ goto L_00409c49;
L_00409c79:; BB(0x00409c79);
    /* 00409c79: jmp 0x409cbe */ goto L_00409cbe;
L_00409c7b:; BB(0x00409c7b);
    /* 00409c7b: mov dword ptr [ebp - 0x410], 0 */ W32((u32)(r_ebp+0xfffffbf0u), 0x0u);
    /* 00409c85: jmp 0x409c96 */ goto L_00409c96;
L_00409c87:; BB(0x00409c87);
    /* 00409c87: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00409c8d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c90: mov dword ptr [ebp - 0x410], ecx */ W32((u32)(r_ebp+0xfffffbf0u), r_ecx);
L_00409c96:; BB(0x00409c96);
    /* 00409c96: cmp dword ptr [ebp - 0x410], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409ca0: jge 0x409cbe */ if ((fS==fO)) goto L_00409cbe;
L_00409ca2:; BB(0x00409ca2);
    /* 00409ca2: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00409ca8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409cab: mov ecx, dword ptr [eax + edx*4 + 0x36] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x36u));
    /* 00409caf: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00409cb5: mov dword ptr [ebp + edx*4 - 0x40c], ecx */ W32((u32)(r_ebp+r_edx*4+0xfffffbf4u), r_ecx);
    /* 00409cbc: jmp 0x409c87 */ goto L_00409c87;
L_00409cbe:; BB(0x00409cbe);
    /* 00409cbe: mov dword ptr [ebp - 0x410], 0 */ W32((u32)(r_ebp+0xfffffbf0u), 0x0u);
    /* 00409cc8: jmp 0x409cd9 */ goto L_00409cd9;
L_00409cca:; BB(0x00409cca);
    /* 00409cca: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00409cd0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409cd3: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
L_00409cd9:; BB(0x00409cd9);
    /* 00409cd9: cmp dword ptr [ebp - 0x410], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409ce3: jge 0x409d0d */ if ((fS==fO)) goto L_00409d0d;
L_00409ce5:; BB(0x00409ce5);
    /* 00409ce5: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00409ceb: mov edx, dword ptr [ebp + ecx*4 - 0x40c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffbf4u));
    /* 00409cf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409cf3: call 0x608888 */ r_esp -= 4; W32(r_esp, 0x409cf8u); f_00608888();
    /* 00409cf8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409cfb: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00409d01: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409d07: mov dword ptr [edx + ecx*4 + 4], eax */ W32((u32)(r_edx+r_ecx*4+0x4u), r_eax);
    /* 00409d0b: jmp 0x409cca */ goto L_00409cca;
L_00409d0d:; BB(0x00409d0d);
    /* 00409d0d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409d10: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00409d12: mov cx, word ptr [eax + 0x1e] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x1eu))) & 0xffffu);
    /* 00409d16: mov dword ptr [ebp - 0x424], ecx */ W32((u32)(r_ebp+0xfffffbdcu), r_ecx);
    /* 00409d1c: cmp dword ptr [ebp - 0x424], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409d23: je 0x409d82 */ if (fZ) goto L_00409d82;
L_00409d25:; BB(0x00409d25);
    /* 00409d25: cmp dword ptr [ebp - 0x424], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409d2c: je 0x409d33 */ if (fZ) goto L_00409d33;
L_00409d2e:; BB(0x00409d2e);
    /* 00409d2e: jmp 0x409deb */ goto L_00409deb;
L_00409d33:; BB(0x00409d33);
    /* 00409d33: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409d36: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409d39: add eax, dword ptr [edx + 0xa] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xau)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409d3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409d3d: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409d43: mov edx, dword ptr [ecx + 0x40c] */ r_edx = R32((u32)(r_ecx+0x40cu));
    /* 00409d49: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409d4c: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409d52: mov ecx, dword ptr [eax + 0x410] */ r_ecx = R32((u32)(r_eax+0x410u));
    /* 00409d58: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409d5b: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409d61: mov eax, dword ptr [edx + 0x404] */ r_eax = R32((u32)(r_edx+0x404u));
    /* 00409d67: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409d69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409d6a: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409d70: mov dx, word ptr [ecx + 0x410] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x410u))) & 0xffffu);
    /* 00409d77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409d78: call 0x409f66 */ r_esp -= 4; W32(r_esp, 0x409d7du); f_00409f66();
    /* 00409d7d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409d80: jmp 0x409deb */ goto L_00409deb;
L_00409d82:; BB(0x00409d82);
    /* 00409d82: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409d85: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409d88: add ecx, dword ptr [eax + 0xa] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xau)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409d8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409d8c: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409d92: mov eax, dword ptr [edx + 0x40c] */ r_eax = R32((u32)(r_edx+0x40cu));
    /* 00409d98: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00409d9b: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409da1: mov edx, dword ptr [ecx + 0x410] */ r_edx = R32((u32)(r_ecx+0x410u));
    /* 00409da7: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409daa: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409db0: mov ecx, dword ptr [eax + 0x404] */ r_ecx = R32((u32)(r_eax+0x404u));
    /* 00409db6: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409db8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409db9: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409dbf: mov ax, word ptr [edx + 0x410] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x410u))) & 0xffffu);
    /* 00409dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409dc7: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409dcd: mov dx, word ptr [ecx + 0x40c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x40cu))) & 0xffffu);
    /* 00409dd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409dd5: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00409ddb: mov cx, word ptr [eax + 0x408] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x408u))) & 0xffffu);
    /* 00409de2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409de3: call 0x40a0f6 */ r_esp -= 4; W32(r_esp, 0x409de8u); f_0040a0f6();
    /* 00409de8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00409deb:; BB(0x00409deb);
    /* 00409deb: mov edx, dword ptr [ebp - 0x414] */ r_edx = R32((u32)(r_ebp+0xfffffbecu));
    /* 00409df1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409df2: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x409df7u); f_006241d0();
    /* 00409df7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409dfa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409dfd: mov dword ptr [ebp - 0x41c], eax */ W32((u32)(r_ebp+0xfffffbe4u), r_eax);
    /* 00409e03: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00409e09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409e0a: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x409e0fu); f_0048ac1b();
    /* 00409e0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00409e12:; BB(0x00409e12);
    /* 00409e12: mov esp, ebp */ r_esp = r_ebp;
    /* 00409e14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409e15: ret 4 */ FN_RET(0x00409a82); r_esp += 8; return;
}

void f_00409e18(void) /* FUN_00409e18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409e18);
    /* 00409e18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409e19: mov ebp, esp */ r_ebp = r_esp;
    /* 00409e1b: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409e1e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00409e1f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00409e20: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00409e23: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409e26: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409e29: imul ecx, dword ptr [eax + 0x414] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x414u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409e30: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409e33: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409e36: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409e39: imul eax, dword ptr [edx + 0x414] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x414u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409e40: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00409e43: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00409e44: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00409e46: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00409e48: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00409e4b: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00409e4d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00409e4f: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409e51: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00409e54: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00409e57: imul eax, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409e5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409e5c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x409e61u); f_0048ab58();
    /* 00409e61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409e64: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00409e67: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409e6a: fild dword ptr [ecx + 0x408] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x408u)));
    /* 00409e70: fidiv dword ptr [ebp + 8] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0x8u));
    /* 00409e73: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00409e76: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409e79: fild dword ptr [edx + 0x40c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x40cu)));
    /* 00409e7f: fidiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xcu));
    /* 00409e82: fstp qword ptr [ebp - 0x1c] */ W_F64((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00409e85: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00409e8c: jmp 0x409e97 */ goto L_00409e97;
L_00409e8e:; BB(0x00409e8e);
    /* 00409e8e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409e91: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409e94: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00409e97:; BB(0x00409e97);
    /* 00409e97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409e9a: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409e9d: jge 0x409f16 */ if ((fS==fO)) goto L_00409f16;
L_00409e9f:; BB(0x00409e9f);
    /* 00409e9f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00409ea6: jmp 0x409eb1 */ goto L_00409eb1;
L_00409ea8:; BB(0x00409ea8);
    /* 00409ea8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409eab: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00409eae: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00409eb1:; BB(0x00409eb1);
    /* 00409eb1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409eb4: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409eb7: jge 0x409f11 */ if ((fS==fO)) goto L_00409f11;
L_00409eb9:; BB(0x00409eb9);
    /* 00409eb9: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 00409ebc: fmul qword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe4u));
    /* 00409ebf: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x409ec4u); f_00624144();
    /* 00409ec4: mov esi, eax */ r_esi = r_eax;
    /* 00409ec6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409ec9: imul esi, dword ptr [ecx + 0x410] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ecx+0x410u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ed0: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 00409ed3: fmul qword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffecu));
    /* 00409ed6: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x409edbu); f_00624144();
    /* 00409edb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409ede: imul eax, dword ptr [edx + 0x414] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x414u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ee5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409ee7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409eea: mov ecx, dword ptr [eax + 0x404] */ r_ecx = R32((u32)(r_eax+0x404u));
    /* 00409ef0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409ef3: imul edx, dword ptr [ebp - 0x20] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffe0u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ef7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409efa: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409efc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409eff: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409f02: imul edi, dword ptr [edx + 0x414] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_edx+0x414u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409f09: mov ecx, dword ptr [ecx + esi] */ r_ecx = R32((u32)(r_ecx+r_esi));
    /* 00409f0c: mov dword ptr [eax + edi], ecx */ W32((u32)(r_eax+r_edi), r_ecx);
    /* 00409f0f: jmp 0x409ea8 */ goto L_00409ea8;
L_00409f11:; BB(0x00409f11);
    /* 00409f11: jmp 0x409e8e */ goto L_00409e8e;
L_00409f16:; BB(0x00409f16);
    /* 00409f16: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409f19: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409f1c: mov dword ptr [edx + 0x408], eax */ W32((u32)(r_edx+0x408u), r_eax);
    /* 00409f22: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409f25: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00409f28: mov dword ptr [ecx + 0x40c], edx */ W32((u32)(r_ecx+0x40cu), r_edx);
    /* 00409f2e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409f31: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00409f34: mov dword ptr [eax + 0x410], ecx */ W32((u32)(r_eax+0x410u), r_ecx);
    /* 00409f3a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409f3d: mov eax, dword ptr [edx + 0x404] */ r_eax = R32((u32)(r_edx+0x404u));
    /* 00409f43: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00409f46: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00409f49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409f4a: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x409f4fu); f_0048ac1b();
    /* 00409f4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409f52: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00409f55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409f58: mov dword ptr [edx + 0x404], eax */ W32((u32)(r_edx+0x404u), r_eax);
    /* 00409f5e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409f5f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409f60: mov esp, ebp */ r_esp = r_ebp;
    /* 00409f62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409f63: ret 8 */ FN_RET(0x00409e18); r_esp += 12; return;
}

void f_00409f66(void) /* FUN_00409f66 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409f66);
    /* 00409f66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409f67: mov ebp, esp */ r_ebp = r_esp;
    /* 00409f69: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409f6c: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00409f72:; BB(0x00409f72);
    /* 00409f72: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00409f75: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00409f77: mov byte ptr [ebp - 0xc], cl */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_ecx);
    /* 00409f7a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00409f7d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00409f80: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 00409f83: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00409f86: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00409f88: mov byte ptr [ebp - 8], cl */ W8((u32)(r_ebp+0xfffffff8u), (u8)r_ecx);
    /* 00409f8b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00409f8e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00409f91: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 00409f94: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409f97: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00409f9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409f9e: jne 0x40a0af */ if (!fZ) goto L_0040a0af;
L_00409fa4:; BB(0x00409fa4);
    /* 00409fa4: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00409fa7: mov byte ptr [ebp - 0x1c], cl */ W8((u32)(r_ebp+0xffffffe4u), (u8)r_ecx);
    /* 00409faa: cmp byte ptr [ebp - 0x1c], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00409fae: je 0x409fc6 */ if (fZ) goto L_00409fc6;
L_00409fb0:; BB(0x00409fb0);
    /* 00409fb0: cmp byte ptr [ebp - 0x1c], 1 */ {  u32 a = R8((u32)(r_ebp+0xffffffe4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00409fb4: je 0x409fc1 */ if (fZ) goto L_00409fc1;
L_00409fb6:; BB(0x00409fb6);
    /* 00409fb6: cmp byte ptr [ebp - 0x1c], 2 */ {  u32 a = R8((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00409fba: je 0x409fee */ if (fZ) goto L_00409fee;
L_00409fbc:; BB(0x00409fbc);
    /* 00409fbc: jmp 0x40a04b */ goto L_0040a04b;
L_00409fc1:; BB(0x00409fc1);
    /* 00409fc1: jmp 0x40a0f2 */ goto L_0040a0f2;
L_00409fc6:; BB(0x00409fc6);
    /* 00409fc6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409fc9: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00409fcf: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409fd1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409fd4: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00409fd9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409fdb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00409fde: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409fe0: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00409fe3: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00409fe9: jmp 0x40a0ad */ goto L_0040a0ad;
L_00409fee:; BB(0x00409fee);
    /* 00409fee: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00409ff1: movzx ax, byte ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_edx))) & 0xffffu);
    /* 00409ff5: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 00409ff9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00409ffc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00409fff: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0040a002: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040a005: movzx ax, byte ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_edx))) & 0xffffu);
    /* 0040a009: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
    /* 0040a00d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040a010: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a013: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0040a016: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040a019: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0040a01f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a022: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040a027: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a02a: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040a02c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040a02f: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a035: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a038: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a03a: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0040a03d: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0040a041: add dx, word ptr [ebp - 0x14] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0040a045: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
    /* 0040a049: jmp 0x40a0ad */ goto L_0040a0ad;
L_0040a04b:; BB(0x0040a04b);
    /* 0040a04b: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0040a04e: mov byte ptr [ebp - 0xc], al */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_eax);
    /* 0040a051: movzx cx, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0040a056: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0040a05a: add dx, cx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0040a05d: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_0040a061:; BB(0x0040a061);
    /* 0040a061: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a064: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040a069: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0040a06c: sub cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0040a06f: mov byte ptr [ebp - 0xc], cl */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_ecx);
    /* 0040a072: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0040a074: jle 0x40a094 */ if ((fZ||fS!=fO)) goto L_0040a094;
L_0040a076:; BB(0x0040a076);
    /* 0040a076: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040a079: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0040a07c: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0040a07e: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0040a080: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040a083: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040a086: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0040a089: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0040a08c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040a08f: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0040a092: jmp 0x40a061 */ goto L_0040a061;
L_0040a094:; BB(0x0040a094);
    /* 0040a094: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a097: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a09d: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a0a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a0a2: je 0x40a0ad */ if (fZ) goto L_0040a0ad;
L_0040a0a4:; BB(0x0040a0a4);
    /* 0040a0a4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040a0a7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040a0aa: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
L_0040a0ad:; BB(0x0040a0ad);
    /* 0040a0ad: jmp 0x40a0ed */ goto L_0040a0ed;
L_0040a0af:; BB(0x0040a0af);
    /* 0040a0af: movzx ax, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0040a0b4: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0040a0b8: add cx, ax */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0040a0bb: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
    /* 0040a0bf: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0040a0c2: mov byte ptr [ebp - 4], dl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_edx);
L_0040a0c5:; BB(0x0040a0c5);
    /* 0040a0c5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a0c8: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040a0cd: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0040a0d0: sub cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0040a0d3: mov byte ptr [ebp - 0xc], cl */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_ecx);
    /* 0040a0d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0040a0d8: jle 0x40a0ed */ if ((fZ||fS!=fO)) goto L_0040a0ed;
L_0040a0da:; BB(0x0040a0da);
    /* 0040a0da: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040a0dd: mov al, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0040a0e0: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0040a0e2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040a0e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a0e8: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0040a0eb: jmp 0x40a0c5 */ goto L_0040a0c5;
L_0040a0ed:; BB(0x0040a0ed);
    /* 0040a0ed: jmp 0x409f72 */ goto L_00409f72;
L_0040a0f2:; BB(0x0040a0f2);
    /* 0040a0f2: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a0f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a0f5: ret  */ FN_RET(0x00409f66); r_esp += 4; return;
}

void f_0040a0f6(void) /* FUN_0040a0f6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a0f6);
    /* 0040a0f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a0f7: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a0f9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a0fc: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0040a0ff: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040a104: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040a107: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a10d: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a110: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040a113: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040a11a: jmp 0x40a125 */ goto L_0040a125;
L_0040a11c:; BB(0x0040a11c);
    /* 0040a11c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a11f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040a122: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0040a125:; BB(0x0040a125);
    /* 0040a125: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040a128: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040a12d: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a130: jge 0x40a1c1 */ if ((fS==fO)) goto L_0040a1c1;
L_0040a136:; BB(0x0040a136);
    /* 0040a136: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0040a13d: jmp 0x40a148 */ goto L_0040a148;
L_0040a13f:; BB(0x0040a13f);
    /* 0040a13f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a142: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a145: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0040a148:; BB(0x0040a148);
    /* 0040a148: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040a14b: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0040a151: cmp dword ptr [ebp - 0xc], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a154: jge 0x40a1a9 */ if ((fS==fO)) goto L_0040a1a9;
L_0040a156:; BB(0x0040a156);
    /* 0040a156: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0040a159: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0040a15c: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
    /* 0040a160: mov dl, byte ptr [eax + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 0040a163: mov byte ptr [ebp - 0xe], dl */ W8((u32)(r_ebp+0xfffffff2u), (u8)r_edx);
    /* 0040a166: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0040a169: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040a16c: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 0040a16f: mov cl, byte ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 0040a172: mov byte ptr [ebp - 4], cl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_ecx);
    /* 0040a175: mov dl, byte ptr [ebp - 0xe] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff2u))) & 0xffu);
    /* 0040a178: mov byte ptr [ebp - 0x10], dl */ W8((u32)(r_ebp+0xfffffff0u), (u8)r_edx);
    /* 0040a17b: mov al, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0040a17e: mov byte ptr [ebp - 0xe], al */ W8((u32)(r_ebp+0xfffffff2u), (u8)r_eax);
    /* 0040a181: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a182: mov ecx, esp */ r_ecx = r_esp;
    /* 0040a184: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0040a188: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0040a18b: mov al, byte ptr [ebp - 0xe] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff2u))) & 0xffu);
    /* 0040a18e: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0040a191: call 0x60885b */ r_esp -= 4; W32(r_esp, 0x40a196u); f_0060885b();
    /* 0040a196: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a199: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0040a19c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0040a19e: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0040a1a1: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040a1a4: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 0040a1a7: jmp 0x40a13f */ goto L_0040a13f;
L_0040a1a9:; BB(0x0040a1a9);
    /* 0040a1a9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0040a1ac: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040a1b1: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040a1b4: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0040a1b7: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a1b9: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0040a1bc: jmp 0x40a11c */ goto L_0040a11c;
L_0040a1c1:; BB(0x0040a1c1);
    /* 0040a1c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a1c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a1c4: ret  */ FN_RET(0x0040a0f6); r_esp += 4; return;
}

void f_0040a1d0(void) /* FUN_0040a1d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a1d0);
    /* 0040a1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a1d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a1d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a1d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a1da: call 0x4092ca */ r_esp -= 4; W32(r_esp, 0x40a1dfu); f_004092ca();
    /* 0040a1df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040a1e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040a1e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a1e7: je 0x40a1f5 */ if (fZ) goto L_0040a1f5;
L_0040a1e9:; BB(0x0040a1e9);
    /* 0040a1e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a1ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a1ed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x40a1f2u); f_0048ac1b();
    /* 0040a1f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040a1f5:; BB(0x0040a1f5);
    /* 0040a1f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a1f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a1fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a1fb: ret 4 */ FN_RET(0x0040a1d0); r_esp += 8; return;
}

void f_0040a200(void) /* FUN_0040a200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a200);
    /* 0040a200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a201: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a20a: call 0x46c640 */ r_esp -= 4; W32(r_esp, 0x40a20fu); f_0046c640();
    /* 0040a20f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a212: mov dword ptr [eax], 0x6337b4 */ W32((u32)(r_eax), 0x6337b4u);
    /* 0040a218: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a21b: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
    /* 0040a225: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a228: mov dword ptr [edx + 0xc4], 0 */ W32((u32)(r_edx+0xc4u), 0x0u);
    /* 0040a232: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a235: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a237: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a238: ret  */ FN_RET(0x0040a200); r_esp += 4; return;
}

void f_0040a239(void) /* FUN_0040a239 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a239);
    /* 0040a239: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a23a: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a23c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a23d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a240: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a243: mov dword ptr [eax], 0x6337b4 */ W32((u32)(r_eax), 0x6337b4u);
    /* 0040a249: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a24c: call 0x46c66c */ r_esp -= 4; W32(r_esp, 0x40a251u); f_0046c66c();
    /* 0040a251: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a253: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a254: ret  */ FN_RET(0x0040a239); r_esp += 4; return;
}

void f_0040a255(void) /* FUN_0040a255 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a255);
    /* 0040a255: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a256: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a258: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a259: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a25c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040a25f: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0040a262: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a264: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a265: ret 4 */ FN_RET(0x0040a255); r_esp += 8; return;
}

void f_0040a268(void) /* FUN_0040a268 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a268);
    /* 0040a268: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a269: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a26b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a26c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a26f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a272: call 0x46c69b */ r_esp -= 4; W32(r_esp, 0x40a277u); f_0046c69b();
    /* 0040a277: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a279: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a27c: call 0x46ca5b */ r_esp -= 4; W32(r_esp, 0x40a281u); f_0046ca5b();
    /* 0040a281: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a284: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040a286: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a289: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x40a28cu); call_ind(t); }
    /* 0040a28c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a28f: mov dword ptr [eax + 0xc0], 0 */ W32((u32)(r_eax+0xc0u), 0x0u);
    /* 0040a299: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a29c: mov dword ptr [ecx + 0xc4], 0 */ W32((u32)(r_ecx+0xc4u), 0x0u);
    /* 0040a2a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a2a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a2a9: ret  */ FN_RET(0x0040a268); r_esp += 4; return;
}

void f_0040a2aa(void) /* FUN_0040a2aa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a2aa);
    /* 0040a2aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a2ab: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a2ad: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a2b0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0040a2b3: mov dword ptr [ebp - 0x14], 0x1389 */ W32((u32)(r_ebp+0xffffffecu), 0x1389u);
    /* 0040a2ba: mov dword ptr [ebp - 0x10], 0x138a */ W32((u32)(r_ebp+0xfffffff0u), 0x138au);
    /* 0040a2c1: mov dword ptr [ebp - 0xc], 0x138b */ W32((u32)(r_ebp+0xfffffff4u), 0x138bu);
    /* 0040a2c8: mov dword ptr [ebp - 8], 0x138c */ W32((u32)(r_ebp+0xfffffff8u), 0x138cu);
    /* 0040a2cf: mov dword ptr [ebp - 4], 0x138f */ W32((u32)(r_ebp+0xfffffffcu), 0x138fu);
    /* 0040a2d6: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a2da: jne 0x40a2e7 */ if (!fZ) goto L_0040a2e7;
L_0040a2dc:; BB(0x0040a2dc);
    /* 0040a2dc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040a2df: call 0x46ca74 */ r_esp -= 4; W32(r_esp, 0x40a2e4u); f_0046ca74();
    /* 0040a2e4: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0040a2e7:; BB(0x0040a2e7);
    /* 0040a2e7: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040a2ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040a2ee: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040a2f4: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x40a2f7u); call_ind(t); }
    /* 0040a2f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a2f9: je 0x40a307 */ if (fZ) goto L_0040a307;
L_0040a2fb:; BB(0x0040a2fb);
    /* 0040a2fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040a2fe: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0040a302: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040a305: jmp 0x40a30e */ goto L_0040a30e;
L_0040a307:; BB(0x0040a307);
    /* 0040a307: mov dword ptr [ebp - 0x20], 0x7dd */ W32((u32)(r_ebp+0xffffffe0u), 0x7ddu);
L_0040a30e:; BB(0x0040a30e);
    /* 0040a30e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a311: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0040a314: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a317: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a318: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040a31b: call 0x46c873 */ r_esp -= 4; W32(r_esp, 0x40a320u); f_0046c873();
    /* 0040a320: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a323: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a324: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040a327: call 0x46c88c */ r_esp -= 4; W32(r_esp, 0x40a32cu); f_0046c88c();
    /* 0040a32c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a32f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a330: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040a333: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40a338u); f_005ea0c3();
    /* 0040a338: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040a33b: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 0040a345: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a347: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040a34a: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40a34fu); f_005ea1cf();
    /* 0040a34f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040a352: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040a354: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040a357: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x40a35au); call_ind(t); }
    /* 0040a35a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a35c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a35d: ret 4 */ FN_RET(0x0040a2aa); r_esp += 8; return;
}

void f_0040a360(void) /* FUN_0040a360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a360);
    /* 0040a360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a361: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a363: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a366: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040a367: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040a368: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040a36b: mov dword ptr [ebp - 0x18], 0x1389 */ W32((u32)(r_ebp+0xffffffe8u), 0x1389u);
    /* 0040a372: mov dword ptr [ebp - 0x14], 0x138a */ W32((u32)(r_ebp+0xffffffecu), 0x138au);
    /* 0040a379: mov dword ptr [ebp - 0x10], 0x138b */ W32((u32)(r_ebp+0xfffffff0u), 0x138bu);
    /* 0040a380: mov dword ptr [ebp - 0xc], 0x138c */ W32((u32)(r_ebp+0xfffffff4u), 0x138cu);
    /* 0040a387: mov dword ptr [ebp - 8], 0x138f */ W32((u32)(r_ebp+0xfffffff8u), 0x138fu);
    /* 0040a38e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a391: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x40a396u); f_0046ca47();
    /* 0040a396: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a399: jne 0x40a3a4 */ if (!fZ) goto L_0040a3a4;
L_0040a39b:; BB(0x0040a39b);
    /* 0040a39b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0040a3a2: jmp 0x40a3af */ goto L_0040a3af;
L_0040a3a4:; BB(0x0040a3a4);
    /* 0040a3a4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a3a7: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x40a3acu); f_0046ca47();
    /* 0040a3ac: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0040a3af:; BB(0x0040a3af);
    /* 0040a3af: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a3b2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040a3b5: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a3b9: jne 0x40a3c6 */ if (!fZ) goto L_0040a3c6;
L_0040a3bb:; BB(0x0040a3bb);
    /* 0040a3bb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a3be: call 0x46ca74 */ r_esp -= 4; W32(r_esp, 0x40a3c3u); f_0046ca74();
    /* 0040a3c3: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0040a3c6:; BB(0x0040a3c6);
    /* 0040a3c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a3c9: mov dword ptr [ecx + 0xbc], 1 */ W32((u32)(r_ecx+0xbcu), 0x1u);
    /* 0040a3d3: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040a3d9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040a3db: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040a3e1: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x40a3e4u); call_ind(t); }
    /* 0040a3e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a3e6: je 0x40a3f4 */ if (fZ) goto L_0040a3f4;
L_0040a3e8:; BB(0x0040a3e8);
    /* 0040a3e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040a3eb: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 0040a3ef: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0040a3f2: jmp 0x40a3fb */ goto L_0040a3fb;
L_0040a3f4:; BB(0x0040a3f4);
    /* 0040a3f4: mov dword ptr [ebp - 0x28], 0x7dd */ W32((u32)(r_ebp+0xffffffd8u), 0x7ddu);
L_0040a3fb:; BB(0x0040a3fb);
    /* 0040a3fb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040a3fe: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040a401: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a404: cmp dword ptr [ecx + 0xc4], 0 */ {  u32 a = R32((u32)(r_ecx+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a40b: je 0x40a478 */ if (fZ) goto L_0040a478;
L_0040a40d:; BB(0x0040a40d);
    /* 0040a40d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a410: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a411: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040a417: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40a41cu); f_0040f81e();
    /* 0040a41c: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040a422: call 0x5dd5d7 */ r_esp -= 4; W32(r_esp, 0x40a427u); f_005dd5d7();
    /* 0040a427: mov esi, eax */ r_esi = r_eax;
    /* 0040a429: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040a42f: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40a434u); f_0040f81e();
    /* 0040a434: mov edi, dword ptr [eax + 0x130] */ r_edi = R32((u32)(r_eax+0x130u));
    /* 0040a43a: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040a440: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40a445u); f_0040f81e();
    /* 0040a445: mov eax, dword ptr [eax + 0x130] */ r_eax = R32((u32)(r_eax+0x130u));
    /* 0040a44b: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040a44e: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a451: lea edi, [edi + ecx + 0x74] */ r_edi = (u32)(r_edi+r_ecx+0x74u);
    /* 0040a455: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040a45b: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40a460u); f_0040f81e();
    /* 0040a460: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040a466: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40a46bu); f_0040bc0d();
    /* 0040a46b: cmp esi, dword ptr [edi + eax*4 - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+r_eax*4+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a46f: jne 0x40a478 */ if (!fZ) goto L_0040a478;
L_0040a471:; BB(0x0040a471);
    /* 0040a471: mov dword ptr [ebp - 0x1c], 0x1390 */ W32((u32)(r_ebp+0xffffffe4u), 0x1390u);
L_0040a478:; BB(0x0040a478);
    /* 0040a478: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040a47b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a47c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a47f: call 0x46c873 */ r_esp -= 4; W32(r_esp, 0x40a484u); f_0046c873();
    /* 0040a484: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040a487: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a488: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a48b: call 0x46c88c */ r_esp -= 4; W32(r_esp, 0x40a490u); f_0046c88c();
    /* 0040a490: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040a493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a494: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a497: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40a49cu); f_005ea0c3();
    /* 0040a49c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a49f: call 0x46ca1a */ r_esp -= 4; W32(r_esp, 0x40a4a4u); f_0046ca1a();
    /* 0040a4a4: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a4a7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a4aa: lea eax, [eax + edx - 1] */ r_eax = (u32)(r_eax+r_edx+0xffffffffu);
    /* 0040a4ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a4af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a4b2: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40a4b7u); f_005ea1cf();
    /* 0040a4b7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a4ba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040a4bc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a4bf: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x40a4c2u); call_ind(t); }
    /* 0040a4c2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a4c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a4c6: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040a4cc: call 0x41014e */ r_esp -= 4; W32(r_esp, 0x40a4d1u); f_0041014e();
    /* 0040a4d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040a4d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040a4d3: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a4d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a4d6: ret 4 */ FN_RET(0x0040a360); r_esp += 8; return;
}

void f_0040a4d9(void) /* FUN_0040a4d9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a4d9);
    /* 0040a4d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a4da: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a4dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a4dd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a4e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a4e3: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x40a4e8u); f_0046ca47();
    /* 0040a4e8: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a4eb: jne 0x40a4f4 */ if (!fZ) goto L_0040a4f4;
L_0040a4ed:; BB(0x0040a4ed);
    /* 0040a4ed: mov eax, 0xb */ r_eax = 0xbu;
    /* 0040a4f2: jmp 0x40a510 */ goto L_0040a510;
L_0040a4f4:; BB(0x0040a4f4);
    /* 0040a4f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a4f7: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x40a4fcu); f_0046ca47();
    /* 0040a4fc: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a4ff: jle 0x40a508 */ if ((fZ||fS!=fO)) goto L_0040a508;
L_0040a501:; BB(0x0040a501);
    /* 0040a501: mov eax, 0xa */ r_eax = 0xau;
    /* 0040a506: jmp 0x40a510 */ goto L_0040a510;
L_0040a508:; BB(0x0040a508);
    /* 0040a508: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a50b: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x40a510u); f_0046ca47();
L_0040a510:; BB(0x0040a510);
    /* 0040a510: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a512: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a513: ret  */ FN_RET(0x0040a4d9); r_esp += 4; return;
}

void f_0040a514(void) /* FUN_0040a514 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a514);
    /* 0040a514: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a515: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a517: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a51a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040a51d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a520: call 0x46cb10 */ r_esp -= 4; W32(r_esp, 0x40a525u); f_0046cb10();
    /* 0040a525: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a528: mov dword ptr [eax], 0x633804 */ W32((u32)(r_eax), 0x633804u);
    /* 0040a52e: push 0x3fc */ { u32 v = 0x3fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a533: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40a538u); f_0048ab58();
    /* 0040a538: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a53b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040a53e: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a542: je 0x40a551 */ if (fZ) goto L_0040a551;
L_0040a544:; BB(0x0040a544);
    /* 0040a544: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040a547: call 0x5b9c90 */ r_esp -= 4; W32(r_esp, 0x40a54cu); f_005b9c90();
    /* 0040a54c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040a54f: jmp 0x40a558 */ goto L_0040a558;
L_0040a551:; BB(0x0040a551);
    /* 0040a551: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0040a558:; BB(0x0040a558);
    /* 0040a558: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a55b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040a55e: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0040a561: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a563: call 0x6243e0 */ r_esp -= 4; W32(r_esp, 0x40a568u); f_006243e0();
    /* 0040a568: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a56b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a56c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a56f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0040a572: call 0x5b9cd5 */ r_esp -= 4; W32(r_esp, 0x40a577u); f_005b9cd5();
L_0040a577:; BB(0x0040a577);
    /* 0040a577: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040a57a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040a57d: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040a580: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0040a583: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a585: je 0x40a60d */ if (fZ) goto L_0040a60d;
L_0040a58b:; BB(0x0040a58b);
    /* 0040a58b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040a592: jmp 0x40a59d */ goto L_0040a59d;
L_0040a594:; BB(0x0040a594);
    /* 0040a594: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a597: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040a59a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0040a59d:; BB(0x0040a59d);
    /* 0040a59d: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a5a1: jge 0x40a608 */ if ((fS==fO)) goto L_0040a608;
L_0040a5a3:; BB(0x0040a5a3);
    /* 0040a5a3: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0040a5aa: jmp 0x40a5b5 */ goto L_0040a5b5;
L_0040a5ac:; BB(0x0040a5ac);
    /* 0040a5ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a5af: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a5b2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0040a5b5:; BB(0x0040a5b5);
    /* 0040a5b5: cmp dword ptr [ebp - 0xc], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a5b9: jge 0x40a606 */ if ((fS==fO)) goto L_0040a606;
L_0040a5bb:; BB(0x0040a5bb);
    /* 0040a5bb: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a5c0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40a5c5u); f_0048ab58();
    /* 0040a5c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a5c8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040a5cb: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a5cf: je 0x40a5de */ if (fZ) goto L_0040a5de;
L_0040a5d1:; BB(0x0040a5d1);
    /* 0040a5d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040a5d4: call 0x40a200 */ r_esp -= 4; W32(r_esp, 0x40a5d9u); f_0040a200();
    /* 0040a5d9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040a5dc: jmp 0x40a5e5 */ goto L_0040a5e5;
L_0040a5de:; BB(0x0040a5de);
    /* 0040a5de: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0040a5e5:; BB(0x0040a5e5);
    /* 0040a5e5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a5e8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0040a5eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a5ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a5f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a5f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a5f4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a5f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a5f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a5fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a5fc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a5ff: call 0x46cd40 */ r_esp -= 4; W32(r_esp, 0x40a604u); f_0046cd40();
    /* 0040a604: jmp 0x40a5ac */ goto L_0040a5ac;
L_0040a606:; BB(0x0040a606);
    /* 0040a606: jmp 0x40a594 */ goto L_0040a594;
L_0040a608:; BB(0x0040a608);
    /* 0040a608: jmp 0x40a577 */ goto L_0040a577;
L_0040a60d:; BB(0x0040a60d);
    /* 0040a60d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a610: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 0040a617: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a61a: mov dword ptr [ecx + 0x28], 1 */ W32((u32)(r_ecx+0x28u), 0x1u);
    /* 0040a621: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a624: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a626: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a627: ret 4 */ FN_RET(0x0040a514); r_esp += 8; return;
}

void f_0040a62a(void) /* FUN_0040a62a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a62a);
    /* 0040a62a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a62b: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a62d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a630: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040a633: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a636: mov dword ptr [eax], 0x633804 */ W32((u32)(r_eax), 0x633804u);
L_0040a63c:; BB(0x0040a63c);
    /* 0040a63c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a63f: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40a644u); f_005dd4d2();
    /* 0040a644: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a646: je 0x40a68d */ if (fZ) goto L_0040a68d;
L_0040a648:; BB(0x0040a648);
    /* 0040a648: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a64a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a64d: call 0x40a6c6 */ r_esp -= 4; W32(r_esp, 0x40a652u); f_0040a6c6();
    /* 0040a652: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040a655: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a658: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a659: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a65c: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x40a661u); f_005dd469();
    /* 0040a661: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a664: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0040a667: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a66a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040a66d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a671: je 0x40a684 */ if (fZ) goto L_0040a684;
L_0040a673:; BB(0x0040a673);
    /* 0040a673: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a675: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a678: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040a67a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a67d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40a67fu); call_ind(t); }
    /* 0040a67f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040a682: jmp 0x40a68b */ goto L_0040a68b;
L_0040a684:; BB(0x0040a684);
    /* 0040a684: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0040a68b:; BB(0x0040a68b);
    /* 0040a68b: jmp 0x40a63c */ goto L_0040a63c;
L_0040a68d:; BB(0x0040a68d);
    /* 0040a68d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a690: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0040a693: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040a696: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040a699: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0040a69c: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a6a0: je 0x40a6b3 */ if (fZ) goto L_0040a6b3;
L_0040a6a2:; BB(0x0040a6a2);
    /* 0040a6a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a6a4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040a6a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040a6a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040a6ac: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40a6aeu); call_ind(t); }
    /* 0040a6ae: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040a6b1: jmp 0x40a6ba */ goto L_0040a6ba;
L_0040a6b3:; BB(0x0040a6b3);
    /* 0040a6b3: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0040a6ba:; BB(0x0040a6ba);
    /* 0040a6ba: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a6bd: call 0x46cb2f */ r_esp -= 4; W32(r_esp, 0x40a6c2u); f_0046cb2f();
    /* 0040a6c2: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a6c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a6c5: ret  */ FN_RET(0x0040a62a); r_esp += 4; return;
}

void f_0040a6c6(void) /* FUN_0040a6c6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a6c6);
    /* 0040a6c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a6c7: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a6c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a6ca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a6cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040a6d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a6d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a6d4: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x40a6d9u); f_005dd560();
    /* 0040a6d9: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a6db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a6dc: ret 4 */ FN_RET(0x0040a6c6); r_esp += 8; return;
}

void f_0040a6df(void) /* FUN_0040a6df */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a6df);
    /* 0040a6df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a6e0: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a6e2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a6e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a6e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a6eb: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0040a6ee: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040a6f1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a6f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a6f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a6f8: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0040a6fb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a6fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a701: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0040a704: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a707: call 0x40a6c6 */ r_esp -= 4; W32(r_esp, 0x40a70cu); f_0040a6c6();
    /* 0040a70c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a70e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a70f: ret  */ FN_RET(0x0040a6df); r_esp += 4; return;
}

void f_0040a710(void) /* FUN_0040a710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a710);
    /* 0040a710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a711: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a713: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a716: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040a719: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0040a71d: and eax, 0xf0 */ {  u32 a = r_eax; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040a722: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040a725: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a728: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040a72b: movsx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0040a72f: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a732: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a735: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a738: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040a73b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0040a73e: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a742: jne 0x40a74b */ if (!fZ) goto L_0040a74b;
L_0040a744:; BB(0x0040a744);
    /* 0040a744: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
L_0040a74b:; BB(0x0040a74b);
    /* 0040a74b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0040a752: jmp 0x40a75d */ goto L_0040a75d;
L_0040a754:; BB(0x0040a754);
    /* 0040a754: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a757: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040a75a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0040a75d:; BB(0x0040a75d);
    /* 0040a75d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040a760: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40a765u); f_005dd4d2();
    /* 0040a765: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a768: jge 0x40a7c2 */ if ((fS==fO)) goto L_0040a7c2;
L_0040a76a:; BB(0x0040a76a);
    /* 0040a76a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a76d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a76e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040a771: call 0x40a6c6 */ r_esp -= 4; W32(r_esp, 0x40a776u); f_0040a6c6();
    /* 0040a776: mov ecx, eax */ r_ecx = r_eax;
    /* 0040a778: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x40a77du); f_0046ca47();
    /* 0040a77d: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a780: jne 0x40a7c0 */ if (!fZ) goto L_0040a7c0;
L_0040a782:; BB(0x0040a782);
    /* 0040a782: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a785: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a786: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040a789: call 0x40a6c6 */ r_esp -= 4; W32(r_esp, 0x40a78eu); f_0040a6c6();
    /* 0040a78e: mov ecx, eax */ r_ecx = r_eax;
    /* 0040a790: call 0x46ca1a */ r_esp -= 4; W32(r_esp, 0x40a795u); f_0046ca1a();
    /* 0040a795: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a798: jne 0x40a7c0 */ if (!fZ) goto L_0040a7c0;
L_0040a79a:; BB(0x0040a79a);
    /* 0040a79a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a79d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a79e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040a7a1: call 0x40a6c6 */ r_esp -= 4; W32(r_esp, 0x40a7a6u); f_0040a6c6();
    /* 0040a7a6: mov ecx, eax */ r_ecx = r_eax;
    /* 0040a7a8: call 0x46ca74 */ r_esp -= 4; W32(r_esp, 0x40a7adu); f_0046ca74();
    /* 0040a7ad: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a7b0: jne 0x40a7c0 */ if (!fZ) goto L_0040a7c0;
L_0040a7b2:; BB(0x0040a7b2);
    /* 0040a7b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a7b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a7b6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040a7b9: call 0x40a6c6 */ r_esp -= 4; W32(r_esp, 0x40a7beu); f_0040a6c6();
    /* 0040a7be: jmp 0x40a7c4 */ goto L_0040a7c4;
L_0040a7c0:; BB(0x0040a7c0);
    /* 0040a7c0: jmp 0x40a754 */ goto L_0040a754;
L_0040a7c2:; BB(0x0040a7c2);
    /* 0040a7c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040a7c4:; BB(0x0040a7c4);
    /* 0040a7c4: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a7c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a7c7: ret 4 */ FN_RET(0x0040a710); r_esp += 8; return;
}

void f_0040a7ca(void) /* FUN_0040a7ca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a7ca);
    /* 0040a7ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a7cb: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a7cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a7ce: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a7d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a7d4: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40a7d9u); f_005dd4d2();
    /* 0040a7d9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a7da: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 0040a7df: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a7df, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a7df, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a7e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a7e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a7e4: ret  */ FN_RET(0x0040a7ca); r_esp += 4; return;
}

void f_0040a7e5(void) /* FUN_0040a7e5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a7e5);
    /* 0040a7e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a7e6: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a7e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a7e9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a7ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a7ef: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40a7f4u); f_005dd4d2();
    /* 0040a7f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a7f7: sub eax, dword ptr [ecx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x24u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a7fa: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a7fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a7fd: ret  */ FN_RET(0x0040a7e5); r_esp += 4; return;
}

void f_0040a7fe(void) /* FUN_0040a7fe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a7fe);
    /* 0040a7fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a7ff: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a801: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a802: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a805: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a808: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a80c: jne 0x40a81e */ if (!fZ) goto L_0040a81e;
L_0040a80e:; BB(0x0040a80e);
    /* 0040a80e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a811: call 0x40a82b */ r_esp -= 4; W32(r_esp, 0x40a816u); f_0040a82b();
    /* 0040a816: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a819: cmp dword ptr [ecx + 0x24], eax */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a81c: jl 0x40a825 */ if ((fS!=fO)) goto L_0040a825;
L_0040a81e:; BB(0x0040a81e);
    /* 0040a81e: mov eax, 1 */ r_eax = 0x1u;
    /* 0040a823: jmp 0x40a827 */ goto L_0040a827;
L_0040a825:; BB(0x0040a825);
    /* 0040a825: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040a827:; BB(0x0040a827);
    /* 0040a827: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a829: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a82a: ret  */ FN_RET(0x0040a7fe); r_esp += 4; return;
}

void f_0040a82b(void) /* FUN_0040a82b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a82b);
    /* 0040a82b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a82c: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a82e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a831: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a834: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a837: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40a83cu); f_005dd4d2();
    /* 0040a83c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040a83f: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 0040a842: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040a847: fld qword ptr [eax + 0x88] */ FPUSH(R_F64((u32)(r_eax+0x88u)));
    /* 0040a84d: fdiv qword ptr [0x633810] */ ST(0) = ST(0) / R_F64((u32)(0x633810u));
    /* 0040a853: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0040a855: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x40a85au); f_00624144();
    /* 0040a85a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a85c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a85d: ret  */ FN_RET(0x0040a82b); r_esp += 4; return;
}

void f_0040a85e(void) /* FUN_0040a85e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a85e);
    /* 0040a85e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a85f: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a861: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a862: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a865: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a868: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40a86du); f_005dd4d2();
    /* 0040a86d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a870: cmp dword ptr [ecx + 0x24], eax */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a873: jne 0x40a893 */ if (!fZ) goto L_0040a893;
L_0040a875:; BB(0x0040a875);
    /* 0040a875: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040a87b: call 0x4100e0 */ r_esp -= 4; W32(r_esp, 0x40a880u); f_004100e0();
    /* 0040a880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a881: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a884: call 0x40a8ff */ r_esp -= 4; W32(r_esp, 0x40a889u); f_0040a8ff();
    /* 0040a889: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a88c: mov dword ptr [edx + 0x28], 1 */ W32((u32)(r_edx+0x28u), 0x1u);
L_0040a893:; BB(0x0040a893);
    /* 0040a893: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a895: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a896: ret  */ FN_RET(0x0040a85e); r_esp += 4; return;
}

void f_0040a897(void) /* FUN_0040a897 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a897);
    /* 0040a897: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a898: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a89a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a89d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040a8a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a8a3: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 0040a8aa: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040a8b0: call 0x410330 */ r_esp -= 4; W32(r_esp, 0x40a8b5u); f_00410330();
    /* 0040a8b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040a8bc: jmp 0x40a8c7 */ goto L_0040a8c7;
L_0040a8be:; BB(0x0040a8be);
    /* 0040a8be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a8c1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a8c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040a8c7:; BB(0x0040a8c7);
    /* 0040a8c7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a8ca: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40a8cfu); f_005dd4d2();
    /* 0040a8cf: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a8d2: jge 0x40a8e9 */ if ((fS==fO)) goto L_0040a8e9;
L_0040a8d4:; BB(0x0040a8d4);
    /* 0040a8d4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a8d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a8d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a8db: call 0x40a6c6 */ r_esp -= 4; W32(r_esp, 0x40a8e0u); f_0040a6c6();
    /* 0040a8e0: mov ecx, eax */ r_ecx = r_eax;
    /* 0040a8e2: call 0x40a268 */ r_esp -= 4; W32(r_esp, 0x40a8e7u); f_0040a268();
    /* 0040a8e7: jmp 0x40a8be */ goto L_0040a8be;
L_0040a8e9:; BB(0x0040a8e9);
    /* 0040a8e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a8ec: call 0x46cc04 */ r_esp -= 4; W32(r_esp, 0x40a8f1u); f_0046cc04();
    /* 0040a8f1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a8f4: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 0040a8fb: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a8fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a8fe: ret  */ FN_RET(0x0040a897); r_esp += 4; return;
}

void f_0040a8ff(void) /* FUN_0040a8ff */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a8ff);
    /* 0040a8ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a900: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a902: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a905: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040a908: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a90b: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 0040a912: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040a918: call 0x410330 */ r_esp -= 4; W32(r_esp, 0x40a91du); f_00410330();
    /* 0040a91d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040a924: jmp 0x40a92f */ goto L_0040a92f;
L_0040a926:; BB(0x0040a926);
    /* 0040a926: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a929: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a92c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040a92f:; BB(0x0040a92f);
    /* 0040a92f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a932: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a935: jge 0x40a965 */ if ((fS==fO)) goto L_0040a965;
L_0040a937:; BB(0x0040a937);
    /* 0040a937: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a93a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a93b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a93e: call 0x40a6c6 */ r_esp -= 4; W32(r_esp, 0x40a943u); f_0040a6c6();
    /* 0040a943: mov dword ptr [eax + 0xc0], 0 */ W32((u32)(r_eax+0xc0u), 0x0u);
    /* 0040a94d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a950: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a951: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a954: call 0x40a6c6 */ r_esp -= 4; W32(r_esp, 0x40a959u); f_0040a6c6();
    /* 0040a959: mov dword ptr [eax + 0xc4], 0 */ W32((u32)(r_eax+0xc4u), 0x0u);
    /* 0040a963: jmp 0x40a926 */ goto L_0040a926;
L_0040a965:; BB(0x0040a965);
    /* 0040a965: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040a968: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a969: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a96c: call 0x46cca8 */ r_esp -= 4; W32(r_esp, 0x40a971u); f_0046cca8();
    /* 0040a971: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040a977: call 0x4101f9 */ r_esp -= 4; W32(r_esp, 0x40a97cu); f_004101f9();
    /* 0040a97c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a97e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a97f: ret 4 */ FN_RET(0x0040a8ff); r_esp += 8; return;
}

void f_0040a982(void) /* FUN_0040a982 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a982);
    /* 0040a982: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a983: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a985: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a988: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0040a98b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040a98e: call 0x46c250 */ r_esp -= 4; W32(r_esp, 0x40a993u); f_0046c250();
    /* 0040a993: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040a996: mov dword ptr [eax], 0x633864 */ W32((u32)(r_eax), 0x633864u);
    /* 0040a99c: mov dword ptr [ebp - 0x2c], 0x203 */ W32((u32)(r_ebp+0xffffffd4u), 0x203u);
    /* 0040a9a3: mov dword ptr [ebp - 0x28], 0xae */ W32((u32)(r_ebp+0xffffffd8u), 0xaeu);
    /* 0040a9aa: mov dword ptr [ebp - 0x24], 0x180 */ W32((u32)(r_ebp+0xffffffdcu), 0x180u);
    /* 0040a9b1: mov dword ptr [ebp - 0x20], 0xec */ W32((u32)(r_ebp+0xffffffe0u), 0xecu);
    /* 0040a9b8: mov dword ptr [ebp - 0x1c], 0xc0 */ W32((u32)(r_ebp+0xffffffe4u), 0xc0u);
    /* 0040a9bf: mov dword ptr [ebp - 0x18], 0xec */ W32((u32)(r_ebp+0xffffffe8u), 0xecu);
    /* 0040a9c6: mov dword ptr [ebp - 0x14], 0x39 */ W32((u32)(r_ebp+0xffffffecu), 0x39u);
    /* 0040a9cd: mov dword ptr [ebp - 0x10], 0xae */ W32((u32)(r_ebp+0xfffffff0u), 0xaeu);
    /* 0040a9d4: mov dword ptr [ebp - 0xc], 0x109 */ W32((u32)(r_ebp+0xfffffff4u), 0x109u);
    /* 0040a9db: mov dword ptr [ebp - 8], 0x46 */ W32((u32)(r_ebp+0xfffffff8u), 0x46u);
    /* 0040a9e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040a9e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a9e6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040a9e9: call 0x46c28b */ r_esp -= 4; W32(r_esp, 0x40a9eeu); f_0046c28b();
    /* 0040a9ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a9f0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040a9f3: call 0x46c327 */ r_esp -= 4; W32(r_esp, 0x40a9f8u); f_0046c327();
    /* 0040a9f8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040a9fb: mov eax, dword ptr [ebp + edx*8 - 0x2c] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffd4u));
    /* 0040a9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa00: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040aa03: call 0x46c2d9 */ r_esp -= 4; W32(r_esp, 0x40aa08u); f_0046c2d9();
    /* 0040aa08: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040aa0b: mov edx, dword ptr [ebp + ecx*8 - 0x28] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffd8u));
    /* 0040aa0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa10: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040aa13: call 0x46c300 */ r_esp -= 4; W32(r_esp, 0x40aa18u); f_0046c300();
    /* 0040aa18: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040aa1f: jmp 0x40aa2a */ goto L_0040aa2a;
L_0040aa21:; BB(0x0040aa21);
    /* 0040aa21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040aa24: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040aa27: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040aa2a:; BB(0x0040aa2a);
    /* 0040aa2a: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040aa2e: jge 0x40ac4b */ if ((fS==fO)) goto L_0040ac4b;
L_0040aa34:; BB(0x0040aa34);
    /* 0040aa34: push 0x88c */ { u32 v = 0x88cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa39: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40aa3eu); f_0048ab58();
    /* 0040aa3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040aa41: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0040aa44: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040aa48: je 0x40aa57 */ if (fZ) goto L_0040aa57;
L_0040aa4a:; BB(0x0040aa4a);
    /* 0040aa4a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040aa4d: call 0x42683b */ r_esp -= 4; W32(r_esp, 0x40aa52u); f_0042683b();
    /* 0040aa52: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0040aa55: jmp 0x40aa5e */ goto L_0040aa5e;
L_0040aa57:; BB(0x0040aa57);
    /* 0040aa57: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0040aa5e:; BB(0x0040aa5e);
    /* 0040aa5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040aa61: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040aa64: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040aa67: mov dword ptr [edx + ecx*4 + 0x20c], eax */ W32((u32)(r_edx+r_ecx*4+0x20cu), r_eax);
    /* 0040aa6e: push 0x6f5790 */ { u32 v = 0x6f5790u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040aa76: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040aa79: mov ecx, dword ptr [edx + ecx*4 + 0x20c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20cu));
    /* 0040aa80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040aa83: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040aa86: mov eax, dword ptr [edx + eax*4 + 0x20c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20cu));
    /* 0040aa8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040aa8f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x40aa92u); call_ind(t); }
    /* 0040aa92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040aa95: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040aa98: mov ecx, dword ptr [ecx + eax*4 + 0x20c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20cu));
    /* 0040aa9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040aaa2: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040aaa5: mov edx, dword ptr [eax + edx*4 + 0x20c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20cu));
    /* 0040aaac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040aaae: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x40aab1u); call_ind(t); }
    /* 0040aab1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aab3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040aab6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040aab9: mov ecx, dword ptr [edx + ecx*4 + 0x20c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20cu));
    /* 0040aac0: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x40aac5u); f_005e87aa();
    /* 0040aac5: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0040aac7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040aaca: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040aacd: mov ecx, dword ptr [ecx + eax*4 + 0x20c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20cu));
    /* 0040aad4: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x40aad9u); f_005e8740();
    /* 0040aad9: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0040aadb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040aade: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040aae1: mov ecx, dword ptr [eax + edx*4 + 0x20c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20cu));
    /* 0040aae8: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x40aaedu); f_005e8775();
    /* 0040aaed: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aaef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040aaf2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040aaf5: mov ecx, dword ptr [edx + ecx*4 + 0x20c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20cu));
    /* 0040aafc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040aaff: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040ab02: mov eax, dword ptr [edx + eax*4 + 0x20c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20cu));
    /* 0040ab09: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040ab0b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40ab0eu); call_ind(t); }
    /* 0040ab0e: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ab13: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040ab16: mov ecx, dword ptr [ecx + eax*4 + 0x20c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20cu));
    /* 0040ab1d: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x40ab22u); f_005e8e99();
    /* 0040ab22: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab27: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab2c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab31: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ab34: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040ab37: mov ecx, dword ptr [eax + edx*4 + 0x20c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20cu));
    /* 0040ab3e: call 0x5e8b5a */ r_esp -= 4; W32(r_esp, 0x40ab43u); f_005e8b5a();
    /* 0040ab43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ab46: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040ab49: mov ecx, dword ptr [edx + ecx*4 + 0x20c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20cu));
    /* 0040ab50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ab53: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040ab56: mov eax, dword ptr [edx + eax*4 + 0x20c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20cu));
    /* 0040ab5d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040ab5f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x40ab62u); call_ind(t); }
    /* 0040ab62: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab64: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40ab69u); f_0048ab58();
    /* 0040ab69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ab6c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0040ab6f: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ab73: je 0x40ab82 */ if (fZ) goto L_0040ab82;
L_0040ab75:; BB(0x0040ab75);
    /* 0040ab75: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0040ab78: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x40ab7du); f_005e9d30();
    /* 0040ab7d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0040ab80: jmp 0x40ab89 */ goto L_0040ab89;
L_0040ab82:; BB(0x0040ab82);
    /* 0040ab82: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0040ab89:; BB(0x0040ab89);
    /* 0040ab89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ab8c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040ab8f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040ab92: mov dword ptr [ecx + eax*4 + 0x21c], edx */ W32((u32)(r_ecx+r_eax*4+0x21cu), r_edx);
    /* 0040ab99: push 0x13b2 */ { u32 v = 0x13b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab9e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040aba1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040aba4: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0040abab: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40abb0u); f_005ea0c3();
    /* 0040abb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040abb2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040abb5: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040abb8: mov ecx, dword ptr [eax + edx*4 + 0x21c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x21cu));
    /* 0040abbf: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40abc4u); f_005ea1cf();
    /* 0040abc4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040abc7: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040abca: mov ecx, dword ptr [edx + ecx*4 + 0x21c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x21cu));
    /* 0040abd1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040abd4: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040abd7: mov eax, dword ptr [edx + eax*4 + 0x21c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x21cu));
    /* 0040abde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040abe0: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x40abe3u); call_ind(t); }
    /* 0040abe3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040abe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040abe7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040abea: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040abed: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0040abf4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040abf7: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040abfa: mov edx, dword ptr [eax + edx*4 + 0x21c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x21cu));
    /* 0040ac01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040ac03: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x40ac06u); call_ind(t); }
    /* 0040ac06: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ac08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ac0b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040ac0e: mov ecx, dword ptr [edx + ecx*4 + 0x21c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x21cu));
    /* 0040ac15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ac18: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040ac1b: mov eax, dword ptr [edx + eax*4 + 0x21c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x21cu));
    /* 0040ac22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040ac24: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40ac27u); call_ind(t); }
    /* 0040ac27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ac2a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040ac2d: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0040ac34: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ac37: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040ac3a: mov edx, dword ptr [eax + edx*4 + 0x21c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x21cu));
    /* 0040ac41: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040ac43: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x40ac46u); call_ind(t); }
    /* 0040ac46: jmp 0x40aa21 */ goto L_0040aa21;
L_0040ac4b:; BB(0x0040ac4b);
    /* 0040ac4b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040ac4e: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ac50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ac51: ret 4 */ FN_RET(0x0040a982); r_esp += 8; return;
}

void f_0040ac54(void) /* FUN_0040ac54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040ac54);
    /* 0040ac54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ac55: mov ebp, esp */ r_ebp = r_esp;
    /* 0040ac57: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040ac5a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040ac5d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040ac60: mov dword ptr [eax], 0x633864 */ W32((u32)(r_eax), 0x633864u);
    /* 0040ac66: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040ac6c: jmp 0x40ac7a */ goto L_0040ac7a;
L_0040ac6e:; BB(0x0040ac6e);
    /* 0040ac6e: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0040ac72: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0040ac76: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_0040ac7a:; BB(0x0040ac7a);
    /* 0040ac7a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040ac7e: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ac81: jge 0x40ad3c */ if ((fS==fO)) goto L_0040ad3c;
L_0040ac87:; BB(0x0040ac87);
    /* 0040ac87: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040ac8b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040ac8e: cmp dword ptr [ecx + eax*4 + 0x20c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x20cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ac96: je 0x40acdf */ if (fZ) goto L_0040acdf;
L_0040ac98:; BB(0x0040ac98);
    /* 0040ac98: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040ac9c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040ac9f: mov ecx, dword ptr [eax + edx*4 + 0x20c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20cu));
    /* 0040aca6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040aca9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040acac: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040acaf: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040acb3: je 0x40acc6 */ if (fZ) goto L_0040acc6;
L_0040acb5:; BB(0x0040acb5);
    /* 0040acb5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040acb7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040acba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040acbc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040acbf: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40acc1u); call_ind(t); }
    /* 0040acc1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040acc4: jmp 0x40accd */ goto L_0040accd;
L_0040acc6:; BB(0x0040acc6);
    /* 0040acc6: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0040accd:; BB(0x0040accd);
    /* 0040accd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040acd1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040acd4: mov dword ptr [ecx + eax*4 + 0x20c], 0 */ W32((u32)(r_ecx+r_eax*4+0x20cu), 0x0u);
L_0040acdf:; BB(0x0040acdf);
    /* 0040acdf: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040ace3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040ace6: cmp dword ptr [eax + edx*4 + 0x21c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x21cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040acee: je 0x40ad37 */ if (fZ) goto L_0040ad37;
L_0040acf0:; BB(0x0040acf0);
    /* 0040acf0: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040acf4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040acf7: mov eax, dword ptr [edx + ecx*4 + 0x21c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x21cu));
    /* 0040acfe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040ad01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ad04: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040ad07: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ad0b: je 0x40ad1e */ if (fZ) goto L_0040ad1e;
L_0040ad0d:; BB(0x0040ad0d);
    /* 0040ad0d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ad0f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ad12: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040ad14: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ad17: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x40ad19u); call_ind(t); }
    /* 0040ad19: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040ad1c: jmp 0x40ad25 */ goto L_0040ad25;
L_0040ad1e:; BB(0x0040ad1e);
    /* 0040ad1e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0040ad25:; BB(0x0040ad25);
    /* 0040ad25: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040ad29: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040ad2c: mov dword ptr [edx + ecx*4 + 0x21c], 0 */ W32((u32)(r_edx+r_ecx*4+0x21cu), 0x0u);
L_0040ad37:; BB(0x0040ad37);
    /* 0040ad37: jmp 0x40ac6e */ goto L_0040ac6e;
L_0040ad3c:; BB(0x0040ad3c);
    /* 0040ad3c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040ad3f: call 0x46c26f */ r_esp -= 4; W32(r_esp, 0x40ad44u); f_0046c26f();
    /* 0040ad44: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ad46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ad47: ret  */ FN_RET(0x0040ac54); r_esp += 4; return;
}

void f_0040ad48(void) /* FUN_0040ad48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040ad48);
    /* 0040ad48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ad49: mov ebp, esp */ r_ebp = r_esp;
    /* 0040ad4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ad4c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040ad4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040ad52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ad53: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ad56: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x40ad5bu); f_005dd560();
    /* 0040ad5b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ad5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ad5e: ret 4 */ FN_RET(0x0040ad48); r_esp += 8; return;
}

void f_0040ad61(void) /* FUN_0040ad61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040ad61);
    /* 0040ad61: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ad62: mov ebp, esp */ r_ebp = r_esp;
    /* 0040ad64: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040ad67: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040ad6a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040ad71: jmp 0x40ad7c */ goto L_0040ad7c;
L_0040ad73:; BB(0x0040ad73);
    /* 0040ad73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ad76: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040ad79: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040ad7c:; BB(0x0040ad7c);
    /* 0040ad7c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ad7f: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40ad84u); f_005dd4d2();
    /* 0040ad84: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ad87: jge 0x40ada5 */ if ((fS==fO)) goto L_0040ada5;
L_0040ad89:; BB(0x0040ad89);
    /* 0040ad89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ad8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ad8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ad90: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40ad95u); f_0040ad48();
    /* 0040ad95: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040ad98: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ad9b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040ad9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ada0: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x40ada3u); call_ind(t); }
    /* 0040ada3: jmp 0x40ad73 */ goto L_0040ad73;
L_0040ada5:; BB(0x0040ada5);
    /* 0040ada5: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ada7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ada8: ret  */ FN_RET(0x0040ad61); r_esp += 4; return;
}

void f_0040ada9(void) /* FUN_0040ada9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040ada9);
    /* 0040ada9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040adaa: mov ebp, esp */ r_ebp = r_esp;
    /* 0040adac: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040adaf: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040adb2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040adb5: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040adb8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040adbb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040adc2: jmp 0x40adcd */ goto L_0040adcd;
L_0040adc4:; BB(0x0040adc4);
    /* 0040adc4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040adc7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040adca: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0040adcd:; BB(0x0040adcd);
    /* 0040adcd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040add0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040add3: cmp ecx, dword ptr [eax + 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040add6: jge 0x40adeb */ if ((fS==fO)) goto L_0040adeb;
L_0040add8:; BB(0x0040add8);
    /* 0040add8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040addb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040adde: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0040ade1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ade4: call 0x40adf8 */ r_esp -= 4; W32(r_esp, 0x40ade9u); f_0040adf8();
    /* 0040ade9: jmp 0x40adc4 */ goto L_0040adc4;
L_0040adeb:; BB(0x0040adeb);
    /* 0040adeb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040adee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040adf1: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 0040adf4: mov esp, ebp */ r_esp = r_ebp;
    /* 0040adf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040adf7: ret  */ FN_RET(0x0040ada9); r_esp += 4; return;
}

void f_0040adf8(void) /* FUN_0040adf8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040adf8);
    /* 0040adf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040adf9: mov ebp, esp */ r_ebp = r_esp;
    /* 0040adfb: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040adfe: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040ae01: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040ae08: jmp 0x40ae13 */ goto L_0040ae13;
L_0040ae0a:; BB(0x0040ae0a);
    /* 0040ae0a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ae0d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040ae10: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040ae13:; BB(0x0040ae13);
    /* 0040ae13: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ae16: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40ae1bu); f_0040bc0d();
    /* 0040ae1b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ae1e: jge 0x40ae4a */ if ((fS==fO)) goto L_0040ae4a;
L_0040ae20:; BB(0x0040ae20);
    /* 0040ae20: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae22: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ae25: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040ae28: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ae2b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ae2e: lea ecx, [eax + edx + 0x74] */ r_ecx = (u32)(r_eax+r_edx+0x74u);
    /* 0040ae32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ae35: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0040ae38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ae3c: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40ae41u); f_0040ad48();
    /* 0040ae41: mov ecx, eax */ r_ecx = r_eax;
    /* 0040ae43: call 0x40a360 */ r_esp -= 4; W32(r_esp, 0x40ae48u); f_0040a360();
    /* 0040ae48: jmp 0x40ae0a */ goto L_0040ae0a;
L_0040ae4a:; BB(0x0040ae4a);
    /* 0040ae4a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ae4d: call 0x40b35e */ r_esp -= 4; W32(r_esp, 0x40ae52u); f_0040b35e();
    /* 0040ae52: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ae54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ae55: ret  */ FN_RET(0x0040adf8); r_esp += 4; return;
}

void f_0040ae56(void) /* FUN_0040ae56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040ae56);
    /* 0040ae56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae57: mov ebp, esp */ r_ebp = r_esp;
    /* 0040ae59: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040ae5c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040ae5f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040ae66: jmp 0x40ae71 */ goto L_0040ae71;
L_0040ae68:; BB(0x0040ae68);
    /* 0040ae68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ae6b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040ae6e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040ae71:; BB(0x0040ae71);
    /* 0040ae71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ae74: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40ae79u); f_005dd4d2();
    /* 0040ae79: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ae7c: jge 0x40ae9a */ if ((fS==fO)) goto L_0040ae9a;
L_0040ae7e:; BB(0x0040ae7e);
    /* 0040ae7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ae81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ae85: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40ae8au); f_0040ad48();
    /* 0040ae8a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040ae8d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ae90: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040ae92: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ae95: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x40ae98u); call_ind(t); }
    /* 0040ae98: jmp 0x40ae68 */ goto L_0040ae68;
L_0040ae9a:; BB(0x0040ae9a);
    /* 0040ae9a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ae9d: call 0x5dd52a */ r_esp -= 4; W32(r_esp, 0x40aea2u); f_005dd52a();
    /* 0040aea2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040aea5: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 0040aeac: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040aeaf: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 0040aeb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040aeb9: call 0x46c2ef */ r_esp -= 4; W32(r_esp, 0x40aebeu); f_0046c2ef();
    /* 0040aebe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040aec1: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0040aec4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040aec7: call 0x46c316 */ r_esp -= 4; W32(r_esp, 0x40aeccu); f_0046c316();
    /* 0040aecc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040aecf: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0040aed2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040aed5: mov dword ptr [eax + 0x4c], 1 */ W32((u32)(r_eax+0x4cu), 0x1u);
    /* 0040aedc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040aedf: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 0040aee6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040aee9: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
    /* 0040aef0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040aef3: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
    /* 0040aefa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040aefd: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
    /* 0040af04: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040af07: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
    /* 0040af0e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040af11: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 0040af18: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040af1b: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 0040af22: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040af25: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 0040af2c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040af2f: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 0040af36: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040af3d: jmp 0x40af48 */ goto L_0040af48;
L_0040af3f:; BB(0x0040af3f);
    /* 0040af3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040af42: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040af45: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040af48:; BB(0x0040af48);
    /* 0040af48: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040af4c: jge 0x40affa */ if ((fS==fO)) goto L_0040affa;
L_0040af52:; BB(0x0040af52);
    /* 0040af52: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040af59: jmp 0x40af64 */ goto L_0040af64;
L_0040af5b:; BB(0x0040af5b);
    /* 0040af5b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040af5e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040af61: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0040af64:; BB(0x0040af64);
    /* 0040af64: cmp dword ptr [ebp - 8], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040af68: jge 0x40af83 */ if ((fS==fO)) goto L_0040af83;
L_0040af6a:; BB(0x0040af6a);
    /* 0040af6a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040af6d: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040af70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040af73: lea edx, [ecx + eax + 0x74] */ r_edx = (u32)(r_ecx+r_eax+0x74u);
    /* 0040af77: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040af7a: mov dword ptr [edx + eax*4], 0xffffffff */ W32((u32)(r_edx+r_eax*4), 0xffffffffu);
    /* 0040af81: jmp 0x40af5b */ goto L_0040af5b;
L_0040af83:; BB(0x0040af83);
    /* 0040af83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040af86: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040af89: mov word ptr [edx + ecx*2 + 0x204], 0xffff */ W16((u32)(r_edx+r_ecx*2+0x204u), 0xffffu);
    /* 0040af93: push 0x6f5794 */ { u32 v = 0x6f5794u; r_esp -= 4; W32(r_esp, v); }
    /* 0040af98: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040af9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040af9e: mov ecx, dword ptr [ecx + eax*4 + 0x20c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20cu));
    /* 0040afa5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040afa8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040afab: mov edx, dword ptr [eax + edx*4 + 0x20c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20cu));
    /* 0040afb2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040afb4: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x40afb7u); call_ind(t); }
    /* 0040afb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040afba: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040afbd: mov ecx, dword ptr [edx + ecx*4 + 0x20c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20cu));
    /* 0040afc4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040afc7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040afca: mov eax, dword ptr [edx + eax*4 + 0x20c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20cu));
    /* 0040afd1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040afd3: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x40afd6u); call_ind(t); }
    /* 0040afd6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040afd9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040afdc: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0040afe3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040afe6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040afe9: mov edx, dword ptr [eax + edx*4 + 0x21c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x21cu));
    /* 0040aff0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040aff2: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x40aff5u); call_ind(t); }
    /* 0040aff5: jmp 0x40af3f */ goto L_0040af3f;
L_0040affa:; BB(0x0040affa);
    /* 0040affa: mov esp, ebp */ r_esp = r_ebp;
    /* 0040affc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040affd: ret  */ FN_RET(0x0040ae56); r_esp += 4; return;
}

void f_0040affe(void) /* FUN_0040affe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040affe);
    /* 0040affe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040afff: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b001: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b004: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040b007: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b00a: call 0x46c375 */ r_esp -= 4; W32(r_esp, 0x40b00fu); f_0046c375();
    /* 0040b00f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b010: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040b013: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040b015: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040b018: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40b01bu); call_ind(t); }
    /* 0040b01b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b01e: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x40b023u); f_0046c2a1();
    /* 0040b023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b024: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040b027: call 0x46ca5b */ r_esp -= 4; W32(r_esp, 0x40b02cu); f_0046ca5b();
    /* 0040b02c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040b02f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b030: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b033: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x40b038u); f_005dd425();
    /* 0040b038: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b03b: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040b03e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0040b041: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040b045: ja 0x40b0b7 */ if ((!fC&&!fZ)) goto L_0040b0b7;
L_0040b047:; BB(0x0040b047);
    /* 0040b047: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b04a: jmp dword ptr [eax*4 + 0x40b0df] */ { u32 t = R32((u32)(r_eax*4+0x40b0dfu)); switch (t) { case 0x40b051u: goto L_0040b051; case 0x40b06bu: goto L_0040b06b; case 0x40b085u: goto L_0040b085; case 0x40b09fu: goto L_0040b09f; default: UNSUP(0x0040b04a, "jump table entry is not a known target"); } }
L_0040b051:; BB(0x0040b051);
    /* 0040b051: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b054: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0040b057: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040b05a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b05d: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0040b060: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b063: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0040b066: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0040b069: jmp 0x40b0b7 */ goto L_0040b0b7;
L_0040b06b:; BB(0x0040b06b);
    /* 0040b06b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b06e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0040b071: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040b074: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b077: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 0040b07a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b07d: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0040b080: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040b083: jmp 0x40b0b7 */ goto L_0040b0b7;
L_0040b085:; BB(0x0040b085);
    /* 0040b085: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b088: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0040b08b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b08e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b091: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 0040b094: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b097: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0040b09a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040b09d: jmp 0x40b0b7 */ goto L_0040b0b7;
L_0040b09f:; BB(0x0040b09f);
    /* 0040b09f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b0a2: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0040b0a5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040b0a8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b0ab: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0040b0ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b0b1: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0040b0b4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0040b0b7:; BB(0x0040b0b7);
    /* 0040b0b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b0ba: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40b0bfu); f_005dd4d2();
    /* 0040b0bf: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040b0c2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b0c5: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040b0c8: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b0cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b0ce: lea edx, [ecx + edx + 0x74] */ r_edx = (u32)(r_ecx+r_edx+0x74u);
    /* 0040b0d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040b0d5: mov dword ptr [edx + ecx*4 - 4], eax */ W32((u32)(r_edx+r_ecx*4+0xfffffffcu), r_eax);
    /* 0040b0d9: mov esp, ebp */ r_esp = r_ebp;
    /* 0040b0db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b0dc: ret 4 */ FN_RET(0x0040affe); r_esp += 8; return;
}

void f_0040b0ef(void) /* FUN_0040b0ef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040b0ef);
    /* 0040b0ef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b0f0: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b0f2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b0f5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040b0f8: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0040b0ff: jmp 0x40b10a */ goto L_0040b10a;
L_0040b101:; BB(0x0040b101);
    /* 0040b101: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b104: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b107: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0040b10a:; BB(0x0040b10a);
    /* 0040b10a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040b10d: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40b112u); f_0040bc0d();
    /* 0040b112: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b115: jge 0x40b1c5 */ if ((fS==fO)) goto L_0040b1c5;
L_0040b11b:; BB(0x0040b11b);
    /* 0040b11b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040b11e: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040b121: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b124: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040b127: lea ecx, [eax + edx + 0x74] */ r_ecx = (u32)(r_eax+r_edx+0x74u);
    /* 0040b12b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b12e: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0040b131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b132: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040b135: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40b13au); f_0040ad48();
    /* 0040b13a: mov ecx, eax */ r_ecx = r_eax;
    /* 0040b13c: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x40b141u); f_0046ca47();
    /* 0040b141: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b144: jne 0x40b14c */ if (!fZ) goto L_0040b14c;
L_0040b146:; BB(0x0040b146);
    /* 0040b146: mov byte ptr [ebp - 8], 0 */ W8((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040b14a: jmp 0x40b178 */ goto L_0040b178;
L_0040b14c:; BB(0x0040b14c);
    /* 0040b14c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040b14f: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040b152: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b155: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040b158: lea ecx, [eax + edx + 0x74] */ r_ecx = (u32)(r_eax+r_edx+0x74u);
    /* 0040b15c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b15f: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0040b162: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b163: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040b166: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40b16bu); f_0040ad48();
    /* 0040b16b: mov ecx, eax */ r_ecx = r_eax;
    /* 0040b16d: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x40b172u); f_0046ca47();
    /* 0040b172: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040b175: mov byte ptr [ebp - 8], al */ W8((u32)(r_ebp+0xfffffff8u), (u8)r_eax);
L_0040b178:; BB(0x0040b178);
    /* 0040b178: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040b17b: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040b17e: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b181: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040b184: lea ecx, [eax + edx + 0x74] */ r_ecx = (u32)(r_eax+r_edx+0x74u);
    /* 0040b188: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b18b: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0040b18e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b18f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040b192: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40b197u); f_0040ad48();
    /* 0040b197: mov ecx, eax */ r_ecx = r_eax;
    /* 0040b199: call 0x46ca1a */ r_esp -= 4; W32(r_esp, 0x40b19eu); f_0046ca1a();
    /* 0040b19e: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040b1a1: mov byte ptr [ebp - 4], al */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_eax);
    /* 0040b1a4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040b1a7: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0040b1ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040b1b0: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0040b1b6: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0040b1b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040b1bb: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b1be: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0040b1c0: jmp 0x40b101 */ goto L_0040b101;
L_0040b1c5:; BB(0x0040b1c5);
    /* 0040b1c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0040b1c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b1c8: ret 4 */ FN_RET(0x0040b0ef); r_esp += 8; return;
}

void f_0040b1cb(void) /* FUN_0040b1cb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040b1cb);
    /* 0040b1cb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b1cc: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b1ce: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b1d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040b1d2: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0040b1d5: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b1d8: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040b1db: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040b1de: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b1e1: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x40b1e6u); f_0046c2a1();
    /* 0040b1e6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b1e9: jne 0x40b227 */ if (!fZ) goto L_0040b227;
L_0040b1eb:; BB(0x0040b1eb);
    /* 0040b1eb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b1ee: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40b1f3u); f_005dd4d2();
    /* 0040b1f3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b1f6: jge 0x40b227 */ if ((fS==fO)) goto L_0040b227;
L_0040b1f8:; BB(0x0040b1f8);
    /* 0040b1f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b1fa: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b1fd: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40b202u); f_0040ad48();
    /* 0040b202: mov ecx, eax */ r_ecx = r_eax;
    /* 0040b204: call 0x46c95d */ r_esp -= 4; W32(r_esp, 0x40b209u); f_0046c95d();
    /* 0040b209: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b20b: je 0x40b222 */ if (fZ) goto L_0040b222;
L_0040b20d:; BB(0x0040b20d);
    /* 0040b20d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b20f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b212: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40b217u); f_0040ad48();
    /* 0040b217: mov ecx, eax */ r_ecx = r_eax;
    /* 0040b219: call 0x46c95d */ r_esp -= 4; W32(r_esp, 0x40b21eu); f_0046c95d();
    /* 0040b21e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b220: jne 0x40b227 */ if (!fZ) goto L_0040b227;
L_0040b222:; BB(0x0040b222);
    /* 0040b222: jmp 0x40b359 */ goto L_0040b359;
L_0040b227:; BB(0x0040b227);
    /* 0040b227: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0040b22e: jmp 0x40b239 */ goto L_0040b239;
L_0040b230:; BB(0x0040b230);
    /* 0040b230: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040b233: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040b236: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
L_0040b239:; BB(0x0040b239);
    /* 0040b239: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b23c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040b23f: cmp ecx, dword ptr [eax + 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b242: jge 0x40b350 */ if ((fS==fO)) goto L_0040b350;
L_0040b248:; BB(0x0040b248);
    /* 0040b248: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b24b: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040b24e: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0040b251: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b254: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x40b259u); f_0040c107();
    /* 0040b259: mov esi, eax */ r_esi = r_eax;
    /* 0040b25b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b25e: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40b263u); f_0040c01f();
    /* 0040b263: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b265: je 0x40b29a */ if (fZ) goto L_0040b29a;
L_0040b267:; BB(0x0040b267);
    /* 0040b267: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b26a: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40b26fu); f_0040c01f();
    /* 0040b26f: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b272: jge 0x40b29a */ if ((fS==fO)) goto L_0040b29a;
L_0040b274:; BB(0x0040b274);
    /* 0040b274: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b277: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x40b27cu); f_0040c107();
    /* 0040b27c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b27d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b280: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40b285u); f_0040c01f();
    /* 0040b285: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b286: push 0x64cc2c */ { u32 v = 0x64cc2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040b28b: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0040b28e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b28f: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x40b295u); call_ind(t); }
    /* 0040b295: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040b298: jmp 0x40b2b5 */ goto L_0040b2b5;
L_0040b29a:; BB(0x0040b29a);
    /* 0040b29a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b29d: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x40b2a2u); f_0040c107();
    /* 0040b2a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b2a3: push 0x64cc34 */ { u32 v = 0x64cc34u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b2a8: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0040b2ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b2ac: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x40b2b2u); call_ind(t); }
    /* 0040b2b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040b2b5:; BB(0x0040b2b5);
    /* 0040b2b5: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0040b2b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b2b9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b2bc: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040b2bf: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b2c2: mov ecx, dword ptr [eax + edx*4 + 0x20c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20cu));
    /* 0040b2c9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b2cc: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040b2cf: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b2d2: mov eax, dword ptr [edx + eax*4 + 0x20c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20cu));
    /* 0040b2d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040b2db: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x40b2deu); call_ind(t); }
    /* 0040b2de: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040b2e3: cmp dword ptr [eax + 0xb4], 0 */ {  u32 a = R32((u32)(r_eax+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b2ea: je 0x40b34b */ if (fZ) goto L_0040b34b;
L_0040b2ec:; BB(0x0040b2ec);
    /* 0040b2ec: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b2ef: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40b2f4u); f_005dd4d2();
    /* 0040b2f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b2f6: je 0x40b34b */ if (fZ) goto L_0040b34b;
L_0040b2f8:; BB(0x0040b2f8);
    /* 0040b2f8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b2fb: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x40b300u); f_0046c2a1();
    /* 0040b300: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040b306: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0040b30a: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x40b30fu); f_004259a0();
    /* 0040b30f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b311: jne 0x40b326 */ if (!fZ) goto L_0040b326;
L_0040b313:; BB(0x0040b313);
    /* 0040b313: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040b319: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0040b31c: call 0x40a7ca */ r_esp -= 4; W32(r_esp, 0x40b321u); f_0040a7ca();
    /* 0040b321: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b324: jle 0x40b34b */ if ((fZ||fS!=fO)) goto L_0040b34b;
L_0040b326:; BB(0x0040b326);
    /* 0040b326: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b329: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040b32c: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b32f: mov ecx, dword ptr [edx + ecx*4 + 0x20c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20cu));
    /* 0040b336: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b339: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0040b33c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b33f: mov edx, dword ptr [eax + edx*4 + 0x20c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20cu));
    /* 0040b346: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040b348: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x40b34bu); call_ind(t); }
L_0040b34b:; BB(0x0040b34b);
    /* 0040b34b: jmp 0x40b230 */ goto L_0040b230;
L_0040b350:; BB(0x0040b350);
    /* 0040b350: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b353: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040b356: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
L_0040b359:; BB(0x0040b359);
    /* 0040b359: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040b35a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040b35c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b35d: ret  */ FN_RET(0x0040b1cb); r_esp += 4; return;
}

void f_0040b35e(void) /* FUN_0040b35e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040b35e);
    /* 0040b35e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b35f: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b361: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b364: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040b365: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0040b368: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b36b: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x40b370u); f_0040c107();
    /* 0040b370: mov esi, eax */ r_esi = r_eax;
    /* 0040b372: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b375: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40b37au); f_0040c01f();
    /* 0040b37a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b37c: je 0x40b3b1 */ if (fZ) goto L_0040b3b1;
L_0040b37e:; BB(0x0040b37e);
    /* 0040b37e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b381: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40b386u); f_0040c01f();
    /* 0040b386: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b389: jge 0x40b3b1 */ if ((fS==fO)) goto L_0040b3b1;
L_0040b38b:; BB(0x0040b38b);
    /* 0040b38b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b38e: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x40b393u); f_0040c107();
    /* 0040b393: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b394: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b397: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40b39cu); f_0040c01f();
    /* 0040b39c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b39d: push 0x64cc38 */ { u32 v = 0x64cc38u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b3a2: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0040b3a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b3a6: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x40b3acu); call_ind(t); }
    /* 0040b3ac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040b3af: jmp 0x40b3cc */ goto L_0040b3cc;
L_0040b3b1:; BB(0x0040b3b1);
    /* 0040b3b1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b3b4: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x40b3b9u); f_0040c107();
    /* 0040b3b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b3ba: push 0x64cc40 */ { u32 v = 0x64cc40u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b3bf: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 0040b3c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b3c3: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x40b3c9u); call_ind(t); }
    /* 0040b3c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040b3cc:; BB(0x0040b3cc);
    /* 0040b3cc: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 0040b3cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b3d0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b3d3: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040b3d6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b3d9: mov ecx, dword ptr [edx + ecx*4 + 0x20c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20cu));
    /* 0040b3e0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b3e3: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0040b3e6: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b3e9: mov edx, dword ptr [eax + edx*4 + 0x20c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20cu));
    /* 0040b3f0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040b3f2: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x40b3f5u); call_ind(t); }
    /* 0040b3f5: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040b3fb: cmp dword ptr [ecx + 0xb4], 0 */ {  u32 a = R32((u32)(r_ecx+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b402: je 0x40b435 */ if (fZ) goto L_0040b435;
L_0040b404:; BB(0x0040b404);
    /* 0040b404: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b407: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40b40cu); f_005dd4d2();
    /* 0040b40c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b40e: je 0x40b435 */ if (fZ) goto L_0040b435;
L_0040b410:; BB(0x0040b410);
    /* 0040b410: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b413: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040b416: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b419: mov ecx, dword ptr [ecx + eax*4 + 0x20c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20cu));
    /* 0040b420: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b423: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040b426: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040b429: mov eax, dword ptr [edx + eax*4 + 0x20c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20cu));
    /* 0040b430: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040b432: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x40b435u); call_ind(t); }
L_0040b435:; BB(0x0040b435);
    /* 0040b435: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040b436: mov esp, ebp */ r_esp = r_ebp;
    /* 0040b438: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b439: ret  */ FN_RET(0x0040b35e); r_esp += 4; return;
}

void f_0040b43a(void) /* FUN_0040b43a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040b43a);
    /* 0040b43a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b43b: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b43d: sub esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b443: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040b444: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 0040b44a: mov dword ptr [ebp - 0xa0], 0x1d5 */ W32((u32)(r_ebp+0xffffff60u), 0x1d5u);
    /* 0040b454: mov dword ptr [ebp - 0x9c], 0xae */ W32((u32)(r_ebp+0xffffff64u), 0xaeu);
    /* 0040b45e: mov dword ptr [ebp - 0x98], 0x224 */ W32((u32)(r_ebp+0xffffff68u), 0x224u);
    /* 0040b468: mov dword ptr [ebp - 0x94], 0xae */ W32((u32)(r_ebp+0xffffff6cu), 0xaeu);
    /* 0040b472: mov dword ptr [ebp - 0x90], 0x203 */ W32((u32)(r_ebp+0xffffff70u), 0x203u);
    /* 0040b47c: mov dword ptr [ebp - 0x8c], 0x59 */ W32((u32)(r_ebp+0xffffff74u), 0x59u);
    /* 0040b486: mov dword ptr [ebp - 0x88], 0x1d5 */ W32((u32)(r_ebp+0xffffff78u), 0x1d5u);
    /* 0040b490: mov dword ptr [ebp - 0x84], 0x59 */ W32((u32)(r_ebp+0xffffff7cu), 0x59u);
    /* 0040b49a: mov dword ptr [ebp - 0x80], 0x224 */ W32((u32)(r_ebp+0xffffff80u), 0x224u);
    /* 0040b4a1: mov dword ptr [ebp - 0x7c], 0x59 */ W32((u32)(r_ebp+0xffffff84u), 0x59u);
    /* 0040b4a8: mov dword ptr [ebp - 0x78], 0x143 */ W32((u32)(r_ebp+0xffffff88u), 0x143u);
    /* 0040b4af: mov dword ptr [ebp - 0x74], 0xec */ W32((u32)(r_ebp+0xffffff8cu), 0xecu);
    /* 0040b4b6: mov dword ptr [ebp - 0x70], 0x192 */ W32((u32)(r_ebp+0xffffff90u), 0x192u);
    /* 0040b4bd: mov dword ptr [ebp - 0x6c], 0xec */ W32((u32)(r_ebp+0xffffff94u), 0xecu);
    /* 0040b4c4: mov dword ptr [ebp - 0x68], 0x176 */ W32((u32)(r_ebp+0xffffff98u), 0x176u);
    /* 0040b4cb: mov dword ptr [ebp - 0x64], 0x93 */ W32((u32)(r_ebp+0xffffff9cu), 0x93u);
    /* 0040b4d2: mov dword ptr [ebp - 0x60], 0x143 */ W32((u32)(r_ebp+0xffffffa0u), 0x143u);
    /* 0040b4d9: mov dword ptr [ebp - 0x5c], 0x93 */ W32((u32)(r_ebp+0xffffffa4u), 0x93u);
    /* 0040b4e0: mov dword ptr [ebp - 0x58], 0x192 */ W32((u32)(r_ebp+0xffffffa8u), 0x192u);
    /* 0040b4e7: mov dword ptr [ebp - 0x54], 0x93 */ W32((u32)(r_ebp+0xffffffacu), 0x93u);
    /* 0040b4ee: mov dword ptr [ebp - 0x50], 0x91 */ W32((u32)(r_ebp+0xffffffb0u), 0x91u);
    /* 0040b4f5: mov dword ptr [ebp - 0x4c], 0xec */ W32((u32)(r_ebp+0xffffffb4u), 0xecu);
    /* 0040b4fc: mov dword ptr [ebp - 0x48], 0xe0 */ W32((u32)(r_ebp+0xffffffb8u), 0xe0u);
    /* 0040b503: mov dword ptr [ebp - 0x44], 0xec */ W32((u32)(r_ebp+0xffffffbcu), 0xecu);
    /* 0040b50a: mov dword ptr [ebp - 0x40], 0xca */ W32((u32)(r_ebp+0xffffffc0u), 0xcau);
    /* 0040b511: mov dword ptr [ebp - 0x3c], 0x93 */ W32((u32)(r_ebp+0xffffffc4u), 0x93u);
    /* 0040b518: mov dword ptr [ebp - 0x38], 0x9b */ W32((u32)(r_ebp+0xffffffc8u), 0x9bu);
    /* 0040b51f: mov dword ptr [ebp - 0x34], 0x93 */ W32((u32)(r_ebp+0xffffffccu), 0x93u);
    /* 0040b526: mov dword ptr [ebp - 0x30], 0xea */ W32((u32)(r_ebp+0xffffffd0u), 0xeau);
    /* 0040b52d: mov dword ptr [ebp - 0x2c], 0x93 */ W32((u32)(r_ebp+0xffffffd4u), 0x93u);
    /* 0040b534: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0040b53b: mov dword ptr [ebp - 0x24], 0xae */ W32((u32)(r_ebp+0xffffffdcu), 0xaeu);
    /* 0040b542: mov dword ptr [ebp - 0x20], 0x50 */ W32((u32)(r_ebp+0xffffffe0u), 0x50u);
    /* 0040b549: mov dword ptr [ebp - 0x1c], 0xae */ W32((u32)(r_ebp+0xffffffe4u), 0xaeu);
    /* 0040b550: mov dword ptr [ebp - 0x18], 0x39 */ W32((u32)(r_ebp+0xffffffe8u), 0x39u);
    /* 0040b557: mov dword ptr [ebp - 0x14], 0x59 */ W32((u32)(r_ebp+0xffffffecu), 0x59u);
    /* 0040b55e: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0040b565: mov dword ptr [ebp - 0xc], 0x59 */ W32((u32)(r_ebp+0xfffffff4u), 0x59u);
    /* 0040b56c: mov dword ptr [ebp - 8], 0x50 */ W32((u32)(r_ebp+0xfffffff8u), 0x50u);
    /* 0040b573: mov dword ptr [ebp - 4], 0x59 */ W32((u32)(r_ebp+0xfffffffcu), 0x59u);
    /* 0040b57a: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b580: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040b583: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 0040b589: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b58f: cmp dword ptr [edx + 0x4c], 4 */ {  u32 a = R32((u32)(r_edx+0x4cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b593: jne 0x40b5a1 */ if (!fZ) goto L_0040b5a1;
L_0040b595:; BB(0x0040b595);
    /* 0040b595: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b59b: cmp dword ptr [eax + 0x50], 2 */ {  u32 a = R32((u32)(r_eax+0x50u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b59f: je 0x40b5ad */ if (fZ) goto L_0040b5ad;
L_0040b5a1:; BB(0x0040b5a1);
    /* 0040b5a1: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b5a7: cmp dword ptr [ecx + 0x50], 3 */ {  u32 a = R32((u32)(r_ecx+0x50u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b5ab: jne 0x40b5bc */ if (!fZ) goto L_0040b5bc;
L_0040b5ad:; BB(0x0040b5ad);
    /* 0040b5ad: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0040b5b3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040b5b6: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
L_0040b5bc:; BB(0x0040b5bc);
    /* 0040b5bc: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b5c2: cmp dword ptr [eax + 0x50], 3 */ {  u32 a = R32((u32)(r_eax+0x50u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b5c6: jne 0x40b75a */ if (!fZ) goto L_0040b75a;
L_0040b5cc:; BB(0x0040b5cc);
    /* 0040b5cc: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b5d2: cmp dword ptr [ecx + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b5d6: jne 0x40b75a */ if (!fZ) goto L_0040b75a;
L_0040b5dc:; BB(0x0040b5dc);
    /* 0040b5dc: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b5e2: cmp dword ptr [edx + 0x5c], 1 */ {  u32 a = R32((u32)(r_edx+0x5cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b5e6: jle 0x40b75a */ if ((fZ||fS!=fO)) goto L_0040b75a;
L_0040b5ec:; BB(0x0040b5ec);
    /* 0040b5ec: mov dword ptr [ebp - 0xb0], 2 */ W32((u32)(r_ebp+0xffffff50u), 0x2u);
    /* 0040b5f6: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b5fc: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x40b601u); f_0046c2a1();
    /* 0040b601: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b604: mov eax, dword ptr [ebp + eax - 0x88] */ r_eax = R32((u32)(r_ebp+r_eax+0xffffff78u));
    /* 0040b60b: sub eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040b60e: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0040b614: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b61a: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x40b61fu); f_0046c2a1();
    /* 0040b61f: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b622: mov ecx, dword ptr [ebp + eax - 0x84] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff7cu));
    /* 0040b629: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040b62c: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 0040b632: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 0040b63c: jmp 0x40b64d */ goto L_0040b64d;
L_0040b63e:; BB(0x0040b63e);
    /* 0040b63e: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0040b644: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040b647: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
L_0040b64d:; BB(0x0040b64d);
    /* 0040b64d: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b653: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0040b659: cmp ecx, dword ptr [eax + 0x5c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b65c: jge 0x40b75a */ if ((fS==fO)) goto L_0040b75a;
L_0040b662:; BB(0x0040b662);
    /* 0040b662: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b668: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x40b66du); f_0046c2a1();
    /* 0040b66d: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b670: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0040b676: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b679: mov eax, dword ptr [ebp + eax - 0x88] */ r_eax = R32((u32)(r_ebp+r_eax+0xffffff78u));
    /* 0040b680: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b682: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b688: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0040b68b: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b691: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x40b696u); f_0046c2a1();
    /* 0040b696: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b699: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0040b69f: imul edx, edx, 6 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x6u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b6a2: mov eax, dword ptr [ebp + eax - 0x84] */ r_eax = R32((u32)(r_ebp+r_eax+0xffffff7cu));
    /* 0040b6a9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040b6ab: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b6b1: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 0040b6b4: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0040b6ba: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b6c0: mov ecx, dword ptr [eax + edx*4 + 0x13c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x13cu));
    /* 0040b6c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b6c8: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b6ce: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40b6d3u); f_0040ad48();
    /* 0040b6d3: mov ecx, eax */ r_ecx = r_eax;
    /* 0040b6d5: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x40b6dau); f_005ea279();
    /* 0040b6da: cmp eax, 0x1390 */ {  u32 a = r_eax; u32 b = 0x1390u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b6df: jne 0x40b70b */ if (!fZ) goto L_0040b70b;
L_0040b6e1:; BB(0x0040b6e1);
    /* 0040b6e1: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b6e7: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0040b6ea: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040b6ed: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b6f3: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0040b6f6: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b6fc: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0040b6ff: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b702: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b708: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
L_0040b70b:; BB(0x0040b70b);
    /* 0040b70b: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b711: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0040b714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b715: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b71b: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0040b71e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b71f: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0040b725: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b72b: mov edx, dword ptr [ecx + eax*4 + 0x13c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x13cu));
    /* 0040b732: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b733: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b739: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40b73eu); f_0040ad48();
    /* 0040b73e: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0040b744: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 0040b74a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040b74c: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0040b752: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x40b755u); call_ind(t); }
    /* 0040b755: jmp 0x40b63e */ goto L_0040b63e;
L_0040b75a:; BB(0x0040b75a);
    /* 0040b75a: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b760: cmp dword ptr [eax + 0x4c], 1 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b764: jne 0x40b875 */ if (!fZ) goto L_0040b875;
L_0040b76a:; BB(0x0040b76a);
    /* 0040b76a: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
    /* 0040b774: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b77a: call 0x46c2ef */ r_esp -= 4; W32(r_esp, 0x40b77fu); f_0046c2ef();
    /* 0040b77f: sub eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040b782: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0040b788: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b78e: call 0x46c316 */ r_esp -= 4; W32(r_esp, 0x40b793u); f_0046c316();
    /* 0040b793: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b796: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0040b79c: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b7a2: call 0x46c2ef */ r_esp -= 4; W32(r_esp, 0x40b7a7u); f_0046c2ef();
    /* 0040b7a7: mov esi, eax */ r_esi = r_eax;
    /* 0040b7a9: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b7af: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40b7b4u); f_0040bc0d();
    /* 0040b7b4: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b7b7: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040b7b9: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b7bf: mov dword ptr [ecx + 0x14], esi */ W32((u32)(r_ecx+0x14u), r_esi);
    /* 0040b7c2: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b7c8: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x40b7cdu); f_0046c2a1();
    /* 0040b7cd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b7d0: jne 0x40b84a */ if (!fZ) goto L_0040b84a;
L_0040b7d2:; BB(0x0040b7d2);
    /* 0040b7d2: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b7d8: call 0x46c316 */ r_esp -= 4; W32(r_esp, 0x40b7ddu); f_0046c316();
    /* 0040b7dd: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b7e3: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0040b7e6: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b7ec: call 0x46c2ef */ r_esp -= 4; W32(r_esp, 0x40b7f1u); f_0046c2ef();
    /* 0040b7f1: mov esi, eax */ r_esi = r_eax;
    /* 0040b7f3: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b7f9: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40b7feu); f_0040bc0d();
    /* 0040b7fe: imul eax, eax, 0xf */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b801: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040b803: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b809: mov dword ptr [eax + 0x14], esi */ W32((u32)(r_eax+0x14u), r_esi);
    /* 0040b80c: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0040b812: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b813: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 0040b819: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b81a: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0040b820: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b826: mov ecx, dword ptr [ecx + eax*4 + 0x20c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20cu));
    /* 0040b82d: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0040b833: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b839: mov edx, dword ptr [eax + edx*4 + 0x20c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20cu));
    /* 0040b840: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040b842: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x40b845u); call_ind(t); }
    /* 0040b845: jmp 0x40b9dc */ goto L_0040b9dc;
L_0040b84a:; BB(0x0040b84a);
    /* 0040b84a: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b850: call 0x46c316 */ r_esp -= 4; W32(r_esp, 0x40b855u); f_0046c316();
    /* 0040b855: mov esi, eax */ r_esi = r_eax;
    /* 0040b857: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b85d: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40b862u); f_0040bc0d();
    /* 0040b862: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b865: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0040b867: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b86d: mov dword ptr [ecx + 0x18], esi */ W32((u32)(r_ecx+0x18u), r_esi);
    /* 0040b870: jmp 0x40b942 */ goto L_0040b942;
L_0040b875:; BB(0x0040b875);
    /* 0040b875: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b87b: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040b87e: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0040b884: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b88a: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x40b88fu); f_0046c2a1();
    /* 0040b88f: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b892: lea ecx, [ebp + eax - 0xa0] */ r_ecx = (u32)(r_ebp+r_eax+0xffffff60u);
    /* 0040b899: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0040b89f: mov eax, dword ptr [ecx + edx*8] */ r_eax = R32((u32)(r_ecx+r_edx*8));
    /* 0040b8a2: sub eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040b8a5: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0040b8ab: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b8b1: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x40b8b6u); f_0046c2a1();
    /* 0040b8b6: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b8b9: lea ecx, [ebp + eax - 0xa0] */ r_ecx = (u32)(r_ebp+r_eax+0xffffff60u);
    /* 0040b8c0: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0040b8c6: mov eax, dword ptr [ecx + edx*8 + 4] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x4u));
    /* 0040b8ca: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b8cd: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0040b8d3: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b8d9: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x40b8deu); f_0046c2a1();
    /* 0040b8de: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b8e1: lea esi, [ebp + eax - 0xa0] */ r_esi = (u32)(r_ebp+r_eax+0xffffff60u);
    /* 0040b8e8: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b8ee: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40b8f3u); f_0040bc0d();
    /* 0040b8f3: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b8f6: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0040b8fc: mov edx, dword ptr [esi + ecx*8] */ r_edx = R32((u32)(r_esi+r_ecx*8));
    /* 0040b8ff: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040b901: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b907: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0040b90a: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b910: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x40b915u); f_0046c2a1();
    /* 0040b915: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b918: lea esi, [ebp + eax - 0xa0] */ r_esi = (u32)(r_ebp+r_eax+0xffffff60u);
    /* 0040b91f: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b925: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40b92au); f_0040bc0d();
    /* 0040b92a: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b92d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0040b933: mov edx, dword ptr [esi + ecx*8 + 4] */ r_edx = R32((u32)(r_esi+r_ecx*8+0x4u));
    /* 0040b937: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040b939: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b93f: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
L_0040b942:; BB(0x0040b942);
    /* 0040b942: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0040b948: sub ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040b94b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b94c: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 0040b952: add edx, 0x1a */ {  u32 a = r_edx; u32 b = 0x1au; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040b955: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b956: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0040b95c: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b962: mov ecx, dword ptr [ecx + eax*4 + 0x20c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20cu));
    /* 0040b969: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0040b96f: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b975: mov edx, dword ptr [eax + edx*4 + 0x20c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20cu));
    /* 0040b97c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040b97e: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x40b981u); call_ind(t); }
    /* 0040b981: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040b987: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40b98cu); f_0040f81e();
    /* 0040b98c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b98e: je 0x40b9dc */ if (fZ) goto L_0040b9dc;
L_0040b990:; BB(0x0040b990);
    /* 0040b990: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040b996: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40b99bu); f_0040f81e();
    /* 0040b99b: mov ecx, dword ptr [eax + 0x144] */ r_ecx = R32((u32)(r_eax+0x144u));
    /* 0040b9a1: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 0040b9a7: cmp dword ptr [ebp - 0xc0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b9ae: je 0x40b9b2 */ if (fZ) goto L_0040b9b2;
L_0040b9b0:; BB(0x0040b9b0);
    /* 0040b9b0: jmp 0x40b9dc */ goto L_0040b9dc;
L_0040b9b2:; BB(0x0040b9b2);
    /* 0040b9b2: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b9b8: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0040b9bb: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040b9be: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b9c4: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0040b9c7: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b9cd: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0040b9d0: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b9d3: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040b9d9: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
L_0040b9dc:; BB(0x0040b9dc);
    /* 0040b9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040b9dd: mov esp, ebp */ r_esp = r_ebp;
    /* 0040b9df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b9e0: ret  */ FN_RET(0x0040b43a); r_esp += 4; return;
}

void f_0040b9e1(void) /* FUN_0040b9e1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040b9e1);
    /* 0040b9e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b9e2: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b9e4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b9e7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040b9ea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040b9ed: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040b9f0: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b9f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040b9f6: mov eax, dword ptr [edx + ecx + 0x78] */ r_eax = R32((u32)(r_edx+r_ecx+0x78u));
    /* 0040b9fa: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040b9fd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba00: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040ba03: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ba06: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba09: mov ecx, dword ptr [eax + edx + 0x74] */ r_ecx = R32((u32)(r_eax+r_edx+0x74u));
    /* 0040ba0d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040ba10: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba13: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0040ba16: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040ba19: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba1c: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 0040ba1f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba22: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040ba25: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ba28: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba2b: mov dword ptr [ecx + eax + 0x78], 0xffffffff */ W32((u32)(r_ecx+r_eax+0x78u), 0xffffffffu);
    /* 0040ba33: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba36: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040ba39: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0040ba3c: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ba40: je 0x40ba50 */ if (fZ) goto L_0040ba50;
L_0040ba42:; BB(0x0040ba42);
    /* 0040ba42: cmp dword ptr [ebp - 0x18], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ba46: je 0x40ba5c */ if (fZ) goto L_0040ba5c;
L_0040ba48:; BB(0x0040ba48);
    /* 0040ba48: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ba4c: je 0x40ba68 */ if (fZ) goto L_0040ba68;
L_0040ba4e:; BB(0x0040ba4e);
    /* 0040ba4e: jmp 0x40ba72 */ goto L_0040ba72;
L_0040ba50:; BB(0x0040ba50);
    /* 0040ba50: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba53: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 0040ba5a: jmp 0x40ba72 */ goto L_0040ba72;
L_0040ba5c:; BB(0x0040ba5c);
    /* 0040ba5c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba5f: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 0040ba66: jmp 0x40ba72 */ goto L_0040ba72;
L_0040ba68:; BB(0x0040ba68);
    /* 0040ba68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba6b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
L_0040ba72:; BB(0x0040ba72);
    /* 0040ba72: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba75: cmp dword ptr [ecx + 0x4c], 2 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ba79: jne 0x40ba84 */ if (!fZ) goto L_0040ba84;
L_0040ba7b:; BB(0x0040ba7b);
    /* 0040ba7b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba7e: cmp dword ptr [edx + 0x50], 0 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ba82: je 0x40ba96 */ if (fZ) goto L_0040ba96;
L_0040ba84:; BB(0x0040ba84);
    /* 0040ba84: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba87: cmp dword ptr [eax + 0x4c], 4 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ba8b: jne 0x40bac6 */ if (!fZ) goto L_0040bac6;
L_0040ba8d:; BB(0x0040ba8d);
    /* 0040ba8d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba90: cmp dword ptr [ecx + 0x50], 2 */ {  u32 a = R32((u32)(r_ecx+0x50u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ba94: jne 0x40bac6 */ if (!fZ) goto L_0040bac6;
L_0040ba96:; BB(0x0040ba96);
    /* 0040ba96: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ba99: call 0x40b43a */ r_esp -= 4; W32(r_esp, 0x40ba9eu); f_0040b43a();
    /* 0040ba9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040baa1: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0040baa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040baa5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040baa8: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0040baab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040baac: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040baaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040bab0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bab3: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40bab8u); f_0040ad48();
    /* 0040bab8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040babb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040babe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040bac0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040bac3: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x40bac6u); call_ind(t); }
L_0040bac6:; BB(0x0040bac6);
    /* 0040bac6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bac9: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040bacc: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040bacf: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bad3: je 0x40bae3 */ if (fZ) goto L_0040bae3;
L_0040bad5:; BB(0x0040bad5);
    /* 0040bad5: cmp dword ptr [ebp - 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bad9: je 0x40baef */ if (fZ) goto L_0040baef;
L_0040badb:; BB(0x0040badb);
    /* 0040badb: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040badf: je 0x40bafb */ if (fZ) goto L_0040bafb;
L_0040bae1:; BB(0x0040bae1);
    /* 0040bae1: jmp 0x40bb05 */ goto L_0040bb05;
L_0040bae3:; BB(0x0040bae3);
    /* 0040bae3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bae6: mov dword ptr [edx + 0x54], 1 */ W32((u32)(r_edx+0x54u), 0x1u);
    /* 0040baed: jmp 0x40bb05 */ goto L_0040bb05;
L_0040baef:; BB(0x0040baef);
    /* 0040baef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040baf2: mov dword ptr [eax + 0x58], 1 */ W32((u32)(r_eax+0x58u), 0x1u);
    /* 0040baf9: jmp 0x40bb05 */ goto L_0040bb05;
L_0040bafb:; BB(0x0040bafb);
    /* 0040bafb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bafe: mov dword ptr [ecx + 0x5c], 1 */ W32((u32)(r_ecx+0x5cu), 0x1u);
L_0040bb05:; BB(0x0040bb05);
    /* 0040bb05: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bb08: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0040bb0b: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040bb0e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bb11: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 0040bb14: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bb17: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040bb1a: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040bb1d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bb20: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040bb23: mov dword ptr [ecx + eax + 0x74], edx */ W32((u32)(r_ecx+r_eax+0x74u), r_edx);
    /* 0040bb27: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bb2a: call 0x40b43a */ r_esp -= 4; W32(r_esp, 0x40bb2fu); f_0040b43a();
    /* 0040bb2f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bb32: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0040bb35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bb36: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bb39: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0040bb3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040bb3d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040bb40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bb41: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bb44: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40bb49u); f_0040ad48();
    /* 0040bb49: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040bb4c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040bb4f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040bb51: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040bb54: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x40bb57u); call_ind(t); }
    /* 0040bb57: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bb5a: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040bb5d: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0040bb60: cmp dword ptr [ebp - 0x28], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bb64: je 0x40bb74 */ if (fZ) goto L_0040bb74;
L_0040bb66:; BB(0x0040bb66);
    /* 0040bb66: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bb6a: je 0x40bb80 */ if (fZ) goto L_0040bb80;
L_0040bb6c:; BB(0x0040bb6c);
    /* 0040bb6c: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bb70: je 0x40bb8c */ if (fZ) goto L_0040bb8c;
L_0040bb72:; BB(0x0040bb72);
    /* 0040bb72: jmp 0x40bb96 */ goto L_0040bb96;
L_0040bb74:; BB(0x0040bb74);
    /* 0040bb74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bb77: mov dword ptr [eax + 0x58], 1 */ W32((u32)(r_eax+0x58u), 0x1u);
    /* 0040bb7e: jmp 0x40bb96 */ goto L_0040bb96;
L_0040bb80:; BB(0x0040bb80);
    /* 0040bb80: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bb83: mov dword ptr [ecx + 0x5c], 1 */ W32((u32)(r_ecx+0x5cu), 0x1u);
    /* 0040bb8a: jmp 0x40bb96 */ goto L_0040bb96;
L_0040bb8c:; BB(0x0040bb8c);
    /* 0040bb8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bb8f: mov dword ptr [edx + 0x60], 1 */ W32((u32)(r_edx+0x60u), 0x1u);
L_0040bb96:; BB(0x0040bb96);
    /* 0040bb96: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bb99: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040bb9c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040bb9f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040bba6: jmp 0x40bbb1 */ goto L_0040bbb1;
L_0040bba8:; BB(0x0040bba8);
    /* 0040bba8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bbab: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040bbae: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0040bbb1:; BB(0x0040bbb1);
    /* 0040bbb1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bbb4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bbb7: cmp ecx, dword ptr [eax + 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040bbba: jge 0x40bbd1 */ if ((fS==fO)) goto L_0040bbd1;
L_0040bbbc:; BB(0x0040bbbc);
    /* 0040bbbc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bbbf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bbc2: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0040bbc5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040bbc7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bbca: call 0x40bcd8 */ r_esp -= 4; W32(r_esp, 0x40bbcfu); f_0040bcd8();
    /* 0040bbcf: jmp 0x40bba8 */ goto L_0040bba8;
L_0040bbd1:; BB(0x0040bbd1);
    /* 0040bbd1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bbd4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bbd7: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 0040bbda: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bbdd: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040bbe0: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040bbe3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bbe6: mov eax, dword ptr [edx + ecx + 0x74] */ r_eax = R32((u32)(r_edx+r_ecx+0x74u));
    /* 0040bbea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040bbeb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bbee: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40bbf3u); f_0040ad48();
    /* 0040bbf3: mov ecx, eax */ r_ecx = r_eax;
    /* 0040bbf5: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x40bbfau); f_0040a4d9();
    /* 0040bbfa: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bbfd: jne 0x40bc09 */ if (!fZ) goto L_0040bc09;
L_0040bbff:; BB(0x0040bbff);
    /* 0040bbff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bc02: mov dword ptr [ecx + 0x48], 1 */ W32((u32)(r_ecx+0x48u), 0x1u);
L_0040bc09:; BB(0x0040bc09);
    /* 0040bc09: mov esp, ebp */ r_esp = r_ebp;
    /* 0040bc0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040bc0c: ret  */ FN_RET(0x0040b9e1); r_esp += 4; return;
}

void f_0040bc0d(void) /* FUN_0040bc0d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040bc0d);
    /* 0040bc0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040bc0e: mov ebp, esp */ r_ebp = r_esp;
    /* 0040bc10: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040bc13: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040bc16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bc19: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040bc1c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040bc1f: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040bc23: ja 0x40bc4f */ if ((!fC&&!fZ)) goto L_0040bc4f;
L_0040bc25:; BB(0x0040bc25);
    /* 0040bc25: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bc28: jmp dword ptr [edx*4 + 0x40bc55] */ { u32 t = R32((u32)(r_edx*4+0x40bc55u)); switch (t) { case 0x40bc2fu: goto L_0040bc2f; case 0x40bc37u: goto L_0040bc37; case 0x40bc3fu: goto L_0040bc3f; case 0x40bc47u: goto L_0040bc47; default: UNSUP(0x0040bc28, "jump table entry is not a known target"); } }
L_0040bc2f:; BB(0x0040bc2f);
    /* 0040bc2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bc32: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 0040bc35: jmp 0x40bc51 */ goto L_0040bc51;
L_0040bc37:; BB(0x0040bc37);
    /* 0040bc37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bc3a: mov eax, dword ptr [ecx + 0x58] */ r_eax = R32((u32)(r_ecx+0x58u));
    /* 0040bc3d: jmp 0x40bc51 */ goto L_0040bc51;
L_0040bc3f:; BB(0x0040bc3f);
    /* 0040bc3f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bc42: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0040bc45: jmp 0x40bc51 */ goto L_0040bc51;
L_0040bc47:; BB(0x0040bc47);
    /* 0040bc47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bc4a: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 0040bc4d: jmp 0x40bc51 */ goto L_0040bc51;
L_0040bc4f:; BB(0x0040bc4f);
    /* 0040bc4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040bc51:; BB(0x0040bc51);
    /* 0040bc51: mov esp, ebp */ r_esp = r_ebp;
    /* 0040bc53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040bc54: ret  */ FN_RET(0x0040bc0d); r_esp += 4; return;
}

void f_0040bc65(void) /* FUN_0040bc65 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040bc65);
    /* 0040bc65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040bc66: mov ebp, esp */ r_ebp = r_esp;
    /* 0040bc68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bc69: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040bc6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bc6f: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040bc72: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bc75: mov ax, word ptr [edx + ecx*2 + 0x204] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x204u))) & 0xffffu);
    /* 0040bc7d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040bc7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040bc80: ret  */ FN_RET(0x0040bc65); r_esp += 4; return;
}

void f_0040bc81(void) /* FUN_0040bc81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040bc81);
    /* 0040bc81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040bc82: mov ebp, esp */ r_ebp = r_esp;
    /* 0040bc84: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040bc87: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040bc8a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040bc8d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040bc90: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040bc94: ja 0x40bcc0 */ if ((!fC&&!fZ)) goto L_0040bcc0;
L_0040bc96:; BB(0x0040bc96);
    /* 0040bc96: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bc99: jmp dword ptr [ecx*4 + 0x40bcc8] */ { u32 t = R32((u32)(r_ecx*4+0x40bcc8u)); switch (t) { case 0x40bca0u: goto L_0040bca0; case 0x40bca8u: goto L_0040bca8; case 0x40bcb0u: goto L_0040bcb0; case 0x40bcb8u: goto L_0040bcb8; default: UNSUP(0x0040bc99, "jump table entry is not a known target"); } }
L_0040bca0:; BB(0x0040bca0);
    /* 0040bca0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bca3: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0040bca6: jmp 0x40bcc2 */ goto L_0040bcc2;
L_0040bca8:; BB(0x0040bca8);
    /* 0040bca8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bcab: mov eax, dword ptr [eax + 0x68] */ r_eax = R32((u32)(r_eax+0x68u));
    /* 0040bcae: jmp 0x40bcc2 */ goto L_0040bcc2;
L_0040bcb0:; BB(0x0040bcb0);
    /* 0040bcb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bcb3: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 0040bcb6: jmp 0x40bcc2 */ goto L_0040bcc2;
L_0040bcb8:; BB(0x0040bcb8);
    /* 0040bcb8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bcbb: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0040bcbe: jmp 0x40bcc2 */ goto L_0040bcc2;
L_0040bcc0:; BB(0x0040bcc0);
    /* 0040bcc0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040bcc2:; BB(0x0040bcc2);
    /* 0040bcc2: mov esp, ebp */ r_esp = r_ebp;
    /* 0040bcc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040bcc5: ret 4 */ FN_RET(0x0040bc81); r_esp += 8; return;
}

void f_0040bcd8(void) /* FUN_0040bcd8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040bcd8);
    /* 0040bcd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040bcd9: mov ebp, esp */ r_ebp = r_esp;
    /* 0040bcdb: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040bcde: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040bcdf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040bce0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040bce3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bce6: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040bce9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bcec: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0040bcf0: mov word ptr [edx + ecx*2 + 0x204], ax */ W16((u32)(r_edx+r_ecx*2+0x204u), (u16)r_eax);
    /* 0040bcf8: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bcfc: jne 0x40bd1c */ if (!fZ) goto L_0040bd1c;
L_0040bcfe:; BB(0x0040bcfe);
    /* 0040bcfe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bd01: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040bd04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bd07: mov ecx, dword ptr [eax + edx*4 + 0x21c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x21cu));
    /* 0040bd0e: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x40bd13u); f_005d96a9();
    /* 0040bd13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bd15: je 0x40bd1c */ if (fZ) goto L_0040bd1c;
L_0040bd17:; BB(0x0040bd17);
    /* 0040bd17: jmp 0x40bf2f */ goto L_0040bf2f;
L_0040bd1c:; BB(0x0040bd1c);
    /* 0040bd1c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bd1f: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40bd24u); f_0040bc0d();
    /* 0040bd24: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040bd27: jle 0x40be2f */ if ((fZ||fS!=fO)) goto L_0040be2f;
L_0040bd2d:; BB(0x0040bd2d);
    /* 0040bd2d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bd30: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040bd33: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040bd36: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bd39: mov ecx, dword ptr [eax + edx + 0x74] */ r_ecx = R32((u32)(r_eax+r_edx+0x74u));
    /* 0040bd3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bd3e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bd41: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40bd46u); f_0040ad48();
    /* 0040bd46: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040bd49: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bd4c: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040bd4f: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040bd52: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bd55: lea esi, [ecx + eax + 0x74] */ r_esi = (u32)(r_ecx+r_eax+0x74u);
    /* 0040bd59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bd5c: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40bd61u); f_0040bc0d();
    /* 0040bd61: mov edx, dword ptr [esi + eax*4 - 4] */ r_edx = R32((u32)(r_esi+r_eax*4+0xfffffffcu));
    /* 0040bd65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bd66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bd69: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40bd6eu); f_0040ad48();
    /* 0040bd6e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040bd71: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bd74: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040bd76: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bd79: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x40bd7cu); call_ind(t); }
    /* 0040bd7c: mov esi, eax */ r_esi = r_eax;
    /* 0040bd7e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bd81: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040bd83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bd86: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x40bd89u); call_ind(t); }
    /* 0040bd89: mov edi, eax */ r_edi = r_eax;
    /* 0040bd8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bd8e: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x40bd93u); f_005d98c3();
    /* 0040bd93: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040bd95: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bd98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040bd9a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bd9d: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x40bda0u); call_ind(t); }
    /* 0040bda0: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0040bda2: mov eax, edi */ r_eax = r_edi;
    /* 0040bda4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040bda5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040bda7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040bda9: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040bdab: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 0040bdae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bdb1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040bdb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bdb6: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x40bdb9u); call_ind(t); }
    /* 0040bdb9: mov esi, eax */ r_esi = r_eax;
    /* 0040bdbb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bdbe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040bdc0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bdc3: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x40bdc6u); call_ind(t); }
    /* 0040bdc6: mov edi, eax */ r_edi = r_eax;
    /* 0040bdc8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bdcb: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x40bdd0u); f_005d98da();
    /* 0040bdd0: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040bdd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bdd5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040bdd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bdda: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x40bdddu); call_ind(t); }
    /* 0040bddd: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0040bddf: mov eax, edi */ r_eax = r_edi;
    /* 0040bde1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040bde2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040bde4: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040bde6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040bde8: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 0040bdeb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bdee: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040bdf1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bdf4: mov ecx, dword ptr [edx + ecx*4 + 0x21c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x21cu));
    /* 0040bdfb: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x40be00u); f_005d98c3();
    /* 0040be00: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040be01: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040be03: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040be05: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040be08: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040be0a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040be0d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040be10: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040be13: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040be16: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0040be1d: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x40be22u); f_005d98da();
    /* 0040be22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040be23: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040be25: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040be27: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040be2a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040be2c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0040be2f:; BB(0x0040be2f);
    /* 0040be2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040be32: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0040be35: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040be39: ja 0x40bedd */ if ((!fC&&!fZ)) goto L_0040bedd;
L_0040be3f:; BB(0x0040be3f);
    /* 0040be3f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040be42: jmp dword ptr [ecx*4 + 0x40bf37] */ { u32 t = R32((u32)(r_ecx*4+0x40bf37u)); switch (t) { case 0x40be49u: goto L_0040be49; case 0x40be62u: goto L_0040be62; case 0x40be7bu: goto L_0040be7b; case 0x40be94u: goto L_0040be94; case 0x40beadu: goto L_0040bead; case 0x40bec6u: goto L_0040bec6; default: UNSUP(0x0040be42, "jump table entry is not a known target"); } }
L_0040be49:; BB(0x0040be49);
    /* 0040be49: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040be4b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040be4e: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040be51: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040be54: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0040be5b: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40be60u); f_005ea1cf();
    /* 0040be60: jmp 0x40bedd */ goto L_0040bedd;
L_0040be62:; BB(0x0040be62);
    /* 0040be62: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040be64: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040be67: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040be6a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040be6d: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0040be74: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40be79u); f_005ea1cf();
    /* 0040be79: jmp 0x40bedd */ goto L_0040bedd;
L_0040be7b:; BB(0x0040be7b);
    /* 0040be7b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040be7d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040be80: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040be83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040be86: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0040be8d: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40be92u); f_005ea1cf();
    /* 0040be92: jmp 0x40bedd */ goto L_0040bedd;
L_0040be94:; BB(0x0040be94);
    /* 0040be94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040be96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040be99: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040be9c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040be9f: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0040bea6: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40beabu); f_005ea1cf();
    /* 0040beab: jmp 0x40bedd */ goto L_0040bedd;
L_0040bead:; BB(0x0040bead);
    /* 0040bead: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040beaf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040beb2: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040beb5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040beb8: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0040bebf: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40bec4u); f_005ea1cf();
    /* 0040bec4: jmp 0x40bedd */ goto L_0040bedd;
L_0040bec6:; BB(0x0040bec6);
    /* 0040bec6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040bec8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040becb: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040bece: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bed1: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0040bed8: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40beddu); f_005ea1cf();
L_0040bedd:; BB(0x0040bedd);
    /* 0040bedd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040bee0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bee1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040bee4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040bee5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bee8: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040beeb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040beee: mov ecx, dword ptr [eax + edx*4 + 0x21c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x21cu));
    /* 0040bef5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bef8: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040befb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040befe: mov eax, dword ptr [edx + eax*4 + 0x21c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x21cu));
    /* 0040bf05: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040bf07: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x40bf0au); call_ind(t); }
    /* 0040bf0a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bf0d: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040bf10: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bf13: mov ecx, dword ptr [edx + ecx*4 + 0x21c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x21cu));
    /* 0040bf1a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bf1d: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0040bf20: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bf23: mov edx, dword ptr [eax + edx*4 + 0x21c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x21cu));
    /* 0040bf2a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040bf2c: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x40bf2fu); call_ind(t); }
L_0040bf2f:; BB(0x0040bf2f);
    /* 0040bf2f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040bf30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040bf31: mov esp, ebp */ r_esp = r_ebp;
    /* 0040bf33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040bf34: ret 4 */ FN_RET(0x0040bcd8); r_esp += 8; return;
}

void f_0040bf4f(void) /* FUN_0040bf4f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040bf4f);
    /* 0040bf4f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf50: mov ebp, esp */ r_ebp = r_esp;
    /* 0040bf52: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040bf55: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040bf58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bf5b: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040bf5e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040bf61: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040bf65: ja 0x40bf9f */ if ((!fC&&!fZ)) goto L_0040bf9f;
L_0040bf67:; BB(0x0040bf67);
    /* 0040bf67: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bf6a: jmp dword ptr [edx*4 + 0x40bfe5] */ { u32 t = R32((u32)(r_edx*4+0x40bfe5u)); switch (t) { case 0x40bf71u: goto L_0040bf71; case 0x40bf7du: goto L_0040bf7d; case 0x40bf89u: goto L_0040bf89; case 0x40bf95u: goto L_0040bf95; default: UNSUP(0x0040bf6a, "jump table entry is not a known target"); } }
L_0040bf71:; BB(0x0040bf71);
    /* 0040bf71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bf74: mov dword ptr [eax + 0x64], 1 */ W32((u32)(r_eax+0x64u), 0x1u);
    /* 0040bf7b: jmp 0x40bf9f */ goto L_0040bf9f;
L_0040bf7d:; BB(0x0040bf7d);
    /* 0040bf7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bf80: mov dword ptr [ecx + 0x68], 1 */ W32((u32)(r_ecx+0x68u), 0x1u);
    /* 0040bf87: jmp 0x40bf9f */ goto L_0040bf9f;
L_0040bf89:; BB(0x0040bf89);
    /* 0040bf89: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bf8c: mov dword ptr [edx + 0x6c], 1 */ W32((u32)(r_edx+0x6cu), 0x1u);
    /* 0040bf93: jmp 0x40bf9f */ goto L_0040bf9f;
L_0040bf95:; BB(0x0040bf95);
    /* 0040bf95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bf98: mov dword ptr [eax + 0x70], 1 */ W32((u32)(r_eax+0x70u), 0x1u);
L_0040bf9f:; BB(0x0040bf9f);
    /* 0040bf9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bfa2: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bfa6: je 0x40bfb2 */ if (fZ) goto L_0040bfb2;
L_0040bfa8:; BB(0x0040bfa8);
    /* 0040bfa8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bfab: call 0x40c61c */ r_esp -= 4; W32(r_esp, 0x40bfb0u); f_0040c61c();
    /* 0040bfb0: jmp 0x40bfe1 */ goto L_0040bfe1;
L_0040bfb2:; BB(0x0040bfb2);
    /* 0040bfb2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bfb5: cmp dword ptr [edx + 0x50], 0 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040bfb9: jle 0x40bfe1 */ if ((fZ||fS!=fO)) goto L_0040bfe1;
L_0040bfbb:; BB(0x0040bfbb);
    /* 0040bfbb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bfbe: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040bfc1: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040bfc4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bfc7: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 0040bfca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bfcd: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040bfd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bfd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bfd4: call 0x40bc81 */ r_esp -= 4; W32(r_esp, 0x40bfd9u); f_0040bc81();
    /* 0040bfd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bfdb: jne 0x40bfdf */ if (!fZ) goto L_0040bfdf;
L_0040bfdd:; BB(0x0040bfdd);
    /* 0040bfdd: jmp 0x40bfe1 */ goto L_0040bfe1;
L_0040bfdf:; BB(0x0040bfdf);
    /* 0040bfdf: jmp 0x40bfb2 */ goto L_0040bfb2;
L_0040bfe1:; BB(0x0040bfe1);
    /* 0040bfe1: mov esp, ebp */ r_esp = r_ebp;
    /* 0040bfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040bfe4: ret  */ FN_RET(0x0040bf4f); r_esp += 4; return;
}

void f_0040bff5(void) /* FUN_0040bff5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040bff5);
    /* 0040bff5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040bff6: mov ebp, esp */ r_ebp = r_esp;
    /* 0040bff8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bff9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040bffc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040bfff: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40c004u); f_0040c01f();
    /* 0040c004: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c007: jle 0x40c013 */ if ((fZ||fS!=fO)) goto L_0040c013;
L_0040c009:; BB(0x0040c009);
    /* 0040c009: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c00c: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x40c011u); f_0040c107();
    /* 0040c011: jmp 0x40c01b */ goto L_0040c01b;
L_0040c013:; BB(0x0040c013);
    /* 0040c013: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c016: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40c01bu); f_0040c01f();
L_0040c01b:; BB(0x0040c01b);
    /* 0040c01b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c01d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c01e: ret  */ FN_RET(0x0040bff5); r_esp += 4; return;
}

void f_0040c01f(void) /* FUN_0040c01f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c01f);
    /* 0040c01f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c020: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c022: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c025: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040c028: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0040c02f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040c036: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c039: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40c03eu); f_0040bc0d();
    /* 0040c03e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040c041: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040c048: jmp 0x40c053 */ goto L_0040c053;
L_0040c04a:; BB(0x0040c04a);
    /* 0040c04a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c04d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040c050: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0040c053:; BB(0x0040c053);
    /* 0040c053: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c056: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c059: jge 0x40c100 */ if ((fS==fO)) goto L_0040c100;
L_0040c05f:; BB(0x0040c05f);
    /* 0040c05f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c063: je 0x40c09b */ if (fZ) goto L_0040c09b;
L_0040c065:; BB(0x0040c065);
    /* 0040c065: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c068: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040c06b: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040c06e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c071: lea edx, [ecx + eax + 0x74] */ r_edx = (u32)(r_ecx+r_eax+0x74u);
    /* 0040c075: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c078: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0040c07b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c07c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c07f: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40c084u); f_0040ad48();
    /* 0040c084: mov ecx, eax */ r_ecx = r_eax;
    /* 0040c086: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x40c08bu); f_0040a4d9();
    /* 0040c08b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c08e: jne 0x40c09b */ if (!fZ) goto L_0040c09b;
L_0040c090:; BB(0x0040c090);
    /* 0040c090: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c093: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040c096: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0040c099: jmp 0x40c0fb */ goto L_0040c0fb;
L_0040c09b:; BB(0x0040c09b);
    /* 0040c09b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c09e: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040c0a1: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040c0a4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c0a7: lea eax, [edx + ecx + 0x74] */ r_eax = (u32)(r_edx+r_ecx+0x74u);
    /* 0040c0ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c0ae: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0040c0b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c0b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c0b5: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40c0bau); f_0040ad48();
    /* 0040c0ba: mov ecx, eax */ r_ecx = r_eax;
    /* 0040c0bc: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x40c0c1u); f_0040a4d9();
    /* 0040c0c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c0c4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040c0c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040c0c9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c0cc: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040c0cf: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040c0d2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c0d5: lea edx, [ecx + eax + 0x74] */ r_edx = (u32)(r_ecx+r_eax+0x74u);
    /* 0040c0d9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c0dc: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0040c0df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c0e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c0e3: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40c0e8u); f_0040ad48();
    /* 0040c0e8: mov ecx, eax */ r_ecx = r_eax;
    /* 0040c0ea: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x40c0efu); f_0040a4d9();
    /* 0040c0ef: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c0f2: jne 0x40c0fb */ if (!fZ) goto L_0040c0fb;
L_0040c0f4:; BB(0x0040c0f4);
    /* 0040c0f4: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_0040c0fb:; BB(0x0040c0fb);
    /* 0040c0fb: jmp 0x40c04a */ goto L_0040c04a;
L_0040c100:; BB(0x0040c100);
    /* 0040c100: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c103: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c105: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c106: ret  */ FN_RET(0x0040c01f); r_esp += 4; return;
}

void f_0040c107(void) /* FUN_0040c107 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c107);
    /* 0040c107: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c108: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c10a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c10d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040c110: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040c117: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c11a: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40c11fu); f_0040bc0d();
    /* 0040c11f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040c122: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0040c129: jmp 0x40c134 */ goto L_0040c134;
L_0040c12b:; BB(0x0040c12b);
    /* 0040c12b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c12e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040c131: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0040c134:; BB(0x0040c134);
    /* 0040c134: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c137: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c13a: jge 0x40c1a2 */ if ((fS==fO)) goto L_0040c1a2;
L_0040c13c:; BB(0x0040c13c);
    /* 0040c13c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c13f: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040c142: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040c145: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c148: lea edx, [ecx + eax + 0x74] */ r_edx = (u32)(r_ecx+r_eax+0x74u);
    /* 0040c14c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c14f: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0040c152: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c153: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c156: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40c15bu); f_0040ad48();
    /* 0040c15b: mov ecx, eax */ r_ecx = r_eax;
    /* 0040c15d: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x40c162u); f_0040a4d9();
    /* 0040c162: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c165: jne 0x40c172 */ if (!fZ) goto L_0040c172;
L_0040c167:; BB(0x0040c167);
    /* 0040c167: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c16a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040c16d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040c170: jmp 0x40c1a0 */ goto L_0040c1a0;
L_0040c172:; BB(0x0040c172);
    /* 0040c172: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c175: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040c178: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040c17b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c17e: lea eax, [edx + ecx + 0x74] */ r_eax = (u32)(r_edx+r_ecx+0x74u);
    /* 0040c182: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c185: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0040c188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c189: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c18c: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40c191u); f_0040ad48();
    /* 0040c191: mov ecx, eax */ r_ecx = r_eax;
    /* 0040c193: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x40c198u); f_0040a4d9();
    /* 0040c198: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c19b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040c19d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0040c1a0:; BB(0x0040c1a0);
    /* 0040c1a0: jmp 0x40c12b */ goto L_0040c12b;
L_0040c1a2:; BB(0x0040c1a2);
    /* 0040c1a2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c1a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c1a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c1a8: ret  */ FN_RET(0x0040c107); r_esp += 4; return;
}

void f_0040c1a9(void) /* FUN_0040c1a9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c1a9);
    /* 0040c1a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c1aa: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c1ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c1ad: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040c1b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c1b3: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x40c1b8u); f_0040c107();
    /* 0040c1b8: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c1bb: jle 0x40c1c4 */ if ((fZ||fS!=fO)) goto L_0040c1c4;
L_0040c1bd:; BB(0x0040c1bd);
    /* 0040c1bd: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c1c2: jmp 0x40c1c6 */ goto L_0040c1c6;
L_0040c1c4:; BB(0x0040c1c4);
    /* 0040c1c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040c1c6:; BB(0x0040c1c6);
    /* 0040c1c6: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c1c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c1c9: ret  */ FN_RET(0x0040c1a9); r_esp += 4; return;
}

void f_0040c1ca(void) /* FUN_0040c1ca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c1ca);
    /* 0040c1ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c1cb: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c1cd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c1d0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040c1d3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c1d6: mov cx, word ptr [eax + 0x50] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x50u))) & 0xffffu);
    /* 0040c1da: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 0040c1de: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040c1e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c1e8: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40c1edu); f_005dd4d2();
    /* 0040c1ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c1ef: jne 0x40c1f8 */ if (!fZ) goto L_0040c1f8;
L_0040c1f1:; BB(0x0040c1f1);
    /* 0040c1f1: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c1f6: jmp 0x40c25f */ goto L_0040c25f;
L_0040c1f8:; BB(0x0040c1f8);
    /* 0040c1f8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c1fb: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
    /* 0040c202: jmp 0x40c213 */ goto L_0040c213;
L_0040c204:; BB(0x0040c204);
    /* 0040c204: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c207: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040c20a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040c20d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c210: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
L_0040c213:; BB(0x0040c213);
    /* 0040c213: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c216: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c219: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0040c21c: cmp edx, dword ptr [ecx + 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c21f: jge 0x40c23f */ if ((fS==fO)) goto L_0040c23f;
L_0040c221:; BB(0x0040c221);
    /* 0040c221: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c224: call 0x40c1a9 */ r_esp -= 4; W32(r_esp, 0x40c229u); f_0040c1a9();
    /* 0040c229: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c22b: jne 0x40c23d */ if (!fZ) goto L_0040c23d;
L_0040c22d:; BB(0x0040c22d);
    /* 0040c22d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c230: cmp dword ptr [eax + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c234: jne 0x40c23d */ if (!fZ) goto L_0040c23d;
L_0040c236:; BB(0x0040c236);
    /* 0040c236: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0040c23d:; BB(0x0040c23d);
    /* 0040c23d: jmp 0x40c204 */ goto L_0040c204;
L_0040c23f:; BB(0x0040c23f);
    /* 0040c23f: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0040c243: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c246: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 0040c249: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c24c: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x40c251u); f_0040c28d();
    /* 0040c251: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c253: je 0x40c25c */ if (fZ) goto L_0040c25c;
L_0040c255:; BB(0x0040c255);
    /* 0040c255: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0040c25c:; BB(0x0040c25c);
    /* 0040c25c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0040c25f:; BB(0x0040c25f);
    /* 0040c25f: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c261: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c262: ret  */ FN_RET(0x0040c1ca); r_esp += 4; return;
}

void f_0040c263(void) /* FUN_0040c263 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c263);
    /* 0040c263: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c264: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c266: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c267: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040c26a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c26c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c26f: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40c274u); f_0040ad48();
    /* 0040c274: mov ecx, eax */ r_ecx = r_eax;
    /* 0040c276: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x40c27bu); f_0040a4d9();
    /* 0040c27b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c27e: jne 0x40c287 */ if (!fZ) goto L_0040c287;
L_0040c280:; BB(0x0040c280);
    /* 0040c280: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c285: jmp 0x40c289 */ goto L_0040c289;
L_0040c287:; BB(0x0040c287);
    /* 0040c287: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040c289:; BB(0x0040c289);
    /* 0040c289: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c28b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c28c: ret  */ FN_RET(0x0040c263); r_esp += 4; return;
}

void f_0040c28d(void) /* FUN_0040c28d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c28d);
    /* 0040c28d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c28e: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c290: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c291: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040c292: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040c295: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c298: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40c29du); f_005dd4d2();
    /* 0040c29d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c2a0: jne 0x40c2f2 */ if (!fZ) goto L_0040c2f2;
L_0040c2a2:; BB(0x0040c2a2);
    /* 0040c2a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c2a5: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040c2a8: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040c2ab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c2ae: mov eax, dword ptr [edx + ecx + 0x74] */ r_eax = R32((u32)(r_edx+r_ecx+0x74u));
    /* 0040c2b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c2b6: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40c2bbu); f_0040ad48();
    /* 0040c2bb: mov ecx, eax */ r_ecx = r_eax;
    /* 0040c2bd: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x40c2c2u); f_0040a4d9();
    /* 0040c2c2: mov esi, eax */ r_esi = r_eax;
    /* 0040c2c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c2c7: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040c2ca: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040c2cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c2d0: mov ecx, dword ptr [eax + edx + 0x78] */ r_ecx = R32((u32)(r_eax+r_edx+0x78u));
    /* 0040c2d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c2d8: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40c2ddu); f_0040ad48();
    /* 0040c2dd: mov ecx, eax */ r_ecx = r_eax;
    /* 0040c2df: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x40c2e4u); f_0040a4d9();
    /* 0040c2e4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040c2e6: cmp esi, 0x15 */ {  u32 a = r_esi; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c2e9: jne 0x40c2f2 */ if (!fZ) goto L_0040c2f2;
L_0040c2eb:; BB(0x0040c2eb);
    /* 0040c2eb: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c2f0: jmp 0x40c2f4 */ goto L_0040c2f4;
L_0040c2f2:; BB(0x0040c2f2);
    /* 0040c2f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040c2f4:; BB(0x0040c2f4);
    /* 0040c2f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040c2f5: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c2f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c2f8: ret  */ FN_RET(0x0040c28d); r_esp += 4; return;
}

void f_0040c2f9(void) /* FUN_0040c2f9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c2f9);
    /* 0040c2f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2fa: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c2fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2fe: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040c301: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c304: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40c309u); f_0040c01f();
    /* 0040c309: mov esi, eax */ r_esi = r_eax;
    /* 0040c30b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c30e: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x40c313u); f_0040c107();
    /* 0040c313: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c315: je 0x40c324 */ if (fZ) goto L_0040c324;
L_0040c317:; BB(0x0040c317);
    /* 0040c317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c31a: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40c31fu); f_0040c01f();
    /* 0040c31f: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c322: jle 0x40c32b */ if ((fZ||fS!=fO)) goto L_0040c32b;
L_0040c324:; BB(0x0040c324);
    /* 0040c324: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c329: jmp 0x40c32d */ goto L_0040c32d;
L_0040c32b:; BB(0x0040c32b);
    /* 0040c32b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040c32d:; BB(0x0040c32d);
    /* 0040c32d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040c32e: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c330: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c331: ret  */ FN_RET(0x0040c2f9); r_esp += 4; return;
}

void f_0040c332(void) /* FUN_0040c332 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c332);
    /* 0040c332: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c333: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c335: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c338: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040c33b: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040c340: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 0040c346: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040c349: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040c34d: ja 0x40c407 */ if ((!fC&&!fZ)) goto L_0040c407;
L_0040c353:; BB(0x0040c353);
    /* 0040c353: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c356: jmp dword ptr [edx*4 + 0x40c40d] */ { u32 t = R32((u32)(r_edx*4+0x40c40du)); switch (t) { case 0x40c367u: goto L_0040c367; case 0x40c383u: goto L_0040c383; case 0x40c3b3u: goto L_0040c3b3; case 0x40c3fdu: goto L_0040c3fd; case 0x40c35du: goto L_0040c35d; default: UNSUP(0x0040c356, "jump table entry is not a known target"); } }
L_0040c35d:; BB(0x0040c35d);
    /* 0040c35d: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c362: jmp 0x40c409 */ goto L_0040c409;
L_0040c367:; BB(0x0040c367);
    /* 0040c367: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c36a: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40c36fu); f_0040c01f();
    /* 0040c36f: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c372: jne 0x40c37e */ if (!fZ) goto L_0040c37e;
L_0040c374:; BB(0x0040c374);
    /* 0040c374: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c379: jmp 0x40c409 */ goto L_0040c409;
L_0040c37e:; BB(0x0040c37e);
    /* 0040c37e: jmp 0x40c407 */ goto L_0040c407;
L_0040c383:; BB(0x0040c383);
    /* 0040c383: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c386: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40c38bu); f_0040c01f();
    /* 0040c38b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c38e: je 0x40c3aa */ if (fZ) goto L_0040c3aa;
L_0040c390:; BB(0x0040c390);
    /* 0040c390: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c393: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40c398u); f_0040c01f();
    /* 0040c398: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c39b: je 0x40c3aa */ if (fZ) goto L_0040c3aa;
L_0040c39d:; BB(0x0040c39d);
    /* 0040c39d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c3a0: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x40c3a5u); f_0040c107();
    /* 0040c3a5: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c3a8: jne 0x40c3b1 */ if (!fZ) goto L_0040c3b1;
L_0040c3aa:; BB(0x0040c3aa);
    /* 0040c3aa: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c3af: jmp 0x40c409 */ goto L_0040c409;
L_0040c3b1:; BB(0x0040c3b1);
    /* 0040c3b1: jmp 0x40c407 */ goto L_0040c407;
L_0040c3b3:; BB(0x0040c3b3);
    /* 0040c3b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c3b6: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40c3bbu); f_0040c01f();
    /* 0040c3bb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c3be: je 0x40c3f4 */ if (fZ) goto L_0040c3f4;
L_0040c3c0:; BB(0x0040c3c0);
    /* 0040c3c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c3c3: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40c3c8u); f_0040c01f();
    /* 0040c3c8: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c3cb: je 0x40c3f4 */ if (fZ) goto L_0040c3f4;
L_0040c3cd:; BB(0x0040c3cd);
    /* 0040c3cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c3d0: call 0x40c01f */ r_esp -= 4; W32(r_esp, 0x40c3d5u); f_0040c01f();
    /* 0040c3d5: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c3d8: je 0x40c3f4 */ if (fZ) goto L_0040c3f4;
L_0040c3da:; BB(0x0040c3da);
    /* 0040c3da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c3dd: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x40c3e2u); f_0040c107();
    /* 0040c3e2: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c3e5: je 0x40c3f4 */ if (fZ) goto L_0040c3f4;
L_0040c3e7:; BB(0x0040c3e7);
    /* 0040c3e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c3ea: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x40c3efu); f_0040c107();
    /* 0040c3ef: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c3f2: jne 0x40c3fb */ if (!fZ) goto L_0040c3fb;
L_0040c3f4:; BB(0x0040c3f4);
    /* 0040c3f4: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c3f9: jmp 0x40c409 */ goto L_0040c409;
L_0040c3fb:; BB(0x0040c3fb);
    /* 0040c3fb: jmp 0x40c407 */ goto L_0040c407;
L_0040c3fd:; BB(0x0040c3fd);
    /* 0040c3fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c400: call 0x40c2f9 */ r_esp -= 4; W32(r_esp, 0x40c405u); f_0040c2f9();
    /* 0040c405: jmp 0x40c409 */ goto L_0040c409;
L_0040c407:; BB(0x0040c407);
    /* 0040c407: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040c409:; BB(0x0040c409);
    /* 0040c409: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c40b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c40c: ret  */ FN_RET(0x0040c332); r_esp += 4; return;
}

void f_0040c421(void) /* FUN_0040c421 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c421);
    /* 0040c421: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c422: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c424: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c425: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040c426: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040c429: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c42c: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40c431u); f_0040bc0d();
    /* 0040c431: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c434: je 0x40c43a */ if (fZ) goto L_0040c43a;
L_0040c436:; BB(0x0040c436);
    /* 0040c436: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040c438: jmp 0x40c489 */ goto L_0040c489;
L_0040c43a:; BB(0x0040c43a);
    /* 0040c43a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c43d: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040c440: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040c443: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c446: mov eax, dword ptr [edx + ecx + 0x74] */ r_eax = R32((u32)(r_edx+r_ecx+0x74u));
    /* 0040c44a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c44b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c44e: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40c453u); f_0040ad48();
    /* 0040c453: mov ecx, eax */ r_ecx = r_eax;
    /* 0040c455: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x40c45au); f_0040a4d9();
    /* 0040c45a: mov esi, eax */ r_esi = r_eax;
    /* 0040c45c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c45f: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040c462: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040c465: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c468: mov ecx, dword ptr [eax + edx + 0x78] */ r_ecx = R32((u32)(r_eax+r_edx+0x78u));
    /* 0040c46c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c46d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c470: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40c475u); f_0040ad48();
    /* 0040c475: mov ecx, eax */ r_ecx = r_eax;
    /* 0040c477: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x40c47cu); f_0040a4d9();
    /* 0040c47c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c47e: jne 0x40c487 */ if (!fZ) goto L_0040c487;
L_0040c480:; BB(0x0040c480);
    /* 0040c480: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c485: jmp 0x40c489 */ goto L_0040c489;
L_0040c487:; BB(0x0040c487);
    /* 0040c487: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040c489:; BB(0x0040c489);
    /* 0040c489: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040c48a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c48c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c48d: ret  */ FN_RET(0x0040c421); r_esp += 4; return;
}

void f_0040c48e(void) /* FUN_0040c48e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c48e);
    /* 0040c48e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c48f: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c491: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c494: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040c495: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040c498: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040c49d: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0040c4a0: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 0040c4a6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0040c4a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c4ac: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x40c4b1u); f_0040bff5();
    /* 0040c4b1: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c4b4: jg 0x40c4bf */ if ((!fZ&&fS==fO)) goto L_0040c4bf;
L_0040c4b6:; BB(0x0040c4b6);
    /* 0040c4b6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c4b9: cmp dword ptr [eax + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c4bd: je 0x40c4c6 */ if (fZ) goto L_0040c4c6;
L_0040c4bf:; BB(0x0040c4bf);
    /* 0040c4bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040c4c1: jmp 0x40c55d */ goto L_0040c55d;
L_0040c4c6:; BB(0x0040c4c6);
    /* 0040c4c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c4c9: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x40c4ceu); f_0040c28d();
    /* 0040c4ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c4d0: je 0x40c4f6 */ if (fZ) goto L_0040c4f6;
L_0040c4d2:; BB(0x0040c4d2);
    /* 0040c4d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c4d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c4d7: call 0x40bcd8 */ r_esp -= 4; W32(r_esp, 0x40c4dcu); f_0040bcd8();
    /* 0040c4dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c4df: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x40c4e4u); f_0040c28d();
    /* 0040c4e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c4e6: je 0x40c4ef */ if (fZ) goto L_0040c4ef;
L_0040c4e8:; BB(0x0040c4e8);
    /* 0040c4e8: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c4ed: jmp 0x40c55d */ goto L_0040c55d;
L_0040c4ef:; BB(0x0040c4ef);
    /* 0040c4ef: mov eax, 2 */ r_eax = 0x2u;
    /* 0040c4f4: jmp 0x40c55d */ goto L_0040c55d;
L_0040c4f6:; BB(0x0040c4f6);
    /* 0040c4f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c4f9: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x40c4feu); f_0040bff5();
    /* 0040c4fe: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c501: jge 0x40c527 */ if ((fS==fO)) goto L_0040c527;
L_0040c503:; BB(0x0040c503);
    /* 0040c503: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c506: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x40c50bu); f_0040bff5();
    /* 0040c50b: mov esi, eax */ r_esi = r_eax;
    /* 0040c50d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c510: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x40c515u); f_0040bff5();
    /* 0040c515: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c517: jle 0x40c527 */ if ((fZ||fS!=fO)) goto L_0040c527;
L_0040c519:; BB(0x0040c519);
    /* 0040c519: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c51b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c51e: call 0x40bcd8 */ r_esp -= 4; W32(r_esp, 0x40c523u); f_0040bcd8();
    /* 0040c523: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040c525: jmp 0x40c55d */ goto L_0040c55d;
L_0040c527:; BB(0x0040c527);
    /* 0040c527: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c52a: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x40c52fu); f_0040bff5();
    /* 0040c52f: mov esi, eax */ r_esi = r_eax;
    /* 0040c531: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c534: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x40c539u); f_0040bff5();
    /* 0040c539: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c53b: jne 0x40c54e */ if (!fZ) goto L_0040c54e;
L_0040c53d:; BB(0x0040c53d);
    /* 0040c53d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c53f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c542: call 0x40bcd8 */ r_esp -= 4; W32(r_esp, 0x40c547u); f_0040bcd8();
    /* 0040c547: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c54c: jmp 0x40c55d */ goto L_0040c55d;
L_0040c54e:; BB(0x0040c54e);
    /* 0040c54e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c550: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c553: call 0x40bcd8 */ r_esp -= 4; W32(r_esp, 0x40c558u); f_0040bcd8();
    /* 0040c558: mov eax, 2 */ r_eax = 0x2u;
L_0040c55d:; BB(0x0040c55d);
    /* 0040c55d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040c55e: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c560: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c561: ret  */ FN_RET(0x0040c48e); r_esp += 4; return;
}

void f_0040c562(void) /* FUN_0040c562 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c562);
    /* 0040c562: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c563: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c565: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c568: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0040c56b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c56e: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0040c571: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040c574: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c577: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0040c57a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040c57d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c580: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0040c583: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040c586: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c589: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0040c58c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040c58f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c592: call 0x40c61c */ r_esp -= 4; W32(r_esp, 0x40c597u); f_0040c61c();
    /* 0040c597: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0040c59e: jmp 0x40c5a9 */ goto L_0040c5a9;
L_0040c5a0:; BB(0x0040c5a0);
    /* 0040c5a0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c5a3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040c5a6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0040c5a9:; BB(0x0040c5a9);
    /* 0040c5a9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c5ac: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40c5b1u); f_005dd4d2();
    /* 0040c5b1: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c5b4: jge 0x40c618 */ if ((fS==fO)) goto L_0040c618;
L_0040c5b6:; BB(0x0040c5b6);
    /* 0040c5b6: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0040c5bd: jmp 0x40c5c8 */ goto L_0040c5c8;
L_0040c5bf:; BB(0x0040c5bf);
    /* 0040c5bf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040c5c2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040c5c5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0040c5c8:; BB(0x0040c5c8);
    /* 0040c5c8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c5cb: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40c5d0u); f_0040bc0d();
    /* 0040c5d0: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c5d3: jge 0x40c5f4 */ if ((fS==fO)) goto L_0040c5f4;
L_0040c5d5:; BB(0x0040c5d5);
    /* 0040c5d5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c5d8: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0040c5db: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040c5de: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c5e1: lea ecx, [eax + edx + 0x74] */ r_ecx = (u32)(r_eax+r_edx+0x74u);
    /* 0040c5e5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040c5e8: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0040c5eb: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c5ee: jne 0x40c5f2 */ if (!fZ) goto L_0040c5f2;
L_0040c5f0:; BB(0x0040c5f0);
    /* 0040c5f0: jmp 0x40c5f4 */ goto L_0040c5f4;
L_0040c5f2:; BB(0x0040c5f2);
    /* 0040c5f2: jmp 0x40c5bf */ goto L_0040c5bf;
L_0040c5f4:; BB(0x0040c5f4);
    /* 0040c5f4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c5f7: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40c5fcu); f_0040bc0d();
    /* 0040c5fc: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c5ff: jne 0x40c616 */ if (!fZ) goto L_0040c616;
L_0040c601:; BB(0x0040c601);
    /* 0040c601: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c603: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c606: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c607: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c60a: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40c60fu); f_0040ad48();
    /* 0040c60f: mov ecx, eax */ r_ecx = r_eax;
    /* 0040c611: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x40c616u); f_005ea454();
L_0040c616:; BB(0x0040c616);
    /* 0040c616: jmp 0x40c5a0 */ goto L_0040c5a0;
L_0040c618:; BB(0x0040c618);
    /* 0040c618: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c61a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c61b: ret  */ FN_RET(0x0040c562); r_esp += 4; return;
}

void f_0040c61c(void) /* FUN_0040c61c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c61c);
    /* 0040c61c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c61d: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c61f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c622: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040c625: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040c62c: jmp 0x40c637 */ goto L_0040c637;
L_0040c62e:; BB(0x0040c62e);
    /* 0040c62e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c631: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040c634: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040c637:; BB(0x0040c637);
    /* 0040c637: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c63a: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40c63fu); f_005dd4d2();
    /* 0040c63f: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c642: jge 0x40c65e */ if ((fS==fO)) goto L_0040c65e;
L_0040c644:; BB(0x0040c644);
    /* 0040c644: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c649: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c64c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c64d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c650: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40c655u); f_0040ad48();
    /* 0040c655: mov ecx, eax */ r_ecx = r_eax;
    /* 0040c657: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x40c65cu); f_005ea454();
    /* 0040c65c: jmp 0x40c62e */ goto L_0040c62e;
L_0040c65e:; BB(0x0040c65e);
    /* 0040c65e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040c665: jmp 0x40c670 */ goto L_0040c670;
L_0040c667:; BB(0x0040c667);
    /* 0040c667: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c66a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040c66d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0040c670:; BB(0x0040c670);
    /* 0040c670: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c673: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c676: cmp ecx, dword ptr [eax + 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c679: jge 0x40c6cb */ if ((fS==fO)) goto L_0040c6cb;
L_0040c67b:; BB(0x0040c67b);
    /* 0040c67b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c67e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c681: cmp dword ptr [eax + edx*4 + 0x20c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x20cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c689: je 0x40c6a2 */ if (fZ) goto L_0040c6a2;
L_0040c68b:; BB(0x0040c68b);
    /* 0040c68b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c690: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c693: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c696: mov ecx, dword ptr [edx + ecx*4 + 0x20c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20cu));
    /* 0040c69d: call 0x426abe */ r_esp -= 4; W32(r_esp, 0x40c6a2u); f_00426abe();
L_0040c6a2:; BB(0x0040c6a2);
    /* 0040c6a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c6a5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c6a8: cmp dword ptr [ecx + eax*4 + 0x21c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x21cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c6b0: je 0x40c6c9 */ if (fZ) goto L_0040c6c9;
L_0040c6b2:; BB(0x0040c6b2);
    /* 0040c6b2: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c6b7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c6ba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c6bd: mov ecx, dword ptr [eax + edx*4 + 0x21c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x21cu));
    /* 0040c6c4: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x40c6c9u); f_005ea454();
L_0040c6c9:; BB(0x0040c6c9);
    /* 0040c6c9: jmp 0x40c667 */ goto L_0040c667;
L_0040c6cb:; BB(0x0040c6cb);
    /* 0040c6cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c6cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c6ce: ret  */ FN_RET(0x0040c61c); r_esp += 4; return;
}

void f_0040c6cf(void) /* FUN_0040c6cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c6cf);
    /* 0040c6cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c6d0: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c6d2: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c6d5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0040c6d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c6db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c6dc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c6df: call 0x425366 */ r_esp -= 4; W32(r_esp, 0x40c6e4u); f_00425366();
    /* 0040c6e4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c6e7: mov dword ptr [ecx], 0x63386c */ W32((u32)(r_ecx), 0x63386cu);
    /* 0040c6ed: mov dword ptr [ebp - 0x24], 0x213 */ W32((u32)(r_ebp+0xffffffdcu), 0x213u);
    /* 0040c6f4: mov dword ptr [ebp - 0x20], 0xf1 */ W32((u32)(r_ebp+0xffffffe0u), 0xf1u);
    /* 0040c6fb: mov dword ptr [ebp - 0x1c], 0x190 */ W32((u32)(r_ebp+0xffffffe4u), 0x190u);
    /* 0040c702: mov dword ptr [ebp - 0x18], 0x135 */ W32((u32)(r_ebp+0xffffffe8u), 0x135u);
    /* 0040c709: mov dword ptr [ebp - 0x14], 0x8a */ W32((u32)(r_ebp+0xffffffecu), 0x8au);
    /* 0040c710: mov dword ptr [ebp - 0x10], 0x135 */ W32((u32)(r_ebp+0xfffffff0u), 0x135u);
    /* 0040c717: mov dword ptr [ebp - 0xc], 5 */ W32((u32)(r_ebp+0xfffffff4u), 0x5u);
    /* 0040c71e: mov dword ptr [ebp - 8], 0xf1 */ W32((u32)(r_ebp+0xfffffff8u), 0xf1u);
    /* 0040c725: mov dword ptr [ebp - 4], 0x66 */ W32((u32)(r_ebp+0xfffffffcu), 0x66u);
    /* 0040c72c: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c730: jge 0x40c7c3 */ if ((fS==fO)) goto L_0040c7c3;
L_0040c736:; BB(0x0040c736);
    /* 0040c736: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c73a: jne 0x40c743 */ if (!fZ) goto L_0040c743;
L_0040c73c:; BB(0x0040c73c);
    /* 0040c73c: mov dword ptr [ebp - 4], 0x64 */ W32((u32)(r_ebp+0xfffffffcu), 0x64u);
L_0040c743:; BB(0x0040c743);
    /* 0040c743: push 0x3250 */ { u32 v = 0x3250u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c748: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40c74du); f_0048ab58();
    /* 0040c74d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c750: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040c753: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c757: je 0x40c778 */ if (fZ) goto L_0040c778;
L_0040c759:; BB(0x0040c759);
    /* 0040c759: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c75b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040c75e: mov eax, dword ptr [ebp + edx*8 - 0x20] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffe0u));
    /* 0040c762: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c763: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040c766: mov edx, dword ptr [ebp + ecx*8 - 0x24] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffdcu));
    /* 0040c76a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c76b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040c76e: call 0x41e7f0 */ r_esp -= 4; W32(r_esp, 0x40c773u); f_0041e7f0();
    /* 0040c773: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0040c776: jmp 0x40c77f */ goto L_0040c77f;
L_0040c778:; BB(0x0040c778);
    /* 0040c778: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0040c77f:; BB(0x0040c77f);
    /* 0040c77f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c782: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0040c785: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0040c788: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c78f: jne 0x40c79c */ if (!fZ) goto L_0040c79c;
L_0040c791:; BB(0x0040c791);
    /* 0040c791: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c794: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0040c797: call 0x41fb49 */ r_esp -= 4; W32(r_esp, 0x40c79cu); f_0041fb49();
L_0040c79c:; BB(0x0040c79c);
    /* 0040c79c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c79f: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x40c7a4u); f_004259a0();
    /* 0040c7a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c7a6: jne 0x40c7c3 */ if (!fZ) goto L_0040c7c3;
L_0040c7a8:; BB(0x0040c7a8);
    /* 0040c7a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c7aa: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040c7af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040c7b1: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040c7b7: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x40c7bau); call_ind(t); }
    /* 0040c7ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c7bb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c7be: call 0x425c32 */ r_esp -= 4; W32(r_esp, 0x40c7c3u); f_00425c32();
L_0040c7c3:; BB(0x0040c7c3);
    /* 0040c7c3: push 0x22c */ { u32 v = 0x22cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c7c8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40c7cdu); f_0048ab58();
    /* 0040c7cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c7d0: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0040c7d3: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c7d7: je 0x40c7ea */ if (fZ) goto L_0040c7ea;
L_0040c7d9:; BB(0x0040c7d9);
    /* 0040c7d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c7dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c7dd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040c7e0: call 0x40a982 */ r_esp -= 4; W32(r_esp, 0x40c7e5u); f_0040a982();
    /* 0040c7e5: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0040c7e8: jmp 0x40c7f1 */ goto L_0040c7f1;
L_0040c7ea:; BB(0x0040c7ea);
    /* 0040c7ea: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0040c7f1:; BB(0x0040c7f1);
    /* 0040c7f1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c7f4: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040c7f7: mov dword ptr [ecx + 0x130], edx */ W32((u32)(r_ecx+0x130u), r_edx);
    /* 0040c7fd: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c800: mov dword ptr [eax + 0x148], 1 */ W32((u32)(r_eax+0x148u), 0x1u);
    /* 0040c80a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c80d: mov dword ptr [ecx + 0x14c], 0 */ W32((u32)(r_ecx+0x14cu), 0x0u);
    /* 0040c817: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c81a: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 0040c824: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c827: mov dword ptr [eax + 0x134], 1 */ W32((u32)(r_eax+0x134u), 0x1u);
    /* 0040c831: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c834: mov dword ptr [ecx + 0x138], 0 */ W32((u32)(r_ecx+0x138u), 0x0u);
    /* 0040c83e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c841: mov dword ptr [edx + 0x140], 0 */ W32((u32)(r_edx+0x140u), 0x0u);
    /* 0040c84b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c84d: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x40c852u); f_0060ee31();
    /* 0040c852: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c855: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c858: mov dword ptr [ecx + 0x10c], eax */ W32((u32)(r_ecx+0x10cu), r_eax);
    /* 0040c85e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c861: mov dword ptr [edx + 0x144], 0xffffffff */ W32((u32)(r_edx+0x144u), 0xffffffffu);
    /* 0040c86b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c86e: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c870: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c871: ret 8 */ FN_RET(0x0040c6cf); r_esp += 12; return;
}

void f_0040c874(void) /* FUN_0040c874 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c874);
    /* 0040c874: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c875: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c877: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c87a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040c87d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c880: mov dword ptr [eax], 0x63386c */ W32((u32)(r_eax), 0x63386cu);
    /* 0040c886: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c889: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 0040c88f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040c892: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c895: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040c898: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c89c: je 0x40c8af */ if (fZ) goto L_0040c8af;
L_0040c89e:; BB(0x0040c89e);
    /* 0040c89e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c8a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c8a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040c8a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c8a8: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40c8aau); call_ind(t); }
    /* 0040c8aa: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040c8ad: jmp 0x40c8b6 */ goto L_0040c8b6;
L_0040c8af:; BB(0x0040c8af);
    /* 0040c8af: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0040c8b6:; BB(0x0040c8b6);
    /* 0040c8b6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c8b9: mov dword ptr [eax + 0x130], 0 */ W32((u32)(r_eax+0x130u), 0x0u);
    /* 0040c8c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c8c6: call 0x425495 */ r_esp -= 4; W32(r_esp, 0x40c8cbu); f_00425495();
    /* 0040c8cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c8cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c8ce: ret  */ FN_RET(0x0040c874); r_esp += 4; return;
}

void f_0040c8cf(void) /* FUN_0040c8cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c8cf);
    /* 0040c8cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c8d0: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c8d2: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c8d5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0040c8d8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c8db: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40c8e0u); f_004259f1();
    /* 0040c8e0: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0040c8e4: mov word ptr [ebp - 0xc], 2 */ W16((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0040c8ea: mov word ptr [ebp - 0xa], 2 */ W16((u32)(r_ebp+0xfffffff6u), 0x2u);
    /* 0040c8f0: mov word ptr [ebp - 8], 5 */ W16((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 0040c8f6: mov word ptr [ebp - 6], 3 */ W16((u32)(r_ebp+0xfffffffau), 0x3u);
    /* 0040c8fc: mov dword ptr [ebp - 0x2c], 0x155 */ W32((u32)(r_ebp+0xffffffd4u), 0x155u);
    /* 0040c903: mov dword ptr [ebp - 0x28], 0x83 */ W32((u32)(r_ebp+0xffffffd8u), 0x83u);
    /* 0040c90a: mov dword ptr [ebp - 0x24], 0xd2 */ W32((u32)(r_ebp+0xffffffdcu), 0xd2u);
    /* 0040c911: mov dword ptr [ebp - 0x20], 0xc7 */ W32((u32)(r_ebp+0xffffffe0u), 0xc7u);
    /* 0040c918: mov dword ptr [ebp - 0x1c], 0xb7 */ W32((u32)(r_ebp+0xffffffe4u), 0xb7u);
    /* 0040c91f: mov dword ptr [ebp - 0x18], 0x138 */ W32((u32)(r_ebp+0xffffffe8u), 0x138u);
    /* 0040c926: mov dword ptr [ebp - 0x14], 0x32 */ W32((u32)(r_ebp+0xffffffecu), 0x32u);
    /* 0040c92d: mov dword ptr [ebp - 0x10], 0x83 */ W32((u32)(r_ebp+0xfffffff0u), 0x83u);
    /* 0040c934: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c937: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040c93a: call 0x426404 */ r_esp -= 4; W32(r_esp, 0x40c93fu); f_00426404();
    /* 0040c93f: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c946: je 0x40c97f */ if (fZ) goto L_0040c97f;
L_0040c948:; BB(0x0040c948);
    /* 0040c948: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040c94c: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c94f: je 0x40c97f */ if (fZ) goto L_0040c97f;
L_0040c951:; BB(0x0040c951);
    /* 0040c951: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040c955: movsx eax, word ptr [ebp + edx*2 - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edx*2+0xfffffff4u));
    /* 0040c95a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c95b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040c95f: mov edx, dword ptr [ebp + ecx*8 - 0x28] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffd8u));
    /* 0040c963: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c964: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040c968: mov ecx, dword ptr [ebp + eax*8 - 0x2c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd4u));
    /* 0040c96c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c96d: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040c971: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c972: mov eax, dword ptr [0x6f5b34] */ r_eax = R32((u32)(0x6f5b34u));
    /* 0040c977: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040c97a: call 0x42a5c0 */ r_esp -= 4; W32(r_esp, 0x40c97fu); f_0042a5c0();
L_0040c97f:; BB(0x0040c97f);
    /* 0040c97f: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c981: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c982: ret  */ FN_RET(0x0040c8cf); r_esp += 4; return;
}

void f_0040c983(void) /* FUN_0040c983 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c983);
    /* 0040c983: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c984: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c986: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c987: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040c98a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c98d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040c990: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0040c993: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c996: ret  */ FN_RET(0x0040c983); r_esp += 4; return;
}

void f_0040c997(void) /* FUN_0040c997 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c997);
    /* 0040c997: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c998: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c99a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c99b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040c99e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c9a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c9a9: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40c9aeu); f_004259f1();
    /* 0040c9ae: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040c9b4: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040c9b8: call 0x42827c */ r_esp -= 4; W32(r_esp, 0x40c9bdu); f_0042827c();
    /* 0040c9bd: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c9bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c9c0: ret 4 */ FN_RET(0x0040c997); r_esp += 8; return;
}

void f_0040c9c3(void) /* FUN_0040c9c3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c9c3);
    /* 0040c9c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9c4: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c9c6: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c9c9: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0040c9cc: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040c9d0: mov dword ptr [ebp - 0x2c], 0x1c7 */ W32((u32)(r_ebp+0xffffffd4u), 0x1c7u);
    /* 0040c9d7: mov dword ptr [ebp - 0x28], 0xeb */ W32((u32)(r_ebp+0xffffffd8u), 0xebu);
    /* 0040c9de: mov dword ptr [ebp - 0x24], 0x143 */ W32((u32)(r_ebp+0xffffffdcu), 0x143u);
    /* 0040c9e5: mov dword ptr [ebp - 0x20], 0x131 */ W32((u32)(r_ebp+0xffffffe0u), 0x131u);
    /* 0040c9ec: mov dword ptr [ebp - 0x1c], 0xf3 */ W32((u32)(r_ebp+0xffffffe4u), 0xf3u);
    /* 0040c9f3: mov dword ptr [ebp - 0x18], 0x132 */ W32((u32)(r_ebp+0xffffffe8u), 0x132u);
    /* 0040c9fa: mov dword ptr [ebp - 0x14], 0x6e */ W32((u32)(r_ebp+0xffffffecu), 0x6eu);
    /* 0040ca01: mov dword ptr [ebp - 0x10], 0xea */ W32((u32)(r_ebp+0xfffffff0u), 0xeau);
    /* 0040ca08: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040ca0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca0c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040ca0f: call 0x40c997 */ r_esp -= 4; W32(r_esp, 0x40ca14u); f_0040c997();
    /* 0040ca14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca18: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040ca1b: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40ca20u); f_004259f1();
    /* 0040ca20: mov ecx, dword ptr [ebp + eax*8 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 0040ca24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca25: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040ca28: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40ca2du); f_004259f1();
    /* 0040ca2d: mov edx, dword ptr [ebp + eax*8 - 0x2c] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffd4u));
    /* 0040ca31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca32: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040ca35: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40ca3au); f_004259f1();
    /* 0040ca3a: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040ca40: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040ca44: call 0x428724 */ r_esp -= 4; W32(r_esp, 0x40ca49u); f_00428724();
    /* 0040ca49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca4b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca4d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040ca50: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40ca55u); f_004259f1();
    /* 0040ca55: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040ca5b: mov eax, dword ptr [edx + eax*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20u));
    /* 0040ca5f: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0040ca62: call 0x427a0a */ r_esp -= 4; W32(r_esp, 0x40ca67u); f_00427a0a();
    /* 0040ca67: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ca6a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040ca6b: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040ca6d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040ca6f: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040ca72: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040ca74: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040ca76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ca78: je 0x40ca7e */ if (fZ) goto L_0040ca7e;
L_0040ca7a:; BB(0x0040ca7a);
    /* 0040ca7a: mov byte ptr [ebp - 4], 0x32 */ W8((u32)(r_ebp+0xfffffffcu), 0x32u);
L_0040ca7e:; BB(0x0040ca7e);
    /* 0040ca7e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ca81: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040ca82: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040ca84: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040ca86: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040ca89: movsx ecx, byte ptr [ebp - 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffcu));
    /* 0040ca8d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040ca90: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0040ca93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca94: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040ca97: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40ca9cu); f_004259f1();
    /* 0040ca9c: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040caa2: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040caa6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0040caa9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0040caac: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0040caaf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040cab1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0040cab4: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x40cab7u); call_ind(t); }
    /* 0040cab7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040caba: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040cabd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040cac0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040cac3: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040cac6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040cac9: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0040cacc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cacd: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040cad0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040cad3: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x40cad8u); f_004267ae();
    /* 0040cad8: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cada: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cadb: ret  */ FN_RET(0x0040c9c3); r_esp += 4; return;
}

void f_0040cadc(void) /* FUN_0040cadc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040cadc);
    /* 0040cadc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cadd: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cadf: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040cae2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040cae5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cae8: call 0x425d41 */ r_esp -= 4; W32(r_esp, 0x40caedu); f_00425d41();
    /* 0040caed: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040caf1: je 0x40cb1c */ if (fZ) goto L_0040cb1c;
L_0040caf3:; BB(0x0040caf3);
    /* 0040caf3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040caf5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040caf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cafa: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40caffu); f_004259f1();
    /* 0040caff: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040cb05: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040cb09: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0040cb0c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040cb0f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040cb12: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040cb14: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040cb17: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x40cb1au); call_ind(t); }
    /* 0040cb1a: jmp 0x40cb66 */ goto L_0040cb66;
L_0040cb1c:; BB(0x0040cb1c);
    /* 0040cb1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cb1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cb20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cb23: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40cb28u); f_004259f1();
    /* 0040cb28: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040cb2e: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040cb32: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0040cb35: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040cb38: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040cb3b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040cb3d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040cb40: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x40cb43u); call_ind(t); }
    /* 0040cb43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cb46: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40cb4bu); f_004259f1();
    /* 0040cb4b: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040cb51: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040cb55: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0040cb58: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040cb5b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040cb5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040cb60: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040cb63: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x40cb66u); call_ind(t); }
L_0040cb66:; BB(0x0040cb66);
    /* 0040cb66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cb68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cb6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cb6d: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40cb72u); f_004259f1();
    /* 0040cb72: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040cb78: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040cb7c: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 0040cb7f: call 0x427a0a */ r_esp -= 4; W32(r_esp, 0x40cb84u); f_00427a0a();
    /* 0040cb84: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cb86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cb87: ret 4 */ FN_RET(0x0040cadc); r_esp += 8; return;
}

void f_0040cb8a(void) /* FUN_0040cb8a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040cb8a);
    /* 0040cb8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cb8b: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cb8d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040cb90: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040cb93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cb95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cb97: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0040cb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cb9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040cb9e: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40cba3u); f_004259f1();
    /* 0040cba3: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040cba9: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040cbad: call 0x42827c */ r_esp -= 4; W32(r_esp, 0x40cbb2u); f_0042827c();
    /* 0040cbb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040cbb4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cbb8: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0040cbbb: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cbbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cbbe: ret  */ FN_RET(0x0040cb8a); r_esp += 4; return;
}

void f_0040cbbf(void) /* FUN_0040cbbf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040cbbf);
    /* 0040cbbf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cbc0: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cbc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cbc3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040cbc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cbc9: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40cbceu); f_004259f1();
    /* 0040cbce: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cbd1: jne 0x40cbdd */ if (!fZ) goto L_0040cbdd;
L_0040cbd3:; BB(0x0040cbd3);
    /* 0040cbd3: mov eax, 1 */ r_eax = 0x1u;
    /* 0040cbd8: jmp 0x40cca0 */ goto L_0040cca0;
L_0040cbdd:; BB(0x0040cbdd);
    /* 0040cbdd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cbe0: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x40cbe5u); f_00425973();
    /* 0040cbe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cbe7: jne 0x40cbf0 */ if (!fZ) goto L_0040cbf0;
L_0040cbe9:; BB(0x0040cbe9);
    /* 0040cbe9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040cbeb: jmp 0x40cca0 */ goto L_0040cca0;
L_0040cbf0:; BB(0x0040cbf0);
    /* 0040cbf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cbf2: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040cbf8: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x40cbfdu); f_0040f7fb();
    /* 0040cbfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cbff: je 0x40cc14 */ if (fZ) goto L_0040cc14;
L_0040cc01:; BB(0x0040cc01);
    /* 0040cc01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cc04: call 0x425a05 */ r_esp -= 4; W32(r_esp, 0x40cc09u); f_00425a05();
    /* 0040cc09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cc0b: jne 0x40cc14 */ if (!fZ) goto L_0040cc14;
L_0040cc0d:; BB(0x0040cc0d);
    /* 0040cc0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040cc0f: jmp 0x40cca0 */ goto L_0040cca0;
L_0040cc14:; BB(0x0040cc14);
    /* 0040cc14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cc16: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040cc1c: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x40cc21u); f_0040f7fb();
    /* 0040cc21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cc23: je 0x40cc4d */ if (fZ) goto L_0040cc4d;
L_0040cc25:; BB(0x0040cc25);
    /* 0040cc25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cc28: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40cc2du); f_004259f1();
    /* 0040cc2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cc2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cc31: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40cc36u); f_004259f1();
    /* 0040cc36: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040cc3c: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040cc40: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x40cc45u); f_004280b4();
    /* 0040cc45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cc47: jne 0x40cc4d */ if (!fZ) goto L_0040cc4d;
L_0040cc49:; BB(0x0040cc49);
    /* 0040cc49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040cc4b: jmp 0x40cca0 */ goto L_0040cca0;
L_0040cc4d:; BB(0x0040cc4d);
    /* 0040cc4d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cc4f: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040cc55: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x40cc5au); f_0040f7fb();
    /* 0040cc5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cc5c: je 0x40cc74 */ if (fZ) goto L_0040cc74;
L_0040cc5e:; BB(0x0040cc5e);
    /* 0040cc5e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cc61: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 0040cc67: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40cc6cu); f_005dd4d2();
    /* 0040cc6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cc6e: jne 0x40cc74 */ if (!fZ) goto L_0040cc74;
L_0040cc70:; BB(0x0040cc70);
    /* 0040cc70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040cc72: jmp 0x40cca0 */ goto L_0040cca0;
L_0040cc74:; BB(0x0040cc74);
    /* 0040cc74: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cc76: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040cc7c: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x40cc81u); f_0040f7fb();
    /* 0040cc81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cc83: je 0x40cc9b */ if (fZ) goto L_0040cc9b;
L_0040cc85:; BB(0x0040cc85);
    /* 0040cc85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cc88: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040cc8e: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40cc93u); f_005dd4d2();
    /* 0040cc93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cc95: jne 0x40cc9b */ if (!fZ) goto L_0040cc9b;
L_0040cc97:; BB(0x0040cc97);
    /* 0040cc97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040cc99: jmp 0x40cca0 */ goto L_0040cca0;
L_0040cc9b:; BB(0x0040cc9b);
    /* 0040cc9b: mov eax, 1 */ r_eax = 0x1u;
L_0040cca0:; BB(0x0040cca0);
    /* 0040cca0: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cca2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cca3: ret  */ FN_RET(0x0040cbbf); r_esp += 4; return;
}

void f_0040cca4(void) /* FUN_0040cca4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040cca4);
    /* 0040cca4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cca5: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cca7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040ccaa: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040ccad: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0040ccb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ccb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ccb4: call 0x40c997 */ r_esp -= 4; W32(r_esp, 0x40ccb9u); f_0040c997();
    /* 0040ccb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ccbc: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0040ccbf: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x40ccc4u); f_00426819();
    /* 0040ccc4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040ccc6: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ccc9: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0040cccc: mov eax, edx */ r_eax = r_edx;
    /* 0040ccce: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ccd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ccd1: ret  */ FN_RET(0x0040cca4); r_esp += 4; return;
}

void f_0040ccd2(void) /* FUN_0040ccd2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040ccd2);
    /* 0040ccd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ccd3: mov ebp, esp */ r_ebp = r_esp;
    /* 0040ccd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ccd6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040ccd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ccdc: cmp dword ptr [eax + 0x130], 0 */ {  u32 a = R32((u32)(r_eax+0x130u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cce3: je 0x40ccf3 */ if (fZ) goto L_0040ccf3;
L_0040cce5:; BB(0x0040cce5);
    /* 0040cce5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cce8: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0040ccee: call 0x40ae56 */ r_esp -= 4; W32(r_esp, 0x40ccf3u); f_0040ae56();
L_0040ccf3:; BB(0x0040ccf3);
    /* 0040ccf3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ccf6: mov dword ptr [edx + 0x134], 1 */ W32((u32)(r_edx+0x134u), 0x1u);
    /* 0040cd00: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cd03: mov dword ptr [eax + 0x138], 0 */ W32((u32)(r_eax+0x138u), 0x0u);
    /* 0040cd0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cd10: mov dword ptr [ecx + 0x140], 0 */ W32((u32)(r_ecx+0x140u), 0x0u);
    /* 0040cd1a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cd1d: mov dword ptr [edx + 0x144], 0xffffffff */ W32((u32)(r_edx+0x144u), 0xffffffffu);
    /* 0040cd27: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cd29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cd2a: ret  */ FN_RET(0x0040ccd2); r_esp += 4; return;
}

void f_0040cd2b(void) /* FUN_0040cd2b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040cd2b);
    /* 0040cd2b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cd2c: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cd2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cd2f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040cd32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040cd34: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cd36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cd37: ret  */ FN_RET(0x0040cd2b); r_esp += 4; return;
}

void f_0040cd38(void) /* FUN_0040cd38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040cd38);
    /* 0040cd38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cd39: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cd3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cd3c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040cd3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040cd41: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cd43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cd44: ret  */ FN_RET(0x0040cd38); r_esp += 4; return;
}

void f_0040cd45(void) /* FUN_0040cd45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040cd45);
    /* 0040cd45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cd46: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cd48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cd49: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040cd4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cd4f: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040cd55: cmp dword ptr [ecx + 0x4c], 1 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cd59: jle 0x40cd7d */ if ((fZ||fS!=fO)) goto L_0040cd7d;
L_0040cd5b:; BB(0x0040cd5b);
    /* 0040cd5b: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040cd61: cmp dword ptr [edx + 0xa0], 0 */ {  u32 a = R32((u32)(r_edx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cd68: je 0x40cd79 */ if (fZ) goto L_0040cd79;
L_0040cd6a:; BB(0x0040cd6a);
    /* 0040cd6a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cd6d: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040cd73: cmp dword ptr [ecx + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cd77: je 0x40cd7d */ if (fZ) goto L_0040cd7d;
L_0040cd79:; BB(0x0040cd79);
    /* 0040cd79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040cd7b: jmp 0x40cdbb */ goto L_0040cdbb;
L_0040cd7d:; BB(0x0040cd7d);
    /* 0040cd7d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cd80: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 0040cd86: call 0x40bc0d */ r_esp -= 4; W32(r_esp, 0x40cd8bu); f_0040bc0d();
    /* 0040cd8b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cd8e: jle 0x40cd94 */ if ((fZ||fS!=fO)) goto L_0040cd94;
L_0040cd90:; BB(0x0040cd90);
    /* 0040cd90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040cd92: jmp 0x40cdbb */ goto L_0040cdbb;
L_0040cd94:; BB(0x0040cd94);
    /* 0040cd94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cd97: call 0x40cca4 */ r_esp -= 4; W32(r_esp, 0x40cd9cu); f_0040cca4();
    /* 0040cd9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cd9e: je 0x40cdb9 */ if (fZ) goto L_0040cdb9;
L_0040cda0:; BB(0x0040cda0);
    /* 0040cda0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cda3: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040cda9: call 0x40c332 */ r_esp -= 4; W32(r_esp, 0x40cdaeu); f_0040c332();
    /* 0040cdae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cdb0: je 0x40cdb9 */ if (fZ) goto L_0040cdb9;
L_0040cdb2:; BB(0x0040cdb2);
    /* 0040cdb2: mov eax, 1 */ r_eax = 0x1u;
    /* 0040cdb7: jmp 0x40cdbb */ goto L_0040cdbb;
L_0040cdb9:; BB(0x0040cdb9);
    /* 0040cdb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040cdbb:; BB(0x0040cdbb);
    /* 0040cdbb: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cdbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cdbe: ret  */ FN_RET(0x0040cd45); r_esp += 4; return;
}

void f_0040cdbf(void) /* FUN_0040cdbf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040cdbf);
    /* 0040cdbf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cdc0: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cdc2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040cdc5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040cdc8: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040cdcd: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0040cdd3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040cdd6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040cdd9: call 0x40cca4 */ r_esp -= 4; W32(r_esp, 0x40cddeu); f_0040cca4();
    /* 0040cdde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cde0: jne 0x40cde9 */ if (!fZ) goto L_0040cde9;
L_0040cde2:; BB(0x0040cde2);
    /* 0040cde2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040cde4: jmp 0x40ce7c */ goto L_0040ce7c;
L_0040cde9:; BB(0x0040cde9);
    /* 0040cde9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cded: je 0x40ce7a */ if (fZ) goto L_0040ce7a;
L_0040cdf3:; BB(0x0040cdf3);
    /* 0040cdf3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040cdf6: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 0040cdfc: call 0x40c421 */ r_esp -= 4; W32(r_esp, 0x40ce01u); f_0040c421();
    /* 0040ce01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ce03: je 0x40ce7a */ if (fZ) goto L_0040ce7a;
L_0040ce05:; BB(0x0040ce05);
    /* 0040ce05: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040ce0a: cmp dword ptr [eax + 0xa4], 0 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ce11: jne 0x40ce42 */ if (!fZ) goto L_0040ce42;
L_0040ce13:; BB(0x0040ce13);
    /* 0040ce13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce15: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ce18: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0040ce1e: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40ce23u); f_0040ad48();
    /* 0040ce23: mov ecx, eax */ r_ecx = r_eax;
    /* 0040ce25: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x40ce2au); f_0046ca47();
    /* 0040ce2a: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ce2d: jne 0x40ce42 */ if (!fZ) goto L_0040ce42;
L_0040ce2f:; BB(0x0040ce2f);
    /* 0040ce2f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ce32: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 0040ce38: cmp dword ptr [eax + 0x4c], 1 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ce3c: jle 0x40ce42 */ if ((fZ||fS!=fO)) goto L_0040ce42;
L_0040ce3e:; BB(0x0040ce3e);
    /* 0040ce3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040ce40: jmp 0x40ce7c */ goto L_0040ce7c;
L_0040ce42:; BB(0x0040ce42);
    /* 0040ce42: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ce46: jne 0x40ce5e */ if (!fZ) goto L_0040ce5e;
L_0040ce48:; BB(0x0040ce48);
    /* 0040ce48: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ce4b: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 0040ce51: cmp dword ptr [edx + 0x4c], 1 */ {  u32 a = R32((u32)(r_edx+0x4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ce55: jne 0x40ce5e */ if (!fZ) goto L_0040ce5e;
L_0040ce57:; BB(0x0040ce57);
    /* 0040ce57: mov eax, 1 */ r_eax = 0x1u;
    /* 0040ce5c: jmp 0x40ce7c */ goto L_0040ce7c;
L_0040ce5e:; BB(0x0040ce5e);
    /* 0040ce5e: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ce62: jne 0x40ce7a */ if (!fZ) goto L_0040ce7a;
L_0040ce64:; BB(0x0040ce64);
    /* 0040ce64: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ce67: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040ce6d: cmp dword ptr [ecx + 0x4c], 4 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ce71: jge 0x40ce7a */ if ((fS==fO)) goto L_0040ce7a;
L_0040ce73:; BB(0x0040ce73);
    /* 0040ce73: mov eax, 1 */ r_eax = 0x1u;
    /* 0040ce78: jmp 0x40ce7c */ goto L_0040ce7c;
L_0040ce7a:; BB(0x0040ce7a);
    /* 0040ce7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040ce7c:; BB(0x0040ce7c);
    /* 0040ce7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ce7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ce7f: ret  */ FN_RET(0x0040cdbf); r_esp += 4; return;
}

void f_0040ce80(void) /* FUN_0040ce80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040ce80);
    /* 0040ce80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce81: mov ebp, esp */ r_ebp = r_esp;
    /* 0040ce83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040ce87: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040ce8c: cmp dword ptr [eax + 0x94], 0 */ {  u32 a = R32((u32)(r_eax+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ce93: je 0x40cebe */ if (fZ) goto L_0040cebe;
L_0040ce95:; BB(0x0040ce95);
    /* 0040ce95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ce98: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 0040ce9e: cmp dword ptr [edx + 0x4c], 1 */ {  u32 a = R32((u32)(r_edx+0x4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cea2: jne 0x40cebe */ if (!fZ) goto L_0040cebe;
L_0040cea4:; BB(0x0040cea4);
    /* 0040cea4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cea7: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040cead: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x40ceb2u); f_005dd4d2();
    /* 0040ceb2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ceb5: jne 0x40cebe */ if (!fZ) goto L_0040cebe;
L_0040ceb7:; BB(0x0040ceb7);
    /* 0040ceb7: mov eax, 1 */ r_eax = 0x1u;
    /* 0040cebc: jmp 0x40cec0 */ goto L_0040cec0;
L_0040cebe:; BB(0x0040cebe);
    /* 0040cebe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040cec0:; BB(0x0040cec0);
    /* 0040cec0: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cec2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cec3: ret  */ FN_RET(0x0040ce80); r_esp += 4; return;
}

void f_0040cec4(void) /* FUN_0040cec4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040cec4);
    /* 0040cec4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cec5: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cec7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040ceca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040cecb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040cece: mov word ptr [ebp - 8], 0xffff */ W16((u32)(r_ebp+0xfffffff8u), 0xffffu);
    /* 0040ced4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040cedb: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0040cee1: jmp 0x40ceef */ goto L_0040ceef;
L_0040cee3:; BB(0x0040cee3);
    /* 0040cee3: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0040cee7: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0040ceeb: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_0040ceef:; BB(0x0040ceef);
    /* 0040ceef: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0040cef3: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cef6: jge 0x40cf4e */ if ((fS==fO)) goto L_0040cf4e;
L_0040cef8:; BB(0x0040cef8);
    /* 0040cef8: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0040cefc: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040cf01: cmp dword ptr [eax + edx*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cf06: je 0x40cf4c */ if (fZ) goto L_0040cf4c;
L_0040cf08:; BB(0x0040cf08);
    /* 0040cf08: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0040cf0c: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040cf12: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0040cf16: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x40cf1bu); f_0040c983();
    /* 0040cf1b: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cf1e: jle 0x40cf4c */ if ((fZ||fS!=fO)) goto L_0040cf4c;
L_0040cf20:; BB(0x0040cf20);
    /* 0040cf20: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0040cf24: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040cf2a: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0040cf2e: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x40cf33u); f_0040c983();
    /* 0040cf33: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040cf36: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0040cf3a: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040cf3f: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0040cf43: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40cf48u); f_004259f1();
    /* 0040cf48: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_0040cf4c:; BB(0x0040cf4c);
    /* 0040cf4c: jmp 0x40cee3 */ goto L_0040cee3;
L_0040cf4e:; BB(0x0040cf4e);
    /* 0040cf4e: movsx esi, word ptr [ebp - 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0040cf52: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040cf55: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40cf5au); f_004259f1();
    /* 0040cf5a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cf5c: jne 0x40cf71 */ if (!fZ) goto L_0040cf71;
L_0040cf5e:; BB(0x0040cf5e);
    /* 0040cf5e: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040cf64: cmp dword ptr [ecx + 0x60], 1 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cf68: je 0x40cf71 */ if (fZ) goto L_0040cf71;
L_0040cf6a:; BB(0x0040cf6a);
    /* 0040cf6a: mov eax, 1 */ r_eax = 0x1u;
    /* 0040cf6f: jmp 0x40cf73 */ goto L_0040cf73;
L_0040cf71:; BB(0x0040cf71);
    /* 0040cf71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040cf73:; BB(0x0040cf73);
    /* 0040cf73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040cf74: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cf76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cf77: ret  */ FN_RET(0x0040cec4); r_esp += 4; return;
}

void f_0040cf78(void) /* FUN_0040cf78 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040cf78);
    /* 0040cf78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf79: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cf7b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040cf7e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf7f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040cf82: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 0040cf88: mov dword ptr [ebp - 0xc], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff4u), 0x3b9aca00u);
    /* 0040cf8f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040cf92: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x40cf97u); f_0040c983();
    /* 0040cf97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cf99: jne 0x40cfa2 */ if (!fZ) goto L_0040cfa2;
L_0040cf9b:; BB(0x0040cf9b);
    /* 0040cf9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040cf9d: jmp 0x40d03a */ goto L_0040d03a;
L_0040cfa2:; BB(0x0040cfa2);
    /* 0040cfa2: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040cfa8: jmp 0x40cfb6 */ goto L_0040cfb6;
L_0040cfaa:; BB(0x0040cfaa);
    /* 0040cfaa: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0040cfae: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0040cfb2: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_0040cfb6:; BB(0x0040cfb6);
    /* 0040cfb6: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0040cfba: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cfbd: jge 0x40d015 */ if ((fS==fO)) goto L_0040d015;
L_0040cfbf:; BB(0x0040cfbf);
    /* 0040cfbf: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0040cfc3: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040cfc8: cmp dword ptr [eax + edx*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cfcd: je 0x40d013 */ if (fZ) goto L_0040d013;
L_0040cfcf:; BB(0x0040cfcf);
    /* 0040cfcf: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0040cfd3: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040cfd9: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0040cfdd: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x40cfe2u); f_0040c983();
    /* 0040cfe2: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cfe5: jge 0x40d013 */ if ((fS==fO)) goto L_0040d013;
L_0040cfe7:; BB(0x0040cfe7);
    /* 0040cfe7: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0040cfeb: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040cff1: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0040cff5: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x40cffau); f_0040c983();
    /* 0040cffa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040cffd: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0040d001: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040d006: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0040d00a: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40d00fu); f_004259f1();
    /* 0040d00f: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0040d013:; BB(0x0040d013);
    /* 0040d013: jmp 0x40cfaa */ goto L_0040cfaa;
L_0040d015:; BB(0x0040d015);
    /* 0040d015: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040d019: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d01c: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40d021u); f_004259f1();
    /* 0040d021: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d023: jne 0x40d038 */ if (!fZ) goto L_0040d038;
L_0040d025:; BB(0x0040d025);
    /* 0040d025: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d02b: cmp dword ptr [ecx + 0x60], 1 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d02f: je 0x40d038 */ if (fZ) goto L_0040d038;
L_0040d031:; BB(0x0040d031);
    /* 0040d031: mov eax, 1 */ r_eax = 0x1u;
    /* 0040d036: jmp 0x40d03a */ goto L_0040d03a;
L_0040d038:; BB(0x0040d038);
    /* 0040d038: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040d03a:; BB(0x0040d03a);
    /* 0040d03a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040d03b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d03d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d03e: ret  */ FN_RET(0x0040cf78); r_esp += 4; return;
}

void f_0040d03f(void) /* FUN_0040d03f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d03f);
    /* 0040d03f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d040: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d042: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d043: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040d046: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040d04c: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x40d051u); f_00448ca3();
    /* 0040d051: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d053: je 0x40d072 */ if (fZ) goto L_0040d072;
L_0040d055:; BB(0x0040d055);
    /* 0040d055: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040d05b: call 0x448e5d */ r_esp -= 4; W32(r_esp, 0x40d060u); f_00448e5d();
    /* 0040d060: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d066: cmp dword ptr [ecx + 0x60], eax */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d069: jl 0x40d072 */ if ((fS!=fO)) goto L_0040d072;
L_0040d06b:; BB(0x0040d06b);
    /* 0040d06b: mov eax, 1 */ r_eax = 0x1u;
    /* 0040d070: jmp 0x40d074 */ goto L_0040d074;
L_0040d072:; BB(0x0040d072);
    /* 0040d072: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040d074:; BB(0x0040d074);
    /* 0040d074: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d076: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d077: ret  */ FN_RET(0x0040d03f); r_esp += 4; return;
}

void f_0040d078(void) /* FUN_0040d078 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d078);
    /* 0040d078: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d079: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d07b: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d07e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040d081: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040d086: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d08a: je 0x40d102 */ if (fZ) goto L_0040d102;
L_0040d08c:; BB(0x0040d08c);
    /* 0040d08c: push 0x13a3 */ { u32 v = 0x13a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d091: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d097: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0040d09a: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40d09fu); f_005ea0c3();
    /* 0040d09f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d0a1: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040d0a7: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0040d0aa: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40d0afu); f_005ea1cf();
    /* 0040d0af: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040d0b4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0040d0b7: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040d0bd: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0040d0c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040d0c2: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x40d0c5u); call_ind(t); }
    /* 0040d0c5: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d0c7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40d0ccu); f_0048ab58();
    /* 0040d0cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d0cf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040d0d2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d0d6: je 0x40d0e9 */ if (fZ) goto L_0040d0e9;
L_0040d0d8:; BB(0x0040d0d8);
    /* 0040d0d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040d0db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d0dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d0df: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x40d0e4u); f_005d7b34();
    /* 0040d0e4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040d0e7: jmp 0x40d0f0 */ goto L_0040d0f0;
L_0040d0e9:; BB(0x0040d0e9);
    /* 0040d0e9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0040d0f0:; BB(0x0040d0f0);
    /* 0040d0f0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d0f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d0f4: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040d0fa: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0040d0fd: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x40d102u); f_005e4060();
L_0040d102:; BB(0x0040d102);
    /* 0040d102: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040d107: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d10b: je 0x40d181 */ if (fZ) goto L_0040d181;
L_0040d10d:; BB(0x0040d10d);
    /* 0040d10d: push 0x13a2 */ { u32 v = 0x13a2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d112: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d118: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0040d11b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40d120u); f_005ea0c3();
    /* 0040d120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d122: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040d128: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0040d12b: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40d130u); f_005ea1cf();
    /* 0040d130: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040d135: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0040d138: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040d13e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0040d141: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040d143: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x40d146u); call_ind(t); }
    /* 0040d146: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d148: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40d14du); f_0048ab58();
    /* 0040d14d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d150: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040d153: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d157: je 0x40d168 */ if (fZ) goto L_0040d168;
L_0040d159:; BB(0x0040d159);
    /* 0040d159: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d15b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d15e: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x40d163u); f_005d7b34();
    /* 0040d163: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040d166: jmp 0x40d16f */ goto L_0040d16f;
L_0040d168:; BB(0x0040d168);
    /* 0040d168: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0040d16f:; BB(0x0040d16f);
    /* 0040d16f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d172: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d173: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d179: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0040d17c: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x40d181u); f_005e4060();
L_0040d181:; BB(0x0040d181);
    /* 0040d181: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d183: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d184: ret 4 */ FN_RET(0x0040d078); r_esp += 8; return;
}

void f_0040d187(void) /* FUN_0040d187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d187);
    /* 0040d187: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d188: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d18a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d18d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040d190: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040d195: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d199: je 0x40d1fb */ if (fZ) goto L_0040d1fb;
L_0040d19b:; BB(0x0040d19b);
    /* 0040d19b: push 0x13a5 */ { u32 v = 0x13a5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d1a0: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d1a6: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0040d1a9: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40d1aeu); f_005ea0c3();
    /* 0040d1ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d1b0: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040d1b6: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0040d1b9: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40d1beu); f_005ea1cf();
    /* 0040d1be: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d1c0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40d1c5u); f_0048ab58();
    /* 0040d1c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d1c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040d1cb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d1cf: je 0x40d1e2 */ if (fZ) goto L_0040d1e2;
L_0040d1d1:; BB(0x0040d1d1);
    /* 0040d1d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040d1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d1d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d1d8: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x40d1ddu); f_005d7b34();
    /* 0040d1dd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040d1e0: jmp 0x40d1e9 */ goto L_0040d1e9;
L_0040d1e2:; BB(0x0040d1e2);
    /* 0040d1e2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0040d1e9:; BB(0x0040d1e9);
    /* 0040d1e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d1ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d1ed: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040d1f3: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0040d1f6: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x40d1fbu); f_005e4060();
L_0040d1fb:; BB(0x0040d1fb);
    /* 0040d1fb: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040d200: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d204: je 0x40d264 */ if (fZ) goto L_0040d264;
L_0040d206:; BB(0x0040d206);
    /* 0040d206: push 0x13a4 */ { u32 v = 0x13a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d20b: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d211: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0040d214: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40d219u); f_005ea0c3();
    /* 0040d219: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d21b: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040d221: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0040d224: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40d229u); f_005ea1cf();
    /* 0040d229: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d22b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40d230u); f_0048ab58();
    /* 0040d230: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d233: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040d236: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d23a: je 0x40d24b */ if (fZ) goto L_0040d24b;
L_0040d23c:; BB(0x0040d23c);
    /* 0040d23c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d23e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d241: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x40d246u); f_005d7b34();
    /* 0040d246: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040d249: jmp 0x40d252 */ goto L_0040d252;
L_0040d24b:; BB(0x0040d24b);
    /* 0040d24b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0040d252:; BB(0x0040d252);
    /* 0040d252: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d255: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d256: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d25c: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0040d25f: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x40d264u); f_005e4060();
L_0040d264:; BB(0x0040d264);
    /* 0040d264: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d266: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d267: ret 4 */ FN_RET(0x0040d187); r_esp += 8; return;
}

void f_0040d26a(void) /* FUN_0040d26a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d26a);
    /* 0040d26a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d26b: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d26d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d270: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040d273: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040d278: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d27c: je 0x40d2de */ if (fZ) goto L_0040d2de;
L_0040d27e:; BB(0x0040d27e);
    /* 0040d27e: push 0x13ad */ { u32 v = 0x13adu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d283: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d289: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0040d28c: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40d291u); f_005ea0c3();
    /* 0040d291: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d293: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040d299: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0040d29c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40d2a1u); f_005ea1cf();
    /* 0040d2a1: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d2a3: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40d2a8u); f_0048ab58();
    /* 0040d2a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d2ab: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040d2ae: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d2b2: je 0x40d2c5 */ if (fZ) goto L_0040d2c5;
L_0040d2b4:; BB(0x0040d2b4);
    /* 0040d2b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040d2b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d2b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d2bb: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x40d2c0u); f_005d7b34();
    /* 0040d2c0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040d2c3: jmp 0x40d2cc */ goto L_0040d2cc;
L_0040d2c5:; BB(0x0040d2c5);
    /* 0040d2c5: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0040d2cc:; BB(0x0040d2cc);
    /* 0040d2cc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d2cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d2d0: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040d2d6: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0040d2d9: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x40d2deu); f_005e4060();
L_0040d2de:; BB(0x0040d2de);
    /* 0040d2de: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040d2e3: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d2e7: je 0x40d347 */ if (fZ) goto L_0040d347;
L_0040d2e9:; BB(0x0040d2e9);
    /* 0040d2e9: push 0x13ac */ { u32 v = 0x13acu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d2ee: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d2f4: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0040d2f7: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40d2fcu); f_005ea0c3();
    /* 0040d2fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d2fe: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040d304: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0040d307: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40d30cu); f_005ea1cf();
    /* 0040d30c: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d30e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40d313u); f_0048ab58();
    /* 0040d313: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d316: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040d319: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d31d: je 0x40d32e */ if (fZ) goto L_0040d32e;
L_0040d31f:; BB(0x0040d31f);
    /* 0040d31f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d321: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d324: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x40d329u); f_005d7b34();
    /* 0040d329: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040d32c: jmp 0x40d335 */ goto L_0040d335;
L_0040d32e:; BB(0x0040d32e);
    /* 0040d32e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0040d335:; BB(0x0040d335);
    /* 0040d335: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d338: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d339: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d33f: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0040d342: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x40d347u); f_005e4060();
L_0040d347:; BB(0x0040d347);
    /* 0040d347: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d349: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d34a: ret 4 */ FN_RET(0x0040d26a); r_esp += 8; return;
}

void f_0040d34d(void) /* FUN_0040d34d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d34d);
    /* 0040d34d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d34e: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d350: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d353: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040d356: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d35c: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40d361u); f_0040f81e();
    /* 0040d361: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040d364: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0040d36b: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0040d36f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0040d372: cmp dword ptr [ebp - 0x18], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040d376: ja 0x40d50c */ if ((!fC&&!fZ)) goto L_0040d50c;
L_0040d37c:; BB(0x0040d37c);
    /* 0040d37c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d37f: jmp dword ptr [ecx*4 + 0x40d561] */ { u32 t = R32((u32)(r_ecx*4+0x40d561u)); switch (t) { case 0x40d386u: goto L_0040d386; case 0x40d392u: goto L_0040d392; case 0x40d416u: goto L_0040d416; case 0x40d439u: goto L_0040d439; case 0x40d4bdu: goto L_0040d4bd; case 0x40d4e6u: goto L_0040d4e6; case 0x40d505u: goto L_0040d505; default: UNSUP(0x0040d37f, "jump table entry is not a known target"); } }
L_0040d386:; BB(0x0040d386);
    /* 0040d386: mov dword ptr [ebp - 8], 0xcb52 */ W32((u32)(r_ebp+0xfffffff8u), 0xcb52u);
    /* 0040d38d: jmp 0x40d50c */ goto L_0040d50c;
L_0040d392:; BB(0x0040d392);
    /* 0040d392: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d396: jne 0x40d39d */ if (!fZ) goto L_0040d39d;
L_0040d398:; BB(0x0040d398);
    /* 0040d398: jmp 0x40d50c */ goto L_0040d50c;
L_0040d39d:; BB(0x0040d39d);
    /* 0040d39d: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040d3a3: cmp dword ptr [edx + 0xb4], 0 */ {  u32 a = R32((u32)(r_edx+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d3aa: je 0x40d411 */ if (fZ) goto L_0040d411;
L_0040d3ac:; BB(0x0040d3ac);
    /* 0040d3ac: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040d3b1: cmp dword ptr [eax + 0x80], 1 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d3b8: jg 0x40d3c7 */ if ((!fZ&&fS==fO)) goto L_0040d3c7;
L_0040d3ba:; BB(0x0040d3ba);
    /* 0040d3ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d3bd: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40d3c2u); f_004259f1();
    /* 0040d3c2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d3c5: jne 0x40d411 */ if (!fZ) goto L_0040d411;
L_0040d3c7:; BB(0x0040d3c7);
    /* 0040d3c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d3ca: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0040d3d0: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x40d3d5u); f_0040bff5();
    /* 0040d3d5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040d3d8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d3db: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 0040d3e1: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x40d3e6u); f_0040c107();
    /* 0040d3e6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040d3e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d3ec: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d3ef: je 0x40d405 */ if (fZ) goto L_0040d405;
L_0040d3f1:; BB(0x0040d3f1);
    /* 0040d3f1: cmp dword ptr [ebp - 0xc], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d3f5: jg 0x40d405 */ if ((!fZ&&fS==fO)) goto L_0040d405;
L_0040d3f7:; BB(0x0040d3f7);
    /* 0040d3f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d3fa: add ecx, 0xcb31 */ {  u32 a = r_ecx; u32 b = 0xcb31u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d400: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040d403: jmp 0x40d411 */ goto L_0040d411;
L_0040d405:; BB(0x0040d405);
    /* 0040d405: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040d408: add edx, 0xcb1d */ {  u32 a = r_edx; u32 b = 0xcb1du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d40e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0040d411:; BB(0x0040d411);
    /* 0040d411: jmp 0x40d50c */ goto L_0040d50c;
L_0040d416:; BB(0x0040d416);
    /* 0040d416: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040d41b: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0040d41e: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0040d424: call 0x40c263 */ r_esp -= 4; W32(r_esp, 0x40d429u); f_0040c263();
    /* 0040d429: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d42b: je 0x40d434 */ if (fZ) goto L_0040d434;
L_0040d42d:; BB(0x0040d42d);
    /* 0040d42d: mov dword ptr [ebp - 8], 0xcbb6 */ W32((u32)(r_ebp+0xfffffff8u), 0xcbb6u);
L_0040d434:; BB(0x0040d434);
    /* 0040d434: jmp 0x40d50c */ goto L_0040d50c;
L_0040d439:; BB(0x0040d439);
    /* 0040d439: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040d43f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0040d442: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040d448: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x40d44du); f_0040c28d();
    /* 0040d44d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d44f: jne 0x40d4bb */ if (!fZ) goto L_0040d4bb;
L_0040d451:; BB(0x0040d451);
    /* 0040d451: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d454: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 0040d45a: cmp dword ptr [edx + 0x4c], 1 */ {  u32 a = R32((u32)(r_edx+0x4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d45e: jne 0x40d4bb */ if (!fZ) goto L_0040d4bb;
L_0040d460:; BB(0x0040d460);
    /* 0040d460: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d463: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040d469: call 0x40bc65 */ r_esp -= 4; W32(r_esp, 0x40d46eu); f_0040bc65();
    /* 0040d46e: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0040d471: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d474: jne 0x40d47f */ if (!fZ) goto L_0040d47f;
L_0040d476:; BB(0x0040d476);
    /* 0040d476: mov dword ptr [ebp - 8], 0xcc01 */ W32((u32)(r_ebp+0xfffffff8u), 0xcc01u);
    /* 0040d47d: jmp 0x40d4bb */ goto L_0040d4bb;
L_0040d47f:; BB(0x0040d47f);
    /* 0040d47f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d482: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 0040d488: call 0x40bc65 */ r_esp -= 4; W32(r_esp, 0x40d48du); f_0040bc65();
    /* 0040d48d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0040d490: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d493: jne 0x40d49e */ if (!fZ) goto L_0040d49e;
L_0040d495:; BB(0x0040d495);
    /* 0040d495: mov dword ptr [ebp - 8], 0xcbcf */ W32((u32)(r_ebp+0xfffffff8u), 0xcbcfu);
    /* 0040d49c: jmp 0x40d4bb */ goto L_0040d4bb;
L_0040d49e:; BB(0x0040d49e);
    /* 0040d49e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d4a1: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0040d4a7: call 0x40bc65 */ r_esp -= 4; W32(r_esp, 0x40d4acu); f_0040bc65();
    /* 0040d4ac: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0040d4af: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d4b2: jne 0x40d4bb */ if (!fZ) goto L_0040d4bb;
L_0040d4b4:; BB(0x0040d4b4);
    /* 0040d4b4: mov dword ptr [ebp - 8], 0xcb6b */ W32((u32)(r_ebp+0xfffffff8u), 0xcb6bu);
L_0040d4bb:; BB(0x0040d4bb);
    /* 0040d4bb: jmp 0x40d50c */ goto L_0040d50c;
L_0040d4bd:; BB(0x0040d4bd);
    /* 0040d4bd: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040d4c2: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0040d4c5: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0040d4cb: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x40d4d0u); f_0040c28d();
    /* 0040d4d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d4d2: je 0x40d4dd */ if (fZ) goto L_0040d4dd;
L_0040d4d4:; BB(0x0040d4d4);
    /* 0040d4d4: mov dword ptr [ebp - 8], 0xcbe8 */ W32((u32)(r_ebp+0xfffffff8u), 0xcbe8u);
    /* 0040d4db: jmp 0x40d4e4 */ goto L_0040d4e4;
L_0040d4dd:; BB(0x0040d4dd);
    /* 0040d4dd: mov dword ptr [ebp - 8], 0xcb84 */ W32((u32)(r_ebp+0xfffffff8u), 0xcb84u);
L_0040d4e4:; BB(0x0040d4e4);
    /* 0040d4e4: jmp 0x40d50c */ goto L_0040d50c;
L_0040d4e6:; BB(0x0040d4e6);
    /* 0040d4e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d4e9: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40d4eeu); f_004259f1();
    /* 0040d4ee: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d4f1: jne 0x40d4fc */ if (!fZ) goto L_0040d4fc;
L_0040d4f3:; BB(0x0040d4f3);
    /* 0040d4f3: mov dword ptr [ebp - 8], 0xcb9d */ W32((u32)(r_ebp+0xfffffff8u), 0xcb9du);
    /* 0040d4fa: jmp 0x40d503 */ goto L_0040d503;
L_0040d4fc:; BB(0x0040d4fc);
    /* 0040d4fc: mov dword ptr [ebp - 8], 0xcc65 */ W32((u32)(r_ebp+0xfffffff8u), 0xcc65u);
L_0040d503:; BB(0x0040d503);
    /* 0040d503: jmp 0x40d50c */ goto L_0040d50c;
L_0040d505:; BB(0x0040d505);
    /* 0040d505: mov dword ptr [ebp - 8], 0xcc1a */ W32((u32)(r_ebp+0xfffffff8u), 0xcc1au);
L_0040d50c:; BB(0x0040d50c);
    /* 0040d50c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d50f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d510: push 0x64cc44 */ { u32 v = 0x64cc44u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d515: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x40d51au); f_0060fc40();
    /* 0040d51a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d51d: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d521: je 0x40d548 */ if (fZ) goto L_0040d548;
L_0040d523:; BB(0x0040d523);
    /* 0040d523: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0040d528: cmp dword ptr [eax + 0xb0], 0 */ {  u32 a = R32((u32)(r_eax+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d52f: je 0x40d548 */ if (fZ) goto L_0040d548;
L_0040d531:; BB(0x0040d531);
    /* 0040d531: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d533: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040d536: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d537: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d53a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d53b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d53e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040d540: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d543: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x40d546u); call_ind(t); }
    /* 0040d546: jmp 0x40d55b */ goto L_0040d55b;
L_0040d548:; BB(0x0040d548);
    /* 0040d548: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d54c: je 0x40d55b */ if (fZ) goto L_0040d55b;
L_0040d54e:; BB(0x0040d54e);
    /* 0040d54e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d550: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040d553: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040d555: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040d558: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x40d55bu); call_ind(t); }
L_0040d55b:; BB(0x0040d55b);
    /* 0040d55b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d55d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d55e: ret 8 */ FN_RET(0x0040d34d); r_esp += 12; return;
}

void f_0040d57d(void) /* FUN_0040d57d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d57d);
    /* 0040d57d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d57e: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d580: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d583: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040d586: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040d589: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d58a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d58d: call 0x426b30 */ r_esp -= 4; W32(r_esp, 0x40d592u); f_00426b30();
    /* 0040d592: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d595: mov dword ptr [ecx], 0x63389c */ W32((u32)(r_ecx), 0x63389cu);
    /* 0040d59b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d59e: mov dword ptr [edx + 0x160], 0 */ W32((u32)(r_edx+0x160u), 0x0u);
    /* 0040d5a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040d5af: jmp 0x40d5ba */ goto L_0040d5ba;
L_0040d5b1:; BB(0x0040d5b1);
    /* 0040d5b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d5b4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040d5b7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040d5ba:; BB(0x0040d5ba);
    /* 0040d5ba: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d5be: jge 0x40d5d3 */ if ((fS==fO)) goto L_0040d5d3;
L_0040d5c0:; BB(0x0040d5c0);
    /* 0040d5c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d5c3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d5c6: mov dword ptr [edx + ecx*4 + 0xe8], 0 */ W32((u32)(r_edx+r_ecx*4+0xe8u), 0x0u);
    /* 0040d5d1: jmp 0x40d5b1 */ goto L_0040d5b1;
L_0040d5d3:; BB(0x0040d5d3);
    /* 0040d5d3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d5d6: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d5d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d5d9: ret 4 */ FN_RET(0x0040d57d); r_esp += 8; return;
}

void f_0040d5dc(void) /* FUN_0040d5dc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d5dc);
    /* 0040d5dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d5dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d5df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d5e0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040d5e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d5e6: mov dword ptr [eax], 0x63389c */ W32((u32)(r_eax), 0x63389cu);
    /* 0040d5ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d5ef: call 0x40db33 */ r_esp -= 4; W32(r_esp, 0x40d5f4u); f_0040db33();
    /* 0040d5f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d5f7: call 0x426c3d */ r_esp -= 4; W32(r_esp, 0x40d5fcu); f_00426c3d();
    /* 0040d5fc: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d5fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d5ff: ret  */ FN_RET(0x0040d5dc); r_esp += 4; return;
}

void f_0040d600(void) /* FUN_0040d600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d600);
    /* 0040d600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d601: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d603: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d606: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040d609: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040d60c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d60d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040d610: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d611: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d614: call 0x426d33 */ r_esp -= 4; W32(r_esp, 0x40d619u); f_00426d33();
    /* 0040d619: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d61b: je 0x40d624 */ if (fZ) goto L_0040d624;
L_0040d61d:; BB(0x0040d61d);
    /* 0040d61d: mov eax, 1 */ r_eax = 0x1u;
    /* 0040d622: jmp 0x40d688 */ goto L_0040d688;
L_0040d624:; BB(0x0040d624);
    /* 0040d624: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040d62b: jmp 0x40d636 */ goto L_0040d636;
L_0040d62d:; BB(0x0040d62d);
    /* 0040d62d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d630: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d633: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0040d636:; BB(0x0040d636);
    /* 0040d636: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d63a: jge 0x40d686 */ if ((fS==fO)) goto L_0040d686;
L_0040d63c:; BB(0x0040d63c);
    /* 0040d63c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d63f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d642: cmp dword ptr [ecx + eax*4 + 0xe8], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d64a: je 0x40d680 */ if (fZ) goto L_0040d680;
L_0040d64c:; BB(0x0040d64c);
    /* 0040d64c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040d64f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d650: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040d653: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d654: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d657: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d65a: mov ecx, dword ptr [edx + ecx*4 + 0xe8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xe8u));
    /* 0040d661: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d664: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d667: mov eax, dword ptr [edx + eax*4 + 0xe8] */ r_eax = R32((u32)(r_edx+r_eax*4+0xe8u));
    /* 0040d66e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040d670: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x40d673u); call_ind(t); }
    /* 0040d673: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d675: je 0x40d67e */ if (fZ) goto L_0040d67e;
L_0040d677:; BB(0x0040d677);
    /* 0040d677: mov eax, 1 */ r_eax = 0x1u;
    /* 0040d67c: jmp 0x40d688 */ goto L_0040d688;
L_0040d67e:; BB(0x0040d67e);
    /* 0040d67e: jmp 0x40d684 */ goto L_0040d684;
L_0040d680:; BB(0x0040d680);
    /* 0040d680: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040d682: jmp 0x40d688 */ goto L_0040d688;
L_0040d684:; BB(0x0040d684);
    /* 0040d684: jmp 0x40d62d */ goto L_0040d62d;
L_0040d686:; BB(0x0040d686);
    /* 0040d686: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040d688:; BB(0x0040d688);
    /* 0040d688: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d68a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d68b: ret 8 */ FN_RET(0x0040d600); r_esp += 12; return;
}

void f_0040d68e(void) /* FUN_0040d68e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d68e);
    /* 0040d68e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d68f: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d691: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d694: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040d697: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040d69e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040d6a5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d6a8: cmp dword ptr [eax + 0x160], 0 */ {  u32 a = R32((u32)(r_eax+0x160u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d6af: je 0x40d6c4 */ if (fZ) goto L_0040d6c4;
L_0040d6b1:; BB(0x0040d6b1);
    /* 0040d6b1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d6b4: mov eax, dword ptr [ecx + 0xc4] */ r_eax = R32((u32)(r_ecx+0xc4u));
    /* 0040d6ba: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040d6bb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040d6bd: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040d6bf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040d6c2: jmp 0x40d6d0 */ goto L_0040d6d0;
L_0040d6c4:; BB(0x0040d6c4);
    /* 0040d6c4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d6c7: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0040d6cd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0040d6d0:; BB(0x0040d6d0);
    /* 0040d6d0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d6d3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040d6d6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040d6d9: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040d6dc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d6df: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 0040d6e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040d6e8: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0040d6eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d6ec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d6ef: call 0x427392 */ r_esp -= 4; W32(r_esp, 0x40d6f4u); f_00427392();
    /* 0040d6f4: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d6f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d6f7: ret 4 */ FN_RET(0x0040d68e); r_esp += 8; return;
}

void f_0040d6fa(void) /* FUN_0040d6fa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d6fa);
    /* 0040d6fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d6fb: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d6fd: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d700: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040d703: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d709: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40d70eu); f_0040f81e();
    /* 0040d70e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d710: je 0x40da29 */ if (fZ) goto L_0040da29;
L_0040d716:; BB(0x0040d716);
    /* 0040d716: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d71c: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40d721u); f_0040f81e();
    /* 0040d721: cmp dword ptr [eax + 0x144], 2 */ {  u32 a = R32((u32)(r_eax+0x144u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d728: jne 0x40da29 */ if (!fZ) goto L_0040da29;
L_0040d72e:; BB(0x0040d72e);
    /* 0040d72e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040d735: jmp 0x40d740 */ goto L_0040d740;
L_0040d737:; BB(0x0040d737);
    /* 0040d737: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d73a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040d73d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0040d740:; BB(0x0040d740);
    /* 0040d740: cmp dword ptr [ebp - 8], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d744: jge 0x40d7c3 */ if ((fS==fO)) goto L_0040d7c3;
L_0040d746:; BB(0x0040d746);
    /* 0040d746: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d749: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d74c: cmp dword ptr [edx + ecx*4 + 0xe8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d754: je 0x40d7bc */ if (fZ) goto L_0040d7bc;
L_0040d756:; BB(0x0040d756);
    /* 0040d756: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d759: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d75c: mov ecx, dword ptr [ecx + eax*4 + 0xe8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xe8u));
    /* 0040d763: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d766: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d769: mov edx, dword ptr [eax + edx*4 + 0xe8] */ r_edx = R32((u32)(r_eax+r_edx*4+0xe8u));
    /* 0040d770: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040d772: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x40d775u); call_ind(t); }
    /* 0040d775: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d778: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d77b: mov eax, dword ptr [edx + ecx*4 + 0xe8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xe8u));
    /* 0040d782: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040d785: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d788: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040d78b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d78f: je 0x40d7a2 */ if (fZ) goto L_0040d7a2;
L_0040d791:; BB(0x0040d791);
    /* 0040d791: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d793: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040d796: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040d798: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040d79b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x40d79du); call_ind(t); }
    /* 0040d79d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040d7a0: jmp 0x40d7a9 */ goto L_0040d7a9;
L_0040d7a2:; BB(0x0040d7a2);
    /* 0040d7a2: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0040d7a9:; BB(0x0040d7a9);
    /* 0040d7a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d7ac: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d7af: mov dword ptr [edx + ecx*4 + 0xe8], 0 */ W32((u32)(r_edx+r_ecx*4+0xe8u), 0x0u);
    /* 0040d7ba: jmp 0x40d7be */ goto L_0040d7be;
L_0040d7bc:; BB(0x0040d7bc);
    /* 0040d7bc: jmp 0x40d7c3 */ goto L_0040d7c3;
L_0040d7be:; BB(0x0040d7be);
    /* 0040d7be: jmp 0x40d737 */ goto L_0040d737;
L_0040d7c3:; BB(0x0040d7c3);
    /* 0040d7c3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d7c6: mov dword ptr [eax + 0x160], 1 */ W32((u32)(r_eax+0x160u), 0x1u);
    /* 0040d7d0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d7d3: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0040d7d6: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x40d7dbu); f_005ea257();
    /* 0040d7db: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040d7dd: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d7e0: setle dl */ r_edx = (r_edx & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0040d7e3: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d7e4: and edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0040d7e7: add edx, 0x21 */ {  u32 a = r_edx; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d7ea: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0040d7ed: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040d7f4: jmp 0x40d7ff */ goto L_0040d7ff;
L_0040d7f6:; BB(0x0040d7f6);
    /* 0040d7f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d7f9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040d7fc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0040d7ff:; BB(0x0040d7ff);
    /* 0040d7ff: cmp dword ptr [ebp - 8], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d803: jge 0x40da24 */ if ((fS==fO)) goto L_0040da24;
L_0040d809:; BB(0x0040d809);
    /* 0040d809: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d80c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d80f: cmp dword ptr [edx + ecx*4 + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d814: jne 0x40d81b */ if (!fZ) goto L_0040d81b;
L_0040d816:; BB(0x0040d816);
    /* 0040d816: jmp 0x40da24 */ goto L_0040da24;
L_0040d81b:; BB(0x0040d81b);
    /* 0040d81b: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d821: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40d826u); f_0040f81e();
    /* 0040d826: mov eax, dword ptr [eax + 0x130] */ r_eax = R32((u32)(r_eax+0x130u));
    /* 0040d82c: cmp dword ptr [eax + 0x50], 0 */ {  u32 a = R32((u32)(r_eax+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d830: je 0x40d849 */ if (fZ) goto L_0040d849;
L_0040d832:; BB(0x0040d832);
    /* 0040d832: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040d838: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40d83du); f_0040f81e();
    /* 0040d83d: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040d843: cmp dword ptr [ecx + 0x50], 2 */ {  u32 a = R32((u32)(r_ecx+0x50u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d847: jne 0x40d891 */ if (!fZ) goto L_0040d891;
L_0040d849:; BB(0x0040d849);
    /* 0040d849: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d84c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d84f: imul eax, dword ptr [edx + 0xb8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0xb8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040d856: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d859: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 0040d85f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d861: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d862: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d865: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040d866: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040d868: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040d86a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d86d: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 0040d873: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d875: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d876: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d879: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d87c: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0040d880: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d883: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d886: mov edx, dword ptr [eax + edx*4 + 0x30] */ r_edx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0040d88a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040d88c: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x40d88fu); call_ind(t); }
    /* 0040d88f: jmp 0x40d8cd */ goto L_0040d8cd;
L_0040d891:; BB(0x0040d891);
    /* 0040d891: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d894: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d897: imul edx, dword ptr [ecx + 0xb8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0xb8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040d89e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d8a1: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0040d8a7: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d8a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d8aa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d8ad: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0040d8b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d8b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d8b7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d8ba: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0040d8be: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d8c1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d8c4: mov eax, dword ptr [edx + eax*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_eax*4+0x30u));
    /* 0040d8c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040d8ca: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x40d8cdu); call_ind(t); }
L_0040d8cd:; BB(0x0040d8cd);
    /* 0040d8cd: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d8cf: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40d8d4u); f_0048ab58();
    /* 0040d8d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d8d7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040d8da: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d8de: je 0x40d8ed */ if (fZ) goto L_0040d8ed;
L_0040d8e0:; BB(0x0040d8e0);
    /* 0040d8e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d8e3: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x40d8e8u); f_005e9d30();
    /* 0040d8e8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040d8eb: jmp 0x40d8f4 */ goto L_0040d8f4;
L_0040d8ed:; BB(0x0040d8ed);
    /* 0040d8ed: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0040d8f4:; BB(0x0040d8f4);
    /* 0040d8f4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d8f7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d8fa: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d8fd: mov dword ptr [ecx + eax*4 + 0xe8], edx */ W32((u32)(r_ecx+r_eax*4+0xe8u), r_edx);
    /* 0040d904: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d907: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d90a: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0040d90e: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x40d913u); f_005ea279();
    /* 0040d913: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d914: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d917: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d91a: mov ecx, dword ptr [eax + edx*4 + 0xe8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xe8u));
    /* 0040d921: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40d926u); f_005ea0c3();
    /* 0040d926: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d929: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d92c: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0040d930: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x40d935u); f_005ea257();
    /* 0040d935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d936: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d939: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d93c: mov ecx, dword ptr [ecx + eax*4 + 0xe8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xe8u));
    /* 0040d943: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40d948u); f_005ea1cf();
    /* 0040d948: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d94b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d94e: mov ecx, dword ptr [eax + edx*4 + 0xe8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xe8u));
    /* 0040d955: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d958: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d95b: mov edx, dword ptr [eax + edx*4 + 0xe8] */ r_edx = R32((u32)(r_eax+r_edx*4+0xe8u));
    /* 0040d962: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040d964: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x40d967u); call_ind(t); }
    /* 0040d967: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d96a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d96d: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0040d971: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d974: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d977: mov eax, dword ptr [edx + eax*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_eax*4+0x30u));
    /* 0040d97b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040d97d: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x40d980u); call_ind(t); }
    /* 0040d980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d981: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d984: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d987: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0040d98b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d98e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d991: mov edx, dword ptr [eax + edx*4 + 0x30] */ r_edx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0040d995: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040d997: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x40d99au); call_ind(t); }
    /* 0040d99a: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040d99d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d99e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d9a1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d9a4: mov ecx, dword ptr [edx + ecx*4 + 0xe8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xe8u));
    /* 0040d9ab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d9ae: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d9b1: mov eax, dword ptr [edx + eax*4 + 0xe8] */ r_eax = R32((u32)(r_edx+r_eax*4+0xe8u));
    /* 0040d9b8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040d9ba: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x40d9bdu); call_ind(t); }
    /* 0040d9bd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d9c0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d9c3: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0040d9c7: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x40d9ccu); f_005d9883();
    /* 0040d9cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d9cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d9d0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d9d3: mov ecx, dword ptr [eax + edx*4 + 0xe8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xe8u));
    /* 0040d9da: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d9dd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d9e0: mov edx, dword ptr [eax + edx*4 + 0xe8] */ r_edx = R32((u32)(r_eax+r_edx*4+0xe8u));
    /* 0040d9e7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040d9e9: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x40d9ecu); call_ind(t); }
    /* 0040d9ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d9ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d9f1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d9f4: mov ecx, dword ptr [edx + ecx*4 + 0xe8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xe8u));
    /* 0040d9fb: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x40da00u); f_005ea514();
    /* 0040da00: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040da03: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040da06: mov ecx, dword ptr [ecx + eax*4 + 0xe8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xe8u));
    /* 0040da0d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040da10: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040da13: mov edx, dword ptr [eax + edx*4 + 0xe8] */ r_edx = R32((u32)(r_eax+r_edx*4+0xe8u));
    /* 0040da1a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040da1c: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x40da1fu); call_ind(t); }
    /* 0040da1f: jmp 0x40d7f6 */ goto L_0040d7f6;
L_0040da24:; BB(0x0040da24);
    /* 0040da24: jmp 0x40db2f */ goto L_0040db2f;
L_0040da29:; BB(0x0040da29);
    /* 0040da29: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040da2c: cmp dword ptr [ecx + 0xe8], 0 */ {  u32 a = R32((u32)(r_ecx+0xe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040da33: je 0x40db27 */ if (fZ) goto L_0040db27;
L_0040da39:; BB(0x0040da39);
    /* 0040da39: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040da3c: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0040da3f: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x40da44u); f_005ea257();
    /* 0040da44: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040da46: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040da49: setle cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0040da4c: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040da4d: and ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0040da50: add ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040da53: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040da56: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040da5d: jmp 0x40da68 */ goto L_0040da68;
L_0040da5f:; BB(0x0040da5f);
    /* 0040da5f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040da62: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040da65: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0040da68:; BB(0x0040da68);
    /* 0040da68: cmp dword ptr [ebp - 8], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040da6c: jge 0x40db25 */ if ((fS==fO)) goto L_0040db25;
L_0040da72:; BB(0x0040da72);
    /* 0040da72: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040da75: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040da78: cmp dword ptr [ecx + eax*4 + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040da7d: jne 0x40da84 */ if (!fZ) goto L_0040da84;
L_0040da7f:; BB(0x0040da7f);
    /* 0040da7f: jmp 0x40db25 */ goto L_0040db25;
L_0040da84:; BB(0x0040da84);
    /* 0040da84: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040da87: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040da8a: imul eax, dword ptr [edx + 0xb8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0xb8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040da91: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040da94: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 0040da9a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040da9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040da9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040daa0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040daa1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040daa3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040daa5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040daa8: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 0040daae: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040dab0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040dab1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040dab4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040dab7: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0040dabb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040dabe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040dac1: mov edx, dword ptr [eax + edx*4 + 0x30] */ r_edx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0040dac5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040dac7: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x40dacau); call_ind(t); }
    /* 0040daca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040dacd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040dad0: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0040dad4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040dad7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040dada: mov eax, dword ptr [edx + eax*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_eax*4+0x30u));
    /* 0040dade: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040dae0: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x40dae3u); call_ind(t); }
    /* 0040dae3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dae4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040dae7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040daea: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0040daee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040daf1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040daf4: mov edx, dword ptr [eax + edx*4 + 0x30] */ r_edx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0040daf8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040dafa: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x40dafdu); call_ind(t); }
    /* 0040dafd: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040db00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040db01: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040db04: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040db07: mov ecx, dword ptr [edx + ecx*4 + 0xe8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xe8u));
    /* 0040db0e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040db11: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040db14: mov eax, dword ptr [edx + eax*4 + 0xe8] */ r_eax = R32((u32)(r_edx+r_eax*4+0xe8u));
    /* 0040db1b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040db1d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x40db20u); call_ind(t); }
    /* 0040db20: jmp 0x40da5f */ goto L_0040da5f;
L_0040db25:; BB(0x0040db25);
    /* 0040db25: jmp 0x40db2f */ goto L_0040db2f;
L_0040db27:; BB(0x0040db27);
    /* 0040db27: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040db2a: call 0x426ff8 */ r_esp -= 4; W32(r_esp, 0x40db2fu); f_00426ff8();
L_0040db2f:; BB(0x0040db2f);
    /* 0040db2f: mov esp, ebp */ r_esp = r_ebp;
    /* 0040db31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040db32: ret  */ FN_RET(0x0040d6fa); r_esp += 4; return;
}

void f_0040db33(void) /* FUN_0040db33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040db33);
    /* 0040db33: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040db34: mov ebp, esp */ r_ebp = r_esp;
    /* 0040db36: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040db39: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040db3c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040db3f: call 0x42727e */ r_esp -= 4; W32(r_esp, 0x40db44u); f_0042727e();
    /* 0040db44: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040db47: mov dword ptr [eax + 0x160], 0 */ W32((u32)(r_eax+0x160u), 0x0u);
    /* 0040db51: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040db58: jmp 0x40db63 */ goto L_0040db63;
L_0040db5a:; BB(0x0040db5a);
    /* 0040db5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040db5d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040db60: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040db63:; BB(0x0040db63);
    /* 0040db63: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040db67: jge 0x40dbe2 */ if ((fS==fO)) goto L_0040dbe2;
L_0040db69:; BB(0x0040db69);
    /* 0040db69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040db6c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040db6f: cmp dword ptr [eax + edx*4 + 0xe8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040db77: je 0x40dbdd */ if (fZ) goto L_0040dbdd;
L_0040db79:; BB(0x0040db79);
    /* 0040db79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040db7c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040db7f: mov ecx, dword ptr [edx + ecx*4 + 0xe8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xe8u));
    /* 0040db86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040db89: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040db8c: mov eax, dword ptr [edx + eax*4 + 0xe8] */ r_eax = R32((u32)(r_edx+r_eax*4+0xe8u));
    /* 0040db93: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040db95: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x40db98u); call_ind(t); }
    /* 0040db98: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040db9b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040db9e: mov edx, dword ptr [ecx + eax*4 + 0xe8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xe8u));
    /* 0040dba5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0040dba8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dbab: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040dbae: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dbb2: je 0x40dbc5 */ if (fZ) goto L_0040dbc5;
L_0040dbb4:; BB(0x0040dbb4);
    /* 0040dbb4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dbb6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040dbb9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040dbbb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040dbbe: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40dbc0u); call_ind(t); }
    /* 0040dbc0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040dbc3: jmp 0x40dbcc */ goto L_0040dbcc;
L_0040dbc5:; BB(0x0040dbc5);
    /* 0040dbc5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0040dbcc:; BB(0x0040dbcc);
    /* 0040dbcc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040dbcf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040dbd2: mov dword ptr [ecx + eax*4 + 0xe8], 0 */ W32((u32)(r_ecx+r_eax*4+0xe8u), 0x0u);
L_0040dbdd:; BB(0x0040dbdd);
    /* 0040dbdd: jmp 0x40db5a */ goto L_0040db5a;
L_0040dbe2:; BB(0x0040dbe2);
    /* 0040dbe2: mov esp, ebp */ r_esp = r_ebp;
    /* 0040dbe4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040dbe5: ret  */ FN_RET(0x0040db33); r_esp += 4; return;
}

void f_0040dbe6(void) /* FUN_0040dbe6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040dbe6);
    /* 0040dbe6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040dbe7: mov ebp, esp */ r_ebp = r_esp;
    /* 0040dbe9: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040dbec: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040dbef: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0040dbf4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040dbf7: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0040dbfd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040dc00: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040dc02: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x40dc05u); call_ind(t); }
    /* 0040dc05: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040dc08: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040dc0f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040dc16: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0040dc1d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0040dc24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040dc27: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040dc2a: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040dc2e: jl 0x40de17 */ if ((fS!=fO)) goto L_0040de17;
L_0040dc34:; BB(0x0040dc34);
    /* 0040dc34: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040dc38: jle 0x40dc45 */ if ((fZ||fS!=fO)) goto L_0040dc45;
L_0040dc3a:; BB(0x0040dc3a);
    /* 0040dc3a: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dc3e: je 0x40dc5a */ if (fZ) goto L_0040dc5a;
L_0040dc40:; BB(0x0040dc40);
    /* 0040dc40: jmp 0x40de17 */ goto L_0040de17;
L_0040dc45:; BB(0x0040dc45);
    /* 0040dc45: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040dc48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc49: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040dc4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc4d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040dc50: call 0x427a2f */ r_esp -= 4; W32(r_esp, 0x40dc55u); f_00427a2f();
    /* 0040dc55: jmp 0x40de17 */ goto L_0040de17;
L_0040dc5a:; BB(0x0040dc5a);
    /* 0040dc5a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040dc5d: call 0x426dfb */ r_esp -= 4; W32(r_esp, 0x40dc62u); f_00426dfb();
    /* 0040dc62: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040dc65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040dc68: mov dword ptr [eax + 0xd4], ecx */ W32((u32)(r_eax+0xd4u), r_ecx);
    /* 0040dc6e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dc71: cmp dword ptr [edx + 0x110], 0 */ {  u32 a = R32((u32)(r_edx+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040dc78: jge 0x40dc87 */ if ((fS==fO)) goto L_0040dc87;
L_0040dc7a:; BB(0x0040dc7a);
    /* 0040dc7a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dc7d: mov dword ptr [eax + 0x110], 0 */ W32((u32)(r_eax+0x110u), 0x0u);
L_0040dc87:; BB(0x0040dc87);
    /* 0040dc87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dc8a: mov edx, dword ptr [ecx + 0x110] */ r_edx = R32((u32)(r_ecx+0x110u));
    /* 0040dc90: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040dc93: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dc96: mov dword ptr [eax + 0x110], edx */ W32((u32)(r_eax+0x110u), r_edx);
    /* 0040dc9c: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0040dc9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040dca0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040dca3: call 0x426ef0 */ r_esp -= 4; W32(r_esp, 0x40dca8u); f_00426ef0();
    /* 0040dca8: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 0040dcab: fstp qword ptr [ebp - 0x2c] */ W_F64((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0040dcae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040dcb1: call 0x4279ed */ r_esp -= 4; W32(r_esp, 0x40dcb6u); f_004279ed();
    /* 0040dcb6: fmul qword ptr [ebp - 0x2c] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd4u));
    /* 0040dcb9: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x40dcbeu); f_00624144();
    /* 0040dcbe: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040dcc1: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040dcc8: jbe 0x40dcd1 */ if ((fC||fZ)) goto L_0040dcd1;
L_0040dcca:; BB(0x0040dcca);
    /* 0040dcca: mov dword ptr [ebp - 0x10], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff0u), 0x3b9aca00u);
L_0040dcd1:; BB(0x0040dcd1);
    /* 0040dcd1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dcd3: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040dcd9: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x40dcdeu); f_0040f7fb();
    /* 0040dcde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dce0: je 0x40dd03 */ if (fZ) goto L_0040dd03;
L_0040dce2:; BB(0x0040dce2);
    /* 0040dce2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dce6: je 0x40dd01 */ if (fZ) goto L_0040dd01;
L_0040dce8:; BB(0x0040dce8);
    /* 0040dce8: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040dcef: jae 0x40dcfa */ if (!fC) goto L_0040dcfa;
L_0040dcf1:; BB(0x0040dcf1);
    /* 0040dcf1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040dcf4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040dcf7: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0040dcfa:; BB(0x0040dcfa);
    /* 0040dcfa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0040dd01:; BB(0x0040dd01);
    /* 0040dd01: jmp 0x40dd7c */ goto L_0040dd7c;
L_0040dd03:; BB(0x0040dd03);
    /* 0040dd03: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dd0a: jne 0x40dd1d */ if (!fZ) goto L_0040dd1d;
L_0040dd0c:; BB(0x0040dd0c);
    /* 0040dd0c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dd0e: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040dd14: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x40dd19u); f_0040f7fb();
    /* 0040dd19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dd1b: jne 0x40dd39 */ if (!fZ) goto L_0040dd39;
L_0040dd1d:; BB(0x0040dd1d);
    /* 0040dd1d: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dd24: je 0x40dd7c */ if (fZ) goto L_0040dd7c;
L_0040dd26:; BB(0x0040dd26);
    /* 0040dd26: mov ecx, dword ptr [0x6f5b34] */ r_ecx = R32((u32)(0x6f5b34u));
    /* 0040dd2c: call 0x41adab */ r_esp -= 4; W32(r_esp, 0x40dd31u); f_0041adab();
    /* 0040dd31: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0040dd34: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dd37: jne 0x40dd7c */ if (!fZ) goto L_0040dd7c;
L_0040dd39:; BB(0x0040dd39);
    /* 0040dd39: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040dd3f: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40dd44u); f_0040f81e();
    /* 0040dd44: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040dd4a: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x40dd4fu); f_0040c28d();
    /* 0040dd4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dd51: je 0x40dd7c */ if (fZ) goto L_0040dd7c;
L_0040dd53:; BB(0x0040dd53);
    /* 0040dd53: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040dd56: mov eax, dword ptr [ecx + 0xc4] */ r_eax = R32((u32)(r_ecx+0xc4u));
    /* 0040dd5c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040dd5d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040dd5f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040dd61: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040dd64: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040dd66: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040dd68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dd6a: je 0x40dd7c */ if (fZ) goto L_0040dd7c;
L_0040dd6c:; BB(0x0040dd6c);
    /* 0040dd6c: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040dd73: jae 0x40dd7c */ if (!fC) goto L_0040dd7c;
L_0040dd75:; BB(0x0040dd75);
    /* 0040dd75: mov dword ptr [ebp - 4], 0x32 */ W32((u32)(r_ebp+0xfffffffcu), 0x32u);
L_0040dd7c:; BB(0x0040dd7c);
    /* 0040dd7c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040dd7f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040dd82: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040dd85: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0040dd8b: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040dd8e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040dd91: cmp dword ptr [ebp - 0x14], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040dd98: jbe 0x40dda1 */ if ((fC||fZ)) goto L_0040dda1;
L_0040dd9a:; BB(0x0040dd9a);
    /* 0040dd9a: mov dword ptr [ebp - 0x14], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffecu), 0x3b9aca00u);
L_0040dda1:; BB(0x0040dda1);
    /* 0040dda1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040dda4: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0040dda7: cmp dword ptr [ebp - 0x14], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040ddae: jae 0x40ddc1 */ if (!fC) goto L_0040ddc1;
L_0040ddb0:; BB(0x0040ddb0);
    /* 0040ddb0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040ddb3: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 0040ddb9: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040ddbc: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040ddbf: jmp 0x40ddc8 */ goto L_0040ddc8;
L_0040ddc1:; BB(0x0040ddc1);
    /* 0040ddc1: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0040ddc8:; BB(0x0040ddc8);
    /* 0040ddc8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040ddcb: cmp dword ptr [edx + 0x160], 0 */ {  u32 a = R32((u32)(r_edx+0x160u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ddd2: je 0x40dddc */ if (fZ) goto L_0040dddc;
L_0040ddd4:; BB(0x0040ddd4);
    /* 0040ddd4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040ddd7: call 0x426ff8 */ r_esp -= 4; W32(r_esp, 0x40dddcu); f_00426ff8();
L_0040dddc:; BB(0x0040dddc);
    /* 0040dddc: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0040dddf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dde0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dde3: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0040dde6: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x40ddebu); f_004267ae();
    /* 0040ddeb: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0040ddee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ddef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ddf2: call 0x425ca4 */ r_esp -= 4; W32(r_esp, 0x40ddf7u); f_00425ca4();
    /* 0040ddf7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ddf9: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0040ddfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ddfd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040de00: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040de02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040de05: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x40de08u); call_ind(t); }
    /* 0040de08: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0040de0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040de0c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040de0f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040de11: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040de14: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x40de17u); call_ind(t); }
L_0040de17:; BB(0x0040de17);
    /* 0040de17: mov esp, ebp */ r_esp = r_ebp;
    /* 0040de19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040de1a: ret 8 */ FN_RET(0x0040dbe6); r_esp += 12; return;
}

void f_0040de1d(void) /* FUN_0040de1d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040de1d);
    /* 0040de1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040de1e: mov ebp, esp */ r_ebp = r_esp;
    /* 0040de20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040de21: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040de24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040de27: call 0x427c22 */ r_esp -= 4; W32(r_esp, 0x40de2cu); f_00427c22();
    /* 0040de2c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040de2f: mov dword ptr [eax], 0x633904 */ W32((u32)(r_eax), 0x633904u);
    /* 0040de35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040de38: mov esp, ebp */ r_esp = r_ebp;
    /* 0040de3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040de3b: ret  */ FN_RET(0x0040de1d); r_esp += 4; return;
}

void f_0040de3c(void) /* FUN_0040de3c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040de3c);
    /* 0040de3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040de3d: mov ebp, esp */ r_ebp = r_esp;
    /* 0040de3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040de40: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040de43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040de46: mov dword ptr [eax], 0x633904 */ W32((u32)(r_eax), 0x633904u);
    /* 0040de4c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040de4f: call 0x427cb2 */ r_esp -= 4; W32(r_esp, 0x40de54u); f_00427cb2();
    /* 0040de54: mov esp, ebp */ r_esp = r_ebp;
    /* 0040de56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040de57: ret  */ FN_RET(0x0040de3c); r_esp += 4; return;
}

void f_0040de58(void) /* FUN_0040de58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040de58);
    /* 0040de58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040de59: mov ebp, esp */ r_ebp = r_esp;
    /* 0040de5b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040de5e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040de61: push 0x164 */ { u32 v = 0x164u; r_esp -= 4; W32(r_esp, v); }
    /* 0040de66: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40de6bu); f_0048ab58();
    /* 0040de6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040de6e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040de71: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040de75: je 0x40de88 */ if (fZ) goto L_0040de88;
L_0040de77:; BB(0x0040de77);
    /* 0040de77: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040de7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040de7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040de7e: call 0x40d57d */ r_esp -= 4; W32(r_esp, 0x40de83u); f_0040d57d();
    /* 0040de83: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040de86: jmp 0x40de8f */ goto L_0040de8f;
L_0040de88:; BB(0x0040de88);
    /* 0040de88: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0040de8f:; BB(0x0040de8f);
    /* 0040de8f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040de92: mov esp, ebp */ r_esp = r_ebp;
    /* 0040de94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040de95: ret  */ FN_RET(0x0040de58); r_esp += 4; return;
}

void f_0040de96(void) /* FUN_0040de96 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040de96);
    /* 0040de96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040de97: mov ebp, esp */ r_ebp = r_esp;
    /* 0040de99: sub esp, 0xd0 */ {  u32 a = r_esp; u32 b = 0xd0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040de9f: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 0040dea5: mov dword ptr [ebp - 0xb4], 0x1c5 */ W32((u32)(r_ebp+0xffffff4cu), 0x1c5u);
    /* 0040deaf: mov dword ptr [ebp - 0xb0], 0xcb */ W32((u32)(r_ebp+0xffffff50u), 0xcbu);
    /* 0040deb9: mov dword ptr [ebp - 0xac], 0x214 */ W32((u32)(r_ebp+0xffffff54u), 0x214u);
    /* 0040dec3: mov dword ptr [ebp - 0xa8], 0xcb */ W32((u32)(r_ebp+0xffffff58u), 0xcbu);
    /* 0040decd: mov dword ptr [ebp - 0xa4], 0x1f3 */ W32((u32)(r_ebp+0xffffff5cu), 0x1f3u);
    /* 0040ded7: mov dword ptr [ebp - 0xa0], 0x78 */ W32((u32)(r_ebp+0xffffff60u), 0x78u);
    /* 0040dee1: mov dword ptr [ebp - 0x9c], 0x1c2 */ W32((u32)(r_ebp+0xffffff64u), 0x1c2u);
    /* 0040deeb: mov dword ptr [ebp - 0x98], 0x78 */ W32((u32)(r_ebp+0xffffff68u), 0x78u);
    /* 0040def5: mov dword ptr [ebp - 0x94], 0x211 */ W32((u32)(r_ebp+0xffffff6cu), 0x211u);
    /* 0040deff: mov dword ptr [ebp - 0x90], 0x78 */ W32((u32)(r_ebp+0xffffff70u), 0x78u);
    /* 0040df09: mov dword ptr [ebp - 0x8c], 0x12c */ W32((u32)(r_ebp+0xffffff74u), 0x12cu);
    /* 0040df13: mov dword ptr [ebp - 0x88], 0x110 */ W32((u32)(r_ebp+0xffffff78u), 0x110u);
    /* 0040df1d: mov dword ptr [ebp - 0x84], 0x17a */ W32((u32)(r_ebp+0xffffff7cu), 0x17au);
    /* 0040df27: mov dword ptr [ebp - 0x80], 0x110 */ W32((u32)(r_ebp+0xffffff80u), 0x110u);
    /* 0040df2e: mov dword ptr [ebp - 0x7c], 0x15e */ W32((u32)(r_ebp+0xffffff84u), 0x15eu);
    /* 0040df35: mov dword ptr [ebp - 0x78], 0xb8 */ W32((u32)(r_ebp+0xffffff88u), 0xb8u);
    /* 0040df3c: mov dword ptr [ebp - 0x74], 0x12c */ W32((u32)(r_ebp+0xffffff8cu), 0x12cu);
    /* 0040df43: mov dword ptr [ebp - 0x70], 0xb8 */ W32((u32)(r_ebp+0xffffff90u), 0xb8u);
    /* 0040df4a: mov dword ptr [ebp - 0x6c], 0x17a */ W32((u32)(r_ebp+0xffffff94u), 0x17au);
    /* 0040df51: mov dword ptr [ebp - 0x68], 0xb8 */ W32((u32)(r_ebp+0xffffff98u), 0xb8u);
    /* 0040df58: mov dword ptr [ebp - 0x64], 0x7a */ W32((u32)(r_ebp+0xffffff9cu), 0x7au);
    /* 0040df5f: mov dword ptr [ebp - 0x60], 0x110 */ W32((u32)(r_ebp+0xffffffa0u), 0x110u);
    /* 0040df66: mov dword ptr [ebp - 0x5c], 0xc8 */ W32((u32)(r_ebp+0xffffffa4u), 0xc8u);
    /* 0040df6d: mov dword ptr [ebp - 0x58], 0x110 */ W32((u32)(r_ebp+0xffffffa8u), 0x110u);
    /* 0040df74: mov dword ptr [ebp - 0x54], 0xb1 */ W32((u32)(r_ebp+0xffffffacu), 0xb1u);
    /* 0040df7b: mov dword ptr [ebp - 0x50], 0xb8 */ W32((u32)(r_ebp+0xffffffb0u), 0xb8u);
    /* 0040df82: mov dword ptr [ebp - 0x4c], 0x83 */ W32((u32)(r_ebp+0xffffffb4u), 0x83u);
    /* 0040df89: mov dword ptr [ebp - 0x48], 0xb8 */ W32((u32)(r_ebp+0xffffffb8u), 0xb8u);
    /* 0040df90: mov dword ptr [ebp - 0x44], 0xd1 */ W32((u32)(r_ebp+0xffffffbcu), 0xd1u);
    /* 0040df97: mov dword ptr [ebp - 0x40], 0xb8 */ W32((u32)(r_ebp+0xffffffc0u), 0xb8u);
    /* 0040df9e: mov dword ptr [ebp - 0x3c], 0xffffffee */ W32((u32)(r_ebp+0xffffffc4u), 0xffffffeeu);
    /* 0040dfa5: mov dword ptr [ebp - 0x38], 0xcb */ W32((u32)(r_ebp+0xffffffc8u), 0xcbu);
    /* 0040dfac: mov dword ptr [ebp - 0x34], 0x3d */ W32((u32)(r_ebp+0xffffffccu), 0x3du);
    /* 0040dfb3: mov dword ptr [ebp - 0x30], 0xcb */ W32((u32)(r_ebp+0xffffffd0u), 0xcbu);
    /* 0040dfba: mov dword ptr [ebp - 0x2c], 0x24 */ W32((u32)(r_ebp+0xffffffd4u), 0x24u);
    /* 0040dfc1: mov dword ptr [ebp - 0x28], 0x78 */ W32((u32)(r_ebp+0xffffffd8u), 0x78u);
    /* 0040dfc8: mov dword ptr [ebp - 0x24], 0xffffffee */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffeeu);
    /* 0040dfcf: mov dword ptr [ebp - 0x20], 0x78 */ W32((u32)(r_ebp+0xffffffe0u), 0x78u);
    /* 0040dfd6: mov dword ptr [ebp - 0x1c], 0x3d */ W32((u32)(r_ebp+0xffffffe4u), 0x3du);
    /* 0040dfdd: mov dword ptr [ebp - 0x18], 0x78 */ W32((u32)(r_ebp+0xffffffe8u), 0x78u);
    /* 0040dfe4: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040dfea: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40dfefu); f_0040f81e();
    /* 0040dfef: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040dff2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040dff5: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x40dffau); f_004259f1();
    /* 0040dffa: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0040e000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e003: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040e009: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0040e00c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0040e00f: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040e013: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e016: mov ecx, dword ptr [eax + 0x144] */ r_ecx = R32((u32)(r_eax+0x144u));
    /* 0040e01c: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 0040e022: cmp dword ptr [ebp - 0xc4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e029: je 0x40e5a9 */ if (fZ) goto L_0040e5a9;
L_0040e02f:; BB(0x0040e02f);
    /* 0040e02f: cmp dword ptr [ebp - 0xc4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e036: je 0x40e04a */ if (fZ) goto L_0040e04a;
L_0040e038:; BB(0x0040e038);
    /* 0040e038: cmp dword ptr [ebp - 0xc4], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e03f: je 0x40e5e0 */ if (fZ) goto L_0040e5e0;
L_0040e045:; BB(0x0040e045);
    /* 0040e045: jmp 0x40e681 */ goto L_0040e681;
L_0040e04a:; BB(0x0040e04a);
    /* 0040e04a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e04d: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 0040e053: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040e056: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 0040e05c: cmp dword ptr [ebp - 0xc8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e063: je 0x40e084 */ if (fZ) goto L_0040e084;
L_0040e065:; BB(0x0040e065);
    /* 0040e065: cmp dword ptr [ebp - 0xc8], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e06c: je 0x40e309 */ if (fZ) goto L_0040e309;
L_0040e072:; BB(0x0040e072);
    /* 0040e072: cmp dword ptr [ebp - 0xc8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e079: je 0x40e48d */ if (fZ) goto L_0040e48d;
L_0040e07f:; BB(0x0040e07f);
    /* 0040e07f: jmp 0x40e578 */ goto L_0040e578;
L_0040e084:; BB(0x0040e084);
    /* 0040e084: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e087: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 0040e08d: cmp dword ptr [ebp - 0xcc], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e094: je 0x40e0b5 */ if (fZ) goto L_0040e0b5;
L_0040e096:; BB(0x0040e096);
    /* 0040e096: cmp dword ptr [ebp - 0xcc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e09d: je 0x40e1a5 */ if (fZ) goto L_0040e1a5;
L_0040e0a3:; BB(0x0040e0a3);
    /* 0040e0a3: cmp dword ptr [ebp - 0xcc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e0aa: je 0x40e219 */ if (fZ) goto L_0040e219;
L_0040e0b0:; BB(0x0040e0b0);
    /* 0040e0b0: jmp 0x40e304 */ goto L_0040e304;
L_0040e0b5:; BB(0x0040e0b5);
    /* 0040e0b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0b9: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e0bf: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e0c2: mov ecx, dword ptr [ebp + eax - 0xb0] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff50u));
    /* 0040e0c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0ca: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e0d0: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e0d3: mov eax, dword ptr [ebp + edx - 0xb4] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff4cu));
    /* 0040e0da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0db: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e0e1: call 0x428724 */ r_esp -= 4; W32(r_esp, 0x40e0e6u); f_00428724();
    /* 0040e0e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0ea: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e0f0: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e0f3: mov edx, dword ptr [ebp + ecx - 0xb0] */ r_edx = R32((u32)(r_ebp+r_ecx+0xffffff50u));
    /* 0040e0fa: sub edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040e0fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0fe: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e104: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e107: mov ecx, dword ptr [ebp + eax - 0xb4] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff4cu));
    /* 0040e10e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e10f: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e115: call 0x42877e */ r_esp -= 4; W32(r_esp, 0x40e11au); f_0042877e();
    /* 0040e11a: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e120: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 0040e123: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e129: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0040e12c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040e12e: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x40e131u); call_ind(t); }
    /* 0040e131: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e133: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e135: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e13b: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e13e: mov edx, dword ptr [ebp + ecx - 0xa8] */ r_edx = R32((u32)(r_ebp+r_ecx+0xffffff58u));
    /* 0040e145: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e146: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e14c: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e14f: mov ecx, dword ptr [ebp + eax - 0xac] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff54u));
    /* 0040e156: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e157: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e15d: call 0x428724 */ r_esp -= 4; W32(r_esp, 0x40e162u); f_00428724();
    /* 0040e162: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e164: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e166: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e16c: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e16f: mov eax, dword ptr [ebp + edx - 0xa8] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff58u));
    /* 0040e176: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040e179: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e17a: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e180: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e183: mov edx, dword ptr [ebp + ecx - 0xac] */ r_edx = R32((u32)(r_ebp+r_ecx+0xffffff54u));
    /* 0040e18a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e18b: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e191: call 0x42877e */ r_esp -= 4; W32(r_esp, 0x40e196u); f_0042877e();
    /* 0040e196: mov dword ptr [ebp - 0xbc], 1 */ W32((u32)(r_ebp+0xffffff44u), 0x1u);
    /* 0040e1a0: jmp 0x40e304 */ goto L_0040e304;
L_0040e1a5:; BB(0x0040e1a5);
    /* 0040e1a5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e1a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e1a9: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e1af: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e1b2: mov ecx, dword ptr [ebp + eax - 0xa0] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff60u));
    /* 0040e1b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e1ba: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e1c0: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e1c3: mov eax, dword ptr [ebp + edx - 0xa4] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff5cu));
    /* 0040e1ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e1cb: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e1d1: call 0x428724 */ r_esp -= 4; W32(r_esp, 0x40e1d6u); f_00428724();
    /* 0040e1d6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e1d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e1da: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e1e0: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e1e3: mov edx, dword ptr [ebp + ecx - 0xa0] */ r_edx = R32((u32)(r_ebp+r_ecx+0xffffff60u));
    /* 0040e1ea: sub edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040e1ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e1ee: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e1f4: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e1f7: mov ecx, dword ptr [ebp + eax - 0xa4] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff5cu));
    /* 0040e1fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e1ff: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e205: call 0x42877e */ r_esp -= 4; W32(r_esp, 0x40e20au); f_0042877e();
    /* 0040e20a: mov dword ptr [ebp - 0xbc], 2 */ W32((u32)(r_ebp+0xffffff44u), 0x2u);
    /* 0040e214: jmp 0x40e304 */ goto L_0040e304;
L_0040e219:; BB(0x0040e219);
    /* 0040e219: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e21b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e21d: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e223: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e226: mov eax, dword ptr [ebp + edx - 0x98] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff68u));
    /* 0040e22d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e22e: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e234: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e237: mov edx, dword ptr [ebp + ecx - 0x9c] */ r_edx = R32((u32)(r_ebp+r_ecx+0xffffff64u));
    /* 0040e23e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e23f: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e245: call 0x428724 */ r_esp -= 4; W32(r_esp, 0x40e24au); f_00428724();
    /* 0040e24a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e24c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e24e: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e254: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e257: mov ecx, dword ptr [ebp + eax - 0x98] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff68u));
    /* 0040e25e: sub ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e261: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e262: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e268: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e26b: mov eax, dword ptr [ebp + edx - 0x9c] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff64u));
    /* 0040e272: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e273: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e279: call 0x42877e */ r_esp -= 4; W32(r_esp, 0x40e27eu); f_0042877e();
    /* 0040e27e: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e284: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0040e287: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e28d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0040e290: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040e292: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x40e295u); call_ind(t); }
    /* 0040e295: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e297: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e299: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e29f: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e2a2: mov ecx, dword ptr [ebp + eax - 0x90] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff70u));
    /* 0040e2a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2aa: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e2b0: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e2b3: mov eax, dword ptr [ebp + edx - 0x94] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff6cu));
    /* 0040e2ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2bb: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e2c1: call 0x428724 */ r_esp -= 4; W32(r_esp, 0x40e2c6u); f_00428724();
    /* 0040e2c6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2ca: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e2d0: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e2d3: mov edx, dword ptr [ebp + ecx - 0x90] */ r_edx = R32((u32)(r_ebp+r_ecx+0xffffff70u));
    /* 0040e2da: sub edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040e2dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2de: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e2e4: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e2e7: mov ecx, dword ptr [ebp + eax - 0x94] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff6cu));
    /* 0040e2ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2ef: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e2f5: call 0x42877e */ r_esp -= 4; W32(r_esp, 0x40e2fau); f_0042877e();
    /* 0040e2fa: mov dword ptr [ebp - 0xbc], 3 */ W32((u32)(r_ebp+0xffffff44u), 0x3u);
L_0040e304:; BB(0x0040e304);
    /* 0040e304: jmp 0x40e578 */ goto L_0040e578;
L_0040e309:; BB(0x0040e309);
    /* 0040e309: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e30c: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 0040e312: cmp dword ptr [ebp - 0xd0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e319: je 0x40e329 */ if (fZ) goto L_0040e329;
L_0040e31b:; BB(0x0040e31b);
    /* 0040e31b: cmp dword ptr [ebp - 0xd0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e322: je 0x40e39d */ if (fZ) goto L_0040e39d;
L_0040e324:; BB(0x0040e324);
    /* 0040e324: jmp 0x40e488 */ goto L_0040e488;
L_0040e329:; BB(0x0040e329);
    /* 0040e329: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e32b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e32d: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e333: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e336: mov ecx, dword ptr [ebp + eax - 0xa0] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff60u));
    /* 0040e33d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e33e: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e344: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e347: mov eax, dword ptr [ebp + edx - 0xa4] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff5cu));
    /* 0040e34e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e34f: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e355: call 0x428724 */ r_esp -= 4; W32(r_esp, 0x40e35au); f_00428724();
    /* 0040e35a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e35c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e35e: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e364: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e367: mov edx, dword ptr [ebp + ecx - 0xa0] */ r_edx = R32((u32)(r_ebp+r_ecx+0xffffff60u));
    /* 0040e36e: sub edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040e371: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e372: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e378: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e37b: mov ecx, dword ptr [ebp + eax - 0xa4] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff5cu));
    /* 0040e382: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e383: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e389: call 0x42877e */ r_esp -= 4; W32(r_esp, 0x40e38eu); f_0042877e();
    /* 0040e38e: mov dword ptr [ebp - 0xbc], 2 */ W32((u32)(r_ebp+0xffffff44u), 0x2u);
    /* 0040e398: jmp 0x40e488 */ goto L_0040e488;
L_0040e39d:; BB(0x0040e39d);
    /* 0040e39d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e39f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3a1: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e3a7: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e3aa: mov eax, dword ptr [ebp + edx - 0x98] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff68u));
    /* 0040e3b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3b2: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e3b8: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e3bb: mov edx, dword ptr [ebp + ecx - 0x9c] */ r_edx = R32((u32)(r_ebp+r_ecx+0xffffff64u));
    /* 0040e3c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3c3: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e3c9: call 0x428724 */ r_esp -= 4; W32(r_esp, 0x40e3ceu); f_00428724();
    /* 0040e3ce: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3d2: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e3d8: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e3db: mov ecx, dword ptr [ebp + eax - 0x98] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff68u));
    /* 0040e3e2: sub ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e3e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3e6: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e3ec: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e3ef: mov eax, dword ptr [ebp + edx - 0x9c] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff64u));
    /* 0040e3f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3f7: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e3fd: call 0x42877e */ r_esp -= 4; W32(r_esp, 0x40e402u); f_0042877e();
    /* 0040e402: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e408: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0040e40b: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e411: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0040e414: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040e416: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x40e419u); call_ind(t); }
    /* 0040e419: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e41b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e41d: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e423: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e426: mov ecx, dword ptr [ebp + eax - 0x90] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff70u));
    /* 0040e42d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e42e: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e434: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e437: mov eax, dword ptr [ebp + edx - 0x94] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff6cu));
    /* 0040e43e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e43f: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e445: call 0x428724 */ r_esp -= 4; W32(r_esp, 0x40e44au); f_00428724();
    /* 0040e44a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e44c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e44e: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e454: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e457: mov edx, dword ptr [ebp + ecx - 0x90] */ r_edx = R32((u32)(r_ebp+r_ecx+0xffffff70u));
    /* 0040e45e: sub edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040e461: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e462: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e468: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e46b: mov ecx, dword ptr [ebp + eax - 0x94] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff6cu));
    /* 0040e472: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e473: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e479: call 0x42877e */ r_esp -= 4; W32(r_esp, 0x40e47eu); f_0042877e();
    /* 0040e47e: mov dword ptr [ebp - 0xbc], 3 */ W32((u32)(r_ebp+0xffffff44u), 0x3u);
L_0040e488:; BB(0x0040e488);
    /* 0040e488: jmp 0x40e578 */ goto L_0040e578;
L_0040e48d:; BB(0x0040e48d);
    /* 0040e48d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e48f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e491: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e497: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e49a: mov eax, dword ptr [ebp + edx - 0x98] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff68u));
    /* 0040e4a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e4a2: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e4a8: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e4ab: mov edx, dword ptr [ebp + ecx - 0x9c] */ r_edx = R32((u32)(r_ebp+r_ecx+0xffffff64u));
    /* 0040e4b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e4b3: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e4b9: call 0x428724 */ r_esp -= 4; W32(r_esp, 0x40e4beu); f_00428724();
    /* 0040e4be: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e4c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e4c2: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e4c8: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e4cb: mov ecx, dword ptr [ebp + eax - 0x98] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff68u));
    /* 0040e4d2: sub ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e4d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e4d6: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e4dc: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e4df: mov eax, dword ptr [ebp + edx - 0x9c] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff64u));
    /* 0040e4e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e4e7: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e4ed: call 0x42877e */ r_esp -= 4; W32(r_esp, 0x40e4f2u); f_0042877e();
    /* 0040e4f2: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e4f8: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0040e4fb: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e501: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0040e504: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040e506: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x40e509u); call_ind(t); }
    /* 0040e509: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e50b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e50d: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e513: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e516: mov ecx, dword ptr [ebp + eax - 0x90] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff70u));
    /* 0040e51d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e51e: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e524: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e527: mov eax, dword ptr [ebp + edx - 0x94] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff6cu));
    /* 0040e52e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e52f: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e535: call 0x428724 */ r_esp -= 4; W32(r_esp, 0x40e53au); f_00428724();
    /* 0040e53a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e53c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e53e: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e544: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e547: mov edx, dword ptr [ebp + ecx - 0x90] */ r_edx = R32((u32)(r_ebp+r_ecx+0xffffff70u));
    /* 0040e54e: sub edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040e551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e552: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0040e558: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e55b: mov ecx, dword ptr [ebp + eax - 0x94] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff6cu));
    /* 0040e562: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e563: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e569: call 0x42877e */ r_esp -= 4; W32(r_esp, 0x40e56eu); f_0042877e();
    /* 0040e56e: mov dword ptr [ebp - 0xbc], 3 */ W32((u32)(r_ebp+0xffffff44u), 0x3u);
L_0040e578:; BB(0x0040e578);
    /* 0040e578: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0040e57b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e57c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e57f: call 0x40c997 */ r_esp -= 4; W32(r_esp, 0x40e584u); f_0040c997();
    /* 0040e584: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e586: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 0040e58c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e58d: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0040e590: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e591: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e593: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e599: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040e59b: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e5a1: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x40e5a4u); call_ind(t); }
    /* 0040e5a4: jmp 0x40e681 */ goto L_0040e681;
L_0040e5a9:; BB(0x0040e5a9);
    /* 0040e5a9: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0040e5ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5ad: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e5b0: call 0x40c997 */ r_esp -= 4; W32(r_esp, 0x40e5b5u); f_0040c997();
    /* 0040e5b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5b7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e5ba: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 0040e5c0: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040e5c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5c4: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0040e5c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5ca: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e5d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040e5d2: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e5d8: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x40e5dbu); call_ind(t); }
    /* 0040e5db: jmp 0x40e681 */ goto L_0040e681;
L_0040e5e0:; BB(0x0040e5e0);
    /* 0040e5e0: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040e5e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5e4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e5e7: call 0x40c997 */ r_esp -= 4; W32(r_esp, 0x40e5ecu); f_0040c997();
    /* 0040e5ec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e5ef: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040e5f0: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040e5f2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040e5f4: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040e5f7: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040e5f9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040e5fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e5fd: je 0x40e606 */ if (fZ) goto L_0040e606;
L_0040e5ff:; BB(0x0040e5ff);
    /* 0040e5ff: mov dword ptr [ebp - 8], 0x32 */ W32((u32)(r_ebp+0xfffffff8u), 0x32u);
L_0040e606:; BB(0x0040e606);
    /* 0040e606: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e609: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040e60a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040e60c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040e60e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040e611: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0040e614: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e615: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e618: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0040e61b: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x40e620u); f_004267ae();
    /* 0040e620: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e623: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e626: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040e629: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040e62c: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e62f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040e632: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0040e635: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e636: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e639: call 0x425ca4 */ r_esp -= 4; W32(r_esp, 0x40e63eu); f_00425ca4();
    /* 0040e63e: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0040e645: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040e64c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040e64f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e650: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e653: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 0040e659: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040e65c: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e662: mov ecx, dword ptr [ecx + eax*4 + 0x6c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x6cu));
    /* 0040e666: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e669: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 0040e66f: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0040e672: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0040e678: mov edx, dword ptr [eax + edx*4 + 0x6c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x6cu));
    /* 0040e67c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040e67e: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x40e681u); call_ind(t); }
L_0040e681:; BB(0x0040e681);
    /* 0040e681: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e683: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e684: ret  */ FN_RET(0x0040de96); r_esp += 4; return;
}

void f_0040e685(void) /* FUN_0040e685 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040e685);
    /* 0040e685: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e686: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e688: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e689: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e68a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040e68d: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e694: jne 0x40e6ec */ if (!fZ) goto L_0040e6ec;
L_0040e696:; BB(0x0040e696);
    /* 0040e696: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040e69b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040e69e: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x40e6a3u); f_005e63b4();
    /* 0040e6a3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e6a6: jne 0x40e6e6 */ if (!fZ) goto L_0040e6e6;
L_0040e6a8:; BB(0x0040e6a8);
    /* 0040e6a8: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040e6ae: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x40e6b3u); f_0040f9c4();
    /* 0040e6b3: mov esi, eax */ r_esi = r_eax;
    /* 0040e6b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e6b8: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x40e6bdu); f_00427ecb();
    /* 0040e6bd: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e6bf: jne 0x40e6e6 */ if (!fZ) goto L_0040e6e6;
L_0040e6c1:; BB(0x0040e6c1);
    /* 0040e6c1: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040e6c7: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40e6ccu); f_0040f81e();
    /* 0040e6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e6ce: je 0x40e6e6 */ if (fZ) goto L_0040e6e6;
L_0040e6d0:; BB(0x0040e6d0);
    /* 0040e6d0: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040e6d6: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40e6dbu); f_0040f81e();
    /* 0040e6db: mov ecx, eax */ r_ecx = r_eax;
    /* 0040e6dd: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x40e6e2u); f_004259a0();
    /* 0040e6e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e6e4: jne 0x40e6ea */ if (!fZ) goto L_0040e6ea;
L_0040e6e6:; BB(0x0040e6e6);
    /* 0040e6e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040e6e8: jmp 0x40e73a */ goto L_0040e73a;
L_0040e6ea:; BB(0x0040e6ea);
    /* 0040e6ea: jmp 0x40e735 */ goto L_0040e735;
L_0040e6ec:; BB(0x0040e6ec);
    /* 0040e6ec: mov ecx, dword ptr [0x6f5b34] */ r_ecx = R32((u32)(0x6f5b34u));
    /* 0040e6f2: call 0x41adab */ r_esp -= 4; W32(r_esp, 0x40e6f7u); f_0041adab();
    /* 0040e6f7: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0040e6fa: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e6fd: jne 0x40e731 */ if (!fZ) goto L_0040e731;
L_0040e6ff:; BB(0x0040e6ff);
    /* 0040e6ff: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040e705: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x40e70au); f_0040f9c4();
    /* 0040e70a: mov edx, dword ptr [0x6f5b34] */ r_edx = R32((u32)(0x6f5b34u));
    /* 0040e710: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0040e713: cmp eax, dword ptr [ecx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e716: jne 0x40e731 */ if (!fZ) goto L_0040e731;
L_0040e718:; BB(0x0040e718);
    /* 0040e718: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0040e71e: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x40e723u); f_0040f9c4();
    /* 0040e723: mov esi, eax */ r_esi = r_eax;
    /* 0040e725: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e728: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x40e72du); f_00427ecb();
    /* 0040e72d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e72f: je 0x40e735 */ if (fZ) goto L_0040e735;
L_0040e731:; BB(0x0040e731);
    /* 0040e731: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040e733: jmp 0x40e73a */ goto L_0040e73a;
L_0040e735:; BB(0x0040e735);
    /* 0040e735: mov eax, 1 */ r_eax = 0x1u;
L_0040e73a:; BB(0x0040e73a);
    /* 0040e73a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040e73b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e73d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e73e: ret 4 */ FN_RET(0x0040e685); r_esp += 8; return;
}

void f_0040e741(void) /* FUN_0040e741 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040e741);
    /* 0040e741: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e742: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e744: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040e747: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040e74a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e74d: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x40e752u); f_005dfbf0();
    /* 0040e752: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e755: mov dword ptr [eax], 0x63396c */ W32((u32)(r_eax), 0x63396cu);
    /* 0040e75b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e75e: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0040e765: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e768: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 0040e76f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e772: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 0040e779: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e77c: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 0040e783: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e786: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 0040e78d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e790: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 0040e797: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e79a: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 0040e7a1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e7a4: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 0040e7ab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e7ae: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 0040e7b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e7b8: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
    /* 0040e7bf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e7c2: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 0040e7c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e7cb: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0040e7d1: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x40e7d6u); f_0045c419();
    /* 0040e7d6: movsx eax, byte ptr [eax + 0x92] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x92u));
    /* 0040e7dd: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0040e7df: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0040e7e1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040e7e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e7e5: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 0040e7eb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e7ee: mov dword ptr [edx + 0x80], 0xffffffff */ W32((u32)(r_edx+0x80u), 0xffffffffu);
    /* 0040e7f8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e7fb: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 0040e802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e805: mov dword ptr [ecx + 0xc8], 0 */ W32((u32)(r_ecx+0xc8u), 0x0u);
    /* 0040e80f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040e816: jmp 0x40e821 */ goto L_0040e821;
L_0040e818:; BB(0x0040e818);
    /* 0040e818: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e81b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040e81e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0040e821:; BB(0x0040e821);
    /* 0040e821: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040e825: jge 0x40e837 */ if ((fS==fO)) goto L_0040e837;
L_0040e827:; BB(0x0040e827);
    /* 0040e827: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e82a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e82d: mov dword ptr [ecx + eax*4 + 0xc], 0 */ W32((u32)(r_ecx+r_eax*4+0xcu), 0x0u);
    /* 0040e835: jmp 0x40e818 */ goto L_0040e818;
L_0040e837:; BB(0x0040e837);
    /* 0040e837: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040e83e: jmp 0x40e849 */ goto L_0040e849;
L_0040e840:; BB(0x0040e840);
    /* 0040e840: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e843: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040e846: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0040e849:; BB(0x0040e849);
    /* 0040e849: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040e84d: jge 0x40e85f */ if ((fS==fO)) goto L_0040e85f;
L_0040e84f:; BB(0x0040e84f);
    /* 0040e84f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e852: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e855: mov dword ptr [ecx + eax*4 + 0x20], 0 */ W32((u32)(r_ecx+r_eax*4+0x20u), 0x0u);
    /* 0040e85d: jmp 0x40e840 */ goto L_0040e840;
L_0040e85f:; BB(0x0040e85f);
    /* 0040e85f: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e861: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40e866u); f_0048ab58();
    /* 0040e866: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040e869: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040e86c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e870: je 0x40e87f */ if (fZ) goto L_0040e87f;
L_0040e872:; BB(0x0040e872);
    /* 0040e872: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040e875: call 0x418580 */ r_esp -= 4; W32(r_esp, 0x40e87au); f_00418580();
    /* 0040e87a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040e87d: jmp 0x40e886 */ goto L_0040e886;
L_0040e87f:; BB(0x0040e87f);
    /* 0040e87f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0040e886:; BB(0x0040e886);
    /* 0040e886: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e889: mov dword ptr [0x6f578c], edx */ W32((u32)(0x6f578cu), r_edx);
    /* 0040e88f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e891: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e894: call 0x40f9ab */ r_esp -= 4; W32(r_esp, 0x40e899u); f_0040f9ab();
    /* 0040e899: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e89c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e89e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e89f: ret  */ FN_RET(0x0040e741); r_esp += 4; return;
}

void f_0040e8a0(void) /* FUN_0040e8a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040e8a0);
    /* 0040e8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e8a3: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040e8a9: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0040e8ac: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e8af: mov dword ptr [eax], 0x63396c */ W32((u32)(r_eax), 0x63396cu);
    /* 0040e8b5: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e8b8: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e8bc: je 0x40e8f5 */ if (fZ) goto L_0040e8f5;
L_0040e8be:; BB(0x0040e8be);
    /* 0040e8be: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e8c1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040e8c4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040e8c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e8ca: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040e8cd: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e8d1: je 0x40e8e4 */ if (fZ) goto L_0040e8e4;
L_0040e8d3:; BB(0x0040e8d3);
    /* 0040e8d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e8d5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040e8d8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040e8da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040e8dd: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x40e8dfu); call_ind(t); }
    /* 0040e8df: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0040e8e2: jmp 0x40e8eb */ goto L_0040e8eb;
L_0040e8e4:; BB(0x0040e8e4);
    /* 0040e8e4: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0040e8eb:; BB(0x0040e8eb);
    /* 0040e8eb: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e8ee: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
L_0040e8f5:; BB(0x0040e8f5);
    /* 0040e8f5: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e8f8: cmp dword ptr [edx + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e8fc: je 0x40e935 */ if (fZ) goto L_0040e935;
L_0040e8fe:; BB(0x0040e8fe);
    /* 0040e8fe: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e901: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0040e904: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040e907: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e90a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0040e90d: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e911: je 0x40e924 */ if (fZ) goto L_0040e924;
L_0040e913:; BB(0x0040e913);
    /* 0040e913: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e915: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e918: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040e91a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e91d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40e91fu); call_ind(t); }
    /* 0040e91f: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0040e922: jmp 0x40e92b */ goto L_0040e92b;
L_0040e924:; BB(0x0040e924);
    /* 0040e924: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0040e92b:; BB(0x0040e92b);
    /* 0040e92b: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e92e: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0040e935:; BB(0x0040e935);
    /* 0040e935: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e938: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e93c: je 0x40e975 */ if (fZ) goto L_0040e975;
L_0040e93e:; BB(0x0040e93e);
    /* 0040e93e: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e941: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0040e944: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040e947: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040e94a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040e94d: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e951: je 0x40e964 */ if (fZ) goto L_0040e964;
L_0040e953:; BB(0x0040e953);
    /* 0040e953: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e955: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e958: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040e95a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e95d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x40e95fu); call_ind(t); }
    /* 0040e95f: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0040e962: jmp 0x40e96b */ goto L_0040e96b;
L_0040e964:; BB(0x0040e964);
    /* 0040e964: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0040e96b:; BB(0x0040e96b);
    /* 0040e96b: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e96e: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_0040e975:; BB(0x0040e975);
    /* 0040e975: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e978: cmp dword ptr [edx + 0x34], 0 */ {  u32 a = R32((u32)(r_edx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e97c: je 0x40e9b5 */ if (fZ) goto L_0040e9b5;
L_0040e97e:; BB(0x0040e97e);
    /* 0040e97e: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e981: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0040e984: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040e987: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040e98a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0040e98d: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e991: je 0x40e9a4 */ if (fZ) goto L_0040e9a4;
L_0040e993:; BB(0x0040e993);
    /* 0040e993: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e995: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040e998: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040e99a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040e99d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40e99fu); call_ind(t); }
    /* 0040e99f: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0040e9a2: jmp 0x40e9ab */ goto L_0040e9ab;
L_0040e9a4:; BB(0x0040e9a4);
    /* 0040e9a4: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0040e9ab:; BB(0x0040e9ab);
    /* 0040e9ab: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e9ae: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0040e9b5:; BB(0x0040e9b5);
    /* 0040e9b5: cmp dword ptr [0x6f578c], 0 */ {  u32 a = R32((u32)(0x6f578cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e9bc: je 0x40e9fb */ if (fZ) goto L_0040e9fb;
L_0040e9be:; BB(0x0040e9be);
    /* 0040e9be: mov ecx, dword ptr [0x6f578c] */ r_ecx = R32((u32)(0x6f578cu));
    /* 0040e9c4: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0040e9c7: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040e9ca: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0040e9cd: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e9d1: je 0x40e9e7 */ if (fZ) goto L_0040e9e7;
L_0040e9d3:; BB(0x0040e9d3);
    /* 0040e9d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e9d5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040e9d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040e9da: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040e9dd: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40e9dfu); call_ind(t); }
    /* 0040e9df: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0040e9e5: jmp 0x40e9f1 */ goto L_0040e9f1;
L_0040e9e7:; BB(0x0040e9e7);
    /* 0040e9e7: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0040e9f1:; BB(0x0040e9f1);
    /* 0040e9f1: mov dword ptr [0x6f578c], 0 */ W32((u32)(0x6f578cu), 0x0u);
L_0040e9fb:; BB(0x0040e9fb);
    /* 0040e9fb: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040e9fe: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ea02: je 0x40ea41 */ if (fZ) goto L_0040ea41;
L_0040ea04:; BB(0x0040ea04);
    /* 0040ea04: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ea07: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0040ea0a: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0040ea0d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040ea10: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0040ea13: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ea17: je 0x40ea2d */ if (fZ) goto L_0040ea2d;
L_0040ea19:; BB(0x0040ea19);
    /* 0040ea19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ea1b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040ea1e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040ea20: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040ea23: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40ea25u); call_ind(t); }
    /* 0040ea25: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0040ea2b: jmp 0x40ea37 */ goto L_0040ea37;
L_0040ea2d:; BB(0x0040ea2d);
    /* 0040ea2d: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0040ea37:; BB(0x0040ea37);
    /* 0040ea37: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ea3a: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0040ea41:; BB(0x0040ea41);
    /* 0040ea41: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ea44: cmp dword ptr [ecx + 0x38], 0 */ {  u32 a = R32((u32)(r_ecx+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ea48: je 0x40ea87 */ if (fZ) goto L_0040ea87;
L_0040ea4a:; BB(0x0040ea4a);
    /* 0040ea4a: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ea4d: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0040ea50: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0040ea53: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040ea56: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0040ea59: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ea5d: je 0x40ea73 */ if (fZ) goto L_0040ea73;
L_0040ea5f:; BB(0x0040ea5f);
    /* 0040ea5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ea61: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040ea64: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040ea66: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040ea69: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x40ea6bu); call_ind(t); }
    /* 0040ea6b: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0040ea71: jmp 0x40ea7d */ goto L_0040ea7d;
L_0040ea73:; BB(0x0040ea73);
    /* 0040ea73: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0040ea7d:; BB(0x0040ea7d);
    /* 0040ea7d: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ea80: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_0040ea87:; BB(0x0040ea87);
    /* 0040ea87: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ea8a: cmp dword ptr [edx + 0x50], 0 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ea8e: je 0x40eacd */ if (fZ) goto L_0040eacd;
L_0040ea90:; BB(0x0040ea90);
    /* 0040ea90: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ea93: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040ea96: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0040ea99: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040ea9c: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0040ea9f: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eaa3: je 0x40eab9 */ if (fZ) goto L_0040eab9;
L_0040eaa5:; BB(0x0040eaa5);
    /* 0040eaa5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eaa7: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040eaaa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040eaac: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040eaaf: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40eab1u); call_ind(t); }
    /* 0040eab1: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0040eab7: jmp 0x40eac3 */ goto L_0040eac3;
L_0040eab9:; BB(0x0040eab9);
    /* 0040eab9: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0040eac3:; BB(0x0040eac3);
    /* 0040eac3: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040eac6: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_0040eacd:; BB(0x0040eacd);
    /* 0040eacd: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ead0: cmp dword ptr [ecx + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ead4: je 0x40eb13 */ if (fZ) goto L_0040eb13;
L_0040ead6:; BB(0x0040ead6);
    /* 0040ead6: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ead9: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0040eadc: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040eadf: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040eae2: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0040eae5: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eae9: je 0x40eaff */ if (fZ) goto L_0040eaff;
L_0040eaeb:; BB(0x0040eaeb);
    /* 0040eaeb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eaed: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040eaf0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040eaf2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040eaf5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x40eaf7u); call_ind(t); }
    /* 0040eaf7: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0040eafd: jmp 0x40eb09 */ goto L_0040eb09;
L_0040eaff:; BB(0x0040eaff);
    /* 0040eaff: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0040eb09:; BB(0x0040eb09);
    /* 0040eb09: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040eb0c: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_0040eb13:; BB(0x0040eb13);
    /* 0040eb13: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040eb16: cmp dword ptr [edx + 0x48], 0 */ {  u32 a = R32((u32)(r_edx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eb1a: je 0x40eb59 */ if (fZ) goto L_0040eb59;
L_0040eb1c:; BB(0x0040eb1c);
    /* 0040eb1c: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040eb1f: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0040eb22: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0040eb25: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040eb28: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0040eb2b: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eb2f: je 0x40eb45 */ if (fZ) goto L_0040eb45;
L_0040eb31:; BB(0x0040eb31);
    /* 0040eb31: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eb33: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0040eb36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040eb38: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0040eb3b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40eb3du); call_ind(t); }
    /* 0040eb3d: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0040eb43: jmp 0x40eb4f */ goto L_0040eb4f;
L_0040eb45:; BB(0x0040eb45);
    /* 0040eb45: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0040eb4f:; BB(0x0040eb4f);
    /* 0040eb4f: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040eb52: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0040eb59:; BB(0x0040eb59);
    /* 0040eb59: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040eb5c: cmp dword ptr [ecx + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eb60: je 0x40eb9f */ if (fZ) goto L_0040eb9f;
L_0040eb62:; BB(0x0040eb62);
    /* 0040eb62: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040eb65: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0040eb68: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0040eb6b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0040eb6e: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0040eb71: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eb75: je 0x40eb8b */ if (fZ) goto L_0040eb8b;
L_0040eb77:; BB(0x0040eb77);
    /* 0040eb77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eb79: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0040eb7c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040eb7e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0040eb81: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x40eb83u); call_ind(t); }
    /* 0040eb83: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0040eb89: jmp 0x40eb95 */ goto L_0040eb95;
L_0040eb8b:; BB(0x0040eb8b);
    /* 0040eb8b: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0040eb95:; BB(0x0040eb95);
    /* 0040eb95: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040eb98: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
L_0040eb9f:; BB(0x0040eb9f);
    /* 0040eb9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040eba6: jmp 0x40ebb1 */ goto L_0040ebb1;
L_0040eba8:; BB(0x0040eba8);
    /* 0040eba8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ebab: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040ebae: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0040ebb1:; BB(0x0040ebb1);
    /* 0040ebb1: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ebb5: jge 0x40ec25 */ if ((fS==fO)) goto L_0040ec25;
L_0040ebb7:; BB(0x0040ebb7);
    /* 0040ebb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ebba: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ebbd: cmp dword ptr [ecx + eax*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ebc2: je 0x40ec23 */ if (fZ) goto L_0040ec23;
L_0040ebc4:; BB(0x0040ebc4);
    /* 0040ebc4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ebc7: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ebca: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0040ebce: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ebd2: je 0x40ebde */ if (fZ) goto L_0040ebde;
L_0040ebd4:; BB(0x0040ebd4);
    /* 0040ebd4: mov dword ptr [0x6f5b38], 0 */ W32((u32)(0x6f5b38u), 0x0u);
L_0040ebde:; BB(0x0040ebde);
    /* 0040ebde: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ebe1: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ebe4: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0040ebe8: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0040ebeb: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040ebee: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0040ebf1: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ebf5: je 0x40ec0b */ if (fZ) goto L_0040ec0b;
L_0040ebf7:; BB(0x0040ebf7);
    /* 0040ebf7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ebf9: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0040ebfc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040ebfe: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0040ec01: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40ec03u); call_ind(t); }
    /* 0040ec03: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0040ec09: jmp 0x40ec15 */ goto L_0040ec15;
L_0040ec0b:; BB(0x0040ec0b);
    /* 0040ec0b: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0040ec15:; BB(0x0040ec15);
    /* 0040ec15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ec18: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ec1b: mov dword ptr [ecx + eax*4 + 0xc], 0 */ W32((u32)(r_ecx+r_eax*4+0xcu), 0x0u);
L_0040ec23:; BB(0x0040ec23);
    /* 0040ec23: jmp 0x40eba8 */ goto L_0040eba8;
L_0040ec25:; BB(0x0040ec25);
    /* 0040ec25: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040ec2c: jmp 0x40ec37 */ goto L_0040ec37;
L_0040ec2e:; BB(0x0040ec2e);
    /* 0040ec2e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ec31: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040ec34: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0040ec37:; BB(0x0040ec37);
    /* 0040ec37: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ec3b: jge 0x40ec91 */ if ((fS==fO)) goto L_0040ec91;
L_0040ec3d:; BB(0x0040ec3d);
    /* 0040ec3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ec40: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ec43: cmp dword ptr [ecx + eax*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ec48: je 0x40ec8f */ if (fZ) goto L_0040ec8f;
L_0040ec4a:; BB(0x0040ec4a);
    /* 0040ec4a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ec4d: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ec50: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0040ec54: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0040ec57: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0040ec5a: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0040ec5d: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ec61: je 0x40ec77 */ if (fZ) goto L_0040ec77;
L_0040ec63:; BB(0x0040ec63);
    /* 0040ec63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec65: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0040ec68: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040ec6a: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040ec6d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40ec6fu); call_ind(t); }
    /* 0040ec6f: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0040ec75: jmp 0x40ec81 */ goto L_0040ec81;
L_0040ec77:; BB(0x0040ec77);
    /* 0040ec77: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_0040ec81:; BB(0x0040ec81);
    /* 0040ec81: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ec84: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ec87: mov dword ptr [ecx + eax*4 + 0x20], 0 */ W32((u32)(r_ecx+r_eax*4+0x20u), 0x0u);
L_0040ec8f:; BB(0x0040ec8f);
    /* 0040ec8f: jmp 0x40ec2e */ goto L_0040ec2e;
L_0040ec91:; BB(0x0040ec91);
    /* 0040ec91: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040ec94: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x40ec99u); f_005dfc0f();
    /* 0040ec99: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ec9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ec9c: ret  */ FN_RET(0x0040e8a0); r_esp += 4; return;
}

void f_0040ec9d(void) /* FUN_0040ec9d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040ec9d);
    /* 0040ec9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec9e: mov ebp, esp */ r_ebp = r_esp;
    /* 0040eca0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040eca1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040eca4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eca6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040eca9: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x40ecaeu); f_0040f7d4();
    /* 0040ecae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ecb1: call 0x40ed2d */ r_esp -= 4; W32(r_esp, 0x40ecb6u); f_0040ed2d();
    /* 0040ecb6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ecb9: call 0x40f0a3 */ r_esp -= 4; W32(r_esp, 0x40ecbeu); f_0040f0a3();
    /* 0040ecbe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ecc1: call 0x40f13b */ r_esp -= 4; W32(r_esp, 0x40ecc6u); f_0040f13b();
    /* 0040ecc6: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eccd: jne 0x40ecda */ if (!fZ) goto L_0040ecda;
L_0040eccf:; BB(0x0040eccf);
    /* 0040eccf: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040ecd5: call 0x44912b */ r_esp -= 4; W32(r_esp, 0x40ecdau); f_0044912b();
L_0040ecda:; BB(0x0040ecda);
    /* 0040ecda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ecdd: call 0x40f208 */ r_esp -= 4; W32(r_esp, 0x40ece2u); f_0040f208();
    /* 0040ece2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ece5: call 0x410330 */ r_esp -= 4; W32(r_esp, 0x40eceau); f_00410330();
    /* 0040ecea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ecec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ecef: call 0x40f9ab */ r_esp -= 4; W32(r_esp, 0x40ecf4u); f_0040f9ab();
    /* 0040ecf4: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ecfb: jne 0x40ed15 */ if (!fZ) goto L_0040ed15;
L_0040ecfd:; BB(0x0040ecfd);
    /* 0040ecfd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ecff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed01: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed03: push 0xfb3 */ { u32 v = 0xfb3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed08: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040ed0d: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0040ed10: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x40ed15u); f_005e8389();
L_0040ed15:; BB(0x0040ed15);
    /* 0040ed15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ed18: cmp dword ptr [ecx + 0xbc], 0 */ {  u32 a = R32((u32)(r_ecx+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ed1f: je 0x40ed29 */ if (fZ) goto L_0040ed29;
L_0040ed21:; BB(0x0040ed21);
    /* 0040ed21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ed24: call 0x4130f0 */ r_esp -= 4; W32(r_esp, 0x40ed29u); f_004130f0();
L_0040ed29:; BB(0x0040ed29);
    /* 0040ed29: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ed2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ed2c: ret  */ FN_RET(0x0040ec9d); r_esp += 4; return;
}

void f_0040ed2d(void) /* FUN_0040ed2d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040ed2d);
    /* 0040ed2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed2e: mov ebp, esp */ r_ebp = r_esp;
    /* 0040ed30: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040ed33: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040ed36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed3a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0040ed40: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x40ed45u); f_0045c4ac();
    /* 0040ed45: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040ed48: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ed4f: je 0x40ee24 */ if (fZ) goto L_0040ee24;
L_0040ed55:; BB(0x0040ed55);
    /* 0040ed55: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ed58: mov dword ptr [eax + 0x7c], 4 */ W32((u32)(r_eax+0x7cu), 0x4u);
    /* 0040ed5f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ed62: mov dword ptr [ecx + 0x80], 6 */ W32((u32)(r_ecx+0x80u), 0x6u);
    /* 0040ed6c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ed6f: mov dword ptr [edx + 0x88], 0 */ W32((u32)(r_edx+0x88u), 0x0u);
    /* 0040ed79: mov dword ptr [edx + 0x8c], 0x40490000 */ W32((u32)(r_edx+0x8cu), 0x40490000u);
    /* 0040ed83: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ed86: mov dword ptr [eax + 0x90], 1 */ W32((u32)(r_eax+0x90u), 0x1u);
    /* 0040ed90: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ed93: mov dword ptr [ecx + 0x94], 1 */ W32((u32)(r_ecx+0x94u), 0x1u);
    /* 0040ed9d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040eda0: mov dword ptr [edx + 0x98], 0 */ W32((u32)(r_edx+0x98u), 0x0u);
    /* 0040edaa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040edad: mov dword ptr [eax + 0x9c], 3 */ W32((u32)(r_eax+0x9cu), 0x3u);
    /* 0040edb7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040edba: mov dword ptr [ecx + 0xa0], 1 */ W32((u32)(r_ecx+0xa0u), 0x1u);
    /* 0040edc4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040edc7: mov dword ptr [edx + 0xa4], 1 */ W32((u32)(r_edx+0xa4u), 0x1u);
    /* 0040edd1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040edd4: mov dword ptr [eax + 0xa8], 4 */ W32((u32)(r_eax+0xa8u), 0x4u);
    /* 0040edde: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ede1: mov dword ptr [ecx + 0xc4], 1 */ W32((u32)(r_ecx+0xc4u), 0x1u);
    /* 0040edeb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040edee: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 0040edf8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040edfb: mov dword ptr [eax + 0xb4], 1 */ W32((u32)(r_eax+0xb4u), 0x1u);
    /* 0040ee05: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ee08: mov dword ptr [ecx + 0xb8], 1 */ W32((u32)(r_ecx+0xb8u), 0x1u);
    /* 0040ee12: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ee15: mov dword ptr [edx + 0xbc], 0 */ W32((u32)(r_edx+0xbcu), 0x0u);
    /* 0040ee1f: jmp 0x40f07f */ goto L_0040f07f;
L_0040ee24:; BB(0x0040ee24);
    /* 0040ee24: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040ee2a: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x40ee2fu); f_00448ca3();
    /* 0040ee2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ee31: je 0x40eee9 */ if (fZ) goto L_0040eee9;
L_0040ee37:; BB(0x0040ee37);
    /* 0040ee37: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ee3a: mov dword ptr [eax + 0x7c], 4 */ W32((u32)(r_eax+0x7cu), 0x4u);
    /* 0040ee41: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ee44: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040ee4a: mov eax, dword ptr [edx + 0x1c9c] */ r_eax = R32((u32)(r_edx+0x1c9cu));
    /* 0040ee50: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 0040ee56: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ee59: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 0040ee63: mov dword ptr [ecx + 0x8c], 0x40540000 */ W32((u32)(r_ecx+0x8cu), 0x40540000u);
    /* 0040ee6d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ee70: mov dword ptr [edx + 0x90], 1 */ W32((u32)(r_edx+0x90u), 0x1u);
    /* 0040ee7a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ee7d: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 0040ee87: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ee8a: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 0040ee94: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ee97: mov dword ptr [edx + 0x9c], 3 */ W32((u32)(r_edx+0x9cu), 0x3u);
    /* 0040eea1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040eea4: mov dword ptr [eax + 0xa0], 1 */ W32((u32)(r_eax+0xa0u), 0x1u);
    /* 0040eeae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040eeb1: mov dword ptr [ecx + 0xa4], 1 */ W32((u32)(r_ecx+0xa4u), 0x1u);
    /* 0040eebb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040eebe: mov dword ptr [edx + 0xa8], 4 */ W32((u32)(r_edx+0xa8u), 0x4u);
    /* 0040eec8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040eecb: call 0x40f68c */ r_esp -= 4; W32(r_esp, 0x40eed0u); f_0040f68c();
    /* 0040eed0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eed2: je 0x40eee4 */ if (fZ) goto L_0040eee4;
L_0040eed4:; BB(0x0040eed4);
    /* 0040eed4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040eed7: movsx ecx, byte ptr [eax + 0xf] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xfu));
    /* 0040eedb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040eede: mov dword ptr [edx + 0xc4], ecx */ W32((u32)(r_edx+0xc4u), r_ecx);
L_0040eee4:; BB(0x0040eee4);
    /* 0040eee4: jmp 0x40f02f */ goto L_0040f02f;
L_0040eee9:; BB(0x0040eee9);
    /* 0040eee9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040eeec: call 0x40f68c */ r_esp -= 4; W32(r_esp, 0x40eef1u); f_0040f68c();
    /* 0040eef1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eef3: je 0x40f02f */ if (fZ) goto L_0040f02f;
L_0040eef9:; BB(0x0040eef9);
    /* 0040eef9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040eefc: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0040eeff: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ef02: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 0040ef05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ef08: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0040ef0c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ef0f: cmp dword ptr [edx + 0x80], ecx */ {  u32 a = R32((u32)(r_edx+0x80u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ef15: je 0x40ef2f */ if (fZ) goto L_0040ef2f;
L_0040ef17:; BB(0x0040ef17);
    /* 0040ef17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ef1a: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0040ef1e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ef21: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
    /* 0040ef27: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ef2a: call 0x40f0a3 */ r_esp -= 4; W32(r_esp, 0x40ef2fu); f_0040f0a3();
L_0040ef2f:; BB(0x0040ef2f);
    /* 0040ef2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ef32: movsx ecx, byte ptr [eax + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x2u));
    /* 0040ef36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040ef39: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 0040ef3c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ef3f: fstp qword ptr [edx + 0x88] */ W_F64((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 0040ef45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ef48: movsx ecx, byte ptr [eax + 3] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x3u));
    /* 0040ef4c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ef4f: mov dword ptr [edx + 0x90], ecx */ W32((u32)(r_edx+0x90u), r_ecx);
    /* 0040ef55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ef58: movsx ecx, byte ptr [eax + 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x4u));
    /* 0040ef5c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ef5f: mov dword ptr [edx + 0x94], ecx */ W32((u32)(r_edx+0x94u), r_ecx);
    /* 0040ef65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ef68: movsx ecx, byte ptr [eax + 5] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x5u));
    /* 0040ef6c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ef6f: mov dword ptr [edx + 0x98], ecx */ W32((u32)(r_edx+0x98u), r_ecx);
    /* 0040ef75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ef78: movsx ecx, byte ptr [eax + 6] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x6u));
    /* 0040ef7c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ef7f: mov dword ptr [edx + 0x9c], ecx */ W32((u32)(r_edx+0x9cu), r_ecx);
    /* 0040ef85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ef88: movsx ecx, byte ptr [eax + 7] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x7u));
    /* 0040ef8c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ef8f: mov dword ptr [edx + 0xa0], ecx */ W32((u32)(r_edx+0xa0u), r_ecx);
    /* 0040ef95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ef98: movsx ecx, byte ptr [eax + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x8u));
    /* 0040ef9c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ef9f: mov dword ptr [edx + 0xa4], ecx */ W32((u32)(r_edx+0xa4u), r_ecx);
    /* 0040efa5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040efa8: movsx ecx, byte ptr [eax + 9] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x9u));
    /* 0040efac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040efaf: mov dword ptr [edx + 0xa8], ecx */ W32((u32)(r_edx+0xa8u), r_ecx);
    /* 0040efb5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040efb8: movsx ecx, byte ptr [eax + 0xf] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xfu));
    /* 0040efbc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040efbf: mov dword ptr [edx + 0xc4], ecx */ W32((u32)(r_edx+0xc4u), r_ecx);
    /* 0040efc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040efc7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0040efcd: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x40efd2u); f_0045c419();
    /* 0040efd2: movsx eax, byte ptr [eax + 0x92] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x92u));
    /* 0040efd9: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0040efdb: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0040efdd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040efde: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040efe1: cmp dword ptr [ecx + 0xac], eax */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040efe7: je 0x40f02f */ if (fZ) goto L_0040f02f;
L_0040efe9:; BB(0x0040efe9);
    /* 0040efe9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040efeb: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0040eff1: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x40eff6u); f_0045c419();
    /* 0040eff6: movsx edx, byte ptr [eax + 0x92] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x92u));
    /* 0040effd: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0040efff: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0040f001: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f002: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f005: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 0040f00b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f00e: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f015: je 0x40f024 */ if (fZ) goto L_0040f024;
L_0040f017:; BB(0x0040f017);
    /* 0040f017: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040f01d: call 0x44a94b */ r_esp -= 4; W32(r_esp, 0x40f022u); f_0044a94b();
    /* 0040f022: jmp 0x40f02f */ goto L_0040f02f;
L_0040f024:; BB(0x0040f024);
    /* 0040f024: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040f02a: call 0x44a84f */ r_esp -= 4; W32(r_esp, 0x40f02fu); f_0044a84f();
L_0040f02f:; BB(0x0040f02f);
    /* 0040f02f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f032: movsx eax, byte ptr [edx + 0xa] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xau));
    /* 0040f036: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f039: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 0040f03f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f042: movsx eax, byte ptr [edx + 0xb] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xbu));
    /* 0040f046: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f049: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
    /* 0040f04f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f052: movsx eax, byte ptr [edx + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xcu));
    /* 0040f056: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f059: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0040f05f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f062: movsx eax, byte ptr [edx + 0xd] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xdu));
    /* 0040f066: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f069: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0040f06f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f072: movsx eax, byte ptr [edx + 0xe] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xeu));
    /* 0040f076: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f079: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
L_0040f07f:; BB(0x0040f07f);
    /* 0040f07f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f082: cmp dword ptr [edx + 0xbc], 0 */ {  u32 a = R32((u32)(r_edx+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f089: jne 0x40f09f */ if (!fZ) goto L_0040f09f;
L_0040f08b:; BB(0x0040f08b);
    /* 0040f08b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f08e: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f092: je 0x40f09f */ if (fZ) goto L_0040f09f;
L_0040f094:; BB(0x0040f094);
    /* 0040f094: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f097: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0040f09a: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x40f09fu); f_005e03cc();
L_0040f09f:; BB(0x0040f09f);
    /* 0040f09f: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f0a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f0a2: ret  */ FN_RET(0x0040ed2d); r_esp += 4; return;
}

void f_0040f0a3(void) /* FUN_0040f0a3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f0a3);
    /* 0040f0a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f0a4: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f0a6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040f0a9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040f0ac: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f0af: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f0b3: je 0x40f0ec */ if (fZ) goto L_0040f0ec;
L_0040f0b5:; BB(0x0040f0b5);
    /* 0040f0b5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f0b8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0040f0bb: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040f0be: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f0c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040f0c4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f0c8: je 0x40f0db */ if (fZ) goto L_0040f0db;
L_0040f0ca:; BB(0x0040f0ca);
    /* 0040f0ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f0cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f0cf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040f0d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f0d4: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40f0d6u); call_ind(t); }
    /* 0040f0d6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040f0d9: jmp 0x40f0e2 */ goto L_0040f0e2;
L_0040f0db:; BB(0x0040f0db);
    /* 0040f0db: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0040f0e2:; BB(0x0040f0e2);
    /* 0040f0e2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f0e5: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
L_0040f0ec:; BB(0x0040f0ec);
    /* 0040f0ec: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040f0ee: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40f0f3u); f_0048ab58();
    /* 0040f0f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f0f6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040f0f9: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f0fd: je 0x40f116 */ if (fZ) goto L_0040f116;
L_0040f0ff:; BB(0x0040f0ff);
    /* 0040f0ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f102: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 0040f108: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f109: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040f10c: call 0x40a514 */ r_esp -= 4; W32(r_esp, 0x40f111u); f_0040a514();
    /* 0040f111: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0040f114: jmp 0x40f11d */ goto L_0040f11d;
L_0040f116:; BB(0x0040f116);
    /* 0040f116: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0040f11d:; BB(0x0040f11d);
    /* 0040f11d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f120: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040f123: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0040f126: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f129: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0040f12c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f12f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0040f132: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040f134: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x40f137u); call_ind(t); }
    /* 0040f137: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f13a: ret  */ FN_RET(0x0040f0a3); r_esp += 4; return;
}

void f_0040f13b(void) /* FUN_0040f13b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f13b);
    /* 0040f13b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f13c: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f13e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040f141: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040f144: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 0040f14b: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0040f152: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040f159: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 0040f160: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 0040f167: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040f16e: jmp 0x40f179 */ goto L_0040f179;
L_0040f170:; BB(0x0040f170);
    /* 0040f170: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f173: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040f176: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040f179:; BB(0x0040f179);
    /* 0040f179: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f17d: jge 0x40f204 */ if ((fS==fO)) goto L_0040f204;
L_0040f183:; BB(0x0040f183);
    /* 0040f183: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f186: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 0040f18a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040f18d: cmp dword ptr [eax + edx*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f192: jne 0x40f1ec */ if (!fZ) goto L_0040f1ec;
L_0040f194:; BB(0x0040f194);
    /* 0040f194: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f199: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40f19eu); f_0048ab58();
    /* 0040f19e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f1a1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040f1a4: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f1a8: je 0x40f1c1 */ if (fZ) goto L_0040f1c1;
L_0040f1aa:; BB(0x0040f1aa);
    /* 0040f1aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f1ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f1af: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 0040f1b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f1b4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040f1b7: call 0x40c6cf */ r_esp -= 4; W32(r_esp, 0x40f1bcu); f_0040c6cf();
    /* 0040f1bc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040f1bf: jmp 0x40f1c8 */ goto L_0040f1c8;
L_0040f1c1:; BB(0x0040f1c1);
    /* 0040f1c1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0040f1c8:; BB(0x0040f1c8);
    /* 0040f1c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f1cb: mov ecx, dword ptr [ebp + eax*4 - 0x18] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 0040f1cf: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040f1d2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f1d5: mov dword ptr [edx + ecx*4 + 0xc], eax */ W32((u32)(r_edx+r_ecx*4+0xcu), r_eax);
    /* 0040f1d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f1dc: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 0040f1e0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040f1e3: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0040f1e7: call 0x40c8cf */ r_esp -= 4; W32(r_esp, 0x40f1ecu); f_0040c8cf();
L_0040f1ec:; BB(0x0040f1ec);
    /* 0040f1ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f1ef: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 0040f1f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040f1f6: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0040f1fa: call 0x40ccd2 */ r_esp -= 4; W32(r_esp, 0x40f1ffu); f_0040ccd2();
    /* 0040f1ff: jmp 0x40f170 */ goto L_0040f170;
L_0040f204:; BB(0x0040f204);
    /* 0040f204: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f206: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f207: ret  */ FN_RET(0x0040f13b); r_esp += 4; return;
}

void f_0040f208(void) /* FUN_0040f208 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f208);
    /* 0040f208: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f209: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f20b: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040f20e: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0040f211: mov dword ptr [ebp - 0x20], 0x1ef */ W32((u32)(r_ebp+0xffffffe0u), 0x1efu);
    /* 0040f218: mov dword ptr [ebp - 0x1c], 0xeb */ W32((u32)(r_ebp+0xffffffe4u), 0xebu);
    /* 0040f21f: mov dword ptr [ebp - 0x18], 0x16b */ W32((u32)(r_ebp+0xffffffe8u), 0x16bu);
    /* 0040f226: mov dword ptr [ebp - 0x14], 0x131 */ W32((u32)(r_ebp+0xffffffecu), 0x131u);
    /* 0040f22d: mov dword ptr [ebp - 0x10], 0xcb */ W32((u32)(r_ebp+0xfffffff0u), 0xcbu);
    /* 0040f234: mov dword ptr [ebp - 0xc], 0x132 */ W32((u32)(r_ebp+0xfffffff4u), 0x132u);
    /* 0040f23b: mov dword ptr [ebp - 8], 0x46 */ W32((u32)(r_ebp+0xfffffff8u), 0x46u);
    /* 0040f242: mov dword ptr [ebp - 4], 0xea */ W32((u32)(r_ebp+0xfffffffcu), 0xeau);
    /* 0040f249: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0040f250: jmp 0x40f25b */ goto L_0040f25b;
L_0040f252:; BB(0x0040f252);
    /* 0040f252: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f255: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040f258: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0040f25b:; BB(0x0040f25b);
    /* 0040f25b: cmp dword ptr [ebp - 0x24], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f25f: jge 0x40f3e9 */ if ((fS==fO)) goto L_0040f3e9;
L_0040f265:; BB(0x0040f265);
    /* 0040f265: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f268: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f26b: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f270: jne 0x40f366 */ if (!fZ) goto L_0040f366;
L_0040f276:; BB(0x0040f276);
    /* 0040f276: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f27b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40f280u); f_0048ab58();
    /* 0040f280: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f283: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0040f286: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f28a: je 0x40f299 */ if (fZ) goto L_0040f299;
L_0040f28c:; BB(0x0040f28c);
    /* 0040f28c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040f28f: call 0x40de1d */ r_esp -= 4; W32(r_esp, 0x40f294u); f_0040de1d();
    /* 0040f294: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0040f297: jmp 0x40f2a0 */ goto L_0040f2a0;
L_0040f299:; BB(0x0040f299);
    /* 0040f299: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0040f2a0:; BB(0x0040f2a0);
    /* 0040f2a0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f2a3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f2a6: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040f2a9: mov dword ptr [ecx + eax*4 + 0x20], edx */ W32((u32)(r_ecx+r_eax*4+0x20u), r_edx);
    /* 0040f2ad: push 0x138e */ { u32 v = 0x138eu; r_esp -= 4; W32(r_esp, v); }
    /* 0040f2b2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f2b5: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f2b8: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040f2bc: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40f2c1u); f_005ea0c3();
    /* 0040f2c1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f2c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f2c5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f2c8: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f2cb: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040f2cf: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40f2d4u); f_005ea1cf();
    /* 0040f2d4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f2d7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f2da: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0040f2de: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f2e1: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f2e4: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0040f2e8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040f2ea: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x40f2edu); call_ind(t); }
    /* 0040f2ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f2ef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f2f2: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f2f5: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0040f2f9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f2fc: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f2ff: mov eax, dword ptr [edx + eax*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20u));
    /* 0040f303: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f305: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40f308u); call_ind(t); }
    /* 0040f308: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f30a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f30d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f310: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040f314: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x40f319u); f_005ea454();
    /* 0040f319: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f31c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f31d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f320: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f323: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040f327: call 0x427edf */ r_esp -= 4; W32(r_esp, 0x40f32cu); f_00427edf();
    /* 0040f32c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f32f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f332: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0040f336: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f339: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f33c: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0040f340: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040f342: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x40f345u); call_ind(t); }
    /* 0040f345: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f347: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f349: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f34c: add ecx, 0x1391 */ {  u32 a = r_ecx; u32 b = 0x1391u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040f352: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f353: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f355: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f357: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f35a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f35d: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0040f361: call 0x427f36 */ r_esp -= 4; W32(r_esp, 0x40f366u); f_00427f36();
L_0040f366:; BB(0x0040f366);
    /* 0040f366: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f369: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f36c: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0040f370: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f373: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f376: mov eax, dword ptr [edx + eax*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20u));
    /* 0040f37a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f37c: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x40f37fu); call_ind(t); }
    /* 0040f37f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f381: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f383: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f386: mov ecx, dword ptr [ebp + eax*8 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffe4u));
    /* 0040f38a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f38b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f38e: mov eax, dword ptr [ebp + edx*8 - 0x20] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffe0u));
    /* 0040f392: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f393: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f396: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f399: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0040f39d: call 0x428724 */ r_esp -= 4; W32(r_esp, 0x40f3a2u); f_00428724();
    /* 0040f3a2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0040f3a9: jmp 0x40f3b4 */ goto L_0040f3b4;
L_0040f3ab:; BB(0x0040f3ab);
    /* 0040f3ab: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040f3ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040f3b1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_0040f3b4:; BB(0x0040f3b4);
    /* 0040f3b4: cmp dword ptr [ebp - 0x28], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f3b8: jge 0x40f3e4 */ if ((fS==fO)) goto L_0040f3e4;
L_0040f3ba:; BB(0x0040f3ba);
    /* 0040f3ba: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040f3bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f3be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f3c0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f3c3: mov eax, dword ptr [ebp + edx*8 - 0x1c] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffe4u));
    /* 0040f3c7: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040f3ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f3cb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f3ce: mov edx, dword ptr [ebp + ecx*8 - 0x20] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffe0u));
    /* 0040f3d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f3d3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f3d6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f3d9: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040f3dd: call 0x42877e */ r_esp -= 4; W32(r_esp, 0x40f3e2u); f_0042877e();
    /* 0040f3e2: jmp 0x40f3ab */ goto L_0040f3ab;
L_0040f3e4:; BB(0x0040f3e4);
    /* 0040f3e4: jmp 0x40f252 */ goto L_0040f252;
L_0040f3e9:; BB(0x0040f3e9);
    /* 0040f3e9: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f3ec: cmp dword ptr [edx + 0x38], 0 */ {  u32 a = R32((u32)(r_edx+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f3f0: jne 0x40f422 */ if (!fZ) goto L_0040f422;
L_0040f3f2:; BB(0x0040f3f2);
    /* 0040f3f2: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f3f4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40f3f9u); f_0048ab58();
    /* 0040f3f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f3fc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0040f3ff: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f403: je 0x40f412 */ if (fZ) goto L_0040f412;
L_0040f405:; BB(0x0040f405);
    /* 0040f405: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040f408: call 0x4164fd */ r_esp -= 4; W32(r_esp, 0x40f40du); f_004164fd();
    /* 0040f40d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040f410: jmp 0x40f419 */ goto L_0040f419;
L_0040f412:; BB(0x0040f412);
    /* 0040f412: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0040f419:; BB(0x0040f419);
    /* 0040f419: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f41c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040f41f: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
L_0040f422:; BB(0x0040f422);
    /* 0040f422: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f424: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f427: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0040f42a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f42d: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0040f430: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040f432: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x40f435u); call_ind(t); }
    /* 0040f435: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f438: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 0040f43b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f43e: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0040f441: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f443: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x40f446u); call_ind(t); }
    /* 0040f446: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f449: cmp dword ptr [eax + 0x50], 0 */ {  u32 a = R32((u32)(r_eax+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f44d: jne 0x40f47f */ if (!fZ) goto L_0040f47f;
L_0040f44f:; BB(0x0040f44f);
    /* 0040f44f: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040f451: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40f456u); f_0048ab58();
    /* 0040f456: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f459: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0040f45c: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f460: je 0x40f46f */ if (fZ) goto L_0040f46f;
L_0040f462:; BB(0x0040f462);
    /* 0040f462: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0040f465: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x40f46au); f_005e9d30();
    /* 0040f46a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0040f46d: jmp 0x40f476 */ goto L_0040f476;
L_0040f46f:; BB(0x0040f46f);
    /* 0040f46f: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0040f476:; BB(0x0040f476);
    /* 0040f476: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f479: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0040f47c: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
L_0040f47f:; BB(0x0040f47f);
    /* 0040f47f: push 0x13a1 */ { u32 v = 0x13a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f484: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f487: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040f48a: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40f48fu); f_005ea0c3();
    /* 0040f48f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f491: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f494: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0040f497: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40f49cu); f_005ea1cf();
    /* 0040f49c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040f49e: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f4a1: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 0040f4a4: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f4a7: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0040f4aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040f4ac: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x40f4afu); call_ind(t); }
    /* 0040f4af: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f4b2: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0040f4b5: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f4b8: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040f4bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f4bd: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x40f4c0u); call_ind(t); }
    /* 0040f4c0: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f4c3: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040f4c6: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f4c9: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0040f4cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f4ce: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x40f4d1u); call_ind(t); }
    /* 0040f4d1: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f4d4: cmp dword ptr [eax + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f4d8: jne 0x40f557 */ if (!fZ) goto L_0040f557;
L_0040f4da:; BB(0x0040f4da);
    /* 0040f4da: push 0x3104 */ { u32 v = 0x3104u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f4df: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40f4e4u); f_0048ab58();
    /* 0040f4e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f4e7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0040f4ea: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f4ee: je 0x40f509 */ if (fZ) goto L_0040f509;
L_0040f4f0:; BB(0x0040f4f0);
    /* 0040f4f0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040f4f3: call 0x4247c0 */ r_esp -= 4; W32(r_esp, 0x40f4f8u); f_004247c0();
    /* 0040f4f8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040f4fb: mov dword ptr [ecx], 0x633974 */ W32((u32)(r_ecx), 0x633974u);
    /* 0040f501: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040f504: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0040f507: jmp 0x40f510 */ goto L_0040f510;
L_0040f509:; BB(0x0040f509);
    /* 0040f509: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0040f510:; BB(0x0040f510);
    /* 0040f510: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f513: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040f516: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 0040f519: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f51b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f51e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 0040f521: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40f526u); f_005ea0c3();
    /* 0040f526: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f528: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f52b: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0040f52e: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40f533u); f_005ea1cf();
    /* 0040f533: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f535: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f538: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 0040f53b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f53e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0040f541: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f543: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40f546u); call_ind(t); }
    /* 0040f546: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f549: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0040f54c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f54f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0040f552: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f554: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x40f557u); call_ind(t); }
L_0040f557:; BB(0x0040f557);
    /* 0040f557: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f55a: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0040f55d: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f560: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0040f563: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f565: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x40f568u); call_ind(t); }
    /* 0040f568: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f56b: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f56f: jne 0x40f5e2 */ if (!fZ) goto L_0040f5e2;
L_0040f571:; BB(0x0040f571);
    /* 0040f571: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f573: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40f578u); f_0048ab58();
    /* 0040f578: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f57b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0040f57e: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f582: je 0x40f591 */ if (fZ) goto L_0040f591;
L_0040f584:; BB(0x0040f584);
    /* 0040f584: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040f587: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x40f58cu); f_005e3fb0();
    /* 0040f58c: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0040f58f: jmp 0x40f598 */ goto L_0040f598;
L_0040f591:; BB(0x0040f591);
    /* 0040f591: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0040f598:; BB(0x0040f598);
    /* 0040f598: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f59b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0040f59e: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 0040f5a1: push 0x13a3 */ { u32 v = 0x13a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f5a6: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f5a9: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0040f5ac: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40f5b1u); f_005ea0c3();
    /* 0040f5b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f5b3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f5b6: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0040f5b9: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40f5beu); f_005ea1cf();
    /* 0040f5be: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f5c0: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f5c3: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0040f5c6: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f5c9: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0040f5cc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040f5ce: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x40f5d1u); call_ind(t); }
    /* 0040f5d1: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f5d4: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0040f5d7: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f5da: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0040f5dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f5df: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x40f5e2u); call_ind(t); }
L_0040f5e2:; BB(0x0040f5e2);
    /* 0040f5e2: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f5e5: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0040f5e8: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f5eb: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0040f5ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f5f0: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x40f5f3u); call_ind(t); }
    /* 0040f5f3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f5f6: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f5fa: jne 0x40f66d */ if (!fZ) goto L_0040f66d;
L_0040f5fc:; BB(0x0040f5fc);
    /* 0040f5fc: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f5fe: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40f603u); f_0048ab58();
    /* 0040f603: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f606: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0040f609: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f60d: je 0x40f61c */ if (fZ) goto L_0040f61c;
L_0040f60f:; BB(0x0040f60f);
    /* 0040f60f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040f612: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x40f617u); f_005e3fb0();
    /* 0040f617: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0040f61a: jmp 0x40f623 */ goto L_0040f623;
L_0040f61c:; BB(0x0040f61c);
    /* 0040f61c: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0040f623:; BB(0x0040f623);
    /* 0040f623: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f626: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0040f629: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 0040f62c: push 0x13a2 */ { u32 v = 0x13a2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f631: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f634: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0040f637: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40f63cu); f_005ea0c3();
    /* 0040f63c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f63e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f641: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0040f644: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40f649u); f_005ea1cf();
    /* 0040f649: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f64b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f64e: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0040f651: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f654: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0040f657: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040f659: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x40f65cu); call_ind(t); }
    /* 0040f65c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f65f: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0040f662: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f665: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0040f668: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f66a: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x40f66du); call_ind(t); }
L_0040f66d:; BB(0x0040f66d);
    /* 0040f66d: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f670: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0040f673: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f676: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0040f679: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f67b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x40f67eu); call_ind(t); }
    /* 0040f67e: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040f681: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
    /* 0040f688: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f68a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f68b: ret  */ FN_RET(0x0040f208); r_esp += 4; return;
}

void f_0040f68c(void) /* FUN_0040f68c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f68c);
    /* 0040f68c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f68d: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f68f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f690: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040f693: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f695: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f698: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x40f69du); f_0040f7fb();
    /* 0040f69d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f69f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f6a0: ret  */ FN_RET(0x0040f68c); r_esp += 4; return;
}

void f_0040f6a1(void) /* FUN_0040f6a1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f6a1);
    /* 0040f6a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f6a2: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f6a4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040f6a7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040f6aa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040f6ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f6af: call 0x40f9ab */ r_esp -= 4; W32(r_esp, 0x40f6b4u); f_0040f9ab();
    /* 0040f6b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f6b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f6b9: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x40f6beu); f_0040f7d4();
    /* 0040f6be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f6c1: call 0x40f13b */ r_esp -= 4; W32(r_esp, 0x40f6c6u); f_0040f13b();
    /* 0040f6c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f6c9: call 0x40ed2d */ r_esp -= 4; W32(r_esp, 0x40f6ceu); f_0040ed2d();
    /* 0040f6ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f6d1: call 0x40f208 */ r_esp -= 4; W32(r_esp, 0x40f6d6u); f_0040f208();
    /* 0040f6d6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040f6dd: jmp 0x40f6e8 */ goto L_0040f6e8;
L_0040f6df:; BB(0x0040f6df);
    /* 0040f6df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f6e2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040f6e5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040f6e8:; BB(0x0040f6e8);
    /* 0040f6e8: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f6ec: jge 0x40f709 */ if ((fS==fO)) goto L_0040f709;
L_0040f6ee:; BB(0x0040f6ee);
    /* 0040f6ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f6f1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f6f4: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0040f6f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f6fb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f6fe: mov eax, dword ptr [edx + eax*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20u));
    /* 0040f702: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f704: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x40f707u); call_ind(t); }
    /* 0040f707: jmp 0x40f6df */ goto L_0040f6df;
L_0040f709:; BB(0x0040f709);
    /* 0040f709: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f710: jne 0x40f7d0 */ if (!fZ) goto L_0040f7d0;
L_0040f716:; BB(0x0040f716);
    /* 0040f716: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f719: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040f71c: call 0x40a7fe */ r_esp -= 4; W32(r_esp, 0x40f721u); f_0040a7fe();
    /* 0040f721: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f723: je 0x40f74f */ if (fZ) goto L_0040f74f;
L_0040f725:; BB(0x0040f725);
    /* 0040f725: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040f727: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f729: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040f72b: push 0xfb3 */ { u32 v = 0xfb3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f730: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040f736: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0040f739: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x40f73eu); f_005e8389();
    /* 0040f73e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f741: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0040f744: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f747: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0040f74a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040f74c: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x40f74fu); call_ind(t); }
L_0040f74f:; BB(0x0040f74f);
    /* 0040f74f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f752: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0040f758: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0040f75b: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 0040f75e: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040f764: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x40f769u); f_00448ca3();
    /* 0040f769: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f76b: je 0x40f79f */ if (fZ) goto L_0040f79f;
L_0040f76d:; BB(0x0040f76d);
    /* 0040f76d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f770: call 0x412fd4 */ r_esp -= 4; W32(r_esp, 0x40f775u); f_00412fd4();
    /* 0040f775: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f778: jl 0x40f784 */ if ((fS!=fO)) goto L_0040f784;
L_0040f77a:; BB(0x0040f77a);
    /* 0040f77a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f77d: call 0x412a82 */ r_esp -= 4; W32(r_esp, 0x40f782u); f_00412a82();
    /* 0040f782: jmp 0x40f78e */ goto L_0040f78e;
L_0040f784:; BB(0x0040f784);
    /* 0040f784: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f786: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f789: call 0x412ada */ r_esp -= 4; W32(r_esp, 0x40f78eu); f_00412ada();
L_0040f78e:; BB(0x0040f78e);
    /* 0040f78e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0040f794: cmp dword ptr [ecx + 0x12ec4], 0 */ {  u32 a = R32((u32)(r_ecx+0x12ec4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f79b: jne 0x40f79f */ if (!fZ) goto L_0040f79f;
L_0040f79d:; BB(0x0040f79d);
    /* 0040f79d: jmp 0x40f7d0 */ goto L_0040f7d0;
L_0040f79f:; BB(0x0040f79f);
    /* 0040f79f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f7a1: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040f7a7: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0040f7aa: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040f7af: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0040f7b2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040f7b4: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x40f7b7u); call_ind(t); }
    /* 0040f7b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f7b9: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040f7bf: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0040f7c2: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040f7c8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040f7cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f7cd: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x40f7d0u); call_ind(t); }
L_0040f7d0:; BB(0x0040f7d0);
    /* 0040f7d0: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f7d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f7d3: ret  */ FN_RET(0x0040f6a1); r_esp += 4; return;
}

void f_0040f7d4(void) /* FUN_0040f7d4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f7d4);
    /* 0040f7d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f7d5: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f7d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f7d8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040f7db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f7de: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040f7e1: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 0040f7e4: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f7e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f7e7: ret 4 */ FN_RET(0x0040f7d4); r_esp += 8; return;
}

void f_0040f7ea(void) /* FUN_0040f7ea */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f7ea);
    /* 0040f7ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f7eb: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f7ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f7ee: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040f7f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f7f4: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 0040f7f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f7f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f7fa: ret  */ FN_RET(0x0040f7ea); r_esp += 4; return;
}

void f_0040f7fb(void) /* FUN_0040f7fb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f7fb);
    /* 0040f7fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f7fc: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f7fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f7ff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040f802: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f805: call 0x40f7ea */ r_esp -= 4; W32(r_esp, 0x40f80au); f_0040f7ea();
    /* 0040f80a: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f80d: jne 0x40f816 */ if (!fZ) goto L_0040f816;
L_0040f80f:; BB(0x0040f80f);
    /* 0040f80f: mov eax, 1 */ r_eax = 0x1u;
    /* 0040f814: jmp 0x40f818 */ goto L_0040f818;
L_0040f816:; BB(0x0040f816);
    /* 0040f816: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040f818:; BB(0x0040f818);
    /* 0040f818: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f81a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f81b: ret 4 */ FN_RET(0x0040f7fb); r_esp += 8; return;
}

void f_0040f81e(void) /* FUN_0040f81e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f81e);
    /* 0040f81e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f81f: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f821: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f822: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040f825: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f828: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x40f82du); f_0040f9c4();
    /* 0040f82d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f830: jle 0x40f862 */ if ((fZ||fS!=fO)) goto L_0040f862;
L_0040f832:; BB(0x0040f832);
    /* 0040f832: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f835: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x40f83au); f_0040f9c4();
    /* 0040f83a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f83d: jge 0x40f862 */ if ((fS==fO)) goto L_0040f862;
L_0040f83f:; BB(0x0040f83f);
    /* 0040f83f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f842: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x40f847u); f_0040f9c4();
    /* 0040f847: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f84a: cmp dword ptr [ecx + eax*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f84f: je 0x40f862 */ if (fZ) goto L_0040f862;
L_0040f851:; BB(0x0040f851);
    /* 0040f851: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f854: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x40f859u); f_0040f9c4();
    /* 0040f859: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f85c: mov eax, dword ptr [edx + eax*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_eax*4+0xcu));
    /* 0040f860: jmp 0x40f864 */ goto L_0040f864;
L_0040f862:; BB(0x0040f862);
    /* 0040f862: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040f864:; BB(0x0040f864);
    /* 0040f864: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f866: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f867: ret  */ FN_RET(0x0040f81e); r_esp += 4; return;
}

void f_0040f868(void) /* FUN_0040f868 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f868);
    /* 0040f868: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f869: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f86b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040f86e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040f871: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f873: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x40f878u); f_0060ee31();
    /* 0040f878: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f87b: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0040f87f: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040f885: jmp 0x40f893 */ goto L_0040f893;
L_0040f887:; BB(0x0040f887);
    /* 0040f887: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0040f88b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0040f88f: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0040f893:; BB(0x0040f893);
    /* 0040f893: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040f897: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f89a: jge 0x40f8f2 */ if ((fS==fO)) goto L_0040f8f2;
L_0040f89c:; BB(0x0040f89c);
    /* 0040f89c: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0040f8a0: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f8a3: jl 0x40f8ab */ if ((fS!=fO)) goto L_0040f8ab;
L_0040f8a5:; BB(0x0040f8a5);
    /* 0040f8a5: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0040f8ab:; BB(0x0040f8ab);
    /* 0040f8ab: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0040f8af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040f8b2: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0040f8b6: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x40f8bbu); f_004259a0();
    /* 0040f8bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f8bd: jne 0x40f8e4 */ if (!fZ) goto L_0040f8e4;
L_0040f8bf:; BB(0x0040f8bf);
    /* 0040f8bf: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0040f8c3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040f8c6: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0040f8ca: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0040f8cd: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x40f8d2u); f_0041f839();
    /* 0040f8d2: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f8d5: je 0x40f8e4 */ if (fZ) goto L_0040f8e4;
L_0040f8d7:; BB(0x0040f8d7);
    /* 0040f8d7: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0040f8db: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040f8de: mov eax, dword ptr [eax + edx*4 + 0xc] */ r_eax = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0040f8e2: jmp 0x40f8f4 */ goto L_0040f8f4;
L_0040f8e4:; BB(0x0040f8e4);
    /* 0040f8e4: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0040f8e8: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0040f8ec: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 0040f8f0: jmp 0x40f887 */ goto L_0040f887;
L_0040f8f2:; BB(0x0040f8f2);
    /* 0040f8f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040f8f4:; BB(0x0040f8f4);
    /* 0040f8f4: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f8f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f8f7: ret  */ FN_RET(0x0040f868); r_esp += 4; return;
}

void f_0040f8f8(void) /* FUN_0040f8f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f8f8);
    /* 0040f8f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f8f9: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f8fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f8fc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040f8ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f902: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 0040f908: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040f90b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f90e: mov dword ptr [edx + 0xd4], ecx */ W32((u32)(r_edx+0xd4u), r_ecx);
    /* 0040f914: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f917: cmp dword ptr [eax + 0xd4], 4 */ {  u32 a = R32((u32)(r_eax+0xd4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f91e: jle 0x40f92d */ if ((fZ||fS!=fO)) goto L_0040f92d;
L_0040f920:; BB(0x0040f920);
    /* 0040f920: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f923: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
L_0040f92d:; BB(0x0040f92d);
    /* 0040f92d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f930: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40f935u); f_0040f81e();
    /* 0040f935: mov ecx, eax */ r_ecx = r_eax;
    /* 0040f937: call 0x40cbbf */ r_esp -= 4; W32(r_esp, 0x40f93cu); f_0040cbbf();
    /* 0040f93c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f93e: jne 0x40f944 */ if (!fZ) goto L_0040f944;
L_0040f940:; BB(0x0040f940);
    /* 0040f940: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f942: jmp 0x40f949 */ goto L_0040f949;
L_0040f944:; BB(0x0040f944);
    /* 0040f944: mov eax, 1 */ r_eax = 0x1u;
L_0040f949:; BB(0x0040f949);
    /* 0040f949: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f94b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f94c: ret  */ FN_RET(0x0040f8f8); r_esp += 4; return;
}

void f_0040f94d(void) /* FUN_0040f94d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f94d);
    /* 0040f94d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f94e: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f950: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f951: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040f954: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f958: je 0x40f964 */ if (fZ) goto L_0040f964;
L_0040f95a:; BB(0x0040f95a);
    /* 0040f95a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040f95c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f95f: call 0x40f9ab */ r_esp -= 4; W32(r_esp, 0x40f964u); f_0040f9ab();
L_0040f964:; BB(0x0040f964);
    /* 0040f964: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f967: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 0040f96d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040f970: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f973: mov dword ptr [edx + 0xd4], ecx */ W32((u32)(r_edx+0xd4u), r_ecx);
    /* 0040f979: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f97c: cmp dword ptr [eax + 0xd4], 4 */ {  u32 a = R32((u32)(r_eax+0xd4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f983: jle 0x40f992 */ if ((fZ||fS!=fO)) goto L_0040f992;
L_0040f985:; BB(0x0040f985);
    /* 0040f985: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f988: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
L_0040f992:; BB(0x0040f992);
    /* 0040f992: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f995: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40f99au); f_0040f81e();
    /* 0040f99a: mov ecx, eax */ r_ecx = r_eax;
    /* 0040f99c: call 0x40cbbf */ r_esp -= 4; W32(r_esp, 0x40f9a1u); f_0040cbbf();
    /* 0040f9a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f9a3: je 0x40f964 */ if (fZ) goto L_0040f964;
L_0040f9a5:; BB(0x0040f9a5);
    /* 0040f9a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f9a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f9a8: ret 4 */ FN_RET(0x0040f94d); r_esp += 8; return;
}

void f_0040f9ab(void) /* FUN_0040f9ab */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f9ab);
    /* 0040f9ab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f9ac: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f9ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f9af: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040f9b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f9b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040f9b8: mov dword ptr [eax + 0xd4], ecx */ W32((u32)(r_eax+0xd4u), r_ecx);
    /* 0040f9be: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f9c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f9c1: ret 4 */ FN_RET(0x0040f9ab); r_esp += 8; return;
}

void f_0040f9c4(void) /* FUN_0040f9c4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f9c4);
    /* 0040f9c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f9c5: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f9c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f9c8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040f9cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f9ce: mov eax, dword ptr [eax + 0xd4] */ r_eax = R32((u32)(r_eax+0xd4u));
    /* 0040f9d4: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f9d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f9d7: ret  */ FN_RET(0x0040f9c4); r_esp += 4; return;
}

void f_0040f9d8(void) /* FUN_0040f9d8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f9d8);
    /* 0040f9d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f9d9: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f9db: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040f9de: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040f9e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f9e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f9e6: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x40f9ebu); f_0040f7fb();
    /* 0040f9eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f9ed: jne 0x40f9f9 */ if (!fZ) goto L_0040f9f9;
L_0040f9ef:; BB(0x0040f9ef);
    /* 0040f9ef: mov eax, 1 */ r_eax = 0x1u;
    /* 0040f9f4: jmp 0x40faa1 */ goto L_0040faa1;
L_0040f9f9:; BB(0x0040f9f9);
    /* 0040f9f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040fa00: jmp 0x40fa0b */ goto L_0040fa0b;
L_0040fa02:; BB(0x0040fa02);
    /* 0040fa02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fa05: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040fa08: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040fa0b:; BB(0x0040fa0b);
    /* 0040fa0b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040fa0f: jge 0x40fa9f */ if ((fS==fO)) goto L_0040fa9f;
L_0040fa15:; BB(0x0040fa15);
    /* 0040fa15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fa18: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fa1b: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0040fa1f: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x40fa24u); f_00425973();
    /* 0040fa24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fa26: jne 0x40fa43 */ if (!fZ) goto L_0040fa43;
L_0040fa28:; BB(0x0040fa28);
    /* 0040fa28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fa2b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fa2e: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040fa32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fa35: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fa38: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0040fa3c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040fa3e: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x40fa41u); call_ind(t); }
    /* 0040fa41: jmp 0x40fa02 */ goto L_0040fa02;
L_0040fa43:; BB(0x0040fa43);
    /* 0040fa43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fa46: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fa49: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0040fa4d: call 0x425a05 */ r_esp -= 4; W32(r_esp, 0x40fa52u); f_00425a05();
    /* 0040fa52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fa54: jne 0x40fa93 */ if (!fZ) goto L_0040fa93;
L_0040fa56:; BB(0x0040fa56);
    /* 0040fa56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fa59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fa5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fa5d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fa60: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0040fa64: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x40fa69u); f_004280b4();
    /* 0040fa69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fa6b: jne 0x40fa93 */ if (!fZ) goto L_0040fa93;
L_0040fa6d:; BB(0x0040fa6d);
    /* 0040fa6d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fa70: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fa73: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0040fa77: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x40fa7cu); f_004259a0();
    /* 0040fa7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fa7e: je 0x40fa9a */ if (fZ) goto L_0040fa9a;
L_0040fa80:; BB(0x0040fa80);
    /* 0040fa80: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fa83: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fa86: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0040fa8a: cmp dword ptr [ecx + 0x104], 0 */ {  u32 a = R32((u32)(r_ecx+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fa91: jne 0x40fa9a */ if (!fZ) goto L_0040fa9a;
L_0040fa93:; BB(0x0040fa93);
    /* 0040fa93: mov eax, 1 */ r_eax = 0x1u;
    /* 0040fa98: jmp 0x40faa1 */ goto L_0040faa1;
L_0040fa9a:; BB(0x0040fa9a);
    /* 0040fa9a: jmp 0x40fa02 */ goto L_0040fa02;
L_0040fa9f:; BB(0x0040fa9f);
    /* 0040fa9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040faa1:; BB(0x0040faa1);
    /* 0040faa1: mov esp, ebp */ r_esp = r_ebp;
    /* 0040faa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040faa4: ret  */ FN_RET(0x0040f9d8); r_esp += 4; return;
}

void f_0040faa5(void) /* FUN_0040faa5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040faa5);
    /* 0040faa5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040faa6: mov ebp, esp */ r_ebp = r_esp;
    /* 0040faa8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040faab: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040faae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040fab5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fab8: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x40fabdu); f_0040f9c4();
    /* 0040fabd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040fac0: jle 0x40fae5 */ if ((fZ||fS!=fO)) goto L_0040fae5;
L_0040fac2:; BB(0x0040fac2);
    /* 0040fac2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fac5: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x40facau); f_0040f9c4();
    /* 0040faca: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040facd: jge 0x40fae5 */ if ((fS==fO)) goto L_0040fae5;
L_0040facf:; BB(0x0040facf);
    /* 0040facf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fad2: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40fad7u); f_0040f81e();
    /* 0040fad7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040fada: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040fadd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fadf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040fae2: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x40fae5u); call_ind(t); }
L_0040fae5:; BB(0x0040fae5);
    /* 0040fae5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fae8: call 0x40f9d8 */ r_esp -= 4; W32(r_esp, 0x40faedu); f_0040f9d8();
    /* 0040faed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040faef: jne 0x40fb3f */ if (!fZ) goto L_0040fb3f;
L_0040faf1:; BB(0x0040faf1);
    /* 0040faf1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040faf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040faf5: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040fafb: call 0x447d8a */ r_esp -= 4; W32(r_esp, 0x40fb00u); f_00447d8a();
    /* 0040fb00: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb02: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fb05: call 0x40f9ab */ r_esp -= 4; W32(r_esp, 0x40fb0au); f_0040f9ab();
    /* 0040fb0a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb0c: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040fb11: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040fb14: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040fb1a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040fb1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fb1f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40fb22u); call_ind(t); }
    /* 0040fb22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb24: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040fb29: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040fb2c: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040fb32: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040fb35: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fb37: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x40fb3au); call_ind(t); }
    /* 0040fb3a: jmp 0x410090 */ goto L_00410090;
L_0040fb3f:; BB(0x0040fb3f);
    /* 0040fb3f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fb42: call 0x40f8f8 */ r_esp -= 4; W32(r_esp, 0x40fb47u); f_0040f8f8();
    /* 0040fb47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fb49: jne 0x40fbf6 */ if (!fZ) goto L_0040fbf6;
L_0040fb4f:; BB(0x0040fb4f);
    /* 0040fb4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb51: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040fb56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fb58: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040fb5e: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x40fb61u); call_ind(t); }
    /* 0040fb61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fb63: je 0x40fbc0 */ if (fZ) goto L_0040fbc0;
L_0040fb65:; BB(0x0040fb65);
    /* 0040fb65: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fb68: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40fb6du); f_0040f81e();
    /* 0040fb6d: mov ecx, eax */ r_ecx = r_eax;
    /* 0040fb6f: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x40fb74u); f_004259a0();
    /* 0040fb74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fb76: je 0x40fb91 */ if (fZ) goto L_0040fb91;
L_0040fb78:; BB(0x0040fb78);
    /* 0040fb78: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fb7b: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40fb80u); f_0040f81e();
    /* 0040fb80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb81: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040fb87: call 0x449908 */ r_esp -= 4; W32(r_esp, 0x40fb8cu); f_00449908();
    /* 0040fb8c: jmp 0x410090 */ goto L_00410090;
L_0040fb91:; BB(0x0040fb91);
    /* 0040fb91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fb94: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40fb99u); f_0040f81e();
    /* 0040fb99: mov ecx, eax */ r_ecx = r_eax;
    /* 0040fb9b: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x40fba0u); f_00425973();
    /* 0040fba0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fba2: je 0x40fbc0 */ if (fZ) goto L_0040fbc0;
L_0040fba4:; BB(0x0040fba4);
    /* 0040fba4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fba7: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40fbacu); f_0040f81e();
    /* 0040fbac: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0040fbaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fbb0: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040fbb6: call 0x44a9db */ r_esp -= 4; W32(r_esp, 0x40fbbbu); f_0044a9db();
    /* 0040fbbb: jmp 0x410090 */ goto L_00410090;
L_0040fbc0:; BB(0x0040fbc0);
    /* 0040fbc0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fbc2: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040fbc8: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0040fbcb: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040fbd1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040fbd4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fbd6: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40fbd9u); call_ind(t); }
    /* 0040fbd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fbdb: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040fbe0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040fbe3: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040fbe9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040fbec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fbee: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x40fbf1u); call_ind(t); }
    /* 0040fbf1: jmp 0x410090 */ goto L_00410090;
L_0040fbf6:; BB(0x0040fbf6);
    /* 0040fbf6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fbf9: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x40fbfeu); f_0040f9c4();
    /* 0040fbfe: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fc01: jne 0x40fd50 */ if (!fZ) goto L_0040fd50;
L_0040fc07:; BB(0x0040fc07);
    /* 0040fc07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc0b: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040fc11: call 0x447d8a */ r_esp -= 4; W32(r_esp, 0x40fc16u); f_00447d8a();
    /* 0040fc16: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fc19: call 0x40f7ea */ r_esp -= 4; W32(r_esp, 0x40fc1eu); f_0040f7ea();
    /* 0040fc1e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040fc21: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040fc25: ja 0x40fd50 */ if ((!fC&&!fZ)) goto L_0040fd50;
L_0040fc2b:; BB(0x0040fc2b);
    /* 0040fc2b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040fc2e: jmp dword ptr [eax*4 + 0x410094] */ { u32 t = R32((u32)(r_eax*4+0x410094u)); switch (t) { case 0x40fd16u: goto L_0040fd16; case 0x40fd0au: goto L_0040fd0a; case 0x40fca6u: goto L_0040fca6; case 0x40fc8du: goto L_0040fc8d; case 0x40fc53u: goto L_0040fc53; case 0x40fd50u: goto L_0040fd50; case 0x40fc44u: goto L_0040fc44; case 0x40fc35u: goto L_0040fc35; case 0x40fdc0u: goto L_0040fdc0; case 0x40fe42u: goto L_0040fe42; case 0x40fe5fu: goto L_0040fe5f; case 0x40fe7cu: goto L_0040fe7c; case 0x40fe99u: goto L_0040fe99; case 0x40ff53u: goto L_0040ff53; case 0x40ffc5u: goto L_0040ffc5; case 0x40ffe2u: goto L_0040ffe2; case 0x40fffcu: goto L_0040fffc; case 0x410016u: goto L_00410016; default: UNSUP(0x0040fc2e, "jump table entry is not a known target"); } }
L_0040fc35:; BB(0x0040fc35);
    /* 0040fc35: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc37: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fc3a: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x40fc3fu); f_0040f7d4();
    /* 0040fc3f: jmp 0x40fd50 */ goto L_0040fd50;
L_0040fc44:; BB(0x0040fc44);
    /* 0040fc44: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc46: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fc49: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x40fc4eu); f_0040f7d4();
    /* 0040fc4e: jmp 0x40fd50 */ goto L_0040fd50;
L_0040fc53:; BB(0x0040fc53);
    /* 0040fc53: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fc56: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0040fc59: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 0040fc5f: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x40fc64u); f_0040c28d();
    /* 0040fc64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fc66: je 0x40fc74 */ if (fZ) goto L_0040fc74;
L_0040fc68:; BB(0x0040fc68);
    /* 0040fc68: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc6a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fc6d: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x40fc72u); f_0040f7d4();
    /* 0040fc72: jmp 0x40fc88 */ goto L_0040fc88;
L_0040fc74:; BB(0x0040fc74);
    /* 0040fc74: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc76: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fc79: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x40fc7eu); f_0040f7d4();
    /* 0040fc7e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc80: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fc83: call 0x40f94d */ r_esp -= 4; W32(r_esp, 0x40fc88u); f_0040f94d();
L_0040fc88:; BB(0x0040fc88);
    /* 0040fc88: jmp 0x40fd50 */ goto L_0040fd50;
L_0040fc8d:; BB(0x0040fc8d);
    /* 0040fc8d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc8f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fc92: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x40fc97u); f_0040f7d4();
    /* 0040fc97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fc9c: call 0x40f94d */ r_esp -= 4; W32(r_esp, 0x40fca1u); f_0040f94d();
    /* 0040fca1: jmp 0x40fd50 */ goto L_0040fd50;
L_0040fca6:; BB(0x0040fca6);
    /* 0040fca6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fca9: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0040fcac: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0040fcb2: call 0x40c263 */ r_esp -= 4; W32(r_esp, 0x40fcb7u); f_0040c263();
    /* 0040fcb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fcb9: je 0x40fcd3 */ if (fZ) goto L_0040fcd3;
L_0040fcbb:; BB(0x0040fcbb);
    /* 0040fcbb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fcbe: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fcc5: je 0x40fcd3 */ if (fZ) goto L_0040fcd3;
L_0040fcc7:; BB(0x0040fcc7);
    /* 0040fcc7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fcc9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fccc: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x40fcd1u); f_0040f7d4();
    /* 0040fcd1: jmp 0x40fcfe */ goto L_0040fcfe;
L_0040fcd3:; BB(0x0040fcd3);
    /* 0040fcd3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fcd6: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0040fcd9: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0040fcdf: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x40fce4u); f_0040c28d();
    /* 0040fce4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fce6: je 0x40fcf4 */ if (fZ) goto L_0040fcf4;
L_0040fce8:; BB(0x0040fce8);
    /* 0040fce8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fcea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fced: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x40fcf2u); f_0040f7d4();
    /* 0040fcf2: jmp 0x40fcfe */ goto L_0040fcfe;
L_0040fcf4:; BB(0x0040fcf4);
    /* 0040fcf4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fcf6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fcf9: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x40fcfeu); f_0040f7d4();
L_0040fcfe:; BB(0x0040fcfe);
    /* 0040fcfe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fd00: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fd03: call 0x40f94d */ r_esp -= 4; W32(r_esp, 0x40fd08u); f_0040f94d();
    /* 0040fd08: jmp 0x40fd50 */ goto L_0040fd50;
L_0040fd0a:; BB(0x0040fd0a);
    /* 0040fd0a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fd0c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fd0f: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x40fd14u); f_0040f7d4();
    /* 0040fd14: jmp 0x40fd50 */ goto L_0040fd50;
L_0040fd16:; BB(0x0040fd16);
    /* 0040fd16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fd18: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040fd1e: call 0x44a1d2 */ r_esp -= 4; W32(r_esp, 0x40fd23u); f_0044a1d2();
    /* 0040fd23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fd25: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fd28: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x40fd2du); f_0040f7d4();
    /* 0040fd2d: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040fd33: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x40fd38u); f_00448ca3();
    /* 0040fd38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fd3a: je 0x40fd50 */ if (fZ) goto L_0040fd50;
L_0040fd3c:; BB(0x0040fd3c);
    /* 0040fd3c: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040fd42: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040fd44: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040fd4a: call dword ptr [eax + 0x94] */ { u32 t = R32((u32)(r_eax+0x94u)); r_esp -= 4; W32(r_esp, 0x40fd50u); call_ind(t); }
L_0040fd50:; BB(0x0040fd50);
    /* 0040fd50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fd53: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x40fd58u); f_0040f9c4();
    /* 0040fd58: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fd5b: je 0x40fda1 */ if (fZ) goto L_0040fda1;
L_0040fd5d:; BB(0x0040fd5d);
    /* 0040fd5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fd5f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fd62: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x40fd67u); f_0040f7fb();
    /* 0040fd67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fd69: jne 0x40fd82 */ if (!fZ) goto L_0040fd82;
L_0040fd6b:; BB(0x0040fd6b);
    /* 0040fd6b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fd6d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fd70: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x40fd75u); f_0040f7fb();
    /* 0040fd75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fd77: jne 0x40fd82 */ if (!fZ) goto L_0040fd82;
L_0040fd79:; BB(0x0040fd79);
    /* 0040fd79: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0040fd80: jmp 0x40fd89 */ goto L_0040fd89;
L_0040fd82:; BB(0x0040fd82);
    /* 0040fd82: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_0040fd89:; BB(0x0040fd89);
    /* 0040fd89: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040fd8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040fd8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fd90: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40fd95u); f_0040f81e();
    /* 0040fd95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fd96: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040fd9c: call 0x447d8a */ r_esp -= 4; W32(r_esp, 0x40fda1u); f_00447d8a();
L_0040fda1:; BB(0x0040fda1);
    /* 0040fda1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fda4: call 0x40f7ea */ r_esp -= 4; W32(r_esp, 0x40fda9u); f_0040f7ea();
    /* 0040fda9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0040fdac: cmp dword ptr [ebp - 0x18], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040fdb0: ja 0x410076 */ if ((!fC&&!fZ)) goto L_00410076;
L_0040fdb6:; BB(0x0040fdb6);
    /* 0040fdb6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040fdb9: jmp dword ptr [edx*4 + 0x4100b8] */ { u32 t = R32((u32)(r_edx*4+0x4100b8u)); switch (t) { case 0x40fc35u: goto L_0040fc35; case 0x40fd50u: goto L_0040fd50; case 0x40fc44u: goto L_0040fc44; case 0x40fc53u: goto L_0040fc53; case 0x40fc8du: goto L_0040fc8d; case 0x40fca6u: goto L_0040fca6; case 0x40fd0au: goto L_0040fd0a; case 0x40fd16u: goto L_0040fd16; case 0x40fdc0u: goto L_0040fdc0; case 0x40fe42u: goto L_0040fe42; case 0x40fe5fu: goto L_0040fe5f; case 0x40fe7cu: goto L_0040fe7c; case 0x40fe99u: goto L_0040fe99; case 0x40ff53u: goto L_0040ff53; case 0x40ffc5u: goto L_0040ffc5; case 0x40ffe2u: goto L_0040ffe2; case 0x40fffcu: goto L_0040fffc; case 0x410016u: goto L_00410016; default: UNSUP(0x0040fdb9, "jump table entry is not a known target"); } }
L_0040fdc0:; BB(0x0040fdc0);
    /* 0040fdc0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fdc3: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40fdc8u); f_0040f81e();
    /* 0040fdc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040fdcb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fdce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fdd0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fdd3: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x40fdd6u); call_ind(t); }
    /* 0040fdd6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fdd9: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40fddeu); f_0040f81e();
    /* 0040fdde: mov ecx, eax */ r_ecx = r_eax;
    /* 0040fde0: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x40fde5u); f_004259a0();
    /* 0040fde5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fde7: jne 0x40fdf2 */ if (!fZ) goto L_0040fdf2;
L_0040fde9:; BB(0x0040fde9);
    /* 0040fde9: mov dword ptr [ebp - 4], 0x32 */ W32((u32)(r_ebp+0xfffffffcu), 0x32u);
    /* 0040fdf0: jmp 0x40fe25 */ goto L_0040fe25;
L_0040fdf2:; BB(0x0040fdf2);
    /* 0040fdf2: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040fdf7: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0040fdfa: call 0x40808b */ r_esp -= 4; W32(r_esp, 0x40fdffu); f_0040808b();
    /* 0040fdff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fe01: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fe04: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40fe09u); f_0040f81e();
    /* 0040fe09: add eax, 0x114 */ {  u32 a = r_eax; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040fe0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fe0f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fe12: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x40fe17u); f_0040f81e();
    /* 0040fe17: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040fe1a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040fe1d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040fe1f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040fe22: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x40fe25u); call_ind(t); }
L_0040fe25:; BB(0x0040fe25);
    /* 0040fe25: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fe27: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040fe2c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040fe2f: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040fe35: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040fe38: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fe3a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40fe3du); call_ind(t); }
    /* 0040fe3d: jmp 0x410076 */ goto L_00410076;
L_0040fe42:; BB(0x0040fe42);
    /* 0040fe42: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fe44: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040fe49: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040fe4c: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040fe52: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040fe55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fe57: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40fe5au); call_ind(t); }
    /* 0040fe5a: jmp 0x410076 */ goto L_00410076;
L_0040fe5f:; BB(0x0040fe5f);
    /* 0040fe5f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fe61: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040fe66: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040fe69: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040fe6f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040fe72: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fe74: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40fe77u); call_ind(t); }
    /* 0040fe77: jmp 0x410076 */ goto L_00410076;
L_0040fe7c:; BB(0x0040fe7c);
    /* 0040fe7c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fe7e: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040fe83: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040fe86: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040fe8c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040fe8f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fe91: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40fe94u); call_ind(t); }
    /* 0040fe94: jmp 0x410076 */ goto L_00410076;
L_0040fe99:; BB(0x0040fe99);
    /* 0040fe99: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fe9b: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040fea0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040fea3: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040fea9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040feac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040feae: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40feb1u); call_ind(t); }
    /* 0040feb1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040feb4: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0040feb7: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0040febd: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x40fec2u); f_0040c28d();
    /* 0040fec2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fec4: je 0x40ff35 */ if (fZ) goto L_0040ff35;
L_0040fec6:; BB(0x0040fec6);
    /* 0040fec6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fec8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fecb: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0040fece: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040fed4: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x40fed9u); f_0040ad48();
    /* 0040fed9: mov ecx, eax */ r_ecx = r_eax;
    /* 0040fedb: call 0x46c95d */ r_esp -= 4; W32(r_esp, 0x40fee0u); f_0046c95d();
    /* 0040fee0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fee2: jne 0x40ff35 */ if (!fZ) goto L_0040ff35;
L_0040fee4:; BB(0x0040fee4);
    /* 0040fee4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fee7: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0040feea: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 0040fef0: call 0x40ada9 */ r_esp -= 4; W32(r_esp, 0x40fef5u); f_0040ada9();
    /* 0040fef5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fef8: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0040fefb: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0040ff01: call 0x40b1cb */ r_esp -= 4; W32(r_esp, 0x40ff06u); f_0040b1cb();
    /* 0040ff06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff08: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ff0b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0040ff0e: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040ff14: call 0x40bcd8 */ r_esp -= 4; W32(r_esp, 0x40ff19u); f_0040bcd8();
    /* 0040ff19: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040ff1f: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0040ff22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff25: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ff28: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0040ff2b: call 0x40d34d */ r_esp -= 4; W32(r_esp, 0x40ff30u); f_0040d34d();
    /* 0040ff30: jmp 0x410090 */ goto L_00410090;
L_0040ff35:; BB(0x0040ff35);
    /* 0040ff35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff37: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0040ff3d: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0040ff40: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040ff46: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040ff49: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040ff4b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x40ff4eu); call_ind(t); }
    /* 0040ff4e: jmp 0x410076 */ goto L_00410076;
L_0040ff53:; BB(0x0040ff53);
    /* 0040ff53: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ff56: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0040ff59: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0040ff5f: call 0x40ada9 */ r_esp -= 4; W32(r_esp, 0x40ff64u); f_0040ada9();
    /* 0040ff64: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ff67: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0040ff6a: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0040ff70: call 0x40b1cb */ r_esp -= 4; W32(r_esp, 0x40ff75u); f_0040b1cb();
    /* 0040ff75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff77: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ff7a: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0040ff7d: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 0040ff83: call 0x40bcd8 */ r_esp -= 4; W32(r_esp, 0x40ff88u); f_0040bcd8();
    /* 0040ff88: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff8a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ff8d: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x40ff92u); f_0040f7d4();
    /* 0040ff92: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff94: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040ff99: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040ff9c: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040ffa2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040ffa5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040ffa7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40ffaau); call_ind(t); }
    /* 0040ffaa: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040ffaf: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040ffb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffb3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffb5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ffb8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 0040ffbb: call 0x40d34d */ r_esp -= 4; W32(r_esp, 0x40ffc0u); f_0040d34d();
    /* 0040ffc0: jmp 0x410090 */ goto L_00410090;
L_0040ffc5:; BB(0x0040ffc5);
    /* 0040ffc5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffc7: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040ffcc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040ffcf: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040ffd5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040ffd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040ffda: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40ffddu); call_ind(t); }
    /* 0040ffdd: jmp 0x410076 */ goto L_00410076;
L_0040ffe2:; BB(0x0040ffe2);
    /* 0040ffe2: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffe4: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0040ffe9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040ffec: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0040fff2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040fff5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fff7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40fffau); call_ind(t); }
    /* 0040fffa: jmp 0x410076 */ goto L_00410076;
L_0040fffc:; BB(0x0040fffc);
    /* 0040fffc: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0040fffe: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00410003: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00410006: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0041000c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041000f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00410011: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x410014u); call_ind(t); }
    /* 00410014: jmp 0x410076 */ goto L_00410076;
L_00410016:; BB(0x00410016);
    /* 00410016: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410018: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041001b: call 0x40f9ab */ r_esp -= 4; W32(r_esp, 0x410020u); f_0040f9ab();
    /* 00410020: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00410022: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00410027: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041002a: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00410030: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00410033: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00410035: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x410038u); call_ind(t); }
    /* 00410038: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0041003e: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x410043u); f_00448ca3();
    /* 00410043: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410045: je 0x41005c */ if (fZ) goto L_0041005c;
L_00410047:; BB(0x00410047);
    /* 00410047: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0041004c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041004f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00410050: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00410052: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00410055: call 0x413656 */ r_esp -= 4; W32(r_esp, 0x41005au); f_00413656();
    /* 0041005a: jmp 0x410074 */ goto L_00410074;
L_0041005c:; BB(0x0041005c);
    /* 0041005c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041005e: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00410064: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00410067: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0041006c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0041006f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00410071: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x410074u); call_ind(t); }
L_00410074:; BB(0x00410074);
    /* 00410074: jmp 0x410090 */ goto L_00410090;
L_00410076:; BB(0x00410076);
    /* 00410076: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410079: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041007a: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00410080: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00410083: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00410088: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0041008b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041008d: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x410090u); call_ind(t); }
L_00410090:; BB(0x00410090);
    /* 00410090: mov esp, ebp */ r_esp = r_ebp;
    /* 00410092: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410093: ret  */ FN_RET(0x0040faa5); r_esp += 4; return;
}

void f_004100e0(void) /* FUN_004100e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004100e0);
    /* 004100e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004100e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004100e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004100e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004100e9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004100f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004100f7: jmp 0x410102 */ goto L_00410102;
L_004100f9:; BB(0x004100f9);
    /* 004100f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004100fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004100ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00410102:; BB(0x00410102);
    /* 00410102: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410106: jge 0x410147 */ if ((fS==fO)) goto L_00410147;
L_00410108:; BB(0x00410108);
    /* 00410108: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041010b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041010e: cmp dword ptr [edx + ecx*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410113: je 0x410145 */ if (fZ) goto L_00410145;
L_00410115:; BB(0x00410115);
    /* 00410115: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410118: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041011b: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0041011f: cmp dword ptr [edx + 0x130], 0 */ {  u32 a = R32((u32)(r_edx+0x130u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410126: je 0x410145 */ if (fZ) goto L_00410145;
L_00410128:; BB(0x00410128);
    /* 00410128: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041012b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041012e: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00410132: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 00410138: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x41013du); f_005dd4d2();
    /* 0041013d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00410140: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00410142: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00410145:; BB(0x00410145);
    /* 00410145: jmp 0x4100f9 */ goto L_004100f9;
L_00410147:; BB(0x00410147);
    /* 00410147: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041014a: mov esp, ebp */ r_esp = r_ebp;
    /* 0041014c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041014d: ret  */ FN_RET(0x004100e0); r_esp += 4; return;
}

void f_0041014e(void) /* FUN_0041014e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041014e);
    /* 0041014e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041014f: mov ebp, esp */ r_ebp = r_esp;
    /* 00410151: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00410152: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00410155: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00410158: cmp dword ptr [eax + 0xc0], 0 */ {  u32 a = R32((u32)(r_eax+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041015f: jne 0x4101d1 */ if (!fZ) goto L_004101d1;
L_00410161:; BB(0x00410161);
    /* 00410161: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00410164: mov dword ptr [ecx + 0xc0], 1 */ W32((u32)(r_ecx+0xc0u), 0x1u);
    /* 0041016e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410171: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00410174: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00410177: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041017a: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 0041017d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00410180: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x410185u); f_0040a4d9();
    /* 00410185: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410188: jge 0x410199 */ if ((fS==fO)) goto L_00410199;
L_0041018a:; BB(0x0041018a);
    /* 0041018a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041018d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00410190: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00410193: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410196: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
L_00410199:; BB(0x00410199);
    /* 00410199: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041019c: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x4101a1u); f_0040a4d9();
    /* 004101a1: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004101a4: jle 0x4101b5 */ if ((fZ||fS!=fO)) goto L_004101b5;
L_004101a6:; BB(0x004101a6);
    /* 004101a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004101a9: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004101ac: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004101af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004101b2: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
L_004101b5:; BB(0x004101b5);
    /* 004101b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004101b8: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x4101bdu); f_0040a4d9();
    /* 004101bd: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004101c0: jne 0x4101d1 */ if (!fZ) goto L_004101d1;
L_004101c2:; BB(0x004101c2);
    /* 004101c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004101c5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004101c8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004101cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004101ce: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
L_004101d1:; BB(0x004101d1);
    /* 004101d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004101d4: call 0x410377 */ r_esp -= 4; W32(r_esp, 0x4101d9u); f_00410377();
    /* 004101d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004101dc: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 004101df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004101e2: cmp dword ptr [eax + 0xbc], 0 */ {  u32 a = R32((u32)(r_eax+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004101e9: je 0x4101f3 */ if (fZ) goto L_004101f3;
L_004101eb:; BB(0x004101eb);
    /* 004101eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004101ee: call 0x4130f0 */ r_esp -= 4; W32(r_esp, 0x4101f3u); f_004130f0();
L_004101f3:; BB(0x004101f3);
    /* 004101f3: mov esp, ebp */ r_esp = r_ebp;
    /* 004101f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004101f6: ret 4 */ FN_RET(0x0041014e); r_esp += 8; return;
}

void f_004101f9(void) /* FUN_004101f9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004101f9);
    /* 004101f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004101fa: mov ebp, esp */ r_ebp = r_esp;
    /* 004101fc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004101ff: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00410202: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410205: call 0x4100e0 */ r_esp -= 4; W32(r_esp, 0x41020au); f_004100e0();
    /* 0041020a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041020d: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 00410210: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00410217: jmp 0x410222 */ goto L_00410222;
L_00410219:; BB(0x00410219);
    /* 00410219: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041021c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041021f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00410222:; BB(0x00410222);
    /* 00410222: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410226: jge 0x41030a */ if ((fS==fO)) goto L_0041030a;
L_0041022c:; BB(0x0041022c);
    /* 0041022c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041022f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410232: cmp dword ptr [ecx + eax*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410237: je 0x410305 */ if (fZ) goto L_00410305;
L_0041023d:; BB(0x0041023d);
    /* 0041023d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00410240: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410243: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00410247: cmp dword ptr [ecx + 0x130], 0 */ {  u32 a = R32((u32)(r_ecx+0x130u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041024e: je 0x410305 */ if (fZ) goto L_00410305;
L_00410254:; BB(0x00410254);
    /* 00410254: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0041025b: jmp 0x410266 */ goto L_00410266;
L_0041025d:; BB(0x0041025d);
    /* 0041025d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00410260: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00410263: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00410266:; BB(0x00410266);
    /* 00410266: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00410269: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041026c: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00410270: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 00410276: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x41027bu); f_005dd4d2();
    /* 0041027b: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041027e: jge 0x410305 */ if ((fS==fO)) goto L_00410305;
L_00410284:; BB(0x00410284);
    /* 00410284: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00410287: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410288: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041028b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041028e: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00410292: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00410298: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x41029du); f_0040ad48();
    /* 0041029d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004102a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004102a3: cmp dword ptr [ecx + 0xc0], 0 */ {  u32 a = R32((u32)(r_ecx+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004102aa: je 0x410300 */ if (fZ) goto L_00410300;
L_004102ac:; BB(0x004102ac);
    /* 004102ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004102af: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x4102b4u); f_0040a4d9();
    /* 004102b4: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004102b7: jge 0x4102c8 */ if ((fS==fO)) goto L_004102c8;
L_004102b9:; BB(0x004102b9);
    /* 004102b9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004102bc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004102bf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004102c2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004102c5: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
L_004102c8:; BB(0x004102c8);
    /* 004102c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004102cb: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x4102d0u); f_0040a4d9();
    /* 004102d0: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004102d3: jle 0x4102e4 */ if ((fZ||fS!=fO)) goto L_004102e4;
L_004102d5:; BB(0x004102d5);
    /* 004102d5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004102d8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004102db: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004102de: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004102e1: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
L_004102e4:; BB(0x004102e4);
    /* 004102e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004102e7: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x4102ecu); f_0040a4d9();
    /* 004102ec: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004102ef: jne 0x410300 */ if (!fZ) goto L_00410300;
L_004102f1:; BB(0x004102f1);
    /* 004102f1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004102f4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004102f7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004102fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004102fd: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
L_00410300:; BB(0x00410300);
    /* 00410300: jmp 0x41025d */ goto L_0041025d;
L_00410305:; BB(0x00410305);
    /* 00410305: jmp 0x410219 */ goto L_00410219;
L_0041030a:; BB(0x0041030a);
    /* 0041030a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041030d: call 0x410377 */ r_esp -= 4; W32(r_esp, 0x410312u); f_00410377();
    /* 00410312: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410315: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 00410318: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041031b: cmp dword ptr [eax + 0xbc], 0 */ {  u32 a = R32((u32)(r_eax+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410322: je 0x41032c */ if (fZ) goto L_0041032c;
L_00410324:; BB(0x00410324);
    /* 00410324: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410327: call 0x4130f0 */ r_esp -= 4; W32(r_esp, 0x41032cu); f_004130f0();
L_0041032c:; BB(0x0041032c);
    /* 0041032c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041032e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041032f: ret  */ FN_RET(0x004101f9); r_esp += 4; return;
}

void f_00410330(void) /* FUN_00410330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00410330);
    /* 00410330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410331: mov ebp, esp */ r_ebp = r_esp;
    /* 00410333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00410334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00410337: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041033a: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 00410341: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410344: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 0041034b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041034e: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 00410355: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410358: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 0041035f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410362: cmp dword ptr [ecx + 0xbc], 0 */ {  u32 a = R32((u32)(r_ecx+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410369: je 0x410373 */ if (fZ) goto L_00410373;
L_0041036b:; BB(0x0041036b);
    /* 0041036b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041036e: call 0x4130f0 */ r_esp -= 4; W32(r_esp, 0x410373u); f_004130f0();
L_00410373:; BB(0x00410373);
    /* 00410373: mov esp, ebp */ r_esp = r_ebp;
    /* 00410375: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410376: ret  */ FN_RET(0x00410330); r_esp += 4; return;
}

void f_00410377(void) /* FUN_00410377 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00410377);
    /* 00410377: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410378: mov ebp, esp */ r_ebp = r_esp;
    /* 0041037a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041037d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00410380: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00410383: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00410386: call 0x40a7ca */ r_esp -= 4; W32(r_esp, 0x41038bu); f_0040a7ca();
    /* 0041038b: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041038e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410391: cmp dword ptr [ecx + 0x64], eax */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410394: jl 0x41039d */ if ((fS!=fO)) goto L_0041039d;
L_00410396:; BB(0x00410396);
    /* 00410396: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00410398: jmp 0x41041d */ goto L_0041041d;
L_0041039d:; BB(0x0041039d);
    /* 0041039d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004103a0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004103a3: call 0x40a7ca */ r_esp -= 4; W32(r_esp, 0x4103a8u); f_0040a7ca();
    /* 004103a8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004103ab: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 004103ae: fmul qword ptr [0x633818] */ ST(0) = ST(0) * R_F64((u32)(0x633818u));
    /* 004103b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004103b7: fild dword ptr [eax + 0x64] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x64u)));
    /* 004103ba: fdiv qword ptr [0x633820] */ ST(0) = ST(0) / R_F64((u32)(0x633820u));
    /* 004103c0: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004103c2: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 004103c5: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 004103c8: fcomp qword ptr [0x633828] */ fx_compare(ST(0), R_F64((u32)(0x633828u))); FPOP();
    /* 004103ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004103d0: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004103d3: je 0x4103e3 */ if (fZ) goto L_004103e3;
L_004103d5:; BB(0x004103d5);
    /* 004103d5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004103dc: mov dword ptr [ebp - 4], 0x3fd00000 */ W32((u32)(r_ebp+0xfffffffcu), 0x3fd00000u);
L_004103e3:; BB(0x004103e3);
    /* 004103e3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004103e6: fild dword ptr [ecx + 0x70] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x70u)));
    /* 004103e9: fdiv qword ptr [ebp - 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xfffffff8u));
    /* 004103ec: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004103ef: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 004103f2: fcomp qword ptr [0x633830] */ fx_compare(ST(0), R_F64((u32)(0x633830u))); FPOP();
    /* 004103f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004103fa: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004103fd: je 0x41040f */ if (fZ) goto L_0041040f;
L_004103ff:; BB(0x004103ff);
    /* 004103ff: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00410402: fsub qword ptr [0x633838] */ ST(0) = ST(0) - R_F64((u32)(0x633838u));
    /* 00410408: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x41040du); f_00624144();
    /* 0041040d: jmp 0x41041d */ goto L_0041041d;
L_0041040f:; BB(0x0041040f);
    /* 0041040f: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00410412: fadd qword ptr [0x633838] */ ST(0) = ST(0) + R_F64((u32)(0x633838u));
    /* 00410418: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x41041du); f_00624144();
L_0041041d:; BB(0x0041041d);
    /* 0041041d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041041f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410420: ret  */ FN_RET(0x00410377); r_esp += 4; return;
}

void f_00410421(void) /* FUN_00410421 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00410421);
    /* 00410421: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410422: mov ebp, esp */ r_ebp = r_esp;
    /* 00410424: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00410427: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0041042a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041042d: cmp dword ptr [eax + 0x64], 0 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410431: jne 0x410437 */ if (!fZ) goto L_00410437;
L_00410433:; BB(0x00410433);
    /* 00410433: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00410435: jmp 0x4104a7 */ goto L_004104a7;
L_00410437:; BB(0x00410437);
    /* 00410437: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041043a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0041043d: call 0x40a7ca */ r_esp -= 4; W32(r_esp, 0x410442u); f_0040a7ca();
    /* 00410442: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00410445: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410448: sub eax, dword ptr [edx + 0x74] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x74u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041044b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0041044e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410452: jg 0x410459 */ if ((!fZ&&fS==fO)) goto L_00410459;
L_00410454:; BB(0x00410454);
    /* 00410454: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00410457: jmp 0x4104a7 */ goto L_004104a7;
L_00410459:; BB(0x00410459);
    /* 00410459: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041045c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041045f: call 0x40a7ca */ r_esp -= 4; W32(r_esp, 0x410464u); f_0040a7ca();
    /* 00410464: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410467: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041046a: sub eax, dword ptr [ecx + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x64u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041046d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00410470: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 00410473: fidiv dword ptr [ebp - 8] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xfffffff8u));
    /* 00410476: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00410479: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0041047c: fcomp qword ptr [0x633840] */ fx_compare(ST(0), R_F64((u32)(0x633840u))); FPOP();
    /* 00410482: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00410484: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00410487: jne 0x41048e */ if (!fZ) goto L_0041048e;
L_00410489:; BB(0x00410489);
    /* 00410489: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041048c: jmp 0x4104a7 */ goto L_004104a7;
L_0041048e:; BB(0x0041048e);
    /* 0041048e: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00410491: fcomp qword ptr [0x633848] */ fx_compare(ST(0), R_F64((u32)(0x633848u))); FPOP();
    /* 00410497: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00410499: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041049c: je 0x4104a5 */ if (fZ) goto L_004104a5;
L_0041049e:; BB(0x0041049e);
    /* 0041049e: mov eax, 1 */ r_eax = 0x1u;
    /* 004104a3: jmp 0x4104a7 */ goto L_004104a7;
L_004104a5:; BB(0x004104a5);
    /* 004104a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004104a7:; BB(0x004104a7);
    /* 004104a7: mov esp, ebp */ r_esp = r_ebp;
    /* 004104a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004104aa: ret  */ FN_RET(0x00410421); r_esp += 4; return;
}

void f_004104ab(void) /* FUN_004104ab */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004104ab);
    /* 004104ab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004104ac: mov ebp, esp */ r_ebp = r_esp;
    /* 004104ae: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004104b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004104b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004104b3: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004104b6: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 004104bd: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004104c4: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004104cb: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004104d2: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 004104d9: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004104e0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004104e7: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 004104ed: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x4104f2u); f_00448ca3();
    /* 004104f2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004104f5: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004104fa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004104fc: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00410502: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x410505u); call_ind(t); }
    /* 00410505: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00410508: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0041050e: call 0x44897d */ r_esp -= 4; W32(r_esp, 0x410513u); f_0044897d();
    /* 00410513: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00410516: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410519: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41051eu); f_0040f81e();
    /* 0041051e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00410521: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410524: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00410527: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0041052a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0041052d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00410530: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00410533: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x410538u); f_00426819();
    /* 00410538: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041053b: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041053f: je 0x410b90 */ if (fZ) goto L_00410b90;
L_00410545:; BB(0x00410545);
    /* 00410545: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0041054b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041054d: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00410553: call dword ptr [edx + 0xa4] */ { u32 t = R32((u32)(r_edx+0xa4u)); r_esp -= 4; W32(r_esp, 0x410559u); call_ind(t); }
    /* 00410559: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0041055c: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00410561: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00410563: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00410569: call dword ptr [edx + 0xa8] */ { u32 t = R32((u32)(r_edx+0xa8u)); r_esp -= 4; W32(r_esp, 0x41056fu); call_ind(t); }
    /* 0041056f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00410572: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00410578: call 0x448e5d */ r_esp -= 4; W32(r_esp, 0x41057du); f_00448e5d();
    /* 0041057d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00410580: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00410585: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00410587: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0041058d: call dword ptr [edx + 0xac] */ { u32 t = R32((u32)(r_edx+0xacu)); r_esp -= 4; W32(r_esp, 0x410593u); call_ind(t); }
    /* 00410593: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00410596: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410599: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041059c: jge 0x4105a5 */ if ((fS==fO)) goto L_004105a5;
L_0041059e:; BB(0x0041059e);
    /* 0041059e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004105a0: jmp 0x411346 */ goto L_00411346;
L_004105a5:; BB(0x004105a5);
    /* 004105a5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004105a8: cmp ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004105ab: jne 0x4105b5 */ if (!fZ) goto L_004105b5;
L_004105ad:; BB(0x004105ad);
    /* 004105ad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004105b0: jmp 0x411346 */ goto L_00411346;
L_004105b5:; BB(0x004105b5);
    /* 004105b5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004105b8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004105b9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004105bb: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004105bd: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004105c0: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004105c3: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004105c6: jle 0x410655 */ if ((fZ||fS!=fO)) goto L_00410655;
L_004105cc:; BB(0x004105cc);
    /* 004105cc: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004105cf: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004105d2: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004105d5: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 004105d8: fstp qword ptr [ebp - 0x58] */ W_F64((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 004105db: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004105de: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004105e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004105e2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004105e5: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x4105eau); f_005b9dbe();
    /* 004105ea: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004105ed: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 004105f4: fild qword ptr [ebp - 0x60] */ FPUSH((long double)(i64)R64((u32)(r_ebp+0xffffffa0u)));
    /* 004105f7: fdiv qword ptr [0x633850] */ ST(0) = ST(0) / R_F64((u32)(0x633850u));
    /* 004105fd: fadd qword ptr [0x633858] */ ST(0) = ST(0) + R_F64((u32)(0x633858u));
    /* 00410603: fstp qword ptr [ebp - 0x68] */ W_F64((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 00410606: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00410609: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041060c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041060d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410610: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410615u); f_005b9dbe();
    /* 00410615: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00410618: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0041061f: fild qword ptr [ebp - 0x70] */ FPUSH((long double)(i64)R64((u32)(r_ebp+0xffffff90u)));
    /* 00410622: fdiv qword ptr [0x633850] */ ST(0) = ST(0) / R_F64((u32)(0x633850u));
    /* 00410628: fimul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ebp+0xfffffff0u));
    /* 0041062b: fadd qword ptr [ebp - 0x68] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff98u));
    /* 0041062e: fcomp qword ptr [ebp - 0x58] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffa8u))); FPOP();
    /* 00410631: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00410633: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00410636: je 0x410655 */ if (fZ) goto L_00410655;
L_00410638:; BB(0x00410638);
    /* 00410638: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0041063a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041063d: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410642u); f_005b9dbe();
    /* 00410642: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410645: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00410648: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041064b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0041064d: jae 0x410655 */ if (!fC) goto L_00410655;
L_0041064f:; BB(0x0041064f);
    /* 0041064f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410652: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
L_00410655:; BB(0x00410655);
    /* 00410655: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00410658: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041065b: jle 0x410663 */ if ((fZ||fS!=fO)) goto L_00410663;
L_0041065d:; BB(0x0041065d);
    /* 0041065d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410660: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
L_00410663:; BB(0x00410663);
    /* 00410663: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410666: cmp eax, dword ptr [ebp - 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410669: jne 0x41068b */ if (!fZ) goto L_0041068b;
L_0041066b:; BB(0x0041066b);
    /* 0041066b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041066e: call 0x412c8a */ r_esp -= 4; W32(r_esp, 0x410673u); f_00412c8a();
    /* 00410673: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410676: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00410679: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041067b: jle 0x41068b */ if ((fZ||fS!=fO)) goto L_0041068b;
L_0041067d:; BB(0x0041067d);
    /* 0041067d: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410681: je 0x41068b */ if (fZ) goto L_0041068b;
L_00410683:; BB(0x00410683);
    /* 00410683: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410686: jmp 0x411346 */ goto L_00411346;
L_0041068b:; BB(0x0041068b);
    /* 0041068b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041068e: cmp edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410691: jl 0x4106b3 */ if ((fS!=fO)) goto L_004106b3;
L_00410693:; BB(0x00410693);
    /* 00410693: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0041069a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041069d: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004106a0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004106a3: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004106a6: jle 0x4106ae */ if ((fZ||fS!=fO)) goto L_004106ae;
L_004106a8:; BB(0x004106a8);
    /* 004106a8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004106ab: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
L_004106ae:; BB(0x004106ae);
    /* 004106ae: jmp 0x410767 */ goto L_00410767;
L_004106b3:; BB(0x004106b3);
    /* 004106b3: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004106ba: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004106bd: cmp dword ptr [eax + 0x6c], 0xa */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004106c1: jl 0x4106cc */ if ((fS!=fO)) goto L_004106cc;
L_004106c3:; BB(0x004106c3);
    /* 004106c3: mov dword ptr [ebp - 4], 0x32 */ W32((u32)(r_ebp+0xfffffffcu), 0x32u);
    /* 004106ca: jmp 0x4106d8 */ goto L_004106d8;
L_004106cc:; BB(0x004106cc);
    /* 004106cc: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004106cf: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 004106d2: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004106d5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004106d8:; BB(0x004106d8);
    /* 004106d8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004106db: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004106de: cmp dword ptr [ebp - 0x20], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004106e1: jle 0x4106fb */ if ((fZ||fS!=fO)) goto L_004106fb;
L_004106e3:; BB(0x004106e3);
    /* 004106e3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004106e6: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004106e9: mov edx, 6 */ r_edx = 0x6u;
    /* 004106ee: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004106f0: imul edx, edx, 0xf */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xfu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004106f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004106f6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004106f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004106fb:; BB(0x004106fb);
    /* 004106fb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004106fe: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00410701: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410704: jg 0x410711 */ if ((!fZ&&fS==fO)) goto L_00410711;
L_00410706:; BB(0x00410706);
    /* 00410706: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00410709: sub edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041070c: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041070f: jle 0x41071a */ if ((fZ||fS!=fO)) goto L_0041071a;
L_00410711:; BB(0x00410711);
    /* 00410711: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410714: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00410717: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041071a:; BB(0x0041071a);
    /* 0041071a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041071d: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00410720: cmp ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410723: jle 0x41072e */ if ((fZ||fS!=fO)) goto L_0041072e;
L_00410725:; BB(0x00410725);
    /* 00410725: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410728: sub edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041072b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0041072e:; BB(0x0041072e);
    /* 0041072e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410732: jge 0x41073b */ if ((fS==fO)) goto L_0041073b;
L_00410734:; BB(0x00410734);
    /* 00410734: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0041073b:; BB(0x0041073b);
    /* 0041073b: cmp dword ptr [ebp - 4], 0x4b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041073f: jle 0x410748 */ if ((fZ||fS!=fO)) goto L_00410748;
L_00410741:; BB(0x00410741);
    /* 00410741: mov dword ptr [ebp - 4], 0x4b */ W32((u32)(r_ebp+0xfffffffcu), 0x4bu);
L_00410748:; BB(0x00410748);
    /* 00410748: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0041074a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041074d: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410752u); f_005b9dbe();
    /* 00410752: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00410755: jae 0x410760 */ if (!fC) goto L_00410760;
L_00410757:; BB(0x00410757);
    /* 00410757: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0041075e: jmp 0x410767 */ goto L_00410767;
L_00410760:; BB(0x00410760);
    /* 00410760: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00410767:; BB(0x00410767);
    /* 00410767: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041076b: jne 0x410777 */ if (!fZ) goto L_00410777;
L_0041076d:; BB(0x0041076d);
    /* 0041076d: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410771: je 0x410b90 */ if (fZ) goto L_00410b90;
L_00410777:; BB(0x00410777);
    /* 00410777: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041077a: cmp eax, dword ptr [ebp - 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041077d: jne 0x4109de */ if (!fZ) goto L_004109de;
L_00410783:; BB(0x00410783);
    /* 00410783: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410787: je 0x4108e5 */ if (fZ) goto L_004108e5;
L_0041078d:; BB(0x0041078d);
    /* 0041078d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0041078f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410792: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410797u); f_005b9dbe();
    /* 00410797: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0041079a: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041079e: jge 0x4107fe */ if ((fS==fO)) goto L_004107fe;
L_004107a0:; BB(0x004107a0);
    /* 004107a0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004107a3: call 0x412c8a */ r_esp -= 4; W32(r_esp, 0x4107a8u); f_00412c8a();
    /* 004107a8: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004107ab: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004107ad: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004107af: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004107b2: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x4107b7u); f_005b9dbe();
    /* 004107b7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004107ba: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004107bd: lea edx, [esi + ecx + 1] */ r_edx = (u32)(r_esi+r_ecx+0x1u);
    /* 004107c1: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004107c4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004107c7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004107c8: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004107cd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004107cd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004107cd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004107cf: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004107d2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004107d4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004107d7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004107da: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004107dd: jge 0x4107e1 */ if ((fS==fO)) goto L_004107e1;
L_004107df:; BB(0x004107df);
    /* 004107df: jmp 0x4107f9 */ goto L_004107f9;
L_004107e1:; BB(0x004107e1);
    /* 004107e1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004107e4: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004107e7: jle 0x4107f1 */ if ((fZ||fS!=fO)) goto L_004107f1;
L_004107e9:; BB(0x004107e9);
    /* 004107e9: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004107ec: jmp 0x411346 */ goto L_00411346;
L_004107f1:; BB(0x004107f1);
    /* 004107f1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004107f4: jmp 0x411346 */ goto L_00411346;
L_004107f9:; BB(0x004107f9);
    /* 004107f9: jmp 0x4108e0 */ goto L_004108e0;
L_004107fe:; BB(0x004107fe);
    /* 004107fe: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410802: jge 0x4108e0 */ if ((fS==fO)) goto L_004108e0;
L_00410808:; BB(0x00410808);
    /* 00410808: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041080b: call 0x412c8a */ r_esp -= 4; W32(r_esp, 0x410810u); f_00412c8a();
    /* 00410810: mov esi, eax */ r_esi = r_eax;
    /* 00410812: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00410814: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410817: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x41081cu); f_005b9dbe();
    /* 0041081c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041081f: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410822: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00410824: jae 0x41088a */ if (!fC) goto L_0041088a;
L_00410826:; BB(0x00410826);
    /* 00410826: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410829: call 0x412c8a */ r_esp -= 4; W32(r_esp, 0x41082eu); f_00412c8a();
    /* 0041082e: mov esi, eax */ r_esi = r_eax;
    /* 00410830: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00410832: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410835: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x41083au); f_005b9dbe();
    /* 0041083a: mov edi, eax */ r_edi = r_eax;
    /* 0041083c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0041083e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410841: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410846u); f_005b9dbe();
    /* 00410846: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00410848: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041084b: imul edx, edi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041084e: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00410850: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00410853: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410856: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410857: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0041085c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0041085c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0041085c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041085e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410861: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410863: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00410866: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410869: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041086c: jge 0x410870 */ if ((fS==fO)) goto L_00410870;
L_0041086e:; BB(0x0041086e);
    /* 0041086e: jmp 0x410888 */ goto L_00410888;
L_00410870:; BB(0x00410870);
    /* 00410870: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410873: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410876: jle 0x410880 */ if ((fZ||fS!=fO)) goto L_00410880;
L_00410878:; BB(0x00410878);
    /* 00410878: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041087b: jmp 0x411346 */ goto L_00411346;
L_00410880:; BB(0x00410880);
    /* 00410880: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410883: jmp 0x411346 */ goto L_00411346;
L_00410888:; BB(0x00410888);
    /* 00410888: jmp 0x4108e0 */ goto L_004108e0;
L_0041088a:; BB(0x0041088a);
    /* 0041088a: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041088c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041088f: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410894u); f_005b9dbe();
    /* 00410894: mov esi, eax */ r_esi = r_eax;
    /* 00410896: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00410898: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041089b: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x4108a0u); f_005b9dbe();
    /* 004108a0: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004108a2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004108a5: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004108a8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004108ab: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004108ae: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004108af: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004108b4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004108b4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004108b4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004108b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004108b9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004108bb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004108be: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004108c1: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004108c4: jge 0x4108c8 */ if ((fS==fO)) goto L_004108c8;
L_004108c6:; BB(0x004108c6);
    /* 004108c6: jmp 0x4108e0 */ goto L_004108e0;
L_004108c8:; BB(0x004108c8);
    /* 004108c8: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004108cb: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004108ce: jle 0x4108d8 */ if ((fZ||fS!=fO)) goto L_004108d8;
L_004108d0:; BB(0x004108d0);
    /* 004108d0: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004108d3: jmp 0x411346 */ goto L_00411346;
L_004108d8:; BB(0x004108d8);
    /* 004108d8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004108db: jmp 0x411346 */ goto L_00411346;
L_004108e0:; BB(0x004108e0);
    /* 004108e0: jmp 0x4109d9 */ goto L_004109d9;
L_004108e5:; BB(0x004108e5);
    /* 004108e5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004108e7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004108ea: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x4108efu); f_005b9dbe();
    /* 004108ef: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004108f2: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004108f6: jge 0x4109d9 */ if ((fS==fO)) goto L_004109d9;
L_004108fc:; BB(0x004108fc);
    /* 004108fc: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004108ff: call 0x412c8a */ r_esp -= 4; W32(r_esp, 0x410904u); f_00412c8a();
    /* 00410904: mov esi, eax */ r_esi = r_eax;
    /* 00410906: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00410908: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041090b: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410910u); f_005b9dbe();
    /* 00410910: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410913: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410916: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00410918: jae 0x410983 */ if (!fC) goto L_00410983;
L_0041091a:; BB(0x0041091a);
    /* 0041091a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041091d: call 0x412c8a */ r_esp -= 4; W32(r_esp, 0x410922u); f_00412c8a();
    /* 00410922: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410923: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410925: mov esi, eax */ r_esi = r_eax;
    /* 00410927: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00410929: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0041092b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041092e: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410933u); f_005b9dbe();
    /* 00410933: mov edi, eax */ r_edi = r_eax;
    /* 00410935: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00410937: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041093a: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x41093fu); f_005b9dbe();
    /* 0041093f: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00410941: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410944: imul edx, edi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410947: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00410949: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0041094c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041094f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410950: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00410955: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410955, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410955, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410957: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041095a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041095c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041095f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410962: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410965: jge 0x410969 */ if ((fS==fO)) goto L_00410969;
L_00410967:; BB(0x00410967);
    /* 00410967: jmp 0x410981 */ goto L_00410981;
L_00410969:; BB(0x00410969);
    /* 00410969: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041096c: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041096f: jle 0x410979 */ if ((fZ||fS!=fO)) goto L_00410979;
L_00410971:; BB(0x00410971);
    /* 00410971: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00410974: jmp 0x411346 */ goto L_00411346;
L_00410979:; BB(0x00410979);
    /* 00410979: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041097c: jmp 0x411346 */ goto L_00411346;
L_00410981:; BB(0x00410981);
    /* 00410981: jmp 0x4109d9 */ goto L_004109d9;
L_00410983:; BB(0x00410983);
    /* 00410983: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00410985: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410988: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x41098du); f_005b9dbe();
    /* 0041098d: mov esi, eax */ r_esi = r_eax;
    /* 0041098f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00410991: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410994: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410999u); f_005b9dbe();
    /* 00410999: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0041099b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041099e: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004109a1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004109a4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004109a7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004109a8: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004109ad: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004109ad, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004109ad, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004109af: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004109b2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004109b4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004109b7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004109ba: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004109bd: jge 0x4109c1 */ if ((fS==fO)) goto L_004109c1;
L_004109bf:; BB(0x004109bf);
    /* 004109bf: jmp 0x4109d9 */ goto L_004109d9;
L_004109c1:; BB(0x004109c1);
    /* 004109c1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004109c4: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004109c7: jle 0x4109d1 */ if ((fZ||fS!=fO)) goto L_004109d1;
L_004109c9:; BB(0x004109c9);
    /* 004109c9: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004109cc: jmp 0x411346 */ goto L_00411346;
L_004109d1:; BB(0x004109d1);
    /* 004109d1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004109d4: jmp 0x411346 */ goto L_00411346;
L_004109d9:; BB(0x004109d9);
    /* 004109d9: jmp 0x410b90 */ goto L_00410b90;
L_004109de:; BB(0x004109de);
    /* 004109de: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004109e2: je 0x410a90 */ if (fZ) goto L_00410a90;
L_004109e8:; BB(0x004109e8);
    /* 004109e8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004109ea: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004109ed: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x4109f2u); f_005b9dbe();
    /* 004109f2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004109f5: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004109f9: jge 0x410a1b */ if ((fS==fO)) goto L_00410a1b;
L_004109fb:; BB(0x004109fb);
    /* 004109fb: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 004109fe: sub esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00410a01: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00410a03: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410a06: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410a0bu); f_005b9dbe();
    /* 00410a0b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00410a0e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410a11: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410a14: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00410a16: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00410a19: jmp 0x410a56 */ goto L_00410a56;
L_00410a1b:; BB(0x00410a1b);
    /* 00410a1b: cmp dword ptr [ebp - 0x38], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410a1f: jge 0x410a4f */ if ((fS==fO)) goto L_00410a4f;
L_00410a21:; BB(0x00410a21);
    /* 00410a21: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00410a24: sub esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00410a27: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00410a29: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410a2c: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410a31u); f_005b9dbe();
    /* 00410a31: mov edi, eax */ r_edi = r_eax;
    /* 00410a33: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00410a35: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410a38: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410a3du); f_005b9dbe();
    /* 00410a3d: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00410a3f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00410a42: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410a45: imul edx, edi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410a48: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00410a4a: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00410a4d: jmp 0x410a56 */ goto L_00410a56;
L_00410a4f:; BB(0x00410a4f);
    /* 00410a4f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00410a56:; BB(0x00410a56);
    /* 00410a56: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410a59: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410a5a: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00410a5f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410a5f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410a5f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410a61: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410a64: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410a66: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00410a69: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410a6c: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410a6f: jge 0x410a73 */ if ((fS==fO)) goto L_00410a73;
L_00410a71:; BB(0x00410a71);
    /* 00410a71: jmp 0x410a8b */ goto L_00410a8b;
L_00410a73:; BB(0x00410a73);
    /* 00410a73: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410a76: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410a79: jle 0x410a83 */ if ((fZ||fS!=fO)) goto L_00410a83;
L_00410a7b:; BB(0x00410a7b);
    /* 00410a7b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00410a7e: jmp 0x411346 */ goto L_00411346;
L_00410a83:; BB(0x00410a83);
    /* 00410a83: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410a86: jmp 0x411346 */ goto L_00411346;
L_00410a8b:; BB(0x00410a8b);
    /* 00410a8b: jmp 0x410b90 */ goto L_00410b90;
L_00410a90:; BB(0x00410a90);
    /* 00410a90: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00410a92: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410a95: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410a9au); f_005b9dbe();
    /* 00410a9a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00410a9d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00410aa0: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410aa3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410aa6: jne 0x410ab1 */ if (!fZ) goto L_00410ab1;
L_00410aa8:; BB(0x00410aa8);
    /* 00410aa8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00410aab: sub ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00410aae: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_00410ab1:; BB(0x00410ab1);
    /* 00410ab1: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00410ab4: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00410ab7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410aba: jne 0x410ac7 */ if (!fZ) goto L_00410ac7;
L_00410abc:; BB(0x00410abc);
    /* 00410abc: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00410abf: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410ac2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00410ac5: jmp 0x410adb */ goto L_00410adb;
L_00410ac7:; BB(0x00410ac7);
    /* 00410ac7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00410aca: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00410acd: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410ad0: jne 0x410adb */ if (!fZ) goto L_00410adb;
L_00410ad2:; BB(0x00410ad2);
    /* 00410ad2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00410ad5: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00410ad8: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_00410adb:; BB(0x00410adb);
    /* 00410adb: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410adf: jge 0x410b0c */ if ((fS==fO)) goto L_00410b0c;
L_00410ae1:; BB(0x00410ae1);
    /* 00410ae1: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00410ae4: sub esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00410ae7: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00410ae9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410aec: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410af1u); f_005b9dbe();
    /* 00410af1: mov edi, eax */ r_edi = r_eax;
    /* 00410af3: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00410af5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410af8: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410afdu); f_005b9dbe();
    /* 00410afd: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00410aff: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410b02: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410b05: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00410b07: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00410b0a: jmp 0x410b5b */ goto L_00410b5b;
L_00410b0c:; BB(0x00410b0c);
    /* 00410b0c: cmp dword ptr [ebp - 0x38], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410b10: jge 0x410b54 */ if ((fS==fO)) goto L_00410b54;
L_00410b12:; BB(0x00410b12);
    /* 00410b12: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00410b15: sub esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00410b18: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b1a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410b1d: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410b22u); f_005b9dbe();
    /* 00410b22: mov ecx, eax */ r_ecx = r_eax;
    /* 00410b24: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00410b27: mov eax, esi */ r_eax = r_esi;
    /* 00410b29: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00410b2b: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x00410b2b, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00410b2b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410b2d: mov esi, eax */ r_esi = r_eax;
    /* 00410b2f: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00410b31: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410b34: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410b39u); f_005b9dbe();
    /* 00410b39: mov edi, eax */ r_edi = r_eax;
    /* 00410b3b: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00410b3d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410b40: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x410b45u); f_005b9dbe();
    /* 00410b45: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00410b47: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410b4a: imul edx, edi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410b4d: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00410b4f: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00410b52: jmp 0x410b5b */ goto L_00410b5b;
L_00410b54:; BB(0x00410b54);
    /* 00410b54: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00410b5b:; BB(0x00410b5b);
    /* 00410b5b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410b5e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410b5f: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00410b64: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410b64, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410b64, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410b66: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410b69: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410b6b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00410b6e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410b71: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410b74: jge 0x410b78 */ if ((fS==fO)) goto L_00410b78;
L_00410b76:; BB(0x00410b76);
    /* 00410b76: jmp 0x410b90 */ goto L_00410b90;
L_00410b78:; BB(0x00410b78);
    /* 00410b78: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410b7b: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410b7e: jle 0x410b88 */ if ((fZ||fS!=fO)) goto L_00410b88;
L_00410b80:; BB(0x00410b80);
    /* 00410b80: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00410b83: jmp 0x411346 */ goto L_00411346;
L_00410b88:; BB(0x00410b88);
    /* 00410b88: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410b8b: jmp 0x411346 */ goto L_00411346;
L_00410b90:; BB(0x00410b90);
    /* 00410b90: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410b93: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x410b98u); f_0041136e();
    /* 00410b98: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410b9b: jge 0x410ba4 */ if ((fS==fO)) goto L_00410ba4;
L_00410b9d:; BB(0x00410b9d);
    /* 00410b9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00410b9f: jmp 0x411346 */ goto L_00411346;
L_00410ba4:; BB(0x00410ba4);
    /* 00410ba4: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410ba8: jne 0x410bc9 */ if (!fZ) goto L_00410bc9;
L_00410baa:; BB(0x00410baa);
    /* 00410baa: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 00410bad: fdiv qword ptr [0x633818] */ ST(0) = ST(0) / R_F64((u32)(0x633818u));
    /* 00410bb3: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x410bb8u); f_00624144();
    /* 00410bb8: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00410bbb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00410bbe: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410bc1: jle 0x410bc9 */ if ((fZ||fS!=fO)) goto L_00410bc9;
L_00410bc3:; BB(0x00410bc3);
    /* 00410bc3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410bc6: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
L_00410bc9:; BB(0x00410bc9);
    /* 00410bc9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00410bcc: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 00410bcf: cmp dword ptr [ebp - 0x74], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00410bd3: ja 0x41133e */ if ((!fC&&!fZ)) goto L_0041133e;
L_00410bd9:; BB(0x00410bd9);
    /* 00410bd9: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00410bdc: jmp dword ptr [eax*4 + 0x41134e] */ { u32 t = R32((u32)(r_eax*4+0x41134eu)); switch (t) { case 0x410be3u: goto L_00410be3; case 0x410c16u: goto L_00410c16; case 0x410ca3u: goto L_00410ca3; case 0x410d3bu: goto L_00410d3b; case 0x410dcau: goto L_00410dca; case 0x410f04u: goto L_00410f04; case 0x41100du: goto L_0041100d; case 0x411201u: goto L_00411201; default: UNSUP(0x00410bdc, "jump table entry is not a known target"); } }
L_00410be3:; BB(0x00410be3);
    /* 00410be3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410be6: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x410bebu); f_0041136e();
    /* 00410beb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00410bee: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410bf1: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410bf4: jge 0x410bfe */ if ((fS==fO)) goto L_00410bfe;
L_00410bf6:; BB(0x00410bf6);
    /* 00410bf6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410bf9: jmp 0x411346 */ goto L_00411346;
L_00410bfe:; BB(0x00410bfe);
    /* 00410bfe: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410c01: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410c04: jle 0x410c0e */ if ((fZ||fS!=fO)) goto L_00410c0e;
L_00410c06:; BB(0x00410c06);
    /* 00410c06: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00410c09: jmp 0x411346 */ goto L_00411346;
L_00410c0e:; BB(0x00410c0e);
    /* 00410c0e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410c11: jmp 0x411346 */ goto L_00411346;
L_00410c16:; BB(0x00410c16);
    /* 00410c16: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410c19: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x410c1eu); f_0041136e();
    /* 00410c1e: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00410c20: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00410c23: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410c26: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00410c28: cmp dword ptr [ebp - 0x28], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410c2b: jne 0x410c43 */ if (!fZ) goto L_00410c43;
L_00410c2d:; BB(0x00410c2d);
    /* 00410c2d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00410c2f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x410c34u); f_0060ee31();
    /* 00410c34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410c37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410c39: jne 0x410c43 */ if (!fZ) goto L_00410c43;
L_00410c3b:; BB(0x00410c3b);
    /* 00410c3b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410c3e: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00410c41: jmp 0x410c7b */ goto L_00410c7b;
L_00410c43:; BB(0x00410c43);
    /* 00410c43: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410c46: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410c47: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00410c4c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410c4c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410c4c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410c4e: mov esi, eax */ r_esi = r_eax;
    /* 00410c50: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00410c52: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x410c57u); f_0060ee31();
    /* 00410c57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410c5a: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410c5d: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410c60: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410c63: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00410c65: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00410c68: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410c6b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410c6c: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00410c71: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410c71, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410c71, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410c73: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410c76: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410c78: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00410c7b:; BB(0x00410c7b);
    /* 00410c7b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410c7e: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410c81: jge 0x410c8b */ if ((fS==fO)) goto L_00410c8b;
L_00410c83:; BB(0x00410c83);
    /* 00410c83: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410c86: jmp 0x411346 */ goto L_00411346;
L_00410c8b:; BB(0x00410c8b);
    /* 00410c8b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410c8e: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410c91: jle 0x410c9b */ if ((fZ||fS!=fO)) goto L_00410c9b;
L_00410c93:; BB(0x00410c93);
    /* 00410c93: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00410c96: jmp 0x411346 */ goto L_00411346;
L_00410c9b:; BB(0x00410c9b);
    /* 00410c9b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410c9e: jmp 0x411346 */ goto L_00411346;
L_00410ca3:; BB(0x00410ca3);
    /* 00410ca3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410ca6: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x410cabu); f_0041136e();
    /* 00410cab: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410cae: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00410cb1: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410cb8: jne 0x410d13 */ if (!fZ) goto L_00410d13;
L_00410cba:; BB(0x00410cba);
    /* 00410cba: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410cbd: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410cc0: cmp dword ptr [ebp - 0x28], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410cc3: jne 0x410cdb */ if (!fZ) goto L_00410cdb;
L_00410cc5:; BB(0x00410cc5);
    /* 00410cc5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00410cc7: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x410cccu); f_0060ee31();
    /* 00410ccc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410ccf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410cd1: jne 0x410cdb */ if (!fZ) goto L_00410cdb;
L_00410cd3:; BB(0x00410cd3);
    /* 00410cd3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410cd6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00410cd9: jmp 0x410d13 */ goto L_00410d13;
L_00410cdb:; BB(0x00410cdb);
    /* 00410cdb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410cde: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410cdf: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00410ce4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410ce4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410ce4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410ce6: mov esi, eax */ r_esi = r_eax;
    /* 00410ce8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00410cea: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x410cefu); f_0060ee31();
    /* 00410cef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410cf2: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410cf5: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410cf8: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410cfb: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00410cfd: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00410d00: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410d03: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410d04: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00410d09: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410d09, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410d09, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410d0b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410d0e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410d10: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00410d13:; BB(0x00410d13);
    /* 00410d13: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410d16: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410d19: jge 0x410d23 */ if ((fS==fO)) goto L_00410d23;
L_00410d1b:; BB(0x00410d1b);
    /* 00410d1b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410d1e: jmp 0x411346 */ goto L_00411346;
L_00410d23:; BB(0x00410d23);
    /* 00410d23: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410d26: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410d29: jle 0x410d33 */ if ((fZ||fS!=fO)) goto L_00410d33;
L_00410d2b:; BB(0x00410d2b);
    /* 00410d2b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00410d2e: jmp 0x411346 */ goto L_00411346;
L_00410d33:; BB(0x00410d33);
    /* 00410d33: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410d36: jmp 0x411346 */ goto L_00411346;
L_00410d3b:; BB(0x00410d3b);
    /* 00410d3b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410d3e: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x410d43u); f_0041136e();
    /* 00410d43: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410d46: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00410d49: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410d4c: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410d4f: cmp dword ptr [ebp - 0x28], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410d52: jne 0x410d6a */ if (!fZ) goto L_00410d6a;
L_00410d54:; BB(0x00410d54);
    /* 00410d54: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00410d56: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x410d5bu); f_0060ee31();
    /* 00410d5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410d5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410d60: jne 0x410d6a */ if (!fZ) goto L_00410d6a;
L_00410d62:; BB(0x00410d62);
    /* 00410d62: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410d65: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00410d68: jmp 0x410da2 */ goto L_00410da2;
L_00410d6a:; BB(0x00410d6a);
    /* 00410d6a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410d6d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410d6e: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00410d73: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410d73, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410d73, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410d75: mov esi, eax */ r_esi = r_eax;
    /* 00410d77: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00410d79: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x410d7eu); f_0060ee31();
    /* 00410d7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410d81: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410d84: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410d87: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410d8a: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00410d8c: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00410d8f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410d92: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410d93: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00410d98: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410d98, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410d98, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410d9a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410d9d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410d9f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00410da2:; BB(0x00410da2);
    /* 00410da2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410da5: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410da8: jge 0x410db2 */ if ((fS==fO)) goto L_00410db2;
L_00410daa:; BB(0x00410daa);
    /* 00410daa: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410dad: jmp 0x411346 */ goto L_00411346;
L_00410db2:; BB(0x00410db2);
    /* 00410db2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410db5: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410db8: jle 0x410dc2 */ if ((fZ||fS!=fO)) goto L_00410dc2;
L_00410dba:; BB(0x00410dba);
    /* 00410dba: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00410dbd: jmp 0x411346 */ goto L_00411346;
L_00410dc2:; BB(0x00410dc2);
    /* 00410dc2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410dc5: jmp 0x411346 */ goto L_00411346;
L_00410dca:; BB(0x00410dca);
    /* 00410dca: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410dcd: cmp dword ptr [eax + 0x6c], 3 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410dd1: jge 0x410e66 */ if ((fS==fO)) goto L_00410e66;
L_00410dd7:; BB(0x00410dd7);
    /* 00410dd7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410dda: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x410ddfu); f_0041136e();
    /* 00410ddf: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410de2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00410de5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410de8: imul ecx, ecx, 5 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x5u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410deb: cmp dword ptr [ebp - 0x28], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410dee: jne 0x410e06 */ if (!fZ) goto L_00410e06;
L_00410df0:; BB(0x00410df0);
    /* 00410df0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00410df2: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x410df7u); f_0060ee31();
    /* 00410df7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410dfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410dfc: jne 0x410e06 */ if (!fZ) goto L_00410e06;
L_00410dfe:; BB(0x00410dfe);
    /* 00410dfe: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410e01: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00410e04: jmp 0x410e3e */ goto L_00410e3e;
L_00410e06:; BB(0x00410e06);
    /* 00410e06: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410e09: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410e0a: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00410e0f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410e0f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410e0f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410e11: mov esi, eax */ r_esi = r_eax;
    /* 00410e13: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00410e15: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x410e1au); f_0060ee31();
    /* 00410e1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410e1d: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410e20: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410e23: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410e26: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00410e28: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00410e2b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410e2e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410e2f: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00410e34: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410e34, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410e34, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410e36: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410e39: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410e3b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00410e3e:; BB(0x00410e3e);
    /* 00410e3e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410e41: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410e44: jge 0x410e4e */ if ((fS==fO)) goto L_00410e4e;
L_00410e46:; BB(0x00410e46);
    /* 00410e46: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410e49: jmp 0x411346 */ goto L_00411346;
L_00410e4e:; BB(0x00410e4e);
    /* 00410e4e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410e51: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410e54: jle 0x410e5e */ if ((fZ||fS!=fO)) goto L_00410e5e;
L_00410e56:; BB(0x00410e56);
    /* 00410e56: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00410e59: jmp 0x411346 */ goto L_00411346;
L_00410e5e:; BB(0x00410e5e);
    /* 00410e5e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410e61: jmp 0x411346 */ goto L_00411346;
L_00410e66:; BB(0x00410e66);
    /* 00410e66: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00410e68: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x410e6du); f_0060ee31();
    /* 00410e6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410e70: mov ecx, eax */ r_ecx = r_eax;
    /* 00410e72: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00410e75: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00410e78: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410e79: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410e79, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410e79, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410e7b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00410e7e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410e81: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x410e86u); f_0041136e();
    /* 00410e86: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410e89: cmp dword ptr [ebp - 0x28], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410e8c: jge 0x410efc */ if ((fS==fO)) goto L_00410efc;
L_00410e8e:; BB(0x00410e8e);
    /* 00410e8e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410e91: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x410e96u); f_0041136e();
    /* 00410e96: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410e99: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00410e9c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410e9f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410ea0: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00410ea5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410ea5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410ea5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410ea7: mov esi, eax */ r_esi = r_eax;
    /* 00410ea9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00410eab: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x410eb0u); f_0060ee31();
    /* 00410eb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410eb3: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410eb6: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00410eb9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410ebc: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00410ebe: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00410ec1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410ec4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410ec5: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00410eca: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00410eca, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00410eca, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00410ecc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410ecf: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410ed1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00410ed4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410ed7: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410eda: jge 0x410ee4 */ if ((fS==fO)) goto L_00410ee4;
L_00410edc:; BB(0x00410edc);
    /* 00410edc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410edf: jmp 0x411346 */ goto L_00411346;
L_00410ee4:; BB(0x00410ee4);
    /* 00410ee4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410ee7: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410eea: jle 0x410ef4 */ if ((fZ||fS!=fO)) goto L_00410ef4;
L_00410eec:; BB(0x00410eec);
    /* 00410eec: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00410eef: jmp 0x411346 */ goto L_00411346;
L_00410ef4:; BB(0x00410ef4);
    /* 00410ef4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410ef7: jmp 0x411346 */ goto L_00411346;
L_00410efc:; BB(0x00410efc);
    /* 00410efc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410eff: jmp 0x411346 */ goto L_00411346;
L_00410f04:; BB(0x00410f04);
    /* 00410f04: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410f07: cmp dword ptr [eax + 0x6c], 2 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410f0b: jg 0x410f1d */ if ((!fZ&&fS==fO)) goto L_00410f1d;
L_00410f0d:; BB(0x00410f0d);
    /* 00410f0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410f10: cmp dword ptr [ecx + 0x148], 1 */ {  u32 a = R32((u32)(r_ecx+0x148u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410f17: jle 0x411000 */ if ((fZ||fS!=fO)) goto L_00411000;
L_00410f1d:; BB(0x00410f1d);
    /* 00410f1d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410f20: cmp dword ptr [edx + 0x13c], 0 */ {  u32 a = R32((u32)(r_edx+0x13cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410f27: je 0x410f43 */ if (fZ) goto L_00410f43;
L_00410f29:; BB(0x00410f29);
    /* 00410f29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00410f2c: mov dword ptr [eax + 0x148], 1 */ W32((u32)(r_eax+0x148u), 0x1u);
    /* 00410f36: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410f39: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x410f3eu); f_0041136e();
    /* 00410f3e: jmp 0x411346 */ goto L_00411346;
L_00410f43:; BB(0x00410f43);
    /* 00410f43: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410f46: cmp dword ptr [ecx + 0x148], 4 */ {  u32 a = R32((u32)(r_ecx+0x148u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410f4d: jl 0x410f72 */ if ((fS!=fO)) goto L_00410f72;
L_00410f4f:; BB(0x00410f4f);
    /* 00410f4f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410f52: cmp dword ptr [edx + 0x6c], 3 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410f56: jge 0x410f72 */ if ((fS==fO)) goto L_00410f72;
L_00410f58:; BB(0x00410f58);
    /* 00410f58: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00410f5b: mov dword ptr [eax + 0x148], 1 */ W32((u32)(r_eax+0x148u), 0x1u);
    /* 00410f65: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410f68: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x410f6du); f_0041136e();
    /* 00410f6d: jmp 0x411346 */ goto L_00411346;
L_00410f72:; BB(0x00410f72);
    /* 00410f72: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410f75: mov edx, dword ptr [ecx + 0x148] */ r_edx = R32((u32)(r_ecx+0x148u));
    /* 00410f7b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00410f7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00410f81: mov dword ptr [eax + 0x148], edx */ W32((u32)(r_eax+0x148u), r_edx);
    /* 00410f87: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410f8a: cmp dword ptr [ecx + 0x14c], 0 */ {  u32 a = R32((u32)(r_ecx+0x14cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410f91: jne 0x410fa0 */ if (!fZ) goto L_00410fa0;
L_00410f93:; BB(0x00410f93);
    /* 00410f93: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00410f96: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x410f9bu); f_0041136e();
    /* 00410f9b: jmp 0x411346 */ goto L_00411346;
L_00410fa0:; BB(0x00410fa0);
    /* 00410fa0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410fa3: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 00410fa9: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410fac: jge 0x410fb6 */ if ((fS==fO)) goto L_00410fb6;
L_00410fae:; BB(0x00410fae);
    /* 00410fae: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410fb1: jmp 0x411346 */ goto L_00411346;
L_00410fb6:; BB(0x00410fb6);
    /* 00410fb6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410fb9: mov edx, dword ptr [ecx + 0x14c] */ r_edx = R32((u32)(r_ecx+0x14cu));
    /* 00410fbf: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410fc2: jle 0x410fcc */ if ((fZ||fS!=fO)) goto L_00410fcc;
L_00410fc4:; BB(0x00410fc4);
    /* 00410fc4: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00410fc7: jmp 0x411346 */ goto L_00411346;
L_00410fcc:; BB(0x00410fcc);
    /* 00410fcc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410fcf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410fd0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410fd2: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00410fd4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410fd7: cmp dword ptr [ecx + 0x14c], eax */ {  u32 a = R32((u32)(r_ecx+0x14cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410fdd: jle 0x410ff2 */ if ((fZ||fS!=fO)) goto L_00410ff2;
L_00410fdf:; BB(0x00410fdf);
    /* 00410fdf: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410fe3: jne 0x410ff2 */ if (!fZ) goto L_00410ff2;
L_00410fe5:; BB(0x00410fe5);
    /* 00410fe5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410fe8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00410fe9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410feb: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00410fed: jmp 0x411346 */ goto L_00411346;
L_00410ff2:; BB(0x00410ff2);
    /* 00410ff2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410ff5: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 00410ffb: jmp 0x411346 */ goto L_00411346;
L_00411000:; BB(0x00411000);
    /* 00411000: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411003: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x411008u); f_0041136e();
    /* 00411008: jmp 0x411346 */ goto L_00411346;
L_0041100d:; BB(0x0041100d);
    /* 0041100d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411010: cmp dword ptr [eax + 0x6c], 3 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411014: jge 0x4110a9 */ if ((fS==fO)) goto L_004110a9;
L_0041101a:; BB(0x0041101a);
    /* 0041101a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041101d: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x411022u); f_0041136e();
    /* 00411022: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411025: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00411028: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041102b: imul ecx, ecx, 5 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x5u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041102e: cmp dword ptr [ebp - 0x28], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411031: jne 0x411049 */ if (!fZ) goto L_00411049;
L_00411033:; BB(0x00411033);
    /* 00411033: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411035: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x41103au); f_0060ee31();
    /* 0041103a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041103d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041103f: jne 0x411049 */ if (!fZ) goto L_00411049;
L_00411041:; BB(0x00411041);
    /* 00411041: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411044: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00411047: jmp 0x411081 */ goto L_00411081;
L_00411049:; BB(0x00411049);
    /* 00411049: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041104c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041104d: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00411052: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00411052, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00411052, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00411054: mov esi, eax */ r_esi = r_eax;
    /* 00411056: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00411058: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x41105du); f_0060ee31();
    /* 0041105d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411060: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00411063: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411066: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00411069: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041106b: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0041106e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00411071: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00411072: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00411077: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00411077, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00411077, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00411079: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041107c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041107e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00411081:; BB(0x00411081);
    /* 00411081: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00411084: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411087: jge 0x411091 */ if ((fS==fO)) goto L_00411091;
L_00411089:; BB(0x00411089);
    /* 00411089: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041108c: jmp 0x411346 */ goto L_00411346;
L_00411091:; BB(0x00411091);
    /* 00411091: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00411094: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411097: jle 0x4110a1 */ if ((fZ||fS!=fO)) goto L_004110a1;
L_00411099:; BB(0x00411099);
    /* 00411099: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041109c: jmp 0x411346 */ goto L_00411346;
L_004110a1:; BB(0x004110a1);
    /* 004110a1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004110a4: jmp 0x411346 */ goto L_00411346;
L_004110a9:; BB(0x004110a9);
    /* 004110a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004110ac: cmp dword ptr [eax + 0x13c], 0 */ {  u32 a = R32((u32)(r_eax+0x13cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004110b3: jne 0x411193 */ if (!fZ) goto L_00411193;
L_004110b9:; BB(0x004110b9);
    /* 004110b9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004110bc: cmp dword ptr [ecx + 0x14c], 0 */ {  u32 a = R32((u32)(r_ecx+0x14cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004110c3: jne 0x411133 */ if (!fZ) goto L_00411133;
L_004110c5:; BB(0x004110c5);
    /* 004110c5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004110c8: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x4110cdu); f_0041136e();
    /* 004110cd: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004110d0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004110d3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004110d6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004110d7: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004110dc: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004110dc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004110dc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004110de: mov esi, eax */ r_esi = r_eax;
    /* 004110e0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004110e2: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4110e7u); f_0060ee31();
    /* 004110e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004110ea: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004110ed: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004110f0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004110f3: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004110f5: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004110f8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004110fb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004110fc: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00411101: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00411101, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00411101, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00411103: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00411106: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00411108: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041110b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041110e: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411111: jge 0x41111b */ if ((fS==fO)) goto L_0041111b;
L_00411113:; BB(0x00411113);
    /* 00411113: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411116: jmp 0x411346 */ goto L_00411346;
L_0041111b:; BB(0x0041111b);
    /* 0041111b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041111e: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411121: jle 0x41112b */ if ((fZ||fS!=fO)) goto L_0041112b;
L_00411123:; BB(0x00411123);
    /* 00411123: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00411126: jmp 0x411346 */ goto L_00411346;
L_0041112b:; BB(0x0041112b);
    /* 0041112b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041112e: jmp 0x411346 */ goto L_00411346;
L_00411133:; BB(0x00411133);
    /* 00411133: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411136: mov ecx, dword ptr [eax + 0x14c] */ r_ecx = R32((u32)(r_eax+0x14cu));
    /* 0041113c: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041113f: jge 0x411149 */ if ((fS==fO)) goto L_00411149;
L_00411141:; BB(0x00411141);
    /* 00411141: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411144: jmp 0x411346 */ goto L_00411346;
L_00411149:; BB(0x00411149);
    /* 00411149: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041114c: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 00411152: cmp eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411155: jle 0x41115f */ if ((fZ||fS!=fO)) goto L_0041115f;
L_00411157:; BB(0x00411157);
    /* 00411157: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041115a: jmp 0x411346 */ goto L_00411346;
L_0041115f:; BB(0x0041115f);
    /* 0041115f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00411162: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00411163: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00411165: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00411167: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041116a: cmp dword ptr [ecx + 0x14c], eax */ {  u32 a = R32((u32)(r_ecx+0x14cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411170: jle 0x411185 */ if ((fZ||fS!=fO)) goto L_00411185;
L_00411172:; BB(0x00411172);
    /* 00411172: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411176: jne 0x411185 */ if (!fZ) goto L_00411185;
L_00411178:; BB(0x00411178);
    /* 00411178: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041117b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041117c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041117e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00411180: jmp 0x411346 */ goto L_00411346;
L_00411185:; BB(0x00411185);
    /* 00411185: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411188: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 0041118e: jmp 0x411346 */ goto L_00411346;
L_00411193:; BB(0x00411193);
    /* 00411193: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411196: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x41119bu); f_0041136e();
    /* 0041119b: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041119e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004111a1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004111a4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004111a5: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004111aa: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004111aa, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004111aa, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004111ac: mov esi, eax */ r_esi = r_eax;
    /* 004111ae: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004111b0: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4111b5u); f_0060ee31();
    /* 004111b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004111b8: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004111bb: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004111be: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004111c1: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004111c3: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004111c6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004111c9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004111ca: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004111cf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004111cf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004111cf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004111d1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004111d4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004111d6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004111d9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004111dc: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004111df: jge 0x4111e9 */ if ((fS==fO)) goto L_004111e9;
L_004111e1:; BB(0x004111e1);
    /* 004111e1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004111e4: jmp 0x411346 */ goto L_00411346;
L_004111e9:; BB(0x004111e9);
    /* 004111e9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004111ec: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004111ef: jle 0x4111f9 */ if ((fZ||fS!=fO)) goto L_004111f9;
L_004111f1:; BB(0x004111f1);
    /* 004111f1: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004111f4: jmp 0x411346 */ goto L_00411346;
L_004111f9:; BB(0x004111f9);
    /* 004111f9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004111fc: jmp 0x411346 */ goto L_00411346;
L_00411201:; BB(0x00411201);
    /* 00411201: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411204: cmp dword ptr [eax + 0x6c], 1 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411208: jge 0x41129b */ if ((fS==fO)) goto L_0041129b;
L_0041120e:; BB(0x0041120e);
    /* 0041120e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411211: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x411216u); f_0041136e();
    /* 00411216: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00411218: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041121b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041121e: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00411220: cmp dword ptr [ebp - 0x28], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411223: jne 0x41123b */ if (!fZ) goto L_0041123b;
L_00411225:; BB(0x00411225);
    /* 00411225: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411227: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x41122cu); f_0060ee31();
    /* 0041122c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041122f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411231: jne 0x41123b */ if (!fZ) goto L_0041123b;
L_00411233:; BB(0x00411233);
    /* 00411233: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411236: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00411239: jmp 0x411273 */ goto L_00411273;
L_0041123b:; BB(0x0041123b);
    /* 0041123b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041123e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041123f: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00411244: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00411244, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00411244, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00411246: mov esi, eax */ r_esi = r_eax;
    /* 00411248: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0041124a: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x41124fu); f_0060ee31();
    /* 0041124f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411252: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00411255: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411258: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041125b: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041125d: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00411260: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00411263: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00411264: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00411269: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00411269, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00411269, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041126b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041126e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00411270: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00411273:; BB(0x00411273);
    /* 00411273: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00411276: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411279: jge 0x411283 */ if ((fS==fO)) goto L_00411283;
L_0041127b:; BB(0x0041127b);
    /* 0041127b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041127e: jmp 0x411346 */ goto L_00411346;
L_00411283:; BB(0x00411283);
    /* 00411283: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00411286: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411289: jle 0x411293 */ if ((fZ||fS!=fO)) goto L_00411293;
L_0041128b:; BB(0x0041128b);
    /* 0041128b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041128e: jmp 0x411346 */ goto L_00411346;
L_00411293:; BB(0x00411293);
    /* 00411293: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00411296: jmp 0x411346 */ goto L_00411346;
L_0041129b:; BB(0x0041129b);
    /* 0041129b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041129e: cmp dword ptr [eax + 0x13c], 0 */ {  u32 a = R32((u32)(r_eax+0x13cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004112a5: je 0x4112da */ if (fZ) goto L_004112da;
L_004112a7:; BB(0x004112a7);
    /* 004112a7: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 004112aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004112ab: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004112ae: call 0x40c997 */ r_esp -= 4; W32(r_esp, 0x4112b3u); f_0040c997();
    /* 004112b3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004112b6: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004112b8: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004112bb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004112be: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004112c1: jge 0x4112c8 */ if ((fS==fO)) goto L_004112c8;
L_004112c3:; BB(0x004112c3);
    /* 004112c3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004112c6: jmp 0x411346 */ goto L_00411346;
L_004112c8:; BB(0x004112c8);
    /* 004112c8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004112cb: cmp ecx, dword ptr [ebp - 0x48] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004112ce: jle 0x4112d5 */ if ((fZ||fS!=fO)) goto L_004112d5;
L_004112d0:; BB(0x004112d0);
    /* 004112d0: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004112d3: jmp 0x411346 */ goto L_00411346;
L_004112d5:; BB(0x004112d5);
    /* 004112d5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004112d8: jmp 0x411346 */ goto L_00411346;
L_004112da:; BB(0x004112da);
    /* 004112da: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004112dd: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x4112e2u); f_0041136e();
    /* 004112e2: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004112e4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004112e7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004112ea: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004112eb: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004112f0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004112f0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004112f0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004112f2: mov esi, eax */ r_esi = r_eax;
    /* 004112f4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004112f6: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4112fbu); f_0060ee31();
    /* 004112fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004112fe: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00411301: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411304: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00411307: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00411309: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0041130c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041130f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00411310: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00411315: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00411315, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00411315, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00411317: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041131a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041131c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041131f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00411322: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411325: jge 0x41132c */ if ((fS==fO)) goto L_0041132c;
L_00411327:; BB(0x00411327);
    /* 00411327: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041132a: jmp 0x411346 */ goto L_00411346;
L_0041132c:; BB(0x0041132c);
    /* 0041132c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041132f: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411332: jle 0x411339 */ if ((fZ||fS!=fO)) goto L_00411339;
L_00411334:; BB(0x00411334);
    /* 00411334: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00411337: jmp 0x411346 */ goto L_00411346;
L_00411339:; BB(0x00411339);
    /* 00411339: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041133c: jmp 0x411346 */ goto L_00411346;
L_0041133e:; BB(0x0041133e);
    /* 0041133e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411341: call 0x41136e */ r_esp -= 4; W32(r_esp, 0x411346u); f_0041136e();
L_00411346:; BB(0x00411346);
    /* 00411346: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00411347: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00411348: mov esp, ebp */ r_esp = r_ebp;
    /* 0041134a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041134b: ret 4 */ FN_RET(0x004104ab); r_esp += 8; return;
}

void f_0041136e(void) /* FUN_0041136e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041136e);
    /* 0041136e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041136f: mov ebp, esp */ r_ebp = r_esp;
    /* 00411371: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411374: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00411377: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041137a: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41137fu); f_0040f81e();
    /* 0041137f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00411382: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00411387: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411389: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0041138f: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x411392u); call_ind(t); }
    /* 00411392: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00411395: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0041139b: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x4113a0u); f_00448ca3();
    /* 004113a0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004113a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004113a6: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x4113abu); f_0040c983();
    /* 004113ab: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004113ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004113b1: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004113b4: jle 0x4113ce */ if ((fZ||fS!=fO)) goto L_004113ce;
L_004113b6:; BB(0x004113b6);
    /* 004113b6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004113ba: jne 0x4113c6 */ if (!fZ) goto L_004113c6;
L_004113bc:; BB(0x004113bc);
    /* 004113bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004113bf: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x4113c4u); f_004259a0();
    /* 004113c4: jmp 0x4113ce */ goto L_004113ce;
L_004113c6:; BB(0x004113c6);
    /* 004113c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004113c9: jmp 0x411500 */ goto L_00411500;
L_004113ce:; BB(0x004113ce);
    /* 004113ce: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004113d1: cmp dword ptr [ecx + 0x6c], 1 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004113d5: jge 0x4113df */ if ((fS==fO)) goto L_004113df;
L_004113d7:; BB(0x004113d7);
    /* 004113d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004113da: jmp 0x411500 */ goto L_00411500;
L_004113df:; BB(0x004113df);
    /* 004113df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004113e2: cmp dword ptr [edx + 0x6c], 1 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004113e6: jne 0x411404 */ if (!fZ) goto L_00411404;
L_004113e8:; BB(0x004113e8);
    /* 004113e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004113eb: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004113ed: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004113f0: jle 0x4113fa */ if ((fZ||fS!=fO)) goto L_004113fa;
L_004113f2:; BB(0x004113f2);
    /* 004113f2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004113f5: jmp 0x411500 */ goto L_00411500;
L_004113fa:; BB(0x004113fa);
    /* 004113fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004113fd: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004113ff: jmp 0x411500 */ goto L_00411500;
L_00411404:; BB(0x00411404);
    /* 00411404: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411407: cmp dword ptr [ecx + 0x6c], 4 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041140b: jge 0x41142b */ if ((fS==fO)) goto L_0041142b;
L_0041140d:; BB(0x0041140d);
    /* 0041140d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411410: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411413: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411416: jle 0x411420 */ if ((fZ||fS!=fO)) goto L_00411420;
L_00411418:; BB(0x00411418);
    /* 00411418: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041141b: jmp 0x411500 */ goto L_00411500;
L_00411420:; BB(0x00411420);
    /* 00411420: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411423: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411426: jmp 0x411500 */ goto L_00411500;
L_0041142b:; BB(0x0041142b);
    /* 0041142b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041142e: cmp dword ptr [eax + 0x6c], 4 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411432: jne 0x411452 */ if (!fZ) goto L_00411452;
L_00411434:; BB(0x00411434);
    /* 00411434: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411437: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0041143a: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041143d: jle 0x411447 */ if ((fZ||fS!=fO)) goto L_00411447;
L_0041143f:; BB(0x0041143f);
    /* 0041143f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411442: jmp 0x411500 */ goto L_00411500;
L_00411447:; BB(0x00411447);
    /* 00411447: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041144a: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041144d: jmp 0x411500 */ goto L_00411500;
L_00411452:; BB(0x00411452);
    /* 00411452: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411455: cmp dword ptr [edx + 0x6c], 5 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411459: jne 0x411479 */ if (!fZ) goto L_00411479;
L_0041145b:; BB(0x0041145b);
    /* 0041145b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041145e: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411461: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411464: jle 0x41146e */ if ((fZ||fS!=fO)) goto L_0041146e;
L_00411466:; BB(0x00411466);
    /* 00411466: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411469: jmp 0x411500 */ goto L_00411500;
L_0041146e:; BB(0x0041146e);
    /* 0041146e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411471: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411474: jmp 0x411500 */ goto L_00411500;
L_00411479:; BB(0x00411479);
    /* 00411479: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041147c: cmp dword ptr [ecx + 0x6c], 6 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411480: jne 0x41149a */ if (!fZ) goto L_0041149a;
L_00411482:; BB(0x00411482);
    /* 00411482: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411485: imul edx, edx, 6 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x6u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411488: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041148b: jle 0x411492 */ if ((fZ||fS!=fO)) goto L_00411492;
L_0041148d:; BB(0x0041148d);
    /* 0041148d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411490: jmp 0x411500 */ goto L_00411500;
L_00411492:; BB(0x00411492);
    /* 00411492: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411495: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411498: jmp 0x411500 */ goto L_00411500;
L_0041149a:; BB(0x0041149a);
    /* 0041149a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041149d: cmp dword ptr [eax + 0x6c], 7 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004114a1: jne 0x4114bb */ if (!fZ) goto L_004114bb;
L_004114a3:; BB(0x004114a3);
    /* 004114a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004114a6: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004114a9: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004114ac: jle 0x4114b3 */ if ((fZ||fS!=fO)) goto L_004114b3;
L_004114ae:; BB(0x004114ae);
    /* 004114ae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004114b1: jmp 0x411500 */ goto L_00411500;
L_004114b3:; BB(0x004114b3);
    /* 004114b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004114b6: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004114b9: jmp 0x411500 */ goto L_00411500;
L_004114bb:; BB(0x004114bb);
    /* 004114bb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004114be: cmp dword ptr [edx + 0x6c], 8 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004114c2: jne 0x4114dc */ if (!fZ) goto L_004114dc;
L_004114c4:; BB(0x004114c4);
    /* 004114c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004114c7: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004114ca: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004114cd: jle 0x4114d4 */ if ((fZ||fS!=fO)) goto L_004114d4;
L_004114cf:; BB(0x004114cf);
    /* 004114cf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004114d2: jmp 0x411500 */ goto L_00411500;
L_004114d4:; BB(0x004114d4);
    /* 004114d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004114d7: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004114da: jmp 0x411500 */ goto L_00411500;
L_004114dc:; BB(0x004114dc);
    /* 004114dc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004114df: cmp dword ptr [ecx + 0x6c], 9 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004114e3: jl 0x4114fd */ if ((fS!=fO)) goto L_004114fd;
L_004114e5:; BB(0x004114e5);
    /* 004114e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004114e8: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004114eb: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004114ee: jle 0x4114f5 */ if ((fZ||fS!=fO)) goto L_004114f5;
L_004114f0:; BB(0x004114f0);
    /* 004114f0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004114f3: jmp 0x411500 */ goto L_00411500;
L_004114f5:; BB(0x004114f5);
    /* 004114f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004114f8: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004114fb: jmp 0x411500 */ goto L_00411500;
L_004114fd:; BB(0x004114fd);
    /* 004114fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00411500:; BB(0x00411500);
    /* 00411500: mov esp, ebp */ r_esp = r_ebp;
    /* 00411502: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411503: ret  */ FN_RET(0x0041136e); r_esp += 4; return;
}

void f_00411504(void) /* FUN_00411504 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411504);
    /* 00411504: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411505: mov ebp, esp */ r_ebp = r_esp;
    /* 00411507: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411508: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041150b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041150e: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x411513u); f_0040f81e();
    /* 00411513: mov ecx, eax */ r_ecx = r_eax;
    /* 00411515: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x41151au); f_004259a0();
    /* 0041151a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041151c: jne 0x411535 */ if (!fZ) goto L_00411535;
L_0041151e:; BB(0x0041151e);
    /* 0041151e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411520: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00411526: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x41152bu); f_0060e7bd();
    /* 0041152b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041152e: call 0x4116b3 */ r_esp -= 4; W32(r_esp, 0x411533u); f_004116b3();
    /* 00411533: jmp 0x411570 */ goto L_00411570;
L_00411535:; BB(0x00411535);
    /* 00411535: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0041153b: call 0x45cbf1 */ r_esp -= 4; W32(r_esp, 0x411540u); f_0045cbf1();
    /* 00411540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411542: je 0x411563 */ if (fZ) goto L_00411563;
L_00411544:; BB(0x00411544);
    /* 00411544: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411546: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 0041154c: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x411551u); f_0060e7bd();
    /* 00411551: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411554: mov cx, word ptr [eax + 0x78] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x78u))) & 0xffffu);
    /* 00411558: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411559: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041155c: call 0x41487d */ r_esp -= 4; W32(r_esp, 0x411561u); f_0041487d();
    /* 00411561: jmp 0x411570 */ goto L_00411570;
L_00411563:; BB(0x00411563);
    /* 00411563: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411565: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 0041156b: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x411570u); f_0060e7bd();
L_00411570:; BB(0x00411570);
    /* 00411570: mov esp, ebp */ r_esp = r_ebp;
    /* 00411572: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411573: ret  */ FN_RET(0x00411504); r_esp += 4; return;
}

void f_00411574(void) /* FUN_00411574 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411574);
    /* 00411574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411575: mov ebp, esp */ r_ebp = r_esp;
    /* 00411577: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411578: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041157b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041157e: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x411583u); f_0040f9c4();
    /* 00411583: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411584: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411587: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x41158cu); f_0040f9c4();
    /* 0041158c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041158f: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00411593: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x411598u); f_004280b4();
    /* 00411598: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041159a: je 0x4115a3 */ if (fZ) goto L_004115a3;
L_0041159c:; BB(0x0041159c);
    /* 0041159c: mov eax, 1 */ r_eax = 0x1u;
    /* 004115a1: jmp 0x4115a5 */ goto L_004115a5;
L_004115a3:; BB(0x004115a3);
    /* 004115a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004115a5:; BB(0x004115a5);
    /* 004115a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004115a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004115a8: ret  */ FN_RET(0x00411574); r_esp += 4; return;
}

void f_004115a9(void) /* FUN_004115a9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004115a9);
    /* 004115a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004115aa: mov ebp, esp */ r_ebp = r_esp;
    /* 004115ac: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004115af: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004115b2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004115b5: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4115bau); f_0040f81e();
    /* 004115ba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004115bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004115c0: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x4115c5u); f_004259a0();
    /* 004115c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004115c7: je 0x4115ce */ if (fZ) goto L_004115ce;
L_004115c9:; BB(0x004115c9);
    /* 004115c9: jmp 0x411687 */ goto L_00411687;
L_004115ce:; BB(0x004115ce);
    /* 004115ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004115d1: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004115d4: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x4115d9u); f_0041f839();
    /* 004115d9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004115dc: cmp dword ptr [ebp - 0xc], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004115e0: ja 0x411687 */ if ((!fC&&!fZ)) goto L_00411687;
L_004115e6:; BB(0x004115e6);
    /* 004115e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004115e9: jmp dword ptr [ecx*4 + 0x41168b] */ { u32 t = R32((u32)(r_ecx*4+0x41168bu)); switch (t) { case 0x4115f0u: goto L_004115f0; case 0x411602u: goto L_00411602; case 0x411611u: goto L_00411611; case 0x411620u: goto L_00411620; case 0x41162fu: goto L_0041162f; case 0x41163eu: goto L_0041163e; case 0x41164du: goto L_0041164d; case 0x41165cu: goto L_0041165c; case 0x41166bu: goto L_0041166b; case 0x41167au: goto L_0041167a; default: UNSUP(0x004115e9, "jump table entry is not a known target"); } }
L_004115f0:; BB(0x004115f0);
    /* 004115f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004115f3: mov dword ptr [edx + 0x10c], 6 */ W32((u32)(r_edx+0x10cu), 0x6u);
    /* 004115fd: jmp 0x411687 */ goto L_00411687;
L_00411602:; BB(0x00411602);
    /* 00411602: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411605: mov dword ptr [eax + 0x10c], 3 */ W32((u32)(r_eax+0x10cu), 0x3u);
    /* 0041160f: jmp 0x411687 */ goto L_00411687;
L_00411611:; BB(0x00411611);
    /* 00411611: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411614: mov dword ptr [ecx + 0x10c], 0 */ W32((u32)(r_ecx+0x10cu), 0x0u);
    /* 0041161e: jmp 0x411687 */ goto L_00411687;
L_00411620:; BB(0x00411620);
    /* 00411620: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411623: mov dword ptr [edx + 0x10c], 1 */ W32((u32)(r_edx+0x10cu), 0x1u);
    /* 0041162d: jmp 0x411687 */ goto L_00411687;
L_0041162f:; BB(0x0041162f);
    /* 0041162f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411632: mov dword ptr [eax + 0x10c], 2 */ W32((u32)(r_eax+0x10cu), 0x2u);
    /* 0041163c: jmp 0x411687 */ goto L_00411687;
L_0041163e:; BB(0x0041163e);
    /* 0041163e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411641: mov dword ptr [ecx + 0x10c], 6 */ W32((u32)(r_ecx+0x10cu), 0x6u);
    /* 0041164b: jmp 0x411687 */ goto L_00411687;
L_0041164d:; BB(0x0041164d);
    /* 0041164d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411650: mov dword ptr [edx + 0x10c], 4 */ W32((u32)(r_edx+0x10cu), 0x4u);
    /* 0041165a: jmp 0x411687 */ goto L_00411687;
L_0041165c:; BB(0x0041165c);
    /* 0041165c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041165f: mov dword ptr [eax + 0x10c], 5 */ W32((u32)(r_eax+0x10cu), 0x5u);
    /* 00411669: jmp 0x411687 */ goto L_00411687;
L_0041166b:; BB(0x0041166b);
    /* 0041166b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041166e: mov dword ptr [ecx + 0x10c], 5 */ W32((u32)(r_ecx+0x10cu), 0x5u);
    /* 00411678: jmp 0x411687 */ goto L_00411687;
L_0041167a:; BB(0x0041167a);
    /* 0041167a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041167d: mov dword ptr [edx + 0x10c], 3 */ W32((u32)(r_edx+0x10cu), 0x3u);
L_00411687:; BB(0x00411687);
    /* 00411687: mov esp, ebp */ r_esp = r_ebp;
    /* 00411689: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041168a: ret  */ FN_RET(0x004115a9); r_esp += 4; return;
}

void f_004116b3(void) /* FUN_004116b3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004116b3);
    /* 004116b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004116b4: mov ebp, esp */ r_ebp = r_esp;
    /* 004116b6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004116b9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004116bc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004116c3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004116ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004116cd: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4116d2u); f_0040f81e();
    /* 004116d2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004116d5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004116d8: call 0x4115a9 */ r_esp -= 4; W32(r_esp, 0x4116ddu); f_004115a9();
    /* 004116dd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004116e0: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004116e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004116e7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004116ea: call 0x4104ab */ r_esp -= 4; W32(r_esp, 0x4116efu); f_004104ab();
    /* 004116ef: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004116f2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004116f5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004116f8: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 004116fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004116fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004116ff: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x411704u); f_00425bfe();
    /* 00411704: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411706: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411708: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041170b: add ecx, 0x114 */ {  u32 a = r_ecx; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00411711: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411712: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411714: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411717: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x41171cu); f_0040f9c4();
    /* 0041171c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041171f: mov eax, dword ptr [edx + eax*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20u));
    /* 00411723: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00411726: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00411729: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041172b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041172e: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x411731u); call_ind(t); }
    /* 00411731: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411733: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00411738: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041173b: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00411741: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00411744: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411746: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x411749u); call_ind(t); }
    /* 00411749: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041174b: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00411750: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00411753: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00411759: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041175c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041175e: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x411761u); call_ind(t); }
    /* 00411761: mov esp, ebp */ r_esp = r_ebp;
    /* 00411763: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411764: ret  */ FN_RET(0x004116b3); r_esp += 4; return;
}

void f_00411765(void) /* FUN_00411765 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411765);
    /* 00411765: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411766: mov ebp, esp */ r_ebp = r_esp;
    /* 00411768: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411769: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041176c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041176f: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x411774u); f_0040f9c4();
    /* 00411774: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00411777: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411778: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041177b: call 0x40f9ab */ r_esp -= 4; W32(r_esp, 0x411780u); f_0040f9ab();
    /* 00411780: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411782: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00411787: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041178a: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00411790: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00411793: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411795: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x411798u); call_ind(t); }
    /* 00411798: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0041179d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004117a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004117a1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004117a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004117a6: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004117a9: call 0x40d34d */ r_esp -= 4; W32(r_esp, 0x4117aeu); f_0040d34d();
    /* 004117ae: mov esp, ebp */ r_esp = r_ebp;
    /* 004117b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004117b1: ret  */ FN_RET(0x00411765); r_esp += 4; return;
}

void f_004117b2(void) /* FUN_004117b2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004117b2);
    /* 004117b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004117b3: mov ebp, esp */ r_ebp = r_esp;
    /* 004117b5: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004117b8: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004117bb: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004117c2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004117c5: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4117cau); f_0040f81e();
    /* 004117ca: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004117cd: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 004117d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004117d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004117d4: call 0x40c997 */ r_esp -= 4; W32(r_esp, 0x4117d9u); f_0040c997();
    /* 004117d9: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 004117dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004117dd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004117e0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004117e3: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x4117e8u); f_004267fb();
    /* 004117e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004117eb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004117ec: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004117ee: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004117f0: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004117f3: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004117f5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004117f7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004117fa: jne 0x411803 */ if (!fZ) goto L_00411803;
L_004117fc:; BB(0x004117fc);
    /* 004117fc: mov dword ptr [ebp - 0x18], 0x32 */ W32((u32)(r_ebp+0xffffffe8u), 0x32u);
L_00411803:; BB(0x00411803);
    /* 00411803: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411806: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00411807: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00411809: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0041180b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0041180e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411811: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411814: jl 0x411826 */ if ((fS!=fO)) goto L_00411826;
L_00411816:; BB(0x00411816);
    /* 00411816: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411819: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041181c: jne 0x41185b */ if (!fZ) goto L_0041185b;
L_0041181e:; BB(0x0041181e);
    /* 0041181e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00411821: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411824: jle 0x41185b */ if ((fZ||fS!=fO)) goto L_0041185b;
L_00411826:; BB(0x00411826);
    /* 00411826: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411828: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0041182d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00411830: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00411836: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00411839: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041183b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x41183eu); call_ind(t); }
    /* 0041183e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411840: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00411845: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00411848: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0041184e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00411851: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411853: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x411856u); call_ind(t); }
    /* 00411856: jmp 0x411983 */ goto L_00411983;
L_0041185b:; BB(0x0041185b);
    /* 0041185b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041185e: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x411863u); f_004259a0();
    /* 00411863: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411865: je 0x4118e1 */ if (fZ) goto L_004118e1;
L_00411867:; BB(0x00411867);
    /* 00411867: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041186a: call 0x40cbbf */ r_esp -= 4; W32(r_esp, 0x41186fu); f_0040cbbf();
    /* 0041186f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411871: je 0x4118e1 */ if (fZ) goto L_004118e1;
L_00411873:; BB(0x00411873);
    /* 00411873: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411878: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x41187du); f_0048ab58();
    /* 0041187d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411880: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00411883: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411887: je 0x41189a */ if (fZ) goto L_0041189a;
L_00411889:; BB(0x00411889);
    /* 00411889: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041188b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041188d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411890: call 0x411beb */ r_esp -= 4; W32(r_esp, 0x411895u); f_00411beb();
    /* 00411895: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00411898: jmp 0x4118a1 */ goto L_004118a1;
L_0041189a:; BB(0x0041189a);
    /* 0041189a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004118a1:; BB(0x004118a1);
    /* 004118a1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004118a4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004118a7: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 004118aa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004118ad: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004118b0: call 0x411d88 */ r_esp -= 4; W32(r_esp, 0x4118b5u); f_00411d88();
    /* 004118b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004118b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004118b9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004118bc: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004118bf: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x4118c4u); f_005d81dc();
    /* 004118c4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004118c7: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 004118ca: call 0x412233 */ r_esp -= 4; W32(r_esp, 0x4118cfu); f_00412233();
    /* 004118cf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004118d1: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 004118d7: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x4118dcu); f_0060e7bd();
    /* 004118dc: jmp 0x411983 */ goto L_00411983;
L_004118e1:; BB(0x004118e1);
    /* 004118e1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004118e4: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004118e7: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x4118ecu); f_0041f839();
    /* 004118ec: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 004118f0: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004118f4: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004118f7: je 0x411914 */ if (fZ) goto L_00411914;
L_004118f9:; BB(0x004118f9);
    /* 004118f9: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004118fd: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411900: je 0x411914 */ if (fZ) goto L_00411914;
L_00411902:; BB(0x00411902);
    /* 00411902: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00411906: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411909: je 0x411914 */ if (fZ) goto L_00411914;
L_0041190b:; BB(0x0041190b);
    /* 0041190b: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0041190f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411912: jne 0x411928 */ if (!fZ) goto L_00411928;
L_00411914:; BB(0x00411914);
    /* 00411914: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00411916: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x41191bu); f_0060ee31();
    /* 0041191b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041191e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00411920: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00411922: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411923: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00411926: jmp 0x41192f */ goto L_0041192f;
L_00411928:; BB(0x00411928);
    /* 00411928: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0041192f:; BB(0x0041192f);
    /* 0041192f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411931: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00411937: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0041193a: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00411940: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00411943: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411945: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x411948u); call_ind(t); }
    /* 00411948: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041194c: je 0x41196b */ if (fZ) goto L_0041196b;
L_0041194e:; BB(0x0041194e);
    /* 0041194e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411951: call 0x40c9c3 */ r_esp -= 4; W32(r_esp, 0x411956u); f_0040c9c3();
    /* 00411956: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0041195b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041195e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041195f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411961: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00411964: call 0x413656 */ r_esp -= 4; W32(r_esp, 0x411969u); f_00413656();
    /* 00411969: jmp 0x411983 */ goto L_00411983;
L_0041196b:; BB(0x0041196b);
    /* 0041196b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041196d: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00411973: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00411976: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0041197b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0041197e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00411980: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x411983u); call_ind(t); }
L_00411983:; BB(0x00411983);
    /* 00411983: mov esp, ebp */ r_esp = r_ebp;
    /* 00411985: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411986: ret  */ FN_RET(0x004117b2); r_esp += 4; return;
}

