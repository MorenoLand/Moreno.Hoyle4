#include "protos.h"

void f_0043d8b9(void) /* FUN_0043d8b9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d8b9);
    /* 0043d8b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8ba: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d8bc: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043d8c2: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
    /* 0043d8c8: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d8cf: jne 0x43d8d6 */ if (!fZ) goto L_0043d8d6;
L_0043d8d1:; BB(0x0043d8d1);
    /* 0043d8d1: jmp 0x43d995 */ goto L_0043d995;
L_0043d8d6:; BB(0x0043d8d6);
    /* 0043d8d6: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x43d8dcu); call_ind(t); }
    /* 0043d8dc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043d8df: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0043d8e5: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x43d8eau); f_005e07a3();
    /* 0043d8ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d8ec: je 0x43d995 */ if (fZ) goto L_0043d995;
L_0043d8f2:; BB(0x0043d8f2);
    /* 0043d8f2: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043d8f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d8fa: sub ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043d8fd: cmp ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0043d903: jb 0x43d995 */ if (fC) goto L_0043d995;
L_0043d909:; BB(0x0043d909);
    /* 0043d909: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043d90f: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0043d912: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043d915: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043d91b: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0043d91e: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043d924: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d927: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0043d92a: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043d930: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0043d933: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d934: push 0x653ff8 */ { u32 v = 0x653ff8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d939: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 0043d93f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d940: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x43d945u); f_00624050();
    /* 0043d945: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d948: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 0043d94e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d94f: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0043d955: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 0043d95b: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 0043d961: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 0043d967: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043d969: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x43d96cu); call_ind(t); }
    /* 0043d96c: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043d972: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d976: jne 0x43d995 */ if (!fZ) goto L_0043d995;
L_0043d978:; BB(0x0043d978);
    /* 0043d978: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0043d97e: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 0043d984: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 0043d98a: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 0043d990: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043d992: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x43d995u); call_ind(t); }
L_0043d995:; BB(0x0043d995);
    /* 0043d995: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d997: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d998: ret  */ FN_RET(0x0043d8b9); r_esp += 4; return;
}

void f_0043d999(void) /* FUN_0043d999 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d999);
    /* 0043d999: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d99a: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d99c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d99d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d9a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d9a3: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x43d9a8u); f_005e9d30();
    /* 0043d9a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d9ab: mov dword ptr [eax], 0x63499c */ W32((u32)(r_eax), 0x63499cu);
    /* 0043d9b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d9b4: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d9b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d9b7: ret  */ FN_RET(0x0043d999); r_esp += 4; return;
}

void f_0043d9b8(void) /* FUN_0043d9b8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d9b8);
    /* 0043d9b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d9b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d9bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d9bc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d9bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d9c2: mov dword ptr [eax], 0x63499c */ W32((u32)(r_eax), 0x63499cu);
    /* 0043d9c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d9cb: call 0x5e9dde */ r_esp -= 4; W32(r_esp, 0x43d9d0u); f_005e9dde();
    /* 0043d9d0: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d9d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d9d3: ret  */ FN_RET(0x0043d9b8); r_esp += 4; return;
}

void f_0043d9d4(void) /* FUN_0043d9d4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d9d4);
    /* 0043d9d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d9d5: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d9d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d9d8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d9db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043d9de: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d9e2: jne 0x43d9f4 */ if (!fZ) goto L_0043d9f4;
L_0043d9e4:; BB(0x0043d9e4);
    /* 0043d9e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043d9e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d9e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d9eb: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x43d9f0u); f_005d9738();
    /* 0043d9f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d9f2: jne 0x43d9fc */ if (!fZ) goto L_0043d9fc;
L_0043d9f4:; BB(0x0043d9f4);
    /* 0043d9f4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043d9f7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043d9fa: jmp 0x43da21 */ goto L_0043da21;
L_0043d9fc:; BB(0x0043d9fc);
    /* 0043d9fc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043d9ff: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043da03: jne 0x43da1b */ if (!fZ) goto L_0043da1b;
L_0043da05:; BB(0x0043da05);
    /* 0043da05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043da08: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043da0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043da0d: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43da10u); call_ind(t); }
    /* 0043da10: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043da16: call 0x43c2e8 */ r_esp -= 4; W32(r_esp, 0x43da1bu); f_0043c2e8();
L_0043da1b:; BB(0x0043da1b);
    /* 0043da1b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043da1e: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_0043da21:; BB(0x0043da21);
    /* 0043da21: mov esp, ebp */ r_esp = r_ebp;
    /* 0043da23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043da24: ret 4 */ FN_RET(0x0043d9d4); r_esp += 8; return;
}

void f_0043da27(void) /* FUN_0043da27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043da27);
    /* 0043da27: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043da28: mov ebp, esp */ r_ebp = r_esp;
    /* 0043da2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043da2b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043da2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043da31: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x43da36u); f_005d5d20();
    /* 0043da36: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043da39: mov dword ptr [eax], 0x6349e4 */ W32((u32)(r_eax), 0x6349e4u);
    /* 0043da3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043da42: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043da45: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 0043da4b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043da4e: mov esp, ebp */ r_esp = r_ebp;
    /* 0043da50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043da51: ret 4 */ FN_RET(0x0043da27); r_esp += 8; return;
}

void f_0043da54(void) /* FUN_0043da54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043da54);
    /* 0043da54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043da55: mov ebp, esp */ r_ebp = r_esp;
    /* 0043da57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043da58: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043da5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043da5e: mov dword ptr [eax], 0x6349e4 */ W32((u32)(r_eax), 0x6349e4u);
    /* 0043da64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043da67: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x43da6cu); f_005d5dfb();
    /* 0043da6c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043da6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043da6f: ret  */ FN_RET(0x0043da54); r_esp += 4; return;
}

void f_0043da70(void) /* FUN_0043da70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043da70);
    /* 0043da70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043da71: mov ebp, esp */ r_ebp = r_esp;
    /* 0043da73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043da76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043da79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043da7b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043da7d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043da83: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x43da88u); f_0045c4ac();
    /* 0043da88: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043da8b: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043da90: mov ecx, dword ptr [eax + 0x1a0] */ r_ecx = R32((u32)(r_eax+0x1a0u));
    /* 0043da96: mov ecx, dword ptr [ecx + 0xac] */ r_ecx = R32((u32)(r_ecx+0xacu));
    /* 0043da9c: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x43daa1u); f_005d71b9();
    /* 0043daa1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043daa3: je 0x43dac8 */ if (fZ) goto L_0043dac8;
L_0043daa5:; BB(0x0043daa5);
    /* 0043daa5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043daa8: mov byte ptr [edx + 6], 0 */ W8((u32)(r_edx+0x6u), 0x0u);
    /* 0043daac: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043dab1: mov dword ptr [eax + 0x204], 0 */ W32((u32)(r_eax+0x204u), 0x0u);
    /* 0043dabb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dabd: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043dac3: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x43dac8u); f_0045c8df();
L_0043dac8:; BB(0x0043dac8);
    /* 0043dac8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043daca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dacd: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x43dad2u); f_005d6635();
    /* 0043dad2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dad5: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0043dad8: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x43daddu); f_005e03cc();
    /* 0043dadd: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043dae3: mov ecx, dword ptr [edx + 0x1a0] */ r_ecx = R32((u32)(r_edx+0x1a0u));
    /* 0043dae9: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x43daeeu); f_005e0a55();
    /* 0043daee: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043daf3: mov dword ptr [eax + 0x1a0], 0 */ W32((u32)(r_eax+0x1a0u), 0x0u);
    /* 0043dafd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043daff: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043db05: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0043db08: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043db0e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043db11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043db13: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43db16u); call_ind(t); }
    /* 0043db16: mov esp, ebp */ r_esp = r_ebp;
    /* 0043db18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043db19: ret  */ FN_RET(0x0043da70); r_esp += 4; return;
}

void f_0043db1a(void) /* FUN_0043db1a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043db1a);
    /* 0043db1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043db1b: mov ebp, esp */ r_ebp = r_esp;
    /* 0043db1d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043db20: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043db23: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043db26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043db27: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043db2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043db2b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043db2e: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x43db33u); f_005d80f0();
    /* 0043db33: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043db36: mov dword ptr [edx], 0x634a54 */ W32((u32)(r_edx), 0x634a54u);
    /* 0043db3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043db43: jmp 0x43db4e */ goto L_0043db4e;
L_0043db45:; BB(0x0043db45);
    /* 0043db45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db48: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043db4b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043db4e:; BB(0x0043db4e);
    /* 0043db4e: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043db52: jge 0x43db67 */ if ((fS==fO)) goto L_0043db67;
L_0043db54:; BB(0x0043db54);
    /* 0043db54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db57: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043db5a: mov dword ptr [edx + ecx*4 + 0x8c], 0 */ W32((u32)(r_edx+r_ecx*4+0x8cu), 0x0u);
    /* 0043db65: jmp 0x43db45 */ goto L_0043db45;
L_0043db67:; BB(0x0043db67);
    /* 0043db67: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043db6e: jmp 0x43db79 */ goto L_0043db79;
L_0043db70:; BB(0x0043db70);
    /* 0043db70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db73: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043db76: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043db79:; BB(0x0043db79);
    /* 0043db79: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043db7d: jge 0x43db92 */ if ((fS==fO)) goto L_0043db92;
L_0043db7f:; BB(0x0043db7f);
    /* 0043db7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db82: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043db85: mov dword ptr [edx + ecx*4 + 0x94], 0 */ W32((u32)(r_edx+r_ecx*4+0x94u), 0x0u);
    /* 0043db90: jmp 0x43db70 */ goto L_0043db70;
L_0043db92:; BB(0x0043db92);
    /* 0043db92: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043db97: mov dword ptr [eax + 0x1c4], 0 */ W32((u32)(r_eax+0x1c4u), 0x0u);
    /* 0043dba1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dba4: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 0043dbae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dbb1: mov esp, ebp */ r_esp = r_ebp;
    /* 0043dbb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043dbb4: ret 8 */ FN_RET(0x0043db1a); r_esp += 12; return;
}

void f_0043dbb7(void) /* FUN_0043dbb7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043dbb7);
    /* 0043dbb7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043dbb8: mov ebp, esp */ r_ebp = r_esp;
    /* 0043dbba: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043dbbd: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043dbc0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043dbc3: mov dword ptr [eax], 0x634a54 */ W32((u32)(r_eax), 0x634a54u);
    /* 0043dbc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043dbd0: jmp 0x43dbdb */ goto L_0043dbdb;
L_0043dbd2:; BB(0x0043dbd2);
    /* 0043dbd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dbd5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043dbd8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0043dbdb:; BB(0x0043dbdb);
    /* 0043dbdb: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dbdf: jge 0x43dc38 */ if ((fS==fO)) goto L_0043dc38;
L_0043dbe1:; BB(0x0043dbe1);
    /* 0043dbe1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dbe4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043dbe7: cmp dword ptr [eax + edx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dbef: je 0x43dc36 */ if (fZ) goto L_0043dc36;
L_0043dbf1:; BB(0x0043dbf1);
    /* 0043dbf1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dbf4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043dbf7: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0043dbfe: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043dc01: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043dc04: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043dc07: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc0b: je 0x43dc1e */ if (fZ) goto L_0043dc1e;
L_0043dc0d:; BB(0x0043dc0d);
    /* 0043dc0d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dc0f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dc12: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043dc14: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dc17: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x43dc19u); call_ind(t); }
    /* 0043dc19: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0043dc1c: jmp 0x43dc25 */ goto L_0043dc25;
L_0043dc1e:; BB(0x0043dc1e);
    /* 0043dc1e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0043dc25:; BB(0x0043dc25);
    /* 0043dc25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dc28: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043dc2b: mov dword ptr [edx + ecx*4 + 0x8c], 0 */ W32((u32)(r_edx+r_ecx*4+0x8cu), 0x0u);
L_0043dc36:; BB(0x0043dc36);
    /* 0043dc36: jmp 0x43dbd2 */ goto L_0043dbd2;
L_0043dc38:; BB(0x0043dc38);
    /* 0043dc38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043dc3f: jmp 0x43dc4a */ goto L_0043dc4a;
L_0043dc41:; BB(0x0043dc41);
    /* 0043dc41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dc44: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dc47: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043dc4a:; BB(0x0043dc4a);
    /* 0043dc4a: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dc4e: jge 0x43dca7 */ if ((fS==fO)) goto L_0043dca7;
L_0043dc50:; BB(0x0043dc50);
    /* 0043dc50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dc53: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043dc56: cmp dword ptr [edx + ecx*4 + 0x94], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc5e: je 0x43dca5 */ if (fZ) goto L_0043dca5;
L_0043dc60:; BB(0x0043dc60);
    /* 0043dc60: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dc63: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043dc66: mov edx, dword ptr [ecx + eax*4 + 0x94] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x94u));
    /* 0043dc6d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0043dc70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043dc73: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043dc76: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc7a: je 0x43dc8d */ if (fZ) goto L_0043dc8d;
L_0043dc7c:; BB(0x0043dc7c);
    /* 0043dc7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dc7e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043dc81: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043dc83: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043dc86: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x43dc88u); call_ind(t); }
    /* 0043dc88: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0043dc8b: jmp 0x43dc94 */ goto L_0043dc94;
L_0043dc8d:; BB(0x0043dc8d);
    /* 0043dc8d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0043dc94:; BB(0x0043dc94);
    /* 0043dc94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dc97: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043dc9a: mov dword ptr [ecx + eax*4 + 0x94], 0 */ W32((u32)(r_ecx+r_eax*4+0x94u), 0x0u);
L_0043dca5:; BB(0x0043dca5);
    /* 0043dca5: jmp 0x43dc41 */ goto L_0043dc41;
L_0043dca7:; BB(0x0043dca7);
    /* 0043dca7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043dcaa: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0043dcb0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043dcb3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043dcb6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043dcb9: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dcbd: je 0x43dcd0 */ if (fZ) goto L_0043dcd0;
L_0043dcbf:; BB(0x0043dcbf);
    /* 0043dcbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dcc1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043dcc4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043dcc6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043dcc9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x43dccbu); call_ind(t); }
    /* 0043dccb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043dcce: jmp 0x43dcd7 */ goto L_0043dcd7;
L_0043dcd0:; BB(0x0043dcd0);
    /* 0043dcd0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0043dcd7:; BB(0x0043dcd7);
    /* 0043dcd7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043dcda: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 0043dce4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043dce7: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x43dcecu); f_005d8154();
    /* 0043dcec: mov esp, ebp */ r_esp = r_ebp;
    /* 0043dcee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043dcef: ret  */ FN_RET(0x0043dbb7); r_esp += 4; return;
}

void f_0043dcf0(void) /* FUN_0043dcf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043dcf0);
    /* 0043dcf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043dcf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043dcf3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043dcf6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0043dcf9: mov dword ptr [ebp - 4], 0x654008 */ W32((u32)(r_ebp+0xfffffffcu), 0x654008u);
    /* 0043dd00: mov dword ptr [ebp - 0x18], 0xaa */ W32((u32)(r_ebp+0xffffffe8u), 0xaau);
    /* 0043dd07: mov dword ptr [ebp - 0x14], 0xd7 */ W32((u32)(r_ebp+0xffffffecu), 0xd7u);
    /* 0043dd0e: mov dword ptr [ebp - 0x10], 0xaa */ W32((u32)(r_ebp+0xfffffff0u), 0xaau);
    /* 0043dd15: mov dword ptr [ebp - 0xc], 0xd7 */ W32((u32)(r_ebp+0xfffffff4u), 0xd7u);
    /* 0043dd1c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dd1e: push 0x65400c */ { u32 v = 0x65400cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043dd23: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043dd26: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x43dd2bu); f_005d825e();
    /* 0043dd2b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043dd32: jmp 0x43dd3d */ goto L_0043dd3d;
L_0043dd34:; BB(0x0043dd34);
    /* 0043dd34: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dd37: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dd3a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043dd3d:; BB(0x0043dd3d);
    /* 0043dd3d: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dd41: jge 0x43dea8 */ if ((fS==fO)) goto L_0043dea8;
L_0043dd47:; BB(0x0043dd47);
    /* 0043dd47: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dd4a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043dd4d: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dd55: jne 0x43dea3 */ if (!fZ) goto L_0043dea3;
L_0043dd5b:; BB(0x0043dd5b);
    /* 0043dd5b: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dd60: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x43dd65u); f_0048ab58();
    /* 0043dd65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dd68: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043dd6b: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dd6f: je 0x43dd82 */ if (fZ) goto L_0043dd82;
L_0043dd71:; BB(0x0043dd71);
    /* 0043dd71: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dd74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043dd75: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043dd78: call 0x43da27 */ r_esp -= 4; W32(r_esp, 0x43dd7du); f_0043da27();
    /* 0043dd7d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043dd80: jmp 0x43dd89 */ goto L_0043dd89;
L_0043dd82:; BB(0x0043dd82);
    /* 0043dd82: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0043dd89:; BB(0x0043dd89);
    /* 0043dd89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dd8c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043dd8f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043dd92: mov dword ptr [edx + ecx*4 + 0x8c], eax */ W32((u32)(r_edx+r_ecx*4+0x8cu), r_eax);
    /* 0043dd99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dd9c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043dd9f: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0043dda6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043dda9: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0043ddac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ddaf: mov eax, dword ptr [ebp + edx*4 - 4] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffffcu));
    /* 0043ddb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ddb4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ddb7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043ddba: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0043ddc1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ddc4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043ddc7: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 0043ddce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043ddd0: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x43ddd3u); call_ind(t); }
    /* 0043ddd3: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ddd5: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ddd7: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ddd9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dddc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043dddf: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0043dde6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dde9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043ddec: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 0043ddf3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ddf5: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x43ddf8u); call_ind(t); }
    /* 0043ddf8: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ddfd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de00: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043de03: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0043de0a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de0d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043de10: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 0043de17: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043de19: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x43de1cu); call_ind(t); }
    /* 0043de1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043de1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043de20: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de23: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043de26: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0043de2d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de30: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043de33: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 0043de3a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043de3c: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x43de3fu); call_ind(t); }
    /* 0043de3f: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043de41: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de44: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043de47: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0043de4e: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x43de53u); f_005d65d6();
    /* 0043de53: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de56: mov ecx, dword ptr [ebp + eax*8 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffecu));
    /* 0043de5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043de5b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de5e: mov eax, dword ptr [ebp + edx*8 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffe8u));
    /* 0043de62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043de63: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de66: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043de69: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0043de70: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de73: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043de76: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 0043de7d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043de7f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43de82u); call_ind(t); }
    /* 0043de82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043de84: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de87: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043de8a: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0043de91: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de94: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043de97: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 0043de9e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043dea0: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x43dea3u); call_ind(t); }
L_0043dea3:; BB(0x0043dea3);
    /* 0043dea3: jmp 0x43dd34 */ goto L_0043dd34;
L_0043dea8:; BB(0x0043dea8);
    /* 0043dea8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043deaf: jmp 0x43deba */ goto L_0043deba;
L_0043deb1:; BB(0x0043deb1);
    /* 0043deb1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043deb4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043deb7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0043deba:; BB(0x0043deba);
    /* 0043deba: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043debe: jge 0x43df94 */ if ((fS==fO)) goto L_0043df94;
L_0043dec4:; BB(0x0043dec4);
    /* 0043dec4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dec7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043deca: cmp dword ptr [eax + edx*4 + 0x94], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ded2: jne 0x43df8f */ if (!fZ) goto L_0043df8f;
L_0043ded8:; BB(0x0043ded8);
    /* 0043ded8: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043deda: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x43dedfu); f_0048ab58();
    /* 0043dedf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dee2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043dee5: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dee9: je 0x43def8 */ if (fZ) goto L_0043def8;
L_0043deeb:; BB(0x0043deeb);
    /* 0043deeb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043deee: call 0x43d999 */ r_esp -= 4; W32(r_esp, 0x43def3u); f_0043d999();
    /* 0043def3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0043def6: jmp 0x43deff */ goto L_0043deff;
L_0043def8:; BB(0x0043def8);
    /* 0043def8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0043deff:; BB(0x0043deff);
    /* 0043deff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df02: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043df05: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043df08: mov dword ptr [edx + ecx*4 + 0x94], eax */ W32((u32)(r_edx+r_ecx*4+0x94u), r_eax);
    /* 0043df0f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df12: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043df15: mov eax, dword ptr [edx + ecx*4 + 0x94] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x94u));
    /* 0043df1c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043df1f: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0043df22: push 0xfb8 */ { u32 v = 0xfb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043df27: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df2a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043df2d: mov ecx, dword ptr [eax + edx*4 + 0x94] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 0043df34: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x43df39u); f_005ea0c3();
    /* 0043df39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043df3d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df40: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043df43: mov ecx, dword ptr [eax + edx*4 + 0x94] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 0043df4a: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43df4fu); f_005ea1cf();
    /* 0043df4f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df52: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043df55: mov ecx, dword ptr [edx + ecx*4 + 0x94] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x94u));
    /* 0043df5c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df5f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043df62: mov eax, dword ptr [edx + eax*4 + 0x94] */ r_eax = R32((u32)(r_edx+r_eax*4+0x94u));
    /* 0043df69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043df6b: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x43df6eu); call_ind(t); }
    /* 0043df6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043df70: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df73: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043df76: mov ecx, dword ptr [ecx + eax*4 + 0x94] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x94u));
    /* 0043df7d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df80: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043df83: mov edx, dword ptr [eax + edx*4 + 0x94] */ r_edx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 0043df8a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043df8c: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x43df8fu); call_ind(t); }
L_0043df8f:; BB(0x0043df8f);
    /* 0043df8f: jmp 0x43deb1 */ goto L_0043deb1;
L_0043df94:; BB(0x0043df94);
    /* 0043df94: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043df9b: jne 0x43e0ad */ if (!fZ) goto L_0043e0ad;
L_0043dfa1:; BB(0x0043dfa1);
    /* 0043dfa1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043dfa4: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dfab: jne 0x43dfe5 */ if (!fZ) goto L_0043dfe5;
L_0043dfad:; BB(0x0043dfad);
    /* 0043dfad: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043dfb2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x43dfb7u); f_0048ab58();
    /* 0043dfb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dfba: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0043dfbd: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dfc1: je 0x43dfd2 */ if (fZ) goto L_0043dfd2;
L_0043dfc3:; BB(0x0043dfc3);
    /* 0043dfc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dfc5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043dfc8: call 0x5d6e50 */ r_esp -= 4; W32(r_esp, 0x43dfcdu); f_005d6e50();
    /* 0043dfcd: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0043dfd0: jmp 0x43dfd9 */ goto L_0043dfd9;
L_0043dfd2:; BB(0x0043dfd2);
    /* 0043dfd2: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0043dfd9:; BB(0x0043dfd9);
    /* 0043dfd9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043dfdc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0043dfdf: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
L_0043dfe5:; BB(0x0043dfe5);
    /* 0043dfe5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043dfe8: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 0043dfee: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043dff1: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0043dff4: push 0x654024 */ { u32 v = 0x654024u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dff9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043dffc: mov ecx, dword ptr [ecx + 0xac] */ r_ecx = R32((u32)(r_ecx+0xacu));
    /* 0043e002: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043e005: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0043e00b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e00d: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x43e010u); call_ind(t); }
    /* 0043e010: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e012: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e014: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e016: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043e019: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 0043e01f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043e022: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0043e028: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e02a: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x43e02du); call_ind(t); }
    /* 0043e02d: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e032: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043e035: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 0043e03b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043e03e: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0043e044: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e046: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x43e049u); call_ind(t); }
    /* 0043e049: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e04b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e04d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043e050: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 0043e056: call 0x5d7422 */ r_esp -= 4; W32(r_esp, 0x43e05bu); f_005d7422();
    /* 0043e05b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e05d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e05f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043e062: mov ecx, dword ptr [ecx + 0xac] */ r_ecx = R32((u32)(r_ecx+0xacu));
    /* 0043e068: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043e06b: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0043e071: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e073: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x43e076u); call_ind(t); }
    /* 0043e076: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e07b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e07d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043e080: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 0043e086: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043e089: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0043e08f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e091: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x43e094u); call_ind(t); }
    /* 0043e094: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e096: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043e099: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 0043e09f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043e0a2: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0043e0a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e0aa: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43e0adu); call_ind(t); }
L_0043e0ad:; BB(0x0043e0ad);
    /* 0043e0ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e0af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e0b0: ret  */ FN_RET(0x0043dcf0); r_esp += 4; return;
}

void f_0043e0b1(void) /* FUN_0043e0b1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e0b1);
    /* 0043e0b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e0b2: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e0b4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e0b7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043e0ba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e0bd: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x43e0c2u); f_005e030e();
    /* 0043e0c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043e0c9: jmp 0x43e0d4 */ goto L_0043e0d4;
L_0043e0cb:; BB(0x0043e0cb);
    /* 0043e0cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e0ce: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e0d1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043e0d4:; BB(0x0043e0d4);
    /* 0043e0d4: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e0d8: jge 0x43e0fb */ if ((fS==fO)) goto L_0043e0fb;
L_0043e0da:; BB(0x0043e0da);
    /* 0043e0da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e0dd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e0e0: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0043e0e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e0ea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e0ed: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 0043e0f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e0f6: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43e0f9u); call_ind(t); }
    /* 0043e0f9: jmp 0x43e0cb */ goto L_0043e0cb;
L_0043e0fb:; BB(0x0043e0fb);
    /* 0043e0fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043e102: jmp 0x43e10d */ goto L_0043e10d;
L_0043e104:; BB(0x0043e104);
    /* 0043e104: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e107: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e10a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043e10d:; BB(0x0043e10d);
    /* 0043e10d: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e111: jge 0x43e134 */ if ((fS==fO)) goto L_0043e134;
L_0043e113:; BB(0x0043e113);
    /* 0043e113: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e116: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e119: mov ecx, dword ptr [edx + ecx*4 + 0x94] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x94u));
    /* 0043e120: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e123: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e126: mov eax, dword ptr [edx + eax*4 + 0x94] */ r_eax = R32((u32)(r_edx+r_eax*4+0x94u));
    /* 0043e12d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e12f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43e132u); call_ind(t); }
    /* 0043e132: jmp 0x43e104 */ goto L_0043e104;
L_0043e134:; BB(0x0043e134);
    /* 0043e134: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e13b: jne 0x43e177 */ if (!fZ) goto L_0043e177;
L_0043e13d:; BB(0x0043e13d);
    /* 0043e13d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e140: cmp dword ptr [eax + 0xac], 0 */ {  u32 a = R32((u32)(r_eax+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e147: je 0x43e177 */ if (fZ) goto L_0043e177;
L_0043e149:; BB(0x0043e149);
    /* 0043e149: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e14c: mov ecx, dword ptr [ecx + 0xac] */ r_ecx = R32((u32)(r_ecx+0xacu));
    /* 0043e152: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e155: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0043e15b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e15d: call dword ptr [edx + 0x70] */ { u32 t = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, 0x43e160u); call_ind(t); }
    /* 0043e160: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e163: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 0043e169: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e16c: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0043e172: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e174: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43e177u); call_ind(t); }
L_0043e177:; BB(0x0043e177);
    /* 0043e177: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e17a: ret  */ FN_RET(0x0043e0b1); r_esp += 4; return;
}

void f_0043e17b(void) /* FUN_0043e17b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e17b);
    /* 0043e17b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e17c: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e17e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e17f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043e182: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e185: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x43e18au); f_005e3fb0();
    /* 0043e18a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e18d: mov dword ptr [eax], 0x634a6c */ W32((u32)(r_eax), 0x634a6cu);
    /* 0043e193: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e196: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 0043e1a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e1a3: mov dword ptr [edx + 0x78], 5 */ W32((u32)(r_edx+0x78u), 0x5u);
    /* 0043e1aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e1ad: mov dword ptr [eax + 0x88], 0 */ W32((u32)(r_eax+0x88u), 0x0u);
    /* 0043e1b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e1ba: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e1bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e1bd: ret  */ FN_RET(0x0043e17b); r_esp += 4; return;
}

void f_0043e1be(void) /* FUN_0043e1be */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e1be);
    /* 0043e1be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1bf: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e1c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1c2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043e1c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e1c8: mov dword ptr [eax], 0x634a6c */ W32((u32)(r_eax), 0x634a6cu);
    /* 0043e1ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e1d1: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x43e1d6u); f_005e3fed();
    /* 0043e1d6: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e1d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e1d9: ret  */ FN_RET(0x0043e1be); r_esp += 4; return;
}

void f_0043e1da(void) /* FUN_0043e1da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e1da);
    /* 0043e1da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1db: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e1dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1de: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043e1e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e1e4: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
    /* 0043e1ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e1f1: mov dword ptr [ecx + 0x78], 5 */ W32((u32)(r_ecx+0x78u), 0x5u);
    /* 0043e1f8: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x43e1feu); call_ind(t); }
    /* 0043e1fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e201: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 0043e204: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e207: mov dword ptr [eax + 0x88], 0 */ W32((u32)(r_eax+0x88u), 0x0u);
    /* 0043e211: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e214: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x43e219u); f_005ea2c1();
    /* 0043e219: push 0x218 */ { u32 v = 0x218u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e21e: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043e224: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0043e227: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x43e22cu); f_00443fda();
    /* 0043e22c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e22e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e22f: ret  */ FN_RET(0x0043e1da); r_esp += 4; return;
}

void f_0043e230(void) /* FUN_0043e230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e230);
    /* 0043e230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e231: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043e237: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e23a: call 0x5ea28a */ r_esp -= 4; W32(r_esp, 0x43e23fu); f_005ea28a();
    /* 0043e23f: push 0x218 */ { u32 v = 0x218u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e244: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043e249: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0043e24c: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x43e251u); f_00444067();
    /* 0043e251: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e253: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e254: ret  */ FN_RET(0x0043e230); r_esp += 4; return;
}

void f_0043e255(void) /* FUN_0043e255 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e255);
    /* 0043e255: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e256: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e258: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e259: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043e25c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e25f: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e266: jne 0x43e290 */ if (!fZ) goto L_0043e290;
L_0043e268:; BB(0x0043e268);
    /* 0043e268: push 0x218 */ { u32 v = 0x218u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e26d: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0043e273: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0043e276: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x43e27bu); f_00444067();
    /* 0043e27b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e27e: call 0x43e52f */ r_esp -= 4; W32(r_esp, 0x43e283u); f_0043e52f();
    /* 0043e283: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e286: mov dword ptr [edx + 0x88], 1 */ W32((u32)(r_edx+0x88u), 0x1u);
L_0043e290:; BB(0x0043e290);
    /* 0043e290: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e292: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e293: ret  */ FN_RET(0x0043e255); r_esp += 4; return;
}

void f_0043e294(void) /* FUN_0043e294 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e294);
    /* 0043e294: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e295: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e297: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e29a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043e29d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e2a0: call 0x5e4151 */ r_esp -= 4; W32(r_esp, 0x43e2a5u); f_005e4151();
    /* 0043e2a5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e2a8: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x43e2adu); f_005d96a9();
    /* 0043e2ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e2af: jne 0x43e2d2 */ if (!fZ) goto L_0043e2d2;
L_0043e2b1:; BB(0x0043e2b1);
    /* 0043e2b1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e2b4: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e2b8: je 0x43e2d2 */ if (fZ) goto L_0043e2d2;
L_0043e2ba:; BB(0x0043e2ba);
    /* 0043e2ba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e2bd: cmp dword ptr [ecx + 0x80], 0 */ {  u32 a = R32((u32)(r_ecx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e2c4: jne 0x43e2d2 */ if (!fZ) goto L_0043e2d2;
L_0043e2c6:; BB(0x0043e2c6);
    /* 0043e2c6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e2c9: cmp dword ptr [edx + 0x84], 0 */ {  u32 a = R32((u32)(r_edx+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e2d0: je 0x43e2d4 */ if (fZ) goto L_0043e2d4;
L_0043e2d2:; BB(0x0043e2d2);
    /* 0043e2d2: jmp 0x43e349 */ goto L_0043e349;
L_0043e2d4:; BB(0x0043e2d4);
    /* 0043e2d4: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x43e2dau); call_ind(t); }
    /* 0043e2da: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043e2dd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e2e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e2e3: sub ecx, dword ptr [eax + 0x7c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x7cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e2e6: cmp ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0043e2ec: jb 0x43e349 */ if (fC) goto L_0043e349;
L_0043e2ee:; BB(0x0043e2ee);
    /* 0043e2ee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e2f1: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0043e2f4: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043e2f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e2fa: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 0043e2fd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e300: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0043e303: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e304: push 0x654038 */ { u32 v = 0x654038u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e309: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x43e30eu); f_0060fc40();
    /* 0043e30e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043e311: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e314: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e317: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0043e31a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e31d: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e321: jne 0x43e349 */ if (!fZ) goto L_0043e349;
L_0043e323:; BB(0x0043e323);
    /* 0043e323: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e326: mov dword ptr [ecx + 0x84], 1 */ W32((u32)(r_ecx+0x84u), 0x1u);
    /* 0043e330: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e335: push 0x654054 */ { u32 v = 0x654054u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e33a: push 0x65405c */ { u32 v = 0x65405cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e33f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e341: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x43e346u); f_0060f9f3();
    /* 0043e346: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043e349:; BB(0x0043e349);
    /* 0043e349: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e34b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e34c: ret  */ FN_RET(0x0043e294); r_esp += 4; return;
}

void f_0043e34d(void) /* FUN_0043e34d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e34d);
    /* 0043e34d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e34e: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e350: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e353: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043e356: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043e359: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e35d: je 0x43e36a */ if (fZ) goto L_0043e36a;
L_0043e35f:; BB(0x0043e35f);
    /* 0043e35f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043e362: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0043e365: jmp 0x43e45d */ goto L_0043e45d;
L_0043e36a:; BB(0x0043e36a);
    /* 0043e36a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043e36d: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0043e370: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043e373: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e376: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e379: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043e37c: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043e380: ja 0x43e457 */ if ((!fC&&!fZ)) goto L_0043e457;
L_0043e386:; BB(0x0043e386);
    /* 0043e386: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e389: jmp dword ptr [edx*4 + 0x43e463] */ { u32 t = R32((u32)(r_edx*4+0x43e463u)); switch (t) { case 0x43e390u: goto L_0043e390; case 0x43e41fu: goto L_0043e41f; case 0x43e3d5u: goto L_0043e3d5; case 0x43e3f9u: goto L_0043e3f9; default: UNSUP(0x0043e389, "jump table entry is not a known target"); } }
L_0043e390:; BB(0x0043e390);
    /* 0043e390: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043e393: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0043e396: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e397: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043e39a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0043e39d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e39e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e3a1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043e3a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e3a6: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x43e3a9u); call_ind(t); }
    /* 0043e3a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e3ab: je 0x43e3d0 */ if (fZ) goto L_0043e3d0;
L_0043e3ad:; BB(0x0043e3ad);
    /* 0043e3ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e3b0: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e3b7: jne 0x43e3d0 */ if (!fZ) goto L_0043e3d0;
L_0043e3b9:; BB(0x0043e3b9);
    /* 0043e3b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e3bc: mov dword ptr [ecx + 0x80], 1 */ W32((u32)(r_ecx+0x80u), 0x1u);
    /* 0043e3c6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043e3c9: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
L_0043e3d0:; BB(0x0043e3d0);
    /* 0043e3d0: jmp 0x43e457 */ goto L_0043e457;
L_0043e3d5:; BB(0x0043e3d5);
    /* 0043e3d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e3d8: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e3df: je 0x43e3f7 */ if (fZ) goto L_0043e3f7;
L_0043e3e1:; BB(0x0043e3e1);
    /* 0043e3e1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043e3e4: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0043e3e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043e3eb: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043e3ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e3f2: call 0x43e473 */ r_esp -= 4; W32(r_esp, 0x43e3f7u); f_0043e473();
L_0043e3f7:; BB(0x0043e3f7);
    /* 0043e3f7: jmp 0x43e457 */ goto L_0043e457;
L_0043e3f9:; BB(0x0043e3f9);
    /* 0043e3f9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043e3fc: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0043e400: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e401: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x43e406u); f_00624600();
    /* 0043e406: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043e409: cmp eax, 0x72 */ {  u32 a = r_eax; u32 b = 0x72u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e40c: jne 0x43e41d */ if (!fZ) goto L_0043e41d;
L_0043e40e:; BB(0x0043e40e);
    /* 0043e40e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e411: mov dword ptr [ecx + 0x80], 1 */ W32((u32)(r_ecx+0x80u), 0x1u);
    /* 0043e41b: jmp 0x43e41f */ goto L_0043e41f;
L_0043e41d:; BB(0x0043e41d);
    /* 0043e41d: jmp 0x43e457 */ goto L_0043e457;
L_0043e41f:; BB(0x0043e41f);
    /* 0043e41f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e422: cmp dword ptr [edx + 0x80], 0 */ {  u32 a = R32((u32)(r_edx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e429: je 0x43e457 */ if (fZ) goto L_0043e457;
L_0043e42b:; BB(0x0043e42b);
    /* 0043e42b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e42e: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 0043e435: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e438: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 0043e442: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e445: call 0x43e52f */ r_esp -= 4; W32(r_esp, 0x43e44au); f_0043e52f();
    /* 0043e44a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e44d: mov dword ptr [edx + 0x88], 1 */ W32((u32)(r_edx+0x88u), 0x1u);
L_0043e457:; BB(0x0043e457);
    /* 0043e457: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043e45a: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_0043e45d:; BB(0x0043e45d);
    /* 0043e45d: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e45f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e460: ret 4 */ FN_RET(0x0043e34d); r_esp += 8; return;
}

void f_0043e473(void) /* FUN_0043e473 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e473);
    /* 0043e473: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e474: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e476: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e477: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043e47a: cmp dword ptr [ebp + 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e47e: jge 0x43e48f */ if ((fS==fO)) goto L_0043e48f;
L_0043e480:; BB(0x0043e480);
    /* 0043e480: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e482: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e485: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43e48au); f_005ea1cf();
    /* 0043e48a: jmp 0x43e529 */ goto L_0043e529;
L_0043e48f:; BB(0x0043e48f);
    /* 0043e48f: cmp dword ptr [ebp + 8], 0x28 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e493: jge 0x43e4a4 */ if ((fS==fO)) goto L_0043e4a4;
L_0043e495:; BB(0x0043e495);
    /* 0043e495: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e497: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e49a: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43e49fu); f_005ea1cf();
    /* 0043e49f: jmp 0x43e529 */ goto L_0043e529;
L_0043e4a4:; BB(0x0043e4a4);
    /* 0043e4a4: cmp dword ptr [ebp + 8], 0x3c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e4a8: jge 0x43e4b6 */ if ((fS==fO)) goto L_0043e4b6;
L_0043e4aa:; BB(0x0043e4aa);
    /* 0043e4aa: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e4af: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43e4b4u); f_005ea1cf();
    /* 0043e4b4: jmp 0x43e529 */ goto L_0043e529;
L_0043e4b6:; BB(0x0043e4b6);
    /* 0043e4b6: cmp dword ptr [ebp + 8], 0x50 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e4ba: jge 0x43e4c8 */ if ((fS==fO)) goto L_0043e4c8;
L_0043e4bc:; BB(0x0043e4bc);
    /* 0043e4bc: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e4c1: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43e4c6u); f_005ea1cf();
    /* 0043e4c6: jmp 0x43e529 */ goto L_0043e529;
L_0043e4c8:; BB(0x0043e4c8);
    /* 0043e4c8: cmp dword ptr [ebp + 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e4cc: jge 0x43e4da */ if ((fS==fO)) goto L_0043e4da;
L_0043e4ce:; BB(0x0043e4ce);
    /* 0043e4ce: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e4d3: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43e4d8u); f_005ea1cf();
    /* 0043e4d8: jmp 0x43e529 */ goto L_0043e529;
L_0043e4da:; BB(0x0043e4da);
    /* 0043e4da: cmp dword ptr [ebp + 8], 0x78 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e4de: jge 0x43e4ec */ if ((fS==fO)) goto L_0043e4ec;
L_0043e4e0:; BB(0x0043e4e0);
    /* 0043e4e0: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e4e5: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43e4eau); f_005ea1cf();
    /* 0043e4ea: jmp 0x43e529 */ goto L_0043e529;
L_0043e4ec:; BB(0x0043e4ec);
    /* 0043e4ec: cmp dword ptr [ebp + 8], 0x8c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e4f3: jge 0x43e501 */ if ((fS==fO)) goto L_0043e501;
L_0043e4f5:; BB(0x0043e4f5);
    /* 0043e4f5: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e4fa: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43e4ffu); f_005ea1cf();
    /* 0043e4ff: jmp 0x43e529 */ goto L_0043e529;
L_0043e501:; BB(0x0043e501);
    /* 0043e501: cmp dword ptr [ebp + 8], 0xa0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e508: jge 0x43e516 */ if ((fS==fO)) goto L_0043e516;
L_0043e50a:; BB(0x0043e50a);
    /* 0043e50a: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e50c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e50f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43e514u); f_005ea1cf();
    /* 0043e514: jmp 0x43e529 */ goto L_0043e529;
L_0043e516:; BB(0x0043e516);
    /* 0043e516: cmp dword ptr [ebp + 8], 0xb4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e51d: jge 0x43e529 */ if ((fS==fO)) goto L_0043e529;
L_0043e51f:; BB(0x0043e51f);
    /* 0043e51f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0043e521: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e524: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43e529u); f_005ea1cf();
L_0043e529:; BB(0x0043e529);
    /* 0043e529: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e52b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e52c: ret 8 */ FN_RET(0x0043e473); r_esp += 12; return;
}

void f_0043e52f(void) /* FUN_0043e52f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e52f);
    /* 0043e52f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e530: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e532: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e535: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043e538: push 0x218 */ { u32 v = 0x218u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e53d: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043e542: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0043e545: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x43e54au); f_00444067();
    /* 0043e54a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e54c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x43e551u); f_0048ab58();
    /* 0043e551: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043e554: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043e557: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e55b: je 0x43e56c */ if (fZ) goto L_0043e56c;
L_0043e55d:; BB(0x0043e55d);
    /* 0043e55d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e55f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e562: call 0x43e583 */ r_esp -= 4; W32(r_esp, 0x43e567u); f_0043e583();
    /* 0043e567: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043e56a: jmp 0x43e573 */ goto L_0043e573;
L_0043e56c:; BB(0x0043e56c);
    /* 0043e56c: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0043e573:; BB(0x0043e573);
    /* 0043e573: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e576: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e577: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e57a: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x43e57fu); f_005e4060();
    /* 0043e57f: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e581: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e582: ret  */ FN_RET(0x0043e52f); r_esp += 4; return;
}

void f_0043e5a8(void) /* FUN_0043e5a8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e5a8);
    /* 0043e5a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5a9: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e5ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5ac: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043e5af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e5b2: call 0x5d7943 */ r_esp -= 4; W32(r_esp, 0x43e5b7u); f_005d7943();
    /* 0043e5b7: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043e5bc: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 0043e5c2: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x43e5c7u); f_005ea257();
    /* 0043e5c7: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e5ca: jne 0x43e5d7 */ if (!fZ) goto L_0043e5d7;
L_0043e5cc:; BB(0x0043e5cc);
    /* 0043e5cc: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043e5d2: call 0x43c535 */ r_esp -= 4; W32(r_esp, 0x43e5d7u); f_0043c535();
L_0043e5d7:; BB(0x0043e5d7);
    /* 0043e5d7: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e5d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e5da: ret  */ FN_RET(0x0043e5a8); r_esp += 4; return;
}

void f_0043e609(void) /* FUN_0043e609 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e609);
    /* 0043e609: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e60a: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e60c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e60f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043e612: mov dword ptr [ebp - 8], 0xfc5 */ W32((u32)(r_ebp+0xfffffff8u), 0xfc5u);
    /* 0043e619: mov dword ptr [ebp - 4], 0xfc7 */ W32((u32)(r_ebp+0xfffffffcu), 0xfc7u);
    /* 0043e620: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e623: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0043e626: mov edx, dword ptr [ebp + ecx*4 - 8] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff8u));
    /* 0043e62a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e62b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e62e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0043e631: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043e637: mov ecx, dword ptr [edx + ecx*4 + 0x180] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x180u));
    /* 0043e63e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x43e643u); f_005ea0c3();
    /* 0043e643: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043e648: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 0043e64e: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x43e653u); f_005d9690();
    /* 0043e653: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e655: je 0x43e672 */ if (fZ) goto L_0043e672;
L_0043e657:; BB(0x0043e657);
    /* 0043e657: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e659: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e65c: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0043e65f: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043e664: mov ecx, dword ptr [eax + edx*4 + 0x180] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x180u));
    /* 0043e66b: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43e670u); f_005ea1cf();
    /* 0043e670: jmp 0x43e68b */ goto L_0043e68b;
L_0043e672:; BB(0x0043e672);
    /* 0043e672: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e674: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e677: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0043e67a: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043e67f: mov ecx, dword ptr [eax + edx*4 + 0x180] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x180u));
    /* 0043e686: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43e68bu); f_005ea1cf();
L_0043e68b:; BB(0x0043e68b);
    /* 0043e68b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e68e: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0043e691: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043e696: mov ecx, dword ptr [eax + edx*4 + 0x180] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x180u));
    /* 0043e69d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e6a0: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0043e6a3: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043e6a9: mov eax, dword ptr [edx + eax*4 + 0x180] */ r_eax = R32((u32)(r_edx+r_eax*4+0x180u));
    /* 0043e6b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e6b2: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43e6b5u); call_ind(t); }
    /* 0043e6b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043e6b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e6bc: call 0x5d7b59 */ r_esp -= 4; W32(r_esp, 0x43e6c1u); f_005d7b59();
    /* 0043e6c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e6c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e6c4: ret 4 */ FN_RET(0x0043e609); r_esp += 8; return;
}

void f_0043e6c7(void) /* FUN_0043e6c7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e6c7);
    /* 0043e6c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6c8: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e6ca: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e6cd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043e6d0: mov dword ptr [ebp - 8], 0xfc4 */ W32((u32)(r_ebp+0xfffffff8u), 0xfc4u);
    /* 0043e6d7: mov dword ptr [ebp - 4], 0xfc6 */ W32((u32)(r_ebp+0xfffffffcu), 0xfc6u);
    /* 0043e6de: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043e6e1: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e6e5: jne 0x43e6fc */ if (!fZ) goto L_0043e6fc;
L_0043e6e7:; BB(0x0043e6e7);
    /* 0043e6e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6e9: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043e6ef: call 0x43c757 */ r_esp -= 4; W32(r_esp, 0x43e6f4u); f_0043c757();
    /* 0043e6f4: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043e6f7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043e6fa: jmp 0x43e70f */ goto L_0043e70f;
L_0043e6fc:; BB(0x0043e6fc);
    /* 0043e6fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6fe: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043e704: call 0x43c757 */ r_esp -= 4; W32(r_esp, 0x43e709u); f_0043c757();
    /* 0043e709: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043e70c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0043e70f:; BB(0x0043e70f);
    /* 0043e70f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043e712: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043e715: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043e718: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0043e71f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043e722: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0043e725: mov edx, dword ptr [ebp + ecx*4 - 8] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff8u));
    /* 0043e729: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e72a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043e72d: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0043e730: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043e736: mov ecx, dword ptr [edx + ecx*4 + 0x180] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x180u));
    /* 0043e73d: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x43e742u); f_005ea0c3();
    /* 0043e742: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e745: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e746: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043e749: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0043e74c: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043e751: mov ecx, dword ptr [eax + edx*4 + 0x180] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x180u));
    /* 0043e758: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43e75du); f_005ea1cf();
    /* 0043e75d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043e760: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e764: je 0x43e779 */ if (fZ) goto L_0043e779;
L_0043e766:; BB(0x0043e766);
    /* 0043e766: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e768: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043e76b: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0043e76e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043e771: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0043e774: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043e776: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x43e779u); call_ind(t); }
L_0043e779:; BB(0x0043e779);
    /* 0043e779: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e77b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043e77e: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0043e781: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x43e786u); f_005e4060();
    /* 0043e786: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e788: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e789: ret  */ FN_RET(0x0043e6c7); r_esp += 4; return;
}

void f_0043e78a(void) /* FUN_0043e78a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e78a);
    /* 0043e78a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e78b: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e78d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e78e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043e791: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e793: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e796: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x43e79bu); f_005e6160();
    /* 0043e79b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e79e: mov dword ptr [eax], 0x634aec */ W32((u32)(r_eax), 0x634aecu);
    /* 0043e7a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e7a7: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e7a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e7aa: ret  */ FN_RET(0x0043e78a); r_esp += 4; return;
}

void f_0043e7ab(void) /* FUN_0043e7ab */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e7ab);
    /* 0043e7ab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7ac: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e7ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7af: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043e7b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e7b5: mov dword ptr [eax], 0x634aec */ W32((u32)(r_eax), 0x634aecu);
    /* 0043e7bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e7be: call 0x5e61d1 */ r_esp -= 4; W32(r_esp, 0x43e7c3u); f_005e61d1();
    /* 0043e7c3: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e7c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e7c6: ret  */ FN_RET(0x0043e7ab); r_esp += 4; return;
}

void f_0043e7c7(void) /* FUN_0043e7c7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e7c7);
    /* 0043e7c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7c8: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e7ca: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e7cd: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043e7d0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043e7d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e7d7: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x43e7dcu); f_005e626d();
    /* 0043e7dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e7df: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0043e7e2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0043e7e5: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e7e9: je 0x43e7fa */ if (fZ) goto L_0043e7fa;
L_0043e7eb:; BB(0x0043e7eb);
    /* 0043e7eb: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e7ef: je 0x43e8ae */ if (fZ) goto L_0043e8ae;
L_0043e7f5:; BB(0x0043e7f5);
    /* 0043e7f5: jmp 0x43e9eb */ goto L_0043e9eb;
L_0043e7fa:; BB(0x0043e7fa);
    /* 0043e7fa: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043e7ff: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0043e805: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043e80b: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0043e811: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e813: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43e816u); call_ind(t); }
    /* 0043e816: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043e81d: jmp 0x43e828 */ goto L_0043e828;
L_0043e81f:; BB(0x0043e81f);
    /* 0043e81f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e822: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e825: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043e828:; BB(0x0043e828);
    /* 0043e828: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e82c: jge 0x43e8a9 */ if ((fS==fO)) goto L_0043e8a9;
L_0043e82e:; BB(0x0043e82e);
    /* 0043e82e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e831: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043e837: mov ecx, dword ptr [edx + ecx*4 + 0x18c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18cu));
    /* 0043e83e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e841: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043e847: mov eax, dword ptr [edx + eax*4 + 0x18c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x18cu));
    /* 0043e84e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e850: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43e853u); call_ind(t); }
    /* 0043e853: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e855: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x43e85au); f_0048ab58();
    /* 0043e85a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043e85d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043e860: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e864: je 0x43e884 */ if (fZ) goto L_0043e884;
L_0043e866:; BB(0x0043e866);
    /* 0043e866: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e869: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0043e86b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0043e86d: not eax */ r_eax = ~r_eax;
    /* 0043e86f: and eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043e872: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e873: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e876: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e877: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e87a: call 0x43e5db */ r_esp -= 4; W32(r_esp, 0x43e87fu); f_0043e5db();
    /* 0043e87f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043e882: jmp 0x43e88b */ goto L_0043e88b;
L_0043e884:; BB(0x0043e884);
    /* 0043e884: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0043e88b:; BB(0x0043e88b);
    /* 0043e88b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043e88e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e88f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e892: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043e898: mov ecx, dword ptr [ecx + eax*4 + 0x180] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x180u));
    /* 0043e89f: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x43e8a4u); f_005e4060();
    /* 0043e8a4: jmp 0x43e81f */ goto L_0043e81f;
L_0043e8a9:; BB(0x0043e8a9);
    /* 0043e8a9: jmp 0x43e9eb */ goto L_0043e9eb;
L_0043e8ae:; BB(0x0043e8ae);
    /* 0043e8ae: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043e8b4: cmp dword ptr [edx + 0x1f4], 0 */ {  u32 a = R32((u32)(r_edx+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e8bb: je 0x43e943 */ if (fZ) goto L_0043e943;
L_0043e8c1:; BB(0x0043e8c1);
    /* 0043e8c1: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043e8c6: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0043e8cc: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043e8d2: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0043e8d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e8da: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43e8ddu); call_ind(t); }
    /* 0043e8dd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043e8e4: jmp 0x43e8ef */ goto L_0043e8ef;
L_0043e8e6:; BB(0x0043e8e6);
    /* 0043e8e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e8e9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e8ec: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043e8ef:; BB(0x0043e8ef);
    /* 0043e8ef: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e8f3: jge 0x43e943 */ if ((fS==fO)) goto L_0043e943;
L_0043e8f5:; BB(0x0043e8f5);
    /* 0043e8f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e8f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e8f9: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043e8ff: call 0x43c757 */ r_esp -= 4; W32(r_esp, 0x43e904u); f_0043c757();
    /* 0043e904: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043e907: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e908: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e90b: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043e910: mov ecx, dword ptr [eax + edx*4 + 0x18c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18cu));
    /* 0043e917: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x43e91cu); f_005ea1cf();
    /* 0043e91c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e91f: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043e925: mov ecx, dword ptr [edx + ecx*4 + 0x18c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18cu));
    /* 0043e92c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e92f: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043e935: mov eax, dword ptr [edx + eax*4 + 0x18c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x18cu));
    /* 0043e93c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e93e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43e941u); call_ind(t); }
    /* 0043e941: jmp 0x43e8e6 */ goto L_0043e8e6;
L_0043e943:; BB(0x0043e943);
    /* 0043e943: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043e948: cmp dword ptr [eax + 0x1a4], 0 */ {  u32 a = R32((u32)(r_eax+0x1a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e94f: je 0x43e980 */ if (fZ) goto L_0043e980;
L_0043e951:; BB(0x0043e951);
    /* 0043e951: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043e957: mov ecx, dword ptr [ecx + 0x1a4] */ r_ecx = R32((u32)(r_ecx+0x1a4u));
    /* 0043e95d: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043e963: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 0043e969: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e96b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x43e96eu); call_ind(t); }
    /* 0043e96e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e970: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043e975: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 0043e97b: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x43e980u); f_005e4060();
L_0043e980:; BB(0x0043e980);
    /* 0043e980: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043e986: mov dword ptr [ecx + 0x1b0], 0 */ W32((u32)(r_ecx+0x1b0u), 0x0u);
    /* 0043e990: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e992: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043e998: call 0x4371f8 */ r_esp -= 4; W32(r_esp, 0x43e99du); f_004371f8();
    /* 0043e99d: mov edx, dword ptr [0x6f666c] */ r_edx = R32((u32)(0x6f666cu));
    /* 0043e9a3: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0043e9a5: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0043e9a7: and edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0043e9aa: add edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043e9ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9ae: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043e9b3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043e9b6: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043e9bc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043e9bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e9c1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43e9c4u); call_ind(t); }
    /* 0043e9c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9c6: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043e9cb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043e9ce: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0043e9d4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043e9d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043e9d9: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43e9dcu); call_ind(t); }
    /* 0043e9dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9de: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 0043e9e3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043e9e6: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x43e9ebu); f_005e62ca();
L_0043e9eb:; BB(0x0043e9eb);
    /* 0043e9eb: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e9ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e9ee: ret 4 */ FN_RET(0x0043e7c7); r_esp += 8; return;
}

void f_0043e9f1(void) /* FUN_0043e9f1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e9f1);
    /* 0043e9f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9f2: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e9f4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e9f7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043e9fa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043e9fd: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ea01: je 0x43ea0a */ if (fZ) goto L_0043ea0a;
L_0043ea03:; BB(0x0043ea03);
    /* 0043ea03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043ea05: jmp 0x43eafa */ goto L_0043eafa;
L_0043ea0a:; BB(0x0043ea0a);
    /* 0043ea0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ea0d: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0043ea10: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0043ea13: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ea17: je 0x43ea1e */ if (fZ) goto L_0043ea1e;
L_0043ea19:; BB(0x0043ea19);
    /* 0043ea19: jmp 0x43eaf4 */ goto L_0043eaf4;
L_0043ea1e:; BB(0x0043ea1e);
    /* 0043ea1e: mov dword ptr [ebp - 8], 0x3d */ W32((u32)(r_ebp+0xfffffff8u), 0x3du);
    /* 0043ea25: jmp 0x43ea30 */ goto L_0043ea30;
L_0043ea27:; BB(0x0043ea27);
    /* 0043ea27: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ea2a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043ea2d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043ea30:; BB(0x0043ea30);
    /* 0043ea30: cmp dword ptr [ebp - 8], 0x42 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x42u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ea34: jg 0x43ea89 */ if ((!fZ&&fS==fO)) goto L_0043ea89;
L_0043ea36:; BB(0x0043ea36);
    /* 0043ea36: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ea39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea3a: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043ea40: call 0x43b4cf */ r_esp -= 4; W32(r_esp, 0x43ea45u); f_0043b4cf();
    /* 0043ea45: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043ea4b: mov eax, dword ptr [edx + eax*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_eax*4+0x30u));
    /* 0043ea4f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043ea52: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ea55: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0043ea58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ea5c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043ea5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea60: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ea63: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ea65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ea68: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x43ea6bu); call_ind(t); }
    /* 0043ea6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ea6d: je 0x43ea7f */ if (fZ) goto L_0043ea7f;
L_0043ea6f:; BB(0x0043ea6f);
    /* 0043ea6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ea72: call 0x4303f6 */ r_esp -= 4; W32(r_esp, 0x43ea77u); f_004303f6();
    /* 0043ea77: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ea7a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0043ea7d: jmp 0x43eafa */ goto L_0043eafa;
L_0043ea7f:; BB(0x0043ea7f);
    /* 0043ea7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ea82: call 0x43075c */ r_esp -= 4; W32(r_esp, 0x43ea87u); f_0043075c();
    /* 0043ea87: jmp 0x43ea27 */ goto L_0043ea27;
L_0043ea89:; BB(0x0043ea89);
    /* 0043ea89: mov dword ptr [ebp - 8], 0x37 */ W32((u32)(r_ebp+0xfffffff8u), 0x37u);
    /* 0043ea90: jmp 0x43ea9b */ goto L_0043ea9b;
L_0043ea92:; BB(0x0043ea92);
    /* 0043ea92: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ea95: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043ea98: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0043ea9b:; BB(0x0043ea9b);
    /* 0043ea9b: cmp dword ptr [ebp - 8], 0x3c */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ea9f: jg 0x43eaf4 */ if ((!fZ&&fS==fO)) goto L_0043eaf4;
L_0043eaa1:; BB(0x0043eaa1);
    /* 0043eaa1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043eaa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043eaa5: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043eaab: call 0x43b4cf */ r_esp -= 4; W32(r_esp, 0x43eab0u); f_0043b4cf();
    /* 0043eab0: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043eab6: mov edx, dword ptr [ecx + eax*4 + 0x30] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0043eaba: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043eabd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043eac0: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0043eac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eac4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043eac7: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0043eaca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043eacb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043eace: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ead0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ead3: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x43ead6u); call_ind(t); }
    /* 0043ead6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ead8: je 0x43eaea */ if (fZ) goto L_0043eaea;
L_0043eada:; BB(0x0043eada);
    /* 0043eada: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043eadd: call 0x4303f6 */ r_esp -= 4; W32(r_esp, 0x43eae2u); f_004303f6();
    /* 0043eae2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043eae5: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0043eae8: jmp 0x43eafa */ goto L_0043eafa;
L_0043eaea:; BB(0x0043eaea);
    /* 0043eaea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043eaed: call 0x43075c */ r_esp -= 4; W32(r_esp, 0x43eaf2u); f_0043075c();
    /* 0043eaf2: jmp 0x43ea92 */ goto L_0043ea92;
L_0043eaf4:; BB(0x0043eaf4);
    /* 0043eaf4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043eaf7: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
L_0043eafa:; BB(0x0043eafa);
    /* 0043eafa: mov esp, ebp */ r_esp = r_ebp;
    /* 0043eafc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043eafd: ret 4 */ FN_RET(0x0043e9f1); r_esp += 8; return;
}

void f_0043eb00(void) /* FUN_0043eb00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043eb00);
    /* 0043eb00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb01: mov ebp, esp */ r_ebp = r_esp;
    /* 0043eb03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043eb07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043eb0a: call 0x42f572 */ r_esp -= 4; W32(r_esp, 0x43eb0fu); f_0042f572();
    /* 0043eb0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043eb12: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043eb15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eb17: je 0x43eb25 */ if (fZ) goto L_0043eb25;
L_0043eb19:; BB(0x0043eb19);
    /* 0043eb19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043eb1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb1d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x43eb22u); f_0048ac1b();
    /* 0043eb22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043eb25:; BB(0x0043eb25);
    /* 0043eb25: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043eb28: mov esp, ebp */ r_esp = r_ebp;
    /* 0043eb2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043eb2b: ret 4 */ FN_RET(0x0043eb00); r_esp += 8; return;
}

void f_0043eb30(void) /* FUN_0043eb30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043eb30);
    /* 0043eb30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb31: mov ebp, esp */ r_ebp = r_esp;
    /* 0043eb33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043eb37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043eb3a: call 0x430241 */ r_esp -= 4; W32(r_esp, 0x43eb3fu); f_00430241();
    /* 0043eb3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043eb42: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043eb45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eb47: je 0x43eb55 */ if (fZ) goto L_0043eb55;
L_0043eb49:; BB(0x0043eb49);
    /* 0043eb49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043eb4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb4d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x43eb52u); f_0048ac1b();
    /* 0043eb52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043eb55:; BB(0x0043eb55);
    /* 0043eb55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043eb58: mov esp, ebp */ r_esp = r_ebp;
    /* 0043eb5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043eb5b: ret 4 */ FN_RET(0x0043eb30); r_esp += 8; return;
}

void f_0043eb60(void) /* FUN_0043eb60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043eb60);
    /* 0043eb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb61: mov ebp, esp */ r_ebp = r_esp;
    /* 0043eb63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043eb67: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eb6b: je 0x43eb82 */ if (fZ) goto L_0043eb82;
L_0043eb6d:; BB(0x0043eb6d);
    /* 0043eb6d: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eb71: je 0x43eb82 */ if (fZ) goto L_0043eb82;
L_0043eb73:; BB(0x0043eb73);
    /* 0043eb73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043eb76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb77: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043eb7a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043eb7c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043eb7f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43eb82u); call_ind(t); }
L_0043eb82:; BB(0x0043eb82);
    /* 0043eb82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043eb87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb88: push 0x84d */ { u32 v = 0x84du; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043eb90: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043eb92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043eb95: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43eb98u); call_ind(t); }
    /* 0043eb98: mov esp, ebp */ r_esp = r_ebp;
    /* 0043eb9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043eb9b: ret 8 */ FN_RET(0x0043eb60); r_esp += 12; return;
}

void f_0043eba0(void) /* FUN_0043eba0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043eba0);
    /* 0043eba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043eba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043eba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043eba7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ebab: je 0x43ebc2 */ if (fZ) goto L_0043ebc2;
L_0043ebad:; BB(0x0043ebad);
    /* 0043ebad: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ebb1: je 0x43ebc2 */ if (fZ) goto L_0043ebc2;
L_0043ebb3:; BB(0x0043ebb3);
    /* 0043ebb3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043ebb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebb7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ebba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ebbc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ebbf: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ebc2u); call_ind(t); }
L_0043ebc2:; BB(0x0043ebc2);
    /* 0043ebc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebc4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ebc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebc8: push 0x866 */ { u32 v = 0x866u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ebd0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ebd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ebd5: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ebd8u); call_ind(t); }
    /* 0043ebd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ebda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ebdb: ret 8 */ FN_RET(0x0043eba0); r_esp += 12; return;
}

void f_0043ebe0(void) /* FUN_0043ebe0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ebe0);
    /* 0043ebe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ebe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ebe7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ebeb: je 0x43ec02 */ if (fZ) goto L_0043ec02;
L_0043ebed:; BB(0x0043ebed);
    /* 0043ebed: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ebf1: je 0x43ec02 */ if (fZ) goto L_0043ec02;
L_0043ebf3:; BB(0x0043ebf3);
    /* 0043ebf3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043ebf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebf7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ebfa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ebfc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ebff: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ec02u); call_ind(t); }
L_0043ec02:; BB(0x0043ec02);
    /* 0043ec02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ec07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec08: push 0x81b */ { u32 v = 0x81bu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ec10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ec12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ec15: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ec18u); call_ind(t); }
    /* 0043ec18: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ec1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ec1b: ret 8 */ FN_RET(0x0043ebe0); r_esp += 12; return;
}

void f_0043ec20(void) /* FUN_0043ec20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ec20);
    /* 0043ec20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec21: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ec23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ec27: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ec2b: je 0x43ec42 */ if (fZ) goto L_0043ec42;
L_0043ec2d:; BB(0x0043ec2d);
    /* 0043ec2d: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ec31: je 0x43ec42 */ if (fZ) goto L_0043ec42;
L_0043ec33:; BB(0x0043ec33);
    /* 0043ec33: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043ec36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec37: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ec3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ec3c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ec3f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ec42u); call_ind(t); }
L_0043ec42:; BB(0x0043ec42);
    /* 0043ec42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec44: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ec47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec48: push 0x834 */ { u32 v = 0x834u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ec50: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ec52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ec55: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ec58u); call_ind(t); }
    /* 0043ec58: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ec5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ec5b: ret 8 */ FN_RET(0x0043ec20); r_esp += 12; return;
}

void f_0043ec60(void) /* FUN_0043ec60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ec60);
    /* 0043ec60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec61: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ec63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ec67: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ec6b: je 0x43ec82 */ if (fZ) goto L_0043ec82;
L_0043ec6d:; BB(0x0043ec6d);
    /* 0043ec6d: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ec71: je 0x43ec82 */ if (fZ) goto L_0043ec82;
L_0043ec73:; BB(0x0043ec73);
    /* 0043ec73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043ec76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec77: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ec7a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ec7c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ec7f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ec82u); call_ind(t); }
L_0043ec82:; BB(0x0043ec82);
    /* 0043ec82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ec87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec88: push 0x802 */ { u32 v = 0x802u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ec90: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ec92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ec95: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ec98u); call_ind(t); }
    /* 0043ec98: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ec9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ec9b: ret 8 */ FN_RET(0x0043ec60); r_esp += 12; return;
}

void f_0043eca0(void) /* FUN_0043eca0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043eca0);
    /* 0043eca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043eca1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043eca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043eca7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ecab: je 0x43ecc2 */ if (fZ) goto L_0043ecc2;
L_0043ecad:; BB(0x0043ecad);
    /* 0043ecad: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ecb1: je 0x43ecc2 */ if (fZ) goto L_0043ecc2;
L_0043ecb3:; BB(0x0043ecb3);
    /* 0043ecb3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043ecb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ecb7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ecba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ecbc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ecbf: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ecc2u); call_ind(t); }
L_0043ecc2:; BB(0x0043ecc2);
    /* 0043ecc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ecc4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ecc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ecc8: push 0xc99 */ { u32 v = 0xc99u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eccd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ecd0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ecd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ecd5: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ecd8u); call_ind(t); }
    /* 0043ecd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ecda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ecdb: ret 8 */ FN_RET(0x0043eca0); r_esp += 12; return;
}

void f_0043ece0(void) /* FUN_0043ece0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ece0);
    /* 0043ece0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ece1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ece3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ece4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ece7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eceb: je 0x43ed02 */ if (fZ) goto L_0043ed02;
L_0043eced:; BB(0x0043eced);
    /* 0043eced: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ecf1: je 0x43ed02 */ if (fZ) goto L_0043ed02;
L_0043ecf3:; BB(0x0043ecf3);
    /* 0043ecf3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043ecf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ecf7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ecfa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ecfc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ecff: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ed02u); call_ind(t); }
L_0043ed02:; BB(0x0043ed02);
    /* 0043ed02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ed07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed08: push 0xdc5 */ { u32 v = 0xdc5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ed10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ed12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ed15: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ed18u); call_ind(t); }
    /* 0043ed18: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ed1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ed1b: ret 8 */ FN_RET(0x0043ece0); r_esp += 12; return;
}

void f_0043ed20(void) /* FUN_0043ed20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ed20);
    /* 0043ed20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed21: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ed23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ed27: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ed2b: je 0x43ed42 */ if (fZ) goto L_0043ed42;
L_0043ed2d:; BB(0x0043ed2d);
    /* 0043ed2d: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ed31: je 0x43ed42 */ if (fZ) goto L_0043ed42;
L_0043ed33:; BB(0x0043ed33);
    /* 0043ed33: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043ed36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed37: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ed3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ed3c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ed3f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ed42u); call_ind(t); }
L_0043ed42:; BB(0x0043ed42);
    /* 0043ed42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed44: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ed47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed48: push 0xce4 */ { u32 v = 0xce4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ed50: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ed52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ed55: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ed58u); call_ind(t); }
    /* 0043ed58: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ed5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ed5b: ret 8 */ FN_RET(0x0043ed20); r_esp += 12; return;
}

void f_0043ed60(void) /* FUN_0043ed60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ed60);
    /* 0043ed60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed61: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ed63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ed67: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ed6b: je 0x43ed82 */ if (fZ) goto L_0043ed82;
L_0043ed6d:; BB(0x0043ed6d);
    /* 0043ed6d: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ed71: je 0x43ed82 */ if (fZ) goto L_0043ed82;
L_0043ed73:; BB(0x0043ed73);
    /* 0043ed73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043ed76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed77: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ed7a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ed7c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ed7f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ed82u); call_ind(t); }
L_0043ed82:; BB(0x0043ed82);
    /* 0043ed82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ed87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed88: push 0x8ca */ { u32 v = 0x8cau; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ed90: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ed92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ed95: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ed98u); call_ind(t); }
    /* 0043ed98: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ed9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ed9b: ret 8 */ FN_RET(0x0043ed60); r_esp += 12; return;
}

void f_0043eda0(void) /* FUN_0043eda0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043eda0);
    /* 0043eda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043eda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043eda3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eda4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043eda7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043edab: je 0x43edc2 */ if (fZ) goto L_0043edc2;
L_0043edad:; BB(0x0043edad);
    /* 0043edad: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043edb1: je 0x43edc2 */ if (fZ) goto L_0043edc2;
L_0043edb3:; BB(0x0043edb3);
    /* 0043edb3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043edb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043edb7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043edba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043edbc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043edbf: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43edc2u); call_ind(t); }
L_0043edc2:; BB(0x0043edc2);
    /* 0043edc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043edc4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043edc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043edc8: push 0x7e9 */ { u32 v = 0x7e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0043edcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043edd0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043edd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043edd5: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43edd8u); call_ind(t); }
    /* 0043edd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043edda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043eddb: ret 8 */ FN_RET(0x0043eda0); r_esp += 12; return;
}

void f_0043ede0(void) /* FUN_0043ede0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ede0);
    /* 0043ede0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ede1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ede3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ede4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ede7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043edeb: je 0x43ee02 */ if (fZ) goto L_0043ee02;
L_0043eded:; BB(0x0043eded);
    /* 0043eded: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043edf1: je 0x43ee02 */ if (fZ) goto L_0043ee02;
L_0043edf3:; BB(0x0043edf3);
    /* 0043edf3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043edf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043edf7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043edfa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043edfc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043edff: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ee02u); call_ind(t); }
L_0043ee02:; BB(0x0043ee02);
    /* 0043ee02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ee07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee08: push 0xd7a */ { u32 v = 0xd7au; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ee10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ee12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ee15: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ee18u); call_ind(t); }
    /* 0043ee18: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ee1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ee1b: ret 8 */ FN_RET(0x0043ede0); r_esp += 12; return;
}

void f_0043ee20(void) /* FUN_0043ee20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ee20);
    /* 0043ee20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee21: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ee23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ee27: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ee2b: je 0x43ee42 */ if (fZ) goto L_0043ee42;
L_0043ee2d:; BB(0x0043ee2d);
    /* 0043ee2d: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ee31: je 0x43ee42 */ if (fZ) goto L_0043ee42;
L_0043ee33:; BB(0x0043ee33);
    /* 0043ee33: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043ee36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee37: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ee3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ee3c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ee3f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ee42u); call_ind(t); }
L_0043ee42:; BB(0x0043ee42);
    /* 0043ee42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee44: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ee47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee48: push 0xd93 */ { u32 v = 0xd93u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ee50: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ee52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ee55: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ee58u); call_ind(t); }
    /* 0043ee58: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ee5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ee5b: ret 8 */ FN_RET(0x0043ee20); r_esp += 12; return;
}

void f_0043ee60(void) /* FUN_0043ee60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ee60);
    /* 0043ee60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee61: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ee63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ee67: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ee6b: je 0x43ee82 */ if (fZ) goto L_0043ee82;
L_0043ee6d:; BB(0x0043ee6d);
    /* 0043ee6d: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ee71: je 0x43ee82 */ if (fZ) goto L_0043ee82;
L_0043ee73:; BB(0x0043ee73);
    /* 0043ee73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043ee76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee77: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ee7a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ee7c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ee7f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ee82u); call_ind(t); }
L_0043ee82:; BB(0x0043ee82);
    /* 0043ee82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ee87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee88: push 0xc1c */ { u32 v = 0xc1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ee90: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ee92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ee95: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ee98u); call_ind(t); }
    /* 0043ee98: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ee9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ee9b: ret 8 */ FN_RET(0x0043ee60); r_esp += 12; return;
}

void f_0043eea0(void) /* FUN_0043eea0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043eea0);
    /* 0043eea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043eea1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043eea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043eea7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eeab: je 0x43eec2 */ if (fZ) goto L_0043eec2;
L_0043eead:; BB(0x0043eead);
    /* 0043eead: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eeb1: je 0x43eec2 */ if (fZ) goto L_0043eec2;
L_0043eeb3:; BB(0x0043eeb3);
    /* 0043eeb3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043eeb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043eeb7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043eeba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043eebc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043eebf: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43eec2u); call_ind(t); }
L_0043eec2:; BB(0x0043eec2);
    /* 0043eec2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043eec4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043eec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043eec8: push 0xc4e */ { u32 v = 0xc4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043eecd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043eed0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043eed2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043eed5: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43eed8u); call_ind(t); }
    /* 0043eed8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043eeda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043eedb: ret 8 */ FN_RET(0x0043eea0); r_esp += 12; return;
}

void f_0043eee0(void) /* FUN_0043eee0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043eee0);
    /* 0043eee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043eee1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043eee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043eee7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eeeb: je 0x43ef02 */ if (fZ) goto L_0043ef02;
L_0043eeed:; BB(0x0043eeed);
    /* 0043eeed: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eef1: je 0x43ef02 */ if (fZ) goto L_0043ef02;
L_0043eef3:; BB(0x0043eef3);
    /* 0043eef3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043eef6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043eef7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043eefa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043eefc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043eeff: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ef02u); call_ind(t); }
L_0043ef02:; BB(0x0043ef02);
    /* 0043ef02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ef07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef08: push 0xc67 */ { u32 v = 0xc67u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ef10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ef12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ef15: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ef18u); call_ind(t); }
    /* 0043ef18: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ef1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ef1b: ret 8 */ FN_RET(0x0043eee0); r_esp += 12; return;
}

void f_0043ef20(void) /* FUN_0043ef20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ef20);
    /* 0043ef20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef21: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ef23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ef27: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ef2b: je 0x43ef42 */ if (fZ) goto L_0043ef42;
L_0043ef2d:; BB(0x0043ef2d);
    /* 0043ef2d: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ef31: je 0x43ef42 */ if (fZ) goto L_0043ef42;
L_0043ef33:; BB(0x0043ef33);
    /* 0043ef33: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043ef36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef37: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ef3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ef3c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ef3f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ef42u); call_ind(t); }
L_0043ef42:; BB(0x0043ef42);
    /* 0043ef42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef44: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ef47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef48: push 0xc80 */ { u32 v = 0xc80u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ef50: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ef52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ef55: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ef58u); call_ind(t); }
    /* 0043ef58: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ef5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ef5b: ret 8 */ FN_RET(0x0043ef20); r_esp += 12; return;
}

void f_0043ef60(void) /* FUN_0043ef60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ef60);
    /* 0043ef60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef61: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ef63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043ef67: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ef6b: je 0x43ef82 */ if (fZ) goto L_0043ef82;
L_0043ef6d:; BB(0x0043ef6d);
    /* 0043ef6d: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ef71: je 0x43ef82 */ if (fZ) goto L_0043ef82;
L_0043ef73:; BB(0x0043ef73);
    /* 0043ef73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043ef76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef77: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ef7a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ef7c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043ef7f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43ef82u); call_ind(t); }
L_0043ef82:; BB(0x0043ef82);
    /* 0043ef82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ef87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef88: push 0xc35 */ { u32 v = 0xc35u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ef90: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ef92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ef95: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43ef98u); call_ind(t); }
    /* 0043ef98: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ef9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ef9b: ret 8 */ FN_RET(0x0043ef60); r_esp += 12; return;
}

void f_0043efa0(void) /* FUN_0043efa0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043efa0);
    /* 0043efa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043efa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043efa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043efa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043efa7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043efab: je 0x43efc2 */ if (fZ) goto L_0043efc2;
L_0043efad:; BB(0x0043efad);
    /* 0043efad: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043efb1: je 0x43efc2 */ if (fZ) goto L_0043efc2;
L_0043efb3:; BB(0x0043efb3);
    /* 0043efb3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043efb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043efb7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043efba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043efbc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043efbf: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43efc2u); call_ind(t); }
L_0043efc2:; BB(0x0043efc2);
    /* 0043efc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043efc4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043efc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043efc8: push 0xd2f */ { u32 v = 0xd2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043efcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043efd0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043efd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043efd5: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43efd8u); call_ind(t); }
    /* 0043efd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043efda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043efdb: ret 8 */ FN_RET(0x0043efa0); r_esp += 12; return;
}

void f_0043efe0(void) /* FUN_0043efe0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043efe0);
    /* 0043efe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043efe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043efe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043efe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043efe7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043efeb: je 0x43f002 */ if (fZ) goto L_0043f002;
L_0043efed:; BB(0x0043efed);
    /* 0043efed: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eff1: je 0x43f002 */ if (fZ) goto L_0043f002;
L_0043eff3:; BB(0x0043eff3);
    /* 0043eff3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043eff6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043eff7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043effa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043effc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043efff: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43f002u); call_ind(t); }
L_0043f002:; BB(0x0043f002);
    /* 0043f002: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f004: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f007: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f008: push 0xd16 */ { u32 v = 0xd16u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f00d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f010: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f012: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f015: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43f018u); call_ind(t); }
    /* 0043f018: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f01a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f01b: ret 8 */ FN_RET(0x0043efe0); r_esp += 12; return;
}

void f_0043f020(void) /* FUN_0043f020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f020);
    /* 0043f020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f021: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f027: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f02b: je 0x43f042 */ if (fZ) goto L_0043f042;
L_0043f02d:; BB(0x0043f02d);
    /* 0043f02d: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f031: je 0x43f042 */ if (fZ) goto L_0043f042;
L_0043f033:; BB(0x0043f033);
    /* 0043f033: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043f036: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f037: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043f03a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f03c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043f03f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43f042u); call_ind(t); }
L_0043f042:; BB(0x0043f042);
    /* 0043f042: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f044: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f048: push 0xcb2 */ { u32 v = 0xcb2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f04d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f050: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f052: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f055: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43f058u); call_ind(t); }
    /* 0043f058: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f05a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f05b: ret 8 */ FN_RET(0x0043f020); r_esp += 12; return;
}

void f_0043f060(void) /* FUN_0043f060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f060);
    /* 0043f060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f061: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f067: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f06b: je 0x43f082 */ if (fZ) goto L_0043f082;
L_0043f06d:; BB(0x0043f06d);
    /* 0043f06d: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f071: je 0x43f082 */ if (fZ) goto L_0043f082;
L_0043f073:; BB(0x0043f073);
    /* 0043f073: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043f076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f077: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043f07a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f07c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043f07f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43f082u); call_ind(t); }
L_0043f082:; BB(0x0043f082);
    /* 0043f082: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f084: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f088: push 0xccb */ { u32 v = 0xccbu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f08d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f090: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f092: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f095: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43f098u); call_ind(t); }
    /* 0043f098: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f09a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f09b: ret 8 */ FN_RET(0x0043f060); r_esp += 12; return;
}

void f_0043f0a0(void) /* FUN_0043f0a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f0a0);
    /* 0043f0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f0a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f0a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f0a7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f0ab: je 0x43f0c2 */ if (fZ) goto L_0043f0c2;
L_0043f0ad:; BB(0x0043f0ad);
    /* 0043f0ad: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f0b1: je 0x43f0c2 */ if (fZ) goto L_0043f0c2;
L_0043f0b3:; BB(0x0043f0b3);
    /* 0043f0b3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043f0b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f0b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043f0ba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f0bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043f0bf: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43f0c2u); call_ind(t); }
L_0043f0c2:; BB(0x0043f0c2);
    /* 0043f0c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f0c4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f0c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f0c8: push 0xcfd */ { u32 v = 0xcfdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f0cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f0d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f0d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f0d5: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43f0d8u); call_ind(t); }
    /* 0043f0d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f0da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f0db: ret 8 */ FN_RET(0x0043f0a0); r_esp += 12; return;
}

void f_0043f0e0(void) /* FUN_0043f0e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f0e0);
    /* 0043f0e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f0e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f0e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f0e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f0e7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f0eb: je 0x43f102 */ if (fZ) goto L_0043f102;
L_0043f0ed:; BB(0x0043f0ed);
    /* 0043f0ed: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f0f1: je 0x43f102 */ if (fZ) goto L_0043f102;
L_0043f0f3:; BB(0x0043f0f3);
    /* 0043f0f3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043f0f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f0f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043f0fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f0fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043f0ff: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43f102u); call_ind(t); }
L_0043f102:; BB(0x0043f102);
    /* 0043f102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f104: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f108: push 0xd48 */ { u32 v = 0xd48u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f10d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f110: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f112: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f115: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43f118u); call_ind(t); }
    /* 0043f118: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f11a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f11b: ret 8 */ FN_RET(0x0043f0e0); r_esp += 12; return;
}

void f_0043f120(void) /* FUN_0043f120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f120);
    /* 0043f120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f121: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f127: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f12b: je 0x43f142 */ if (fZ) goto L_0043f142;
L_0043f12d:; BB(0x0043f12d);
    /* 0043f12d: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f131: je 0x43f142 */ if (fZ) goto L_0043f142;
L_0043f133:; BB(0x0043f133);
    /* 0043f133: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043f136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f137: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043f13a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f13c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043f13f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x43f142u); call_ind(t); }
L_0043f142:; BB(0x0043f142);
    /* 0043f142: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f144: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f148: push 0xd61 */ { u32 v = 0xd61u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f14d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f150: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f152: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f155: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x43f158u); call_ind(t); }
    /* 0043f158: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f15a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f15b: ret 8 */ FN_RET(0x0043f120); r_esp += 12; return;
}

void f_0043f160(void) /* FUN_0043f160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f160);
    /* 0043f160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f161: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f167: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f169: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f16c: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43f171u); f_0043c7a1();
    /* 0043f171: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f173: je 0x43f18a */ if (fZ) goto L_0043f18a;
L_0043f175:; BB(0x0043f175);
    /* 0043f175: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f177: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f17a: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43f17fu); f_0043c77e();
    /* 0043f17f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f181: je 0x43f18a */ if (fZ) goto L_0043f18a;
L_0043f183:; BB(0x0043f183);
    /* 0043f183: mov eax, 1 */ r_eax = 0x1u;
    /* 0043f188: jmp 0x43f18c */ goto L_0043f18c;
L_0043f18a:; BB(0x0043f18a);
    /* 0043f18a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043f18c:; BB(0x0043f18c);
    /* 0043f18c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f18e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f18f: ret  */ FN_RET(0x0043f160); r_esp += 4; return;
}

void f_0043f190(void) /* FUN_0043f190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f190);
    /* 0043f190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f191: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f197: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f199: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f19c: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43f1a1u); f_0043c7a1();
    /* 0043f1a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f1a3: je 0x43f1ba */ if (fZ) goto L_0043f1ba;
L_0043f1a5:; BB(0x0043f1a5);
    /* 0043f1a5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f1aa: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43f1afu); f_0043c77e();
    /* 0043f1af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f1b1: je 0x43f1ba */ if (fZ) goto L_0043f1ba;
L_0043f1b3:; BB(0x0043f1b3);
    /* 0043f1b3: mov eax, 1 */ r_eax = 0x1u;
    /* 0043f1b8: jmp 0x43f1bc */ goto L_0043f1bc;
L_0043f1ba:; BB(0x0043f1ba);
    /* 0043f1ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043f1bc:; BB(0x0043f1bc);
    /* 0043f1bc: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f1be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f1bf: ret  */ FN_RET(0x0043f190); r_esp += 4; return;
}

void f_0043f1c0(void) /* FUN_0043f1c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f1c0);
    /* 0043f1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f1c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f1c7: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f1cc: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43f1d1u); f_0043c7a1();
    /* 0043f1d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f1d3: je 0x43f1ea */ if (fZ) goto L_0043f1ea;
L_0043f1d5:; BB(0x0043f1d5);
    /* 0043f1d5: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f1da: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43f1dfu); f_0043c77e();
    /* 0043f1df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f1e1: je 0x43f1ea */ if (fZ) goto L_0043f1ea;
L_0043f1e3:; BB(0x0043f1e3);
    /* 0043f1e3: mov eax, 1 */ r_eax = 0x1u;
    /* 0043f1e8: jmp 0x43f1ec */ goto L_0043f1ec;
L_0043f1ea:; BB(0x0043f1ea);
    /* 0043f1ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043f1ec:; BB(0x0043f1ec);
    /* 0043f1ec: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f1ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f1ef: ret  */ FN_RET(0x0043f1c0); r_esp += 4; return;
}

void f_0043f1f0(void) /* FUN_0043f1f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f1f0);
    /* 0043f1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f1f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f1f7: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f1fc: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43f201u); f_0043c7a1();
    /* 0043f201: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f203: je 0x43f21a */ if (fZ) goto L_0043f21a;
L_0043f205:; BB(0x0043f205);
    /* 0043f205: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f20a: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43f20fu); f_0043c77e();
    /* 0043f20f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f211: je 0x43f21a */ if (fZ) goto L_0043f21a;
L_0043f213:; BB(0x0043f213);
    /* 0043f213: mov eax, 1 */ r_eax = 0x1u;
    /* 0043f218: jmp 0x43f21c */ goto L_0043f21c;
L_0043f21a:; BB(0x0043f21a);
    /* 0043f21a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043f21c:; BB(0x0043f21c);
    /* 0043f21c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f21e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f21f: ret  */ FN_RET(0x0043f1f0); r_esp += 4; return;
}

void f_0043f220(void) /* FUN_0043f220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f220);
    /* 0043f220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f221: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f227: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f229: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f22c: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43f231u); f_0043c7a1();
    /* 0043f231: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f233: je 0x43f24a */ if (fZ) goto L_0043f24a;
L_0043f235:; BB(0x0043f235);
    /* 0043f235: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f237: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f23a: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43f23fu); f_0043c77e();
    /* 0043f23f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f241: je 0x43f24a */ if (fZ) goto L_0043f24a;
L_0043f243:; BB(0x0043f243);
    /* 0043f243: mov eax, 1 */ r_eax = 0x1u;
    /* 0043f248: jmp 0x43f24c */ goto L_0043f24c;
L_0043f24a:; BB(0x0043f24a);
    /* 0043f24a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043f24c:; BB(0x0043f24c);
    /* 0043f24c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f24e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f24f: ret  */ FN_RET(0x0043f220); r_esp += 4; return;
}

void f_0043f250(void) /* FUN_0043f250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f250);
    /* 0043f250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f251: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f257: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f259: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f25c: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43f261u); f_0043c7a1();
    /* 0043f261: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f263: je 0x43f27a */ if (fZ) goto L_0043f27a;
L_0043f265:; BB(0x0043f265);
    /* 0043f265: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f267: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f26a: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43f26fu); f_0043c77e();
    /* 0043f26f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f271: je 0x43f27a */ if (fZ) goto L_0043f27a;
L_0043f273:; BB(0x0043f273);
    /* 0043f273: mov eax, 1 */ r_eax = 0x1u;
    /* 0043f278: jmp 0x43f27c */ goto L_0043f27c;
L_0043f27a:; BB(0x0043f27a);
    /* 0043f27a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043f27c:; BB(0x0043f27c);
    /* 0043f27c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f27e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f27f: ret  */ FN_RET(0x0043f250); r_esp += 4; return;
}

void f_0043f280(void) /* FUN_0043f280 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f280);
    /* 0043f280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f281: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f287: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f289: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f28c: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43f291u); f_0043c7a1();
    /* 0043f291: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f293: je 0x43f2aa */ if (fZ) goto L_0043f2aa;
L_0043f295:; BB(0x0043f295);
    /* 0043f295: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f297: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f29a: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43f29fu); f_0043c77e();
    /* 0043f29f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f2a1: je 0x43f2aa */ if (fZ) goto L_0043f2aa;
L_0043f2a3:; BB(0x0043f2a3);
    /* 0043f2a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0043f2a8: jmp 0x43f2ac */ goto L_0043f2ac;
L_0043f2aa:; BB(0x0043f2aa);
    /* 0043f2aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043f2ac:; BB(0x0043f2ac);
    /* 0043f2ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f2ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f2af: ret  */ FN_RET(0x0043f280); r_esp += 4; return;
}

void f_0043f2b0(void) /* FUN_0043f2b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f2b0);
    /* 0043f2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f2b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f2b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f2b7: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f2b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f2bc: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x43f2c1u); f_0043c7a1();
    /* 0043f2c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f2c3: je 0x43f304 */ if (fZ) goto L_0043f304;
L_0043f2c5:; BB(0x0043f2c5);
    /* 0043f2c5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f2c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f2ca: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43f2cfu); f_0043c77e();
    /* 0043f2cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f2d1: jne 0x43f2fd */ if (!fZ) goto L_0043f2fd;
L_0043f2d3:; BB(0x0043f2d3);
    /* 0043f2d3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f2d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f2d8: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43f2ddu); f_0043c77e();
    /* 0043f2dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f2df: jne 0x43f2fd */ if (!fZ) goto L_0043f2fd;
L_0043f2e1:; BB(0x0043f2e1);
    /* 0043f2e1: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f2e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f2e6: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43f2ebu); f_0043c77e();
    /* 0043f2eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f2ed: jne 0x43f2fd */ if (!fZ) goto L_0043f2fd;
L_0043f2ef:; BB(0x0043f2ef);
    /* 0043f2ef: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f2f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f2f4: call 0x43c77e */ r_esp -= 4; W32(r_esp, 0x43f2f9u); f_0043c77e();
    /* 0043f2f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f2fb: je 0x43f304 */ if (fZ) goto L_0043f304;
L_0043f2fd:; BB(0x0043f2fd);
    /* 0043f2fd: mov eax, 1 */ r_eax = 0x1u;
    /* 0043f302: jmp 0x43f306 */ goto L_0043f306;
L_0043f304:; BB(0x0043f304);
    /* 0043f304: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043f306:; BB(0x0043f306);
    /* 0043f306: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f309: ret  */ FN_RET(0x0043f2b0); r_esp += 4; return;
}

void f_0043f310(void) /* FUN_0043f310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f310);
    /* 0043f310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f311: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f31a: call 0x435915 */ r_esp -= 4; W32(r_esp, 0x43f31fu); f_00435915();
    /* 0043f31f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f322: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043f325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f327: je 0x43f335 */ if (fZ) goto L_0043f335;
L_0043f329:; BB(0x0043f329);
    /* 0043f329: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f32c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f32d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x43f332u); f_0048ac1b();
    /* 0043f332: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f335:; BB(0x0043f335);
    /* 0043f335: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f338: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f33a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f33b: ret 4 */ FN_RET(0x0043f310); r_esp += 8; return;
}

void f_0043f340(void) /* FUN_0043f340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f340);
    /* 0043f340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f341: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f347: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f34a: call 0x43617b */ r_esp -= 4; W32(r_esp, 0x43f34fu); f_0043617b();
    /* 0043f34f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f352: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043f355: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f357: je 0x43f365 */ if (fZ) goto L_0043f365;
L_0043f359:; BB(0x0043f359);
    /* 0043f359: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f35c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f35d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x43f362u); f_0048ac1b();
    /* 0043f362: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f365:; BB(0x0043f365);
    /* 0043f365: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f368: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f36a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f36b: ret 4 */ FN_RET(0x0043f340); r_esp += 8; return;
}

void f_0043f370(void) /* FUN_0043f370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f370);
    /* 0043f370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f371: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f377: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f37a: call 0x43cfcf */ r_esp -= 4; W32(r_esp, 0x43f37fu); f_0043cfcf();
    /* 0043f37f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f382: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043f385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f387: je 0x43f395 */ if (fZ) goto L_0043f395;
L_0043f389:; BB(0x0043f389);
    /* 0043f389: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f38c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f38d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x43f392u); f_0048ac1b();
    /* 0043f392: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f395:; BB(0x0043f395);
    /* 0043f395: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f398: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f39a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f39b: ret 4 */ FN_RET(0x0043f370); r_esp += 8; return;
}

void f_0043f3a0(void) /* FUN_0043f3a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f3a0);
    /* 0043f3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f3a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f3a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f3a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f3aa: mov dword ptr [eax], 0x6348a4 */ W32((u32)(r_eax), 0x6348a4u);
    /* 0043f3b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f3b3: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x43f3b8u); f_005d5dfb();
    /* 0043f3b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043f3bb: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f3be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f3c0: je 0x43f3ce */ if (fZ) goto L_0043f3ce;
L_0043f3c2:; BB(0x0043f3c2);
    /* 0043f3c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f3c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f3c6: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x43f3cbu); f_0048ac1b();
    /* 0043f3cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f3ce:; BB(0x0043f3ce);
    /* 0043f3ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f3d1: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f3d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f3d4: ret 4 */ FN_RET(0x0043f3a0); r_esp += 8; return;
}

void f_0043f3e0(void) /* FUN_0043f3e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f3e0);
    /* 0043f3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f3e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f3e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f3e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f3ea: call 0x43d362 */ r_esp -= 4; W32(r_esp, 0x43f3efu); f_0043d362();
    /* 0043f3ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f3f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043f3f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f3f7: je 0x43f405 */ if (fZ) goto L_0043f405;
L_0043f3f9:; BB(0x0043f3f9);
    /* 0043f3f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f3fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f3fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x43f402u); f_0048ac1b();
    /* 0043f402: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f405:; BB(0x0043f405);
    /* 0043f405: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f408: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f40a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f40b: ret 4 */ FN_RET(0x0043f3e0); r_esp += 8; return;
}

void f_0043f410(void) /* FUN_0043f410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f410);
    /* 0043f410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f411: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f414: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f417: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f41a: call 0x43d50c */ r_esp -= 4; W32(r_esp, 0x43f41fu); f_0043d50c();
    /* 0043f41f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f422: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043f425: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f427: je 0x43f435 */ if (fZ) goto L_0043f435;
L_0043f429:; BB(0x0043f429);
    /* 0043f429: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f42c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f42d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x43f432u); f_0048ac1b();
    /* 0043f432: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f435:; BB(0x0043f435);
    /* 0043f435: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f438: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f43a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f43b: ret 4 */ FN_RET(0x0043f410); r_esp += 8; return;
}

void f_0043f440(void) /* FUN_0043f440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f440);
    /* 0043f440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f441: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f447: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f44a: call 0x43d9b8 */ r_esp -= 4; W32(r_esp, 0x43f44fu); f_0043d9b8();
    /* 0043f44f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f452: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043f455: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f457: je 0x43f465 */ if (fZ) goto L_0043f465;
L_0043f459:; BB(0x0043f459);
    /* 0043f459: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f45c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f45d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x43f462u); f_0048ac1b();
    /* 0043f462: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f465:; BB(0x0043f465);
    /* 0043f465: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f468: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f46a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f46b: ret 4 */ FN_RET(0x0043f440); r_esp += 8; return;
}

void f_0043f470(void) /* FUN_0043f470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f470);
    /* 0043f470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f471: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f477: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f47a: call 0x43da54 */ r_esp -= 4; W32(r_esp, 0x43f47fu); f_0043da54();
    /* 0043f47f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f482: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043f485: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f487: je 0x43f495 */ if (fZ) goto L_0043f495;
L_0043f489:; BB(0x0043f489);
    /* 0043f489: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f48c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f48d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x43f492u); f_0048ac1b();
    /* 0043f492: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f495:; BB(0x0043f495);
    /* 0043f495: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f498: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f49a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f49b: ret 4 */ FN_RET(0x0043f470); r_esp += 8; return;
}

void f_0043f4a0(void) /* FUN_0043f4a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f4a0);
    /* 0043f4a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f4a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f4a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f4a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f4a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f4aa: call 0x43dbb7 */ r_esp -= 4; W32(r_esp, 0x43f4afu); f_0043dbb7();
    /* 0043f4af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f4b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043f4b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f4b7: je 0x43f4c5 */ if (fZ) goto L_0043f4c5;
L_0043f4b9:; BB(0x0043f4b9);
    /* 0043f4b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f4bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f4bd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x43f4c2u); f_0048ac1b();
    /* 0043f4c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f4c5:; BB(0x0043f4c5);
    /* 0043f4c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f4c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f4ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f4cb: ret 4 */ FN_RET(0x0043f4a0); r_esp += 8; return;
}

void f_0043f4d0(void) /* FUN_0043f4d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f4d0);
    /* 0043f4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f4d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f4d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f4d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f4da: call 0x43e1be */ r_esp -= 4; W32(r_esp, 0x43f4dfu); f_0043e1be();
    /* 0043f4df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f4e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043f4e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f4e7: je 0x43f4f5 */ if (fZ) goto L_0043f4f5;
L_0043f4e9:; BB(0x0043f4e9);
    /* 0043f4e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f4ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f4ed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x43f4f2u); f_0048ac1b();
    /* 0043f4f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f4f5:; BB(0x0043f4f5);
    /* 0043f4f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f4f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f4fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f4fb: ret 4 */ FN_RET(0x0043f4d0); r_esp += 8; return;
}

void f_0043f500(void) /* FUN_0043f500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f500);
    /* 0043f500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f501: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f507: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f50a: call 0x43e7ab */ r_esp -= 4; W32(r_esp, 0x43f50fu); f_0043e7ab();
    /* 0043f50f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f512: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043f515: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f517: je 0x43f525 */ if (fZ) goto L_0043f525;
L_0043f519:; BB(0x0043f519);
    /* 0043f519: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f51c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f51d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x43f522u); f_0048ac1b();
    /* 0043f522: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f525:; BB(0x0043f525);
    /* 0043f525: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f528: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f52a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f52b: ret 4 */ FN_RET(0x0043f500); r_esp += 8; return;
}

void f_0043f530(void) /* FUN_0043f530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f530);
    /* 0043f530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f531: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f537: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f53a: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x43f53fu); f_005dfbf0();
    /* 0043f53f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f542: mov dword ptr [eax], 0x633e4c */ W32((u32)(r_eax), 0x633e4cu);
    /* 0043f548: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f54b: mov dword ptr [ecx], 0x633ddc */ W32((u32)(r_ecx), 0x633ddcu);
    /* 0043f551: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f554: mov dword ptr [edx], 0x634b04 */ W32((u32)(r_edx), 0x634b04u);
    /* 0043f55a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f55d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043f560: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0043f563: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f566: mov dword ptr [0x6f666c], edx */ W32((u32)(0x6f666cu), r_edx);
    /* 0043f56c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f56f: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f571: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f572: ret 4 */ FN_RET(0x0043f530); r_esp += 8; return;
}

void f_0043f575(void) /* FUN_0043f575 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f575);
    /* 0043f575: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f576: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f578: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f579: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f57c: mov dword ptr [0x6f666c], 0 */ W32((u32)(0x6f666cu), 0x0u);
    /* 0043f586: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f588: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f589: ret  */ FN_RET(0x0043f575); r_esp += 4; return;
}

void f_0043f58a(void) /* FUN_0043f58a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f58a);
    /* 0043f58a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f58b: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f58d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f58e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f591: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f594: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043f597: call 0x5edd97 */ r_esp -= 4; W32(r_esp, 0x43f59cu); f_005edd97();
    /* 0043f59c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f59e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f59f: ret  */ FN_RET(0x0043f58a); r_esp += 4; return;
}

void f_0043f5a0(void) /* FUN_0043f5a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f5a0);
    /* 0043f5a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f5a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043f5a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f5a9: cmp dword ptr [0x6f5fec], 0 */ {  u32 a = R32((u32)(0x6f5fecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f5b0: je 0x43f5bf */ if (fZ) goto L_0043f5bf;
L_0043f5b2:; BB(0x0043f5b2);
    /* 0043f5b2: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043f5b7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0043f5ba: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043f5bd: jmp 0x43f5c6 */ goto L_0043f5c6;
L_0043f5bf:; BB(0x0043f5bf);
    /* 0043f5bf: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0043f5c6:; BB(0x0043f5c6);
    /* 0043f5c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f5c9: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f5cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f5cc: ret  */ FN_RET(0x0043f5a0); r_esp += 4; return;
}

void f_0043f5cd(void) /* FUN_0043f5cd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f5cd);
    /* 0043f5cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5ce: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f5d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5d1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f5d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043f5d6: cmp dword ptr [0x6f5fec], 0 */ {  u32 a = R32((u32)(0x6f5fecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f5dd: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043f5e0: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f5e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f5e3: ret  */ FN_RET(0x0043f5cd); r_esp += 4; return;
}

void f_0043f5e4(void) /* FUN_0043f5e4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f5e4);
    /* 0043f5e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f5e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5e8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f5eb: cmp dword ptr [0x6f5fec], 0 */ {  u32 a = R32((u32)(0x6f5fecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f5f2: jne 0x43f5f9 */ if (!fZ) goto L_0043f5f9;
L_0043f5f4:; BB(0x0043f5f4);
    /* 0043f5f4: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0043f5f7: jmp 0x43f5fc */ goto L_0043f5fc;
L_0043f5f9:; BB(0x0043f5f9);
    /* 0043f5f9: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_0043f5fc:; BB(0x0043f5fc);
    /* 0043f5fc: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f5fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f5ff: ret  */ FN_RET(0x0043f5e4); r_esp += 4; return;
}

void f_0043f600(void) /* FUN_0043f600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f600);
    /* 0043f600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f601: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f607: cmp dword ptr [0x6f5fec], 0 */ {  u32 a = R32((u32)(0x6f5fecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f60e: jne 0x43f614 */ if (!fZ) goto L_0043f614;
L_0043f610:; BB(0x0043f610);
    /* 0043f610: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043f612: jmp 0x43f619 */ goto L_0043f619;
L_0043f614:; BB(0x0043f614);
    /* 0043f614: mov eax, 1 */ r_eax = 0x1u;
L_0043f619:; BB(0x0043f619);
    /* 0043f619: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f61b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f61c: ret  */ FN_RET(0x0043f600); r_esp += 4; return;
}

void f_0043f61d(void) /* FUN_0043f61d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f61d);
    /* 0043f61d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f61e: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f620: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043f626: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 0043f62c: movsx eax, byte ptr [0x6f6384] */ r_eax = (u32)(i32)(i8)R8((u32)(0x6f6384u));
    /* 0043f633: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f636: je 0x43f645 */ if (fZ) goto L_0043f645;
L_0043f638:; BB(0x0043f638);
    /* 0043f638: movsx ax, byte ptr [0x6f6384] */ r_eax = (r_eax & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(0x6f6384u))) & 0xffffu);
    /* 0043f640: jmp 0x43f6e3 */ goto L_0043f6e3;
L_0043f645:; BB(0x0043f645);
    /* 0043f645: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 0043f64b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f64c: push 0x654308 */ { u32 v = 0x654308u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f651: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 0043f657: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0043f65a: call 0x5ed4d3 */ r_esp -= 4; W32(r_esp, 0x43f65fu); f_005ed4d3();
    /* 0043f65f: mov byte ptr [0x6f6384], 0x3c */ W8((u32)(0x6f6384u), 0x3cu);
    /* 0043f666: push 0x654310 */ { u32 v = 0x654310u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f66b: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 0043f671: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f672: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x43f677u); f_00624720();
    /* 0043f677: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f67a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f67c: je 0x43f685 */ if (fZ) goto L_0043f685;
L_0043f67e:; BB(0x0043f67e);
    /* 0043f67e: mov byte ptr [0x6f6384], 0x3d */ W8((u32)(0x6f6384u), 0x3du);
L_0043f685:; BB(0x0043f685);
    /* 0043f685: push 0x654318 */ { u32 v = 0x654318u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f68a: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 0043f690: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f691: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x43f696u); f_00624720();
    /* 0043f696: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f699: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f69b: je 0x43f6a4 */ if (fZ) goto L_0043f6a4;
L_0043f69d:; BB(0x0043f69d);
    /* 0043f69d: mov byte ptr [0x6f6384], 0x3e */ W8((u32)(0x6f6384u), 0x3eu);
L_0043f6a4:; BB(0x0043f6a4);
    /* 0043f6a4: push 0x654320 */ { u32 v = 0x654320u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f6a9: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 0043f6af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f6b0: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x43f6b5u); f_00624720();
    /* 0043f6b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f6b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f6ba: jne 0x43f6d4 */ if (!fZ) goto L_0043f6d4;
L_0043f6bc:; BB(0x0043f6bc);
    /* 0043f6bc: push 0x654328 */ { u32 v = 0x654328u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f6c1: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 0043f6c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f6c8: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x43f6cdu); f_00624720();
    /* 0043f6cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f6d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f6d2: je 0x43f6db */ if (fZ) goto L_0043f6db;
L_0043f6d4:; BB(0x0043f6d4);
    /* 0043f6d4: mov byte ptr [0x6f6384], 0x3f */ W8((u32)(0x6f6384u), 0x3fu);
L_0043f6db:; BB(0x0043f6db);
    /* 0043f6db: movsx ax, byte ptr [0x6f6384] */ r_eax = (r_eax & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(0x6f6384u))) & 0xffffu);
L_0043f6e3:; BB(0x0043f6e3);
    /* 0043f6e3: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f6e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f6e6: ret  */ FN_RET(0x0043f61d); r_esp += 4; return;
}

void f_0043f6e7(void) /* FUN_0043f6e7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f6e7);
    /* 0043f6e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f6e8: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f6ea: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043f6f0: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 0043f6f6: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 0043f6fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f6fd: push 0x654330 */ { u32 v = 0x654330u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f702: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 0043f708: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0043f70b: call 0x5ed4d3 */ r_esp -= 4; W32(r_esp, 0x43f710u); f_005ed4d3();
    /* 0043f710: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 0043f716: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f717: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043f71d: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x43f722u); f_005da413();
    /* 0043f722: mov byte ptr [0x6f6384], 0x3c */ W8((u32)(0x6f6384u), 0x3cu);
    /* 0043f729: push 0x654338 */ { u32 v = 0x654338u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f72e: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 0043f734: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f735: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x43f73au); f_00624720();
    /* 0043f73a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f73d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f73f: je 0x43f748 */ if (fZ) goto L_0043f748;
L_0043f741:; BB(0x0043f741);
    /* 0043f741: mov byte ptr [0x6f6384], 0x3d */ W8((u32)(0x6f6384u), 0x3du);
L_0043f748:; BB(0x0043f748);
    /* 0043f748: push 0x654340 */ { u32 v = 0x654340u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f74d: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 0043f753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f754: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x43f759u); f_00624720();
    /* 0043f759: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f75c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f75e: je 0x43f767 */ if (fZ) goto L_0043f767;
L_0043f760:; BB(0x0043f760);
    /* 0043f760: mov byte ptr [0x6f6384], 0x3e */ W8((u32)(0x6f6384u), 0x3eu);
L_0043f767:; BB(0x0043f767);
    /* 0043f767: push 0x654348 */ { u32 v = 0x654348u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f76c: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 0043f772: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f773: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x43f778u); f_00624720();
    /* 0043f778: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f77b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f77d: jne 0x43f797 */ if (!fZ) goto L_0043f797;
L_0043f77f:; BB(0x0043f77f);
    /* 0043f77f: push 0x654350 */ { u32 v = 0x654350u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f784: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 0043f78a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f78b: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x43f790u); f_00624720();
    /* 0043f790: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f793: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f795: je 0x43f79e */ if (fZ) goto L_0043f79e;
L_0043f797:; BB(0x0043f797);
    /* 0043f797: mov byte ptr [0x6f6384], 0x3f */ W8((u32)(0x6f6384u), 0x3fu);
L_0043f79e:; BB(0x0043f79e);
    /* 0043f79e: movsx ecx, byte ptr [0x6f6384] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x6f6384u));
    /* 0043f7a5: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
    /* 0043f7ab: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0043f7b1: sub edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043f7b4: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 0043f7ba: cmp dword ptr [ebp - 0x108], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043f7c1: ja 0x43f810 */ if ((!fC&&!fZ)) goto L_0043f810;
L_0043f7c3:; BB(0x0043f7c3);
    /* 0043f7c3: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 0043f7c9: jmp dword ptr [eax*4 + 0x43f814] */ { u32 t = R32((u32)(r_eax*4+0x43f814u)); switch (t) { case 0x43f7d0u: goto L_0043f7d0; case 0x43f7dfu: goto L_0043f7df; case 0x43f7eeu: goto L_0043f7ee; case 0x43f800u: goto L_0043f800; default: UNSUP(0x0043f7c9, "jump table entry is not a known target"); } }
L_0043f7d0:; BB(0x0043f7d0);
    /* 0043f7d0: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f7d2: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043f7d8: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x43f7ddu); f_0045d8fe();
    /* 0043f7dd: jmp 0x43f810 */ goto L_0043f810;
L_0043f7df:; BB(0x0043f7df);
    /* 0043f7df: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f7e1: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043f7e7: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x43f7ecu); f_0045d8fe();
    /* 0043f7ec: jmp 0x43f810 */ goto L_0043f810;
L_0043f7ee:; BB(0x0043f7ee);
    /* 0043f7ee: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f7f3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043f7f9: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x43f7feu); f_0045d8fe();
    /* 0043f7fe: jmp 0x43f810 */ goto L_0043f810;
L_0043f800:; BB(0x0043f800);
    /* 0043f800: push 0x9c4 */ { u32 v = 0x9c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f805: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043f80b: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x43f810u); f_0045d8fe();
L_0043f810:; BB(0x0043f810);
    /* 0043f810: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f812: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f813: ret  */ FN_RET(0x0043f6e7); r_esp += 4; return;
}

void f_0043f824(void) /* FUN_0043f824 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f824);
    /* 0043f824: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f825: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f827: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043f82a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043f82d: mov byte ptr [0x6f6384], 0xff */ W8((u32)(0x6f6384u), 0xffu);
    /* 0043f834: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043f837: call 0x43f6e7 */ r_esp -= 4; W32(r_esp, 0x43f83cu); f_0043f6e7();
    /* 0043f83c: mov byte ptr [0x6f6385], 0 */ W8((u32)(0x6f6385u), 0x0u);
    /* 0043f843: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043f849: jmp 0x43f857 */ goto L_0043f857;
L_0043f84b:; BB(0x0043f84b);
    /* 0043f84b: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0043f84f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0043f853: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0043f857:; BB(0x0043f857);
    /* 0043f857: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f85b: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f85e: jge 0x43f977 */ if ((fS==fO)) goto L_0043f977;
L_0043f864:; BB(0x0043f864);
    /* 0043f864: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f868: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f86e: mov byte ptr [edx + 0x6f638c], 0 */ W8((u32)(r_edx+0x6f638cu), 0x0u);
    /* 0043f875: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f879: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f87f: mov byte ptr [eax + 0x6f638d], 0 */ W8((u32)(r_eax+0x6f638du), 0x0u);
    /* 0043f886: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f88a: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f890: mov byte ptr [ecx + 0x6f638e], 0 */ W8((u32)(r_ecx+0x6f638eu), 0x0u);
    /* 0043f897: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f89b: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f8a1: mov al, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0043f8a4: mov byte ptr [edx + 0x6f6390], al */ W8((u32)(r_edx+0x6f6390u), (u8)r_eax);
    /* 0043f8aa: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f8ae: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f8b4: mov byte ptr [ecx + 0x6f6391], 0 */ W8((u32)(r_ecx+0x6f6391u), 0x0u);
    /* 0043f8bb: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f8bf: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f8c5: mov byte ptr [edx + 0x6f6392], 0 */ W8((u32)(r_edx+0x6f6392u), 0x0u);
    /* 0043f8cc: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f8d0: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f8d6: mov byte ptr [eax + 0x6f638f], 0 */ W8((u32)(r_eax+0x6f638fu), 0x0u);
    /* 0043f8dd: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f8e1: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f8e7: mov byte ptr [ecx + 0x6f6393], 0 */ W8((u32)(r_ecx+0x6f6393u), 0x0u);
    /* 0043f8ee: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f8f2: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f8f8: mov byte ptr [edx + 0x6f6394], 0 */ W8((u32)(r_edx+0x6f6394u), 0x0u);
    /* 0043f8ff: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f903: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f909: mov dword ptr [eax + 0x6f63a4], 0xffffffff */ W32((u32)(r_eax+0x6f63a4u), 0xffffffffu);
    /* 0043f913: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043f919: jmp 0x43f927 */ goto L_0043f927;
L_0043f91b:; BB(0x0043f91b);
    /* 0043f91b: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0043f91f: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0043f923: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_0043f927:; BB(0x0043f927);
    /* 0043f927: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0043f92b: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f92e: jge 0x43f961 */ if ((fS==fO)) goto L_0043f961;
L_0043f930:; BB(0x0043f930);
    /* 0043f930: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f934: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f93a: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0043f93e: mov byte ptr [eax + ecx + 0x6f63a8], 0xff */ W8((u32)(r_eax+r_ecx+0x6f63a8u), 0xffu);
    /* 0043f946: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f94a: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f950: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0043f954: mov dword ptr [edx + eax*4 + 0x6f63c4], 0xffffffff */ W32((u32)(r_edx+r_eax*4+0x6f63c4u), 0xffffffffu);
    /* 0043f95f: jmp 0x43f91b */ goto L_0043f91b;
L_0043f961:; BB(0x0043f961);
    /* 0043f961: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043f965: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f96b: mov byte ptr [ecx + 0x6f6441], 0 */ W8((u32)(r_ecx+0x6f6441u), 0x0u);
    /* 0043f972: jmp 0x43f84b */ goto L_0043f84b;
L_0043f977:; BB(0x0043f977);
    /* 0043f977: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f979: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f97a: ret  */ FN_RET(0x0043f824); r_esp += 4; return;
}

void f_0043f97b(void) /* FUN_0043f97b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f97b);
    /* 0043f97b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f97c: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f97e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f97f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f982: movsx ax, byte ptr [0x6f6385] */ r_eax = (r_eax & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(0x6f6385u))) & 0xffffu);
    /* 0043f98a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f98c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f98d: ret  */ FN_RET(0x0043f97b); r_esp += 4; return;
}

void f_0043f98e(void) /* FUN_0043f98e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f98e);
    /* 0043f98e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f98f: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f991: sub esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043f997: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043f998: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043f999: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 0043f99f: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 0043f9a5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043f9a8: mov esi, dword ptr [ecx + 0xc] */ r_esi = R32((u32)(r_ecx+0xcu));
    /* 0043f9ab: imul esi, esi, 0xb8 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xb8u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f9b1: add esi, 0x6f638c */ {  u32 a = r_esi; u32 b = 0x6f638cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043f9b7: mov ecx, 0x2e */ r_ecx = 0x2eu;
    /* 0043f9bc: lea edi, [ebp - 0xb8] */ r_edi = (u32)(r_ebp+0xffffff48u);
    /* 0043f9c2: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0043f9c4: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 0043f9ca: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043f9cd: mov cl, byte ptr [eax + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xcu))) & 0xffu);
    /* 0043f9d0: mov byte ptr [ebp - 0xb4], cl */ W8((u32)(r_ebp+0xffffff4cu), (u8)r_ecx);
    /* 0043f9d6: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 0043f9dc: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0043f9df: call 0x5edf73 */ r_esp -= 4; W32(r_esp, 0x43f9e4u); f_005edf73();
    /* 0043f9e4: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0043f9ea: mov byte ptr [ebp - 3], 0 */ W8((u32)(r_ebp+0xfffffffdu), 0x0u);
    /* 0043f9ee: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043f9f4: call 0x45cd8e */ r_esp -= 4; W32(r_esp, 0x43f9f9u); f_0045cd8e();
    /* 0043f9f9: mov byte ptr [ebp - 0xb5], al */ W8((u32)(r_ebp+0xffffff4bu), (u8)r_eax);
    /* 0043f9ff: mov byte ptr [ebp - 0xb7], 1 */ W8((u32)(r_ebp+0xffffff49u), 0x1u);
    /* 0043fa06: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa0b: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 0043fa11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa12: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa14: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0043fa1a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0043fa1d: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x43fa22u); f_005eccbe();
    /* 0043fa22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043fa23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043fa24: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fa26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fa27: ret  */ FN_RET(0x0043f98e); r_esp += 4; return;
}

void f_0043fa28(void) /* FUN_0043fa28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fa28);
    /* 0043fa28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa29: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fa2b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043fa2e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043fa31: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fa34: movsx cx, byte ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(r_eax+0x4u))) & 0xffffu);
    /* 0043fa39: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
    /* 0043fa3d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043fa44: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043fa4b: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043fa4f: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fa55: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fa58: mov cl, byte ptr [eax + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 0043fa5b: mov byte ptr [edx + 0x6f638e], cl */ W8((u32)(r_edx+0x6f638eu), (u8)r_ecx);
    /* 0043fa61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa63: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa65: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043fa69: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043fa6e: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043fa72: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0043fa75: call 0x41f510 */ r_esp -= 4; W32(r_esp, 0x43fa7au); f_0041f510();
    /* 0043fa7a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043fa7d: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043fa80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa81: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043fa85: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043fa8b: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043fa8f: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0043fa92: call 0x429fd4 */ r_esp -= 4; W32(r_esp, 0x43fa97u); f_00429fd4();
    /* 0043fa97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fa9a: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043fa9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa9e: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043faa2: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043faa8: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043faac: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043faaf: call 0x420814 */ r_esp -= 4; W32(r_esp, 0x43fab4u); f_00420814();
    /* 0043fab4: mov ecx, eax */ r_ecx = r_eax;
    /* 0043fab6: call 0x422468 */ r_esp -= 4; W32(r_esp, 0x43fabbu); f_00422468();
    /* 0043fabb: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043fabf: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043fac5: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043fac9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043facc: call 0x41fb49 */ r_esp -= 4; W32(r_esp, 0x43fad1u); f_0041fb49();
    /* 0043fad1: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043fad5: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fadb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043fade: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0043fae1: mov dword ptr [ecx + 0x6f63a4], eax */ W32((u32)(r_ecx+0x6f63a4u), r_eax);
    /* 0043fae7: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043faeb: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043faf1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043faf4: mov al, byte ptr [edx + 0xb5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xb5u))) & 0xffu);
    /* 0043fafa: mov byte ptr [ecx + 0x6f6441], al */ W8((u32)(r_ecx+0x6f6441u), (u8)r_eax);
    /* 0043fb00: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fb03: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0043fb06: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0043fb09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fb0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fb0d: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0043fb10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fb11: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043fb15: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043fb1b: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043fb1f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043fb22: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x43fb27u); f_00426561();
    /* 0043fb27: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043fb2b: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fb31: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043fb34: mov al, byte ptr [edx + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x3u))) & 0xffu);
    /* 0043fb37: mov byte ptr [ecx + 0x6f638f], al */ W8((u32)(r_ecx+0x6f638fu), (u8)r_eax);
    /* 0043fb3d: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043fb41: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fb47: movsx edx, byte ptr [ecx + 0x6f638f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x6f638fu));
    /* 0043fb4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fb4f: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043fb53: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043fb59: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043fb5d: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0043fb60: call 0x42085e */ r_esp -= 4; W32(r_esp, 0x43fb65u); f_0042085e();
    /* 0043fb65: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043fb69: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fb6f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fb72: mov dl, byte ptr [ecx + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1u))) & 0xffu);
    /* 0043fb75: mov byte ptr [eax + 0x6f638d], dl */ W8((u32)(r_eax+0x6f638du), (u8)r_edx);
    /* 0043fb7b: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043fb7f: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fb85: movsx ecx, byte ptr [eax + 0x6f638d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x6f638du));
    /* 0043fb8c: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043fb8f: jl 0x43fbd4 */ if ((fS!=fO)) goto L_0043fbd4;
L_0043fb91:; BB(0x0043fb91);
    /* 0043fb91: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043fb94: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0043fb97: call 0x5ed5c3 */ r_esp -= 4; W32(r_esp, 0x43fb9cu); f_005ed5c3();
    /* 0043fb9c: push 0x2030 */ { u32 v = 0x2030u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fba1: push 0x654358 */ { u32 v = 0x654358u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fba6: push 0x654368 */ { u32 v = 0x654368u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fbab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fbad: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x43fbb2u); f_0060f9f3();
    /* 0043fbb2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043fbb5: push 0x2330 */ { u32 v = 0x2330u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fbba: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0043fbbf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043fbc1: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043fbc7: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x43fbcau); call_ind(t); }
    /* 0043fbca: mov dword ptr [0x6f97e0], 1 */ W32((u32)(0x6f97e0u), 0x1u);
L_0043fbd4:; BB(0x0043fbd4);
    /* 0043fbd4: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fbd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fbd7: ret 4 */ FN_RET(0x0043fa28); r_esp += 8; return;
}

void f_0043fbda(void) /* FUN_0043fbda */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fbda);
    /* 0043fbda: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fbdb: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fbdd: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043fbe0: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043fbe3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fbe6: movsx cx, byte ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(r_eax+0x4u))) & 0xffffu);
    /* 0043fbeb: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
    /* 0043fbef: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043fbf6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043fbfd: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0043fc01: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fc07: mov byte ptr [edx + 0x6f638e], 0 */ W8((u32)(r_edx+0x6f638eu), 0x0u);
    /* 0043fc0e: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0043fc12: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fc18: mov byte ptr [eax + 0x6f6393], 0 */ W8((u32)(r_eax+0x6f6393u), 0x0u);
    /* 0043fc1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc21: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc23: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0043fc27: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043fc2d: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043fc31: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043fc34: call 0x41f510 */ r_esp -= 4; W32(r_esp, 0x43fc39u); f_0041f510();
    /* 0043fc39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc3b: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0043fc3f: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043fc45: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043fc49: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0043fc4c: call 0x420532 */ r_esp -= 4; W32(r_esp, 0x43fc51u); f_00420532();
    /* 0043fc51: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0043fc55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc56: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043fc5c: call 0x43c97a */ r_esp -= 4; W32(r_esp, 0x43fc61u); f_0043c97a();
    /* 0043fc61: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0043fc65: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fc6b: mov dword ptr [edx + 0x6f63a4], 0xffffffff */ W32((u32)(r_edx+0x6f63a4u), 0xffffffffu);
    /* 0043fc75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc79: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0043fc7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc7d: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0043fc81: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043fc87: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043fc8b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043fc8e: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x43fc93u); f_00426561();
    /* 0043fc93: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0043fc97: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fc9d: mov byte ptr [ecx + 0x6f6441], 0 */ W8((u32)(r_ecx+0x6f6441u), 0x0u);
    /* 0043fca4: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043fcaa: jmp 0x43fcb8 */ goto L_0043fcb8;
L_0043fcac:; BB(0x0043fcac);
    /* 0043fcac: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 0043fcb0: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0043fcb4: mov word ptr [ebp - 0x14], dx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_edx);
L_0043fcb8:; BB(0x0043fcb8);
    /* 0043fcb8: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0043fcbc: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043fcbf: jge 0x43fd08 */ if ((fS==fO)) goto L_0043fd08;
L_0043fcc1:; BB(0x0043fcc1);
    /* 0043fcc1: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0043fcc5: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fccb: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0043fccf: mov byte ptr [ecx + edx + 0x6f63a8], 0xff */ W8((u32)(r_ecx+r_edx+0x6f63a8u), 0xffu);
    /* 0043fcd7: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0043fcdb: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fce1: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0043fce5: mov dword ptr [eax + ecx*4 + 0x6f63c4], 0 */ W32((u32)(r_eax+r_ecx*4+0x6f63c4u), 0x0u);
    /* 0043fcf0: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0043fcf4: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fcfa: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0043fcfe: mov byte ptr [edx + eax + 0x6f6428], 0 */ W8((u32)(r_edx+r_eax+0x6f6428u), 0x0u);
    /* 0043fd06: jmp 0x43fcac */ goto L_0043fcac;
L_0043fd08:; BB(0x0043fd08);
    /* 0043fd08: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043fd0e: jmp 0x43fd1c */ goto L_0043fd1c;
L_0043fd10:; BB(0x0043fd10);
    /* 0043fd10: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 0043fd14: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0043fd18: mov word ptr [ebp - 0x14], cx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_ecx);
L_0043fd1c:; BB(0x0043fd1c);
    /* 0043fd1c: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0043fd20: cmp edx, 0x54 */ {  u32 a = r_edx; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043fd23: jge 0x43fd54 */ if ((fS==fO)) goto L_0043fd54;
L_0043fd25:; BB(0x0043fd25);
    /* 0043fd25: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0043fd29: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043fd2f: mov edx, dword ptr [ecx + eax*4 + 0x30] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0043fd33: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0043fd37: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043fd3a: mov ecx, dword ptr [edx + eax + 0x6c] */ r_ecx = R32((u32)(r_edx+r_eax+0x6cu));
    /* 0043fd3e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043fd41: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fd45: je 0x43fd52 */ if (fZ) goto L_0043fd52;
L_0043fd47:; BB(0x0043fd47);
    /* 0043fd47: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043fd4a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043fd4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043fd4f: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x43fd52u); call_ind(t); }
L_0043fd52:; BB(0x0043fd52);
    /* 0043fd52: jmp 0x43fd10 */ goto L_0043fd10;
L_0043fd54:; BB(0x0043fd54);
    /* 0043fd54: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fd56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fd57: ret 4 */ FN_RET(0x0043fbda); r_esp += 8; return;
}

void f_0043fd5a(void) /* FUN_0043fd5a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fd5a);
    /* 0043fd5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd5b: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fd5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd5e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd5f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd60: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043fd63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fd66: movsx ecx, byte ptr [eax + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x2u));
    /* 0043fd6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fd6c: jne 0x43fd7c */ if (!fZ) goto L_0043fd7c;
L_0043fd6e:; BB(0x0043fd6e);
    /* 0043fd6e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043fd71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043fd75: call 0x43fbda */ r_esp -= 4; W32(r_esp, 0x43fd7au); f_0043fbda();
    /* 0043fd7a: jmp 0x43fd93 */ goto L_0043fd93;
L_0043fd7c:; BB(0x0043fd7c);
    /* 0043fd7c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fd7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043fd83: call 0x43fa28 */ r_esp -= 4; W32(r_esp, 0x43fd88u); f_0043fa28();
    /* 0043fd88: cmp dword ptr [0x6f97e0], 0 */ {  u32 a = R32((u32)(0x6f97e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fd8f: je 0x43fd93 */ if (fZ) goto L_0043fd93;
L_0043fd91:; BB(0x0043fd91);
    /* 0043fd91: jmp 0x43fdb0 */ goto L_0043fdb0;
L_0043fd93:; BB(0x0043fd93);
    /* 0043fd93: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0043fd96: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fd99: movsx edi, byte ptr [ecx + 4] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ecx+0x4u));
    /* 0043fd9d: imul edi, edi, 0xb8 */ { i64 t = (i64)(i32)r_edi * (i64)(i32)0xb8u; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fda3: add edi, 0x6f638c */ {  u32 a = r_edi; u32 b = 0x6f638cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0043fda9: mov ecx, 0x2e */ r_ecx = 0x2eu;
    /* 0043fdae: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
L_0043fdb0:; BB(0x0043fdb0);
    /* 0043fdb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043fdb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043fdb2: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fdb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fdb5: ret 4 */ FN_RET(0x0043fd5a); r_esp += 8; return;
}

void f_0043fdb8(void) /* FUN_0043fdb8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fdb8);
    /* 0043fdb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fdb9: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fdbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fdbc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043fdbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fdc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fdc3: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fdc5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043fdc8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043fdcb: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x43fdd0u); f_005eccbe();
    /* 0043fdd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043fdd2: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fdd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fdd5: ret 4 */ FN_RET(0x0043fdb8); r_esp += 8; return;
}

void f_0043fdd8(void) /* FUN_0043fdd8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fdd8);
    /* 0043fdd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fdd9: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fddb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fddc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043fddf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043fde1: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fde3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fde4: ret 4 */ FN_RET(0x0043fdd8); r_esp += 8; return;
}

void f_0043fde7(void) /* FUN_0043fde7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fde7);
    /* 0043fde7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fde8: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fdea: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043fded: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043fdf0: mov dword ptr [ebp - 0x10], 0x64 */ W32((u32)(r_ebp+0xfffffff0u), 0x64u);
    /* 0043fdf7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0043fdfd: call 0x45cd8e */ r_esp -= 4; W32(r_esp, 0x43fe02u); f_0045cd8e();
    /* 0043fe02: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043fe05: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe07: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0043fe0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe0b: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043fe10: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0043fe13: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x43fe18u); f_005eccbe();
    /* 0043fe18: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fe1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fe1b: ret  */ FN_RET(0x0043fde7); r_esp += 4; return;
}

void f_0043fe1c(void) /* FUN_0043fe1c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fe1c);
    /* 0043fe1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe1d: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fe1f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043fe22: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043fe25: mov dword ptr [ebp - 0x10], 0x65 */ W32((u32)(r_ebp+0xfffffff0u), 0x65u);
    /* 0043fe2c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043fe2f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043fe32: call 0x5edf73 */ r_esp -= 4; W32(r_esp, 0x43fe37u); f_005edf73();
    /* 0043fe37: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043fe3a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe3c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0043fe3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe40: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe42: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043fe45: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0043fe48: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x43fe4du); f_005eccbe();
    /* 0043fe4d: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fe4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fe50: ret  */ FN_RET(0x0043fe1c); r_esp += 4; return;
}

void f_0043fe51(void) /* FUN_0043fe51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fe51);
    /* 0043fe51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe52: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fe54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe55: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043fe58: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0043fe5c: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fe62: movsx eax, byte ptr [eax + 0x6f6441] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x6f6441u));
    /* 0043fe69: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fe6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fe6c: ret 4 */ FN_RET(0x0043fe51); r_esp += 8; return;
}

void f_0043fe6f(void) /* FUN_0043fe6f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fe6f);
    /* 0043fe6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe70: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fe72: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043fe75: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043fe78: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043fe7e: jmp 0x43fe8c */ goto L_0043fe8c;
L_0043fe80:; BB(0x0043fe80);
    /* 0043fe80: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0043fe84: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0043fe88: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0043fe8c:; BB(0x0043fe8c);
    /* 0043fe8c: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043fe90: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043fe93: jge 0x43fee7 */ if ((fS==fO)) goto L_0043fee7;
L_0043fe95:; BB(0x0043fe95);
    /* 0043fe95: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043fe99: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fe9f: movsx eax, byte ptr [edx + 0x6f638e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6f638eu));
    /* 0043fea6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fea9: jne 0x43fee5 */ if (!fZ) goto L_0043fee5;
L_0043feab:; BB(0x0043feab);
    /* 0043feab: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043feaf: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043feb5: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043feba: je 0x43fee5 */ if (fZ) goto L_0043fee5;
L_0043febc:; BB(0x0043febc);
    /* 0043febc: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043fec0: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043fec6: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043feca: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0043fecd: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fed0: jne 0x43fee5 */ if (!fZ) goto L_0043fee5;
L_0043fed2:; BB(0x0043fed2);
    /* 0043fed2: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043fed6: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fedc: movsx eax, byte ptr [ecx + 0x6f6441] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x6f6441u));
    /* 0043fee3: jmp 0x43fee9 */ goto L_0043fee9;
L_0043fee5:; BB(0x0043fee5);
    /* 0043fee5: jmp 0x43fe80 */ goto L_0043fe80;
L_0043fee7:; BB(0x0043fee7);
    /* 0043fee7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043fee9:; BB(0x0043fee9);
    /* 0043fee9: mov esp, ebp */ r_esp = r_ebp;
    /* 0043feeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043feec: ret 4 */ FN_RET(0x0043fe6f); r_esp += 8; return;
}

void f_0043feef(void) /* FUN_0043feef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043feef);
    /* 0043feef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fef0: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fef2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043fef5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043fef8: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043fefe: jmp 0x43ff0c */ goto L_0043ff0c;
L_0043ff00:; BB(0x0043ff00);
    /* 0043ff00: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0043ff04: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0043ff08: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0043ff0c:; BB(0x0043ff0c);
    /* 0043ff0c: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043ff10: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ff13: jge 0x43ffb7 */ if ((fS==fO)) goto L_0043ffb7;
L_0043ff19:; BB(0x0043ff19);
    /* 0043ff19: cmp dword ptr [0x6f5fec], 0 */ {  u32 a = R32((u32)(0x6f5fecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ff20: je 0x43ffb2 */ if (fZ) goto L_0043ffb2;
L_0043ff26:; BB(0x0043ff26);
    /* 0043ff26: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043ff2a: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043ff2f: cmp dword ptr [eax + edx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ff34: je 0x43ffb2 */ if (fZ) goto L_0043ffb2;
L_0043ff36:; BB(0x0043ff36);
    /* 0043ff36: movsx ecx, byte ptr [0x6f6385] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x6f6385u));
    /* 0043ff3d: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ff40: jne 0x43ff85 */ if (!fZ) goto L_0043ff85;
L_0043ff42:; BB(0x0043ff42);
    /* 0043ff42: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043ff46: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043ff4c: movsx eax, byte ptr [edx + 0x6f6392] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6f6392u));
    /* 0043ff53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ff55: je 0x43ff85 */ if (fZ) goto L_0043ff85;
L_0043ff57:; BB(0x0043ff57);
    /* 0043ff57: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043ff5b: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043ff61: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043ff65: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 0043ff6b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043ff6f: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0043ff74: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043ff78: mov eax, dword ptr [edx + 0x148] */ r_eax = R32((u32)(r_edx+0x148u));
    /* 0043ff7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043ff80: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x43ff83u); call_ind(t); }
    /* 0043ff83: jmp 0x43ffb2 */ goto L_0043ffb2;
L_0043ff85:; BB(0x0043ff85);
    /* 0043ff85: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043ff89: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0043ff8f: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0043ff93: mov ecx, dword ptr [edx + 0x148] */ r_ecx = R32((u32)(r_edx+0x148u));
    /* 0043ff99: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0043ff9d: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0043ffa3: mov eax, dword ptr [edx + eax*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20u));
    /* 0043ffa7: mov edx, dword ptr [eax + 0x148] */ r_edx = R32((u32)(r_eax+0x148u));
    /* 0043ffad: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043ffaf: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x43ffb2u); call_ind(t); }
L_0043ffb2:; BB(0x0043ffb2);
    /* 0043ffb2: jmp 0x43ff00 */ goto L_0043ff00;
L_0043ffb7:; BB(0x0043ffb7);
    /* 0043ffb7: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ffb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ffba: ret  */ FN_RET(0x0043feef); r_esp += 4; return;
}

void f_0043ffbb(void) /* FUN_0043ffbb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043ffbb);
    /* 0043ffbb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ffbc: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ffbe: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043ffc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043ffc2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043ffc3: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043ffc6: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0043ffcd: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0043ffd4: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0043ffda: jmp 0x43ffe8 */ goto L_0043ffe8;
L_0043ffdc:; BB(0x0043ffdc);
    /* 0043ffdc: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0043ffe0: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0043ffe4: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_0043ffe8:; BB(0x0043ffe8);
    /* 0043ffe8: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043ffec: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ffef: jge 0x440039 */ if ((fS==fO)) goto L_00440039;
L_0043fff1:; BB(0x0043fff1);
    /* 0043fff1: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0043fff5: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fffb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fffe: movsx ecx, byte ptr [eax + edx + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xcu));
    /* 00440003: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440005: je 0x440037 */ if (fZ) goto L_00440037;
L_00440007:; BB(0x00440007);
    /* 00440007: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0044000b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044000e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00440011: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440014: jne 0x440018 */ if (!fZ) goto L_00440018;
L_00440016:; BB(0x00440016);
    /* 00440016: jmp 0x440039 */ goto L_00440039;
L_00440018:; BB(0x00440018);
    /* 00440018: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0044001c: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440022: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00440025: lea ecx, [eax + edx + 0xc] */ r_ecx = (u32)(r_eax+r_edx+0xcu);
    /* 00440029: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044002a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044002d: call 0x43fd5a */ r_esp -= 4; W32(r_esp, 0x440032u); f_0043fd5a();
    /* 00440032: jmp 0x4401fe */ goto L_004401fe;
L_00440037:; BB(0x00440037);
    /* 00440037: jmp 0x43ffdc */ goto L_0043ffdc;
L_00440039:; BB(0x00440039);
    /* 00440039: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0044003c: mov ecx, 0xbb */ r_ecx = 0xbbu;
    /* 00440041: mov edi, 0x6f6380 */ r_edi = 0x6f6380u;
    /* 00440046: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00440048: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0044004e: jmp 0x44005c */ goto L_0044005c;
L_00440050:; BB(0x00440050);
    /* 00440050: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00440054: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00440058: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
L_0044005c:; BB(0x0044005c);
    /* 0044005c: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00440060: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440063: jge 0x4401fe */ if ((fS==fO)) goto L_004401fe;
L_00440069:; BB(0x00440069);
    /* 00440069: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0044006d: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 00440073: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00440077: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044007a: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0044007e: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440084: movsx edx, byte ptr [ecx + 0x6f638e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x6f638eu));
    /* 0044008b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044008d: jne 0x4400a9 */ if (!fZ) goto L_004400a9;
L_0044008f:; BB(0x0044008f);
    /* 0044008f: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00440093: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440099: add eax, 0x6f638c */ {  u32 a = r_eax; u32 b = 0x6f638cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044009e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044009f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004400a2: call 0x43fbda */ r_esp -= 4; W32(r_esp, 0x4400a7u); f_0043fbda();
    /* 004400a7: jmp 0x4400d0 */ goto L_004400d0;
L_004400a9:; BB(0x004400a9);
    /* 004400a9: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004400ad: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004400b3: add ecx, 0x6f638c */ {  u32 a = r_ecx; u32 b = 0x6f638cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004400b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004400ba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004400bd: call 0x43fa28 */ r_esp -= 4; W32(r_esp, 0x4400c2u); f_0043fa28();
    /* 004400c2: cmp dword ptr [0x6f97e0], 0 */ {  u32 a = R32((u32)(0x6f97e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004400c9: je 0x4400d0 */ if (fZ) goto L_004400d0;
L_004400cb:; BB(0x004400cb);
    /* 004400cb: jmp 0x4401fe */ goto L_004401fe;
L_004400d0:; BB(0x004400d0);
    /* 004400d0: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004400d6: jmp 0x4400e4 */ goto L_004400e4;
L_004400d8:; BB(0x004400d8);
    /* 004400d8: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004400dc: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004400e0: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_004400e4:; BB(0x004400e4);
    /* 004400e4: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004400e8: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004400eb: jge 0x4401f9 */ if ((fS==fO)) goto L_004401f9;
L_004400f1:; BB(0x004400f1);
    /* 004400f1: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004400f5: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004400fb: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004400ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00440101: mov al, byte ptr [ecx + edx + 0x6f63a8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0x6f63a8u))) & 0xffu);
    /* 00440108: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044010d: je 0x4401f4 */ if (fZ) goto L_004401f4;
L_00440113:; BB(0x00440113);
    /* 00440113: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00440117: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044011d: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00440121: movzx ax, byte ptr [ecx + edx + 0x6f63a8] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ecx+r_edx+0x6f63a8u))) & 0xffffu);
    /* 0044012a: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0044012e: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00440132: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440138: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0044013c: mov eax, dword ptr [ecx + edx*4 + 0x6f63c4] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x6f63c4u));
    /* 00440143: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00440146: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044014a: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 00440150: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00440154: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00440158: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0044015b: mov edx, dword ptr [eax + ecx + 0x6c] */ r_edx = R32((u32)(r_eax+r_ecx+0x6cu));
    /* 0044015f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00440162: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 00440168: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044016b: mov dword ptr [edx + 0xc8], ecx */ W32((u32)(r_edx+0xc8u), r_ecx);
    /* 00440171: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440175: jne 0x44019b */ if (!fZ) goto L_0044019b;
L_00440177:; BB(0x00440177);
    /* 00440177: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044017b: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00440180: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00440184: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00440188: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0044018b: mov eax, dword ptr [ecx + edx + 0x6c] */ r_eax = R32((u32)(r_ecx+r_edx+0x6cu));
    /* 0044018f: mov dword ptr [eax + 0xd8], 0xffffffff */ W32((u32)(r_eax+0xd8u), 0xffffffffu);
    /* 00440199: jmp 0x4401bd */ goto L_004401bd;
L_0044019b:; BB(0x0044019b);
    /* 0044019b: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0044019f: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004401a3: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 004401a8: mov edx, dword ptr [eax + edx*4 + 0x30] */ r_edx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 004401ac: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004401b0: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004401b3: mov edx, dword ptr [edx + eax + 0x6c] */ r_edx = R32((u32)(r_edx+r_eax+0x6cu));
    /* 004401b7: mov dword ptr [edx + 0xd8], ecx */ W32((u32)(r_edx+0xd8u), r_ecx);
L_004401bd:; BB(0x004401bd);
    /* 004401bd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004401c1: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 004401c7: mov edx, dword ptr [ecx + eax*4 + 0x30] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 004401cb: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004401cf: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004401d2: mov ecx, dword ptr [edx + eax + 0x6c] */ r_ecx = R32((u32)(r_edx+r_eax+0x6cu));
    /* 004401d6: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004401da: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004401dd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004401e1: mov esi, dword ptr [0x6f5fec] */ r_esi = R32((u32)(0x6f5fecu));
    /* 004401e7: mov eax, dword ptr [esi + eax*4 + 0x30] */ r_eax = R32((u32)(r_esi+r_eax*4+0x30u));
    /* 004401eb: mov edx, dword ptr [eax + edx + 0x6c] */ r_edx = R32((u32)(r_eax+r_edx+0x6cu));
    /* 004401ef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004401f1: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x4401f4u); call_ind(t); }
L_004401f4:; BB(0x004401f4);
    /* 004401f4: jmp 0x4400d8 */ goto L_004400d8;
L_004401f9:; BB(0x004401f9);
    /* 004401f9: jmp 0x440050 */ goto L_00440050;
L_004401fe:; BB(0x004401fe);
    /* 004401fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004401ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00440200: mov esp, ebp */ r_esp = r_ebp;
    /* 00440202: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440203: ret 4 */ FN_RET(0x0043ffbb); r_esp += 8; return;
}

void f_00440206(void) /* FUN_00440206 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00440206);
    /* 00440206: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440207: mov ebp, esp */ r_ebp = r_esp;
    /* 00440209: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044020c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0044020f: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00440215: jmp 0x440223 */ goto L_00440223;
L_00440217:; BB(0x00440217);
    /* 00440217: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0044021b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0044021f: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00440223:; BB(0x00440223);
    /* 00440223: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00440227: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044022a: jge 0x440250 */ if ((fS==fO)) goto L_00440250;
L_0044022c:; BB(0x0044022c);
    /* 0044022c: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00440230: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440236: mov byte ptr [edx + 0x6f6391], 0 */ W8((u32)(r_edx+0x6f6391u), 0x0u);
    /* 0044023d: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00440241: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440247: mov byte ptr [eax + 0x6f6392], 0 */ W8((u32)(r_eax+0x6f6392u), 0x0u);
    /* 0044024e: jmp 0x440217 */ goto L_00440217;
L_00440250:; BB(0x00440250);
    /* 00440250: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00440253: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00440256: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00440259: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044025c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0044025f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00440262: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00440268: jmp 0x440276 */ goto L_00440276;
L_0044026a:; BB(0x0044026a);
    /* 0044026a: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0044026e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00440272: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_00440276:; BB(0x00440276);
    /* 00440276: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0044027a: cmp eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044027d: jge 0x440373 */ if ((fS==fO)) goto L_00440373;
L_00440283:; BB(0x00440283);
    /* 00440283: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00440287: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0044028d: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00440291: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00440295: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0044029b: mov eax, dword ptr [edx + eax*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_eax*4+0x30u));
    /* 0044029f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004402a1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4402a4u); call_ind(t); }
    /* 004402a4: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004402a8: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 004402ae: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 004402b2: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x4402b7u); f_00427ecb();
    /* 004402b7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004402ba: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004402be: ja 0x44036e */ if ((!fC&&!fZ)) goto L_0044036e;
L_004402c4:; BB(0x004402c4);
    /* 004402c4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004402c7: jmp dword ptr [edx*4 + 0x440379] */ { u32 t = R32((u32)(r_edx*4+0x440379u)); switch (t) { case 0x4402ceu: goto L_004402ce; case 0x4402f6u: goto L_004402f6; case 0x44031fu: goto L_0044031f; case 0x440347u: goto L_00440347; default: UNSUP(0x004402c7, "jump table entry is not a known target"); } }
L_004402ce:; BB(0x004402ce);
    /* 004402ce: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004402d2: je 0x4402f4 */ if (fZ) goto L_004402f4;
L_004402d4:; BB(0x004402d4);
    /* 004402d4: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004402d8: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 004402de: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 004402e2: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004402e6: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 004402eb: mov edx, dword ptr [eax + edx*4 + 0x30] */ r_edx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 004402ef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004402f1: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4402f4u); call_ind(t); }
L_004402f4:; BB(0x004402f4);
    /* 004402f4: jmp 0x44036e */ goto L_0044036e;
L_004402f6:; BB(0x004402f6);
    /* 004402f6: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004402fa: jne 0x44031d */ if (!fZ) goto L_0044031d;
L_004402fc:; BB(0x004402fc);
    /* 004402fc: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00440300: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 00440306: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0044030a: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0044030e: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 00440314: mov eax, dword ptr [edx + eax*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_eax*4+0x30u));
    /* 00440318: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044031a: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x44031du); call_ind(t); }
L_0044031d:; BB(0x0044031d);
    /* 0044031d: jmp 0x44036e */ goto L_0044036e;
L_0044031f:; BB(0x0044031f);
    /* 0044031f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440323: je 0x440345 */ if (fZ) goto L_00440345;
L_00440325:; BB(0x00440325);
    /* 00440325: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00440329: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0044032f: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 00440333: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00440337: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0044033c: mov edx, dword ptr [eax + edx*4 + 0x30] */ r_edx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00440340: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00440342: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x440345u); call_ind(t); }
L_00440345:; BB(0x00440345);
    /* 00440345: jmp 0x44036e */ goto L_0044036e;
L_00440347:; BB(0x00440347);
    /* 00440347: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044034b: jne 0x44036e */ if (!fZ) goto L_0044036e;
L_0044034d:; BB(0x0044034d);
    /* 0044034d: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00440351: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 00440357: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0044035b: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0044035f: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 00440365: mov eax, dword ptr [edx + eax*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_eax*4+0x30u));
    /* 00440369: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044036b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x44036eu); call_ind(t); }
L_0044036e:; BB(0x0044036e);
    /* 0044036e: jmp 0x44026a */ goto L_0044026a;
L_00440373:; BB(0x00440373);
    /* 00440373: mov esp, ebp */ r_esp = r_ebp;
    /* 00440375: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440376: ret 4 */ FN_RET(0x00440206); r_esp += 8; return;
}

void f_00440389(void) /* FUN_00440389 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00440389);
    /* 00440389: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044038a: mov ebp, esp */ r_ebp = r_esp;
    /* 0044038c: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440392: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
    /* 00440398: mov byte ptr [0x6f6385], 1 */ W8((u32)(0x6f6385u), 0x1u);
    /* 0044039f: mov word ptr [ebp - 0x104], 0 */ W16((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 004403a8: jmp 0x4403bc */ goto L_004403bc;
L_004403aa:; BB(0x004403aa);
    /* 004403aa: mov ax, word ptr [ebp - 0x104] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffefcu))) & 0xffffu);
    /* 004403b1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004403b5: mov word ptr [ebp - 0x104], ax */ W16((u32)(r_ebp+0xfffffefcu), (u16)r_eax);
L_004403bc:; BB(0x004403bc);
    /* 004403bc: movsx ecx, word ptr [ebp - 0x104] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 004403c3: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004403c6: jge 0x440418 */ if ((fS==fO)) goto L_00440418;
L_004403c8:; BB(0x004403c8);
    /* 004403c8: movsx edx, word ptr [ebp - 0x104] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 004403cf: movsx eax, word ptr [ebp - 0x104] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 004403d6: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004403dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004403df: mov dl, byte ptr [ecx + edx + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xcu))) & 0xffu);
    /* 004403e3: mov byte ptr [eax + 0x6f638e], dl */ W8((u32)(r_eax+0x6f638eu), (u8)r_edx);
    /* 004403e9: movsx eax, word ptr [ebp - 0x104] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 004403f0: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004403f6: movsx ecx, byte ptr [eax + 0x6f638e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x6f638eu));
    /* 004403fd: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440400: jne 0x440416 */ if (!fZ) goto L_00440416;
L_00440402:; BB(0x00440402);
    /* 00440402: movsx edx, word ptr [ebp - 0x104] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 00440409: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044040f: mov byte ptr [edx + 0x6f6391], 1 */ W8((u32)(r_edx+0x6f6391u), 0x1u);
L_00440416:; BB(0x00440416);
    /* 00440416: jmp 0x4403aa */ goto L_004403aa;
L_00440418:; BB(0x00440418);
    /* 00440418: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0044041d: mov dword ptr [eax + 0x1d4], 1 */ W32((u32)(r_eax+0x1d4u), 0x1u);
    /* 00440427: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0044042d: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00440430: call 0x40808b */ r_esp -= 4; W32(r_esp, 0x440435u); f_0040808b();
    /* 00440435: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x44043bu); call_ind(t); }
    /* 0044043b: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 00440441: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00440444: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00440449: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044044c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0044044f: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00440452: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00440457: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0044045a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044045b: push 0x6543cc */ { u32 v = 0x6543ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00440460: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 00440466: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440467: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x44046cu); f_00624050();
    /* 0044046c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044046f: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 00440475: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440476: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0044047c: mov edx, dword ptr [ecx + 0x19c] */ r_edx = R32((u32)(r_ecx+0x19cu));
    /* 00440482: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 00440488: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0044048d: mov edx, dword ptr [eax + 0x19c] */ r_edx = R32((u32)(r_eax+0x19cu));
    /* 00440493: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00440499: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044049b: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x44049eu); call_ind(t); }
    /* 0044049e: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 004404a3: mov ecx, dword ptr [eax + 0x19c] */ r_ecx = R32((u32)(r_eax+0x19cu));
    /* 004404a9: call 0x43d7e8 */ r_esp -= 4; W32(r_esp, 0x4404aeu); f_0043d7e8();
    /* 004404ae: mov esp, ebp */ r_esp = r_ebp;
    /* 004404b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004404b1: ret 4 */ FN_RET(0x00440389); r_esp += 8; return;
}

void f_004404b4(void) /* FUN_004404b4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004404b4);
    /* 004404b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004404b5: mov ebp, esp */ r_ebp = r_esp;
    /* 004404b7: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004404ba: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004404bd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004404c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004404cb: movsx eax, byte ptr [0x6f6385] */ r_eax = (u32)(i32)(i8)R8((u32)(0x6f6385u));
    /* 004404d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004404d5: je 0x4404dc */ if (fZ) goto L_004404dc;
L_004404d7:; BB(0x004404d7);
    /* 004404d7: jmp 0x4405bf */ goto L_004405bf;
L_004404dc:; BB(0x004404dc);
    /* 004404dc: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 004404df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004404e0: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 004404e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004404e4: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004404ea: call 0x45d949 */ r_esp -= 4; W32(r_esp, 0x4404efu); f_0045d949();
    /* 004404ef: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004404f3: jl 0x440599 */ if ((fS!=fO)) goto L_00440599;
L_004404f9:; BB(0x004404f9);
    /* 004404f9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004404fc: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004404ff: jge 0x440507 */ if ((fS==fO)) goto L_00440507;
L_00440501:; BB(0x00440501);
    /* 00440501: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00440504: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_00440507:; BB(0x00440507);
    /* 00440507: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0044050a: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044050d: jle 0x440515 */ if ((fZ||fS!=fO)) goto L_00440515;
L_0044050f:; BB(0x0044050f);
    /* 0044050f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00440512: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_00440515:; BB(0x00440515);
    /* 00440515: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00440518: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0044051b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0044051e: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440524: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00440527: cmp ecx, dword ptr [eax + 0x6f63a4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x6f63a4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044052d: jle 0x440547 */ if ((fZ||fS!=fO)) goto L_00440547;
L_0044052f:; BB(0x0044052f);
    /* 0044052f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00440532: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00440535: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00440538: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044053e: mov edx, dword ptr [ecx + 0x6f63a4] */ r_edx = R32((u32)(r_ecx+0x6f63a4u));
    /* 00440544: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_00440547:; BB(0x00440547);
    /* 00440547: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044054a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044054d: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00440550: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440551: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00440554: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00440557: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0044055a: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 00440560: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00440564: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x440569u); f_00425bfe();
    /* 00440569: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044056b: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0044056e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044056f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00440572: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00440575: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00440578: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 0044057e: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00440582: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00440585: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00440588: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0044058b: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00440590: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00440594: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00440596: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x440599u); call_ind(t); }
L_00440599:; BB(0x00440599);
    /* 00440599: mov dword ptr [ebp - 0x20], 2 */ W32((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 004405a0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004405a3: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004405a6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004405a9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004405ac: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004405ae: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 004405b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004405b2: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 004405b4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004405b7: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004405ba: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x4405bfu); f_005eccbe();
L_004405bf:; BB(0x004405bf);
    /* 004405bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004405c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004405c2: ret 8 */ FN_RET(0x004404b4); r_esp += 12; return;
}

void f_004405c5(void) /* FUN_004405c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004405c5);
    /* 004405c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004405c6: mov ebp, esp */ r_ebp = r_esp;
    /* 004405c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004405cb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004405ce: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004405d1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004405d4: mov dx, word ptr [ecx + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0xcu))) & 0xffffu);
    /* 004405d8: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
    /* 004405dc: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004405e0: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004405e6: mov byte ptr [eax + 0x6f6392], 1 */ W8((u32)(r_eax+0x6f6392u), 0x1u);
    /* 004405ed: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 004405f4: mov dword ptr [ebp - 0x10], 0xff */ W32((u32)(r_ebp+0xfffffff0u), 0xffu);
    /* 004405fb: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 004405fd: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x440602u); f_0060ee31();
    /* 00440602: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440605: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00440608: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0044060a: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0044060d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044060e: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00440610: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00440613: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00440616: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x44061bu); f_005eccbe();
    /* 0044061b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044061d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044061e: ret  */ FN_RET(0x004405c5); r_esp += 4; return;
}

void f_0044061f(void) /* FUN_0044061f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044061f);
    /* 0044061f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440620: mov ebp, esp */ r_ebp = r_esp;
    /* 00440622: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440625: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00440626: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00440629: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00440630: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00440633: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00440636: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00440639: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044063c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044063f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00440642: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00440649: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00440650: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440654: jne 0x44065b */ if (!fZ) goto L_0044065b;
L_00440656:; BB(0x00440656);
    /* 00440656: jmp 0x440a51 */ goto L_00440a51;
L_0044065b:; BB(0x0044065b);
    /* 0044065b: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00440661: jmp 0x44066f */ goto L_0044066f;
L_00440663:; BB(0x00440663);
    /* 00440663: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00440667: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0044066b: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_0044066f:; BB(0x0044066f);
    /* 0044066f: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440673: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440676: jge 0x44068d */ if ((fS==fO)) goto L_0044068d;
L_00440678:; BB(0x00440678);
    /* 00440678: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044067c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044067f: movsx edx, byte ptr [ecx + eax + 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0xcu));
    /* 00440684: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440687: jne 0x44068b */ if (!fZ) goto L_0044068b;
L_00440689:; BB(0x00440689);
    /* 00440689: jmp 0x44068d */ goto L_0044068d;
L_0044068b:; BB(0x0044068b);
    /* 0044068b: jmp 0x440663 */ goto L_00440663;
L_0044068d:; BB(0x0044068d);
    /* 0044068d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440691: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440694: jne 0x4406ac */ if (!fZ) goto L_004406ac;
L_00440696:; BB(0x00440696);
    /* 00440696: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440698: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044069a: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0044069c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044069f: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004406a2: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x4406a7u); f_005eccbe();
    /* 004406a7: jmp 0x440a51 */ goto L_00440a51;
L_004406ac:; BB(0x004406ac);
    /* 004406ac: cmp dword ptr [ebp - 0x10], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004406b3: jne 0x4406cb */ if (!fZ) goto L_004406cb;
L_004406b5:; BB(0x004406b5);
    /* 004406b5: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004406b9: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004406bf: mov byte ptr [edx + 0x6f6392], 1 */ W8((u32)(r_edx+0x6f6392u), 0x1u);
    /* 004406c6: jmp 0x440a51 */ goto L_00440a51;
L_004406cb:; BB(0x004406cb);
    /* 004406cb: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004406cf: je 0x440a51 */ if (fZ) goto L_00440a51;
L_004406d5:; BB(0x004406d5);
    /* 004406d5: mov word ptr [ebp - 0x20], 0 */ W16((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004406db: jmp 0x4406e9 */ goto L_004406e9;
L_004406dd:; BB(0x004406dd);
    /* 004406dd: mov ax, word ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004406e1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004406e5: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
L_004406e9:; BB(0x004406e9);
    /* 004406e9: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004406ed: cmp ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004406f0: jge 0x4407c7 */ if ((fS==fO)) goto L_004407c7;
L_004406f6:; BB(0x004406f6);
    /* 004406f6: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004406fa: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440700: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 00440704: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00440706: mov cl, byte ptr [edx + eax + 0x6f63a8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0x6f63a8u))) & 0xffu);
    /* 0044070d: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440710: jne 0x4407c2 */ if (!fZ) goto L_004407c2;
L_00440716:; BB(0x00440716);
    /* 00440716: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044071a: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440720: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 00440724: mov ecx, dword ptr [edx + eax*4 + 0x6f63c4] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x6f63c4u));
    /* 0044072b: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044072e: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 00440732: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440736: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044073c: mov dword ptr [eax + edx*4 + 0x6f63c4], ecx */ W32((u32)(r_eax+r_edx*4+0x6f63c4u), r_ecx);
    /* 00440743: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440747: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044074d: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 00440751: cmp dword ptr [ecx + edx*4 + 0x6f63c4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4+0x6f63c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440759: jg 0x44078a */ if ((!fZ&&fS==fO)) goto L_0044078a;
L_0044075b:; BB(0x0044075b);
    /* 0044075b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044075f: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440765: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 00440769: mov byte ptr [eax + ecx + 0x6f63a8], 0xff */ W8((u32)(r_eax+r_ecx+0x6f63a8u), 0xffu);
    /* 00440771: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440775: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044077b: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0044077f: mov dword ptr [edx + eax*4 + 0x6f63c4], 0 */ W32((u32)(r_edx+r_eax*4+0x6f63c4u), 0x0u);
L_0044078a:; BB(0x0044078a);
    /* 0044078a: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0044078d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044078e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00440791: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00440796: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0044079a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044079e: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004407a1: mov ecx, dword ptr [ecx + edx + 0x6c] */ r_ecx = R32((u32)(r_ecx+r_edx+0x6cu));
    /* 004407a5: call 0x426ef0 */ r_esp -= 4; W32(r_esp, 0x4407aau); f_00426ef0();
    /* 004407aa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004407ad: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004407b0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004407b3: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004407b7: jg 0x4407c0 */ if ((!fZ&&fS==fO)) goto L_004407c0;
L_004407b9:; BB(0x004407b9);
    /* 004407b9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_004407c0:; BB(0x004407c0);
    /* 004407c0: jmp 0x4407c7 */ goto L_004407c7;
L_004407c2:; BB(0x004407c2);
    /* 004407c2: jmp 0x4406dd */ goto L_004406dd;
L_004407c7:; BB(0x004407c7);
    /* 004407c7: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004407cb: cmp ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004407ce: jne 0x44084b */ if (!fZ) goto L_0044084b;
L_004407d0:; BB(0x004407d0);
    /* 004407d0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004407d4: jle 0x44084b */ if ((fZ||fS!=fO)) goto L_0044084b;
L_004407d6:; BB(0x004407d6);
    /* 004407d6: mov word ptr [ebp - 0x20], 0 */ W16((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004407dc: jmp 0x4407ea */ goto L_004407ea;
L_004407de:; BB(0x004407de);
    /* 004407de: mov dx, word ptr [ebp - 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004407e2: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004407e6: mov word ptr [ebp - 0x20], dx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edx);
L_004407ea:; BB(0x004407ea);
    /* 004407ea: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004407ee: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004407f1: jge 0x44084b */ if ((fS==fO)) goto L_0044084b;
L_004407f3:; BB(0x004407f3);
    /* 004407f3: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004407f7: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004407fd: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 00440801: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00440803: mov al, byte ptr [ecx + edx + 0x6f63a8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0x6f63a8u))) & 0xffu);
    /* 0044080a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044080f: jne 0x440849 */ if (!fZ) goto L_00440849;
L_00440811:; BB(0x00440811);
    /* 00440811: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440815: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044081b: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0044081f: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 00440822: mov byte ptr [ecx + edx + 0x6f63a8], al */ W8((u32)(r_ecx+r_edx+0x6f63a8u), (u8)r_eax);
    /* 00440829: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044082d: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440833: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 00440837: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044083a: mov dword ptr [ecx + edx*4 + 0x6f63c4], eax */ W32((u32)(r_ecx+r_edx*4+0x6f63c4u), r_eax);
    /* 00440841: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00440844: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00440847: jmp 0x44084b */ goto L_0044084b;
L_00440849:; BB(0x00440849);
    /* 00440849: jmp 0x4407de */ goto L_004407de;
L_0044084b:; BB(0x0044084b);
    /* 0044084b: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0044084f: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440852: jge 0x440a51 */ if ((fS==fO)) goto L_00440a51;
L_00440858:; BB(0x00440858);
    /* 00440858: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044085b: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00440861: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 00440865: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x44086au); f_00427ecb();
    /* 0044086a: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 0044086e: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00440872: cmp edx, 0x37 */ {  u32 a = r_edx; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440875: je 0x4408da */ if (fZ) goto L_004408da;
L_00440877:; BB(0x00440877);
    /* 00440877: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0044087b: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044087e: je 0x4408da */ if (fZ) goto L_004408da;
L_00440880:; BB(0x00440880);
    /* 00440880: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00440884: cmp ecx, 0x39 */ {  u32 a = r_ecx; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440887: je 0x4408da */ if (fZ) goto L_004408da;
L_00440889:; BB(0x00440889);
    /* 00440889: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0044088d: cmp edx, 0x3a */ {  u32 a = r_edx; u32 b = 0x3au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440890: je 0x4408da */ if (fZ) goto L_004408da;
L_00440892:; BB(0x00440892);
    /* 00440892: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00440896: cmp eax, 0x3b */ {  u32 a = r_eax; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440899: je 0x4408da */ if (fZ) goto L_004408da;
L_0044089b:; BB(0x0044089b);
    /* 0044089b: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0044089f: cmp ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004408a2: je 0x4408da */ if (fZ) goto L_004408da;
L_004408a4:; BB(0x004408a4);
    /* 004408a4: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004408a8: cmp edx, 0x3d */ {  u32 a = r_edx; u32 b = 0x3du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004408ab: je 0x4408da */ if (fZ) goto L_004408da;
L_004408ad:; BB(0x004408ad);
    /* 004408ad: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004408b1: cmp eax, 0x3e */ {  u32 a = r_eax; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004408b4: je 0x4408da */ if (fZ) goto L_004408da;
L_004408b6:; BB(0x004408b6);
    /* 004408b6: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004408ba: cmp ecx, 0x3f */ {  u32 a = r_ecx; u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004408bd: je 0x4408da */ if (fZ) goto L_004408da;
L_004408bf:; BB(0x004408bf);
    /* 004408bf: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004408c3: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004408c6: je 0x4408da */ if (fZ) goto L_004408da;
L_004408c8:; BB(0x004408c8);
    /* 004408c8: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004408cc: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004408cf: je 0x4408da */ if (fZ) goto L_004408da;
L_004408d1:; BB(0x004408d1);
    /* 004408d1: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004408d5: cmp ecx, 0x42 */ {  u32 a = r_ecx; u32 b = 0x42u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004408d8: jne 0x4408f0 */ if (!fZ) goto L_004408f0;
L_004408da:; BB(0x004408da);
    /* 004408da: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004408dd: imul eax, eax, 0x5f */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5fu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004408e0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004408e1: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 004408e6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004408e6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004408e6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004408e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004408eb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004408ed: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_004408f0:; BB(0x004408f0);
    /* 004408f0: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004408f4: jge 0x4408fd */ if ((fS==fO)) goto L_004408fd;
L_004408f6:; BB(0x004408f6);
    /* 004408f6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004408fd:; BB(0x004408fd);
    /* 004408fd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440901: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440907: mov ecx, dword ptr [eax + 0x6f63a4] */ r_ecx = R32((u32)(r_eax+0x6f63a4u));
    /* 0044090d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00440910: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440914: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044091a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044091d: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00440920: mov ecx, dword ptr [edx + 0x6f63a4] */ r_ecx = R32((u32)(r_edx+0x6f63a4u));
    /* 00440926: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00440928: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044092c: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440932: mov dword ptr [edx + 0x6f63a4], ecx */ W32((u32)(r_edx+0x6f63a4u), r_ecx);
    /* 00440938: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044093c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044093f: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00440942: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440945: jne 0x440967 */ if (!fZ) goto L_00440967;
L_00440947:; BB(0x00440947);
    /* 00440947: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044094a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044094b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044094f: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440955: mov edx, dword ptr [ecx + 0x6f63a4] */ r_edx = R32((u32)(r_ecx+0x6f63a4u));
    /* 0044095b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044095c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044095f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00440962: call 0x5edf90 */ r_esp -= 4; W32(r_esp, 0x440967u); f_005edf90();
L_00440967:; BB(0x00440967);
    /* 00440967: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044096a: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 00440970: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00440974: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440978: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0044097b: mov edx, dword ptr [eax + ecx + 0x6c] */ r_edx = R32((u32)(r_eax+r_ecx+0x6cu));
    /* 0044097f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00440982: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 00440988: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044098b: mov dword ptr [edx + 0xc8], ecx */ W32((u32)(r_edx+0xc8u), r_ecx);
    /* 00440991: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440993: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440995: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440997: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044099c: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 004409a2: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 004409a5: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4409aau); f_005e8389();
    /* 004409aa: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004409ae: jne 0x4409d4 */ if (!fZ) goto L_004409d4;
L_004409b0:; BB(0x004409b0);
    /* 004409b0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004409b3: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 004409b9: mov edx, dword ptr [ecx + eax*4 + 0x30] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 004409bd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004409c1: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004409c4: mov ecx, dword ptr [edx + eax + 0x6c] */ r_ecx = R32((u32)(r_edx+r_eax+0x6cu));
    /* 004409c8: mov dword ptr [ecx + 0xd8], 0xffffffff */ W32((u32)(r_ecx+0xd8u), 0xffffffffu);
    /* 004409d2: jmp 0x4409f6 */ goto L_004409f6;
L_004409d4:; BB(0x004409d4);
    /* 004409d4: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004409d8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004409db: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 004409e1: mov eax, dword ptr [ecx + eax*4 + 0x30] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 004409e5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004409e9: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004409ec: mov eax, dword ptr [eax + ecx + 0x6c] */ r_eax = R32((u32)(r_eax+r_ecx+0x6cu));
    /* 004409f0: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
L_004409f6:; BB(0x004409f6);
    /* 004409f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004409f9: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 004409ff: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00440a03: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440a07: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00440a0a: mov ecx, dword ptr [eax + ecx + 0x6c] */ r_ecx = R32((u32)(r_eax+r_ecx+0x6cu));
    /* 00440a0e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440a12: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00440a15: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00440a18: mov esi, dword ptr [0x6f5fec] */ r_esi = R32((u32)(0x6f5fecu));
    /* 00440a1e: mov eax, dword ptr [esi + eax*4 + 0x30] */ r_eax = R32((u32)(r_esi+r_eax*4+0x30u));
    /* 00440a22: mov edx, dword ptr [eax + edx + 0x6c] */ r_edx = R32((u32)(r_eax+r_edx+0x6cu));
    /* 00440a26: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00440a28: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x440a2bu); call_ind(t); }
    /* 00440a2b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00440a2e: add ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00440a31: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440a34: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00440a37: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00440a3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440a3b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440a3f: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00440a45: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00440a49: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00440a4c: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x440a51u); f_004267ae();
L_00440a51:; BB(0x00440a51);
    /* 00440a51: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00440a52: mov esp, ebp */ r_esp = r_ebp;
    /* 00440a54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440a55: ret 4 */ FN_RET(0x0044061f); r_esp += 8; return;
}

void f_00440a58(void) /* FUN_00440a58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00440a58);
    /* 00440a58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440a59: mov ebp, esp */ r_ebp = r_esp;
    /* 00440a5b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440a5e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00440a5f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00440a60: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00440a63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a65: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00440a6b: call 0x43a516 */ r_esp -= 4; W32(r_esp, 0x440a70u); f_0043a516();
    /* 00440a70: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00440a73: mov ecx, 0xbb */ r_ecx = 0xbbu;
    /* 00440a78: mov edi, 0x6f6380 */ r_edi = 0x6f6380u;
    /* 00440a7d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00440a7f: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a81: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00440a86: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00440a89: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00440a8f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00440a92: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00440a94: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x440a97u); call_ind(t); }
    /* 00440a97: movsx eax, byte ptr [0x6f6386] */ r_eax = (u32)(i32)(i8)R8((u32)(0x6f6386u));
    /* 00440a9e: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00440aa4: mov dword ptr [ecx + 0x1dc], eax */ W32((u32)(r_ecx+0x1dcu), r_eax);
    /* 00440aaa: movsx edx, byte ptr [0x6f6387] */ r_edx = (u32)(i32)(i8)R8((u32)(0x6f6387u));
    /* 00440ab1: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00440ab6: mov dword ptr [eax + 0x1e0], edx */ W32((u32)(r_eax+0x1e0u), r_edx);
    /* 00440abc: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00440abe: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x440ac3u); f_0048ab58();
    /* 00440ac3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440ac6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00440ac9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440acd: je 0x440adc */ if (fZ) goto L_00440adc;
L_00440acf:; BB(0x00440acf);
    /* 00440acf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00440ad2: call 0x43e78a */ r_esp -= 4; W32(r_esp, 0x440ad7u); f_0043e78a();
    /* 00440ad7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00440ada: jmp 0x440ae3 */ goto L_00440ae3;
L_00440adc:; BB(0x00440adc);
    /* 00440adc: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00440ae3:; BB(0x00440ae3);
    /* 00440ae3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00440ae6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440ae7: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00440aed: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00440af0: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x440af5u); f_005e62ca();
    /* 00440af5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440af7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440af9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440afb: push 0x18a98 */ { u32 v = 0x18a98u; r_esp -= 4; W32(r_esp, v); }
    /* 00440b00: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00440b05: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00440b08: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x440b0du); f_005e8389();
    /* 00440b0d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440b10: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00440b13: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00440b16: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440b1c: movsx ecx, byte ptr [eax + 0x6f638e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x6f638eu));
    /* 00440b23: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440b26: jne 0x440b63 */ if (!fZ) goto L_00440b63;
L_00440b28:; BB(0x00440b28);
    /* 00440b28: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440b2b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00440b2e: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00440b31: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440b37: cmp dword ptr [ecx + 0x6f63a4], 0 */ {  u32 a = R32((u32)(r_ecx+0x6f63a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440b3e: jl 0x440b63 */ if ((fS!=fO)) goto L_00440b63;
L_00440b40:; BB(0x00440b40);
    /* 00440b40: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440b42: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440b45: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00440b48: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00440b4b: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440b51: mov edx, dword ptr [ecx + 0x6f63a4] */ r_edx = R32((u32)(r_ecx+0x6f63a4u));
    /* 00440b57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440b58: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440b5b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00440b5e: call 0x5edf90 */ r_esp -= 4; W32(r_esp, 0x440b63u); f_005edf90();
L_00440b63:; BB(0x00440b63);
    /* 00440b63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00440b64: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00440b65: mov esp, ebp */ r_esp = r_ebp;
    /* 00440b67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440b68: ret 4 */ FN_RET(0x00440a58); r_esp += 8; return;
}

void f_00440b6b(void) /* FUN_00440b6b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00440b6b);
    /* 00440b6b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440b6c: mov ebp, esp */ r_ebp = r_esp;
    /* 00440b6e: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440b74: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 00440b7a: movsx eax, byte ptr [0x6f6388] */ r_eax = (u32)(i32)(i8)R8((u32)(0x6f6388u));
    /* 00440b81: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440b84: jne 0x440b95 */ if (!fZ) goto L_00440b95;
L_00440b86:; BB(0x00440b86);
    /* 00440b86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440b88: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00440b8e: call 0x43a62a */ r_esp -= 4; W32(r_esp, 0x440b93u); f_0043a62a();
    /* 00440b93: jmp 0x440ba8 */ goto L_00440ba8;
L_00440b95:; BB(0x00440b95);
    /* 00440b95: movsx ecx, byte ptr [0x6f6388] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x6f6388u));
    /* 00440b9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440b9d: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00440ba3: call 0x43a62a */ r_esp -= 4; W32(r_esp, 0x440ba8u); f_0043a62a();
L_00440ba8:; BB(0x00440ba8);
    /* 00440ba8: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00440bae: jmp 0x440bbc */ goto L_00440bbc;
L_00440bb0:; BB(0x00440bb0);
    /* 00440bb0: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00440bb4: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00440bb8: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00440bbc:; BB(0x00440bbc);
    /* 00440bbc: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440bc0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440bc3: jge 0x440cc3 */ if ((fS==fO)) goto L_00440cc3;
L_00440bc9:; BB(0x00440bc9);
    /* 00440bc9: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 00440bd3: mov word ptr [ebp - 0x8c], 0 */ W16((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 00440bdc: jmp 0x440bf0 */ goto L_00440bf0;
L_00440bde:; BB(0x00440bde);
    /* 00440bde: mov cx, word ptr [ebp - 0x8c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff74u))) & 0xffffu);
    /* 00440be5: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00440be9: mov word ptr [ebp - 0x8c], cx */ W16((u32)(r_ebp+0xffffff74u), (u16)r_ecx);
L_00440bf0:; BB(0x00440bf0);
    /* 00440bf0: movsx edx, word ptr [ebp - 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff74u));
    /* 00440bf7: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440bfa: jge 0x440c66 */ if ((fS==fO)) goto L_00440c66;
L_00440bfc:; BB(0x00440bfc);
    /* 00440bfc: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440c00: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440c06: movsx ecx, word ptr [ebp - 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff74u));
    /* 00440c0d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00440c0f: mov dl, byte ptr [eax + ecx + 0x6f63a8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x6f63a8u))) & 0xffu);
    /* 00440c16: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440c1c: je 0x440c61 */ if (fZ) goto L_00440c61;
L_00440c1e:; BB(0x00440c1e);
    /* 00440c1e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440c22: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440c28: movsx ecx, word ptr [ebp - 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff74u));
    /* 00440c2f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00440c31: mov dl, byte ptr [eax + ecx + 0x6f6428] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x6f6428u))) & 0xffu);
    /* 00440c38: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440c3b: jne 0x440c61 */ if (!fZ) goto L_00440c61;
L_00440c3d:; BB(0x00440c3d);
    /* 00440c3d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440c41: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440c47: movsx ecx, word ptr [ebp - 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff74u));
    /* 00440c4e: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00440c54: add edx, dword ptr [eax + ecx*4 + 0x6f63c4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_ecx*4+0x6f63c4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00440c5b: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
L_00440c61:; BB(0x00440c61);
    /* 00440c61: jmp 0x440bde */ goto L_00440bde;
L_00440c66:; BB(0x00440c66);
    /* 00440c66: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440c6d: jle 0x440cbe */ if ((fZ||fS!=fO)) goto L_00440cbe;
L_00440c6f:; BB(0x00440c6f);
    /* 00440c6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440c71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440c73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440c75: push 0x1774 */ { u32 v = 0x1774u; r_esp -= 4; W32(r_esp, v); }
    /* 00440c7a: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00440c7f: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00440c82: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x440c87u); f_005e8389();
    /* 00440c87: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 00440c8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440c8e: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00440c94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440c95: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x440c9au); f_0060fb42();
    /* 00440c9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440c9d: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 00440ca3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440ca4: push 0x6543dc */ { u32 v = 0x6543dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00440ca9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440cab: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440caf: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 00440cb5: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00440cb9: call 0x4256dd */ r_esp -= 4; W32(r_esp, 0x440cbeu); f_004256dd();
L_00440cbe:; BB(0x00440cbe);
    /* 00440cbe: jmp 0x440bb0 */ goto L_00440bb0;
L_00440cc3:; BB(0x00440cc3);
    /* 00440cc3: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00440cc5: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00440cca: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00440ccd: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00440cd3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00440cd6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00440cd8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x440cdbu); call_ind(t); }
    /* 00440cdb: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00440cdd: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00440ce2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00440ce5: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00440ceb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00440cee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00440cf0: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x440cf3u); call_ind(t); }
    /* 00440cf3: mov esp, ebp */ r_esp = r_ebp;
    /* 00440cf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440cf6: ret  */ FN_RET(0x00440b6b); r_esp += 4; return;
}

void f_00440cf7(void) /* FUN_00440cf7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00440cf7);
    /* 00440cf7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440cf8: mov ebp, esp */ r_ebp = r_esp;
    /* 00440cfa: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440cfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00440cfe: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00440d01: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00440d08: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00440d0f: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00440d15: jmp 0x440d23 */ goto L_00440d23;
L_00440d17:; BB(0x00440d17);
    /* 00440d17: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 00440d1b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00440d1f: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
L_00440d23:; BB(0x00440d23);
    /* 00440d23: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 00440d27: cmp ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440d2a: jge 0x441097 */ if ((fS==fO)) goto L_00441097;
L_00440d30:; BB(0x00440d30);
    /* 00440d30: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00440d36: jmp 0x440d44 */ goto L_00440d44;
L_00440d38:; BB(0x00440d38);
    /* 00440d38: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00440d3c: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00440d40: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00440d44:; BB(0x00440d44);
    /* 00440d44: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440d48: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440d4b: jge 0x441092 */ if ((fS==fO)) goto L_00441092;
L_00440d51:; BB(0x00440d51);
    /* 00440d51: mov dword ptr [ebp - 0x30], 0x55 */ W32((u32)(r_ebp+0xffffffd0u), 0x55u);
    /* 00440d58: mov dword ptr [ebp - 0x2c], 0x23 */ W32((u32)(r_ebp+0xffffffd4u), 0x23u);
    /* 00440d5f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440d63: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 00440d69: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00440d6d: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00440d70: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x440d75u); f_00420800();
    /* 00440d75: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00440d78: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00440d7b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00440d7d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00440d80: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x440d83u); call_ind(t); }
    /* 00440d83: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00440d86: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440d8a: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00440d90: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00440d94: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00440d97: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x440d9cu); f_00420800();
    /* 00440d9c: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00440d9f: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00440da2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00440da4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00440da7: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x440daau); call_ind(t); }
    /* 00440daa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00440dad: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440db1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440db2: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 00440db6: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 00440dbc: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00440dc0: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x440dc5u); f_004280b4();
    /* 00440dc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440dc7: je 0x44108d */ if (fZ) goto L_0044108d;
L_00440dcd:; BB(0x00440dcd);
    /* 00440dcd: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 00440dd1: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00440dd7: mov edx, dword ptr [ecx + eax*4 + 0x30] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 00440ddb: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440ddf: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00440de2: mov ecx, dword ptr [edx + eax + 0x6c] */ r_ecx = R32((u32)(r_edx+r_eax+0x6cu));
    /* 00440de6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00440de9: mov word ptr [ebp - 0x34], 0 */ W16((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00440def: jmp 0x440dfd */ goto L_00440dfd;
L_00440df1:; BB(0x00440df1);
    /* 00440df1: mov dx, word ptr [ebp - 0x34] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffccu))) & 0xffffu);
    /* 00440df5: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00440df9: mov word ptr [ebp - 0x34], dx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_edx);
L_00440dfd:; BB(0x00440dfd);
    /* 00440dfd: movsx eax, word ptr [ebp - 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 00440e01: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440e04: jge 0x441082 */ if ((fS==fO)) goto L_00441082;
L_00440e0a:; BB(0x00440e0a);
    /* 00440e0a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440e0e: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440e14: movsx edx, word ptr [ebp - 0x34] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 00440e18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00440e1a: mov al, byte ptr [ecx + edx + 0x6f63a8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0x6f63a8u))) & 0xffu);
    /* 00440e21: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 00440e25: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440e27: jne 0x44107d */ if (!fZ) goto L_0044107d;
L_00440e2d:; BB(0x00440e2d);
    /* 00440e2d: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440e31: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440e37: movsx eax, word ptr [ebp - 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 00440e3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00440e3d: mov cl, byte ptr [edx + eax + 0x6f6428] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0x6f6428u))) & 0xffu);
    /* 00440e44: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00440e47: cmp dword ptr [ebp - 0x54], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00440e4b: ja 0x44107b */ if ((!fC&&!fZ)) goto L_0044107b;
L_00440e51:; BB(0x00440e51);
    /* 00440e51: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00440e54: jmp dword ptr [edx*4 + 0x4410f2] */ { u32 t = R32((u32)(r_edx*4+0x4410f2u)); switch (t) { case 0x440e5bu: goto L_00440e5b; case 0x440e60u: goto L_00440e60; case 0x440ef0u: goto L_00440ef0; case 0x440f81u: goto L_00440f81; case 0x440e67u: goto L_00440e67; default: UNSUP(0x00440e54, "jump table entry is not a known target"); } }
L_00440e5b:; BB(0x00440e5b);
    /* 00440e5b: jmp 0x44107b */ goto L_0044107b;
L_00440e60:; BB(0x00440e60);
    /* 00440e60: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_00440e67:; BB(0x00440e67);
    /* 00440e67: mov word ptr [ebp - 0x28], 0 */ W16((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00440e6d: jmp 0x440e7b */ goto L_00440e7b;
L_00440e6f:; BB(0x00440e6f);
    /* 00440e6f: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 00440e73: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00440e77: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
L_00440e7b:; BB(0x00440e7b);
    /* 00440e7b: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 00440e7f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440e82: call 0x426fb2 */ r_esp -= 4; W32(r_esp, 0x440e87u); f_00426fb2();
    /* 00440e87: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440e89: jg 0x440eeb */ if ((!fZ&&fS==fO)) goto L_00440eeb;
L_00440e8b:; BB(0x00440e8b);
    /* 00440e8b: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 00440e8f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440e92: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00440e96: mov dword ptr [eax + 0x78], 5 */ W32((u32)(r_eax+0x78u), 0x5u);
    /* 00440e9d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00440e9f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x440ea4u); f_0048ab58();
    /* 00440ea4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440ea7: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00440eaa: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440eae: je 0x440ece */ if (fZ) goto L_00440ece;
L_00440eb0:; BB(0x00440eb0);
    /* 00440eb0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00440eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440eb4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00440eb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440eb8: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00440ebd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00440ec0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440ec1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00440ec4: call 0x5df72f */ r_esp -= 4; W32(r_esp, 0x440ec9u); f_005df72f();
    /* 00440ec9: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00440ecc: jmp 0x440ed5 */ goto L_00440ed5;
L_00440ece:; BB(0x00440ece);
    /* 00440ece: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00440ed5:; BB(0x00440ed5);
    /* 00440ed5: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00440ed8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440ed9: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 00440edd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440ee0: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 00440ee4: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x440ee9u); f_005d4df6();
    /* 00440ee9: jmp 0x440e6f */ goto L_00440e6f;
L_00440eeb:; BB(0x00440eeb);
    /* 00440eeb: jmp 0x44107b */ goto L_0044107b;
L_00440ef0:; BB(0x00440ef0);
    /* 00440ef0: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00440ef7: mov word ptr [ebp - 0x28], 0 */ W16((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00440efd: jmp 0x440f0b */ goto L_00440f0b;
L_00440eff:; BB(0x00440eff);
    /* 00440eff: mov dx, word ptr [ebp - 0x28] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 00440f03: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00440f07: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
L_00440f0b:; BB(0x00440f0b);
    /* 00440f0b: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 00440f0f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440f12: call 0x426fb2 */ r_esp -= 4; W32(r_esp, 0x440f17u); f_00426fb2();
    /* 00440f17: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440f19: jg 0x440f7c */ if ((!fZ&&fS==fO)) goto L_00440f7c;
L_00440f1b:; BB(0x00440f1b);
    /* 00440f1b: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 00440f1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440f22: mov edx, dword ptr [ecx + eax*4 + 0x30] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 00440f26: mov dword ptr [edx + 0x78], 5 */ W32((u32)(r_edx+0x78u), 0x5u);
    /* 00440f2d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00440f2f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x440f34u); f_0048ab58();
    /* 00440f34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440f37: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00440f3a: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440f3e: je 0x440f5f */ if (fZ) goto L_00440f5f;
L_00440f40:; BB(0x00440f40);
    /* 00440f40: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00440f43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440f44: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00440f47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440f48: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00440f4e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00440f51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440f52: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00440f55: call 0x5df72f */ r_esp -= 4; W32(r_esp, 0x440f5au); f_005df72f();
    /* 00440f5a: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00440f5d: jmp 0x440f66 */ goto L_00440f66;
L_00440f5f:; BB(0x00440f5f);
    /* 00440f5f: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00440f66:; BB(0x00440f66);
    /* 00440f66: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00440f69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440f6a: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 00440f6e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440f71: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00440f75: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x440f7au); f_005d4df6();
    /* 00440f7a: jmp 0x440eff */ goto L_00440eff;
L_00440f7c:; BB(0x00440f7c);
    /* 00440f7c: jmp 0x44107b */ goto L_0044107b;
L_00440f81:; BB(0x00440f81);
    /* 00440f81: movsx ecx, byte ptr [0x6f6386] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x6f6386u));
    /* 00440f88: movsx edx, byte ptr [0x6f6387] */ r_edx = (u32)(i32)(i8)R8((u32)(0x6f6387u));
    /* 00440f8f: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00440f91: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
    /* 00440f95: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 00440f99: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00440f9f: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 00440fa3: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x440fa8u); f_00427ecb();
    /* 00440fa8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440fab: jne 0x440fc8 */ if (!fZ) goto L_00440fc8;
L_00440fad:; BB(0x00440fad);
    /* 00440fad: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00440fb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440fb1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440fb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440fb6: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00440fba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440fbb: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00440fc1: call 0x437594 */ r_esp -= 4; W32(r_esp, 0x440fc6u); f_00437594();
    /* 00440fc6: jmp 0x440fe1 */ goto L_00440fe1;
L_00440fc8:; BB(0x00440fc8);
    /* 00440fc8: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00440fcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440fcc: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00440fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440fd1: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00440fd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440fd6: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00440fdc: call 0x4375f5 */ r_esp -= 4; W32(r_esp, 0x440fe1u); f_004375f5();
L_00440fe1:; BB(0x00440fe1);
    /* 00440fe1: mov word ptr [ebp - 0x28], 0 */ W16((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00440fe7: jmp 0x440ff5 */ goto L_00440ff5;
L_00440fe9:; BB(0x00440fe9);
    /* 00440fe9: mov dx, word ptr [ebp - 0x28] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 00440fed: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00440ff1: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
L_00440ff5:; BB(0x00440ff5);
    /* 00440ff5: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 00440ff9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440ffc: call 0x426fb2 */ r_esp -= 4; W32(r_esp, 0x441001u); f_00426fb2();
    /* 00441001: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441003: jg 0x44107b */ if ((!fZ&&fS==fO)) goto L_0044107b;
L_00441005:; BB(0x00441005);
    /* 00441005: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 00441009: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044100c: mov edx, dword ptr [ecx + eax*4 + 0x30] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 00441010: mov dword ptr [edx + 0x78], 5 */ W32((u32)(r_edx+0x78u), 0x5u);
    /* 00441017: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00441019: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x44101eu); f_0048ab58();
    /* 0044101e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00441021: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00441024: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441028: je 0x44105b */ if (fZ) goto L_0044105b;
L_0044102a:; BB(0x0044102a);
    /* 0044102a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044102d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00441030: add ecx, dword ptr [eax + 0xb8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00441036: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441037: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044103a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044103d: add eax, dword ptr [edx + 0xb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xb4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441043: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441044: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0044104a: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0044104d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044104e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00441051: call 0x5df72f */ r_esp -= 4; W32(r_esp, 0x441056u); f_005df72f();
    /* 00441056: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00441059: jmp 0x441062 */ goto L_00441062;
L_0044105b:; BB(0x0044105b);
    /* 0044105b: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00441062:; BB(0x00441062);
    /* 00441062: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00441065: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441066: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 0044106a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044106d: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00441071: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x441076u); f_005d4df6();
    /* 00441076: jmp 0x440fe9 */ goto L_00440fe9;
L_0044107b:; BB(0x0044107b);
    /* 0044107b: jmp 0x441082 */ goto L_00441082;
L_0044107d:; BB(0x0044107d);
    /* 0044107d: jmp 0x440df1 */ goto L_00440df1;
L_00441082:; BB(0x00441082);
    /* 00441082: movsx eax, word ptr [ebp - 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 00441086: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441089: jne 0x44108d */ if (!fZ) goto L_0044108d;
L_0044108b:; BB(0x0044108b);
    /* 0044108b: jmp 0x441092 */ goto L_00441092;
L_0044108d:; BB(0x0044108d);
    /* 0044108d: jmp 0x440d38 */ goto L_00440d38;
L_00441092:; BB(0x00441092);
    /* 00441092: jmp 0x440d17 */ goto L_00440d17;
L_00441097:; BB(0x00441097);
    /* 00441097: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044109b: je 0x4410bc */ if (fZ) goto L_004410bc;
L_0044109d:; BB(0x0044109d);
    /* 0044109d: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004410a1: jne 0x4410bc */ if (!fZ) goto L_004410bc;
L_004410a3:; BB(0x004410a3);
    /* 004410a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004410a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004410a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004410a9: push 0x1773 */ { u32 v = 0x1773u; r_esp -= 4; W32(r_esp, v); }
    /* 004410ae: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 004410b4: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 004410b7: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4410bcu); f_005e8389();
L_004410bc:; BB(0x004410bc);
    /* 004410bc: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004410be: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 004410c4: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004410c7: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 004410cc: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004410cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004410d1: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4410d4u); call_ind(t); }
    /* 004410d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004410d6: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 004410dc: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004410df: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 004410e5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004410e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004410ea: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4410edu); call_ind(t); }
    /* 004410ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004410ee: mov esp, ebp */ r_esp = r_ebp;
    /* 004410f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004410f1: ret  */ FN_RET(0x00440cf7); r_esp += 4; return;
}

void f_00441106(void) /* FUN_00441106 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00441106);
    /* 00441106: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441107: mov ebp, esp */ r_ebp = r_esp;
    /* 00441109: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044110c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044110d: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00441110: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00441117: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0044111e: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00441120: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00441125: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00441128: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0044112e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00441131: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00441133: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441136u); call_ind(t); }
    /* 00441136: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0044113c: jmp 0x44114a */ goto L_0044114a;
L_0044113e:; BB(0x0044113e);
    /* 0044113e: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 00441142: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00441146: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_0044114a:; BB(0x0044114a);
    /* 0044114a: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0044114e: cmp ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441151: jge 0x4411ef */ if ((fS==fO)) goto L_004411ef;
L_00441157:; BB(0x00441157);
    /* 00441157: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0044115b: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00441160: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00441164: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00441167: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044116d: jmp 0x44117b */ goto L_0044117b;
L_0044116f:; BB(0x0044116f);
    /* 0044116f: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00441173: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00441177: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_0044117b:; BB(0x0044117b);
    /* 0044117b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044117f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441182: jge 0x4411ea */ if ((fS==fO)) goto L_004411ea;
L_00441184:; BB(0x00441184);
    /* 00441184: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00441188: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0044118b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044118e: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 00441192: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00441195: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441199: je 0x4411e8 */ if (fZ) goto L_004411e8;
L_0044119b:; BB(0x0044119b);
    /* 0044119b: mov word ptr [ebp - 0x20], 0 */ W16((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004411a1: jmp 0x4411af */ goto L_004411af;
L_004411a3:; BB(0x004411a3);
    /* 004411a3: mov cx, word ptr [ebp - 0x20] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004411a7: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004411ab: mov word ptr [ebp - 0x20], cx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ecx);
L_004411af:; BB(0x004411af);
    /* 004411af: movsx esi, word ptr [ebp - 0x20] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004411b3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004411b6: call 0x426fb2 */ r_esp -= 4; W32(r_esp, 0x4411bbu); f_00426fb2();
    /* 004411bb: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004411bd: jg 0x4411e8 */ if ((!fZ&&fS==fO)) goto L_004411e8;
L_004411bf:; BB(0x004411bf);
    /* 004411bf: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004411c3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004411c6: cmp dword ptr [eax + edx*4 + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004411cb: je 0x4411e6 */ if (fZ) goto L_004411e6;
L_004411cd:; BB(0x004411cd);
    /* 004411cd: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004411d1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004411d4: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 004411d8: call 0x5d4e74 */ r_esp -= 4; W32(r_esp, 0x4411ddu); f_005d4e74();
    /* 004411dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004411df: je 0x4411e6 */ if (fZ) goto L_004411e6;
L_004411e1:; BB(0x004411e1);
    /* 004411e1: jmp 0x441576 */ goto L_00441576;
L_004411e6:; BB(0x004411e6);
    /* 004411e6: jmp 0x4411a3 */ goto L_004411a3;
L_004411e8:; BB(0x004411e8);
    /* 004411e8: jmp 0x44116f */ goto L_0044116f;
L_004411ea:; BB(0x004411ea);
    /* 004411ea: jmp 0x44113e */ goto L_0044113e;
L_004411ef:; BB(0x004411ef);
    /* 004411ef: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004411f5: jmp 0x441203 */ goto L_00441203;
L_004411f7:; BB(0x004411f7);
    /* 004411f7: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 004411fb: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004411ff: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_00441203:; BB(0x00441203);
    /* 00441203: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00441207: cmp ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044120a: jge 0x4412f8 */ if ((fS==fO)) goto L_004412f8;
L_00441210:; BB(0x00441210);
    /* 00441210: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00441216: jmp 0x441224 */ goto L_00441224;
L_00441218:; BB(0x00441218);
    /* 00441218: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0044121c: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00441220: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00441224:; BB(0x00441224);
    /* 00441224: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00441228: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044122b: jge 0x4412f3 */ if ((fS==fO)) goto L_004412f3;
L_00441231:; BB(0x00441231);
    /* 00441231: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00441235: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441236: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0044123a: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0044123f: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00441243: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x441248u); f_004280b4();
    /* 00441248: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044124a: je 0x4412ee */ if (fZ) goto L_004412ee;
L_00441250:; BB(0x00441250);
    /* 00441250: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00441254: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0044125a: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0044125e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00441262: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00441265: mov edx, dword ptr [eax + ecx + 0x6c] */ r_edx = R32((u32)(r_eax+r_ecx+0x6cu));
    /* 00441269: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0044126c: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00441272: jmp 0x441280 */ goto L_00441280;
L_00441274:; BB(0x00441274);
    /* 00441274: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 00441278: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0044127c: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
L_00441280:; BB(0x00441280);
    /* 00441280: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 00441284: cmp ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441287: jge 0x4412e3 */ if ((fS==fO)) goto L_004412e3;
L_00441289:; BB(0x00441289);
    /* 00441289: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044128d: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00441293: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 00441297: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00441299: mov cl, byte ptr [edx + eax + 0x6f63a8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0x6f63a8u))) & 0xffu);
    /* 004412a0: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004412a4: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004412a6: jne 0x4412e1 */ if (!fZ) goto L_004412e1;
L_004412a8:; BB(0x004412a8);
    /* 004412a8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004412ac: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004412b2: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004412b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004412b8: mov dl, byte ptr [eax + ecx + 0x6f6428] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x6f6428u))) & 0xffu);
    /* 004412bf: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004412c2: cmp dword ptr [ebp - 0x38], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004412c6: ja 0x4412df */ if ((!fC&&!fZ)) goto L_004412df;
L_004412c8:; BB(0x004412c8);
    /* 004412c8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004412cb: jmp dword ptr [eax*4 + 0x44157b] */ { u32 t = R32((u32)(r_eax*4+0x44157bu)); switch (t) { case 0x4412d2u: goto L_004412d2; case 0x4412d4u: goto L_004412d4; case 0x4412dfu: goto L_004412df; default: UNSUP(0x004412cb, "jump table entry is not a known target"); } }
L_004412d2:; BB(0x004412d2);
    /* 004412d2: jmp 0x4412df */ goto L_004412df;
L_004412d4:; BB(0x004412d4);
    /* 004412d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004412d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004412d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004412dc: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4412dfu); call_ind(t); }
L_004412df:; BB(0x004412df);
    /* 004412df: jmp 0x4412e3 */ goto L_004412e3;
L_004412e1:; BB(0x004412e1);
    /* 004412e1: jmp 0x441274 */ goto L_00441274;
L_004412e3:; BB(0x004412e3);
    /* 004412e3: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004412e7: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004412ea: jne 0x4412ee */ if (!fZ) goto L_004412ee;
L_004412ec:; BB(0x004412ec);
    /* 004412ec: jmp 0x4412f3 */ goto L_004412f3;
L_004412ee:; BB(0x004412ee);
    /* 004412ee: jmp 0x441218 */ goto L_00441218;
L_004412f3:; BB(0x004412f3);
    /* 004412f3: jmp 0x4411f7 */ goto L_004411f7;
L_004412f8:; BB(0x004412f8);
    /* 004412f8: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004412fe: jmp 0x44130c */ goto L_0044130c;
L_00441300:; BB(0x00441300);
    /* 00441300: mov cx, word ptr [ebp - 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 00441304: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00441308: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
L_0044130c:; BB(0x0044130c);
    /* 0044130c: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00441310: cmp edx, 0x54 */ {  u32 a = r_edx; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441313: jge 0x4414d0 */ if ((fS==fO)) goto L_004414d0;
L_00441319:; BB(0x00441319);
    /* 00441319: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044131f: jmp 0x44132d */ goto L_0044132d;
L_00441321:; BB(0x00441321);
    /* 00441321: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00441325: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00441329: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0044132d:; BB(0x0044132d);
    /* 0044132d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00441331: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441334: jge 0x4414cb */ if ((fS==fO)) goto L_004414cb;
L_0044133a:; BB(0x0044133a);
    /* 0044133a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044133e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044133f: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00441343: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441349: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0044134d: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x441352u); f_004280b4();
    /* 00441352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441354: je 0x4414c6 */ if (fZ) goto L_004414c6;
L_0044135a:; BB(0x0044135a);
    /* 0044135a: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0044135e: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00441363: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00441367: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044136b: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0044136e: mov eax, dword ptr [ecx + edx + 0x6c] */ r_eax = R32((u32)(r_ecx+r_edx+0x6cu));
    /* 00441372: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00441375: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0044137b: jmp 0x441389 */ goto L_00441389;
L_0044137d:; BB(0x0044137d);
    /* 0044137d: mov cx, word ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 00441381: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00441385: mov word ptr [ebp - 0x24], cx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ecx);
L_00441389:; BB(0x00441389);
    /* 00441389: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 0044138d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441390: jge 0x4414c6 */ if ((fS==fO)) goto L_004414c6;
L_00441396:; BB(0x00441396);
    /* 00441396: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044139a: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004413a0: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004413a4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004413a6: mov dl, byte ptr [eax + ecx + 0x6f63a8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x6f63a8u))) & 0xffu);
    /* 004413ad: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004413b1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004413b3: jne 0x4414c1 */ if (!fZ) goto L_004414c1;
L_004413b9:; BB(0x004413b9);
    /* 004413b9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004413bd: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004413c3: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004413c7: mov al, byte ptr [ecx + edx + 0x6f6428] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0x6f6428u))) & 0xffu);
    /* 004413ce: mov byte ptr [ebp - 0x3c], al */ W8((u32)(r_ebp+0xffffffc4u), (u8)r_eax);
    /* 004413d1: cmp byte ptr [ebp - 0x3c], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004413d5: je 0x4413e2 */ if (fZ) goto L_004413e2;
L_004413d7:; BB(0x004413d7);
    /* 004413d7: cmp byte ptr [ebp - 0x3c], 3 */ {  u32 a = R8((u32)(r_ebp+0xffffffc4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004413db: je 0x4413e7 */ if (fZ) goto L_004413e7;
L_004413dd:; BB(0x004413dd);
    /* 004413dd: jmp 0x4414bf */ goto L_004414bf;
L_004413e2:; BB(0x004413e2);
    /* 004413e2: jmp 0x4414bf */ goto L_004414bf;
L_004413e7:; BB(0x004413e7);
    /* 004413e7: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004413eb: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 004413f1: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 004413f5: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x4413fau); f_00427ecb();
    /* 004413fa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004413fd: je 0x44141c */ if (fZ) goto L_0044141c;
L_004413ff:; BB(0x004413ff);
    /* 004413ff: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00441403: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441409: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0044140d: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x441412u); f_00427ecb();
    /* 00441412: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441415: je 0x44141c */ if (fZ) goto L_0044141c;
L_00441417:; BB(0x00441417);
    /* 00441417: jmp 0x4414bf */ goto L_004414bf;
L_0044141c:; BB(0x0044141c);
    /* 0044141c: movsx edx, byte ptr [0x6f6386] */ r_edx = (u32)(i32)(i8)R8((u32)(0x6f6386u));
    /* 00441423: movsx eax, byte ptr [0x6f6387] */ r_eax = (u32)(i32)(i8)R8((u32)(0x6f6387u));
    /* 0044142a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044142c: mov word ptr [ebp - 0x18], dx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_edx);
    /* 00441430: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00441434: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 0044143a: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 0044143e: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x441443u); f_00427ecb();
    /* 00441443: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441446: jne 0x44145e */ if (!fZ) goto L_0044145e;
L_00441448:; BB(0x00441448);
    /* 00441448: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 0044144c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044144d: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441453: call 0x437656 */ r_esp -= 4; W32(r_esp, 0x441458u); f_00437656();
    /* 00441458: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 0044145c: jmp 0x441472 */ goto L_00441472;
L_0044145e:; BB(0x0044145e);
    /* 0044145e: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 00441462: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441463: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441469: call 0x4376e0 */ r_esp -= 4; W32(r_esp, 0x44146eu); f_004376e0();
    /* 0044146e: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
L_00441472:; BB(0x00441472);
    /* 00441472: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441475: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00441477: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044147a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x44147du); call_ind(t); }
    /* 0044147d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044147f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00441483: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00441489: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 0044148d: mov eax, dword ptr [ecx + edx*4 + 0x6f63c4] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x6f63c4u));
    /* 00441494: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441495: call 0x4298bc */ r_esp -= 4; W32(r_esp, 0x44149au); f_004298bc();
    /* 0044149a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044149d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004414a0: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004414a3: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 004414a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004414a7: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004414ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004414ac: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004414b0: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 004414b6: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 004414ba: call 0x42fc47 */ r_esp -= 4; W32(r_esp, 0x4414bfu); f_0042fc47();
L_004414bf:; BB(0x004414bf);
    /* 004414bf: jmp 0x4414c6 */ goto L_004414c6;
L_004414c1:; BB(0x004414c1);
    /* 004414c1: jmp 0x44137d */ goto L_0044137d;
L_004414c6:; BB(0x004414c6);
    /* 004414c6: jmp 0x441321 */ goto L_00441321;
L_004414cb:; BB(0x004414cb);
    /* 004414cb: jmp 0x441300 */ goto L_00441300;
L_004414d0:; BB(0x004414d0);
    /* 004414d0: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004414d6: jmp 0x4414e4 */ goto L_004414e4;
L_004414d8:; BB(0x004414d8);
    /* 004414d8: mov dx, word ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 004414dc: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004414e0: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
L_004414e4:; BB(0x004414e4);
    /* 004414e4: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004414e8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004414eb: jge 0x441536 */ if ((fS==fO)) goto L_00441536;
L_004414ed:; BB(0x004414ed);
    /* 004414ed: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004414f1: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004414f7: movsx edx, byte ptr [ecx + 0x6f638e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x6f638eu));
    /* 004414fe: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441501: jne 0x441534 */ if (!fZ) goto L_00441534;
L_00441503:; BB(0x00441503);
    /* 00441503: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00441507: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044150d: mov ecx, dword ptr [eax + 0x6f63a4] */ r_ecx = R32((u32)(r_eax+0x6f63a4u));
    /* 00441513: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00441516: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441518: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044151a: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0044151d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044151e: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00441522: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441528: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0044152c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0044152f: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x441534u); f_00426561();
L_00441534:; BB(0x00441534);
    /* 00441534: jmp 0x4414d8 */ goto L_004414d8;
L_00441536:; BB(0x00441536);
    /* 00441536: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044153c: jmp 0x44154a */ goto L_0044154a;
L_0044153e:; BB(0x0044153e);
    /* 0044153e: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00441542: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00441546: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0044154a:; BB(0x0044154a);
    /* 0044154a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044154e: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441551: jge 0x441569 */ if ((fS==fO)) goto L_00441569;
L_00441553:; BB(0x00441553);
    /* 00441553: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441555: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00441559: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 0044155e: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00441562: call 0x4257da */ r_esp -= 4; W32(r_esp, 0x441567u); f_004257da();
    /* 00441567: jmp 0x44153e */ goto L_0044153e;
L_00441569:; BB(0x00441569);
    /* 00441569: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044156b: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441571: call 0x43a516 */ r_esp -= 4; W32(r_esp, 0x441576u); f_0043a516();
L_00441576:; BB(0x00441576);
    /* 00441576: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00441577: mov esp, ebp */ r_esp = r_ebp;
    /* 00441579: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044157a: ret  */ FN_RET(0x00441106); r_esp += 4; return;
}

void f_0044158f(void) /* FUN_0044158f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044158f);
    /* 0044158f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441590: mov ebp, esp */ r_ebp = r_esp;
    /* 00441592: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441595: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00441598: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044159e: jmp 0x4415ac */ goto L_004415ac;
L_004415a0:; BB(0x004415a0);
    /* 004415a0: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004415a4: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004415a8: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004415ac:; BB(0x004415ac);
    /* 004415ac: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004415b0: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004415b3: jge 0x441605 */ if ((fS==fO)) goto L_00441605;
L_004415b5:; BB(0x004415b5);
    /* 004415b5: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004415b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004415bc: movsx ecx, byte ptr [eax + edx + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xcu));
    /* 004415c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004415c3: je 0x441603 */ if (fZ) goto L_00441603;
L_004415c5:; BB(0x004415c5);
    /* 004415c5: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004415c9: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004415cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004415d2: mov cl, byte ptr [eax + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 004415d5: mov byte ptr [edx + 0x6f638f], cl */ W8((u32)(r_edx+0x6f638fu), (u8)r_ecx);
    /* 004415db: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004415df: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004415e5: movsx eax, byte ptr [edx + 0x6f638f] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6f638fu));
    /* 004415ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004415ed: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004415f1: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 004415f7: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 004415fb: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004415fe: call 0x42085e */ r_esp -= 4; W32(r_esp, 0x441603u); f_0042085e();
L_00441603:; BB(0x00441603);
    /* 00441603: jmp 0x4415a0 */ goto L_004415a0;
L_00441605:; BB(0x00441605);
    /* 00441605: mov esp, ebp */ r_esp = r_ebp;
    /* 00441607: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441608: ret 4 */ FN_RET(0x0044158f); r_esp += 8; return;
}

void f_0044160b(void) /* FUN_0044160b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044160b);
    /* 0044160b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044160c: mov ebp, esp */ r_ebp = r_esp;
    /* 0044160e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441611: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00441614: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044161b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00441622: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00441628: jmp 0x441636 */ goto L_00441636;
L_0044162a:; BB(0x0044162a);
    /* 0044162a: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0044162e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00441632: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_00441636:; BB(0x00441636);
    /* 00441636: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0044163a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044163d: jge 0x44169f */ if ((fS==fO)) goto L_0044169f;
L_0044163f:; BB(0x0044163f);
    /* 0044163f: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00441643: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441646: movsx ecx, byte ptr [eax + edx + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xcu));
    /* 0044164b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044164d: je 0x44169d */ if (fZ) goto L_0044169d;
L_0044164f:; BB(0x0044164f);
    /* 0044164f: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00441653: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00441659: mov byte ptr [edx + 0x6f6441], 1 */ W8((u32)(r_edx+0x6f6441u), 0x1u);
    /* 00441660: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00441664: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044166a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044166d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00441670: mov dword ptr [eax + 0x6f63a4], edx */ W32((u32)(r_eax+0x6f63a4u), r_edx);
    /* 00441676: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441679: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044167c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044167f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441681: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441683: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00441686: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441687: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0044168b: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441691: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00441695: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00441698: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x44169du); f_00426561();
L_0044169d:; BB(0x0044169d);
    /* 0044169d: jmp 0x44162a */ goto L_0044162a;
L_0044169f:; BB(0x0044169f);
    /* 0044169f: mov esp, ebp */ r_esp = r_ebp;
    /* 004416a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004416a2: ret 4 */ FN_RET(0x0044160b); r_esp += 8; return;
}

void f_004416a5(void) /* FUN_004416a5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004416a5);
    /* 004416a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004416a6: mov ebp, esp */ r_ebp = r_esp;
    /* 004416a8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004416ab: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004416ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004416b1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004416b3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004416b6: cmp dword ptr [ebp - 8], 0x65 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004416ba: ja 0x441720 */ if ((!fC&&!fZ)) goto L_00441720;
L_004416bc:; BB(0x004416bc);
    /* 004416bc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004416bf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004416c1: mov dl, byte ptr [eax + 0x441742] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x441742u))) & 0xffu);
    /* 004416c7: jmp dword ptr [edx*4 + 0x441726] */ { u32 t = R32((u32)(r_edx*4+0x441726u)); switch (t) { case 0x4416ceu: goto L_004416ce; case 0x4416dcu: goto L_004416dc; case 0x4416eau: goto L_004416ea; case 0x4416f8u: goto L_004416f8; case 0x441706u: goto L_00441706; case 0x441714u: goto L_00441714; case 0x441720u: goto L_00441720; default: UNSUP(0x004416c7, "jump table entry is not a known target"); } }
L_004416ce:; BB(0x004416ce);
    /* 004416ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004416d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004416d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004416d5: call 0x440206 */ r_esp -= 4; W32(r_esp, 0x4416dau); f_00440206();
    /* 004416da: jmp 0x441720 */ goto L_00441720;
L_004416dc:; BB(0x004416dc);
    /* 004416dc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004416df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004416e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004416e3: call 0x440389 */ r_esp -= 4; W32(r_esp, 0x4416e8u); f_00440389();
    /* 004416e8: jmp 0x441720 */ goto L_00441720;
L_004416ea:; BB(0x004416ea);
    /* 004416ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004416ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004416ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004416f1: call 0x44061f */ r_esp -= 4; W32(r_esp, 0x4416f6u); f_0044061f();
    /* 004416f6: jmp 0x441720 */ goto L_00441720;
L_004416f8:; BB(0x004416f8);
    /* 004416f8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004416fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004416fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004416ff: call 0x440a58 */ r_esp -= 4; W32(r_esp, 0x441704u); f_00440a58();
    /* 00441704: jmp 0x441720 */ goto L_00441720;
L_00441706:; BB(0x00441706);
    /* 00441706: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00441709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044170a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044170d: call 0x44158f */ r_esp -= 4; W32(r_esp, 0x441712u); f_0044158f();
    /* 00441712: jmp 0x441720 */ goto L_00441720;
L_00441714:; BB(0x00441714);
    /* 00441714: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441717: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441718: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044171b: call 0x44160b */ r_esp -= 4; W32(r_esp, 0x441720u); f_0044160b();
L_00441720:; BB(0x00441720);
    /* 00441720: mov esp, ebp */ r_esp = r_ebp;
    /* 00441722: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441723: ret 4 */ FN_RET(0x004416a5); r_esp += 8; return;
}

void f_004417a8(void) /* FUN_004417a8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004417a8);
    /* 004417a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004417a9: mov ebp, esp */ r_ebp = r_esp;
    /* 004417ab: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004417ae: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004417b1: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 004417b4: mov byte ptr [ebp - 8], al */ W8((u32)(r_ebp+0xfffffff8u), (u8)r_eax);
    /* 004417b7: cmp byte ptr [ebp - 8], 0x50 */ {  u32 a = R8((u32)(r_ebp+0xfffffff8u)); u32 b = 0x50u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004417bb: je 0x4417cb */ if (fZ) goto L_004417cb;
L_004417bd:; BB(0x004417bd);
    /* 004417bd: cmp byte ptr [ebp - 8], 0x51 */ {  u32 a = R8((u32)(r_ebp+0xfffffff8u)); u32 b = 0x51u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004417c1: je 0x4417e6 */ if (fZ) goto L_004417e6;
L_004417c3:; BB(0x004417c3);
    /* 004417c3: cmp byte ptr [ebp - 8], 0x52 */ {  u32 a = R8((u32)(r_ebp+0xfffffff8u)); u32 b = 0x52u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004417c7: je 0x441801 */ if (fZ) goto L_00441801;
L_004417c9:; BB(0x004417c9);
    /* 004417c9: jmp 0x44181a */ goto L_0044181a;
L_004417cb:; BB(0x004417cb);
    /* 004417cb: push 0x6543e8 */ { u32 v = 0x6543e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004417d0: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x4417d5u); f_0060fc40();
    /* 004417d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004417d8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004417db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004417dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004417df: call 0x43ffbb */ r_esp -= 4; W32(r_esp, 0x4417e4u); f_0043ffbb();
    /* 004417e4: jmp 0x44181a */ goto L_0044181a;
L_004417e6:; BB(0x004417e6);
    /* 004417e6: push 0x65440c */ { u32 v = 0x65440cu; r_esp -= 4; W32(r_esp, v); }
    /* 004417eb: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x4417f0u); f_0060fc40();
    /* 004417f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004417f3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004417f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004417f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004417fa: call 0x4416a5 */ r_esp -= 4; W32(r_esp, 0x4417ffu); f_004416a5();
    /* 004417ff: jmp 0x44181a */ goto L_0044181a;
L_00441801:; BB(0x00441801);
    /* 00441801: push 0x654430 */ { u32 v = 0x654430u; r_esp -= 4; W32(r_esp, v); }
    /* 00441806: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x44180bu); f_0060fc40();
    /* 0044180b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044180e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00441811: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441812: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441815: call 0x43fd5a */ r_esp -= 4; W32(r_esp, 0x44181au); f_0043fd5a();
L_0044181a:; BB(0x0044181a);
    /* 0044181a: mov esp, ebp */ r_esp = r_ebp;
    /* 0044181c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044181d: ret 0xc */ FN_RET(0x004417a8); r_esp += 16; return;
}

void f_00441820(void) /* FUN_00441820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00441820);
    /* 00441820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441821: mov ebp, esp */ r_ebp = r_esp;
    /* 00441823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00441827: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044182a: call 0x424920 */ r_esp -= 4; W32(r_esp, 0x44182fu); f_00424920();
    /* 0044182f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00441831: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441834: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00441836: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441839: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x44183cu); call_ind(t); }
    /* 0044183c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044183e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044183f: ret  */ FN_RET(0x00441820); r_esp += 4; return;
}

void f_00441840(void) /* FUN_00441840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00441840);
    /* 00441840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441841: mov ebp, esp */ r_ebp = r_esp;
    /* 00441843: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441846: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00441849: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0044184b: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00441850: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00441853: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 00441859: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044185c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044185e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441861u); call_ind(t); }
    /* 00441861: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441868: jne 0x44191a */ if (!fZ) goto L_0044191a;
L_0044186e:; BB(0x0044186e);
    /* 0044186e: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441874: call 0x43700f */ r_esp -= 4; W32(r_esp, 0x441879u); f_0043700f();
    /* 00441879: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044187b: je 0x44191a */ if (fZ) goto L_0044191a;
L_00441881:; BB(0x00441881);
    /* 00441881: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00441887: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x44188cu); f_0045cb0a();
    /* 0044188c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044188e: je 0x44191a */ if (fZ) goto L_0044191a;
L_00441894:; BB(0x00441894);
    /* 00441894: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044189b: jne 0x44191a */ if (!fZ) goto L_0044191a;
L_0044189d:; BB(0x0044189d);
    /* 0044189d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004418a0: mov dword ptr [eax + 0x6c], 5 */ W32((u32)(r_eax+0x6cu), 0x5u);
    /* 004418a7: push 0xfcc */ { u32 v = 0xfccu; r_esp -= 4; W32(r_esp, v); }
    /* 004418ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004418af: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4418b4u); f_005ea0c3();
    /* 004418b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004418b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004418b9: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4418beu); f_005ea1cf();
    /* 004418be: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004418c0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4418c5u); f_0048ab58();
    /* 004418c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004418c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004418cb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004418cf: je 0x4418fa */ if (fZ) goto L_004418fa;
L_004418d1:; BB(0x004418d1);
    /* 004418d1: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 004418d7: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004418da: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004418dd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004418e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004418e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004418e4: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x4418e9u); f_005d7b34();
    /* 004418e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004418ec: mov dword ptr [ecx], 0x634b74 */ W32((u32)(r_ecx), 0x634b74u);
    /* 004418f2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004418f5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004418f8: jmp 0x441901 */ goto L_00441901;
L_004418fa:; BB(0x004418fa);
    /* 004418fa: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00441901:; BB(0x00441901);
    /* 00441901: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441905: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00441908: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x44190du); f_005e4060();
    /* 0044190d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00441910: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441912: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00441915: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x441918u); call_ind(t); }
    /* 00441918: jmp 0x441932 */ goto L_00441932;
L_0044191a:; BB(0x0044191a);
    /* 0044191a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044191c: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00441921: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00441924: mov edx, dword ptr [0x6f5fe8] */ r_edx = R32((u32)(0x6f5fe8u));
    /* 0044192a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044192d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044192f: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x441932u); call_ind(t); }
L_00441932:; BB(0x00441932);
    /* 00441932: mov esp, ebp */ r_esp = r_ebp;
    /* 00441934: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441935: ret  */ FN_RET(0x00441840); r_esp += 4; return;
}

void f_00441936(void) /* FUN_00441936 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00441936);
    /* 00441936: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441937: mov ebp, esp */ r_ebp = r_esp;
    /* 00441939: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044193c: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0044193f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00441946: mov dword ptr [ebp - 4], 0x3fd00000 */ W32((u32)(r_ebp+0xfffffffcu), 0x3fd00000u);
    /* 0044194d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441950: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441957: je 0x44196f */ if (fZ) goto L_0044196f;
L_00441959:; BB(0x00441959);
    /* 00441959: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044195c: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441963: je 0x44196f */ if (fZ) goto L_0044196f;
L_00441965:; BB(0x00441965);
    /* 00441965: mov eax, 1 */ r_eax = 0x1u;
    /* 0044196a: jmp 0x441a28 */ goto L_00441a28;
L_0044196f:; BB(0x0044196f);
    /* 0044196f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441972: cmp dword ptr [edx + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441979: jne 0x441982 */ if (!fZ) goto L_00441982;
L_0044197b:; BB(0x0044197b);
    /* 0044197b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044197d: jmp 0x441a28 */ goto L_00441a28;
L_00441982:; BB(0x00441982);
    /* 00441982: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00441988: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x44198du); f_0045cd09();
    /* 0044198d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00441990: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 00441993: fdiv qword ptr [0x634b88] */ ST(0) = ST(0) / R_F64((u32)(0x634b88u));
    /* 00441999: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0044199c: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 0044199f: fcomp qword ptr [0x634b90] */ fx_compare(ST(0), R_F64((u32)(0x634b90u))); FPOP();
    /* 004419a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004419a7: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004419aa: jne 0x4419d2 */ if (!fZ) goto L_004419d2;
L_004419ac:; BB(0x004419ac);
    /* 004419ac: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 004419af: fsub qword ptr [0x634b90] */ ST(0) = ST(0) - R_F64((u32)(0x634b90u));
    /* 004419b5: fdiv qword ptr [0x634b90] */ ST(0) = ST(0) / R_F64((u32)(0x634b90u));
    /* 004419bb: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004419be: fld qword ptr [0x634b98] */ FPUSH(R_F64((u32)(0x634b98u)));
    /* 004419c4: fsub qword ptr [ebp - 0x18] */ ST(0) = ST(0) - R_F64((u32)(r_ebp+0xffffffe8u));
    /* 004419c7: fmul qword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004419ca: fadd qword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffe8u));
    /* 004419cd: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004419d0: jmp 0x4419f0 */ goto L_004419f0;
L_004419d2:; BB(0x004419d2);
    /* 004419d2: fld qword ptr [0x634b90] */ FPUSH(R_F64((u32)(0x634b90u)));
    /* 004419d8: fsub qword ptr [ebp - 8] */ ST(0) = ST(0) - R_F64((u32)(r_ebp+0xfffffff8u));
    /* 004419db: fdiv qword ptr [0x634b90] */ ST(0) = ST(0) / R_F64((u32)(0x634b90u));
    /* 004419e1: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004419e4: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 004419e7: fmul qword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004419ea: fsubr qword ptr [ebp - 0x18] */ ST(0) = R_F64((u32)(r_ebp+0xffffffe8u)) - ST(0);
    /* 004419ed: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_004419f0:; BB(0x004419f0);
    /* 004419f0: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004419f5: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4419fau); f_0060ee31();
    /* 004419fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004419fd: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00441a00: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 00441a03: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 00441a06: fmul qword ptr [0x634ba0] */ ST(0) = ST(0) * R_F64((u32)(0x634ba0u));
    /* 00441a0c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00441a0e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00441a10: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00441a13: jne 0x441a1e */ if (!fZ) goto L_00441a1e;
L_00441a15:; BB(0x00441a15);
    /* 00441a15: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00441a1c: jmp 0x441a25 */ goto L_00441a25;
L_00441a1e:; BB(0x00441a1e);
    /* 00441a1e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00441a25:; BB(0x00441a25);
    /* 00441a25: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
L_00441a28:; BB(0x00441a28);
    /* 00441a28: mov esp, ebp */ r_esp = r_ebp;
    /* 00441a2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441a2b: ret  */ FN_RET(0x00441936); r_esp += 4; return;
}

void f_00441a2c(void) /* FUN_00441a2c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00441a2c);
    /* 00441a2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441a2d: mov ebp, esp */ r_ebp = r_esp;
    /* 00441a2f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441a32: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00441a35: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441a3b: call 0x437372 */ r_esp -= 4; W32(r_esp, 0x441a40u); f_00437372();
    /* 00441a40: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00441a43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441a45: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441a48: call 0x424886 */ r_esp -= 4; W32(r_esp, 0x441a4du); f_00424886();
    /* 00441a4d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00441a50: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441a54: je 0x441c6c */ if (fZ) goto L_00441c6c;
L_00441a5a:; BB(0x00441a5a);
    /* 00441a5a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441a5d: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x441a62u); f_004259a0();
    /* 00441a62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441a64: je 0x441c6c */ if (fZ) goto L_00441c6c;
L_00441a6a:; BB(0x00441a6a);
    /* 00441a6a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441a6d: cmp dword ptr [eax + 0x130], 0 */ {  u32 a = R32((u32)(r_eax+0x130u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441a74: jne 0x441c6c */ if (!fZ) goto L_00441c6c;
L_00441a7a:; BB(0x00441a7a);
    /* 00441a7a: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441a80: mov ecx, dword ptr [ecx + 0x19c] */ r_ecx = R32((u32)(r_ecx+0x19cu));
    /* 00441a86: call 0x5e078a */ r_esp -= 4; W32(r_esp, 0x441a8bu); f_005e078a();
    /* 00441a8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441a8d: jne 0x441c6c */ if (!fZ) goto L_00441c6c;
L_00441a93:; BB(0x00441a93);
    /* 00441a93: mov edx, dword ptr [0x6f5fec] */ r_edx = R32((u32)(0x6f5fecu));
    /* 00441a99: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00441a9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00441a9f: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x441aa4u); f_0043a8b5();
    /* 00441aa4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00441aa6: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00441aa8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00441aaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441aac: je 0x441b2c */ if (fZ) goto L_00441b2c;
L_00441aae:; BB(0x00441aae);
    /* 00441aae: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00441ab3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00441ab5: cmp dword ptr [eax + 0x1cc], 3 */ {  u32 a = R32((u32)(r_eax+0x1ccu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441abc: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00441abf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441ac1: je 0x441af6 */ if (fZ) goto L_00441af6;
L_00441ac3:; BB(0x00441ac3);
    /* 00441ac3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441ac7: je 0x441ade */ if (fZ) goto L_00441ade;
L_00441ac9:; BB(0x00441ac9);
    /* 00441ac9: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441acd: je 0x441ade */ if (fZ) goto L_00441ade;
L_00441acf:; BB(0x00441acf);
    /* 00441acf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00441ad2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441ad3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441ad6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00441ad8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441adb: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441adeu); call_ind(t); }
L_00441ade:; BB(0x00441ade);
    /* 00441ade: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441ae0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441ae3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441ae4: push 0x8b1 */ { u32 v = 0x8b1u; r_esp -= 4; W32(r_esp, v); }
    /* 00441ae9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441aec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441aee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441af1: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441af4u); call_ind(t); }
    /* 00441af4: jmp 0x441b27 */ goto L_00441b27;
L_00441af6:; BB(0x00441af6);
    /* 00441af6: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441afa: je 0x441b11 */ if (fZ) goto L_00441b11;
L_00441afc:; BB(0x00441afc);
    /* 00441afc: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441b00: je 0x441b11 */ if (fZ) goto L_00441b11;
L_00441b02:; BB(0x00441b02);
    /* 00441b02: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00441b05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441b06: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441b09: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441b0b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441b0e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441b11u); call_ind(t); }
L_00441b11:; BB(0x00441b11);
    /* 00441b11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441b13: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441b16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441b17: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441b1c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441b1f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441b21: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441b24: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441b27u); call_ind(t); }
L_00441b27:; BB(0x00441b27);
    /* 00441b27: jmp 0x441c6a */ goto L_00441c6a;
L_00441b2c:; BB(0x00441b2c);
    /* 00441b2c: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00441b31: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00441b33: cmp dword ptr [eax + 0x1cc], 3 */ {  u32 a = R32((u32)(r_eax+0x1ccu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441b3a: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00441b3d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441b3f: je 0x441b77 */ if (fZ) goto L_00441b77;
L_00441b41:; BB(0x00441b41);
    /* 00441b41: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441b45: je 0x441b5c */ if (fZ) goto L_00441b5c;
L_00441b47:; BB(0x00441b47);
    /* 00441b47: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441b4b: je 0x441b5c */ if (fZ) goto L_00441b5c;
L_00441b4d:; BB(0x00441b4d);
    /* 00441b4d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00441b50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441b51: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441b54: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00441b56: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441b59: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441b5cu); call_ind(t); }
L_00441b5c:; BB(0x00441b5c);
    /* 00441b5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441b5e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441b61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441b62: push 0x8b1 */ { u32 v = 0x8b1u; r_esp -= 4; W32(r_esp, v); }
    /* 00441b67: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441b6a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441b6c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441b6f: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441b72u); call_ind(t); }
    /* 00441b72: jmp 0x441c6a */ goto L_00441c6a;
L_00441b77:; BB(0x00441b77);
    /* 00441b77: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441b7d: call 0x43be1e */ r_esp -= 4; W32(r_esp, 0x441b82u); f_0043be1e();
    /* 00441b82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441b84: je 0x441be9 */ if (fZ) goto L_00441be9;
L_00441b86:; BB(0x00441b86);
    /* 00441b86: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441b8c: call 0x43caff */ r_esp -= 4; W32(r_esp, 0x441b91u); f_0043caff();
    /* 00441b91: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441b94: jle 0x441be9 */ if ((fZ||fS!=fO)) goto L_00441be9;
L_00441b96:; BB(0x00441b96);
    /* 00441b96: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00441b9b: cmp dword ptr [eax + 0x1d0], 1 */ {  u32 a = R32((u32)(r_eax+0x1d0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441ba2: je 0x441bb3 */ if (fZ) goto L_00441bb3;
L_00441ba4:; BB(0x00441ba4);
    /* 00441ba4: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441baa: cmp dword ptr [ecx + 0x1d0], 4 */ {  u32 a = R32((u32)(r_ecx+0x1d0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441bb1: jne 0x441be9 */ if (!fZ) goto L_00441be9;
L_00441bb3:; BB(0x00441bb3);
    /* 00441bb3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441bb7: je 0x441bce */ if (fZ) goto L_00441bce;
L_00441bb9:; BB(0x00441bb9);
    /* 00441bb9: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441bbd: je 0x441bce */ if (fZ) goto L_00441bce;
L_00441bbf:; BB(0x00441bbf);
    /* 00441bbf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00441bc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441bc3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441bc6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00441bc8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441bcb: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441bceu); call_ind(t); }
L_00441bce:; BB(0x00441bce);
    /* 00441bce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441bd0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441bd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441bd4: push 0xdde */ { u32 v = 0xddeu; r_esp -= 4; W32(r_esp, v); }
    /* 00441bd9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441bdc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441bde: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441be1: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441be4u); call_ind(t); }
    /* 00441be4: jmp 0x441c6a */ goto L_00441c6a;
L_00441be9:; BB(0x00441be9);
    /* 00441be9: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441bef: call 0x43be1e */ r_esp -= 4; W32(r_esp, 0x441bf4u); f_0043be1e();
    /* 00441bf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441bf6: jne 0x441c39 */ if (!fZ) goto L_00441c39;
L_00441bf8:; BB(0x00441bf8);
    /* 00441bf8: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00441bfd: cmp dword ptr [eax + 0x1c8], 0 */ {  u32 a = R32((u32)(r_eax+0x1c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441c04: jne 0x441c39 */ if (!fZ) goto L_00441c39;
L_00441c06:; BB(0x00441c06);
    /* 00441c06: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441c0a: je 0x441c21 */ if (fZ) goto L_00441c21;
L_00441c0c:; BB(0x00441c0c);
    /* 00441c0c: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441c10: je 0x441c21 */ if (fZ) goto L_00441c21;
L_00441c12:; BB(0x00441c12);
    /* 00441c12: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00441c15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441c16: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00441c19: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00441c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441c1e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x441c21u); call_ind(t); }
L_00441c21:; BB(0x00441c21);
    /* 00441c21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441c23: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441c26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441c27: push 0x8e3 */ { u32 v = 0x8e3u; r_esp -= 4; W32(r_esp, v); }
    /* 00441c2c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441c2f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00441c31: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441c34: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x441c37u); call_ind(t); }
    /* 00441c37: jmp 0x441c6a */ goto L_00441c6a;
L_00441c39:; BB(0x00441c39);
    /* 00441c39: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441c3d: je 0x441c54 */ if (fZ) goto L_00441c54;
L_00441c3f:; BB(0x00441c3f);
    /* 00441c3f: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441c43: je 0x441c54 */ if (fZ) goto L_00441c54;
L_00441c45:; BB(0x00441c45);
    /* 00441c45: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00441c48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441c49: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00441c4c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00441c4e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441c51: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x441c54u); call_ind(t); }
L_00441c54:; BB(0x00441c54);
    /* 00441c54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441c56: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441c59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441c5a: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441c5f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441c62: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00441c64: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441c67: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x441c6au); call_ind(t); }
L_00441c6a:; BB(0x00441c6a);
    /* 00441c6a: jmp 0x441c9a */ goto L_00441c9a;
L_00441c6c:; BB(0x00441c6c);
    /* 00441c6c: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441c70: je 0x441c87 */ if (fZ) goto L_00441c87;
L_00441c72:; BB(0x00441c72);
    /* 00441c72: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441c76: je 0x441c87 */ if (fZ) goto L_00441c87;
L_00441c78:; BB(0x00441c78);
    /* 00441c78: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00441c7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441c7c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00441c7f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00441c81: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441c84: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x441c87u); call_ind(t); }
L_00441c87:; BB(0x00441c87);
    /* 00441c87: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441c8b: je 0x441c9a */ if (fZ) goto L_00441c9a;
L_00441c8d:; BB(0x00441c8d);
    /* 00441c8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441c8f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441c92: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441c94: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441c97: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x441c9au); call_ind(t); }
L_00441c9a:; BB(0x00441c9a);
    /* 00441c9a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441c9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441c9e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00441ca1: call 0x424886 */ r_esp -= 4; W32(r_esp, 0x441ca6u); f_00424886();
    /* 00441ca6: mov esp, ebp */ r_esp = r_ebp;
    /* 00441ca8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441ca9: ret 8 */ FN_RET(0x00441a2c); r_esp += 12; return;
}

void f_00441cac(void) /* FUN_00441cac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00441cac);
    /* 00441cac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441cad: mov ebp, esp */ r_ebp = r_esp;
    /* 00441caf: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441cb2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00441cb5: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00441cba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00441cbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441cc0: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x441cc5u); f_0043a8b5();
    /* 00441cc5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00441cc7: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00441cc9: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00441ccb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441ccd: jne 0x441d05 */ if (!fZ) goto L_00441d05;
L_00441ccf:; BB(0x00441ccf);
    /* 00441ccf: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441cd3: je 0x441cea */ if (fZ) goto L_00441cea;
L_00441cd5:; BB(0x00441cd5);
    /* 00441cd5: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441cd9: je 0x441cea */ if (fZ) goto L_00441cea;
L_00441cdb:; BB(0x00441cdb);
    /* 00441cdb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00441cde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441cdf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00441ce2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00441ce4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441ce7: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x441ceau); call_ind(t); }
L_00441cea:; BB(0x00441cea);
    /* 00441cea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441cec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441cef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00441cf0: push 0x915 */ { u32 v = 0x915u; r_esp -= 4; W32(r_esp, v); }
    /* 00441cf5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441cf8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00441cfa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441cfd: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x441d00u); call_ind(t); }
    /* 00441d00: jmp 0x441e9f */ goto L_00441e9f;
L_00441d05:; BB(0x00441d05);
    /* 00441d05: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441d0b: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x441d10u); f_0043a8b5();
    /* 00441d10: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00441d13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00441d16: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00441d19: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00441d1c: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00441d20: ja 0x441e6e */ if ((!fC&&!fZ)) goto L_00441e6e;
L_00441d26:; BB(0x00441d26);
    /* 00441d26: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00441d29: jmp dword ptr [edx*4 + 0x441ea5] */ { u32 t = R32((u32)(r_edx*4+0x441ea5u)); switch (t) { case 0x441d30u: goto L_00441d30; case 0x441d66u: goto L_00441d66; case 0x441d9cu: goto L_00441d9c; case 0x441e6eu: goto L_00441e6e; case 0x441dd2u: goto L_00441dd2; case 0x441e08u: goto L_00441e08; case 0x441e3bu: goto L_00441e3b; default: UNSUP(0x00441d29, "jump table entry is not a known target"); } }
L_00441d30:; BB(0x00441d30);
    /* 00441d30: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441d34: je 0x441d4b */ if (fZ) goto L_00441d4b;
L_00441d36:; BB(0x00441d36);
    /* 00441d36: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441d39: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441d3c: je 0x441d4b */ if (fZ) goto L_00441d4b;
L_00441d3e:; BB(0x00441d3e);
    /* 00441d3e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441d40: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441d43: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441d45: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441d48: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441d4bu); call_ind(t); }
L_00441d4b:; BB(0x00441d4b);
    /* 00441d4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441d4d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441d51: push 0xa0f */ { u32 v = 0xa0fu; r_esp -= 4; W32(r_esp, v); }
    /* 00441d56: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441d59: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441d5b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441d5e: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441d61u); call_ind(t); }
    /* 00441d61: jmp 0x441e9f */ goto L_00441e9f;
L_00441d66:; BB(0x00441d66);
    /* 00441d66: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441d6a: je 0x441d81 */ if (fZ) goto L_00441d81;
L_00441d6c:; BB(0x00441d6c);
    /* 00441d6c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441d6f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441d72: je 0x441d81 */ if (fZ) goto L_00441d81;
L_00441d74:; BB(0x00441d74);
    /* 00441d74: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441d76: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441d79: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441d7b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441d7e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441d81u); call_ind(t); }
L_00441d81:; BB(0x00441d81);
    /* 00441d81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441d83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441d86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441d87: push 0xa73 */ { u32 v = 0xa73u; r_esp -= 4; W32(r_esp, v); }
    /* 00441d8c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441d8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441d91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441d94: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441d97u); call_ind(t); }
    /* 00441d97: jmp 0x441e9f */ goto L_00441e9f;
L_00441d9c:; BB(0x00441d9c);
    /* 00441d9c: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441da0: je 0x441db7 */ if (fZ) goto L_00441db7;
L_00441da2:; BB(0x00441da2);
    /* 00441da2: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441da5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441da8: je 0x441db7 */ if (fZ) goto L_00441db7;
L_00441daa:; BB(0x00441daa);
    /* 00441daa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441dac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441daf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441db1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441db4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441db7u); call_ind(t); }
L_00441db7:; BB(0x00441db7);
    /* 00441db7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441db9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441dbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441dbd: push 0xabe */ { u32 v = 0xabeu; r_esp -= 4; W32(r_esp, v); }
    /* 00441dc2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441dc5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441dc7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441dca: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441dcdu); call_ind(t); }
    /* 00441dcd: jmp 0x441e9f */ goto L_00441e9f;
L_00441dd2:; BB(0x00441dd2);
    /* 00441dd2: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441dd6: je 0x441ded */ if (fZ) goto L_00441ded;
L_00441dd8:; BB(0x00441dd8);
    /* 00441dd8: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441ddb: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441dde: je 0x441ded */ if (fZ) goto L_00441ded;
L_00441de0:; BB(0x00441de0);
    /* 00441de0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441de2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441de5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441de7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441dea: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441dedu); call_ind(t); }
L_00441ded:; BB(0x00441ded);
    /* 00441ded: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441def: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441df2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441df3: push 0xb22 */ { u32 v = 0xb22u; r_esp -= 4; W32(r_esp, v); }
    /* 00441df8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441dfb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441dfd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441e00: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441e03u); call_ind(t); }
    /* 00441e03: jmp 0x441e9f */ goto L_00441e9f;
L_00441e08:; BB(0x00441e08);
    /* 00441e08: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441e0c: je 0x441e23 */ if (fZ) goto L_00441e23;
L_00441e0e:; BB(0x00441e0e);
    /* 00441e0e: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441e11: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441e14: je 0x441e23 */ if (fZ) goto L_00441e23;
L_00441e16:; BB(0x00441e16);
    /* 00441e16: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441e18: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441e1b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441e1d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441e20: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441e23u); call_ind(t); }
L_00441e23:; BB(0x00441e23);
    /* 00441e23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441e25: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441e28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441e29: push 0xb86 */ { u32 v = 0xb86u; r_esp -= 4; W32(r_esp, v); }
    /* 00441e2e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441e31: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441e33: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441e36: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441e39u); call_ind(t); }
    /* 00441e39: jmp 0x441e9f */ goto L_00441e9f;
L_00441e3b:; BB(0x00441e3b);
    /* 00441e3b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441e3f: je 0x441e56 */ if (fZ) goto L_00441e56;
L_00441e41:; BB(0x00441e41);
    /* 00441e41: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441e44: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441e47: je 0x441e56 */ if (fZ) goto L_00441e56;
L_00441e49:; BB(0x00441e49);
    /* 00441e49: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441e4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441e4e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441e50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441e53: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441e56u); call_ind(t); }
L_00441e56:; BB(0x00441e56);
    /* 00441e56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441e58: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441e5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441e5c: push 0xbd1 */ { u32 v = 0xbd1u; r_esp -= 4; W32(r_esp, v); }
    /* 00441e61: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441e64: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441e66: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441e69: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441e6cu); call_ind(t); }
    /* 00441e6c: jmp 0x441e9f */ goto L_00441e9f;
L_00441e6e:; BB(0x00441e6e);
    /* 00441e6e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441e72: je 0x441e89 */ if (fZ) goto L_00441e89;
L_00441e74:; BB(0x00441e74);
    /* 00441e74: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441e78: je 0x441e89 */ if (fZ) goto L_00441e89;
L_00441e7a:; BB(0x00441e7a);
    /* 00441e7a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00441e7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441e7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441e81: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441e83: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441e86: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441e89u); call_ind(t); }
L_00441e89:; BB(0x00441e89);
    /* 00441e89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441e8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441e8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441e8f: push 0x915 */ { u32 v = 0x915u; r_esp -= 4; W32(r_esp, v); }
    /* 00441e94: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441e97: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441e99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441e9c: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441e9fu); call_ind(t); }
L_00441e9f:; BB(0x00441e9f);
    /* 00441e9f: mov esp, ebp */ r_esp = r_ebp;
    /* 00441ea1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441ea2: ret 8 */ FN_RET(0x00441cac); r_esp += 12; return;
}

void f_00441ec1(void) /* FUN_00441ec1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00441ec1);
    /* 00441ec1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441ec2: mov ebp, esp */ r_ebp = r_esp;
    /* 00441ec4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441ec7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00441eca: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00441ed0: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x441ed5u); f_0043c73a();
    /* 00441ed5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00441ed8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441edb: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00441ede: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00441ee1: cmp dword ptr [ebp - 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00441ee5: ja 0x442141 */ if ((!fC&&!fZ)) goto L_00442141;
L_00441eeb:; BB(0x00441eeb);
    /* 00441eeb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00441eee: jmp dword ptr [ecx*4 + 0x44216f] */ { u32 t = R32((u32)(r_ecx*4+0x44216fu)); switch (t) { case 0x441ef5u: goto L_00441ef5; case 0x441f2bu: goto L_00441f2b; case 0x441f61u: goto L_00441f61; case 0x441f97u: goto L_00441f97; case 0x441fcdu: goto L_00441fcd; case 0x442003u: goto L_00442003; case 0x442039u: goto L_00442039; case 0x44206fu: goto L_0044206f; case 0x4420a5u: goto L_004420a5; case 0x4420dbu: goto L_004420db; case 0x44210eu: goto L_0044210e; default: UNSUP(0x00441eee, "jump table entry is not a known target"); } }
L_00441ef5:; BB(0x00441ef5);
    /* 00441ef5: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441ef9: je 0x441f10 */ if (fZ) goto L_00441f10;
L_00441efb:; BB(0x00441efb);
    /* 00441efb: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00441efe: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441f01: je 0x441f10 */ if (fZ) goto L_00441f10;
L_00441f03:; BB(0x00441f03);
    /* 00441f03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441f05: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441f08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00441f0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441f0d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441f10u); call_ind(t); }
L_00441f10:; BB(0x00441f10);
    /* 00441f10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441f12: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441f15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441f16: push 0x947 */ { u32 v = 0x947u; r_esp -= 4; W32(r_esp, v); }
    /* 00441f1b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441f1e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441f20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441f23: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441f26u); call_ind(t); }
    /* 00441f26: jmp 0x442169 */ goto L_00442169;
L_00441f2b:; BB(0x00441f2b);
    /* 00441f2b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441f2f: je 0x441f46 */ if (fZ) goto L_00441f46;
L_00441f31:; BB(0x00441f31);
    /* 00441f31: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441f34: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441f37: je 0x441f46 */ if (fZ) goto L_00441f46;
L_00441f39:; BB(0x00441f39);
    /* 00441f39: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441f3b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441f3e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441f40: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441f43: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441f46u); call_ind(t); }
L_00441f46:; BB(0x00441f46);
    /* 00441f46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441f48: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441f4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441f4c: push 0x979 */ { u32 v = 0x979u; r_esp -= 4; W32(r_esp, v); }
    /* 00441f51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441f54: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441f56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441f59: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441f5cu); call_ind(t); }
    /* 00441f5c: jmp 0x442169 */ goto L_00442169;
L_00441f61:; BB(0x00441f61);
    /* 00441f61: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441f65: je 0x441f7c */ if (fZ) goto L_00441f7c;
L_00441f67:; BB(0x00441f67);
    /* 00441f67: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441f6a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441f6d: je 0x441f7c */ if (fZ) goto L_00441f7c;
L_00441f6f:; BB(0x00441f6f);
    /* 00441f6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441f71: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441f74: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441f76: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441f79: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441f7cu); call_ind(t); }
L_00441f7c:; BB(0x00441f7c);
    /* 00441f7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441f7e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441f81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441f82: push 0x9f6 */ { u32 v = 0x9f6u; r_esp -= 4; W32(r_esp, v); }
    /* 00441f87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441f8a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441f8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441f8f: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441f92u); call_ind(t); }
    /* 00441f92: jmp 0x442169 */ goto L_00442169;
L_00441f97:; BB(0x00441f97);
    /* 00441f97: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441f9b: je 0x441fb2 */ if (fZ) goto L_00441fb2;
L_00441f9d:; BB(0x00441f9d);
    /* 00441f9d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441fa0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441fa3: je 0x441fb2 */ if (fZ) goto L_00441fb2;
L_00441fa5:; BB(0x00441fa5);
    /* 00441fa5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441fa7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441faa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441fac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441faf: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441fb2u); call_ind(t); }
L_00441fb2:; BB(0x00441fb2);
    /* 00441fb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441fb4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441fb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441fb8: push 0xa5a */ { u32 v = 0xa5au; r_esp -= 4; W32(r_esp, v); }
    /* 00441fbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441fc0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441fc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441fc5: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441fc8u); call_ind(t); }
    /* 00441fc8: jmp 0x442169 */ goto L_00442169;
L_00441fcd:; BB(0x00441fcd);
    /* 00441fcd: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441fd1: je 0x441fe8 */ if (fZ) goto L_00441fe8;
L_00441fd3:; BB(0x00441fd3);
    /* 00441fd3: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441fd6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441fd9: je 0x441fe8 */ if (fZ) goto L_00441fe8;
L_00441fdb:; BB(0x00441fdb);
    /* 00441fdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441fdd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441fe0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441fe2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00441fe5: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x441fe8u); call_ind(t); }
L_00441fe8:; BB(0x00441fe8);
    /* 00441fe8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441fea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00441fed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441fee: push 0xaa5 */ { u32 v = 0xaa5u; r_esp -= 4; W32(r_esp, v); }
    /* 00441ff3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441ff6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441ff8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00441ffb: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x441ffeu); call_ind(t); }
    /* 00441ffe: jmp 0x442169 */ goto L_00442169;
L_00442003:; BB(0x00442003);
    /* 00442003: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442007: je 0x44201e */ if (fZ) goto L_0044201e;
L_00442009:; BB(0x00442009);
    /* 00442009: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044200c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044200f: je 0x44201e */ if (fZ) goto L_0044201e;
L_00442011:; BB(0x00442011);
    /* 00442011: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442013: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442016: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442018: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044201b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x44201eu); call_ind(t); }
L_0044201e:; BB(0x0044201e);
    /* 0044201e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442020: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00442023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442024: push 0x87f */ { u32 v = 0x87fu; r_esp -= 4; W32(r_esp, v); }
    /* 00442029: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044202c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044202e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442031: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x442034u); call_ind(t); }
    /* 00442034: jmp 0x442169 */ goto L_00442169;
L_00442039:; BB(0x00442039);
    /* 00442039: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044203d: je 0x442054 */ if (fZ) goto L_00442054;
L_0044203f:; BB(0x0044203f);
    /* 0044203f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442042: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442045: je 0x442054 */ if (fZ) goto L_00442054;
L_00442047:; BB(0x00442047);
    /* 00442047: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442049: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044204c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044204e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442051: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442054u); call_ind(t); }
L_00442054:; BB(0x00442054);
    /* 00442054: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442056: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00442059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044205a: push 0xb09 */ { u32 v = 0xb09u; r_esp -= 4; W32(r_esp, v); }
    /* 0044205f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442062: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442064: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442067: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x44206au); call_ind(t); }
    /* 0044206a: jmp 0x442169 */ goto L_00442169;
L_0044206f:; BB(0x0044206f);
    /* 0044206f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442073: je 0x44208a */ if (fZ) goto L_0044208a;
L_00442075:; BB(0x00442075);
    /* 00442075: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442078: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044207b: je 0x44208a */ if (fZ) goto L_0044208a;
L_0044207d:; BB(0x0044207d);
    /* 0044207d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044207f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442082: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442084: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442087: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x44208au); call_ind(t); }
L_0044208a:; BB(0x0044208a);
    /* 0044208a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044208c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044208f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442090: push 0xb6d */ { u32 v = 0xb6du; r_esp -= 4; W32(r_esp, v); }
    /* 00442095: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442098: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044209a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044209d: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4420a0u); call_ind(t); }
    /* 004420a0: jmp 0x442169 */ goto L_00442169;
L_004420a5:; BB(0x004420a5);
    /* 004420a5: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004420a9: je 0x4420c0 */ if (fZ) goto L_004420c0;
L_004420ab:; BB(0x004420ab);
    /* 004420ab: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004420ae: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004420b1: je 0x4420c0 */ if (fZ) goto L_004420c0;
L_004420b3:; BB(0x004420b3);
    /* 004420b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004420b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004420b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004420ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004420bd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4420c0u); call_ind(t); }
L_004420c0:; BB(0x004420c0);
    /* 004420c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004420c2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004420c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004420c6: push 0xbb8 */ { u32 v = 0xbb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004420cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004420ce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004420d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004420d3: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4420d6u); call_ind(t); }
    /* 004420d6: jmp 0x442169 */ goto L_00442169;
L_004420db:; BB(0x004420db);
    /* 004420db: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004420df: je 0x4420f6 */ if (fZ) goto L_004420f6;
L_004420e1:; BB(0x004420e1);
    /* 004420e1: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004420e4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004420e7: je 0x4420f6 */ if (fZ) goto L_004420f6;
L_004420e9:; BB(0x004420e9);
    /* 004420e9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004420eb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004420ee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004420f0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004420f3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4420f6u); call_ind(t); }
L_004420f6:; BB(0x004420f6);
    /* 004420f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004420f8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004420fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004420fc: push 0x898 */ { u32 v = 0x898u; r_esp -= 4; W32(r_esp, v); }
    /* 00442101: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442104: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442106: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442109: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x44210cu); call_ind(t); }
    /* 0044210c: jmp 0x442169 */ goto L_00442169;
L_0044210e:; BB(0x0044210e);
    /* 0044210e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442112: je 0x442129 */ if (fZ) goto L_00442129;
L_00442114:; BB(0x00442114);
    /* 00442114: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442117: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044211a: je 0x442129 */ if (fZ) goto L_00442129;
L_0044211c:; BB(0x0044211c);
    /* 0044211c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044211e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442121: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442123: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442126: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442129u); call_ind(t); }
L_00442129:; BB(0x00442129);
    /* 00442129: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044212b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044212e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044212f: push 0x9ab */ { u32 v = 0x9abu; r_esp -= 4; W32(r_esp, v); }
    /* 00442134: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442137: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442139: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044213c: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x44213fu); call_ind(t); }
    /* 0044213f: jmp 0x442169 */ goto L_00442169;
L_00442141:; BB(0x00442141);
    /* 00442141: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442145: je 0x442169 */ if (fZ) goto L_00442169;
L_00442147:; BB(0x00442147);
    /* 00442147: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044214b: je 0x44215c */ if (fZ) goto L_0044215c;
L_0044214d:; BB(0x0044214d);
    /* 0044214d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00442150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442151: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442154: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442156: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442159: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x44215cu); call_ind(t); }
L_0044215c:; BB(0x0044215c);
    /* 0044215c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044215e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00442161: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442163: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442166: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x442169u); call_ind(t); }
L_00442169:; BB(0x00442169);
    /* 00442169: mov esp, ebp */ r_esp = r_ebp;
    /* 0044216b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044216c: ret 8 */ FN_RET(0x00441ec1); r_esp += 12; return;
}

void f_0044219b(void) /* FUN_0044219b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044219b);
    /* 0044219b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044219c: mov ebp, esp */ r_ebp = r_esp;
    /* 0044219e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004421a1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004421a4: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 004421aa: call 0x43c73a */ r_esp -= 4; W32(r_esp, 0x4421afu); f_0043c73a();
    /* 004421af: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004421b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004421b5: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004421b8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004421bb: cmp dword ptr [ebp - 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004421bf: ja 0x4425a9 */ if ((!fC&&!fZ)) goto L_004425a9;
L_004421c5:; BB(0x004421c5);
    /* 004421c5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004421c8: jmp dword ptr [ecx*4 + 0x4425d7] */ { u32 t = R32((u32)(r_ecx*4+0x4425d7u)); switch (t) { case 0x4421cfu: goto L_004421cf; case 0x442249u: goto L_00442249; case 0x4422c3u: goto L_004422c3; case 0x44233bu: goto L_0044233b; case 0x442371u: goto L_00442371; case 0x4423e9u: goto L_004423e9; case 0x44241fu: goto L_0044241f; case 0x442497u: goto L_00442497; case 0x4424cdu: goto L_004424cd; case 0x442545u: goto L_00442545; case 0x442578u: goto L_00442578; default: UNSUP(0x004421c8, "jump table entry is not a known target"); } }
L_004421cf:; BB(0x004421cf);
    /* 004421cf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004421d1: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 004421d7: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x4421dcu); f_0043c7a1();
    /* 004421dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004421de: je 0x442213 */ if (fZ) goto L_00442213;
L_004421e0:; BB(0x004421e0);
    /* 004421e0: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004421e4: je 0x4421fb */ if (fZ) goto L_004421fb;
L_004421e6:; BB(0x004421e6);
    /* 004421e6: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004421e9: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004421ec: je 0x4421fb */ if (fZ) goto L_004421fb;
L_004421ee:; BB(0x004421ee);
    /* 004421ee: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004421f0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004421f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004421f5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004421f8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4421fbu); call_ind(t); }
L_004421fb:; BB(0x004421fb);
    /* 004421fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004421fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00442200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442201: push 0x9c4 */ { u32 v = 0x9c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00442206: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442209: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044220b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044220e: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x442211u); call_ind(t); }
    /* 00442211: jmp 0x442244 */ goto L_00442244;
L_00442213:; BB(0x00442213);
    /* 00442213: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442217: je 0x44222e */ if (fZ) goto L_0044222e;
L_00442219:; BB(0x00442219);
    /* 00442219: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044221c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044221f: je 0x44222e */ if (fZ) goto L_0044222e;
L_00442221:; BB(0x00442221);
    /* 00442221: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442223: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442226: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442228: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044222b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x44222eu); call_ind(t); }
L_0044222e:; BB(0x0044222e);
    /* 0044222e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442230: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00442233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442234: push 0x92e */ { u32 v = 0x92eu; r_esp -= 4; W32(r_esp, v); }
    /* 00442239: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044223c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044223e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442241: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x442244u); call_ind(t); }
L_00442244:; BB(0x00442244);
    /* 00442244: jmp 0x4425d1 */ goto L_004425d1;
L_00442249:; BB(0x00442249);
    /* 00442249: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044224b: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00442251: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x442256u); f_0043c7a1();
    /* 00442256: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442258: je 0x44228d */ if (fZ) goto L_0044228d;
L_0044225a:; BB(0x0044225a);
    /* 0044225a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044225e: je 0x442275 */ if (fZ) goto L_00442275;
L_00442260:; BB(0x00442260);
    /* 00442260: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442263: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442266: je 0x442275 */ if (fZ) goto L_00442275;
L_00442268:; BB(0x00442268);
    /* 00442268: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044226a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044226d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044226f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442272: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442275u); call_ind(t); }
L_00442275:; BB(0x00442275);
    /* 00442275: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442277: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044227a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044227b: push 0x9c4 */ { u32 v = 0x9c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00442280: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442283: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442285: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442288: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x44228bu); call_ind(t); }
    /* 0044228b: jmp 0x4422be */ goto L_004422be;
L_0044228d:; BB(0x0044228d);
    /* 0044228d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442291: je 0x4422a8 */ if (fZ) goto L_004422a8;
L_00442293:; BB(0x00442293);
    /* 00442293: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442296: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442299: je 0x4422a8 */ if (fZ) goto L_004422a8;
L_0044229b:; BB(0x0044229b);
    /* 0044229b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044229d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004422a0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004422a2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004422a5: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4422a8u); call_ind(t); }
L_004422a8:; BB(0x004422a8);
    /* 004422a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004422aa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004422ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004422ae: push 0x960 */ { u32 v = 0x960u; r_esp -= 4; W32(r_esp, v); }
    /* 004422b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004422b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004422b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004422bb: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4422beu); call_ind(t); }
L_004422be:; BB(0x004422be);
    /* 004422be: jmp 0x4425d1 */ goto L_004425d1;
L_004422c3:; BB(0x004422c3);
    /* 004422c3: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 004422c9: call 0x43ca75 */ r_esp -= 4; W32(r_esp, 0x4422ceu); f_0043ca75();
    /* 004422ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004422d0: je 0x442305 */ if (fZ) goto L_00442305;
L_004422d2:; BB(0x004422d2);
    /* 004422d2: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004422d6: je 0x4422ed */ if (fZ) goto L_004422ed;
L_004422d8:; BB(0x004422d8);
    /* 004422d8: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004422db: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004422de: je 0x4422ed */ if (fZ) goto L_004422ed;
L_004422e0:; BB(0x004422e0);
    /* 004422e0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004422e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004422e5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004422e7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004422ea: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4422edu); call_ind(t); }
L_004422ed:; BB(0x004422ed);
    /* 004422ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004422ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004422f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004422f3: push 0xa28 */ { u32 v = 0xa28u; r_esp -= 4; W32(r_esp, v); }
    /* 004422f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004422fb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004422fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442300: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x442303u); call_ind(t); }
    /* 00442303: jmp 0x442336 */ goto L_00442336;
L_00442305:; BB(0x00442305);
    /* 00442305: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442309: je 0x442320 */ if (fZ) goto L_00442320;
L_0044230b:; BB(0x0044230b);
    /* 0044230b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044230e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442311: je 0x442320 */ if (fZ) goto L_00442320;
L_00442313:; BB(0x00442313);
    /* 00442313: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442315: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442318: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044231a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044231d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442320u); call_ind(t); }
L_00442320:; BB(0x00442320);
    /* 00442320: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442322: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00442325: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442326: push 0x9dd */ { u32 v = 0x9ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0044232b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044232e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442330: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442333: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x442336u); call_ind(t); }
L_00442336:; BB(0x00442336);
    /* 00442336: jmp 0x4425d1 */ goto L_004425d1;
L_0044233b:; BB(0x0044233b);
    /* 0044233b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044233f: je 0x442356 */ if (fZ) goto L_00442356;
L_00442341:; BB(0x00442341);
    /* 00442341: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442344: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442347: je 0x442356 */ if (fZ) goto L_00442356;
L_00442349:; BB(0x00442349);
    /* 00442349: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044234b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044234e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442350: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442353: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442356u); call_ind(t); }
L_00442356:; BB(0x00442356);
    /* 00442356: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442358: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044235b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044235c: push 0xa41 */ { u32 v = 0xa41u; r_esp -= 4; W32(r_esp, v); }
    /* 00442361: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442364: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442366: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442369: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x44236cu); call_ind(t); }
    /* 0044236c: jmp 0x4425d1 */ goto L_004425d1;
L_00442371:; BB(0x00442371);
    /* 00442371: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00442377: call 0x43ca75 */ r_esp -= 4; W32(r_esp, 0x44237cu); f_0043ca75();
    /* 0044237c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044237e: je 0x4423b3 */ if (fZ) goto L_004423b3;
L_00442380:; BB(0x00442380);
    /* 00442380: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442384: je 0x44239b */ if (fZ) goto L_0044239b;
L_00442386:; BB(0x00442386);
    /* 00442386: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442389: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044238c: je 0x44239b */ if (fZ) goto L_0044239b;
L_0044238e:; BB(0x0044238e);
    /* 0044238e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442390: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442393: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442395: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442398: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x44239bu); call_ind(t); }
L_0044239b:; BB(0x0044239b);
    /* 0044239b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044239d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004423a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004423a1: push 0xad7 */ { u32 v = 0xad7u; r_esp -= 4; W32(r_esp, v); }
    /* 004423a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004423a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004423ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004423ae: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4423b1u); call_ind(t); }
    /* 004423b1: jmp 0x4423e4 */ goto L_004423e4;
L_004423b3:; BB(0x004423b3);
    /* 004423b3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004423b7: je 0x4423ce */ if (fZ) goto L_004423ce;
L_004423b9:; BB(0x004423b9);
    /* 004423b9: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004423bc: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004423bf: je 0x4423ce */ if (fZ) goto L_004423ce;
L_004423c1:; BB(0x004423c1);
    /* 004423c1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004423c3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004423c6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004423c8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004423cb: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4423ceu); call_ind(t); }
L_004423ce:; BB(0x004423ce);
    /* 004423ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004423d0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004423d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004423d4: push 0xa8c */ { u32 v = 0xa8cu; r_esp -= 4; W32(r_esp, v); }
    /* 004423d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004423dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004423de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004423e1: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4423e4u); call_ind(t); }
L_004423e4:; BB(0x004423e4);
    /* 004423e4: jmp 0x4425d1 */ goto L_004425d1;
L_004423e9:; BB(0x004423e9);
    /* 004423e9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004423ed: je 0x442404 */ if (fZ) goto L_00442404;
L_004423ef:; BB(0x004423ef);
    /* 004423ef: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004423f2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004423f5: je 0x442404 */ if (fZ) goto L_00442404;
L_004423f7:; BB(0x004423f7);
    /* 004423f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004423f9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004423fc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004423fe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442401: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442404u); call_ind(t); }
L_00442404:; BB(0x00442404);
    /* 00442404: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442406: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00442409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044240a: push 0x8fc */ { u32 v = 0x8fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0044240f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442412: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442414: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442417: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x44241au); call_ind(t); }
    /* 0044241a: jmp 0x4425d1 */ goto L_004425d1;
L_0044241f:; BB(0x0044241f);
    /* 0044241f: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00442425: call 0x43ca75 */ r_esp -= 4; W32(r_esp, 0x44242au); f_0043ca75();
    /* 0044242a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044242c: je 0x442461 */ if (fZ) goto L_00442461;
L_0044242e:; BB(0x0044242e);
    /* 0044242e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442432: je 0x442449 */ if (fZ) goto L_00442449;
L_00442434:; BB(0x00442434);
    /* 00442434: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442437: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044243a: je 0x442449 */ if (fZ) goto L_00442449;
L_0044243c:; BB(0x0044243c);
    /* 0044243c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044243e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442441: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442443: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442446: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442449u); call_ind(t); }
L_00442449:; BB(0x00442449);
    /* 00442449: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044244b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044244e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044244f: push 0xb3b */ { u32 v = 0xb3bu; r_esp -= 4; W32(r_esp, v); }
    /* 00442454: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442457: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442459: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044245c: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x44245fu); call_ind(t); }
    /* 0044245f: jmp 0x442492 */ goto L_00442492;
L_00442461:; BB(0x00442461);
    /* 00442461: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442465: je 0x44247c */ if (fZ) goto L_0044247c;
L_00442467:; BB(0x00442467);
    /* 00442467: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044246a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044246d: je 0x44247c */ if (fZ) goto L_0044247c;
L_0044246f:; BB(0x0044246f);
    /* 0044246f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442471: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442474: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442476: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442479: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x44247cu); call_ind(t); }
L_0044247c:; BB(0x0044247c);
    /* 0044247c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044247e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00442481: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442482: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442487: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044248a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044248c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044248f: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x442492u); call_ind(t); }
L_00442492:; BB(0x00442492);
    /* 00442492: jmp 0x4425d1 */ goto L_004425d1;
L_00442497:; BB(0x00442497);
    /* 00442497: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044249b: je 0x4424b2 */ if (fZ) goto L_004424b2;
L_0044249d:; BB(0x0044249d);
    /* 0044249d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004424a0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004424a3: je 0x4424b2 */ if (fZ) goto L_004424b2;
L_004424a5:; BB(0x004424a5);
    /* 004424a5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004424a7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004424aa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004424ac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004424af: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4424b2u); call_ind(t); }
L_004424b2:; BB(0x004424b2);
    /* 004424b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004424b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004424b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004424b8: push 0xb54 */ { u32 v = 0xb54u; r_esp -= 4; W32(r_esp, v); }
    /* 004424bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004424c0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004424c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004424c5: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4424c8u); call_ind(t); }
    /* 004424c8: jmp 0x4425d1 */ goto L_004425d1;
L_004424cd:; BB(0x004424cd);
    /* 004424cd: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 004424d3: call 0x43ca75 */ r_esp -= 4; W32(r_esp, 0x4424d8u); f_0043ca75();
    /* 004424d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004424da: je 0x44250f */ if (fZ) goto L_0044250f;
L_004424dc:; BB(0x004424dc);
    /* 004424dc: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004424e0: je 0x4424f7 */ if (fZ) goto L_004424f7;
L_004424e2:; BB(0x004424e2);
    /* 004424e2: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004424e5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004424e8: je 0x4424f7 */ if (fZ) goto L_004424f7;
L_004424ea:; BB(0x004424ea);
    /* 004424ea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004424ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004424ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004424f1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004424f4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4424f7u); call_ind(t); }
L_004424f7:; BB(0x004424f7);
    /* 004424f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004424f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004424fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004424fd: push 0xbea */ { u32 v = 0xbeau; r_esp -= 4; W32(r_esp, v); }
    /* 00442502: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442505: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442507: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044250a: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x44250du); call_ind(t); }
    /* 0044250d: jmp 0x442540 */ goto L_00442540;
L_0044250f:; BB(0x0044250f);
    /* 0044250f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442513: je 0x44252a */ if (fZ) goto L_0044252a;
L_00442515:; BB(0x00442515);
    /* 00442515: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442518: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044251b: je 0x44252a */ if (fZ) goto L_0044252a;
L_0044251d:; BB(0x0044251d);
    /* 0044251d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044251f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442522: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442524: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442527: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x44252au); call_ind(t); }
L_0044252a:; BB(0x0044252a);
    /* 0044252a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044252c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044252f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442530: push 0xb9f */ { u32 v = 0xb9fu; r_esp -= 4; W32(r_esp, v); }
    /* 00442535: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442538: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044253a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044253d: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x442540u); call_ind(t); }
L_00442540:; BB(0x00442540);
    /* 00442540: jmp 0x4425d1 */ goto L_004425d1;
L_00442545:; BB(0x00442545);
    /* 00442545: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442549: je 0x442560 */ if (fZ) goto L_00442560;
L_0044254b:; BB(0x0044254b);
    /* 0044254b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044254e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442551: je 0x442560 */ if (fZ) goto L_00442560;
L_00442553:; BB(0x00442553);
    /* 00442553: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442555: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00442558: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044255a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044255d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442560u); call_ind(t); }
L_00442560:; BB(0x00442560);
    /* 00442560: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442562: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00442565: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442566: push 0xc03 */ { u32 v = 0xc03u; r_esp -= 4; W32(r_esp, v); }
    /* 0044256b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044256e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442570: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442573: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x442576u); call_ind(t); }
    /* 00442576: jmp 0x4425d1 */ goto L_004425d1;
L_00442578:; BB(0x00442578);
    /* 00442578: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044257a: mov ecx, dword ptr [0x6f5fec] */ r_ecx = R32((u32)(0x6f5fecu));
    /* 00442580: call 0x43c7a1 */ r_esp -= 4; W32(r_esp, 0x442585u); f_0043c7a1();
    /* 00442585: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442587: je 0x442599 */ if (fZ) goto L_00442599;
L_00442589:; BB(0x00442589);
    /* 00442589: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044258b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044258e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044258f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442592: call 0x4426e0 */ r_esp -= 4; W32(r_esp, 0x442597u); f_004426e0();
    /* 00442597: jmp 0x4425a7 */ goto L_004425a7;
L_00442599:; BB(0x00442599);
    /* 00442599: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044259b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044259e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044259f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004425a2: call 0x4426a0 */ r_esp -= 4; W32(r_esp, 0x4425a7u); f_004426a0();
L_004425a7:; BB(0x004425a7);
    /* 004425a7: jmp 0x4425d1 */ goto L_004425d1;
L_004425a9:; BB(0x004425a9);
    /* 004425a9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004425ad: je 0x4425d1 */ if (fZ) goto L_004425d1;
L_004425af:; BB(0x004425af);
    /* 004425af: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004425b3: je 0x4425c4 */ if (fZ) goto L_004425c4;
L_004425b5:; BB(0x004425b5);
    /* 004425b5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004425b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004425b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004425bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004425be: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004425c1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4425c4u); call_ind(t); }
L_004425c4:; BB(0x004425c4);
    /* 004425c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004425c6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004425c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004425cb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004425ce: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4425d1u); call_ind(t); }
L_004425d1:; BB(0x004425d1);
    /* 004425d1: mov esp, ebp */ r_esp = r_ebp;
    /* 004425d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004425d4: ret 8 */ FN_RET(0x0044219b); r_esp += 12; return;
}

void f_00442603(void) /* FUN_00442603 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00442603);
    /* 00442603: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00442604: mov ebp, esp */ r_ebp = r_esp;
    /* 00442606: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00442609: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044260c: mov eax, dword ptr [0x6f5fec] */ r_eax = R32((u32)(0x6f5fecu));
    /* 00442611: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00442614: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442617: call 0x43a8b5 */ r_esp -= 4; W32(r_esp, 0x44261cu); f_0043a8b5();
    /* 0044261c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0044261e: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00442620: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00442622: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442624: jne 0x44263c */ if (!fZ) goto L_0044263c;
L_00442626:; BB(0x00442626);
    /* 00442626: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442628: mov ecx, dword ptr [0x6f5fe8] */ r_ecx = R32((u32)(0x6f5fe8u));
    /* 0044262e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00442631: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00442632: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00442635: call 0x441ec1 */ r_esp -= 4; W32(r_esp, 0x44263au); f_00441ec1();
    /* 0044263a: jmp 0x44264f */ goto L_0044264f;
L_0044263c:; BB(0x0044263c);
    /* 0044263c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044263e: mov eax, dword ptr [0x6f5fe8] */ r_eax = R32((u32)(0x6f5fe8u));
    /* 00442643: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00442646: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00442647: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044264a: call 0x44219b */ r_esp -= 4; W32(r_esp, 0x44264fu); f_0044219b();
L_0044264f:; BB(0x0044264f);
    /* 0044264f: mov esp, ebp */ r_esp = r_ebp;
    /* 00442651: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00442652: ret 8 */ FN_RET(0x00442603); r_esp += 12; return;
}

void f_00442660(void) /* FUN_00442660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00442660);
    /* 00442660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00442661: mov ebp, esp */ r_ebp = r_esp;
    /* 00442663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00442664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00442667: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044266a: mov dword ptr [eax], 0x634b74 */ W32((u32)(r_eax), 0x634b74u);
    /* 00442670: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442673: call 0x5d7927 */ r_esp -= 4; W32(r_esp, 0x442678u); f_005d7927();
    /* 00442678: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044267b: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0044267e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442680: je 0x44268e */ if (fZ) goto L_0044268e;
L_00442682:; BB(0x00442682);
    /* 00442682: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442685: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00442686: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x44268bu); f_0048ac1b();
    /* 0044268b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044268e:; BB(0x0044268e);
    /* 0044268e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442691: mov esp, ebp */ r_esp = r_ebp;
    /* 00442693: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00442694: ret 4 */ FN_RET(0x00442660); r_esp += 8; return;
}

void f_004426a0(void) /* FUN_004426a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004426a0);
    /* 004426a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004426a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004426a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004426a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004426a7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004426ab: je 0x4426c2 */ if (fZ) goto L_004426c2;
L_004426ad:; BB(0x004426ad);
    /* 004426ad: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004426b1: je 0x4426c2 */ if (fZ) goto L_004426c2;
L_004426b3:; BB(0x004426b3);
    /* 004426b3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004426b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004426b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004426ba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004426bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004426bf: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4426c2u); call_ind(t); }
L_004426c2:; BB(0x004426c2);
    /* 004426c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004426c4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004426c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004426c8: push 0x992 */ { u32 v = 0x992u; r_esp -= 4; W32(r_esp, v); }
    /* 004426cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004426d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004426d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004426d5: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4426d8u); call_ind(t); }
    /* 004426d8: mov esp, ebp */ r_esp = r_ebp;
    /* 004426da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004426db: ret 8 */ FN_RET(0x004426a0); r_esp += 12; return;
}

void f_004426e0(void) /* FUN_004426e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004426e0);
    /* 004426e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004426e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004426e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004426e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004426e7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004426eb: je 0x442702 */ if (fZ) goto L_00442702;
L_004426ed:; BB(0x004426ed);
    /* 004426ed: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004426f1: je 0x442702 */ if (fZ) goto L_00442702;
L_004426f3:; BB(0x004426f3);
    /* 004426f3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004426f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004426f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004426fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004426fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004426ff: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442702u); call_ind(t); }
L_00442702:; BB(0x00442702);
    /* 00442702: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442704: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00442707: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442708: push 0x9c4 */ { u32 v = 0x9c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044270d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442710: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442712: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442715: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x442718u); call_ind(t); }
    /* 00442718: mov esp, ebp */ r_esp = r_ebp;
    /* 0044271a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044271b: ret 8 */ FN_RET(0x004426e0); r_esp += 12; return;
}

void f_00442720(void) /* FUN_00442720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00442720);
    /* 00442720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00442721: mov ebp, esp */ r_ebp = r_esp;
    /* 00442723: sub esp, 0x13c */ {  u32 a = r_esp; u32 b = 0x13cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00442729: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 0044272f: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442735: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x44273au); f_005e9d30();
    /* 0044273a: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442740: mov dword ptr [eax], 0x634bac */ W32((u32)(r_eax), 0x634bacu);
    /* 00442746: mov byte ptr [ebp - 0xac], 0 */ W8((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 0044274d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00442754: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 0044275e: jmp 0x44276f */ goto L_0044276f;
L_00442760:; BB(0x00442760);
    /* 00442760: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00442766: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00442769: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
L_0044276f:; BB(0x0044276f);
    /* 0044276f: cmp dword ptr [ebp - 0xa4], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00442776: jge 0x442791 */ if ((fS==fO)) goto L_00442791;
L_00442778:; BB(0x00442778);
    /* 00442778: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0044277e: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442784: mov dword ptr [eax + edx*4 + 0x8c], 0 */ W32((u32)(r_eax+r_edx*4+0x8cu), 0x0u);
    /* 0044278f: jmp 0x442760 */ goto L_00442760;
L_00442791:; BB(0x00442791);
    /* 00442791: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 0044279b: jmp 0x4427ac */ goto L_004427ac;
L_0044279d:; BB(0x0044279d);
    /* 0044279d: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 004427a3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004427a6: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
L_004427ac:; BB(0x004427ac);
    /* 004427ac: cmp dword ptr [ebp - 0xa4], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004427b3: jge 0x4427cb */ if ((fS==fO)) goto L_004427cb;
L_004427b5:; BB(0x004427b5);
    /* 004427b5: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 004427bb: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004427c1: mov dword ptr [eax + edx*4 + 0x78], 0 */ W32((u32)(r_eax+r_edx*4+0x78u), 0x0u);
    /* 004427c9: jmp 0x44279d */ goto L_0044279d;
L_004427cb:; BB(0x004427cb);
    /* 004427cb: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 004427d1: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
    /* 004427d8: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004427de: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 004427e5: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004427eb: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 004427f2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004427f4: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004427fa: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x4427ffu); f_0045b93e();
    /* 004427ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442801: jne 0x44285c */ if (!fZ) goto L_0044285c;
L_00442803:; BB(0x00442803);
    /* 00442803: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00442805: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0044280b: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x442810u); f_0045b93e();
    /* 00442810: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442812: jne 0x44285c */ if (!fZ) goto L_0044285c;
L_00442814:; BB(0x00442814);
    /* 00442814: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00442816: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0044281c: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x442821u); f_0045b93e();
    /* 00442821: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442823: jne 0x44285c */ if (!fZ) goto L_0044285c;
L_00442825:; BB(0x00442825);
    /* 00442825: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00442827: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0044282d: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x442832u); f_0045b93e();
    /* 00442832: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442834: jne 0x44285c */ if (!fZ) goto L_0044285c;
L_00442836:; BB(0x00442836);
    /* 00442836: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00442838: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0044283e: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x442843u); f_0045b93e();
    /* 00442843: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442845: jne 0x44285c */ if (!fZ) goto L_0044285c;
L_00442847:; BB(0x00442847);
    /* 00442847: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00442849: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0044284f: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x442854u); f_0045b93e();
    /* 00442854: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442856: je 0x442a5a */ if (fZ) goto L_00442a5a;
L_0044285c:; BB(0x0044285c);
    /* 0044285c: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00442861: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x442866u); f_0048ab58();
    /* 00442866: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442869: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0044286f: cmp dword ptr [ebp - 0xb0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442876: je 0x44288b */ if (fZ) goto L_0044288b;
L_00442878:; BB(0x00442878);
    /* 00442878: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0044287e: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x442883u); f_005e8590();
    /* 00442883: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 00442889: jmp 0x442895 */ goto L_00442895;
L_0044288b:; BB(0x0044288b);
    /* 0044288b: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_00442895:; BB(0x00442895);
    /* 00442895: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044289b: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 004428a1: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 004428a4: push 0x6f67e0 */ { u32 v = 0x6f67e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004428a9: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004428af: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004428b2: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004428b8: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004428bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004428bd: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4428c0u); call_ind(t); }
    /* 004428c0: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004428c6: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004428c9: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004428cf: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004428d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004428d4: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4428d7u); call_ind(t); }
    /* 004428d7: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 004428d9: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004428df: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004428e2: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4428e7u); f_005e87aa();
    /* 004428e7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004428e9: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 004428ef: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 004428f2: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x4428f7u); f_005e8e99();
    /* 004428f7: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 004428f9: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004428ff: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 00442902: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x442907u); f_005e8740();
    /* 00442907: push 0x1c1 */ { u32 v = 0x1c1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044290c: push 0xe5 */ { u32 v = 0xe5u; r_esp -= 4; W32(r_esp, v); }
    /* 00442911: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442917: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0044291a: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442920: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00442923: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442925: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x442928u); call_ind(t); }
    /* 00442928: push 0x3ea */ { u32 v = 0x3eau; r_esp -= 4; W32(r_esp, v); }
    /* 0044292d: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442933: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00442936: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044293c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0044293f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442941: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442944u); call_ind(t); }
    /* 00442944: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0044294a: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0044294d: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442953: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00442956: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442958: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x44295bu); call_ind(t); }
    /* 0044295b: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00442960: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x442965u); f_0048ab58();
    /* 00442965: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442968: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0044296e: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442975: je 0x44298a */ if (fZ) goto L_0044298a;
L_00442977:; BB(0x00442977);
    /* 00442977: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0044297d: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x442982u); f_005e8590();
    /* 00442982: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 00442988: jmp 0x442994 */ goto L_00442994;
L_0044298a:; BB(0x0044298a);
    /* 0044298a: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_00442994:; BB(0x00442994);
    /* 00442994: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0044299a: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 004429a0: mov dword ptr [eax + 0x70], ecx */ W32((u32)(r_eax+0x70u), r_ecx);
    /* 004429a3: push 0x6f67e4 */ { u32 v = 0x6f67e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004429a8: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004429ae: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 004429b1: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004429b7: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004429ba: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004429bc: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x4429bfu); call_ind(t); }
    /* 004429bf: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 004429c5: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 004429c8: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004429ce: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004429d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004429d3: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4429d6u); call_ind(t); }
    /* 004429d6: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 004429d8: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004429de: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004429e1: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4429e6u); f_005e87aa();
    /* 004429e6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004429e8: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 004429ee: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 004429f1: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x4429f6u); f_005e8e99();
    /* 004429f6: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 004429f8: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004429fe: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 00442a01: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x442a06u); f_005e8740();
    /* 00442a06: push 0x1ce */ { u32 v = 0x1ceu; r_esp -= 4; W32(r_esp, v); }
    /* 00442a0b: push 0xe5 */ { u32 v = 0xe5u; r_esp -= 4; W32(r_esp, v); }
    /* 00442a10: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442a16: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00442a19: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442a1f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00442a22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442a24: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x442a27u); call_ind(t); }
    /* 00442a27: push 0x3ea */ { u32 v = 0x3eau; r_esp -= 4; W32(r_esp, v); }
    /* 00442a2c: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442a32: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00442a35: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442a3b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00442a3e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442a40: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442a43u); call_ind(t); }
    /* 00442a43: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442a49: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00442a4c: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442a52: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00442a55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442a57: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x442a5au); call_ind(t); }
L_00442a5a:; BB(0x00442a5a);
    /* 00442a5a: push 0x2330 */ { u32 v = 0x2330u; r_esp -= 4; W32(r_esp, v); }
    /* 00442a5f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00442a65: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x442a6au); f_0045b93e();
    /* 00442a6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442a6c: je 0x442c23 */ if (fZ) goto L_00442c23;
L_00442a72:; BB(0x00442a72);
    /* 00442a72: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00442a77: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x442a7cu); f_0048ab58();
    /* 00442a7c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442a7f: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00442a85: cmp dword ptr [ebp - 0xb8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442a8c: je 0x442aaa */ if (fZ) goto L_00442aaa;
L_00442a8e:; BB(0x00442a8e);
    /* 00442a8e: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442a94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442a95: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00442a97: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00442a9d: call 0x444924 */ r_esp -= 4; W32(r_esp, 0x442aa2u); f_00444924();
    /* 00442aa2: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 00442aa8: jmp 0x442ab4 */ goto L_00442ab4;
L_00442aaa:; BB(0x00442aaa);
    /* 00442aaa: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_00442ab4:; BB(0x00442ab4);
    /* 00442ab4: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442aba: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 00442ac0: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 00442ac6: push 0x414 */ { u32 v = 0x414u; r_esp -= 4; W32(r_esp, v); }
    /* 00442acb: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442ad1: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00442ad7: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442add: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00442ae3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442ae5: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x442ae8u); call_ind(t); }
    /* 00442ae8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442aea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442aec: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442af2: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00442af8: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442afe: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00442b04: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442b06: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x442b09u); call_ind(t); }
    /* 00442b09: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b0e: push 0xb1 */ { u32 v = 0xb1u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b13: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442b19: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00442b1f: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442b25: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00442b2b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442b2d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x442b30u); call_ind(t); }
    /* 00442b30: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b35: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442b3b: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00442b41: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442b47: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00442b4d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442b4f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442b52u); call_ind(t); }
    /* 00442b52: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442b58: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00442b5e: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442b64: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00442b6a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442b6c: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x442b6fu); call_ind(t); }
    /* 00442b6f: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00442b74: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x442b79u); f_0048ab58();
    /* 00442b79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442b7c: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00442b82: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442b89: je 0x442ba0 */ if (fZ) goto L_00442ba0;
L_00442b8b:; BB(0x00442b8b);
    /* 00442b8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b8d: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 00442b93: call 0x444bc5 */ r_esp -= 4; W32(r_esp, 0x442b98u); f_00444bc5();
    /* 00442b98: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00442b9e: jmp 0x442baa */ goto L_00442baa;
L_00442ba0:; BB(0x00442ba0);
    /* 00442ba0: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_00442baa:; BB(0x00442baa);
    /* 00442baa: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442bb0: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 00442bb6: mov dword ptr [eax + 0x78], ecx */ W32((u32)(r_eax+0x78u), r_ecx);
    /* 00442bb9: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442bbf: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00442bc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442bc6: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442bcc: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 00442bcf: call 0x5e14da */ r_esp -= 4; W32(r_esp, 0x442bd4u); f_005e14da();
    /* 00442bd4: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00442bd9: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442bdf: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 00442be2: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442be8: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 00442beb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00442bed: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x442bf0u); call_ind(t); }
    /* 00442bf0: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00442bf6: movsx ecx, byte ptr [ebp - 0xac] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff54u));
    /* 00442bfd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00442bfe: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00442c04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00442c05: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442c0b: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00442c0e: call 0x5e1505 */ r_esp -= 4; W32(r_esp, 0x442c13u); f_005e1505();
    /* 00442c13: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442c19: call 0x44418c */ r_esp -= 4; W32(r_esp, 0x442c1eu); f_0044418c();
    /* 00442c1e: jmp 0x443bed */ goto L_00443bed;
L_00442c23:; BB(0x00442c23);
    /* 00442c23: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442c2a: je 0x443627 */ if (fZ) goto L_00443627;
L_00442c30:; BB(0x00442c30);
    /* 00442c30: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00442c35: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x442c3au); f_0048ab58();
    /* 00442c3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442c3d: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00442c43: cmp dword ptr [ebp - 0xc0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442c4a: je 0x442c68 */ if (fZ) goto L_00442c68;
L_00442c4c:; BB(0x00442c4c);
    /* 00442c4c: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442c52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00442c53: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00442c55: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00442c5b: call 0x444924 */ r_esp -= 4; W32(r_esp, 0x442c60u); f_00444924();
    /* 00442c60: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00442c66: jmp 0x442c72 */ goto L_00442c72;
L_00442c68:; BB(0x00442c68);
    /* 00442c68: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_00442c72:; BB(0x00442c72);
    /* 00442c72: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442c78: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 00442c7e: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00442c84: push 0x410 */ { u32 v = 0x410u; r_esp -= 4; W32(r_esp, v); }
    /* 00442c89: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442c8f: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00442c95: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442c9b: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00442ca1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442ca3: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x442ca6u); call_ind(t); }
    /* 00442ca6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442ca8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442caa: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442cb0: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00442cb6: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442cbc: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00442cc2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442cc4: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x442cc7u); call_ind(t); }
    /* 00442cc7: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00442ccc: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00442cce: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442cd4: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00442cda: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442ce0: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00442ce6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442ce8: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x442cebu); call_ind(t); }
    /* 00442ceb: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00442cf0: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442cf6: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00442cfc: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442d02: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00442d08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442d0a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442d0du); call_ind(t); }
    /* 00442d0d: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442d13: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00442d19: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442d1f: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00442d25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442d27: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x442d2au); call_ind(t); }
    /* 00442d2a: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00442d2f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x442d34u); f_0048ab58();
    /* 00442d34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442d37: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00442d3d: cmp dword ptr [ebp - 0xc4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442d44: je 0x442d5b */ if (fZ) goto L_00442d5b;
L_00442d46:; BB(0x00442d46);
    /* 00442d46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442d48: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00442d4e: call 0x444bc5 */ r_esp -= 4; W32(r_esp, 0x442d53u); f_00444bc5();
    /* 00442d53: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 00442d59: jmp 0x442d65 */ goto L_00442d65;
L_00442d5b:; BB(0x00442d5b);
    /* 00442d5b: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_00442d65:; BB(0x00442d65);
    /* 00442d65: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442d6b: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00442d71: mov dword ptr [eax + 0x78], ecx */ W32((u32)(r_eax+0x78u), r_ecx);
    /* 00442d74: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442d7a: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00442d80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442d81: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442d87: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 00442d8a: call 0x5e14da */ r_esp -= 4; W32(r_esp, 0x442d8fu); f_005e14da();
    /* 00442d8f: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442d95: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 00442d98: call 0x444e2a */ r_esp -= 4; W32(r_esp, 0x442d9du); f_00444e2a();
    /* 00442d9d: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00442da3: movsx eax, byte ptr [ebp - 0xac] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff54u));
    /* 00442daa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442dab: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00442db1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00442db2: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442db8: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 00442dbb: call 0x5e1505 */ r_esp -= 4; W32(r_esp, 0x442dc0u); f_005e1505();
    /* 00442dc0: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00442dc5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x442dcau); f_0048ab58();
    /* 00442dca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442dcd: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00442dd3: cmp dword ptr [ebp - 0xc8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442dda: je 0x442df8 */ if (fZ) goto L_00442df8;
L_00442ddc:; BB(0x00442ddc);
    /* 00442ddc: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442de2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442de3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00442de5: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00442deb: call 0x444924 */ r_esp -= 4; W32(r_esp, 0x442df0u); f_00444924();
    /* 00442df0: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00442df6: jmp 0x442e02 */ goto L_00442e02;
L_00442df8:; BB(0x00442df8);
    /* 00442df8: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
L_00442e02:; BB(0x00442e02);
    /* 00442e02: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442e08: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00442e0e: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 00442e14: push 0x411 */ { u32 v = 0x411u; r_esp -= 4; W32(r_esp, v); }
    /* 00442e19: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442e1f: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00442e25: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442e2b: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00442e31: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442e33: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x442e36u); call_ind(t); }
    /* 00442e36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442e38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442e3a: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442e40: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00442e46: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442e4c: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00442e52: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442e54: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x442e57u); call_ind(t); }
    /* 00442e57: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00442e5c: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 00442e5e: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442e64: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00442e6a: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442e70: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00442e76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442e78: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x442e7bu); call_ind(t); }
    /* 00442e7b: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00442e80: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442e86: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00442e8c: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442e92: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00442e98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442e9a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x442e9du); call_ind(t); }
    /* 00442e9d: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442ea3: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00442ea9: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442eaf: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00442eb5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442eb7: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x442ebau); call_ind(t); }
    /* 00442eba: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00442ebf: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x442ec4u); f_0048ab58();
    /* 00442ec4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442ec7: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00442ecd: cmp dword ptr [ebp - 0xcc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442ed4: je 0x442eeb */ if (fZ) goto L_00442eeb;
L_00442ed6:; BB(0x00442ed6);
    /* 00442ed6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442ed8: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00442ede: call 0x444bc5 */ r_esp -= 4; W32(r_esp, 0x442ee3u); f_00444bc5();
    /* 00442ee3: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 00442ee9: jmp 0x442ef5 */ goto L_00442ef5;
L_00442eeb:; BB(0x00442eeb);
    /* 00442eeb: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
L_00442ef5:; BB(0x00442ef5);
    /* 00442ef5: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442efb: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00442f01: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
    /* 00442f04: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442f0a: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00442f10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442f11: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442f17: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 00442f1a: call 0x5e14da */ r_esp -= 4; W32(r_esp, 0x442f1fu); f_005e14da();
    /* 00442f1f: push 0x3ea */ { u32 v = 0x3eau; r_esp -= 4; W32(r_esp, v); }
    /* 00442f24: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442f2a: mov ecx, dword ptr [edx + 0x7c] */ r_ecx = R32((u32)(r_edx+0x7cu));
    /* 00442f2d: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442f33: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 00442f36: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00442f38: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x442f3bu); call_ind(t); }
    /* 00442f3b: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00442f41: movsx ecx, byte ptr [ebp - 0xac] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff54u));
    /* 00442f48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00442f49: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00442f4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00442f50: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442f56: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00442f59: call 0x5e1505 */ r_esp -= 4; W32(r_esp, 0x442f5eu); f_005e1505();
    /* 00442f5e: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00442f63: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x442f68u); f_0048ab58();
    /* 00442f68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442f6b: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00442f71: cmp dword ptr [ebp - 0xd0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442f78: je 0x442f96 */ if (fZ) goto L_00442f96;
L_00442f7a:; BB(0x00442f7a);
    /* 00442f7a: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442f80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00442f81: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00442f83: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00442f89: call 0x444924 */ r_esp -= 4; W32(r_esp, 0x442f8eu); f_00444924();
    /* 00442f8e: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 00442f94: jmp 0x442fa0 */ goto L_00442fa0;
L_00442f96:; BB(0x00442f96);
    /* 00442f96: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
L_00442fa0:; BB(0x00442fa0);
    /* 00442fa0: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442fa6: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00442fac: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00442fb2: push 0x4bf */ { u32 v = 0x4bfu; r_esp -= 4; W32(r_esp, v); }
    /* 00442fb7: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442fbd: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00442fc3: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442fc9: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00442fcf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442fd1: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x442fd4u); call_ind(t); }
    /* 00442fd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442fd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442fd8: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442fde: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00442fe4: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442fea: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00442ff0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442ff2: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x442ff5u); call_ind(t); }
    /* 00442ff5: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00442ffa: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 00442ffc: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443002: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00443008: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044300e: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00443014: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443016: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x443019u); call_ind(t); }
    /* 00443019: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0044301e: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443024: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0044302a: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443030: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00443036: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443038: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x44303bu); call_ind(t); }
    /* 0044303b: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443041: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00443047: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044304d: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00443053: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443055: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x443058u); call_ind(t); }
    /* 00443058: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0044305d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x443062u); f_0048ab58();
    /* 00443062: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443065: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0044306b: cmp dword ptr [ebp - 0xd4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443072: je 0x443089 */ if (fZ) goto L_00443089;
L_00443074:; BB(0x00443074);
    /* 00443074: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443076: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0044307c: call 0x444bc5 */ r_esp -= 4; W32(r_esp, 0x443081u); f_00444bc5();
    /* 00443081: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 00443087: jmp 0x443093 */ goto L_00443093;
L_00443089:; BB(0x00443089);
    /* 00443089: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
L_00443093:; BB(0x00443093);
    /* 00443093: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443099: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0044309f: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
    /* 004430a5: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004430ab: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004430b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004430b2: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 004430b8: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 004430be: call 0x5e14da */ r_esp -= 4; W32(r_esp, 0x4430c3u); f_005e14da();
    /* 004430c3: push 0x3ec */ { u32 v = 0x3ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004430c8: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004430ce: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 004430d4: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004430da: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 004430e0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004430e2: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4430e5u); call_ind(t); }
    /* 004430e5: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 004430eb: movsx ecx, byte ptr [ebp - 0xac] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff54u));
    /* 004430f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004430f3: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 004430f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004430fa: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443100: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00443106: call 0x5e1505 */ r_esp -= 4; W32(r_esp, 0x44310bu); f_005e1505();
    /* 0044310b: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00443110: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x443115u); f_0048ab58();
    /* 00443115: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443118: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0044311e: cmp dword ptr [ebp - 0xd8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443125: je 0x443143 */ if (fZ) goto L_00443143;
L_00443127:; BB(0x00443127);
    /* 00443127: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044312d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044312e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00443130: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00443136: call 0x444924 */ r_esp -= 4; W32(r_esp, 0x44313bu); f_00444924();
    /* 0044313b: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 00443141: jmp 0x44314d */ goto L_0044314d;
L_00443143:; BB(0x00443143);
    /* 00443143: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
L_0044314d:; BB(0x0044314d);
    /* 0044314d: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443153: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 00443159: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 0044315f: push 0x413 */ { u32 v = 0x413u; r_esp -= 4; W32(r_esp, v); }
    /* 00443164: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044316a: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 00443170: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443176: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0044317c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044317e: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x443181u); call_ind(t); }
    /* 00443181: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443183: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443185: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0044318b: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00443191: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443197: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0044319d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044319f: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4431a2u); call_ind(t); }
    /* 004431a2: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004431a7: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 004431ac: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004431b2: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004431b8: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004431be: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004431c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004431c6: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4431c9u); call_ind(t); }
    /* 004431c9: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 004431ce: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004431d4: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004431da: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004431e0: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004431e6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004431e8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4431ebu); call_ind(t); }
    /* 004431eb: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004431f1: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004431f7: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004431fd: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00443203: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443205: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x443208u); call_ind(t); }
    /* 00443208: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0044320d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x443212u); f_0048ab58();
    /* 00443212: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443215: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0044321b: cmp dword ptr [ebp - 0xdc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443222: je 0x443239 */ if (fZ) goto L_00443239;
L_00443224:; BB(0x00443224);
    /* 00443224: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443226: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 0044322c: call 0x444bc5 */ r_esp -= 4; W32(r_esp, 0x443231u); f_00444bc5();
    /* 00443231: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 00443237: jmp 0x443243 */ goto L_00443243;
L_00443239:; BB(0x00443239);
    /* 00443239: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
L_00443243:; BB(0x00443243);
    /* 00443243: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443249: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 0044324f: mov dword ptr [eax + 0x84], ecx */ W32((u32)(r_eax+0x84u), r_ecx);
    /* 00443255: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044325b: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00443261: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443262: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443268: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 0044326e: call 0x5e14da */ r_esp -= 4; W32(r_esp, 0x443273u); f_005e14da();
    /* 00443273: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00443279: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x44327eu); f_005da3ec();
    /* 0044327e: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 00443284: cmp dword ptr [ebp - 0x124], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0044328b: ja 0x443349 */ if ((!fC&&!fZ)) goto L_00443349;
L_00443291:; BB(0x00443291);
    /* 00443291: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00443297: jmp dword ptr [edx*4 + 0x443bf7] */ { u32 t = R32((u32)(r_edx*4+0x443bf7u)); switch (t) { case 0x44329eu: goto L_0044329e; case 0x4432cbu: goto L_004432cb; case 0x443349u: goto L_00443349; case 0x4432f5u: goto L_004432f5; case 0x44331fu: goto L_0044331f; case 0x443524u: goto L_00443524; case 0x443551u: goto L_00443551; case 0x4435cfu: goto L_004435cf; case 0x44357bu: goto L_0044357b; case 0x4435a5u: goto L_004435a5; case 0x443a6au: goto L_00443a6a; case 0x443aa2u: goto L_00443aa2; case 0x443abeu: goto L_00443abe; case 0x443b09u: goto L_00443b09; case 0x443ad7u: goto L_00443ad7; case 0x443b22u: goto L_00443b22; case 0x443b3bu: goto L_00443b3b; case 0x443a4eu: goto L_00443a4e; case 0x443af0u: goto L_00443af0; case 0x443a86u: goto L_00443a86; default: UNSUP(0x00443297, "jump table entry is not a known target"); } }
L_0044329e:; BB(0x0044329e);
    /* 0044329e: push 0x3f7 */ { u32 v = 0x3f7u; r_esp -= 4; W32(r_esp, v); }
    /* 004432a3: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004432a9: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 004432af: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004432b5: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004432bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004432bd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4432c0u); call_ind(t); }
    /* 004432c0: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 004432c6: jmp 0x443371 */ goto L_00443371;
L_004432cb:; BB(0x004432cb);
    /* 004432cb: push 0x3f9 */ { u32 v = 0x3f9u; r_esp -= 4; W32(r_esp, v); }
    /* 004432d0: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004432d6: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 004432dc: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004432e2: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004432e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004432ea: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4432edu); call_ind(t); }
    /* 004432ed: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 004432f3: jmp 0x443371 */ goto L_00443371;
L_004432f5:; BB(0x004432f5);
    /* 004432f5: push 0x3fb */ { u32 v = 0x3fbu; r_esp -= 4; W32(r_esp, v); }
    /* 004432fa: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443300: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00443306: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044330c: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00443312: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443314: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x443317u); call_ind(t); }
    /* 00443317: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0044331d: jmp 0x443371 */ goto L_00443371;
L_0044331f:; BB(0x0044331f);
    /* 0044331f: push 0x3fd */ { u32 v = 0x3fdu; r_esp -= 4; W32(r_esp, v); }
    /* 00443324: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0044332a: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00443330: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443336: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0044333c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044333e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x443341u); call_ind(t); }
    /* 00443341: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00443347: jmp 0x443371 */ goto L_00443371;
L_00443349:; BB(0x00443349);
    /* 00443349: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044334e: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443354: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0044335a: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443360: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00443366: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443368: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x44336bu); call_ind(t); }
    /* 0044336b: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
L_00443371:; BB(0x00443371);
    /* 00443371: movsx eax, byte ptr [ebp - 0xac] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff54u));
    /* 00443378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443379: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0044337f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443380: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443386: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 0044338c: call 0x5e1505 */ r_esp -= 4; W32(r_esp, 0x443391u); f_005e1505();
    /* 00443391: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00443396: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x44339bu); f_0048ab58();
    /* 0044339b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044339e: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 004433a4: cmp dword ptr [ebp - 0xe0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004433ab: je 0x4433c9 */ if (fZ) goto L_004433c9;
L_004433ad:; BB(0x004433ad);
    /* 004433ad: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004433b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004433b4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004433b6: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 004433bc: call 0x444924 */ r_esp -= 4; W32(r_esp, 0x4433c1u); f_00444924();
    /* 004433c1: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 004433c7: jmp 0x4433d3 */ goto L_004433d3;
L_004433c9:; BB(0x004433c9);
    /* 004433c9: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
L_004433d3:; BB(0x004433d3);
    /* 004433d3: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 004433d9: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 004433df: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 004433e5: push 0x414 */ { u32 v = 0x414u; r_esp -= 4; W32(r_esp, v); }
    /* 004433ea: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004433f0: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004433f6: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004433fc: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00443402: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443404: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x443407u); call_ind(t); }
    /* 00443407: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443409: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044340b: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443411: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00443417: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044341d: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00443423: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443425: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x443428u); call_ind(t); }
    /* 00443428: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044342d: push 0xb1 */ { u32 v = 0xb1u; r_esp -= 4; W32(r_esp, v); }
    /* 00443432: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443438: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0044343e: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443444: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0044344a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044344c: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x44344fu); call_ind(t); }
    /* 0044344f: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00443454: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0044345a: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00443460: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443466: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0044346c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044346e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x443471u); call_ind(t); }
    /* 00443471: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443477: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0044347d: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443483: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00443489: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044348b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x44348eu); call_ind(t); }
    /* 0044348e: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00443493: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x443498u); f_0048ab58();
    /* 00443498: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044349b: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 004434a1: cmp dword ptr [ebp - 0xe4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004434a8: je 0x4434bf */ if (fZ) goto L_004434bf;
L_004434aa:; BB(0x004434aa);
    /* 004434aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004434ac: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 004434b2: call 0x444bc5 */ r_esp -= 4; W32(r_esp, 0x4434b7u); f_00444bc5();
    /* 004434b7: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 004434bd: jmp 0x4434c9 */ goto L_004434c9;
L_004434bf:; BB(0x004434bf);
    /* 004434bf: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
L_004434c9:; BB(0x004434c9);
    /* 004434c9: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004434cf: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 004434d5: mov dword ptr [eax + 0x88], ecx */ W32((u32)(r_eax+0x88u), r_ecx);
    /* 004434db: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004434e1: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004434e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004434e8: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 004434ee: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 004434f4: call 0x5e14da */ r_esp -= 4; W32(r_esp, 0x4434f9u); f_005e14da();
    /* 004434f9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004434ff: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x443504u); f_005da3ec();
    /* 00443504: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 0044350a: cmp dword ptr [ebp - 0x130], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00443511: ja 0x4435cf */ if ((!fC&&!fZ)) goto L_004435cf;
L_00443517:; BB(0x00443517);
    /* 00443517: mov edx, dword ptr [ebp - 0x130] */ r_edx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0044351d: jmp dword ptr [edx*4 + 0x443c0f] */ { u32 t = R32((u32)(r_edx*4+0x443c0fu)); switch (t) { case 0x44331fu: goto L_0044331f; case 0x443349u: goto L_00443349; case 0x4432f5u: goto L_004432f5; case 0x4432cbu: goto L_004432cb; case 0x44329eu: goto L_0044329e; case 0x443524u: goto L_00443524; case 0x443551u: goto L_00443551; case 0x4435cfu: goto L_004435cf; case 0x44357bu: goto L_0044357b; case 0x4435a5u: goto L_004435a5; case 0x443a6au: goto L_00443a6a; case 0x443aa2u: goto L_00443aa2; case 0x443abeu: goto L_00443abe; case 0x443b09u: goto L_00443b09; case 0x443ad7u: goto L_00443ad7; case 0x443b22u: goto L_00443b22; case 0x443b3bu: goto L_00443b3b; case 0x443a4eu: goto L_00443a4e; case 0x443af0u: goto L_00443af0; case 0x443a86u: goto L_00443a86; default: UNSUP(0x0044351d, "jump table entry is not a known target"); } }
L_00443524:; BB(0x00443524);
    /* 00443524: push 0x401 */ { u32 v = 0x401u; r_esp -= 4; W32(r_esp, v); }
    /* 00443529: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0044352f: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00443535: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044353b: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00443541: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443543: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x443546u); call_ind(t); }
    /* 00443546: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0044354c: jmp 0x4435f7 */ goto L_004435f7;
L_00443551:; BB(0x00443551);
    /* 00443551: push 0x403 */ { u32 v = 0x403u; r_esp -= 4; W32(r_esp, v); }
    /* 00443556: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0044355c: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00443562: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443568: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0044356e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443570: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x443573u); call_ind(t); }
    /* 00443573: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00443579: jmp 0x4435f7 */ goto L_004435f7;
L_0044357b:; BB(0x0044357b);
    /* 0044357b: push 0x405 */ { u32 v = 0x405u; r_esp -= 4; W32(r_esp, v); }
    /* 00443580: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443586: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0044358c: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443592: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00443598: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044359a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x44359du); call_ind(t); }
    /* 0044359d: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 004435a3: jmp 0x4435f7 */ goto L_004435f7;
L_004435a5:; BB(0x004435a5);
    /* 004435a5: push 0x407 */ { u32 v = 0x407u; r_esp -= 4; W32(r_esp, v); }
    /* 004435aa: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004435b0: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 004435b6: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004435bc: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004435c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004435c4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4435c7u); call_ind(t); }
    /* 004435c7: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 004435cd: jmp 0x4435f7 */ goto L_004435f7;
L_004435cf:; BB(0x004435cf);
    /* 004435cf: push 0x409 */ { u32 v = 0x409u; r_esp -= 4; W32(r_esp, v); }
    /* 004435d4: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004435da: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 004435e0: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004435e6: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004435ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004435ee: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4435f1u); call_ind(t); }
    /* 004435f1: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
L_004435f7:; BB(0x004435f7);
    /* 004435f7: movsx eax, byte ptr [ebp - 0xac] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff54u));
    /* 004435fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004435ff: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00443605: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443606: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044360c: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 00443612: call 0x5e1505 */ r_esp -= 4; W32(r_esp, 0x443617u); f_005e1505();
    /* 00443617: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044361d: call 0x44418c */ r_esp -= 4; W32(r_esp, 0x443622u); f_0044418c();
    /* 00443622: jmp 0x443bed */ goto L_00443bed;
L_00443627:; BB(0x00443627);
    /* 00443627: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 00443631: jmp 0x443642 */ goto L_00443642;
L_00443633:; BB(0x00443633);
    /* 00443633: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00443639: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044363c: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
L_00443642:; BB(0x00443642);
    /* 00443642: cmp dword ptr [ebp - 0xa4], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443649: jge 0x443bbc */ if ((fS==fO)) goto L_00443bbc;
L_0044364f:; BB(0x0044364f);
    /* 0044364f: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00443654: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x443659u); f_0048ab58();
    /* 00443659: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044365c: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00443662: cmp dword ptr [ebp - 0xe8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443669: je 0x44368c */ if (fZ) goto L_0044368c;
L_0044366b:; BB(0x0044366b);
    /* 0044366b: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443671: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443672: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00443678: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00443679: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0044367f: call 0x444924 */ r_esp -= 4; W32(r_esp, 0x443684u); f_00444924();
    /* 00443684: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 0044368a: jmp 0x443696 */ goto L_00443696;
L_0044368c:; BB(0x0044368c);
    /* 0044368c: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
L_00443696:; BB(0x00443696);
    /* 00443696: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0044369c: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 004436a2: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 004436a8: mov dword ptr [ecx + eax*4 + 0x8c], edx */ W32((u32)(r_ecx+r_eax*4+0x8cu), r_edx);
    /* 004436af: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 004436b5: add eax, 0x4f2 */ {  u32 a = r_eax; u32 b = 0x4f2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004436ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004436bb: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 004436c1: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004436c7: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 004436ce: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 004436d4: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004436da: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 004436e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004436e3: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x4436e6u); call_ind(t); }
    /* 004436e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004436e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004436ea: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 004436f0: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 004436f6: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 004436fd: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00443703: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443709: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00443710: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00443712: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x443715u); call_ind(t); }
    /* 00443715: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443717: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00443719: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044371b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044371d: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00443723: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443729: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00443730: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x443735u); f_005d5ff2();
    /* 00443735: push 0x1c1 */ { u32 v = 0x1c1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044373a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044373c: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00443742: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443748: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0044374f: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00443755: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0044375b: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00443762: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00443764: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x443767u); call_ind(t); }
    /* 00443767: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0044376c: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00443772: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443778: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0044377f: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00443785: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044378b: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 00443792: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443794: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x443797u); call_ind(t); }
    /* 00443797: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0044379d: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 004437a3: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 004437aa: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 004437b0: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004437b6: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 004437bd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004437bf: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4437c2u); call_ind(t); }
    /* 004437c2: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 004437c7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4437ccu); f_0048ab58();
    /* 004437cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004437cf: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 004437d5: cmp dword ptr [ebp - 0xec], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004437dc: je 0x4437f3 */ if (fZ) goto L_004437f3;
L_004437de:; BB(0x004437de);
    /* 004437de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004437e0: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 004437e6: call 0x444bc5 */ r_esp -= 4; W32(r_esp, 0x4437ebu); f_00444bc5();
    /* 004437eb: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 004437f1: jmp 0x4437fd */ goto L_004437fd;
L_004437f3:; BB(0x004437f3);
    /* 004437f3: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_004437fd:; BB(0x004437fd);
    /* 004437fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443800: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443806: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0044380c: mov dword ptr [edx + ecx*4 + 0x78], eax */ W32((u32)(r_edx+r_ecx*4+0x78u), r_eax);
    /* 00443810: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00443816: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044381c: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00443823: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443824: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443827: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044382d: mov ecx, dword ptr [edx + ecx*4 + 0x78] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x78u));
    /* 00443831: call 0x5e14da */ r_esp -= 4; W32(r_esp, 0x443836u); f_005e14da();
    /* 00443836: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443839: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044383f: mov ecx, dword ptr [ecx + eax*4 + 0x78] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x78u));
    /* 00443843: call 0x444e2a */ r_esp -= 4; W32(r_esp, 0x443848u); f_00444e2a();
    /* 00443848: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044384a: je 0x443bae */ if (fZ) goto L_00443bae;
L_00443850:; BB(0x00443850);
    /* 00443850: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443853: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443859: mov ecx, dword ptr [eax + edx*4 + 0x78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x78u));
    /* 0044385d: call 0x444e2a */ r_esp -= 4; W32(r_esp, 0x443862u); f_00444e2a();
    /* 00443862: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00443868: movsx ecx, byte ptr [ebp - 0xac] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff54u));
    /* 0044386f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443870: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00443876: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00443877: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044387a: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443880: mov ecx, dword ptr [ecx + eax*4 + 0x78] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x78u));
    /* 00443884: call 0x5e1505 */ r_esp -= 4; W32(r_esp, 0x443889u); f_005e1505();
    /* 00443889: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0044388f: call 0x45b911 */ r_esp -= 4; W32(r_esp, 0x443894u); f_0045b911();
    /* 00443894: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443896: je 0x4439d3 */ if (fZ) goto L_004439d3;
L_0044389c:; BB(0x0044389c);
    /* 0044389c: cmp dword ptr [ebp - 0xa4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004438a3: jne 0x4439d3 */ if (!fZ) goto L_004439d3;
L_004438a9:; BB(0x004438a9);
    /* 004438a9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004438ab: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004438b1: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x4438b6u); f_0045b93e();
    /* 004438b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004438b8: jne 0x4439d3 */ if (!fZ) goto L_004439d3;
L_004438be:; BB(0x004438be);
    /* 004438be: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004438c0: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004438c6: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x4438cbu); f_0045b93e();
    /* 004438cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004438cd: jne 0x4439d3 */ if (!fZ) goto L_004439d3;
L_004438d3:; BB(0x004438d3);
    /* 004438d3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004438d5: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004438db: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x4438e0u); f_0045b93e();
    /* 004438e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004438e2: jne 0x4439d3 */ if (!fZ) goto L_004439d3;
L_004438e8:; BB(0x004438e8);
    /* 004438e8: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004438ea: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004438f0: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x4438f5u); f_0045b93e();
    /* 004438f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004438f7: jne 0x4439d3 */ if (!fZ) goto L_004439d3;
L_004438fd:; BB(0x004438fd);
    /* 004438fd: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004438ff: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00443905: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x44390au); f_0045b93e();
    /* 0044390a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044390c: jne 0x4439d3 */ if (!fZ) goto L_004439d3;
L_00443912:; BB(0x00443912);
    /* 00443912: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00443914: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0044391a: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x44391fu); f_0045b93e();
    /* 0044391f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443921: jne 0x4439d3 */ if (!fZ) goto L_004439d3;
L_00443927:; BB(0x00443927);
    /* 00443927: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00443929: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0044392f: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x443934u); f_0045b93e();
    /* 00443934: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443936: jne 0x4439d3 */ if (!fZ) goto L_004439d3;
L_0044393c:; BB(0x0044393c);
    /* 0044393c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0044393e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00443944: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x443949u); f_0045b93e();
    /* 00443949: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044394b: jne 0x4439d3 */ if (!fZ) goto L_004439d3;
L_00443951:; BB(0x00443951);
    /* 00443951: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00443953: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00443959: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x44395eu); f_0045b93e();
    /* 0044395e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443960: je 0x443978 */ if (fZ) goto L_00443978;
L_00443962:; BB(0x00443962);
    /* 00443962: push 0x676814 */ { u32 v = 0x676814u; r_esp -= 4; W32(r_esp, v); }
    /* 00443967: lea edx, [ebp - 0xa0] */ r_edx = (u32)(r_ebp+0xffffff60u);
    /* 0044396d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044396e: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x443973u); f_00624510();
    /* 00443973: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443976: jmp 0x443996 */ goto L_00443996;
L_00443978:; BB(0x00443978);
    /* 00443978: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 0044397e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044397f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00443985: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x44398au); f_005da3ec();
    /* 0044398a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044398b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00443991: call 0x45b786 */ r_esp -= 4; W32(r_esp, 0x443996u); f_0045b786();
L_00443996:; BB(0x00443996);
    /* 00443996: push 0x67681c */ { u32 v = 0x67681cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044399b: lea ecx, [ebp - 0xa0] */ r_ecx = (u32)(r_ebp+0xffffff60u);
    /* 004439a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004439a2: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x4439a7u); f_00624520();
    /* 004439a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004439aa: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 004439ac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004439af: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004439b5: mov ecx, dword ptr [eax + edx*4 + 0x78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x78u));
    /* 004439b9: call 0x5e24d8 */ r_esp -= 4; W32(r_esp, 0x4439beu); f_005e24d8();
    /* 004439be: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004439c1: lea ecx, [ebp - 0xa0] */ r_ecx = (u32)(r_ebp+0xffffff60u);
    /* 004439c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004439c8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004439cb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004439cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004439d0: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x4439d3u); call_ind(t); }
L_004439d3:; BB(0x004439d3);
    /* 004439d3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004439d9: call 0x45b911 */ r_esp -= 4; W32(r_esp, 0x4439deu); f_0045b911();
    /* 004439de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004439e0: je 0x443b7c */ if (fZ) goto L_00443b7c;
L_004439e6:; BB(0x004439e6);
    /* 004439e6: cmp dword ptr [ebp - 0xa4], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004439ed: jne 0x443b7c */ if (!fZ) goto L_00443b7c;
L_004439f3:; BB(0x004439f3);
    /* 004439f3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004439f9: call 0x45cbf1 */ r_esp -= 4; W32(r_esp, 0x4439feu); f_0045cbf1();
    /* 004439fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443a00: je 0x443b54 */ if (fZ) goto L_00443b54;
L_00443a06:; BB(0x00443a06);
    /* 00443a06: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00443a08: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00443a0e: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x443a13u); f_0045b93e();
    /* 00443a13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443a15: je 0x443b52 */ if (fZ) goto L_00443b52;
L_00443a1b:; BB(0x00443a1b);
    /* 00443a1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443a1d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00443a1f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00443a25: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x443a2au); f_0045c4ac();
    /* 00443a2a: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 00443a2e: mov dword ptr [ebp - 0x13c], ecx */ W32((u32)(r_ebp+0xfffffec4u), r_ecx);
    /* 00443a34: cmp dword ptr [ebp - 0x13c], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffec4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00443a3b: ja 0x443b52 */ if ((!fC&&!fZ)) goto L_00443b52;
L_00443a41:; BB(0x00443a41);
    /* 00443a41: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00443a47: jmp dword ptr [edx*4 + 0x443c27] */ { u32 t = R32((u32)(r_edx*4+0x443c27u)); switch (t) { case 0x4435a5u: goto L_004435a5; case 0x4435cfu: goto L_004435cf; case 0x44357bu: goto L_0044357b; case 0x443551u: goto L_00443551; case 0x443524u: goto L_00443524; case 0x44331fu: goto L_0044331f; case 0x443349u: goto L_00443349; case 0x4432f5u: goto L_004432f5; case 0x4432cbu: goto L_004432cb; case 0x44329eu: goto L_0044329e; case 0x443a6au: goto L_00443a6a; case 0x443aa2u: goto L_00443aa2; case 0x443abeu: goto L_00443abe; case 0x443b09u: goto L_00443b09; case 0x443ad7u: goto L_00443ad7; case 0x443b22u: goto L_00443b22; case 0x443b3bu: goto L_00443b3b; case 0x443a4eu: goto L_00443a4e; case 0x443af0u: goto L_00443af0; case 0x443a86u: goto L_00443a86; default: UNSUP(0x00443a47, "jump table entry is not a known target"); } }
L_00443a4e:; BB(0x00443a4e);
    /* 00443a4e: push 0x259 */ { u32 v = 0x259u; r_esp -= 4; W32(r_esp, v); }
    /* 00443a53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443a56: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443a5c: mov ecx, dword ptr [ecx + eax*4 + 0x78] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x78u));
    /* 00443a60: call 0x5e256e */ r_esp -= 4; W32(r_esp, 0x443a65u); f_005e256e();
    /* 00443a65: jmp 0x443b52 */ goto L_00443b52;
L_00443a6a:; BB(0x00443a6a);
    /* 00443a6a: push 0x25a */ { u32 v = 0x25au; r_esp -= 4; W32(r_esp, v); }
    /* 00443a6f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443a72: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443a78: mov ecx, dword ptr [eax + edx*4 + 0x78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x78u));
    /* 00443a7c: call 0x5e256e */ r_esp -= 4; W32(r_esp, 0x443a81u); f_005e256e();
    /* 00443a81: jmp 0x443b52 */ goto L_00443b52;
L_00443a86:; BB(0x00443a86);
    /* 00443a86: push 0x25b */ { u32 v = 0x25bu; r_esp -= 4; W32(r_esp, v); }
    /* 00443a8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443a8e: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443a94: mov ecx, dword ptr [edx + ecx*4 + 0x78] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x78u));
    /* 00443a98: call 0x5e256e */ r_esp -= 4; W32(r_esp, 0x443a9du); f_005e256e();
    /* 00443a9d: jmp 0x443b52 */ goto L_00443b52;
L_00443aa2:; BB(0x00443aa2);
    /* 00443aa2: push 0x25c */ { u32 v = 0x25cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443aa7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443aaa: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443ab0: mov ecx, dword ptr [ecx + eax*4 + 0x78] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x78u));
    /* 00443ab4: call 0x5e256e */ r_esp -= 4; W32(r_esp, 0x443ab9u); f_005e256e();
    /* 00443ab9: jmp 0x443b52 */ goto L_00443b52;
L_00443abe:; BB(0x00443abe);
    /* 00443abe: push 0x25d */ { u32 v = 0x25du; r_esp -= 4; W32(r_esp, v); }
    /* 00443ac3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443ac6: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443acc: mov ecx, dword ptr [eax + edx*4 + 0x78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x78u));
    /* 00443ad0: call 0x5e256e */ r_esp -= 4; W32(r_esp, 0x443ad5u); f_005e256e();
    /* 00443ad5: jmp 0x443b52 */ goto L_00443b52;
L_00443ad7:; BB(0x00443ad7);
    /* 00443ad7: push 0x25e */ { u32 v = 0x25eu; r_esp -= 4; W32(r_esp, v); }
    /* 00443adc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443adf: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443ae5: mov ecx, dword ptr [edx + ecx*4 + 0x78] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x78u));
    /* 00443ae9: call 0x5e256e */ r_esp -= 4; W32(r_esp, 0x443aeeu); f_005e256e();
    /* 00443aee: jmp 0x443b52 */ goto L_00443b52;
L_00443af0:; BB(0x00443af0);
    /* 00443af0: push 0x25f */ { u32 v = 0x25fu; r_esp -= 4; W32(r_esp, v); }
    /* 00443af5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443af8: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443afe: mov ecx, dword ptr [ecx + eax*4 + 0x78] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x78u));
    /* 00443b02: call 0x5e256e */ r_esp -= 4; W32(r_esp, 0x443b07u); f_005e256e();
    /* 00443b07: jmp 0x443b52 */ goto L_00443b52;
L_00443b09:; BB(0x00443b09);
    /* 00443b09: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 00443b0e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443b11: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443b17: mov ecx, dword ptr [eax + edx*4 + 0x78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x78u));
    /* 00443b1b: call 0x5e256e */ r_esp -= 4; W32(r_esp, 0x443b20u); f_005e256e();
    /* 00443b20: jmp 0x443b52 */ goto L_00443b52;
L_00443b22:; BB(0x00443b22);
    /* 00443b22: push 0x261 */ { u32 v = 0x261u; r_esp -= 4; W32(r_esp, v); }
    /* 00443b27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443b2a: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443b30: mov ecx, dword ptr [edx + ecx*4 + 0x78] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x78u));
    /* 00443b34: call 0x5e256e */ r_esp -= 4; W32(r_esp, 0x443b39u); f_005e256e();
    /* 00443b39: jmp 0x443b52 */ goto L_00443b52;
L_00443b3b:; BB(0x00443b3b);
    /* 00443b3b: push 0x262 */ { u32 v = 0x262u; r_esp -= 4; W32(r_esp, v); }
    /* 00443b40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443b43: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443b49: mov ecx, dword ptr [ecx + eax*4 + 0x78] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x78u));
    /* 00443b4d: call 0x5e256e */ r_esp -= 4; W32(r_esp, 0x443b52u); f_005e256e();
L_00443b52:; BB(0x00443b52);
    /* 00443b52: jmp 0x443b7c */ goto L_00443b7c;
L_00443b54:; BB(0x00443b54);
    /* 00443b54: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00443b56: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00443b5c: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x443b61u); f_0045b93e();
    /* 00443b61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443b63: je 0x443b7c */ if (fZ) goto L_00443b7c;
L_00443b65:; BB(0x00443b65);
    /* 00443b65: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 00443b6a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443b6d: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443b73: mov ecx, dword ptr [eax + edx*4 + 0x78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x78u));
    /* 00443b77: call 0x5e2671 */ r_esp -= 4; W32(r_esp, 0x443b7cu); f_005e2671();
L_00443b7c:; BB(0x00443b7c);
    /* 00443b7c: cmp dword ptr [ebp - 0xa4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443b83: jne 0x443bae */ if (!fZ) goto L_00443bae;
L_00443b85:; BB(0x00443b85);
    /* 00443b85: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 00443b8b: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00443b8e: call 0x6201dc */ r_esp -= 4; W32(r_esp, 0x443b93u); f_006201dc();
    /* 00443b93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443b95: je 0x443bae */ if (fZ) goto L_00443bae;
L_00443b97:; BB(0x00443b97);
    /* 00443b97: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00443b9c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443b9f: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443ba5: mov ecx, dword ptr [eax + edx*4 + 0x78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x78u));
    /* 00443ba9: call 0x5e256e */ r_esp -= 4; W32(r_esp, 0x443baeu); f_005e256e();
L_00443bae:; BB(0x00443bae);
    /* 00443bae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443bb1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00443bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00443bb7: jmp 0x443633 */ goto L_00443633;
L_00443bbc:; BB(0x00443bbc);
    /* 00443bbc: cmp dword ptr [0x6f6f04], 0 */ {  u32 a = R32((u32)(0x6f6f04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443bc3: je 0x443be2 */ if (fZ) goto L_00443be2;
L_00443bc5:; BB(0x00443bc5);
    /* 00443bc5: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443bcb: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 00443bd1: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443bd7: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 00443bdd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00443bdf: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x443be2u); call_ind(t); }
L_00443be2:; BB(0x00443be2);
    /* 00443be2: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443be8: call 0x44418c */ r_esp -= 4; W32(r_esp, 0x443bedu); f_0044418c();
L_00443bed:; BB(0x00443bed);
    /* 00443bed: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443bf3: mov esp, ebp */ r_esp = r_ebp;
    /* 00443bf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443bf6: ret  */ FN_RET(0x00442720); r_esp += 4; return;
}

void f_00443c4f(void) /* FUN_00443c4f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443c4f);
    /* 00443c4f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443c50: mov ebp, esp */ r_ebp = r_esp;
    /* 00443c52: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443c55: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00443c58: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443c5b: mov dword ptr [eax], 0x634bac */ W32((u32)(r_eax), 0x634bacu);
    /* 00443c61: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443c64: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443c68: je 0x443ca1 */ if (fZ) goto L_00443ca1;
L_00443c6a:; BB(0x00443c6a);
    /* 00443c6a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443c6d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00443c70: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00443c73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00443c76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00443c79: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443c7d: je 0x443c90 */ if (fZ) goto L_00443c90;
L_00443c7f:; BB(0x00443c7f);
    /* 00443c7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00443c81: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443c84: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00443c86: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443c89: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x443c8bu); call_ind(t); }
    /* 00443c8b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00443c8e: jmp 0x443c97 */ goto L_00443c97;
L_00443c90:; BB(0x00443c90);
    /* 00443c90: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00443c97:; BB(0x00443c97);
    /* 00443c97: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443c9a: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
L_00443ca1:; BB(0x00443ca1);
    /* 00443ca1: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443ca4: cmp dword ptr [edx + 0x70], 0 */ {  u32 a = R32((u32)(r_edx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443ca8: je 0x443ce1 */ if (fZ) goto L_00443ce1;
L_00443caa:; BB(0x00443caa);
    /* 00443caa: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443cad: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00443cb0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00443cb3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443cb6: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00443cb9: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443cbd: je 0x443cd0 */ if (fZ) goto L_00443cd0;
L_00443cbf:; BB(0x00443cbf);
    /* 00443cbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00443cc1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443cc4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443cc6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443cc9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x443ccbu); call_ind(t); }
    /* 00443ccb: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00443cce: jmp 0x443cd7 */ goto L_00443cd7;
L_00443cd0:; BB(0x00443cd0);
    /* 00443cd0: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00443cd7:; BB(0x00443cd7);
    /* 00443cd7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443cda: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_00443ce1:; BB(0x00443ce1);
    /* 00443ce1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443ce4: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443ce8: je 0x443d21 */ if (fZ) goto L_00443d21;
L_00443cea:; BB(0x00443cea);
    /* 00443cea: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443ced: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00443cf0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00443cf3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00443cf6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00443cf9: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443cfd: je 0x443d10 */ if (fZ) goto L_00443d10;
L_00443cff:; BB(0x00443cff);
    /* 00443cff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00443d01: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00443d04: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00443d06: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00443d09: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x443d0bu); call_ind(t); }
    /* 00443d0b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00443d0e: jmp 0x443d17 */ goto L_00443d17;
L_00443d10:; BB(0x00443d10);
    /* 00443d10: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00443d17:; BB(0x00443d17);
    /* 00443d17: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443d1a: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
L_00443d21:; BB(0x00443d21);
    /* 00443d21: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443d28: jmp 0x443d33 */ goto L_00443d33;
L_00443d2a:; BB(0x00443d2a);
    /* 00443d2a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443d2d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00443d30: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00443d33:; BB(0x00443d33);
    /* 00443d33: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443d37: jge 0x443d90 */ if ((fS==fO)) goto L_00443d90;
L_00443d39:; BB(0x00443d39);
    /* 00443d39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443d3c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443d3f: cmp dword ptr [ecx + eax*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443d47: je 0x443d8e */ if (fZ) goto L_00443d8e;
L_00443d49:; BB(0x00443d49);
    /* 00443d49: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443d4c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443d4f: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00443d56: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00443d59: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00443d5c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00443d5f: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443d63: je 0x443d76 */ if (fZ) goto L_00443d76;
L_00443d65:; BB(0x00443d65);
    /* 00443d65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00443d67: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00443d6a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443d6c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00443d6f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x443d71u); call_ind(t); }
    /* 00443d71: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00443d74: jmp 0x443d7d */ goto L_00443d7d;
L_00443d76:; BB(0x00443d76);
    /* 00443d76: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00443d7d:; BB(0x00443d7d);
    /* 00443d7d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443d80: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443d83: mov dword ptr [ecx + eax*4 + 0x8c], 0 */ W32((u32)(r_ecx+r_eax*4+0x8cu), 0x0u);
L_00443d8e:; BB(0x00443d8e);
    /* 00443d8e: jmp 0x443d2a */ goto L_00443d2a;
L_00443d90:; BB(0x00443d90);
    /* 00443d90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443d97: jmp 0x443da2 */ goto L_00443da2;
L_00443d99:; BB(0x00443d99);
    /* 00443d99: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443d9c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00443d9f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00443da2:; BB(0x00443da2);
    /* 00443da2: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443da6: jge 0x443df6 */ if ((fS==fO)) goto L_00443df6;
L_00443da8:; BB(0x00443da8);
    /* 00443da8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443dab: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443dae: cmp dword ptr [ecx + eax*4 + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443db3: je 0x443df4 */ if (fZ) goto L_00443df4;
L_00443db5:; BB(0x00443db5);
    /* 00443db5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443db8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443dbb: mov ecx, dword ptr [eax + edx*4 + 0x78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x78u));
    /* 00443dbf: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00443dc2: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00443dc5: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00443dc8: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443dcc: je 0x443ddf */ if (fZ) goto L_00443ddf;
L_00443dce:; BB(0x00443dce);
    /* 00443dce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00443dd0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00443dd3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443dd5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00443dd8: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x443ddau); call_ind(t); }
    /* 00443dda: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00443ddd: jmp 0x443de6 */ goto L_00443de6;
L_00443ddf:; BB(0x00443ddf);
    /* 00443ddf: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00443de6:; BB(0x00443de6);
    /* 00443de6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443de9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443dec: mov dword ptr [ecx + eax*4 + 0x78], 0 */ W32((u32)(r_ecx+r_eax*4+0x78u), 0x0u);
L_00443df4:; BB(0x00443df4);
    /* 00443df4: jmp 0x443d99 */ goto L_00443d99;
L_00443df6:; BB(0x00443df6);
    /* 00443df6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443df9: call 0x5e9dde */ r_esp -= 4; W32(r_esp, 0x443dfeu); f_005e9dde();
    /* 00443dfe: mov esp, ebp */ r_esp = r_ebp;
    /* 00443e00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443e01: ret  */ FN_RET(0x00443c4f); r_esp += 4; return;
}

void f_00443e02(void) /* FUN_00443e02 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443e02);
    /* 00443e02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443e03: mov ebp, esp */ r_ebp = r_esp;
    /* 00443e05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443e06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00443e09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443e0c: call 0x5ea28a */ r_esp -= 4; W32(r_esp, 0x443e11u); f_005ea28a();
    /* 00443e11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443e14: call 0x444454 */ r_esp -= 4; W32(r_esp, 0x443e19u); f_00444454();
    /* 00443e19: mov esp, ebp */ r_esp = r_ebp;
    /* 00443e1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443e1c: ret  */ FN_RET(0x00443e02); r_esp += 4; return;
}

void f_00443e1d(void) /* FUN_00443e1d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443e1d);
    /* 00443e1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443e1e: mov ebp, esp */ r_ebp = r_esp;
    /* 00443e20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443e21: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00443e24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443e27: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x443e2cu); f_005ea2c1();
    /* 00443e2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00443e2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443e2f: ret  */ FN_RET(0x00443e1d); r_esp += 4; return;
}

void f_00443e30(void) /* FUN_00443e30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443e30);
    /* 00443e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00443e33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443e36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00443e39: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00443e3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443e3d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00443e40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443e41: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443e44: call 0x5e9f7d */ r_esp -= 4; W32(r_esp, 0x443e49u); f_005e9f7d();
    /* 00443e49: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443e50: jmp 0x443e5b */ goto L_00443e5b;
L_00443e52:; BB(0x00443e52);
    /* 00443e52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443e55: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00443e58: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00443e5b:; BB(0x00443e5b);
    /* 00443e5b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443e5f: jge 0x443e63 */ if ((fS==fO)) goto L_00443e63;
L_00443e61:; BB(0x00443e61);
    /* 00443e61: jmp 0x443e52 */ goto L_00443e52;
L_00443e63:; BB(0x00443e63);
    /* 00443e63: mov esp, ebp */ r_esp = r_ebp;
    /* 00443e65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443e66: ret 8 */ FN_RET(0x00443e30); r_esp += 12; return;
}

void f_00443e69(void) /* FUN_00443e69 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443e69);
    /* 00443e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443e6a: mov ebp, esp */ r_ebp = r_esp;
    /* 00443e6c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443e6f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00443e72: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00443e75: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00443e78: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00443e7b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443e7e: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443e86: jne 0x443e8a */ if (!fZ) goto L_00443e8a;
L_00443e88:; BB(0x00443e88);
    /* 00443e88: jmp 0x443ec7 */ goto L_00443ec7;
L_00443e8a:; BB(0x00443e8a);
    /* 00443e8a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00443e8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443e8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00443e91: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443e94: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00443e9b: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00443ea1: call 0x5e24d8 */ r_esp -= 4; W32(r_esp, 0x443ea6u); f_005e24d8();
    /* 00443ea6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00443ea9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443ead: je 0x443ec7 */ if (fZ) goto L_00443ec7;
L_00443eaf:; BB(0x00443eaf);
    /* 00443eaf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443eb2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00443eb4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443eb7: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x443ebau); call_ind(t); }
    /* 00443eba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443ebb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00443ebe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443ebf: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x443ec4u); f_00624510();
    /* 00443ec4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00443ec7:; BB(0x00443ec7);
    /* 00443ec7: mov esp, ebp */ r_esp = r_ebp;
    /* 00443ec9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443eca: ret 0xc */ FN_RET(0x00443e69); r_esp += 16; return;
}

void f_00443ecd(void) /* FUN_00443ecd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443ecd);
    /* 00443ecd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443ece: mov ebp, esp */ r_ebp = r_esp;
    /* 00443ed0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443ed3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00443ed6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00443ed9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443edc: cmp dword ptr [ecx + eax*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443ee4: jne 0x443ee8 */ if (!fZ) goto L_00443ee8;
L_00443ee6:; BB(0x00443ee6);
    /* 00443ee6: jmp 0x443f1c */ goto L_00443f1c;
L_00443ee8:; BB(0x00443ee8);
    /* 00443ee8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00443eeb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00443eec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00443eef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443ef2: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00443ef9: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 00443eff: call 0x5e24d8 */ r_esp -= 4; W32(r_esp, 0x443f04u); f_005e24d8();
    /* 00443f04: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00443f07: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443f0b: je 0x443f1c */ if (fZ) goto L_00443f1c;
L_00443f0d:; BB(0x00443f0d);
    /* 00443f0d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00443f10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443f11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443f14: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00443f16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443f19: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x443f1cu); call_ind(t); }
L_00443f1c:; BB(0x00443f1c);
    /* 00443f1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00443f1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443f1f: ret 0xc */ FN_RET(0x00443ecd); r_esp += 16; return;
}

void f_00443f22(void) /* FUN_00443f22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443f22);
    /* 00443f22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443f23: mov ebp, esp */ r_ebp = r_esp;
    /* 00443f25: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443f28: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00443f2b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443f32: jmp 0x443f3d */ goto L_00443f3d;
L_00443f34:; BB(0x00443f34);
    /* 00443f34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443f37: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00443f3a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00443f3d:; BB(0x00443f3d);
    /* 00443f3d: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443f41: jge 0x443fd4 */ if ((fS==fO)) goto L_00443fd4;
L_00443f47:; BB(0x00443f47);
    /* 00443f47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443f4a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443f4d: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443f55: je 0x443fcf */ if (fZ) goto L_00443fcf;
L_00443f57:; BB(0x00443f57);
    /* 00443f57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443f5a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443f5d: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00443f64: cmp dword ptr [edx + 0xd0], 0 */ {  u32 a = R32((u32)(r_edx+0xd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443f6b: je 0x443fcf */ if (fZ) goto L_00443fcf;
L_00443f6d:; BB(0x00443f6d);
    /* 00443f6d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00443f70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443f71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443f74: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443f77: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00443f7e: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00443f84: call 0x5e24d8 */ r_esp -= 4; W32(r_esp, 0x443f89u); f_005e24d8();
    /* 00443f89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443f8b: je 0x443fcf */ if (fZ) goto L_00443fcf;
L_00443f8d:; BB(0x00443f8d);
    /* 00443f8d: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443f91: je 0x443fb1 */ if (fZ) goto L_00443fb1;
L_00443f93:; BB(0x00443f93);
    /* 00443f93: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00443f96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443f97: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443f9a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443f9d: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00443fa4: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 00443faa: call 0x5e256e */ r_esp -= 4; W32(r_esp, 0x443fafu); f_005e256e();
    /* 00443faf: jmp 0x443fcd */ goto L_00443fcd;
L_00443fb1:; BB(0x00443fb1);
    /* 00443fb1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00443fb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00443fb5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443fb8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443fbb: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00443fc2: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 00443fc8: call 0x5e259a */ r_esp -= 4; W32(r_esp, 0x443fcdu); f_005e259a();
L_00443fcd:; BB(0x00443fcd);
    /* 00443fcd: jmp 0x443fd4 */ goto L_00443fd4;
L_00443fcf:; BB(0x00443fcf);
    /* 00443fcf: jmp 0x443f34 */ goto L_00443f34;
L_00443fd4:; BB(0x00443fd4);
    /* 00443fd4: mov esp, ebp */ r_esp = r_ebp;
    /* 00443fd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443fd7: ret 8 */ FN_RET(0x00443f22); r_esp += 12; return;
}

void f_00443fda(void) /* FUN_00443fda */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443fda);
    /* 00443fda: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443fdb: mov ebp, esp */ r_ebp = r_esp;
    /* 00443fdd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443fe0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00443fe3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443fea: jmp 0x443ff5 */ goto L_00443ff5;
L_00443fec:; BB(0x00443fec);
    /* 00443fec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443fef: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00443ff2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00443ff5:; BB(0x00443ff5);
    /* 00443ff5: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443ff9: jge 0x444061 */ if ((fS==fO)) goto L_00444061;
L_00443ffb:; BB(0x00443ffb);
    /* 00443ffb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443ffe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444001: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444009: je 0x44405f */ if (fZ) goto L_0044405f;
L_0044400b:; BB(0x0044400b);
    /* 0044400b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044400e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444011: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00444018: cmp dword ptr [edx + 0xd0], 0 */ {  u32 a = R32((u32)(r_edx+0xd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044401f: je 0x44405f */ if (fZ) goto L_0044405f;
L_00444021:; BB(0x00444021);
    /* 00444021: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444025: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444028: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044402b: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00444032: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00444038: call 0x5e24d8 */ r_esp -= 4; W32(r_esp, 0x44403du); f_005e24d8();
    /* 0044403d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044403f: je 0x44405f */ if (fZ) goto L_0044405f;
L_00444041:; BB(0x00444041);
    /* 00444041: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00444044: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444045: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444048: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044404b: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00444052: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 00444058: call 0x5e25fd */ r_esp -= 4; W32(r_esp, 0x44405du); f_005e25fd();
    /* 0044405d: jmp 0x444061 */ goto L_00444061;
L_0044405f:; BB(0x0044405f);
    /* 0044405f: jmp 0x443fec */ goto L_00443fec;
L_00444061:; BB(0x00444061);
    /* 00444061: mov esp, ebp */ r_esp = r_ebp;
    /* 00444063: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444064: ret 4 */ FN_RET(0x00443fda); r_esp += 8; return;
}

void f_00444067(void) /* FUN_00444067 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444067);
    /* 00444067: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444068: mov ebp, esp */ r_ebp = r_esp;
    /* 0044406a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044406d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00444070: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00444077: jmp 0x444082 */ goto L_00444082;
L_00444079:; BB(0x00444079);
    /* 00444079: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044407c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044407f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00444082:; BB(0x00444082);
    /* 00444082: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444086: jge 0x4440ee */ if ((fS==fO)) goto L_004440ee;
L_00444088:; BB(0x00444088);
    /* 00444088: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044408b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044408e: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444096: je 0x4440ec */ if (fZ) goto L_004440ec;
L_00444098:; BB(0x00444098);
    /* 00444098: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044409b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044409e: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 004440a5: cmp dword ptr [edx + 0xd0], 0 */ {  u32 a = R32((u32)(r_edx+0xd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004440ac: je 0x4440ec */ if (fZ) goto L_004440ec;
L_004440ae:; BB(0x004440ae);
    /* 004440ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004440b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004440b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004440b5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004440b8: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 004440bf: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 004440c5: call 0x5e24d8 */ r_esp -= 4; W32(r_esp, 0x4440cau); f_005e24d8();
    /* 004440ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004440cc: je 0x4440ec */ if (fZ) goto L_004440ec;
L_004440ce:; BB(0x004440ce);
    /* 004440ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004440d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004440d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004440d5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004440d8: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 004440df: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 004440e5: call 0x5e2671 */ r_esp -= 4; W32(r_esp, 0x4440eau); f_005e2671();
    /* 004440ea: jmp 0x4440ee */ goto L_004440ee;
L_004440ec:; BB(0x004440ec);
    /* 004440ec: jmp 0x444079 */ goto L_00444079;
L_004440ee:; BB(0x004440ee);
    /* 004440ee: mov esp, ebp */ r_esp = r_ebp;
    /* 004440f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004440f1: ret 4 */ FN_RET(0x00444067); r_esp += 8; return;
}

void f_004440f4(void) /* FUN_004440f4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004440f4);
    /* 004440f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004440f5: mov ebp, esp */ r_ebp = r_esp;
    /* 004440f7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004440fa: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004440fd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00444104: jmp 0x44410f */ goto L_0044410f;
L_00444106:; BB(0x00444106);
    /* 00444106: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444109: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044410c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044410f:; BB(0x0044410f);
    /* 0044410f: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444113: jge 0x444186 */ if ((fS==fO)) goto L_00444186;
L_00444115:; BB(0x00444115);
    /* 00444115: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444118: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044411b: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444123: je 0x444184 */ if (fZ) goto L_00444184;
L_00444125:; BB(0x00444125);
    /* 00444125: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444128: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044412b: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00444132: cmp dword ptr [edx + 0xd0], 0 */ {  u32 a = R32((u32)(r_edx+0xd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444139: je 0x444184 */ if (fZ) goto L_00444184;
L_0044413b:; BB(0x0044413b);
    /* 0044413b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044413e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044413f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444142: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444145: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0044414c: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00444152: call 0x5e24d8 */ r_esp -= 4; W32(r_esp, 0x444157u); f_005e24d8();
    /* 00444157: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444159: je 0x444184 */ if (fZ) goto L_00444184;
L_0044415b:; BB(0x0044415b);
    /* 0044415b: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0044415e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044415f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00444162: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444163: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444166: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444169: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00444170: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 00444176: call 0x5e24d8 */ r_esp -= 4; W32(r_esp, 0x44417bu); f_005e24d8();
    /* 0044417b: mov ecx, eax */ r_ecx = r_eax;
    /* 0044417d: call 0x5e3c05 */ r_esp -= 4; W32(r_esp, 0x444182u); f_005e3c05();
    /* 00444182: jmp 0x444186 */ goto L_00444186;
L_00444184:; BB(0x00444184);
    /* 00444184: jmp 0x444106 */ goto L_00444106;
L_00444186:; BB(0x00444186);
    /* 00444186: mov esp, ebp */ r_esp = r_ebp;
    /* 00444188: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444189: ret 8 */ FN_RET(0x004440f4); r_esp += 12; return;
}

void f_0044418c(void) /* FUN_0044418c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044418c);
    /* 0044418c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044418d: mov ebp, esp */ r_ebp = r_esp;
    /* 0044418f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444192: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444195: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00444197: push 0x1a7 */ { u32 v = 0x1a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0044419c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044419f: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x4441a4u); f_004440f4();
    /* 004441a4: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 004441a6: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 004441a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004441ab: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x4441b0u); f_004440f4();
    /* 004441b0: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004441b6: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x4441bbu); f_005da3ec();
    /* 004441bb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004441be: cmp dword ptr [ebp - 8], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004441c2: ja 0x4443aa */ if ((!fC&&!fZ)) goto L_004443aa;
L_004441c8:; BB(0x004441c8);
    /* 004441c8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004441cb: jmp dword ptr [eax*4 + 0x4443ae] */ { u32 t = R32((u32)(r_eax*4+0x4443aeu)); switch (t) { case 0x4441d2u: goto L_004441d2; case 0x4443aau: goto L_004443aa; case 0x444222u: goto L_00444222; case 0x444254u: goto L_00444254; case 0x444268u: goto L_00444268; case 0x4442b8u: goto L_004442b8; case 0x44435fu: goto L_0044435f; default: UNSUP(0x004441cb, "jump table entry is not a known target"); } }
L_004441d2:; BB(0x004441d2);
    /* 004441d2: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 004441d4: push 0x1a9 */ { u32 v = 0x1a9u; r_esp -= 4; W32(r_esp, v); }
    /* 004441d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004441dc: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x4441e1u); f_004440f4();
    /* 004441e1: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 004441e3: push 0x1aa */ { u32 v = 0x1aau; r_esp -= 4; W32(r_esp, v); }
    /* 004441e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004441eb: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x4441f0u); f_004440f4();
    /* 004441f0: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004441f2: push 0x1ab */ { u32 v = 0x1abu; r_esp -= 4; W32(r_esp, v); }
    /* 004441f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004441fa: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x4441ffu); f_004440f4();
    /* 004441ff: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00444201: push 0x1ac */ { u32 v = 0x1acu; r_esp -= 4; W32(r_esp, v); }
    /* 00444206: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444209: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x44420eu); f_004440f4();
    /* 0044420e: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 00444210: push 0x1ad */ { u32 v = 0x1adu; r_esp -= 4; W32(r_esp, v); }
    /* 00444215: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444218: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x44421du); f_004440f4();
    /* 0044421d: jmp 0x4443aa */ goto L_004443aa;
L_00444222:; BB(0x00444222);
    /* 00444222: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00444224: push 0x1f5 */ { u32 v = 0x1f5u; r_esp -= 4; W32(r_esp, v); }
    /* 00444229: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044422c: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x444231u); f_004440f4();
    /* 00444231: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 00444233: push 0x1f6 */ { u32 v = 0x1f6u; r_esp -= 4; W32(r_esp, v); }
    /* 00444238: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044423b: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x444240u); f_004440f4();
    /* 00444240: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 00444242: push 0x1f7 */ { u32 v = 0x1f7u; r_esp -= 4; W32(r_esp, v); }
    /* 00444247: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044424a: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x44424fu); f_004440f4();
    /* 0044424f: jmp 0x4443aa */ goto L_004443aa;
L_00444254:; BB(0x00444254);
    /* 00444254: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00444256: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 0044425b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044425e: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x444263u); f_004440f4();
    /* 00444263: jmp 0x4443aa */ goto L_004443aa;
L_00444268:; BB(0x00444268);
    /* 00444268: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0044426a: push 0x209 */ { u32 v = 0x209u; r_esp -= 4; W32(r_esp, v); }
    /* 0044426f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444272: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x444277u); f_004440f4();
    /* 00444277: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 00444279: push 0x20a */ { u32 v = 0x20au; r_esp -= 4; W32(r_esp, v); }
    /* 0044427e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444281: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x444286u); f_004440f4();
    /* 00444286: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00444288: push 0x20b */ { u32 v = 0x20bu; r_esp -= 4; W32(r_esp, v); }
    /* 0044428d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444290: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x444295u); f_004440f4();
    /* 00444295: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 00444297: push 0x20c */ { u32 v = 0x20cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044429c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044429f: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x4442a4u); f_004440f4();
    /* 004442a4: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 004442a6: push 0x20d */ { u32 v = 0x20du; r_esp -= 4; W32(r_esp, v); }
    /* 004442ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004442ae: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x4442b3u); f_004440f4();
    /* 004442b3: jmp 0x4443aa */ goto L_004443aa;
L_004442b8:; BB(0x004442b8);
    /* 004442b8: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 004442ba: push 0x1fa */ { u32 v = 0x1fau; r_esp -= 4; W32(r_esp, v); }
    /* 004442bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004442c2: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x4442c7u); f_004440f4();
    /* 004442c7: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 004442c9: push 0x1fb */ { u32 v = 0x1fbu; r_esp -= 4; W32(r_esp, v); }
    /* 004442ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004442d1: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x4442d6u); f_004440f4();
    /* 004442d6: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004442d8: push 0x1fc */ { u32 v = 0x1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004442dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004442e0: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x4442e5u); f_004440f4();
    /* 004442e5: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 004442e7: push 0x1fd */ { u32 v = 0x1fdu; r_esp -= 4; W32(r_esp, v); }
    /* 004442ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004442ef: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x4442f4u); f_004440f4();
    /* 004442f4: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 004442f6: push 0x1fe */ { u32 v = 0x1feu; r_esp -= 4; W32(r_esp, v); }
    /* 004442fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004442fe: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x444303u); f_004440f4();
    /* 00444303: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 00444305: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044430a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044430d: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x444312u); f_004440f4();
    /* 00444312: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 00444314: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00444319: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044431c: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x444321u); f_004440f4();
    /* 00444321: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 00444323: push 0x201 */ { u32 v = 0x201u; r_esp -= 4; W32(r_esp, v); }
    /* 00444328: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044432b: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x444330u); f_004440f4();
    /* 00444330: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 00444332: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 00444337: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044433a: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x44433fu); f_004440f4();
    /* 0044433f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00444341: push 0x203 */ { u32 v = 0x203u; r_esp -= 4; W32(r_esp, v); }
    /* 00444346: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444349: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x44434eu); f_004440f4();
    /* 0044434e: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00444350: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 00444355: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444358: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x44435du); f_004440f4();
    /* 0044435d: jmp 0x4443aa */ goto L_004443aa;
L_0044435f:; BB(0x0044435f);
    /* 0044435f: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00444361: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 00444366: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444369: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x44436eu); f_004440f4();
    /* 0044436e: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 00444370: push 0x21e */ { u32 v = 0x21eu; r_esp -= 4; W32(r_esp, v); }
    /* 00444375: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444378: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x44437du); f_004440f4();
    /* 0044437d: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0044437f: push 0x21f */ { u32 v = 0x21fu; r_esp -= 4; W32(r_esp, v); }
    /* 00444384: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444387: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x44438cu); f_004440f4();
    /* 0044438c: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0044438e: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00444393: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444396: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x44439bu); f_004440f4();
    /* 0044439b: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0044439d: push 0x221 */ { u32 v = 0x221u; r_esp -= 4; W32(r_esp, v); }
    /* 004443a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004443a5: call 0x4440f4 */ r_esp -= 4; W32(r_esp, 0x4443aau); f_004440f4();
L_004443aa:; BB(0x004443aa);
    /* 004443aa: mov esp, ebp */ r_esp = r_ebp;
    /* 004443ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004443ad: ret  */ FN_RET(0x0044418c); r_esp += 4; return;
}

void f_004443de(void) /* FUN_004443de */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004443de);
    /* 004443de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004443df: mov ebp, esp */ r_ebp = r_esp;
    /* 004443e1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004443e4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004443e7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004443ee: jmp 0x4443f9 */ goto L_004443f9;
L_004443f0:; BB(0x004443f0);
    /* 004443f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004443f3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004443f6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004443f9:; BB(0x004443f9);
    /* 004443f9: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004443fd: jge 0x444430 */ if ((fS==fO)) goto L_00444430;
L_004443ff:; BB(0x004443ff);
    /* 004443ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444402: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444405: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044440d: je 0x44442e */ if (fZ) goto L_0044442e;
L_0044440f:; BB(0x0044440f);
    /* 0044440f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444412: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444415: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0044441c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044441f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444422: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00444429: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044442b: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x44442eu); call_ind(t); }
L_0044442e:; BB(0x0044442e);
    /* 0044442e: jmp 0x4443f0 */ goto L_004443f0;
L_00444430:; BB(0x00444430);
    /* 00444430: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00444436: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00444439: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0044443f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00444442: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00444444: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x444447u); call_ind(t); }
    /* 00444447: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444448: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044444b: call 0x4445e5 */ r_esp -= 4; W32(r_esp, 0x444450u); f_004445e5();
    /* 00444450: mov esp, ebp */ r_esp = r_ebp;
    /* 00444452: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444453: ret  */ FN_RET(0x004443de); r_esp += 4; return;
}

void f_00444454(void) /* FUN_00444454 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444454);
    /* 00444454: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444455: mov ebp, esp */ r_ebp = r_esp;
    /* 00444457: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044445a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044445d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00444464: jmp 0x44446f */ goto L_0044446f;
L_00444466:; BB(0x00444466);
    /* 00444466: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444469: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044446c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044446f:; BB(0x0044446f);
    /* 0044446f: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444473: jge 0x4444a6 */ if ((fS==fO)) goto L_004444a6;
L_00444475:; BB(0x00444475);
    /* 00444475: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444478: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044447b: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444483: je 0x4444a4 */ if (fZ) goto L_004444a4;
L_00444485:; BB(0x00444485);
    /* 00444485: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444488: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044448b: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00444492: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444495: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444498: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 0044449f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004444a1: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4444a4u); call_ind(t); }
L_004444a4:; BB(0x004444a4);
    /* 004444a4: jmp 0x444466 */ goto L_00444466;
L_004444a6:; BB(0x004444a6);
    /* 004444a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004444a9: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004444ad: je 0x4444c0 */ if (fZ) goto L_004444c0;
L_004444af:; BB(0x004444af);
    /* 004444af: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004444b2: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 004444b5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004444b8: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004444bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004444bd: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4444c0u); call_ind(t); }
L_004444c0:; BB(0x004444c0);
    /* 004444c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004444c3: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004444c7: je 0x4444da */ if (fZ) goto L_004444da;
L_004444c9:; BB(0x004444c9);
    /* 004444c9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004444cc: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 004444cf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004444d2: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004444d5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004444d7: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4444dau); call_ind(t); }
L_004444da:; BB(0x004444da);
    /* 004444da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004444dd: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004444e1: je 0x4444f4 */ if (fZ) goto L_004444f4;
L_004444e3:; BB(0x004444e3);
    /* 004444e3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004444e6: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 004444e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004444ec: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 004444ef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004444f1: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4444f4u); call_ind(t); }
L_004444f4:; BB(0x004444f4);
    /* 004444f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004444f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004444f7: ret  */ FN_RET(0x00444454); r_esp += 4; return;
}

void f_004444f8(void) /* FUN_004444f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004444f8);
    /* 004444f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004444f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004444fb: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004444fe: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00444501: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00444506: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00444509: call 0x4486c9 */ r_esp -= 4; W32(r_esp, 0x44450eu); f_004486c9();
    /* 0044450e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00444515: jmp 0x444520 */ goto L_00444520;
L_00444517:; BB(0x00444517);
    /* 00444517: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044451a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044451d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00444520:; BB(0x00444520);
    /* 00444520: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444524: jge 0x444569 */ if ((fS==fO)) goto L_00444569;
L_00444526:; BB(0x00444526);
    /* 00444526: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444529: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044452c: cmp dword ptr [eax + edx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444534: je 0x444567 */ if (fZ) goto L_00444567;
L_00444536:; BB(0x00444536);
    /* 00444536: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444539: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044453c: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00444543: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444546: je 0x444567 */ if (fZ) goto L_00444567;
L_00444548:; BB(0x00444548);
    /* 00444548: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044454b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044454e: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00444555: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444558: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044455b: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 00444562: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00444564: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x444567u); call_ind(t); }
L_00444567:; BB(0x00444567);
    /* 00444567: jmp 0x444517 */ goto L_00444517;
L_00444569:; BB(0x00444569);
    /* 00444569: mov esp, ebp */ r_esp = r_ebp;
    /* 0044456b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044456c: ret 4 */ FN_RET(0x004444f8); r_esp += 8; return;
}

void f_0044456f(void) /* FUN_0044456f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044456f);
    /* 0044456f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444570: mov ebp, esp */ r_ebp = r_esp;
    /* 00444572: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444575: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00444578: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044457f: jmp 0x44458a */ goto L_0044458a;
L_00444581:; BB(0x00444581);
    /* 00444581: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444584: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444587: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044458a:; BB(0x0044458a);
    /* 0044458a: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044458e: jge 0x4445c1 */ if ((fS==fO)) goto L_004445c1;
L_00444590:; BB(0x00444590);
    /* 00444590: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444593: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444596: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044459e: je 0x4445bf */ if (fZ) goto L_004445bf;
L_004445a0:; BB(0x004445a0);
    /* 004445a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004445a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004445a6: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 004445ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004445b0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004445b3: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 004445ba: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004445bc: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x4445bfu); call_ind(t); }
L_004445bf:; BB(0x004445bf);
    /* 004445bf: jmp 0x444581 */ goto L_00444581;
L_004445c1:; BB(0x004445c1);
    /* 004445c1: cmp dword ptr [0x6f6f04], 0 */ {  u32 a = R32((u32)(0x6f6f04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004445c8: je 0x4445e1 */ if (fZ) goto L_004445e1;
L_004445ca:; BB(0x004445ca);
    /* 004445ca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004445cd: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 004445d3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004445d6: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004445dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004445de: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x4445e1u); call_ind(t); }
L_004445e1:; BB(0x004445e1);
    /* 004445e1: mov esp, ebp */ r_esp = r_ebp;
    /* 004445e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004445e4: ret  */ FN_RET(0x0044456f); r_esp += 4; return;
}

void f_004445e5(void) /* FUN_004445e5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004445e5);
    /* 004445e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004445e6: mov ebp, esp */ r_ebp = r_esp;
    /* 004445e8: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004445ee: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 004445f4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004445f8: je 0x4446c0 */ if (fZ) goto L_004446c0;
L_004445fe:; BB(0x004445fe);
    /* 004445fe: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00444604: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444608: je 0x444647 */ if (fZ) goto L_00444647;
L_0044460a:; BB(0x0044460a);
    /* 0044460a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044460d: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x444612u); f_004259cd();
    /* 00444612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444613: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00444619: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0044461c: call 0x5e8a95 */ r_esp -= 4; W32(r_esp, 0x444621u); f_005e8a95();
    /* 00444621: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00444627: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x44462cu); f_005d9690();
    /* 0044462c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044462e: je 0x444647 */ if (fZ) goto L_00444647;
L_00444630:; BB(0x00444630);
    /* 00444630: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00444636: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 00444639: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0044463f: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00444642: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00444644: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x444647u); call_ind(t); }
L_00444647:; BB(0x00444647);
    /* 00444647: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0044464d: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444651: je 0x4446c0 */ if (fZ) goto L_004446c0;
L_00444653:; BB(0x00444653);
    /* 00444653: push 0x676828 */ { u32 v = 0x676828u; r_esp -= 4; W32(r_esp, v); }
    /* 00444658: lea edx, [ebp - 0x98] */ r_edx = (u32)(r_ebp+0xffffff68u);
    /* 0044465e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044465f: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x444665u); call_ind(t); }
    /* 00444665: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444668: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044466a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044466c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044466f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00444672: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00444675: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444676: lea edx, [ebp - 0x98] */ r_edx = (u32)(r_ebp+0xffffff68u);
    /* 0044467c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044467d: call 0x4298d8 */ r_esp -= 4; W32(r_esp, 0x444682u); f_004298d8();
    /* 00444682: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444685: lea eax, [ebp - 0x98] */ r_eax = (u32)(r_ebp+0xffffff68u);
    /* 0044468b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044468c: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00444692: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 00444695: call 0x5e8a95 */ r_esp -= 4; W32(r_esp, 0x44469au); f_005e8a95();
    /* 0044469a: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 004446a0: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x4446a5u); f_005d9690();
    /* 004446a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004446a7: je 0x4446c0 */ if (fZ) goto L_004446c0;
L_004446a9:; BB(0x004446a9);
    /* 004446a9: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 004446af: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 004446b2: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 004446b8: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004446bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004446bd: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x4446c0u); call_ind(t); }
L_004446c0:; BB(0x004446c0);
    /* 004446c0: mov esp, ebp */ r_esp = r_ebp;
    /* 004446c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004446c3: ret 4 */ FN_RET(0x004445e5); r_esp += 8; return;
}

void f_004446c6(void) /* FUN_004446c6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004446c6);
    /* 004446c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004446c7: mov ebp, esp */ r_ebp = r_esp;
    /* 004446c9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004446cc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004446cf: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004446d6: jne 0x4446e4 */ if (!fZ) goto L_004446e4;
L_004446d8:; BB(0x004446d8);
    /* 004446d8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004446db: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x4446e0u); f_005d96a9();
    /* 004446e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004446e2: je 0x4446e9 */ if (fZ) goto L_004446e9;
L_004446e4:; BB(0x004446e4);
    /* 004446e4: jmp 0x444847 */ goto L_00444847;
L_004446e9:; BB(0x004446e9);
    /* 004446e9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004446ed: je 0x4447f6 */ if (fZ) goto L_004447f6;
L_004446f3:; BB(0x004446f3);
    /* 004446f3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004446f6: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004446fa: jne 0x4447c1 */ if (!fZ) goto L_004447c1;
L_00444700:; BB(0x00444700);
    /* 00444700: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00444702: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x444707u); f_0048ab58();
    /* 00444707: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044470a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044470d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444711: je 0x444720 */ if (fZ) goto L_00444720;
L_00444713:; BB(0x00444713);
    /* 00444713: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444716: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x44471bu); f_005e9d30();
    /* 0044471b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044471e: jmp 0x444727 */ goto L_00444727;
L_00444720:; BB(0x00444720);
    /* 00444720: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00444727:; BB(0x00444727);
    /* 00444727: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044472a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044472d: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 00444730: push 0x1785 */ { u32 v = 0x1785u; r_esp -= 4; W32(r_esp, v); }
    /* 00444735: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444738: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0044473b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x444740u); f_005ea0c3();
    /* 00444740: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444743: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 00444746: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444749: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0044474c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044474e: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x444751u); call_ind(t); }
    /* 00444751: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444754: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044475b: je 0x4447c1 */ if (fZ) goto L_004447c1;
L_0044475d:; BB(0x0044475d);
    /* 0044475d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444760: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 00444766: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x44476bu); f_005d9883();
    /* 0044476b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044476e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044476f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444772: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 00444775: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444778: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0044477b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044477d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x444780u); call_ind(t); }
    /* 00444780: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444783: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 00444789: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044478c: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00444792: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00444794: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x444797u); call_ind(t); }
    /* 00444797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444798: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044479b: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004447a1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004447a4: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004447aa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004447ac: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x4447afu); call_ind(t); }
    /* 004447af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004447b0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004447b3: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 004447b6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004447b9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004447bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004447be: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4447c1u); call_ind(t); }
L_004447c1:; BB(0x004447c1);
    /* 004447c1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004447c4: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 004447c7: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x4447ccu); f_005d96a9();
    /* 004447cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004447ce: je 0x4447e3 */ if (fZ) goto L_004447e3;
L_004447d0:; BB(0x004447d0);
    /* 004447d0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004447d3: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 004447d6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004447d9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004447dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004447de: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4447e1u); call_ind(t); }
    /* 004447e1: jmp 0x4447f4 */ goto L_004447f4;
L_004447e3:; BB(0x004447e3);
    /* 004447e3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004447e6: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 004447e9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004447ec: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004447ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004447f1: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4447f4u); call_ind(t); }
L_004447f4:; BB(0x004447f4);
    /* 004447f4: jmp 0x444847 */ goto L_00444847;
L_004447f6:; BB(0x004447f6);
    /* 004447f6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004447f9: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004447fd: je 0x444847 */ if (fZ) goto L_00444847;
L_004447ff:; BB(0x004447ff);
    /* 004447ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444802: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 00444805: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444808: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0044480b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044480d: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x444810u); call_ind(t); }
    /* 00444810: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444813: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00444816: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00444819: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044481c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0044481f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444823: je 0x444836 */ if (fZ) goto L_00444836;
L_00444825:; BB(0x00444825);
    /* 00444825: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00444827: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044482a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044482c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044482f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x444831u); call_ind(t); }
    /* 00444831: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00444834: jmp 0x44483d */ goto L_0044483d;
L_00444836:; BB(0x00444836);
    /* 00444836: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0044483d:; BB(0x0044483d);
    /* 0044483d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444840: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
L_00444847:; BB(0x00444847);
    /* 00444847: mov esp, ebp */ r_esp = r_ebp;
    /* 00444849: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044484a: ret 4 */ FN_RET(0x004446c6); r_esp += 8; return;
}

void f_0044484d(void) /* FUN_0044484d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044484d);
    /* 0044484d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044484e: mov ebp, esp */ r_ebp = r_esp;
    /* 00444850: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444853: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00444856: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044485d: jmp 0x444868 */ goto L_00444868;
L_0044485f:; BB(0x0044485f);
    /* 0044485f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444862: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444865: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00444868:; BB(0x00444868);
    /* 00444868: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044486c: jge 0x4448b9 */ if ((fS==fO)) goto L_004448b9;
L_0044486e:; BB(0x0044486e);
    /* 0044486e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444871: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444874: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044487c: je 0x4448b7 */ if (fZ) goto L_004448b7;
L_0044487e:; BB(0x0044487e);
    /* 0044487e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444881: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444884: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0044488b: cmp dword ptr [edx + 0xd0], 0 */ {  u32 a = R32((u32)(r_edx+0xd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444892: je 0x4448b7 */ if (fZ) goto L_004448b7;
L_00444894:; BB(0x00444894);
    /* 00444894: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444897: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044489a: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 004448a1: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 004448a7: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x4448acu); f_005e07a3();
    /* 004448ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004448ae: je 0x4448b7 */ if (fZ) goto L_004448b7;
L_004448b0:; BB(0x004448b0);
    /* 004448b0: mov eax, 1 */ r_eax = 0x1u;
    /* 004448b5: jmp 0x4448bb */ goto L_004448bb;
L_004448b7:; BB(0x004448b7);
    /* 004448b7: jmp 0x44485f */ goto L_0044485f;
L_004448b9:; BB(0x004448b9);
    /* 004448b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004448bb:; BB(0x004448bb);
    /* 004448bb: mov esp, ebp */ r_esp = r_ebp;
    /* 004448bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004448be: ret  */ FN_RET(0x0044484d); r_esp += 4; return;
}

void f_004448bf(void) /* FUN_004448bf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004448bf);
    /* 004448bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004448c0: mov ebp, esp */ r_ebp = r_esp;
    /* 004448c2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004448c5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004448c8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004448cf: jmp 0x4448da */ goto L_004448da;
L_004448d1:; BB(0x004448d1);
    /* 004448d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004448d4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004448d7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004448da:; BB(0x004448da);
    /* 004448da: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004448de: jge 0x444920 */ if ((fS==fO)) goto L_00444920;
L_004448e0:; BB(0x004448e0);
    /* 004448e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004448e3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004448e6: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004448ee: je 0x44491e */ if (fZ) goto L_0044491e;
L_004448f0:; BB(0x004448f0);
    /* 004448f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004448f3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004448f6: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 004448fd: cmp dword ptr [edx + 0xd0], 0 */ {  u32 a = R32((u32)(r_edx+0xd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444904: je 0x44491e */ if (fZ) goto L_0044491e;
L_00444906:; BB(0x00444906);
    /* 00444906: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444909: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044490c: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00444913: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 00444919: call 0x5e1f28 */ r_esp -= 4; W32(r_esp, 0x44491eu); f_005e1f28();
L_0044491e:; BB(0x0044491e);
    /* 0044491e: jmp 0x4448d1 */ goto L_004448d1;
L_00444920:; BB(0x00444920);
    /* 00444920: mov esp, ebp */ r_esp = r_ebp;
    /* 00444922: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444923: ret  */ FN_RET(0x004448bf); r_esp += 4; return;
}

void f_00444924(void) /* FUN_00444924 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444924);
    /* 00444924: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444925: mov ebp, esp */ r_ebp = r_esp;
    /* 00444927: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444928: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044492b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044492e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044492f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444932: call 0x5e2a84 */ r_esp -= 4; W32(r_esp, 0x444937u); f_005e2a84();
    /* 00444937: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044493a: mov dword ptr [ecx], 0x634bf4 */ W32((u32)(r_ecx), 0x634bf4u);
    /* 00444940: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444943: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00444946: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 0044494c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044494f: mov dword ptr [ecx + 0xdc], 0 */ W32((u32)(r_ecx+0xdcu), 0x0u);
    /* 00444959: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044495c: mov dword ptr [edx + 0xe0], 0 */ W32((u32)(r_edx+0xe0u), 0x0u);
    /* 00444966: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444969: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 00444973: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444976: mov esp, ebp */ r_esp = r_ebp;
    /* 00444978: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444979: ret 8 */ FN_RET(0x00444924); r_esp += 12; return;
}

void f_0044497c(void) /* FUN_0044497c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044497c);
    /* 0044497c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044497d: mov ebp, esp */ r_ebp = r_esp;
    /* 0044497f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444982: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00444985: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444988: mov dword ptr [eax], 0x634bf4 */ W32((u32)(r_eax), 0x634bf4u);
    /* 0044498e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444991: cmp dword ptr [ecx + 0xdc], 0 */ {  u32 a = R32((u32)(r_ecx+0xdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444998: je 0x4449d7 */ if (fZ) goto L_004449d7;
L_0044499a:; BB(0x0044499a);
    /* 0044499a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044499d: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004449a3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004449a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004449a9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004449ac: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004449b0: je 0x4449c3 */ if (fZ) goto L_004449c3;
L_004449b2:; BB(0x004449b2);
    /* 004449b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004449b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004449b7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004449b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004449bc: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4449beu); call_ind(t); }
    /* 004449be: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004449c1: jmp 0x4449ca */ goto L_004449ca;
L_004449c3:; BB(0x004449c3);
    /* 004449c3: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_004449ca:; BB(0x004449ca);
    /* 004449ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004449cd: mov dword ptr [ecx + 0xdc], 0 */ W32((u32)(r_ecx+0xdcu), 0x0u);
L_004449d7:; BB(0x004449d7);
    /* 004449d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004449da: call 0x5e2ae1 */ r_esp -= 4; W32(r_esp, 0x4449dfu); f_005e2ae1();
    /* 004449df: mov esp, ebp */ r_esp = r_ebp;
    /* 004449e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004449e2: ret  */ FN_RET(0x0044497c); r_esp += 4; return;
}

void f_004449e3(void) /* FUN_004449e3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004449e3);
    /* 004449e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004449e4: mov ebp, esp */ r_ebp = r_esp;
    /* 004449e6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004449e9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004449ec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004449f3: jmp 0x4449fe */ goto L_004449fe;
L_004449f5:; BB(0x004449f5);
    /* 004449f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004449f8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004449fb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004449fe:; BB(0x004449fe);
    /* 004449fe: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444a02: jge 0x444a49 */ if ((fS==fO)) goto L_00444a49;
L_00444a04:; BB(0x00444a04);
    /* 00444a04: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444a07: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 00444a0d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444a10: cmp dword ptr [edx + eax*4 + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444a15: je 0x444a47 */ if (fZ) goto L_00444a47;
L_00444a17:; BB(0x00444a17);
    /* 00444a17: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444a1a: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 00444a20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444a23: mov ecx, dword ptr [edx + eax*4 + 0x78] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x78u));
    /* 00444a27: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 00444a2d: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444a30: je 0x444a47 */ if (fZ) goto L_00444a47;
L_00444a32:; BB(0x00444a32);
    /* 00444a32: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444a35: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00444a3b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444a3e: mov ecx, dword ptr [ecx + edx*4 + 0x78] */ r_ecx = R32((u32)(r_ecx+r_edx*4+0x78u));
    /* 00444a42: call 0x5e1f28 */ r_esp -= 4; W32(r_esp, 0x444a47u); f_005e1f28();
L_00444a47:; BB(0x00444a47);
    /* 00444a47: jmp 0x4449f5 */ goto L_004449f5;
L_00444a49:; BB(0x00444a49);
    /* 00444a49: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444a4c: mov dword ptr [eax + 0xe0], 0 */ W32((u32)(r_eax+0xe0u), 0x0u);
    /* 00444a56: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444a59: mov dword ptr [ecx + 0xe4], 0 */ W32((u32)(r_ecx+0xe4u), 0x0u);
    /* 00444a63: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444a6a: je 0x444a76 */ if (fZ) goto L_00444a76;
L_00444a6c:; BB(0x00444a6c);
    /* 00444a6c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444a6f: call 0x5e2b48 */ r_esp -= 4; W32(r_esp, 0x444a74u); f_005e2b48();
    /* 00444a74: jmp 0x444a7e */ goto L_00444a7e;
L_00444a76:; BB(0x00444a76);
    /* 00444a76: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444a79: call 0x5e2b48 */ r_esp -= 4; W32(r_esp, 0x444a7eu); f_005e2b48();
L_00444a7e:; BB(0x00444a7e);
    /* 00444a7e: mov esp, ebp */ r_esp = r_ebp;
    /* 00444a80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444a81: ret  */ FN_RET(0x004449e3); r_esp += 4; return;
}

void f_00444a82(void) /* FUN_00444a82 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444a82);
    /* 00444a82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444a83: mov ebp, esp */ r_ebp = r_esp;
    /* 00444a85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444a86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444a89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444a8c: cmp dword ptr [eax + 0xe0], 0 */ {  u32 a = R32((u32)(r_eax+0xe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444a93: je 0x444ac0 */ if (fZ) goto L_00444ac0;
L_00444a95:; BB(0x00444a95);
    /* 00444a95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444a98: mov edx, dword ptr [ecx + 0xe4] */ r_edx = R32((u32)(r_ecx+0xe4u));
    /* 00444a9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00444aa1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444aa4: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
    /* 00444aaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444aad: cmp dword ptr [ecx + 0xe4], 0x14 */ {  u32 a = R32((u32)(r_ecx+0xe4u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444ab4: jl 0x444abe */ if ((fS!=fO)) goto L_00444abe;
L_00444ab6:; BB(0x00444ab6);
    /* 00444ab6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444ab9: call 0x444b45 */ r_esp -= 4; W32(r_esp, 0x444abeu); f_00444b45();
L_00444abe:; BB(0x00444abe);
    /* 00444abe: jmp 0x444ae1 */ goto L_00444ae1;
L_00444ac0:; BB(0x00444ac0);
    /* 00444ac0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444ac3: mov dword ptr [edx + 0xe4], 0 */ W32((u32)(r_edx+0xe4u), 0x0u);
    /* 00444acd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444ad0: cmp dword ptr [eax + 0xdc], 0 */ {  u32 a = R32((u32)(r_eax+0xdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444ad7: je 0x444ae1 */ if (fZ) goto L_00444ae1;
L_00444ad9:; BB(0x00444ad9);
    /* 00444ad9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444adc: call 0x444b58 */ r_esp -= 4; W32(r_esp, 0x444ae1u); f_00444b58();
L_00444ae1:; BB(0x00444ae1);
    /* 00444ae1: mov esp, ebp */ r_esp = r_ebp;
    /* 00444ae3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444ae4: ret  */ FN_RET(0x00444a82); r_esp += 4; return;
}

void f_00444ae5(void) /* FUN_00444ae5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444ae5);
    /* 00444ae5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444ae6: mov ebp, esp */ r_ebp = r_esp;
    /* 00444ae8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444ae9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444aec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444aef: cmp dword ptr [eax + 0x18], 3 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444af3: jne 0x444b33 */ if (!fZ) goto L_00444b33;
L_00444af5:; BB(0x00444af5);
    /* 00444af5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00444af8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444af9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444afc: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x444b01u); f_005d9738();
    /* 00444b01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444b03: je 0x444b26 */ if (fZ) goto L_00444b26;
L_00444b05:; BB(0x00444b05);
    /* 00444b05: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444b08: mov ecx, dword ptr [edx + 0xd8] */ r_ecx = R32((u32)(r_edx+0xd8u));
    /* 00444b0e: call 0x44484d */ r_esp -= 4; W32(r_esp, 0x444b13u); f_0044484d();
    /* 00444b13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444b15: jne 0x444b26 */ if (!fZ) goto L_00444b26;
L_00444b17:; BB(0x00444b17);
    /* 00444b17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444b1a: mov dword ptr [eax + 0xe0], 1 */ W32((u32)(r_eax+0xe0u), 0x1u);
    /* 00444b24: jmp 0x444b33 */ goto L_00444b33;
L_00444b26:; BB(0x00444b26);
    /* 00444b26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444b29: mov dword ptr [ecx + 0xe0], 0 */ W32((u32)(r_ecx+0xe0u), 0x0u);
L_00444b33:; BB(0x00444b33);
    /* 00444b33: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00444b36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444b37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444b3a: call 0x5d6084 */ r_esp -= 4; W32(r_esp, 0x444b3fu); f_005d6084();
    /* 00444b3f: mov esp, ebp */ r_esp = r_ebp;
    /* 00444b41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444b42: ret 4 */ FN_RET(0x00444ae5); r_esp += 8; return;
}

void f_00444b45(void) /* FUN_00444b45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444b45);
    /* 00444b45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444b46: mov ebp, esp */ r_ebp = r_esp;
    /* 00444b48: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444b4e: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 00444b54: mov esp, ebp */ r_esp = r_ebp;
    /* 00444b56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444b57: ret  */ FN_RET(0x00444b45); r_esp += 4; return;
}

void f_00444b58(void) /* FUN_00444b58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444b58);
    /* 00444b58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444b59: mov ebp, esp */ r_ebp = r_esp;
    /* 00444b5b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444b5e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00444b61: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444b64: cmp dword ptr [eax + 0xdc], 0 */ {  u32 a = R32((u32)(r_eax+0xdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444b6b: je 0x444bc1 */ if (fZ) goto L_00444bc1;
L_00444b6d:; BB(0x00444b6d);
    /* 00444b6d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444b70: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 00444b76: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444b79: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00444b7f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00444b81: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x444b84u); call_ind(t); }
    /* 00444b84: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444b87: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00444b8d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00444b90: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444b93: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00444b96: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444b9a: je 0x444bad */ if (fZ) goto L_00444bad;
L_00444b9c:; BB(0x00444b9c);
    /* 00444b9c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00444b9e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444ba1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00444ba3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444ba6: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x444ba8u); call_ind(t); }
    /* 00444ba8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00444bab: jmp 0x444bb4 */ goto L_00444bb4;
L_00444bad:; BB(0x00444bad);
    /* 00444bad: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00444bb4:; BB(0x00444bb4);
    /* 00444bb4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444bb7: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
L_00444bc1:; BB(0x00444bc1);
    /* 00444bc1: mov esp, ebp */ r_esp = r_ebp;
    /* 00444bc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444bc4: ret  */ FN_RET(0x00444b58); r_esp += 4; return;
}

void f_00444bec(void) /* FUN_00444bec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444bec);
    /* 00444bec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444bed: mov ebp, esp */ r_ebp = r_esp;
    /* 00444bef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444bf0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444bf3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444bf6: mov dword ptr [eax], 0x634c64 */ W32((u32)(r_eax), 0x634c64u);
    /* 00444bfc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444bff: call 0x5e0cd4 */ r_esp -= 4; W32(r_esp, 0x444c04u); f_005e0cd4();
    /* 00444c04: mov esp, ebp */ r_esp = r_ebp;
    /* 00444c06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444c07: ret  */ FN_RET(0x00444bec); r_esp += 4; return;
}

void f_00444c08(void) /* FUN_00444c08 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444c08);
    /* 00444c08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444c09: mov ebp, esp */ r_ebp = r_esp;
    /* 00444c0b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444c0e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00444c11: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00444c16: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x444c1bu); f_0048ab58();
    /* 00444c1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444c1e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00444c21: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444c25: je 0x444c3e */ if (fZ) goto L_00444c3e;
L_00444c27:; BB(0x00444c27);
    /* 00444c27: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444c2a: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00444c30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444c31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444c34: call 0x444bc5 */ r_esp -= 4; W32(r_esp, 0x444c39u); f_00444bc5();
    /* 00444c39: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00444c3c: jmp 0x444c45 */ goto L_00444c45;
L_00444c3e:; BB(0x00444c3e);
    /* 00444c3e: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00444c45:; BB(0x00444c45);
    /* 00444c45: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444c48: mov esp, ebp */ r_esp = r_ebp;
    /* 00444c4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444c4b: ret  */ FN_RET(0x00444c08); r_esp += 4; return;
}

void f_00444c4c(void) /* FUN_00444c4c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444c4c);
    /* 00444c4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444c4d: mov ebp, esp */ r_ebp = r_esp;
    /* 00444c4f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444c52: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444c55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444c58: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00444c5e: mov edx, dword ptr [ecx + 0xcc] */ r_edx = R32((u32)(r_ecx+0xccu));
    /* 00444c64: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00444c67: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00444c6b: ja 0x444d8b */ if ((!fC&&!fZ)) goto L_00444d8b;
L_00444c71:; BB(0x00444c71);
    /* 00444c71: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444c74: jmp dword ptr [eax*4 + 0x444d91] */ { u32 t = R32((u32)(r_eax*4+0x444d91u)); switch (t) { case 0x444d7fu: goto L_00444d7f; case 0x444c7bu: goto L_00444c7b; case 0x444c9du: goto L_00444c9d; case 0x444c8cu: goto L_00444c8c; case 0x444d71u: goto L_00444d71; case 0x444caeu: goto L_00444cae; case 0x444ce1u: goto L_00444ce1; case 0x444cf3u: goto L_00444cf3; case 0x444d05u: goto L_00444d05; case 0x444d17u: goto L_00444d17; case 0x444d6fu: goto L_00444d6f; case 0x444d29u: goto L_00444d29; case 0x444d3bu: goto L_00444d3b; case 0x444d4du: goto L_00444d4d; case 0x444d5fu: goto L_00444d5f; default: UNSUP(0x00444c74, "jump table entry is not a known target"); } }
L_00444c7b:; BB(0x00444c7b);
    /* 00444c7b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00444c7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444c7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444c82: call 0x445563 */ r_esp -= 4; W32(r_esp, 0x444c87u); f_00445563();
    /* 00444c87: jmp 0x444d8b */ goto L_00444d8b;
L_00444c8c:; BB(0x00444c8c);
    /* 00444c8c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00444c8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444c90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444c93: call 0x446665 */ r_esp -= 4; W32(r_esp, 0x444c98u); f_00446665();
    /* 00444c98: jmp 0x444d8b */ goto L_00444d8b;
L_00444c9d:; BB(0x00444c9d);
    /* 00444c9d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444ca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444ca1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444ca4: call 0x4460ac */ r_esp -= 4; W32(r_esp, 0x444ca9u); f_004460ac();
    /* 00444ca9: jmp 0x444d8b */ goto L_00444d8b;
L_00444cae:; BB(0x00444cae);
    /* 00444cae: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444cb5: je 0x444d6f */ if (fZ) goto L_00444d6f;
L_00444cbb:; BB(0x00444cbb);
    /* 00444cbb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00444cbe: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00444cc1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444cc4: sub edx, 0x3ed */ {  u32 a = r_edx; u32 b = 0x3edu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00444cca: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00444ccd: cmp dword ptr [ebp - 0xc], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00444cd1: ja 0x444d6f */ if ((!fC&&!fZ)) goto L_00444d6f;
L_00444cd7:; BB(0x00444cd7);
    /* 00444cd7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444cda: jmp dword ptr [eax*4 + 0x444da9] */ { u32 t = R32((u32)(r_eax*4+0x444da9u)); switch (t) { case 0x444caeu: goto L_00444cae; case 0x444d71u: goto L_00444d71; case 0x444c8cu: goto L_00444c8c; case 0x444c9du: goto L_00444c9d; case 0x444c7bu: goto L_00444c7b; case 0x444d7fu: goto L_00444d7f; case 0x444ce1u: goto L_00444ce1; case 0x444cf3u: goto L_00444cf3; case 0x444d05u: goto L_00444d05; case 0x444d17u: goto L_00444d17; case 0x444d6fu: goto L_00444d6f; case 0x444d29u: goto L_00444d29; case 0x444d3bu: goto L_00444d3b; case 0x444d4du: goto L_00444d4d; case 0x444d5fu: goto L_00444d5f; default: UNSUP(0x00444cda, "jump table entry is not a known target"); } }
L_00444ce1:; BB(0x00444ce1);
    /* 00444ce1: push 0x9c8e */ { u32 v = 0x9c8eu; r_esp -= 4; W32(r_esp, v); }
    /* 00444ce6: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00444cec: call 0x42a7c0 */ r_esp -= 4; W32(r_esp, 0x444cf1u); f_0042a7c0();
    /* 00444cf1: jmp 0x444d6f */ goto L_00444d6f;
L_00444cf3:; BB(0x00444cf3);
    /* 00444cf3: push 0x9c8f */ { u32 v = 0x9c8fu; r_esp -= 4; W32(r_esp, v); }
    /* 00444cf8: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00444cfe: call 0x42a7c0 */ r_esp -= 4; W32(r_esp, 0x444d03u); f_0042a7c0();
    /* 00444d03: jmp 0x444d6f */ goto L_00444d6f;
L_00444d05:; BB(0x00444d05);
    /* 00444d05: push 0x9c90 */ { u32 v = 0x9c90u; r_esp -= 4; W32(r_esp, v); }
    /* 00444d0a: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00444d10: call 0x42a7c0 */ r_esp -= 4; W32(r_esp, 0x444d15u); f_0042a7c0();
    /* 00444d15: jmp 0x444d6f */ goto L_00444d6f;
L_00444d17:; BB(0x00444d17);
    /* 00444d17: push 0x9c98 */ { u32 v = 0x9c98u; r_esp -= 4; W32(r_esp, v); }
    /* 00444d1c: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00444d22: call 0x42a7c0 */ r_esp -= 4; W32(r_esp, 0x444d27u); f_0042a7c0();
    /* 00444d27: jmp 0x444d6f */ goto L_00444d6f;
L_00444d29:; BB(0x00444d29);
    /* 00444d29: push 0x9c95 */ { u32 v = 0x9c95u; r_esp -= 4; W32(r_esp, v); }
    /* 00444d2e: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00444d34: call 0x42a7c0 */ r_esp -= 4; W32(r_esp, 0x444d39u); f_0042a7c0();
    /* 00444d39: jmp 0x444d6f */ goto L_00444d6f;
L_00444d3b:; BB(0x00444d3b);
    /* 00444d3b: push 0x9c96 */ { u32 v = 0x9c96u; r_esp -= 4; W32(r_esp, v); }
    /* 00444d40: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00444d46: call 0x42a7c0 */ r_esp -= 4; W32(r_esp, 0x444d4bu); f_0042a7c0();
    /* 00444d4b: jmp 0x444d6f */ goto L_00444d6f;
L_00444d4d:; BB(0x00444d4d);
    /* 00444d4d: push 0x9c97 */ { u32 v = 0x9c97u; r_esp -= 4; W32(r_esp, v); }
    /* 00444d52: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00444d58: call 0x42a7c0 */ r_esp -= 4; W32(r_esp, 0x444d5du); f_0042a7c0();
    /* 00444d5d: jmp 0x444d6f */ goto L_00444d6f;
L_00444d5f:; BB(0x00444d5f);
    /* 00444d5f: push 0x9c99 */ { u32 v = 0x9c99u; r_esp -= 4; W32(r_esp, v); }
    /* 00444d64: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00444d6a: call 0x42a7c0 */ r_esp -= 4; W32(r_esp, 0x444d6fu); f_0042a7c0();
L_00444d6f:; BB(0x00444d6f);
    /* 00444d6f: jmp 0x444d8b */ goto L_00444d8b;
L_00444d71:; BB(0x00444d71);
    /* 00444d71: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00444d74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444d75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444d78: call 0x446212 */ r_esp -= 4; W32(r_esp, 0x444d7du); f_00446212();
    /* 00444d7d: jmp 0x444d8b */ goto L_00444d8b;
L_00444d7f:; BB(0x00444d7f);
    /* 00444d7f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00444d82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444d83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444d86: call 0x446df2 */ r_esp -= 4; W32(r_esp, 0x444d8bu); f_00446df2();
L_00444d8b:; BB(0x00444d8b);
    /* 00444d8b: mov esp, ebp */ r_esp = r_ebp;
    /* 00444d8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444d8e: ret 4 */ FN_RET(0x00444c4c); r_esp += 8; return;
}

void f_00444dd1(void) /* FUN_00444dd1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444dd1);
    /* 00444dd1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444dd2: mov ebp, esp */ r_ebp = r_esp;
    /* 00444dd4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444dd7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00444dda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00444de1:; BB(0x00444de1);
    /* 00444de1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444de4: imul eax, eax, 0x7ec */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7ecu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444dea: cmp dword ptr [eax + 0x654498], -1 */ {  u32 a = R32((u32)(r_eax+0x654498u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444df1: je 0x444e22 */ if (fZ) goto L_00444e22;
L_00444df3:; BB(0x00444df3);
    /* 00444df3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444df6: imul ecx, ecx, 0x7ec */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7ecu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444dfc: mov edx, dword ptr [ecx + 0x654498] */ r_edx = R32((u32)(r_ecx+0x654498u));
    /* 00444e02: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444e05: jne 0x444e17 */ if (!fZ) goto L_00444e17;
L_00444e07:; BB(0x00444e07);
    /* 00444e07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444e0a: imul eax, eax, 0x7ec */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7ecu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444e10: add eax, 0x654498 */ {  u32 a = r_eax; u32 b = 0x654498u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444e15: jmp 0x444e24 */ goto L_00444e24;
L_00444e17:; BB(0x00444e17);
    /* 00444e17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444e1a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444e1d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00444e20: jmp 0x444de1 */ goto L_00444de1;
L_00444e22:; BB(0x00444e22);
    /* 00444e22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00444e24:; BB(0x00444e24);
    /* 00444e24: mov esp, ebp */ r_esp = r_ebp;
    /* 00444e26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444e27: ret 4 */ FN_RET(0x00444dd1); r_esp += 8; return;
}

