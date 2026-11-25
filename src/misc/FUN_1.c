#include "protos.h"

void f_00401000(void) /* FUN_00401000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401000);
    /* 00401000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401001: mov ebp, esp */ r_ebp = r_esp;
    /* 00401003: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401006: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00401009: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040100c: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x401011u); f_005e3fb0();
    /* 00401011: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401014: mov dword ptr [eax], 0x6332d4 */ W32((u32)(r_eax), 0x6332d4u);
    /* 0040101a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040101d: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 00401024: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401027: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 0040102e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401031: call 0x401803 */ r_esp -= 4; W32(r_esp, 0x401036u); f_00401803();
    /* 00401036: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401039: call 0x5e4035 */ r_esp -= 4; W32(r_esp, 0x40103eu); f_005e4035();
    /* 0040103e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401041: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x401046u); f_005ea2c1();
    /* 00401046: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00401048: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40104du); f_0048ab58();
    /* 0040104d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401050: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00401053: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401057: je 0x401066 */ if (fZ) goto L_00401066;
L_00401059:; BB(0x00401059);
    /* 00401059: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040105c: call 0x401f8d */ r_esp -= 4; W32(r_esp, 0x401061u); f_00401f8d();
    /* 00401061: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00401064: jmp 0x40106d */ goto L_0040106d;
L_00401066:; BB(0x00401066);
    /* 00401066: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0040106d:; BB(0x0040106d);
    /* 0040106d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00401070: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401071: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401074: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x401079u); f_005e40dc();
    /* 00401079: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040107b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040107e: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 00401081: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401084: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00401087: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00401089: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40108cu); call_ind(t); }
    /* 0040108c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040108e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401091: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00401094: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401097: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0040109a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040109c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x40109fu); call_ind(t); }
    /* 0040109f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004010a2: mov esp, ebp */ r_esp = r_ebp;
    /* 004010a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004010a5: ret  */ FN_RET(0x00401000); r_esp += 4; return;
}

void f_004010a6(void) /* FUN_004010a6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004010a6);
    /* 004010a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004010a7: mov ebp, esp */ r_ebp = r_esp;
    /* 004010a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004010aa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004010ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004010b0: mov dword ptr [eax], 0x6332d4 */ W32((u32)(r_eax), 0x6332d4u);
    /* 004010b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004010b9: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x4010beu); f_005e3fed();
    /* 004010be: mov esp, ebp */ r_esp = r_ebp;
    /* 004010c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004010c1: ret  */ FN_RET(0x004010a6); r_esp += 4; return;
}

void f_004010c2(void) /* FUN_004010c2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004010c2);
    /* 004010c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004010c3: mov ebp, esp */ r_ebp = r_esp;
    /* 004010c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004010c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004010c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004010cc: call 0x5e4151 */ r_esp -= 4; W32(r_esp, 0x4010d1u); f_005e4151();
    /* 004010d1: mov esp, ebp */ r_esp = r_ebp;
    /* 004010d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004010d4: ret  */ FN_RET(0x004010c2); r_esp += 4; return;
}

void f_004010d5(void) /* FUN_004010d5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004010d5);
    /* 004010d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004010d6: mov ebp, esp */ r_ebp = r_esp;
    /* 004010d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004010d9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004010dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004010df: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 004010e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004010e9: call 0x4017c4 */ r_esp -= 4; W32(r_esp, 0x4010eeu); f_004017c4();
    /* 004010ee: mov esp, ebp */ r_esp = r_ebp;
    /* 004010f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004010f1: ret  */ FN_RET(0x004010d5); r_esp += 4; return;
}

void f_004010f2(void) /* FUN_004010f2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004010f2);
    /* 004010f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004010f3: mov ebp, esp */ r_ebp = r_esp;
    /* 004010f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004010f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004010f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004010fc: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 00401103: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401105: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401108: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0040110b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040110e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00401111: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00401113: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x401116u); call_ind(t); }
    /* 00401116: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401118: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040111b: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0040111e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401121: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00401124: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00401126: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x401129u); call_ind(t); }
    /* 00401129: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 0040112e: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 00401134: call 0x5e84af */ r_esp -= 4; W32(r_esp, 0x401139u); f_005e84af();
    /* 00401139: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 0040113f: mov ecx, dword ptr [ecx + 0x1cb8] */ r_ecx = R32((u32)(r_ecx+0x1cb8u));
    /* 00401145: call 0x5e84af */ r_esp -= 4; W32(r_esp, 0x40114au); f_005e84af();
    /* 0040114a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040114c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040114d: ret  */ FN_RET(0x004010f2); r_esp += 4; return;
}

void f_0040114e(void) /* FUN_0040114e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040114e);
    /* 0040114e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040114f: mov ebp, esp */ r_ebp = r_esp;
    /* 00401151: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401152: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401155: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 0040115a: cmp dword ptr [eax + 0x1bc], 1 */ {  u32 a = R32((u32)(r_eax+0x1bcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401161: jne 0x401177 */ if (!fZ) goto L_00401177;
L_00401163:; BB(0x00401163);
    /* 00401163: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401166: cmp dword ptr [ecx + 0x7c], 1 */ {  u32 a = R32((u32)(r_ecx+0x7cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040116a: jne 0x401170 */ if (!fZ) goto L_00401170;
L_0040116c:; BB(0x0040116c);
    /* 0040116c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040116e: jmp 0x401179 */ goto L_00401179;
L_00401170:; BB(0x00401170);
    /* 00401170: mov eax, 1 */ r_eax = 0x1u;
    /* 00401175: jmp 0x401179 */ goto L_00401179;
L_00401177:; BB(0x00401177);
    /* 00401177: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00401179:; BB(0x00401179);
    /* 00401179: mov esp, ebp */ r_esp = r_ebp;
    /* 0040117b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040117c: ret  */ FN_RET(0x0040114e); r_esp += 4; return;
}

void f_0040117d(void) /* FUN_0040117d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040117d);
    /* 0040117d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040117e: mov ebp, esp */ r_ebp = r_esp;
    /* 00401180: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401181: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401184: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401187: call 0x40114e */ r_esp -= 4; W32(r_esp, 0x40118cu); f_0040114e();
    /* 0040118c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040118e: jne 0x401192 */ if (!fZ) goto L_00401192;
L_00401190:; BB(0x00401190);
    /* 00401190: jmp 0x4011fb */ goto L_004011fb;
L_00401192:; BB(0x00401192);
    /* 00401192: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401195: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 0040119c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040119e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004011a1: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 004011a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004011a8: push 0x18aa7 */ { u32 v = 0x18aa7u; r_esp -= 4; W32(r_esp, v); }
    /* 004011ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004011b0: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 004011b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004011b7: push 0x18aa6 */ { u32 v = 0x18aa6u; r_esp -= 4; W32(r_esp, v); }
    /* 004011bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004011bf: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004011c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004011c3: call 0x402714 */ r_esp -= 4; W32(r_esp, 0x4011c8u); f_00402714();
    /* 004011c8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004011cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004011cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004011d0: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 004011d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004011d6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004011d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004011db: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4011deu); call_ind(t); }
    /* 004011de: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004011e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004011e3: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004011e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004011e9: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004011ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004011ee: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4011f1u); call_ind(t); }
    /* 004011f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004011f4: mov dword ptr [eax + 0x7c], 1 */ W32((u32)(r_eax+0x7cu), 0x1u);
L_004011fb:; BB(0x004011fb);
    /* 004011fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004011fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004011fe: ret  */ FN_RET(0x0040117d); r_esp += 4; return;
}

void f_004011ff(void) /* FUN_004011ff */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004011ff);
    /* 004011ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401200: mov ebp, esp */ r_ebp = r_esp;
    /* 00401202: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401205: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00401208: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040120b: call 0x40114e */ r_esp -= 4; W32(r_esp, 0x401210u); f_0040114e();
    /* 00401210: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401212: jne 0x401219 */ if (!fZ) goto L_00401219;
L_00401214:; BB(0x00401214);
    /* 00401214: jmp 0x401314 */ goto L_00401314;
L_00401219:; BB(0x00401219);
    /* 00401219: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040121c: mov dword ptr [eax + 0x7c], 1 */ W32((u32)(r_eax+0x7cu), 0x1u);
    /* 00401223: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040122a: jmp 0x401235 */ goto L_00401235;
L_0040122c:; BB(0x0040122c);
    /* 0040122c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040122f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401232: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00401235:; BB(0x00401235);
    /* 00401235: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401239: jge 0x401297 */ if ((fS==fO)) goto L_00401297;
L_0040123b:; BB(0x0040123b);
    /* 0040123b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040123e: mov dword ptr [ebp + edx*4 - 0x1c], 0 */ W32((u32)(r_ebp+r_edx*4+0xffffffe4u), 0x0u);
    /* 00401246: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401249: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040124c: cmp dword ptr [ebp - 0x24], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00401250: ja 0x401282 */ if ((!fC&&!fZ)) goto L_00401282;
L_00401252:; BB(0x00401252);
    /* 00401252: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00401255: jmp dword ptr [ecx*4 + 0x40131a] */ { u32 t = R32((u32)(r_ecx*4+0x40131au)); switch (t) { case 0x40125cu: goto L_0040125c; case 0x401264u: goto L_00401264; case 0x40126cu: goto L_0040126c; case 0x401274u: goto L_00401274; case 0x40127cu: goto L_0040127c; default: UNSUP(0x00401255, "jump table entry is not a known target"); } }
L_0040125c:; BB(0x0040125c);
    /* 0040125c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040125f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00401262: jmp 0x401282 */ goto L_00401282;
L_00401264:; BB(0x00401264);
    /* 00401264: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00401267: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040126a: jmp 0x401282 */ goto L_00401282;
L_0040126c:; BB(0x0040126c);
    /* 0040126c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040126f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401272: jmp 0x401282 */ goto L_00401282;
L_00401274:; BB(0x00401274);
    /* 00401274: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00401277: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0040127a: jmp 0x401282 */ goto L_00401282;
L_0040127c:; BB(0x0040127c);
    /* 0040127c: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0040127f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00401282:; BB(0x00401282);
    /* 00401282: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401285: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401286: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00401289: call 0x401752 */ r_esp -= 4; W32(r_esp, 0x40128eu); f_00401752();
    /* 0040128e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401291: mov dword ptr [ebp + edx*4 - 0x1c], eax */ W32((u32)(r_ebp+r_edx*4+0xffffffe4u), r_eax);
    /* 00401295: jmp 0x40122c */ goto L_0040122c;
L_00401297:; BB(0x00401297);
    /* 00401297: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00401299: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040129c: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 004012a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004012a3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004012a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004012a7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004012aa: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 004012b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004012b1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004012b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004012b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004012b8: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 004012be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004012bf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004012c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004012c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004012c6: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 004012cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004012cd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004012d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004012d1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004012d4: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 004012da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004012db: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004012de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004012df: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004012e2: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004012e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004012e6: call 0x402714 */ r_esp -= 4; W32(r_esp, 0x4012ebu); f_00402714();
    /* 004012eb: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004012ee: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004012f0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004012f3: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 004012f6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004012f9: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004012fc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004012fe: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x401301u); call_ind(t); }
    /* 00401301: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401303: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00401306: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 00401309: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040130c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0040130f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00401311: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x401314u); call_ind(t); }
L_00401314:; BB(0x00401314);
    /* 00401314: mov esp, ebp */ r_esp = r_ebp;
    /* 00401316: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401317: ret 0x14 */ FN_RET(0x004011ff); r_esp += 24; return;
}

void f_0040132e(void) /* FUN_0040132e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040132e);
    /* 0040132e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040132f: mov ebp, esp */ r_ebp = r_esp;
    /* 00401331: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401334: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00401337: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040133a: call 0x40114e */ r_esp -= 4; W32(r_esp, 0x40133fu); f_0040114e();
    /* 0040133f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401341: jne 0x401348 */ if (!fZ) goto L_00401348;
L_00401343:; BB(0x00401343);
    /* 00401343: jmp 0x401403 */ goto L_00401403;
L_00401348:; BB(0x00401348);
    /* 00401348: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040134b: mov dword ptr [eax + 0x7c], 1 */ W32((u32)(r_eax+0x7cu), 0x1u);
    /* 00401352: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00401359: jmp 0x401364 */ goto L_00401364;
L_0040135b:; BB(0x0040135b);
    /* 0040135b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040135e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401361: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00401364:; BB(0x00401364);
    /* 00401364: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401368: jge 0x4013ba */ if ((fS==fO)) goto L_004013ba;
L_0040136a:; BB(0x0040136a);
    /* 0040136a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040136d: mov dword ptr [ebp + edx*4 - 0x14], 0 */ W32((u32)(r_ebp+r_edx*4+0xffffffecu), 0x0u);
    /* 00401375: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401378: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040137b: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040137f: je 0x40138f */ if (fZ) goto L_0040138f;
L_00401381:; BB(0x00401381);
    /* 00401381: cmp dword ptr [ebp - 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401385: je 0x401397 */ if (fZ) goto L_00401397;
L_00401387:; BB(0x00401387);
    /* 00401387: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040138b: je 0x40139f */ if (fZ) goto L_0040139f;
L_0040138d:; BB(0x0040138d);
    /* 0040138d: jmp 0x4013a5 */ goto L_004013a5;
L_0040138f:; BB(0x0040138f);
    /* 0040138f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00401392: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401395: jmp 0x4013a5 */ goto L_004013a5;
L_00401397:; BB(0x00401397);
    /* 00401397: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0040139a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0040139d: jmp 0x4013a5 */ goto L_004013a5;
L_0040139f:; BB(0x0040139f);
    /* 0040139f: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 004013a2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004013a5:; BB(0x004013a5);
    /* 004013a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004013a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004013a9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004013ac: call 0x401752 */ r_esp -= 4; W32(r_esp, 0x4013b1u); f_00401752();
    /* 004013b1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004013b4: mov dword ptr [ebp + edx*4 - 0x14], eax */ W32((u32)(r_ebp+r_edx*4+0xffffffecu), r_eax);
    /* 004013b8: jmp 0x40135b */ goto L_0040135b;
L_004013ba:; BB(0x004013ba);
    /* 004013ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004013bc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004013bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004013c0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004013c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004013c4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004013c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004013c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004013cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004013cc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004013cf: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 004013d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004013d3: call 0x402714 */ r_esp -= 4; W32(r_esp, 0x4013d8u); f_00402714();
    /* 004013d8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004013db: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004013de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004013df: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004013e2: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 004013e5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004013e8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004013eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004013ed: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4013f0u); call_ind(t); }
    /* 004013f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004013f2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004013f5: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004013f8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004013fb: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004013fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00401400: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x401403u); call_ind(t); }
L_00401403:; BB(0x00401403);
    /* 00401403: mov esp, ebp */ r_esp = r_ebp;
    /* 00401405: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401406: ret 0x14 */ FN_RET(0x0040132e); r_esp += 24; return;
}

void f_00401409(void) /* FUN_00401409 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401409);
    /* 00401409: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040140a: mov ebp, esp */ r_ebp = r_esp;
    /* 0040140c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040140d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401410: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00401413: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401414: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00401417: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401418: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040141b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040141c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0040141e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401421: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00401427: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401428: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040142b: call 0x40132e */ r_esp -= 4; W32(r_esp, 0x401430u); f_0040132e();
    /* 00401430: mov esp, ebp */ r_esp = r_ebp;
    /* 00401432: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401433: ret 0xc */ FN_RET(0x00401409); r_esp += 16; return;
}

void f_00401436(void) /* FUN_00401436 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401436);
    /* 00401436: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401437: mov ebp, esp */ r_ebp = r_esp;
    /* 00401439: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040143a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040143d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00401440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401441: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00401444: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401445: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00401448: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401449: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0040144b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040144e: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00401454: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401455: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401458: call 0x40132e */ r_esp -= 4; W32(r_esp, 0x40145du); f_0040132e();
    /* 0040145d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040145f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401460: ret 0xc */ FN_RET(0x00401436); r_esp += 16; return;
}

void f_00401463(void) /* FUN_00401463 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401463);
    /* 00401463: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401464: mov ebp, esp */ r_ebp = r_esp;
    /* 00401466: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401467: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040146a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0040146d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040146e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00401471: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401472: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00401475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401476: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00401478: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040147b: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00401481: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401482: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401485: call 0x40132e */ r_esp -= 4; W32(r_esp, 0x40148au); f_0040132e();
    /* 0040148a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040148c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040148d: ret 0xc */ FN_RET(0x00401463); r_esp += 16; return;
}

void f_00401490(void) /* FUN_00401490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401490);
    /* 00401490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401491: mov ebp, esp */ r_ebp = r_esp;
    /* 00401493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401497: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040149a: call 0x40114e */ r_esp -= 4; W32(r_esp, 0x40149fu); f_0040114e();
    /* 0040149f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004014a1: jne 0x4014a5 */ if (!fZ) goto L_004014a5;
L_004014a3:; BB(0x004014a3);
    /* 004014a3: jmp 0x4014fd */ goto L_004014fd;
L_004014a5:; BB(0x004014a5);
    /* 004014a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004014a8: mov dword ptr [eax + 0x7c], 1 */ W32((u32)(r_eax+0x7cu), 0x1u);
    /* 004014af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004014b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004014b4: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 004014ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004014bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004014be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004014bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004014c2: call 0x401752 */ r_esp -= 4; W32(r_esp, 0x4014c7u); f_00401752();
    /* 004014c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004014c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004014cb: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 004014ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004014cf: call 0x402714 */ r_esp -= 4; W32(r_esp, 0x4014d4u); f_00402714();
    /* 004014d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004014d7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004014d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004014dc: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004014df: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004014e2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004014e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004014e7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4014eau); call_ind(t); }
    /* 004014ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004014ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004014ef: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004014f2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004014f5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004014f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004014fa: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4014fdu); call_ind(t); }
L_004014fd:; BB(0x004014fd);
    /* 004014fd: mov esp, ebp */ r_esp = r_ebp;
    /* 004014ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401500: ret 4 */ FN_RET(0x00401490); r_esp += 8; return;
}

void f_00401503(void) /* FUN_00401503 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401503);
    /* 00401503: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401504: mov ebp, esp */ r_ebp = r_esp;
    /* 00401506: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401507: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040150a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040150d: call 0x40114e */ r_esp -= 4; W32(r_esp, 0x401512u); f_0040114e();
    /* 00401512: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401514: jne 0x401518 */ if (!fZ) goto L_00401518;
L_00401516:; BB(0x00401516);
    /* 00401516: jmp 0x401563 */ goto L_00401563;
L_00401518:; BB(0x00401518);
    /* 00401518: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040151b: mov dword ptr [eax + 0x7c], 1 */ W32((u32)(r_eax+0x7cu), 0x1u);
    /* 00401522: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00401524: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401527: mov edx, dword ptr [ecx + 0xd4] */ r_edx = R32((u32)(r_ecx+0xd4u));
    /* 0040152d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040152e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401531: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00401534: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401535: call 0x402714 */ r_esp -= 4; W32(r_esp, 0x40153au); f_00402714();
    /* 0040153a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040153d: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0040153f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401542: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 00401545: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401548: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0040154b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040154d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x401550u); call_ind(t); }
    /* 00401550: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401552: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401555: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 00401558: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040155b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0040155e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00401560: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x401563u); call_ind(t); }
L_00401563:; BB(0x00401563);
    /* 00401563: mov esp, ebp */ r_esp = r_ebp;
    /* 00401565: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401566: ret  */ FN_RET(0x00401503); r_esp += 4; return;
}

void f_00401567(void) /* FUN_00401567 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401567);
    /* 00401567: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401568: mov ebp, esp */ r_ebp = r_esp;
    /* 0040156a: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040156d: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00401570: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00401573: call 0x40114e */ r_esp -= 4; W32(r_esp, 0x401578u); f_0040114e();
    /* 00401578: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040157a: jne 0x401581 */ if (!fZ) goto L_00401581;
L_0040157c:; BB(0x0040157c);
    /* 0040157c: jmp 0x4016c4 */ goto L_004016c4;
L_00401581:; BB(0x00401581);
    /* 00401581: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00401584: mov dword ptr [eax + 0x7c], 1 */ W32((u32)(r_eax+0x7cu), 0x1u);
    /* 0040158b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040158e: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 00401591: imul edx, edx, 0x2710 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2710u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00401597: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040159a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004015a1: jmp 0x4015ac */ goto L_004015ac;
L_004015a3:; BB(0x004015a3);
    /* 004015a3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004015a6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004015a9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004015ac:; BB(0x004015ac);
    /* 004015ac: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004015b0: jge 0x401663 */ if ((fS==fO)) goto L_00401663;
L_004015b6:; BB(0x004015b6);
    /* 004015b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004015b9: mov dword ptr [ebp + ecx*4 - 0x18], 0 */ W32((u32)(r_ebp+r_ecx*4+0xffffffe8u), 0x0u);
    /* 004015c1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004015c4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004015c7: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004015cb: je 0x4015db */ if (fZ) goto L_004015db;
L_004015cd:; BB(0x004015cd);
    /* 004015cd: cmp dword ptr [ebp - 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004015d1: je 0x4015e3 */ if (fZ) goto L_004015e3;
L_004015d3:; BB(0x004015d3);
    /* 004015d3: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004015d7: je 0x4015eb */ if (fZ) goto L_004015eb;
L_004015d9:; BB(0x004015d9);
    /* 004015d9: jmp 0x4015f1 */ goto L_004015f1;
L_004015db:; BB(0x004015db);
    /* 004015db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004015de: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004015e1: jmp 0x4015f1 */ goto L_004015f1;
L_004015e3:; BB(0x004015e3);
    /* 004015e3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004015e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004015e9: jmp 0x4015f1 */ goto L_004015f1;
L_004015eb:; BB(0x004015eb);
    /* 004015eb: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004015ee: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004015f1:; BB(0x004015f1);
    /* 004015f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004015f4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004015f7: cmp dword ptr [ebp - 0x24], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004015fb: ja 0x40165e */ if ((!fC&&!fZ)) goto L_0040165e;
L_004015fd:; BB(0x004015fd);
    /* 004015fd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00401600: jmp dword ptr [ecx*4 + 0x4016ca] */ { u32 t = R32((u32)(r_ecx*4+0x4016cau)); switch (t) { case 0x401607u: goto L_00401607; case 0x401619u: goto L_00401619; case 0x40162bu: goto L_0040162b; case 0x40163cu: goto L_0040163c; case 0x40164eu: goto L_0040164e; default: UNSUP(0x00401600, "jump table entry is not a known target"); } }
L_00401607:; BB(0x00401607);
    /* 00401607: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040160a: add edx, 0x24a52 */ {  u32 a = r_edx; u32 b = 0x24a52u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401610: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00401613: mov dword ptr [ebp + eax*4 - 0x18], edx */ W32((u32)(r_ebp+r_eax*4+0xffffffe8u), r_edx);
    /* 00401617: jmp 0x40165e */ goto L_0040165e;
L_00401619:; BB(0x00401619);
    /* 00401619: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040161c: add ecx, 0x24a51 */ {  u32 a = r_ecx; u32 b = 0x24a51u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401622: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00401625: mov dword ptr [ebp + edx*4 - 0x18], ecx */ W32((u32)(r_ebp+r_edx*4+0xffffffe8u), r_ecx);
    /* 00401629: jmp 0x40165e */ goto L_0040165e;
L_0040162b:; BB(0x0040162b);
    /* 0040162b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040162e: add eax, 0x24a50 */ {  u32 a = r_eax; u32 b = 0x24a50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00401633: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00401636: mov dword ptr [ebp + ecx*4 - 0x18], eax */ W32((u32)(r_ebp+r_ecx*4+0xffffffe8u), r_eax);
    /* 0040163a: jmp 0x40165e */ goto L_0040165e;
L_0040163c:; BB(0x0040163c);
    /* 0040163c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040163f: add edx, 0x24a4f */ {  u32 a = r_edx; u32 b = 0x24a4fu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401645: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00401648: mov dword ptr [ebp + eax*4 - 0x18], edx */ W32((u32)(r_ebp+r_eax*4+0xffffffe8u), r_edx);
    /* 0040164c: jmp 0x40165e */ goto L_0040165e;
L_0040164e:; BB(0x0040164e);
    /* 0040164e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401651: add ecx, 0x24a4e */ {  u32 a = r_ecx; u32 b = 0x24a4eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401657: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040165a: mov dword ptr [ebp + edx*4 - 0x18], ecx */ W32((u32)(r_ebp+r_edx*4+0xffffffe8u), r_ecx);
L_0040165e:; BB(0x0040165e);
    /* 0040165e: jmp 0x4015a3 */ goto L_004015a3;
L_00401663:; BB(0x00401663);
    /* 00401663: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00401665: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00401668: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0040166e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040166f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00401672: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401673: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00401676: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0040167c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040167d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401680: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401681: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00401684: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 0040168a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040168b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040168e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040168f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00401692: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00401695: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401696: call 0x402714 */ r_esp -= 4; W32(r_esp, 0x40169bu); f_00402714();
    /* 0040169b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040169e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004016a0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004016a3: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 004016a6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004016a9: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004016ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004016ae: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4016b1u); call_ind(t); }
    /* 004016b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004016b3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004016b6: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 004016b9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004016bc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004016bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004016c1: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4016c4u); call_ind(t); }
L_004016c4:; BB(0x004016c4);
    /* 004016c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004016c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004016c7: ret 0xc */ FN_RET(0x00401567); r_esp += 16; return;
}

void f_004016de(void) /* FUN_004016de */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004016de);
    /* 004016de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004016df: mov ebp, esp */ r_ebp = r_esp;
    /* 004016e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004016e2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004016e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004016e8: call 0x40114e */ r_esp -= 4; W32(r_esp, 0x4016edu); f_0040114e();
    /* 004016ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004016ef: jne 0x4016f3 */ if (!fZ) goto L_004016f3;
L_004016f1:; BB(0x004016f1);
    /* 004016f1: jmp 0x40174e */ goto L_0040174e;
L_004016f3:; BB(0x004016f3);
    /* 004016f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004016f6: mov dword ptr [eax + 0x7c], 1 */ W32((u32)(r_eax+0x7cu), 0x1u);
    /* 004016fd: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00401703: mov dword ptr [ecx + 0x1b4], 1 */ W32((u32)(r_ecx+0x1b4u), 0x1u);
    /* 0040170d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040170f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401712: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00401718: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401719: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040171c: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 0040171f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401720: call 0x402714 */ r_esp -= 4; W32(r_esp, 0x401725u); f_00402714();
    /* 00401725: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401728: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0040172a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040172d: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00401730: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401733: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00401736: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00401738: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40173bu); call_ind(t); }
    /* 0040173b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040173d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401740: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00401743: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401746: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00401749: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040174b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x40174eu); call_ind(t); }
L_0040174e:; BB(0x0040174e);
    /* 0040174e: mov esp, ebp */ r_esp = r_ebp;
    /* 00401750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401751: ret  */ FN_RET(0x004016de); r_esp += 4; return;
}

void f_00401752(void) /* FUN_00401752 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401752);
    /* 00401752: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401753: mov ebp, esp */ r_ebp = r_esp;
    /* 00401755: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401758: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040175b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040175e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00401761: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00401765: ja 0x4017a8 */ if ((!fC&&!fZ)) goto L_004017a8;
L_00401767:; BB(0x00401767);
    /* 00401767: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040176a: jmp dword ptr [ecx*4 + 0x4017b0] */ { u32 t = R32((u32)(r_ecx*4+0x4017b0u)); switch (t) { case 0x401771u: goto L_00401771; case 0x40177cu: goto L_0040177c; case 0x401787u: goto L_00401787; case 0x401792u: goto L_00401792; case 0x40179du: goto L_0040179d; default: UNSUP(0x0040176a, "jump table entry is not a known target"); } }
L_00401771:; BB(0x00401771);
    /* 00401771: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401774: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0040177a: jmp 0x4017aa */ goto L_004017aa;
L_0040177c:; BB(0x0040177c);
    /* 0040177c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040177f: mov eax, dword ptr [eax + 0x8c] */ r_eax = R32((u32)(r_eax+0x8cu));
    /* 00401785: jmp 0x4017aa */ goto L_004017aa;
L_00401787:; BB(0x00401787);
    /* 00401787: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040178a: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 00401790: jmp 0x4017aa */ goto L_004017aa;
L_00401792:; BB(0x00401792);
    /* 00401792: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401795: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0040179b: jmp 0x4017aa */ goto L_004017aa;
L_0040179d:; BB(0x0040179d);
    /* 0040179d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004017a0: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 004017a6: jmp 0x4017aa */ goto L_004017aa;
L_004017a8:; BB(0x004017a8);
    /* 004017a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004017aa:; BB(0x004017aa);
    /* 004017aa: mov esp, ebp */ r_esp = r_ebp;
    /* 004017ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004017ad: ret 4 */ FN_RET(0x00401752); r_esp += 8; return;
}

void f_004017c4(void) /* FUN_004017c4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004017c4);
    /* 004017c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004017c5: mov ebp, esp */ r_ebp = r_esp;
    /* 004017c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004017c8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004017cb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004017cd: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4017d2u); f_0060ee31();
    /* 004017d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004017d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004017d7: je 0x4017e5 */ if (fZ) goto L_004017e5;
L_004017d9:; BB(0x004017d9);
    /* 004017d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004017dc: mov dword ptr [eax + 0x78], 1 */ W32((u32)(r_eax+0x78u), 0x1u);
    /* 004017e3: jmp 0x4017ef */ goto L_004017ef;
L_004017e5:; BB(0x004017e5);
    /* 004017e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004017e8: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
L_004017ef:; BB(0x004017ef);
    /* 004017ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004017f2: call 0x401960 */ r_esp -= 4; W32(r_esp, 0x4017f7u); f_00401960();
    /* 004017f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004017fa: call 0x401c3e */ r_esp -= 4; W32(r_esp, 0x4017ffu); f_00401c3e();
    /* 004017ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00401801: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401802: ret  */ FN_RET(0x004017c4); r_esp += 4; return;
}

void f_00401803(void) /* FUN_00401803 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401803);
    /* 00401803: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401804: mov ebp, esp */ r_ebp = r_esp;
    /* 00401806: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401807: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040180a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040180d: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 00401817: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040181a: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 00401824: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401827: mov dword ptr [edx + 0x88], 0 */ W32((u32)(r_edx+0x88u), 0x0u);
    /* 00401831: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401834: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 0040183e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401841: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 0040184b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040184e: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
    /* 00401858: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040185b: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
    /* 00401865: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401868: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
    /* 00401872: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401875: mov dword ptr [edx + 0xa0], 0 */ W32((u32)(r_edx+0xa0u), 0x0u);
    /* 0040187f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401882: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 0040188c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040188f: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
    /* 00401899: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040189c: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 004018a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004018a9: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 004018b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004018b6: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 004018c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004018c3: mov dword ptr [edx + 0xb8], 0 */ W32((u32)(r_edx+0xb8u), 0x0u);
    /* 004018cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004018d0: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 004018da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004018dd: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
    /* 004018e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004018ea: mov dword ptr [edx + 0xc4], 0 */ W32((u32)(r_edx+0xc4u), 0x0u);
    /* 004018f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004018f7: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
    /* 00401901: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401904: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
    /* 0040190e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401911: mov dword ptr [edx + 0xd0], 0 */ W32((u32)(r_edx+0xd0u), 0x0u);
    /* 0040191b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040191e: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
    /* 00401928: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040192b: mov dword ptr [ecx + 0xd8], 0 */ W32((u32)(r_ecx+0xd8u), 0x0u);
    /* 00401935: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401938: mov dword ptr [edx + 0xdc], 0 */ W32((u32)(r_edx+0xdcu), 0x0u);
    /* 00401942: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401945: mov dword ptr [eax + 0xe0], 0 */ W32((u32)(r_eax+0xe0u), 0x0u);
    /* 0040194f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401952: mov dword ptr [ecx + 0xe4], 0 */ W32((u32)(r_ecx+0xe4u), 0x0u);
    /* 0040195c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040195e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040195f: ret  */ FN_RET(0x00401803); r_esp += 4; return;
}

void f_00401960(void) /* FUN_00401960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401960);
    /* 00401960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401961: mov ebp, esp */ r_ebp = r_esp;
    /* 00401963: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401966: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00401969: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040196c: call 0x401803 */ r_esp -= 4; W32(r_esp, 0x401971u); f_00401803();
    /* 00401971: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401974: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00401977: imul ecx, ecx, 0x2710 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2710u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040197d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401980: mov edx, dword ptr [0x64c3a0] */ r_edx = R32((u32)(0x64c3a0u));
    /* 00401986: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401989: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040198c: mov dword ptr [eax + 0x80], edx */ W32((u32)(r_eax+0x80u), r_edx);
    /* 00401992: mov ecx, dword ptr [0x64c3b0] */ r_ecx = R32((u32)(0x64c3b0u));
    /* 00401998: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040199b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040199e: mov dword ptr [edx + 0x84], ecx */ W32((u32)(r_edx+0x84u), r_ecx);
    /* 004019a4: mov eax, dword ptr [0x64c3c0] */ r_eax = R32((u32)(0x64c3c0u));
    /* 004019a9: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004019ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004019af: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 004019b5: mov edx, dword ptr [0x64c3d0] */ r_edx = R32((u32)(0x64c3d0u));
    /* 004019bb: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004019be: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004019c1: mov dword ptr [eax + 0x8c], edx */ W32((u32)(r_eax+0x8cu), r_edx);
    /* 004019c7: mov ecx, dword ptr [0x64c3e0] */ r_ecx = R32((u32)(0x64c3e0u));
    /* 004019cd: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004019d0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004019d3: mov dword ptr [edx + 0x90], ecx */ W32((u32)(r_edx+0x90u), r_ecx);
    /* 004019d9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004019db: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4019e0u); f_0060ee31();
    /* 004019e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004019e3: mov eax, dword ptr [eax*4 + 0x64c3f0] */ r_eax = R32((u32)(r_eax*4+0x64c3f0u));
    /* 004019ea: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004019ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004019f0: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 004019f6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004019f8: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4019fdu); f_0060ee31();
    /* 004019fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401a00: mov edx, dword ptr [eax*4 + 0x64c400] */ r_edx = R32((u32)(r_eax*4+0x64c400u));
    /* 00401a07: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401a0a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401a0d: mov dword ptr [eax + 0x98], edx */ W32((u32)(r_eax+0x98u), r_edx);
    /* 00401a13: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00401a15: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401a1au); f_0060ee31();
    /* 00401a1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401a1d: mov ecx, dword ptr [eax*4 + 0x64c410] */ r_ecx = R32((u32)(r_eax*4+0x64c410u));
    /* 00401a24: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401a27: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401a2a: mov dword ptr [edx + 0x9c], ecx */ W32((u32)(r_edx+0x9cu), r_ecx);
    /* 00401a30: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00401a32: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401a37u); f_0060ee31();
    /* 00401a37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401a3a: mov eax, dword ptr [eax*4 + 0x64c420] */ r_eax = R32((u32)(r_eax*4+0x64c420u));
    /* 00401a41: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00401a44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401a47: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 00401a4d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00401a4f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401a54u); f_0060ee31();
    /* 00401a54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401a57: mov edx, dword ptr [eax*4 + 0x64c430] */ r_edx = R32((u32)(r_eax*4+0x64c430u));
    /* 00401a5e: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401a61: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401a64: mov dword ptr [eax + 0xa4], edx */ W32((u32)(r_eax+0xa4u), r_edx);
    /* 00401a6a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00401a6c: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401a71u); f_0060ee31();
    /* 00401a71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401a74: mov ecx, dword ptr [eax*4 + 0x64c440] */ r_ecx = R32((u32)(r_eax*4+0x64c440u));
    /* 00401a7b: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401a7e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401a81: mov dword ptr [edx + 0xa8], ecx */ W32((u32)(r_edx+0xa8u), r_ecx);
    /* 00401a87: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00401a89: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401a8eu); f_0060ee31();
    /* 00401a8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401a91: mov eax, dword ptr [eax*4 + 0x64c450] */ r_eax = R32((u32)(r_eax*4+0x64c450u));
    /* 00401a98: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00401a9b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401a9e: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 00401aa4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00401aa6: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401aabu); f_0060ee31();
    /* 00401aab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401aae: mov edx, dword ptr [eax*4 + 0x64c460] */ r_edx = R32((u32)(r_eax*4+0x64c460u));
    /* 00401ab5: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401ab8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401abb: mov dword ptr [eax + 0xb0], edx */ W32((u32)(r_eax+0xb0u), r_edx);
    /* 00401ac1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00401ac3: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401ac8u); f_0060ee31();
    /* 00401ac8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401acb: mov ecx, dword ptr [eax*4 + 0x64c470] */ r_ecx = R32((u32)(r_eax*4+0x64c470u));
    /* 00401ad2: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401ad5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401ad8: mov dword ptr [edx + 0xb4], ecx */ W32((u32)(r_edx+0xb4u), r_ecx);
    /* 00401ade: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00401ae0: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401ae5u); f_0060ee31();
    /* 00401ae5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401ae8: mov eax, dword ptr [eax*4 + 0x64c480] */ r_eax = R32((u32)(r_eax*4+0x64c480u));
    /* 00401aef: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00401af2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401af5: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 00401afb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00401afd: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401b02u); f_0060ee31();
    /* 00401b02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401b05: mov edx, dword ptr [eax*4 + 0x64c490] */ r_edx = R32((u32)(r_eax*4+0x64c490u));
    /* 00401b0c: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401b0f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401b12: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 00401b18: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00401b1a: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401b1fu); f_0060ee31();
    /* 00401b1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401b22: mov ecx, dword ptr [eax*4 + 0x64c4a0] */ r_ecx = R32((u32)(r_eax*4+0x64c4a0u));
    /* 00401b29: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401b2c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401b2f: mov dword ptr [edx + 0xc0], ecx */ W32((u32)(r_edx+0xc0u), r_ecx);
    /* 00401b35: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00401b37: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401b3cu); f_0060ee31();
    /* 00401b3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401b3f: mov eax, dword ptr [eax*4 + 0x64c4b0] */ r_eax = R32((u32)(r_eax*4+0x64c4b0u));
    /* 00401b46: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00401b49: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401b4c: mov dword ptr [ecx + 0xc4], eax */ W32((u32)(r_ecx+0xc4u), r_eax);
    /* 00401b52: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00401b54: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401b59u); f_0060ee31();
    /* 00401b59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401b5c: mov edx, dword ptr [eax*4 + 0x64c4c8] */ r_edx = R32((u32)(r_eax*4+0x64c4c8u));
    /* 00401b63: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401b66: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401b69: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 00401b6f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00401b71: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401b76u); f_0060ee31();
    /* 00401b76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401b79: mov ecx, dword ptr [eax*4 + 0x64c4e0] */ r_ecx = R32((u32)(r_eax*4+0x64c4e0u));
    /* 00401b80: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401b83: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401b86: mov dword ptr [edx + 0xcc], ecx */ W32((u32)(r_edx+0xccu), r_ecx);
    /* 00401b8c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00401b8e: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401b93u); f_0060ee31();
    /* 00401b93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401b96: mov eax, dword ptr [eax*4 + 0x64c4f8] */ r_eax = R32((u32)(r_eax*4+0x64c4f8u));
    /* 00401b9d: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00401ba0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401ba3: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 00401ba9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00401bab: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401bb0u); f_0060ee31();
    /* 00401bb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401bb3: mov edx, dword ptr [eax*4 + 0x64c510] */ r_edx = R32((u32)(r_eax*4+0x64c510u));
    /* 00401bba: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401bbd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401bc0: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 00401bc6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00401bc8: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401bcdu); f_0060ee31();
    /* 00401bcd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401bd0: mov ecx, dword ptr [eax*4 + 0x64c520] */ r_ecx = R32((u32)(r_eax*4+0x64c520u));
    /* 00401bd7: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401bda: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401bdd: mov dword ptr [edx + 0xd8], ecx */ W32((u32)(r_edx+0xd8u), r_ecx);
    /* 00401be3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00401be5: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401beau); f_0060ee31();
    /* 00401bea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401bed: mov eax, dword ptr [eax*4 + 0x64c538] */ r_eax = R32((u32)(r_eax*4+0x64c538u));
    /* 00401bf4: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00401bf7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401bfa: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00401c00: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00401c02: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401c07u); f_0060ee31();
    /* 00401c07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401c0a: mov edx, dword ptr [eax*4 + 0x64c550] */ r_edx = R32((u32)(r_eax*4+0x64c550u));
    /* 00401c11: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401c14: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401c17: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 00401c1d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00401c1f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x401c24u); f_0060ee31();
    /* 00401c24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401c27: mov ecx, dword ptr [eax*4 + 0x64c568] */ r_ecx = R32((u32)(r_eax*4+0x64c568u));
    /* 00401c2e: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401c31: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401c34: mov dword ptr [edx + 0xe4], ecx */ W32((u32)(r_edx+0xe4u), r_ecx);
    /* 00401c3a: mov esp, ebp */ r_esp = r_ebp;
    /* 00401c3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401c3d: ret  */ FN_RET(0x00401960); r_esp += 4; return;
}

void f_00401c3e(void) /* FUN_00401c3e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401c3e);
    /* 00401c3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401c3f: mov ebp, esp */ r_ebp = r_esp;
    /* 00401c41: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401c44: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00401c47: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401c4a: call 0x40114e */ r_esp -= 4; W32(r_esp, 0x401c4fu); f_0040114e();
    /* 00401c4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401c51: je 0x401f89 */ if (fZ) goto L_00401f89;
L_00401c57:; BB(0x00401c57);
    /* 00401c57: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401c5a: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00401c60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401c61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401c63: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401c69: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401c6c: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401c71u); f_005ba9e1();
    /* 00401c71: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401c74: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00401c7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401c7b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401c7d: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401c83: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401c86: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401c8bu); f_005ba9e1();
    /* 00401c8b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401c8e: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00401c94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401c95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401c97: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401c9d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401ca0: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401ca5u); f_005ba9e1();
    /* 00401ca5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401ca8: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00401cae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401caf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401cb1: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401cb7: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401cba: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401cbfu); f_005ba9e1();
    /* 00401cbf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401cc2: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00401cc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401cc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401ccb: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401cd1: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401cd4: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401cd9u); f_005ba9e1();
    /* 00401cd9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401cdc: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00401ce2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401ce3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401ce5: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401ceb: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401cee: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401cf3u); f_005ba9e1();
    /* 00401cf3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401cf6: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00401cfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401cfd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401cff: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401d05: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401d08: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401d0du); f_005ba9e1();
    /* 00401d0d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401d10: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00401d16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401d17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401d19: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401d1f: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401d22: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401d27u); f_005ba9e1();
    /* 00401d27: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401d2a: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00401d30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401d31: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401d33: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401d39: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401d3c: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401d41u); f_005ba9e1();
    /* 00401d41: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401d44: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00401d4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401d4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401d4d: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401d53: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401d56: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401d5bu); f_005ba9e1();
    /* 00401d5b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401d5e: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 00401d64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401d65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401d67: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401d6d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401d70: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401d75u); f_005ba9e1();
    /* 00401d75: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401d78: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00401d7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401d7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401d81: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401d87: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401d8a: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401d8fu); f_005ba9e1();
    /* 00401d8f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401d92: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00401d98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401d99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401d9b: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401da1: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401da4: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401da9u); f_005ba9e1();
    /* 00401da9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401dac: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00401db2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401db3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401db5: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401dbb: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401dbe: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401dc3u); f_005ba9e1();
    /* 00401dc3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401dc6: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00401dcc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401dcd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401dcf: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401dd5: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401dd8: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401dddu); f_005ba9e1();
    /* 00401ddd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401de0: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00401de6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401de7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401de9: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401def: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401df2: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401df7u); f_005ba9e1();
    /* 00401df7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401dfa: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00401e00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401e03: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401e09: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401e0c: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401e11u); f_005ba9e1();
    /* 00401e11: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401e14: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00401e1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401e1d: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401e23: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401e26: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401e2bu); f_005ba9e1();
    /* 00401e2b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401e2e: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 00401e34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401e37: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401e3d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401e40: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401e45u); f_005ba9e1();
    /* 00401e45: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401e48: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00401e4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401e51: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401e57: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401e5a: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401e5fu); f_005ba9e1();
    /* 00401e5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401e62: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00401e68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401e6b: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401e71: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401e74: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401e79u); f_005ba9e1();
    /* 00401e79: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401e7c: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00401e82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401e85: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401e8b: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401e8e: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401e93u); f_005ba9e1();
    /* 00401e93: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401e96: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00401e9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401e9f: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401ea5: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401ea8: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401eadu); f_005ba9e1();
    /* 00401ead: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401eb0: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00401eb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401eb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401eb9: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401ebf: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401ec2: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401ec7u); f_005ba9e1();
    /* 00401ec7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401eca: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 00401ed0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401ed1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401ed3: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401ed9: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401edc: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401ee1u); f_005ba9e1();
    /* 00401ee1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401ee4: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00401eea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401eeb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401eed: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401ef3: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401ef6: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401efbu); f_005ba9e1();
    /* 00401efb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401efe: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00401f01: imul ecx, ecx, 0x2710 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2710u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00401f07: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401f0a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401f0d: add edx, 0x24a4e */ {  u32 a = r_edx; u32 b = 0x24a4eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401f13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401f14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401f16: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 00401f1b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00401f1e: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401f23u); f_005ba9e1();
    /* 00401f23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401f26: add ecx, 0x24a4f */ {  u32 a = r_ecx; u32 b = 0x24a4fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401f2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401f2d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401f2f: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401f35: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401f38: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401f3du); f_005ba9e1();
    /* 00401f3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401f40: add eax, 0x24a50 */ {  u32 a = r_eax; u32 b = 0x24a50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00401f45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401f46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401f48: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 00401f4e: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00401f51: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401f56u); f_005ba9e1();
    /* 00401f56: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401f59: add edx, 0x24a51 */ {  u32 a = r_edx; u32 b = 0x24a51u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401f5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401f60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401f62: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 00401f67: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00401f6a: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401f6fu); f_005ba9e1();
    /* 00401f6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401f72: add ecx, 0x24a52 */ {  u32 a = r_ecx; u32 b = 0x24a52u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401f78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401f79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401f7b: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00401f81: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00401f84: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x401f89u); f_005ba9e1();
L_00401f89:; BB(0x00401f89);
    /* 00401f89: mov esp, ebp */ r_esp = r_ebp;
    /* 00401f8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401f8c: ret  */ FN_RET(0x00401c3e); r_esp += 4; return;
}

void f_00401f8d(void) /* FUN_00401f8d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401f8d);
    /* 00401f8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401f8e: mov ebp, esp */ r_ebp = r_esp;
    /* 00401f90: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401f93: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00401f96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401f98: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401f9b: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x401fa0u); f_005e6160();
    /* 00401fa0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401fa3: mov dword ptr [eax], 0x633324 */ W32((u32)(r_eax), 0x633324u);
    /* 00401fa9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00401fb0: jmp 0x401fbb */ goto L_00401fbb;
L_00401fb2:; BB(0x00401fb2);
    /* 00401fb2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401fb5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401fb8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00401fbb:; BB(0x00401fbb);
    /* 00401fbb: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401fbf: jge 0x401fd1 */ if ((fS==fO)) goto L_00401fd1;
L_00401fc1:; BB(0x00401fc1);
    /* 00401fc1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401fc4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401fc7: mov dword ptr [eax + edx*4 + 0x20], 0 */ W32((u32)(r_eax+r_edx*4+0x20u), 0x0u);
    /* 00401fcf: jmp 0x401fb2 */ goto L_00401fb2;
L_00401fd1:; BB(0x00401fd1);
    /* 00401fd1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401fd4: mov esp, ebp */ r_esp = r_ebp;
    /* 00401fd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401fd7: ret  */ FN_RET(0x00401f8d); r_esp += 4; return;
}

void f_00401fd8(void) /* FUN_00401fd8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401fd8);
    /* 00401fd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401fd9: mov ebp, esp */ r_ebp = r_esp;
    /* 00401fdb: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401fde: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00401fe1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00401fe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401fe5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00401fe8: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x401fedu); f_005e626d();
    /* 00401fed: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00401ff0: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00401ff3: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00401ff6: cmp dword ptr [ebp - 0x2c], 0x2c */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00401ffa: ja 0x40265a */ if ((!fC&&!fZ)) goto L_0040265a;
L_00402000:; BB(0x00402000);
    /* 00402000: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00402003: jmp dword ptr [eax*4 + 0x402660] */ { u32 t = R32((u32)(r_eax*4+0x402660u)); switch (t) { case 0x40200au: goto L_0040200a; case 0x40200fu: goto L_0040200f; case 0x402031u: goto L_00402031; case 0x402056u: goto L_00402056; case 0x4020c6u: goto L_004020c6; case 0x4020deu: goto L_004020de; case 0x402102u: goto L_00402102; case 0x402127u: goto L_00402127; case 0x40214cu: goto L_0040214c; case 0x402170u: goto L_00402170; case 0x402195u: goto L_00402195; case 0x4021bau: goto L_004021ba; case 0x4021deu: goto L_004021de; case 0x402203u: goto L_00402203; case 0x402228u: goto L_00402228; case 0x40224cu: goto L_0040224c; case 0x402264u: goto L_00402264; case 0x402289u: goto L_00402289; case 0x4022aeu: goto L_004022ae; case 0x4022d2u: goto L_004022d2; case 0x4022f7u: goto L_004022f7; case 0x40230fu: goto L_0040230f; case 0x402334u: goto L_00402334; case 0x402358u: goto L_00402358; case 0x40237du: goto L_0040237d; case 0x4023a2u: goto L_004023a2; case 0x4023bau: goto L_004023ba; case 0x4023deu: goto L_004023de; case 0x402403u: goto L_00402403; case 0x402428u: goto L_00402428; case 0x40244cu: goto L_0040244c; case 0x402464u: goto L_00402464; case 0x402489u: goto L_00402489; case 0x4024aeu: goto L_004024ae; case 0x4024c6u: goto L_004024c6; case 0x402506u: goto L_00402506; case 0x40253bu: goto L_0040253b; case 0x40255fu: goto L_0040255f; case 0x402584u: goto L_00402584; case 0x4025a9u: goto L_004025a9; case 0x4025cdu: goto L_004025cd; case 0x4025efu: goto L_004025ef; case 0x402611u: goto L_00402611; case 0x402626u: goto L_00402626; case 0x402647u: goto L_00402647; default: UNSUP(0x00402003, "jump table entry is not a known target"); } }
L_0040200a:; BB(0x0040200a);
    /* 0040200a: jmp 0x40265a */ goto L_0040265a;
L_0040200f:; BB(0x0040200f);
    /* 0040200f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402011: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402014: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402015: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402017: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040201a: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0040201d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040201e: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 00402024: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00402027: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x40202cu); f_005e8389();
    /* 0040202c: jmp 0x40265a */ goto L_0040265a;
L_00402031:; BB(0x00402031);
    /* 00402031: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402033: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402036: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402037: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402039: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040203c: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0040203f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402040: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00402046: mov ecx, dword ptr [edx + 0x1cb4] */ r_ecx = R32((u32)(r_edx+0x1cb4u));
    /* 0040204c: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402051u); f_005e8389();
    /* 00402051: jmp 0x40265a */ goto L_0040265a;
L_00402056:; BB(0x00402056);
    /* 00402056: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402058: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040205a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040205c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040205f: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00402062: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402063: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00402069: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0040206c: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402071u); f_005e8389();
    /* 00402071: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402073: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402077: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402079: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040207c: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0040207f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402080: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 00402085: mov ecx, dword ptr [eax + 0x1cb8] */ r_ecx = R32((u32)(r_eax+0x1cb8u));
    /* 0040208b: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402090u); f_005e8389();
    /* 00402090: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00402092: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 00402098: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0040209b: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 004020a1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004020a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004020a6: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4020a9u); call_ind(t); }
    /* 004020a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004020ab: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 004020b0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004020b3: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 004020b9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004020bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004020be: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4020c1u); call_ind(t); }
    /* 004020c1: jmp 0x40265a */ goto L_0040265a;
L_004020c6:; BB(0x004020c6);
    /* 004020c6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004020c9: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004020cc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004020cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004020d2: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 004020d9: jmp 0x40265a */ goto L_0040265a;
L_004020de:; BB(0x004020de);
    /* 004020de: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004020e0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004020e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004020e4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004020e6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004020e9: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004020ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004020ed: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 004020f2: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 004020f8: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4020fdu); f_005e8389();
    /* 004020fd: jmp 0x40265a */ goto L_0040265a;
L_00402102:; BB(0x00402102);
    /* 00402102: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402104: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402107: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402108: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040210a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040210d: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00402110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402111: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 00402117: mov ecx, dword ptr [ecx + 0x1cb8] */ r_ecx = R32((u32)(r_ecx+0x1cb8u));
    /* 0040211d: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402122u); f_005e8389();
    /* 00402122: jmp 0x40265a */ goto L_0040265a;
L_00402127:; BB(0x00402127);
    /* 00402127: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402129: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040212c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040212d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040212f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402132: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00402135: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402136: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 0040213c: mov ecx, dword ptr [edx + 0x1cb4] */ r_ecx = R32((u32)(r_edx+0x1cb4u));
    /* 00402142: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402147u); f_005e8389();
    /* 00402147: jmp 0x40265a */ goto L_0040265a;
L_0040214c:; BB(0x0040214c);
    /* 0040214c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040214e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402151: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402152: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402154: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402157: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0040215a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040215b: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 00402160: mov ecx, dword ptr [eax + 0x1cb8] */ r_ecx = R32((u32)(r_eax+0x1cb8u));
    /* 00402166: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x40216bu); f_005e8389();
    /* 0040216b: jmp 0x40265a */ goto L_0040265a;
L_00402170:; BB(0x00402170);
    /* 00402170: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402172: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402175: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402176: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402178: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040217b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0040217e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040217f: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 00402185: mov ecx, dword ptr [ecx + 0x1cb4] */ r_ecx = R32((u32)(r_ecx+0x1cb4u));
    /* 0040218b: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402190u); f_005e8389();
    /* 00402190: jmp 0x40265a */ goto L_0040265a;
L_00402195:; BB(0x00402195);
    /* 00402195: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402197: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040219a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040219b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040219d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004021a0: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004021a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004021a4: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 004021aa: mov ecx, dword ptr [edx + 0x1cb8] */ r_ecx = R32((u32)(r_edx+0x1cb8u));
    /* 004021b0: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4021b5u); f_005e8389();
    /* 004021b5: jmp 0x40265a */ goto L_0040265a;
L_004021ba:; BB(0x004021ba);
    /* 004021ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004021bc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004021bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004021c0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004021c2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004021c5: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004021c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004021c9: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 004021ce: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 004021d4: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4021d9u); f_005e8389();
    /* 004021d9: jmp 0x40265a */ goto L_0040265a;
L_004021de:; BB(0x004021de);
    /* 004021de: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004021e0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004021e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004021e4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004021e6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004021e9: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004021ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004021ed: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 004021f3: mov ecx, dword ptr [ecx + 0x1cb8] */ r_ecx = R32((u32)(r_ecx+0x1cb8u));
    /* 004021f9: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4021feu); f_005e8389();
    /* 004021fe: jmp 0x40265a */ goto L_0040265a;
L_00402203:; BB(0x00402203);
    /* 00402203: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402205: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402208: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402209: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040220b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040220e: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00402211: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402212: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00402218: mov ecx, dword ptr [edx + 0x1cb4] */ r_ecx = R32((u32)(r_edx+0x1cb4u));
    /* 0040221e: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402223u); f_005e8389();
    /* 00402223: jmp 0x40265a */ goto L_0040265a;
L_00402228:; BB(0x00402228);
    /* 00402228: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040222a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040222d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040222e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402230: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402233: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 00402236: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402237: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 0040223c: mov ecx, dword ptr [eax + 0x1cb8] */ r_ecx = R32((u32)(r_eax+0x1cb8u));
    /* 00402242: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402247u); f_005e8389();
    /* 00402247: jmp 0x40265a */ goto L_0040265a;
L_0040224c:; BB(0x0040224c);
    /* 0040224c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040224f: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00402252: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00402255: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402258: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 0040225f: jmp 0x40265a */ goto L_0040265a;
L_00402264:; BB(0x00402264);
    /* 00402264: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402266: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402269: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040226a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040226c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040226f: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00402272: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402273: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 00402279: mov ecx, dword ptr [ecx + 0x1cb4] */ r_ecx = R32((u32)(r_ecx+0x1cb4u));
    /* 0040227f: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402284u); f_005e8389();
    /* 00402284: jmp 0x40265a */ goto L_0040265a;
L_00402289:; BB(0x00402289);
    /* 00402289: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040228b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040228e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040228f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402291: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402294: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00402297: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402298: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 0040229e: mov ecx, dword ptr [edx + 0x1cb8] */ r_ecx = R32((u32)(r_edx+0x1cb8u));
    /* 004022a4: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4022a9u); f_005e8389();
    /* 004022a9: jmp 0x40265a */ goto L_0040265a;
L_004022ae:; BB(0x004022ae);
    /* 004022ae: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004022b0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004022b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004022b4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004022b6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004022b9: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 004022bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004022bd: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 004022c2: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 004022c8: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4022cdu); f_005e8389();
    /* 004022cd: jmp 0x40265a */ goto L_0040265a;
L_004022d2:; BB(0x004022d2);
    /* 004022d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004022d4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004022d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004022d8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004022da: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004022dd: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004022e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004022e1: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 004022e7: mov ecx, dword ptr [ecx + 0x1cb8] */ r_ecx = R32((u32)(r_ecx+0x1cb8u));
    /* 004022ed: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4022f2u); f_005e8389();
    /* 004022f2: jmp 0x40265a */ goto L_0040265a;
L_004022f7:; BB(0x004022f7);
    /* 004022f7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004022fa: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 004022fd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00402300: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00402303: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
    /* 0040230a: jmp 0x40265a */ goto L_0040265a;
L_0040230f:; BB(0x0040230f);
    /* 0040230f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402311: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402314: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402315: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402317: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040231a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0040231d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040231e: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00402324: mov ecx, dword ptr [edx + 0x1cb4] */ r_ecx = R32((u32)(r_edx+0x1cb4u));
    /* 0040232a: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x40232fu); f_005e8389();
    /* 0040232f: jmp 0x40265a */ goto L_0040265a;
L_00402334:; BB(0x00402334);
    /* 00402334: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402336: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040233a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040233c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040233f: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00402342: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402343: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 00402348: mov ecx, dword ptr [eax + 0x1cb8] */ r_ecx = R32((u32)(r_eax+0x1cb8u));
    /* 0040234e: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402353u); f_005e8389();
    /* 00402353: jmp 0x40265a */ goto L_0040265a;
L_00402358:; BB(0x00402358);
    /* 00402358: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040235a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040235d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040235e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402360: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402363: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00402366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402367: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 0040236d: mov ecx, dword ptr [ecx + 0x1cb4] */ r_ecx = R32((u32)(r_ecx+0x1cb4u));
    /* 00402373: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402378u); f_005e8389();
    /* 00402378: jmp 0x40265a */ goto L_0040265a;
L_0040237d:; BB(0x0040237d);
    /* 0040237d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040237f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402382: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402383: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402385: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402388: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0040238b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040238c: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00402392: mov ecx, dword ptr [edx + 0x1cb8] */ r_ecx = R32((u32)(r_edx+0x1cb8u));
    /* 00402398: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x40239du); f_005e8389();
    /* 0040239d: jmp 0x40265a */ goto L_0040265a;
L_004023a2:; BB(0x004023a2);
    /* 004023a2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004023a5: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004023a8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004023ab: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004023ae: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 004023b5: jmp 0x40265a */ goto L_0040265a;
L_004023ba:; BB(0x004023ba);
    /* 004023ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004023bc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004023bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004023c0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004023c2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004023c5: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004023c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004023c9: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 004023ce: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 004023d4: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4023d9u); f_005e8389();
    /* 004023d9: jmp 0x40265a */ goto L_0040265a;
L_004023de:; BB(0x004023de);
    /* 004023de: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004023e0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004023e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004023e4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004023e6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004023e9: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004023ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004023ed: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 004023f3: mov ecx, dword ptr [ecx + 0x1cb8] */ r_ecx = R32((u32)(r_ecx+0x1cb8u));
    /* 004023f9: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4023feu); f_005e8389();
    /* 004023fe: jmp 0x40265a */ goto L_0040265a;
L_00402403:; BB(0x00402403);
    /* 00402403: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402405: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402408: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402409: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040240b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040240e: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00402411: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402412: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00402418: mov ecx, dword ptr [edx + 0x1cb4] */ r_ecx = R32((u32)(r_edx+0x1cb4u));
    /* 0040241e: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402423u); f_005e8389();
    /* 00402423: jmp 0x40265a */ goto L_0040265a;
L_00402428:; BB(0x00402428);
    /* 00402428: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040242a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040242d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040242e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402430: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402433: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00402436: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402437: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 0040243c: mov ecx, dword ptr [eax + 0x1cb8] */ r_ecx = R32((u32)(r_eax+0x1cb8u));
    /* 00402442: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402447u); f_005e8389();
    /* 00402447: jmp 0x40265a */ goto L_0040265a;
L_0040244c:; BB(0x0040244c);
    /* 0040244c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040244f: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00402452: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00402455: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00402458: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 0040245f: jmp 0x40265a */ goto L_0040265a;
L_00402464:; BB(0x00402464);
    /* 00402464: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402466: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402469: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040246a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040246c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040246f: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00402472: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402473: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 00402479: mov ecx, dword ptr [ecx + 0x1cb4] */ r_ecx = R32((u32)(r_ecx+0x1cb4u));
    /* 0040247f: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402484u); f_005e8389();
    /* 00402484: jmp 0x40265a */ goto L_0040265a;
L_00402489:; BB(0x00402489);
    /* 00402489: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040248b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040248e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040248f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402491: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402494: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00402497: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402498: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 0040249e: mov ecx, dword ptr [edx + 0x1cb8] */ r_ecx = R32((u32)(r_edx+0x1cb8u));
    /* 004024a4: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4024a9u); f_005e8389();
    /* 004024a9: jmp 0x40265a */ goto L_0040265a;
L_004024ae:; BB(0x004024ae);
    /* 004024ae: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004024b1: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004024b4: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004024b7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004024ba: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 004024c1: jmp 0x40265a */ goto L_0040265a;
L_004024c6:; BB(0x004024c6);
    /* 004024c6: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 004024cb: mov ecx, dword ptr [eax + 0x14c] */ r_ecx = R32((u32)(r_eax+0x14cu));
    /* 004024d1: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 004024d7: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 004024dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004024df: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x4024e2u); call_ind(t); }
    /* 004024e2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004024e4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004024e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004024e8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004024ea: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004024ed: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004024f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004024f1: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 004024f6: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 004024fc: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402501u); f_005e8389();
    /* 00402501: jmp 0x40265a */ goto L_0040265a;
L_00402506:; BB(0x00402506);
    /* 00402506: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402509: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0040250c: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0040250f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00402512: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 00402519: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 0040251f: mov ecx, dword ptr [ecx + 0x14c] */ r_ecx = R32((u32)(r_ecx+0x14cu));
    /* 00402525: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0040252b: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 00402531: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00402533: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x402536u); call_ind(t); }
    /* 00402536: jmp 0x40265a */ goto L_0040265a;
L_0040253b:; BB(0x0040253b);
    /* 0040253b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040253d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402541: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402543: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402546: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00402549: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040254a: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 0040254f: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 00402555: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x40255au); f_005e8389();
    /* 0040255a: jmp 0x40265a */ goto L_0040265a;
L_0040255f:; BB(0x0040255f);
    /* 0040255f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402561: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402564: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402565: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402567: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040256a: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0040256d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040256e: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 00402574: mov ecx, dword ptr [ecx + 0x1cb8] */ r_ecx = R32((u32)(r_ecx+0x1cb8u));
    /* 0040257a: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x40257fu); f_005e8389();
    /* 0040257f: jmp 0x40265a */ goto L_0040265a;
L_00402584:; BB(0x00402584);
    /* 00402584: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402586: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402589: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040258a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040258c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040258f: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00402592: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402593: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00402599: mov ecx, dword ptr [edx + 0x1cb4] */ r_ecx = R32((u32)(r_edx+0x1cb4u));
    /* 0040259f: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4025a4u); f_005e8389();
    /* 004025a4: jmp 0x40265a */ goto L_0040265a;
L_004025a9:; BB(0x004025a9);
    /* 004025a9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004025ab: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004025ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004025af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004025b1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004025b4: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 004025b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004025b8: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 004025bd: mov ecx, dword ptr [eax + 0x1cb8] */ r_ecx = R32((u32)(r_eax+0x1cb8u));
    /* 004025c3: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4025c8u); f_005e8389();
    /* 004025c8: jmp 0x40265a */ goto L_0040265a;
L_004025cd:; BB(0x004025cd);
    /* 004025cd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004025cf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004025d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004025d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004025d5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004025d8: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004025db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004025dc: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 004025e2: mov ecx, dword ptr [ecx + 0x1cb4] */ r_ecx = R32((u32)(r_ecx+0x1cb4u));
    /* 004025e8: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4025edu); f_005e8389();
    /* 004025ed: jmp 0x40265a */ goto L_0040265a;
L_004025ef:; BB(0x004025ef);
    /* 004025ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004025f1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004025f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004025f5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004025f7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004025fa: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004025fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004025fe: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00402604: mov ecx, dword ptr [edx + 0x1cb8] */ r_ecx = R32((u32)(r_edx+0x1cb8u));
    /* 0040260a: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x40260fu); f_005e8389();
    /* 0040260f: jmp 0x40265a */ goto L_0040265a;
L_00402611:; BB(0x00402611);
    /* 00402611: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402614: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00402617: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040261a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040261d: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 00402624: jmp 0x40265a */ goto L_0040265a;
L_00402626:; BB(0x00402626);
    /* 00402626: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402628: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040262b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040262c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040262e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00402631: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00402634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402635: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 0040263a: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 00402640: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x402645u); f_005e8389();
    /* 00402645: jmp 0x40265a */ goto L_0040265a;
L_00402647:; BB(0x00402647);
    /* 00402647: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040264a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0040264d: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00402650: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00402653: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
L_0040265a:; BB(0x0040265a);
    /* 0040265a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040265c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040265d: ret 4 */ FN_RET(0x00401fd8); r_esp += 8; return;
}

void f_00402714(void) /* FUN_00402714 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402714);
    /* 00402714: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402715: mov ebp, esp */ r_ebp = r_esp;
    /* 00402717: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040271a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00402721: jmp 0x40272c */ goto L_0040272c;
L_00402723:; BB(0x00402723);
    /* 00402723: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402726: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402729: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0040272c:; BB(0x0040272c);
    /* 0040272c: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00402730: jge 0x402742 */ if ((fS==fO)) goto L_00402742;
L_00402732:; BB(0x00402732);
    /* 00402732: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402735: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00402738: mov dword ptr [edx + ecx*4 + 0x20], 0 */ W32((u32)(r_edx+r_ecx*4+0x20u), 0x0u);
    /* 00402740: jmp 0x402723 */ goto L_00402723;
L_00402742:; BB(0x00402742);
    /* 00402742: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00402749: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040274c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040274f: lea ecx, [ebp + 0x10] */ r_ecx = (u32)(r_ebp+0x10u);
    /* 00402752: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00402755:; BB(0x00402755);
    /* 00402755: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402759: je 0x40278b */ if (fZ) goto L_0040278b;
L_0040275b:; BB(0x0040275b);
    /* 0040275b: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040275f: jge 0x40278b */ if ((fS==fO)) goto L_0040278b;
L_00402761:; BB(0x00402761);
    /* 00402761: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402764: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00402767: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040276a: mov dword ptr [eax + edx*4 + 0x20], ecx */ W32((u32)(r_eax+r_edx*4+0x20u), r_ecx);
    /* 0040276e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402771: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00402774: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00402777: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040277a: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040277d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00402780: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402783: mov edx, dword ptr [ecx - 4] */ r_edx = R32((u32)(r_ecx+0xfffffffcu));
    /* 00402786: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00402789: jmp 0x402755 */ goto L_00402755;
L_0040278b:; BB(0x0040278b);
    /* 0040278b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00402792: mov esp, ebp */ r_esp = r_ebp;
    /* 00402794: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402795: ret  */ FN_RET(0x00402714); r_esp += 4; return;
}

void f_004027a0(void) /* FUN_004027a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004027a0);
    /* 004027a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004027a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004027a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004027a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004027a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004027aa: call 0x4010a6 */ r_esp -= 4; W32(r_esp, 0x4027afu); f_004010a6();
    /* 004027af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004027b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004027b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004027b7: je 0x4027c5 */ if (fZ) goto L_004027c5;
L_004027b9:; BB(0x004027b9);
    /* 004027b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004027bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004027bd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4027c2u); f_0048ac1b();
    /* 004027c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004027c5:; BB(0x004027c5);
    /* 004027c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004027c8: mov esp, ebp */ r_esp = r_ebp;
    /* 004027ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004027cb: ret 4 */ FN_RET(0x004027a0); r_esp += 8; return;
}

void f_004027d0(void) /* FUN_004027d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004027d0);
    /* 004027d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004027d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004027d3: sub esp, 0x150 */ {  u32 a = r_esp; u32 b = 0x150u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004027d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004027da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004027db: mov dword ptr [ebp - 0xa4], 1 */ W32((u32)(r_ebp+0xffffff5cu), 0x1u);
    /* 004027e5: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 004027ef: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_004027f9:; BB(0x004027f9);
    /* 004027f9: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402800: je 0x402864 */ if (fZ) goto L_00402864;
L_00402802:; BB(0x00402802);
    /* 00402802: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 00402808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402809: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0040280f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402810: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402812: call dword ptr [0x6331c0] */ { u32 t = R32((u32)(0x6331c0u)); r_esp -= 4; W32(r_esp, 0x402818u); call_ind(t); }
    /* 00402818: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0040281e: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 00402824: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00402827: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0040282d: cmp dword ptr [ebp - 0x38], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402831: jne 0x402862 */ if (!fZ) goto L_00402862;
L_00402833:; BB(0x00402833);
    /* 00402833: cmp dword ptr [ebp - 0x34], 0x280 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040283a: jne 0x402862 */ if (!fZ) goto L_00402862;
L_0040283c:; BB(0x0040283c);
    /* 0040283c: cmp dword ptr [ebp - 0x30], 0x1e0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x1e0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402843: jne 0x402862 */ if (!fZ) goto L_00402862;
L_00402845:; BB(0x00402845);
    /* 00402845: mov ecx, 0x27 */ r_ecx = 0x27u;
    /* 0040284a: lea esi, [ebp - 0xa0] */ r_esi = (u32)(r_ebp+0xffffff60u);
    /* 00402850: lea edi, [ebp - 0x148] */ r_edi = (u32)(r_ebp+0xfffffeb8u);
    /* 00402856: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00402858: mov dword ptr [ebp - 0x14c], 1 */ W32((u32)(r_ebp+0xfffffeb4u), 0x1u);
L_00402862:; BB(0x00402862);
    /* 00402862: jmp 0x4027f9 */ goto L_004027f9;
L_00402864:; BB(0x00402864);
    /* 00402864: cmp dword ptr [ebp - 0x14c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040286b: je 0x4028a5 */ if (fZ) goto L_004028a5;
L_0040286d:; BB(0x0040286d);
    /* 0040286d: mov dword ptr [ebp - 0x120], 0x180000 */ W32((u32)(r_ebp+0xfffffee0u), 0x180000u);
    /* 00402877: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402879: lea eax, [ebp - 0x148] */ r_eax = (u32)(r_ebp+0xfffffeb8u);
    /* 0040287f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402880: call dword ptr [0x63317c] */ { u32 t = R32((u32)(0x63317cu)); r_esp -= 4; W32(r_esp, 0x402886u); call_ind(t); }
    /* 00402886: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00402889: mov dword ptr [ebp - 0x120], 0x1c0000 */ W32((u32)(r_ebp+0xfffffee0u), 0x1c0000u);
    /* 00402893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402895: lea ecx, [ebp - 0x148] */ r_ecx = (u32)(r_ebp+0xfffffeb8u);
    /* 0040289b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040289c: call dword ptr [0x63317c] */ { u32 t = R32((u32)(0x63317cu)); r_esp -= 4; W32(r_esp, 0x4028a2u); call_ind(t); }
    /* 004028a2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004028a5:; BB(0x004028a5);
    /* 004028a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004028a8: mov dword ptr [ebp - 0x150], edx */ W32((u32)(r_ebp+0xfffffeb0u), r_edx);
    /* 004028ae: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 004028b4: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004028b7: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 004028bd: cmp dword ptr [ebp - 0x150], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004028c4: ja 0x40291c */ if ((!fC&&!fZ)) goto L_0040291c;
L_004028c6:; BB(0x004028c6);
    /* 004028c6: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 004028cc: jmp dword ptr [ecx*4 + 0x40295d] */ { u32 t = R32((u32)(r_ecx*4+0x40295du)); switch (t) { case 0x4028f1u: goto L_004028f1; case 0x40291cu: goto L_0040291c; case 0x40290fu: goto L_0040290f; case 0x402900u: goto L_00402900; case 0x4028d3u: goto L_004028d3; case 0x4028e2u: goto L_004028e2; default: UNSUP(0x004028cc, "jump table entry is not a known target"); } }
L_004028d3:; BB(0x004028d3);
    /* 004028d3: push 0x64c660 */ { u32 v = 0x64c660u; r_esp -= 4; W32(r_esp, v); }
    /* 004028d8: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x4028ddu); f_0060fc40();
    /* 004028dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004028e0: jmp 0x40291c */ goto L_0040291c;
L_004028e2:; BB(0x004028e2);
    /* 004028e2: push 0x64c678 */ { u32 v = 0x64c678u; r_esp -= 4; W32(r_esp, v); }
    /* 004028e7: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x4028ecu); f_0060fc40();
    /* 004028ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004028ef: jmp 0x40291c */ goto L_0040291c;
L_004028f1:; BB(0x004028f1);
    /* 004028f1: push 0x64c690 */ { u32 v = 0x64c690u; r_esp -= 4; W32(r_esp, v); }
    /* 004028f6: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x4028fbu); f_0060fc40();
    /* 004028fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004028fe: jmp 0x40291c */ goto L_0040291c;
L_00402900:; BB(0x00402900);
    /* 00402900: push 0x64c6a8 */ { u32 v = 0x64c6a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00402905: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x40290au); f_0060fc40();
    /* 0040290a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040290d: jmp 0x40291c */ goto L_0040291c;
L_0040290f:; BB(0x0040290f);
    /* 0040290f: push 0x64c6bc */ { u32 v = 0x64c6bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00402914: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x402919u); f_0060fc40();
    /* 00402919: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040291c:; BB(0x0040291c);
    /* 0040291c: call dword ptr [0x633180] */ { u32 t = R32((u32)(0x633180u)); r_esp -= 4; W32(r_esp, 0x402922u); call_ind(t); }
    /* 00402922: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402923: call dword ptr [0x633184] */ { u32 t = R32((u32)(0x633184u)); r_esp -= 4; W32(r_esp, 0x402929u); call_ind(t); }
    /* 00402929: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0040292f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00402931: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00402937: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402938: call dword ptr [0x633004] */ { u32 t = R32((u32)(0x633004u)); r_esp -= 4; W32(r_esp, 0x40293eu); call_ind(t); }
    /* 0040293e: mov byte ptr [0x6f6efc], al */ W8((u32)(0x6f6efcu), (u8)r_eax);
    /* 00402943: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 00402949: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040294a: call dword ptr [0x633180] */ { u32 t = R32((u32)(0x633180u)); r_esp -= 4; W32(r_esp, 0x402950u); call_ind(t); }
    /* 00402950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402951: call dword ptr [0x633188] */ { u32 t = R32((u32)(0x633188u)); r_esp -= 4; W32(r_esp, 0x402957u); call_ind(t); }
    /* 00402957: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00402958: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00402959: mov esp, ebp */ r_esp = r_ebp;
    /* 0040295b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040295c: ret  */ FN_RET(0x004027d0); r_esp += 4; return;
}

void f_00402975(void) /* FUN_00402975 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402975);
    /* 00402975: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402976: mov ebp, esp */ r_ebp = r_esp;
    /* 00402978: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040297a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040297c: call dword ptr [0x63317c] */ { u32 t = R32((u32)(0x63317cu)); r_esp -= 4; W32(r_esp, 0x402982u); call_ind(t); }
    /* 00402982: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402983: ret  */ FN_RET(0x00402975); r_esp += 4; return;
}

void f_00402984(void) /* FUN_00402984 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402984);
    /* 00402984: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402985: mov ebp, esp */ r_ebp = r_esp;
    /* 00402987: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040298a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040298d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402990: call 0x60fcd0 */ r_esp -= 4; W32(r_esp, 0x402995u); f_0060fcd0();
    /* 00402995: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402998: mov dword ptr [eax], 0x63333c */ W32((u32)(r_eax), 0x63333cu);
    /* 0040299e: call 0x609188 */ r_esp -= 4; W32(r_esp, 0x4029a3u); f_00609188();
    /* 004029a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004029a5: call dword ptr [0x6332b8] */ { u32 t = R32((u32)(0x6332b8u)); r_esp -= 4; W32(r_esp, 0x4029abu); call_ind(t); }
    /* 004029ab: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004029ae: cmp dword ptr [0x711138], 0 */ {  u32 a = R32((u32)(0x711138u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004029b5: je 0x4029bc */ if (fZ) goto L_004029bc;
L_004029b7:; BB(0x004029b7);
    /* 004029b7: call 0x4027d0 */ r_esp -= 4; W32(r_esp, 0x4029bcu); f_004027d0();
L_004029bc:; BB(0x004029bc);
    /* 004029bc: call dword ptr [0x63326c] */ { u32 t = R32((u32)(0x63326cu)); r_esp -= 4; W32(r_esp, 0x4029c2u); call_ind(t); }
    /* 004029c2: mov dword ptr [0x6f5310], eax */ W32((u32)(0x6f5310u), r_eax);
    /* 004029c7: mov ecx, dword ptr [0x6f5310] */ r_ecx = R32((u32)(0x6f5310u));
    /* 004029cd: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004029d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004029d1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4029d6u); f_0048ab58();
    /* 004029d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004029d9: mov dword ptr [0x6f5314], eax */ W32((u32)(0x6f5314u), r_eax);
    /* 004029de: mov edx, dword ptr [0x6f5310] */ r_edx = R32((u32)(0x6f5310u));
    /* 004029e4: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004029e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004029e8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4029edu); f_0048ab58();
    /* 004029ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004029f0: mov dword ptr [0x6f5318], eax */ W32((u32)(0x6f5318u), r_eax);
    /* 004029f5: mov eax, dword ptr [0x6f5310] */ r_eax = R32((u32)(0x6f5310u));
    /* 004029fa: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004029fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004029fe: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x402a03u); f_0048ab58();
    /* 00402a03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402a06: mov dword ptr [0x6f531c], eax */ W32((u32)(0x6f531cu), r_eax);
    /* 00402a0b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00402a12: jmp 0x402a1d */ goto L_00402a1d;
L_00402a14:; BB(0x00402a14);
    /* 00402a14: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a17: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00402a1a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00402a1d:; BB(0x00402a1d);
    /* 00402a1d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a20: cmp edx, dword ptr [0x6f5310] */ {  u32 a = r_edx; u32 b = R32((u32)(0x6f5310u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00402a26: jge 0x402a89 */ if ((fS==fO)) goto L_00402a89;
L_00402a28:; BB(0x00402a28);
    /* 00402a28: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a2b: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402a2e: mov ecx, dword ptr [0x6f5314] */ r_ecx = R32((u32)(0x6f5314u));
    /* 00402a34: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00402a36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402a37: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402a3b: call dword ptr [0x633268] */ { u32 t = R32((u32)(0x633268u)); r_esp -= 4; W32(r_esp, 0x402a41u); call_ind(t); }
    /* 00402a41: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00402a44: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a47: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402a4a: mov ecx, dword ptr [0x6f5318] */ r_ecx = R32((u32)(0x6f5318u));
    /* 00402a50: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00402a52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402a53: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402a57: call dword ptr [0x633268] */ { u32 t = R32((u32)(0x633268u)); r_esp -= 4; W32(r_esp, 0x402a5du); call_ind(t); }
    /* 00402a5d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00402a60: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402a64: jne 0x402a78 */ if (!fZ) goto L_00402a78;
L_00402a66:; BB(0x00402a66);
    /* 00402a66: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a69: mov ecx, dword ptr [0x6f531c] */ r_ecx = R32((u32)(0x6f531cu));
    /* 00402a6f: mov dword ptr [ecx + eax*4], 1 */ W32((u32)(r_ecx+r_eax*4), 0x1u);
    /* 00402a76: jmp 0x402a87 */ goto L_00402a87;
L_00402a78:; BB(0x00402a78);
    /* 00402a78: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a7b: mov eax, dword ptr [0x6f531c] */ r_eax = R32((u32)(0x6f531cu));
    /* 00402a80: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
L_00402a87:; BB(0x00402a87);
    /* 00402a87: jmp 0x402a14 */ goto L_00402a14;
L_00402a89:; BB(0x00402a89);
    /* 00402a89: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402a8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00402a8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402a8f: ret  */ FN_RET(0x00402984); r_esp += 4; return;
}

void f_00402a90(void) /* FUN_00402a90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402a90);
    /* 00402a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00402a93: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402a96: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00402a99: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402a9c: mov dword ptr [eax], 0x63333c */ W32((u32)(r_eax), 0x63333cu);
    /* 00402aa2: cmp dword ptr [0x711138], 0 */ {  u32 a = R32((u32)(0x711138u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402aa9: je 0x402ab0 */ if (fZ) goto L_00402ab0;
L_00402aab:; BB(0x00402aab);
    /* 00402aab: call 0x402975 */ r_esp -= 4; W32(r_esp, 0x402ab0u); f_00402975();
L_00402ab0:; BB(0x00402ab0);
    /* 00402ab0: call dword ptr [0x6332bc] */ { u32 t = R32((u32)(0x6332bcu)); r_esp -= 4; W32(r_esp, 0x402ab6u); call_ind(t); }
    /* 00402ab6: mov ecx, dword ptr [0x6f5314] */ r_ecx = R32((u32)(0x6f5314u));
    /* 00402abc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402abf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402ac2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402ac3: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x402ac8u); f_0048ac1b();
    /* 00402ac8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402acb: mov eax, dword ptr [0x6f5318] */ r_eax = R32((u32)(0x6f5318u));
    /* 00402ad0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00402ad3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402ad6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402ad7: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x402adcu); f_0048ac1b();
    /* 00402adc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402adf: mov edx, dword ptr [0x6f531c] */ r_edx = R32((u32)(0x6f531cu));
    /* 00402ae5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00402ae8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00402aeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402aec: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x402af1u); f_0048ac1b();
    /* 00402af1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402af4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402af7: call 0x60fff1 */ r_esp -= 4; W32(r_esp, 0x402afcu); f_0060fff1();
    /* 00402afc: mov esp, ebp */ r_esp = r_ebp;
    /* 00402afe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402aff: ret  */ FN_RET(0x00402a90); r_esp += 4; return;
}

void f_00402b00(void) /* FUN_00402b00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402b00);
    /* 00402b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00402b03: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402b06: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00402b09: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00402b0c: call 0x6102b4 */ r_esp -= 4; W32(r_esp, 0x402b11u); f_006102b4();
    /* 00402b11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00402b13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402b15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402b17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402b19: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 00402b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402b1d: call dword ptr [0x633230] */ { u32 t = R32((u32)(0x633230u)); r_esp -= 4; W32(r_esp, 0x402b23u); call_ind(t); }
    /* 00402b23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402b25: je 0x402b3b */ if (fZ) goto L_00402b3b;
L_00402b27:; BB(0x00402b27);
    /* 00402b27: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00402b2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402b2b: call dword ptr [0x633240] */ { u32 t = R32((u32)(0x633240u)); r_esp -= 4; W32(r_esp, 0x402b31u); call_ind(t); }
    /* 00402b31: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00402b34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402b35: call dword ptr [0x633244] */ { u32 t = R32((u32)(0x633244u)); r_esp -= 4; W32(r_esp, 0x402b3bu); call_ind(t); }
L_00402b3b:; BB(0x00402b3b);
    /* 00402b3b: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00402b3e: call 0x5d9400 */ r_esp -= 4; W32(r_esp, 0x402b43u); f_005d9400();
    /* 00402b43: cmp dword ptr [0x6f5320], 0 */ {  u32 a = R32((u32)(0x6f5320u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402b4a: je 0x402f60 */ if (fZ) goto L_00402f60;
L_00402b50:; BB(0x00402b50);
    /* 00402b50: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00402b57: jmp 0x402b62 */ goto L_00402b62;
L_00402b59:; BB(0x00402b59);
    /* 00402b59: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402b5c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402b5f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00402b62:; BB(0x00402b62);
    /* 00402b62: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00402b66: jge 0x402f60 */ if ((fS==fO)) goto L_00402f60;
L_00402b6c:; BB(0x00402b6c);
    /* 00402b6c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402b6f: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00402b72: mov edx, dword ptr [0x6f5314] */ r_edx = R32((u32)(0x6f5314u));
    /* 00402b78: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00402b7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402b7b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402b7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402b7f: call dword ptr [0x633268] */ { u32 t = R32((u32)(0x633268u)); r_esp -= 4; W32(r_esp, 0x402b85u); call_ind(t); }
    /* 00402b85: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00402b88: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402b8c: jne 0x402f5b */ if (!fZ) goto L_00402f5b;
L_00402b92:; BB(0x00402b92);
    /* 00402b92: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 00402b95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402b96: call dword ptr [0x63323c] */ { u32 t = R32((u32)(0x63323cu)); r_esp -= 4; W32(r_esp, 0x402b9cu); call_ind(t); }
    /* 00402b9c: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00402b9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402ba0: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00402ba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402ba4: call dword ptr [0x63324c] */ { u32 t = R32((u32)(0x63324cu)); r_esp -= 4; W32(r_esp, 0x402baau); call_ind(t); }
    /* 00402baa: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00402bad: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00402bb0: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00402bb3: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00402bb6: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00402bb9: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 00402bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402bbd: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00402bc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402bc1: call dword ptr [0x633170] */ { u32 t = R32((u32)(0x633170u)); r_esp -= 4; W32(r_esp, 0x402bc7u); call_ind(t); }
    /* 00402bc7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402bca: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00402bcd: mov eax, dword ptr [0x6f5314] */ r_eax = R32((u32)(0x6f5314u));
    /* 00402bd2: mov ecx, dword ptr [eax + edx + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx+0xcu));
    /* 00402bd6: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00402bd9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402bdb: je 0x402c42 */ if (fZ) goto L_00402c42;
L_00402bdd:; BB(0x00402bdd);
    /* 00402bdd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402be0: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00402be3: mov eax, dword ptr [0x6f5318] */ r_eax = R32((u32)(0x6f5318u));
    /* 00402be8: mov ecx, dword ptr [eax + edx + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx+0xcu));
    /* 00402bec: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00402bef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402bf1: jne 0x402c42 */ if (!fZ) goto L_00402c42;
L_00402bf3:; BB(0x00402bf3);
    /* 00402bf3: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00402bf6: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00402bf9: add edx, dword ptr [ebp - 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00402bfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402bfd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402bff: push 0x201 */ { u32 v = 0x201u; r_esp -= 4; W32(r_esp, v); }
    /* 00402c04: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00402c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402c08: call dword ptr [0x633248] */ { u32 t = R32((u32)(0x633248u)); r_esp -= 4; W32(r_esp, 0x402c0eu); call_ind(t); }
    /* 00402c0e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402c11: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00402c14: mov edx, dword ptr [0x6f5314] */ r_edx = R32((u32)(0x6f5314u));
    /* 00402c1a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00402c1c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402c1f: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402c22: mov ecx, dword ptr [0x6f5318] */ r_ecx = R32((u32)(0x6f5318u));
    /* 00402c28: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00402c2a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00402c2c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00402c2e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00402c31: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00402c34: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00402c37: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00402c3a: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 00402c3d: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00402c40: jmp 0x402cbc */ goto L_00402cbc;
L_00402c42:; BB(0x00402c42);
    /* 00402c42: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402c45: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402c48: mov ecx, dword ptr [0x6f5314] */ r_ecx = R32((u32)(0x6f5314u));
    /* 00402c4e: mov edx, dword ptr [ecx + eax + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax+0xcu));
    /* 00402c52: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00402c55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402c57: jne 0x402cbc */ if (!fZ) goto L_00402cbc;
L_00402c59:; BB(0x00402c59);
    /* 00402c59: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402c5c: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402c5f: mov ecx, dword ptr [0x6f5318] */ r_ecx = R32((u32)(0x6f5318u));
    /* 00402c65: mov edx, dword ptr [ecx + eax + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax+0xcu));
    /* 00402c69: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00402c6c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402c6e: je 0x402cbc */ if (fZ) goto L_00402cbc;
L_00402c70:; BB(0x00402c70);
    /* 00402c70: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00402c73: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402c76: add eax, dword ptr [ebp - 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402c79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402c7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402c7c: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 00402c81: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00402c84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402c85: call dword ptr [0x633248] */ { u32 t = R32((u32)(0x633248u)); r_esp -= 4; W32(r_esp, 0x402c8bu); call_ind(t); }
    /* 00402c8b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402c8e: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00402c91: mov eax, dword ptr [0x6f5314] */ r_eax = R32((u32)(0x6f5314u));
    /* 00402c96: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402c98: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402c9b: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00402c9e: mov edx, dword ptr [0x6f5318] */ r_edx = R32((u32)(0x6f5318u));
    /* 00402ca4: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00402ca6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00402ca8: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00402caa: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00402cad: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00402cb0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00402cb3: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00402cb6: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00402cb9: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
L_00402cbc:; BB(0x00402cbc);
    /* 00402cbc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402cbf: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00402cc2: mov edx, dword ptr [0x6f5314] */ r_edx = R32((u32)(0x6f5314u));
    /* 00402cc8: mov eax, dword ptr [edx + ecx + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx+0xcu));
    /* 00402ccc: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00402ccf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402cd1: je 0x402d38 */ if (fZ) goto L_00402d38;
L_00402cd3:; BB(0x00402cd3);
    /* 00402cd3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402cd6: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00402cd9: mov edx, dword ptr [0x6f5318] */ r_edx = R32((u32)(0x6f5318u));
    /* 00402cdf: mov eax, dword ptr [edx + ecx + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx+0xcu));
    /* 00402ce3: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00402ce6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402ce8: jne 0x402d38 */ if (!fZ) goto L_00402d38;
L_00402cea:; BB(0x00402cea);
    /* 00402cea: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00402ced: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00402cf0: add ecx, dword ptr [ebp - 0x5c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00402cf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402cf4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402cf6: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 00402cfb: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00402cfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402cff: call dword ptr [0x633248] */ { u32 t = R32((u32)(0x633248u)); r_esp -= 4; W32(r_esp, 0x402d05u); call_ind(t); }
    /* 00402d05: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402d08: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402d0b: mov ecx, dword ptr [0x6f5314] */ r_ecx = R32((u32)(0x6f5314u));
    /* 00402d11: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00402d13: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402d16: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00402d19: mov eax, dword ptr [0x6f5318] */ r_eax = R32((u32)(0x6f5318u));
    /* 00402d1e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402d20: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00402d22: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00402d24: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00402d27: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00402d2a: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00402d2d: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00402d30: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00402d33: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00402d36: jmp 0x402db1 */ goto L_00402db1;
L_00402d38:; BB(0x00402d38);
    /* 00402d38: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402d3b: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00402d3e: mov eax, dword ptr [0x6f5314] */ r_eax = R32((u32)(0x6f5314u));
    /* 00402d43: mov ecx, dword ptr [eax + edx + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx+0xcu));
    /* 00402d47: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00402d4a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402d4c: jne 0x402db1 */ if (!fZ) goto L_00402db1;
L_00402d4e:; BB(0x00402d4e);
    /* 00402d4e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402d51: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00402d54: mov eax, dword ptr [0x6f5318] */ r_eax = R32((u32)(0x6f5318u));
    /* 00402d59: mov ecx, dword ptr [eax + edx + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx+0xcu));
    /* 00402d5d: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00402d60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402d62: je 0x402db1 */ if (fZ) goto L_00402db1;
L_00402d64:; BB(0x00402d64);
    /* 00402d64: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00402d67: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00402d6a: add edx, dword ptr [ebp - 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00402d6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402d6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402d70: push 0x205 */ { u32 v = 0x205u; r_esp -= 4; W32(r_esp, v); }
    /* 00402d75: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00402d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402d79: call dword ptr [0x633248] */ { u32 t = R32((u32)(0x633248u)); r_esp -= 4; W32(r_esp, 0x402d7fu); call_ind(t); }
    /* 00402d7f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402d82: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00402d85: mov edx, dword ptr [0x6f5314] */ r_edx = R32((u32)(0x6f5314u));
    /* 00402d8b: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00402d8d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402d90: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402d93: mov ecx, dword ptr [0x6f5318] */ r_ecx = R32((u32)(0x6f5318u));
    /* 00402d99: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00402d9b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00402d9d: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00402d9f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00402da2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00402da5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00402da8: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00402dab: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 00402dae: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
L_00402db1:; BB(0x00402db1);
    /* 00402db1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402db4: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402db7: mov ecx, dword ptr [0x6f5314] */ r_ecx = R32((u32)(0x6f5314u));
    /* 00402dbd: cmp dword ptr [ecx + eax + 4], 0x4000 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x4u)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00402dc5: jbe 0x402e12 */ if ((fC||fZ)) goto L_00402e12;
L_00402dc7:; BB(0x00402dc7);
    /* 00402dc7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402dca: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00402dcd: mov eax, dword ptr [0x6f5314] */ r_eax = R32((u32)(0x6f5314u));
    /* 00402dd2: cmp dword ptr [eax + edx + 4], 0xc000 */ {  u32 a = R32((u32)(r_eax+r_edx+0x4u)); u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00402dda: jae 0x402e12 */ if (!fC) goto L_00402e12;
L_00402ddc:; BB(0x00402ddc);
    /* 00402ddc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402ddf: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00402de2: mov edx, dword ptr [0x6f5314] */ r_edx = R32((u32)(0x6f5314u));
    /* 00402de8: cmp dword ptr [edx + ecx], 0x4000 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00402def: jbe 0x402e12 */ if ((fC||fZ)) goto L_00402e12;
L_00402df1:; BB(0x00402df1);
    /* 00402df1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402df4: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402df7: mov ecx, dword ptr [0x6f5314] */ r_ecx = R32((u32)(0x6f5314u));
    /* 00402dfd: cmp dword ptr [ecx + eax], 0xc000 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00402e04: jae 0x402e12 */ if (!fC) goto L_00402e12;
L_00402e06:; BB(0x00402e06);
    /* 00402e06: mov dword ptr [0x64c65c], 1 */ W32((u32)(0x64c65cu), 0x1u);
    /* 00402e10: jmp 0x402e34 */ goto L_00402e34;
L_00402e12:; BB(0x00402e12);
    /* 00402e12: mov edx, dword ptr [0x64c65c] */ r_edx = R32((u32)(0x64c65cu));
    /* 00402e18: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00402e1b: mov dword ptr [0x64c65c], edx */ W32((u32)(0x64c65cu), r_edx);
    /* 00402e21: cmp dword ptr [0x64c65c], 0x50 */ {  u32 a = R32((u32)(0x64c65cu)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00402e28: jle 0x402e34 */ if ((fZ||fS!=fO)) goto L_00402e34;
L_00402e2a:; BB(0x00402e2a);
    /* 00402e2a: mov dword ptr [0x64c65c], 0x50 */ W32((u32)(0x64c65cu), 0x50u);
L_00402e34:; BB(0x00402e34);
    /* 00402e34: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402e37: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402e3a: mov ecx, dword ptr [0x6f5314] */ r_ecx = R32((u32)(0x6f5314u));
    /* 00402e40: cmp dword ptr [ecx + eax], 0xc000 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00402e47: jbe 0x402e71 */ if ((fC||fZ)) goto L_00402e71;
L_00402e49:; BB(0x00402e49);
    /* 00402e49: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00402e4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402e4d: mov eax, dword ptr [0x64c65c] */ r_eax = R32((u32)(0x64c65cu));
    /* 00402e52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00402e53: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00402e56: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402e58: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00402e5b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00402e5e: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00402e60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402e61: call dword ptr [0x633250] */ { u32 t = R32((u32)(0x633250u)); r_esp -= 4; W32(r_esp, 0x402e67u); call_ind(t); }
    /* 00402e67: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 00402e6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402e6b: call dword ptr [0x63323c] */ { u32 t = R32((u32)(0x63323cu)); r_esp -= 4; W32(r_esp, 0x402e71u); call_ind(t); }
L_00402e71:; BB(0x00402e71);
    /* 00402e71: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402e74: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402e77: mov ecx, dword ptr [0x6f5314] */ r_ecx = R32((u32)(0x6f5314u));
    /* 00402e7d: cmp dword ptr [ecx + eax], 0x4000 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00402e84: jae 0x402eae */ if (!fC) goto L_00402eae;
L_00402e86:; BB(0x00402e86);
    /* 00402e86: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00402e89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402e8a: mov eax, dword ptr [0x64c65c] */ r_eax = R32((u32)(0x64c65cu));
    /* 00402e8f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00402e90: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00402e93: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402e95: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00402e98: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00402e9b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00402e9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402e9e: call dword ptr [0x633250] */ { u32 t = R32((u32)(0x633250u)); r_esp -= 4; W32(r_esp, 0x402ea4u); call_ind(t); }
    /* 00402ea4: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 00402ea7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402ea8: call dword ptr [0x63323c] */ { u32 t = R32((u32)(0x63323cu)); r_esp -= 4; W32(r_esp, 0x402eaeu); call_ind(t); }
L_00402eae:; BB(0x00402eae);
    /* 00402eae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402eb1: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402eb4: mov ecx, dword ptr [0x6f5314] */ r_ecx = R32((u32)(0x6f5314u));
    /* 00402eba: cmp dword ptr [ecx + eax + 4], 0xc000 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x4u)); u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00402ec2: jbe 0x402eec */ if ((fC||fZ)) goto L_00402eec;
L_00402ec4:; BB(0x00402ec4);
    /* 00402ec4: mov eax, dword ptr [0x64c65c] */ r_eax = R32((u32)(0x64c65cu));
    /* 00402ec9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00402eca: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00402ecd: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402ecf: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00402ed2: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00402ed5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00402ed7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402ed8: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00402edb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402edc: call dword ptr [0x633250] */ { u32 t = R32((u32)(0x633250u)); r_esp -= 4; W32(r_esp, 0x402ee2u); call_ind(t); }
    /* 00402ee2: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 00402ee5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402ee6: call dword ptr [0x63323c] */ { u32 t = R32((u32)(0x63323cu)); r_esp -= 4; W32(r_esp, 0x402eecu); call_ind(t); }
L_00402eec:; BB(0x00402eec);
    /* 00402eec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402eef: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00402ef2: mov eax, dword ptr [0x6f5314] */ r_eax = R32((u32)(0x6f5314u));
    /* 00402ef7: cmp dword ptr [eax + edx + 4], 0x4000 */ {  u32 a = R32((u32)(r_eax+r_edx+0x4u)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00402eff: jae 0x402f29 */ if (!fC) goto L_00402f29;
L_00402f01:; BB(0x00402f01);
    /* 00402f01: mov eax, dword ptr [0x64c65c] */ r_eax = R32((u32)(0x64c65cu));
    /* 00402f06: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00402f07: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00402f0a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402f0c: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00402f0f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00402f12: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00402f14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402f15: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00402f18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402f19: call dword ptr [0x633250] */ { u32 t = R32((u32)(0x633250u)); r_esp -= 4; W32(r_esp, 0x402f1fu); call_ind(t); }
    /* 00402f1f: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 00402f22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402f23: call dword ptr [0x63323c] */ { u32 t = R32((u32)(0x63323cu)); r_esp -= 4; W32(r_esp, 0x402f29u); call_ind(t); }
L_00402f29:; BB(0x00402f29);
    /* 00402f29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402f2c: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00402f2f: mov edx, dword ptr [0x6f5314] */ r_edx = R32((u32)(0x6f5314u));
    /* 00402f35: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00402f37: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402f3a: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00402f3d: mov ecx, dword ptr [0x6f5318] */ r_ecx = R32((u32)(0x6f5318u));
    /* 00402f43: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00402f45: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00402f47: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00402f49: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00402f4c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00402f4f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00402f52: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00402f55: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 00402f58: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
L_00402f5b:; BB(0x00402f5b);
    /* 00402f5b: jmp 0x402b59 */ goto L_00402b59;
L_00402f60:; BB(0x00402f60);
    /* 00402f60: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00402f63: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x402f68u); f_005d9462();
    /* 00402f68: mov esp, ebp */ r_esp = r_ebp;
    /* 00402f6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402f6b: ret  */ FN_RET(0x00402b00); r_esp += 4; return;
}

void f_00402f6c(void) /* FUN_00402f6c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402f6c);
    /* 00402f6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402f6d: mov ebp, esp */ r_ebp = r_esp;
    /* 00402f6f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402f72: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00402f75: call dword ptr [0x633290] */ { u32 t = R32((u32)(0x633290u)); r_esp -= 4; W32(r_esp, 0x402f7bu); call_ind(t); }
    /* 00402f7b: mov dword ptr [0x6f5328], eax */ W32((u32)(0x6f5328u), r_eax);
    /* 00402f80: mov eax, dword ptr [0x6f5328] */ r_eax = R32((u32)(0x6f5328u));
    /* 00402f85: sub eax, dword ptr [0x6f5324] */ {  u32 a = r_eax; u32 b = R32((u32)(0x6f5324u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00402f8b: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00402f90: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00402f92: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402f95: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00402f99: jge 0x402fa2 */ if ((fS==fO)) goto L_00402fa2;
L_00402f9b:; BB(0x00402f9b);
    /* 00402f9b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00402fa2:; BB(0x00402fa2);
    /* 00402fa2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00402fa6: jle 0x402fb2 */ if ((fZ||fS!=fO)) goto L_00402fb2;
L_00402fa8:; BB(0x00402fa8);
    /* 00402fa8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402fab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402fac: call dword ptr [0x633090] */ { u32 t = R32((u32)(0x633090u)); r_esp -= 4; W32(r_esp, 0x402fb2u); call_ind(t); }
L_00402fb2:; BB(0x00402fb2);
    /* 00402fb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00402fb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402fb5: ret  */ FN_RET(0x00402f6c); r_esp += 4; return;
}

void f_00402fb6(void) /* FUN_00402fb6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402fb6);
    /* 00402fb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402fb7: mov ebp, esp */ r_ebp = r_esp;
    /* 00402fb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402fba: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402fbd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402fc0: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 00402fc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402fca: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00402fcd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00402fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402fd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402fd4: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00402fd7: call 0x61fcc7 */ r_esp -= 4; W32(r_esp, 0x402fdcu); f_0061fcc7();
    /* 00402fdc: mov esp, ebp */ r_esp = r_ebp;
    /* 00402fde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402fdf: ret  */ FN_RET(0x00402fb6); r_esp += 4; return;
}

void f_00402fe0(void) /* FUN_00402fe0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402fe0);
    /* 00402fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00402fe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402fe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402fe7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402fea: mov dword ptr [eax + 0x24], 1 */ W32((u32)(r_eax+0x24u), 0x1u);
    /* 00402ff1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402ff4: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00402ff7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00402ffa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402ffb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402ffe: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00403001: call 0x61fcc7 */ r_esp -= 4; W32(r_esp, 0x403006u); f_0061fcc7();
    /* 00403006: mov esp, ebp */ r_esp = r_ebp;
    /* 00403008: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403009: ret  */ FN_RET(0x00402fe0); r_esp += 4; return;
}

void f_0040300a(void) /* FUN_0040300a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040300a);
    /* 0040300a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040300b: mov ebp, esp */ r_ebp = r_esp;
    /* 0040300d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403010: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00403013: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040301a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00403021: jmp 0x40302c */ goto L_0040302c;
L_00403023:; BB(0x00403023);
    /* 00403023: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403026: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00403029: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040302c:; BB(0x0040302c);
    /* 0040302c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040302f: cmp ecx, dword ptr [0x6f5310] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x6f5310u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403035: jge 0x403050 */ if ((fS==fO)) goto L_00403050;
L_00403037:; BB(0x00403037);
    /* 00403037: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040303a: mov eax, dword ptr [0x6f531c] */ r_eax = R32((u32)(0x6f531cu));
    /* 0040303f: cmp dword ptr [eax + edx*4], 1 */ {  u32 a = R32((u32)(r_eax+r_edx*4)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403043: jne 0x40304e */ if (!fZ) goto L_0040304e;
L_00403045:; BB(0x00403045);
    /* 00403045: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403048: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040304b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0040304e:; BB(0x0040304e);
    /* 0040304e: jmp 0x403023 */ goto L_00403023;
L_00403050:; BB(0x00403050);
    /* 00403050: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403053: mov esp, ebp */ r_esp = r_ebp;
    /* 00403055: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403056: ret  */ FN_RET(0x0040300a); r_esp += 4; return;
}

void f_00403060(void) /* FUN_00403060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403060);
    /* 00403060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403061: mov ebp, esp */ r_ebp = r_esp;
    /* 00403063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00403067: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040306a: call 0x402a90 */ r_esp -= 4; W32(r_esp, 0x40306fu); f_00402a90();
    /* 0040306f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00403072: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00403075: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403077: je 0x403085 */ if (fZ) goto L_00403085;
L_00403079:; BB(0x00403079);
    /* 00403079: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040307c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040307d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x403082u); f_0048ac1b();
    /* 00403082: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00403085:; BB(0x00403085);
    /* 00403085: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403088: mov esp, ebp */ r_esp = r_ebp;
    /* 0040308a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040308b: ret 4 */ FN_RET(0x00403060); r_esp += 8; return;
}

void f_00403090(void) /* FUN_00403090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403090);
    /* 00403090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403091: mov ebp, esp */ r_ebp = r_esp;
    /* 00403093: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403096: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00403099: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040309c: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x4030a1u); f_005dfbf0();
    /* 004030a1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004030a4: mov dword ptr [eax], 0x633354 */ W32((u32)(r_eax), 0x633354u);
    /* 004030aa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004030ad: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 004030b4: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004030ba: jmp 0x4030c8 */ goto L_004030c8;
L_004030bc:; BB(0x004030bc);
    /* 004030bc: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004030c0: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004030c4: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004030c8:; BB(0x004030c8);
    /* 004030c8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004030cc: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004030cf: jge 0x4030e2 */ if ((fS==fO)) goto L_004030e2;
L_004030d1:; BB(0x004030d1);
    /* 004030d1: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004030d5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004030d8: mov dword ptr [edx + ecx*4 + 0x10], 0 */ W32((u32)(r_edx+r_ecx*4+0x10u), 0x0u);
    /* 004030e0: jmp 0x4030bc */ goto L_004030bc;
L_004030e2:; BB(0x004030e2);
    /* 004030e2: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004030e8: jmp 0x4030f6 */ goto L_004030f6;
L_004030ea:; BB(0x004030ea);
    /* 004030ea: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004030ee: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004030f2: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004030f6:; BB(0x004030f6);
    /* 004030f6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004030fa: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004030fd: jge 0x403110 */ if ((fS==fO)) goto L_00403110;
L_004030ff:; BB(0x004030ff);
    /* 004030ff: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403103: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403106: mov dword ptr [eax + edx*4 + 0x2c], 0 */ W32((u32)(r_eax+r_edx*4+0x2cu), 0x0u);
    /* 0040310e: jmp 0x4030ea */ goto L_004030ea;
L_00403110:; BB(0x00403110);
    /* 00403110: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00403116: jmp 0x403124 */ goto L_00403124;
L_00403118:; BB(0x00403118);
    /* 00403118: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0040311c: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00403120: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_00403124:; BB(0x00403124);
    /* 00403124: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403128: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040312b: jge 0x40313e */ if ((fS==fO)) goto L_0040313e;
L_0040312d:; BB(0x0040312d);
    /* 0040312d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403131: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403134: mov dword ptr [ecx + eax*4 + 0x3c], 0 */ W32((u32)(r_ecx+r_eax*4+0x3cu), 0x0u);
    /* 0040313c: jmp 0x403118 */ goto L_00403118;
L_0040313e:; BB(0x0040313e);
    /* 0040313e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403141: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 00403148: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040314b: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 00403152: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403155: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 0040315c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040315f: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 00403166: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403169: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 00403170: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403173: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 0040317a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040317d: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 00403184: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403187: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 0040318e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403191: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 00403198: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040319b: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
    /* 004031a2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004031a5: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
    /* 004031ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004031af: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
    /* 004031b6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004031b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004031bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004031bc: ret  */ FN_RET(0x00403090); r_esp += 4; return;
}

void f_004031bd(void) /* FUN_004031bd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004031bd);
    /* 004031bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004031be: mov ebp, esp */ r_ebp = r_esp;
    /* 004031c0: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004031c6: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 004031cc: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 004031d2: mov dword ptr [eax], 0x633354 */ W32((u32)(r_eax), 0x633354u);
    /* 004031d8: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 004031de: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004031e2: je 0x403227 */ if (fZ) goto L_00403227;
L_004031e4:; BB(0x004031e4);
    /* 004031e4: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 004031ea: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004031ed: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004031f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004031f3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004031f6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004031fa: je 0x403210 */ if (fZ) goto L_00403210;
L_004031fc:; BB(0x004031fc);
    /* 004031fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004031fe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403201: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403203: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403206: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x403208u); call_ind(t); }
    /* 00403208: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0040320e: jmp 0x40321a */ goto L_0040321a;
L_00403210:; BB(0x00403210);
    /* 00403210: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0040321a:; BB(0x0040321a);
    /* 0040321a: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00403220: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
L_00403227:; BB(0x00403227);
    /* 00403227: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040322d: jmp 0x40323b */ goto L_0040323b;
L_0040322f:; BB(0x0040322f);
    /* 0040322f: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00403233: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00403237: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_0040323b:; BB(0x0040323b);
    /* 0040323b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040323f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403242: jge 0x4032a4 */ if ((fS==fO)) goto L_004032a4;
L_00403244:; BB(0x00403244);
    /* 00403244: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403248: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0040324e: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403253: je 0x4032a2 */ if (fZ) goto L_004032a2;
L_00403255:; BB(0x00403255);
    /* 00403255: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403259: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0040325f: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00403263: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00403266: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00403269: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040326c: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403270: je 0x403286 */ if (fZ) goto L_00403286;
L_00403272:; BB(0x00403272);
    /* 00403272: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403274: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403277: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00403279: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040327c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40327eu); call_ind(t); }
    /* 0040327e: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00403284: jmp 0x403290 */ goto L_00403290;
L_00403286:; BB(0x00403286);
    /* 00403286: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00403290:; BB(0x00403290);
    /* 00403290: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403294: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0040329a: mov dword ptr [ecx + eax*4 + 0x10], 0 */ W32((u32)(r_ecx+r_eax*4+0x10u), 0x0u);
L_004032a2:; BB(0x004032a2);
    /* 004032a2: jmp 0x40322f */ goto L_0040322f;
L_004032a4:; BB(0x004032a4);
    /* 004032a4: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004032aa: jmp 0x4032b8 */ goto L_004032b8;
L_004032ac:; BB(0x004032ac);
    /* 004032ac: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004032b0: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004032b4: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004032b8:; BB(0x004032b8);
    /* 004032b8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004032bc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004032bf: jge 0x403321 */ if ((fS==fO)) goto L_00403321;
L_004032c1:; BB(0x004032c1);
    /* 004032c1: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004032c5: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 004032cb: cmp dword ptr [edx + ecx*4 + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004032d0: je 0x40331f */ if (fZ) goto L_0040331f;
L_004032d2:; BB(0x004032d2);
    /* 004032d2: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004032d6: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 004032dc: mov edx, dword ptr [ecx + eax*4 + 0x2c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x2cu));
    /* 004032e0: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004032e3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004032e6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004032e9: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004032ed: je 0x403303 */ if (fZ) goto L_00403303;
L_004032ef:; BB(0x004032ef);
    /* 004032ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004032f1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004032f4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004032f6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004032f9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4032fbu); call_ind(t); }
    /* 004032fb: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00403301: jmp 0x40330d */ goto L_0040330d;
L_00403303:; BB(0x00403303);
    /* 00403303: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0040330d:; BB(0x0040330d);
    /* 0040330d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403311: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00403317: mov dword ptr [ecx + eax*4 + 0x2c], 0 */ W32((u32)(r_ecx+r_eax*4+0x2cu), 0x0u);
L_0040331f:; BB(0x0040331f);
    /* 0040331f: jmp 0x4032ac */ goto L_004032ac;
L_00403321:; BB(0x00403321);
    /* 00403321: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00403327: jmp 0x403335 */ goto L_00403335;
L_00403329:; BB(0x00403329);
    /* 00403329: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0040332d: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00403331: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00403335:; BB(0x00403335);
    /* 00403335: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403339: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040333c: jge 0x40339e */ if ((fS==fO)) goto L_0040339e;
L_0040333e:; BB(0x0040333e);
    /* 0040333e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403342: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00403348: cmp dword ptr [edx + ecx*4 + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040334d: je 0x40339c */ if (fZ) goto L_0040339c;
L_0040334f:; BB(0x0040334f);
    /* 0040334f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403353: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00403359: mov edx, dword ptr [ecx + eax*4 + 0x3c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 0040335d: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00403360: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00403363: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00403366: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040336a: je 0x403380 */ if (fZ) goto L_00403380;
L_0040336c:; BB(0x0040336c);
    /* 0040336c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040336e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00403371: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00403373: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00403376: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x403378u); call_ind(t); }
    /* 00403378: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0040337e: jmp 0x40338a */ goto L_0040338a;
L_00403380:; BB(0x00403380);
    /* 00403380: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0040338a:; BB(0x0040338a);
    /* 0040338a: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040338e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00403394: mov dword ptr [ecx + eax*4 + 0x3c], 0 */ W32((u32)(r_ecx+r_eax*4+0x3cu), 0x0u);
L_0040339c:; BB(0x0040339c);
    /* 0040339c: jmp 0x403329 */ goto L_00403329;
L_0040339e:; BB(0x0040339e);
    /* 0040339e: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 004033a4: cmp dword ptr [edx + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004033a8: je 0x4033ed */ if (fZ) goto L_004033ed;
L_004033aa:; BB(0x004033aa);
    /* 004033aa: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 004033b0: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004033b3: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004033b6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004033b9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004033bc: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004033c0: je 0x4033d6 */ if (fZ) goto L_004033d6;
L_004033c2:; BB(0x004033c2);
    /* 004033c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004033c4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004033c7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004033c9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004033cc: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4033ceu); call_ind(t); }
    /* 004033ce: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 004033d4: jmp 0x4033e0 */ goto L_004033e0;
L_004033d6:; BB(0x004033d6);
    /* 004033d6: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_004033e0:; BB(0x004033e0);
    /* 004033e0: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 004033e6: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
L_004033ed:; BB(0x004033ed);
    /* 004033ed: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 004033f3: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004033f7: je 0x40343c */ if (fZ) goto L_0040343c;
L_004033f9:; BB(0x004033f9);
    /* 004033f9: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 004033ff: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00403402: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00403405: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00403408: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0040340b: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040340f: je 0x403425 */ if (fZ) goto L_00403425;
L_00403411:; BB(0x00403411);
    /* 00403411: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403413: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00403416: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403418: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040341b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x40341du); call_ind(t); }
    /* 0040341d: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00403423: jmp 0x40342f */ goto L_0040342f;
L_00403425:; BB(0x00403425);
    /* 00403425: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0040342f:; BB(0x0040342f);
    /* 0040342f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00403435: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_0040343c:; BB(0x0040343c);
    /* 0040343c: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00403442: cmp dword ptr [edx + 0x24], 0 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403446: je 0x40348b */ if (fZ) goto L_0040348b;
L_00403448:; BB(0x00403448);
    /* 00403448: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0040344e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00403451: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00403454: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403457: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0040345a: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040345e: je 0x403474 */ if (fZ) goto L_00403474;
L_00403460:; BB(0x00403460);
    /* 00403460: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403462: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00403465: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403467: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040346a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40346cu); call_ind(t); }
    /* 0040346c: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00403472: jmp 0x40347e */ goto L_0040347e;
L_00403474:; BB(0x00403474);
    /* 00403474: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_0040347e:; BB(0x0040347e);
    /* 0040347e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00403484: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0040348b:; BB(0x0040348b);
    /* 0040348b: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00403491: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403495: je 0x4034da */ if (fZ) goto L_004034da;
L_00403497:; BB(0x00403497);
    /* 00403497: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0040349d: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 004034a0: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004034a3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004034a6: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004034a9: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004034ad: je 0x4034c3 */ if (fZ) goto L_004034c3;
L_004034af:; BB(0x004034af);
    /* 004034af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004034b1: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004034b4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004034b6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004034b9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4034bbu); call_ind(t); }
    /* 004034bb: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 004034c1: jmp 0x4034cd */ goto L_004034cd;
L_004034c3:; BB(0x004034c3);
    /* 004034c3: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_004034cd:; BB(0x004034cd);
    /* 004034cd: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 004034d3: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
L_004034da:; BB(0x004034da);
    /* 004034da: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 004034e0: cmp dword ptr [edx + 0x38], 0 */ {  u32 a = R32((u32)(r_edx+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004034e4: je 0x403529 */ if (fZ) goto L_00403529;
L_004034e6:; BB(0x004034e6);
    /* 004034e6: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 004034ec: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004034ef: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004034f2: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004034f5: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 004034f8: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004034fc: je 0x403512 */ if (fZ) goto L_00403512;
L_004034fe:; BB(0x004034fe);
    /* 004034fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403500: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00403503: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403505: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00403508: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x40350au); call_ind(t); }
    /* 0040350a: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00403510: jmp 0x40351c */ goto L_0040351c;
L_00403512:; BB(0x00403512);
    /* 00403512: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_0040351c:; BB(0x0040351c);
    /* 0040351c: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00403522: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_00403529:; BB(0x00403529);
    /* 00403529: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0040352f: cmp dword ptr [ecx + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403533: je 0x403578 */ if (fZ) goto L_00403578;
L_00403535:; BB(0x00403535);
    /* 00403535: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0040353b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0040353e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00403541: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00403544: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00403547: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040354b: je 0x403561 */ if (fZ) goto L_00403561;
L_0040354d:; BB(0x0040354d);
    /* 0040354d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040354f: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00403552: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403554: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00403557: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x403559u); call_ind(t); }
    /* 00403559: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0040355f: jmp 0x40356b */ goto L_0040356b;
L_00403561:; BB(0x00403561);
    /* 00403561: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_0040356b:; BB(0x0040356b);
    /* 0040356b: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00403571: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_00403578:; BB(0x00403578);
    /* 00403578: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0040357e: cmp dword ptr [edx + 0x48], 0 */ {  u32 a = R32((u32)(r_edx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403582: je 0x4035c7 */ if (fZ) goto L_004035c7;
L_00403584:; BB(0x00403584);
    /* 00403584: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0040358a: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0040358d: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00403590: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00403593: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00403596: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040359a: je 0x4035b0 */ if (fZ) goto L_004035b0;
L_0040359c:; BB(0x0040359c);
    /* 0040359c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040359e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 004035a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004035a3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004035a6: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4035a8u); call_ind(t); }
    /* 004035a8: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 004035ae: jmp 0x4035ba */ goto L_004035ba;
L_004035b0:; BB(0x004035b0);
    /* 004035b0: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_004035ba:; BB(0x004035ba);
    /* 004035ba: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 004035c0: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_004035c7:; BB(0x004035c7);
    /* 004035c7: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 004035cd: cmp dword ptr [ecx + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004035d1: je 0x403616 */ if (fZ) goto L_00403616;
L_004035d3:; BB(0x004035d3);
    /* 004035d3: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 004035d9: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 004035dc: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004035df: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004035e2: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 004035e5: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004035e9: je 0x4035ff */ if (fZ) goto L_004035ff;
L_004035eb:; BB(0x004035eb);
    /* 004035eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004035ed: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004035f0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004035f2: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004035f5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4035f7u); call_ind(t); }
    /* 004035f7: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 004035fd: jmp 0x403609 */ goto L_00403609;
L_004035ff:; BB(0x004035ff);
    /* 004035ff: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_00403609:; BB(0x00403609);
    /* 00403609: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0040360f: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
L_00403616:; BB(0x00403616);
    /* 00403616: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0040361c: cmp dword ptr [edx + 0x50], 0 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403620: je 0x403665 */ if (fZ) goto L_00403665;
L_00403622:; BB(0x00403622);
    /* 00403622: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00403628: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040362b: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0040362e: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00403631: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00403634: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403638: je 0x40364e */ if (fZ) goto L_0040364e;
L_0040363a:; BB(0x0040363a);
    /* 0040363a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040363c: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0040363f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403641: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00403644: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x403646u); call_ind(t); }
    /* 00403646: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0040364c: jmp 0x403658 */ goto L_00403658;
L_0040364e:; BB(0x0040364e);
    /* 0040364e: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_00403658:; BB(0x00403658);
    /* 00403658: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0040365e: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_00403665:; BB(0x00403665);
    /* 00403665: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0040366b: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040366f: je 0x4036b4 */ if (fZ) goto L_004036b4;
L_00403671:; BB(0x00403671);
    /* 00403671: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00403677: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0040367a: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0040367d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00403680: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00403683: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403687: je 0x40369d */ if (fZ) goto L_0040369d;
L_00403689:; BB(0x00403689);
    /* 00403689: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040368b: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040368e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403690: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00403693: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x403695u); call_ind(t); }
    /* 00403695: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0040369b: jmp 0x4036a7 */ goto L_004036a7;
L_0040369d:; BB(0x0040369d);
    /* 0040369d: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_004036a7:; BB(0x004036a7);
    /* 004036a7: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 004036ad: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
L_004036b4:; BB(0x004036b4);
    /* 004036b4: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 004036ba: cmp dword ptr [edx + 0x58], 0 */ {  u32 a = R32((u32)(r_edx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004036be: je 0x403703 */ if (fZ) goto L_00403703;
L_004036c0:; BB(0x004036c0);
    /* 004036c0: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 004036c6: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 004036c9: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 004036cc: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004036cf: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 004036d2: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004036d6: je 0x4036ec */ if (fZ) goto L_004036ec;
L_004036d8:; BB(0x004036d8);
    /* 004036d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004036da: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004036dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004036df: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004036e2: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4036e4u); call_ind(t); }
    /* 004036e4: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 004036ea: jmp 0x4036f6 */ goto L_004036f6;
L_004036ec:; BB(0x004036ec);
    /* 004036ec: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_004036f6:; BB(0x004036f6);
    /* 004036f6: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 004036fc: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
L_00403703:; BB(0x00403703);
    /* 00403703: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00403709: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040370d: je 0x403758 */ if (fZ) goto L_00403758;
L_0040370f:; BB(0x0040370f);
    /* 0040370f: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00403715: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00403718: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0040371e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00403724: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 00403727: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040372b: je 0x403741 */ if (fZ) goto L_00403741;
L_0040372d:; BB(0x0040372d);
    /* 0040372d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040372f: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00403732: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403734: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00403737: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x403739u); call_ind(t); }
    /* 00403739: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0040373f: jmp 0x40374b */ goto L_0040374b;
L_00403741:; BB(0x00403741);
    /* 00403741: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_0040374b:; BB(0x0040374b);
    /* 0040374b: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00403751: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
L_00403758:; BB(0x00403758);
    /* 00403758: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0040375e: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x403763u); f_005dfc0f();
    /* 00403763: mov esp, ebp */ r_esp = r_ebp;
    /* 00403765: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403766: ret  */ FN_RET(0x004031bd); r_esp += 4; return;
}

void f_00403767(void) /* FUN_00403767 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403767);
    /* 00403767: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403768: mov ebp, esp */ r_ebp = r_esp;
    /* 0040376a: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403770: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00403773: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403776: call 0x40431f */ r_esp -= 4; W32(r_esp, 0x40377bu); f_0040431f();
    /* 0040377b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040377e: call 0x404373 */ r_esp -= 4; W32(r_esp, 0x403783u); f_00404373();
    /* 00403783: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403786: mov dword ptr [eax + 0x64], 0xffffffff */ W32((u32)(r_eax+0x64u), 0xffffffffu);
    /* 0040378d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403790: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 00403797: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040379a: mov dword ptr [edx + 0x70], 0 */ W32((u32)(r_edx+0x70u), 0x0u);
    /* 004037a1: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004037a4: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 004037ab: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004037ae: mov dword ptr [ecx + 0x60], 1 */ W32((u32)(r_ecx+0x60u), 0x1u);
    /* 004037b5: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004037bb: jmp 0x4037c9 */ goto L_004037c9;
L_004037bd:; BB(0x004037bd);
    /* 004037bd: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004037c1: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004037c5: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004037c9:; BB(0x004037c9);
    /* 004037c9: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004037cd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004037d0: jge 0x403944 */ if ((fS==fO)) goto L_00403944;
L_004037d6:; BB(0x004037d6);
    /* 004037d6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004037da: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004037dd: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004037e2: jne 0x403821 */ if (!fZ) goto L_00403821;
L_004037e4:; BB(0x004037e4);
    /* 004037e4: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 004037e9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4037eeu); f_0048ab58();
    /* 004037ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004037f1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004037f4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004037f8: je 0x40380c */ if (fZ) goto L_0040380c;
L_004037fa:; BB(0x004037fa);
    /* 004037fa: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004037fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004037ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403802: call 0x405a02 */ r_esp -= 4; W32(r_esp, 0x403807u); f_00405a02();
    /* 00403807: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0040380a: jmp 0x403813 */ goto L_00403813;
L_0040380c:; BB(0x0040380c);
    /* 0040380c: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00403813:; BB(0x00403813);
    /* 00403813: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403817: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040381a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040381d: mov dword ptr [edx + ecx*4 + 0x10], eax */ W32((u32)(r_edx+r_ecx*4+0x10u), r_eax);
L_00403821:; BB(0x00403821);
    /* 00403821: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403825: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403828: jge 0x403839 */ if ((fS==fO)) goto L_00403839;
L_0040382a:; BB(0x0040382a);
    /* 0040382a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040382e: add edx, 0x16083 */ {  u32 a = r_edx; u32 b = 0x16083u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00403834: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00403837: jmp 0x403840 */ goto L_00403840;
L_00403839:; BB(0x00403839);
    /* 00403839: mov dword ptr [ebp - 0x4c], 0x16041 */ W32((u32)(r_ebp+0xffffffb4u), 0x16041u);
L_00403840:; BB(0x00403840);
    /* 00403840: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00403843: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403844: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403848: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040384b: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 0040384f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403853: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403856: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 0040385a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040385c: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x40385fu); call_ind(t); }
    /* 0040385f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403861: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403863: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403867: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040386a: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 0040386e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403872: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403875: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00403879: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040387b: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x40387eu); call_ind(t); }
    /* 0040387e: push 0x5dc */ { u32 v = 0x5dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00403883: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403887: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040388a: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 0040388e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403892: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403895: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 00403899: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040389b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40389eu); call_ind(t); }
    /* 0040389e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004038a2: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004038a5: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 004038a9: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004038ad: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004038b0: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 004038b4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004038b6: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4038b9u); call_ind(t); }
    /* 004038b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004038bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004038bd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004038bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004038c1: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004038c5: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004038c8: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 004038cc: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x4038d1u); f_005d5ff2();
    /* 004038d1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004038d5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004038d8: jge 0x4038f7 */ if ((fS==fO)) goto L_004038f7;
L_004038da:; BB(0x004038da);
    /* 004038da: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004038de: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004038e1: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 004038e5: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004038e9: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004038ec: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 004038f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004038f2: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4038f5u); call_ind(t); }
    /* 004038f5: jmp 0x403912 */ goto L_00403912;
L_004038f7:; BB(0x004038f7);
    /* 004038f7: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004038fb: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004038fe: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00403902: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403906: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403909: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0040390d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040390f: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x403912u); call_ind(t); }
L_00403912:; BB(0x00403912);
    /* 00403912: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403914: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403918: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040391b: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 0040391f: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x403924u); f_005ea514();
    /* 00403924: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403928: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040392b: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 0040392f: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403933: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403936: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0040393a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040393c: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x40393fu); call_ind(t); }
    /* 0040393f: jmp 0x4037bd */ goto L_004037bd;
L_00403944:; BB(0x00403944);
    /* 00403944: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040394a: jmp 0x403958 */ goto L_00403958;
L_0040394c:; BB(0x0040394c);
    /* 0040394c: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00403950: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00403954: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_00403958:; BB(0x00403958);
    /* 00403958: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040395c: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040395f: jge 0x403a55 */ if ((fS==fO)) goto L_00403a55;
L_00403965:; BB(0x00403965);
    /* 00403965: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403969: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040396c: cmp dword ptr [ecx + eax*4 + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403971: jne 0x4039a8 */ if (!fZ) goto L_004039a8;
L_00403973:; BB(0x00403973);
    /* 00403973: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00403975: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40397au); f_0048ab58();
    /* 0040397a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040397d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00403980: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403984: je 0x403993 */ if (fZ) goto L_00403993;
L_00403986:; BB(0x00403986);
    /* 00403986: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403989: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x40398eu); f_005e3fb0();
    /* 0040398e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00403991: jmp 0x40399a */ goto L_0040399a;
L_00403993:; BB(0x00403993);
    /* 00403993: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0040399a:; BB(0x0040399a);
    /* 0040399a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040399e: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004039a1: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004039a4: mov dword ptr [eax + edx*4 + 0x2c], ecx */ W32((u32)(r_eax+r_edx*4+0x2cu), r_ecx);
L_004039a8:; BB(0x004039a8);
    /* 004039a8: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004039ac: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004039af: mov ecx, dword ptr [eax + edx*4 + 0x2c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2cu));
    /* 004039b3: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004039b7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004039ba: mov edx, dword ptr [eax + edx*4 + 0x2c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x2cu));
    /* 004039be: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004039c0: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4039c3u); call_ind(t); }
    /* 004039c3: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004039c7: add ecx, 0x1608f */ {  u32 a = r_ecx; u32 b = 0x1608fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004039cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004039ce: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004039d2: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004039d5: mov ecx, dword ptr [eax + edx*4 + 0x2c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2cu));
    /* 004039d9: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4039deu); f_005ea0c3();
    /* 004039de: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004039e0: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4039e5u); f_0060ee31();
    /* 004039e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004039e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004039e9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004039ed: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004039f0: mov ecx, dword ptr [edx + ecx*4 + 0x2c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2cu));
    /* 004039f4: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4039f9u); f_005ea1cf();
    /* 004039f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004039fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004039fd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403a01: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403a04: mov ecx, dword ptr [ecx + eax*4 + 0x2c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2cu));
    /* 00403a08: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403a0c: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403a0f: mov edx, dword ptr [eax + edx*4 + 0x2c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x2cu));
    /* 00403a13: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403a15: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x403a18u); call_ind(t); }
    /* 00403a18: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00403a1a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403a1e: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403a21: mov ecx, dword ptr [edx + ecx*4 + 0x2c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2cu));
    /* 00403a25: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403a29: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403a2c: mov eax, dword ptr [edx + eax*4 + 0x2c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x2cu));
    /* 00403a30: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403a32: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x403a35u); call_ind(t); }
    /* 00403a35: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403a39: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403a3c: mov ecx, dword ptr [ecx + eax*4 + 0x2c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2cu));
    /* 00403a40: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403a44: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403a47: mov edx, dword ptr [eax + edx*4 + 0x2c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x2cu));
    /* 00403a4b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403a4d: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x403a50u); call_ind(t); }
    /* 00403a50: jmp 0x40394c */ goto L_0040394c;
L_00403a55:; BB(0x00403a55);
    /* 00403a55: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00403a5b: jmp 0x403a69 */ goto L_00403a69;
L_00403a5d:; BB(0x00403a5d);
    /* 00403a5d: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00403a61: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00403a65: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_00403a69:; BB(0x00403a69);
    /* 00403a69: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403a6d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403a70: jge 0x403b58 */ if ((fS==fO)) goto L_00403b58;
L_00403a76:; BB(0x00403a76);
    /* 00403a76: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403a7a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403a7d: cmp dword ptr [ecx + eax*4 + 0x3c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403a82: jne 0x403ab9 */ if (!fZ) goto L_00403ab9;
L_00403a84:; BB(0x00403a84);
    /* 00403a84: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00403a86: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x403a8bu); f_0048ab58();
    /* 00403a8b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403a8e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00403a91: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403a95: je 0x403aa4 */ if (fZ) goto L_00403aa4;
L_00403a97:; BB(0x00403a97);
    /* 00403a97: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403a9a: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x403a9fu); f_005e3fb0();
    /* 00403a9f: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00403aa2: jmp 0x403aab */ goto L_00403aab;
L_00403aa4:; BB(0x00403aa4);
    /* 00403aa4: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00403aab:; BB(0x00403aab);
    /* 00403aab: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403aaf: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403ab2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00403ab5: mov dword ptr [eax + edx*4 + 0x3c], ecx */ W32((u32)(r_eax+r_edx*4+0x3cu), r_ecx);
L_00403ab9:; BB(0x00403ab9);
    /* 00403ab9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403abb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403abd: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403ac1: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403ac4: mov ecx, dword ptr [eax + edx*4 + 0x3c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 00403ac8: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403acc: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403acf: mov edx, dword ptr [eax + edx*4 + 0x3c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 00403ad3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403ad5: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x403ad8u); call_ind(t); }
    /* 00403ad8: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403adc: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00403ade: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00403ae0: add ecx, 0x16094 */ {  u32 a = r_ecx; u32 b = 0x16094u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00403ae6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403ae7: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403aeb: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403aee: mov ecx, dword ptr [eax + edx*4 + 0x3c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 00403af2: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x403af7u); f_005ea0c3();
    /* 00403af7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403af9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403afd: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403b00: mov ecx, dword ptr [edx + ecx*4 + 0x3c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x3cu));
    /* 00403b04: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x403b09u); f_005ea1cf();
    /* 00403b09: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403b0d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403b10: mov ecx, dword ptr [ecx + eax*4 + 0x3c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 00403b14: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403b18: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403b1b: mov edx, dword ptr [eax + edx*4 + 0x3c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 00403b1f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403b21: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x403b24u); call_ind(t); }
    /* 00403b24: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00403b26: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403b2a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403b2d: mov ecx, dword ptr [edx + ecx*4 + 0x3c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x3cu));
    /* 00403b31: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403b35: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403b38: mov eax, dword ptr [edx + eax*4 + 0x3c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x3cu));
    /* 00403b3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403b3e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x403b41u); call_ind(t); }
    /* 00403b41: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00403b45: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403b48: mov edx, dword ptr [ecx + eax*4 + 0x3c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 00403b4c: mov dword ptr [edx + 0x6c], 0xa */ W32((u32)(r_edx+0x6cu), 0xau);
    /* 00403b53: jmp 0x403a5d */ goto L_00403a5d;
L_00403b58:; BB(0x00403b58);
    /* 00403b58: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403b5b: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403b5f: jne 0x403b91 */ if (!fZ) goto L_00403b91;
L_00403b61:; BB(0x00403b61);
    /* 00403b61: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00403b63: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x403b68u); f_0048ab58();
    /* 00403b68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403b6b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00403b6e: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403b72: je 0x403b81 */ if (fZ) goto L_00403b81;
L_00403b74:; BB(0x00403b74);
    /* 00403b74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00403b77: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x403b7cu); f_005e9d30();
    /* 00403b7c: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00403b7f: jmp 0x403b88 */ goto L_00403b88;
L_00403b81:; BB(0x00403b81);
    /* 00403b81: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00403b88:; BB(0x00403b88);
    /* 00403b88: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403b8b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00403b8e: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
L_00403b91:; BB(0x00403b91);
    /* 00403b91: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403b94: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00403b97: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403b9a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00403b9d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403b9f: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x403ba2u); call_ind(t); }
    /* 00403ba2: push 0x16086 */ { u32 v = 0x16086u; r_esp -= 4; W32(r_esp, v); }
    /* 00403ba7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403baa: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00403bad: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x403bb2u); f_005ea0c3();
    /* 00403bb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403bb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403bb6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403bb9: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00403bbc: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403bbf: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00403bc2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403bc4: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x403bc7u); call_ind(t); }
    /* 00403bc7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00403bc9: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403bcc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00403bcf: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403bd2: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00403bd5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403bd7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x403bdau); call_ind(t); }
    /* 00403bda: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403bdd: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00403be0: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403be3: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00403be6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403be8: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x403bebu); call_ind(t); }
    /* 00403beb: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403bee: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403bf2: jne 0x403c27 */ if (!fZ) goto L_00403c27;
L_00403bf4:; BB(0x00403bf4);
    /* 00403bf4: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00403bf9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x403bfeu); f_0048ab58();
    /* 00403bfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403c01: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00403c04: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403c08: je 0x403c17 */ if (fZ) goto L_00403c17;
L_00403c0a:; BB(0x00403c0a);
    /* 00403c0a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403c0d: call 0x405de2 */ r_esp -= 4; W32(r_esp, 0x403c12u); f_00405de2();
    /* 00403c12: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00403c15: jmp 0x403c1e */ goto L_00403c1e;
L_00403c17:; BB(0x00403c17);
    /* 00403c17: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00403c1e:; BB(0x00403c1e);
    /* 00403c1e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c21: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00403c24: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
L_00403c27:; BB(0x00403c27);
    /* 00403c27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403c29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403c2b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c2e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00403c31: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c34: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00403c37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403c39: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x403c3cu); call_ind(t); }
    /* 00403c3c: push 0x16042 */ { u32 v = 0x16042u; r_esp -= 4; W32(r_esp, v); }
    /* 00403c41: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c44: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00403c47: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c4a: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00403c4d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403c4f: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x403c52u); call_ind(t); }
    /* 00403c52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403c54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403c56: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c59: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00403c5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c5f: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00403c62: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403c64: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x403c67u); call_ind(t); }
    /* 00403c67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403c69: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c6c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00403c6f: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c72: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00403c75: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403c77: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x403c7au); call_ind(t); }
    /* 00403c7a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c7d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00403c80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c83: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00403c86: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403c88: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x403c8bu); call_ind(t); }
    /* 00403c8b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c8e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00403c91: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c94: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00403c97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403c99: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x403c9cu); call_ind(t); }
    /* 00403c9c: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403c9f: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403ca3: jne 0x403cd5 */ if (!fZ) goto L_00403cd5;
L_00403ca5:; BB(0x00403ca5);
    /* 00403ca5: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00403ca7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x403cacu); f_0048ab58();
    /* 00403cac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403caf: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00403cb2: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403cb6: je 0x403cc5 */ if (fZ) goto L_00403cc5;
L_00403cb8:; BB(0x00403cb8);
    /* 00403cb8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00403cbb: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x403cc0u); f_005e9d30();
    /* 00403cc0: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00403cc3: jmp 0x403ccc */ goto L_00403ccc;
L_00403cc5:; BB(0x00403cc5);
    /* 00403cc5: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00403ccc:; BB(0x00403ccc);
    /* 00403ccc: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403ccf: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00403cd2: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
L_00403cd5:; BB(0x00403cd5);
    /* 00403cd5: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403cd8: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00403cdb: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403cde: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00403ce1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403ce3: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x403ce6u); call_ind(t); }
    /* 00403ce6: push 0x1608a */ { u32 v = 0x1608au; r_esp -= 4; W32(r_esp, v); }
    /* 00403ceb: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403cee: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00403cf1: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x403cf6u); f_005ea0c3();
    /* 00403cf6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403cf8: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403cfb: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00403cfe: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x403d03u); f_005ea1cf();
    /* 00403d03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403d05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403d07: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403d0a: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 00403d0d: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403d10: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00403d13: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403d15: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x403d18u); call_ind(t); }
    /* 00403d18: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00403d1a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403d1d: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00403d20: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403d23: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00403d26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403d28: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x403d2bu); call_ind(t); }
    /* 00403d2b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403d2e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00403d31: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403d34: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00403d37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403d39: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x403d3cu); call_ind(t); }
    /* 00403d3c: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403d3f: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403d43: jne 0x403d75 */ if (!fZ) goto L_00403d75;
L_00403d45:; BB(0x00403d45);
    /* 00403d45: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00403d47: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x403d4cu); f_0048ab58();
    /* 00403d4c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403d4f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00403d52: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403d56: je 0x403d65 */ if (fZ) goto L_00403d65;
L_00403d58:; BB(0x00403d58);
    /* 00403d58: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00403d5b: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x403d60u); f_005e9d30();
    /* 00403d60: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00403d63: jmp 0x403d6c */ goto L_00403d6c;
L_00403d65:; BB(0x00403d65);
    /* 00403d65: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00403d6c:; BB(0x00403d6c);
    /* 00403d6c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403d6f: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00403d72: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
L_00403d75:; BB(0x00403d75);
    /* 00403d75: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403d78: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00403d7b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403d7e: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00403d81: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403d83: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x403d86u); call_ind(t); }
    /* 00403d86: push 0x1608b */ { u32 v = 0x1608bu; r_esp -= 4; W32(r_esp, v); }
    /* 00403d8b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403d8e: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00403d91: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x403d96u); f_005ea0c3();
    /* 00403d96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403d98: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403d9b: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00403d9e: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x403da3u); f_005ea1cf();
    /* 00403da3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403da5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403da7: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403daa: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 00403dad: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403db0: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00403db3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403db5: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x403db8u); call_ind(t); }
    /* 00403db8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00403dba: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403dbd: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00403dc0: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403dc3: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00403dc6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403dc8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x403dcbu); call_ind(t); }
    /* 00403dcb: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403dce: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00403dd1: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403dd4: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00403dd7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403dd9: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x403ddcu); call_ind(t); }
    /* 00403ddc: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403ddf: cmp dword ptr [eax + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403de3: jne 0x403e15 */ if (!fZ) goto L_00403e15;
L_00403de5:; BB(0x00403de5);
    /* 00403de5: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00403de7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x403decu); f_0048ab58();
    /* 00403dec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403def: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00403df2: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403df6: je 0x403e05 */ if (fZ) goto L_00403e05;
L_00403df8:; BB(0x00403df8);
    /* 00403df8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00403dfb: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x403e00u); f_005e3fb0();
    /* 00403e00: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00403e03: jmp 0x403e0c */ goto L_00403e0c;
L_00403e05:; BB(0x00403e05);
    /* 00403e05: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00403e0c:; BB(0x00403e0c);
    /* 00403e0c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403e0f: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00403e12: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
L_00403e15:; BB(0x00403e15);
    /* 00403e15: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403e18: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00403e1b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403e1e: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00403e21: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403e23: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x403e26u); call_ind(t); }
    /* 00403e26: push 0x16092 */ { u32 v = 0x16092u; r_esp -= 4; W32(r_esp, v); }
    /* 00403e2b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403e2e: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00403e31: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x403e36u); f_005ea0c3();
    /* 00403e36: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403e39: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 00403e3c: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x403e41u); f_005ea2f8();
    /* 00403e41: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00403e44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403e45: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x403e4au); f_0060ee31();
    /* 00403e4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403e4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403e4e: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403e51: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00403e54: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x403e59u); f_005ea1cf();
    /* 00403e59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403e5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403e5d: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403e60: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00403e63: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403e66: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00403e69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403e6b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x403e6eu); call_ind(t); }
    /* 00403e6e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00403e70: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403e73: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00403e76: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403e79: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00403e7c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403e7e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x403e81u); call_ind(t); }
    /* 00403e81: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403e84: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00403e87: mov dword ptr [ecx + 0x6c], 5 */ W32((u32)(r_ecx+0x6cu), 0x5u);
    /* 00403e8e: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403e91: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00403e94: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403e97: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00403e9a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403e9c: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x403e9fu); call_ind(t); }
    /* 00403e9f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403ea2: cmp dword ptr [ecx + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403ea6: jne 0x403ed8 */ if (!fZ) goto L_00403ed8;
L_00403ea8:; BB(0x00403ea8);
    /* 00403ea8: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00403eaa: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x403eafu); f_0048ab58();
    /* 00403eaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403eb2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00403eb5: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403eb9: je 0x403ec8 */ if (fZ) goto L_00403ec8;
L_00403ebb:; BB(0x00403ebb);
    /* 00403ebb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00403ebe: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x403ec3u); f_005e3fb0();
    /* 00403ec3: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00403ec6: jmp 0x403ecf */ goto L_00403ecf;
L_00403ec8:; BB(0x00403ec8);
    /* 00403ec8: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00403ecf:; BB(0x00403ecf);
    /* 00403ecf: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403ed2: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00403ed5: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
L_00403ed8:; BB(0x00403ed8);
    /* 00403ed8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403eda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403edc: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403edf: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 00403ee2: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403ee5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00403ee8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403eea: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x403eedu); call_ind(t); }
    /* 00403eed: push 0x16097 */ { u32 v = 0x16097u; r_esp -= 4; W32(r_esp, v); }
    /* 00403ef2: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403ef5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00403ef8: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x403efdu); f_005ea0c3();
    /* 00403efd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403eff: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403f02: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 00403f05: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x403f0au); f_005ea1cf();
    /* 00403f0a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403f0d: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 00403f10: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403f13: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00403f16: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403f18: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x403f1bu); call_ind(t); }
    /* 00403f1b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00403f1d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403f20: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 00403f23: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403f26: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00403f29: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403f2b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x403f2eu); call_ind(t); }
    /* 00403f2e: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403f31: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00403f34: mov dword ptr [ecx + 0x6c], 0xf */ W32((u32)(r_ecx+0x6cu), 0xfu);
    /* 00403f3b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403f3e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 00403f41: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403f44: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00403f47: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403f49: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x403f4cu); call_ind(t); }
    /* 00403f4c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403f4f: cmp dword ptr [ecx + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403f53: jne 0x403f85 */ if (!fZ) goto L_00403f85;
L_00403f55:; BB(0x00403f55);
    /* 00403f55: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00403f57: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x403f5cu); f_0048ab58();
    /* 00403f5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403f5f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00403f62: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403f66: je 0x403f75 */ if (fZ) goto L_00403f75;
L_00403f68:; BB(0x00403f68);
    /* 00403f68: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00403f6b: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x403f70u); f_005e3fb0();
    /* 00403f70: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00403f73: jmp 0x403f7c */ goto L_00403f7c;
L_00403f75:; BB(0x00403f75);
    /* 00403f75: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00403f7c:; BB(0x00403f7c);
    /* 00403f7c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403f7f: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00403f82: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
L_00403f85:; BB(0x00403f85);
    /* 00403f85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403f87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403f89: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403f8c: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00403f8f: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403f92: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00403f95: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403f97: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x403f9au); call_ind(t); }
    /* 00403f9a: push 0x1609a */ { u32 v = 0x1609au; r_esp -= 4; W32(r_esp, v); }
    /* 00403f9f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403fa2: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00403fa5: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x403faau); f_005ea0c3();
    /* 00403faa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403fac: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403faf: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00403fb2: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x403fb7u); f_005ea1cf();
    /* 00403fb7: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403fba: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00403fbd: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403fc0: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00403fc3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403fc5: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x403fc8u); call_ind(t); }
    /* 00403fc8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00403fca: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403fcd: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00403fd0: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403fd3: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00403fd6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403fd8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x403fdbu); call_ind(t); }
    /* 00403fdb: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403fde: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00403fe1: mov dword ptr [ecx + 0x6c], 8 */ W32((u32)(r_ecx+0x6cu), 0x8u);
    /* 00403fe8: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403feb: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00403fee: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403ff1: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00403ff4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403ff6: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x403ff9u); call_ind(t); }
    /* 00403ff9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403ffc: cmp dword ptr [ecx + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404000: jne 0x404032 */ if (!fZ) goto L_00404032;
L_00404002:; BB(0x00404002);
    /* 00404002: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00404004: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x404009u); f_0048ab58();
    /* 00404009: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040400c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0040400f: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404013: je 0x404022 */ if (fZ) goto L_00404022;
L_00404015:; BB(0x00404015);
    /* 00404015: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00404018: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x40401du); f_005e3fb0();
    /* 0040401d: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00404020: jmp 0x404029 */ goto L_00404029;
L_00404022:; BB(0x00404022);
    /* 00404022: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00404029:; BB(0x00404029);
    /* 00404029: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040402c: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0040402f: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
L_00404032:; BB(0x00404032);
    /* 00404032: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404034: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404036: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404039: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0040403c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040403f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00404042: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404044: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x404047u); call_ind(t); }
    /* 00404047: push 0x1609f */ { u32 v = 0x1609fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040404c: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040404f: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00404052: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x404057u); f_005ea0c3();
    /* 00404057: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404059: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040405c: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0040405f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x404064u); f_005ea1cf();
    /* 00404064: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404067: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0040406a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040406d: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00404070: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00404072: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x404075u); call_ind(t); }
    /* 00404075: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00404077: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040407a: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0040407d: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404080: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00404083: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404085: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x404088u); call_ind(t); }
    /* 00404088: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040408b: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0040408e: mov dword ptr [ecx + 0x6c], 8 */ W32((u32)(r_ecx+0x6cu), 0x8u);
    /* 00404095: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404098: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0040409b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040409e: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004040a1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004040a3: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4040a6u); call_ind(t); }
    /* 004040a6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004040a9: cmp dword ptr [ecx + 0x50], 0 */ {  u32 a = R32((u32)(r_ecx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040ad: jne 0x4040df */ if (!fZ) goto L_004040df;
L_004040af:; BB(0x004040af);
    /* 004040af: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004040b1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4040b6u); f_0048ab58();
    /* 004040b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004040b9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004040bc: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040c0: je 0x4040cf */ if (fZ) goto L_004040cf;
L_004040c2:; BB(0x004040c2);
    /* 004040c2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004040c5: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x4040cau); f_005e9d30();
    /* 004040ca: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004040cd: jmp 0x4040d6 */ goto L_004040d6;
L_004040cf:; BB(0x004040cf);
    /* 004040cf: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_004040d6:; BB(0x004040d6);
    /* 004040d6: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004040d9: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004040dc: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
L_004040df:; BB(0x004040df);
    /* 004040df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004040e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004040e3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004040e6: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 004040e9: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004040ec: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 004040ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004040f1: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4040f4u); call_ind(t); }
    /* 004040f4: push 0x160a1 */ { u32 v = 0x160a1u; r_esp -= 4; W32(r_esp, v); }
    /* 004040f9: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004040fc: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 004040ff: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x404104u); f_005ea0c3();
    /* 00404104: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404107: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0040410a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040410b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040410e: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00404111: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x404116u); f_005ea1cf();
    /* 00404116: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404119: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0040411c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040411f: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00404122: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404124: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x404127u); call_ind(t); }
    /* 00404127: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00404129: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040412c: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0040412f: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404132: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00404135: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404137: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40413au); call_ind(t); }
    /* 0040413a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040413d: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00404140: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404143: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00404146: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404148: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x40414bu); call_ind(t); }
    /* 0040414b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040414e: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404152: jne 0x404189 */ if (!fZ) goto L_00404189;
L_00404154:; BB(0x00404154);
    /* 00404154: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 00404159: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40415eu); f_0048ab58();
    /* 0040415e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404161: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00404164: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404168: je 0x404179 */ if (fZ) goto L_00404179;
L_0040416a:; BB(0x0040416a);
    /* 0040416a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040416c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040416f: call 0x405e33 */ r_esp -= 4; W32(r_esp, 0x404174u); f_00405e33();
    /* 00404174: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00404177: jmp 0x404180 */ goto L_00404180;
L_00404179:; BB(0x00404179);
    /* 00404179: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00404180:; BB(0x00404180);
    /* 00404180: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404183: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00404186: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
L_00404189:; BB(0x00404189);
    /* 00404189: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040418c: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0040418f: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404192: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00404195: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404197: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x40419au); call_ind(t); }
    /* 0040419a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040419c: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040419f: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 004041a2: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4041a7u); f_005ea0c3();
    /* 004041a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004041a9: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004041ab: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004041ae: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 004041b1: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004041b4: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004041b7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004041b9: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4041bcu); call_ind(t); }
    /* 004041bc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004041be: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004041c1: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 004041c4: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004041c7: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004041ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004041cc: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4041cfu); call_ind(t); }
    /* 004041cf: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004041d2: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 004041d5: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004041d8: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004041db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004041dd: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4041e0u); call_ind(t); }
    /* 004041e0: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004041e3: cmp dword ptr [eax + 0x58], 0 */ {  u32 a = R32((u32)(r_eax+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004041e7: jne 0x40421e */ if (!fZ) goto L_0040421e;
L_004041e9:; BB(0x004041e9);
    /* 004041e9: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 004041ee: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4041f3u); f_0048ab58();
    /* 004041f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004041f6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004041f9: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004041fd: je 0x40420e */ if (fZ) goto L_0040420e;
L_004041ff:; BB(0x004041ff);
    /* 004041ff: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00404201: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00404204: call 0x405e33 */ r_esp -= 4; W32(r_esp, 0x404209u); f_00405e33();
    /* 00404209: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0040420c: jmp 0x404215 */ goto L_00404215;
L_0040420e:; BB(0x0040420e);
    /* 0040420e: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00404215:; BB(0x00404215);
    /* 00404215: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404218: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0040421b: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
L_0040421e:; BB(0x0040421e);
    /* 0040421e: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404221: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00404224: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404227: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0040422a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040422c: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x40422fu); call_ind(t); }
    /* 0040422f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404231: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404234: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00404237: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40423cu); f_005ea0c3();
    /* 0040423c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040423e: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00404240: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404243: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 00404246: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404249: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0040424c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040424e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x404251u); call_ind(t); }
    /* 00404251: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00404253: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404256: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00404259: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040425c: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0040425f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404261: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x404264u); call_ind(t); }
    /* 00404264: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404267: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0040426a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040426d: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00404270: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404272: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x404275u); call_ind(t); }
    /* 00404275: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404278: cmp dword ptr [eax + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040427c: jne 0x4042bc */ if (!fZ) goto L_004042bc;
L_0040427e:; BB(0x0040427e);
    /* 0040427e: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 00404283: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x404288u); f_0048ab58();
    /* 00404288: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040428b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0040428e: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404292: je 0x4042a6 */ if (fZ) goto L_004042a6;
L_00404294:; BB(0x00404294);
    /* 00404294: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404296: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00404299: call 0x405e33 */ r_esp -= 4; W32(r_esp, 0x40429eu); f_00405e33();
    /* 0040429e: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 004042a4: jmp 0x4042b0 */ goto L_004042b0;
L_004042a6:; BB(0x004042a6);
    /* 004042a6: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_004042b0:; BB(0x004042b0);
    /* 004042b0: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004042b3: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004042b9: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
L_004042bc:; BB(0x004042bc);
    /* 004042bc: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004042bf: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 004042c2: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004042c5: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 004042c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004042ca: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4042cdu); call_ind(t); }
    /* 004042cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004042cf: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004042d2: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 004042d5: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4042dau); f_005ea0c3();
    /* 004042da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004042dc: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 004042de: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004042e1: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 004042e4: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004042e7: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 004042ea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004042ec: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4042efu); call_ind(t); }
    /* 004042ef: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004042f1: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004042f4: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 004042f7: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004042fa: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 004042fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004042ff: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x404302u); call_ind(t); }
    /* 00404302: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404305: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00404308: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040430b: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0040430e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404310: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x404313u); call_ind(t); }
    /* 00404313: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404316: call 0x4049e1 */ r_esp -= 4; W32(r_esp, 0x40431bu); f_004049e1();
    /* 0040431b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040431d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040431e: ret  */ FN_RET(0x00403767); r_esp += 4; return;
}

void f_0040431f(void) /* FUN_0040431f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040431f);
    /* 0040431f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404320: mov ebp, esp */ r_ebp = r_esp;
    /* 00404322: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404325: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00404328: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040432b: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040432f: jne 0x40436f */ if (!fZ) goto L_0040436f;
L_00404331:; BB(0x00404331);
    /* 00404331: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 00404336: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40433bu); f_0048ab58();
    /* 0040433b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040433e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00404341: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404345: je 0x404354 */ if (fZ) goto L_00404354;
L_00404347:; BB(0x00404347);
    /* 00404347: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040434a: call 0x405965 */ r_esp -= 4; W32(r_esp, 0x40434fu); f_00405965();
    /* 0040434f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00404352: jmp 0x40435b */ goto L_0040435b;
L_00404354:; BB(0x00404354);
    /* 00404354: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0040435b:; BB(0x0040435b);
    /* 0040435b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040435e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404361: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00404364: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404367: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040436a: call 0x4059dd */ r_esp -= 4; W32(r_esp, 0x40436fu); f_004059dd();
L_0040436f:; BB(0x0040436f);
    /* 0040436f: mov esp, ebp */ r_esp = r_ebp;
    /* 00404371: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404372: ret  */ FN_RET(0x0040431f); r_esp += 4; return;
}

void f_00404373(void) /* FUN_00404373 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404373);
    /* 00404373: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404374: mov ebp, esp */ r_ebp = r_esp;
    /* 00404376: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404377: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040437a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040437d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00404383: mov edx, dword ptr [ecx + 0x12ec0] */ r_edx = R32((u32)(r_ecx+0x12ec0u));
    /* 00404389: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 0040438c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040438f: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404393: jl 0x40439e */ if ((fS!=fO)) goto L_0040439e;
L_00404395:; BB(0x00404395);
    /* 00404395: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404398: cmp dword ptr [ecx + 0x68], 0xa */ {  u32 a = R32((u32)(r_ecx+0x68u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040439c: jle 0x4043a8 */ if ((fZ||fS!=fO)) goto L_004043a8;
L_0040439e:; BB(0x0040439e);
    /* 0040439e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004043a1: mov dword ptr [edx + 0x68], 3 */ W32((u32)(r_edx+0x68u), 0x3u);
L_004043a8:; BB(0x004043a8);
    /* 004043a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004043aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004043ab: ret  */ FN_RET(0x00404373); r_esp += 4; return;
}

void f_004043ac(void) /* FUN_004043ac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004043ac);
    /* 004043ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004043ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004043af: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004043b2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004043b5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004043bc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004043c3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004043c6: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004043c9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004043cc: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004043d0: ja 0x404531 */ if ((!fC&&!fZ)) goto L_00404531;
L_004043d6:; BB(0x004043d6);
    /* 004043d6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004043d9: jmp dword ptr [edx*4 + 0x404548] */ { u32 t = R32((u32)(r_edx*4+0x404548u)); switch (t) { case 0x4043e0u: goto L_004043e0; case 0x404404u: goto L_00404404; case 0x404428u: goto L_00404428; case 0x404451u: goto L_00404451; case 0x40445cu: goto L_0040445c; case 0x40447cu: goto L_0040447c; case 0x40449cu: goto L_0040449c; case 0x4044b9u: goto L_004044b9; case 0x4044d6u: goto L_004044d6; case 0x4044f3u: goto L_004044f3; case 0x404513u: goto L_00404513; default: UNSUP(0x004043d9, "jump table entry is not a known target"); } }
L_004043e0:; BB(0x004043e0);
    /* 004043e0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004043e3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004043e4: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 004043e9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004043e9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004043e9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004043eb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004043ee: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004043f1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004043f2: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 004043f7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004043f7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004043f7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004043f9: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004043fc: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004043ff: jmp 0x404531 */ goto L_00404531;
L_00404404:; BB(0x00404404);
    /* 00404404: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00404407: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00404408: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0040440d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040440d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040440d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040440f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00404412: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00404415: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00404416: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0040441b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040441b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040441b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040441d: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00404420: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00404423: jmp 0x404531 */ goto L_00404531;
L_00404428:; BB(0x00404428);
    /* 00404428: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040442b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040442c: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0040442f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00404431: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00404434: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00404437: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040443a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040443b: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040443d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040443f: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00404442: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00404444: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00404446: imul eax, eax, 0x19 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x19u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00404449: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040444c: jmp 0x404531 */ goto L_00404531;
L_00404451:; BB(0x00404451);
    /* 00404451: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00404454: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00404457: jmp 0x404531 */ goto L_00404531;
L_0040445c:; BB(0x0040445c);
    /* 0040445c: cmp dword ptr [ebp + 0xc], 0xbebc200 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xbebc200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404463: jl 0x40446e */ if ((fS!=fO)) goto L_0040446e;
L_00404465:; BB(0x00404465);
    /* 00404465: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 0040446c: jmp 0x404477 */ goto L_00404477;
L_0040446e:; BB(0x0040446e);
    /* 0040446e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00404471: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00404474: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00404477:; BB(0x00404477);
    /* 00404477: jmp 0x404531 */ goto L_00404531;
L_0040447c:; BB(0x0040447c);
    /* 0040447c: cmp dword ptr [ebp + 0xc], 0x5f5e100 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x5f5e100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404483: jl 0x40448e */ if ((fS!=fO)) goto L_0040448e;
L_00404485:; BB(0x00404485);
    /* 00404485: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 0040448c: jmp 0x404497 */ goto L_00404497;
L_0040448e:; BB(0x0040448e);
    /* 0040448e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00404491: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00404494: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00404497:; BB(0x00404497);
    /* 00404497: jmp 0x404531 */ goto L_00404531;
L_0040449c:; BB(0x0040449c);
    /* 0040449c: cmp dword ptr [ebp + 0xc], 0x2625a00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2625a00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004044a3: jl 0x4044ae */ if ((fS!=fO)) goto L_004044ae;
L_004044a5:; BB(0x004044a5);
    /* 004044a5: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 004044ac: jmp 0x4044b7 */ goto L_004044b7;
L_004044ae:; BB(0x004044ae);
    /* 004044ae: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004044b1: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004044b4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_004044b7:; BB(0x004044b7);
    /* 004044b7: jmp 0x404531 */ goto L_00404531;
L_004044b9:; BB(0x004044b9);
    /* 004044b9: cmp dword ptr [ebp + 0xc], 0x1312d00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1312d00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004044c0: jl 0x4044cb */ if ((fS!=fO)) goto L_004044cb;
L_004044c2:; BB(0x004044c2);
    /* 004044c2: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 004044c9: jmp 0x4044d4 */ goto L_004044d4;
L_004044cb:; BB(0x004044cb);
    /* 004044cb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004044ce: imul eax, eax, 0x32 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x32u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004044d1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004044d4:; BB(0x004044d4);
    /* 004044d4: jmp 0x404531 */ goto L_00404531;
L_004044d6:; BB(0x004044d6);
    /* 004044d6: cmp dword ptr [ebp + 0xc], 0x989680 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x989680u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004044dd: jl 0x4044e8 */ if ((fS!=fO)) goto L_004044e8;
L_004044df:; BB(0x004044df);
    /* 004044df: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 004044e6: jmp 0x4044f1 */ goto L_004044f1;
L_004044e8:; BB(0x004044e8);
    /* 004044e8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004044eb: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004044ee: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004044f1:; BB(0x004044f1);
    /* 004044f1: jmp 0x404531 */ goto L_00404531;
L_004044f3:; BB(0x004044f3);
    /* 004044f3: cmp dword ptr [ebp + 0xc], 0x1e8480 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1e8480u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004044fa: jl 0x404505 */ if ((fS!=fO)) goto L_00404505;
L_004044fc:; BB(0x004044fc);
    /* 004044fc: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00404503: jmp 0x404511 */ goto L_00404511;
L_00404505:; BB(0x00404505);
    /* 00404505: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00404508: imul edx, edx, 0x1f4 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1f4u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040450e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00404511:; BB(0x00404511);
    /* 00404511: jmp 0x404531 */ goto L_00404531;
L_00404513:; BB(0x00404513);
    /* 00404513: cmp dword ptr [ebp + 0xc], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040451a: jl 0x404525 */ if ((fS!=fO)) goto L_00404525;
L_0040451c:; BB(0x0040451c);
    /* 0040451c: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00404523: jmp 0x404531 */ goto L_00404531;
L_00404525:; BB(0x00404525);
    /* 00404525: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00404528: imul eax, eax, 0x3e8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3e8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040452e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00404531:; BB(0x00404531);
    /* 00404531: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00404534: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404537: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00404539: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040453c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0040453f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00404542: mov esp, ebp */ r_esp = r_ebp;
    /* 00404544: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404545: ret 8 */ FN_RET(0x004043ac); r_esp += 12; return;
}

void f_00404574(void) /* FUN_00404574 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404574);
    /* 00404574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404575: mov ebp, esp */ r_ebp = r_esp;
    /* 00404577: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040457a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040457d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00404584: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404587: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0040458a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040458d: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00404591: ja 0x4046c2 */ if ((!fC&&!fZ)) goto L_004046c2;
L_00404597:; BB(0x00404597);
    /* 00404597: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040459a: jmp dword ptr [edx*4 + 0x4046cb] */ { u32 t = R32((u32)(r_edx*4+0x4046cbu)); switch (t) { case 0x4045a1u: goto L_004045a1; case 0x4045d4u: goto L_004045d4; case 0x404607u: goto L_00404607; case 0x40463au: goto L_0040463a; case 0x404654u: goto L_00404654; case 0x404664u: goto L_00404664; case 0x404674u: goto L_00404674; case 0x404684u: goto L_00404684; case 0x404694u: goto L_00404694; case 0x4046a4u: goto L_004046a4; case 0x4046b4u: goto L_004046b4; default: UNSUP(0x0040459a, "jump table entry is not a known target"); } }
L_004045a1:; BB(0x004045a1);
    /* 004045a1: cmp dword ptr [ebp + 8], 0xc34f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xc34fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004045a8: jle 0x4045b3 */ if ((fZ||fS!=fO)) goto L_004045b3;
L_004045aa:; BB(0x004045aa);
    /* 004045aa: mov dword ptr [ebp - 4], 0xf423f */ W32((u32)(r_ebp+0xfffffffcu), 0xf423fu);
    /* 004045b1: jmp 0x4045cf */ goto L_004045cf;
L_004045b3:; BB(0x004045b3);
    /* 004045b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004045b6: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004045b9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004045bc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004045bf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004045c0: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004045c5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004045c5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004045c5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004045c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004045ca: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004045cc: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004045cf:; BB(0x004045cf);
    /* 004045cf: jmp 0x4046c2 */ goto L_004046c2;
L_004045d4:; BB(0x004045d4);
    /* 004045d4: cmp dword ptr [ebp + 8], 0x1869f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1869fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004045db: jle 0x4045e6 */ if ((fZ||fS!=fO)) goto L_004045e6;
L_004045dd:; BB(0x004045dd);
    /* 004045dd: mov dword ptr [ebp - 4], 0xf423f */ W32((u32)(r_ebp+0xfffffffcu), 0xf423fu);
    /* 004045e4: jmp 0x404602 */ goto L_00404602;
L_004045e6:; BB(0x004045e6);
    /* 004045e6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004045e9: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004045ec: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004045ef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004045f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004045f3: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004045f8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004045f8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004045f8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004045fa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004045fd: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004045ff: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00404602:; BB(0x00404602);
    /* 00404602: jmp 0x4046c2 */ goto L_004046c2;
L_00404607:; BB(0x00404607);
    /* 00404607: cmp dword ptr [ebp + 8], 0x3d08f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3d08fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040460e: jle 0x404619 */ if ((fZ||fS!=fO)) goto L_00404619;
L_00404610:; BB(0x00404610);
    /* 00404610: mov dword ptr [ebp - 4], 0xf423f */ W32((u32)(r_ebp+0xfffffffcu), 0xf423fu);
    /* 00404617: jmp 0x404635 */ goto L_00404635;
L_00404619:; BB(0x00404619);
    /* 00404619: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040461c: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040461f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00404622: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00404625: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00404626: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 0040462b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040462b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040462b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040462d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404630: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00404632: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00404635:; BB(0x00404635);
    /* 00404635: jmp 0x4046c2 */ goto L_004046c2;
L_0040463a:; BB(0x0040463a);
    /* 0040463a: cmp dword ptr [ebp + 8], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404641: jle 0x40464c */ if ((fZ||fS!=fO)) goto L_0040464c;
L_00404643:; BB(0x00404643);
    /* 00404643: mov dword ptr [ebp - 4], 0xf423f */ W32((u32)(r_ebp+0xfffffffcu), 0xf423fu);
    /* 0040464a: jmp 0x404652 */ goto L_00404652;
L_0040464c:; BB(0x0040464c);
    /* 0040464c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040464f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00404652:; BB(0x00404652);
    /* 00404652: jmp 0x4046c2 */ goto L_004046c2;
L_00404654:; BB(0x00404654);
    /* 00404654: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00404657: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00404658: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040465d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040465d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040465d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040465f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00404662: jmp 0x4046c2 */ goto L_004046c2;
L_00404664:; BB(0x00404664);
    /* 00404664: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00404667: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00404668: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0040466d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040466d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040466d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040466f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00404672: jmp 0x4046c2 */ goto L_004046c2;
L_00404674:; BB(0x00404674);
    /* 00404674: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00404677: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00404678: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 0040467d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040467d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040467d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040467f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00404682: jmp 0x4046c2 */ goto L_004046c2;
L_00404684:; BB(0x00404684);
    /* 00404684: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00404687: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00404688: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 0040468d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040468d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040468d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040468f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00404692: jmp 0x4046c2 */ goto L_004046c2;
L_00404694:; BB(0x00404694);
    /* 00404694: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00404697: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00404698: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0040469d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040469d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040469d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040469f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004046a2: jmp 0x4046c2 */ goto L_004046c2;
L_004046a4:; BB(0x004046a4);
    /* 004046a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004046a7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004046a8: mov ecx, 0x1f4 */ r_ecx = 0x1f4u;
    /* 004046ad: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004046ad, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004046ad, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004046af: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004046b2: jmp 0x4046c2 */ goto L_004046c2;
L_004046b4:; BB(0x004046b4);
    /* 004046b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004046b7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004046b8: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004046bd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004046bd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004046bd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004046bf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004046c2:; BB(0x004046c2);
    /* 004046c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004046c5: mov esp, ebp */ r_esp = r_ebp;
    /* 004046c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004046c8: ret 8 */ FN_RET(0x00404574); r_esp += 12; return;
}

void f_004046f7(void) /* FUN_004046f7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004046f7);
    /* 004046f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004046f8: mov ebp, esp */ r_ebp = r_esp;
    /* 004046fa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004046fd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00404700: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00404706: jmp 0x404714 */ goto L_00404714;
L_00404708:; BB(0x00404708);
    /* 00404708: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0040470c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00404710: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00404714:; BB(0x00404714);
    /* 00404714: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00404718: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040471b: jge 0x40473a */ if ((fS==fO)) goto L_0040473a;
L_0040471d:; BB(0x0040471d);
    /* 0040471d: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00404721: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404724: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00404728: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040472c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040472f: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00404733: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00404735: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x404738u); call_ind(t); }
    /* 00404738: jmp 0x404708 */ goto L_00404708;
L_0040473a:; BB(0x0040473a);
    /* 0040473a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040473d: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404741: jne 0x404754 */ if (!fZ) goto L_00404754;
L_00404743:; BB(0x00404743);
    /* 00404743: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404746: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00404749: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040474c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0040474f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00404751: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x404754u); call_ind(t); }
L_00404754:; BB(0x00404754);
    /* 00404754: mov esp, ebp */ r_esp = r_ebp;
    /* 00404756: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404757: ret  */ FN_RET(0x004046f7); r_esp += 4; return;
}

void f_00404758(void) /* FUN_00404758 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404758);
    /* 00404758: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404759: mov ebp, esp */ r_ebp = r_esp;
    /* 0040475b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040475e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00404761: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00404767: jmp 0x404775 */ goto L_00404775;
L_00404769:; BB(0x00404769);
    /* 00404769: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0040476d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00404771: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00404775:; BB(0x00404775);
    /* 00404775: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00404779: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040477c: jge 0x40479b */ if ((fS==fO)) goto L_0040479b;
L_0040477e:; BB(0x0040477e);
    /* 0040477e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00404782: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404785: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00404789: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040478d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404790: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00404794: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00404796: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x404799u); call_ind(t); }
    /* 00404799: jmp 0x404769 */ goto L_00404769;
L_0040479b:; BB(0x0040479b);
    /* 0040479b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040479d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040479e: ret  */ FN_RET(0x00404758); r_esp += 4; return;
}

void f_0040479f(void) /* FUN_0040479f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040479f);
    /* 0040479f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004047a0: mov ebp, esp */ r_ebp = r_esp;
    /* 004047a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004047a3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004047a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004047a9: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004047ac: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004047af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004047b2: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 004047b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004047b8: cmp dword ptr [eax + 0x6c], 0xf423f */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004047bf: jbe 0x4047e2 */ if ((fC||fZ)) goto L_004047e2;
L_004047c1:; BB(0x004047c1);
    /* 004047c1: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 004047c6: push 0x64c7e0 */ { u32 v = 0x64c7e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004047cb: push 0x64c7f0 */ { u32 v = 0x64c7f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004047d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004047d2: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x4047d7u); f_0060f9f3();
    /* 004047d7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004047da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004047dd: call 0x4053bd */ r_esp -= 4; W32(r_esp, 0x4047e2u); f_004053bd();
L_004047e2:; BB(0x004047e2);
    /* 004047e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004047e5: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 004047e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004047e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004047ec: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 004047ef: call 0x4062ff */ r_esp -= 4; W32(r_esp, 0x4047f4u); f_004062ff();
    /* 004047f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004047f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004047f7: ret 4 */ FN_RET(0x0040479f); r_esp += 8; return;
}

void f_004047fa(void) /* FUN_004047fa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004047fa);
    /* 004047fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004047fb: mov ebp, esp */ r_ebp = r_esp;
    /* 004047fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004047fe: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00404801: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404804: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00404807: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040480a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040480d: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 00404810: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404813: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00404817: jae 0x404823 */ if (!fC) goto L_00404823;
L_00404819:; BB(0x00404819);
    /* 00404819: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040481c: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
L_00404823:; BB(0x00404823);
    /* 00404823: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404826: cmp dword ptr [edx + 0x6c], 0 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040482a: jne 0x40484e */ if (!fZ) goto L_0040484e;
L_0040482c:; BB(0x0040482c);
    /* 0040482c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040482f: cmp dword ptr [eax + 0x70], 0 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404833: jne 0x40484e */ if (!fZ) goto L_0040484e;
L_00404835:; BB(0x00404835);
    /* 00404835: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404838: call 0x4049e1 */ r_esp -= 4; W32(r_esp, 0x40483du); f_004049e1();
    /* 0040483d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404840: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 00404843: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404846: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00404849: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040484b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x40484eu); call_ind(t); }
L_0040484e:; BB(0x0040484e);
    /* 0040484e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404851: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00404854: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404855: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404858: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 0040485b: call 0x4062ff */ r_esp -= 4; W32(r_esp, 0x404860u); f_004062ff();
    /* 00404860: mov esp, ebp */ r_esp = r_ebp;
    /* 00404862: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404863: ret 4 */ FN_RET(0x004047fa); r_esp += 8; return;
}

void f_00404866(void) /* FUN_00404866 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404866);
    /* 00404866: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404867: mov ebp, esp */ r_ebp = r_esp;
    /* 00404869: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040486a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040486d: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404871: jle 0x40487a */ if ((fZ||fS!=fO)) goto L_0040487a;
L_00404873:; BB(0x00404873);
    /* 00404873: mov dword ptr [ebp + 8], 3 */ W32((u32)(r_ebp+0x8u), 0x3u);
L_0040487a:; BB(0x0040487a);
    /* 0040487a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040487d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040487e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404881: call 0x4048fd */ r_esp -= 4; W32(r_esp, 0x404886u); f_004048fd();
    /* 00404886: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404889: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040488c: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 0040488f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404892: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00404895: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404896: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404899: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 0040489c: call 0x4062ff */ r_esp -= 4; W32(r_esp, 0x4048a1u); f_004062ff();
    /* 004048a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004048a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004048a4: ret 4 */ FN_RET(0x00404866); r_esp += 8; return;
}

void f_004048a7(void) /* FUN_004048a7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004048a7);
    /* 004048a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004048a8: mov ebp, esp */ r_ebp = r_esp;
    /* 004048aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004048ab: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004048ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004048b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004048b4: mov dword ptr [eax + 0x74], ecx */ W32((u32)(r_eax+0x74u), r_ecx);
    /* 004048b7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004048ba: cmp dword ptr [edx + 0x74], 0x1869f */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x1869fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004048c1: jle 0x4048cd */ if ((fZ||fS!=fO)) goto L_004048cd;
L_004048c3:; BB(0x004048c3);
    /* 004048c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004048c6: mov dword ptr [eax + 0x74], 0x1869f */ W32((u32)(r_eax+0x74u), 0x1869fu);
L_004048cd:; BB(0x004048cd);
    /* 004048cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004048d0: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 004048d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004048d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004048d7: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 004048da: call 0x4062ff */ r_esp -= 4; W32(r_esp, 0x4048dfu); f_004062ff();
    /* 004048df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004048e2: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004048e6: jle 0x4048f7 */ if ((fZ||fS!=fO)) goto L_004048f7;
L_004048e8:; BB(0x004048e8);
    /* 004048e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004048eb: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004048ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004048ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004048f2: call 0x40479f */ r_esp -= 4; W32(r_esp, 0x4048f7u); f_0040479f();
L_004048f7:; BB(0x004048f7);
    /* 004048f7: mov esp, ebp */ r_esp = r_ebp;
    /* 004048f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004048fa: ret 4 */ FN_RET(0x004048a7); r_esp += 8; return;
}

void f_004048fd(void) /* FUN_004048fd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004048fd);
    /* 004048fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004048fe: mov ebp, esp */ r_ebp = r_esp;
    /* 00404900: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404901: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00404904: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404908: je 0x404912 */ if (fZ) goto L_00404912;
L_0040490a:; BB(0x0040490a);
    /* 0040490a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040490d: call 0x404a54 */ r_esp -= 4; W32(r_esp, 0x404912u); f_00404a54();
L_00404912:; BB(0x00404912);
    /* 00404912: mov esp, ebp */ r_esp = r_ebp;
    /* 00404914: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404915: ret 4 */ FN_RET(0x004048fd); r_esp += 8; return;
}

void f_00404918(void) /* FUN_00404918 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404918);
    /* 00404918: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404919: mov ebp, esp */ r_ebp = r_esp;
    /* 0040491b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040491e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00404921: mov dword ptr [ebp - 0xc], 0x16094 */ W32((u32)(r_ebp+0xfffffff4u), 0x16094u);
    /* 00404928: mov dword ptr [ebp - 8], 0x16095 */ W32((u32)(r_ebp+0xfffffff8u), 0x16095u);
    /* 0040492f: mov dword ptr [ebp - 4], 0x16096 */ W32((u32)(r_ebp+0xfffffffcu), 0x16096u);
    /* 00404936: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00404939: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 0040493d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040493e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00404941: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 00404944: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x404949u); f_005ea0c3();
    /* 00404949: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040494c: mov ecx, 8 */ r_ecx = 0x8u;
    /* 00404951: sub ecx, dword ptr [eax + 0x78] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x78u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00404954: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00404957: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404958: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040495b: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0040495e: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x404963u); f_005ea1cf();
    /* 00404963: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00404966: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0040496b: sub ecx, dword ptr [eax + 0x78] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x78u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040496e: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00404971: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404972: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00404975: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 00404978: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40497du); f_005ea1cf();
    /* 0040497d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040497f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x404984u); f_0048ab58();
    /* 00404984: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404987: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040498a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040498e: je 0x4049a3 */ if (fZ) goto L_004049a3;
L_00404990:; BB(0x00404990);
    /* 00404990: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404992: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404994: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404996: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00404999: call 0x5d7c5c */ r_esp -= 4; W32(r_esp, 0x40499eu); f_005d7c5c();
    /* 0040499e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004049a1: jmp 0x4049aa */ goto L_004049aa;
L_004049a3:; BB(0x004049a3);
    /* 004049a3: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_004049aa:; BB(0x004049aa);
    /* 004049aa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004049ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004049ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004049b1: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 004049b4: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x4049b9u); f_005e4060();
    /* 004049b9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004049bc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004049bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004049c2: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004049c5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004049c7: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x4049cau); call_ind(t); }
    /* 004049ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004049cd: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 004049d0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004049d3: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004049d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004049d8: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4049dbu); call_ind(t); }
    /* 004049db: mov esp, ebp */ r_esp = r_ebp;
    /* 004049dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004049de: ret 4 */ FN_RET(0x00404918); r_esp += 8; return;
}

void f_004049e1(void) /* FUN_004049e1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004049e1);
    /* 004049e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004049e2: mov ebp, esp */ r_ebp = r_esp;
    /* 004049e4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004049e7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004049ea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004049ed: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004049f0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004049f3: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004049f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004049f8: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4049fbu); call_ind(t); }
    /* 004049fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004049fe: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00404a01: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404a04: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00404a07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404a09: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x404a0cu); call_ind(t); }
    /* 00404a0c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00404a0e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x404a13u); f_0048ab58();
    /* 00404a13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404a16: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00404a19: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404a1d: je 0x404a3a */ if (fZ) goto L_00404a3a;
L_00404a1f:; BB(0x00404a1f);
    /* 00404a1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404a21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404a24: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x404a29u); f_005d7698();
    /* 00404a29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404a2c: mov dword ptr [eax], 0x63335c */ W32((u32)(r_eax), 0x63335cu);
    /* 00404a32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404a35: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00404a38: jmp 0x404a41 */ goto L_00404a41;
L_00404a3a:; BB(0x00404a3a);
    /* 00404a3a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00404a41:; BB(0x00404a41);
    /* 00404a41: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404a44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00404a45: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404a48: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00404a4b: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x404a50u); f_005e4060();
    /* 00404a50: mov esp, ebp */ r_esp = r_ebp;
    /* 00404a52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404a53: ret  */ FN_RET(0x004049e1); r_esp += 4; return;
}

void f_00404a54(void) /* FUN_00404a54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404a54);
    /* 00404a54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404a55: mov ebp, esp */ r_ebp = r_esp;
    /* 00404a57: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404a5a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00404a5d: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00404a63: jmp 0x404a71 */ goto L_00404a71;
L_00404a65:; BB(0x00404a65);
    /* 00404a65: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00404a69: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00404a6d: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00404a71:; BB(0x00404a71);
    /* 00404a71: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00404a75: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404a78: jge 0x404aa9 */ if ((fS==fO)) goto L_00404aa9;
L_00404a7a:; BB(0x00404a7a);
    /* 00404a7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404a7c: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00404a80: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404a83: mov ecx, dword ptr [eax + edx*4 + 0x3c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 00404a87: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x404a8cu); f_005e4060();
    /* 00404a8c: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00404a90: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404a93: mov ecx, dword ptr [edx + ecx*4 + 0x3c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x3cu));
    /* 00404a97: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00404a9b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404a9e: mov eax, dword ptr [edx + eax*4 + 0x3c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x3cu));
    /* 00404aa2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404aa4: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x404aa7u); call_ind(t); }
    /* 00404aa7: jmp 0x404a65 */ goto L_00404a65;
L_00404aa9:; BB(0x00404aa9);
    /* 00404aa9: mov esp, ebp */ r_esp = r_ebp;
    /* 00404aab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404aac: ret  */ FN_RET(0x00404a54); r_esp += 4; return;
}

void f_00404aad(void) /* FUN_00404aad */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404aad);
    /* 00404aad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404aae: mov ebp, esp */ r_ebp = r_esp;
    /* 00404ab0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404ab1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00404ab4: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404ab8: jne 0x404ade */ if (!fZ) goto L_00404ade;
L_00404aba:; BB(0x00404aba);
    /* 00404aba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404abd: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00404ac0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404ac3: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00404ac6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404ac8: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x404acbu); call_ind(t); }
    /* 00404acb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404ace: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00404ad1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404ad4: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00404ad7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404ad9: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x404adcu); call_ind(t); }
    /* 00404adc: jmp 0x404b0f */ goto L_00404b0f;
L_00404ade:; BB(0x00404ade);
    /* 00404ade: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00404ae1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404ae2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404ae5: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00404ae8: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x404aedu); f_005ea1cf();
    /* 00404aed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404af0: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 00404af3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404af6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00404af9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00404afb: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x404afeu); call_ind(t); }
    /* 00404afe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404b01: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00404b04: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404b07: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00404b0a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404b0c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x404b0fu); call_ind(t); }
L_00404b0f:; BB(0x00404b0f);
    /* 00404b0f: mov esp, ebp */ r_esp = r_ebp;
    /* 00404b11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404b12: ret 4 */ FN_RET(0x00404aad); r_esp += 8; return;
}

void f_00404b15(void) /* FUN_00404b15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404b15);
    /* 00404b15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404b16: mov ebp, esp */ r_ebp = r_esp;
    /* 00404b18: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404b1b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00404b1e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b22: jne 0x404b57 */ if (!fZ) goto L_00404b57;
L_00404b24:; BB(0x00404b24);
    /* 00404b24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404b26: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404b29: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00404b2c: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x404b31u); f_005e4060();
    /* 00404b31: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404b34: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 00404b37: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404b3a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00404b3d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404b3f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x404b42u); call_ind(t); }
    /* 00404b42: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404b47: mov ecx, dword ptr [eax + 0x1cb0] */ r_ecx = R32((u32)(r_eax+0x1cb0u));
    /* 00404b4d: call 0x5e84af */ r_esp -= 4; W32(r_esp, 0x404b52u); f_005e84af();
    /* 00404b52: jmp 0x404bf2 */ goto L_00404bf2;
L_00404b57:; BB(0x00404b57);
    /* 00404b57: push 0x16097 */ { u32 v = 0x16097u; r_esp -= 4; W32(r_esp, v); }
    /* 00404b5c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404b5f: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 00404b62: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x404b67u); f_005ea0c3();
    /* 00404b67: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404b6a: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 00404b6d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404b70: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00404b73: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00404b75: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x404b78u); call_ind(t); }
    /* 00404b78: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00404b7a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x404b7fu); f_0048ab58();
    /* 00404b7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404b82: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00404b85: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b89: je 0x404ba8 */ if (fZ) goto L_00404ba8;
L_00404b8b:; BB(0x00404b8b);
    /* 00404b8b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00404b8d: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b91: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00404b94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404b95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404b97: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00404b9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00404b9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404b9e: call 0x406db0 */ r_esp -= 4; W32(r_esp, 0x404ba3u); f_00406db0();
    /* 00404ba3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00404ba6: jmp 0x404baf */ goto L_00404baf;
L_00404ba8:; BB(0x00404ba8);
    /* 00404ba8: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00404baf:; BB(0x00404baf);
    /* 00404baf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404bb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404bb3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404bb6: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 00404bb9: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x404bbeu); f_005e4060();
    /* 00404bbe: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bc2: jne 0x404bf2 */ if (!fZ) goto L_00404bf2;
L_00404bc4:; BB(0x00404bc4);
    /* 00404bc4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00404bc6: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404bcc: mov ecx, dword ptr [edx + 0x1cb0] */ r_ecx = R32((u32)(r_edx+0x1cb0u));
    /* 00404bd2: call 0x5e84f9 */ r_esp -= 4; W32(r_esp, 0x404bd7u); f_005e84f9();
    /* 00404bd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00404bd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404bdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00404bdd: push 0x19271 */ { u32 v = 0x19271u; r_esp -= 4; W32(r_esp, v); }
    /* 00404be2: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404be7: mov ecx, dword ptr [eax + 0x1cb0] */ r_ecx = R32((u32)(r_eax+0x1cb0u));
    /* 00404bed: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x404bf2u); f_005e8389();
L_00404bf2:; BB(0x00404bf2);
    /* 00404bf2: mov esp, ebp */ r_esp = r_ebp;
    /* 00404bf4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404bf5: ret 4 */ FN_RET(0x00404b15); r_esp += 8; return;
}

void f_00404bf8(void) /* FUN_00404bf8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404bf8);
    /* 00404bf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404bf9: mov ebp, esp */ r_ebp = r_esp;
    /* 00404bfb: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404bfe: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00404c01: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404c04: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00404c07: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x404c0cu); f_005ea279();
    /* 00404c0c: cmp eax, 0x1609b */ {  u32 a = r_eax; u32 b = 0x1609bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c11: je 0x404c65 */ if (fZ) goto L_00404c65;
L_00404c13:; BB(0x00404c13);
    /* 00404c13: push 0x1609b */ { u32 v = 0x1609bu; r_esp -= 4; W32(r_esp, v); }
    /* 00404c18: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404c1b: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00404c1e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x404c23u); f_005ea0c3();
    /* 00404c23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404c25: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404c28: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00404c2b: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x404c30u); f_005ea1cf();
    /* 00404c30: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00404c32: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404c37: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00404c3a: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404c40: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404c43: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404c45: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x404c48u); call_ind(t); }
    /* 00404c48: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00404c4a: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404c4f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00404c52: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404c58: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404c5b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404c5d: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x404c60u); call_ind(t); }
    /* 00404c60: jmp 0x404ce9 */ goto L_00404ce9;
L_00404c65:; BB(0x00404c65);
    /* 00404c65: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404c68: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00404c6b: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x404c70u); f_005ea257();
    /* 00404c70: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00404c73: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00404c76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404c7a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404c7d: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00404c80: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x404c85u); f_005ea1cf();
    /* 00404c85: cmp dword ptr [ebp - 4], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c89: je 0x404c9f */ if (fZ) goto L_00404c9f;
L_00404c8b:; BB(0x00404c8b);
    /* 00404c8b: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404c8f: jle 0x404cb9 */ if ((fZ||fS!=fO)) goto L_00404cb9;
L_00404c91:; BB(0x00404c91);
    /* 00404c91: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00404c93: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x404c98u); f_0060ee31();
    /* 00404c98: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404c9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c9d: jne 0x404cb9 */ if (!fZ) goto L_00404cb9;
L_00404c9f:; BB(0x00404c9f);
    /* 00404c9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404ca1: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404ca6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00404ca9: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404caf: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404cb2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404cb4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x404cb7u); call_ind(t); }
    /* 00404cb7: jmp 0x404cd1 */ goto L_00404cd1;
L_00404cb9:; BB(0x00404cb9);
    /* 00404cb9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00404cbb: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404cc0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00404cc3: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404cc9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404ccc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404cce: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x404cd1u); call_ind(t); }
L_00404cd1:; BB(0x00404cd1);
    /* 00404cd1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00404cd3: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404cd8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00404cdb: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404ce1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404ce4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404ce6: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x404ce9u); call_ind(t); }
L_00404ce9:; BB(0x00404ce9);
    /* 00404ce9: mov esp, ebp */ r_esp = r_ebp;
    /* 00404ceb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404cec: ret  */ FN_RET(0x00404bf8); r_esp += 4; return;
}

void f_00404ced(void) /* FUN_00404ced */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404ced);
    /* 00404ced: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404cee: mov ebp, esp */ r_ebp = r_esp;
    /* 00404cf0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404cf3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00404cf6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404cf9: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00404cfc: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x404d01u); f_005ea279();
    /* 00404d01: cmp eax, 0x1609b */ {  u32 a = r_eax; u32 b = 0x1609bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404d06: je 0x404d5a */ if (fZ) goto L_00404d5a;
L_00404d08:; BB(0x00404d08);
    /* 00404d08: push 0x1609b */ { u32 v = 0x1609bu; r_esp -= 4; W32(r_esp, v); }
    /* 00404d0d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404d10: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00404d13: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x404d18u); f_005ea0c3();
    /* 00404d18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404d1a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404d1d: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00404d20: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x404d25u); f_005ea1cf();
    /* 00404d25: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00404d27: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404d2c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00404d2f: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404d35: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404d38: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404d3a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x404d3du); call_ind(t); }
    /* 00404d3d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00404d3f: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404d44: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00404d47: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404d4d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404d50: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404d52: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x404d55u); call_ind(t); }
    /* 00404d55: jmp 0x404df3 */ goto L_00404df3;
L_00404d5a:; BB(0x00404d5a);
    /* 00404d5a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404d5d: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00404d60: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x404d65u); f_005ea257();
    /* 00404d65: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00404d68: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00404d6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404d6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404d6f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404d72: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00404d75: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x404d7au); f_005ea1cf();
    /* 00404d7a: cmp dword ptr [ebp - 4], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404d7e: jne 0x404d98 */ if (!fZ) goto L_00404d98;
L_00404d80:; BB(0x00404d80);
    /* 00404d80: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00404d82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404d84: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00404d86: push 0x1926e */ { u32 v = 0x1926eu; r_esp -= 4; W32(r_esp, v); }
    /* 00404d8b: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404d90: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00404d93: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x404d98u); f_005e8389();
L_00404d98:; BB(0x00404d98);
    /* 00404d98: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404d9b: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00404d9e: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x404da3u); f_005ea2f8();
    /* 00404da3: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404da6: jne 0x404dc2 */ if (!fZ) goto L_00404dc2;
L_00404da8:; BB(0x00404da8);
    /* 00404da8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404daa: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404db0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00404db3: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404db8: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00404dbb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00404dbd: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x404dc0u); call_ind(t); }
    /* 00404dc0: jmp 0x404ddb */ goto L_00404ddb;
L_00404dc2:; BB(0x00404dc2);
    /* 00404dc2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00404dc4: mov ecx, dword ptr [0x6f532c] */ r_ecx = R32((u32)(0x6f532cu));
    /* 00404dca: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00404dcd: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404dd3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404dd6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404dd8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x404ddbu); call_ind(t); }
L_00404ddb:; BB(0x00404ddb);
    /* 00404ddb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00404ddd: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404de2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00404de5: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404deb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404dee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404df0: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x404df3u); call_ind(t); }
L_00404df3:; BB(0x00404df3);
    /* 00404df3: mov esp, ebp */ r_esp = r_ebp;
    /* 00404df5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404df6: ret  */ FN_RET(0x00404ced); r_esp += 4; return;
}

void f_00404df7(void) /* FUN_00404df7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404df7);
    /* 00404df7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404df8: mov ebp, esp */ r_ebp = r_esp;
    /* 00404dfa: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404dfd: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00404e00: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404e03: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00404e06: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x404e0bu); f_005ea279();
    /* 00404e0b: cmp eax, 0x1609d */ {  u32 a = r_eax; u32 b = 0x1609du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404e10: je 0x404edd */ if (fZ) goto L_00404edd;
L_00404e16:; BB(0x00404e16);
    /* 00404e16: push 0x1609d */ { u32 v = 0x1609du; r_esp -= 4; W32(r_esp, v); }
    /* 00404e1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404e1e: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00404e21: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x404e26u); f_005ea0c3();
    /* 00404e26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404e28: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404e2b: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00404e2e: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x404e33u); f_005ea1cf();
    /* 00404e33: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404e36: cmp dword ptr [eax + 0x78], 6 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404e3a: jne 0x404e4e */ if (!fZ) goto L_00404e4e;
L_00404e3c:; BB(0x00404e3c);
    /* 00404e3c: push 0x1609f */ { u32 v = 0x1609fu; r_esp -= 4; W32(r_esp, v); }
    /* 00404e41: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404e44: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00404e47: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x404e4cu); f_005ea0c3();
    /* 00404e4c: jmp 0x404e5e */ goto L_00404e5e;
L_00404e4e:; BB(0x00404e4e);
    /* 00404e4e: push 0x160a0 */ { u32 v = 0x160a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404e53: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404e56: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 00404e59: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x404e5eu); f_005ea0c3();
L_00404e5e:; BB(0x00404e5e);
    /* 00404e5e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00404e60: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x404e65u); f_0048ab58();
    /* 00404e65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404e68: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00404e6b: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404e6f: je 0x404e80 */ if (fZ) goto L_00404e80;
L_00404e71:; BB(0x00404e71);
    /* 00404e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404e73: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00404e76: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x404e7bu); f_005d7698();
    /* 00404e7b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00404e7e: jmp 0x404e87 */ goto L_00404e87;
L_00404e80:; BB(0x00404e80);
    /* 00404e80: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00404e87:; BB(0x00404e87);
    /* 00404e87: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00404e8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404e8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404e8e: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00404e91: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x404e96u); f_005e4060();
    /* 00404e96: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404e99: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 00404e9c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404e9f: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00404ea2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00404ea4: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x404ea7u); call_ind(t); }
    /* 00404ea7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00404ea9: mov ecx, dword ptr [0x6f532c] */ r_ecx = R32((u32)(0x6f532cu));
    /* 00404eaf: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00404eb2: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404eb8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404ebb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404ebd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x404ec0u); call_ind(t); }
    /* 00404ec0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00404ec2: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404ec7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00404eca: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404ed0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404ed3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404ed5: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x404ed8u); call_ind(t); }
    /* 00404ed8: jmp 0x404fa0 */ goto L_00404fa0;
L_00404edd:; BB(0x00404edd);
    /* 00404edd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404ee0: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00404ee3: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x404ee8u); f_005ea257();
    /* 00404ee8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00404eeb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00404eee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404ef1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404ef2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404ef5: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00404ef8: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x404efdu); f_005ea1cf();
    /* 00404efd: cmp dword ptr [ebp - 4], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404f01: jne 0x404f1b */ if (!fZ) goto L_00404f1b;
L_00404f03:; BB(0x00404f03);
    /* 00404f03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00404f05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404f07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00404f09: push 0x1926e */ { u32 v = 0x1926eu; r_esp -= 4; W32(r_esp, v); }
    /* 00404f0e: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404f13: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00404f16: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x404f1bu); f_005e8389();
L_00404f1b:; BB(0x00404f1b);
    /* 00404f1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404f1e: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00404f21: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x404f26u); f_005ea2f8();
    /* 00404f26: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404f29: jne 0x404f70 */ if (!fZ) goto L_00404f70;
L_00404f2b:; BB(0x00404f2b);
    /* 00404f2b: push 0x1609c */ { u32 v = 0x1609cu; r_esp -= 4; W32(r_esp, v); }
    /* 00404f30: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404f33: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00404f36: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x404f3bu); f_005ea0c3();
    /* 00404f3b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00404f3d: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404f42: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00404f45: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404f4b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404f4e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404f50: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x404f53u); call_ind(t); }
    /* 00404f53: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 00404f58: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404f5d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00404f60: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404f66: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404f69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404f6b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x404f6eu); call_ind(t); }
    /* 00404f6e: jmp 0x404fa0 */ goto L_00404fa0;
L_00404f70:; BB(0x00404f70);
    /* 00404f70: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00404f72: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404f77: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00404f7a: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404f80: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404f83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404f85: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x404f88u); call_ind(t); }
    /* 00404f88: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00404f8a: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00404f8f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00404f92: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00404f98: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404f9b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404f9d: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x404fa0u); call_ind(t); }
L_00404fa0:; BB(0x00404fa0);
    /* 00404fa0: mov esp, ebp */ r_esp = r_ebp;
    /* 00404fa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404fa3: ret  */ FN_RET(0x00404df7); r_esp += 4; return;
}

void f_00404fa4(void) /* FUN_00404fa4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404fa4);
    /* 00404fa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404fa5: mov ebp, esp */ r_ebp = r_esp;
    /* 00404fa7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404faa: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00404fad: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00404fb4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00404fbb: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00404fbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404fbf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404fc2: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00404fc5: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00404fc8: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x404fcdu); f_004267fb();
    /* 00404fcd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404fd0: cmp dword ptr [eax + 0x68], 2 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404fd4: jle 0x404fea */ if ((fZ||fS!=fO)) goto L_00404fea;
L_00404fd6:; BB(0x00404fd6);
    /* 00404fd6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404fd9: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00404fdc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00404fdd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404fe0: call 0x405044 */ r_esp -= 4; W32(r_esp, 0x404fe5u); f_00405044();
    /* 00404fe5: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404fe8: jl 0x40500d */ if ((fS!=fO)) goto L_0040500d;
L_00404fea:; BB(0x00404fea);
    /* 00404fea: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404fed: cmp dword ptr [eax + 0x68], 2 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404ff1: jg 0x405040 */ if ((!fZ&&fS==fO)) goto L_00405040;
L_00404ff3:; BB(0x00404ff3);
    /* 00404ff3: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404ff7: jne 0x405040 */ if (!fZ) goto L_00405040;
L_00404ff9:; BB(0x00404ff9);
    /* 00404ff9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404ffc: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00404fff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405000: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405003: call 0x4050d1 */ r_esp -= 4; W32(r_esp, 0x405008u); f_004050d1();
    /* 00405008: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040500b: jge 0x405040 */ if ((fS==fO)) goto L_00405040;
L_0040500d:; BB(0x0040500d);
    /* 0040500d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405010: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405014: jne 0x405040 */ if (!fZ) goto L_00405040;
L_00405016:; BB(0x00405016);
    /* 00405016: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405019: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040501d: jne 0x405040 */ if (!fZ) goto L_00405040;
L_0040501f:; BB(0x0040501f);
    /* 0040501f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405022: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00405025: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040502c: jne 0x405040 */ if (!fZ) goto L_00405040;
L_0040502e:; BB(0x0040502e);
    /* 0040502e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405031: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00405034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405035: mov ecx, dword ptr [0x6f532c] */ r_ecx = R32((u32)(0x6f532cu));
    /* 0040503b: call 0x449908 */ r_esp -= 4; W32(r_esp, 0x405040u); f_00449908();
L_00405040:; BB(0x00405040);
    /* 00405040: mov esp, ebp */ r_esp = r_ebp;
    /* 00405042: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405043: ret  */ FN_RET(0x00404fa4); r_esp += 4; return;
}

void f_00405044(void) /* FUN_00405044 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405044);
    /* 00405044: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405045: mov ebp, esp */ r_ebp = r_esp;
    /* 00405047: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040504a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040504d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00405050: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00405053: cmp dword ptr [ebp - 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00405057: ja 0x40509d */ if ((!fC&&!fZ)) goto L_0040509d;
L_00405059:; BB(0x00405059);
    /* 00405059: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040505c: jmp dword ptr [ecx*4 + 0x4050a5] */ { u32 t = R32((u32)(r_ecx*4+0x4050a5u)); switch (t) { case 0x405063u: goto L_00405063; case 0x40509du: goto L_0040509d; case 0x405065u: goto L_00405065; case 0x40506cu: goto L_0040506c; case 0x405073u: goto L_00405073; case 0x40507au: goto L_0040507a; case 0x405081u: goto L_00405081; case 0x405088u: goto L_00405088; case 0x40508fu: goto L_0040508f; case 0x405096u: goto L_00405096; default: UNSUP(0x0040505c, "jump table entry is not a known target"); } }
L_00405063:; BB(0x00405063);
    /* 00405063: jmp 0x40509d */ goto L_0040509d;
L_00405065:; BB(0x00405065);
    /* 00405065: mov eax, 1 */ r_eax = 0x1u;
    /* 0040506a: jmp 0x40509f */ goto L_0040509f;
L_0040506c:; BB(0x0040506c);
    /* 0040506c: mov eax, 5 */ r_eax = 0x5u;
    /* 00405071: jmp 0x40509f */ goto L_0040509f;
L_00405073:; BB(0x00405073);
    /* 00405073: mov eax, 0xa */ r_eax = 0xau;
    /* 00405078: jmp 0x40509f */ goto L_0040509f;
L_0040507a:; BB(0x0040507a);
    /* 0040507a: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0040507f: jmp 0x40509f */ goto L_0040509f;
L_00405081:; BB(0x00405081);
    /* 00405081: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00405086: jmp 0x40509f */ goto L_0040509f;
L_00405088:; BB(0x00405088);
    /* 00405088: mov eax, 0x64 */ r_eax = 0x64u;
    /* 0040508d: jmp 0x40509f */ goto L_0040509f;
L_0040508f:; BB(0x0040508f);
    /* 0040508f: mov eax, 0x1f4 */ r_eax = 0x1f4u;
    /* 00405094: jmp 0x40509f */ goto L_0040509f;
L_00405096:; BB(0x00405096);
    /* 00405096: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 0040509b: jmp 0x40509f */ goto L_0040509f;
L_0040509d:; BB(0x0040509d);
    /* 0040509d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040509f:; BB(0x0040509f);
    /* 0040509f: mov esp, ebp */ r_esp = r_ebp;
    /* 004050a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004050a2: ret 4 */ FN_RET(0x00405044); r_esp += 8; return;
}

void f_004050d1(void) /* FUN_004050d1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004050d1);
    /* 004050d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004050d2: mov ebp, esp */ r_ebp = r_esp;
    /* 004050d4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004050d7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004050da: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004050dd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004050e0: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004050e4: je 0x4050f4 */ if (fZ) goto L_004050f4;
L_004050e6:; BB(0x004050e6);
    /* 004050e6: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004050ea: je 0x4050fb */ if (fZ) goto L_004050fb;
L_004050ec:; BB(0x004050ec);
    /* 004050ec: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004050f0: je 0x405102 */ if (fZ) goto L_00405102;
L_004050f2:; BB(0x004050f2);
    /* 004050f2: jmp 0x405109 */ goto L_00405109;
L_004050f4:; BB(0x004050f4);
    /* 004050f4: mov eax, 5 */ r_eax = 0x5u;
    /* 004050f9: jmp 0x40510b */ goto L_0040510b;
L_004050fb:; BB(0x004050fb);
    /* 004050fb: mov eax, 0xa */ r_eax = 0xau;
    /* 00405100: jmp 0x40510b */ goto L_0040510b;
L_00405102:; BB(0x00405102);
    /* 00405102: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00405107: jmp 0x40510b */ goto L_0040510b;
L_00405109:; BB(0x00405109);
    /* 00405109: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040510b:; BB(0x0040510b);
    /* 0040510b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040510d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040510e: ret 4 */ FN_RET(0x004050d1); r_esp += 8; return;
}

void f_00405111(void) /* FUN_00405111 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405111);
    /* 00405111: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405112: mov ebp, esp */ r_ebp = r_esp;
    /* 00405114: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405117: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040511a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040511d: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00405120: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x405125u); f_005ea279();
    /* 00405125: cmp eax, 0x1609e */ {  u32 a = r_eax; u32 b = 0x1609eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040512a: je 0x40517e */ if (fZ) goto L_0040517e;
L_0040512c:; BB(0x0040512c);
    /* 0040512c: push 0x1609e */ { u32 v = 0x1609eu; r_esp -= 4; W32(r_esp, v); }
    /* 00405131: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405134: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00405137: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40513cu); f_005ea0c3();
    /* 0040513c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040513e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405141: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00405144: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x405149u); f_005ea1cf();
    /* 00405149: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040514b: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00405150: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00405153: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405159: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040515c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040515e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x405161u); call_ind(t); }
    /* 00405161: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00405163: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00405168: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040516b: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405171: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00405174: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405176: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x405179u); call_ind(t); }
    /* 00405179: jmp 0x405238 */ goto L_00405238;
L_0040517e:; BB(0x0040517e);
    /* 0040517e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405181: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00405184: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x405189u); f_005ea257();
    /* 00405189: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040518c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040518f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405192: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405193: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405196: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00405199: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40519eu); f_005ea1cf();
    /* 0040519e: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004051a2: jne 0x4051bc */ if (!fZ) goto L_004051bc;
L_004051a4:; BB(0x004051a4);
    /* 004051a4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004051a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004051a8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004051aa: push 0x19270 */ { u32 v = 0x19270u; r_esp -= 4; W32(r_esp, v); }
    /* 004051af: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 004051b4: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 004051b7: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4051bcu); f_005e8389();
L_004051bc:; BB(0x004051bc);
    /* 004051bc: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004051c0: jne 0x4051de */ if (!fZ) goto L_004051de;
L_004051c2:; BB(0x004051c2);
    /* 004051c2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004051c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004051c6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004051c8: push 0x1926e */ { u32 v = 0x1926eu; r_esp -= 4; W32(r_esp, v); }
    /* 004051cd: mov ecx, dword ptr [0x6f532c] */ r_ecx = R32((u32)(0x6f532cu));
    /* 004051d3: mov ecx, dword ptr [ecx + 0x1cb4] */ r_ecx = R32((u32)(r_ecx+0x1cb4u));
    /* 004051d9: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4051deu); f_005e8389();
L_004051de:; BB(0x004051de);
    /* 004051de: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004051e1: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 004051e4: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x4051e9u); f_005ea2f8();
    /* 004051e9: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004051ec: jne 0x405208 */ if (!fZ) goto L_00405208;
L_004051ee:; BB(0x004051ee);
    /* 004051ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004051f0: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 004051f5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004051f8: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 004051fe: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00405201: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405203: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x405206u); call_ind(t); }
    /* 00405206: jmp 0x405220 */ goto L_00405220;
L_00405208:; BB(0x00405208);
    /* 00405208: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040520a: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 0040520f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00405212: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405218: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040521b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040521d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x405220u); call_ind(t); }
L_00405220:; BB(0x00405220);
    /* 00405220: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00405222: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00405227: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040522a: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405230: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00405233: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405235: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x405238u); call_ind(t); }
L_00405238:; BB(0x00405238);
    /* 00405238: mov esp, ebp */ r_esp = r_ebp;
    /* 0040523a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040523b: ret  */ FN_RET(0x00405111); r_esp += 4; return;
}

void f_0040523c(void) /* FUN_0040523c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040523c);
    /* 0040523c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040523d: mov ebp, esp */ r_ebp = r_esp;
    /* 0040523f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405240: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405243: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405246: cmp dword ptr [eax + 0x70], 3 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040524a: jne 0x40524e */ if (!fZ) goto L_0040524e;
L_0040524c:; BB(0x0040524c);
    /* 0040524c: jmp 0x405299 */ goto L_00405299;
L_0040524e:; BB(0x0040524e);
    /* 0040524e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405251: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405255: je 0x40528f */ if (fZ) goto L_0040528f;
L_00405257:; BB(0x00405257);
    /* 00405257: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040525a: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0040525d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405260: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00405263: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00405265: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x405268u); call_ind(t); }
    /* 00405268: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040526b: cmp dword ptr [ecx + 0x70], 3 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040526f: jge 0x40528d */ if ((fS==fO)) goto L_0040528d;
L_00405271:; BB(0x00405271);
    /* 00405271: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405274: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00405277: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040527a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040527b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040527e: call 0x404866 */ r_esp -= 4; W32(r_esp, 0x405283u); f_00404866();
    /* 00405283: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00405285: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405288: call 0x4047fa */ r_esp -= 4; W32(r_esp, 0x40528du); f_004047fa();
L_0040528d:; BB(0x0040528d);
    /* 0040528d: jmp 0x405299 */ goto L_00405299;
L_0040528f:; BB(0x0040528f);
    /* 0040528f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00405291: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405294: call 0x405488 */ r_esp -= 4; W32(r_esp, 0x405299u); f_00405488();
L_00405299:; BB(0x00405299);
    /* 00405299: mov esp, ebp */ r_esp = r_ebp;
    /* 0040529b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040529c: ret  */ FN_RET(0x0040523c); r_esp += 4; return;
}

void f_0040529d(void) /* FUN_0040529d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040529d);
    /* 0040529d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040529e: mov ebp, esp */ r_ebp = r_esp;
    /* 004052a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004052a1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004052a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004052a7: cmp dword ptr [eax + 0x70], 3 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004052ab: jne 0x4052b2 */ if (!fZ) goto L_004052b2;
L_004052ad:; BB(0x004052ad);
    /* 004052ad: jmp 0x405333 */ goto L_00405333;
L_004052b2:; BB(0x004052b2);
    /* 004052b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004052b5: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004052b9: je 0x40531f */ if (fZ) goto L_0040531f;
L_004052bb:; BB(0x004052bb);
    /* 004052bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004052be: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004052c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004052c4: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004052c7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004052c9: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x4052ccu); call_ind(t); }
    /* 004052cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004052cf: mov edx, 3 */ r_edx = 0x3u;
    /* 004052d4: sub edx, dword ptr [ecx + 0x70] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x70u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004052d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004052da: cmp dword ptr [eax + 0x6c], edx */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004052dd: jbe 0x4052ff */ if ((fC||fZ)) goto L_004052ff;
L_004052df:; BB(0x004052df);
    /* 004052df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004052e2: mov edx, 3 */ r_edx = 0x3u;
    /* 004052e7: sub edx, dword ptr [ecx + 0x70] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x70u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004052ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004052eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004052ee: call 0x4047fa */ r_esp -= 4; W32(r_esp, 0x4052f3u); f_004047fa();
    /* 004052f3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004052f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004052f8: call 0x404866 */ r_esp -= 4; W32(r_esp, 0x4052fdu); f_00404866();
    /* 004052fd: jmp 0x40531d */ goto L_0040531d;
L_004052ff:; BB(0x004052ff);
    /* 004052ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405302: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00405305: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405306: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405309: call 0x404866 */ r_esp -= 4; W32(r_esp, 0x40530eu); f_00404866();
    /* 0040530e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405311: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00405314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405315: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405318: call 0x4047fa */ r_esp -= 4; W32(r_esp, 0x40531du); f_004047fa();
L_0040531d:; BB(0x0040531d);
    /* 0040531d: jmp 0x405333 */ goto L_00405333;
L_0040531f:; BB(0x0040531f);
    /* 0040531f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405322: mov edx, 3 */ r_edx = 0x3u;
    /* 00405327: sub edx, dword ptr [ecx + 0x70] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x70u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040532a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040532b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040532e: call 0x405488 */ r_esp -= 4; W32(r_esp, 0x405333u); f_00405488();
L_00405333:; BB(0x00405333);
    /* 00405333: mov esp, ebp */ r_esp = r_ebp;
    /* 00405335: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405336: ret  */ FN_RET(0x0040529d); r_esp += 4; return;
}

void f_00405337(void) /* FUN_00405337 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405337);
    /* 00405337: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405338: mov ebp, esp */ r_ebp = r_esp;
    /* 0040533a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040533b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040533e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405341: call 0x40529d */ r_esp -= 4; W32(r_esp, 0x405346u); f_0040529d();
    /* 00405346: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405349: call 0x405352 */ r_esp -= 4; W32(r_esp, 0x40534eu); f_00405352();
    /* 0040534e: mov esp, ebp */ r_esp = r_ebp;
    /* 00405350: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405351: ret  */ FN_RET(0x00405337); r_esp += 4; return;
}

void f_00405352(void) /* FUN_00405352 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405352);
    /* 00405352: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405353: mov ebp, esp */ r_ebp = r_esp;
    /* 00405355: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405356: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405359: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040535c: cmp dword ptr [eax + 0x70], 0 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405360: je 0x4053b9 */ if (fZ) goto L_004053b9;
L_00405362:; BB(0x00405362);
    /* 00405362: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405365: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 0040536c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040536f: call 0x404758 */ r_esp -= 4; W32(r_esp, 0x405374u); f_00404758();
    /* 00405374: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405376: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405379: call 0x4048a7 */ r_esp -= 4; W32(r_esp, 0x40537eu); f_004048a7();
    /* 0040537e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405380: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405383: call 0x404b15 */ r_esp -= 4; W32(r_esp, 0x405388u); f_00404b15();
    /* 00405388: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040538a: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405390: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00405393: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00405398: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0040539b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040539d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4053a0u); call_ind(t); }
    /* 004053a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004053a2: mov ecx, dword ptr [0x6f532c] */ r_ecx = R32((u32)(0x6f532cu));
    /* 004053a8: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004053ab: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 004053b1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004053b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004053b6: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4053b9u); call_ind(t); }
L_004053b9:; BB(0x004053b9);
    /* 004053b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004053bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004053bc: ret  */ FN_RET(0x00405352); r_esp += 4; return;
}

void f_004053bd(void) /* FUN_004053bd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004053bd);
    /* 004053bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004053be: mov ebp, esp */ r_ebp = r_esp;
    /* 004053c0: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004053c3: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004053c6: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004053c9: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004053cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004053cd: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004053d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004053d1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004053d4: call 0x4043ac */ r_esp -= 4; W32(r_esp, 0x4053d9u); f_004043ac();
    /* 004053d9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004053db: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004053de: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004053e1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004053e4: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004053e7: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004053ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004053eb: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 004053ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004053ef: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004053f2: call 0x4043ac */ r_esp -= 4; W32(r_esp, 0x4053f7u); f_004043ac();
    /* 004053f7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004053f9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004053fc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004053ff: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00405402: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405404: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00405407: call 0x404866 */ r_esp -= 4; W32(r_esp, 0x40540cu); f_00404866();
    /* 0040540c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040540e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00405411: call 0x4048a7 */ r_esp -= 4; W32(r_esp, 0x405416u); f_004048a7();
    /* 00405416: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00405419: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0040541c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040541d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00405420: call 0x4047fa */ r_esp -= 4; W32(r_esp, 0x405425u); f_004047fa();
    /* 00405425: cmp dword ptr [ebp - 0x18], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040542c: jl 0x40543c */ if ((fS!=fO)) goto L_0040543c;
L_0040542e:; BB(0x0040542e);
    /* 0040542e: mov dword ptr [ebp - 0x18], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe8u), 0x3b9aca00u);
    /* 00405435: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0040543c:; BB(0x0040543c);
    /* 0040543c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040543f: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00405442: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00405445: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00405448: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040544a: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x40544du); call_ind(t); }
    /* 0040544d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00405450: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00405453: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00405456: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00405459: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040545b: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x40545eu); call_ind(t); }
    /* 0040545e: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00405461: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405462: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00405465: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405466: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00405469: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040546a: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x40546fu); f_00429a59();
    /* 0040546f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405472: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00405475: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405476: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00405479: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0040547c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0040547f: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x405484u); f_004267ae();
    /* 00405484: mov esp, ebp */ r_esp = r_ebp;
    /* 00405486: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405487: ret  */ FN_RET(0x004053bd); r_esp += 4; return;
}

void f_00405488(void) /* FUN_00405488 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405488);
    /* 00405488: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405489: mov ebp, esp */ r_ebp = r_esp;
    /* 0040548b: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040548e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00405491: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00405494: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405495: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00405498: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405499: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040549c: call 0x4043ac */ r_esp -= 4; W32(r_esp, 0x4054a1u); f_004043ac();
    /* 004054a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004054a3: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004054a6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004054a9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004054ac: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004054af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004054b0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004054b3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004054b6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004054b9: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x4054beu); f_004267fb();
    /* 004054be: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 004054c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004054c2: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 004054c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004054c6: call 0x600940 */ r_esp -= 4; W32(r_esp, 0x4054cbu); f_00600940();
    /* 004054cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004054ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004054d0: je 0x405500 */ if (fZ) goto L_00405500;
L_004054d2:; BB(0x004054d2);
    /* 004054d2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004054d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004054d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004054d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004054da: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004054dd: call 0x404574 */ r_esp -= 4; W32(r_esp, 0x4054e2u); f_00404574();
    /* 004054e2: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 004054e5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004054e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004054e9: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 004054ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004054ed: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004054f0: call 0x4043ac */ r_esp -= 4; W32(r_esp, 0x4054f5u); f_004043ac();
    /* 004054f5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004054f7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004054fa: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004054fd: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00405500:; BB(0x00405500);
    /* 00405500: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00405503: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00405506: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00405509: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040550a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040550d: call 0x404866 */ r_esp -= 4; W32(r_esp, 0x405512u); f_00404866();
    /* 00405512: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00405515: cmp dword ptr [edx + 0x70], 0 */ {  u32 a = R32((u32)(r_edx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405519: je 0x40553d */ if (fZ) goto L_0040553d;
L_0040551b:; BB(0x0040551b);
    /* 0040551b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040551e: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00405521: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00405524: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00405527: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405529: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x40552cu); call_ind(t); }
    /* 0040552c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040552f: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00405532: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00405535: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00405538: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040553a: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x40553du); call_ind(t); }
L_0040553d:; BB(0x0040553d);
    /* 0040553d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405540: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00405543: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00405546: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405549: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040554c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040554f: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00405552: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405553: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00405556: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00405559: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0040555c: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x405561u); f_004267ae();
    /* 00405561: mov esp, ebp */ r_esp = r_ebp;
    /* 00405563: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405564: ret 4 */ FN_RET(0x00405488); r_esp += 8; return;
}

void f_00405567(void) /* FUN_00405567 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405567);
    /* 00405567: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405568: mov ebp, esp */ r_ebp = r_esp;
    /* 0040556a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040556d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00405570: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00405576: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0040557d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00405584: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405589: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x40558eu); f_0060ee31();
    /* 0040558e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405591: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00405594: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0040559a: jmp 0x4055a8 */ goto L_004055a8;
L_0040559c:; BB(0x0040559c);
    /* 0040559c: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 004055a0: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004055a4: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_004055a8:; BB(0x004055a8);
    /* 004055a8: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004055ac: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004055af: jge 0x4055e1 */ if ((fS==fO)) goto L_004055e1;
L_004055b1:; BB(0x004055b1);
    /* 004055b1: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004055b5: fld qword ptr [0x633370] */ FPUSH(R_F64((u32)(0x633370u)));
    /* 004055bb: fmul qword ptr [edx*8 + 0x64c780] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x64c780u));
    /* 004055c2: fadd qword ptr [ebp - 0x14] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffecu));
    /* 004055c5: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 004055c8: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004055cb: fcomp qword ptr [ebp - 0x14] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffecu))); FPOP();
    /* 004055ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004055d0: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004055d3: je 0x4055df */ if (fZ) goto L_004055df;
L_004055d5:; BB(0x004055d5);
    /* 004055d5: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 004055d9: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004055dd: jmp 0x4055e1 */ goto L_004055e1;
L_004055df:; BB(0x004055df);
    /* 004055df: jmp 0x40559c */ goto L_0040559c;
L_004055e1:; BB(0x004055e1);
    /* 004055e1: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004055e5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004055e8: jne 0x4055f4 */ if (!fZ) goto L_004055f4;
L_004055ea:; BB(0x004055ea);
    /* 004055ea: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004055ed: call 0x40585c */ r_esp -= 4; W32(r_esp, 0x4055f2u); f_0040585c();
    /* 004055f2: jmp 0x405622 */ goto L_00405622;
L_004055f4:; BB(0x004055f4);
    /* 004055f4: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004055fa: jmp 0x405608 */ goto L_00405608;
L_004055fc:; BB(0x004055fc);
    /* 004055fc: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00405600: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00405604: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
L_00405608:; BB(0x00405608);
    /* 00405608: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0040560c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040560f: jge 0x405622 */ if ((fS==fO)) goto L_00405622;
L_00405611:; BB(0x00405611);
    /* 00405611: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00405615: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00405619: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040561c: mov dword ptr [eax + edx*4 + 0x78], ecx */ W32((u32)(r_eax+r_edx*4+0x78u), r_ecx);
    /* 00405620: jmp 0x4055fc */ goto L_004055fc;
L_00405622:; BB(0x00405622);
    /* 00405622: mov esp, ebp */ r_esp = r_ebp;
    /* 00405624: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405625: ret  */ FN_RET(0x00405567); r_esp += 4; return;
}

void f_00405626(void) /* FUN_00405626 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405626);
    /* 00405626: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405627: mov ebp, esp */ r_ebp = r_esp;
    /* 00405629: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040562c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040562f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00405636: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040563d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00405640: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00405642: cmp dword ptr [eax + 0x64], -1 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405646: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00405649: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040564c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040564f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00405652: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00405655: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405657: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040565a: call 0x404866 */ r_esp -= 4; W32(r_esp, 0x40565fu); f_00404866();
    /* 0040565f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405662: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405665: mov eax, dword ptr [ecx + 0x78] */ r_eax = R32((u32)(r_ecx+0x78u));
    /* 00405668: cmp eax, dword ptr [edx + 0x7c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x7cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040566b: jne 0x40567e */ if (!fZ) goto L_0040567e;
L_0040566d:; BB(0x0040566d);
    /* 0040566d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405670: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405673: mov eax, dword ptr [ecx + 0x78] */ r_eax = R32((u32)(r_ecx+0x78u));
    /* 00405676: cmp eax, dword ptr [edx + 0x80] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040567c: je 0x405699 */ if (fZ) goto L_00405699;
L_0040567e:; BB(0x0040567e);
    /* 0040567e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00405685: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405688: call 0x404a54 */ r_esp -= 4; W32(r_esp, 0x40568du); f_00404a54();
    /* 0040568d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040568f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405692: call 0x4048a7 */ r_esp -= 4; W32(r_esp, 0x405697u); f_004048a7();
    /* 00405697: jmp 0x405716 */ goto L_00405716;
L_00405699:; BB(0x00405699);
    /* 00405699: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040569c: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004056a0: je 0x405700 */ if (fZ) goto L_00405700;
L_004056a2:; BB(0x004056a2);
    /* 004056a2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004056a5: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004056a8: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004056ab: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004056ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004056b1: mov edx, dword ptr [eax + ecx*4 + 0x64c724] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x64c724u));
    /* 004056b8: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004056bb: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004056bf: je 0x4056dd */ if (fZ) goto L_004056dd;
L_004056c1:; BB(0x004056c1);
    /* 004056c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004056c4: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 004056c7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004056ca: imul edx, dword ptr [ecx*4 + 0x64c718] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx*4+0x64c718u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004056d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004056d3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004056d6: call 0x4048a7 */ r_esp -= 4; W32(r_esp, 0x4056dbu); f_004048a7();
    /* 004056db: jmp 0x4056e9 */ goto L_004056e9;
L_004056dd:; BB(0x004056dd);
    /* 004056dd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004056e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004056e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004056e4: call 0x4048a7 */ r_esp -= 4; W32(r_esp, 0x4056e9u); f_004048a7();
L_004056e9:; BB(0x004056e9);
    /* 004056e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004056ec: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004056f0: je 0x4056fe */ if (fZ) goto L_004056fe;
L_004056f2:; BB(0x004056f2);
    /* 004056f2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004056f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004056f6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004056f9: call 0x404918 */ r_esp -= 4; W32(r_esp, 0x4056feu); f_00404918();
L_004056fe:; BB(0x004056fe);
    /* 004056fe: jmp 0x405716 */ goto L_00405716;
L_00405700:; BB(0x00405700);
    /* 00405700: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405703: call 0x404a54 */ r_esp -= 4; W32(r_esp, 0x405708u); f_00404a54();
    /* 00405708: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040570b: call 0x4058e3 */ r_esp -= 4; W32(r_esp, 0x405710u); f_004058e3();
    /* 00405710: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405713: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
L_00405716:; BB(0x00405716);
    /* 00405716: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00405718: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 0040571e: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00405721: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00405726: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00405729: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040572b: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x40572eu); call_ind(t); }
    /* 0040572e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405732: je 0x40582b */ if (fZ) goto L_0040582b;
L_00405738:; BB(0x00405738);
    /* 00405738: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040573b: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040573f: jne 0x405781 */ if (!fZ) goto L_00405781;
L_00405741:; BB(0x00405741);
    /* 00405741: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00405743: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405746: call 0x404aad */ r_esp -= 4; W32(r_esp, 0x40574bu); f_00404aad();
    /* 0040574b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040574d: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405753: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00405756: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 0040575b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0040575e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00405760: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x405763u); call_ind(t); }
    /* 00405763: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00405765: mov ecx, dword ptr [0x6f532c] */ r_ecx = R32((u32)(0x6f532cu));
    /* 0040576b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0040576e: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405774: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00405777: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405779: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x40577cu); call_ind(t); }
    /* 0040577c: jmp 0x405829 */ goto L_00405829;
L_00405781:; BB(0x00405781);
    /* 00405781: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00405784: mov dword ptr [eax + 0x64], 0xffffffff */ W32((u32)(r_eax+0x64u), 0xffffffffu);
    /* 0040578b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040578d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405790: call 0x404aad */ r_esp -= 4; W32(r_esp, 0x405795u); f_00404aad();
    /* 00405795: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405798: cmp dword ptr [ecx + 0x78], 5 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040579c: jl 0x4057e5 */ if ((fS!=fO)) goto L_004057e5;
L_0040579e:; BB(0x0040579e);
    /* 0040579e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004057a0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004057a3: call 0x404b15 */ r_esp -= 4; W32(r_esp, 0x4057a8u); f_00404b15();
    /* 004057a8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004057ab: cmp dword ptr [edx + 0x78], 5 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004057af: jne 0x4057cb */ if (!fZ) goto L_004057cb;
L_004057b1:; BB(0x004057b1);
    /* 004057b1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004057b3: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 004057b8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004057bb: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 004057c1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004057c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004057c6: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4057c9u); call_ind(t); }
    /* 004057c9: jmp 0x4057e3 */ goto L_004057e3;
L_004057cb:; BB(0x004057cb);
    /* 004057cb: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004057cd: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 004057d2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004057d5: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 004057db: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004057de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004057e0: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4057e3u); call_ind(t); }
L_004057e3:; BB(0x004057e3);
    /* 004057e3: jmp 0x405811 */ goto L_00405811;
L_004057e5:; BB(0x004057e5);
    /* 004057e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004057e8: cmp dword ptr [eax + 0x78], 2 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004057ec: jl 0x405811 */ if ((fS!=fO)) goto L_00405811;
L_004057ee:; BB(0x004057ee);
    /* 004057ee: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004057f0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004057f3: call 0x404b15 */ r_esp -= 4; W32(r_esp, 0x4057f8u); f_00404b15();
    /* 004057f8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004057fa: mov ecx, dword ptr [0x6f532c] */ r_ecx = R32((u32)(0x6f532cu));
    /* 00405800: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00405803: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405809: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040580c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040580e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x405811u); call_ind(t); }
L_00405811:; BB(0x00405811);
    /* 00405811: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405813: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00405818: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040581b: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405821: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00405824: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405826: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x405829u); call_ind(t); }
L_00405829:; BB(0x00405829);
    /* 00405829: jmp 0x405858 */ goto L_00405858;
L_0040582b:; BB(0x0040582b);
    /* 0040582b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040582e: mov dword ptr [eax + 0x64], 0xffffffff */ W32((u32)(r_eax+0x64u), 0xffffffffu);
    /* 00405835: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00405837: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040583a: call 0x404aad */ r_esp -= 4; W32(r_esp, 0x40583fu); f_00404aad();
    /* 0040583f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405841: mov ecx, dword ptr [0x6f532c] */ r_ecx = R32((u32)(0x6f532cu));
    /* 00405847: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0040584a: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405850: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00405853: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405855: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x405858u); call_ind(t); }
L_00405858:; BB(0x00405858);
    /* 00405858: mov esp, ebp */ r_esp = r_ebp;
    /* 0040585a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040585b: ret  */ FN_RET(0x00405626); r_esp += 4; return;
}

void f_0040585c(void) /* FUN_0040585c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040585c);
    /* 0040585c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040585d: mov ebp, esp */ r_ebp = r_esp;
    /* 0040585f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405860: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405863: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00405865: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x40586au); f_0060ee31();
    /* 0040586a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040586d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405870: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 00405873: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00405875: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x40587au); f_0060ee31();
    /* 0040587a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040587d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405880: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 00405883: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405886: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405889: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 0040588c: cmp edx, dword ptr [ecx + 0x7c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x7cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040588f: je 0x4058a6 */ if (fZ) goto L_004058a6;
L_00405891:; BB(0x00405891);
    /* 00405891: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00405893: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x405898u); f_0060ee31();
    /* 00405898: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040589b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040589e: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 004058a4: jmp 0x4058df */ goto L_004058df;
L_004058a6:; BB(0x004058a6);
    /* 004058a6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004058a8: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4058adu); f_0060ee31();
    /* 004058ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004058b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004058b3: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 004058b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004058bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004058bf: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 004058c5: cmp edx, dword ptr [ecx + 0x78] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x78u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004058c8: jl 0x4058df */ if ((fS!=fO)) goto L_004058df;
L_004058ca:; BB(0x004058ca);
    /* 004058ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004058cd: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 004058d3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004058d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004058d9: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
L_004058df:; BB(0x004058df);
    /* 004058df: mov esp, ebp */ r_esp = r_ebp;
    /* 004058e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004058e2: ret  */ FN_RET(0x0040585c); r_esp += 4; return;
}

void f_004058e3(void) /* FUN_004058e3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004058e3);
    /* 004058e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004058e4: mov ebp, esp */ r_ebp = r_esp;
    /* 004058e6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004058e9: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004058ec: mov word ptr [ebp - 0xc], 0xffff */ W16((u32)(r_ebp+0xfffffff4u), 0xffffu);
    /* 004058f2: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004058f7: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4058fcu); f_0060ee31();
    /* 004058fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004058ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00405902: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00405908: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0040590f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00405916: jmp 0x405924 */ goto L_00405924;
L_00405918:; BB(0x00405918);
    /* 00405918: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0040591c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00405920: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00405924:; BB(0x00405924);
    /* 00405924: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00405928: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040592b: jge 0x40595d */ if ((fS==fO)) goto L_0040595d;
L_0040592d:; BB(0x0040592d);
    /* 0040592d: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00405931: fld qword ptr [0x633370] */ FPUSH(R_F64((u32)(0x633370u)));
    /* 00405937: fmul qword ptr [edx*8 + 0x64c7c0] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x64c7c0u));
    /* 0040593e: fadd qword ptr [ebp - 0x14] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffecu));
    /* 00405941: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00405944: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 00405947: fcomp qword ptr [ebp - 0x14] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffecu))); FPOP();
    /* 0040594a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040594c: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0040594f: je 0x40595b */ if (fZ) goto L_0040595b;
L_00405951:; BB(0x00405951);
    /* 00405951: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00405955: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 00405959: jmp 0x40595d */ goto L_0040595d;
L_0040595b:; BB(0x0040595b);
    /* 0040595b: jmp 0x405918 */ goto L_00405918;
L_0040595d:; BB(0x0040595d);
    /* 0040595d: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00405961: mov esp, ebp */ r_esp = r_ebp;
    /* 00405963: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405964: ret  */ FN_RET(0x004058e3); r_esp += 4; return;
}

void f_00405965(void) /* FUN_00405965 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405965);
    /* 00405965: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405966: mov ebp, esp */ r_ebp = r_esp;
    /* 00405968: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040596b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040596e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405970: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405973: call 0x425366 */ r_esp -= 4; W32(r_esp, 0x405978u); f_00425366();
    /* 00405978: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040597b: mov dword ptr [eax], 0x63337c */ W32((u32)(r_eax), 0x63337cu);
    /* 00405981: push 0x3250 */ { u32 v = 0x3250u; r_esp -= 4; W32(r_esp, v); }
    /* 00405986: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40598bu); f_0048ab58();
    /* 0040598b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040598e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00405991: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405995: je 0x4059aa */ if (fZ) goto L_004059aa;
L_00405997:; BB(0x00405997);
    /* 00405997: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405999: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0040599b: push -0x64 */ { u32 v = 0xffffff9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040599d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004059a0: call 0x41e7f0 */ r_esp -= 4; W32(r_esp, 0x4059a5u); f_0041e7f0();
    /* 004059a5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004059a8: jmp 0x4059b1 */ goto L_004059b1;
L_004059aa:; BB(0x004059aa);
    /* 004059aa: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_004059b1:; BB(0x004059b1);
    /* 004059b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004059b4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004059b7: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 004059ba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004059bd: mov esp, ebp */ r_esp = r_ebp;
    /* 004059bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004059c0: ret  */ FN_RET(0x00405965); r_esp += 4; return;
}

void f_004059c1(void) /* FUN_004059c1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004059c1);
    /* 004059c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004059c2: mov ebp, esp */ r_ebp = r_esp;
    /* 004059c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004059c5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004059c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004059cb: mov dword ptr [eax], 0x63337c */ W32((u32)(r_eax), 0x63337cu);
    /* 004059d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004059d4: call 0x425495 */ r_esp -= 4; W32(r_esp, 0x4059d9u); f_00425495();
    /* 004059d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004059db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004059dc: ret  */ FN_RET(0x004059c1); r_esp += 4; return;
}

void f_004059dd(void) /* FUN_004059dd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004059dd);
    /* 004059dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004059de: mov ebp, esp */ r_ebp = r_esp;
    /* 004059e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004059e1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004059e4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004059e7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004059ea: call 0x426404 */ r_esp -= 4; W32(r_esp, 0x4059efu); f_00426404();
    /* 004059ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004059f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004059f3: mov ecx, dword ptr [0x6f532c] */ r_ecx = R32((u32)(0x6f532cu));
    /* 004059f9: call 0x447faa */ r_esp -= 4; W32(r_esp, 0x4059feu); f_00447faa();
    /* 004059fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00405a00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405a01: ret  */ FN_RET(0x004059dd); r_esp += 4; return;
}

void f_00405a3c(void) /* FUN_00405a3c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405a3c);
    /* 00405a3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405a3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00405a3f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405a42: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00405a45: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405a48: mov dword ptr [eax], 0x6333ac */ W32((u32)(r_eax), 0x6333acu);
    /* 00405a4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405a51: cmp dword ptr [ecx + 0xcc], 0 */ {  u32 a = R32((u32)(r_ecx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405a58: je 0x405a97 */ if (fZ) goto L_00405a97;
L_00405a5a:; BB(0x00405a5a);
    /* 00405a5a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405a5d: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00405a63: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00405a66: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405a69: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405a6c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405a70: je 0x405a83 */ if (fZ) goto L_00405a83;
L_00405a72:; BB(0x00405a72);
    /* 00405a72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00405a74: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405a77: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00405a79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405a7c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x405a7eu); call_ind(t); }
    /* 00405a7e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00405a81: jmp 0x405a8a */ goto L_00405a8a;
L_00405a83:; BB(0x00405a83);
    /* 00405a83: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00405a8a:; BB(0x00405a8a);
    /* 00405a8a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405a8d: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
L_00405a97:; BB(0x00405a97);
    /* 00405a97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405a9a: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x405a9fu); f_005d5dfb();
    /* 00405a9f: mov esp, ebp */ r_esp = r_ebp;
    /* 00405aa1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405aa2: ret  */ FN_RET(0x00405a3c); r_esp += 4; return;
}

void f_00405aa3(void) /* FUN_00405aa3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405aa3);
    /* 00405aa3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405aa4: mov ebp, esp */ r_ebp = r_esp;
    /* 00405aa6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405aa9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00405aac: mov dword ptr [ebp - 0xc], 0x16087 */ W32((u32)(r_ebp+0xfffffff4u), 0x16087u);
    /* 00405ab3: mov dword ptr [ebp - 8], 0x16088 */ W32((u32)(r_ebp+0xfffffff8u), 0x16088u);
    /* 00405aba: mov dword ptr [ebp - 4], 0x16089 */ W32((u32)(r_ebp+0xfffffffcu), 0x16089u);
    /* 00405ac1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405ac3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405ac5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405ac8: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x405acdu); f_005d5e59();
    /* 00405acd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405ad0: call 0x405c96 */ r_esp -= 4; W32(r_esp, 0x405ad5u); f_00405c96();
    /* 00405ad5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405ad8: je 0x405ba4 */ if (fZ) goto L_00405ba4;
L_00405ade:; BB(0x00405ade);
    /* 00405ade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00405ae1: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405ae8: jne 0x405b1d */ if (!fZ) goto L_00405b1d;
L_00405aea:; BB(0x00405aea);
    /* 00405aea: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00405aec: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x405af1u); f_0048ab58();
    /* 00405af1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405af4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00405af7: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405afb: je 0x405b0a */ if (fZ) goto L_00405b0a;
L_00405afd:; BB(0x00405afd);
    /* 00405afd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00405b00: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x405b05u); f_005e9d30();
    /* 00405b05: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00405b08: jmp 0x405b11 */ goto L_00405b11;
L_00405b0a:; BB(0x00405b0a);
    /* 00405b0a: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00405b11:; BB(0x00405b11);
    /* 00405b11: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405b14: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00405b17: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
L_00405b1d:; BB(0x00405b1d);
    /* 00405b1d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00405b20: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00405b26: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405b29: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00405b2f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405b31: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x405b34u); call_ind(t); }
    /* 00405b34: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405b37: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x405b3cu); f_005d9883();
    /* 00405b3c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00405b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405b40: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00405b43: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00405b49: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405b4c: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00405b52: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405b54: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x405b57u); call_ind(t); }
    /* 00405b57: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405b5a: call 0x405c96 */ r_esp -= 4; W32(r_esp, 0x405b5fu); f_00405c96();
    /* 00405b5f: mov eax, dword ptr [ebp + eax*4 - 0xc] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff4u));
    /* 00405b63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405b64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405b67: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00405b6d: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x405b72u); f_005ea0c3();
    /* 00405b72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405b74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405b76: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405b79: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 00405b7f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00405b82: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00405b88: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00405b8a: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x405b8du); call_ind(t); }
    /* 00405b8d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405b90: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00405b96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405b99: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00405b9f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405ba1: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x405ba4u); call_ind(t); }
L_00405ba4:; BB(0x00405ba4);
    /* 00405ba4: mov esp, ebp */ r_esp = r_ebp;
    /* 00405ba6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405ba7: ret  */ FN_RET(0x00405aa3); r_esp += 4; return;
}

void f_00405ba8(void) /* FUN_00405ba8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405ba8);
    /* 00405ba8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405ba9: mov ebp, esp */ r_ebp = r_esp;
    /* 00405bab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405bac: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405baf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00405bb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405bb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405bb6: call 0x5d6084 */ r_esp -= 4; W32(r_esp, 0x405bbbu); f_005d6084();
    /* 00405bbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405bbe: cmp dword ptr [ecx + 0xcc], 0 */ {  u32 a = R32((u32)(r_ecx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405bc5: je 0x405c04 */ if (fZ) goto L_00405c04;
L_00405bc7:; BB(0x00405bc7);
    /* 00405bc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405bca: call 0x5d6667 */ r_esp -= 4; W32(r_esp, 0x405bcfu); f_005d6667();
    /* 00405bcf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405bd2: jne 0x405bed */ if (!fZ) goto L_00405bed;
L_00405bd4:; BB(0x00405bd4);
    /* 00405bd4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405bd7: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 00405bdd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405be0: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00405be6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00405be8: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x405bebu); call_ind(t); }
    /* 00405beb: jmp 0x405c04 */ goto L_00405c04;
L_00405bed:; BB(0x00405bed);
    /* 00405bed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405bf0: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00405bf6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405bf9: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00405bff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405c01: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x405c04u); call_ind(t); }
L_00405c04:; BB(0x00405c04);
    /* 00405c04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00405c07: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00405c0a: mov esp, ebp */ r_esp = r_ebp;
    /* 00405c0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405c0d: ret 4 */ FN_RET(0x00405ba8); r_esp += 8; return;
}

void f_00405c10(void) /* FUN_00405c10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405c10);
    /* 00405c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00405c13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405c16: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405c19: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00405c1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405c1d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00405c1f: push 0x186a4 */ { u32 v = 0x186a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00405c24: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00405c29: mov ecx, dword ptr [eax + 0x1cb0] */ r_ecx = R32((u32)(r_eax+0x1cb0u));
    /* 00405c2f: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x405c34u); f_005e8389();
    /* 00405c34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405c37: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00405c3d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00405c40: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00405c44: ja 0x405c82 */ if ((!fC&&!fZ)) goto L_00405c82;
L_00405c46:; BB(0x00405c46);
    /* 00405c46: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405c49: jmp dword ptr [eax*4 + 0x405c86] */ { u32 t = R32((u32)(r_eax*4+0x405c86u)); switch (t) { case 0x405c50u: goto L_00405c50; case 0x405c5du: goto L_00405c5d; case 0x405c6au: goto L_00405c6a; case 0x405c77u: goto L_00405c77; default: UNSUP(0x00405c49, "jump table entry is not a known target"); } }
L_00405c50:; BB(0x00405c50);
    /* 00405c50: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00405c56: call 0x405337 */ r_esp -= 4; W32(r_esp, 0x405c5bu); f_00405337();
    /* 00405c5b: jmp 0x405c82 */ goto L_00405c82;
L_00405c5d:; BB(0x00405c5d);
    /* 00405c5d: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00405c63: call 0x40523c */ r_esp -= 4; W32(r_esp, 0x405c68u); f_0040523c();
    /* 00405c68: jmp 0x405c82 */ goto L_00405c82;
L_00405c6a:; BB(0x00405c6a);
    /* 00405c6a: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00405c70: call 0x405352 */ r_esp -= 4; W32(r_esp, 0x405c75u); f_00405352();
    /* 00405c75: jmp 0x405c82 */ goto L_00405c82;
L_00405c77:; BB(0x00405c77);
    /* 00405c77: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00405c7d: call 0x4053bd */ r_esp -= 4; W32(r_esp, 0x405c82u); f_004053bd();
L_00405c82:; BB(0x00405c82);
    /* 00405c82: mov esp, ebp */ r_esp = r_ebp;
    /* 00405c84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405c85: ret  */ FN_RET(0x00405c10); r_esp += 4; return;
}

void f_00405c96(void) /* FUN_00405c96 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405c96);
    /* 00405c96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405c97: mov ebp, esp */ r_ebp = r_esp;
    /* 00405c99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405c9a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405c9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405ca0: mov eax, dword ptr [eax + 0xd0] */ r_eax = R32((u32)(r_eax+0xd0u));
    /* 00405ca6: mov esp, ebp */ r_esp = r_ebp;
    /* 00405ca8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405ca9: ret  */ FN_RET(0x00405c96); r_esp += 4; return;
}

void f_00405caa(void) /* FUN_00405caa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405caa);
    /* 00405caa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405cab: mov ebp, esp */ r_ebp = r_esp;
    /* 00405cad: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405cb0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405cb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405cb6: call 0x5d6575 */ r_esp -= 4; W32(r_esp, 0x405cbbu); f_005d6575();
    /* 00405cbb: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00405cc0: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405cc4: je 0x405d32 */ if (fZ) goto L_00405d32;
L_00405cc6:; BB(0x00405cc6);
    /* 00405cc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405cc9: call 0x405c96 */ r_esp -= 4; W32(r_esp, 0x405cceu); f_00405c96();
    /* 00405cce: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00405cd1: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00405cd5: ja 0x405d32 */ if ((!fC&&!fZ)) goto L_00405d32;
L_00405cd7:; BB(0x00405cd7);
    /* 00405cd7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405cda: jmp dword ptr [ecx*4 + 0x405d36] */ { u32 t = R32((u32)(r_ecx*4+0x405d36u)); switch (t) { case 0x405ce1u: goto L_00405ce1; case 0x405cf6u: goto L_00405cf6; case 0x405d0au: goto L_00405d0a; case 0x405d1fu: goto L_00405d1f; default: UNSUP(0x00405cda, "jump table entry is not a known target"); } }
L_00405ce1:; BB(0x00405ce1);
    /* 00405ce1: push 0x21f */ { u32 v = 0x21fu; r_esp -= 4; W32(r_esp, v); }
    /* 00405ce6: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405cec: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00405cef: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x405cf4u); f_00444067();
    /* 00405cf4: jmp 0x405d32 */ goto L_00405d32;
L_00405cf6:; BB(0x00405cf6);
    /* 00405cf6: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00405cfb: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00405d00: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00405d03: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x405d08u); f_00444067();
    /* 00405d08: jmp 0x405d32 */ goto L_00405d32;
L_00405d0a:; BB(0x00405d0a);
    /* 00405d0a: push 0x21e */ { u32 v = 0x21eu; r_esp -= 4; W32(r_esp, v); }
    /* 00405d0f: mov ecx, dword ptr [0x6f532c] */ r_ecx = R32((u32)(0x6f532cu));
    /* 00405d15: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 00405d18: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x405d1du); f_00444067();
    /* 00405d1d: jmp 0x405d32 */ goto L_00405d32;
L_00405d1f:; BB(0x00405d1f);
    /* 00405d1f: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 00405d24: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405d2a: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00405d2d: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x405d32u); f_00444067();
L_00405d32:; BB(0x00405d32);
    /* 00405d32: mov esp, ebp */ r_esp = r_ebp;
    /* 00405d34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405d35: ret  */ FN_RET(0x00405caa); r_esp += 4; return;
}

void f_00405d46(void) /* FUN_00405d46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405d46);
    /* 00405d46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405d47: mov ebp, esp */ r_ebp = r_esp;
    /* 00405d49: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405d4c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405d4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405d52: call 0x5d650a */ r_esp -= 4; W32(r_esp, 0x405d57u); f_005d650a();
    /* 00405d57: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00405d5c: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405d60: je 0x405dce */ if (fZ) goto L_00405dce;
L_00405d62:; BB(0x00405d62);
    /* 00405d62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405d65: call 0x405c96 */ r_esp -= 4; W32(r_esp, 0x405d6au); f_00405c96();
    /* 00405d6a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00405d6d: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00405d71: ja 0x405dce */ if ((!fC&&!fZ)) goto L_00405dce;
L_00405d73:; BB(0x00405d73);
    /* 00405d73: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405d76: jmp dword ptr [ecx*4 + 0x405dd2] */ { u32 t = R32((u32)(r_ecx*4+0x405dd2u)); switch (t) { case 0x405d7du: goto L_00405d7d; case 0x405d92u: goto L_00405d92; case 0x405da6u: goto L_00405da6; case 0x405dbbu: goto L_00405dbb; default: UNSUP(0x00405d76, "jump table entry is not a known target"); } }
L_00405d7d:; BB(0x00405d7d);
    /* 00405d7d: push 0x21f */ { u32 v = 0x21fu; r_esp -= 4; W32(r_esp, v); }
    /* 00405d82: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405d88: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00405d8b: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x405d90u); f_00443fda();
    /* 00405d90: jmp 0x405dce */ goto L_00405dce;
L_00405d92:; BB(0x00405d92);
    /* 00405d92: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00405d97: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00405d9c: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00405d9f: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x405da4u); f_00443fda();
    /* 00405da4: jmp 0x405dce */ goto L_00405dce;
L_00405da6:; BB(0x00405da6);
    /* 00405da6: push 0x21e */ { u32 v = 0x21eu; r_esp -= 4; W32(r_esp, v); }
    /* 00405dab: mov ecx, dword ptr [0x6f532c] */ r_ecx = R32((u32)(0x6f532cu));
    /* 00405db1: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 00405db4: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x405db9u); f_00443fda();
    /* 00405db9: jmp 0x405dce */ goto L_00405dce;
L_00405dbb:; BB(0x00405dbb);
    /* 00405dbb: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 00405dc0: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00405dc6: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00405dc9: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x405dceu); f_00443fda();
L_00405dce:; BB(0x00405dce);
    /* 00405dce: mov esp, ebp */ r_esp = r_ebp;
    /* 00405dd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405dd1: ret  */ FN_RET(0x00405d46); r_esp += 4; return;
}

void f_00405de2(void) /* FUN_00405de2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405de2);
    /* 00405de2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405de3: mov ebp, esp */ r_ebp = r_esp;
    /* 00405de5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405de6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405de9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405dec: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x405df1u); f_005d5d20();
    /* 00405df1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405df4: mov dword ptr [eax], 0x63341c */ W32((u32)(r_eax), 0x63341cu);
    /* 00405dfa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405dfd: mov esp, ebp */ r_esp = r_ebp;
    /* 00405dff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405e00: ret  */ FN_RET(0x00405de2); r_esp += 4; return;
}

void f_00405e01(void) /* FUN_00405e01 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405e01);
    /* 00405e01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405e02: mov ebp, esp */ r_ebp = r_esp;
    /* 00405e04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405e05: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405e08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405e0b: mov dword ptr [eax], 0x63341c */ W32((u32)(r_eax), 0x63341cu);
    /* 00405e11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405e14: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x405e19u); f_005d5dfb();
    /* 00405e19: mov esp, ebp */ r_esp = r_ebp;
    /* 00405e1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405e1c: ret  */ FN_RET(0x00405e01); r_esp += 4; return;
}

void f_00405e1d(void) /* FUN_00405e1d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405e1d);
    /* 00405e1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405e1e: mov ebp, esp */ r_ebp = r_esp;
    /* 00405e20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405e21: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405e24: mov ecx, dword ptr [0x6f532c] */ r_ecx = R32((u32)(0x6f532cu));
    /* 00405e2a: call 0x448c07 */ r_esp -= 4; W32(r_esp, 0x405e2fu); f_00448c07();
    /* 00405e2f: mov esp, ebp */ r_esp = r_ebp;
    /* 00405e31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405e32: ret  */ FN_RET(0x00405e1d); r_esp += 4; return;
}

void f_00405e33(void) /* FUN_00405e33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405e33);
    /* 00405e33: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405e34: mov ebp, esp */ r_ebp = r_esp;
    /* 00405e36: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405e39: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00405e3c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405e3f: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x405e44u); f_005e3fb0();
    /* 00405e44: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405e47: mov dword ptr [eax], 0x63348c */ W32((u32)(r_eax), 0x63348cu);
    /* 00405e4d: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00405e51: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00405e53: jle 0x405e62 */ if ((fZ||fS!=fO)) goto L_00405e62;
L_00405e55:; BB(0x00405e55);
    /* 00405e55: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405e58: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00405e5c: mov word ptr [edx + 0x78], ax */ W16((u32)(r_edx+0x78u), (u16)r_eax);
    /* 00405e60: jmp 0x405e6b */ goto L_00405e6b;
L_00405e62:; BB(0x00405e62);
    /* 00405e62: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405e65: mov word ptr [ecx + 0x78], 1 */ W16((u32)(r_ecx+0x78u), 0x1u);
L_00405e6b:; BB(0x00405e6b);
    /* 00405e6b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405e6e: movsx eax, word ptr [edx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x78u));
    /* 00405e72: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00405e75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405e76: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x405e7bu); f_0048ab58();
    /* 00405e7b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405e7e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405e81: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00405e87: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00405e8d: jmp 0x405e9b */ goto L_00405e9b;
L_00405e8f:; BB(0x00405e8f);
    /* 00405e8f: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00405e93: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00405e97: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00405e9b:; BB(0x00405e9b);
    /* 00405e9b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00405e9f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405ea2: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 00405ea6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00405ea8: jge 0x405ec0 */ if ((fS==fO)) goto L_00405ec0;
L_00405eaa:; BB(0x00405eaa);
    /* 00405eaa: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00405eae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405eb1: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00405eb7: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 00405ebe: jmp 0x405e8f */ goto L_00405e8f;
L_00405ec0:; BB(0x00405ec0);
    /* 00405ec0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405ec3: mov esp, ebp */ r_esp = r_ebp;
    /* 00405ec5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405ec6: ret 4 */ FN_RET(0x00405e33); r_esp += 8; return;
}

void f_00405ec9(void) /* FUN_00405ec9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405ec9);
    /* 00405ec9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405eca: mov ebp, esp */ r_ebp = r_esp;
    /* 00405ecc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405ecf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00405ed2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00405ed5: mov dword ptr [eax], 0x63348c */ W32((u32)(r_eax), 0x63348cu);
    /* 00405edb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405ede: cmp dword ptr [ecx + 0x80], 0 */ {  u32 a = R32((u32)(r_ecx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405ee5: je 0x405f93 */ if (fZ) goto L_00405f93;
L_00405eeb:; BB(0x00405eeb);
    /* 00405eeb: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00405ef1: jmp 0x405eff */ goto L_00405eff;
L_00405ef3:; BB(0x00405ef3);
    /* 00405ef3: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00405ef7: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00405efb: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00405eff:; BB(0x00405eff);
    /* 00405eff: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00405f03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405f06: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 00405f0a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00405f0c: jge 0x405f6e */ if ((fS==fO)) goto L_00405f6e;
L_00405f0e:; BB(0x00405f0e);
    /* 00405f0e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00405f12: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405f15: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00405f1b: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405f1f: je 0x405f6c */ if (fZ) goto L_00405f6c;
L_00405f21:; BB(0x00405f21);
    /* 00405f21: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00405f25: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405f28: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00405f2e: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00405f31: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00405f34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405f37: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00405f3a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405f3e: je 0x405f51 */ if (fZ) goto L_00405f51;
L_00405f40:; BB(0x00405f40);
    /* 00405f40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00405f42: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405f45: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00405f47: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405f4a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x405f4cu); call_ind(t); }
    /* 00405f4c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00405f4f: jmp 0x405f58 */ goto L_00405f58;
L_00405f51:; BB(0x00405f51);
    /* 00405f51: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00405f58:; BB(0x00405f58);
    /* 00405f58: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00405f5c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405f5f: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00405f65: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
L_00405f6c:; BB(0x00405f6c);
    /* 00405f6c: jmp 0x405ef3 */ goto L_00405ef3;
L_00405f6e:; BB(0x00405f6e);
    /* 00405f6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405f71: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00405f77: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00405f7a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00405f7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405f7e: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x405f83u); f_0048ac1b();
    /* 00405f83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405f86: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405f89: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
L_00405f93:; BB(0x00405f93);
    /* 00405f93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405f96: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x405f9bu); f_005e3fed();
    /* 00405f9b: mov esp, ebp */ r_esp = r_ebp;
    /* 00405f9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405f9e: ret  */ FN_RET(0x00405ec9); r_esp += 4; return;
}

void f_00405f9f(void) /* FUN_00405f9f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405f9f);
    /* 00405f9f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405fa0: mov ebp, esp */ r_ebp = r_esp;
    /* 00405fa2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405fa5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00405fa8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405fab: call 0x5e4035 */ r_esp -= 4; W32(r_esp, 0x405fb0u); f_005e4035();
    /* 00405fb0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405fb3: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 00405fba: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00405fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405fbf: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 00405fc3: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00405fc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405fc7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405fca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405fcc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405fcf: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x405fd2u); call_ind(t); }
    /* 00405fd2: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00405fd8: jmp 0x405fe6 */ goto L_00405fe6;
L_00405fda:; BB(0x00405fda);
    /* 00405fda: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00405fde: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00405fe2: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00405fe6:; BB(0x00405fe6);
    /* 00405fe6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00405fea: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405fed: movsx eax, word ptr [edx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x78u));
    /* 00405ff1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00405ff3: jge 0x406158 */ if ((fS==fO)) goto L_00406158;
L_00405ff9:; BB(0x00405ff9);
    /* 00405ff9: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00405ffb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x406000u); f_0048ab58();
    /* 00406000: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406003: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00406006: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040600a: je 0x406019 */ if (fZ) goto L_00406019;
L_0040600c:; BB(0x0040600c);
    /* 0040600c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040600f: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x406014u); f_005e9d30();
    /* 00406014: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00406017: jmp 0x406020 */ goto L_00406020;
L_00406019:; BB(0x00406019);
    /* 00406019: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00406020:; BB(0x00406020);
    /* 00406020: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00406024: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406027: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0040602d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406030: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 00406033: push 0x16099 */ { u32 v = 0x16099u; r_esp -= 4; W32(r_esp, v); }
    /* 00406038: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040603c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040603f: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00406045: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00406048: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40604du); f_005ea0c3();
    /* 0040604d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040604f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00406053: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406056: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 0040605c: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0040605f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x406064u); f_005ea1cf();
    /* 00406064: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00406068: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040606b: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00406071: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00406074: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00406078: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040607b: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 00406081: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00406084: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406086: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x406089u); call_ind(t); }
    /* 00406089: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040608c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040608e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406091: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x406094u); call_ind(t); }
    /* 00406094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406095: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00406099: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040609c: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040609f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004060a2: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 004060a5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004060a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004060a8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004060ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004060af: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 004060b5: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 004060b8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004060bc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004060bf: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 004060c5: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004060c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004060ca: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4060cdu); call_ind(t); }
    /* 004060cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004060d0: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x4060d5u); f_005d9883();
    /* 004060d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004060d6: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004060da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004060dd: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 004060e3: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 004060e6: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004060ea: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004060ed: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 004060f3: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004060f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004060f8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4060fbu); call_ind(t); }
    /* 004060fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004060fe: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x406103u); f_005d96a9();
    /* 00406103: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406105: je 0x40612e */ if (fZ) goto L_0040612e;
L_00406107:; BB(0x00406107);
    /* 00406107: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040610b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040610e: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00406114: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00406117: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040611b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040611e: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 00406124: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00406127: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406129: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x40612cu); call_ind(t); }
    /* 0040612c: jmp 0x406153 */ goto L_00406153;
L_0040612e:; BB(0x0040612e);
    /* 0040612e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00406132: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406135: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 0040613b: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0040613e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00406142: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406145: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 0040614b: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0040614e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406150: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x406153u); call_ind(t); }
L_00406153:; BB(0x00406153);
    /* 00406153: jmp 0x405fda */ goto L_00405fda;
L_00406158:; BB(0x00406158);
    /* 00406158: mov esp, ebp */ r_esp = r_ebp;
    /* 0040615a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040615b: ret  */ FN_RET(0x00405f9f); r_esp += 4; return;
}

void f_0040615c(void) /* FUN_0040615c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040615c);
    /* 0040615c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040615d: mov ebp, esp */ r_ebp = r_esp;
    /* 0040615f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406162: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00406165: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00406168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406169: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040616c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040616d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406170: call 0x5e9f7d */ r_esp -= 4; W32(r_esp, 0x406175u); f_005e9f7d();
    /* 00406175: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040617b: jmp 0x406189 */ goto L_00406189;
L_0040617d:; BB(0x0040617d);
    /* 0040617d: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00406181: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00406185: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00406189:; BB(0x00406189);
    /* 00406189: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040618d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406190: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 00406194: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406196: jge 0x4061e9 */ if ((fS==fO)) goto L_004061e9;
L_00406198:; BB(0x00406198);
    /* 00406198: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040619c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040619f: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 004061a5: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004061a9: je 0x4061e7 */ if (fZ) goto L_004061e7;
L_004061ab:; BB(0x004061ab);
    /* 004061ab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004061ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004061af: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004061b3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004061b6: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004061b9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004061bc: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004061bf: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004061c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004061c2: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004061c6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004061c9: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004061cf: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004061d2: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004061d6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004061d9: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 004061df: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 004061e2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004061e4: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x4061e7u); call_ind(t); }
L_004061e7:; BB(0x004061e7);
    /* 004061e7: jmp 0x40617d */ goto L_0040617d;
L_004061e9:; BB(0x004061e9);
    /* 004061e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004061eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004061ec: ret 8 */ FN_RET(0x0040615c); r_esp += 12; return;
}

void f_004061ef(void) /* FUN_004061ef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004061ef);
    /* 004061ef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004061f0: mov ebp, esp */ r_ebp = r_esp;
    /* 004061f2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004061f5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004061f8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004061fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004061fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004061ff: call 0x5d975e */ r_esp -= 4; W32(r_esp, 0x406204u); f_005d975e();
    /* 00406204: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040620a: jmp 0x406218 */ goto L_00406218;
L_0040620c:; BB(0x0040620c);
    /* 0040620c: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00406210: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00406214: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_00406218:; BB(0x00406218);
    /* 00406218: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040621c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040621f: movsx ecx, word ptr [eax + 0x78] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x78u));
    /* 00406223: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406225: jge 0x406265 */ if ((fS==fO)) goto L_00406265;
L_00406227:; BB(0x00406227);
    /* 00406227: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040622b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040622e: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00406234: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406238: je 0x406263 */ if (fZ) goto L_00406263;
L_0040623a:; BB(0x0040623a);
    /* 0040623a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040623d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040623e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00406242: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406245: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 0040624b: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0040624e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00406252: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406255: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 0040625b: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0040625e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406260: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x406263u); call_ind(t); }
L_00406263:; BB(0x00406263);
    /* 00406263: jmp 0x40620c */ goto L_0040620c;
L_00406265:; BB(0x00406265);
    /* 00406265: mov esp, ebp */ r_esp = r_ebp;
    /* 00406267: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406268: ret 4 */ FN_RET(0x004061ef); r_esp += 8; return;
}

void f_0040626b(void) /* FUN_0040626b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040626b);
    /* 0040626b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040626c: mov ebp, esp */ r_ebp = r_esp;
    /* 0040626e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406271: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00406274: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406277: call 0x5ea28a */ r_esp -= 4; W32(r_esp, 0x40627cu); f_005ea28a();
    /* 0040627c: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00406282: jmp 0x406290 */ goto L_00406290;
L_00406284:; BB(0x00406284);
    /* 00406284: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00406288: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0040628c: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00406290:; BB(0x00406290);
    /* 00406290: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00406294: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406297: movsx eax, word ptr [edx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x78u));
    /* 0040629b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040629d: jge 0x4062d9 */ if ((fS==fO)) goto L_004062d9;
L_0040629f:; BB(0x0040629f);
    /* 0040629f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004062a3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004062a6: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004062ac: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004062b0: je 0x4062d7 */ if (fZ) goto L_004062d7;
L_004062b2:; BB(0x004062b2);
    /* 004062b2: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004062b6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004062b9: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004062bf: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004062c2: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004062c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004062c9: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 004062cf: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 004062d2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004062d4: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4062d7u); call_ind(t); }
L_004062d7:; BB(0x004062d7);
    /* 004062d7: jmp 0x406284 */ goto L_00406284;
L_004062d9:; BB(0x004062d9);
    /* 004062d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004062db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004062dc: ret  */ FN_RET(0x0040626b); r_esp += 4; return;
}

void f_004062dd(void) /* FUN_004062dd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004062dd);
    /* 004062dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004062de: mov ebp, esp */ r_ebp = r_esp;
    /* 004062e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004062e1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004062e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004062e7: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x4062ecu); f_005ea2c1();
    /* 004062ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004062ef: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004062f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004062f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004062f6: call 0x4062ff */ r_esp -= 4; W32(r_esp, 0x4062fbu); f_004062ff();
    /* 004062fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004062fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004062fe: ret  */ FN_RET(0x004062dd); r_esp += 4; return;
}

void f_004062ff(void) /* FUN_004062ff */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004062ff);
    /* 004062ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406300: mov ebp, esp */ r_ebp = r_esp;
    /* 00406302: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406305: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00406308: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0040630f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00406316: jmp 0x406321 */ goto L_00406321;
L_00406318:; BB(0x00406318);
    /* 00406318: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040631b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040631e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00406321:; BB(0x00406321);
    /* 00406321: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406324: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 00406328: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040632b: jge 0x406338 */ if ((fS==fO)) goto L_00406338;
L_0040632d:; BB(0x0040632d);
    /* 0040632d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406330: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00406333: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00406336: jmp 0x406318 */ goto L_00406318;
L_00406338:; BB(0x00406338);
    /* 00406338: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040633b: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040633e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00406341: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406345: jge 0x40634e */ if ((fS==fO)) goto L_0040634e;
L_00406347:; BB(0x00406347);
    /* 00406347: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_0040634e:; BB(0x0040634e);
    /* 0040634e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00406351: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406354: jle 0x40635c */ if ((fZ||fS!=fO)) goto L_0040635c;
L_00406356:; BB(0x00406356);
    /* 00406356: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406359: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0040635c:; BB(0x0040635c);
    /* 0040635c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040635f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00406362: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 00406365: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040636c: jmp 0x406377 */ goto L_00406377;
L_0040636e:; BB(0x0040636e);
    /* 0040636e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406371: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406374: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00406377:; BB(0x00406377);
    /* 00406377: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040637a: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 0040637e: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406381: jge 0x406420 */ if ((fS==fO)) goto L_00406420;
L_00406387:; BB(0x00406387);
    /* 00406387: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040638a: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00406390: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406393: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406397: je 0x40640d */ if (fZ) goto L_0040640d;
L_00406399:; BB(0x00406399);
    /* 00406399: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040639c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040639d: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004063a2: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004063a2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004063a2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004063a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004063a5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004063a8: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004063ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004063b1: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004063b4: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4063b9u); f_005ea1cf();
    /* 004063b9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004063bd: jne 0x4063ea */ if (!fZ) goto L_004063ea;
L_004063bf:; BB(0x004063bf);
    /* 004063bf: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004063c3: jle 0x4063ea */ if ((fZ||fS!=fO)) goto L_004063ea;
L_004063c5:; BB(0x004063c5);
    /* 004063c5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004063c8: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004063ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004063d1: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004063d4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004063d7: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004063dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004063e0: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 004063e3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004063e5: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4063e8u); call_ind(t); }
    /* 004063e8: jmp 0x40640d */ goto L_0040640d;
L_004063ea:; BB(0x004063ea);
    /* 004063ea: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004063ed: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 004063f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004063f6: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004063f9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004063fc: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00406402: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406405: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 00406408: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040640a: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x40640du); call_ind(t); }
L_0040640d:; BB(0x0040640d);
    /* 0040640d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406410: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00406411: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00406416: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00406416, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00406416, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00406418: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0040641b: jmp 0x40636e */ goto L_0040636e;
L_00406420:; BB(0x00406420);
    /* 00406420: mov esp, ebp */ r_esp = r_ebp;
    /* 00406422: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406423: ret 4 */ FN_RET(0x004062ff); r_esp += 8; return;
}

void f_00406426(void) /* FUN_00406426 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406426);
    /* 00406426: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406427: mov ebp, esp */ r_ebp = r_esp;
    /* 00406429: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040642c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040642f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406432: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406433: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406436: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x40643bu); f_005e626d();
    /* 0040643b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040643e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00406441: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00406445: ja 0x4066de */ if ((!fC&&!fZ)) goto L_004066de;
L_0040644b:; BB(0x0040644b);
    /* 0040644b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040644e: jmp dword ptr [edx*4 + 0x4066e4] */ { u32 t = R32((u32)(r_edx*4+0x4066e4u)); switch (t) { case 0x406455u: goto L_00406455; case 0x406534u: goto L_00406534; case 0x4065a9u: goto L_004065a9; case 0x40661eu: goto L_0040661e; case 0x40669fu: goto L_0040669f; default: UNSUP(0x0040644e, "jump table entry is not a known target"); } }
L_00406455:; BB(0x00406455);
    /* 00406455: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 0040645b: call 0x405567 */ r_esp -= 4; W32(r_esp, 0x406460u); f_00405567();
    /* 00406460: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00406466: jmp 0x406474 */ goto L_00406474;
L_00406468:; BB(0x00406468);
    /* 00406468: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0040646c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00406470: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00406474:; BB(0x00406474);
    /* 00406474: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00406478: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040647b: jge 0x4064dd */ if ((fS==fO)) goto L_004064dd;
L_0040647d:; BB(0x0040647d);
    /* 0040647d: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00406481: add edx, 0x1608c */ {  u32 a = r_edx; u32 b = 0x1608cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406487: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406488: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040648c: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00406492: mov ecx, dword ptr [ecx + eax*4 + 0x2c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2cu));
    /* 00406496: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40649bu); f_005ea0c3();
    /* 0040649b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040649d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4064a2u); f_0048ab58();
    /* 004064a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004064a5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004064a8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004064ac: je 0x4064bd */ if (fZ) goto L_004064bd;
L_004064ae:; BB(0x004064ae);
    /* 004064ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004064b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004064b3: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x4064b8u); f_005d7698();
    /* 004064b8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004064bb: jmp 0x4064c4 */ goto L_004064c4;
L_004064bd:; BB(0x004064bd);
    /* 004064bd: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_004064c4:; BB(0x004064c4);
    /* 004064c4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004064c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004064c8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004064cc: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004064d2: mov ecx, dword ptr [ecx + eax*4 + 0x2c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2cu));
    /* 004064d6: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x4064dbu); f_005e4060();
    /* 004064db: jmp 0x406468 */ goto L_00406468;
L_004064dd:; BB(0x004064dd);
    /* 004064dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004064df: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 004064e5: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 004064e8: call 0x5e84f9 */ r_esp -= 4; W32(r_esp, 0x4064edu); f_005e84f9();
    /* 004064ed: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004064ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004064f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004064f3: push 0x18a92 */ { u32 v = 0x18a92u; r_esp -= 4; W32(r_esp, v); }
    /* 004064f8: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 004064fd: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00406500: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x406505u); f_005e8389();
    /* 00406505: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406507: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040650a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040650c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040650f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x406512u); call_ind(t); }
    /* 00406512: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00406518: call 0x45ccd6 */ r_esp -= 4; W32(r_esp, 0x40651du); f_0045ccd6();
    /* 0040651d: imul eax, eax, 9 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x9u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00406520: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406523: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406524: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406527: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406529: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040652c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x40652fu); call_ind(t); }
    /* 0040652f: jmp 0x4066de */ goto L_004066de;
L_00406534:; BB(0x00406534);
    /* 00406534: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406536: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406538: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040653a: push 0x18a93 */ { u32 v = 0x18a93u; r_esp -= 4; W32(r_esp, v); }
    /* 0040653f: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00406544: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 0040654a: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x40654fu); f_005e8389();
    /* 0040654f: push 0x1608f */ { u32 v = 0x1608fu; r_esp -= 4; W32(r_esp, v); }
    /* 00406554: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 0040655a: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0040655d: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x406562u); f_005ea0c3();
    /* 00406562: mov edx, dword ptr [0x6f5330] */ r_edx = R32((u32)(0x6f5330u));
    /* 00406568: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0040656b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040656c: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00406572: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 00406575: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x40657au); f_005ea1cf();
    /* 0040657a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040657c: mov edx, dword ptr [0x6f5330] */ r_edx = R32((u32)(0x6f5330u));
    /* 00406582: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00406585: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x40658au); f_005e4060();
    /* 0040658a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040658c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040658f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406591: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406594: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x406597u); call_ind(t); }
    /* 00406597: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00406599: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040659c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040659e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004065a1: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4065a4u); call_ind(t); }
    /* 004065a4: jmp 0x4066de */ goto L_004066de;
L_004065a9:; BB(0x004065a9);
    /* 004065a9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004065ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004065ad: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004065af: push 0x18a93 */ { u32 v = 0x18a93u; r_esp -= 4; W32(r_esp, v); }
    /* 004065b4: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 004065b9: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 004065bf: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4065c4u); f_005e8389();
    /* 004065c4: push 0x16090 */ { u32 v = 0x16090u; r_esp -= 4; W32(r_esp, v); }
    /* 004065c9: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004065cf: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 004065d2: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4065d7u); f_005ea0c3();
    /* 004065d7: mov edx, dword ptr [0x6f5330] */ r_edx = R32((u32)(0x6f5330u));
    /* 004065dd: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 004065e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004065e1: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004065e7: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 004065ea: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4065efu); f_005ea1cf();
    /* 004065ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004065f1: mov edx, dword ptr [0x6f5330] */ r_edx = R32((u32)(0x6f5330u));
    /* 004065f7: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004065fa: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x4065ffu); f_005e4060();
    /* 004065ff: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00406601: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406604: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406606: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406609: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40660cu); call_ind(t); }
    /* 0040660c: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0040660e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406611: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406613: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406616: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x406619u); call_ind(t); }
    /* 00406619: jmp 0x4066de */ goto L_004066de;
L_0040661e:; BB(0x0040661e);
    /* 0040661e: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00406623: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00406626: call 0x5e84af */ r_esp -= 4; W32(r_esp, 0x40662bu); f_005e84af();
    /* 0040662b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040662d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040662f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406631: push 0x18a93 */ { u32 v = 0x18a93u; r_esp -= 4; W32(r_esp, v); }
    /* 00406636: mov ecx, dword ptr [0x6f532c] */ r_ecx = R32((u32)(0x6f532cu));
    /* 0040663c: mov ecx, dword ptr [ecx + 0x1cb4] */ r_ecx = R32((u32)(r_ecx+0x1cb4u));
    /* 00406642: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x406647u); f_005e8389();
    /* 00406647: push 0x16091 */ { u32 v = 0x16091u; r_esp -= 4; W32(r_esp, v); }
    /* 0040664c: mov edx, dword ptr [0x6f5330] */ r_edx = R32((u32)(0x6f5330u));
    /* 00406652: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 00406655: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x40665au); f_005ea0c3();
    /* 0040665a: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 0040665f: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00406665: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406666: mov edx, dword ptr [0x6f5330] */ r_edx = R32((u32)(0x6f5330u));
    /* 0040666c: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0040666f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x406674u); f_005ea1cf();
    /* 00406674: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406676: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 0040667b: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0040667e: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x406683u); f_005e4060();
    /* 00406683: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00406685: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406688: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040668a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040668d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x406690u); call_ind(t); }
    /* 00406690: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406692: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406695: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406697: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040669a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x40669du); call_ind(t); }
    /* 0040669d: jmp 0x4066de */ goto L_004066de;
L_0040669f:; BB(0x0040669f);
    /* 0040669f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004066a1: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 004066a6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004066a9: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 004066af: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004066b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004066b4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4066b7u); call_ind(t); }
    /* 004066b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004066b9: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 004066be: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004066c1: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 004066c7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004066ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004066cc: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4066cfu); call_ind(t); }
    /* 004066cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004066d1: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 004066d6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004066d9: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x4066deu); f_005e62ca();
L_004066de:; BB(0x004066de);
    /* 004066de: mov esp, ebp */ r_esp = r_ebp;
    /* 004066e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004066e1: ret 4 */ FN_RET(0x00406426); r_esp += 8; return;
}

void f_004066f8(void) /* FUN_004066f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004066f8);
    /* 004066f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004066f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004066fb: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004066fe: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00406701: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406705: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406708: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x40670du); f_005e626d();
    /* 0040670d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406710: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00406713: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00406717: ja 0x406932 */ if ((!fC&&!fZ)) goto L_00406932;
L_0040671d:; BB(0x0040671d);
    /* 0040671d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00406720: jmp dword ptr [edx*4 + 0x406938] */ { u32 t = R32((u32)(r_edx*4+0x406938u)); switch (t) { case 0x406727u: goto L_00406727; case 0x40679eu: goto L_0040679e; case 0x4067cau: goto L_004067ca; case 0x406839u: goto L_00406839; case 0x406865u: goto L_00406865; case 0x4068d1u: goto L_004068d1; default: UNSUP(0x00406720, "jump table entry is not a known target"); } }
L_00406727:; BB(0x00406727);
    /* 00406727: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040672a: call 0x406950 */ r_esp -= 4; W32(r_esp, 0x40672fu); f_00406950();
    /* 0040672f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406731: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406734: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406736: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406739: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40673cu); call_ind(t); }
    /* 0040673c: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0040673e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x406743u); f_0048ab58();
    /* 00406743: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406746: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00406749: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040674d: je 0x406767 */ if (fZ) goto L_00406767;
L_0040674f:; BB(0x0040674f);
    /* 0040674f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406752: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406753: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406756: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00406759: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040675a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040675d: call 0x406cde */ r_esp -= 4; W32(r_esp, 0x406762u); f_00406cde();
    /* 00406762: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00406765: jmp 0x40676e */ goto L_0040676e;
L_00406767:; BB(0x00406767);
    /* 00406767: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0040676e:; BB(0x0040676e);
    /* 0040676e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00406771: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406772: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00406778: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 0040677b: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x406780u); f_005e4060();
    /* 00406780: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406782: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406784: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406786: push 0x1926f */ { u32 v = 0x1926fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040678b: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00406791: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 00406794: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x406799u); f_005e8389();
    /* 00406799: jmp 0x406932 */ goto L_00406932;
L_0040679e:; BB(0x0040679e);
    /* 0040679e: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 004067a3: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 004067a6: call 0x5e84af */ r_esp -= 4; W32(r_esp, 0x4067abu); f_005e84af();
    /* 004067ab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004067ad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004067b0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004067b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004067b5: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4067b8u); call_ind(t); }
    /* 004067b8: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004067ba: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004067bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004067bf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004067c2: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4067c5u); call_ind(t); }
    /* 004067c5: jmp 0x406932 */ goto L_00406932;
L_004067ca:; BB(0x004067ca);
    /* 004067ca: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004067cc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004067cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004067d1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004067d4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4067d7u); call_ind(t); }
    /* 004067d7: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004067d9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4067deu); f_0048ab58();
    /* 004067de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004067e1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004067e4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004067e8: je 0x406802 */ if (fZ) goto L_00406802;
L_004067ea:; BB(0x004067ea);
    /* 004067ea: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004067ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004067ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004067f1: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004067f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004067f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004067f8: call 0x406c88 */ r_esp -= 4; W32(r_esp, 0x4067fdu); f_00406c88();
    /* 004067fd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00406800: jmp 0x406809 */ goto L_00406809;
L_00406802:; BB(0x00406802);
    /* 00406802: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00406809:; BB(0x00406809);
    /* 00406809: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040680c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040680d: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00406813: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 00406816: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x40681bu); f_005e4060();
    /* 0040681b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040681d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040681f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406821: push 0x1926f */ { u32 v = 0x1926fu; r_esp -= 4; W32(r_esp, v); }
    /* 00406826: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 0040682c: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0040682f: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x406834u); f_005e8389();
    /* 00406834: jmp 0x406932 */ goto L_00406932;
L_00406839:; BB(0x00406839);
    /* 00406839: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 0040683e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00406841: call 0x5e84af */ r_esp -= 4; W32(r_esp, 0x406846u); f_005e84af();
    /* 00406846: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00406848: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040684b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040684d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406850: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x406853u); call_ind(t); }
    /* 00406853: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00406855: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406858: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040685a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040685d: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x406860u); call_ind(t); }
    /* 00406860: jmp 0x406932 */ goto L_00406932;
L_00406865:; BB(0x00406865);
    /* 00406865: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00406867: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040686a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040686c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040686f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x406872u); call_ind(t); }
    /* 00406872: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00406874: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x406879u); f_0048ab58();
    /* 00406879: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040687c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040687f: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406883: je 0x40689d */ if (fZ) goto L_0040689d;
L_00406885:; BB(0x00406885);
    /* 00406885: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406888: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406889: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040688c: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0040688f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406890: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406893: call 0x406cde */ r_esp -= 4; W32(r_esp, 0x406898u); f_00406cde();
    /* 00406898: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040689b: jmp 0x4068a4 */ goto L_004068a4;
L_0040689d:; BB(0x0040689d);
    /* 0040689d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_004068a4:; BB(0x004068a4);
    /* 004068a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004068a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004068a8: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004068ae: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 004068b1: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x4068b6u); f_005e4060();
    /* 004068b6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004068b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004068ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004068bc: push 0x1926f */ { u32 v = 0x1926fu; r_esp -= 4; W32(r_esp, v); }
    /* 004068c1: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 004068c7: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 004068ca: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4068cfu); f_005e8389();
    /* 004068cf: jmp 0x406932 */ goto L_00406932;
L_004068d1:; BB(0x004068d1);
    /* 004068d1: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 004068d6: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 004068d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004068da: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004068e0: call 0x404aad */ r_esp -= 4; W32(r_esp, 0x4068e5u); f_00404aad();
    /* 004068e5: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 004068eb: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 004068ee: call 0x5e84af */ r_esp -= 4; W32(r_esp, 0x4068f3u); f_005e84af();
    /* 004068f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004068f5: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 004068fa: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004068fd: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 00406903: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00406906: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406908: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x40690bu); call_ind(t); }
    /* 0040690b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040690d: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 00406912: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00406915: mov edx, dword ptr [0x6f532c] */ r_edx = R32((u32)(0x6f532cu));
    /* 0040691b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040691e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406920: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x406923u); call_ind(t); }
    /* 00406923: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406925: mov eax, dword ptr [0x6f532c] */ r_eax = R32((u32)(0x6f532cu));
    /* 0040692a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040692d: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x406932u); f_005e62ca();
L_00406932:; BB(0x00406932);
    /* 00406932: mov esp, ebp */ r_esp = r_ebp;
    /* 00406934: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406935: ret 4 */ FN_RET(0x004066f8); r_esp += 8; return;
}

void f_00406950(void) /* FUN_00406950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406950);
    /* 00406950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406951: mov ebp, esp */ r_ebp = r_esp;
    /* 00406953: sub esp, 0x144 */ {  u32 a = r_esp; u32 b = 0x144u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406959: mov dword ptr [ebp - 0x13c], ecx */ W32((u32)(r_ebp+0xfffffec4u), r_ecx);
    /* 0040695f: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00406966: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 0040696d: mov dword ptr [ebp - 8], 5 */ W32((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 00406974: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0040697b: mov dword ptr [ebp - 0x138], 4 */ W32((u32)(r_ebp+0xfffffec8u), 0x4u);
    /* 00406985: mov dword ptr [ebp - 0x134], 6 */ W32((u32)(r_ebp+0xfffffeccu), 0x6u);
    /* 0040698f: mov dword ptr [ebp - 0x130], 9 */ W32((u32)(r_ebp+0xfffffed0u), 0x9u);
    /* 00406999: mov dword ptr [ebp - 0x12c], 2 */ W32((u32)(r_ebp+0xfffffed4u), 0x2u);
    /* 004069a3: mov dword ptr [ebp - 0x128], 7 */ W32((u32)(r_ebp+0xfffffed8u), 0x7u);
    /* 004069ad: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
    /* 004069b7: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 004069bc: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 004069bf: mov dword ptr [ebp - 0x140], ecx */ W32((u32)(r_ebp+0xfffffec0u), r_ecx);
    /* 004069c5: cmp dword ptr [ebp - 0x140], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffec0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004069cc: ja 0x406a3b */ if ((!fC&&!fZ)) goto L_00406a3b;
L_004069ce:; BB(0x004069ce);
    /* 004069ce: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 004069d4: jmp dword ptr [edx*4 + 0x406c68] */ { u32 t = R32((u32)(r_edx*4+0x406c68u)); switch (t) { case 0x4069dbu: goto L_004069db; case 0x4069f4u: goto L_004069f4; case 0x406a10u: goto L_00406a10; case 0x406a2cu: goto L_00406a2c; case 0x406b10u: goto L_00406b10; case 0x406b47u: goto L_00406b47; case 0x406b7bu: goto L_00406b7b; case 0x406bafu: goto L_00406baf; default: UNSUP(0x004069d4, "jump table entry is not a known target"); } }
L_004069db:; BB(0x004069db);
    /* 004069db: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004069dd: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4069e2u); f_0060ee31();
    /* 004069e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004069e5: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 004069eb: mov edx, dword ptr [ebp + eax*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 004069ef: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 004069f2: jmp 0x406a3b */ goto L_00406a3b;
L_004069f4:; BB(0x004069f4);
    /* 004069f4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004069f6: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4069fbu); f_0060ee31();
    /* 004069fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004069fe: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406a04: mov edx, dword ptr [ebp + eax*4 - 0x138] */ r_edx = R32((u32)(r_ebp+r_eax*4+0xfffffec8u));
    /* 00406a0b: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00406a0e: jmp 0x406a3b */ goto L_00406a3b;
L_00406a10:; BB(0x00406a10);
    /* 00406a10: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00406a12: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x406a17u); f_0060ee31();
    /* 00406a17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406a1a: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406a20: mov edx, dword ptr [ebp + eax*4 - 0x12c] */ r_edx = R32((u32)(r_ebp+r_eax*4+0xfffffed4u));
    /* 00406a27: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00406a2a: jmp 0x406a3b */ goto L_00406a3b;
L_00406a2c:; BB(0x00406a2c);
    /* 00406a2c: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406a32: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 00406a38: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
L_00406a3b:; BB(0x00406a3b);
    /* 00406a3b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00406a3d: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x406a42u); f_0060ee31();
    /* 00406a42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406a45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406a48: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00406a4b: mov edx, dword ptr [0x6f5330] */ r_edx = R32((u32)(0x6f5330u));
    /* 00406a51: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00406a54: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x406a59u); f_005ea257();
    /* 00406a59: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406a5c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00406a5d: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00406a62: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00406a62, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00406a62, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00406a64: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406a6a: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00406a6d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00406a6f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x406a74u); f_0060ee31();
    /* 00406a74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406a77: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406a7a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00406a7d: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406a83: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00406a86: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406a89: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00406a8a: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00406a8f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00406a8f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00406a8f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00406a91: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406a97: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00406a9a: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 00406aa4: jmp 0x406ab5 */ goto L_00406ab5;
L_00406aa6:; BB(0x00406aa6);
    /* 00406aa6: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00406aac: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00406aaf: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
L_00406ab5:; BB(0x00406ab5);
    /* 00406ab5: cmp dword ptr [ebp - 0x124], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406abc: jge 0x406ae4 */ if ((fS==fO)) goto L_00406ae4;
L_00406abe:; BB(0x00406abe);
    /* 00406abe: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406ac4: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00406ac7: add eax, dword ptr [ebp - 0x124] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffedcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406acd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00406ace: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00406ad3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00406ad3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00406ad3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00406ad5: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406adb: cmp edx, dword ptr [eax + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406ade: jne 0x406ae2 */ if (!fZ) goto L_00406ae2;
L_00406ae0:; BB(0x00406ae0);
    /* 00406ae0: jmp 0x406ae4 */ goto L_00406ae4;
L_00406ae2:; BB(0x00406ae2);
    /* 00406ae2: jmp 0x406aa6 */ goto L_00406aa6;
L_00406ae4:; BB(0x00406ae4);
    /* 00406ae4: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00406aea: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00406aed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00406af0: mov dword ptr [ebp - 0x144], edx */ W32((u32)(r_ebp+0xfffffebcu), r_edx);
    /* 00406af6: cmp dword ptr [ebp - 0x144], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffebcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00406afd: ja 0x406be1 */ if ((!fC&&!fZ)) goto L_00406be1;
L_00406b03:; BB(0x00406b03);
    /* 00406b03: mov eax, dword ptr [ebp - 0x144] */ r_eax = R32((u32)(r_ebp+0xfffffebcu));
    /* 00406b09: jmp dword ptr [eax*4 + 0x406c78] */ { u32 t = R32((u32)(r_eax*4+0x406c78u)); switch (t) { case 0x406a2cu: goto L_00406a2c; case 0x406a10u: goto L_00406a10; case 0x4069f4u: goto L_004069f4; case 0x4069dbu: goto L_004069db; case 0x406b10u: goto L_00406b10; case 0x406b47u: goto L_00406b47; case 0x406b7bu: goto L_00406b7b; case 0x406bafu: goto L_00406baf; default: UNSUP(0x00406b09, "jump table entry is not a known target"); } }
L_00406b10:; BB(0x00406b10);
    /* 00406b10: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406b14: jle 0x406b2d */ if ((fZ||fS!=fO)) goto L_00406b2d;
L_00406b16:; BB(0x00406b16);
    /* 00406b16: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406b1c: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00406b1f: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00406b22: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406b28: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00406b2b: jmp 0x406b42 */ goto L_00406b42;
L_00406b2d:; BB(0x00406b2d);
    /* 00406b2d: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406b33: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00406b36: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406b39: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406b3f: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
L_00406b42:; BB(0x00406b42);
    /* 00406b42: jmp 0x406be1 */ goto L_00406be1;
L_00406b47:; BB(0x00406b47);
    /* 00406b47: cmp dword ptr [ebp - 0x18], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406b4b: jle 0x406b64 */ if ((fZ||fS!=fO)) goto L_00406b64;
L_00406b4d:; BB(0x00406b4d);
    /* 00406b4d: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406b53: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00406b56: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00406b59: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406b5f: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00406b62: jmp 0x406b79 */ goto L_00406b79;
L_00406b64:; BB(0x00406b64);
    /* 00406b64: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406b6a: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00406b6d: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406b70: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406b76: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
L_00406b79:; BB(0x00406b79);
    /* 00406b79: jmp 0x406be1 */ goto L_00406be1;
L_00406b7b:; BB(0x00406b7b);
    /* 00406b7b: cmp dword ptr [ebp - 0x18], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406b7f: jle 0x406b98 */ if ((fZ||fS!=fO)) goto L_00406b98;
L_00406b81:; BB(0x00406b81);
    /* 00406b81: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406b87: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00406b8a: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00406b8d: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406b93: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00406b96: jmp 0x406bad */ goto L_00406bad;
L_00406b98:; BB(0x00406b98);
    /* 00406b98: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406b9e: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00406ba1: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406ba4: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406baa: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
L_00406bad:; BB(0x00406bad);
    /* 00406bad: jmp 0x406be1 */ goto L_00406be1;
L_00406baf:; BB(0x00406baf);
    /* 00406baf: cmp dword ptr [ebp - 0x18], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406bb3: jne 0x406bcc */ if (!fZ) goto L_00406bcc;
L_00406bb5:; BB(0x00406bb5);
    /* 00406bb5: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406bbb: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00406bbe: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00406bc1: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406bc7: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00406bca: jmp 0x406be1 */ goto L_00406be1;
L_00406bcc:; BB(0x00406bcc);
    /* 00406bcc: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406bd2: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00406bd5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406bd8: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406bde: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
L_00406be1:; BB(0x00406be1);
    /* 00406be1: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406be7: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406beb: jge 0x406c02 */ if ((fS==fO)) goto L_00406c02;
L_00406bed:; BB(0x00406bed);
    /* 00406bed: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406bf3: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00406bf6: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406bf9: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406bff: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
L_00406c02:; BB(0x00406c02);
    /* 00406c02: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406c08: cmp dword ptr [edx + 0x24], 9 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406c0c: jle 0x406c23 */ if ((fZ||fS!=fO)) goto L_00406c23;
L_00406c0e:; BB(0x00406c0e);
    /* 00406c0e: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406c14: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00406c17: sub ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00406c1a: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406c20: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
L_00406c23:; BB(0x00406c23);
    /* 00406c23: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406c29: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00406c2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406c2d: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406c33: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00406c36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406c37: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00406c3d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00406c40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406c41: push 0x64c850 */ { u32 v = 0x64c850u; r_esp -= 4; W32(r_esp, v); }
    /* 00406c46: lea eax, [ebp - 0x11c] */ r_eax = (u32)(r_ebp+0xfffffee4u);
    /* 00406c4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406c4d: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x406c52u); f_00624050();
    /* 00406c52: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406c55: lea ecx, [ebp - 0x11c] */ r_ecx = (u32)(r_ebp+0xfffffee4u);
    /* 00406c5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406c5c: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x406c61u); f_0060fc40();
    /* 00406c61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406c64: mov esp, ebp */ r_esp = r_ebp;
    /* 00406c66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406c67: ret  */ FN_RET(0x00406950); r_esp += 4; return;
}

void f_00406c88(void) /* FUN_00406c88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406c88);
    /* 00406c88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406c89: mov ebp, esp */ r_ebp = r_esp;
    /* 00406c8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406c8c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406c8f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00406c92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406c93: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406c96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406c97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406c9a: call 0x5d7a01 */ r_esp -= 4; W32(r_esp, 0x406c9fu); f_005d7a01();
    /* 00406c9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406ca2: mov dword ptr [edx], 0x6334dc */ W32((u32)(r_edx), 0x6334dcu);
    /* 00406ca8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406cab: mov esp, ebp */ r_esp = r_ebp;
    /* 00406cad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406cae: ret 8 */ FN_RET(0x00406c88); r_esp += 12; return;
}

void f_00406cb1(void) /* FUN_00406cb1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406cb1);
    /* 00406cb1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406cb2: mov ebp, esp */ r_ebp = r_esp;
    /* 00406cb4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406cb7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00406cba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406cbd: call 0x5d75f0 */ r_esp -= 4; W32(r_esp, 0x406cc2u); f_005d75f0();
    /* 00406cc2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00406cc5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406cc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406ccb: cmp ecx, dword ptr [eax + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406cce: jle 0x406cd7 */ if ((fZ||fS!=fO)) goto L_00406cd7;
L_00406cd0:; BB(0x00406cd0);
    /* 00406cd0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00406cd7:; BB(0x00406cd7);
    /* 00406cd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406cda: mov esp, ebp */ r_esp = r_ebp;
    /* 00406cdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406cdd: ret  */ FN_RET(0x00406cb1); r_esp += 4; return;
}

void f_00406cde(void) /* FUN_00406cde */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406cde);
    /* 00406cde: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406cdf: mov ebp, esp */ r_ebp = r_esp;
    /* 00406ce1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406ce2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406ce5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00406ce8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406ce9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406cec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406ced: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406cf0: call 0x5d7a8e */ r_esp -= 4; W32(r_esp, 0x406cf5u); f_005d7a8e();
    /* 00406cf5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406cf8: mov dword ptr [edx], 0x6334f4 */ W32((u32)(r_edx), 0x6334f4u);
    /* 00406cfe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406d01: mov esp, ebp */ r_esp = r_ebp;
    /* 00406d03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406d04: ret 8 */ FN_RET(0x00406cde); r_esp += 12; return;
}

void f_00406d07(void) /* FUN_00406d07 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406d07);
    /* 00406d07: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406d08: mov ebp, esp */ r_ebp = r_esp;
    /* 00406d0a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406d0d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00406d10: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406d13: call 0x5d75f0 */ r_esp -= 4; W32(r_esp, 0x406d18u); f_005d75f0();
    /* 00406d18: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00406d1b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406d1f: jge 0x406d2a */ if ((fS==fO)) goto L_00406d2a;
L_00406d21:; BB(0x00406d21);
    /* 00406d21: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406d24: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00406d27: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00406d2a:; BB(0x00406d2a);
    /* 00406d2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406d2d: mov esp, ebp */ r_esp = r_ebp;
    /* 00406d2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406d30: ret  */ FN_RET(0x00406d07); r_esp += 4; return;
}

void f_00406d31(void) /* FUN_00406d31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406d31);
    /* 00406d31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406d32: mov ebp, esp */ r_ebp = r_esp;
    /* 00406d34: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406d37: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00406d3a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406d3d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00406d40: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x406d45u); f_005ea279();
    /* 00406d45: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00406d48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406d4b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00406d4e: cmp dword ptr [ebp - 0xc], 0x16094 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x16094u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406d55: je 0x406d6b */ if (fZ) goto L_00406d6b;
L_00406d57:; BB(0x00406d57);
    /* 00406d57: cmp dword ptr [ebp - 0xc], 0x16095 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x16095u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406d5e: je 0x406d7d */ if (fZ) goto L_00406d7d;
L_00406d60:; BB(0x00406d60);
    /* 00406d60: cmp dword ptr [ebp - 0xc], 0x16096 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x16096u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406d67: je 0x406d8f */ if (fZ) goto L_00406d8f;
L_00406d69:; BB(0x00406d69);
    /* 00406d69: jmp 0x406d9f */ goto L_00406d9f;
L_00406d6b:; BB(0x00406d6b);
    /* 00406d6b: push 0x16095 */ { u32 v = 0x16095u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d70: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406d73: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00406d76: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x406d7bu); f_005ea0c3();
    /* 00406d7b: jmp 0x406d9f */ goto L_00406d9f;
L_00406d7d:; BB(0x00406d7d);
    /* 00406d7d: push 0x16096 */ { u32 v = 0x16096u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d82: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406d85: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00406d88: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x406d8du); f_005ea0c3();
    /* 00406d8d: jmp 0x406d9f */ goto L_00406d9f;
L_00406d8f:; BB(0x00406d8f);
    /* 00406d8f: push 0x16094 */ { u32 v = 0x16094u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d94: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406d97: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00406d9a: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x406d9fu); f_005ea0c3();
L_00406d9f:; BB(0x00406d9f);
    /* 00406d9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406da1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406da4: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00406da7: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x406dacu); f_005ea1cf();
    /* 00406dac: mov esp, ebp */ r_esp = r_ebp;
    /* 00406dae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406daf: ret  */ FN_RET(0x00406d31); r_esp += 4; return;
}

void f_00406db0(void) /* FUN_00406db0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406db0);
    /* 00406db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00406db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406db4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406db7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00406dba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406dbb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00406dbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406dbf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00406dc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406dc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406dc6: call 0x5d7c5c */ r_esp -= 4; W32(r_esp, 0x406dcbu); f_005d7c5c();
    /* 00406dcb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406dce: mov dword ptr [eax], 0x63350c */ W32((u32)(r_eax), 0x63350cu);
    /* 00406dd4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406dd7: mov esp, ebp */ r_esp = r_ebp;
    /* 00406dd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406dda: ret 0xc */ FN_RET(0x00406db0); r_esp += 16; return;
}

void f_00406ddd(void) /* FUN_00406ddd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406ddd);
    /* 00406ddd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406dde: mov ebp, esp */ r_ebp = r_esp;
    /* 00406de0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406de1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406de4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406de7: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406deb: jne 0x406def */ if (!fZ) goto L_00406def;
L_00406ded:; BB(0x00406ded);
    /* 00406ded: jmp 0x406e64 */ goto L_00406e64;
L_00406def:; BB(0x00406def);
    /* 00406def: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406df2: call 0x5d7cb6 */ r_esp -= 4; W32(r_esp, 0x406df7u); f_005d7cb6();
    /* 00406df7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406df9: je 0x406e47 */ if (fZ) goto L_00406e47;
L_00406dfb:; BB(0x00406dfb);
    /* 00406dfb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406dfe: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00406e01: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x406e06u); f_005ea279();
    /* 00406e06: cmp eax, 0x16098 */ {  u32 a = r_eax; u32 b = 0x16098u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406e0b: jne 0x406e37 */ if (!fZ) goto L_00406e37;
L_00406e0d:; BB(0x00406e0d);
    /* 00406e0d: push 0x16097 */ { u32 v = 0x16097u; r_esp -= 4; W32(r_esp, v); }
    /* 00406e12: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e15: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00406e18: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x406e1du); f_005ea0c3();
    /* 00406e1d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e20: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406e24: jne 0x406e35 */ if (!fZ) goto L_00406e35;
L_00406e26:; BB(0x00406e26);
    /* 00406e26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e29: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00406e2c: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00406e2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e32: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
L_00406e35:; BB(0x00406e35);
    /* 00406e35: jmp 0x406e47 */ goto L_00406e47;
L_00406e37:; BB(0x00406e37);
    /* 00406e37: push 0x16098 */ { u32 v = 0x16098u; r_esp -= 4; W32(r_esp, v); }
    /* 00406e3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e3f: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00406e42: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x406e47u); f_005ea0c3();
L_00406e47:; BB(0x00406e47);
    /* 00406e47: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e4a: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406e4e: jne 0x406e64 */ if (!fZ) goto L_00406e64;
L_00406e50:; BB(0x00406e50);
    /* 00406e50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e53: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406e57: jg 0x406e64 */ if ((!fZ&&fS==fO)) goto L_00406e64;
L_00406e59:; BB(0x00406e59);
    /* 00406e59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e5c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00406e5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e61: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x406e64u); call_ind(t); }
L_00406e64:; BB(0x00406e64);
    /* 00406e64: mov esp, ebp */ r_esp = r_ebp;
    /* 00406e66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406e67: ret  */ FN_RET(0x00406ddd); r_esp += 4; return;
}

void f_00406e70(void) /* FUN_00406e70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406e70);
    /* 00406e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00406e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406e74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406e77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e7a: call 0x4031bd */ r_esp -= 4; W32(r_esp, 0x406e7fu); f_004031bd();
    /* 00406e7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406e82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00406e85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406e87: je 0x406e95 */ if (fZ) goto L_00406e95;
L_00406e89:; BB(0x00406e89);
    /* 00406e89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406e8d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x406e92u); f_0048ac1b();
    /* 00406e92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00406e95:; BB(0x00406e95);
    /* 00406e95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e98: mov esp, ebp */ r_esp = r_ebp;
    /* 00406e9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406e9b: ret 4 */ FN_RET(0x00406e70); r_esp += 8; return;
}

void f_00406ea0(void) /* FUN_00406ea0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406ea0);
    /* 00406ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00406ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406ea7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406eaa: call 0x4059c1 */ r_esp -= 4; W32(r_esp, 0x406eafu); f_004059c1();
    /* 00406eaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406eb2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00406eb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406eb7: je 0x406ec5 */ if (fZ) goto L_00406ec5;
L_00406eb9:; BB(0x00406eb9);
    /* 00406eb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406ebc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406ebd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x406ec2u); f_0048ac1b();
    /* 00406ec2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00406ec5:; BB(0x00406ec5);
    /* 00406ec5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406ec8: mov esp, ebp */ r_esp = r_ebp;
    /* 00406eca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406ecb: ret 4 */ FN_RET(0x00406ea0); r_esp += 8; return;
}

void f_00406ed0(void) /* FUN_00406ed0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406ed0);
    /* 00406ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00406ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406ed7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406eda: call 0x405a3c */ r_esp -= 4; W32(r_esp, 0x406edfu); f_00405a3c();
    /* 00406edf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406ee2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00406ee5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406ee7: je 0x406ef5 */ if (fZ) goto L_00406ef5;
L_00406ee9:; BB(0x00406ee9);
    /* 00406ee9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406eec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406eed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x406ef2u); f_0048ac1b();
    /* 00406ef2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00406ef5:; BB(0x00406ef5);
    /* 00406ef5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406ef8: mov esp, ebp */ r_esp = r_ebp;
    /* 00406efa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406efb: ret 4 */ FN_RET(0x00406ed0); r_esp += 8; return;
}

void f_00406f00(void) /* FUN_00406f00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406f00);
    /* 00406f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00406f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406f07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406f0a: call 0x405e01 */ r_esp -= 4; W32(r_esp, 0x406f0fu); f_00405e01();
    /* 00406f0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406f12: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00406f15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406f17: je 0x406f25 */ if (fZ) goto L_00406f25;
L_00406f19:; BB(0x00406f19);
    /* 00406f19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406f1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406f1d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x406f22u); f_0048ac1b();
    /* 00406f22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00406f25:; BB(0x00406f25);
    /* 00406f25: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406f28: mov esp, ebp */ r_esp = r_ebp;
    /* 00406f2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406f2b: ret 4 */ FN_RET(0x00406f00); r_esp += 8; return;
}

void f_00406f30(void) /* FUN_00406f30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406f30);
    /* 00406f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00406f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406f34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406f37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406f3a: call 0x405ec9 */ r_esp -= 4; W32(r_esp, 0x406f3fu); f_00405ec9();
    /* 00406f3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406f42: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00406f45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406f47: je 0x406f55 */ if (fZ) goto L_00406f55;
L_00406f49:; BB(0x00406f49);
    /* 00406f49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406f4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406f4d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x406f52u); f_0048ac1b();
    /* 00406f52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00406f55:; BB(0x00406f55);
    /* 00406f55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406f58: mov esp, ebp */ r_esp = r_ebp;
    /* 00406f5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406f5b: ret 4 */ FN_RET(0x00406f30); r_esp += 8; return;
}

void f_00406f60(void) /* FUN_00406f60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406f60);
    /* 00406f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00406f63: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406f66: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00406f69: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406f6c: call 0x446fe0 */ r_esp -= 4; W32(r_esp, 0x406f71u); f_00446fe0();
    /* 00406f71: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406f74: mov dword ptr [eax], 0x633524 */ W32((u32)(r_eax), 0x633524u);
    /* 00406f7a: push 0x64ca98 */ { u32 v = 0x64ca98u; r_esp -= 4; W32(r_esp, v); }
    /* 00406f7f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00406f85: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x406f8au); f_005da413();
    /* 00406f8a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406f8d: mov dword ptr [0x6f532c], ecx */ W32((u32)(0x6f532cu), r_ecx);
    /* 00406f93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406f95: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406f98: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x406f9du); f_005e5ec3();
    /* 00406f9d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00406f9f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x406fa4u); f_0048ab58();
    /* 00406fa4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406fa7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00406faa: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406fae: je 0x406fbf */ if (fZ) goto L_00406fbf;
L_00406fb0:; BB(0x00406fb0);
    /* 00406fb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406fb2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406fb5: call 0x5e82f0 */ r_esp -= 4; W32(r_esp, 0x406fbau); f_005e82f0();
    /* 00406fba: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00406fbd: jmp 0x406fc6 */ goto L_00406fc6;
L_00406fbf:; BB(0x00406fbf);
    /* 00406fbf: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00406fc6:; BB(0x00406fc6);
    /* 00406fc6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406fc9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00406fcc: mov dword ptr [edx + 0x1cb0], eax */ W32((u32)(r_edx+0x1cb0u), r_eax);
    /* 00406fd2: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00406fd4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x406fd9u); f_0048ab58();
    /* 00406fd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406fdc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00406fdf: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406fe3: je 0x406ff4 */ if (fZ) goto L_00406ff4;
L_00406fe5:; BB(0x00406fe5);
    /* 00406fe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406fe7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00406fea: call 0x5e82f0 */ r_esp -= 4; W32(r_esp, 0x406fefu); f_005e82f0();
    /* 00406fef: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00406ff2: jmp 0x406ffb */ goto L_00406ffb;
L_00406ff4:; BB(0x00406ff4);
    /* 00406ff4: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00406ffb:; BB(0x00406ffb);
    /* 00406ffb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406ffe: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407001: mov dword ptr [ecx + 0x1cb4], edx */ W32((u32)(r_ecx+0x1cb4u), r_edx);
    /* 00407007: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040700d: jmp 0x40701b */ goto L_0040701b;
L_0040700f:; BB(0x0040700f);
    /* 0040700f: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00407013: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00407017: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0040701b:; BB(0x0040701b);
    /* 0040701b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0040701f: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407022: jge 0x407040 */ if ((fS==fO)) goto L_00407040;
L_00407024:; BB(0x00407024);
    /* 00407024: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00407028: add edx, 0x1608c */ {  u32 a = r_edx; u32 b = 0x1608cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040702e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040702f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00407031: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 00407036: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00407039: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x40703eu); f_005ba9e1();
    /* 0040703e: jmp 0x40700f */ goto L_0040700f;
L_00407040:; BB(0x00407040);
    /* 00407040: push 0x1609b */ { u32 v = 0x1609bu; r_esp -= 4; W32(r_esp, v); }
    /* 00407045: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00407047: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0040704d: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00407050: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x407055u); f_005ba9e1();
    /* 00407055: push 0x1609d */ { u32 v = 0x1609du; r_esp -= 4; W32(r_esp, v); }
    /* 0040705a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040705c: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00407062: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00407065: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x40706au); f_005ba9e1();
    /* 0040706a: push 0x1609e */ { u32 v = 0x1609eu; r_esp -= 4; W32(r_esp, v); }
    /* 0040706f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00407071: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 00407076: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00407079: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x40707eu); f_005ba9e1();
    /* 0040707e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407081: mov esp, ebp */ r_esp = r_ebp;
    /* 00407083: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407084: ret  */ FN_RET(0x00406f60); r_esp += 4; return;
}

void f_00407085(void) /* FUN_00407085 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407085);
    /* 00407085: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407086: mov ebp, esp */ r_ebp = r_esp;
    /* 00407088: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040708b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0040708e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00407091: mov dword ptr [eax], 0x633524 */ W32((u32)(r_eax), 0x633524u);
    /* 00407097: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407099: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0040709f: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x4070a4u); f_005da413();
    /* 004070a4: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004070aa: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004070ad: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004070b0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004070b3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004070b7: je 0x4070ca */ if (fZ) goto L_004070ca;
L_004070b9:; BB(0x004070b9);
    /* 004070b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004070bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004070be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004070c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004070c3: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4070c5u); call_ind(t); }
    /* 004070c5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004070c8: jmp 0x4070d1 */ goto L_004070d1;
L_004070ca:; BB(0x004070ca);
    /* 004070ca: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_004070d1:; BB(0x004070d1);
    /* 004070d1: mov dword ptr [0x6f5330], 0 */ W32((u32)(0x6f5330u), 0x0u);
    /* 004070db: mov dword ptr [0x6f532c], 0 */ W32((u32)(0x6f532cu), 0x0u);
    /* 004070e5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004070e8: cmp dword ptr [eax + 0x1cb0], 0 */ {  u32 a = R32((u32)(r_eax+0x1cb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004070ef: je 0x40712e */ if (fZ) goto L_0040712e;
L_004070f1:; BB(0x004070f1);
    /* 004070f1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004070f4: mov edx, dword ptr [ecx + 0x1cb0] */ r_edx = R32((u32)(r_ecx+0x1cb0u));
    /* 004070fa: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004070fd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407100: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00407103: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407107: je 0x40711a */ if (fZ) goto L_0040711a;
L_00407109:; BB(0x00407109);
    /* 00407109: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040710b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040710e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00407110: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407113: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x407115u); call_ind(t); }
    /* 00407115: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00407118: jmp 0x407121 */ goto L_00407121;
L_0040711a:; BB(0x0040711a);
    /* 0040711a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00407121:; BB(0x00407121);
    /* 00407121: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00407124: mov dword ptr [eax + 0x1cb0], 0 */ W32((u32)(r_eax+0x1cb0u), 0x0u);
L_0040712e:; BB(0x0040712e);
    /* 0040712e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00407131: cmp dword ptr [ecx + 0x1cb4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407138: je 0x407177 */ if (fZ) goto L_00407177;
L_0040713a:; BB(0x0040713a);
    /* 0040713a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040713d: mov eax, dword ptr [edx + 0x1cb4] */ r_eax = R32((u32)(r_edx+0x1cb4u));
    /* 00407143: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00407146: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407149: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040714c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407150: je 0x407163 */ if (fZ) goto L_00407163;
L_00407152:; BB(0x00407152);
    /* 00407152: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00407154: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00407157: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00407159: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040715c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x40715eu); call_ind(t); }
    /* 0040715e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00407161: jmp 0x40716a */ goto L_0040716a;
L_00407163:; BB(0x00407163);
    /* 00407163: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0040716a:; BB(0x0040716a);
    /* 0040716a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040716d: mov dword ptr [ecx + 0x1cb4], 0 */ W32((u32)(r_ecx+0x1cb4u), 0x0u);
L_00407177:; BB(0x00407177);
    /* 00407177: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040717a: call 0x44711a */ r_esp -= 4; W32(r_esp, 0x40717fu); f_0044711a();
    /* 0040717f: mov esp, ebp */ r_esp = r_ebp;
    /* 00407181: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407182: ret  */ FN_RET(0x00407085); r_esp += 4; return;
}

void f_00407183(void) /* FUN_00407183 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407183);
    /* 00407183: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407184: mov ebp, esp */ r_ebp = r_esp;
    /* 00407186: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407189: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040718c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040718f: call 0x4476a6 */ r_esp -= 4; W32(r_esp, 0x407194u); f_004476a6();
    /* 00407194: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0040719a: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x40719fu); f_005d9e23();
    /* 0040719f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004071a2: mov dword ptr [ecx + 0x1cb8], eax */ W32((u32)(r_ecx+0x1cb8u), r_eax);
    /* 004071a8: cmp dword ptr [0x6f5330], 0 */ {  u32 a = R32((u32)(0x6f5330u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004071af: jne 0x4071e4 */ if (!fZ) goto L_004071e4;
L_004071b1:; BB(0x004071b1);
    /* 004071b1: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 004071b6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4071bbu); f_0048ab58();
    /* 004071bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004071be: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004071c1: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004071c5: je 0x4071d4 */ if (fZ) goto L_004071d4;
L_004071c7:; BB(0x004071c7);
    /* 004071c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004071ca: call 0x403090 */ r_esp -= 4; W32(r_esp, 0x4071cfu); f_00403090();
    /* 004071cf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004071d2: jmp 0x4071db */ goto L_004071db;
L_004071d4:; BB(0x004071d4);
    /* 004071d4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_004071db:; BB(0x004071db);
    /* 004071db: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004071de: mov dword ptr [0x6f5330], edx */ W32((u32)(0x6f5330u), r_edx);
L_004071e4:; BB(0x004071e4);
    /* 004071e4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004071e6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4071ebu); f_0048ab58();
    /* 004071eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004071ee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004071f1: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004071f5: je 0x407212 */ if (fZ) goto L_00407212;
L_004071f7:; BB(0x004071f7);
    /* 004071f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004071f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004071fc: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x407201u); f_005e6160();
    /* 00407201: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407204: mov dword ptr [eax], 0x6335dc */ W32((u32)(r_eax), 0x6335dcu);
    /* 0040720a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040720d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00407210: jmp 0x407219 */ goto L_00407219;
L_00407212:; BB(0x00407212);
    /* 00407212: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00407219:; BB(0x00407219);
    /* 00407219: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040721c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040721d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407220: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x407225u); f_005e5d66();
    /* 00407225: mov esp, ebp */ r_esp = r_ebp;
    /* 00407227: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407228: ret  */ FN_RET(0x00407183); r_esp += 4; return;
}

void f_00407229(void) /* FUN_00407229 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407229);
    /* 00407229: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040722a: mov ebp, esp */ r_ebp = r_esp;
    /* 0040722c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040722d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407230: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407234: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407237: call 0x447ba4 */ r_esp -= 4; W32(r_esp, 0x40723cu); f_00447ba4();
    /* 0040723c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040723e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040723f: ret 4 */ FN_RET(0x00407229); r_esp += 8; return;
}

void f_00407242(void) /* FUN_00407242 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407242);
    /* 00407242: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407243: mov ebp, esp */ r_ebp = r_esp;
    /* 00407245: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407246: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407249: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040724c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040724f: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x407254u); f_005e63b4();
    /* 00407254: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407257: jne 0x407261 */ if (!fZ) goto L_00407261;
L_00407259:; BB(0x00407259);
    /* 00407259: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040725c: call 0x407614 */ r_esp -= 4; W32(r_esp, 0x407261u); f_00407614();
L_00407261:; BB(0x00407261);
    /* 00407261: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407264: call 0x4240a0 */ r_esp -= 4; W32(r_esp, 0x407269u); f_004240a0();
    /* 00407269: mov esp, ebp */ r_esp = r_ebp;
    /* 0040726b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040726c: ret  */ FN_RET(0x00407242); r_esp += 4; return;
}

void f_0040726d(void) /* FUN_0040726d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040726d);
    /* 0040726d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040726e: mov ebp, esp */ r_ebp = r_esp;
    /* 00407270: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407271: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407274: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 00407279: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 0040727c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040727e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040727f: ret  */ FN_RET(0x0040726d); r_esp += 4; return;
}

void f_00407280(void) /* FUN_00407280 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407280);
    /* 00407280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407281: mov ebp, esp */ r_ebp = r_esp;
    /* 00407283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407287: cmp dword ptr [0x6f5330], 0 */ {  u32 a = R32((u32)(0x6f5330u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040728e: je 0x4072a6 */ if (fZ) goto L_004072a6;
L_00407290:; BB(0x00407290);
    /* 00407290: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 00407295: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407299: je 0x4072a6 */ if (fZ) goto L_004072a6;
L_0040729b:; BB(0x0040729b);
    /* 0040729b: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004072a1: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004072a4: jmp 0x4072a8 */ goto L_004072a8;
L_004072a6:; BB(0x004072a6);
    /* 004072a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004072a8:; BB(0x004072a8);
    /* 004072a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004072aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004072ab: ret  */ FN_RET(0x00407280); r_esp += 4; return;
}

void f_004072ac(void) /* FUN_004072ac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004072ac);
    /* 004072ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004072ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004072af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004072b0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004072b3: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 004072b8: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004072bc: je 0x4072da */ if (fZ) goto L_004072da;
L_004072be:; BB(0x004072be);
    /* 004072be: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004072c4: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004072c7: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004072ca: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004072cd: jne 0x4072da */ if (!fZ) goto L_004072da;
L_004072cf:; BB(0x004072cf);
    /* 004072cf: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004072d5: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004072d8: jmp 0x4072dc */ goto L_004072dc;
L_004072da:; BB(0x004072da);
    /* 004072da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004072dc:; BB(0x004072dc);
    /* 004072dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004072de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004072df: ret 4 */ FN_RET(0x004072ac); r_esp += 8; return;
}

void f_004072e2(void) /* FUN_004072e2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004072e2);
    /* 004072e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004072e3: mov ebp, esp */ r_ebp = r_esp;
    /* 004072e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004072e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004072e9: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 004072ee: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004072f2: je 0x40731d */ if (fZ) goto L_0040731d;
L_004072f4:; BB(0x004072f4);
    /* 004072f4: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004072fa: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004072fd: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x407302u); f_004259cd();
    /* 00407302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407303: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00407306: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407307: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x40730cu); f_006240c0();
    /* 0040730c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040730f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407311: jne 0x40731d */ if (!fZ) goto L_0040731d;
L_00407313:; BB(0x00407313);
    /* 00407313: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 00407318: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0040731b: jmp 0x40731f */ goto L_0040731f;
L_0040731d:; BB(0x0040731d);
    /* 0040731d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040731f:; BB(0x0040731f);
    /* 0040731f: mov esp, ebp */ r_esp = r_ebp;
    /* 00407321: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407322: ret 4 */ FN_RET(0x004072e2); r_esp += 8; return;
}

void f_00407325(void) /* FUN_00407325 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407325);
    /* 00407325: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407326: mov ebp, esp */ r_ebp = r_esp;
    /* 00407328: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407329: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040732c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040732e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040732f: ret  */ FN_RET(0x00407325); r_esp += 4; return;
}

void f_00407330(void) /* FUN_00407330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407330);
    /* 00407330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407331: mov ebp, esp */ r_ebp = r_esp;
    /* 00407333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407337: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 0040733c: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0040733f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407340: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00407346: call 0x4047fa */ r_esp -= 4; W32(r_esp, 0x40734bu); f_004047fa();
    /* 0040734b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040734d: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00407353: call 0x404866 */ r_esp -= 4; W32(r_esp, 0x407358u); f_00404866();
    /* 00407358: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040735a: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00407360: call 0x4048a7 */ r_esp -= 4; W32(r_esp, 0x407365u); f_004048a7();
    /* 00407365: mov esp, ebp */ r_esp = r_ebp;
    /* 00407367: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407368: ret 4 */ FN_RET(0x00407330); r_esp += 8; return;
}

void f_0040736b(void) /* FUN_0040736b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040736b);
    /* 0040736b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040736c: mov ebp, esp */ r_ebp = r_esp;
    /* 0040736e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407371: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407374: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 00407379: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040737d: jne 0x407394 */ if (!fZ) goto L_00407394;
L_0040737f:; BB(0x0040737f);
    /* 0040737f: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00407385: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407389: jne 0x407394 */ if (!fZ) goto L_00407394;
L_0040738b:; BB(0x0040738b);
    /* 0040738b: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00407392: jmp 0x40739b */ goto L_0040739b;
L_00407394:; BB(0x00407394);
    /* 00407394: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0040739b:; BB(0x0040739b);
    /* 0040739b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040739e: mov esp, ebp */ r_esp = r_ebp;
    /* 004073a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004073a1: ret 4 */ FN_RET(0x0040736b); r_esp += 8; return;
}

void f_004073a4(void) /* FUN_004073a4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004073a4);
    /* 004073a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004073a5: mov ebp, esp */ r_ebp = r_esp;
    /* 004073a7: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004073aa: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004073ad: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004073b4: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004073bb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004073c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004073c9: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 004073ce: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004073d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004073d2: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 004073d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004073d6: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004073dc: call 0x4043ac */ r_esp -= 4; W32(r_esp, 0x4073e1u); f_004043ac();
    /* 004073e1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004073e3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004073e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004073e9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004073ec: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 004073f1: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004073f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004073f5: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004073f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004073f9: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004073ff: call 0x4043ac */ r_esp -= 4; W32(r_esp, 0x407404u); f_004043ac();
    /* 00407404: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00407406: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00407409: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040740c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0040740f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00407412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407413: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00407416: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407417: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0040741a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040741b: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x407420u); f_00429a59();
    /* 00407420: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407423: mov esp, ebp */ r_esp = r_ebp;
    /* 00407425: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407426: ret 8 */ FN_RET(0x004073a4); r_esp += 12; return;
}

void f_00407429(void) /* FUN_00407429 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407429);
    /* 00407429: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040742a: mov ebp, esp */ r_ebp = r_esp;
    /* 0040742c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040742f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00407432: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00407439: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407440: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 00407445: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00407448: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407449: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0040744c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040744d: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00407453: call 0x4043ac */ r_esp -= 4; W32(r_esp, 0x407458u); f_004043ac();
    /* 00407458: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0040745a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0040745d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00407460: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00407463: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00407466: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407467: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 0040746d: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00407470: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00407473: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x407478u); f_004267ae();
    /* 00407478: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 0040747d: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00407480: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407481: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00407484: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407485: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 0040748b: call 0x4043ac */ r_esp -= 4; W32(r_esp, 0x407490u); f_004043ac();
    /* 00407490: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00407492: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00407495: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00407498: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0040749b: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0040749e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040749f: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004074a5: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004074a8: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004074ab: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x4074b0u); f_004267ae();
    /* 004074b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004074b2: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004074b8: call 0x404866 */ r_esp -= 4; W32(r_esp, 0x4074bdu); f_00404866();
    /* 004074bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004074bf: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004074c5: call 0x4048a7 */ r_esp -= 4; W32(r_esp, 0x4074cau); f_004048a7();
    /* 004074ca: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 004074cf: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004074d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004074d3: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004074d9: call 0x4047fa */ r_esp -= 4; W32(r_esp, 0x4074deu); f_004047fa();
    /* 004074de: mov esp, ebp */ r_esp = r_ebp;
    /* 004074e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004074e1: ret  */ FN_RET(0x00407429); r_esp += 4; return;
}

void f_004074e2(void) /* FUN_004074e2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004074e2);
    /* 004074e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004074e3: mov ebp, esp */ r_ebp = r_esp;
    /* 004074e5: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004074e8: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004074eb: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 004074ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004074ef: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004074f5: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004074f8: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004074fb: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x407500u); f_004267fb();
    /* 00407500: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407503: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407504: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00407507: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407508: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 0040750e: call 0x4043ac */ r_esp -= 4; W32(r_esp, 0x407513u); f_004043ac();
    /* 00407513: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407515: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00407518: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040751b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040751e: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00407521: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407522: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00407525: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407526: call 0x600940 */ r_esp -= 4; W32(r_esp, 0x40752bu); f_00600940();
    /* 0040752b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040752e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407530: je 0x407548 */ if (fZ) goto L_00407548;
L_00407532:; BB(0x00407532);
    /* 00407532: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407535: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407536: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407539: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040753a: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00407540: call 0x404574 */ r_esp -= 4; W32(r_esp, 0x407545u); f_00404574();
    /* 00407545: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00407548:; BB(0x00407548);
    /* 00407548: mov edx, dword ptr [0x6f5330] */ r_edx = R32((u32)(0x6f5330u));
    /* 0040754e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407551: add eax, dword ptr [edx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x6cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407554: cmp eax, 0xf423f */ {  u32 a = r_eax; u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00407559: jbe 0x40756c */ if ((fC||fZ)) goto L_0040756c;
L_0040755b:; BB(0x0040755b);
    /* 0040755b: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00407561: mov edx, 0xf423f */ r_edx = 0xf423fu;
    /* 00407566: sub edx, dword ptr [ecx + 0x6c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00407569: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_0040756c:; BB(0x0040756c);
    /* 0040756c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040756f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407570: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00407573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407574: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 0040757a: call 0x4043ac */ r_esp -= 4; W32(r_esp, 0x40757fu); f_004043ac();
    /* 0040757f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407581: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00407584: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00407587: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040758a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040758d: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00407590: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00407593: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407596: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00407599: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0040759c: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0040759f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004075a0: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004075a6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004075a9: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004075ac: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x4075b1u); f_004267ae();
    /* 004075b1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004075b5: je 0x40760e */ if (fZ) goto L_0040760e;
L_004075b7:; BB(0x004075b7);
    /* 004075b7: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 004075bc: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004075c0: jne 0x4075d9 */ if (!fZ) goto L_004075d9;
L_004075c2:; BB(0x004075c2);
    /* 004075c2: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004075c8: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004075cc: jne 0x4075d9 */ if (!fZ) goto L_004075d9;
L_004075ce:; BB(0x004075ce);
    /* 004075ce: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004075d4: call 0x404a54 */ r_esp -= 4; W32(r_esp, 0x4075d9u); f_00404a54();
L_004075d9:; BB(0x004075d9);
    /* 004075d9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004075dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004075dd: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004075e3: call 0x40479f */ r_esp -= 4; W32(r_esp, 0x4075e8u); f_0040479f();
    /* 004075e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004075ea: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004075ed: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004075f0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004075f3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004075f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004075f8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4075fbu); call_ind(t); }
    /* 004075fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004075fd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00407600: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00407603: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00407606: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00407609: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040760b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x40760eu); call_ind(t); }
L_0040760e:; BB(0x0040760e);
    /* 0040760e: mov esp, ebp */ r_esp = r_ebp;
    /* 00407610: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407611: ret 4 */ FN_RET(0x004074e2); r_esp += 8; return;
}

void f_00407614(void) /* FUN_00407614 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407614);
    /* 00407614: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407615: mov ebp, esp */ r_ebp = r_esp;
    /* 00407617: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407618: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040761b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00407621: call 0x45cb5f */ r_esp -= 4; W32(r_esp, 0x407626u); f_0045cb5f();
    /* 00407626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407628: jne 0x40762c */ if (!fZ) goto L_0040762c;
L_0040762a:; BB(0x0040762a);
    /* 0040762a: jmp 0x407634 */ goto L_00407634;
L_0040762c:; BB(0x0040762c);
    /* 0040762c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040762f: call 0x407638 */ r_esp -= 4; W32(r_esp, 0x407634u); f_00407638();
L_00407634:; BB(0x00407634);
    /* 00407634: mov esp, ebp */ r_esp = r_ebp;
    /* 00407636: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407637: ret  */ FN_RET(0x00407614); r_esp += 4; return;
}

void f_00407638(void) /* FUN_00407638 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407638);
    /* 00407638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407639: mov ebp, esp */ r_ebp = r_esp;
    /* 0040763b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040763c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040763f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00407645: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x40764au); f_005d9e23();
    /* 0040764a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040764d: cmp eax, dword ptr [ecx + 0x1cb8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407653: jle 0x407684 */ if ((fZ||fS!=fO)) goto L_00407684;
L_00407655:; BB(0x00407655);
    /* 00407655: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0040765b: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x407660u); f_005d9e23();
    /* 00407660: add eax, 0xe10 */ {  u32 a = r_eax; u32 b = 0xe10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407665: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407668: mov dword ptr [edx + 0x1cb8], eax */ W32((u32)(r_edx+0x1cb8u), r_eax);
    /* 0040766e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00407670: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407672: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00407674: push 0xdb4 */ { u32 v = 0xdb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00407679: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040767c: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0040767f: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x407684u); f_005e8389();
L_00407684:; BB(0x00407684);
    /* 00407684: mov esp, ebp */ r_esp = r_ebp;
    /* 00407686: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407687: ret  */ FN_RET(0x00407638); r_esp += 4; return;
}

void f_00407688(void) /* FUN_00407688 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407688);
    /* 00407688: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407689: mov ebp, esp */ r_ebp = r_esp;
    /* 0040768b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040768e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00407691: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407694: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407695: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407698: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x40769du); f_005e626d();
    /* 0040769d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004076a0: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 004076a3: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004076a6: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004076aa: ja 0x40785f */ if ((!fC&&!fZ)) goto L_0040785f;
L_004076b0:; BB(0x004076b0);
    /* 004076b0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004076b3: jmp dword ptr [eax*4 + 0x407865] */ { u32 t = R32((u32)(r_eax*4+0x407865u)); switch (t) { case 0x4076bau: goto L_004076ba; case 0x4076e4u: goto L_004076e4; case 0x407797u: goto L_00407797; case 0x4077ddu: goto L_004077dd; case 0x4077eau: goto L_004077ea; case 0x40782du: goto L_0040782d; case 0x40783au: goto L_0040783a; case 0x407847u: goto L_00407847; case 0x407854u: goto L_00407854; default: UNSUP(0x004076b3, "jump table entry is not a known target"); } }
L_004076ba:; BB(0x004076ba);
    /* 004076ba: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004076c0: call 0x403767 */ r_esp -= 4; W32(r_esp, 0x4076c5u); f_00403767();
    /* 004076c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004076c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004076ca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004076cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004076cf: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4076d2u); call_ind(t); }
    /* 004076d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004076d4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004076d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004076d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004076dc: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4076dfu); call_ind(t); }
    /* 004076df: jmp 0x40785f */ goto L_0040785f;
L_004076e4:; BB(0x004076e4);
    /* 004076e4: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 004076e9: mov dword ptr [eax + 0x60], 1 */ W32((u32)(r_eax+0x60u), 0x1u);
    /* 004076f0: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004076f6: call 0x4046f7 */ r_esp -= 4; W32(r_esp, 0x4076fbu); f_004046f7();
    /* 004076fb: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00407701: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00407704: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x407709u); f_005ea279();
    /* 00407709: cmp eax, 0x1609a */ {  u32 a = r_eax; u32 b = 0x1609au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040770e: je 0x407765 */ if (fZ) goto L_00407765;
L_00407710:; BB(0x00407710);
    /* 00407710: push 0x1609a */ { u32 v = 0x1609au; r_esp -= 4; W32(r_esp, v); }
    /* 00407715: mov edx, dword ptr [0x6f5330] */ r_edx = R32((u32)(0x6f5330u));
    /* 0040771b: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0040771e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x407723u); f_005ea0c3();
    /* 00407723: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407725: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 0040772a: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0040772d: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x407732u); f_005e4060();
    /* 00407732: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407734: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 0040773a: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0040773d: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x407742u); f_005e4060();
    /* 00407742: mov edx, dword ptr [0x6f5330] */ r_edx = R32((u32)(0x6f5330u));
    /* 00407748: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0040774b: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 00407750: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00407753: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00407755: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x407758u); call_ind(t); }
    /* 00407758: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040775a: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00407760: call 0x404b15 */ r_esp -= 4; W32(r_esp, 0x407765u); f_00404b15();
L_00407765:; BB(0x00407765);
    /* 00407765: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 0040776b: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040776f: jne 0x407787 */ if (!fZ) goto L_00407787;
L_00407771:; BB(0x00407771);
    /* 00407771: mov edx, dword ptr [0x6f5330] */ r_edx = R32((u32)(0x6f5330u));
    /* 00407777: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0040777a: mov eax, dword ptr [0x6f5330] */ r_eax = R32((u32)(0x6f5330u));
    /* 0040777f: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00407782: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00407784: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x407787u); call_ind(t); }
L_00407787:; BB(0x00407787);
    /* 00407787: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 0040778d: call 0x404fa4 */ r_esp -= 4; W32(r_esp, 0x407792u); f_00404fa4();
    /* 00407792: jmp 0x40785f */ goto L_0040785f;
L_00407797:; BB(0x00407797);
    /* 00407797: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00407799: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x40779eu); f_0048ab58();
    /* 0040779e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004077a1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004077a4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004077a8: je 0x4077c5 */ if (fZ) goto L_004077c5;
L_004077aa:; BB(0x004077aa);
    /* 004077aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004077ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004077af: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x4077b4u); f_005e6160();
    /* 004077b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004077b7: mov dword ptr [ecx], 0x63360c */ W32((u32)(r_ecx), 0x63360cu);
    /* 004077bd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004077c0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004077c3: jmp 0x4077cc */ goto L_004077cc;
L_004077c5:; BB(0x004077c5);
    /* 004077c5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_004077cc:; BB(0x004077cc);
    /* 004077cc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004077cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004077d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004077d3: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x4077d8u); f_005e62ca();
    /* 004077d8: jmp 0x40785f */ goto L_0040785f;
L_004077dd:; BB(0x004077dd);
    /* 004077dd: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 004077e3: call 0x405626 */ r_esp -= 4; W32(r_esp, 0x4077e8u); f_00405626();
    /* 004077e8: jmp 0x40785f */ goto L_0040785f;
L_004077ea:; BB(0x004077ea);
    /* 004077ea: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004077ec: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4077f1u); f_0048ab58();
    /* 004077f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004077f4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004077f7: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004077fb: je 0x407818 */ if (fZ) goto L_00407818;
L_004077fd:; BB(0x004077fd);
    /* 004077fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004077ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407802: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x407807u); f_005e6160();
    /* 00407807: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040780a: mov dword ptr [ecx], 0x6335f4 */ W32((u32)(r_ecx), 0x6335f4u);
    /* 00407810: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407813: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00407816: jmp 0x40781f */ goto L_0040781f;
L_00407818:; BB(0x00407818);
    /* 00407818: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0040781f:; BB(0x0040781f);
    /* 0040781f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407822: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407823: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407826: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x40782bu); f_005e62ca();
    /* 0040782b: jmp 0x40785f */ goto L_0040785f;
L_0040782d:; BB(0x0040782d);
    /* 0040782d: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00407833: call 0x404bf8 */ r_esp -= 4; W32(r_esp, 0x407838u); f_00404bf8();
    /* 00407838: jmp 0x40785f */ goto L_0040785f;
L_0040783a:; BB(0x0040783a);
    /* 0040783a: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 00407840: call 0x404ced */ r_esp -= 4; W32(r_esp, 0x407845u); f_00404ced();
    /* 00407845: jmp 0x40785f */ goto L_0040785f;
L_00407847:; BB(0x00407847);
    /* 00407847: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 0040784d: call 0x404df7 */ r_esp -= 4; W32(r_esp, 0x407852u); f_00404df7();
    /* 00407852: jmp 0x40785f */ goto L_0040785f;
L_00407854:; BB(0x00407854);
    /* 00407854: mov ecx, dword ptr [0x6f5330] */ r_ecx = R32((u32)(0x6f5330u));
    /* 0040785a: call 0x405111 */ r_esp -= 4; W32(r_esp, 0x40785fu); f_00405111();
L_0040785f:; BB(0x0040785f);
    /* 0040785f: mov esp, ebp */ r_esp = r_ebp;
    /* 00407861: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407862: ret 4 */ FN_RET(0x00407688); r_esp += 8; return;
}

void f_00407890(void) /* FUN_00407890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407890);
    /* 00407890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407891: mov ebp, esp */ r_ebp = r_esp;
    /* 00407893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040789a: call 0x407085 */ r_esp -= 4; W32(r_esp, 0x40789fu); f_00407085();
    /* 0040789f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004078a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004078a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004078a7: je 0x4078b5 */ if (fZ) goto L_004078b5;
L_004078a9:; BB(0x004078a9);
    /* 004078a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004078ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004078ad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4078b2u); f_0048ac1b();
    /* 004078b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004078b5:; BB(0x004078b5);
    /* 004078b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004078b8: mov esp, ebp */ r_esp = r_ebp;
    /* 004078ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004078bb: ret 4 */ FN_RET(0x00407890); r_esp += 8; return;
}

void f_004078c0(void) /* FUN_004078c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004078c0);
    /* 004078c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004078c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004078c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004078c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004078c7: mov eax, 1 */ r_eax = 0x1u;
    /* 004078cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004078ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004078cf: ret  */ FN_RET(0x004078c0); r_esp += 4; return;
}

void f_004078d0(void) /* FUN_004078d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004078d0);
    /* 004078d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004078d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004078d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004078d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004078d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004078d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004078db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004078dc: ret 4 */ FN_RET(0x004078d0); r_esp += 8; return;
}

void f_004078e0(void) /* FUN_004078e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004078e0);
    /* 004078e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004078e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004078e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004078e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004078e7: mov eax, 4 */ r_eax = 0x4u;
    /* 004078ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004078ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004078ef: ret  */ FN_RET(0x004078e0); r_esp += 4; return;
}

void f_004078f0(void) /* FUN_004078f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004078f0);
    /* 004078f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004078f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004078f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004078f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004078f7: mov esp, ebp */ r_esp = r_ebp;
    /* 004078f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004078fa: ret  */ FN_RET(0x004078f0); r_esp += 4; return;
}

void f_00407900(void) /* FUN_00407900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407900);
    /* 00407900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407901: mov ebp, esp */ r_ebp = r_esp;
    /* 00407903: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407906: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00407909: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040790c: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x407911u); f_005dfbf0();
    /* 00407911: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407914: mov dword ptr [eax], 0x633624 */ W32((u32)(r_eax), 0x633624u);
    /* 0040791a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407921: jmp 0x40792c */ goto L_0040792c;
L_00407923:; BB(0x00407923);
    /* 00407923: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407926: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407929: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040792c:; BB(0x0040792c);
    /* 0040792c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407930: jge 0x407942 */ if ((fS==fO)) goto L_00407942;
L_00407932:; BB(0x00407932);
    /* 00407932: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407935: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407938: mov dword ptr [eax + edx*4 + 8], 0 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x0u);
    /* 00407940: jmp 0x407923 */ goto L_00407923;
L_00407942:; BB(0x00407942);
    /* 00407942: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407949: jmp 0x407954 */ goto L_00407954;
L_0040794b:; BB(0x0040794b);
    /* 0040794b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040794e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407951: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00407954:; BB(0x00407954);
    /* 00407954: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407958: jge 0x40796a */ if ((fS==fO)) goto L_0040796a;
L_0040795a:; BB(0x0040795a);
    /* 0040795a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040795d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407960: mov dword ptr [eax + edx*4 + 0x18], 0 */ W32((u32)(r_eax+r_edx*4+0x18u), 0x0u);
    /* 00407968: jmp 0x40794b */ goto L_0040794b;
L_0040796a:; BB(0x0040796a);
    /* 0040796a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040796d: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00407974: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407977: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 0040797e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407981: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 00407988: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040798b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040798d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040798e: ret  */ FN_RET(0x00407900); r_esp += 4; return;
}

void f_0040798f(void) /* FUN_0040798f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040798f);
    /* 0040798f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407990: mov ebp, esp */ r_ebp = r_esp;
    /* 00407992: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407995: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00407998: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040799b: mov dword ptr [eax], 0x633624 */ W32((u32)(r_eax), 0x633624u);
    /* 004079a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004079a8: jmp 0x4079b3 */ goto L_004079b3;
L_004079aa:; BB(0x004079aa);
    /* 004079aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004079ad: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004079b0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004079b3:; BB(0x004079b3);
    /* 004079b3: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004079b7: jge 0x407a07 */ if ((fS==fO)) goto L_00407a07;
L_004079b9:; BB(0x004079b9);
    /* 004079b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004079bc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004079bf: cmp dword ptr [eax + edx*4 + 8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004079c4: je 0x407a05 */ if (fZ) goto L_00407a05;
L_004079c6:; BB(0x004079c6);
    /* 004079c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004079c9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004079cc: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004079d0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004079d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004079d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004079d9: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004079dd: je 0x4079f0 */ if (fZ) goto L_004079f0;
L_004079df:; BB(0x004079df);
    /* 004079df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004079e1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004079e4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004079e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004079e9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4079ebu); call_ind(t); }
    /* 004079eb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004079ee: jmp 0x4079f7 */ goto L_004079f7;
L_004079f0:; BB(0x004079f0);
    /* 004079f0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004079f7:; BB(0x004079f7);
    /* 004079f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004079fa: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004079fd: mov dword ptr [edx + ecx*4 + 8], 0 */ W32((u32)(r_edx+r_ecx*4+0x8u), 0x0u);
L_00407a05:; BB(0x00407a05);
    /* 00407a05: jmp 0x4079aa */ goto L_004079aa;
L_00407a07:; BB(0x00407a07);
    /* 00407a07: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407a0e: jmp 0x407a19 */ goto L_00407a19;
L_00407a10:; BB(0x00407a10);
    /* 00407a10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407a13: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407a16: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00407a19:; BB(0x00407a19);
    /* 00407a19: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407a1d: jge 0x407a6d */ if ((fS==fO)) goto L_00407a6d;
L_00407a1f:; BB(0x00407a1f);
    /* 00407a1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407a22: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407a25: cmp dword ptr [edx + ecx*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407a2a: je 0x407a6b */ if (fZ) goto L_00407a6b;
L_00407a2c:; BB(0x00407a2c);
    /* 00407a2c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407a2f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407a32: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00407a36: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00407a39: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00407a3c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00407a3f: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407a43: je 0x407a56 */ if (fZ) goto L_00407a56;
L_00407a45:; BB(0x00407a45);
    /* 00407a45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00407a47: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407a4a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00407a4c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407a4f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x407a51u); call_ind(t); }
    /* 00407a51: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00407a54: jmp 0x407a5d */ goto L_00407a5d;
L_00407a56:; BB(0x00407a56);
    /* 00407a56: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00407a5d:; BB(0x00407a5d);
    /* 00407a5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00407a60: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407a63: mov dword ptr [ecx + eax*4 + 0x18], 0 */ W32((u32)(r_ecx+r_eax*4+0x18u), 0x0u);
L_00407a6b:; BB(0x00407a6b);
    /* 00407a6b: jmp 0x407a10 */ goto L_00407a10;
L_00407a6d:; BB(0x00407a6d);
    /* 00407a6d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407a70: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407a74: je 0x407aad */ if (fZ) goto L_00407aad;
L_00407a76:; BB(0x00407a76);
    /* 00407a76: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407a79: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00407a7c: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00407a7f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00407a82: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00407a85: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407a89: je 0x407a9c */ if (fZ) goto L_00407a9c;
L_00407a8b:; BB(0x00407a8b);
    /* 00407a8b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00407a8d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407a90: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407a92: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407a95: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x407a97u); call_ind(t); }
    /* 00407a97: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00407a9a: jmp 0x407aa3 */ goto L_00407aa3;
L_00407a9c:; BB(0x00407a9c);
    /* 00407a9c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00407aa3:; BB(0x00407aa3);
    /* 00407aa3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407aa6: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_00407aad:; BB(0x00407aad);
    /* 00407aad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407ab0: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x407ab5u); f_005dfc0f();
    /* 00407ab5: mov esp, ebp */ r_esp = r_ebp;
    /* 00407ab7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407ab8: ret  */ FN_RET(0x0040798f); r_esp += 4; return;
}

void f_00407ab9(void) /* FUN_00407ab9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407ab9);
    /* 00407ab9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407aba: mov ebp, esp */ r_ebp = r_esp;
    /* 00407abc: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407abf: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00407ac2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00407ac9: mov dword ptr [ebp - 0x2c], 0x3fd00000 */ W32((u32)(r_ebp+0xffffffd4u), 0x3fd00000u);
    /* 00407ad0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00407ad7: mov dword ptr [ebp - 0x24], 0x3ff00000 */ W32((u32)(r_ebp+0xffffffdcu), 0x3ff00000u);
    /* 00407ade: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00407ae5: mov dword ptr [ebp - 0x1c], 0x40140000 */ W32((u32)(r_ebp+0xffffffe4u), 0x40140000u);
    /* 00407aec: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00407af3: mov dword ptr [ebp - 0x14], 0x40240000 */ W32((u32)(r_ebp+0xffffffecu), 0x40240000u);
    /* 00407afa: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00407b01: mov dword ptr [ebp - 0xc], 0x40390000 */ W32((u32)(r_ebp+0xfffffff4u), 0x40390000u);
    /* 00407b08: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00407b0f: mov dword ptr [ebp - 4], 0x40490000 */ W32((u32)(r_ebp+0xfffffffcu), 0x40490000u);
    /* 00407b16: mov dword ptr [ebp - 0x54], 0x1b7 */ W32((u32)(r_ebp+0xffffffacu), 0x1b7u);
    /* 00407b1d: mov dword ptr [ebp - 0x50], 0x1b4 */ W32((u32)(r_ebp+0xffffffb0u), 0x1b4u);
    /* 00407b24: mov dword ptr [ebp - 0x4c], 0x1e2 */ W32((u32)(r_ebp+0xffffffb4u), 0x1e2u);
    /* 00407b2b: mov dword ptr [ebp - 0x48], 0x1b0 */ W32((u32)(r_ebp+0xffffffb8u), 0x1b0u);
    /* 00407b32: mov dword ptr [ebp - 0x44], 0x20b */ W32((u32)(r_ebp+0xffffffbcu), 0x20bu);
    /* 00407b39: mov dword ptr [ebp - 0x40], 0x1a8 */ W32((u32)(r_ebp+0xffffffc0u), 0x1a8u);
    /* 00407b40: mov dword ptr [ebp - 0x3c], 0x22e */ W32((u32)(r_ebp+0xffffffc4u), 0x22eu);
    /* 00407b47: mov dword ptr [ebp - 0x38], 0x198 */ W32((u32)(r_ebp+0xffffffc8u), 0x198u);
    /* 00407b4e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00407b55: jmp 0x407b60 */ goto L_00407b60;
L_00407b57:; BB(0x00407b57);
    /* 00407b57: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407b5a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407b5d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_00407b60:; BB(0x00407b60);
    /* 00407b60: cmp dword ptr [ebp - 0x34], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407b64: jge 0x407d2e */ if ((fS==fO)) goto L_00407d2e;
L_00407b6a:; BB(0x00407b6a);
    /* 00407b6a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407b6d: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407b70: cmp dword ptr [edx + ecx*4 + 8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407b75: jne 0x407d10 */ if (!fZ) goto L_00407d10;
L_00407b7b:; BB(0x00407b7b);
    /* 00407b7b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00407b7d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00407b83: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x407b88u); f_0045b93e();
    /* 00407b88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407b8a: je 0x407c30 */ if (fZ) goto L_00407c30;
L_00407b90:; BB(0x00407b90);
    /* 00407b90: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00407b95: cmp dword ptr [eax + 0x12eb0], 2 */ {  u32 a = R32((u32)(r_eax+0x12eb0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407b9c: jg 0x407c30 */ if ((!fZ&&fS==fO)) goto L_00407c30;
L_00407ba2:; BB(0x00407ba2);
    /* 00407ba2: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00407ba7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x407bacu); f_0048ab58();
    /* 00407bac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407baf: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00407bb2: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407bb6: je 0x407bd2 */ if (fZ) goto L_00407bd2;
L_00407bb8:; BB(0x00407bb8);
    /* 00407bb8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407bbb: mov edx, dword ptr [ebp + ecx*8 - 0x2c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffd4u));
    /* 00407bbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407bc0: mov eax, dword ptr [ebp + ecx*8 - 0x30] */ r_eax = R32((u32)(r_ebp+r_ecx*8+0xffffffd0u));
    /* 00407bc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407bc5: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00407bc8: call 0x4085af */ r_esp -= 4; W32(r_esp, 0x407bcdu); f_004085af();
    /* 00407bcd: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00407bd0: jmp 0x407bd9 */ goto L_00407bd9;
L_00407bd2:; BB(0x00407bd2);
    /* 00407bd2: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00407bd9:; BB(0x00407bd9);
    /* 00407bd9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407bdc: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407bdf: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00407be2: mov dword ptr [edx + ecx*4 + 8], eax */ W32((u32)(r_edx+r_ecx*4+0x8u), r_eax);
    /* 00407be6: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407bea: jne 0x407c0c */ if (!fZ) goto L_00407c0c;
L_00407bec:; BB(0x00407bec);
    /* 00407bec: push 0x42d */ { u32 v = 0x42du; r_esp -= 4; W32(r_esp, v); }
    /* 00407bf1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407bf4: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407bf7: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00407bfb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407bfe: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407c01: mov eax, dword ptr [edx + eax*4 + 8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 00407c05: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407c07: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x407c0au); call_ind(t); }
    /* 00407c0a: jmp 0x407c2e */ goto L_00407c2e;
L_00407c0c:; BB(0x00407c0c);
    /* 00407c0c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407c0f: add eax, 0x3f7 */ {  u32 a = r_eax; u32 b = 0x3f7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407c14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407c15: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407c18: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407c1b: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00407c1f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407c22: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407c25: mov eax, dword ptr [edx + eax*4 + 8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 00407c29: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407c2b: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x407c2eu); call_ind(t); }
L_00407c2e:; BB(0x00407c2e);
    /* 00407c2e: jmp 0x407c96 */ goto L_00407c96;
L_00407c30:; BB(0x00407c30);
    /* 00407c30: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00407c35: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x407c3au); f_0048ab58();
    /* 00407c3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407c3d: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00407c40: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407c44: je 0x407c60 */ if (fZ) goto L_00407c60;
L_00407c46:; BB(0x00407c46);
    /* 00407c46: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407c49: mov ecx, dword ptr [ebp + eax*8 - 0x24] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 00407c4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407c4e: mov edx, dword ptr [ebp + eax*8 - 0x28] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 00407c52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407c53: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00407c56: call 0x4085af */ r_esp -= 4; W32(r_esp, 0x407c5bu); f_004085af();
    /* 00407c5b: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00407c5e: jmp 0x407c67 */ goto L_00407c67;
L_00407c60:; BB(0x00407c60);
    /* 00407c60: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00407c67:; BB(0x00407c67);
    /* 00407c67: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407c6a: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407c6d: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00407c70: mov dword ptr [ecx + eax*4 + 8], edx */ W32((u32)(r_ecx+r_eax*4+0x8u), r_edx);
    /* 00407c74: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407c77: add eax, 0x3f8 */ {  u32 a = r_eax; u32 b = 0x3f8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407c7d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407c80: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407c83: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00407c87: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407c8a: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407c8d: mov eax, dword ptr [edx + eax*4 + 8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 00407c91: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407c93: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x407c96u); call_ind(t); }
L_00407c96:; BB(0x00407c96);
    /* 00407c96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407c98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407c9a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407c9d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407ca0: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00407ca4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407ca7: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00407caa: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00407cae: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00407cb0: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x407cb3u); call_ind(t); }
    /* 00407cb3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407cb6: mov edx, dword ptr [ebp + ecx*8 - 0x50] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffb0u));
    /* 00407cba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407cbb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407cbe: mov ecx, dword ptr [ebp + eax*8 - 0x54] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffacu));
    /* 00407cc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407cc3: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407cc6: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00407cc9: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00407ccd: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407cd0: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00407cd3: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00407cd7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00407cd9: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x407cdcu); call_ind(t); }
    /* 00407cdc: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00407cde: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407ce1: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407ce4: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00407ce8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407ceb: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407cee: mov eax, dword ptr [edx + eax*4 + 8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 00407cf2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407cf4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x407cf7u); call_ind(t); }
    /* 00407cf7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407cfa: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407cfd: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00407d01: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407d04: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00407d07: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00407d0b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00407d0d: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x407d10u); call_ind(t); }
L_00407d10:; BB(0x00407d10);
    /* 00407d10: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407d13: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407d16: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00407d1a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407d1d: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407d20: mov eax, dword ptr [edx + eax*4 + 8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 00407d24: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407d26: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x407d29u); call_ind(t); }
    /* 00407d29: jmp 0x407b57 */ goto L_00407b57;
L_00407d2e:; BB(0x00407d2e);
    /* 00407d2e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00407d35: jmp 0x407d40 */ goto L_00407d40;
L_00407d37:; BB(0x00407d37);
    /* 00407d37: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407d3a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00407d3d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_00407d40:; BB(0x00407d40);
    /* 00407d40: cmp dword ptr [ebp - 0x34], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407d44: jge 0x407e28 */ if ((fS==fO)) goto L_00407e28;
L_00407d4a:; BB(0x00407d4a);
    /* 00407d4a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407d4d: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407d50: cmp dword ptr [edx + ecx*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407d55: jne 0x407e23 */ if (!fZ) goto L_00407e23;
L_00407d5b:; BB(0x00407d5b);
    /* 00407d5b: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407d60: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x407d65u); f_0048ab58();
    /* 00407d65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407d68: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00407d6b: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407d6f: je 0x407d82 */ if (fZ) goto L_00407d82;
L_00407d71:; BB(0x00407d71);
    /* 00407d71: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407d74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407d75: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00407d78: call 0x409070 */ r_esp -= 4; W32(r_esp, 0x407d7du); f_00409070();
    /* 00407d7d: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00407d80: jmp 0x407d89 */ goto L_00407d89;
L_00407d82:; BB(0x00407d82);
    /* 00407d82: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00407d89:; BB(0x00407d89);
    /* 00407d89: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407d8c: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407d8f: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00407d92: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 00407d96: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407d99: add ecx, 0x408 */ {  u32 a = r_ecx; u32 b = 0x408u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407d9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407da0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407da3: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00407da6: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 00407daa: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407dad: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00407db0: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 00407db4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00407db6: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x407db9u); call_ind(t); }
    /* 00407db9: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00407dbb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407dbe: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407dc1: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00407dc5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407dc8: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407dcb: mov eax, dword ptr [edx + eax*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_eax*4+0x18u));
    /* 00407dcf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407dd1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x407dd4u); call_ind(t); }
    /* 00407dd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407dd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407dd8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407ddb: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407dde: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00407de2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407de5: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00407de8: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 00407dec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00407dee: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x407df1u); call_ind(t); }
    /* 00407df1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407df4: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407df7: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00407dfb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407dfe: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407e01: mov eax, dword ptr [edx + eax*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_eax*4+0x18u));
    /* 00407e05: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407e07: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x407e0au); call_ind(t); }
    /* 00407e0a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00407e0d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407e10: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00407e14: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407e17: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00407e1a: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 00407e1e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00407e20: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x407e23u); call_ind(t); }
L_00407e23:; BB(0x00407e23);
    /* 00407e23: jmp 0x407d37 */ goto L_00407d37;
L_00407e28:; BB(0x00407e28);
    /* 00407e28: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407e2b: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407e2f: jne 0x407ed2 */ if (!fZ) goto L_00407ed2;
L_00407e35:; BB(0x00407e35);
    /* 00407e35: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407e3a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x407e3fu); f_0048ab58();
    /* 00407e3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407e42: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00407e45: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407e49: je 0x407e58 */ if (fZ) goto L_00407e58;
L_00407e4b:; BB(0x00407e4b);
    /* 00407e4b: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00407e4e: call 0x408e0c */ r_esp -= 4; W32(r_esp, 0x407e53u); f_00408e0c();
    /* 00407e53: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00407e56: jmp 0x407e5f */ goto L_00407e5f;
L_00407e58:; BB(0x00407e58);
    /* 00407e58: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00407e5f:; BB(0x00407e5f);
    /* 00407e5f: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407e62: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00407e65: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00407e68: push 0x42e */ { u32 v = 0x42eu; r_esp -= 4; W32(r_esp, v); }
    /* 00407e6d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407e70: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00407e73: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407e76: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00407e79: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407e7b: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x407e7eu); call_ind(t); }
    /* 00407e7e: push 0x1c6 */ { u32 v = 0x1c6u; r_esp -= 4; W32(r_esp, v); }
    /* 00407e83: push 0x199 */ { u32 v = 0x199u; r_esp -= 4; W32(r_esp, v); }
    /* 00407e88: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00407e8b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00407e8e: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407e91: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00407e94: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407e96: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x407e99u); call_ind(t); }
    /* 00407e99: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00407e9b: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00407e9e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00407ea1: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407ea4: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00407ea7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407ea9: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x407eacu); call_ind(t); }
    /* 00407eac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407eae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407eb0: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00407eb3: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00407eb6: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407eb9: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00407ebc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407ebe: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x407ec1u); call_ind(t); }
    /* 00407ec1: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00407ec4: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00407ec7: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407eca: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00407ecd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407ecf: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x407ed2u); call_ind(t); }
L_00407ed2:; BB(0x00407ed2);
    /* 00407ed2: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407ed5: call 0x408262 */ r_esp -= 4; W32(r_esp, 0x407edau); f_00408262();
    /* 00407eda: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00407edc: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00407ee2: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x407ee7u); f_0045b93e();
    /* 00407ee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407ee9: je 0x407ef9 */ if (fZ) goto L_00407ef9;
L_00407eeb:; BB(0x00407eeb);
    /* 00407eeb: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00407ef0: cmp dword ptr [eax + 0x12ebc], 4 */ {  u32 a = R32((u32)(r_eax+0x12ebcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407ef7: je 0x407f19 */ if (fZ) goto L_00407f19;
L_00407ef9:; BB(0x00407ef9);
    /* 00407ef9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00407efb: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00407f01: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x407f06u); f_0045b93e();
    /* 00407f06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407f08: je 0x407f23 */ if (fZ) goto L_00407f23;
L_00407f0a:; BB(0x00407f0a);
    /* 00407f0a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00407f10: cmp dword ptr [ecx + 0x12eb0], 4 */ {  u32 a = R32((u32)(r_ecx+0x12eb0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407f17: jne 0x407f23 */ if (!fZ) goto L_00407f23;
L_00407f19:; BB(0x00407f19);
    /* 00407f19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00407f1b: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407f1e: call 0x408391 */ r_esp -= 4; W32(r_esp, 0x407f23u); f_00408391();
L_00407f23:; BB(0x00407f23);
    /* 00407f23: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00407f25: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00407f2b: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x407f30u); f_0045b93e();
    /* 00407f30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407f32: je 0x407f43 */ if (fZ) goto L_00407f43;
L_00407f34:; BB(0x00407f34);
    /* 00407f34: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00407f3a: cmp dword ptr [edx + 0x12ebc], 6 */ {  u32 a = R32((u32)(r_edx+0x12ebcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407f41: je 0x407f62 */ if (fZ) goto L_00407f62;
L_00407f43:; BB(0x00407f43);
    /* 00407f43: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00407f45: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00407f4b: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x407f50u); f_0045b93e();
    /* 00407f50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407f52: je 0x407f86 */ if (fZ) goto L_00407f86;
L_00407f54:; BB(0x00407f54);
    /* 00407f54: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00407f59: cmp dword ptr [eax + 0x12eb0], 6 */ {  u32 a = R32((u32)(r_eax+0x12eb0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407f60: jne 0x407f86 */ if (!fZ) goto L_00407f86;
L_00407f62:; BB(0x00407f62);
    /* 00407f62: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00407f69: jmp 0x407f74 */ goto L_00407f74;
L_00407f6b:; BB(0x00407f6b);
    /* 00407f6b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407f6e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407f71: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00407f74:; BB(0x00407f74);
    /* 00407f74: cmp dword ptr [ebp - 0x34], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407f78: jge 0x407f86 */ if ((fS==fO)) goto L_00407f86;
L_00407f7a:; BB(0x00407f7a);
    /* 00407f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00407f7c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407f7f: call 0x408391 */ r_esp -= 4; W32(r_esp, 0x407f84u); f_00408391();
    /* 00407f84: jmp 0x407f6b */ goto L_00407f6b;
L_00407f86:; BB(0x00407f86);
    /* 00407f86: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00407f88: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00407f8e: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x407f93u); f_0045b93e();
    /* 00407f93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407f95: je 0x407fa6 */ if (fZ) goto L_00407fa6;
L_00407f97:; BB(0x00407f97);
    /* 00407f97: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00407f9d: cmp dword ptr [edx + 0x12ebc], 8 */ {  u32 a = R32((u32)(r_edx+0x12ebcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407fa4: je 0x407fc5 */ if (fZ) goto L_00407fc5;
L_00407fa6:; BB(0x00407fa6);
    /* 00407fa6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00407fa8: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00407fae: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x407fb3u); f_0045b93e();
    /* 00407fb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407fb5: je 0x407fe9 */ if (fZ) goto L_00407fe9;
L_00407fb7:; BB(0x00407fb7);
    /* 00407fb7: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00407fbc: cmp dword ptr [eax + 0x12eb0], 8 */ {  u32 a = R32((u32)(r_eax+0x12eb0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407fc3: jne 0x407fe9 */ if (!fZ) goto L_00407fe9;
L_00407fc5:; BB(0x00407fc5);
    /* 00407fc5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00407fcc: jmp 0x407fd7 */ goto L_00407fd7;
L_00407fce:; BB(0x00407fce);
    /* 00407fce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00407fd1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407fd4: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00407fd7:; BB(0x00407fd7);
    /* 00407fd7: cmp dword ptr [ebp - 0x34], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407fdb: jge 0x407fe9 */ if ((fS==fO)) goto L_00407fe9;
L_00407fdd:; BB(0x00407fdd);
    /* 00407fdd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00407fdf: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00407fe2: call 0x408391 */ r_esp -= 4; W32(r_esp, 0x407fe7u); f_00408391();
    /* 00407fe7: jmp 0x407fce */ goto L_00407fce;
L_00407fe9:; BB(0x00407fe9);
    /* 00407fe9: mov esp, ebp */ r_esp = r_ebp;
    /* 00407feb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407fec: ret  */ FN_RET(0x00407ab9); r_esp += 4; return;
}

void f_00407fed(void) /* FUN_00407fed */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407fed);
    /* 00407fed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407fee: mov ebp, esp */ r_ebp = r_esp;
    /* 00407ff0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407ff3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00407ff6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407ffd: jmp 0x408008 */ goto L_00408008;
L_00407fff:; BB(0x00407fff);
    /* 00407fff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408002: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408005: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00408008:; BB(0x00408008);
    /* 00408008: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040800c: jge 0x408036 */ if ((fS==fO)) goto L_00408036;
L_0040800e:; BB(0x0040800e);
    /* 0040800e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408011: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408014: cmp dword ptr [edx + ecx*4 + 8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408019: je 0x408034 */ if (fZ) goto L_00408034;
L_0040801b:; BB(0x0040801b);
    /* 0040801b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040801e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408021: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00408025: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408028: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040802b: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0040802f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00408031: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x408034u); call_ind(t); }
L_00408034:; BB(0x00408034);
    /* 00408034: jmp 0x407fff */ goto L_00407fff;
L_00408036:; BB(0x00408036);
    /* 00408036: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040803d: jmp 0x408048 */ goto L_00408048;
L_0040803f:; BB(0x0040803f);
    /* 0040803f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408042: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00408045: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00408048:; BB(0x00408048);
    /* 00408048: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040804c: jge 0x408076 */ if ((fS==fO)) goto L_00408076;
L_0040804e:; BB(0x0040804e);
    /* 0040804e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408051: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408054: cmp dword ptr [eax + edx*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408059: je 0x408074 */ if (fZ) goto L_00408074;
L_0040805b:; BB(0x0040805b);
    /* 0040805b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040805e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408061: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00408065: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408068: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040806b: mov eax, dword ptr [edx + eax*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_eax*4+0x18u));
    /* 0040806f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408071: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x408074u); call_ind(t); }
L_00408074:; BB(0x00408074);
    /* 00408074: jmp 0x40803f */ goto L_0040803f;
L_00408076:; BB(0x00408076);
    /* 00408076: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408079: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0040807c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040807f: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00408082: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408084: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x408087u); call_ind(t); }
    /* 00408087: mov esp, ebp */ r_esp = r_ebp;
    /* 00408089: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040808a: ret  */ FN_RET(0x00407fed); r_esp += 4; return;
}

void f_0040808b(void) /* FUN_0040808b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040808b);
    /* 0040808b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040808c: mov ebp, esp */ r_ebp = r_esp;
    /* 0040808e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408091: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00408094: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00408099: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040809c: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 004080a2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004080a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004080a7: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x4080aau); call_ind(t); }
    /* 004080aa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004080ad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004080b4: jmp 0x4080bf */ goto L_004080bf;
L_004080b6:; BB(0x004080b6);
    /* 004080b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004080b9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004080bc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004080bf:; BB(0x004080bf);
    /* 004080bf: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004080c3: jge 0x4080ed */ if ((fS==fO)) goto L_004080ed;
L_004080c5:; BB(0x004080c5);
    /* 004080c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004080c8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004080cb: cmp dword ptr [edx + ecx*4 + 8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004080d0: je 0x4080eb */ if (fZ) goto L_004080eb;
L_004080d2:; BB(0x004080d2);
    /* 004080d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004080d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004080d8: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004080dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004080df: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004080e2: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004080e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004080e8: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x4080ebu); call_ind(t); }
L_004080eb:; BB(0x004080eb);
    /* 004080eb: jmp 0x4080b6 */ goto L_004080b6;
L_004080ed:; BB(0x004080ed);
    /* 004080ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004080f0: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 004080f3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004080f6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 004080f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004080fb: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4080feu); call_ind(t); }
    /* 004080fe: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408102: je 0x40811c */ if (fZ) goto L_0040811c;
L_00408104:; BB(0x00408104);
    /* 00408104: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408107: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x40810cu); f_004259a0();
    /* 0040810c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040810e: je 0x40811c */ if (fZ) goto L_0040811c;
L_00408110:; BB(0x00408110);
    /* 00408110: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408113: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408114: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408117: call 0x408120 */ r_esp -= 4; W32(r_esp, 0x40811cu); f_00408120();
L_0040811c:; BB(0x0040811c);
    /* 0040811c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040811e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040811f: ret  */ FN_RET(0x0040808b); r_esp += 4; return;
}

void f_00408120(void) /* FUN_00408120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408120);
    /* 00408120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408121: mov ebp, esp */ r_ebp = r_esp;
    /* 00408123: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408126: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00408129: mov dword ptr [ebp - 0x38], 0x5f5e100 */ W32((u32)(r_ebp+0xffffffc8u), 0x5f5e100u);
    /* 00408130: mov dword ptr [ebp - 0x34], 0x989680 */ W32((u32)(r_ebp+0xffffffccu), 0x989680u);
    /* 00408137: mov dword ptr [ebp - 0x30], 0xf4240 */ W32((u32)(r_ebp+0xffffffd0u), 0xf4240u);
    /* 0040813e: mov dword ptr [ebp - 0x2c], 0x7a120 */ W32((u32)(r_ebp+0xffffffd4u), 0x7a120u);
    /* 00408145: mov dword ptr [ebp - 0x28], 0x186a0 */ W32((u32)(r_ebp+0xffffffd8u), 0x186a0u);
    /* 0040814c: mov dword ptr [ebp - 0x24], 0xc350 */ W32((u32)(r_ebp+0xffffffdcu), 0xc350u);
    /* 00408153: mov dword ptr [ebp - 0x20], 0x61a8 */ W32((u32)(r_ebp+0xffffffe0u), 0x61a8u);
    /* 0040815a: mov dword ptr [ebp - 0x1c], 0x2710 */ W32((u32)(r_ebp+0xffffffe4u), 0x2710u);
    /* 00408161: mov dword ptr [ebp - 0x18], 0x1388 */ W32((u32)(r_ebp+0xffffffe8u), 0x1388u);
    /* 00408168: mov dword ptr [ebp - 0x14], 0x3e8 */ W32((u32)(r_ebp+0xffffffecu), 0x3e8u);
    /* 0040816f: mov dword ptr [ebp - 0x10], 0x1f4 */ W32((u32)(r_ebp+0xfffffff0u), 0x1f4u);
    /* 00408176: mov dword ptr [ebp - 0xc], 0x64 */ W32((u32)(r_ebp+0xfffffff4u), 0x64u);
    /* 0040817d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00408184: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040818b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040818e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00408191: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x408196u); f_00426819();
    /* 00408196: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00408199: cmp dword ptr [ecx + 0x114], eax */ {  u32 a = R32((u32)(r_ecx+0x114u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040819f: jle 0x4081cb */ if ((fZ||fS!=fO)) goto L_004081cb;
L_004081a1:; BB(0x004081a1);
    /* 004081a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004081a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004081a5: call 0x4298bc */ r_esp -= 4; W32(r_esp, 0x4081aau); f_004298bc();
    /* 004081aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004081ad: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004081b0: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004081b3: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004081b6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004081b9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004081bc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004081bf: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 004081c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004081c3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004081c6: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x4081cbu); f_00425bfe();
L_004081cb:; BB(0x004081cb);
    /* 004081cb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004081cd: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004081d3: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x4081d8u); f_0045b93e();
    /* 004081d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004081da: je 0x4081e8 */ if (fZ) goto L_004081e8;
L_004081dc:; BB(0x004081dc);
    /* 004081dc: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004081df: mov dword ptr [edx + 0x2c], 0x19 */ W32((u32)(r_edx+0x2cu), 0x19u);
    /* 004081e6: jmp 0x4081f2 */ goto L_004081f2;
L_004081e8:; BB(0x004081e8);
    /* 004081e8: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004081eb: mov dword ptr [eax + 0x2c], 0x32 */ W32((u32)(r_eax+0x2cu), 0x32u);
L_004081f2:; BB(0x004081f2);
    /* 004081f2: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004081f9: jmp 0x408204 */ goto L_00408204;
L_004081fb:; BB(0x004081fb);
    /* 004081fb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004081fe: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00408201: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_00408204:; BB(0x00408204);
    /* 00408204: cmp dword ptr [ebp - 0x3c], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408208: jge 0x40822f */ if ((fS==fO)) goto L_0040822f;
L_0040820a:; BB(0x0040820a);
    /* 0040820a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040820d: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00408210: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x408215u); f_00426819();
    /* 00408215: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00408218: cmp eax, dword ptr [ebp + ecx*4 - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040821c: jl 0x40822d */ if ((fS!=fO)) goto L_0040822d;
L_0040821e:; BB(0x0040821e);
    /* 0040821e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00408221: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00408224: mov ecx, dword ptr [ebp + eax*4 - 0x38] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffc8u));
    /* 00408228: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0040822b: jmp 0x40822f */ goto L_0040822f;
L_0040822d:; BB(0x0040822d);
    /* 0040822d: jmp 0x4081fb */ goto L_004081fb;
L_0040822f:; BB(0x0040822f);
    /* 0040822f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00408232: call 0x408262 */ r_esp -= 4; W32(r_esp, 0x408237u); f_00408262();
L_00408237:; BB(0x00408237);
    /* 00408237: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040823a: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0040823d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00408240: fild dword ptr [ecx + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x2cu)));
    /* 00408243: fcomp qword ptr [eax + 0xd0] */ fx_compare(ST(0), R_F64((u32)(r_eax+0xd0u))); FPOP();
    /* 00408249: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040824b: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0040824e: je 0x40825c */ if (fZ) goto L_0040825c;
L_00408250:; BB(0x00408250);
    /* 00408250: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00408252: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00408255: call 0x408391 */ r_esp -= 4; W32(r_esp, 0x40825au); f_00408391();
    /* 0040825a: jmp 0x408237 */ goto L_00408237;
L_0040825c:; BB(0x0040825c);
    /* 0040825c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040825e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040825f: ret 4 */ FN_RET(0x00408120); r_esp += 8; return;
}

void f_00408262(void) /* FUN_00408262 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408262);
    /* 00408262: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408263: mov ebp, esp */ r_ebp = r_esp;
    /* 00408265: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408266: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408269: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040826b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00408271: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x408276u); f_0045b93e();
    /* 00408276: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408278: jne 0x4082aa */ if (!fZ) goto L_004082aa;
L_0040827a:; BB(0x0040827a);
    /* 0040827a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0040827c: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00408282: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x408287u); f_0045b93e();
    /* 00408287: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408289: jne 0x4082aa */ if (!fZ) goto L_004082aa;
L_0040828b:; BB(0x0040828b);
    /* 0040828b: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00408290: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00408293: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00408299: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040829c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040829e: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x4082a1u); call_ind(t); }
    /* 004082a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004082a3: jne 0x4082aa */ if (!fZ) goto L_004082aa;
L_004082a5:; BB(0x004082a5);
    /* 004082a5: jmp 0x40838d */ goto L_0040838d;
L_004082aa:; BB(0x004082aa);
    /* 004082aa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004082ac: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004082b2: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x4082b7u); f_0045b93e();
    /* 004082b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004082b9: je 0x4082fa */ if (fZ) goto L_004082fa;
L_004082bb:; BB(0x004082bb);
    /* 004082bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004082be: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004082c1: fld qword ptr [ecx + 0xd0] */ FPUSH(R_F64((u32)(r_ecx+0xd0u)));
    /* 004082c7: fcomp qword ptr [0x633628] */ fx_compare(ST(0), R_F64((u32)(0x633628u))); FPOP();
    /* 004082cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004082cf: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004082d2: je 0x4082e7 */ if (fZ) goto L_004082e7;
L_004082d4:; BB(0x004082d4);
    /* 004082d4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004082d7: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004082da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004082dd: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004082e0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004082e2: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x4082e5u); call_ind(t); }
    /* 004082e5: jmp 0x4082f8 */ goto L_004082f8;
L_004082e7:; BB(0x004082e7);
    /* 004082e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004082ea: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 004082ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004082f0: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004082f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004082f5: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4082f8u); call_ind(t); }
L_004082f8:; BB(0x004082f8);
    /* 004082f8: jmp 0x408337 */ goto L_00408337;
L_004082fa:; BB(0x004082fa);
    /* 004082fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004082fd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00408300: fld qword ptr [ecx + 0xd0] */ FPUSH(R_F64((u32)(r_ecx+0xd0u)));
    /* 00408306: fcomp qword ptr [0x633630] */ fx_compare(ST(0), R_F64((u32)(0x633630u))); FPOP();
    /* 0040830c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040830e: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00408311: je 0x408326 */ if (fZ) goto L_00408326;
L_00408313:; BB(0x00408313);
    /* 00408313: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408316: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00408319: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040831c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0040831f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00408321: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x408324u); call_ind(t); }
    /* 00408324: jmp 0x408337 */ goto L_00408337;
L_00408326:; BB(0x00408326);
    /* 00408326: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408329: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0040832c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040832f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00408332: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408334: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x408337u); call_ind(t); }
L_00408337:; BB(0x00408337);
    /* 00408337: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040833a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0040833d: fld qword ptr [ecx + 0xd0] */ FPUSH(R_F64((u32)(r_ecx+0xd0u)));
    /* 00408343: fcomp qword ptr [0x633638] */ fx_compare(ST(0), R_F64((u32)(0x633638u))); FPOP();
    /* 00408349: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040834b: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0040834e: jne 0x408369 */ if (!fZ) goto L_00408369;
L_00408350:; BB(0x00408350);
    /* 00408350: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408353: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00408356: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408359: fild dword ptr [ecx + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x2cu)));
    /* 0040835c: fcomp qword ptr [eax + 0xd0] */ fx_compare(ST(0), R_F64((u32)(r_eax+0xd0u))); FPOP();
    /* 00408362: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00408364: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00408367: je 0x40837c */ if (fZ) goto L_0040837c;
L_00408369:; BB(0x00408369);
    /* 00408369: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040836c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0040836f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408372: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00408375: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00408377: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x40837au); call_ind(t); }
    /* 0040837a: jmp 0x40838d */ goto L_0040838d;
L_0040837c:; BB(0x0040837c);
    /* 0040837c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040837f: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00408382: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408385: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00408388: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040838a: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x40838du); call_ind(t); }
L_0040838d:; BB(0x0040838d);
    /* 0040838d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040838f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408390: ret  */ FN_RET(0x00408262); r_esp += 4; return;
}

void f_00408391(void) /* FUN_00408391 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408391);
    /* 00408391: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408392: mov ebp, esp */ r_ebp = r_esp;
    /* 00408394: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408397: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040839a: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040839e: jne 0x4083bb */ if (!fZ) goto L_004083bb;
L_004083a0:; BB(0x004083a0);
    /* 004083a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004083a3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004083a6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004083a9: fild dword ptr [edx + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x2cu)));
    /* 004083ac: fcomp qword ptr [ecx + 0xd0] */ fx_compare(ST(0), R_F64((u32)(r_ecx+0xd0u))); FPOP();
    /* 004083b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004083b4: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004083b7: je 0x4083bb */ if (fZ) goto L_004083bb;
L_004083b9:; BB(0x004083b9);
    /* 004083b9: jmp 0x408401 */ goto L_00408401;
L_004083bb:; BB(0x004083bb);
    /* 004083bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004083c2: jmp 0x4083cd */ goto L_004083cd;
L_004083c4:; BB(0x004083c4);
    /* 004083c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004083c7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004083ca: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004083cd:; BB(0x004083cd);
    /* 004083cd: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004083d1: jge 0x4083e8 */ if ((fS==fO)) goto L_004083e8;
L_004083d3:; BB(0x004083d3);
    /* 004083d3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004083d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004083d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004083da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004083dd: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004083e1: call 0x4088b5 */ r_esp -= 4; W32(r_esp, 0x4083e6u); f_004088b5();
    /* 004083e6: jmp 0x4083c4 */ goto L_004083c4;
L_004083e8:; BB(0x004083e8);
    /* 004083e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004083eb: call 0x408262 */ r_esp -= 4; W32(r_esp, 0x4083f0u); f_00408262();
    /* 004083f0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004083f3: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004083f7: je 0x408401 */ if (fZ) goto L_00408401;
L_004083f9:; BB(0x004083f9);
    /* 004083f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004083fc: call 0x408492 */ r_esp -= 4; W32(r_esp, 0x408401u); f_00408492();
L_00408401:; BB(0x00408401);
    /* 00408401: mov esp, ebp */ r_esp = r_ebp;
    /* 00408403: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408404: ret 4 */ FN_RET(0x00408391); r_esp += 8; return;
}

void f_00408407(void) /* FUN_00408407 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408407);
    /* 00408407: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408408: mov ebp, esp */ r_ebp = r_esp;
    /* 0040840a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040840d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00408410: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00408417: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040841e: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00408423: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00408426: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0040842c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040842f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408431: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x408434u); call_ind(t); }
    /* 00408434: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00408437: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040843b: je 0x408466 */ if (fZ) goto L_00408466;
L_0040843d:; BB(0x0040843d);
    /* 0040843d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408440: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x408445u); f_004259a0();
    /* 00408445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408447: je 0x408466 */ if (fZ) goto L_00408466;
L_00408449:; BB(0x00408449);
    /* 00408449: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040844c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040844d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408450: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x408455u); f_00425bfe();
    /* 00408455: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00408457: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0040845a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040845b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040845e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00408460: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408463: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x408466u); call_ind(t); }
L_00408466:; BB(0x00408466);
    /* 00408466: mov esp, ebp */ r_esp = r_ebp;
    /* 00408468: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408469: ret  */ FN_RET(0x00408407); r_esp += 4; return;
}

void f_0040846a(void) /* FUN_0040846a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040846a);
    /* 0040846a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040846b: mov ebp, esp */ r_ebp = r_esp;
    /* 0040846d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040846e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408471: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408474: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00408477: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 0040847a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040847d: mov dword ptr [edx + 0x24], 1 */ W32((u32)(r_edx+0x24u), 0x1u);
    /* 00408484: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408487: call 0x408492 */ r_esp -= 4; W32(r_esp, 0x40848cu); f_00408492();
    /* 0040848c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040848e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040848f: ret 4 */ FN_RET(0x0040846a); r_esp += 8; return;
}

void f_00408492(void) /* FUN_00408492 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408492);
    /* 00408492: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408493: mov ebp, esp */ r_ebp = r_esp;
    /* 00408495: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408498: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040849b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004084a2: jmp 0x4084ad */ goto L_004084ad;
L_004084a4:; BB(0x004084a4);
    /* 004084a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004084a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004084aa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004084ad:; BB(0x004084ad);
    /* 004084ad: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004084b1: jge 0x4084ce */ if ((fS==fO)) goto L_004084ce;
L_004084b3:; BB(0x004084b3);
    /* 004084b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004084b6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004084b9: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004084bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004084c0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004084c3: mov eax, dword ptr [edx + eax*4 + 8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 004084c7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004084c9: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4084ccu); call_ind(t); }
    /* 004084cc: jmp 0x4084a4 */ goto L_004084a4;
L_004084ce:; BB(0x004084ce);
    /* 004084ce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004084d1: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004084d5: jne 0x4084dc */ if (!fZ) goto L_004084dc;
L_004084d7:; BB(0x004084d7);
    /* 004084d7: jmp 0x4085ab */ goto L_004085ab;
L_004084dc:; BB(0x004084dc);
    /* 004084dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004084e3: jmp 0x4084ee */ goto L_004084ee;
L_004084e5:; BB(0x004084e5);
    /* 004084e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004084e8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004084eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004084ee:; BB(0x004084ee);
    /* 004084ee: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004084f2: jge 0x4085ab */ if ((fS==fO)) goto L_004085ab;
L_004084f8:; BB(0x004084f8);
    /* 004084f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004084fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004084fe: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00408502: fld qword ptr [ecx + 0xd0] */ FPUSH(R_F64((u32)(r_ecx+0xd0u)));
    /* 00408508: fcomp qword ptr [0x633628] */ fx_compare(ST(0), R_F64((u32)(0x633628u))); FPOP();
    /* 0040850e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00408510: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00408513: jne 0x408572 */ if (!fZ) goto L_00408572;
L_00408515:; BB(0x00408515);
    /* 00408515: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408518: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040851b: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0040851f: fld qword ptr [ecx + 0xd0] */ FPUSH(R_F64((u32)(r_ecx+0xd0u)));
    /* 00408525: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x40852au); f_00624144();
    /* 0040852a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040852d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040852e: idiv dword ptr [ecx + 0x28] */ { i32 d = (i32)R32((u32)(r_ecx+0x28u)); if (!d) UNSUP(0x0040852e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040852e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00408531: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408533: jne 0x408572 */ if (!fZ) goto L_00408572;
L_00408535:; BB(0x00408535);
    /* 00408535: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00408537: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0040853d: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x408542u); f_0045b93e();
    /* 00408542: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408544: je 0x40858d */ if (fZ) goto L_0040858d;
L_00408546:; BB(0x00408546);
    /* 00408546: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408549: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040854c: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00408550: fld qword ptr [ecx + 0xd0] */ FPUSH(R_F64((u32)(r_ecx+0xd0u)));
    /* 00408556: fcomp qword ptr [0x633628] */ fx_compare(ST(0), R_F64((u32)(0x633628u))); FPOP();
    /* 0040855c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040855e: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00408561: je 0x40858d */ if (fZ) goto L_0040858d;
L_00408563:; BB(0x00408563);
    /* 00408563: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00408569: cmp dword ptr [edx + 0x12eb0], 1 */ {  u32 a = R32((u32)(r_edx+0x12eb0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408570: jne 0x40858d */ if (!fZ) goto L_0040858d;
L_00408572:; BB(0x00408572);
    /* 00408572: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408575: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408578: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0040857c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040857f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408582: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00408586: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00408588: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x40858bu); call_ind(t); }
    /* 0040858b: jmp 0x4085a6 */ goto L_004085a6;
L_0040858d:; BB(0x0040858d);
    /* 0040858d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408590: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408593: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00408597: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040859a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040859d: mov eax, dword ptr [edx + eax*4 + 8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 004085a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004085a3: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4085a6u); call_ind(t); }
L_004085a6:; BB(0x004085a6);
    /* 004085a6: jmp 0x4084e5 */ goto L_004084e5;
L_004085ab:; BB(0x004085ab);
    /* 004085ab: mov esp, ebp */ r_esp = r_ebp;
    /* 004085ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004085ae: ret  */ FN_RET(0x00408492); r_esp += 4; return;
}

void f_004085af(void) /* FUN_004085af */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004085af);
    /* 004085af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004085b0: mov ebp, esp */ r_ebp = r_esp;
    /* 004085b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004085b3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004085b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004085b9: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x4085beu); f_005d5d20();
    /* 004085be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004085c1: mov dword ptr [eax], 0x633644 */ W32((u32)(r_eax), 0x633644u);
    /* 004085c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004085ca: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004085cd: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 004085d3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004085d6: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 004085dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004085de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004085e1: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x4085e6u); f_005ea514();
    /* 004085e6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004085e8: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004085ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004085ed: call 0x5d678c */ r_esp -= 4; W32(r_esp, 0x4085f2u); f_005d678c();
    /* 004085f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004085f5: mov esp, ebp */ r_esp = r_ebp;
    /* 004085f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004085f8: ret 8 */ FN_RET(0x004085af); r_esp += 12; return;
}

void f_004085fb(void) /* FUN_004085fb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004085fb);
    /* 004085fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004085fc: mov ebp, esp */ r_ebp = r_esp;
    /* 004085fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004085ff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408602: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408605: mov dword ptr [eax], 0x633644 */ W32((u32)(r_eax), 0x633644u);
    /* 0040860b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040860e: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x408613u); f_005d5dfb();
    /* 00408613: mov esp, ebp */ r_esp = r_ebp;
    /* 00408615: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408616: ret  */ FN_RET(0x004085fb); r_esp += 4; return;
}

void f_00408617(void) /* FUN_00408617 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408617);
    /* 00408617: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408618: mov ebp, esp */ r_ebp = r_esp;
    /* 0040861a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040861d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00408620: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00408627: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040862e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408631: fld qword ptr [eax + 0xd0] */ FPUSH(R_F64((u32)(r_eax+0xd0u)));
    /* 00408637: fcomp qword ptr [0x633628] */ fx_compare(ST(0), R_F64((u32)(0x633628u))); FPOP();
    /* 0040863d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040863f: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00408642: je 0x40864d */ if (fZ) goto L_0040864d;
L_00408644:; BB(0x00408644);
    /* 00408644: mov dword ptr [ebp - 4], 0x19 */ W32((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 0040864b: jmp 0x40865e */ goto L_0040865e;
L_0040864d:; BB(0x0040864d);
    /* 0040864d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408650: fld qword ptr [ecx + 0xd0] */ FPUSH(R_F64((u32)(r_ecx+0xd0u)));
    /* 00408656: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x40865bu); f_00624144();
    /* 0040865b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0040865e:; BB(0x0040865e);
    /* 0040865e: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00408661: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408662: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408665: call 0x408aae */ r_esp -= 4; W32(r_esp, 0x40866au); f_00408aae();
    /* 0040866a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040866c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040866d: ret  */ FN_RET(0x00408617); r_esp += 4; return;
}

void f_0040866e(void) /* FUN_0040866e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040866e);
    /* 0040866e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040866f: mov ebp, esp */ r_ebp = r_esp;
    /* 00408671: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408674: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00408677: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040867e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00408685: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408688: fld qword ptr [eax + 0xd0] */ FPUSH(R_F64((u32)(r_eax+0xd0u)));
    /* 0040868e: fcomp qword ptr [0x633628] */ fx_compare(ST(0), R_F64((u32)(0x633628u))); FPOP();
    /* 00408694: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00408696: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00408699: je 0x4086a4 */ if (fZ) goto L_004086a4;
L_0040869b:; BB(0x0040869b);
    /* 0040869b: mov dword ptr [ebp - 4], 0xffffffe7 */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffe7u);
    /* 004086a2: jmp 0x4086b8 */ goto L_004086b8;
L_004086a4:; BB(0x004086a4);
    /* 004086a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004086a7: fld qword ptr [ecx + 0xd0] */ FPUSH(R_F64((u32)(r_ecx+0xd0u)));
    /* 004086ad: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x4086b2u); f_00624144();
    /* 004086b2: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004086b5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004086b8:; BB(0x004086b8);
    /* 004086b8: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 004086bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004086bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004086bf: call 0x408aae */ r_esp -= 4; W32(r_esp, 0x4086c4u); f_00408aae();
    /* 004086c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004086c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004086c7: ret  */ FN_RET(0x0040866e); r_esp += 4; return;
}

void f_004086c8(void) /* FUN_004086c8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004086c8);
    /* 004086c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004086c9: mov ebp, esp */ r_ebp = r_esp;
    /* 004086cb: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004086ce: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004086d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004086d8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004086db: fld qword ptr [eax + 0xd0] */ FPUSH(R_F64((u32)(r_eax+0xd0u)));
    /* 004086e1: fcomp qword ptr [0x633628] */ fx_compare(ST(0), R_F64((u32)(0x633628u))); FPOP();
    /* 004086e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004086e9: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004086ec: je 0x4086f8 */ if (fZ) goto L_004086f8;
L_004086ee:; BB(0x004086ee);
    /* 004086ee: mov eax, 0x42d */ r_eax = 0x42du;
    /* 004086f3: jmp 0x4088b1 */ goto L_004088b1;
L_004086f8:; BB(0x004086f8);
    /* 004086f8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004086fb: fld qword ptr [ecx + 0xd0] */ FPUSH(R_F64((u32)(r_ecx+0xd0u)));
    /* 00408701: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x408706u); f_00624144();
    /* 00408706: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00408709: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040870d: jg 0x408728 */ if ((!fZ&&fS==fO)) goto L_00408728;
L_0040870f:; BB(0x0040870f);
    /* 0040870f: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408713: je 0x408887 */ if (fZ) goto L_00408887;
L_00408719:; BB(0x00408719);
    /* 00408719: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040871d: je 0x408890 */ if (fZ) goto L_00408890;
L_00408723:; BB(0x00408723);
    /* 00408723: jmp 0x4088a9 */ goto L_004088a9;
L_00408728:; BB(0x00408728);
    /* 00408728: cmp dword ptr [ebp - 0xc], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040872c: jg 0x408747 */ if ((!fZ&&fS==fO)) goto L_00408747;
L_0040872e:; BB(0x0040872e);
    /* 0040872e: cmp dword ptr [ebp - 0xc], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408732: je 0x408875 */ if (fZ) goto L_00408875;
L_00408738:; BB(0x00408738);
    /* 00408738: cmp dword ptr [ebp - 0xc], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040873c: je 0x40887e */ if (fZ) goto L_0040887e;
L_00408742:; BB(0x00408742);
    /* 00408742: jmp 0x4088a9 */ goto L_004088a9;
L_00408747:; BB(0x00408747);
    /* 00408747: cmp dword ptr [ebp - 0xc], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040874e: jg 0x40876c */ if ((!fZ&&fS==fO)) goto L_0040876c;
L_00408750:; BB(0x00408750);
    /* 00408750: cmp dword ptr [ebp - 0xc], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408757: je 0x408863 */ if (fZ) goto L_00408863;
L_0040875d:; BB(0x0040875d);
    /* 0040875d: cmp dword ptr [ebp - 0xc], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408761: je 0x40886c */ if (fZ) goto L_0040886c;
L_00408767:; BB(0x00408767);
    /* 00408767: jmp 0x4088a9 */ goto L_004088a9;
L_0040876c:; BB(0x0040876c);
    /* 0040876c: cmp dword ptr [ebp - 0xc], 0x1388 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408773: jg 0x408794 */ if ((!fZ&&fS==fO)) goto L_00408794;
L_00408775:; BB(0x00408775);
    /* 00408775: cmp dword ptr [ebp - 0xc], 0x1388 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040877c: je 0x408851 */ if (fZ) goto L_00408851;
L_00408782:; BB(0x00408782);
    /* 00408782: cmp dword ptr [ebp - 0xc], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408789: je 0x40885a */ if (fZ) goto L_0040885a;
L_0040878f:; BB(0x0040878f);
    /* 0040878f: jmp 0x4088a9 */ goto L_004088a9;
L_00408794:; BB(0x00408794);
    /* 00408794: cmp dword ptr [ebp - 0xc], 0x61a8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040879b: jg 0x4087bc */ if ((!fZ&&fS==fO)) goto L_004087bc;
L_0040879d:; BB(0x0040879d);
    /* 0040879d: cmp dword ptr [ebp - 0xc], 0x61a8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004087a4: je 0x40883f */ if (fZ) goto L_0040883f;
L_004087aa:; BB(0x004087aa);
    /* 004087aa: cmp dword ptr [ebp - 0xc], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004087b1: je 0x408848 */ if (fZ) goto L_00408848;
L_004087b7:; BB(0x004087b7);
    /* 004087b7: jmp 0x4088a9 */ goto L_004088a9;
L_004087bc:; BB(0x004087bc);
    /* 004087bc: cmp dword ptr [ebp - 0xc], 0x186a0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004087c3: jg 0x4087dc */ if ((!fZ&&fS==fO)) goto L_004087dc;
L_004087c5:; BB(0x004087c5);
    /* 004087c5: cmp dword ptr [ebp - 0xc], 0x186a0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004087cc: je 0x40882d */ if (fZ) goto L_0040882d;
L_004087ce:; BB(0x004087ce);
    /* 004087ce: cmp dword ptr [ebp - 0xc], 0xc350 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xc350u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004087d5: je 0x408836 */ if (fZ) goto L_00408836;
L_004087d7:; BB(0x004087d7);
    /* 004087d7: jmp 0x4088a9 */ goto L_004088a9;
L_004087dc:; BB(0x004087dc);
    /* 004087dc: cmp dword ptr [ebp - 0xc], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004087e3: jg 0x4087fc */ if ((!fZ&&fS==fO)) goto L_004087fc;
L_004087e5:; BB(0x004087e5);
    /* 004087e5: cmp dword ptr [ebp - 0xc], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004087ec: je 0x40881b */ if (fZ) goto L_0040881b;
L_004087ee:; BB(0x004087ee);
    /* 004087ee: cmp dword ptr [ebp - 0xc], 0x7a120 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004087f5: je 0x408824 */ if (fZ) goto L_00408824;
L_004087f7:; BB(0x004087f7);
    /* 004087f7: jmp 0x4088a9 */ goto L_004088a9;
L_004087fc:; BB(0x004087fc);
    /* 004087fc: cmp dword ptr [ebp - 0xc], 0x989680 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x989680u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408803: je 0x40889b */ if (fZ) goto L_0040889b;
L_00408809:; BB(0x00408809);
    /* 00408809: cmp dword ptr [ebp - 0xc], 0x5f5e100 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5f5e100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408810: je 0x4088a2 */ if (fZ) goto L_004088a2;
L_00408816:; BB(0x00408816);
    /* 00408816: jmp 0x4088a9 */ goto L_004088a9;
L_0040881b:; BB(0x0040881b);
    /* 0040881b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040881e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00408821: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00408824:; BB(0x00408824);
    /* 00408824: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408827: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040882a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040882d:; BB(0x0040882d);
    /* 0040882d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408830: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00408833: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00408836:; BB(0x00408836);
    /* 00408836: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408839: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040883c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0040883f:; BB(0x0040883f);
    /* 0040883f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408842: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408845: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00408848:; BB(0x00408848);
    /* 00408848: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040884b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040884e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00408851:; BB(0x00408851);
    /* 00408851: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408854: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00408857: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0040885a:; BB(0x0040885a);
    /* 0040885a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040885d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408860: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00408863:; BB(0x00408863);
    /* 00408863: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408866: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00408869: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040886c:; BB(0x0040886c);
    /* 0040886c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040886f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00408872: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00408875:; BB(0x00408875);
    /* 00408875: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408878: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040887b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040887e:; BB(0x0040887e);
    /* 0040887e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408881: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00408884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00408887:; BB(0x00408887);
    /* 00408887: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040888a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040888d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00408890:; BB(0x00408890);
    /* 00408890: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408893: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408896: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00408899: jmp 0x4088a9 */ goto L_004088a9;
L_0040889b:; BB(0x0040889b);
    /* 0040889b: mov eax, 0x440 */ r_eax = 0x440u;
    /* 004088a0: jmp 0x4088b1 */ goto L_004088b1;
L_004088a2:; BB(0x004088a2);
    /* 004088a2: mov eax, 0x43f */ r_eax = 0x43fu;
    /* 004088a7: jmp 0x4088b1 */ goto L_004088b1;
L_004088a9:; BB(0x004088a9);
    /* 004088a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004088ac: add eax, 0x3f8 */ {  u32 a = r_eax; u32 b = 0x3f8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004088b1:; BB(0x004088b1);
    /* 004088b1: mov esp, ebp */ r_esp = r_ebp;
    /* 004088b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004088b4: ret  */ FN_RET(0x004086c8); r_esp += 4; return;
}

void f_004088b5(void) /* FUN_004088b5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004088b5);
    /* 004088b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004088b6: mov ebp, esp */ r_ebp = r_esp;
    /* 004088b8: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004088be: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 004088c4: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 004088ce: mov dword ptr [ebp - 0x90], 0x3fd00000 */ W32((u32)(r_ebp+0xffffff70u), 0x3fd00000u);
    /* 004088d8: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 004088e2: mov dword ptr [ebp - 0x88], 0x3ff00000 */ W32((u32)(r_ebp+0xffffff78u), 0x3ff00000u);
    /* 004088ec: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 004088f6: mov dword ptr [ebp - 0x80], 0x40140000 */ W32((u32)(r_ebp+0xffffff80u), 0x40140000u);
    /* 004088fd: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 00408904: mov dword ptr [ebp - 0x78], 0x40240000 */ W32((u32)(r_ebp+0xffffff88u), 0x40240000u);
    /* 0040890b: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00408912: mov dword ptr [ebp - 0x70], 0x40390000 */ W32((u32)(r_ebp+0xffffff90u), 0x40390000u);
    /* 00408919: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 00408920: mov dword ptr [ebp - 0x68], 0x40490000 */ W32((u32)(r_ebp+0xffffff98u), 0x40490000u);
    /* 00408927: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0040892e: mov dword ptr [ebp - 0x60], 0x40590000 */ W32((u32)(r_ebp+0xffffffa0u), 0x40590000u);
    /* 00408935: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0040893c: mov dword ptr [ebp - 0x58], 0x407f4000 */ W32((u32)(r_ebp+0xffffffa8u), 0x407f4000u);
    /* 00408943: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0040894a: mov dword ptr [ebp - 0x50], 0x408f4000 */ W32((u32)(r_ebp+0xffffffb0u), 0x408f4000u);
    /* 00408951: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00408958: mov dword ptr [ebp - 0x48], 0x40b38800 */ W32((u32)(r_ebp+0xffffffb8u), 0x40b38800u);
    /* 0040895f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00408966: mov dword ptr [ebp - 0x40], 0x40c38800 */ W32((u32)(r_ebp+0xffffffc0u), 0x40c38800u);
    /* 0040896d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00408974: mov dword ptr [ebp - 0x38], 0x40d86a00 */ W32((u32)(r_ebp+0xffffffc8u), 0x40d86a00u);
    /* 0040897b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00408982: mov dword ptr [ebp - 0x30], 0x40e86a00 */ W32((u32)(r_ebp+0xffffffd0u), 0x40e86a00u);
    /* 00408989: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00408990: mov dword ptr [ebp - 0x28], 0x40f86a00 */ W32((u32)(r_ebp+0xffffffd8u), 0x40f86a00u);
    /* 00408997: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0040899e: mov dword ptr [ebp - 0x20], 0x411e8480 */ W32((u32)(r_ebp+0xffffffe0u), 0x411e8480u);
    /* 004089a5: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004089ac: mov dword ptr [ebp - 0x18], 0x412e8480 */ W32((u32)(r_ebp+0xffffffe8u), 0x412e8480u);
    /* 004089b3: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004089ba: mov dword ptr [ebp - 0x10], 0x416312d0 */ W32((u32)(r_ebp+0xfffffff0u), 0x416312d0u);
    /* 004089c1: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004089c8: mov dword ptr [ebp - 8], 0x4197d784 */ W32((u32)(r_ebp+0xfffffff8u), 0x4197d784u);
    /* 004089cf: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 004089d4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004089d7: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 004089dd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004089e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004089e2: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x4089e5u); call_ind(t); }
    /* 004089e5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004089e8: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 004089f2: jmp 0x408a03 */ goto L_00408a03;
L_004089f4:; BB(0x004089f4);
    /* 004089f4: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 004089fa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004089fd: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
L_00408a03:; BB(0x00408a03);
    /* 00408a03: cmp dword ptr [ebp - 0x98], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408a0a: jge 0x408aa8 */ if ((fS==fO)) goto L_00408aa8;
L_00408a10:; BB(0x00408a10);
    /* 00408a10: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00408a16: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00408a1c: fld qword ptr [ebp + ecx*8 - 0x94] */ FPUSH(R_F64((u32)(r_ebp+r_ecx*8+0xffffff6cu)));
    /* 00408a23: fcomp qword ptr [edx + 0xd0] */ fx_compare(ST(0), R_F64((u32)(r_edx+0xd0u))); FPOP();
    /* 00408a29: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00408a2b: test ah, 0x40 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00408a2e: je 0x408aa3 */ if (fZ) goto L_00408aa3;
L_00408a30:; BB(0x00408a30);
    /* 00408a30: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408a34: jne 0x408a5e */ if (!fZ) goto L_00408a5e;
L_00408a36:; BB(0x00408a36);
    /* 00408a36: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00408a3c: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00408a42: mov edx, dword ptr [ebp + eax*8 - 0x9c] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffff64u));
    /* 00408a49: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 00408a4f: mov eax, dword ptr [ebp + eax*8 - 0x98] */ r_eax = R32((u32)(r_ebp+r_eax*8+0xffffff68u));
    /* 00408a56: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 00408a5c: jmp 0x408a84 */ goto L_00408a84;
L_00408a5e:; BB(0x00408a5e);
    /* 00408a5e: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00408a64: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00408a6a: mov eax, dword ptr [ebp + ecx*8 - 0x8c] */ r_eax = R32((u32)(r_ebp+r_ecx*8+0xffffff74u));
    /* 00408a71: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 00408a77: mov ecx, dword ptr [ebp + ecx*8 - 0x88] */ r_ecx = R32((u32)(r_ebp+r_ecx*8+0xffffff78u));
    /* 00408a7e: mov dword ptr [edx + 0xd4], ecx */ W32((u32)(r_edx+0xd4u), r_ecx);
L_00408a84:; BB(0x00408a84);
    /* 00408a84: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00408a8a: call 0x4086c8 */ r_esp -= 4; W32(r_esp, 0x408a8fu); f_004086c8();
    /* 00408a8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408a90: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00408a96: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00408a98: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00408a9e: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x408aa1u); call_ind(t); }
    /* 00408aa1: jmp 0x408aa8 */ goto L_00408aa8;
L_00408aa3:; BB(0x00408aa3);
    /* 00408aa3: jmp 0x4089f4 */ goto L_004089f4;
L_00408aa8:; BB(0x00408aa8);
    /* 00408aa8: mov esp, ebp */ r_esp = r_ebp;
    /* 00408aaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408aab: ret 4 */ FN_RET(0x004088b5); r_esp += 8; return;
}

void f_00408aae(void) /* FUN_00408aae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408aae);
    /* 00408aae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408aaf: mov ebp, esp */ r_ebp = r_esp;
    /* 00408ab1: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408ab4: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00408ab7: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00408abc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00408abf: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00408ac5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00408ac8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408aca: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x408acdu); call_ind(t); }
    /* 00408acd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00408ad0: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00408ad3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408ad4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408ad7: call 0x425b89 */ r_esp -= 4; W32(r_esp, 0x408adcu); f_00425b89();
    /* 00408adc: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00408adf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408ae0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408ae3: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00408ae6: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x408aebu); f_004267fb();
    /* 00408aeb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00408aed: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00408af3: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x408af8u); f_0045b93e();
    /* 00408af8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408afa: je 0x408b17 */ if (fZ) goto L_00408b17;
L_00408afc:; BB(0x00408afc);
    /* 00408afc: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00408b01: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00408b04: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00408b0a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00408b0d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408b0f: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x408b12u); call_ind(t); }
    /* 00408b12: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00408b15: jmp 0x408b29 */ goto L_00408b29;
L_00408b17:; BB(0x00408b17);
    /* 00408b17: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00408b1c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00408b1f: call 0x448919 */ r_esp -= 4; W32(r_esp, 0x408b24u); f_00448919();
    /* 00408b24: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00408b26: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_00408b29:; BB(0x00408b29);
    /* 00408b29: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00408b2c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00408b2f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00408b32: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408b35: jne 0x408b4d */ if (!fZ) goto L_00408b4d;
L_00408b37:; BB(0x00408b37);
    /* 00408b37: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00408b3a: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408b3d: jl 0x408b4d */ if ((fS!=fO)) goto L_00408b4d;
L_00408b3f:; BB(0x00408b3f);
    /* 00408b3f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00408b42: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408b46: jl 0x408b4d */ if ((fS!=fO)) goto L_00408b4d;
L_00408b48:; BB(0x00408b48);
    /* 00408b48: jmp 0x408dce */ goto L_00408dce;
L_00408b4d:; BB(0x00408b4d);
    /* 00408b4d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00408b50: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408b53: jne 0x408b73 */ if (!fZ) goto L_00408b73;
L_00408b55:; BB(0x00408b55);
    /* 00408b55: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00408b58: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408b5b: jne 0x408b73 */ if (!fZ) goto L_00408b73;
L_00408b5d:; BB(0x00408b5d);
    /* 00408b5d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00408b60: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408b63: jl 0x408b73 */ if ((fS!=fO)) goto L_00408b73;
L_00408b65:; BB(0x00408b65);
    /* 00408b65: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408b68: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408b6c: jl 0x408b73 */ if ((fS!=fO)) goto L_00408b73;
L_00408b6e:; BB(0x00408b6e);
    /* 00408b6e: jmp 0x408dce */ goto L_00408dce;
L_00408b73:; BB(0x00408b73);
    /* 00408b73: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00408b76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408b77: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00408b7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408b7b: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00408b7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408b7f: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x408b84u); f_00429a59();
    /* 00408b84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408b87: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408b8a: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408b8d: jle 0x408b95 */ if ((fZ||fS!=fO)) goto L_00408b95;
L_00408b8f:; BB(0x00408b8f);
    /* 00408b8f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408b92: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00408b95:; BB(0x00408b95);
    /* 00408b95: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408b98: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408b9b: jne 0x408baa */ if (!fZ) goto L_00408baa;
L_00408b9d:; BB(0x00408b9d);
    /* 00408b9d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408ba1: jle 0x408baa */ if ((fZ||fS!=fO)) goto L_00408baa;
L_00408ba3:; BB(0x00408ba3);
    /* 00408ba3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00408baa:; BB(0x00408baa);
    /* 00408baa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408bad: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408bb0: jl 0x408d3c */ if ((fS!=fO)) goto L_00408d3c;
L_00408bb6:; BB(0x00408bb6);
    /* 00408bb6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00408bb8: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00408bbe: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x408bc3u); f_0045b93e();
    /* 00408bc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408bc5: jne 0x408bdc */ if (!fZ) goto L_00408bdc;
L_00408bc7:; BB(0x00408bc7);
    /* 00408bc7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00408bc9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00408bcf: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x408bd4u); f_0045b93e();
    /* 00408bd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408bd6: je 0x408d3c */ if (fZ) goto L_00408d3c;
L_00408bdc:; BB(0x00408bdc);
    /* 00408bdc: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00408be2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00408be5: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00408be8: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00408beb: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00408bee: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408bf1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00408bf4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408bf7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408bfa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00408bfc: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00408c02: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x408c07u); f_0045b93e();
    /* 00408c07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408c09: je 0x408cc5 */ if (fZ) goto L_00408cc5;
L_00408c0f:; BB(0x00408c0f);
    /* 00408c0f: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00408c15: cmp dword ptr [edx + 0x12eb0], 2 */ {  u32 a = R32((u32)(r_edx+0x12eb0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408c1c: jle 0x408cbf */ if ((fZ||fS!=fO)) goto L_00408cbf;
L_00408c22:; BB(0x00408c22);
    /* 00408c22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00408c29: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408c2d: je 0x408cbd */ if (fZ) goto L_00408cbd;
L_00408c33:; BB(0x00408c33);
    /* 00408c33: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408c36: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00408c37: idiv dword ptr [ebp - 0x14] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffecu)); if (!d) UNSUP(0x00408c37, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00408c37, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00408c3a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00408c3d: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00408c42: mov ecx, dword ptr [eax + 0x12eb0] */ r_ecx = R32((u32)(r_eax+0x12eb0u));
    /* 00408c48: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00408c4b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00408c4e: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00408c51: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00408c54: cmp dword ptr [ebp - 0x34], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00408c58: ja 0x408cbd */ if ((!fC&&!fZ)) goto L_00408cbd;
L_00408c5a:; BB(0x00408c5a);
    /* 00408c5a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00408c5d: jmp dword ptr [eax*4 + 0x408dd4] */ { u32 t = R32((u32)(r_eax*4+0x408dd4u)); switch (t) { case 0x408c64u: goto L_00408c64; case 0x408c6cu: goto L_00408c6c; case 0x408c77u: goto L_00408c77; case 0x408c82u: goto L_00408c82; case 0x408c8du: goto L_00408c8d; case 0x408c98u: goto L_00408c98; case 0x408ca3u: goto L_00408ca3; case 0x408cb1u: goto L_00408cb1; case 0x408d15u: goto L_00408d15; case 0x408d1du: goto L_00408d1d; case 0x408d3cu: goto L_00408d3c; case 0x408d28u: goto L_00408d28; case 0x408d33u: goto L_00408d33; default: UNSUP(0x00408c5d, "jump table entry is not a known target"); } }
L_00408c64:; BB(0x00408c64);
    /* 00408c64: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408c67: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00408c6a: jmp 0x408cbd */ goto L_00408cbd;
L_00408c6c:; BB(0x00408c6c);
    /* 00408c6c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408c6f: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408c72: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00408c75: jmp 0x408cbd */ goto L_00408cbd;
L_00408c77:; BB(0x00408c77);
    /* 00408c77: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408c7a: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408c7d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00408c80: jmp 0x408cbd */ goto L_00408cbd;
L_00408c82:; BB(0x00408c82);
    /* 00408c82: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408c85: imul ecx, ecx, 0x19 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x19u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408c88: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00408c8b: jmp 0x408cbd */ goto L_00408cbd;
L_00408c8d:; BB(0x00408c8d);
    /* 00408c8d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408c90: imul edx, edx, 0x32 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x32u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408c93: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00408c96: jmp 0x408cbd */ goto L_00408cbd;
L_00408c98:; BB(0x00408c98);
    /* 00408c98: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408c9b: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408c9e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00408ca1: jmp 0x408cbd */ goto L_00408cbd;
L_00408ca3:; BB(0x00408ca3);
    /* 00408ca3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408ca6: imul ecx, ecx, 0x1f4 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1f4u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408cac: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00408caf: jmp 0x408cbd */ goto L_00408cbd;
L_00408cb1:; BB(0x00408cb1);
    /* 00408cb1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408cb4: imul edx, edx, 0x3e8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3e8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408cba: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00408cbd:; BB(0x00408cbd);
    /* 00408cbd: jmp 0x408cc5 */ goto L_00408cc5;
L_00408cbf:; BB(0x00408cbf);
    /* 00408cbf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408cc2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00408cc5:; BB(0x00408cc5);
    /* 00408cc5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00408cc7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00408ccd: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x408cd2u); f_0045b93e();
    /* 00408cd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408cd4: je 0x408d3c */ if (fZ) goto L_00408d3c;
L_00408cd6:; BB(0x00408cd6);
    /* 00408cd6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00408cdd: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408ce1: je 0x408d3c */ if (fZ) goto L_00408d3c;
L_00408ce3:; BB(0x00408ce3);
    /* 00408ce3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408ce6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00408ce7: idiv dword ptr [ebp - 0x14] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffecu)); if (!d) UNSUP(0x00408ce7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00408ce7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00408cea: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00408ced: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00408cf3: mov edx, dword ptr [ecx + 0x12ebc] */ r_edx = R32((u32)(r_ecx+0x12ebcu));
    /* 00408cf9: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00408cfc: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00408cff: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00408d02: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00408d05: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00408d09: ja 0x408d3c */ if ((!fC&&!fZ)) goto L_00408d3c;
L_00408d0b:; BB(0x00408d0b);
    /* 00408d0b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00408d0e: jmp dword ptr [ecx*4 + 0x408df4] */ { u32 t = R32((u32)(r_ecx*4+0x408df4u)); switch (t) { case 0x408cb1u: goto L_00408cb1; case 0x408ca3u: goto L_00408ca3; case 0x408c98u: goto L_00408c98; case 0x408c8du: goto L_00408c8d; case 0x408c82u: goto L_00408c82; case 0x408c77u: goto L_00408c77; case 0x408c6cu: goto L_00408c6c; case 0x408c64u: goto L_00408c64; case 0x408d15u: goto L_00408d15; case 0x408d1du: goto L_00408d1d; case 0x408d3cu: goto L_00408d3c; case 0x408d28u: goto L_00408d28; case 0x408d33u: goto L_00408d33; default: UNSUP(0x00408d0e, "jump table entry is not a known target"); } }
L_00408d15:; BB(0x00408d15);
    /* 00408d15: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408d18: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00408d1b: jmp 0x408d3c */ goto L_00408d3c;
L_00408d1d:; BB(0x00408d1d);
    /* 00408d1d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408d20: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408d23: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00408d26: jmp 0x408d3c */ goto L_00408d3c;
L_00408d28:; BB(0x00408d28);
    /* 00408d28: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408d2b: imul ecx, ecx, 0x19 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x19u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408d2e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00408d31: jmp 0x408d3c */ goto L_00408d3c;
L_00408d33:; BB(0x00408d33);
    /* 00408d33: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408d36: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408d39: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00408d3c:; BB(0x00408d3c);
    /* 00408d3c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408d3f: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408d42: jg 0x408d54 */ if ((!fZ&&fS==fO)) goto L_00408d54;
L_00408d44:; BB(0x00408d44);
    /* 00408d44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408d47: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408d4a: jne 0x408d62 */ if (!fZ) goto L_00408d62;
L_00408d4c:; BB(0x00408d4c);
    /* 00408d4c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408d4f: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408d52: jle 0x408d62 */ if ((fZ||fS!=fO)) goto L_00408d62;
L_00408d54:; BB(0x00408d54);
    /* 00408d54: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00408d57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408d58: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408d5b: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x408d60u); f_00425bfe();
    /* 00408d60: jmp 0x408d84 */ goto L_00408d84;
L_00408d62:; BB(0x00408d62);
    /* 00408d62: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408d66: jl 0x408d7c */ if ((fS!=fO)) goto L_00408d7c;
L_00408d68:; BB(0x00408d68);
    /* 00408d68: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408d6c: jl 0x408d7c */ if ((fS!=fO)) goto L_00408d7c;
L_00408d6e:; BB(0x00408d6e);
    /* 00408d6e: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00408d71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408d72: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408d75: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x408d7au); f_00425bfe();
    /* 00408d7a: jmp 0x408d84 */ goto L_00408d84;
L_00408d7c:; BB(0x00408d7c);
    /* 00408d7c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408d7f: call 0x425b72 */ r_esp -= 4; W32(r_esp, 0x408d84u); f_00425b72();
L_00408d84:; BB(0x00408d84);
    /* 00408d84: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00408d86: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00408d8c: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x408d91u); f_0045b93e();
    /* 00408d91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408d93: jne 0x408dce */ if (!fZ) goto L_00408dce;
L_00408d95:; BB(0x00408d95);
    /* 00408d95: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00408d97: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00408d9d: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x408da2u); f_0045b93e();
    /* 00408da2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408da4: jne 0x408dce */ if (!fZ) goto L_00408dce;
L_00408da6:; BB(0x00408da6);
    /* 00408da6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00408da8: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00408dae: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x408db3u); f_0045b93e();
    /* 00408db3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408db5: jne 0x408dce */ if (!fZ) goto L_00408dce;
L_00408db7:; BB(0x00408db7);
    /* 00408db7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00408db9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408dbc: add edx, 0x114 */ {  u32 a = r_edx; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00408dc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408dc3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408dc6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408dc8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408dcb: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x408dceu); call_ind(t); }
L_00408dce:; BB(0x00408dce);
    /* 00408dce: mov esp, ebp */ r_esp = r_ebp;
    /* 00408dd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408dd1: ret 4 */ FN_RET(0x00408aae); r_esp += 8; return;
}

void f_00408e0c(void) /* FUN_00408e0c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408e0c);
    /* 00408e0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408e0d: mov ebp, esp */ r_ebp = r_esp;
    /* 00408e0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408e10: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408e13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408e16: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x408e1bu); f_005d5d20();
    /* 00408e1b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408e1e: mov dword ptr [eax], 0x6336b4 */ W32((u32)(r_eax), 0x6336b4u);
    /* 00408e24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408e27: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
    /* 00408e31: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00408e33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408e36: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x408e3bu); f_005ea514();
    /* 00408e3b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408e3e: mov esp, ebp */ r_esp = r_ebp;
    /* 00408e40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408e41: ret  */ FN_RET(0x00408e0c); r_esp += 4; return;
}

void f_00408e42(void) /* FUN_00408e42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408e42);
    /* 00408e42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408e43: mov ebp, esp */ r_ebp = r_esp;
    /* 00408e45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408e46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408e49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408e4c: mov dword ptr [eax], 0x6336b4 */ W32((u32)(r_eax), 0x6336b4u);
    /* 00408e52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408e55: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x408e5au); f_005d5dfb();
    /* 00408e5a: mov esp, ebp */ r_esp = r_ebp;
    /* 00408e5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408e5d: ret  */ FN_RET(0x00408e42); r_esp += 4; return;
}

