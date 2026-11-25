#include "protos.h"

void f_0047ffbd(void) /* FUN_0047ffbd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ffbd);
    /* 0047ffbd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ffbe: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ffc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ffc1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047ffc4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047ffc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ffc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ffcb: call 0x5e761e */ r_esp -= 4; W32(r_esp, 0x47ffd0u); f_005e761e();
    /* 0047ffd0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047ffd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ffd4: mov ecx, dword ptr [0x6f6a20] */ r_ecx = R32((u32)(0x6f6a20u));
    /* 0047ffda: call 0x47c94c */ r_esp -= 4; W32(r_esp, 0x47ffdfu); f_0047c94c();
    /* 0047ffdf: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ffe1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ffe2: ret 4 */ FN_RET(0x0047ffbd); r_esp += 8; return;
}

void f_0047ffe5(void) /* FUN_0047ffe5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ffe5);
    /* 0047ffe5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ffe6: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ffe8: sub esp, 0x360 */ {  u32 a = r_esp; u32 b = 0x360u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047ffee: mov dword ptr [ebp - 0x358], ecx */ W32((u32)(r_ebp+0xfffffca8u), r_ecx);
    /* 0047fff4: mov dword ptr [ebp - 0x340], 0xffffffff */ W32((u32)(r_ebp+0xfffffcc0u), 0xffffffffu);
    /* 0047fffe: cmp dword ptr [0x6f6a20], 0 */ {  u32 a = R32((u32)(0x6f6a20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480005: jne 0x48000e */ if (!fZ) goto L_0048000e;
L_00480007:; BB(0x00480007);
    /* 00480007: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00480009: jmp 0x4808a2 */ goto L_004808a2;
L_0048000e:; BB(0x0048000e);
    /* 0048000e: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480013: mov ecx, dword ptr [eax + 0x1cc] */ r_ecx = R32((u32)(r_eax+0x1ccu));
    /* 00480019: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 0048001f: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
    /* 00480029: mov edx, dword ptr [0x6f6a20] */ r_edx = R32((u32)(0x6f6a20u));
    /* 0048002f: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 00480035: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0048003b: mov dword ptr [ebp - 0xac], 1 */ W32((u32)(r_ebp+0xffffff54u), 0x1u);
    /* 00480045: mov ecx, dword ptr [0x6f6a20] */ r_ecx = R32((u32)(0x6f6a20u));
    /* 0048004b: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 00480051: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00480057: mov dword ptr [ebp - 0xa4], 2 */ W32((u32)(r_ebp+0xffffff5cu), 0x2u);
    /* 00480061: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480066: mov ecx, dword ptr [eax + 0x1d8] */ r_ecx = R32((u32)(r_eax+0x1d8u));
    /* 0048006c: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 00480072: mov dword ptr [ebp - 0x9c], 3 */ W32((u32)(r_ebp+0xffffff64u), 0x3u);
    /* 0048007c: mov edx, dword ptr [0x6f6a20] */ r_edx = R32((u32)(0x6f6a20u));
    /* 00480082: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 00480088: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0048008e: mov dword ptr [ebp - 0x94], 4 */ W32((u32)(r_ebp+0xffffff6cu), 0x4u);
    /* 00480098: mov ecx, dword ptr [0x6f6a20] */ r_ecx = R32((u32)(0x6f6a20u));
    /* 0048009e: mov edx, dword ptr [ecx + 0x3a4c] */ r_edx = R32((u32)(r_ecx+0x3a4cu));
    /* 004800a4: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 004800aa: mov dword ptr [ebp - 0x8c], 5 */ W32((u32)(r_ebp+0xffffff74u), 0x5u);
    /* 004800b4: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 004800b9: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 004800bf: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 004800c5: mov dword ptr [ebp - 0x84], 6 */ W32((u32)(r_ebp+0xffffff7cu), 0x6u);
    /* 004800cf: mov edx, dword ptr [0x6f6a20] */ r_edx = R32((u32)(0x6f6a20u));
    /* 004800d5: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 004800db: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 004800de: mov dword ptr [ebp - 0x7c], 7 */ W32((u32)(r_ebp+0xffffff84u), 0x7u);
    /* 004800e5: mov ecx, dword ptr [0x6f6a20] */ r_ecx = R32((u32)(0x6f6a20u));
    /* 004800eb: mov edx, dword ptr [ecx + 0x3a6c] */ r_edx = R32((u32)(r_ecx+0x3a6cu));
    /* 004800f1: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 004800f4: mov dword ptr [ebp - 0x74], 8 */ W32((u32)(r_ebp+0xffffff8cu), 0x8u);
    /* 004800fb: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480100: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 00480106: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00480109: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0048010c: mov dword ptr [ebp - 0x6c], 9 */ W32((u32)(r_ebp+0xffffff94u), 0x9u);
    /* 00480113: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480118: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0048011e: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00480121: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00480124: mov dword ptr [ebp - 0x64], 0xa */ W32((u32)(r_ebp+0xffffff9cu), 0xau);
    /* 0048012b: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480130: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 00480136: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00480139: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0048013c: mov dword ptr [ebp - 0x5c], 0xb */ W32((u32)(r_ebp+0xffffffa4u), 0xbu);
    /* 00480143: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480148: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0048014e: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00480151: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00480154: mov dword ptr [ebp - 0x54], 0xc */ W32((u32)(r_ebp+0xffffffacu), 0xcu);
    /* 0048015b: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480160: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 00480166: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00480169: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0048016c: mov dword ptr [ebp - 0x4c], 0xd */ W32((u32)(r_ebp+0xffffffb4u), 0xdu);
    /* 00480173: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480178: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0048017e: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00480181: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00480184: mov dword ptr [ebp - 0x44], 0xe */ W32((u32)(r_ebp+0xffffffbcu), 0xeu);
    /* 0048018b: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480190: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 00480196: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00480199: mov dword ptr [ebp - 0x3c], 0xf */ W32((u32)(r_ebp+0xffffffc4u), 0xfu);
    /* 004801a0: mov edx, dword ptr [0x6f6a20] */ r_edx = R32((u32)(0x6f6a20u));
    /* 004801a6: mov eax, dword ptr [edx + 0x3a74] */ r_eax = R32((u32)(r_edx+0x3a74u));
    /* 004801ac: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004801af: mov dword ptr [ebp - 0x34], 0x10 */ W32((u32)(r_ebp+0xffffffccu), 0x10u);
    /* 004801b6: mov ecx, dword ptr [0x6f6a20] */ r_ecx = R32((u32)(0x6f6a20u));
    /* 004801bc: mov edx, dword ptr [ecx + 0x3a70] */ r_edx = R32((u32)(r_ecx+0x3a70u));
    /* 004801c2: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004801c5: mov dword ptr [ebp - 0x2c], 0x11 */ W32((u32)(r_ebp+0xffffffd4u), 0x11u);
    /* 004801cc: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 004801d1: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 004801d7: mov edx, dword ptr [ecx + 0x148] */ r_edx = R32((u32)(r_ecx+0x148u));
    /* 004801dd: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004801e0: mov dword ptr [ebp - 0x24], 0x12 */ W32((u32)(r_ebp+0xffffffdcu), 0x12u);
    /* 004801e7: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 004801ec: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 004801f2: mov edx, dword ptr [ecx + 0x14c] */ r_edx = R32((u32)(r_ecx+0x14cu));
    /* 004801f8: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004801fb: mov dword ptr [ebp - 0x1c], 0x13 */ W32((u32)(r_ebp+0xffffffe4u), 0x13u);
    /* 00480202: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480207: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 0048020d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00480210: mov dword ptr [ebp - 0x14], 0x14 */ W32((u32)(r_ebp+0xffffffecu), 0x14u);
    /* 00480217: mov edx, dword ptr [0x6f6a20] */ r_edx = R32((u32)(0x6f6a20u));
    /* 0048021d: mov eax, dword ptr [edx + 0x3a64] */ r_eax = R32((u32)(r_edx+0x3a64u));
    /* 00480223: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00480226: mov dword ptr [ebp - 0xc], 0x15 */ W32((u32)(r_ebp+0xfffffff4u), 0x15u);
    /* 0048022d: mov ecx, dword ptr [0x6f6a20] */ r_ecx = R32((u32)(0x6f6a20u));
    /* 00480233: mov edx, dword ptr [ecx + 0x3a68] */ r_edx = R32((u32)(r_ecx+0x3a68u));
    /* 00480239: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048023c: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 00480243: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
    /* 0048024d: jmp 0x48025e */ goto L_0048025e;
L_0048024f:; BB(0x0048024f);
    /* 0048024f: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 00480255: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480258: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
L_0048025e:; BB(0x0048025e);
    /* 0048025e: cmp dword ptr [ebp - 0xbc], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480265: jge 0x48029b */ if ((fS==fO)) goto L_0048029b;
L_00480267:; BB(0x00480267);
    /* 00480267: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0048026d: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 00480273: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480278: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 0048027f: mov dword ptr [ebp + ecx*8 - 0x33c], edx */ W32((u32)(r_ebp+r_ecx*8+0xfffffcc4u), r_edx);
    /* 00480286: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 0048028c: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 00480292: mov dword ptr [ebp + eax*8 - 0x338], ecx */ W32((u32)(r_ebp+r_eax*8+0xfffffcc8u), r_ecx);
    /* 00480299: jmp 0x48024f */ goto L_0048024f;
L_0048029b:; BB(0x0048029b);
    /* 0048029b: mov dword ptr [ebp - 0x344], 0x50 */ W32((u32)(r_ebp+0xfffffcbcu), 0x50u);
    /* 004802a5: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
    /* 004802af: jmp 0x4802c0 */ goto L_004802c0;
L_004802b1:; BB(0x004802b1);
    /* 004802b1: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 004802b7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004802ba: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
L_004802c0:; BB(0x004802c0);
    /* 004802c0: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 004802c6: cmp eax, dword ptr [ebp - 0x344] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffcbcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004802cc: jge 0x480325 */ if ((fS==fO)) goto L_00480325;
L_004802ce:; BB(0x004802ce);
    /* 004802ce: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 004802d4: cmp dword ptr [ebp + ecx*8 - 0x33c], 0 */ {  u32 a = R32((u32)(r_ebp+r_ecx*8+0xfffffcc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004802dc: je 0x480323 */ if (fZ) goto L_00480323;
L_004802de:; BB(0x004802de);
    /* 004802de: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004802e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004802e2: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 004802e8: mov ecx, dword ptr [ebp + eax*8 - 0x33c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xfffffcc4u));
    /* 004802ef: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x4802f4u); f_005d9738();
    /* 004802f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004802f6: je 0x480323 */ if (fZ) goto L_00480323;
L_004802f8:; BB(0x004802f8);
    /* 004802f8: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 004802fe: mov ecx, dword ptr [ebp + ecx*8 - 0x33c] */ r_ecx = R32((u32)(r_ebp+r_ecx*8+0xfffffcc4u));
    /* 00480305: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x48030au); f_005d9690();
    /* 0048030a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048030c: je 0x480323 */ if (fZ) goto L_00480323;
L_0048030e:; BB(0x0048030e);
    /* 0048030e: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 00480314: mov eax, dword ptr [ebp + edx*8 - 0x338] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xfffffcc8u));
    /* 0048031b: mov dword ptr [ebp - 0x340], eax */ W32((u32)(r_ebp+0xfffffcc0u), r_eax);
    /* 00480321: jmp 0x480325 */ goto L_00480325;
L_00480323:; BB(0x00480323);
    /* 00480323: jmp 0x4802b1 */ goto L_004802b1;
L_00480325:; BB(0x00480325);
    /* 00480325: cmp dword ptr [ebp - 0x340], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048032c: jl 0x480493 */ if ((fS!=fO)) goto L_00480493;
L_00480332:; BB(0x00480332);
    /* 00480332: cmp dword ptr [ebp - 0x340], 0x4f */ {  u32 a = R32((u32)(r_ebp+0xfffffcc0u)); u32 b = 0x4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480339: jg 0x480493 */ if ((!fZ&&fS==fO)) goto L_00480493;
L_0048033f:; BB(0x0048033f);
    /* 0048033f: mov ecx, dword ptr [ebp - 0x340] */ r_ecx = R32((u32)(r_ebp+0xfffffcc0u));
    /* 00480345: mov edx, dword ptr [0x6f6a20] */ r_edx = R32((u32)(0x6f6a20u));
    /* 0048034b: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00480352: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x480357u); f_005d71b9();
    /* 00480357: mov dword ptr [ebp - 0x348], eax */ W32((u32)(r_ebp+0xfffffcb8u), r_eax);
    /* 0048035d: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480362: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 00480368: mov edx, dword ptr [ebp - 0x340] */ r_edx = R32((u32)(r_ebp+0xfffffcc0u));
    /* 0048036e: mov ecx, dword ptr [ecx + edx*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_edx*4+0x8u));
    /* 00480372: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x480377u); f_005d9690();
    /* 00480377: mov dword ptr [ebp - 0x34c], eax */ W32((u32)(r_ebp+0xfffffcb4u), r_eax);
    /* 0048037d: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480382: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 00480388: cmp dword ptr [ecx + 0xc0], 0x19a */ {  u32 a = R32((u32)(r_ecx+0xc0u)); u32 b = 0x19au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480392: je 0x4803d0 */ if (fZ) goto L_004803d0;
L_00480394:; BB(0x00480394);
    /* 00480394: mov edx, dword ptr [0x6f6a20] */ r_edx = R32((u32)(0x6f6a20u));
    /* 0048039a: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 004803a0: cmp dword ptr [eax + 0xc0], 0x19b */ {  u32 a = R32((u32)(r_eax+0xc0u)); u32 b = 0x19bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004803aa: je 0x4803d0 */ if (fZ) goto L_004803d0;
L_004803ac:; BB(0x004803ac);
    /* 004803ac: mov ecx, dword ptr [0x6f6a20] */ r_ecx = R32((u32)(0x6f6a20u));
    /* 004803b2: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 004803b8: cmp dword ptr [edx + 0xc0], 0x19c */ {  u32 a = R32((u32)(r_edx+0xc0u)); u32 b = 0x19cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004803c2: je 0x4803d0 */ if (fZ) goto L_004803d0;
L_004803c4:; BB(0x004803c4);
    /* 004803c4: mov dword ptr [ebp - 0x35c], 0 */ W32((u32)(r_ebp+0xfffffca4u), 0x0u);
    /* 004803ce: jmp 0x4803da */ goto L_004803da;
L_004803d0:; BB(0x004803d0);
    /* 004803d0: mov dword ptr [ebp - 0x35c], 1 */ W32((u32)(r_ebp+0xfffffca4u), 0x1u);
L_004803da:; BB(0x004803da);
    /* 004803da: mov eax, dword ptr [ebp - 0x35c] */ r_eax = R32((u32)(r_ebp+0xfffffca4u));
    /* 004803e0: mov dword ptr [ebp - 0x350], eax */ W32((u32)(r_ebp+0xfffffcb0u), r_eax);
    /* 004803e6: cmp dword ptr [ebp - 0x350], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004803ed: je 0x48040a */ if (fZ) goto L_0048040a;
L_004803ef:; BB(0x004803ef);
    /* 004803ef: push 0x685c70 */ { u32 v = 0x685c70u; r_esp -= 4; W32(r_esp, v); }
    /* 004803f4: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 004803fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004803fc: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480402: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480405u); call_ind(t); }
    /* 00480405: jmp 0x48048c */ goto L_0048048c;
L_0048040a:; BB(0x0048040a);
    /* 0048040a: cmp dword ptr [ebp - 0x348], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480411: je 0x480434 */ if (fZ) goto L_00480434;
L_00480413:; BB(0x00480413);
    /* 00480413: cmp dword ptr [ebp - 0x34c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048041a: je 0x480434 */ if (fZ) goto L_00480434;
L_0048041c:; BB(0x0048041c);
    /* 0048041c: push 0x685cf4 */ { u32 v = 0x685cf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00480421: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480427: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480429: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048042f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480432u); call_ind(t); }
    /* 00480432: jmp 0x48048c */ goto L_0048048c;
L_00480434:; BB(0x00480434);
    /* 00480434: cmp dword ptr [ebp - 0x348], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048043b: je 0x480455 */ if (fZ) goto L_00480455;
L_0048043d:; BB(0x0048043d);
    /* 0048043d: push 0x685d30 */ { u32 v = 0x685d30u; r_esp -= 4; W32(r_esp, v); }
    /* 00480442: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480448: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048044a: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480450: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480453u); call_ind(t); }
    /* 00480453: jmp 0x48048c */ goto L_0048048c;
L_00480455:; BB(0x00480455);
    /* 00480455: cmp dword ptr [ebp - 0x34c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048045c: je 0x480476 */ if (fZ) goto L_00480476;
L_0048045e:; BB(0x0048045e);
    /* 0048045e: push 0x685d48 */ { u32 v = 0x685d48u; r_esp -= 4; W32(r_esp, v); }
    /* 00480463: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480469: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048046b: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480471: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480474u); call_ind(t); }
    /* 00480474: jmp 0x48048c */ goto L_0048048c;
L_00480476:; BB(0x00480476);
    /* 00480476: push 0x6f6af4 */ { u32 v = 0x6f6af4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048047b: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480481: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480483: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480489: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x48048cu); call_ind(t); }
L_0048048c:; BB(0x0048048c);
    /* 0048048c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048048e: jmp 0x4808a2 */ goto L_004808a2;
L_00480493:; BB(0x00480493);
    /* 00480493: mov dword ptr [ebp - 0x340], 0xffffffff */ W32((u32)(r_ebp+0xfffffcc0u), 0xffffffffu);
    /* 0048049d: mov dword ptr [ebp - 0x344], 0x17 */ W32((u32)(r_ebp+0xfffffcbcu), 0x17u);
    /* 004804a7: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
    /* 004804b1: jmp 0x4804c2 */ goto L_004804c2;
L_004804b3:; BB(0x004804b3);
    /* 004804b3: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 004804b9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004804bc: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
L_004804c2:; BB(0x004804c2);
    /* 004804c2: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 004804c8: cmp ecx, dword ptr [ebp - 0x344] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffcbcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004804ce: jge 0x480527 */ if ((fS==fO)) goto L_00480527;
L_004804d0:; BB(0x004804d0);
    /* 004804d0: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 004804d6: cmp dword ptr [ebp + edx*8 - 0xb8], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*8+0xffffff48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004804de: je 0x480525 */ if (fZ) goto L_00480525;
L_004804e0:; BB(0x004804e0);
    /* 004804e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004804e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004804e4: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 004804ea: mov ecx, dword ptr [ebp + ecx*8 - 0xb8] */ r_ecx = R32((u32)(r_ebp+r_ecx*8+0xffffff48u));
    /* 004804f1: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x4804f6u); f_005d9738();
    /* 004804f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004804f8: je 0x480525 */ if (fZ) goto L_00480525;
L_004804fa:; BB(0x004804fa);
    /* 004804fa: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 00480500: mov ecx, dword ptr [ebp + edx*8 - 0xb8] */ r_ecx = R32((u32)(r_ebp+r_edx*8+0xffffff48u));
    /* 00480507: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x48050cu); f_005d9690();
    /* 0048050c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048050e: je 0x480525 */ if (fZ) goto L_00480525;
L_00480510:; BB(0x00480510);
    /* 00480510: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 00480516: mov ecx, dword ptr [ebp + eax*8 - 0xb4] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffff4cu));
    /* 0048051d: mov dword ptr [ebp - 0x340], ecx */ W32((u32)(r_ebp+0xfffffcc0u), r_ecx);
    /* 00480523: jmp 0x480527 */ goto L_00480527;
L_00480525:; BB(0x00480525);
    /* 00480525: jmp 0x4804b3 */ goto L_004804b3;
L_00480527:; BB(0x00480527);
    /* 00480527: cmp dword ptr [ebp - 0x340], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffcc0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048052e: jne 0x480556 */ if (!fZ) goto L_00480556;
L_00480530:; BB(0x00480530);
    /* 00480530: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00480533: cmp dword ptr [edx + 0x18], 3 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480537: jne 0x48054f */ if (!fZ) goto L_0048054f;
L_00480539:; BB(0x00480539);
    /* 00480539: push 0x6f6af8 */ { u32 v = 0x6f6af8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048053e: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480544: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480546: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048054c: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x48054fu); call_ind(t); }
L_0048054f:; BB(0x0048054f);
    /* 0048054f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00480551: jmp 0x4808a2 */ goto L_004808a2;
L_00480556:; BB(0x00480556);
    /* 00480556: mov eax, dword ptr [ebp - 0x340] */ r_eax = R32((u32)(r_ebp+0xfffffcc0u));
    /* 0048055c: mov dword ptr [ebp - 0x360], eax */ W32((u32)(r_ebp+0xfffffca0u), r_eax);
    /* 00480562: cmp dword ptr [ebp - 0x360], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffca0u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00480569: ja 0x4808a0 */ if ((!fC&&!fZ)) goto L_004808a0;
L_0048056f:; BB(0x0048056f);
    /* 0048056f: mov ecx, dword ptr [ebp - 0x360] */ r_ecx = R32((u32)(r_ebp+0xfffffca0u));
    /* 00480575: jmp dword ptr [ecx*4 + 0x4808a8] */ { u32 t = R32((u32)(r_ecx*4+0x4808a8u)); switch (t) { case 0x48057cu: goto L_0048057c; case 0x480597u: goto L_00480597; case 0x4805b2u: goto L_004805b2; case 0x4805cdu: goto L_004805cd; case 0x4805e8u: goto L_004805e8; case 0x48068bu: goto L_0048068b; case 0x4806cdu: goto L_004806cd; case 0x4806e8u: goto L_004806e8; case 0x48072fu: goto L_0048072f; case 0x48078bu: goto L_0048078b; case 0x4807a6u: goto L_004807a6; case 0x4807c1u: goto L_004807c1; case 0x4807dcu: goto L_004807dc; case 0x4807f7u: goto L_004807f7; case 0x480812u: goto L_00480812; case 0x48082au: goto L_0048082a; case 0x480842u: goto L_00480842; case 0x48085au: goto L_0048085a; case 0x480872u: goto L_00480872; case 0x48088au: goto L_0048088a; default: UNSUP(0x00480575, "jump table entry is not a known target"); } }
L_0048057c:; BB(0x0048057c);
    /* 0048057c: push 0x685d78 */ { u32 v = 0x685d78u; r_esp -= 4; W32(r_esp, v); }
    /* 00480581: mov edx, dword ptr [ebp - 0x358] */ r_edx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480587: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00480589: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048058f: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x480592u); call_ind(t); }
    /* 00480592: jmp 0x4808a0 */ goto L_004808a0;
L_00480597:; BB(0x00480597);
    /* 00480597: push 0x685da4 */ { u32 v = 0x685da4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048059c: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 004805a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004805a4: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 004805aa: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4805adu); call_ind(t); }
    /* 004805ad: jmp 0x4808a0 */ goto L_004808a0;
L_004805b2:; BB(0x004805b2);
    /* 004805b2: push 0x685e08 */ { u32 v = 0x685e08u; r_esp -= 4; W32(r_esp, v); }
    /* 004805b7: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 004805bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004805bf: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 004805c5: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4805c8u); call_ind(t); }
    /* 004805c8: jmp 0x4808a0 */ goto L_004808a0;
L_004805cd:; BB(0x004805cd);
    /* 004805cd: push 0x685e88 */ { u32 v = 0x685e88u; r_esp -= 4; W32(r_esp, v); }
    /* 004805d2: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 004805d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004805da: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 004805e0: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4805e3u); call_ind(t); }
    /* 004805e3: jmp 0x4808a0 */ goto L_004808a0;
L_004805e8:; BB(0x004805e8);
    /* 004805e8: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 004805ed: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 004805f3: call 0x5d65b7 */ r_esp -= 4; W32(r_esp, 0x4805f8u); f_005d65b7();
    /* 004805f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004805fa: je 0x480614 */ if (fZ) goto L_00480614;
L_004805fc:; BB(0x004805fc);
    /* 004805fc: push 0x685ed0 */ { u32 v = 0x685ed0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480601: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480607: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00480609: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048060f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480612u); call_ind(t); }
    /* 00480612: jmp 0x480686 */ goto L_00480686;
L_00480614:; BB(0x00480614);
    /* 00480614: mov ecx, dword ptr [0x6f6a20] */ r_ecx = R32((u32)(0x6f6a20u));
    /* 0048061a: call 0x47c7c3 */ r_esp -= 4; W32(r_esp, 0x48061fu); f_0047c7c3();
    /* 0048061f: mov dword ptr [ebp - 0x354], eax */ W32((u32)(r_ebp+0xfffffcacu), r_eax);
    /* 00480625: cmp dword ptr [ebp - 0x354], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048062c: jne 0x480646 */ if (!fZ) goto L_00480646;
L_0048062e:; BB(0x0048062e);
    /* 0048062e: push 0x685f48 */ { u32 v = 0x685f48u; r_esp -= 4; W32(r_esp, v); }
    /* 00480633: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480639: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048063b: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480641: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480644u); call_ind(t); }
    /* 00480644: jmp 0x480686 */ goto L_00480686;
L_00480646:; BB(0x00480646);
    /* 00480646: cmp dword ptr [ebp - 0x354], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffcacu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048064d: jl 0x480670 */ if ((fS!=fO)) goto L_00480670;
L_0048064f:; BB(0x0048064f);
    /* 0048064f: cmp dword ptr [ebp - 0x354], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffcacu)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480656: jg 0x480670 */ if ((!fZ&&fS==fO)) goto L_00480670;
L_00480658:; BB(0x00480658);
    /* 00480658: push 0x685f90 */ { u32 v = 0x685f90u; r_esp -= 4; W32(r_esp, v); }
    /* 0048065d: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480663: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480665: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048066b: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x48066eu); call_ind(t); }
    /* 0048066e: jmp 0x480686 */ goto L_00480686;
L_00480670:; BB(0x00480670);
    /* 00480670: push 0x685fe0 */ { u32 v = 0x685fe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480675: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048067b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048067d: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480683: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480686u); call_ind(t); }
L_00480686:; BB(0x00480686);
    /* 00480686: jmp 0x4808a0 */ goto L_004808a0;
L_0048068b:; BB(0x0048068b);
    /* 0048068b: mov ecx, dword ptr [0x6f6a20] */ r_ecx = R32((u32)(0x6f6a20u));
    /* 00480691: call 0x47c7c3 */ r_esp -= 4; W32(r_esp, 0x480696u); f_0047c7c3();
    /* 00480696: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480698: je 0x4806b2 */ if (fZ) goto L_004806b2;
L_0048069a:; BB(0x0048069a);
    /* 0048069a: push 0x686008 */ { u32 v = 0x686008u; r_esp -= 4; W32(r_esp, v); }
    /* 0048069f: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 004806a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004806a7: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 004806ad: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4806b0u); call_ind(t); }
    /* 004806b0: jmp 0x4806c8 */ goto L_004806c8;
L_004806b2:; BB(0x004806b2);
    /* 004806b2: push 0x686054 */ { u32 v = 0x686054u; r_esp -= 4; W32(r_esp, v); }
    /* 004806b7: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 004806bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004806bf: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 004806c5: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4806c8u); call_ind(t); }
L_004806c8:; BB(0x004806c8);
    /* 004806c8: jmp 0x4808a0 */ goto L_004808a0;
L_004806cd:; BB(0x004806cd);
    /* 004806cd: push 0x6860b4 */ { u32 v = 0x6860b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004806d2: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 004806d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004806da: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 004806e0: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4806e3u); call_ind(t); }
    /* 004806e3: jmp 0x4808a0 */ goto L_004808a0;
L_004806e8:; BB(0x004806e8);
    /* 004806e8: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 004806ed: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 004806f3: call 0x5d65b7 */ r_esp -= 4; W32(r_esp, 0x4806f8u); f_005d65b7();
    /* 004806f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004806fa: je 0x480714 */ if (fZ) goto L_00480714;
L_004806fc:; BB(0x004806fc);
    /* 004806fc: push 0x686144 */ { u32 v = 0x686144u; r_esp -= 4; W32(r_esp, v); }
    /* 00480701: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480707: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00480709: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048070f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480712u); call_ind(t); }
    /* 00480712: jmp 0x48072a */ goto L_0048072a;
L_00480714:; BB(0x00480714);
    /* 00480714: push 0x68618c */ { u32 v = 0x68618cu; r_esp -= 4; W32(r_esp, v); }
    /* 00480719: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048071f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480721: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480727: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x48072au); call_ind(t); }
L_0048072a:; BB(0x0048072a);
    /* 0048072a: jmp 0x4808a0 */ goto L_004808a0;
L_0048072f:; BB(0x0048072f);
    /* 0048072f: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00480734: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0048073a: call 0x5d65b7 */ r_esp -= 4; W32(r_esp, 0x48073fu); f_005d65b7();
    /* 0048073f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480741: jne 0x480758 */ if (!fZ) goto L_00480758;
L_00480743:; BB(0x00480743);
    /* 00480743: mov ecx, dword ptr [0x6f6a20] */ r_ecx = R32((u32)(0x6f6a20u));
    /* 00480749: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 0048074f: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x480754u); f_005d71b9();
    /* 00480754: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480756: je 0x480770 */ if (fZ) goto L_00480770;
L_00480758:; BB(0x00480758);
    /* 00480758: push 0x6861bc */ { u32 v = 0x6861bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048075d: mov edx, dword ptr [ebp - 0x358] */ r_edx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480763: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00480765: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048076b: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x48076eu); call_ind(t); }
    /* 0048076e: jmp 0x480786 */ goto L_00480786;
L_00480770:; BB(0x00480770);
    /* 00480770: push 0x68624c */ { u32 v = 0x68624cu; r_esp -= 4; W32(r_esp, v); }
    /* 00480775: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048077b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048077d: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480783: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480786u); call_ind(t); }
L_00480786:; BB(0x00480786);
    /* 00480786: jmp 0x4808a0 */ goto L_004808a0;
L_0048078b:; BB(0x0048078b);
    /* 0048078b: push 0x686284 */ { u32 v = 0x686284u; r_esp -= 4; W32(r_esp, v); }
    /* 00480790: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480796: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480798: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048079e: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4807a1u); call_ind(t); }
    /* 004807a1: jmp 0x4808a0 */ goto L_004808a0;
L_004807a6:; BB(0x004807a6);
    /* 004807a6: push 0x6862a0 */ { u32 v = 0x6862a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004807ab: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 004807b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004807b3: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 004807b9: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4807bcu); call_ind(t); }
    /* 004807bc: jmp 0x4808a0 */ goto L_004808a0;
L_004807c1:; BB(0x004807c1);
    /* 004807c1: push 0x6862d8 */ { u32 v = 0x6862d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004807c6: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 004807cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004807ce: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 004807d4: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4807d7u); call_ind(t); }
    /* 004807d7: jmp 0x4808a0 */ goto L_004808a0;
L_004807dc:; BB(0x004807dc);
    /* 004807dc: push 0x686320 */ { u32 v = 0x686320u; r_esp -= 4; W32(r_esp, v); }
    /* 004807e1: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 004807e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004807e9: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 004807ef: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4807f2u); call_ind(t); }
    /* 004807f2: jmp 0x4808a0 */ goto L_004808a0;
L_004807f7:; BB(0x004807f7);
    /* 004807f7: push 0x686374 */ { u32 v = 0x686374u; r_esp -= 4; W32(r_esp, v); }
    /* 004807fc: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480802: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480804: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048080a: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x48080du); call_ind(t); }
    /* 0048080d: jmp 0x4808a0 */ goto L_004808a0;
L_00480812:; BB(0x00480812);
    /* 00480812: push 0x6863e8 */ { u32 v = 0x6863e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00480817: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048081d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048081f: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480825: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480828u); call_ind(t); }
    /* 00480828: jmp 0x4808a0 */ goto L_004808a0;
L_0048082a:; BB(0x0048082a);
    /* 0048082a: push 0x686428 */ { u32 v = 0x686428u; r_esp -= 4; W32(r_esp, v); }
    /* 0048082f: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480835: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480837: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048083d: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480840u); call_ind(t); }
    /* 00480840: jmp 0x4808a0 */ goto L_004808a0;
L_00480842:; BB(0x00480842);
    /* 00480842: push 0x68645c */ { u32 v = 0x68645cu; r_esp -= 4; W32(r_esp, v); }
    /* 00480847: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048084d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048084f: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480855: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480858u); call_ind(t); }
    /* 00480858: jmp 0x4808a0 */ goto L_004808a0;
L_0048085a:; BB(0x0048085a);
    /* 0048085a: push 0x6864b0 */ { u32 v = 0x6864b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048085f: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480865: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480867: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048086d: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480870u); call_ind(t); }
    /* 00480870: jmp 0x4808a0 */ goto L_004808a0;
L_00480872:; BB(0x00480872);
    /* 00480872: push 0x68651c */ { u32 v = 0x68651cu; r_esp -= 4; W32(r_esp, v); }
    /* 00480877: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048087d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048087f: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480885: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480888u); call_ind(t); }
    /* 00480888: jmp 0x4808a0 */ goto L_004808a0;
L_0048088a:; BB(0x0048088a);
    /* 0048088a: push 0x68656c */ { u32 v = 0x68656cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048088f: mov eax, dword ptr [ebp - 0x358] */ r_eax = R32((u32)(r_ebp+0xfffffca8u));
    /* 00480895: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480897: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0048089d: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4808a0u); call_ind(t); }
L_004808a0:; BB(0x004808a0);
    /* 004808a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004808a2:; BB(0x004808a2);
    /* 004808a2: mov esp, ebp */ r_esp = r_ebp;
    /* 004808a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004808a5: ret 4 */ FN_RET(0x0047ffe5); r_esp += 8; return;
}

void f_00480904(void) /* FUN_00480904 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480904);
    /* 00480904: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480905: mov ebp, esp */ r_ebp = r_esp;
    /* 00480907: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048090a: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0048090d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480910: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x480915u); f_005dfbf0();
    /* 00480915: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480918: mov dword ptr [eax], 0x63686c */ W32((u32)(r_eax), 0x63686cu);
    /* 0048091e: mov dword ptr [ebp - 4], 0x1e */ W32((u32)(r_ebp+0xfffffffcu), 0x1eu);
    /* 00480925: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480928: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048092b: mov dword ptr [ecx + 0x178], edx */ W32((u32)(r_ecx+0x178u), r_edx);
    /* 00480931: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480934: mov dword ptr [eax + 0x150], 0 */ W32((u32)(r_eax+0x150u), 0x0u);
    /* 0048093e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480941: mov dword ptr [ecx + 0x154], 0 */ W32((u32)(r_ecx+0x154u), 0x0u);
    /* 0048094b: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00480950: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x480955u); f_0048ab58();
    /* 00480955: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480958: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048095b: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048095f: je 0x480974 */ if (fZ) goto L_00480974;
L_00480961:; BB(0x00480961);
    /* 00480961: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480964: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00480965: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480967: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048096a: call 0x4815dc */ r_esp -= 4; W32(r_esp, 0x48096fu); f_004815dc();
    /* 0048096f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00480972: jmp 0x48097b */ goto L_0048097b;
L_00480974:; BB(0x00480974);
    /* 00480974: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0048097b:; BB(0x0048097b);
    /* 0048097b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048097e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00480981: mov dword ptr [eax + 0x148], ecx */ W32((u32)(r_eax+0x148u), r_ecx);
    /* 00480987: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048098a: mov eax, dword ptr [edx + 0x148] */ r_eax = R32((u32)(r_edx+0x148u));
    /* 00480990: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480993: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00480999: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0048099c: push 0x17b1 */ { u32 v = 0x17b1u; r_esp -= 4; W32(r_esp, v); }
    /* 004809a1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004809a4: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 004809aa: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004809ad: mov eax, dword ptr [edx + 0x148] */ r_eax = R32((u32)(r_edx+0x148u));
    /* 004809b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004809b5: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x4809b8u); call_ind(t); }
    /* 004809b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004809ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004809bc: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004809bf: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 004809c5: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004809c8: mov eax, dword ptr [edx + 0x148] */ r_eax = R32((u32)(r_edx+0x148u));
    /* 004809ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004809d0: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4809d3u); call_ind(t); }
    /* 004809d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004809d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004809d7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004809da: mov ecx, dword ptr [ecx + 0x148] */ r_ecx = R32((u32)(r_ecx+0x148u));
    /* 004809e0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004809e3: mov eax, dword ptr [edx + 0x148] */ r_eax = R32((u32)(r_edx+0x148u));
    /* 004809e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004809eb: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4809eeu); call_ind(t); }
    /* 004809ee: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004809f3: push 0xc1 */ { u32 v = 0xc1u; r_esp -= 4; W32(r_esp, v); }
    /* 004809f8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004809fb: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 00480a01: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480a04: mov eax, dword ptr [edx + 0x148] */ r_eax = R32((u32)(r_edx+0x148u));
    /* 00480a0a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480a0c: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x480a0fu); call_ind(t); }
    /* 00480a0f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480a12: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 00480a18: call 0x481676 */ r_esp -= 4; W32(r_esp, 0x480a1du); f_00481676();
    /* 00480a1d: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a22: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x480a27u); f_0048ab58();
    /* 00480a27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480a2a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00480a2d: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480a31: je 0x480a46 */ if (fZ) goto L_00480a46;
L_00480a33:; BB(0x00480a33);
    /* 00480a33: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480a36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480a37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a39: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00480a3c: call 0x4815dc */ r_esp -= 4; W32(r_esp, 0x480a41u); f_004815dc();
    /* 00480a41: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00480a44: jmp 0x480a4d */ goto L_00480a4d;
L_00480a46:; BB(0x00480a46);
    /* 00480a46: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00480a4d:; BB(0x00480a4d);
    /* 00480a4d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480a50: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00480a53: mov dword ptr [edx + 0x14c], eax */ W32((u32)(r_edx+0x14cu), r_eax);
    /* 00480a59: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480a5c: mov edx, dword ptr [ecx + 0x14c] */ r_edx = R32((u32)(r_ecx+0x14cu));
    /* 00480a62: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480a65: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00480a6b: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00480a6e: push 0x17b2 */ { u32 v = 0x17b2u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a73: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480a76: mov ecx, dword ptr [edx + 0x14c] */ r_ecx = R32((u32)(r_edx+0x14cu));
    /* 00480a7c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480a7f: mov edx, dword ptr [eax + 0x14c] */ r_edx = R32((u32)(r_eax+0x14cu));
    /* 00480a85: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00480a87: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x480a8au); call_ind(t); }
    /* 00480a8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a8e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480a91: mov ecx, dword ptr [ecx + 0x14c] */ r_ecx = R32((u32)(r_ecx+0x14cu));
    /* 00480a97: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480a9a: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 00480aa0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480aa2: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x480aa5u); call_ind(t); }
    /* 00480aa5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480aa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480aa9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480aac: mov ecx, dword ptr [ecx + 0x14c] */ r_ecx = R32((u32)(r_ecx+0x14cu));
    /* 00480ab2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480ab5: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 00480abb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480abd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x480ac0u); call_ind(t); }
    /* 00480ac0: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480ac5: push 0xfd */ { u32 v = 0xfdu; r_esp -= 4; W32(r_esp, v); }
    /* 00480aca: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480acd: mov ecx, dword ptr [eax + 0x14c] */ r_ecx = R32((u32)(r_eax+0x14cu));
    /* 00480ad3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480ad6: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 00480adc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480ade: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x480ae1u); call_ind(t); }
    /* 00480ae1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480ae4: mov ecx, dword ptr [eax + 0x14c] */ r_ecx = R32((u32)(r_eax+0x14cu));
    /* 00480aea: call 0x481676 */ r_esp -= 4; W32(r_esp, 0x480aefu); f_00481676();
    /* 00480aef: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00480af4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x480af9u); f_0048ab58();
    /* 00480af9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480afc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00480aff: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480b03: je 0x480b12 */ if (fZ) goto L_00480b12;
L_00480b05:; BB(0x00480b05);
    /* 00480b05: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00480b08: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x480b0du); f_005e8590();
    /* 00480b0d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00480b10: jmp 0x480b19 */ goto L_00480b19;
L_00480b12:; BB(0x00480b12);
    /* 00480b12: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00480b19:; BB(0x00480b19);
    /* 00480b19: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480b1c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00480b1f: mov dword ptr [ecx + 0x17c], edx */ W32((u32)(r_ecx+0x17cu), r_edx);
    /* 00480b25: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480b28: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00480b2e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480b31: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 00480b37: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00480b3a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480b3d: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 00480b43: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480b46: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00480b4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480b4e: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x480b51u); call_ind(t); }
    /* 00480b51: push 0x6f6afc */ { u32 v = 0x6f6afcu; r_esp -= 4; W32(r_esp, v); }
    /* 00480b56: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480b59: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00480b5f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480b62: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00480b68: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480b6a: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x480b6du); call_ind(t); }
    /* 00480b6d: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00480b6f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480b72: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00480b78: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x480b7du); f_005e87aa();
    /* 00480b7d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480b80: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 00480b86: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480b89: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00480b8f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480b91: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x480b94u); call_ind(t); }
    /* 00480b94: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00480b99: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 00480b9e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480ba1: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00480ba7: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480baa: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00480bb0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480bb2: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x480bb5u); call_ind(t); }
    /* 00480bb5: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00480bb7: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480bba: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00480bc0: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x480bc5u); f_005e8775();
    /* 00480bc5: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00480bc7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480bca: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 00480bd0: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x480bd5u); f_005e8740();
    /* 00480bd5: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00480bd7: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480bda: mov ecx, dword ptr [edx + 0x17c] */ r_ecx = R32((u32)(r_edx+0x17cu));
    /* 00480be0: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x480be5u); f_005e8e99();
    /* 00480be5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480be8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480be9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480bec: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 00480bf2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480bf5: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00480bfb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480bfd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x480c00u); call_ind(t); }
    /* 00480c00: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480c03: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00480c09: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480c0c: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00480c12: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480c14: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x480c17u); call_ind(t); }
    /* 00480c17: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00480c1e: jmp 0x480c29 */ goto L_00480c29;
L_00480c20:; BB(0x00480c20);
    /* 00480c20: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480c23: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480c26: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00480c29:; BB(0x00480c29);
    /* 00480c29: cmp dword ptr [ebp - 0xc], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480c2d: jge 0x480ce5 */ if ((fS==fO)) goto L_00480ce5;
L_00480c33:; BB(0x00480c33);
    /* 00480c33: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00480c35: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x480c3au); f_0048ab58();
    /* 00480c3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480c3d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00480c40: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480c44: je 0x480c53 */ if (fZ) goto L_00480c53;
L_00480c46:; BB(0x00480c46);
    /* 00480c46: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00480c49: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x480c4eu); f_005e9d30();
    /* 00480c4e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00480c51: jmp 0x480c5a */ goto L_00480c5a;
L_00480c53:; BB(0x00480c53);
    /* 00480c53: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00480c5a:; BB(0x00480c5a);
    /* 00480c5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480c5d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480c60: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00480c63: mov dword ptr [edx + ecx*4 + 8], eax */ W32((u32)(r_edx+r_ecx*4+0x8u), r_eax);
    /* 00480c67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480c6a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480c6d: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00480c71: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480c74: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00480c7a: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00480c7d: push 0x17b3 */ { u32 v = 0x17b3u; r_esp -= 4; W32(r_esp, v); }
    /* 00480c82: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480c85: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480c88: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00480c8c: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x480c91u); f_005ea0c3();
    /* 00480c91: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480c94: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480c97: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00480c9b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480c9e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480ca1: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00480ca5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00480ca7: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x480caau); call_ind(t); }
    /* 00480caa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480cad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480cae: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480cb1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480cb4: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00480cb8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480cbb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480cbe: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00480cc2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00480cc4: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x480cc7u); call_ind(t); }
    /* 00480cc7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480cca: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480ccd: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00480cd1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480cd4: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480cd7: mov eax, dword ptr [edx + eax*4 + 8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 00480cdb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480cdd: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x480ce0u); call_ind(t); }
    /* 00480ce0: jmp 0x480c20 */ goto L_00480c20;
L_00480ce5:; BB(0x00480ce5);
    /* 00480ce5: mov dword ptr [ebp - 0x20], 0x1a */ W32((u32)(r_ebp+0xffffffe0u), 0x1au);
    /* 00480cec: mov dword ptr [ebp - 8], 0x1a */ W32((u32)(r_ebp+0xfffffff8u), 0x1au);
    /* 00480cf3: mov dword ptr [ebp - 0x18], 3 */ W32((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 00480cfa: mov dword ptr [ebp - 0x1c], 0x67 */ W32((u32)(r_ebp+0xffffffe4u), 0x67u);
    /* 00480d01: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00480d08: jmp 0x480d13 */ goto L_00480d13;
L_00480d0a:; BB(0x00480d0a);
    /* 00480d0a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480d0d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480d10: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00480d13:; BB(0x00480d13);
    /* 00480d13: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480d17: jge 0x480e2c */ if ((fS==fO)) goto L_00480e2c;
L_00480d1d:; BB(0x00480d1d);
    /* 00480d1d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00480d24: jmp 0x480d2f */ goto L_00480d2f;
L_00480d26:; BB(0x00480d26);
    /* 00480d26: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00480d29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00480d2c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00480d2f:; BB(0x00480d2f);
    /* 00480d2f: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480d33: jge 0x480e20 */ if ((fS==fO)) goto L_00480e20;
L_00480d39:; BB(0x00480d39);
    /* 00480d39: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00480d40: jmp 0x480d4b */ goto L_00480d4b;
L_00480d42:; BB(0x00480d42);
    /* 00480d42: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00480d45: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00480d48: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00480d4b:; BB(0x00480d4b);
    /* 00480d4b: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480d4f: jge 0x480e1b */ if ((fS==fO)) goto L_00480e1b;
L_00480d55:; BB(0x00480d55);
    /* 00480d55: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480d58: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480d5b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00480d5e: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480d61: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480d64: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00480d66: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00480d69: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480d6d: jle 0x480de3 */ if ((fZ||fS!=fO)) goto L_00480de3;
L_00480d6f:; BB(0x00480d6f);
    /* 00480d6f: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480d73: jle 0x480dac */ if ((fZ||fS!=fO)) goto L_00480dac;
L_00480d75:; BB(0x00480d75);
    /* 00480d75: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00480d78: imul edx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480d7c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480d7f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480d81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480d82: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00480d85: imul ecx, dword ptr [ebp - 0x20] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffe0u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480d89: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00480d8c: lea eax, [edx + ecx - 3] */ r_eax = (u32)(r_edx+r_ecx+0xfffffffdu);
    /* 00480d90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480d91: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00480d94: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480d97: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00480d9b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00480d9e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480da1: mov eax, dword ptr [edx + eax*4 + 8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 00480da5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480da7: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x480daau); call_ind(t); }
    /* 00480daa: jmp 0x480de1 */ goto L_00480de1;
L_00480dac:; BB(0x00480dac);
    /* 00480dac: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00480daf: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480db3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480db6: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00480db8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480db9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00480dbc: imul edx, dword ptr [ebp - 0x20] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffe0u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480dc0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00480dc3: lea ecx, [eax + edx - 1] */ r_ecx = (u32)(r_eax+r_edx+0xffffffffu);
    /* 00480dc7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480dc8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00480dcb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480dce: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00480dd2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00480dd5: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480dd8: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00480ddc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00480dde: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x480de1u); call_ind(t); }
L_00480de1:; BB(0x00480de1);
    /* 00480de1: jmp 0x480e16 */ goto L_00480e16;
L_00480de3:; BB(0x00480de3);
    /* 00480de3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00480de6: imul ecx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480dea: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480ded: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00480def: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00480df0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00480df3: imul eax, dword ptr [ebp - 0x20] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480df7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00480dfa: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00480dfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480dfd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00480e00: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480e03: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00480e07: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00480e0a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480e0d: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00480e11: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00480e13: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x480e16u); call_ind(t); }
L_00480e16:; BB(0x00480e16);
    /* 00480e16: jmp 0x480d42 */ goto L_00480d42;
L_00480e1b:; BB(0x00480e1b);
    /* 00480e1b: jmp 0x480d26 */ goto L_00480d26;
L_00480e20:; BB(0x00480e20);
    /* 00480e20: mov dword ptr [ebp - 0x1c], 0xdf */ W32((u32)(r_ebp+0xffffffe4u), 0xdfu);
    /* 00480e27: jmp 0x480d0a */ goto L_00480d0a;
L_00480e2c:; BB(0x00480e2c);
    /* 00480e2c: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00480e33: jmp 0x480e3e */ goto L_00480e3e;
L_00480e35:; BB(0x00480e35);
    /* 00480e35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480e38: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00480e3b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00480e3e:; BB(0x00480e3e);
    /* 00480e3e: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480e42: jge 0x480e68 */ if ((fS==fO)) goto L_00480e68;
L_00480e44:; BB(0x00480e44);
    /* 00480e44: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480e47: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480e4a: mov dword ptr [eax + edx*4 + 0x158], 0 */ W32((u32)(r_eax+r_edx*4+0x158u), 0x0u);
    /* 00480e55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480e58: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480e5b: mov dword ptr [edx + ecx*4 + 0x168], 0 */ W32((u32)(r_edx+r_ecx*4+0x168u), 0x0u);
    /* 00480e66: jmp 0x480e35 */ goto L_00480e35;
L_00480e68:; BB(0x00480e68);
    /* 00480e68: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00480e6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00480e6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480e6e: ret 4 */ FN_RET(0x00480904); r_esp += 8; return;
}

void f_00480e71(void) /* FUN_00480e71 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480e71);
    /* 00480e71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480e72: mov ebp, esp */ r_ebp = r_esp;
    /* 00480e74: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480e77: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00480e7a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480e7d: mov dword ptr [eax], 0x63686c */ W32((u32)(r_eax), 0x63686cu);
    /* 00480e83: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480e86: call 0x480fec */ r_esp -= 4; W32(r_esp, 0x480e8bu); f_00480fec();
    /* 00480e8b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00480e92: jmp 0x480e9d */ goto L_00480e9d;
L_00480e94:; BB(0x00480e94);
    /* 00480e94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480e97: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00480e9a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00480e9d:; BB(0x00480e9d);
    /* 00480e9d: cmp dword ptr [ebp - 4], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480ea1: jge 0x480ee4 */ if ((fS==fO)) goto L_00480ee4;
L_00480ea3:; BB(0x00480ea3);
    /* 00480ea3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480ea6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480ea9: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00480ead: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00480eb0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480eb3: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00480eb6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480eba: je 0x480ecd */ if (fZ) goto L_00480ecd;
L_00480ebc:; BB(0x00480ebc);
    /* 00480ebc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00480ebe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480ec1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480ec3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480ec6: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x480ec8u); call_ind(t); }
    /* 00480ec8: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00480ecb: jmp 0x480ed4 */ goto L_00480ed4;
L_00480ecd:; BB(0x00480ecd);
    /* 00480ecd: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00480ed4:; BB(0x00480ed4);
    /* 00480ed4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480ed7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480eda: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 00480ee2: jmp 0x480e94 */ goto L_00480e94;
L_00480ee4:; BB(0x00480ee4);
    /* 00480ee4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480ee7: mov ecx, dword ptr [edx + 0x148] */ r_ecx = R32((u32)(r_edx+0x148u));
    /* 00480eed: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480ef0: mov edx, dword ptr [eax + 0x148] */ r_edx = R32((u32)(r_eax+0x148u));
    /* 00480ef6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00480ef8: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x480efbu); call_ind(t); }
    /* 00480efb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480efe: mov edx, dword ptr [ecx + 0x148] */ r_edx = R32((u32)(r_ecx+0x148u));
    /* 00480f04: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00480f07: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00480f0a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00480f0d: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480f11: je 0x480f24 */ if (fZ) goto L_00480f24;
L_00480f13:; BB(0x00480f13);
    /* 00480f13: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00480f15: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00480f18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00480f1a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00480f1d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x480f1fu); call_ind(t); }
    /* 00480f1f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00480f22: jmp 0x480f2b */ goto L_00480f2b;
L_00480f24:; BB(0x00480f24);
    /* 00480f24: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00480f2b:; BB(0x00480f2b);
    /* 00480f2b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480f2e: mov dword ptr [eax + 0x148], 0 */ W32((u32)(r_eax+0x148u), 0x0u);
    /* 00480f38: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480f3b: mov ecx, dword ptr [ecx + 0x14c] */ r_ecx = R32((u32)(r_ecx+0x14cu));
    /* 00480f41: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480f44: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 00480f4a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480f4c: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x480f4fu); call_ind(t); }
    /* 00480f4f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480f52: mov ecx, dword ptr [eax + 0x14c] */ r_ecx = R32((u32)(r_eax+0x14cu));
    /* 00480f58: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00480f5b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480f5e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00480f61: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480f65: je 0x480f78 */ if (fZ) goto L_00480f78;
L_00480f67:; BB(0x00480f67);
    /* 00480f67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00480f69: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00480f6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480f6e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00480f71: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x480f73u); call_ind(t); }
    /* 00480f73: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00480f76: jmp 0x480f7f */ goto L_00480f7f;
L_00480f78:; BB(0x00480f78);
    /* 00480f78: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00480f7f:; BB(0x00480f7f);
    /* 00480f7f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480f82: mov dword ptr [eax + 0x14c], 0 */ W32((u32)(r_eax+0x14cu), 0x0u);
    /* 00480f8c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480f8f: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 00480f95: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480f98: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00480f9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480fa0: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x480fa3u); call_ind(t); }
    /* 00480fa3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480fa6: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00480fac: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00480faf: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00480fb2: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00480fb5: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480fb9: je 0x480fcc */ if (fZ) goto L_00480fcc;
L_00480fbb:; BB(0x00480fbb);
    /* 00480fbb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00480fbd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00480fc0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480fc2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00480fc5: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x480fc7u); call_ind(t); }
    /* 00480fc7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00480fca: jmp 0x480fd3 */ goto L_00480fd3;
L_00480fcc:; BB(0x00480fcc);
    /* 00480fcc: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00480fd3:; BB(0x00480fd3);
    /* 00480fd3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480fd6: mov dword ptr [eax + 0x17c], 0 */ W32((u32)(r_eax+0x17cu), 0x0u);
    /* 00480fe0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480fe3: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x480fe8u); f_005dfc0f();
    /* 00480fe8: mov esp, ebp */ r_esp = r_ebp;
    /* 00480fea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480feb: ret  */ FN_RET(0x00480e71); r_esp += 4; return;
}

void f_00480fec(void) /* FUN_00480fec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480fec);
    /* 00480fec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480fed: mov ebp, esp */ r_ebp = r_esp;
    /* 00480fef: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480ff2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00480ff5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00480ffc: jmp 0x481007 */ goto L_00481007;
L_00480ffe:; BB(0x00480ffe);
    /* 00480ffe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481001: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00481004: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00481007:; BB(0x00481007);
    /* 00481007: cmp dword ptr [ebp - 4], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048100b: jge 0x481028 */ if ((fS==fO)) goto L_00481028;
L_0048100d:; BB(0x0048100d);
    /* 0048100d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481010: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481013: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00481017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048101a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048101d: mov eax, dword ptr [edx + eax*4 + 8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 00481021: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481023: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x481026u); call_ind(t); }
    /* 00481026: jmp 0x480ffe */ goto L_00480ffe;
L_00481028:; BB(0x00481028);
    /* 00481028: mov esp, ebp */ r_esp = r_ebp;
    /* 0048102a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048102b: ret  */ FN_RET(0x00480fec); r_esp += 4; return;
}

void f_0048102c(void) /* FUN_0048102c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048102c);
    /* 0048102c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048102d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048102f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481032: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00481035: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481038: call 0x480fec */ r_esp -= 4; W32(r_esp, 0x48103du); f_00480fec();
    /* 0048103d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481040: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00481046: mov edx, dword ptr [ecx + 0x3ae8] */ r_edx = R32((u32)(r_ecx+0x3ae8u));
    /* 0048104c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048104f: mov ecx, dword ptr [eax + edx*4 + 0x158] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x158u));
    /* 00481056: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00481059: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00481060: jmp 0x48106b */ goto L_0048106b;
L_00481062:; BB(0x00481062);
    /* 00481062: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481065: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00481068: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0048106b:; BB(0x0048106b);
    /* 0048106b: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048106f: jge 0x4810b4 */ if ((fS==fO)) goto L_004810b4;
L_00481071:; BB(0x00481071);
    /* 00481071: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481074: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00481077: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048107a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048107c: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00481082: movsx eax, byte ptr [edx + ecx + 0xe04c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0xe04cu));
    /* 0048108a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048108d: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481091: jl 0x4810b2 */ if ((fS!=fO)) goto L_004810b2;
L_00481093:; BB(0x00481093);
    /* 00481093: cmp dword ptr [ebp - 0xc], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481097: jg 0x4810b2 */ if ((!fZ&&fS==fO)) goto L_004810b2;
L_00481099:; BB(0x00481099);
    /* 00481099: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048109c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048109f: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004810a3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004810a6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004810a9: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 004810ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004810af: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4810b2u); call_ind(t); }
L_004810b2:; BB(0x004810b2);
    /* 004810b2: jmp 0x481062 */ goto L_00481062;
L_004810b4:; BB(0x004810b4);
    /* 004810b4: mov esp, ebp */ r_esp = r_ebp;
    /* 004810b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004810b7: ret  */ FN_RET(0x0048102c); r_esp += 4; return;
}

void f_004810b8(void) /* FUN_004810b8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004810b8);
    /* 004810b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004810b9: mov ebp, esp */ r_ebp = r_esp;
    /* 004810bb: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004810be: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004810c1: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004810c7: call 0x45e06f */ r_esp -= 4; W32(r_esp, 0x4810ccu); f_0045e06f();
    /* 004810cc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004810cf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004810d2: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 004810d8: mov edx, dword ptr [ecx + 0x3ae8] */ r_edx = R32((u32)(r_ecx+0x3ae8u));
    /* 004810de: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004810e1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004810e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004810e7: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004810ea: mov dword ptr [eax + 0x150], edx */ W32((u32)(r_eax+0x150u), r_edx);
    /* 004810f0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004810f3: movsx ecx, byte ptr [eax + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x2u));
    /* 004810f7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004810fa: mov eax, dword ptr [edx + 0x150] */ r_eax = R32((u32)(r_edx+0x150u));
    /* 00481100: lea ecx, [eax + ecx - 1] */ r_ecx = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 00481104: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481107: mov dword ptr [edx + 0x154], ecx */ W32((u32)(r_edx+0x154u), r_ecx);
    /* 0048110d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481110: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00481116: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481119: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0048111f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481121: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x481124u); call_ind(t); }
    /* 00481124: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481127: call 0x480fec */ r_esp -= 4; W32(r_esp, 0x48112cu); f_00480fec();
    /* 0048112c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048112f: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 00481135: call 0x481676 */ r_esp -= 4; W32(r_esp, 0x48113au); f_00481676();
    /* 0048113a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048113d: mov ecx, dword ptr [ecx + 0x14c] */ r_ecx = R32((u32)(r_ecx+0x14cu));
    /* 00481143: call 0x481676 */ r_esp -= 4; W32(r_esp, 0x481148u); f_00481676();
    /* 00481148: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048114b: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 00481151: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481154: mov edx, dword ptr [eax + ecx*4 + 0x3ac4] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x3ac4u));
    /* 0048115b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048115c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048115f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481162: mov edx, dword ptr [ecx + eax*4 + 0x158] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x158u));
    /* 00481169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048116a: push 0x686608 */ { u32 v = 0x686608u; r_esp -= 4; W32(r_esp, v); }
    /* 0048116f: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x481174u); f_0060fc40();
    /* 00481174: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481177: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048117a: cmp dword ptr [eax + 0x1c], 1 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048117e: jl 0x48118c */ if ((fS!=fO)) goto L_0048118c;
L_00481180:; BB(0x00481180);
    /* 00481180: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00481183: cmp dword ptr [ecx + 0x1c], 0x3e8 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048118a: jle 0x481191 */ if ((fZ||fS!=fO)) goto L_00481191;
L_0048118c:; BB(0x0048118c);
    /* 0048118c: jmp 0x48126a */ goto L_0048126a;
L_00481191:; BB(0x00481191);
    /* 00481191: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00481198: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048119b: movsx eax, byte ptr [edx + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x4u));
    /* 0048119f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004811a2: jne 0x4811c9 */ if (!fZ) goto L_004811c9;
L_004811a4:; BB(0x004811a4);
    /* 004811a4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004811a7: mov edx, dword ptr [ecx + 0x154] */ r_edx = R32((u32)(r_ecx+0x154u));
    /* 004811ad: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004811b0: cmp dword ptr [ebp - 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004811b7: jle 0x4811c4 */ if ((fZ||fS!=fO)) goto L_004811c4;
L_004811b9:; BB(0x004811b9);
    /* 004811b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004811bc: sub eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004811c1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004811c4:; BB(0x004811c4);
    /* 004811c4: jmp 0x48124c */ goto L_0048124c;
L_004811c9:; BB(0x004811c9);
    /* 004811c9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004811cf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004811d2: mov eax, dword ptr [ecx + 0xe048] */ r_eax = R32((u32)(r_ecx+0xe048u));
    /* 004811d8: cmp eax, dword ptr [edx + 0x150] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004811de: je 0x48124c */ if (fZ) goto L_0048124c;
L_004811e0:; BB(0x004811e0);
    /* 004811e0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004811e3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004811e6: cmp edx, dword ptr [ecx + 0x150] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004811ec: jl 0x4811fc */ if ((fS!=fO)) goto L_004811fc;
L_004811ee:; BB(0x004811ee);
    /* 004811ee: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004811f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004811f4: cmp ecx, dword ptr [eax + 0x154] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x154u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004811fa: jle 0x481224 */ if ((fZ||fS!=fO)) goto L_00481224;
L_004811fc:; BB(0x004811fc);
    /* 004811fc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004811ff: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00481205: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481208: cmp edx, dword ptr [eax + 0x150] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x150u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048120e: jl 0x48122c */ if ((fS!=fO)) goto L_0048122c;
L_00481210:; BB(0x00481210);
    /* 00481210: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00481213: add ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00481219: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048121c: cmp ecx, dword ptr [edx + 0x154] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x154u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481222: jg 0x48122c */ if ((!fZ&&fS==fO)) goto L_0048122c;
L_00481224:; BB(0x00481224);
    /* 00481224: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00481227: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048122a: jmp 0x48124c */ goto L_0048124c;
L_0048122c:; BB(0x0048122c);
    /* 0048122c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048122f: mov edx, dword ptr [ecx + 0x154] */ r_edx = R32((u32)(r_ecx+0x154u));
    /* 00481235: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00481238: cmp dword ptr [ebp - 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048123f: jle 0x48124c */ if ((fZ||fS!=fO)) goto L_0048124c;
L_00481241:; BB(0x00481241);
    /* 00481241: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481244: sub eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00481249: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0048124c:; BB(0x0048124c);
    /* 0048124c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481250: je 0x48126a */ if (fZ) goto L_0048126a;
L_00481252:; BB(0x00481252);
    /* 00481252: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481255: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481258: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048125b: mov dword ptr [edx + ecx*4 + 0x158], eax */ W32((u32)(r_edx+r_ecx*4+0x158u), r_eax);
    /* 00481262: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481265: call 0x481270 */ r_esp -= 4; W32(r_esp, 0x48126au); f_00481270();
L_0048126a:; BB(0x0048126a);
    /* 0048126a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048126c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048126d: ret 4 */ FN_RET(0x004810b8); r_esp += 8; return;
}

void f_00481270(void) /* FUN_00481270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481270);
    /* 00481270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481271: mov ebp, esp */ r_ebp = r_esp;
    /* 00481273: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481276: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00481279: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0048127c: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00481282: mov edx, dword ptr [ecx + 0x3ae8] */ r_edx = R32((u32)(r_ecx+0x3ae8u));
    /* 00481288: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0048128b: mov ecx, dword ptr [eax + edx*4 + 0x158] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x158u));
    /* 00481292: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481293: push 0x686628 */ { u32 v = 0x686628u; r_esp -= 4; W32(r_esp, v); }
    /* 00481298: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 0048129b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048129c: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4812a1u); f_00624050();
    /* 004812a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004812a4: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 004812a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004812a8: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004812ab: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 004812b1: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004812b4: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 004812ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004812bc: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4812bfu); call_ind(t); }
    /* 004812bf: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004812c2: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004812c5: mov edx, dword ptr [eax + 0x150] */ r_edx = R32((u32)(r_eax+0x150u));
    /* 004812cb: cmp edx, dword ptr [ecx + 0x154] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x154u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004812d1: jne 0x4812ec */ if (!fZ) goto L_004812ec;
L_004812d3:; BB(0x004812d3);
    /* 004812d3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004812d6: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 004812dc: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004812df: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 004812e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004812e7: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4812eau); call_ind(t); }
    /* 004812ea: jmp 0x481303 */ goto L_00481303;
L_004812ec:; BB(0x004812ec);
    /* 004812ec: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004812ef: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 004812f5: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004812f8: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 004812fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481300: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x481303u); call_ind(t); }
L_00481303:; BB(0x00481303);
    /* 00481303: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00481306: call 0x48102c */ r_esp -= 4; W32(r_esp, 0x48130bu); f_0048102c();
    /* 0048130b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0048130e: call 0x48145a */ r_esp -= 4; W32(r_esp, 0x481313u); f_0048145a();
    /* 00481313: mov esp, ebp */ r_esp = r_ebp;
    /* 00481315: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481316: ret  */ FN_RET(0x00481270); r_esp += 4; return;
}

void f_00481317(void) /* FUN_00481317 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481317);
    /* 00481317: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481318: mov ebp, esp */ r_ebp = r_esp;
    /* 0048131a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048131d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00481320: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481323: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00481329: mov edx, dword ptr [ecx + 0x3ae8] */ r_edx = R32((u32)(r_ecx+0x3ae8u));
    /* 0048132f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481332: mov ecx, dword ptr [eax + edx*4 + 0x158] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x158u));
    /* 00481339: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048133c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048133f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481343: jne 0x48134c */ if (!fZ) goto L_0048134c;
L_00481345:; BB(0x00481345);
    /* 00481345: mov dword ptr [ebp - 4], 0x3e8 */ W32((u32)(r_ebp+0xfffffffcu), 0x3e8u);
L_0048134c:; BB(0x0048134c);
    /* 0048134c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048134f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481352: cmp eax, dword ptr [edx + 0x150] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481358: jl 0x481368 */ if ((fS!=fO)) goto L_00481368;
L_0048135a:; BB(0x0048135a);
    /* 0048135a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048135d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481360: cmp edx, dword ptr [ecx + 0x154] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x154u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481366: jle 0x48138f */ if ((fZ||fS!=fO)) goto L_0048138f;
L_00481368:; BB(0x00481368);
    /* 00481368: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048136b: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00481370: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481373: cmp eax, dword ptr [ecx + 0x150] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481379: jl 0x4813b3 */ if ((fS!=fO)) goto L_004813b3;
L_0048137b:; BB(0x0048137b);
    /* 0048137b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048137e: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00481384: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481387: cmp edx, dword ptr [eax + 0x154] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x154u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048138d: jg 0x4813b3 */ if ((!fZ&&fS==fO)) goto L_004813b3;
L_0048138f:; BB(0x0048138f);
    /* 0048138f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481392: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00481398: mov eax, dword ptr [edx + 0x3ae8] */ r_eax = R32((u32)(r_edx+0x3ae8u));
    /* 0048139e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004813a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004813a4: mov dword ptr [ecx + eax*4 + 0x158], edx */ W32((u32)(r_ecx+r_eax*4+0x158u), r_edx);
    /* 004813ab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004813ae: call 0x481270 */ r_esp -= 4; W32(r_esp, 0x4813b3u); f_00481270();
L_004813b3:; BB(0x004813b3);
    /* 004813b3: mov esp, ebp */ r_esp = r_ebp;
    /* 004813b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004813b6: ret  */ FN_RET(0x00481317); r_esp += 4; return;
}

void f_004813b7(void) /* FUN_004813b7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004813b7);
    /* 004813b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004813b8: mov ebp, esp */ r_ebp = r_esp;
    /* 004813ba: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004813bd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004813c0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004813c3: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 004813c9: mov edx, dword ptr [ecx + 0x3ae8] */ r_edx = R32((u32)(r_ecx+0x3ae8u));
    /* 004813cf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004813d2: mov ecx, dword ptr [eax + edx*4 + 0x158] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x158u));
    /* 004813d9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004813dc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004813df: cmp dword ptr [ebp - 4], 0x3e9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3e9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004813e6: jne 0x4813ef */ if (!fZ) goto L_004813ef;
L_004813e8:; BB(0x004813e8);
    /* 004813e8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_004813ef:; BB(0x004813ef);
    /* 004813ef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004813f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004813f5: cmp eax, dword ptr [edx + 0x150] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004813fb: jl 0x48140b */ if ((fS!=fO)) goto L_0048140b;
L_004813fd:; BB(0x004813fd);
    /* 004813fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481400: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481403: cmp edx, dword ptr [ecx + 0x154] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x154u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481409: jle 0x481432 */ if ((fZ||fS!=fO)) goto L_00481432;
L_0048140b:; BB(0x0048140b);
    /* 0048140b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048140e: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00481413: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481416: cmp eax, dword ptr [ecx + 0x150] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048141c: jl 0x481456 */ if ((fS!=fO)) goto L_00481456;
L_0048141e:; BB(0x0048141e);
    /* 0048141e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481421: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00481427: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048142a: cmp edx, dword ptr [eax + 0x154] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x154u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481430: jg 0x481456 */ if ((!fZ&&fS==fO)) goto L_00481456;
L_00481432:; BB(0x00481432);
    /* 00481432: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481435: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0048143b: mov eax, dword ptr [edx + 0x3ae8] */ r_eax = R32((u32)(r_edx+0x3ae8u));
    /* 00481441: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481444: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481447: mov dword ptr [ecx + eax*4 + 0x158], edx */ W32((u32)(r_ecx+r_eax*4+0x158u), r_edx);
    /* 0048144e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481451: call 0x481270 */ r_esp -= 4; W32(r_esp, 0x481456u); f_00481270();
L_00481456:; BB(0x00481456);
    /* 00481456: mov esp, ebp */ r_esp = r_ebp;
    /* 00481458: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481459: ret  */ FN_RET(0x004813b7); r_esp += 4; return;
}

void f_0048145a(void) /* FUN_0048145a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048145a);
    /* 0048145a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048145b: mov ebp, esp */ r_ebp = r_esp;
    /* 0048145d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481460: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00481463: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00481469: call 0x45e06f */ r_esp -= 4; W32(r_esp, 0x48146eu); f_0045e06f();
    /* 0048146e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00481471: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481474: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 0048147a: call 0x481676 */ r_esp -= 4; W32(r_esp, 0x48147fu); f_00481676();
    /* 0048147f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481482: mov ecx, dword ptr [ecx + 0x14c] */ r_ecx = R32((u32)(r_ecx+0x14cu));
    /* 00481488: call 0x481676 */ r_esp -= 4; W32(r_esp, 0x48148du); f_00481676();
    /* 0048148d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481490: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481493: mov ecx, dword ptr [edx + 0x150] */ r_ecx = R32((u32)(r_edx+0x150u));
    /* 00481499: cmp ecx, dword ptr [eax + 0x154] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x154u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048149f: jne 0x4814a6 */ if (!fZ) goto L_004814a6;
L_004814a1:; BB(0x004814a1);
    /* 004814a1: jmp 0x4815d8 */ goto L_004815d8;
L_004814a6:; BB(0x004814a6);
    /* 004814a6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004814a9: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 004814af: mov ecx, dword ptr [eax + 0x3ae8] */ r_ecx = R32((u32)(r_eax+0x3ae8u));
    /* 004814b5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004814b8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004814bb: mov ecx, dword ptr [edx + ecx*4 + 0x158] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x158u));
    /* 004814c2: cmp ecx, dword ptr [eax + 0x150] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004814c8: jne 0x4814da */ if (!fZ) goto L_004814da;
L_004814ca:; BB(0x004814ca);
    /* 004814ca: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004814cd: mov ecx, dword ptr [edx + 0x148] */ r_ecx = R32((u32)(r_edx+0x148u));
    /* 004814d3: call 0x481676 */ r_esp -= 4; W32(r_esp, 0x4814d8u); f_00481676();
    /* 004814d8: jmp 0x4814e8 */ goto L_004814e8;
L_004814da:; BB(0x004814da);
    /* 004814da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004814dd: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 004814e3: call 0x481697 */ r_esp -= 4; W32(r_esp, 0x4814e8u); f_00481697();
L_004814e8:; BB(0x004814e8);
    /* 004814e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004814eb: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 004814f1: mov eax, dword ptr [edx + 0x3ae8] */ r_eax = R32((u32)(r_edx+0x3ae8u));
    /* 004814f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004814fa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004814fd: mov eax, dword ptr [ecx + eax*4 + 0x158] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x158u));
    /* 00481504: cmp eax, dword ptr [edx + 0x154] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x154u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048150a: je 0x481536 */ if (fZ) goto L_00481536;
L_0048150c:; BB(0x0048150c);
    /* 0048150c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048150f: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00481515: mov eax, dword ptr [edx + 0x3ae8] */ r_eax = R32((u32)(r_edx+0x3ae8u));
    /* 0048151b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048151e: mov edx, dword ptr [ecx + 0x154] */ r_edx = R32((u32)(r_ecx+0x154u));
    /* 00481524: sub edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048152a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048152d: cmp dword ptr [ecx + eax*4 + 0x158], edx */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x158u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481534: jne 0x481549 */ if (!fZ) goto L_00481549;
L_00481536:; BB(0x00481536);
    /* 00481536: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481539: mov ecx, dword ptr [edx + 0x14c] */ r_ecx = R32((u32)(r_edx+0x14cu));
    /* 0048153f: call 0x481676 */ r_esp -= 4; W32(r_esp, 0x481544u); f_00481676();
    /* 00481544: jmp 0x4815d8 */ goto L_004815d8;
L_00481549:; BB(0x00481549);
    /* 00481549: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048154c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048154f: cmp ecx, dword ptr [eax + 0x150] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x150u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481555: jl 0x481565 */ if ((fS!=fO)) goto L_00481565;
L_00481557:; BB(0x00481557);
    /* 00481557: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048155a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048155d: cmp eax, dword ptr [edx + 0x154] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x154u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481563: jle 0x48158c */ if ((fZ||fS!=fO)) goto L_0048158c;
L_00481565:; BB(0x00481565);
    /* 00481565: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481568: add ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048156e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481571: cmp ecx, dword ptr [edx + 0x150] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481577: jl 0x4815ca */ if ((fS!=fO)) goto L_004815ca;
L_00481579:; BB(0x00481579);
    /* 00481579: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048157c: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00481581: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481584: cmp eax, dword ptr [ecx + 0x154] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x154u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048158a: jg 0x4815ca */ if ((!fZ&&fS==fO)) goto L_004815ca;
L_0048158c:; BB(0x0048158c);
    /* 0048158c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048158f: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 00481595: mov ecx, dword ptr [eax + 0x3ae8] */ r_ecx = R32((u32)(r_eax+0x3ae8u));
    /* 0048159b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048159e: mov eax, dword ptr [edx + ecx*4 + 0x158] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x158u));
    /* 004815a5: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004815a8: jne 0x4815ba */ if (!fZ) goto L_004815ba;
L_004815aa:; BB(0x004815aa);
    /* 004815aa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004815ad: mov ecx, dword ptr [ecx + 0x14c] */ r_ecx = R32((u32)(r_ecx+0x14cu));
    /* 004815b3: call 0x481676 */ r_esp -= 4; W32(r_esp, 0x4815b8u); f_00481676();
    /* 004815b8: jmp 0x4815c8 */ goto L_004815c8;
L_004815ba:; BB(0x004815ba);
    /* 004815ba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004815bd: mov ecx, dword ptr [edx + 0x14c] */ r_ecx = R32((u32)(r_edx+0x14cu));
    /* 004815c3: call 0x481697 */ r_esp -= 4; W32(r_esp, 0x4815c8u); f_00481697();
L_004815c8:; BB(0x004815c8);
    /* 004815c8: jmp 0x4815d8 */ goto L_004815d8;
L_004815ca:; BB(0x004815ca);
    /* 004815ca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004815cd: mov ecx, dword ptr [eax + 0x14c] */ r_ecx = R32((u32)(r_eax+0x14cu));
    /* 004815d3: call 0x481697 */ r_esp -= 4; W32(r_esp, 0x4815d8u); f_00481697();
L_004815d8:; BB(0x004815d8);
    /* 004815d8: mov esp, ebp */ r_esp = r_ebp;
    /* 004815da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004815db: ret  */ FN_RET(0x0048145a); r_esp += 4; return;
}

void f_004815dc(void) /* FUN_004815dc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004815dc);
    /* 004815dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004815dd: mov ebp, esp */ r_ebp = r_esp;
    /* 004815df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004815e0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004815e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004815e6: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x4815ebu); f_005d5d20();
    /* 004815eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004815ee: mov dword ptr [eax], 0x636874 */ W32((u32)(r_eax), 0x636874u);
    /* 004815f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004815f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004815fa: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 00481600: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481603: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00481606: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 0048160c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048160f: mov esp, ebp */ r_esp = r_ebp;
    /* 00481611: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481612: ret 8 */ FN_RET(0x004815dc); r_esp += 12; return;
}

void f_00481615(void) /* FUN_00481615 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481615);
    /* 00481615: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481616: mov ebp, esp */ r_ebp = r_esp;
    /* 00481618: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481619: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048161c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048161f: mov dword ptr [eax], 0x636874 */ W32((u32)(r_eax), 0x636874u);
    /* 00481625: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481628: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x48162du); f_005d5dfb();
    /* 0048162d: mov esp, ebp */ r_esp = r_ebp;
    /* 0048162f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481630: ret  */ FN_RET(0x00481615); r_esp += 4; return;
}

void f_00481631(void) /* FUN_00481631 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481631);
    /* 00481631: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481632: mov ebp, esp */ r_ebp = r_esp;
    /* 00481634: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481637: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048163a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048163d: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00481643: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00481646: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048164a: je 0x481654 */ if (fZ) goto L_00481654;
L_0048164c:; BB(0x0048164c);
    /* 0048164c: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481650: je 0x481664 */ if (fZ) goto L_00481664;
L_00481652:; BB(0x00481652);
    /* 00481652: jmp 0x481672 */ goto L_00481672;
L_00481654:; BB(0x00481654);
    /* 00481654: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481657: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 0048165d: call 0x481317 */ r_esp -= 4; W32(r_esp, 0x481662u); f_00481317();
    /* 00481662: jmp 0x481672 */ goto L_00481672;
L_00481664:; BB(0x00481664);
    /* 00481664: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481667: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0048166d: call 0x4813b7 */ r_esp -= 4; W32(r_esp, 0x481672u); f_004813b7();
L_00481672:; BB(0x00481672);
    /* 00481672: mov esp, ebp */ r_esp = r_ebp;
    /* 00481674: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481675: ret  */ FN_RET(0x00481631); r_esp += 4; return;
}

void f_00481676(void) /* FUN_00481676 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481676);
    /* 00481676: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481677: mov ebp, esp */ r_ebp = r_esp;
    /* 00481679: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048167a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048167d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481680: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481682: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481685: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x481688u); call_ind(t); }
    /* 00481688: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048168b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048168d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481690: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x481693u); call_ind(t); }
    /* 00481693: mov esp, ebp */ r_esp = r_ebp;
    /* 00481695: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481696: ret  */ FN_RET(0x00481676); r_esp += 4; return;
}

void f_00481697(void) /* FUN_00481697 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481697);
    /* 00481697: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481698: mov ebp, esp */ r_ebp = r_esp;
    /* 0048169a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048169b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048169e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004816a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004816a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004816a6: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4816a9u); call_ind(t); }
    /* 004816a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004816ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004816ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004816b1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4816b4u); call_ind(t); }
    /* 004816b4: mov esp, ebp */ r_esp = r_ebp;
    /* 004816b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004816b7: ret  */ FN_RET(0x00481697); r_esp += 4; return;
}

void f_004816c0(void) /* FUN_004816c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004816c0);
    /* 004816c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004816c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004816c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004816c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004816c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004816ca: call 0x478119 */ r_esp -= 4; W32(r_esp, 0x4816cfu); f_00478119();
    /* 004816cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004816d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004816d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004816d7: je 0x4816e5 */ if (fZ) goto L_004816e5;
L_004816d9:; BB(0x004816d9);
    /* 004816d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004816dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004816dd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4816e2u); f_0048ac1b();
    /* 004816e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004816e5:; BB(0x004816e5);
    /* 004816e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004816e8: mov esp, ebp */ r_esp = r_ebp;
    /* 004816ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004816eb: ret 4 */ FN_RET(0x004816c0); r_esp += 8; return;
}

void f_004816f0(void) /* FUN_004816f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004816f0);
    /* 004816f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004816f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004816f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004816f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004816f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004816fa: call 0x478aef */ r_esp -= 4; W32(r_esp, 0x4816ffu); f_00478aef();
    /* 004816ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481702: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00481705: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481707: je 0x481715 */ if (fZ) goto L_00481715;
L_00481709:; BB(0x00481709);
    /* 00481709: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048170c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048170d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x481712u); f_0048ac1b();
    /* 00481712: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00481715:; BB(0x00481715);
    /* 00481715: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481718: mov esp, ebp */ r_esp = r_ebp;
    /* 0048171a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048171b: ret 4 */ FN_RET(0x004816f0); r_esp += 8; return;
}

void f_00481720(void) /* FUN_00481720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481720);
    /* 00481720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481721: mov ebp, esp */ r_ebp = r_esp;
    /* 00481723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00481727: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048172a: call 0x47d257 */ r_esp -= 4; W32(r_esp, 0x48172fu); f_0047d257();
    /* 0048172f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481732: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00481735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481737: je 0x481745 */ if (fZ) goto L_00481745;
L_00481739:; BB(0x00481739);
    /* 00481739: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048173c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048173d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x481742u); f_0048ac1b();
    /* 00481742: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00481745:; BB(0x00481745);
    /* 00481745: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481748: mov esp, ebp */ r_esp = r_ebp;
    /* 0048174a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048174b: ret 4 */ FN_RET(0x00481720); r_esp += 8; return;
}

void f_00481750(void) /* FUN_00481750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481750);
    /* 00481750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481751: mov ebp, esp */ r_ebp = r_esp;
    /* 00481753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00481757: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048175a: call 0x47d350 */ r_esp -= 4; W32(r_esp, 0x48175fu); f_0047d350();
    /* 0048175f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481762: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00481765: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481767: je 0x481775 */ if (fZ) goto L_00481775;
L_00481769:; BB(0x00481769);
    /* 00481769: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048176c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048176d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x481772u); f_0048ac1b();
    /* 00481772: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00481775:; BB(0x00481775);
    /* 00481775: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481778: mov esp, ebp */ r_esp = r_ebp;
    /* 0048177a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048177b: ret 4 */ FN_RET(0x00481750); r_esp += 8; return;
}

void f_00481780(void) /* FUN_00481780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481780);
    /* 00481780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481781: mov ebp, esp */ r_ebp = r_esp;
    /* 00481783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00481787: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048178a: call 0x47d461 */ r_esp -= 4; W32(r_esp, 0x48178fu); f_0047d461();
    /* 0048178f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481792: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00481795: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481797: je 0x4817a5 */ if (fZ) goto L_004817a5;
L_00481799:; BB(0x00481799);
    /* 00481799: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048179c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048179d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4817a2u); f_0048ac1b();
    /* 004817a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004817a5:; BB(0x004817a5);
    /* 004817a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004817a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004817aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004817ab: ret 4 */ FN_RET(0x00481780); r_esp += 8; return;
}

void f_004817b0(void) /* FUN_004817b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004817b0);
    /* 004817b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004817b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004817b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004817b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004817b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004817ba: call 0x47f16a */ r_esp -= 4; W32(r_esp, 0x4817bfu); f_0047f16a();
    /* 004817bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004817c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004817c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004817c7: je 0x4817d5 */ if (fZ) goto L_004817d5;
L_004817c9:; BB(0x004817c9);
    /* 004817c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004817cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004817cd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4817d2u); f_0048ac1b();
    /* 004817d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004817d5:; BB(0x004817d5);
    /* 004817d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004817d8: mov esp, ebp */ r_esp = r_ebp;
    /* 004817da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004817db: ret 4 */ FN_RET(0x004817b0); r_esp += 8; return;
}

void f_004817e0(void) /* FUN_004817e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004817e0);
    /* 004817e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004817e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004817e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004817e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004817e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004817ea: call 0x47f2fc */ r_esp -= 4; W32(r_esp, 0x4817efu); f_0047f2fc();
    /* 004817ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004817f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004817f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004817f7: je 0x481805 */ if (fZ) goto L_00481805;
L_004817f9:; BB(0x004817f9);
    /* 004817f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004817fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004817fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x481802u); f_0048ac1b();
    /* 00481802: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00481805:; BB(0x00481805);
    /* 00481805: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481808: mov esp, ebp */ r_esp = r_ebp;
    /* 0048180a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048180b: ret 4 */ FN_RET(0x004817e0); r_esp += 8; return;
}

void f_00481810(void) /* FUN_00481810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481810);
    /* 00481810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481811: mov ebp, esp */ r_ebp = r_esp;
    /* 00481813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00481817: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048181a: call 0x47f5a7 */ r_esp -= 4; W32(r_esp, 0x48181fu); f_0047f5a7();
    /* 0048181f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481822: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00481825: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481827: je 0x481835 */ if (fZ) goto L_00481835;
L_00481829:; BB(0x00481829);
    /* 00481829: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048182c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048182d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x481832u); f_0048ac1b();
    /* 00481832: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00481835:; BB(0x00481835);
    /* 00481835: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481838: mov esp, ebp */ r_esp = r_ebp;
    /* 0048183a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048183b: ret 4 */ FN_RET(0x00481810); r_esp += 8; return;
}

void f_00481840(void) /* FUN_00481840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481840);
    /* 00481840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481841: mov ebp, esp */ r_ebp = r_esp;
    /* 00481843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00481847: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048184a: call 0x47f641 */ r_esp -= 4; W32(r_esp, 0x48184fu); f_0047f641();
    /* 0048184f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481852: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00481855: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481857: je 0x481865 */ if (fZ) goto L_00481865;
L_00481859:; BB(0x00481859);
    /* 00481859: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048185c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048185d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x481862u); f_0048ac1b();
    /* 00481862: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00481865:; BB(0x00481865);
    /* 00481865: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481868: mov esp, ebp */ r_esp = r_ebp;
    /* 0048186a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048186b: ret 4 */ FN_RET(0x00481840); r_esp += 8; return;
}

void f_00481870(void) /* FUN_00481870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481870);
    /* 00481870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481871: mov ebp, esp */ r_ebp = r_esp;
    /* 00481873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00481877: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048187a: call 0x47f8e0 */ r_esp -= 4; W32(r_esp, 0x48187fu); f_0047f8e0();
    /* 0048187f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481882: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00481885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481887: je 0x481895 */ if (fZ) goto L_00481895;
L_00481889:; BB(0x00481889);
    /* 00481889: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048188c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048188d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x481892u); f_0048ac1b();
    /* 00481892: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00481895:; BB(0x00481895);
    /* 00481895: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481898: mov esp, ebp */ r_esp = r_ebp;
    /* 0048189a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048189b: ret 4 */ FN_RET(0x00481870); r_esp += 8; return;
}

void f_004818a0(void) /* FUN_004818a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004818a0);
    /* 004818a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004818a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004818a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004818a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004818a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004818aa: call 0x47ff18 */ r_esp -= 4; W32(r_esp, 0x4818afu); f_0047ff18();
    /* 004818af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004818b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004818b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004818b7: je 0x4818c5 */ if (fZ) goto L_004818c5;
L_004818b9:; BB(0x004818b9);
    /* 004818b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004818bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004818bd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4818c2u); f_0048ac1b();
    /* 004818c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004818c5:; BB(0x004818c5);
    /* 004818c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004818c8: mov esp, ebp */ r_esp = r_ebp;
    /* 004818ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004818cb: ret 4 */ FN_RET(0x004818a0); r_esp += 8; return;
}

void f_004818d0(void) /* FUN_004818d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004818d0);
    /* 004818d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004818d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004818d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004818d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004818d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004818da: call 0x480e71 */ r_esp -= 4; W32(r_esp, 0x4818dfu); f_00480e71();
    /* 004818df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004818e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004818e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004818e7: je 0x4818f5 */ if (fZ) goto L_004818f5;
L_004818e9:; BB(0x004818e9);
    /* 004818e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004818ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004818ed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4818f2u); f_0048ac1b();
    /* 004818f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004818f5:; BB(0x004818f5);
    /* 004818f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004818f8: mov esp, ebp */ r_esp = r_ebp;
    /* 004818fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004818fb: ret 4 */ FN_RET(0x004818d0); r_esp += 8; return;
}

void f_00481900(void) /* FUN_00481900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481900);
    /* 00481900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481901: mov ebp, esp */ r_ebp = r_esp;
    /* 00481903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00481907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048190a: call 0x481615 */ r_esp -= 4; W32(r_esp, 0x48190fu); f_00481615();
    /* 0048190f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481912: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00481915: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481917: je 0x481925 */ if (fZ) goto L_00481925;
L_00481919:; BB(0x00481919);
    /* 00481919: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048191c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048191d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x481922u); f_0048ac1b();
    /* 00481922: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00481925:; BB(0x00481925);
    /* 00481925: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481928: mov esp, ebp */ r_esp = r_ebp;
    /* 0048192a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048192b: ret 4 */ FN_RET(0x00481900); r_esp += 8; return;
}

void f_00481930(void) /* FUN_00481930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481930);
    /* 00481930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481931: mov ebp, esp */ r_ebp = r_esp;
    /* 00481933: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481936: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00481939: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048193b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048193d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481940: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x481945u); f_005d80f0();
    /* 00481945: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481948: mov dword ptr [eax], 0x6368e4 */ W32((u32)(r_eax), 0x6368e4u);
    /* 0048194e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481951: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00481954: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 0048195a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048195d: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 00481967: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481969: push 0x4e5 */ { u32 v = 0x4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048196e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481971: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x481976u); f_005e0461();
    /* 00481976: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481978: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048197a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048197d: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x481982u); f_005d81dc();
    /* 00481982: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481985: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x48198au); f_005e030e();
    /* 0048198a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0048198c: push 0x686828 */ { u32 v = 0x686828u; r_esp -= 4; W32(r_esp, v); }
    /* 00481991: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481994: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x481999u); f_005d825e();
    /* 00481999: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0048199e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4819a3u); f_0048ab58();
    /* 004819a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004819a6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004819a9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004819ad: je 0x4819bc */ if (fZ) goto L_004819bc;
L_004819af:; BB(0x004819af);
    /* 004819af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004819b2: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4819b7u); f_005e8590();
    /* 004819b7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004819ba: jmp 0x4819c3 */ goto L_004819c3;
L_004819bc:; BB(0x004819bc);
    /* 004819bc: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_004819c3:; BB(0x004819c3);
    /* 004819c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004819c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004819c9: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
    /* 004819cf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004819d2: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 004819d8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004819db: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004819de: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004819e0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004819e3: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 004819e9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004819ec: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 004819f2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004819f4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4819f7u); call_ind(t); }
    /* 004819f7: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 004819f9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004819fc: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00481a02: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x481a07u); f_005e87aa();
    /* 00481a07: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00481a09: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00481a0b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481a0e: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00481a14: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481a17: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00481a1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481a1f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x481a22u); call_ind(t); }
    /* 00481a22: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481a25: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00481a2b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481a2e: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00481a34: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481a36: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x481a39u); call_ind(t); }
    /* 00481a39: push 0x686834 */ { u32 v = 0x686834u; r_esp -= 4; W32(r_esp, v); }
    /* 00481a3e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481a41: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00481a47: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481a4a: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00481a50: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481a52: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x481a55u); call_ind(t); }
    /* 00481a55: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481a58: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00481a5e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481a61: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00481a67: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481a69: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x481a6cu); call_ind(t); }
    /* 00481a6c: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00481a71: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x481a76u); f_0048ab58();
    /* 00481a76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481a79: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00481a7c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481a80: je 0x481a8f */ if (fZ) goto L_00481a8f;
L_00481a82:; BB(0x00481a82);
    /* 00481a82: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481a85: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x481a8au); f_005e8590();
    /* 00481a8a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00481a8d: jmp 0x481a96 */ goto L_00481a96;
L_00481a8f:; BB(0x00481a8f);
    /* 00481a8f: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00481a96:; BB(0x00481a96);
    /* 00481a96: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481a99: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00481a9c: mov dword ptr [eax + 0x98], ecx */ W32((u32)(r_eax+0x98u), r_ecx);
    /* 00481aa2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481aa5: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00481aab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481aae: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00481ab1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00481ab3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481ab6: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 00481abc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481abf: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 00481ac5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00481ac7: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x481acau); call_ind(t); }
    /* 00481aca: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00481acc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481acf: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00481ad5: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x481adau); f_005e87aa();
    /* 00481ada: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00481adc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481adf: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 00481ae5: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x481aeau); f_005e8740();
    /* 00481aea: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00481aec: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481aef: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00481af5: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x481afau); f_005e8775();
    /* 00481afa: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00481afc: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 00481afe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481b01: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00481b07: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481b0a: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00481b10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481b12: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x481b15u); call_ind(t); }
    /* 00481b15: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481b18: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00481b1e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481b21: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00481b27: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481b29: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x481b2cu); call_ind(t); }
    /* 00481b2c: push 0x6f6b00 */ { u32 v = 0x6f6b00u; r_esp -= 4; W32(r_esp, v); }
    /* 00481b31: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481b34: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00481b3a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481b3d: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00481b43: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481b45: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x481b48u); call_ind(t); }
    /* 00481b48: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00481b4a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481b4d: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00481b53: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x481b58u); f_005e8e99();
    /* 00481b58: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481b5b: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00481b61: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481b64: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00481b6a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481b6c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x481b6fu); call_ind(t); }
    /* 00481b6f: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00481b71: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x481b76u); f_0048ab58();
    /* 00481b76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481b79: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00481b7c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481b80: je 0x481b8f */ if (fZ) goto L_00481b8f;
L_00481b82:; BB(0x00481b82);
    /* 00481b82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00481b85: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x481b8au); f_005e4bb0();
    /* 00481b8a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00481b8d: jmp 0x481b96 */ goto L_00481b96;
L_00481b8f:; BB(0x00481b8f);
    /* 00481b8f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00481b96:; BB(0x00481b96);
    /* 00481b96: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481b99: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00481b9c: mov dword ptr [eax + 0x9c], ecx */ W32((u32)(r_eax+0x9cu), r_ecx);
    /* 00481ba2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481ba5: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00481bab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481bae: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00481bb1: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00481bb3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481bb6: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 00481bbc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481bbf: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 00481bc5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00481bc7: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x481bcau); call_ind(t); }
    /* 00481bca: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00481bcc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00481bce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481bd1: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00481bd7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481bda: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00481be0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481be2: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x481be5u); call_ind(t); }
    /* 00481be5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481be7: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00481be9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481beb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481bee: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00481bf4: call 0x5e4e52 */ r_esp -= 4; W32(r_esp, 0x481bf9u); f_005e4e52();
    /* 00481bf9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481bfc: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00481c02: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481c05: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00481c0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481c0d: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x481c10u); call_ind(t); }
    /* 00481c10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481c12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481c14: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481c17: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00481c1d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481c20: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00481c26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481c28: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x481c2bu); call_ind(t); }
    /* 00481c2b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481c2e: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00481c34: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481c37: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00481c3d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481c3f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x481c42u); call_ind(t); }
    /* 00481c42: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481c45: mov esp, ebp */ r_esp = r_ebp;
    /* 00481c47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481c48: ret 4 */ FN_RET(0x00481930); r_esp += 8; return;
}

void f_00481c4b(void) /* FUN_00481c4b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481c4b);
    /* 00481c4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481c4c: mov ebp, esp */ r_ebp = r_esp;
    /* 00481c4e: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481c51: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00481c54: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00481c57: mov dword ptr [eax], 0x6368e4 */ W32((u32)(r_eax), 0x6368e4u);
    /* 00481c5d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00481c60: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 00481c66: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00481c69: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481c6c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00481c6f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481c73: je 0x481c86 */ if (fZ) goto L_00481c86;
L_00481c75:; BB(0x00481c75);
    /* 00481c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00481c77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481c7a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00481c7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481c7f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x481c81u); call_ind(t); }
    /* 00481c81: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00481c84: jmp 0x481c8d */ goto L_00481c8d;
L_00481c86:; BB(0x00481c86);
    /* 00481c86: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00481c8d:; BB(0x00481c8d);
    /* 00481c8d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00481c90: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 00481c9a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00481c9d: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 00481ca3: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00481ca6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481ca9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00481cac: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481cb0: je 0x481cc3 */ if (fZ) goto L_00481cc3;
L_00481cb2:; BB(0x00481cb2);
    /* 00481cb2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00481cb4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00481cb7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00481cb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00481cbc: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x481cbeu); call_ind(t); }
    /* 00481cbe: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00481cc1: jmp 0x481cca */ goto L_00481cca;
L_00481cc3:; BB(0x00481cc3);
    /* 00481cc3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00481cca:; BB(0x00481cca);
    /* 00481cca: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00481ccd: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
    /* 00481cd7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00481cda: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 00481ce0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00481ce3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00481ce6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00481ce9: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481ced: je 0x481d00 */ if (fZ) goto L_00481d00;
L_00481cef:; BB(0x00481cef);
    /* 00481cef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00481cf1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481cf4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00481cf6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481cf9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x481cfbu); call_ind(t); }
    /* 00481cfb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00481cfe: jmp 0x481d07 */ goto L_00481d07;
L_00481d00:; BB(0x00481d00);
    /* 00481d00: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00481d07:; BB(0x00481d07);
    /* 00481d07: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00481d0a: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
    /* 00481d14: cmp dword ptr [0x6f6a20], 0 */ {  u32 a = R32((u32)(0x6f6a20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481d1b: je 0x481d28 */ if (fZ) goto L_00481d28;
L_00481d1d:; BB(0x00481d1d);
    /* 00481d1d: mov ecx, dword ptr [0x6f6a20] */ r_ecx = R32((u32)(0x6f6a20u));
    /* 00481d23: call 0x47d1bc */ r_esp -= 4; W32(r_esp, 0x481d28u); f_0047d1bc();
L_00481d28:; BB(0x00481d28);
    /* 00481d28: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00481d2b: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x481d30u); f_005d8154();
    /* 00481d30: mov esp, ebp */ r_esp = r_ebp;
    /* 00481d32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481d33: ret  */ FN_RET(0x00481c4b); r_esp += 4; return;
}

void f_00481d34(void) /* FUN_00481d34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481d34);
    /* 00481d34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481d35: mov ebp, esp */ r_ebp = r_esp;
    /* 00481d37: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481d3a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00481d3d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481d40: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481d43: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 00481d49: cmp edx, dword ptr [ecx + 0x8c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481d4f: je 0x481e3e */ if (fZ) goto L_00481e3e;
L_00481d55:; BB(0x00481d55);
    /* 00481d55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481d57: push 0x64cad8 */ { u32 v = 0x64cad8u; r_esp -= 4; W32(r_esp, v); }
    /* 00481d5c: push 0x64caa8 */ { u32 v = 0x64caa8u; r_esp -= 4; W32(r_esp, v); }
    /* 00481d61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481d63: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00481d68: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00481d6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481d6c: call 0x625a50 */ r_esp -= 4; W32(r_esp, 0x481d71u); f_00625a50();
    /* 00481d71: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481d74: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00481d77: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481d7b: je 0x481d8d */ if (fZ) goto L_00481d8d;
L_00481d7d:; BB(0x00481d7d);
    /* 00481d7d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00481d83: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x481d88u); f_005d9e23();
    /* 00481d88: mov dword ptr [0x676aa8], eax */ W32((u32)(0x676aa8u), r_eax);
L_00481d8d:; BB(0x00481d8d);
    /* 00481d8d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481d90: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00481d96: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00481d99: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481d9c: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 00481da2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481da5: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00481dab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481dac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481daf: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 00481db5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481db6: push 0x68683c */ { u32 v = 0x68683cu; r_esp -= 4; W32(r_esp, v); }
    /* 00481dbb: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00481dbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481dbf: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x481dc4u); f_00624050();
    /* 00481dc4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481dc7: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00481dca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481dcb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481dce: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 00481dd4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481dd7: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 00481ddd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00481ddf: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x481de2u); call_ind(t); }
    /* 00481de2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481de5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481de8: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 00481dee: cmp eax, dword ptr [edx + 0x8c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481df4: jne 0x481dff */ if (!fZ) goto L_00481dff;
L_00481df6:; BB(0x00481df6);
    /* 00481df6: mov dword ptr [ebp - 0x14], 0x430f0000 */ W32((u32)(r_ebp+0xffffffecu), 0x430f0000u);
    /* 00481dfd: jmp 0x481e1a */ goto L_00481e1a;
L_00481dff:; BB(0x00481dff);
    /* 00481dff: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481e02: fild dword ptr [ecx + 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x8cu)));
    /* 00481e08: fdivr dword ptr [0x6368f4] */ ST(0) = R_F32((u32)(0x6368f4u)) / ST(0);
    /* 00481e0e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481e11: fimul dword ptr [edx + 0x90] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_edx+0x90u));
    /* 00481e17: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
L_00481e1a:; BB(0x00481e1a);
    /* 00481e1a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00481e1c: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00481e1f: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x481e24u); f_00624144();
    /* 00481e24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481e25: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481e28: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00481e2e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481e31: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00481e37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481e39: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x481e3cu); call_ind(t); }
    /* 00481e3c: jmp 0x481e7f */ goto L_00481e7f;
L_00481e3e:; BB(0x00481e3e);
    /* 00481e3e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481e41: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x481e46u); f_005e03cc();
    /* 00481e46: mov eax, dword ptr [0x6f6a20] */ r_eax = R32((u32)(0x6f6a20u));
    /* 00481e4b: mov dword ptr [eax + 0x3aec], 0 */ W32((u32)(r_eax+0x3aecu), 0x0u);
    /* 00481e55: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481e58: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00481e5b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00481e5e: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00481e61: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481e65: je 0x481e78 */ if (fZ) goto L_00481e78;
L_00481e67:; BB(0x00481e67);
    /* 00481e67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00481e69: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00481e6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481e6e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00481e71: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x481e73u); call_ind(t); }
    /* 00481e73: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00481e76: jmp 0x481e7f */ goto L_00481e7f;
L_00481e78:; BB(0x00481e78);
    /* 00481e78: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00481e7f:; BB(0x00481e7f);
    /* 00481e7f: mov esp, ebp */ r_esp = r_ebp;
    /* 00481e81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481e82: ret  */ FN_RET(0x00481d34); r_esp += 4; return;
}

void f_00481e90(void) /* FUN_00481e90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481e90);
    /* 00481e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00481e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481e94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00481e97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481e9a: call 0x481c4b */ r_esp -= 4; W32(r_esp, 0x481e9fu); f_00481c4b();
    /* 00481e9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481ea2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00481ea5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481ea7: je 0x481eb5 */ if (fZ) goto L_00481eb5;
L_00481ea9:; BB(0x00481ea9);
    /* 00481ea9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481eac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481ead: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x481eb2u); f_0048ac1b();
    /* 00481eb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00481eb5:; BB(0x00481eb5);
    /* 00481eb5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481eb8: mov esp, ebp */ r_esp = r_ebp;
    /* 00481eba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481ebb: ret 4 */ FN_RET(0x00481e90); r_esp += 8; return;
}

void f_00481ec0(void) /* FUN_00481ec0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481ec0);
    /* 00481ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00481ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00481ec7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481eca: call 0x446fe0 */ r_esp -= 4; W32(r_esp, 0x481ecfu); f_00446fe0();
    /* 00481ecf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481ed2: mov dword ptr [eax], 0x6368fc */ W32((u32)(r_eax), 0x6368fcu);
    /* 00481ed8: push 0x68686c */ { u32 v = 0x68686cu; r_esp -= 4; W32(r_esp, v); }
    /* 00481edd: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00481ee3: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x481ee8u); f_005da413();
    /* 00481ee8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481eeb: mov dword ptr [0x6f6b04], ecx */ W32((u32)(0x6f6b04u), r_ecx);
    /* 00481ef1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481ef4: mov dword ptr [edx + 0x1cb0], 0 */ W32((u32)(r_edx+0x1cb0u), 0x0u);
    /* 00481efe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481f01: mov dword ptr [eax + 0x1cb8], 0 */ W32((u32)(r_eax+0x1cb8u), 0x0u);
    /* 00481f0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481f0e: mov dword ptr [ecx + 0x1cbc], 0 */ W32((u32)(r_ecx+0x1cbcu), 0x0u);
    /* 00481f18: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481f1b: mov dword ptr [edx + 0x1cb4], 0 */ W32((u32)(r_edx+0x1cb4u), 0x0u);
    /* 00481f25: mov dword ptr [0x6f7050], 0x4b3 */ W32((u32)(0x6f7050u), 0x4b3u);
    /* 00481f2f: push 0x17a7 */ { u32 v = 0x17a7u; r_esp -= 4; W32(r_esp, v); }
    /* 00481f34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481f37: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x481f3cu); f_005e5ec3();
    /* 00481f3c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481f3f: mov esp, ebp */ r_esp = r_ebp;
    /* 00481f41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481f42: ret  */ FN_RET(0x00481ec0); r_esp += 4; return;
}

void f_00481f43(void) /* FUN_00481f43 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481f43);
    /* 00481f43: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481f44: mov ebp, esp */ r_ebp = r_esp;
    /* 00481f46: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481f49: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00481f4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00481f4f: mov dword ptr [eax], 0x6368fc */ W32((u32)(r_eax), 0x6368fcu);
    /* 00481f55: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481f58: cmp dword ptr [ecx + 0x1cbc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481f5f: je 0x481f74 */ if (fZ) goto L_00481f74;
L_00481f61:; BB(0x00481f61);
    /* 00481f61: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00481f67: call 0x45e00f */ r_esp -= 4; W32(r_esp, 0x481f6cu); f_0045e00f();
    /* 00481f6c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481f6f: call 0x4822e0 */ r_esp -= 4; W32(r_esp, 0x481f74u); f_004822e0();
L_00481f74:; BB(0x00481f74);
    /* 00481f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481f77: call 0x4824e4 */ r_esp -= 4; W32(r_esp, 0x481f7cu); f_004824e4();
    /* 00481f7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481f7f: cmp dword ptr [edx + 0x1cb4], 0 */ {  u32 a = R32((u32)(r_edx+0x1cb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481f86: je 0x481fc5 */ if (fZ) goto L_00481fc5;
L_00481f88:; BB(0x00481f88);
    /* 00481f88: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00481f8b: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 00481f91: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00481f94: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481f97: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00481f9a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481f9e: je 0x481fb1 */ if (fZ) goto L_00481fb1;
L_00481fa0:; BB(0x00481fa0);
    /* 00481fa0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00481fa2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481fa5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481fa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481faa: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x481facu); call_ind(t); }
    /* 00481fac: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00481faf: jmp 0x481fb8 */ goto L_00481fb8;
L_00481fb1:; BB(0x00481fb1);
    /* 00481fb1: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00481fb8:; BB(0x00481fb8);
    /* 00481fb8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00481fbb: mov dword ptr [eax + 0x1cb4], 0 */ W32((u32)(r_eax+0x1cb4u), 0x0u);
L_00481fc5:; BB(0x00481fc5);
    /* 00481fc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481fc7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00481fcd: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x481fd2u); f_005da413();
    /* 00481fd2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00481fd5: mov edx, dword ptr [ecx + 0x1cb0] */ r_edx = R32((u32)(r_ecx+0x1cb0u));
    /* 00481fdb: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00481fde: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481fe1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00481fe4: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481fe8: je 0x481ffb */ if (fZ) goto L_00481ffb;
L_00481fea:; BB(0x00481fea);
    /* 00481fea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00481fec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00481fef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00481ff1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00481ff4: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x481ff6u); call_ind(t); }
    /* 00481ff6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00481ff9: jmp 0x482002 */ goto L_00482002;
L_00481ffb:; BB(0x00481ffb);
    /* 00481ffb: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00482002:; BB(0x00482002);
    /* 00482002: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00482005: mov dword ptr [eax + 0x1cb0], 0 */ W32((u32)(r_eax+0x1cb0u), 0x0u);
    /* 0048200f: mov dword ptr [0x6f6b04], 0 */ W32((u32)(0x6f6b04u), 0x0u);
    /* 00482019: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048201c: call 0x44711a */ r_esp -= 4; W32(r_esp, 0x482021u); f_0044711a();
    /* 00482021: mov esp, ebp */ r_esp = r_ebp;
    /* 00482023: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482024: ret  */ FN_RET(0x00481f43); r_esp += 4; return;
}

void f_00482025(void) /* FUN_00482025 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482025);
    /* 00482025: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482026: mov ebp, esp */ r_ebp = r_esp;
    /* 00482028: sub esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048202e: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 00482034: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0048203a: call 0x4476a6 */ r_esp -= 4; W32(r_esp, 0x48203fu); f_004476a6();
    /* 0048203f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00482045: call 0x45cb5f */ r_esp -= 4; W32(r_esp, 0x48204au); f_0045cb5f();
    /* 0048204a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048204c: je 0x48207d */ if (fZ) goto L_0048207d;
L_0048204e:; BB(0x0048204e);
    /* 0048204e: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 00482053: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00482056: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 0048205c: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 00482062: cmp dword ptr [ebp - 0x110], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482069: jne 0x48207d */ if (!fZ) goto L_0048207d;
L_0048206b:; BB(0x0048206b);
    /* 0048206b: push 0x18a89 */ { u32 v = 0x18a89u; r_esp -= 4; W32(r_esp, v); }
    /* 00482070: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 00482075: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00482078: call 0x6003da */ r_esp -= 4; W32(r_esp, 0x48207du); f_006003da();
L_0048207d:; BB(0x0048207d);
    /* 0048207d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482084: jmp 0x48208f */ goto L_0048208f;
L_00482086:; BB(0x00482086);
    /* 00482086: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482089: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048208c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0048208f:; BB(0x0048208f);
    /* 0048208f: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482093: jge 0x482122 */ if ((fS==fO)) goto L_00482122;
L_00482099:; BB(0x00482099);
    /* 00482099: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048209c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048209d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004820a3: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x4820a8u); f_0045c419();
    /* 004820a8: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 004820ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004820ad: jne 0x48211d */ if (!fZ) goto L_0048211d;
L_004820af:; BB(0x004820af);
    /* 004820af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004820b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004820b3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004820b9: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x4820beu); f_0045c419();
    /* 004820be: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004820c1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004820c4: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 004820c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004820c9: jne 0x48210e */ if (!fZ) goto L_0048210e;
L_004820cb:; BB(0x004820cb);
    /* 004820cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004820ce: cmp dword ptr [ecx + 0x68], 0 */ {  u32 a = R32((u32)(r_ecx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004820d2: je 0x48210e */ if (fZ) goto L_0048210e;
L_004820d4:; BB(0x004820d4);
    /* 004820d4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004820d7: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004820da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004820db: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004820de: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004820e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004820e2: push 0x686874 */ { u32 v = 0x686874u; r_esp -= 4; W32(r_esp, v); }
    /* 004820e7: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 004820ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004820ee: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4820f3u); f_00624050();
    /* 004820f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004820f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004820f8: push 0x6868b0 */ { u32 v = 0x6868b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004820fd: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00482103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482104: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00482106: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x48210bu); f_0060f9f3();
    /* 0048210b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048210e:; BB(0x0048210e);
    /* 0048210e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482111: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482112: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00482118: call 0x45e320 */ r_esp -= 4; W32(r_esp, 0x48211du); f_0045e320();
L_0048211d:; BB(0x0048211d);
    /* 0048211d: jmp 0x482086 */ goto L_00482086;
L_00482122:; BB(0x00482122);
    /* 00482122: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00482124: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x482129u); f_0048ab58();
    /* 00482129: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048212c: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00482132: cmp dword ptr [ebp - 0x10c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482139: je 0x482162 */ if (fZ) goto L_00482162;
L_0048213b:; BB(0x0048213b);
    /* 0048213b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048213d: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00482143: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x482148u); f_005e6160();
    /* 00482148: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0048214e: mov dword ptr [edx], 0x6369b4 */ W32((u32)(r_edx), 0x6369b4u);
    /* 00482154: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0048215a: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 00482160: jmp 0x48216c */ goto L_0048216c;
L_00482162:; BB(0x00482162);
    /* 00482162: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
L_0048216c:; BB(0x0048216c);
    /* 0048216c: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00482172: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482173: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00482179: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x48217eu); f_005e5d66();
    /* 0048217e: mov esp, ebp */ r_esp = r_ebp;
    /* 00482180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482181: ret  */ FN_RET(0x00482025); r_esp += 4; return;
}

void f_00482182(void) /* FUN_00482182 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482182);
    /* 00482182: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482183: mov ebp, esp */ r_ebp = r_esp;
    /* 00482185: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482188: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048218b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048218e: cmp dword ptr [eax + 0x1cb0], 0 */ {  u32 a = R32((u32)(r_eax+0x1cb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482195: jne 0x4821ca */ if (!fZ) goto L_004821ca;
L_00482197:; BB(0x00482197);
    /* 00482197: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00482199: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48219eu); f_0048ab58();
    /* 0048219e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004821a1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004821a4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004821a8: je 0x4821b7 */ if (fZ) goto L_004821b7;
L_004821aa:; BB(0x004821aa);
    /* 004821aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004821ad: call 0x473afd */ r_esp -= 4; W32(r_esp, 0x4821b2u); f_00473afd();
    /* 004821b2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004821b5: jmp 0x4821be */ goto L_004821be;
L_004821b7:; BB(0x004821b7);
    /* 004821b7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_004821be:; BB(0x004821be);
    /* 004821be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004821c1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004821c4: mov dword ptr [ecx + 0x1cb0], edx */ W32((u32)(r_ecx+0x1cb0u), r_edx);
L_004821ca:; BB(0x004821ca);
    /* 004821ca: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004821cd: mov ecx, dword ptr [eax + 0x1cb0] */ r_ecx = R32((u32)(r_eax+0x1cb0u));
    /* 004821d3: call 0x473c1a */ r_esp -= 4; W32(r_esp, 0x4821d8u); f_00473c1a();
    /* 004821d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004821db: cmp dword ptr [ecx + 0x1cb4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004821e2: jne 0x48221a */ if (!fZ) goto L_0048221a;
L_004821e4:; BB(0x004821e4);
    /* 004821e4: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004821e9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4821eeu); f_0048ab58();
    /* 004821ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004821f1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004821f4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004821f8: je 0x482207 */ if (fZ) goto L_00482207;
L_004821fa:; BB(0x004821fa);
    /* 004821fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004821fd: call 0x473e40 */ r_esp -= 4; W32(r_esp, 0x482202u); f_00473e40();
    /* 00482202: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00482205: jmp 0x48220e */ goto L_0048220e;
L_00482207:; BB(0x00482207);
    /* 00482207: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0048220e:; BB(0x0048220e);
    /* 0048220e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482211: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00482214: mov dword ptr [edx + 0x1cb4], eax */ W32((u32)(r_edx+0x1cb4u), r_eax);
L_0048221a:; BB(0x0048221a);
    /* 0048221a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048221d: mov ecx, dword ptr [ecx + 0x1cb4] */ r_ecx = R32((u32)(r_ecx+0x1cb4u));
    /* 00482223: call 0x474966 */ r_esp -= 4; W32(r_esp, 0x482228u); f_00474966();
    /* 00482228: mov esp, ebp */ r_esp = r_ebp;
    /* 0048222a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048222b: ret  */ FN_RET(0x00482182); r_esp += 4; return;
}

void f_0048222c(void) /* FUN_0048222c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048222c);
    /* 0048222c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048222d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048222f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482230: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482233: mov eax, 1 */ r_eax = 0x1u;
    /* 00482238: mov esp, ebp */ r_esp = r_ebp;
    /* 0048223a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048223b: ret  */ FN_RET(0x0048222c); r_esp += 4; return;
}

void f_0048223c(void) /* FUN_0048223c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048223c);
    /* 0048223c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048223d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048223f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482240: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482243: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482246: call 0x4240a0 */ r_esp -= 4; W32(r_esp, 0x48224bu); f_004240a0();
    /* 0048224b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048224e: cmp dword ptr [eax + 0x1cb4], 0 */ {  u32 a = R32((u32)(r_eax+0x1cb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482255: je 0x482271 */ if (fZ) goto L_00482271;
L_00482257:; BB(0x00482257);
    /* 00482257: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048225a: cmp dword ptr [ecx + 0x1cbc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482261: jne 0x482271 */ if (!fZ) goto L_00482271;
L_00482263:; BB(0x00482263);
    /* 00482263: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482266: mov ecx, dword ptr [edx + 0x1cb4] */ r_ecx = R32((u32)(r_edx+0x1cb4u));
    /* 0048226c: call 0x474ab1 */ r_esp -= 4; W32(r_esp, 0x482271u); f_00474ab1();
L_00482271:; BB(0x00482271);
    /* 00482271: mov esp, ebp */ r_esp = r_ebp;
    /* 00482273: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482274: ret  */ FN_RET(0x0048223c); r_esp += 4; return;
}

void f_00482275(void) /* FUN_00482275 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482275);
    /* 00482275: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482276: mov ebp, esp */ r_ebp = r_esp;
    /* 00482278: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482279: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048227c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048227f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482280: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482283: call 0x447ba4 */ r_esp -= 4; W32(r_esp, 0x482288u); f_00447ba4();
    /* 00482288: mov esp, ebp */ r_esp = r_ebp;
    /* 0048228a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048228b: ret 4 */ FN_RET(0x00482275); r_esp += 8; return;
}

void f_0048228e(void) /* FUN_0048228e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048228e);
    /* 0048228e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048228f: mov ebp, esp */ r_ebp = r_esp;
    /* 00482291: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482292: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482295: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482298: mov dword ptr [eax + 0x1cb8], 1 */ W32((u32)(r_eax+0x1cb8u), 0x1u);
    /* 004822a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004822a5: mov dword ptr [ecx + 0x1cbc], 1 */ W32((u32)(r_ecx+0x1cbcu), 0x1u);
    /* 004822af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004822b2: call 0x482519 */ r_esp -= 4; W32(r_esp, 0x4822b7u); f_00482519();
    /* 004822b7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004822ba: mov ecx, dword ptr [edx + 0x1cb4] */ r_ecx = R32((u32)(r_edx+0x1cb4u));
    /* 004822c0: call 0x474c9e */ r_esp -= 4; W32(r_esp, 0x4822c5u); f_00474c9e();
    /* 004822c5: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004822cb: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x4822d0u); f_0045cb85();
    /* 004822d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004822d2: je 0x4822dc */ if (fZ) goto L_004822dc;
L_004822d4:; BB(0x004822d4);
    /* 004822d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004822d7: call 0x482493 */ r_esp -= 4; W32(r_esp, 0x4822dcu); f_00482493();
L_004822dc:; BB(0x004822dc);
    /* 004822dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004822de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004822df: ret  */ FN_RET(0x0048228e); r_esp += 4; return;
}

void f_004822e0(void) /* FUN_004822e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004822e0);
    /* 004822e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004822e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004822e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004822e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004822e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004822ec: call 0x4824c1 */ r_esp -= 4; W32(r_esp, 0x4822f1u); f_004824c1();
    /* 004822f1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004822f4: mov dword ptr [eax + 0x1cbc], 0 */ W32((u32)(r_eax+0x1cbcu), 0x0u);
    /* 004822fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482301: mov dword ptr [ecx + 0x1cb8], 0 */ W32((u32)(r_ecx+0x1cb8u), 0x0u);
    /* 0048230b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048230e: call 0x4824e4 */ r_esp -= 4; W32(r_esp, 0x482313u); f_004824e4();
    /* 00482313: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048231a: jmp 0x482325 */ goto L_00482325;
L_0048231c:; BB(0x0048231c);
    /* 0048231c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048231f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00482322: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00482325:; BB(0x00482325);
    /* 00482325: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482329: jge 0x482352 */ if ((fS==fO)) goto L_00482352;
L_0048232b:; BB(0x0048232b);
    /* 0048232b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048232e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048232f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00482335: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x48233au); f_0045c419();
    /* 0048233a: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0048233d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048233f: jne 0x482350 */ if (!fZ) goto L_00482350;
L_00482341:; BB(0x00482341);
    /* 00482341: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482344: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482345: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048234b: call 0x45e320 */ r_esp -= 4; W32(r_esp, 0x482350u); f_0045e320();
L_00482350:; BB(0x00482350);
    /* 00482350: jmp 0x48231c */ goto L_0048231c;
L_00482352:; BB(0x00482352);
    /* 00482352: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482355: call 0x48235e */ r_esp -= 4; W32(r_esp, 0x48235au); f_0048235e();
    /* 0048235a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048235c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048235d: ret  */ FN_RET(0x004822e0); r_esp += 4; return;
}

void f_0048235e(void) /* FUN_0048235e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048235e);
    /* 0048235e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048235f: mov ebp, esp */ r_ebp = r_esp;
    /* 00482361: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482362: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00482363: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482366: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048236c: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x482371u); f_005d9e23();
    /* 00482371: mov esi, eax */ r_esi = r_eax;
    /* 00482373: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00482379: call 0x460011 */ r_esp -= 4; W32(r_esp, 0x48237eu); f_00460011();
    /* 0048237e: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00482381: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482387: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00482389: mov dword ptr [0x676aa8], esi */ W32((u32)(0x676aa8u), r_esi);
    /* 0048238f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00482390: mov esp, ebp */ r_esp = r_ebp;
    /* 00482392: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482393: ret  */ FN_RET(0x0048235e); r_esp += 4; return;
}

void f_00482394(void) /* FUN_00482394 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482394);
    /* 00482394: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482395: mov ebp, esp */ r_ebp = r_esp;
    /* 00482397: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482398: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048239b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048239e: cmp dword ptr [eax + 0x1cbc], 0 */ {  u32 a = R32((u32)(r_eax+0x1cbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004823a5: je 0x4823de */ if (fZ) goto L_004823de;
L_004823a7:; BB(0x004823a7);
    /* 004823a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004823aa: mov ecx, dword ptr [ecx + 0x1cb4] */ r_ecx = R32((u32)(r_ecx+0x1cb4u));
    /* 004823b0: call 0x474da3 */ r_esp -= 4; W32(r_esp, 0x4823b5u); f_00474da3();
    /* 004823b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004823b8: call 0x48235e */ r_esp -= 4; W32(r_esp, 0x4823bdu); f_0048235e();
    /* 004823bd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004823c0: mov ecx, dword ptr [edx + 0x1cb4] */ r_ecx = R32((u32)(r_edx+0x1cb4u));
    /* 004823c6: call 0x474966 */ r_esp -= 4; W32(r_esp, 0x4823cbu); f_00474966();
    /* 004823cb: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004823d1: call 0x45e00f */ r_esp -= 4; W32(r_esp, 0x4823d6u); f_0045e00f();
    /* 004823d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004823d9: call 0x4822e0 */ r_esp -= 4; W32(r_esp, 0x4823deu); f_004822e0();
L_004823de:; BB(0x004823de);
    /* 004823de: mov esp, ebp */ r_esp = r_ebp;
    /* 004823e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004823e1: ret  */ FN_RET(0x00482394); r_esp += 4; return;
}

void f_004823e2(void) /* FUN_004823e2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004823e2);
    /* 004823e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004823e3: mov ebp, esp */ r_ebp = r_esp;
    /* 004823e5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004823e8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004823eb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004823ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004823ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004823f2: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x4823f7u); f_005e626d();
    /* 004823f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004823fa: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 004823fd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00482400: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482404: je 0x482408 */ if (fZ) goto L_00482408;
L_00482406:; BB(0x00482406);
    /* 00482406: jmp 0x482420 */ goto L_00482420;
L_00482408:; BB(0x00482408);
    /* 00482408: mov ecx, dword ptr [0x6f6b04] */ r_ecx = R32((u32)(0x6f6b04u));
    /* 0048240e: call 0x482182 */ r_esp -= 4; W32(r_esp, 0x482413u); f_00482182();
    /* 00482413: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00482415: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482418: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048241a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048241d: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x482420u); call_ind(t); }
L_00482420:; BB(0x00482420);
    /* 00482420: mov esp, ebp */ r_esp = r_ebp;
    /* 00482422: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482423: ret 4 */ FN_RET(0x004823e2); r_esp += 8; return;
}

void f_00482426(void) /* FUN_00482426 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482426);
    /* 00482426: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482427: mov ebp, esp */ r_ebp = r_esp;
    /* 00482429: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048242a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048242d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482430: call 0x423e2f */ r_esp -= 4; W32(r_esp, 0x482435u); f_00423e2f();
    /* 00482435: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482438: call 0x48246e */ r_esp -= 4; W32(r_esp, 0x48243du); f_0048246e();
    /* 0048243d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482440: cmp dword ptr [eax + 0x1cbc], 0 */ {  u32 a = R32((u32)(r_eax+0x1cbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482447: je 0x482462 */ if (fZ) goto L_00482462;
L_00482449:; BB(0x00482449);
    /* 00482449: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048244f: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x482454u); f_0045cb85();
    /* 00482454: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482456: je 0x482462 */ if (fZ) goto L_00482462;
L_00482458:; BB(0x00482458);
    /* 00482458: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048245b: call 0x482493 */ r_esp -= 4; W32(r_esp, 0x482460u); f_00482493();
    /* 00482460: jmp 0x48246a */ goto L_0048246a;
L_00482462:; BB(0x00482462);
    /* 00482462: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482465: call 0x4824c1 */ r_esp -= 4; W32(r_esp, 0x48246au); f_004824c1();
L_0048246a:; BB(0x0048246a);
    /* 0048246a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048246c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048246d: ret  */ FN_RET(0x00482426); r_esp += 4; return;
}

void f_0048246e(void) /* FUN_0048246e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048246e);
    /* 0048246e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048246f: mov ebp, esp */ r_ebp = r_esp;
    /* 00482471: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482472: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482475: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482478: cmp dword ptr [eax + 0x1cb4], 0 */ {  u32 a = R32((u32)(r_eax+0x1cb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048247f: je 0x48248f */ if (fZ) goto L_0048248f;
L_00482481:; BB(0x00482481);
    /* 00482481: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482484: mov ecx, dword ptr [ecx + 0x1cb4] */ r_ecx = R32((u32)(r_ecx+0x1cb4u));
    /* 0048248a: call 0x474e81 */ r_esp -= 4; W32(r_esp, 0x48248fu); f_00474e81();
L_0048248f:; BB(0x0048248f);
    /* 0048248f: mov esp, ebp */ r_esp = r_ebp;
    /* 00482491: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482492: ret  */ FN_RET(0x0048246e); r_esp += 4; return;
}

void f_00482493(void) /* FUN_00482493 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482493);
    /* 00482493: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482494: mov ebp, esp */ r_ebp = r_esp;
    /* 00482496: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482497: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048249a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048249c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048249f: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 004824a2: call 0x5e84f9 */ r_esp -= 4; W32(r_esp, 0x4824a7u); f_005e84f9();
    /* 004824a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004824a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004824ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004824ad: push 0x18a99 */ { u32 v = 0x18a99u; r_esp -= 4; W32(r_esp, v); }
    /* 004824b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004824b5: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 004824b8: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4824bdu); f_005e8389();
    /* 004824bd: mov esp, ebp */ r_esp = r_ebp;
    /* 004824bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004824c0: ret  */ FN_RET(0x00482493); r_esp += 4; return;
}

void f_004824c1(void) /* FUN_004824c1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004824c1);
    /* 004824c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004824c2: mov ebp, esp */ r_ebp = r_esp;
    /* 004824c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004824c5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004824c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004824ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004824cd: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 004824d0: call 0x5e84f9 */ r_esp -= 4; W32(r_esp, 0x4824d5u); f_005e84f9();
    /* 004824d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004824d8: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 004824db: call 0x5e84af */ r_esp -= 4; W32(r_esp, 0x4824e0u); f_005e84af();
    /* 004824e0: mov esp, ebp */ r_esp = r_ebp;
    /* 004824e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004824e3: ret  */ FN_RET(0x004824c1); r_esp += 4; return;
}

void f_004824e4(void) /* FUN_004824e4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004824e4);
    /* 004824e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004824e5: mov ebp, esp */ r_ebp = r_esp;
    /* 004824e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004824e8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004824eb: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 004824ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004824f0: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 004824f3: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x4824f8u); f_00443fda();
    /* 004824f8: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 004824fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004824fd: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 00482500: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x482505u); f_00443fda();
    /* 00482505: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 0048250a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048250d: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00482510: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x482515u); f_00443fda();
    /* 00482515: mov esp, ebp */ r_esp = r_ebp;
    /* 00482517: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482518: ret  */ FN_RET(0x004824e4); r_esp += 4; return;
}

void f_00482519(void) /* FUN_00482519 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482519);
    /* 00482519: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048251a: mov ebp, esp */ r_ebp = r_esp;
    /* 0048251c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048251d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482520: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00482522: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482525: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00482528: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x48252du); f_00444067();
    /* 0048252d: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0048252f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482532: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 00482535: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x48253au); f_00444067();
    /* 0048253a: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 0048253f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482542: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00482545: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x48254au); f_00444067();
    /* 0048254a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048254c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048254d: ret  */ FN_RET(0x00482519); r_esp += 4; return;
}

void f_00482550(void) /* FUN_00482550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482550);
    /* 00482550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482551: mov ebp, esp */ r_ebp = r_esp;
    /* 00482553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482557: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048255a: call 0x481f43 */ r_esp -= 4; W32(r_esp, 0x48255fu); f_00481f43();
    /* 0048255f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00482562: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00482565: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482567: je 0x482575 */ if (fZ) goto L_00482575;
L_00482569:; BB(0x00482569);
    /* 00482569: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048256c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048256d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x482572u); f_0048ac1b();
    /* 00482572: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00482575:; BB(0x00482575);
    /* 00482575: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482578: mov esp, ebp */ r_esp = r_ebp;
    /* 0048257a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048257b: ret 4 */ FN_RET(0x00482550); r_esp += 8; return;
}

void f_00482580(void) /* FUN_00482580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482580);
    /* 00482580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482581: mov ebp, esp */ r_ebp = r_esp;
    /* 00482583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482587: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048258a: call 0x48e320 */ r_esp -= 4; W32(r_esp, 0x48258fu); f_0048e320();
    /* 0048258f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482592: mov dword ptr [eax], 0x6369cc */ W32((u32)(r_eax), 0x6369ccu);
    /* 00482598: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048259b: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 004825a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004825a5: mov dword ptr [edx + 0x10], 0xa */ W32((u32)(r_edx+0x10u), 0xau);
    /* 004825ac: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004825ae: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4825b3u); f_0048ab58();
    /* 004825b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004825b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004825b9: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 004825bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004825bf: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 004825c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004825c9: mov esp, ebp */ r_esp = r_ebp;
    /* 004825cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004825cc: ret  */ FN_RET(0x00482580); r_esp += 4; return;
}

void f_004825cd(void) /* FUN_004825cd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004825cd);
    /* 004825cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004825ce: mov ebp, esp */ r_ebp = r_esp;
    /* 004825d0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004825d3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004825d6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004825d9: mov dword ptr [eax], 0x6369cc */ W32((u32)(r_eax), 0x6369ccu);
    /* 004825df: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004825e2: call 0x4829b6 */ r_esp -= 4; W32(r_esp, 0x4825e7u); f_004829b6();
    /* 004825e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004825ea: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004825ee: je 0x482605 */ if (fZ) goto L_00482605;
L_004825f0:; BB(0x004825f0);
    /* 004825f0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004825f3: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004825f6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004825f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004825fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004825fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x482602u); f_0048ac1b();
    /* 00482602: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00482605:; BB(0x00482605);
    /* 00482605: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482608: call 0x48e361 */ r_esp -= 4; W32(r_esp, 0x48260du); f_0048e361();
    /* 0048260d: mov esp, ebp */ r_esp = r_ebp;
    /* 0048260f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482610: ret  */ FN_RET(0x004825cd); r_esp += 4; return;
}

void f_00482611(void) /* FUN_00482611 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482611);
    /* 00482611: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482612: mov ebp, esp */ r_ebp = r_esp;
    /* 00482614: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482617: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0048261a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048261d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00482620: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00482623: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482626: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00482629: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0048262c: lea ecx, [eax*4 + 0x28] */ r_ecx = (u32)(r_eax*4+0x28u);
    /* 00482633: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00482636: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482639: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048263a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48263fu); f_0048ab58();
    /* 0048263f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00482642: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00482645: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482649: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048264b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048264e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048264f: call 0x624170 */ r_esp -= 4; W32(r_esp, 0x482654u); f_00624170();
    /* 00482654: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00482657: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048265a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048265b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048265e: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00482661: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482662: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482665: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482666: call 0x625050 */ r_esp -= 4; W32(r_esp, 0x48266bu); f_00625050();
    /* 0048266b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048266e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00482671: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00482674: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00482677: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048267a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048267b: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x482680u); f_0048ac1b();
    /* 00482680: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00482683: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00482686: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482689: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0048268c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048268f: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00482692: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00482695: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00482698: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0048269b: mov esp, ebp */ r_esp = r_ebp;
    /* 0048269d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048269e: ret  */ FN_RET(0x00482611); r_esp += 4; return;
}

void f_0048269f(void) /* FUN_0048269f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048269f);
    /* 0048269f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004826a0: mov ebp, esp */ r_ebp = r_esp;
    /* 004826a2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004826a5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004826a8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004826ab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004826ae: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004826b1: cmp edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004826b4: jne 0x4826be */ if (!fZ) goto L_004826be;
L_004826b6:; BB(0x004826b6);
    /* 004826b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004826b9: call 0x482611 */ r_esp -= 4; W32(r_esp, 0x4826beu); f_00482611();
L_004826be:; BB(0x004826be);
    /* 004826be: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004826c1: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004826c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004826c7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004826ca: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004826cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004826d0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004826d3: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 004826d6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004826d9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004826dc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004826df: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004826e2: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 004826e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004826e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004826e8: ret 4 */ FN_RET(0x0048269f); r_esp += 8; return;
}

void f_004826eb(void) /* FUN_004826eb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004826eb);
    /* 004826eb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004826ec: mov ebp, esp */ r_ebp = r_esp;
    /* 004826ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004826ef: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004826f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004826f4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004826f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004826f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004826fb: call 0x482756 */ r_esp -= 4; W32(r_esp, 0x482700u); f_00482756();
    /* 00482700: mov esp, ebp */ r_esp = r_ebp;
    /* 00482702: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482703: ret 4 */ FN_RET(0x004826eb); r_esp += 8; return;
}

void f_00482706(void) /* FUN_00482706 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482706);
    /* 00482706: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482707: mov ebp, esp */ r_ebp = r_esp;
    /* 00482709: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048270c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048270f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482712: call 0x482898 */ r_esp -= 4; W32(r_esp, 0x482717u); f_00482898();
    /* 00482717: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048271a:; BB(0x0048271a);
    /* 0048271a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048271e: je 0x482735 */ if (fZ) goto L_00482735;
L_00482720:; BB(0x00482720);
    /* 00482720: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00482723: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482726: je 0x482735 */ if (fZ) goto L_00482735;
L_00482728:; BB(0x00482728);
    /* 00482728: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048272b: call 0x482935 */ r_esp -= 4; W32(r_esp, 0x482730u); f_00482935();
    /* 00482730: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00482733: jmp 0x48271a */ goto L_0048271a;
L_00482735:; BB(0x00482735);
    /* 00482735: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482738: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048273b: jne 0x482750 */ if (!fZ) goto L_00482750;
L_0048273d:; BB(0x0048273d);
    /* 0048273d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482740: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00482743: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482744: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00482747: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482748: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048274b: call 0x482756 */ r_esp -= 4; W32(r_esp, 0x482750u); f_00482756();
L_00482750:; BB(0x00482750);
    /* 00482750: mov esp, ebp */ r_esp = r_ebp;
    /* 00482752: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482753: ret 8 */ FN_RET(0x00482706); r_esp += 12; return;
}

void f_00482756(void) /* FUN_00482756 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482756);
    /* 00482756: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482757: mov ebp, esp */ r_ebp = r_esp;
    /* 00482759: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048275c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048275d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00482760: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482763: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482766: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00482769: cmp edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048276c: jne 0x482776 */ if (!fZ) goto L_00482776;
L_0048276e:; BB(0x0048276e);
    /* 0048276e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482771: call 0x482611 */ r_esp -= 4; W32(r_esp, 0x482776u); f_00482611();
L_00482776:; BB(0x00482776);
    /* 00482776: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482779: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0048277c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048277f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482782: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00482785: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00482788: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048278b: jmp 0x482796 */ goto L_00482796;
L_0048278d:; BB(0x0048278d);
    /* 0048278d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482790: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00482793: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00482796:; BB(0x00482796);
    /* 00482796: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482799: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048279c: jl 0x4827b3 */ if ((fS!=fO)) goto L_004827b3;
L_0048279e:; BB(0x0048279e);
    /* 0048279e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004827a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004827a4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004827a7: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004827aa: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 004827ad: mov dword ptr [ecx + eax*4 + 4], edx */ W32((u32)(r_ecx+r_eax*4+0x4u), r_edx);
    /* 004827b1: jmp 0x48278d */ goto L_0048278d;
L_004827b3:; BB(0x004827b3);
    /* 004827b3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004827b6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004827b9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004827bc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004827bf: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 004827c2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004827c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004827c8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004827cb: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 004827ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004827cf: mov esp, ebp */ r_esp = r_ebp;
    /* 004827d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004827d2: ret 8 */ FN_RET(0x00482756); r_esp += 12; return;
}

void f_004827d5(void) /* FUN_004827d5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004827d5);
    /* 004827d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004827d6: mov ebp, esp */ r_ebp = r_esp;
    /* 004827d8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004827db: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004827de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004827e1: call 0x482898 */ r_esp -= 4; W32(r_esp, 0x4827e6u); f_00482898();
    /* 004827e6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004827e9:; BB(0x004827e9);
    /* 004827e9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004827ed: je 0x482804 */ if (fZ) goto L_00482804;
L_004827ef:; BB(0x004827ef);
    /* 004827ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004827f2: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004827f5: je 0x482804 */ if (fZ) goto L_00482804;
L_004827f7:; BB(0x004827f7);
    /* 004827f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004827fa: call 0x482935 */ r_esp -= 4; W32(r_esp, 0x4827ffu); f_00482935();
    /* 004827ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00482802: jmp 0x4827e9 */ goto L_004827e9;
L_00482804:; BB(0x00482804);
    /* 00482804: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482807: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048280a: jne 0x48281e */ if (!fZ) goto L_0048281e;
L_0048280c:; BB(0x0048280c);
    /* 0048280c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048280f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00482812: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00482815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482816: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482819: call 0x482824 */ r_esp -= 4; W32(r_esp, 0x48281eu); f_00482824();
L_0048281e:; BB(0x0048281e);
    /* 0048281e: mov esp, ebp */ r_esp = r_ebp;
    /* 00482820: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482821: ret 4 */ FN_RET(0x004827d5); r_esp += 8; return;
}

void f_00482824(void) /* FUN_00482824 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482824);
    /* 00482824: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482825: mov ebp, esp */ r_ebp = r_esp;
    /* 00482827: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048282a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048282b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048282e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482831: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482835: je 0x482891 */ if (fZ) goto L_00482891;
L_00482837:; BB(0x00482837);
    /* 00482837: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048283b: jl 0x482891 */ if ((fS!=fO)) goto L_00482891;
L_0048283d:; BB(0x0048283d);
    /* 0048283d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482840: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00482843: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482846: jge 0x482891 */ if ((fS==fO)) goto L_00482891;
L_00482848:; BB(0x00482848);
    /* 00482848: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048284b: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0048284e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482851: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482854: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00482857: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048285a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048285d: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00482860: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00482863: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00482866: jmp 0x482871 */ goto L_00482871;
L_00482868:; BB(0x00482868);
    /* 00482868: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048286b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048286e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00482871:; BB(0x00482871);
    /* 00482871: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482874: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482877: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048287a: jge 0x482891 */ if ((fS==fO)) goto L_00482891;
L_0048287c:; BB(0x0048287c);
    /* 0048287c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048287f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482882: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482885: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482888: mov edx, dword ptr [esi + edx*4 + 4] */ r_edx = R32((u32)(r_esi+r_edx*4+0x4u));
    /* 0048288c: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 0048288f: jmp 0x482868 */ goto L_00482868;
L_00482891:; BB(0x00482891);
    /* 00482891: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00482892: mov esp, ebp */ r_esp = r_ebp;
    /* 00482894: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482895: ret 4 */ FN_RET(0x00482824); r_esp += 8; return;
}

void f_00482898(void) /* FUN_00482898 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482898);
    /* 00482898: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482899: mov ebp, esp */ r_ebp = r_esp;
    /* 0048289b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048289c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048289f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004828a2: mov dword ptr [eax + 0x14], 1 */ W32((u32)(r_eax+0x14u), 0x1u);
    /* 004828a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004828ac: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 004828b3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004828b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004828b9: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004828bc: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004828bf: jg 0x4828d7 */ if ((!fZ&&fS==fO)) goto L_004828d7;
L_004828c1:; BB(0x004828c1);
    /* 004828c1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004828c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004828c7: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004828ca: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004828cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004828d0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004828d3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004828d5: jmp 0x4828e3 */ goto L_004828e3;
L_004828d7:; BB(0x004828d7);
    /* 004828d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004828da: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 004828e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004828e3:; BB(0x004828e3);
    /* 004828e3: mov esp, ebp */ r_esp = r_ebp;
    /* 004828e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004828e6: ret  */ FN_RET(0x00482898); r_esp += 4; return;
}

void f_004828e7(void) /* FUN_004828e7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004828e7);
    /* 004828e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004828e8: mov ebp, esp */ r_ebp = r_esp;
    /* 004828ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004828eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004828ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004828f1: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004828f5: jle 0x482925 */ if ((fZ||fS!=fO)) goto L_00482925;
L_004828f7:; BB(0x004828f7);
    /* 004828f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004828fa: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004828fd: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00482900: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482903: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00482906: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482909: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0048290c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048290f: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00482912: lea edx, [ecx + edx*4] */ r_edx = (u32)(r_ecx+r_edx*4);
    /* 00482915: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482918: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0048291b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048291e: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00482921: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00482923: jmp 0x482931 */ goto L_00482931;
L_00482925:; BB(0x00482925);
    /* 00482925: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482928: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 0048292f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00482931:; BB(0x00482931);
    /* 00482931: mov esp, ebp */ r_esp = r_ebp;
    /* 00482933: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482934: ret  */ FN_RET(0x004828e7); r_esp += 4; return;
}

void f_00482935(void) /* FUN_00482935 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482935);
    /* 00482935: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482936: mov ebp, esp */ r_ebp = r_esp;
    /* 00482938: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482939: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048293c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048293f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482942: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00482945: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482948: jge 0x482972 */ if ((fS==fO)) goto L_00482972;
L_0048294a:; BB(0x0048294a);
    /* 0048294a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048294d: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00482950: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00482953: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482956: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 00482959: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048295c: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0048295f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00482962: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482965: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00482968: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048296b: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0048296e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00482970: jmp 0x482974 */ goto L_00482974;
L_00482972:; BB(0x00482972);
    /* 00482972: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00482974:; BB(0x00482974);
    /* 00482974: mov esp, ebp */ r_esp = r_ebp;
    /* 00482976: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482977: ret  */ FN_RET(0x00482935); r_esp += 4; return;
}

void f_00482978(void) /* FUN_00482978 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482978);
    /* 00482978: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482979: mov ebp, esp */ r_ebp = r_esp;
    /* 0048297b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048297c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048297f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482982: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482986: jle 0x4829b0 */ if ((fZ||fS!=fO)) goto L_004829b0;
L_00482988:; BB(0x00482988);
    /* 00482988: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048298b: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0048298e: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00482991: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482994: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00482997: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048299a: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0048299d: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004829a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004829a3: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004829a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004829a9: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004829ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004829ae: jmp 0x4829b2 */ goto L_004829b2;
L_004829b0:; BB(0x004829b0);
    /* 004829b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004829b2:; BB(0x004829b2);
    /* 004829b2: mov esp, ebp */ r_esp = r_ebp;
    /* 004829b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004829b5: ret  */ FN_RET(0x00482978); r_esp += 4; return;
}

void f_004829b6(void) /* FUN_004829b6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004829b6);
    /* 004829b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004829b7: mov ebp, esp */ r_ebp = r_esp;
    /* 004829b9: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004829bc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004829bf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004829c2: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004829c5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004829c8:; BB(0x004829c8);
    /* 004829c8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004829cb: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004829cf: je 0x482a15 */ if (fZ) goto L_00482a15;
L_004829d1:; BB(0x004829d1);
    /* 004829d1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004829d4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004829d7: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004829da: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004829dd: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 004829e0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004829e3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004829e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004829e9: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 004829ec: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004829ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004829f2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004829f5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004829f9: je 0x482a0c */ if (fZ) goto L_00482a0c;
L_004829fb:; BB(0x004829fb);
    /* 004829fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004829fd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482a00: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00482a02: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482a05: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x482a07u); call_ind(t); }
    /* 00482a07: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00482a0a: jmp 0x482a13 */ goto L_00482a13;
L_00482a0c:; BB(0x00482a0c);
    /* 00482a0c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00482a13:; BB(0x00482a13);
    /* 00482a13: jmp 0x4829c8 */ goto L_004829c8;
L_00482a15:; BB(0x00482a15);
    /* 00482a15: mov esp, ebp */ r_esp = r_ebp;
    /* 00482a17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482a18: ret  */ FN_RET(0x004829b6); r_esp += 4; return;
}

void f_00482a19(void) /* FUN_00482a19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482a19);
    /* 00482a19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482a1a: mov ebp, esp */ r_ebp = r_esp;
    /* 00482a1c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482a1f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00482a22: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482a25: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00482a28: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482a2b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482a2e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00482a31: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482a34: jge 0x482a44 */ if ((fS==fO)) goto L_00482a44;
L_00482a36:; BB(0x00482a36);
    /* 00482a36: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00482a39: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482a3c: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 00482a3f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00482a42: jmp 0x482a4b */ goto L_00482a4b;
L_00482a44:; BB(0x00482a44);
    /* 00482a44: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00482a4b:; BB(0x00482a4b);
    /* 00482a4b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482a4e: mov esp, ebp */ r_esp = r_ebp;
    /* 00482a50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482a51: ret 4 */ FN_RET(0x00482a19); r_esp += 8; return;
}

void f_00482a54(void) /* FUN_00482a54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482a54);
    /* 00482a54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482a55: mov ebp, esp */ r_ebp = r_esp;
    /* 00482a57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482a58: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482a5b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00482a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482a5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482a62: call 0x4827d5 */ r_esp -= 4; W32(r_esp, 0x482a67u); f_004827d5();
    /* 00482a67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00482a69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00482a6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482a6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482a70: call 0x482756 */ r_esp -= 4; W32(r_esp, 0x482a75u); f_00482756();
    /* 00482a75: mov esp, ebp */ r_esp = r_ebp;
    /* 00482a77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482a78: ret 4 */ FN_RET(0x00482a54); r_esp += 8; return;
}

void f_00482a80(void) /* FUN_00482a80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482a80);
    /* 00482a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00482a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482a87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482a8a: call 0x4825cd */ r_esp -= 4; W32(r_esp, 0x482a8fu); f_004825cd();
    /* 00482a8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00482a92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00482a95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482a97: je 0x482aa5 */ if (fZ) goto L_00482aa5;
L_00482a99:; BB(0x00482a99);
    /* 00482a99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482a9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482a9d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x482aa2u); f_0048ac1b();
    /* 00482aa2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00482aa5:; BB(0x00482aa5);
    /* 00482aa5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482aa8: mov esp, ebp */ r_esp = r_ebp;
    /* 00482aaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482aab: ret 4 */ FN_RET(0x00482a80); r_esp += 8; return;
}

void f_00482ab0(void) /* FUN_00482ab0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482ab0);
    /* 00482ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00482ab3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482ab6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00482ab9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00482abc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482abd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00482ac0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482ac1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482ac4: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x482ac9u); f_005d80f0();
    /* 00482ac9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482acc: mov dword ptr [edx], 0x6369d4 */ W32((u32)(r_edx), 0x6369d4u);
    /* 00482ad2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482ad9: jmp 0x482ae4 */ goto L_00482ae4;
L_00482adb:; BB(0x00482adb);
    /* 00482adb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482ade: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00482ae1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00482ae4:; BB(0x00482ae4);
    /* 00482ae4: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482ae8: jge 0x482afd */ if ((fS==fO)) goto L_00482afd;
L_00482aea:; BB(0x00482aea);
    /* 00482aea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482aed: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482af0: mov dword ptr [edx + ecx*4 + 0xa4], 0 */ W32((u32)(r_edx+r_ecx*4+0xa4u), 0x0u);
    /* 00482afb: jmp 0x482adb */ goto L_00482adb;
L_00482afd:; BB(0x00482afd);
    /* 00482afd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482b04: jmp 0x482b0f */ goto L_00482b0f;
L_00482b06:; BB(0x00482b06);
    /* 00482b06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482b09: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00482b0c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00482b0f:; BB(0x00482b0f);
    /* 00482b0f: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482b13: jge 0x482b28 */ if ((fS==fO)) goto L_00482b28;
L_00482b15:; BB(0x00482b15);
    /* 00482b15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482b18: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482b1b: mov dword ptr [edx + ecx*4 + 0x98], 0 */ W32((u32)(r_edx+r_ecx*4+0x98u), 0x0u);
    /* 00482b26: jmp 0x482b06 */ goto L_00482b06;
L_00482b28:; BB(0x00482b28);
    /* 00482b28: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482b2b: mov dword ptr [eax + 0x100], 0 */ W32((u32)(r_eax+0x100u), 0x0u);
    /* 00482b35: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482b3c: jmp 0x482b47 */ goto L_00482b47;
L_00482b3e:; BB(0x00482b3e);
    /* 00482b3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482b41: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00482b44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00482b47:; BB(0x00482b47);
    /* 00482b47: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482b4b: jge 0x482b60 */ if ((fS==fO)) goto L_00482b60;
L_00482b4d:; BB(0x00482b4d);
    /* 00482b4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482b50: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482b53: mov dword ptr [eax + edx*4 + 0x104], 0 */ W32((u32)(r_eax+r_edx*4+0x104u), 0x0u);
    /* 00482b5e: jmp 0x482b3e */ goto L_00482b3e;
L_00482b60:; BB(0x00482b60);
    /* 00482b60: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482b63: mov dword ptr [ecx + 0xb8], 0 */ W32((u32)(r_ecx+0xb8u), 0x0u);
    /* 00482b6d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482b70: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
    /* 00482b7a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482b7d: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 00482b87: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482b8a: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
    /* 00482b94: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482b97: mov dword ptr [edx + 0xc4], 0 */ W32((u32)(r_edx+0xc4u), 0x0u);
    /* 00482ba1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482ba4: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
    /* 00482bae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482bb1: mov dword ptr [ecx + 0xf0], 0 */ W32((u32)(r_ecx+0xf0u), 0x0u);
    /* 00482bbb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482bbe: mov dword ptr [edx + 0xf4], 0 */ W32((u32)(r_edx+0xf4u), 0x0u);
    /* 00482bc8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482bcb: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 00482bd5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482bd8: mov dword ptr [ecx + 0xd0], 0 */ W32((u32)(r_ecx+0xd0u), 0x0u);
    /* 00482be2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482be9: jmp 0x482bf4 */ goto L_00482bf4;
L_00482beb:; BB(0x00482beb);
    /* 00482beb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482bee: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00482bf1: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00482bf4:; BB(0x00482bf4);
    /* 00482bf4: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482bf8: jge 0x482c0d */ if ((fS==fO)) goto L_00482c0d;
L_00482bfa:; BB(0x00482bfa);
    /* 00482bfa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482bfd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482c00: mov dword ptr [ecx + eax*4 + 0xd4], 0 */ W32((u32)(r_ecx+r_eax*4+0xd4u), 0x0u);
    /* 00482c0b: jmp 0x482beb */ goto L_00482beb;
L_00482c0d:; BB(0x00482c0d);
    /* 00482c0d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482c10: mov dword ptr [edx + 0xdc], 0 */ W32((u32)(r_edx+0xdcu), 0x0u);
    /* 00482c1a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482c1d: mov dword ptr [eax + 0xe0], 0 */ W32((u32)(r_eax+0xe0u), 0x0u);
    /* 00482c27: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482c2a: mov dword ptr [ecx + 0xe4], 0 */ W32((u32)(r_ecx+0xe4u), 0x0u);
    /* 00482c34: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482c37: mov dword ptr [edx + 0xe8], 0 */ W32((u32)(r_edx+0xe8u), 0x0u);
    /* 00482c41: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482c44: mov dword ptr [eax + 0xec], 0 */ W32((u32)(r_eax+0xecu), 0x0u);
    /* 00482c4e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482c51: mov dword ptr [ecx + 0xf8], 0 */ W32((u32)(r_ecx+0xf8u), 0x0u);
    /* 00482c5b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482c5e: mov dword ptr [edx + 0xfc], 0 */ W32((u32)(r_edx+0xfcu), 0x0u);
    /* 00482c68: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482c6b: mov dword ptr [eax + 0x1d5c], 0 */ W32((u32)(r_eax+0x1d5cu), 0x0u);
    /* 00482c75: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482c78: mov dword ptr [ecx + 0x1d18], 0 */ W32((u32)(r_ecx+0x1d18u), 0x0u);
    /* 00482c82: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482c85: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00482c88: mov dword ptr [edx + 0x1d14], eax */ W32((u32)(r_edx+0x1d14u), r_eax);
    /* 00482c8e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482c91: mov dword ptr [ecx + 0x8c], 1 */ W32((u32)(r_ecx+0x8cu), 0x1u);
    /* 00482c9b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482c9e: mov byte ptr [edx + 0x90], 0 */ W8((u32)(r_edx+0x90u), 0x0u);
    /* 00482ca5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482ca8: mov byte ptr [eax + 0x91], 0 */ W8((u32)(r_eax+0x91u), 0x0u);
    /* 00482caf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482cb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00482cb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482cb5: ret 0xc */ FN_RET(0x00482ab0); r_esp += 16; return;
}

void f_00482cb8(void) /* FUN_00482cb8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482cb8);
    /* 00482cb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482cb9: mov ebp, esp */ r_ebp = r_esp;
    /* 00482cbb: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482cc1: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 00482cc7: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00482ccd: mov dword ptr [eax], 0x6369d4 */ W32((u32)(r_eax), 0x6369d4u);
    /* 00482cd3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00482cd9: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x482cdeu); f_005da3ec();
    /* 00482cde: cmp eax, 0x2328 */ {  u32 a = r_eax; u32 b = 0x2328u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482ce3: jne 0x482cf3 */ if (!fZ) goto L_00482cf3;
L_00482ce5:; BB(0x00482ce5);
    /* 00482ce5: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00482ceb: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00482cee: call 0x5c17cf */ r_esp -= 4; W32(r_esp, 0x482cf3u); f_005c17cf();
L_00482cf3:; BB(0x00482cf3);
    /* 00482cf3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482cfa: jmp 0x482d05 */ goto L_00482d05;
L_00482cfc:; BB(0x00482cfc);
    /* 00482cfc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482cff: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00482d02: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00482d05:; BB(0x00482d05);
    /* 00482d05: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482d09: jge 0x482d71 */ if ((fS==fO)) goto L_00482d71;
L_00482d0b:; BB(0x00482d0b);
    /* 00482d0b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482d0e: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482d14: cmp dword ptr [ecx + eax*4 + 0xa4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482d1c: je 0x482d6f */ if (fZ) goto L_00482d6f;
L_00482d1e:; BB(0x00482d1e);
    /* 00482d1e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482d21: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00482d27: mov ecx, dword ptr [eax + edx*4 + 0xa4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 00482d2e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00482d31: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482d34: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00482d37: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482d3b: je 0x482d51 */ if (fZ) goto L_00482d51;
L_00482d3d:; BB(0x00482d3d);
    /* 00482d3d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482d3f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482d42: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00482d44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482d47: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x482d49u); call_ind(t); }
    /* 00482d49: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00482d4f: jmp 0x482d5b */ goto L_00482d5b;
L_00482d51:; BB(0x00482d51);
    /* 00482d51: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_00482d5b:; BB(0x00482d5b);
    /* 00482d5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482d5e: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482d64: mov dword ptr [ecx + eax*4 + 0xa4], 0 */ W32((u32)(r_ecx+r_eax*4+0xa4u), 0x0u);
L_00482d6f:; BB(0x00482d6f);
    /* 00482d6f: jmp 0x482cfc */ goto L_00482cfc;
L_00482d71:; BB(0x00482d71);
    /* 00482d71: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482d78: jmp 0x482d83 */ goto L_00482d83;
L_00482d7a:; BB(0x00482d7a);
    /* 00482d7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482d7d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00482d80: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00482d83:; BB(0x00482d83);
    /* 00482d83: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482d87: jge 0x482def */ if ((fS==fO)) goto L_00482def;
L_00482d89:; BB(0x00482d89);
    /* 00482d89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482d8c: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482d92: cmp dword ptr [ecx + eax*4 + 0x98], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482d9a: je 0x482ded */ if (fZ) goto L_00482ded;
L_00482d9c:; BB(0x00482d9c);
    /* 00482d9c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482d9f: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00482da5: mov ecx, dword ptr [eax + edx*4 + 0x98] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 00482dac: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00482daf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00482db2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00482db5: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482db9: je 0x482dcf */ if (fZ) goto L_00482dcf;
L_00482dbb:; BB(0x00482dbb);
    /* 00482dbb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482dbd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00482dc0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00482dc2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00482dc5: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x482dc7u); call_ind(t); }
    /* 00482dc7: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00482dcd: jmp 0x482dd9 */ goto L_00482dd9;
L_00482dcf:; BB(0x00482dcf);
    /* 00482dcf: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_00482dd9:; BB(0x00482dd9);
    /* 00482dd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482ddc: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482de2: mov dword ptr [ecx + eax*4 + 0x98], 0 */ W32((u32)(r_ecx+r_eax*4+0x98u), 0x0u);
L_00482ded:; BB(0x00482ded);
    /* 00482ded: jmp 0x482d7a */ goto L_00482d7a;
L_00482def:; BB(0x00482def);
    /* 00482def: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482df5: cmp dword ptr [edx + 0x100], 0 */ {  u32 a = R32((u32)(r_edx+0x100u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482dfc: je 0x482e47 */ if (fZ) goto L_00482e47;
L_00482dfe:; BB(0x00482dfe);
    /* 00482dfe: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00482e04: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 00482e0a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00482e0d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00482e10: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00482e13: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482e17: je 0x482e2d */ if (fZ) goto L_00482e2d;
L_00482e19:; BB(0x00482e19);
    /* 00482e19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482e1b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00482e1e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00482e20: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00482e23: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x482e25u); call_ind(t); }
    /* 00482e25: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00482e2b: jmp 0x482e37 */ goto L_00482e37;
L_00482e2d:; BB(0x00482e2d);
    /* 00482e2d: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_00482e37:; BB(0x00482e37);
    /* 00482e37: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00482e3d: mov dword ptr [eax + 0x100], 0 */ W32((u32)(r_eax+0x100u), 0x0u);
L_00482e47:; BB(0x00482e47);
    /* 00482e47: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482e4e: jmp 0x482e59 */ goto L_00482e59;
L_00482e50:; BB(0x00482e50);
    /* 00482e50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482e53: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00482e56: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00482e59:; BB(0x00482e59);
    /* 00482e59: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482e5d: jge 0x482ec5 */ if ((fS==fO)) goto L_00482ec5;
L_00482e5f:; BB(0x00482e5f);
    /* 00482e5f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482e62: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00482e68: cmp dword ptr [eax + edx*4 + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482e70: je 0x482ec3 */ if (fZ) goto L_00482ec3;
L_00482e72:; BB(0x00482e72);
    /* 00482e72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482e75: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482e7b: mov eax, dword ptr [edx + ecx*4 + 0x104] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x104u));
    /* 00482e82: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00482e85: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00482e88: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00482e8b: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482e8f: je 0x482ea5 */ if (fZ) goto L_00482ea5;
L_00482e91:; BB(0x00482e91);
    /* 00482e91: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482e93: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00482e96: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00482e98: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00482e9b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x482e9du); call_ind(t); }
    /* 00482e9d: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00482ea3: jmp 0x482eaf */ goto L_00482eaf;
L_00482ea5:; BB(0x00482ea5);
    /* 00482ea5: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_00482eaf:; BB(0x00482eaf);
    /* 00482eaf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482eb2: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482eb8: mov dword ptr [edx + ecx*4 + 0x104], 0 */ W32((u32)(r_edx+r_ecx*4+0x104u), 0x0u);
L_00482ec3:; BB(0x00482ec3);
    /* 00482ec3: jmp 0x482e50 */ goto L_00482e50;
L_00482ec5:; BB(0x00482ec5);
    /* 00482ec5: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00482ecb: cmp dword ptr [eax + 0xb8], 0 */ {  u32 a = R32((u32)(r_eax+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482ed2: je 0x482f1d */ if (fZ) goto L_00482f1d;
L_00482ed4:; BB(0x00482ed4);
    /* 00482ed4: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482eda: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 00482ee0: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00482ee3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00482ee6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00482ee9: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482eed: je 0x482f03 */ if (fZ) goto L_00482f03;
L_00482eef:; BB(0x00482eef);
    /* 00482eef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482ef1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00482ef4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00482ef6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00482ef9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x482efbu); call_ind(t); }
    /* 00482efb: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00482f01: jmp 0x482f0d */ goto L_00482f0d;
L_00482f03:; BB(0x00482f03);
    /* 00482f03: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_00482f0d:; BB(0x00482f0d);
    /* 00482f0d: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00482f13: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
L_00482f1d:; BB(0x00482f1d);
    /* 00482f1d: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482f23: cmp dword ptr [ecx + 0xbc], 0 */ {  u32 a = R32((u32)(r_ecx+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482f2a: je 0x482f75 */ if (fZ) goto L_00482f75;
L_00482f2c:; BB(0x00482f2c);
    /* 00482f2c: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482f32: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00482f38: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00482f3b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00482f3e: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00482f41: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482f45: je 0x482f5b */ if (fZ) goto L_00482f5b;
L_00482f47:; BB(0x00482f47);
    /* 00482f47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482f49: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00482f4c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00482f4e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00482f51: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x482f53u); call_ind(t); }
    /* 00482f53: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00482f59: jmp 0x482f65 */ goto L_00482f65;
L_00482f5b:; BB(0x00482f5b);
    /* 00482f5b: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_00482f65:; BB(0x00482f65);
    /* 00482f65: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482f6b: mov dword ptr [ecx + 0xbc], 0 */ W32((u32)(r_ecx+0xbcu), 0x0u);
L_00482f75:; BB(0x00482f75);
    /* 00482f75: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482f7b: cmp dword ptr [edx + 0xc0], 0 */ {  u32 a = R32((u32)(r_edx+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482f82: je 0x482fcd */ if (fZ) goto L_00482fcd;
L_00482f84:; BB(0x00482f84);
    /* 00482f84: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00482f8a: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00482f90: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00482f93: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00482f96: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00482f99: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482f9d: je 0x482fb3 */ if (fZ) goto L_00482fb3;
L_00482f9f:; BB(0x00482f9f);
    /* 00482f9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482fa1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00482fa4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00482fa6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00482fa9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x482fabu); call_ind(t); }
    /* 00482fab: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 00482fb1: jmp 0x482fbd */ goto L_00482fbd;
L_00482fb3:; BB(0x00482fb3);
    /* 00482fb3: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_00482fbd:; BB(0x00482fbd);
    /* 00482fbd: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00482fc3: mov dword ptr [eax + 0xc0], 0 */ W32((u32)(r_eax+0xc0u), 0x0u);
L_00482fcd:; BB(0x00482fcd);
    /* 00482fcd: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482fd3: cmp dword ptr [ecx + 0xc4], 0 */ {  u32 a = R32((u32)(r_ecx+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482fda: je 0x483025 */ if (fZ) goto L_00483025;
L_00482fdc:; BB(0x00482fdc);
    /* 00482fdc: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482fe2: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00482fe8: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00482feb: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00482fee: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00482ff1: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482ff5: je 0x48300b */ if (fZ) goto L_0048300b;
L_00482ff7:; BB(0x00482ff7);
    /* 00482ff7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482ff9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00482ffc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00482ffe: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00483001: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x483003u); call_ind(t); }
    /* 00483003: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00483009: jmp 0x483015 */ goto L_00483015;
L_0048300b:; BB(0x0048300b);
    /* 0048300b: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_00483015:; BB(0x00483015);
    /* 00483015: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0048301b: mov dword ptr [ecx + 0xc4], 0 */ W32((u32)(r_ecx+0xc4u), 0x0u);
L_00483025:; BB(0x00483025);
    /* 00483025: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0048302b: cmp dword ptr [edx + 0xc8], 0 */ {  u32 a = R32((u32)(r_edx+0xc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483032: je 0x48307d */ if (fZ) goto L_0048307d;
L_00483034:; BB(0x00483034);
    /* 00483034: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0048303a: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 00483040: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00483043: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00483046: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00483049: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048304d: je 0x483063 */ if (fZ) goto L_00483063;
L_0048304f:; BB(0x0048304f);
    /* 0048304f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483051: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00483054: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483056: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00483059: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48305bu); call_ind(t); }
    /* 0048305b: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00483061: jmp 0x48306d */ goto L_0048306d;
L_00483063:; BB(0x00483063);
    /* 00483063: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_0048306d:; BB(0x0048306d);
    /* 0048306d: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00483073: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
L_0048307d:; BB(0x0048307d);
    /* 0048307d: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483083: cmp dword ptr [ecx + 0xf0], 0 */ {  u32 a = R32((u32)(r_ecx+0xf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048308a: je 0x4830d5 */ if (fZ) goto L_004830d5;
L_0048308c:; BB(0x0048308c);
    /* 0048308c: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483092: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00483098: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0048309b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0048309e: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 004830a1: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004830a5: je 0x4830bb */ if (fZ) goto L_004830bb;
L_004830a7:; BB(0x004830a7);
    /* 004830a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004830a9: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004830ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004830ae: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004830b1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4830b3u); call_ind(t); }
    /* 004830b3: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 004830b9: jmp 0x4830c5 */ goto L_004830c5;
L_004830bb:; BB(0x004830bb);
    /* 004830bb: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_004830c5:; BB(0x004830c5);
    /* 004830c5: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 004830cb: mov dword ptr [ecx + 0xf0], 0 */ W32((u32)(r_ecx+0xf0u), 0x0u);
L_004830d5:; BB(0x004830d5);
    /* 004830d5: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 004830db: cmp dword ptr [edx + 0xf4], 0 */ {  u32 a = R32((u32)(r_edx+0xf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004830e2: je 0x48312d */ if (fZ) goto L_0048312d;
L_004830e4:; BB(0x004830e4);
    /* 004830e4: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 004830ea: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 004830f0: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 004830f3: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004830f6: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 004830f9: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004830fd: je 0x483113 */ if (fZ) goto L_00483113;
L_004830ff:; BB(0x004830ff);
    /* 004830ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483101: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00483104: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483106: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00483109: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48310bu); call_ind(t); }
    /* 0048310b: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00483111: jmp 0x48311d */ goto L_0048311d;
L_00483113:; BB(0x00483113);
    /* 00483113: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_0048311d:; BB(0x0048311d);
    /* 0048311d: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00483123: mov dword ptr [eax + 0xf4], 0 */ W32((u32)(r_eax+0xf4u), 0x0u);
L_0048312d:; BB(0x0048312d);
    /* 0048312d: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483133: cmp dword ptr [ecx + 0xcc], 0 */ {  u32 a = R32((u32)(r_ecx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048313a: je 0x483185 */ if (fZ) goto L_00483185;
L_0048313c:; BB(0x0048313c);
    /* 0048313c: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483142: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00483148: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0048314b: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0048314e: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00483151: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483155: je 0x48316b */ if (fZ) goto L_0048316b;
L_00483157:; BB(0x00483157);
    /* 00483157: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483159: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0048315c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048315e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00483161: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x483163u); call_ind(t); }
    /* 00483163: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00483169: jmp 0x483175 */ goto L_00483175;
L_0048316b:; BB(0x0048316b);
    /* 0048316b: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_00483175:; BB(0x00483175);
    /* 00483175: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0048317b: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
L_00483185:; BB(0x00483185);
    /* 00483185: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0048318b: cmp dword ptr [edx + 0xd0], 0 */ {  u32 a = R32((u32)(r_edx+0xd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483192: je 0x4831dd */ if (fZ) goto L_004831dd;
L_00483194:; BB(0x00483194);
    /* 00483194: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0048319a: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 004831a0: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 004831a3: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004831a6: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 004831a9: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004831ad: je 0x4831c3 */ if (fZ) goto L_004831c3;
L_004831af:; BB(0x004831af);
    /* 004831af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004831b1: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 004831b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004831b6: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004831b9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4831bbu); call_ind(t); }
    /* 004831bb: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 004831c1: jmp 0x4831cd */ goto L_004831cd;
L_004831c3:; BB(0x004831c3);
    /* 004831c3: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_004831cd:; BB(0x004831cd);
    /* 004831cd: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 004831d3: mov dword ptr [eax + 0xd0], 0 */ W32((u32)(r_eax+0xd0u), 0x0u);
L_004831dd:; BB(0x004831dd);
    /* 004831dd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004831e4: jmp 0x4831ef */ goto L_004831ef;
L_004831e6:; BB(0x004831e6);
    /* 004831e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004831e9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004831ec: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004831ef:; BB(0x004831ef);
    /* 004831ef: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004831f3: jge 0x48325b */ if ((fS==fO)) goto L_0048325b;
L_004831f5:; BB(0x004831f5);
    /* 004831f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004831f8: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 004831fe: cmp dword ptr [eax + edx*4 + 0xd4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483206: je 0x483259 */ if (fZ) goto L_00483259;
L_00483208:; BB(0x00483208);
    /* 00483208: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048320b: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483211: mov eax, dword ptr [edx + ecx*4 + 0xd4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xd4u));
    /* 00483218: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0048321b: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0048321e: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00483221: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483225: je 0x48323b */ if (fZ) goto L_0048323b;
L_00483227:; BB(0x00483227);
    /* 00483227: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483229: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0048322c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048322e: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00483231: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x483233u); call_ind(t); }
    /* 00483233: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 00483239: jmp 0x483245 */ goto L_00483245;
L_0048323b:; BB(0x0048323b);
    /* 0048323b: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_00483245:; BB(0x00483245);
    /* 00483245: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00483248: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0048324e: mov dword ptr [edx + ecx*4 + 0xd4], 0 */ W32((u32)(r_edx+r_ecx*4+0xd4u), 0x0u);
L_00483259:; BB(0x00483259);
    /* 00483259: jmp 0x4831e6 */ goto L_004831e6;
L_0048325b:; BB(0x0048325b);
    /* 0048325b: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00483261: cmp dword ptr [eax + 0xdc], 0 */ {  u32 a = R32((u32)(r_eax+0xdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483268: je 0x4832b3 */ if (fZ) goto L_004832b3;
L_0048326a:; BB(0x0048326a);
    /* 0048326a: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483270: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 00483276: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 00483279: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0048327c: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0048327f: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483283: je 0x483299 */ if (fZ) goto L_00483299;
L_00483285:; BB(0x00483285);
    /* 00483285: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483287: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0048328a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048328c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0048328f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x483291u); call_ind(t); }
    /* 00483291: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 00483297: jmp 0x4832a3 */ goto L_004832a3;
L_00483299:; BB(0x00483299);
    /* 00483299: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_004832a3:; BB(0x004832a3);
    /* 004832a3: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 004832a9: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
L_004832b3:; BB(0x004832b3);
    /* 004832b3: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 004832b9: cmp dword ptr [ecx + 0xe0], 0 */ {  u32 a = R32((u32)(r_ecx+0xe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004832c0: je 0x483311 */ if (fZ) goto L_00483311;
L_004832c2:; BB(0x004832c2);
    /* 004832c2: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 004832c8: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 004832ce: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 004832d4: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004832da: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 004832dd: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004832e1: je 0x4832f7 */ if (fZ) goto L_004832f7;
L_004832e3:; BB(0x004832e3);
    /* 004832e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004832e5: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 004832e8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004832ea: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004832ed: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4832efu); call_ind(t); }
    /* 004832ef: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 004832f5: jmp 0x483301 */ goto L_00483301;
L_004832f7:; BB(0x004832f7);
    /* 004832f7: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_00483301:; BB(0x00483301);
    /* 00483301: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483307: mov dword ptr [ecx + 0xe0], 0 */ W32((u32)(r_ecx+0xe0u), 0x0u);
L_00483311:; BB(0x00483311);
    /* 00483311: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483317: cmp dword ptr [edx + 0xe4], 0 */ {  u32 a = R32((u32)(r_edx+0xe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048331e: je 0x48337b */ if (fZ) goto L_0048337b;
L_00483320:; BB(0x00483320);
    /* 00483320: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00483326: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 0048332c: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 00483332: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00483338: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0048333e: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483345: je 0x483361 */ if (fZ) goto L_00483361;
L_00483347:; BB(0x00483347);
    /* 00483347: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483349: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0048334f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483351: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00483357: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x483359u); call_ind(t); }
    /* 00483359: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 0048335f: jmp 0x48336b */ goto L_0048336b;
L_00483361:; BB(0x00483361);
    /* 00483361: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_0048336b:; BB(0x0048336b);
    /* 0048336b: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00483371: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
L_0048337b:; BB(0x0048337b);
    /* 0048337b: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483381: cmp dword ptr [ecx + 0xe8], 0 */ {  u32 a = R32((u32)(r_ecx+0xe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483388: je 0x4833e5 */ if (fZ) goto L_004833e5;
L_0048338a:; BB(0x0048338a);
    /* 0048338a: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483390: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00483396: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0048339c: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 004833a2: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 004833a8: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004833af: je 0x4833cb */ if (fZ) goto L_004833cb;
L_004833b1:; BB(0x004833b1);
    /* 004833b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004833b3: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 004833b9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004833bb: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 004833c1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4833c3u); call_ind(t); }
    /* 004833c3: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 004833c9: jmp 0x4833d5 */ goto L_004833d5;
L_004833cb:; BB(0x004833cb);
    /* 004833cb: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_004833d5:; BB(0x004833d5);
    /* 004833d5: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 004833db: mov dword ptr [ecx + 0xe8], 0 */ W32((u32)(r_ecx+0xe8u), 0x0u);
L_004833e5:; BB(0x004833e5);
    /* 004833e5: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 004833eb: cmp dword ptr [edx + 0xec], 0 */ {  u32 a = R32((u32)(r_edx+0xecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004833f2: je 0x48344f */ if (fZ) goto L_0048344f;
L_004833f4:; BB(0x004833f4);
    /* 004833f4: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 004833fa: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00483400: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 00483406: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0048340c: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 00483412: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483419: je 0x483435 */ if (fZ) goto L_00483435;
L_0048341b:; BB(0x0048341b);
    /* 0048341b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048341d: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00483423: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483425: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0048342b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48342du); call_ind(t); }
    /* 0048342d: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00483433: jmp 0x48343f */ goto L_0048343f;
L_00483435:; BB(0x00483435);
    /* 00483435: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_0048343f:; BB(0x0048343f);
    /* 0048343f: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00483445: mov dword ptr [eax + 0xec], 0 */ W32((u32)(r_eax+0xecu), 0x0u);
L_0048344f:; BB(0x0048344f);
    /* 0048344f: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483455: cmp dword ptr [ecx + 0xf8], 0 */ {  u32 a = R32((u32)(r_ecx+0xf8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048345c: je 0x4834b9 */ if (fZ) goto L_004834b9;
L_0048345e:; BB(0x0048345e);
    /* 0048345e: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483464: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 0048346a: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00483470: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00483476: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 0048347c: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483483: je 0x48349f */ if (fZ) goto L_0048349f;
L_00483485:; BB(0x00483485);
    /* 00483485: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483487: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0048348d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048348f: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00483495: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x483497u); call_ind(t); }
    /* 00483497: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 0048349d: jmp 0x4834a9 */ goto L_004834a9;
L_0048349f:; BB(0x0048349f);
    /* 0048349f: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_004834a9:; BB(0x004834a9);
    /* 004834a9: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 004834af: mov dword ptr [ecx + 0xf8], 0 */ W32((u32)(r_ecx+0xf8u), 0x0u);
L_004834b9:; BB(0x004834b9);
    /* 004834b9: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 004834bf: cmp dword ptr [edx + 0x94], 0 */ {  u32 a = R32((u32)(r_edx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004834c6: je 0x483523 */ if (fZ) goto L_00483523;
L_004834c8:; BB(0x004834c8);
    /* 004834c8: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 004834ce: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 004834d4: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 004834da: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 004834e0: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 004834e6: cmp dword ptr [ebp - 0xa8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004834ed: je 0x483509 */ if (fZ) goto L_00483509;
L_004834ef:; BB(0x004834ef);
    /* 004834ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004834f1: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 004834f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004834f9: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 004834ff: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x483501u); call_ind(t); }
    /* 00483501: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00483507: jmp 0x483513 */ goto L_00483513;
L_00483509:; BB(0x00483509);
    /* 00483509: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
L_00483513:; BB(0x00483513);
    /* 00483513: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00483519: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
L_00483523:; BB(0x00483523);
    /* 00483523: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483529: cmp dword ptr [ecx + 0xfc], 0 */ {  u32 a = R32((u32)(r_ecx+0xfcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483530: je 0x48358d */ if (fZ) goto L_0048358d;
L_00483532:; BB(0x00483532);
    /* 00483532: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483538: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 0048353e: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00483544: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048354a: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 00483550: cmp dword ptr [ebp - 0xb0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483557: je 0x483573 */ if (fZ) goto L_00483573;
L_00483559:; BB(0x00483559);
    /* 00483559: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048355b: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00483561: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00483563: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00483569: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x48356bu); call_ind(t); }
    /* 0048356b: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 00483571: jmp 0x48357d */ goto L_0048357d;
L_00483573:; BB(0x00483573);
    /* 00483573: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
L_0048357d:; BB(0x0048357d);
    /* 0048357d: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483583: mov dword ptr [ecx + 0xfc], 0 */ W32((u32)(r_ecx+0xfcu), 0x0u);
L_0048358d:; BB(0x0048358d);
    /* 0048358d: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00483593: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x483598u); f_005d8154();
    /* 00483598: mov esp, ebp */ r_esp = r_ebp;
    /* 0048359a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048359b: ret  */ FN_RET(0x00482cb8); r_esp += 4; return;
}

void f_0048359c(void) /* FUN_0048359c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048359c);
    /* 0048359c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048359d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048359f: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004835a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004835a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004835a7: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 004835aa: mov dword ptr [ebp - 0x24], 0x68690c */ W32((u32)(r_ebp+0xffffffdcu), 0x68690cu);
    /* 004835b1: mov dword ptr [ebp - 0x20], 0x686910 */ W32((u32)(r_ebp+0xffffffe0u), 0x686910u);
    /* 004835b8: mov dword ptr [ebp - 0x1c], 0x686918 */ W32((u32)(r_ebp+0xffffffe4u), 0x686918u);
    /* 004835bf: mov dword ptr [ebp - 0x18], 0x686920 */ W32((u32)(r_ebp+0xffffffe8u), 0x686920u);
    /* 004835c6: mov dword ptr [ebp - 0x14], 0x686924 */ W32((u32)(r_ebp+0xffffffecu), 0x686924u);
    /* 004835cd: mov dword ptr [ebp - 0x50], 0x1e */ W32((u32)(r_ebp+0xffffffb0u), 0x1eu);
    /* 004835d4: mov dword ptr [ebp - 0x4c], 0xf8 */ W32((u32)(r_ebp+0xffffffb4u), 0xf8u);
    /* 004835db: mov dword ptr [ebp - 0x48], 0x62 */ W32((u32)(r_ebp+0xffffffb8u), 0x62u);
    /* 004835e2: mov dword ptr [ebp - 0x44], 0xf8 */ W32((u32)(r_ebp+0xffffffbcu), 0xf8u);
    /* 004835e9: mov dword ptr [ebp - 0x40], 0xa6 */ W32((u32)(r_ebp+0xffffffc0u), 0xa6u);
    /* 004835f0: mov dword ptr [ebp - 0x3c], 0xf8 */ W32((u32)(r_ebp+0xffffffc4u), 0xf8u);
    /* 004835f7: mov dword ptr [ebp - 0x38], 0xc4 */ W32((u32)(r_ebp+0xffffffc8u), 0xc4u);
    /* 004835fe: mov dword ptr [ebp - 0x34], 0x128 */ W32((u32)(r_ebp+0xffffffccu), 0x128u);
    /* 00483605: mov dword ptr [ebp - 0x30], 0x108 */ W32((u32)(r_ebp+0xffffffd0u), 0x108u);
    /* 0048360c: mov dword ptr [ebp - 0x2c], 0x128 */ W32((u32)(r_ebp+0xffffffd4u), 0x128u);
    /* 00483613: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00483615: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483618: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x48361du); f_005e0731();
    /* 0048361d: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483620: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00483623: mov dword ptr [eax + 0x1d0c], ecx */ W32((u32)(r_eax+0x1d0cu), r_ecx);
    /* 00483629: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0048362c: cmp dword ptr [edx + 0x1d14], 0 */ {  u32 a = R32((u32)(r_edx+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483633: je 0x483650 */ if (fZ) goto L_00483650;
L_00483635:; BB(0x00483635);
    /* 00483635: mov edi, dword ptr [ebp - 0x6c] */ r_edi = R32((u32)(r_ebp+0xffffff94u));
    /* 00483638: add edi, 0x10c */ {  u32 a = r_edi; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0048363e: mov esi, dword ptr [0x6f6eec] */ r_esi = R32((u32)(0x6f6eecu));
    /* 00483644: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00483647: mov ecx, 0x700 */ r_ecx = 0x700u;
    /* 0048364c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0048364e: jmp 0x483663 */ goto L_00483663;
L_00483650:; BB(0x00483650);
    /* 00483650: mov edi, dword ptr [ebp - 0x6c] */ r_edi = R32((u32)(r_ebp+0xffffff94u));
    /* 00483653: add edi, 0x10c */ {  u32 a = r_edi; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00483659: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0048365c: mov ecx, 0x700 */ r_ecx = 0x700u;
    /* 00483661: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
L_00483663:; BB(0x00483663);
    /* 00483663: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483666: add eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048366b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0048366e: mov dword ptr [ecx + 0x1d10], eax */ W32((u32)(r_ecx+0x1d10u), r_eax);
    /* 00483674: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00483676: push 0x68692c */ { u32 v = 0x68692cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048367b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0048367e: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x483683u); f_005d825e();
    /* 00483683: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0048368a: jmp 0x483695 */ goto L_00483695;
L_0048368c:; BB(0x0048368c);
    /* 0048368c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048368f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00483692: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_00483695:; BB(0x00483695);
    /* 00483695: cmp dword ptr [ebp - 0x28], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483699: jge 0x48385c */ if ((fS==fO)) goto L_0048385c;
L_0048369f:; BB(0x0048369f);
    /* 0048369f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004836a2: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004836a5: cmp dword ptr [ecx + eax*4 + 0xa4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004836ad: jne 0x4836ed */ if (!fZ) goto L_004836ed;
L_004836af:; BB(0x004836af);
    /* 004836af: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004836b4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4836b9u); f_0048ab58();
    /* 004836b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004836bc: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004836bf: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004836c3: je 0x4836d6 */ if (fZ) goto L_004836d6;
L_004836c5:; BB(0x004836c5);
    /* 004836c5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004836c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004836c9: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004836cc: call 0x488fc8 */ r_esp -= 4; W32(r_esp, 0x4836d1u); f_00488fc8();
    /* 004836d1: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004836d4: jmp 0x4836dd */ goto L_004836dd;
L_004836d6:; BB(0x004836d6);
    /* 004836d6: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_004836dd:; BB(0x004836dd);
    /* 004836dd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004836e0: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004836e3: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004836e6: mov dword ptr [ecx + eax*4 + 0xa4], edx */ W32((u32)(r_ecx+r_eax*4+0xa4u), r_edx);
L_004836ed:; BB(0x004836ed);
    /* 004836ed: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004836f0: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004836f3: mov edx, dword ptr [ecx + eax*4 + 0xa4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xa4u));
    /* 004836fa: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004836fd: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00483700: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483703: cmp dword ptr [ecx + 0x1d14], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048370a: je 0x48371b */ if (fZ) goto L_0048371b;
L_0048370c:; BB(0x0048370c);
    /* 0048370c: cmp dword ptr [ebp - 0x28], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483710: jne 0x48371b */ if (!fZ) goto L_0048371b;
L_00483712:; BB(0x00483712);
    /* 00483712: mov dword ptr [ebp - 0x74], 0x686934 */ W32((u32)(r_ebp+0xffffff8cu), 0x686934u);
    /* 00483719: jmp 0x483725 */ goto L_00483725;
L_0048371b:; BB(0x0048371b);
    /* 0048371b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048371e: mov eax, dword ptr [ebp + edx*4 - 0x24] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffdcu));
    /* 00483722: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
L_00483725:; BB(0x00483725);
    /* 00483725: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00483728: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483729: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048372c: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0048372f: mov ecx, dword ptr [eax + edx*4 + 0xa4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 00483736: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00483739: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0048373c: mov edx, dword ptr [eax + edx*4 + 0xa4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 00483743: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00483745: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x483748u); call_ind(t); }
    /* 00483748: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0048374a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0048374c: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0048374e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00483751: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483754: mov ecx, dword ptr [edx + ecx*4 + 0xa4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 0048375b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048375e: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483761: mov eax, dword ptr [edx + eax*4 + 0xa4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa4u));
    /* 00483768: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048376a: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x48376du); call_ind(t); }
    /* 0048376d: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00483772: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00483775: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483778: mov ecx, dword ptr [ecx + eax*4 + 0xa4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa4u));
    /* 0048377f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00483782: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483785: mov edx, dword ptr [eax + edx*4 + 0xa4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 0048378c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048378e: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x483791u); call_ind(t); }
    /* 00483791: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483793: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483795: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00483798: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0048379b: mov ecx, dword ptr [edx + ecx*4 + 0xa4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 004837a2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004837a5: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004837a8: mov eax, dword ptr [edx + eax*4 + 0xa4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa4u));
    /* 004837af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004837b1: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4837b4u); call_ind(t); }
    /* 004837b4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004837b7: mov ecx, dword ptr [ebp + eax*8 - 0x4c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffb4u));
    /* 004837bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004837bc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004837bf: mov eax, dword ptr [ebp + edx*8 - 0x50] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffb0u));
    /* 004837c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004837c4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004837c7: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004837ca: mov ecx, dword ptr [edx + ecx*4 + 0xa4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 004837d1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004837d4: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004837d7: mov eax, dword ptr [edx + eax*4 + 0xa4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa4u));
    /* 004837de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004837e0: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4837e3u); call_ind(t); }
    /* 004837e3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004837e5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004837e8: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004837eb: mov ecx, dword ptr [ecx + eax*4 + 0xa4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa4u));
    /* 004837f2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004837f5: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004837f8: mov edx, dword ptr [eax + edx*4 + 0xa4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 004837ff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00483801: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x483804u); call_ind(t); }
    /* 00483804: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483808: jne 0x483838 */ if (!fZ) goto L_00483838;
L_0048380a:; BB(0x0048380a);
    /* 0048380a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0048380c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0048380e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00483810: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00483812: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00483815: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483818: mov ecx, dword ptr [edx + ecx*4 + 0xa4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 0048381f: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x483824u); f_005d5ff2();
    /* 00483824: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00483826: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00483829: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0048382c: mov ecx, dword ptr [ecx + eax*4 + 0xa4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa4u));
    /* 00483833: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x483838u); f_005d65d6();
L_00483838:; BB(0x00483838);
    /* 00483838: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048383b: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0048383e: mov ecx, dword ptr [eax + edx*4 + 0xa4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 00483845: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00483848: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0048384b: mov edx, dword ptr [eax + edx*4 + 0xa4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 00483852: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00483854: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x483857u); call_ind(t); }
    /* 00483857: jmp 0x48368c */ goto L_0048368c;
L_0048385c:; BB(0x0048385c);
    /* 0048385c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0048385f: cmp dword ptr [ecx + 0xbc], 0 */ {  u32 a = R32((u32)(r_ecx+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483866: jne 0x483963 */ if (!fZ) goto L_00483963;
L_0048386c:; BB(0x0048386c);
    /* 0048386c: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0048386e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x483873u); f_0048ab58();
    /* 00483873: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483876: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00483879: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048387d: je 0x48388c */ if (fZ) goto L_0048388c;
L_0048387f:; BB(0x0048387f);
    /* 0048387f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00483882: call 0x48956d */ r_esp -= 4; W32(r_esp, 0x483887u); f_0048956d();
    /* 00483887: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0048388a: jmp 0x483893 */ goto L_00483893;
L_0048388c:; BB(0x0048388c);
    /* 0048388c: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00483893:; BB(0x00483893);
    /* 00483893: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483896: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00483899: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0048389f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004838a2: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 004838a8: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004838ab: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004838ae: push 0x40d */ { u32 v = 0x40du; r_esp -= 4; W32(r_esp, v); }
    /* 004838b3: push 0x40b */ { u32 v = 0x40bu; r_esp -= 4; W32(r_esp, v); }
    /* 004838b8: push 0x40c */ { u32 v = 0x40cu; r_esp -= 4; W32(r_esp, v); }
    /* 004838bd: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004838c0: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 004838c6: call 0x5ddd4b */ r_esp -= 4; W32(r_esp, 0x4838cbu); f_005ddd4b();
    /* 004838cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004838cd: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004838d0: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 004838d6: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004838d9: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 004838df: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004838e1: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4838e4u); call_ind(t); }
    /* 004838e4: push 0x4fd */ { u32 v = 0x4fdu; r_esp -= 4; W32(r_esp, v); }
    /* 004838e9: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004838ec: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 004838f2: call 0x5de3af */ r_esp -= 4; W32(r_esp, 0x4838f7u); f_005de3af();
    /* 004838f7: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 004838f9: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 004838fb: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004838fe: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00483904: call 0x5de520 */ r_esp -= 4; W32(r_esp, 0x483909u); f_005de520();
    /* 00483909: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0048390b: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00483910: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483913: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00483919: call 0x5de5cf */ r_esp -= 4; W32(r_esp, 0x48391eu); f_005de5cf();
    /* 0048391e: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 00483923: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483926: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 0048392c: call 0x5de5fe */ r_esp -= 4; W32(r_esp, 0x483931u); f_005de5fe();
    /* 00483931: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 00483933: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483936: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 0048393c: call 0x5de638 */ r_esp -= 4; W32(r_esp, 0x483941u); f_005de638();
    /* 00483941: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00483943: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00483945: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483948: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0048394e: call 0x5de302 */ r_esp -= 4; W32(r_esp, 0x483953u); f_005de302();
    /* 00483953: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00483955: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483958: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 0048395e: call 0x5de695 */ r_esp -= 4; W32(r_esp, 0x483963u); f_005de695();
L_00483963:; BB(0x00483963);
    /* 00483963: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483966: cmp dword ptr [edx + 0xc0], 0 */ {  u32 a = R32((u32)(r_edx+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048396d: jne 0x483a16 */ if (!fZ) goto L_00483a16;
L_00483973:; BB(0x00483973);
    /* 00483973: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00483975: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48397au); f_0048ab58();
    /* 0048397a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048397d: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00483980: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483984: je 0x483993 */ if (fZ) goto L_00483993;
L_00483986:; BB(0x00483986);
    /* 00483986: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00483989: call 0x489444 */ r_esp -= 4; W32(r_esp, 0x48398eu); f_00489444();
    /* 0048398e: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00483991: jmp 0x48399a */ goto L_0048399a;
L_00483993:; BB(0x00483993);
    /* 00483993: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0048399a:; BB(0x0048399a);
    /* 0048399a: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0048399d: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004839a0: mov dword ptr [eax + 0xc0], ecx */ W32((u32)(r_eax+0xc0u), r_ecx);
    /* 004839a6: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004839a9: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 004839af: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004839b2: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004839b5: push 0x441 */ { u32 v = 0x441u; r_esp -= 4; W32(r_esp, v); }
    /* 004839ba: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004839bd: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 004839c3: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4839c8u); f_005ea0c3();
    /* 004839c8: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004839cb: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 004839d1: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004839d4: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 004839da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004839dc: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4839dfu); call_ind(t); }
    /* 004839df: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004839e1: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 004839e6: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004839e9: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 004839ef: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004839f2: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 004839f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004839fa: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4839fdu); call_ind(t); }
    /* 004839fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004839ff: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483a02: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00483a08: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483a0b: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00483a11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483a13: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x483a16u); call_ind(t); }
L_00483a16:; BB(0x00483a16);
    /* 00483a16: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483a19: call 0x486f4e */ r_esp -= 4; W32(r_esp, 0x483a1eu); f_00486f4e();
    /* 00483a1e: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483a21: cmp dword ptr [eax + 0xe4], 0 */ {  u32 a = R32((u32)(r_eax+0xe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483a28: jne 0x483b15 */ if (!fZ) goto L_00483b15;
L_00483a2e:; BB(0x00483a2e);
    /* 00483a2e: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00483a33: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x483a38u); f_0048ab58();
    /* 00483a38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483a3b: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00483a3e: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483a42: je 0x483a51 */ if (fZ) goto L_00483a51;
L_00483a44:; BB(0x00483a44);
    /* 00483a44: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00483a47: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x483a4cu); f_005e8590();
    /* 00483a4c: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00483a4f: jmp 0x483a58 */ goto L_00483a58;
L_00483a51:; BB(0x00483a51);
    /* 00483a51: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00483a58:; BB(0x00483a58);
    /* 00483a58: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483a5b: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00483a5e: mov dword ptr [ecx + 0xe4], edx */ W32((u32)(r_ecx+0xe4u), r_edx);
    /* 00483a64: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483a67: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00483a6d: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483a70: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00483a73: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00483a75: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483a78: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00483a7e: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x483a83u); f_005e87aa();
    /* 00483a83: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483a86: add ecx, 0x1d41 */ {  u32 a = r_ecx; u32 b = 0x1d41u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00483a8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483a8d: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483a90: mov ecx, dword ptr [edx + 0xe4] */ r_ecx = R32((u32)(r_edx+0xe4u));
    /* 00483a96: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483a99: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 00483a9f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00483aa1: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x483aa4u); call_ind(t); }
    /* 00483aa4: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483aa7: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 00483aad: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483ab0: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 00483ab6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483ab8: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x483abbu); call_ind(t); }
    /* 00483abb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00483abd: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483ac0: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00483ac6: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483ac9: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 00483acf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483ad1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x483ad4u); call_ind(t); }
    /* 00483ad4: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00483ad9: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483adc: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00483ae2: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x483ae7u); f_005e8740();
    /* 00483ae7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00483ae9: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483aec: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 00483af2: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x483af7u); f_005e8775();
    /* 00483af7: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 00483af9: push 0xb2 */ { u32 v = 0xb2u; r_esp -= 4; W32(r_esp, v); }
    /* 00483afe: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483b01: mov ecx, dword ptr [edx + 0xe4] */ r_ecx = R32((u32)(r_edx+0xe4u));
    /* 00483b07: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483b0a: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 00483b10: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00483b12: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x483b15u); call_ind(t); }
L_00483b15:; BB(0x00483b15);
    /* 00483b15: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483b18: cmp dword ptr [ecx + 0xe8], 0 */ {  u32 a = R32((u32)(r_ecx+0xe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483b1f: jne 0x483c20 */ if (!fZ) goto L_00483c20;
L_00483b25:; BB(0x00483b25);
    /* 00483b25: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00483b2a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x483b2fu); f_0048ab58();
    /* 00483b2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483b32: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00483b35: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483b39: je 0x483b4b */ if (fZ) goto L_00483b4b;
L_00483b3b:; BB(0x00483b3b);
    /* 00483b3b: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00483b3e: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x483b43u); f_005e8590();
    /* 00483b43: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00483b49: jmp 0x483b55 */ goto L_00483b55;
L_00483b4b:; BB(0x00483b4b);
    /* 00483b4b: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00483b55:; BB(0x00483b55);
    /* 00483b55: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483b58: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00483b5e: mov dword ptr [edx + 0xe8], eax */ W32((u32)(r_edx+0xe8u), r_eax);
    /* 00483b64: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483b67: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 00483b6d: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483b70: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00483b73: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00483b75: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483b78: mov ecx, dword ptr [ecx + 0xe8] */ r_ecx = R32((u32)(r_ecx+0xe8u));
    /* 00483b7e: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x483b83u); f_005e87aa();
    /* 00483b83: push 0x6f6b10 */ { u32 v = 0x6f6b10u; r_esp -= 4; W32(r_esp, v); }
    /* 00483b88: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483b8b: mov ecx, dword ptr [edx + 0xe8] */ r_ecx = R32((u32)(r_edx+0xe8u));
    /* 00483b91: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483b94: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 00483b9a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00483b9c: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x483b9fu); call_ind(t); }
    /* 00483b9f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483ba2: mov ecx, dword ptr [ecx + 0xe8] */ r_ecx = R32((u32)(r_ecx+0xe8u));
    /* 00483ba8: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483bab: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00483bb1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483bb3: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x483bb6u); call_ind(t); }
    /* 00483bb6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00483bb8: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483bbb: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 00483bc1: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483bc4: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00483bca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483bcc: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x483bcfu); call_ind(t); }
    /* 00483bcf: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 00483bd1: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483bd4: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 00483bda: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x483bdfu); f_005e8740();
    /* 00483bdf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00483be1: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483be4: mov ecx, dword ptr [ecx + 0xe8] */ r_ecx = R32((u32)(r_ecx+0xe8u));
    /* 00483bea: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x483befu); f_005e8775();
    /* 00483bef: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00483bf1: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483bf4: mov ecx, dword ptr [edx + 0xe8] */ r_ecx = R32((u32)(r_edx+0xe8u));
    /* 00483bfa: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x483bffu); f_005e8e99();
    /* 00483bff: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 00483c04: push 0xb2 */ { u32 v = 0xb2u; r_esp -= 4; W32(r_esp, v); }
    /* 00483c09: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483c0c: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 00483c12: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483c15: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00483c1b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483c1d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x483c20u); call_ind(t); }
L_00483c20:; BB(0x00483c20);
    /* 00483c20: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483c23: cmp dword ptr [eax + 0xc4], 0 */ {  u32 a = R32((u32)(r_eax+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483c2a: jne 0x483d2e */ if (!fZ) goto L_00483d2e;
L_00483c30:; BB(0x00483c30);
    /* 00483c30: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00483c35: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x483c3au); f_0048ab58();
    /* 00483c3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483c3d: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00483c40: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483c44: je 0x483c56 */ if (fZ) goto L_00483c56;
L_00483c46:; BB(0x00483c46);
    /* 00483c46: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00483c49: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x483c4eu); f_005e8590();
    /* 00483c4e: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00483c54: jmp 0x483c60 */ goto L_00483c60;
L_00483c56:; BB(0x00483c56);
    /* 00483c56: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00483c60:; BB(0x00483c60);
    /* 00483c60: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483c63: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00483c69: mov dword ptr [ecx + 0xc4], edx */ W32((u32)(r_ecx+0xc4u), r_edx);
    /* 00483c6f: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483c72: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00483c78: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483c7b: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00483c7e: push 0x6f6b14 */ { u32 v = 0x6f6b14u; r_esp -= 4; W32(r_esp, v); }
    /* 00483c83: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483c86: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00483c8c: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483c8f: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00483c95: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483c97: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x483c9au); call_ind(t); }
    /* 00483c9a: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00483c9c: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483c9f: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00483ca5: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x483caau); f_005e87aa();
    /* 00483caa: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483cad: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 00483cb3: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483cb6: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00483cbc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483cbe: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x483cc1u); call_ind(t); }
    /* 00483cc1: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483cc6: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483cc9: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00483ccf: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x483cd4u); f_005e8740();
    /* 00483cd4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00483cd6: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483cd9: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 00483cdf: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x483ce4u); f_005e8775();
    /* 00483ce4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483ce6: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483ce9: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 00483cef: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483cf2: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 00483cf8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00483cfa: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x483cfdu); call_ind(t); }
    /* 00483cfd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00483cff: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483d02: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 00483d08: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x483d0du); f_005e8e99();
    /* 00483d0d: push 0xe9 */ { u32 v = 0xe9u; r_esp -= 4; W32(r_esp, v); }
    /* 00483d12: push 0xa7 */ { u32 v = 0xa7u; r_esp -= 4; W32(r_esp, v); }
    /* 00483d17: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483d1a: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 00483d20: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483d23: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 00483d29: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00483d2b: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x483d2eu); call_ind(t); }
L_00483d2e:; BB(0x00483d2e);
    /* 00483d2e: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483d31: call 0x485bbe */ r_esp -= 4; W32(r_esp, 0x483d36u); f_00485bbe();
    /* 00483d36: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00483d38: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00483d3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483d3c: push 0x6f6b18 */ { u32 v = 0x6f6b18u; r_esp -= 4; W32(r_esp, v); }
    /* 00483d41: push 0x68693c */ { u32 v = 0x68693cu; r_esp -= 4; W32(r_esp, v); }
    /* 00483d46: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00483d4c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00483d4f: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 00483d54: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00483d57: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00483d59: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x483d5cu); call_ind(t); }
    /* 00483d5c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483d5f: cmp dword ptr [ecx + 0x1d14], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483d66: je 0x483d9a */ if (fZ) goto L_00483d9a;
L_00483d68:; BB(0x00483d68);
    /* 00483d68: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483d6b: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00483d71: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x483d76u); f_005de399();
    /* 00483d76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483d78: jne 0x483d84 */ if (!fZ) goto L_00483d84;
L_00483d7a:; BB(0x00483d7a);
    /* 00483d7a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483d7d: call 0x486fe6 */ r_esp -= 4; W32(r_esp, 0x483d82u); f_00486fe6();
    /* 00483d82: jmp 0x483d98 */ goto L_00483d98;
L_00483d84:; BB(0x00483d84);
    /* 00483d84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483d86: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00483d89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483d8a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483d8d: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00483d93: call 0x5de7d3 */ r_esp -= 4; W32(r_esp, 0x483d98u); f_005de7d3();
L_00483d98:; BB(0x00483d98);
    /* 00483d98: jmp 0x483e06 */ goto L_00483e06;
L_00483d9a:; BB(0x00483d9a);
    /* 00483d9a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483d9c: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483d9f: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 00483da5: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00483da8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483da9: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483dac: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00483db2: call 0x5def48 */ r_esp -= 4; W32(r_esp, 0x483db7u); f_005def48();
    /* 00483db7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483db9: je 0x483dda */ if (fZ) goto L_00483dda;
L_00483dbb:; BB(0x00483dbb);
    /* 00483dbb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483dbd: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483dc0: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 00483dc6: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00483dc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483dca: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483dcd: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00483dd3: call 0x5de7d3 */ r_esp -= 4; W32(r_esp, 0x483dd8u); f_005de7d3();
    /* 00483dd8: jmp 0x483e06 */ goto L_00483e06;
L_00483dda:; BB(0x00483dda);
    /* 00483dda: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483ddd: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00483de3: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x483de8u); f_005de399();
    /* 00483de8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483dea: jne 0x483df6 */ if (!fZ) goto L_00483df6;
L_00483dec:; BB(0x00483dec);
    /* 00483dec: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00483def: call 0x486fe6 */ r_esp -= 4; W32(r_esp, 0x483df4u); f_00486fe6();
    /* 00483df4: jmp 0x483e06 */ goto L_00483e06;
L_00483df6:; BB(0x00483df6);
    /* 00483df6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483df8: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00483dfb: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00483e01: call 0x5de705 */ r_esp -= 4; W32(r_esp, 0x483e06u); f_005de705();
L_00483e06:; BB(0x00483e06);
    /* 00483e06: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00483e07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00483e08: mov esp, ebp */ r_esp = r_ebp;
    /* 00483e0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00483e0b: ret 4 */ FN_RET(0x0048359c); r_esp += 8; return;
}

void f_00483e0e(void) /* FUN_00483e0e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00483e0e);
    /* 00483e0e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483e0f: mov ebp, esp */ r_ebp = r_esp;
    /* 00483e11: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483e17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00483e18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00483e19: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 00483e1f: mov dword ptr [ebp - 0x34], 0x686948 */ W32((u32)(r_ebp+0xffffffccu), 0x686948u);
    /* 00483e26: mov dword ptr [ebp - 0x30], 0x68694c */ W32((u32)(r_ebp+0xffffffd0u), 0x68694cu);
    /* 00483e2d: mov dword ptr [ebp - 0x2c], 0x686954 */ W32((u32)(r_ebp+0xffffffd4u), 0x686954u);
    /* 00483e34: mov dword ptr [ebp - 0x28], 0x68695c */ W32((u32)(r_ebp+0xffffffd8u), 0x68695cu);
    /* 00483e3b: mov dword ptr [ebp - 0x24], 0x686960 */ W32((u32)(r_ebp+0xffffffdcu), 0x686960u);
    /* 00483e42: mov dword ptr [ebp - 0x60], 0xd2 */ W32((u32)(r_ebp+0xffffffa0u), 0xd2u);
    /* 00483e49: mov dword ptr [ebp - 0x5c], 0x89 */ W32((u32)(r_ebp+0xffffffa4u), 0x89u);
    /* 00483e50: mov dword ptr [ebp - 0x58], 0x116 */ W32((u32)(r_ebp+0xffffffa8u), 0x116u);
    /* 00483e57: mov dword ptr [ebp - 0x54], 0x89 */ W32((u32)(r_ebp+0xffffffacu), 0x89u);
    /* 00483e5e: mov dword ptr [ebp - 0x50], 0x15a */ W32((u32)(r_ebp+0xffffffb0u), 0x15au);
    /* 00483e65: mov dword ptr [ebp - 0x4c], 0x89 */ W32((u32)(r_ebp+0xffffffb4u), 0x89u);
    /* 00483e6c: mov dword ptr [ebp - 0x48], 0x118 */ W32((u32)(r_ebp+0xffffffb8u), 0x118u);
    /* 00483e73: mov dword ptr [ebp - 0x44], 0x156 */ W32((u32)(r_ebp+0xffffffbcu), 0x156u);
    /* 00483e7a: mov dword ptr [ebp - 0x40], 0x15c */ W32((u32)(r_ebp+0xffffffc0u), 0x15cu);
    /* 00483e81: mov dword ptr [ebp - 0x3c], 0x156 */ W32((u32)(r_ebp+0xffffffc4u), 0x156u);
    /* 00483e88: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00483e8a: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483e90: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x483e95u); f_005e0731();
    /* 00483e95: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483e9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00483e9e: mov dword ptr [eax + 0x1d0c], ecx */ W32((u32)(r_eax+0x1d0cu), r_ecx);
    /* 00483ea4: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483eaa: cmp dword ptr [edx + 0x1d14], 0 */ {  u32 a = R32((u32)(r_edx+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483eb1: je 0x483ed1 */ if (fZ) goto L_00483ed1;
L_00483eb3:; BB(0x00483eb3);
    /* 00483eb3: mov edi, dword ptr [ebp - 0xb4] */ r_edi = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483eb9: add edi, 0x10c */ {  u32 a = r_edi; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00483ebf: mov esi, dword ptr [0x6f6eec] */ r_esi = R32((u32)(0x6f6eecu));
    /* 00483ec5: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00483ec8: mov ecx, 0x700 */ r_ecx = 0x700u;
    /* 00483ecd: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00483ecf: jmp 0x483ee7 */ goto L_00483ee7;
L_00483ed1:; BB(0x00483ed1);
    /* 00483ed1: mov edi, dword ptr [ebp - 0xb4] */ r_edi = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483ed7: add edi, 0x10c */ {  u32 a = r_edi; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00483edd: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00483ee0: mov ecx, 0x700 */ r_ecx = 0x700u;
    /* 00483ee5: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
L_00483ee7:; BB(0x00483ee7);
    /* 00483ee7: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483eed: add eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00483ef2: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483ef8: mov dword ptr [ecx + 0x1d10], eax */ W32((u32)(r_ecx+0x1d10u), r_eax);
    /* 00483efe: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483f04: cmp dword ptr [edx + 0x1d14], 0 */ {  u32 a = R32((u32)(r_edx+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483f0b: je 0x483f21 */ if (fZ) goto L_00483f21;
L_00483f0d:; BB(0x00483f0d);
    /* 00483f0d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00483f0f: push 0x686968 */ { u32 v = 0x686968u; r_esp -= 4; W32(r_esp, v); }
    /* 00483f14: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483f1a: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x483f1fu); f_005d825e();
    /* 00483f1f: jmp 0x483f33 */ goto L_00483f33;
L_00483f21:; BB(0x00483f21);
    /* 00483f21: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00483f23: push 0x686970 */ { u32 v = 0x686970u; r_esp -= 4; W32(r_esp, v); }
    /* 00483f28: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483f2e: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x483f33u); f_005d825e();
L_00483f33:; BB(0x00483f33);
    /* 00483f33: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00483f3a: jmp 0x483f45 */ goto L_00483f45;
L_00483f3c:; BB(0x00483f3c);
    /* 00483f3c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00483f3f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00483f42: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_00483f45:; BB(0x00483f45);
    /* 00483f45: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483f49: jge 0x48415d */ if ((fS==fO)) goto L_0048415d;
L_00483f4f:; BB(0x00483f4f);
    /* 00483f4f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00483f52: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483f58: cmp dword ptr [edx + ecx*4 + 0xa4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483f60: jne 0x483fac */ if (!fZ) goto L_00483fac;
L_00483f62:; BB(0x00483f62);
    /* 00483f62: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483f67: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x483f6cu); f_0048ab58();
    /* 00483f6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483f6f: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00483f72: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483f76: je 0x483f8c */ if (fZ) goto L_00483f8c;
L_00483f78:; BB(0x00483f78);
    /* 00483f78: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00483f7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483f7c: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00483f7f: call 0x488fc8 */ r_esp -= 4; W32(r_esp, 0x483f84u); f_00488fc8();
    /* 00483f84: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00483f8a: jmp 0x483f96 */ goto L_00483f96;
L_00483f8c:; BB(0x00483f8c);
    /* 00483f8c: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_00483f96:; BB(0x00483f96);
    /* 00483f96: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00483f99: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483f9f: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00483fa5: mov dword ptr [edx + ecx*4 + 0xa4], eax */ W32((u32)(r_edx+r_ecx*4+0xa4u), r_eax);
L_00483fac:; BB(0x00483fac);
    /* 00483fac: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00483faf: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483fb5: mov eax, dword ptr [edx + ecx*4 + 0xa4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 00483fbc: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483fc2: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00483fc5: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00483fcb: cmp dword ptr [edx + 0x1d14], 0 */ {  u32 a = R32((u32)(r_edx+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483fd2: je 0x483fe6 */ if (fZ) goto L_00483fe6;
L_00483fd4:; BB(0x00483fd4);
    /* 00483fd4: cmp dword ptr [ebp - 0x38], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483fd8: jne 0x483fe6 */ if (!fZ) goto L_00483fe6;
L_00483fda:; BB(0x00483fda);
    /* 00483fda: mov dword ptr [ebp - 0xbc], 0x686980 */ W32((u32)(r_ebp+0xffffff44u), 0x686980u);
    /* 00483fe4: jmp 0x483ff3 */ goto L_00483ff3;
L_00483fe6:; BB(0x00483fe6);
    /* 00483fe6: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00483fe9: mov ecx, dword ptr [ebp + eax*4 - 0x34] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffccu));
    /* 00483fed: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
L_00483ff3:; BB(0x00483ff3);
    /* 00483ff3: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 00483ff9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00483ffa: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00483ffd: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484003: mov ecx, dword ptr [ecx + eax*4 + 0xa4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa4u));
    /* 0048400a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048400d: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484013: mov edx, dword ptr [eax + edx*4 + 0xa4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 0048401a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048401c: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x48401fu); call_ind(t); }
    /* 0048401f: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00484021: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00484023: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00484025: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484028: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048402e: mov ecx, dword ptr [edx + ecx*4 + 0xa4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 00484035: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484038: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048403e: mov eax, dword ptr [edx + eax*4 + 0xa4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa4u));
    /* 00484045: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484047: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x48404au); call_ind(t); }
    /* 0048404a: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0048404f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484052: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484058: mov ecx, dword ptr [ecx + eax*4 + 0xa4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa4u));
    /* 0048405f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484062: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484068: mov edx, dword ptr [eax + edx*4 + 0xa4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 0048406f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00484071: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x484074u); call_ind(t); }
    /* 00484074: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00484076: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00484078: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048407b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484081: mov ecx, dword ptr [edx + ecx*4 + 0xa4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 00484088: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048408b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484091: mov eax, dword ptr [edx + eax*4 + 0xa4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa4u));
    /* 00484098: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048409a: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x48409du); call_ind(t); }
    /* 0048409d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004840a0: mov ecx, dword ptr [ebp + eax*8 - 0x5c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffa4u));
    /* 004840a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004840a5: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004840a8: mov eax, dword ptr [ebp + edx*8 - 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffa0u));
    /* 004840ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004840ad: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004840b0: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004840b6: mov ecx, dword ptr [edx + ecx*4 + 0xa4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 004840bd: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004840c0: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004840c6: mov eax, dword ptr [edx + eax*4 + 0xa4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa4u));
    /* 004840cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004840cf: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4840d2u); call_ind(t); }
    /* 004840d2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004840d4: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004840d7: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004840dd: mov ecx, dword ptr [ecx + eax*4 + 0xa4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa4u));
    /* 004840e4: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004840e7: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004840ed: mov edx, dword ptr [eax + edx*4 + 0xa4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 004840f4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004840f6: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4840f9u); call_ind(t); }
    /* 004840f9: cmp dword ptr [ebp - 0x38], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004840fd: jne 0x484133 */ if (!fZ) goto L_00484133;
L_004840ff:; BB(0x004840ff);
    /* 004840ff: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00484101: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00484103: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00484105: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00484107: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048410a: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484110: mov ecx, dword ptr [edx + ecx*4 + 0xa4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 00484117: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x48411cu); f_005d5ff2();
    /* 0048411c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0048411e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484121: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484127: mov ecx, dword ptr [ecx + eax*4 + 0xa4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa4u));
    /* 0048412e: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x484133u); f_005d65d6();
L_00484133:; BB(0x00484133);
    /* 00484133: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484136: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048413c: mov ecx, dword ptr [eax + edx*4 + 0xa4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 00484143: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484146: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048414c: mov edx, dword ptr [eax + edx*4 + 0xa4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 00484153: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00484155: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x484158u); call_ind(t); }
    /* 00484158: jmp 0x483f3c */ goto L_00483f3c;
L_0048415d:; BB(0x0048415d);
    /* 0048415d: mov dword ptr [ebp - 0x1c], 0x686988 */ W32((u32)(r_ebp+0xffffffe4u), 0x686988u);
    /* 00484164: mov dword ptr [ebp - 0x18], 0x686990 */ W32((u32)(r_ebp+0xffffffe8u), 0x686990u);
    /* 0048416b: mov dword ptr [ebp - 0x14], 0x686998 */ W32((u32)(r_ebp+0xffffffecu), 0x686998u);
    /* 00484172: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00484179: jmp 0x484184 */ goto L_00484184;
L_0048417b:; BB(0x0048417b);
    /* 0048417b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048417e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00484181: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_00484184:; BB(0x00484184);
    /* 00484184: cmp dword ptr [ebp - 0x38], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484188: jge 0x484269 */ if ((fS==fO)) goto L_00484269;
L_0048418e:; BB(0x0048418e);
    /* 0048418e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484191: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484197: cmp dword ptr [eax + edx*4 + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048419f: jne 0x4841eb */ if (!fZ) goto L_004841eb;
L_004841a1:; BB(0x004841a1);
    /* 004841a1: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004841a6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4841abu); f_0048ab58();
    /* 004841ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004841ae: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004841b1: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004841b5: je 0x4841cb */ if (fZ) goto L_004841cb;
L_004841b7:; BB(0x004841b7);
    /* 004841b7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004841ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004841bb: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004841be: call 0x488e24 */ r_esp -= 4; W32(r_esp, 0x4841c3u); f_00488e24();
    /* 004841c3: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 004841c9: jmp 0x4841d5 */ goto L_004841d5;
L_004841cb:; BB(0x004841cb);
    /* 004841cb: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_004841d5:; BB(0x004841d5);
    /* 004841d5: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004841d8: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004841de: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 004841e4: mov dword ptr [eax + edx*4 + 0x98], ecx */ W32((u32)(r_eax+r_edx*4+0x98u), r_ecx);
L_004841eb:; BB(0x004841eb);
    /* 004841eb: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004841ee: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004841f4: mov ecx, dword ptr [eax + edx*4 + 0x98] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 004841fb: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484201: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00484204: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00484206: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484209: imul eax, eax, 0x21 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x21u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048420c: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048420f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484210: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 00484215: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0048421a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048421d: mov edx, dword ptr [ebp + ecx*4 - 0x1c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe4u));
    /* 00484221: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484222: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00484224: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484227: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048422d: mov ecx, dword ptr [ecx + eax*4 + 0x98] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 00484234: call 0x5d5f8d */ r_esp -= 4; W32(r_esp, 0x484239u); f_005d5f8d();
    /* 00484239: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0048423b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0048423d: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0048423f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484242: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484248: mov ecx, dword ptr [eax + edx*4 + 0x98] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 0048424f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484252: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484258: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 0048425f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00484261: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x484264u); call_ind(t); }
    /* 00484264: jmp 0x48417b */ goto L_0048417b;
L_00484269:; BB(0x00484269);
    /* 00484269: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048426f: cmp dword ptr [ecx + 0x100], 0 */ {  u32 a = R32((u32)(r_ecx+0x100u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484276: jne 0x48430c */ if (!fZ) goto L_0048430c;
L_0048427c:; BB(0x0048427c);
    /* 0048427c: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0048427e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x484283u); f_0048ab58();
    /* 00484283: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484286: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00484289: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048428d: je 0x48429f */ if (fZ) goto L_0048429f;
L_0048428f:; BB(0x0048428f);
    /* 0048428f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00484292: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x484297u); f_005d505b();
    /* 00484297: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0048429d: jmp 0x4842a9 */ goto L_004842a9;
L_0048429f:; BB(0x0048429f);
    /* 0048429f: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_004842a9:; BB(0x004842a9);
    /* 004842a9: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004842af: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 004842b5: mov dword ptr [edx + 0x100], eax */ W32((u32)(r_edx+0x100u), r_eax);
    /* 004842bb: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004842c1: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 004842c7: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004842cd: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004842d0: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004842d6: mov ecx, dword ptr [ecx + 0x100] */ r_ecx = R32((u32)(r_ecx+0x100u));
    /* 004842dc: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004842e2: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 004842e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004842ea: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4842edu); call_ind(t); }
    /* 004842ed: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004842ef: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004842f5: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004842fb: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484301: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 00484307: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484309: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48430cu); call_ind(t); }
L_0048430c:; BB(0x0048430c);
    /* 0048430c: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00484313: jmp 0x48431e */ goto L_0048431e;
L_00484315:; BB(0x00484315);
    /* 00484315: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484318: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048431b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0048431e:; BB(0x0048431e);
    /* 0048431e: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484322: jge 0x484425 */ if ((fS==fO)) goto L_00484425;
L_00484328:; BB(0x00484328);
    /* 00484328: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048432b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484331: cmp dword ptr [edx + ecx*4 + 0x104], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484339: jne 0x484385 */ if (!fZ) goto L_00484385;
L_0048433b:; BB(0x0048433b);
    /* 0048433b: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00484340: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x484345u); f_0048ab58();
    /* 00484345: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484348: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0048434b: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048434f: je 0x484365 */ if (fZ) goto L_00484365;
L_00484351:; BB(0x00484351);
    /* 00484351: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484354: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484355: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00484358: call 0x488ebf */ r_esp -= 4; W32(r_esp, 0x48435du); f_00488ebf();
    /* 0048435d: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00484363: jmp 0x48436f */ goto L_0048436f;
L_00484365:; BB(0x00484365);
    /* 00484365: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_0048436f:; BB(0x0048436f);
    /* 0048436f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484372: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484378: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 0048437e: mov dword ptr [edx + ecx*4 + 0x104], eax */ W32((u32)(r_edx+r_ecx*4+0x104u), r_eax);
L_00484385:; BB(0x00484385);
    /* 00484385: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484389: jne 0x484397 */ if (!fZ) goto L_00484397;
L_0048438b:; BB(0x0048438b);
    /* 0048438b: mov dword ptr [ebp - 0xcc], 0x6869a0 */ W32((u32)(r_ebp+0xffffff34u), 0x6869a0u);
    /* 00484395: jmp 0x4843a1 */ goto L_004843a1;
L_00484397:; BB(0x00484397);
    /* 00484397: mov dword ptr [ebp - 0xcc], 0x6869ac */ W32((u32)(r_ebp+0xffffff34u), 0x6869acu);
L_004843a1:; BB(0x004843a1);
    /* 004843a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004843a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004843a5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004843a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004843a9: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 004843ab: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 004843b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004843b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004843b4: push 0xa3 */ { u32 v = 0xa3u; r_esp -= 4; W32(r_esp, v); }
    /* 004843b9: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004843bc: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 004843be: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 004843c0: and edx, 0x47 */ {  u32 a = r_edx; u32 b = 0x47u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004843c3: add edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004843c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004843c7: push 0x427 */ { u32 v = 0x427u; r_esp -= 4; W32(r_esp, v); }
    /* 004843cc: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004843d2: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004843d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004843d9: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004843dc: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004843e2: mov ecx, dword ptr [eax + edx*4 + 0x104] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x104u));
    /* 004843e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004843ea: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004843f0: call 0x5d84d1 */ r_esp -= 4; W32(r_esp, 0x4843f5u); f_005d84d1();
    /* 004843f5: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004843f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004843f9: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 004843fb: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004843fe: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484404: mov ecx, dword ptr [eax + edx*4 + 0x104] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x104u));
    /* 0048440b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048440e: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484414: mov edx, dword ptr [eax + edx*4 + 0x104] */ r_edx = R32((u32)(r_eax+r_edx*4+0x104u));
    /* 0048441b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048441d: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x484420u); call_ind(t); }
    /* 00484420: jmp 0x484315 */ goto L_00484315;
L_00484425:; BB(0x00484425);
    /* 00484425: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048442b: cmp dword ptr [ecx + 0xfc], 0 */ {  u32 a = R32((u32)(r_ecx+0xfcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484432: jne 0x4844a4 */ if (!fZ) goto L_004844a4;
L_00484434:; BB(0x00484434);
    /* 00484434: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00484439: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48443eu); f_0048ab58();
    /* 0048443e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484441: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00484444: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484448: je 0x48445a */ if (fZ) goto L_0048445a;
L_0048444a:; BB(0x0048444a);
    /* 0048444a: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0048444d: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x484452u); f_005e8590();
    /* 00484452: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00484458: jmp 0x484464 */ goto L_00484464;
L_0048445a:; BB(0x0048445a);
    /* 0048445a: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_00484464:; BB(0x00484464);
    /* 00484464: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048446a: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 00484470: mov dword ptr [edx + 0xfc], eax */ W32((u32)(r_edx+0xfcu), r_eax);
    /* 00484476: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00484478: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048447a: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0048447c: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 00484481: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00484483: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00484485: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00484487: push 0x6869b8 */ { u32 v = 0x6869b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048448c: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484492: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 00484498: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484499: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048449f: call 0x5d851e */ r_esp -= 4; W32(r_esp, 0x4844a4u); f_005d851e();
L_004844a4:; BB(0x004844a4);
    /* 004844a4: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004844aa: cmp dword ptr [eax + 0xbc], 0 */ {  u32 a = R32((u32)(r_eax+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004844b1: jne 0x4845e4 */ if (!fZ) goto L_004845e4;
L_004844b7:; BB(0x004844b7);
    /* 004844b7: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 004844b9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4844beu); f_0048ab58();
    /* 004844be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004844c1: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004844c4: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004844c8: je 0x4844da */ if (fZ) goto L_004844da;
L_004844ca:; BB(0x004844ca);
    /* 004844ca: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004844cd: call 0x48956d */ r_esp -= 4; W32(r_esp, 0x4844d2u); f_0048956d();
    /* 004844d2: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 004844d8: jmp 0x4844e4 */ goto L_004844e4;
L_004844da:; BB(0x004844da);
    /* 004844da: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_004844e4:; BB(0x004844e4);
    /* 004844e4: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004844ea: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004844f0: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 004844f6: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004844fc: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00484502: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484508: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0048450b: push 0x40d */ { u32 v = 0x40du; r_esp -= 4; W32(r_esp, v); }
    /* 00484510: push 0x40b */ { u32 v = 0x40bu; r_esp -= 4; W32(r_esp, v); }
    /* 00484515: push 0x40c */ { u32 v = 0x40cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048451a: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484520: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00484526: call 0x5ddd4b */ r_esp -= 4; W32(r_esp, 0x48452bu); f_005ddd4b();
    /* 0048452b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048452d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484533: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00484539: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048453f: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00484545: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484547: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48454au); call_ind(t); }
    /* 0048454a: push 0x463 */ { u32 v = 0x463u; r_esp -= 4; W32(r_esp, v); }
    /* 0048454f: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484555: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0048455b: call 0x5de3af */ r_esp -= 4; W32(r_esp, 0x484560u); f_005de3af();
    /* 00484560: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00484562: push 0xd1 */ { u32 v = 0xd1u; r_esp -= 4; W32(r_esp, v); }
    /* 00484567: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048456d: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00484573: call 0x5de520 */ r_esp -= 4; W32(r_esp, 0x484578u); f_005de520();
    /* 00484578: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0048457a: push 0x186 */ { u32 v = 0x186u; r_esp -= 4; W32(r_esp, v); }
    /* 0048457f: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484585: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 0048458b: call 0x5de5cf */ r_esp -= 4; W32(r_esp, 0x484590u); f_005de5cf();
    /* 00484590: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00484592: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484598: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0048459e: call 0x5de5fe */ r_esp -= 4; W32(r_esp, 0x4845a3u); f_005de5fe();
    /* 004845a3: push 0xb1 */ { u32 v = 0xb1u; r_esp -= 4; W32(r_esp, v); }
    /* 004845a8: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004845ae: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 004845b4: call 0x5de638 */ r_esp -= 4; W32(r_esp, 0x4845b9u); f_005de638();
    /* 004845b9: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004845bb: push 0xd5 */ { u32 v = 0xd5u; r_esp -= 4; W32(r_esp, v); }
    /* 004845c0: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004845c6: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 004845cc: call 0x5de302 */ r_esp -= 4; W32(r_esp, 0x4845d1u); f_005de302();
    /* 004845d1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004845d3: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004845d9: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 004845df: call 0x5de695 */ r_esp -= 4; W32(r_esp, 0x4845e4u); f_005de695();
L_004845e4:; BB(0x004845e4);
    /* 004845e4: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004845ea: cmp dword ptr [ecx + 0xc0], 0 */ {  u32 a = R32((u32)(r_ecx+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004845f1: jne 0x4846c1 */ if (!fZ) goto L_004846c1;
L_004845f7:; BB(0x004845f7);
    /* 004845f7: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004845f9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4845feu); f_0048ab58();
    /* 004845fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484601: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00484604: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484608: je 0x48461a */ if (fZ) goto L_0048461a;
L_0048460a:; BB(0x0048460a);
    /* 0048460a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0048460d: call 0x489444 */ r_esp -= 4; W32(r_esp, 0x484612u); f_00489444();
    /* 00484612: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00484618: jmp 0x484624 */ goto L_00484624;
L_0048461a:; BB(0x0048461a);
    /* 0048461a: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_00484624:; BB(0x00484624);
    /* 00484624: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048462a: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 00484630: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 00484636: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048463c: mov edx, dword ptr [ecx + 0xc0] */ r_edx = R32((u32)(r_ecx+0xc0u));
    /* 00484642: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484648: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0048464b: push 0x441 */ { u32 v = 0x441u; r_esp -= 4; W32(r_esp, v); }
    /* 00484650: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484656: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 0048465c: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x484661u); f_005ea0c3();
    /* 00484661: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484667: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 0048466d: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484673: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 00484679: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048467b: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x48467eu); call_ind(t); }
    /* 0048467e: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00484683: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00484685: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048468b: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 00484691: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484697: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048469d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048469f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4846a2u); call_ind(t); }
    /* 004846a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004846a4: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004846aa: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 004846b0: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004846b6: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 004846bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004846be: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4846c1u); call_ind(t); }
L_004846c1:; BB(0x004846c1);
    /* 004846c1: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004846c7: cmp dword ptr [eax + 0xc4], 0 */ {  u32 a = R32((u32)(r_eax+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004846ce: jne 0x4847fc */ if (!fZ) goto L_004847fc;
L_004846d4:; BB(0x004846d4);
    /* 004846d4: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 004846d9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4846deu); f_0048ab58();
    /* 004846de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004846e1: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 004846e4: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004846e8: je 0x4846fa */ if (fZ) goto L_004846fa;
L_004846ea:; BB(0x004846ea);
    /* 004846ea: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004846ed: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4846f2u); f_005e8590();
    /* 004846f2: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 004846f8: jmp 0x484704 */ goto L_00484704;
L_004846fa:; BB(0x004846fa);
    /* 004846fa: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_00484704:; BB(0x00484704);
    /* 00484704: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048470a: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 00484710: mov dword ptr [ecx + 0xc4], edx */ W32((u32)(r_ecx+0xc4u), r_edx);
    /* 00484716: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048471c: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00484722: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484728: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0048472b: push 0x6f6b1c */ { u32 v = 0x6f6b1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00484730: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484736: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0048473c: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484742: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00484748: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048474a: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x48474du); call_ind(t); }
    /* 0048474d: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0048474f: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484755: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0048475b: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x484760u); f_005e87aa();
    /* 00484760: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484766: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 0048476c: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484772: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00484778: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048477a: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48477du); call_ind(t); }
    /* 0048477d: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00484782: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484788: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0048478e: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x484793u); f_005e8740();
    /* 00484793: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00484795: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048479b: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 004847a1: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x4847a6u); f_005e8775();
    /* 004847a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004847a8: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004847ae: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 004847b4: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004847ba: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 004847c0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004847c2: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4847c5u); call_ind(t); }
    /* 004847c5: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004847c7: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004847cd: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 004847d3: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x4847d8u); f_005e8e99();
    /* 004847d8: push 0xe9 */ { u32 v = 0xe9u; r_esp -= 4; W32(r_esp, v); }
    /* 004847dd: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004847df: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004847e5: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 004847eb: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004847f1: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 004847f7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004847f9: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x4847fcu); call_ind(t); }
L_004847fc:; BB(0x004847fc);
    /* 004847fc: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484802: cmp dword ptr [ecx + 0xc8], 0 */ {  u32 a = R32((u32)(r_ecx+0xc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484809: jne 0x4848e5 */ if (!fZ) goto L_004848e5;
L_0048480f:; BB(0x0048480f);
    /* 0048480f: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00484811: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x484816u); f_0048ab58();
    /* 00484816: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484819: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0048481f: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484826: je 0x48483b */ if (fZ) goto L_0048483b;
L_00484828:; BB(0x00484828);
    /* 00484828: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0048482e: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x484833u); f_005e9d30();
    /* 00484833: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00484839: jmp 0x484845 */ goto L_00484845;
L_0048483b:; BB(0x0048483b);
    /* 0048483b: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_00484845:; BB(0x00484845);
    /* 00484845: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048484b: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 00484851: mov dword ptr [edx + 0xc8], eax */ W32((u32)(r_edx+0xc8u), r_eax);
    /* 00484857: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048485d: mov edx, dword ptr [ecx + 0xc8] */ r_edx = R32((u32)(r_ecx+0xc8u));
    /* 00484863: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484869: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0048486c: push 0x428 */ { u32 v = 0x428u; r_esp -= 4; W32(r_esp, v); }
    /* 00484871: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484877: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 0048487d: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x484882u); f_005ea0c3();
    /* 00484882: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484888: mov ecx, dword ptr [edx + 0xc8] */ r_ecx = R32((u32)(r_edx+0xc8u));
    /* 0048488e: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484894: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 0048489a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048489c: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x48489fu); call_ind(t); }
    /* 0048489f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004848a1: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004848a7: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 004848ad: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004848b3: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 004848b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004848bb: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4848beu); call_ind(t); }
    /* 004848be: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 004848c3: push 0xed */ { u32 v = 0xedu; r_esp -= 4; W32(r_esp, v); }
    /* 004848c8: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004848ce: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 004848d4: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004848da: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 004848e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004848e2: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4848e5u); call_ind(t); }
L_004848e5:; BB(0x004848e5);
    /* 004848e5: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004848eb: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004848f2: jne 0x484a1e */ if (!fZ) goto L_00484a1e;
L_004848f8:; BB(0x004848f8);
    /* 004848f8: push 0x89c */ { u32 v = 0x89cu; r_esp -= 4; W32(r_esp, v); }
    /* 004848fd: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x484902u); f_0048ab58();
    /* 00484902: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484905: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0048490b: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484912: je 0x484927 */ if (fZ) goto L_00484927;
L_00484914:; BB(0x00484914);
    /* 00484914: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0048491a: call 0x489644 */ r_esp -= 4; W32(r_esp, 0x48491fu); f_00489644();
    /* 0048491f: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00484925: jmp 0x484931 */ goto L_00484931;
L_00484927:; BB(0x00484927);
    /* 00484927: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_00484931:; BB(0x00484931);
    /* 00484931: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484937: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0048493d: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00484943: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484949: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0048494f: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484955: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00484958: push 0x6f6b20 */ { u32 v = 0x6f6b20u; r_esp -= 4; W32(r_esp, v); }
    /* 0048495d: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484963: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00484969: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048496f: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00484975: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484977: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x48497au); call_ind(t); }
    /* 0048497a: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484980: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00484986: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048498c: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00484992: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484994: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x484997u); call_ind(t); }
    /* 00484997: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00484999: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048499f: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 004849a5: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4849aau); f_005e87aa();
    /* 004849aa: push 0x10a */ { u32 v = 0x10au; r_esp -= 4; W32(r_esp, v); }
    /* 004849af: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 004849b4: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004849ba: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 004849c0: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004849c6: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 004849cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004849ce: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4849d1u); call_ind(t); }
    /* 004849d1: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004849d6: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004849dc: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 004849e2: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x4849e7u); f_005e8740();
    /* 004849e7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004849e9: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004849ef: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 004849f5: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x4849fau); f_005e8775();
    /* 004849fa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004849fc: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484a02: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 00484a08: call 0x45378f */ r_esp -= 4; W32(r_esp, 0x484a0du); f_0045378f();
    /* 00484a0d: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484a13: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00484a19: call 0x4534e5 */ r_esp -= 4; W32(r_esp, 0x484a1eu); f_004534e5();
L_00484a1e:; BB(0x00484a1e);
    /* 00484a1e: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484a24: cmp dword ptr [ecx + 0xd0], 0 */ {  u32 a = R32((u32)(r_ecx+0xd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484a2b: jne 0x484aca */ if (!fZ) goto L_00484aca;
L_00484a31:; BB(0x00484a31);
    /* 00484a31: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00484a33: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x484a38u); f_0048ab58();
    /* 00484a38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484a3b: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00484a41: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484a48: je 0x484a5d */ if (fZ) goto L_00484a5d;
L_00484a4a:; BB(0x00484a4a);
    /* 00484a4a: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00484a50: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x484a55u); f_005d505b();
    /* 00484a55: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00484a5b: jmp 0x484a67 */ goto L_00484a67;
L_00484a5d:; BB(0x00484a5d);
    /* 00484a5d: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_00484a67:; BB(0x00484a67);
    /* 00484a67: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484a6d: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00484a73: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 00484a79: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484a7f: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00484a85: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484a8b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00484a8e: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484a94: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 00484a9a: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484aa0: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00484aa6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484aa8: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x484aabu); call_ind(t); }
    /* 00484aab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00484aad: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484ab3: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00484ab9: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484abf: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00484ac5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484ac7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x484acau); call_ind(t); }
L_00484aca:; BB(0x00484aca);
    /* 00484aca: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00484ad1: jmp 0x484adc */ goto L_00484adc;
L_00484ad3:; BB(0x00484ad3);
    /* 00484ad3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484ad6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00484ad9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_00484adc:; BB(0x00484adc);
    /* 00484adc: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484ae0: jge 0x484cc2 */ if ((fS==fO)) goto L_00484cc2;
L_00484ae6:; BB(0x00484ae6);
    /* 00484ae6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484ae9: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484aef: cmp dword ptr [edx + ecx*4 + 0xd4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484af7: jne 0x484cbd */ if (!fZ) goto L_00484cbd;
L_00484afd:; BB(0x00484afd);
    /* 00484afd: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00484b02: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x484b07u); f_0048ab58();
    /* 00484b07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484b0a: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00484b10: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484b17: je 0x484b3a */ if (fZ) goto L_00484b3a;
L_00484b19:; BB(0x00484b19);
    /* 00484b19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00484b1b: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484b1f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00484b22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484b23: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484b26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484b27: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00484b2d: call 0x489881 */ r_esp -= 4; W32(r_esp, 0x484b32u); f_00489881();
    /* 00484b32: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 00484b38: jmp 0x484b44 */ goto L_00484b44;
L_00484b3a:; BB(0x00484b3a);
    /* 00484b3a: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_00484b44:; BB(0x00484b44);
    /* 00484b44: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484b47: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484b4d: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 00484b53: mov dword ptr [eax + edx*4 + 0xd4], ecx */ W32((u32)(r_eax+r_edx*4+0xd4u), r_ecx);
    /* 00484b5a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484b5d: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484b63: mov ecx, dword ptr [eax + edx*4 + 0xd4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xd4u));
    /* 00484b6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484b6b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484b71: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 00484b77: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x484b7cu); f_005d50ed();
    /* 00484b7c: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484b80: jne 0x484b8e */ if (!fZ) goto L_00484b8e;
L_00484b82:; BB(0x00484b82);
    /* 00484b82: mov dword ptr [ebp - 0xf0], 0x6869c0 */ W32((u32)(r_ebp+0xffffff10u), 0x6869c0u);
    /* 00484b8c: jmp 0x484b98 */ goto L_00484b98;
L_00484b8e:; BB(0x00484b8e);
    /* 00484b8e: mov dword ptr [ebp - 0xf0], 0x6869d4 */ W32((u32)(r_ebp+0xffffff10u), 0x6869d4u);
L_00484b98:; BB(0x00484b98);
    /* 00484b98: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00484b9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484b9f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484ba2: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484ba8: mov ecx, dword ptr [edx + ecx*4 + 0xd4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xd4u));
    /* 00484baf: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484bb2: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484bb8: mov eax, dword ptr [edx + eax*4 + 0xd4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xd4u));
    /* 00484bbf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484bc1: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x484bc4u); call_ind(t); }
    /* 00484bc4: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00484bc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00484bc8: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00484bca: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484bcd: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484bd3: mov ecx, dword ptr [ecx + eax*4 + 0xd4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xd4u));
    /* 00484bda: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484bdd: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484be3: mov edx, dword ptr [eax + edx*4 + 0xd4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xd4u));
    /* 00484bea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00484bec: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x484befu); call_ind(t); }
    /* 00484bef: push 0x427 */ { u32 v = 0x427u; r_esp -= 4; W32(r_esp, v); }
    /* 00484bf4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484bf7: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484bfd: mov ecx, dword ptr [edx + ecx*4 + 0xd4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xd4u));
    /* 00484c04: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484c07: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484c0d: mov eax, dword ptr [edx + eax*4 + 0xd4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xd4u));
    /* 00484c14: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484c16: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x484c19u); call_ind(t); }
    /* 00484c19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00484c1b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00484c1d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484c20: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484c26: mov ecx, dword ptr [ecx + eax*4 + 0xd4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xd4u));
    /* 00484c2d: call 0x5d7422 */ r_esp -= 4; W32(r_esp, 0x484c32u); f_005d7422();
    /* 00484c32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00484c34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00484c36: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484c39: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484c3f: mov ecx, dword ptr [eax + edx*4 + 0xd4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xd4u));
    /* 00484c46: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484c49: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484c4f: mov edx, dword ptr [eax + edx*4 + 0xd4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xd4u));
    /* 00484c56: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00484c58: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x484c5bu); call_ind(t); }
    /* 00484c5b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484c5e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00484c60: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00484c62: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00484c65: add ecx, 0xcf */ {  u32 a = r_ecx; u32 b = 0xcfu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00484c6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484c6c: push 0xda */ { u32 v = 0xdau; r_esp -= 4; W32(r_esp, v); }
    /* 00484c71: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484c74: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484c7a: mov ecx, dword ptr [eax + edx*4 + 0xd4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xd4u));
    /* 00484c81: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484c84: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484c8a: mov edx, dword ptr [eax + edx*4 + 0xd4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xd4u));
    /* 00484c91: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00484c93: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x484c96u); call_ind(t); }
    /* 00484c96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00484c98: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484c9b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484ca1: mov ecx, dword ptr [edx + ecx*4 + 0xd4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xd4u));
    /* 00484ca8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484cab: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484cb1: mov eax, dword ptr [edx + eax*4 + 0xd4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xd4u));
    /* 00484cb8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484cba: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x484cbdu); call_ind(t); }
L_00484cbd:; BB(0x00484cbd);
    /* 00484cbd: jmp 0x484ad3 */ goto L_00484ad3;
L_00484cc2:; BB(0x00484cc2);
    /* 00484cc2: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484cc8: cmp dword ptr [eax + 0xdc], 0 */ {  u32 a = R32((u32)(r_eax+0xdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484ccf: jne 0x484dcd */ if (!fZ) goto L_00484dcd;
L_00484cd5:; BB(0x00484cd5);
    /* 00484cd5: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00484cda: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x484cdfu); f_0048ab58();
    /* 00484cdf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484ce2: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00484ce8: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484cef: je 0x484d04 */ if (fZ) goto L_00484d04;
L_00484cf1:; BB(0x00484cf1);
    /* 00484cf1: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00484cf7: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x484cfcu); f_005e8590();
    /* 00484cfc: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 00484d02: jmp 0x484d0e */ goto L_00484d0e;
L_00484d04:; BB(0x00484d04);
    /* 00484d04: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_00484d0e:; BB(0x00484d0e);
    /* 00484d0e: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484d14: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 00484d1a: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 00484d20: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484d26: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00484d2c: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484d32: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00484d35: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00484d37: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484d3d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00484d43: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x484d48u); f_005e87aa();
    /* 00484d48: push 0x6869ec */ { u32 v = 0x6869ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00484d4d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484d53: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 00484d59: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484d5f: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00484d65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484d67: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x484d6au); call_ind(t); }
    /* 00484d6a: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484d70: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00484d76: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484d7c: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00484d82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484d84: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x484d87u); call_ind(t); }
    /* 00484d87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00484d89: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484d8f: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00484d95: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484d9b: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00484da1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484da3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x484da6u); call_ind(t); }
    /* 00484da6: push 0xbe */ { u32 v = 0xbeu; r_esp -= 4; W32(r_esp, v); }
    /* 00484dab: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00484db0: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484db6: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00484dbc: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484dc2: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00484dc8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484dca: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x484dcdu); call_ind(t); }
L_00484dcd:; BB(0x00484dcd);
    /* 00484dcd: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484dd3: cmp dword ptr [eax + 0xe0], 0 */ {  u32 a = R32((u32)(r_eax+0xe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484dda: jne 0x484ed8 */ if (!fZ) goto L_00484ed8;
L_00484de0:; BB(0x00484de0);
    /* 00484de0: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00484de5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x484deau); f_0048ab58();
    /* 00484dea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484ded: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00484df3: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484dfa: je 0x484e0f */ if (fZ) goto L_00484e0f;
L_00484dfc:; BB(0x00484dfc);
    /* 00484dfc: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00484e02: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x484e07u); f_005e8590();
    /* 00484e07: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 00484e0d: jmp 0x484e19 */ goto L_00484e19;
L_00484e0f:; BB(0x00484e0f);
    /* 00484e0f: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_00484e19:; BB(0x00484e19);
    /* 00484e19: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484e1f: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 00484e25: mov dword ptr [ecx + 0xe0], edx */ W32((u32)(r_ecx+0xe0u), r_edx);
    /* 00484e2b: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484e31: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 00484e37: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484e3d: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00484e40: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00484e42: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484e48: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 00484e4e: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x484e53u); f_005e87aa();
    /* 00484e53: push 0x686a00 */ { u32 v = 0x686a00u; r_esp -= 4; W32(r_esp, v); }
    /* 00484e58: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484e5e: mov ecx, dword ptr [ecx + 0xe0] */ r_ecx = R32((u32)(r_ecx+0xe0u));
    /* 00484e64: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484e6a: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00484e70: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484e72: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x484e75u); call_ind(t); }
    /* 00484e75: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484e7b: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 00484e81: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484e87: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00484e8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484e8f: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x484e92u); call_ind(t); }
    /* 00484e92: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00484e94: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484e9a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 00484ea0: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484ea6: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00484eac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484eae: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x484eb1u); call_ind(t); }
    /* 00484eb1: push 0x10a */ { u32 v = 0x10au; r_esp -= 4; W32(r_esp, v); }
    /* 00484eb6: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 00484ebb: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484ec1: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 00484ec7: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484ecd: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00484ed3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484ed5: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x484ed8u); call_ind(t); }
L_00484ed8:; BB(0x00484ed8);
    /* 00484ed8: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484ede: call 0x486f4e */ r_esp -= 4; W32(r_esp, 0x484ee3u); f_00486f4e();
    /* 00484ee3: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484ee9: cmp dword ptr [eax + 0xe4], 0 */ {  u32 a = R32((u32)(r_eax+0xe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484ef0: jne 0x48501c */ if (!fZ) goto L_0048501c;
L_00484ef6:; BB(0x00484ef6);
    /* 00484ef6: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00484efb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x484f00u); f_0048ab58();
    /* 00484f00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484f03: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00484f09: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484f10: je 0x484f25 */ if (fZ) goto L_00484f25;
L_00484f12:; BB(0x00484f12);
    /* 00484f12: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00484f18: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x484f1du); f_005e8590();
    /* 00484f1d: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 00484f23: jmp 0x484f2f */ goto L_00484f2f;
L_00484f25:; BB(0x00484f25);
    /* 00484f25: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_00484f2f:; BB(0x00484f2f);
    /* 00484f2f: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484f35: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 00484f3b: mov dword ptr [ecx + 0xe4], edx */ W32((u32)(r_ecx+0xe4u), r_edx);
    /* 00484f41: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484f47: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00484f4d: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484f53: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00484f56: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00484f58: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484f5e: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00484f64: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x484f69u); f_005e87aa();
    /* 00484f69: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484f6f: add ecx, 0x1d41 */ {  u32 a = r_ecx; u32 b = 0x1d41u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00484f75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484f76: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484f7c: mov ecx, dword ptr [edx + 0xe4] */ r_ecx = R32((u32)(r_edx+0xe4u));
    /* 00484f82: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484f88: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 00484f8e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00484f90: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x484f93u); call_ind(t); }
    /* 00484f93: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484f99: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 00484f9f: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484fa5: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 00484fab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484fad: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x484fb0u); call_ind(t); }
    /* 00484fb0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00484fb2: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484fb8: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00484fbe: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484fc4: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 00484fca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00484fcc: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x484fcfu); call_ind(t); }
    /* 00484fcf: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00484fd4: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484fda: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00484fe0: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x484fe5u); f_005e8740();
    /* 00484fe5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00484fe7: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00484fed: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 00484ff3: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x484ff8u); f_005e8775();
    /* 00484ff8: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 00484ffd: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00484fff: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485005: mov ecx, dword ptr [edx + 0xe4] */ r_ecx = R32((u32)(r_edx+0xe4u));
    /* 0048500b: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485011: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 00485017: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00485019: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x48501cu); call_ind(t); }
L_0048501c:; BB(0x0048501c);
    /* 0048501c: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485022: cmp dword ptr [ecx + 0xe8], 0 */ {  u32 a = R32((u32)(r_ecx+0xe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485029: jne 0x4850a4 */ if (!fZ) goto L_004850a4;
L_0048502b:; BB(0x0048502b);
    /* 0048502b: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00485030: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x485035u); f_0048ab58();
    /* 00485035: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485038: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0048503e: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485045: je 0x48505a */ if (fZ) goto L_0048505a;
L_00485047:; BB(0x00485047);
    /* 00485047: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0048504d: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x485052u); f_005e8590();
    /* 00485052: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00485058: jmp 0x485064 */ goto L_00485064;
L_0048505a:; BB(0x0048505a);
    /* 0048505a: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_00485064:; BB(0x00485064);
    /* 00485064: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048506a: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 00485070: mov dword ptr [edx + 0xe8], eax */ W32((u32)(r_edx+0xe8u), r_eax);
    /* 00485076: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00485078: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0048507a: push 0x147 */ { u32 v = 0x147u; r_esp -= 4; W32(r_esp, v); }
    /* 0048507f: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00485081: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00485083: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 00485085: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00485087: push 0x6f6b24 */ { u32 v = 0x6f6b24u; r_esp -= 4; W32(r_esp, v); }
    /* 0048508c: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485092: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 00485098: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485099: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048509f: call 0x5d851e */ r_esp -= 4; W32(r_esp, 0x4850a4u); f_005d851e();
L_004850a4:; BB(0x004850a4);
    /* 004850a4: mov dword ptr [ebp - 0x20], 0x14 */ W32((u32)(r_ebp+0xffffffe0u), 0x14u);
    /* 004850ab: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004850b1: cmp dword ptr [eax + 0xec], 0 */ {  u32 a = R32((u32)(r_eax+0xecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004850b8: jne 0x4851f6 */ if (!fZ) goto L_004851f6;
L_004850be:; BB(0x004850be);
    /* 004850be: push 0x89c */ { u32 v = 0x89cu; r_esp -= 4; W32(r_esp, v); }
    /* 004850c3: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4850c8u); f_0048ab58();
    /* 004850c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004850cb: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 004850d1: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004850d8: je 0x4850ed */ if (fZ) goto L_004850ed;
L_004850da:; BB(0x004850da);
    /* 004850da: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 004850e0: call 0x4891a3 */ r_esp -= 4; W32(r_esp, 0x4850e5u); f_004891a3();
    /* 004850e5: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 004850eb: jmp 0x4850f7 */ goto L_004850f7;
L_004850ed:; BB(0x004850ed);
    /* 004850ed: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_004850f7:; BB(0x004850f7);
    /* 004850f7: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004850fd: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00485103: mov dword ptr [ecx + 0xec], edx */ W32((u32)(r_ecx+0xecu), r_edx);
    /* 00485109: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048510f: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00485115: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048511b: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0048511e: push 0x6f6b28 */ { u32 v = 0x6f6b28u; r_esp -= 4; W32(r_esp, v); }
    /* 00485123: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485129: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 0048512f: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485135: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0048513b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048513d: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x485140u); call_ind(t); }
    /* 00485140: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485146: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 0048514c: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485152: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00485158: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048515a: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48515du); call_ind(t); }
    /* 0048515d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048515f: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485165: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 0048516b: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x485170u); f_005e87aa();
    /* 00485170: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00485172: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485178: mov ecx, dword ptr [ecx + 0xec] */ r_ecx = R32((u32)(r_ecx+0xecu));
    /* 0048517e: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x485183u); f_005e8e99();
    /* 00485183: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 00485188: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0048518a: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485190: mov ecx, dword ptr [edx + 0xec] */ r_ecx = R32((u32)(r_edx+0xecu));
    /* 00485196: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048519c: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 004851a2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004851a4: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x4851a7u); call_ind(t); }
    /* 004851a7: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 004851a9: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004851af: mov ecx, dword ptr [ecx + 0xec] */ r_ecx = R32((u32)(r_ecx+0xecu));
    /* 004851b5: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x4851bau); f_005e8740();
    /* 004851ba: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004851bc: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004851c2: mov ecx, dword ptr [edx + 0xec] */ r_ecx = R32((u32)(r_edx+0xecu));
    /* 004851c8: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x4851cdu); f_005e8775();
    /* 004851cd: push 0x1783 */ { u32 v = 0x1783u; r_esp -= 4; W32(r_esp, v); }
    /* 004851d2: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004851d8: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 004851de: call 0x45375c */ r_esp -= 4; W32(r_esp, 0x4851e3u); f_0045375c();
    /* 004851e3: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004851e5: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004851eb: mov ecx, dword ptr [ecx + 0xec] */ r_ecx = R32((u32)(r_ecx+0xecu));
    /* 004851f1: call 0x45378f */ r_esp -= 4; W32(r_esp, 0x4851f6u); f_0045378f();
L_004851f6:; BB(0x004851f6);
    /* 004851f6: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004851fc: cmp dword ptr [edx + 0xf0], 0 */ {  u32 a = R32((u32)(r_edx+0xf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485203: jne 0x4852dc */ if (!fZ) goto L_004852dc;
L_00485209:; BB(0x00485209);
    /* 00485209: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048520b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x485210u); f_0048ab58();
    /* 00485210: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485213: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00485219: cmp dword ptr [ebp - 0xa8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485220: je 0x485235 */ if (fZ) goto L_00485235;
L_00485222:; BB(0x00485222);
    /* 00485222: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00485228: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x48522du); f_005e9d30();
    /* 0048522d: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 00485233: jmp 0x48523f */ goto L_0048523f;
L_00485235:; BB(0x00485235);
    /* 00485235: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_0048523f:; BB(0x0048523f);
    /* 0048523f: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485245: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0048524b: mov dword ptr [eax + 0xf0], ecx */ W32((u32)(r_eax+0xf0u), r_ecx);
    /* 00485251: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485257: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0048525d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485263: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00485266: push 0x428 */ { u32 v = 0x428u; r_esp -= 4; W32(r_esp, v); }
    /* 0048526b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485271: mov ecx, dword ptr [edx + 0xf0] */ r_ecx = R32((u32)(r_edx+0xf0u));
    /* 00485277: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48527cu); f_005ea0c3();
    /* 0048527c: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485282: mov ecx, dword ptr [eax + 0xf0] */ r_ecx = R32((u32)(r_eax+0xf0u));
    /* 00485288: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048528e: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00485294: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485296: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x485299u); call_ind(t); }
    /* 00485299: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048529b: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004852a1: mov ecx, dword ptr [eax + 0xf0] */ r_ecx = R32((u32)(r_eax+0xf0u));
    /* 004852a7: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004852ad: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 004852b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004852b5: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4852b8u); call_ind(t); }
    /* 004852b8: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 004852bd: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004852bf: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004852c5: mov ecx, dword ptr [eax + 0xf0] */ r_ecx = R32((u32)(r_eax+0xf0u));
    /* 004852cb: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004852d1: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 004852d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004852d9: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4852dcu); call_ind(t); }
L_004852dc:; BB(0x004852dc);
    /* 004852dc: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004852e2: cmp dword ptr [eax + 0xf4], 0 */ {  u32 a = R32((u32)(r_eax+0xf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004852e9: jne 0x4853e4 */ if (!fZ) goto L_004853e4;
L_004852ef:; BB(0x004852ef);
    /* 004852ef: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 004852f4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4852f9u); f_0048ab58();
    /* 004852f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004852fc: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00485302: cmp dword ptr [ebp - 0xac], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485309: je 0x48531e */ if (fZ) goto L_0048531e;
L_0048530b:; BB(0x0048530b);
    /* 0048530b: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00485311: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x485316u); f_005e8590();
    /* 00485316: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 0048531c: jmp 0x485328 */ goto L_00485328;
L_0048531e:; BB(0x0048531e);
    /* 0048531e: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
L_00485328:; BB(0x00485328);
    /* 00485328: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048532e: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00485334: mov dword ptr [ecx + 0xf4], edx */ W32((u32)(r_ecx+0xf4u), r_edx);
    /* 0048533a: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485340: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 00485346: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048534c: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0048534f: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00485351: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485357: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 0048535d: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x485362u); f_005e87aa();
    /* 00485362: push 0x686a04 */ { u32 v = 0x686a04u; r_esp -= 4; W32(r_esp, v); }
    /* 00485367: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048536d: mov ecx, dword ptr [ecx + 0xf4] */ r_ecx = R32((u32)(r_ecx+0xf4u));
    /* 00485373: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485379: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0048537f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485381: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x485384u); call_ind(t); }
    /* 00485384: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048538a: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 00485390: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485396: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0048539c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048539e: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4853a1u); call_ind(t); }
    /* 004853a1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004853a3: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004853a9: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 004853af: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004853b5: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 004853bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004853bd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4853c0u); call_ind(t); }
    /* 004853c0: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 004853c5: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004853c7: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004853cd: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 004853d3: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004853d9: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 004853df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004853e1: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4853e4u); call_ind(t); }
L_004853e4:; BB(0x004853e4);
    /* 004853e4: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004853ea: cmp dword ptr [eax + 0xf8], 0 */ {  u32 a = R32((u32)(r_eax+0xf8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004853f1: jne 0x4854c7 */ if (!fZ) goto L_004854c7;
L_004853f7:; BB(0x004853f7);
    /* 004853f7: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004853f9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4853feu); f_0048ab58();
    /* 004853fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485401: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00485407: cmp dword ptr [ebp - 0xb0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048540e: je 0x485423 */ if (fZ) goto L_00485423;
L_00485410:; BB(0x00485410);
    /* 00485410: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00485416: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x48541bu); f_005e9d30();
    /* 0048541b: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 00485421: jmp 0x48542d */ goto L_0048542d;
L_00485423:; BB(0x00485423);
    /* 00485423: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
L_0048542d:; BB(0x0048542d);
    /* 0048542d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485433: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00485439: mov dword ptr [ecx + 0xf8], edx */ W32((u32)(r_ecx+0xf8u), r_edx);
    /* 0048543f: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485445: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 0048544b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485451: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00485454: push 0x527 */ { u32 v = 0x527u; r_esp -= 4; W32(r_esp, v); }
    /* 00485459: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048545f: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 00485465: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48546au); f_005ea0c3();
    /* 0048546a: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485470: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 00485476: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048547c: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00485482: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485484: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x485487u); call_ind(t); }
    /* 00485487: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00485489: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048548f: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 00485495: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048549b: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 004854a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004854a3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4854a6u); call_ind(t); }
    /* 004854a6: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004854a8: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004854aa: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004854b0: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 004854b6: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004854bc: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 004854c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004854c4: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4854c7u); call_ind(t); }
L_004854c7:; BB(0x004854c7);
    /* 004854c7: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004854cd: call 0x485bbe */ r_esp -= 4; W32(r_esp, 0x4854d2u); f_00485bbe();
    /* 004854d2: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004854d4: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 004854d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004854d8: push 0x6f6b2c */ { u32 v = 0x6f6b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004854dd: push 0x686a0c */ { u32 v = 0x686a0cu; r_esp -= 4; W32(r_esp, v); }
    /* 004854e2: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 004854e8: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 004854eb: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 004854f1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004854f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004854f6: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4854f9u); call_ind(t); }
    /* 004854f9: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004854ff: cmp dword ptr [eax + 0x1d14], 0 */ {  u32 a = R32((u32)(r_eax+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485506: je 0x48555a */ if (fZ) goto L_0048555a;
L_00485508:; BB(0x00485508);
    /* 00485508: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048550e: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00485514: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x485519u); f_005de399();
    /* 00485519: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048551b: jne 0x48553e */ if (!fZ) goto L_0048553e;
L_0048551d:; BB(0x0048551d);
    /* 0048551d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048551f: push 0x6f6b30 */ { u32 v = 0x6f6b30u; r_esp -= 4; W32(r_esp, v); }
    /* 00485524: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00485526: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048552c: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x485531u); f_00487680();
    /* 00485531: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485537: call 0x486fe6 */ r_esp -= 4; W32(r_esp, 0x48553cu); f_00486fe6();
    /* 0048553c: jmp 0x485555 */ goto L_00485555;
L_0048553e:; BB(0x0048553e);
    /* 0048553e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00485540: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00485543: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485544: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0048554a: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00485550: call 0x5de7d3 */ r_esp -= 4; W32(r_esp, 0x485555u); f_005de7d3();
L_00485555:; BB(0x00485555);
    /* 00485555: jmp 0x4855ef */ goto L_004855ef;
L_0048555a:; BB(0x0048555a);
    /* 0048555a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048555c: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485562: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 00485568: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048556b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048556c: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485572: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00485578: call 0x5def48 */ r_esp -= 4; W32(r_esp, 0x48557du); f_005def48();
    /* 0048557d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048557f: je 0x4855a6 */ if (fZ) goto L_004855a6;
L_00485581:; BB(0x00485581);
    /* 00485581: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00485583: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485589: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 0048558f: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00485592: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485593: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00485599: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0048559f: call 0x5de7d3 */ r_esp -= 4; W32(r_esp, 0x4855a4u); f_005de7d3();
    /* 004855a4: jmp 0x4855ef */ goto L_004855ef;
L_004855a6:; BB(0x004855a6);
    /* 004855a6: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004855ac: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 004855b2: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x4855b7u); f_005de399();
    /* 004855b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004855b9: jne 0x4855dc */ if (!fZ) goto L_004855dc;
L_004855bb:; BB(0x004855bb);
    /* 004855bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004855bd: push 0x6f6b34 */ { u32 v = 0x6f6b34u; r_esp -= 4; W32(r_esp, v); }
    /* 004855c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004855c4: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004855ca: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x4855cfu); f_00487680();
    /* 004855cf: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004855d5: call 0x486fe6 */ r_esp -= 4; W32(r_esp, 0x4855dau); f_00486fe6();
    /* 004855da: jmp 0x4855ef */ goto L_004855ef;
L_004855dc:; BB(0x004855dc);
    /* 004855dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004855de: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004855e4: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 004855ea: call 0x5de705 */ r_esp -= 4; W32(r_esp, 0x4855efu); f_005de705();
L_004855ef:; BB(0x004855ef);
    /* 004855ef: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004855f5: call 0x485602 */ r_esp -= 4; W32(r_esp, 0x4855fau); f_00485602();
    /* 004855fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004855fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004855fc: mov esp, ebp */ r_esp = r_ebp;
    /* 004855fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004855ff: ret 4 */ FN_RET(0x00483e0e); r_esp += 8; return;
}

void f_00485602(void) /* FUN_00485602 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00485602);
    /* 00485602: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00485603: mov ebp, esp */ r_ebp = r_esp;
    /* 00485605: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00485608: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048560b: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00485610: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00485613: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x485618u); f_00448ca3();
    /* 00485618: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048561a: je 0x4856f8 */ if (fZ) goto L_004856f8;
L_00485620:; BB(0x00485620);
    /* 00485620: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485623: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 00485629: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048562c: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00485632: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485634: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x485637u); call_ind(t); }
    /* 00485637: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048563a: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 00485640: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485643: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00485649: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048564b: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x48564eu); call_ind(t); }
    /* 0048564e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485651: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00485657: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048565a: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00485660: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485662: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x485665u); call_ind(t); }
    /* 00485665: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485668: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 0048566e: call 0x489233 */ r_esp -= 4; W32(r_esp, 0x485673u); f_00489233();
    /* 00485673: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485676: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 0048567c: call 0x4534e5 */ r_esp -= 4; W32(r_esp, 0x485681u); f_004534e5();
    /* 00485681: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00485687: jmp 0x485695 */ goto L_00485695;
L_00485689:; BB(0x00485689);
    /* 00485689: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0048568d: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00485691: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00485695:; BB(0x00485695);
    /* 00485695: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485699: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048569c: jge 0x4856c1 */ if ((fS==fO)) goto L_004856c1;
L_0048569e:; BB(0x0048569e);
    /* 0048569e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004856a2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004856a5: mov ecx, dword ptr [edx + ecx*4 + 0xd4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xd4u));
    /* 004856ac: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004856b0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004856b3: mov eax, dword ptr [edx + eax*4 + 0xd4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xd4u));
    /* 004856ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004856bc: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x4856bfu); call_ind(t); }
    /* 004856bf: jmp 0x485689 */ goto L_00485689;
L_004856c1:; BB(0x004856c1);
    /* 004856c1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004856c4: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 004856ca: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x4856cfu); f_005de399();
    /* 004856cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004856d1: jne 0x4856f8 */ if (!fZ) goto L_004856f8;
L_004856d3:; BB(0x004856d3);
    /* 004856d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004856d6: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 004856dc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004856df: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004856e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004856e7: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x4856eau); call_ind(t); }
    /* 004856ea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004856ed: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 004856f3: call 0x5e7208 */ r_esp -= 4; W32(r_esp, 0x4856f8u); f_005e7208();
L_004856f8:; BB(0x004856f8);
    /* 004856f8: mov esp, ebp */ r_esp = r_ebp;
    /* 004856fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004856fb: ret  */ FN_RET(0x00485602); r_esp += 4; return;
}

void f_004856fc(void) /* FUN_004856fc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004856fc);
    /* 004856fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004856fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004856ff: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00485702: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00485705: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485708: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x48570du); f_005e030e();
    /* 0048570d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00485714: jmp 0x48571f */ goto L_0048571f;
L_00485716:; BB(0x00485716);
    /* 00485716: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00485719: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048571c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048571f:; BB(0x0048571f);
    /* 0048571f: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485723: jge 0x485746 */ if ((fS==fO)) goto L_00485746;
L_00485725:; BB(0x00485725);
    /* 00485725: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00485728: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048572b: mov ecx, dword ptr [edx + ecx*4 + 0x98] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 00485732: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00485735: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485738: mov eax, dword ptr [edx + eax*4 + 0x98] */ r_eax = R32((u32)(r_edx+r_eax*4+0x98u));
    /* 0048573f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485741: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x485744u); call_ind(t); }
    /* 00485744: jmp 0x485716 */ goto L_00485716;
L_00485746:; BB(0x00485746);
    /* 00485746: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048574d: jmp 0x485758 */ goto L_00485758;
L_0048574f:; BB(0x0048574f);
    /* 0048574f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00485752: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00485755: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00485758:; BB(0x00485758);
    /* 00485758: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048575c: jge 0x48577f */ if ((fS==fO)) goto L_0048577f;
L_0048575e:; BB(0x0048575e);
    /* 0048575e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00485761: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485764: mov ecx, dword ptr [edx + ecx*4 + 0xa4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 0048576b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048576e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485771: mov eax, dword ptr [edx + eax*4 + 0xa4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa4u));
    /* 00485778: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048577a: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48577du); call_ind(t); }
    /* 0048577d: jmp 0x48574f */ goto L_0048574f;
L_0048577f:; BB(0x0048577f);
    /* 0048577f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485782: cmp dword ptr [eax + 0xb8], 0 */ {  u32 a = R32((u32)(r_eax+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485789: je 0x4857a2 */ if (fZ) goto L_004857a2;
L_0048578b:; BB(0x0048578b);
    /* 0048578b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048578e: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00485794: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485797: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0048579d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048579f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4857a2u); call_ind(t); }
L_004857a2:; BB(0x004857a2);
    /* 004857a2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004857a5: cmp dword ptr [eax + 0xbc], 0 */ {  u32 a = R32((u32)(r_eax+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004857ac: je 0x4857c5 */ if (fZ) goto L_004857c5;
L_004857ae:; BB(0x004857ae);
    /* 004857ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004857b1: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 004857b7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004857ba: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 004857c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004857c2: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4857c5u); call_ind(t); }
L_004857c5:; BB(0x004857c5);
    /* 004857c5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004857c8: cmp dword ptr [eax + 0xc0], 0 */ {  u32 a = R32((u32)(r_eax+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004857cf: je 0x4857e8 */ if (fZ) goto L_004857e8;
L_004857d1:; BB(0x004857d1);
    /* 004857d1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004857d4: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 004857da: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004857dd: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 004857e3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004857e5: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4857e8u); call_ind(t); }
L_004857e8:; BB(0x004857e8);
    /* 004857e8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004857eb: cmp dword ptr [eax + 0xc4], 0 */ {  u32 a = R32((u32)(r_eax+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004857f2: je 0x48580b */ if (fZ) goto L_0048580b;
L_004857f4:; BB(0x004857f4);
    /* 004857f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004857f7: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 004857fd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485800: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00485806: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485808: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48580bu); call_ind(t); }
L_0048580b:; BB(0x0048580b);
    /* 0048580b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048580e: cmp dword ptr [eax + 0xc8], 0 */ {  u32 a = R32((u32)(r_eax+0xc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485815: je 0x48582e */ if (fZ) goto L_0048582e;
L_00485817:; BB(0x00485817);
    /* 00485817: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048581a: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 00485820: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485823: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00485829: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048582b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48582eu); call_ind(t); }
L_0048582e:; BB(0x0048582e);
    /* 0048582e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485831: cmp dword ptr [eax + 0xf0], 0 */ {  u32 a = R32((u32)(r_eax+0xf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485838: je 0x485851 */ if (fZ) goto L_00485851;
L_0048583a:; BB(0x0048583a);
    /* 0048583a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048583d: mov ecx, dword ptr [ecx + 0xf0] */ r_ecx = R32((u32)(r_ecx+0xf0u));
    /* 00485843: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485846: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0048584c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048584e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x485851u); call_ind(t); }
L_00485851:; BB(0x00485851);
    /* 00485851: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485854: cmp dword ptr [eax + 0xf4], 0 */ {  u32 a = R32((u32)(r_eax+0xf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048585b: je 0x485874 */ if (fZ) goto L_00485874;
L_0048585d:; BB(0x0048585d);
    /* 0048585d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485860: mov ecx, dword ptr [ecx + 0xf4] */ r_ecx = R32((u32)(r_ecx+0xf4u));
    /* 00485866: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485869: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0048586f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485871: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x485874u); call_ind(t); }
L_00485874:; BB(0x00485874);
    /* 00485874: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485877: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048587e: je 0x485897 */ if (fZ) goto L_00485897;
L_00485880:; BB(0x00485880);
    /* 00485880: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485883: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00485889: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048588c: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00485892: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485894: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x485897u); call_ind(t); }
L_00485897:; BB(0x00485897);
    /* 00485897: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048589a: cmp dword ptr [eax + 0xd0], 0 */ {  u32 a = R32((u32)(r_eax+0xd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004858a1: je 0x4858ba */ if (fZ) goto L_004858ba;
L_004858a3:; BB(0x004858a3);
    /* 004858a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004858a6: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 004858ac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004858af: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 004858b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004858b7: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4858bau); call_ind(t); }
L_004858ba:; BB(0x004858ba);
    /* 004858ba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004858bd: cmp dword ptr [eax + 0xdc], 0 */ {  u32 a = R32((u32)(r_eax+0xdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004858c4: je 0x4858dd */ if (fZ) goto L_004858dd;
L_004858c6:; BB(0x004858c6);
    /* 004858c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004858c9: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 004858cf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004858d2: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004858d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004858da: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4858ddu); call_ind(t); }
L_004858dd:; BB(0x004858dd);
    /* 004858dd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004858e0: cmp dword ptr [eax + 0xe0], 0 */ {  u32 a = R32((u32)(r_eax+0xe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004858e7: je 0x485900 */ if (fZ) goto L_00485900;
L_004858e9:; BB(0x004858e9);
    /* 004858e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004858ec: mov ecx, dword ptr [ecx + 0xe0] */ r_ecx = R32((u32)(r_ecx+0xe0u));
    /* 004858f2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004858f5: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 004858fb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004858fd: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x485900u); call_ind(t); }
L_00485900:; BB(0x00485900);
    /* 00485900: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485903: cmp dword ptr [eax + 0xe4], 0 */ {  u32 a = R32((u32)(r_eax+0xe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048590a: je 0x485923 */ if (fZ) goto L_00485923;
L_0048590c:; BB(0x0048590c);
    /* 0048590c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048590f: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 00485915: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485918: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 0048591e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485920: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x485923u); call_ind(t); }
L_00485923:; BB(0x00485923);
    /* 00485923: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485926: cmp dword ptr [eax + 0xec], 0 */ {  u32 a = R32((u32)(r_eax+0xecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048592d: je 0x485946 */ if (fZ) goto L_00485946;
L_0048592f:; BB(0x0048592f);
    /* 0048592f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485932: mov ecx, dword ptr [ecx + 0xec] */ r_ecx = R32((u32)(r_ecx+0xecu));
    /* 00485938: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048593b: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00485941: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485943: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x485946u); call_ind(t); }
L_00485946:; BB(0x00485946);
    /* 00485946: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485949: cmp dword ptr [eax + 0xf8], 0 */ {  u32 a = R32((u32)(r_eax+0xf8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485950: je 0x485969 */ if (fZ) goto L_00485969;
L_00485952:; BB(0x00485952);
    /* 00485952: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485955: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 0048595b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048595e: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00485964: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485966: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x485969u); call_ind(t); }
L_00485969:; BB(0x00485969);
    /* 00485969: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048596c: cmp dword ptr [eax + 0xe8], 0 */ {  u32 a = R32((u32)(r_eax+0xe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485973: je 0x48598c */ if (fZ) goto L_0048598c;
L_00485975:; BB(0x00485975);
    /* 00485975: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485978: mov ecx, dword ptr [ecx + 0xe8] */ r_ecx = R32((u32)(r_ecx+0xe8u));
    /* 0048597e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485981: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00485987: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485989: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48598cu); call_ind(t); }
L_0048598c:; BB(0x0048598c);
    /* 0048598c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048598f: cmp dword ptr [eax + 0xb8], 0 */ {  u32 a = R32((u32)(r_eax+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485996: je 0x4859d0 */ if (fZ) goto L_004859d0;
L_00485998:; BB(0x00485998);
    /* 00485998: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048599b: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 004859a1: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004859a4: call 0x453c16 */ r_esp -= 4; W32(r_esp, 0x4859a9u); f_00453c16();
    /* 004859a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004859ab: jne 0x4859d0 */ if (!fZ) goto L_004859d0;
L_004859ad:; BB(0x004859ad);
    /* 004859ad: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004859b0: mov ecx, dword ptr [edx + 0x100] */ r_ecx = R32((u32)(r_edx+0x100u));
    /* 004859b6: call 0x5d51df */ r_esp -= 4; W32(r_esp, 0x4859bbu); f_005d51df();
    /* 004859bb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004859be: jne 0x4859d0 */ if (!fZ) goto L_004859d0;
L_004859c0:; BB(0x004859c0);
    /* 004859c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004859c2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004859c5: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004859cb: call 0x5d5253 */ r_esp -= 4; W32(r_esp, 0x4859d0u); f_005d5253();
L_004859d0:; BB(0x004859d0);
    /* 004859d0: mov esp, ebp */ r_esp = r_ebp;
    /* 004859d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004859d3: ret  */ FN_RET(0x004856fc); r_esp += 4; return;
}

void f_004859d4(void) /* FUN_004859d4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004859d4);
    /* 004859d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004859d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004859d7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004859da: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004859dd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004859e4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004859e7: cmp dword ptr [eax + 0x1d14], 0 */ {  u32 a = R32((u32)(r_eax+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004859ee: je 0x4859f7 */ if (fZ) goto L_004859f7;
L_004859f0:; BB(0x004859f0);
    /* 004859f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004859f2: jmp 0x485bb8 */ goto L_00485bb8;
L_004859f7:; BB(0x004859f7);
    /* 004859f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004859fa: cmp dword ptr [ecx + 0x1d14], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a01: jne 0x485a21 */ if (!fZ) goto L_00485a21;
L_00485a03:; BB(0x00485a03);
    /* 00485a03: cmp dword ptr [0x6f6a1c], 0 */ {  u32 a = R32((u32)(0x6f6a1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a0a: jne 0x485a21 */ if (!fZ) goto L_00485a21;
L_00485a0c:; BB(0x00485a0c);
    /* 00485a0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00485a0e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00485a11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485a12: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00485a18: call 0x45c9db */ r_esp -= 4; W32(r_esp, 0x485a1du); f_0045c9db();
    /* 00485a1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a1f: jne 0x485a45 */ if (!fZ) goto L_00485a45;
L_00485a21:; BB(0x00485a21);
    /* 00485a21: cmp dword ptr [0x6f6a1c], 0 */ {  u32 a = R32((u32)(0x6f6a1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a28: je 0x485b8a */ if (fZ) goto L_00485b8a;
L_00485a2e:; BB(0x00485a2e);
    /* 00485a2e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00485a31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485a32: mov ecx, dword ptr [0x6f6a1c] */ r_ecx = R32((u32)(0x6f6a1cu));
    /* 00485a38: call 0x461d08 */ r_esp -= 4; W32(r_esp, 0x485a3du); f_00461d08();
    /* 00485a3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a3f: je 0x485b8a */ if (fZ) goto L_00485b8a;
L_00485a45:; BB(0x00485a45);
    /* 00485a45: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00485a4b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00485a4e: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x485a53u); f_00448ca3();
    /* 00485a53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a55: je 0x485a61 */ if (fZ) goto L_00485a61;
L_00485a57:; BB(0x00485a57);
    /* 00485a57: mov eax, 1 */ r_eax = 0x1u;
    /* 00485a5c: jmp 0x485bb8 */ goto L_00485bb8;
L_00485a61:; BB(0x00485a61);
    /* 00485a61: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00485a64: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 00485a6a: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00485a6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485a6e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00485a71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485a72: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x485a77u); f_006325b0();
    /* 00485a77: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485a7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a7c: jne 0x485a95 */ if (!fZ) goto L_00485a95;
L_00485a7e:; BB(0x00485a7e);
    /* 00485a7e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00485a81: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 00485a87: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00485a8a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a8c: jne 0x485a95 */ if (!fZ) goto L_00485a95;
L_00485a8e:; BB(0x00485a8e);
    /* 00485a8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485a90: jmp 0x485bb8 */ goto L_00485bb8;
L_00485a95:; BB(0x00485a95);
    /* 00485a95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00485a97: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00485a9d: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x485aa2u); f_0045b93e();
    /* 00485aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485aa4: je 0x485aad */ if (fZ) goto L_00485aad;
L_00485aa6:; BB(0x00485aa6);
    /* 00485aa6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485aa8: jmp 0x485bb8 */ goto L_00485bb8;
L_00485aad:; BB(0x00485aad);
    /* 00485aad: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00485aaf: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00485ab5: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x485abau); f_0045b93e();
    /* 00485aba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485abc: je 0x485b83 */ if (fZ) goto L_00485b83;
L_00485ac2:; BB(0x00485ac2);
    /* 00485ac2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00485ac9: jmp 0x485ad4 */ goto L_00485ad4;
L_00485acb:; BB(0x00485acb);
    /* 00485acb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485ace: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00485ad1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00485ad4:; BB(0x00485ad4);
    /* 00485ad4: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485ad8: jge 0x485b72 */ if ((fS==fO)) goto L_00485b72;
L_00485ade:; BB(0x00485ade);
    /* 00485ade: cmp dword ptr [0x6f6a1c], 0 */ {  u32 a = R32((u32)(0x6f6a1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485ae5: je 0x485b2b */ if (fZ) goto L_00485b2b;
L_00485ae7:; BB(0x00485ae7);
    /* 00485ae7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00485aea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485aeb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485aee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485aef: mov ecx, dword ptr [0x6f6a1c] */ r_ecx = R32((u32)(0x6f6a1cu));
    /* 00485af5: call 0x461ce8 */ r_esp -= 4; W32(r_esp, 0x485afau); f_00461ce8();
    /* 00485afa: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00485afd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485afe: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x485b03u); f_006240c0();
    /* 00485b03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485b06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485b08: jne 0x485b29 */ if (!fZ) goto L_00485b29;
L_00485b0a:; BB(0x00485b0a);
    /* 00485b0a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485b0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485b0e: mov ecx, dword ptr [0x6f6a1c] */ r_ecx = R32((u32)(0x6f6a1cu));
    /* 00485b14: call 0x461ce8 */ r_esp -= 4; W32(r_esp, 0x485b19u); f_00461ce8();
    /* 00485b19: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00485b1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485b1e: jne 0x485b29 */ if (!fZ) goto L_00485b29;
L_00485b20:; BB(0x00485b20);
    /* 00485b20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00485b23: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485b26: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00485b29:; BB(0x00485b29);
    /* 00485b29: jmp 0x485b6d */ goto L_00485b6d;
L_00485b2b:; BB(0x00485b2b);
    /* 00485b2b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00485b2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485b2f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485b33: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00485b39: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x485b3eu); f_0045c419();
    /* 00485b3e: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00485b41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485b42: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x485b47u); f_006240c0();
    /* 00485b47: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485b4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485b4c: jne 0x485b6d */ if (!fZ) goto L_00485b6d;
L_00485b4e:; BB(0x00485b4e);
    /* 00485b4e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00485b51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485b52: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00485b58: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x485b5du); f_0045c419();
    /* 00485b5d: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00485b60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485b62: jne 0x485b6d */ if (!fZ) goto L_00485b6d;
L_00485b64:; BB(0x00485b64);
    /* 00485b64: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00485b67: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00485b6a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00485b6d:; BB(0x00485b6d);
    /* 00485b6d: jmp 0x485acb */ goto L_00485acb;
L_00485b72:; BB(0x00485b72);
    /* 00485b72: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485b76: jne 0x485b7f */ if (!fZ) goto L_00485b7f;
L_00485b78:; BB(0x00485b78);
    /* 00485b78: mov eax, 1 */ r_eax = 0x1u;
    /* 00485b7d: jmp 0x485bb8 */ goto L_00485bb8;
L_00485b7f:; BB(0x00485b7f);
    /* 00485b7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485b81: jmp 0x485bb8 */ goto L_00485bb8;
L_00485b83:; BB(0x00485b83);
    /* 00485b83: mov eax, 1 */ r_eax = 0x1u;
    /* 00485b88: jmp 0x485bb8 */ goto L_00485bb8;
L_00485b8a:; BB(0x00485b8a);
    /* 00485b8a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00485b90: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00485b93: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x485b98u); f_00448ca3();
    /* 00485b98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485b9a: je 0x485bb6 */ if (fZ) goto L_00485bb6;
L_00485b9c:; BB(0x00485b9c);
    /* 00485b9c: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00485ba2: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00485ba5: call 0x448e95 */ r_esp -= 4; W32(r_esp, 0x485baau); f_00448e95();
    /* 00485baa: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485bad: jge 0x485bb6 */ if ((fS==fO)) goto L_00485bb6;
L_00485baf:; BB(0x00485baf);
    /* 00485baf: mov eax, 1 */ r_eax = 0x1u;
    /* 00485bb4: jmp 0x485bb8 */ goto L_00485bb8;
L_00485bb6:; BB(0x00485bb6);
    /* 00485bb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00485bb8:; BB(0x00485bb8);
    /* 00485bb8: mov esp, ebp */ r_esp = r_ebp;
    /* 00485bba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00485bbb: ret 8 */ FN_RET(0x004859d4); r_esp += 12; return;
}

void f_00485bbe(void) /* FUN_00485bbe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00485bbe);
    /* 00485bbe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00485bbf: mov ebp, esp */ r_ebp = r_esp;
    /* 00485bc1: mov eax, 0x1c30 */ r_eax = 0x1c30u;
    /* 00485bc6: call 0x626050 */ r_esp -= 4; W32(r_esp, 0x485bcbu); f_00626050();
    /* 00485bcb: mov dword ptr [ebp - 0x1c2c], ecx */ W32((u32)(r_ebp+0xffffe3d4u), r_ecx);
    /* 00485bd1: mov dword ptr [ebp - 0x1c18], 0 */ W32((u32)(r_ebp+0xffffe3e8u), 0x0u);
    /* 00485bdb: jmp 0x485bec */ goto L_00485bec;
L_00485bdd:; BB(0x00485bdd);
    /* 00485bdd: mov eax, dword ptr [ebp - 0x1c18] */ r_eax = R32((u32)(r_ebp+0xffffe3e8u));
    /* 00485be3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00485be6: mov dword ptr [ebp - 0x1c18], eax */ W32((u32)(r_ebp+0xffffe3e8u), r_eax);
L_00485bec:; BB(0x00485bec);
    /* 00485bec: cmp dword ptr [ebp - 0x1c18], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffe3e8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485bf3: jge 0x485dd1 */ if ((fS==fO)) goto L_00485dd1;
L_00485bf9:; BB(0x00485bf9);
    /* 00485bf9: mov ecx, dword ptr [ebp - 0x1c18] */ r_ecx = R32((u32)(r_ebp+0xffffe3e8u));
    /* 00485bff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485c00: push 0x686a18 */ { u32 v = 0x686a18u; r_esp -= 4; W32(r_esp, v); }
    /* 00485c05: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00485c08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485c09: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x485c0eu); f_00624050();
    /* 00485c0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485c11: push 0x686a24 */ { u32 v = 0x686a24u; r_esp -= 4; W32(r_esp, v); }
    /* 00485c16: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00485c19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485c1a: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x485c1fu); f_006243c0();
    /* 00485c1f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485c22: mov dword ptr [ebp - 0x1c20], eax */ W32((u32)(r_ebp+0xffffe3e0u), r_eax);
    /* 00485c28: cmp dword ptr [ebp - 0x1c20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffe3e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485c2f: je 0x485dcc */ if (fZ) goto L_00485dcc;
L_00485c35:; BB(0x00485c35);
    /* 00485c35: mov ecx, dword ptr [ebp - 0x1c20] */ r_ecx = R32((u32)(r_ebp+0xffffe3e0u));
    /* 00485c3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485c3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00485c3e: push 0x1c00 */ { u32 v = 0x1c00u; r_esp -= 4; W32(r_esp, v); }
    /* 00485c43: lea edx, [ebp - 0x1c14] */ r_edx = (u32)(r_ebp+0xffffe3ecu);
    /* 00485c49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485c4a: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x485c4fu); f_00624250();
    /* 00485c4f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485c52: mov dword ptr [ebp - 0x1c24], eax */ W32((u32)(r_ebp+0xffffe3dcu), r_eax);
    /* 00485c58: lea eax, [ebp - 0x1c14] */ r_eax = (u32)(r_ebp+0xffffe3ecu);
    /* 00485c5e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00485c61: mov ecx, dword ptr [ebp - 0x1c20] */ r_ecx = R32((u32)(r_ebp+0xffffe3e0u));
    /* 00485c67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485c68: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x485c6du); f_006241d0();
    /* 00485c6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485c70: cmp dword ptr [ebp - 0x1c24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffe3dcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485c77: je 0x485c7e */ if (fZ) goto L_00485c7e;
L_00485c79:; BB(0x00485c79);
    /* 00485c79: jmp 0x485bdd */ goto L_00485bdd;
L_00485c7e:; BB(0x00485c7e);
    /* 00485c7e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485c81: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00485c84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485c85: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485c88: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485c8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485c8c: mov ecx, dword ptr [ebp - 0x1c2c] */ r_ecx = R32((u32)(r_ebp+0xffffe3d4u));
    /* 00485c92: call 0x4859d4 */ r_esp -= 4; W32(r_esp, 0x485c97u); f_004859d4();
    /* 00485c97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485c99: je 0x485ca0 */ if (fZ) goto L_00485ca0;
L_00485c9b:; BB(0x00485c9b);
    /* 00485c9b: jmp 0x485bdd */ goto L_00485bdd;
L_00485ca0:; BB(0x00485ca0);
    /* 00485ca0: push 0x8dc */ { u32 v = 0x8dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00485ca5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x485caau); f_0048ab58();
    /* 00485caa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485cad: mov dword ptr [ebp - 0x1c28], eax */ W32((u32)(r_ebp+0xffffe3d8u), r_eax);
    /* 00485cb3: cmp dword ptr [ebp - 0x1c28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffe3d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485cba: je 0x485ccf */ if (fZ) goto L_00485ccf;
L_00485cbc:; BB(0x00485cbc);
    /* 00485cbc: mov ecx, dword ptr [ebp - 0x1c28] */ r_ecx = R32((u32)(r_ebp+0xffffe3d8u));
    /* 00485cc2: call 0x4895c4 */ r_esp -= 4; W32(r_esp, 0x485cc7u); f_004895c4();
    /* 00485cc7: mov dword ptr [ebp - 0x1c30], eax */ W32((u32)(r_ebp+0xffffe3d0u), r_eax);
    /* 00485ccd: jmp 0x485cd9 */ goto L_00485cd9;
L_00485ccf:; BB(0x00485ccf);
    /* 00485ccf: mov dword ptr [ebp - 0x1c30], 0 */ W32((u32)(r_ebp+0xffffe3d0u), 0x0u);
L_00485cd9:; BB(0x00485cd9);
    /* 00485cd9: mov edx, dword ptr [ebp - 0x1c30] */ r_edx = R32((u32)(r_ebp+0xffffe3d0u));
    /* 00485cdf: mov dword ptr [ebp - 0x1c1c], edx */ W32((u32)(r_ebp+0xffffe3e4u), r_edx);
    /* 00485ce5: mov eax, dword ptr [ebp - 0x1c1c] */ r_eax = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485ceb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485cec: mov ecx, dword ptr [ebp - 0x1c2c] */ r_ecx = R32((u32)(r_ebp+0xffffe3d4u));
    /* 00485cf2: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00485cf8: call 0x5deaba */ r_esp -= 4; W32(r_esp, 0x485cfdu); f_005deaba();
    /* 00485cfd: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00485cff: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00485d01: mov ecx, dword ptr [ebp - 0x1c1c] */ r_ecx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485d07: call 0x5dda5f */ r_esp -= 4; W32(r_esp, 0x485d0cu); f_005dda5f();
    /* 00485d0c: mov edx, dword ptr [ebp - 0x1c1c] */ r_edx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485d12: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00485d14: mov ecx, dword ptr [ebp - 0x1c1c] */ r_ecx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485d1a: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x485d1du); call_ind(t); }
    /* 00485d1d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485d20: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485d24: mov edx, dword ptr [ebp - 0x1c1c] */ r_edx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485d2a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00485d2c: mov ecx, dword ptr [ebp - 0x1c1c] */ r_ecx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485d32: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x485d35u); call_ind(t); }
    /* 00485d35: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00485d37: mov ecx, dword ptr [ebp - 0x1c1c] */ r_ecx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485d3d: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x485d42u); f_005e8775();
    /* 00485d42: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00485d44: mov ecx, dword ptr [ebp - 0x1c1c] */ r_ecx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485d4a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00485d4c: mov ecx, dword ptr [ebp - 0x1c1c] */ r_ecx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485d52: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x485d55u); call_ind(t); }
    /* 00485d55: mov eax, dword ptr [ebp - 0x1c1c] */ r_eax = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485d5b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485d5e: mov dl, byte ptr [ecx + 0x40] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x40u))) & 0xffu);
    /* 00485d61: mov byte ptr [eax + 0x8a0], dl */ W8((u32)(r_eax+0x8a0u), (u8)r_edx);
    /* 00485d67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485d6a: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00485d6d: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00485d70: mov eax, dword ptr [ebp - 0x1c1c] */ r_eax = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485d76: mov dword ptr [eax + 0x8d4], ecx */ W32((u32)(r_eax+0x8d4u), r_ecx);
    /* 00485d7c: mov dword ptr [eax + 0x8d8], edx */ W32((u32)(r_eax+0x8d8u), r_edx);
    /* 00485d82: mov ecx, dword ptr [ebp - 0x1c1c] */ r_ecx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485d88: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485d8b: mov al, byte ptr [edx + 0x65] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x65u))) & 0xffu);
    /* 00485d8e: mov byte ptr [ecx + 0x8ba], al */ W8((u32)(r_ecx+0x8bau), (u8)r_eax);
    /* 00485d94: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485d97: add ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485d9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485d9b: mov edx, dword ptr [ebp - 0x1c1c] */ r_edx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485da1: add edx, 0x8a1 */ {  u32 a = r_edx; u32 b = 0x8a1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00485da7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485da8: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x485dadu); f_00624510();
    /* 00485dad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485db0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485db3: add eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00485db6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485db7: mov ecx, dword ptr [ebp - 0x1c1c] */ r_ecx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00485dbd: add ecx, 0x8bb */ {  u32 a = r_ecx; u32 b = 0x8bbu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485dc4: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x485dc9u); f_00624510();
    /* 00485dc9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00485dcc:; BB(0x00485dcc);
    /* 00485dcc: jmp 0x485bdd */ goto L_00485bdd;
L_00485dd1:; BB(0x00485dd1);
    /* 00485dd1: push 0x48a03d */ { u32 v = 0x48a03du; r_esp -= 4; W32(r_esp, v); }
    /* 00485dd6: mov edx, dword ptr [ebp - 0x1c2c] */ r_edx = R32((u32)(r_ebp+0xffffe3d4u));
    /* 00485ddc: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00485de2: call 0x5df2fa */ r_esp -= 4; W32(r_esp, 0x485de7u); f_005df2fa();
    /* 00485de7: mov esp, ebp */ r_esp = r_ebp;
    /* 00485de9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00485dea: ret  */ FN_RET(0x00485bbe); r_esp += 4; return;
}

void f_00485deb(void) /* FUN_00485deb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00485deb);
    /* 00485deb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00485dec: mov ebp, esp */ r_ebp = r_esp;
    /* 00485dee: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00485df1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00485df4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485df7: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00485dfd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485e00: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00485e06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485e08: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x485e0bu); call_ind(t); }
    /* 00485e0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485e0c: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00485e0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485e10: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x485e15u); f_00624510();
    /* 00485e15: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485e18: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485e1b: call 0x4865a9 */ r_esp -= 4; W32(r_esp, 0x485e20u); f_004865a9();
    /* 00485e20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485e22: je 0x485e42 */ if (fZ) goto L_00485e42;
L_00485e24:; BB(0x00485e24);
    /* 00485e24: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00485e29: push 0x686a28 */ { u32 v = 0x686a28u; r_esp -= 4; W32(r_esp, v); }
    /* 00485e2e: push 0x686a38 */ { u32 v = 0x686a38u; r_esp -= 4; W32(r_esp, v); }
    /* 00485e33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00485e35: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x485e3au); f_0060f9f3();
    /* 00485e3a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485e3d: jmp 0x48601b */ goto L_0048601b;
L_00485e42:; BB(0x00485e42);
    /* 00485e42: push 0x6f6b38 */ { u32 v = 0x6f6b38u; r_esp -= 4; W32(r_esp, v); }
    /* 00485e47: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00485e4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485e4b: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x485e50u); f_006240c0();
    /* 00485e50: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485e53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485e55: je 0x486002 */ if (fZ) goto L_00486002;
L_00485e5b:; BB(0x00485e5b);
    /* 00485e5b: movsx edx, byte ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff0u));
    /* 00485e5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485e60: call 0x625860 */ r_esp -= 4; W32(r_esp, 0x485e65u); f_00625860();
    /* 00485e65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485e68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485e6a: je 0x486002 */ if (fZ) goto L_00486002;
L_00485e70:; BB(0x00485e70);
    /* 00485e70: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485e73: call 0x486d31 */ r_esp -= 4; W32(r_esp, 0x485e78u); f_00486d31();
    /* 00485e78: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485e7b: jne 0x485e9b */ if (!fZ) goto L_00485e9b;
L_00485e7d:; BB(0x00485e7d);
    /* 00485e7d: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00485e82: push 0x686a6c */ { u32 v = 0x686a6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00485e87: push 0x686a78 */ { u32 v = 0x686a78u; r_esp -= 4; W32(r_esp, v); }
    /* 00485e8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00485e8e: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x485e93u); f_0060f9f3();
    /* 00485e93: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485e96: jmp 0x486000 */ goto L_00486000;
L_00485e9b:; BB(0x00485e9b);
    /* 00485e9b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485e9e: call 0x486740 */ r_esp -= 4; W32(r_esp, 0x485ea3u); f_00486740();
    /* 00485ea3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485ea5: je 0x485fe7 */ if (fZ) goto L_00485fe7;
L_00485eab:; BB(0x00485eab);
    /* 00485eab: push 0x8dc */ { u32 v = 0x8dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00485eb0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x485eb5u); f_0048ab58();
    /* 00485eb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485eb8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00485ebb: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485ebf: je 0x485ece */ if (fZ) goto L_00485ece;
L_00485ec1:; BB(0x00485ec1);
    /* 00485ec1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00485ec4: call 0x4895c4 */ r_esp -= 4; W32(r_esp, 0x485ec9u); f_004895c4();
    /* 00485ec9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00485ecc: jmp 0x485ed5 */ goto L_00485ed5;
L_00485ece:; BB(0x00485ece);
    /* 00485ece: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00485ed5:; BB(0x00485ed5);
    /* 00485ed5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00485ed8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00485edb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485ede: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485edf: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485ee2: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00485ee8: call 0x5deaba */ r_esp -= 4; W32(r_esp, 0x485eedu); f_005deaba();
    /* 00485eed: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00485eef: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00485ef1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485ef4: call 0x5dda5f */ r_esp -= 4; W32(r_esp, 0x485ef9u); f_005dda5f();
    /* 00485ef9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485efc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00485efe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485f01: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x485f04u); call_ind(t); }
    /* 00485f04: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485f07: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 00485f0d: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485f10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485f11: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485f14: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00485f16: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485f19: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x485f1cu); call_ind(t); }
    /* 00485f1c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00485f1e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485f21: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x485f26u); f_005e8775();
    /* 00485f26: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00485f28: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485f2b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00485f2d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485f30: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x485f33u); call_ind(t); }
    /* 00485f33: push 0x48a03d */ { u32 v = 0x48a03du; r_esp -= 4; W32(r_esp, v); }
    /* 00485f38: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485f3b: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00485f41: call 0x5df2fa */ r_esp -= 4; W32(r_esp, 0x485f46u); f_005df2fa();
    /* 00485f46: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485f49: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 00485f4f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485f52: mov cl, byte ptr [edx + 0x40] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+0x40u))) & 0xffu);
    /* 00485f55: mov byte ptr [eax + 0x8a0], cl */ W8((u32)(r_eax+0x8a0u), (u8)r_ecx);
    /* 00485f5b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485f5e: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 00485f64: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00485f67: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00485f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485f6d: mov dword ptr [eax + 0x8d4], ecx */ W32((u32)(r_eax+0x8d4u), r_ecx);
    /* 00485f73: mov dword ptr [eax + 0x8d8], edx */ W32((u32)(r_eax+0x8d8u), r_edx);
    /* 00485f79: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485f7c: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 00485f82: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485f85: mov cl, byte ptr [edx + 0x65] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+0x65u))) & 0xffu);
    /* 00485f88: mov byte ptr [eax + 0x8ba], cl */ W8((u32)(r_eax+0x8bau), (u8)r_ecx);
    /* 00485f8e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485f91: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 00485f97: add eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00485f9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485f9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485f9e: add ecx, 0x8a1 */ {  u32 a = r_ecx; u32 b = 0x8a1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485fa4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485fa5: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x485faau); f_00624510();
    /* 00485faa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485fad: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485fb0: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 00485fb6: add eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00485fb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485fba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485fbd: add ecx, 0x8bb */ {  u32 a = r_ecx; u32 b = 0x8bbu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485fc4: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x485fc9u); f_00624510();
    /* 00485fc9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485fcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00485fce: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00485fd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485fd2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485fd5: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00485fdb: call 0x5de7d3 */ r_esp -= 4; W32(r_esp, 0x485fe0u); f_005de7d3();
    /* 00485fe0: mov eax, 1 */ r_eax = 0x1u;
    /* 00485fe5: jmp 0x48601d */ goto L_0048601d;
L_00485fe7:; BB(0x00485fe7);
    /* 00485fe7: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00485fec: push 0x686adc */ { u32 v = 0x686adcu; r_esp -= 4; W32(r_esp, v); }
    /* 00485ff1: push 0x686ae4 */ { u32 v = 0x686ae4u; r_esp -= 4; W32(r_esp, v); }
    /* 00485ff6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00485ff8: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x485ffdu); f_0060f9f3();
    /* 00485ffd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00486000:; BB(0x00486000);
    /* 00486000: jmp 0x48601b */ goto L_0048601b;
L_00486002:; BB(0x00486002);
    /* 00486002: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00486007: push 0x686b08 */ { u32 v = 0x686b08u; r_esp -= 4; W32(r_esp, v); }
    /* 0048600c: push 0x686b18 */ { u32 v = 0x686b18u; r_esp -= 4; W32(r_esp, v); }
    /* 00486011: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00486013: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x486018u); f_0060f9f3();
    /* 00486018: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048601b:; BB(0x0048601b);
    /* 0048601b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0048601d:; BB(0x0048601d);
    /* 0048601d: mov esp, ebp */ r_esp = r_ebp;
    /* 0048601f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486020: ret  */ FN_RET(0x00485deb); r_esp += 4; return;
}

void f_00486021(void) /* FUN_00486021 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00486021);
    /* 00486021: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486022: mov ebp, esp */ r_ebp = r_esp;
    /* 00486024: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486027: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0048602a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048602d: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00486033: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486036: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0048603c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048603e: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x486041u); call_ind(t); }
    /* 00486041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486042: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00486045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486046: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48604bu); f_00624510();
    /* 0048604b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048604e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486051: call 0x4865a9 */ r_esp -= 4; W32(r_esp, 0x486056u); f_004865a9();
    /* 00486056: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486058: je 0x486092 */ if (fZ) goto L_00486092;
L_0048605a:; BB(0x0048605a);
    /* 0048605a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048605c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0048605f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486060: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486063: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00486069: call 0x5def48 */ r_esp -= 4; W32(r_esp, 0x48606eu); f_005def48();
    /* 0048606e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486070: jne 0x486092 */ if (!fZ) goto L_00486092;
L_00486072:; BB(0x00486072);
    /* 00486072: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00486077: push 0x686b70 */ { u32 v = 0x686b70u; r_esp -= 4; W32(r_esp, v); }
    /* 0048607c: push 0x686b84 */ { u32 v = 0x686b84u; r_esp -= 4; W32(r_esp, v); }
    /* 00486081: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00486083: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x486088u); f_0060f9f3();
    /* 00486088: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048608b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048608d: jmp 0x486126 */ goto L_00486126;
L_00486092:; BB(0x00486092);
    /* 00486092: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00486095: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0048609b: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x4860a0u); f_005de96b();
    /* 004860a0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004860a3: je 0x4860df */ if (fZ) goto L_004860df;
L_004860a5:; BB(0x004860a5);
    /* 004860a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004860a8: cmp dword ptr [ecx + 0xec], 0 */ {  u32 a = R32((u32)(r_ecx+0xecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004860af: je 0x4860cd */ if (fZ) goto L_004860cd;
L_004860b1:; BB(0x004860b1);
    /* 004860b1: push 0x6f6b3c */ { u32 v = 0x6f6b3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004860b6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004860b9: mov ecx, dword ptr [edx + 0xec] */ r_ecx = R32((u32)(r_edx+0xecu));
    /* 004860bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004860c2: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 004860c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004860ca: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x4860cdu); call_ind(t); }
L_004860cd:; BB(0x004860cd);
    /* 004860cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004860d0: call 0x486f4e */ r_esp -= 4; W32(r_esp, 0x4860d5u); f_00486f4e();
    /* 004860d5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004860d8: call 0x486fe6 */ r_esp -= 4; W32(r_esp, 0x4860ddu); f_00486fe6();
    /* 004860dd: jmp 0x486121 */ goto L_00486121;
L_004860df:; BB(0x004860df);
    /* 004860df: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004860e2: call 0x485deb */ r_esp -= 4; W32(r_esp, 0x4860e7u); f_00485deb();
    /* 004860e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004860e9: je 0x48611d */ if (fZ) goto L_0048611d;
L_004860eb:; BB(0x004860eb);
    /* 004860eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004860ed: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004860f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004860f1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004860f4: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 004860fa: call 0x5de7d3 */ r_esp -= 4; W32(r_esp, 0x4860ffu); f_005de7d3();
    /* 004860ff: push 0x686ba0 */ { u32 v = 0x686ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 00486104: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00486107: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0048610d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486110: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00486116: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00486118: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x48611bu); call_ind(t); }
    /* 0048611b: jmp 0x486121 */ goto L_00486121;
L_0048611d:; BB(0x0048611d);
    /* 0048611d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048611f: jmp 0x486126 */ goto L_00486126;
L_00486121:; BB(0x00486121);
    /* 00486121: mov eax, 1 */ r_eax = 0x1u;
L_00486126:; BB(0x00486126);
    /* 00486126: mov esp, ebp */ r_esp = r_ebp;
    /* 00486128: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486129: ret  */ FN_RET(0x00486021); r_esp += 4; return;
}

void f_0048612a(void) /* FUN_0048612a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048612a);
    /* 0048612a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048612b: mov ebp, esp */ r_ebp = r_esp;
    /* 0048612d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486130: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00486133: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486136: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0048613c: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x486141u); f_005de96b();
    /* 00486141: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486144: je 0x4861c1 */ if (fZ) goto L_004861c1;
L_00486146:; BB(0x00486146);
    /* 00486146: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00486148: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048614b: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00486151: call 0x5deffc */ r_esp -= 4; W32(r_esp, 0x486156u); f_005deffc();
    /* 00486156: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486157: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048615d: call 0x45d518 */ r_esp -= 4; W32(r_esp, 0x486162u); f_0045d518();
    /* 00486162: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486164: je 0x4861c1 */ if (fZ) goto L_004861c1;
L_00486166:; BB(0x00486166);
    /* 00486166: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486169: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 0048616f: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x486174u); f_005de96b();
    /* 00486174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486175: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486178: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0048617e: call 0x5df13c */ r_esp -= 4; W32(r_esp, 0x486183u); f_005df13c();
    /* 00486183: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00486186: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486189: mov dword ptr [ecx + 0x8d4], 0x1388 */ W32((u32)(r_ecx+0x8d4u), 0x1388u);
    /* 00486193: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486196: mov dword ptr [edx + 0x8d8], 0 */ W32((u32)(r_edx+0x8d8u), 0x0u);
    /* 004861a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004861a3: mov byte ptr [eax + 0x8ba], 0 */ W8((u32)(r_eax+0x8bau), 0x0u);
    /* 004861aa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004861ad: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 004861b3: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x4861b8u); f_005de96b();
    /* 004861b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004861b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004861bc: call 0x487181 */ r_esp -= 4; W32(r_esp, 0x4861c1u); f_00487181();
L_004861c1:; BB(0x004861c1);
    /* 004861c1: mov esp, ebp */ r_esp = r_ebp;
    /* 004861c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004861c4: ret  */ FN_RET(0x0048612a); r_esp += 4; return;
}

void f_004861c5(void) /* FUN_004861c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004861c5);
    /* 004861c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004861c6: mov ebp, esp */ r_ebp = r_esp;
    /* 004861c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004861c9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004861cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004861cf: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 004861d5: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x4861dau); f_005de96b();
    /* 004861da: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004861dd: je 0x486309 */ if (fZ) goto L_00486309;
L_004861e3:; BB(0x004861e3);
    /* 004861e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004861e6: cmp dword ptr [ecx + 0x1d14], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004861ed: jne 0x486278 */ if (!fZ) goto L_00486278;
L_004861f3:; BB(0x004861f3);
    /* 004861f3: cmp dword ptr [0x6f6a1c], 0 */ {  u32 a = R32((u32)(0x6f6a1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004861fa: je 0x48623a */ if (fZ) goto L_0048623a;
L_004861fc:; BB(0x004861fc);
    /* 004861fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004861ff: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00486205: call 0x5deffc */ r_esp -= 4; W32(r_esp, 0x48620au); f_005deffc();
    /* 0048620a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048620b: mov ecx, dword ptr [0x6f6a1c] */ r_ecx = R32((u32)(0x6f6a1cu));
    /* 00486211: call 0x461d08 */ r_esp -= 4; W32(r_esp, 0x486216u); f_00461d08();
    /* 00486216: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486218: je 0x486238 */ if (fZ) goto L_00486238;
L_0048621a:; BB(0x0048621a);
    /* 0048621a: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0048621f: push 0x686ba4 */ { u32 v = 0x686ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 00486224: push 0x686bb4 */ { u32 v = 0x686bb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00486229: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048622b: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x486230u); f_0060f9f3();
    /* 00486230: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486233: jmp 0x486309 */ goto L_00486309;
L_00486238:; BB(0x00486238);
    /* 00486238: jmp 0x486278 */ goto L_00486278;
L_0048623a:; BB(0x0048623a);
    /* 0048623a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048623c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048623f: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00486245: call 0x5deffc */ r_esp -= 4; W32(r_esp, 0x48624au); f_005deffc();
    /* 0048624a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048624b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00486251: call 0x45c9db */ r_esp -= 4; W32(r_esp, 0x486256u); f_0045c9db();
    /* 00486256: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486258: je 0x486278 */ if (fZ) goto L_00486278;
L_0048625a:; BB(0x0048625a);
    /* 0048625a: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0048625f: push 0x686be4 */ { u32 v = 0x686be4u; r_esp -= 4; W32(r_esp, v); }
    /* 00486264: push 0x686bf4 */ { u32 v = 0x686bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00486269: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048626b: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x486270u); f_0060f9f3();
    /* 00486270: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486273: jmp 0x486309 */ goto L_00486309;
L_00486278:; BB(0x00486278);
    /* 00486278: push 0x2004 */ { u32 v = 0x2004u; r_esp -= 4; W32(r_esp, v); }
    /* 0048627d: push 0x686c24 */ { u32 v = 0x686c24u; r_esp -= 4; W32(r_esp, v); }
    /* 00486282: push 0x686c2c */ { u32 v = 0x686c2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00486287: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00486289: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x48628eu); f_0060f9f3();
    /* 0048628e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486291: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486294: jne 0x486309 */ if (!fZ) goto L_00486309;
L_00486296:; BB(0x00486296);
    /* 00486296: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486299: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 0048629f: call 0x5deffc */ r_esp -= 4; W32(r_esp, 0x4862a4u); f_005deffc();
    /* 004862a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004862a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004862a8: call 0x486e76 */ r_esp -= 4; W32(r_esp, 0x4862adu); f_00486e76();
    /* 004862ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004862b0: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 004862b6: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x4862bbu); f_005de399();
    /* 004862bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004862bd: je 0x4862d1 */ if (fZ) goto L_004862d1;
L_004862bf:; BB(0x004862bf);
    /* 004862bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004862c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004862c4: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 004862ca: call 0x5de705 */ r_esp -= 4; W32(r_esp, 0x4862cfu); f_005de705();
    /* 004862cf: jmp 0x486309 */ goto L_00486309;
L_004862d1:; BB(0x004862d1);
    /* 004862d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004862d4: cmp dword ptr [ecx + 0xec], 0 */ {  u32 a = R32((u32)(r_ecx+0xecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004862db: je 0x4862f9 */ if (fZ) goto L_004862f9;
L_004862dd:; BB(0x004862dd);
    /* 004862dd: push 0x6f6b40 */ { u32 v = 0x6f6b40u; r_esp -= 4; W32(r_esp, v); }
    /* 004862e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004862e5: mov ecx, dword ptr [edx + 0xec] */ r_ecx = R32((u32)(r_edx+0xecu));
    /* 004862eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004862ee: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 004862f4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004862f6: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x4862f9u); call_ind(t); }
L_004862f9:; BB(0x004862f9);
    /* 004862f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004862fc: call 0x486f4e */ r_esp -= 4; W32(r_esp, 0x486301u); f_00486f4e();
    /* 00486301: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486304: call 0x486fe6 */ r_esp -= 4; W32(r_esp, 0x486309u); f_00486fe6();
L_00486309:; BB(0x00486309);
    /* 00486309: mov esp, ebp */ r_esp = r_ebp;
    /* 0048630b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048630c: ret  */ FN_RET(0x004861c5); r_esp += 4; return;
}

void f_0048630d(void) /* FUN_0048630d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048630d);
    /* 0048630d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048630e: mov ebp, esp */ r_ebp = r_esp;
    /* 00486310: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486313: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00486316: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048631d: jmp 0x486328 */ goto L_00486328;
L_0048631f:; BB(0x0048631f);
    /* 0048631f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486322: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486325: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00486328:; BB(0x00486328);
    /* 00486328: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048632c: jge 0x48636e */ if ((fS==fO)) goto L_0048636e;
L_0048632e:; BB(0x0048632e);
    /* 0048632e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486331: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 00486337: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0048633b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048633e: jne 0x486342 */ if (!fZ) goto L_00486342;
L_00486340:; BB(0x00486340);
    /* 00486340: jmp 0x48631f */ goto L_0048631f;
L_00486342:; BB(0x00486342);
    /* 00486342: mov ecx, dword ptr [0x6f6a1c] */ r_ecx = R32((u32)(0x6f6a1cu));
    /* 00486348: add ecx, 0xb0 */ {  u32 a = r_ecx; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048634e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048634f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486352: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 00486358: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0048635c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048635d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486360: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486361: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00486367: call 0x45c842 */ r_esp -= 4; W32(r_esp, 0x48636cu); f_0045c842();
    /* 0048636c: jmp 0x48631f */ goto L_0048631f;
L_0048636e:; BB(0x0048636e);
    /* 0048636e: mov ecx, dword ptr [0x6f6a1c] */ r_ecx = R32((u32)(0x6f6a1cu));
    /* 00486374: call 0x461d5a */ r_esp -= 4; W32(r_esp, 0x486379u); f_00461d5a();
    /* 00486379: mov esp, ebp */ r_esp = r_ebp;
    /* 0048637b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048637c: ret  */ FN_RET(0x0048630d); r_esp += 4; return;
}

void f_0048637d(void) /* FUN_0048637d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048637d);
    /* 0048637d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048637e: mov ebp, esp */ r_ebp = r_esp;
    /* 00486380: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486381: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00486384: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486387: call 0x4865a9 */ r_esp -= 4; W32(r_esp, 0x48638cu); f_004865a9();
    /* 0048638c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048638e: je 0x4863d9 */ if (fZ) goto L_004863d9;
L_00486390:; BB(0x00486390);
    /* 00486390: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00486392: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486395: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 0048639b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048639e: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 004863a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004863a6: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4863a9u); call_ind(t); }
    /* 004863a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004863aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004863ad: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 004863b3: call 0x5def48 */ r_esp -= 4; W32(r_esp, 0x4863b8u); f_005def48();
    /* 004863b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004863ba: jne 0x4863d9 */ if (!fZ) goto L_004863d9;
L_004863bc:; BB(0x004863bc);
    /* 004863bc: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 004863c1: push 0x686c84 */ { u32 v = 0x686c84u; r_esp -= 4; W32(r_esp, v); }
    /* 004863c6: push 0x686c98 */ { u32 v = 0x686c98u; r_esp -= 4; W32(r_esp, v); }
    /* 004863cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004863cd: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x4863d2u); f_0060f9f3();
    /* 004863d2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004863d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004863d7: jmp 0x486428 */ goto L_00486428;
L_004863d9:; BB(0x004863d9);
    /* 004863d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004863dc: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 004863e2: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x4863e7u); f_005de96b();
    /* 004863e7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004863ea: je 0x486413 */ if (fZ) goto L_00486413;
L_004863ec:; BB(0x004863ec);
    /* 004863ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004863ef: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 004863f5: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x4863fau); f_005ea257();
    /* 004863fa: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004863fd: jne 0x48640c */ if (!fZ) goto L_0048640c;
L_004863ff:; BB(0x004863ff);
    /* 004863ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486402: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 00486408: mov byte ptr [ecx + 0x65], 7 */ W8((u32)(r_ecx+0x65u), 0x7u);
L_0048640c:; BB(0x0048640c);
    /* 0048640c: mov eax, 1 */ r_eax = 0x1u;
    /* 00486411: jmp 0x486428 */ goto L_00486428;
L_00486413:; BB(0x00486413);
    /* 00486413: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486416: call 0x485deb */ r_esp -= 4; W32(r_esp, 0x48641bu); f_00485deb();
    /* 0048641b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048641d: je 0x486426 */ if (fZ) goto L_00486426;
L_0048641f:; BB(0x0048641f);
    /* 0048641f: mov eax, 1 */ r_eax = 0x1u;
    /* 00486424: jmp 0x486428 */ goto L_00486428;
L_00486426:; BB(0x00486426);
    /* 00486426: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00486428:; BB(0x00486428);
    /* 00486428: mov esp, ebp */ r_esp = r_ebp;
    /* 0048642a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048642b: ret  */ FN_RET(0x0048637d); r_esp += 4; return;
}

void f_0048642c(void) /* FUN_0048642c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048642c);
    /* 0048642c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048642d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048642f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486430: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00486433: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486436: cmp dword ptr [eax + 0x1d14], 0 */ {  u32 a = R32((u32)(r_eax+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048643d: je 0x486454 */ if (fZ) goto L_00486454;
L_0048643f:; BB(0x0048643f);
    /* 0048643f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00486441: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00486447: call 0x45b98a */ r_esp -= 4; W32(r_esp, 0x48644cu); f_0045b98a();
    /* 0048644c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048644e: jne 0x486454 */ if (!fZ) goto L_00486454;
L_00486450:; BB(0x00486450);
    /* 00486450: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00486452: jmp 0x486459 */ goto L_00486459;
L_00486454:; BB(0x00486454);
    /* 00486454: mov eax, 1 */ r_eax = 0x1u;
L_00486459:; BB(0x00486459);
    /* 00486459: mov esp, ebp */ r_esp = r_ebp;
    /* 0048645b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048645c: ret  */ FN_RET(0x0048642c); r_esp += 4; return;
}

void f_0048645d(void) /* FUN_0048645d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048645d);
    /* 0048645d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048645e: mov ebp, esp */ r_ebp = r_esp;
    /* 00486460: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486463: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00486464: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00486465: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00486468: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048646b: cmp dword ptr [eax + 0x1d18], 0 */ {  u32 a = R32((u32)(r_eax+0x1d18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486472: je 0x486592 */ if (fZ) goto L_00486592;
L_00486478:; BB(0x00486478);
    /* 00486478: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048647b: cmp dword ptr [ecx + 0x1d14], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486482: jne 0x48648d */ if (!fZ) goto L_0048648d;
L_00486484:; BB(0x00486484);
    /* 00486484: cmp dword ptr [0x6f6a1c], 0 */ {  u32 a = R32((u32)(0x6f6a1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048648b: jne 0x4864e4 */ if (!fZ) goto L_004864e4;
L_0048648d:; BB(0x0048648d);
    /* 0048648d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486490: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 00486496: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0048649a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048649c: jne 0x4864e4 */ if (!fZ) goto L_004864e4;
L_0048649e:; BB(0x0048649e);
    /* 0048649e: push 0x6f6b44 */ { u32 v = 0x6f6b44u; r_esp -= 4; W32(r_esp, v); }
    /* 004864a3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004864a6: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 004864ac: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004864af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004864b0: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x4864b5u); f_006240c0();
    /* 004864b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004864b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004864ba: je 0x4864e4 */ if (fZ) goto L_004864e4;
L_004864bc:; BB(0x004864bc);
    /* 004864bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004864bf: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 004864c5: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004864c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004864c9: push 0x686cb4 */ { u32 v = 0x686cb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004864ce: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 004864d3: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004864d6: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 004864dc: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004864df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004864e1: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4864e4u); call_ind(t); }
L_004864e4:; BB(0x004864e4);
    /* 004864e4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004864e7: cmp dword ptr [eax + 0x1d14], 0 */ {  u32 a = R32((u32)(r_eax+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004864ee: je 0x48653d */ if (fZ) goto L_0048653d;
L_004864f0:; BB(0x004864f0);
    /* 004864f0: mov edi, dword ptr [0x6f6eec] */ r_edi = R32((u32)(0x6f6eecu));
    /* 004864f6: add edi, 0x48 */ {  u32 a = r_edi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004864f9: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004864fc: add esi, 0x10c */ {  u32 a = r_esi; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00486502: mov ecx, 0x700 */ r_ecx = 0x700u;
    /* 00486507: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00486509: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048650b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00486511: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x486516u); f_0045c8df();
    /* 00486516: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486519: add ecx, 0x10c */ {  u32 a = r_ecx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048651f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00486522: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486525: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 00486528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486529: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 0048652c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048652d: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00486533: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00486536: call 0x5e60bb */ r_esp -= 4; W32(r_esp, 0x48653bu); f_005e60bb();
    /* 0048653b: jmp 0x486590 */ goto L_00486590;
L_0048653d:; BB(0x0048653d);
    /* 0048653d: cmp dword ptr [0x6f6a1c], 0 */ {  u32 a = R32((u32)(0x6f6a1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486544: je 0x486569 */ if (fZ) goto L_00486569;
L_00486546:; BB(0x00486546);
    /* 00486546: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486549: mov edi, dword ptr [eax + 0x1d0c] */ r_edi = R32((u32)(r_eax+0x1d0cu));
    /* 0048654f: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486552: add esi, 0x10c */ {  u32 a = r_esi; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00486558: mov ecx, 0x700 */ r_ecx = 0x700u;
    /* 0048655d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0048655f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486562: call 0x48630d */ r_esp -= 4; W32(r_esp, 0x486567u); f_0048630d();
    /* 00486567: jmp 0x486590 */ goto L_00486590;
L_00486569:; BB(0x00486569);
    /* 00486569: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048656c: mov edi, dword ptr [ecx + 0x1d0c] */ r_edi = R32((u32)(r_ecx+0x1d0cu));
    /* 00486572: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486575: add esi, 0x10c */ {  u32 a = r_esi; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048657b: mov ecx, 0x700 */ r_ecx = 0x700u;
    /* 00486580: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00486582: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00486588: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0048658b: call 0x44a2b2 */ r_esp -= 4; W32(r_esp, 0x486590u); f_0044a2b2();
L_00486590:; BB(0x00486590);
    /* 00486590: jmp 0x4865a3 */ goto L_004865a3;
L_00486592:; BB(0x00486592);
    /* 00486592: cmp dword ptr [0x6f6a1c], 0 */ {  u32 a = R32((u32)(0x6f6a1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486599: je 0x4865a3 */ if (fZ) goto L_004865a3;
L_0048659b:; BB(0x0048659b);
    /* 0048659b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048659e: call 0x48630d */ r_esp -= 4; W32(r_esp, 0x4865a3u); f_0048630d();
L_004865a3:; BB(0x004865a3);
    /* 004865a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004865a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004865a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004865a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004865a8: ret  */ FN_RET(0x0048645d); r_esp += 4; return;
}

void f_004865a9(void) /* FUN_004865a9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004865a9);
    /* 004865a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004865aa: mov ebp, esp */ r_ebp = r_esp;
    /* 004865ac: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004865af: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004865b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004865b4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004865b7: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 004865bd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004865c0: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 004865c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004865c8: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4865cbu); call_ind(t); }
    /* 004865cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004865cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004865cf: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 004865d5: call 0x5def48 */ r_esp -= 4; W32(r_esp, 0x4865dau); f_005def48();
    /* 004865da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004865dc: je 0x4865e5 */ if (fZ) goto L_004865e5;
L_004865de:; BB(0x004865de);
    /* 004865de: mov eax, 1 */ r_eax = 0x1u;
    /* 004865e3: jmp 0x486655 */ goto L_00486655;
L_004865e5:; BB(0x004865e5);
    /* 004865e5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004865ec: jmp 0x4865f7 */ goto L_004865f7;
L_004865ee:; BB(0x004865ee);
    /* 004865ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004865f1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004865f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004865f7:; BB(0x004865f7);
    /* 004865f7: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004865fb: jge 0x486653 */ if ((fS==fO)) goto L_00486653;
L_004865fd:; BB(0x004865fd);
    /* 004865fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486600: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486601: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00486607: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x48660cu); f_0045c419();
    /* 0048660c: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0048660f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486611: jne 0x486651 */ if (!fZ) goto L_00486651;
L_00486613:; BB(0x00486613);
    /* 00486613: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486616: mov ecx, dword ptr [ecx + 0xec] */ r_ecx = R32((u32)(r_ecx+0xecu));
    /* 0048661c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048661f: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00486625: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00486627: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x48662au); call_ind(t); }
    /* 0048662a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048662b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048662e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048662f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00486635: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x48663au); f_0045c419();
    /* 0048663a: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048663d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048663e: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x486643u); f_006240c0();
    /* 00486643: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486646: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486648: jne 0x486651 */ if (!fZ) goto L_00486651;
L_0048664a:; BB(0x0048664a);
    /* 0048664a: mov eax, 1 */ r_eax = 0x1u;
    /* 0048664f: jmp 0x486655 */ goto L_00486655;
L_00486651:; BB(0x00486651);
    /* 00486651: jmp 0x4865ee */ goto L_004865ee;
L_00486653:; BB(0x00486653);
    /* 00486653: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00486655:; BB(0x00486655);
    /* 00486655: mov esp, ebp */ r_esp = r_ebp;
    /* 00486657: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486658: ret  */ FN_RET(0x004865a9); r_esp += 4; return;
}

void f_00486659(void) /* FUN_00486659 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00486659);
    /* 00486659: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048665a: mov ebp, esp */ r_ebp = r_esp;
    /* 0048665c: mov eax, 0x1c24 */ r_eax = 0x1c24u;
    /* 00486661: call 0x626050 */ r_esp -= 4; W32(r_esp, 0x486666u); f_00626050();
    /* 00486666: mov dword ptr [ebp - 0x1c24], ecx */ W32((u32)(r_ebp+0xffffe3dcu), r_ecx);
    /* 0048666c: mov dword ptr [ebp - 0x1c18], 0 */ W32((u32)(r_ebp+0xffffe3e8u), 0x0u);
    /* 00486676: jmp 0x486687 */ goto L_00486687;
L_00486678:; BB(0x00486678);
    /* 00486678: mov eax, dword ptr [ebp - 0x1c18] */ r_eax = R32((u32)(r_ebp+0xffffe3e8u));
    /* 0048667e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486681: mov dword ptr [ebp - 0x1c18], eax */ W32((u32)(r_ebp+0xffffe3e8u), r_eax);
L_00486687:; BB(0x00486687);
    /* 00486687: cmp dword ptr [ebp - 0x1c18], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffe3e8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048668e: jge 0x486738 */ if ((fS==fO)) goto L_00486738;
L_00486694:; BB(0x00486694);
    /* 00486694: mov ecx, dword ptr [ebp - 0x1c18] */ r_ecx = R32((u32)(r_ebp+0xffffe3e8u));
    /* 0048669a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048669b: push 0x686cc0 */ { u32 v = 0x686cc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004866a0: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 004866a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004866a4: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4866a9u); f_00624050();
    /* 004866a9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004866ac: push 0x686ccc */ { u32 v = 0x686cccu; r_esp -= 4; W32(r_esp, v); }
    /* 004866b1: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 004866b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004866b5: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x4866bau); f_006243c0();
    /* 004866ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004866bd: mov dword ptr [ebp - 0x1c1c], eax */ W32((u32)(r_ebp+0xffffe3e4u), r_eax);
    /* 004866c3: cmp dword ptr [ebp - 0x1c1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffe3e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004866ca: je 0x486733 */ if (fZ) goto L_00486733;
L_004866cc:; BB(0x004866cc);
    /* 004866cc: mov ecx, dword ptr [ebp - 0x1c1c] */ r_ecx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 004866d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004866d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004866d5: push 0x1c00 */ { u32 v = 0x1c00u; r_esp -= 4; W32(r_esp, v); }
    /* 004866da: lea edx, [ebp - 0x1c14] */ r_edx = (u32)(r_ebp+0xffffe3ecu);
    /* 004866e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004866e1: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x4866e6u); f_00624250();
    /* 004866e6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004866e9: mov dword ptr [ebp - 0x1c20], eax */ W32((u32)(r_ebp+0xffffe3e0u), r_eax);
    /* 004866ef: lea eax, [ebp - 0x1c14] */ r_eax = (u32)(r_ebp+0xffffe3ecu);
    /* 004866f5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004866f8: mov ecx, dword ptr [ebp - 0x1c1c] */ r_ecx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 004866fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004866ff: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x486704u); f_006241d0();
    /* 00486704: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486707: cmp dword ptr [ebp - 0x1c20], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffe3e0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048670e: je 0x486715 */ if (fZ) goto L_00486715;
L_00486710:; BB(0x00486710);
    /* 00486710: jmp 0x486678 */ goto L_00486678;
L_00486715:; BB(0x00486715);
    /* 00486715: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00486718: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486719: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048671c: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048671f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486720: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x486725u); f_006325b0();
    /* 00486725: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048672a: jne 0x486733 */ if (!fZ) goto L_00486733;
L_0048672c:; BB(0x0048672c);
    /* 0048672c: mov eax, 1 */ r_eax = 0x1u;
    /* 00486731: jmp 0x48673a */ goto L_0048673a;
L_00486733:; BB(0x00486733);
    /* 00486733: jmp 0x486678 */ goto L_00486678;
L_00486738:; BB(0x00486738);
    /* 00486738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0048673a:; BB(0x0048673a);
    /* 0048673a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048673c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048673d: ret 4 */ FN_RET(0x00486659); r_esp += 8; return;
}

void f_00486740(void) /* FUN_00486740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00486740);
    /* 00486740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486741: mov ebp, esp */ r_ebp = r_esp;
    /* 00486743: mov eax, 0x1c48 */ r_eax = 0x1c48u;
    /* 00486748: call 0x626050 */ r_esp -= 4; W32(r_esp, 0x48674du); f_00626050();
    /* 0048674d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048674e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048674f: mov dword ptr [ebp - 0x1c3c], ecx */ W32((u32)(r_ebp+0xffffe3c4u), r_ecx);
    /* 00486755: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048675c: mov eax, dword ptr [ebp - 0x1c3c] */ r_eax = R32((u32)(r_ebp+0xffffe3c4u));
    /* 00486762: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00486768: mov edx, dword ptr [ebp - 0x1c3c] */ r_edx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 0048676e: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00486774: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00486776: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x486779u); call_ind(t); }
    /* 00486779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048677a: lea eax, [ebp - 0x1c28] */ r_eax = (u32)(r_ebp+0xffffe3d8u);
    /* 00486780: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486781: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486786u); f_00624510();
    /* 00486786: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486789: mov ecx, dword ptr [ebp - 0x1c3c] */ r_ecx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 0048678f: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00486795: mov edx, dword ptr [ebp - 0x1c3c] */ r_edx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 0048679b: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 004867a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004867a3: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4867a6u); call_ind(t); }
    /* 004867a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004867a7: lea eax, [ebp - 0x1c18] */ r_eax = (u32)(r_ebp+0xffffe3e8u);
    /* 004867ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004867ae: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4867b3u); f_00624510();
    /* 004867b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004867b6: mov ecx, dword ptr [ebp - 0x1c3c] */ r_ecx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 004867bc: mov ecx, dword ptr [ecx + 0xd4] */ r_ecx = R32((u32)(r_ecx+0xd4u));
    /* 004867c2: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x4867c7u); f_005d71b9();
    /* 004867c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004867c9: jne 0x4867e3 */ if (!fZ) goto L_004867e3;
L_004867cb:; BB(0x004867cb);
    /* 004867cb: push 0x6f6b48 */ { u32 v = 0x6f6b48u; r_esp -= 4; W32(r_esp, v); }
    /* 004867d0: lea edx, [ebp - 0x1c18] */ r_edx = (u32)(r_ebp+0xffffe3e8u);
    /* 004867d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004867d7: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x4867dcu); f_006240c0();
    /* 004867dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004867df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004867e1: jne 0x4867ea */ if (!fZ) goto L_004867ea;
L_004867e3:; BB(0x004867e3);
    /* 004867e3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_004867ea:; BB(0x004867ea);
    /* 004867ea: lea eax, [ebp - 0x1c04] */ r_eax = (u32)(r_ebp+0xffffe3fcu);
    /* 004867f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004867f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004867f3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004867f9: call 0x45b9d1 */ r_esp -= 4; W32(r_esp, 0x4867feu); f_0045b9d1();
    /* 004867fe: lea ecx, [ebp - 0x1c04] */ r_ecx = (u32)(r_ebp+0xffffe3fcu);
    /* 00486804: mov dword ptr [ebp - 0x1c08], ecx */ W32((u32)(r_ebp+0xffffe3f8u), r_ecx);
    /* 0048680a: lea edx, [ebp - 0x1c28] */ r_edx = (u32)(r_ebp+0xffffe3d8u);
    /* 00486810: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486811: mov eax, dword ptr [ebp - 0x1c08] */ r_eax = R32((u32)(r_ebp+0xffffe3f8u));
    /* 00486817: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048681a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048681b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486820u); f_00624510();
    /* 00486820: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486823: mov ecx, dword ptr [ebp - 0x1c3c] */ r_ecx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 00486829: add ecx, 0x1d41 */ {  u32 a = r_ecx; u32 b = 0x1d41u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048682f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486830: mov edx, dword ptr [ebp - 0x1c08] */ r_edx = R32((u32)(r_ebp+0xffffe3f8u));
    /* 00486836: add edx, 0x4c */ {  u32 a = r_edx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00486839: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048683a: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48683fu); f_00624510();
    /* 0048683f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486842: mov ecx, dword ptr [ebp - 0x1c3c] */ r_ecx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 00486848: call 0x4879e9 */ r_esp -= 4; W32(r_esp, 0x48684du); f_004879e9();
    /* 0048684d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048684f: je 0x48686a */ if (fZ) goto L_0048686a;
L_00486851:; BB(0x00486851);
    /* 00486851: push 0x6f6b4c */ { u32 v = 0x6f6b4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00486856: mov eax, dword ptr [ebp - 0x1c08] */ r_eax = R32((u32)(r_ebp+0xffffe3f8u));
    /* 0048685c: add eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048685f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486860: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486865u); f_00624510();
    /* 00486865: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486868: jmp 0x4868a3 */ goto L_004868a3;
L_0048686a:; BB(0x0048686a);
    /* 0048686a: mov ecx, dword ptr [ebp - 0x1c3c] */ r_ecx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 00486870: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00486876: call 0x489e6c */ r_esp -= 4; W32(r_esp, 0x48687bu); f_00489e6c();
    /* 0048687b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048687c: mov edx, dword ptr [ebp - 0x1c3c] */ r_edx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 00486882: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00486888: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048688b: call 0x453a6e */ r_esp -= 4; W32(r_esp, 0x486890u); f_00453a6e();
    /* 00486890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486891: mov eax, dword ptr [ebp - 0x1c08] */ r_eax = R32((u32)(r_ebp+0xffffe3f8u));
    /* 00486897: add eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048689a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048689b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4868a0u); f_00624510();
    /* 004868a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004868a3:; BB(0x004868a3);
    /* 004868a3: mov ecx, dword ptr [ebp - 0x1c3c] */ r_ecx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 004868a9: cmp dword ptr [ecx + 0xb8], 0 */ {  u32 a = R32((u32)(r_ecx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004868b0: je 0x4868cb */ if (fZ) goto L_004868cb;
L_004868b2:; BB(0x004868b2);
    /* 004868b2: mov edx, dword ptr [ebp - 0x1c3c] */ r_edx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 004868b8: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 004868be: call 0x489e6c */ r_esp -= 4; W32(r_esp, 0x4868c3u); f_00489e6c();
    /* 004868c3: mov dword ptr [ebp - 0x1c40], eax */ W32((u32)(r_ebp+0xffffe3c0u), r_eax);
    /* 004868c9: jmp 0x4868d5 */ goto L_004868d5;
L_004868cb:; BB(0x004868cb);
    /* 004868cb: mov dword ptr [ebp - 0x1c40], 0 */ W32((u32)(r_ebp+0xffffe3c0u), 0x0u);
L_004868d5:; BB(0x004868d5);
    /* 004868d5: mov eax, dword ptr [ebp - 0x1c08] */ r_eax = R32((u32)(r_ebp+0xffffe3f8u));
    /* 004868db: mov cl, byte ptr [ebp - 0x1c40] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffe3c0u))) & 0xffu);
    /* 004868e1: mov byte ptr [eax + 0x40], cl */ W8((u32)(r_eax+0x40u), (u8)r_ecx);
    /* 004868e4: mov edx, dword ptr [ebp - 0x1c08] */ r_edx = R32((u32)(r_ebp+0xffffe3f8u));
    /* 004868ea: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 004868ed: mov eax, dword ptr [ebp - 0x1c08] */ r_eax = R32((u32)(r_ebp+0xffffe3f8u));
    /* 004868f3: mov dword ptr [eax + 0x3c], 0x64 */ W32((u32)(r_eax+0x3cu), 0x64u);
    /* 004868fa: mov ecx, dword ptr [ebp - 0x1c08] */ r_ecx = R32((u32)(r_ebp+0xffffe3f8u));
    /* 00486900: mov byte ptr [ecx + 0x65], 0 */ W8((u32)(r_ecx+0x65u), 0x0u);
    /* 00486904: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486908: je 0x486919 */ if (fZ) goto L_00486919;
L_0048690a:; BB(0x0048690a);
    /* 0048690a: mov edx, dword ptr [ebp - 0x1c08] */ r_edx = R32((u32)(r_ebp+0xffffe3f8u));
    /* 00486910: mov dword ptr [edx + 0x44], 0x1388 */ W32((u32)(r_edx+0x44u), 0x1388u);
    /* 00486917: jmp 0x486931 */ goto L_00486931;
L_00486919:; BB(0x00486919);
    /* 00486919: lea eax, [ebp - 0x1c18] */ r_eax = (u32)(r_ebp+0xffffe3e8u);
    /* 0048691f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486920: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x486925u); f_00625430();
    /* 00486925: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486928: mov ecx, dword ptr [ebp - 0x1c08] */ r_ecx = R32((u32)(r_ebp+0xffffe3f8u));
    /* 0048692e: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
L_00486931:; BB(0x00486931);
    /* 00486931: mov ecx, dword ptr [ebp - 0x1c3c] */ r_ecx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 00486937: call 0x486b25 */ r_esp -= 4; W32(r_esp, 0x48693cu); f_00486b25();
    /* 0048693c: push 0x686cd0 */ { u32 v = 0x686cd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00486941: mov edx, dword ptr [ebp - 0x1c3c] */ r_edx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 00486947: add edx, 0x1d2c */ {  u32 a = r_edx; u32 b = 0x1d2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048694d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048694e: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x486953u); f_006243c0();
    /* 00486953: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486956: mov dword ptr [ebp - 0x1c34], eax */ W32((u32)(r_ebp+0xffffe3ccu), r_eax);
    /* 0048695c: cmp dword ptr [ebp - 0x1c34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffe3ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486963: je 0x486b1d */ if (fZ) goto L_00486b1d;
L_00486969:; BB(0x00486969);
    /* 00486969: mov eax, dword ptr [ebp - 0x1c3c] */ r_eax = R32((u32)(r_ebp+0xffffe3c4u));
    /* 0048696f: add eax, 0x1d2c */ {  u32 a = r_eax; u32 b = 0x1d2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486975: mov ecx, dword ptr [ebp - 0x1c08] */ r_ecx = R32((u32)(r_ebp+0xffffe3f8u));
    /* 0048697b: add ecx, 0x12 */ {  u32 a = r_ecx; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048697e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048697f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486984u); f_00624510();
    /* 00486984: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486987: mov edx, dword ptr [ebp - 0x1c34] */ r_edx = R32((u32)(r_ebp+0xffffe3ccu));
    /* 0048698d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048698e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00486990: push 0x1c00 */ { u32 v = 0x1c00u; r_esp -= 4; W32(r_esp, v); }
    /* 00486995: lea eax, [ebp - 0x1c04] */ r_eax = (u32)(r_ebp+0xffffe3fcu);
    /* 0048699b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048699c: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x4869a1u); f_00624f00();
    /* 004869a1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004869a4: mov ecx, dword ptr [ebp - 0x1c34] */ r_ecx = R32((u32)(r_ebp+0xffffe3ccu));
    /* 004869aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004869ab: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x4869b0u); f_006241d0();
    /* 004869b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004869b3: mov edx, dword ptr [ebp - 0x1c3c] */ r_edx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 004869b9: cmp dword ptr [edx + 0x1d14], 0 */ {  u32 a = R32((u32)(r_edx+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004869c0: je 0x4869ce */ if (fZ) goto L_004869ce;
L_004869c2:; BB(0x004869c2);
    /* 004869c2: mov dword ptr [ebp - 0x1c44], 0 */ W32((u32)(r_ebp+0xffffe3bcu), 0x0u);
    /* 004869cc: jmp 0x4869e4 */ goto L_004869e4;
L_004869ce:; BB(0x004869ce);
    /* 004869ce: mov eax, dword ptr [ebp - 0x1c3c] */ r_eax = R32((u32)(r_ebp+0xffffe3c4u));
    /* 004869d4: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 004869da: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 004869de: mov dword ptr [ebp - 0x1c44], edx */ W32((u32)(r_ebp+0xffffe3bcu), r_edx);
L_004869e4:; BB(0x004869e4);
    /* 004869e4: mov eax, dword ptr [ebp - 0x1c44] */ r_eax = R32((u32)(r_ebp+0xffffe3bcu));
    /* 004869ea: mov dword ptr [ebp - 0x1c2c], eax */ W32((u32)(r_ebp+0xffffe3d4u), r_eax);
    /* 004869f0: mov ecx, dword ptr [ebp - 0x1c3c] */ r_ecx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 004869f6: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 004869fc: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004869ff: mov dword ptr [ebp - 0x1c30], eax */ W32((u32)(r_ebp+0xffffe3d0u), r_eax);
    /* 00486a05: mov edi, dword ptr [ebp - 0x1c3c] */ r_edi = R32((u32)(r_ebp+0xffffe3c4u));
    /* 00486a0b: add edi, 0x10c */ {  u32 a = r_edi; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00486a11: lea esi, [ebp - 0x1c04] */ r_esi = (u32)(r_ebp+0xffffe3fcu);
    /* 00486a17: mov ecx, 0x700 */ r_ecx = 0x700u;
    /* 00486a1c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00486a1e: mov ecx, dword ptr [ebp - 0x1c3c] */ r_ecx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 00486a24: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 00486a2a: mov eax, dword ptr [ebp - 0x1c30] */ r_eax = R32((u32)(r_ebp+0xffffe3d0u));
    /* 00486a30: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00486a33: mov ecx, dword ptr [ebp - 0x1c3c] */ r_ecx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 00486a39: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 00486a3f: mov al, byte ptr [ebp - 0x1c2c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffe3d4u))) & 0xffu);
    /* 00486a45: mov byte ptr [edx + 1], al */ W8((u32)(r_edx+0x1u), (u8)r_eax);
    /* 00486a48: mov ecx, dword ptr [ebp - 0x1c08] */ r_ecx = R32((u32)(r_ebp+0xffffe3f8u));
    /* 00486a4e: add ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00486a51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486a52: mov edx, dword ptr [ebp - 0x1c3c] */ r_edx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 00486a58: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 00486a5e: add eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486a61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486a62: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486a67u); f_00624510();
    /* 00486a67: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486a6a: cmp dword ptr [0x6f6a28], 0 */ {  u32 a = R32((u32)(0x6f6a28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486a71: jne 0x486b16 */ if (!fZ) goto L_00486b16;
L_00486a77:; BB(0x00486a77);
    /* 00486a77: mov ecx, dword ptr [ebp - 0x1c3c] */ r_ecx = R32((u32)(r_ebp+0xffffe3c4u));
    /* 00486a7d: cmp dword ptr [ecx + 0x1d14], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486a84: je 0x486b16 */ if (fZ) goto L_00486b16;
L_00486a8a:; BB(0x00486a8a);
    /* 00486a8a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00486a8f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x486a94u); f_0048ab58();
    /* 00486a94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486a97: mov dword ptr [ebp - 0x1c38], eax */ W32((u32)(r_ebp+0xffffe3c8u), r_eax);
    /* 00486a9d: cmp dword ptr [ebp - 0x1c38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffe3c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486aa4: je 0x486abd */ if (fZ) goto L_00486abd;
L_00486aa6:; BB(0x00486aa6);
    /* 00486aa6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00486aa8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00486aaa: mov ecx, dword ptr [ebp - 0x1c38] */ r_ecx = R32((u32)(r_ebp+0xffffe3c8u));
    /* 00486ab0: call 0x620760 */ r_esp -= 4; W32(r_esp, 0x486ab5u); f_00620760();
    /* 00486ab5: mov dword ptr [ebp - 0x1c48], eax */ W32((u32)(r_ebp+0xffffe3b8u), r_eax);
    /* 00486abb: jmp 0x486ac7 */ goto L_00486ac7;
L_00486abd:; BB(0x00486abd);
    /* 00486abd: mov dword ptr [ebp - 0x1c48], 0 */ W32((u32)(r_ebp+0xffffe3b8u), 0x0u);
L_00486ac7:; BB(0x00486ac7);
    /* 00486ac7: mov edx, dword ptr [ebp - 0x1c48] */ r_edx = R32((u32)(r_ebp+0xffffe3b8u));
    /* 00486acd: mov dword ptr [0x6f6a28], edx */ W32((u32)(0x6f6a28u), r_edx);
    /* 00486ad3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00486ad5: push 0x431 */ { u32 v = 0x431u; r_esp -= 4; W32(r_esp, v); }
    /* 00486ada: mov ecx, dword ptr [0x6f6a28] */ r_ecx = R32((u32)(0x6f6a28u));
    /* 00486ae0: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x486ae5u); f_005e0461();
    /* 00486ae5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00486ae7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00486ae9: mov ecx, dword ptr [0x6f6a28] */ r_ecx = R32((u32)(0x6f6a28u));
    /* 00486aef: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x486af4u); f_005d81dc();
    /* 00486af4: mov eax, dword ptr [ebp - 0x1c3c] */ r_eax = R32((u32)(r_ebp+0xffffe3c4u));
    /* 00486afa: add eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486aff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486b00: mov ecx, dword ptr [0x6f6a28] */ r_ecx = R32((u32)(0x6f6a28u));
    /* 00486b06: call 0x620ce4 */ r_esp -= 4; W32(r_esp, 0x486b0bu); f_00620ce4();
    /* 00486b0b: mov ecx, dword ptr [0x6f6a28] */ r_ecx = R32((u32)(0x6f6a28u));
    /* 00486b11: call 0x6222ec */ r_esp -= 4; W32(r_esp, 0x486b16u); f_006222ec();
L_00486b16:; BB(0x00486b16);
    /* 00486b16: mov eax, 1 */ r_eax = 0x1u;
    /* 00486b1b: jmp 0x486b1f */ goto L_00486b1f;
L_00486b1d:; BB(0x00486b1d);
    /* 00486b1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00486b1f:; BB(0x00486b1f);
    /* 00486b1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00486b20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00486b21: mov esp, ebp */ r_esp = r_ebp;
    /* 00486b23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486b24: ret  */ FN_RET(0x00486740); r_esp += 4; return;
}

void f_00486b25(void) /* FUN_00486b25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00486b25);
    /* 00486b25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486b26: mov ebp, esp */ r_ebp = r_esp;
    /* 00486b28: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486b2b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00486b2e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00486b35: jmp 0x486b40 */ goto L_00486b40;
L_00486b37:; BB(0x00486b37);
    /* 00486b37: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00486b3a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486b3d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00486b40:; BB(0x00486b40);
    /* 00486b40: cmp dword ptr [ebp - 0x14], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00486b44: jge 0x486be3 */ if ((fS==fO)) goto L_00486be3;
L_00486b4a:; BB(0x00486b4a);
    /* 00486b4a: push 0x686cd4 */ { u32 v = 0x686cd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00486b4f: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00486b52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486b53: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486b58u); f_00624510();
    /* 00486b58: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486b5b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00486b5d: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00486b60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486b61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00486b64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486b65: call 0x632640 */ r_esp -= 4; W32(r_esp, 0x486b6au); f_00632640();
    /* 00486b6a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486b6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486b6e: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00486b71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486b72: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x486b77u); f_00624520();
    /* 00486b77: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486b7a: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00486b7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486b7e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486b81: add eax, 0x1d39 */ {  u32 a = r_eax; u32 b = 0x1d39u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486b86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486b87: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486b8cu); f_00624510();
    /* 00486b8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486b8f: push 0x686cdc */ { u32 v = 0x686cdcu; r_esp -= 4; W32(r_esp, v); }
    /* 00486b94: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00486b97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486b98: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x486b9du); f_00624520();
    /* 00486b9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486ba0: push 0x686ce4 */ { u32 v = 0x686ce4u; r_esp -= 4; W32(r_esp, v); }
    /* 00486ba5: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00486ba8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486ba9: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x486baeu); f_006243c0();
    /* 00486bae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486bb1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00486bb4: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486bb8: jne 0x486bd2 */ if (!fZ) goto L_00486bd2;
L_00486bba:; BB(0x00486bba);
    /* 00486bba: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00486bbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486bbe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486bc1: add ecx, 0x1d2c */ {  u32 a = r_ecx; u32 b = 0x1d2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00486bc7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486bc8: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486bcdu); f_00624510();
    /* 00486bcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486bd0: jmp 0x486be3 */ goto L_00486be3;
L_00486bd2:; BB(0x00486bd2);
    /* 00486bd2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00486bd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486bd6: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x486bdbu); f_006241d0();
    /* 00486bdb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486bde: jmp 0x486b37 */ goto L_00486b37;
L_00486be3:; BB(0x00486be3);
    /* 00486be3: mov esp, ebp */ r_esp = r_ebp;
    /* 00486be5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486be6: ret  */ FN_RET(0x00486b25); r_esp += 4; return;
}

void f_00486be7(void) /* FUN_00486be7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00486be7);
    /* 00486be7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486be8: mov ebp, esp */ r_ebp = r_esp;
    /* 00486bea: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486bed: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00486bf0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00486bf3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00486bf6: cmp dword ptr [ebp - 8], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00486bfa: ja 0x486cfb */ if ((!fC&&!fZ)) goto L_00486cfb;
L_00486c00:; BB(0x00486c00);
    /* 00486c00: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486c03: jmp dword ptr [ecx*4 + 0x486d01] */ { u32 t = R32((u32)(r_ecx*4+0x486d01u)); switch (t) { case 0x486c0au: goto L_00486c0a; case 0x486c20u: goto L_00486c20; case 0x486c4cu: goto L_00486c4c; case 0x486c62u: goto L_00486c62; case 0x486c78u: goto L_00486c78; case 0x486c8bu: goto L_00486c8b; case 0x486c9eu: goto L_00486c9e; case 0x486ceau: goto L_00486cea; case 0x486c36u: goto L_00486c36; case 0x486cb1u: goto L_00486cb1; case 0x486cc4u: goto L_00486cc4; case 0x486cd7u: goto L_00486cd7; default: UNSUP(0x00486c03, "jump table entry is not a known target"); } }
L_00486c0a:; BB(0x00486c0a);
    /* 00486c0a: push 0x686ce8 */ { u32 v = 0x686ce8u; r_esp -= 4; W32(r_esp, v); }
    /* 00486c0f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00486c12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486c13: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486c18u); f_00624510();
    /* 00486c18: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486c1b: jmp 0x486cfb */ goto L_00486cfb;
L_00486c20:; BB(0x00486c20);
    /* 00486c20: push 0x686cec */ { u32 v = 0x686cecu; r_esp -= 4; W32(r_esp, v); }
    /* 00486c25: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00486c28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486c29: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486c2eu); f_00624510();
    /* 00486c2e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486c31: jmp 0x486cfb */ goto L_00486cfb;
L_00486c36:; BB(0x00486c36);
    /* 00486c36: push 0x686cf4 */ { u32 v = 0x686cf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00486c3b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00486c3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486c3f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486c44u); f_00624510();
    /* 00486c44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486c47: jmp 0x486cfb */ goto L_00486cfb;
L_00486c4c:; BB(0x00486c4c);
    /* 00486c4c: push 0x686cfc */ { u32 v = 0x686cfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00486c51: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00486c54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486c55: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486c5au); f_00624510();
    /* 00486c5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486c5d: jmp 0x486cfb */ goto L_00486cfb;
L_00486c62:; BB(0x00486c62);
    /* 00486c62: push 0x686d04 */ { u32 v = 0x686d04u; r_esp -= 4; W32(r_esp, v); }
    /* 00486c67: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00486c6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486c6b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486c70u); f_00624510();
    /* 00486c70: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486c73: jmp 0x486cfb */ goto L_00486cfb;
L_00486c78:; BB(0x00486c78);
    /* 00486c78: push 0x686d0c */ { u32 v = 0x686d0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00486c7d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00486c80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486c81: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486c86u); f_00624510();
    /* 00486c86: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486c89: jmp 0x486cfb */ goto L_00486cfb;
L_00486c8b:; BB(0x00486c8b);
    /* 00486c8b: push 0x686d14 */ { u32 v = 0x686d14u; r_esp -= 4; W32(r_esp, v); }
    /* 00486c90: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00486c93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486c94: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486c99u); f_00624510();
    /* 00486c99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486c9c: jmp 0x486cfb */ goto L_00486cfb;
L_00486c9e:; BB(0x00486c9e);
    /* 00486c9e: push 0x686d1c */ { u32 v = 0x686d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00486ca3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00486ca6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486ca7: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486cacu); f_00624510();
    /* 00486cac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486caf: jmp 0x486cfb */ goto L_00486cfb;
L_00486cb1:; BB(0x00486cb1);
    /* 00486cb1: push 0x686d24 */ { u32 v = 0x686d24u; r_esp -= 4; W32(r_esp, v); }
    /* 00486cb6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00486cb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486cba: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486cbfu); f_00624510();
    /* 00486cbf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486cc2: jmp 0x486cfb */ goto L_00486cfb;
L_00486cc4:; BB(0x00486cc4);
    /* 00486cc4: push 0x686d2c */ { u32 v = 0x686d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00486cc9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00486ccc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486ccd: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486cd2u); f_00624510();
    /* 00486cd2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486cd5: jmp 0x486cfb */ goto L_00486cfb;
L_00486cd7:; BB(0x00486cd7);
    /* 00486cd7: push 0x686d34 */ { u32 v = 0x686d34u; r_esp -= 4; W32(r_esp, v); }
    /* 00486cdc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00486cdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486ce0: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486ce5u); f_00624510();
    /* 00486ce5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486ce8: jmp 0x486cfb */ goto L_00486cfb;
L_00486cea:; BB(0x00486cea);
    /* 00486cea: push 0x686d3c */ { u32 v = 0x686d3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00486cef: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00486cf2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486cf3: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x486cf8u); f_00624510();
    /* 00486cf8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00486cfb:; BB(0x00486cfb);
    /* 00486cfb: mov esp, ebp */ r_esp = r_ebp;
    /* 00486cfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486cfe: ret 8 */ FN_RET(0x00486be7); r_esp += 12; return;
}

void f_00486d31(void) /* FUN_00486d31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00486d31);
    /* 00486d31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486d32: mov ebp, esp */ r_ebp = r_esp;
    /* 00486d34: mov eax, 0x1c24 */ r_eax = 0x1c24u;
    /* 00486d39: call 0x626050 */ r_esp -= 4; W32(r_esp, 0x486d3eu); f_00626050();
    /* 00486d3e: mov dword ptr [ebp - 0x1c24], ecx */ W32((u32)(r_ebp+0xffffe3dcu), r_ecx);
    /* 00486d44: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00486d4b: mov dword ptr [ebp - 0x1c18], 0 */ W32((u32)(r_ebp+0xffffe3e8u), 0x0u);
    /* 00486d55: jmp 0x486d66 */ goto L_00486d66;
L_00486d57:; BB(0x00486d57);
    /* 00486d57: mov eax, dword ptr [ebp - 0x1c18] */ r_eax = R32((u32)(r_ebp+0xffffe3e8u));
    /* 00486d5d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486d60: mov dword ptr [ebp - 0x1c18], eax */ W32((u32)(r_ebp+0xffffe3e8u), r_eax);
L_00486d66:; BB(0x00486d66);
    /* 00486d66: cmp dword ptr [ebp - 0x1c18], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffe3e8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00486d6d: jge 0x486df9 */ if ((fS==fO)) goto L_00486df9;
L_00486d73:; BB(0x00486d73);
    /* 00486d73: mov ecx, dword ptr [ebp - 0x1c18] */ r_ecx = R32((u32)(r_ebp+0xffffe3e8u));
    /* 00486d79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486d7a: push 0x686d44 */ { u32 v = 0x686d44u; r_esp -= 4; W32(r_esp, v); }
    /* 00486d7f: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00486d82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486d83: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x486d88u); f_00624050();
    /* 00486d88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486d8b: push 0x686d50 */ { u32 v = 0x686d50u; r_esp -= 4; W32(r_esp, v); }
    /* 00486d90: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00486d93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486d94: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x486d99u); f_006243c0();
    /* 00486d99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486d9c: mov dword ptr [ebp - 0x1c1c], eax */ W32((u32)(r_ebp+0xffffe3e4u), r_eax);
    /* 00486da2: cmp dword ptr [ebp - 0x1c1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffe3e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486da9: je 0x486df4 */ if (fZ) goto L_00486df4;
L_00486dab:; BB(0x00486dab);
    /* 00486dab: mov ecx, dword ptr [ebp - 0x1c1c] */ r_ecx = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00486db1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486db2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00486db4: push 0x1c00 */ { u32 v = 0x1c00u; r_esp -= 4; W32(r_esp, v); }
    /* 00486db9: lea edx, [ebp - 0x1c14] */ r_edx = (u32)(r_ebp+0xffffe3ecu);
    /* 00486dbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486dc0: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x486dc5u); f_00624250();
    /* 00486dc5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486dc8: mov dword ptr [ebp - 0x1c20], eax */ W32((u32)(r_ebp+0xffffe3e0u), r_eax);
    /* 00486dce: mov eax, dword ptr [ebp - 0x1c1c] */ r_eax = R32((u32)(r_ebp+0xffffe3e4u));
    /* 00486dd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486dd5: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x486ddau); f_006241d0();
    /* 00486dda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486ddd: cmp dword ptr [ebp - 0x1c20], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffe3e0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486de4: je 0x486deb */ if (fZ) goto L_00486deb;
L_00486de6:; BB(0x00486de6);
    /* 00486de6: jmp 0x486d57 */ goto L_00486d57;
L_00486deb:; BB(0x00486deb);
    /* 00486deb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486dee: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00486df1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00486df4:; BB(0x00486df4);
    /* 00486df4: jmp 0x486d57 */ goto L_00486d57;
L_00486df9:; BB(0x00486df9);
    /* 00486df9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00486dfc: mov esp, ebp */ r_esp = r_ebp;
    /* 00486dfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486dff: ret  */ FN_RET(0x00486d31); r_esp += 4; return;
}

void f_00486e3f(void) /* FUN_00486e3f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00486e3f);
    /* 00486e3f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486e40: mov ebp, esp */ r_ebp = r_esp;
    /* 00486e42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486e43: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00486e46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00486e48: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486e4b: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00486e51: call 0x5d5253 */ r_esp -= 4; W32(r_esp, 0x486e56u); f_005d5253();
    /* 00486e56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486e59: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00486e5f: call 0x453443 */ r_esp -= 4; W32(r_esp, 0x486e64u); f_00453443();
    /* 00486e64: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486e67: mov ecx, dword ptr [edx + 0xec] */ r_ecx = R32((u32)(r_edx+0xecu));
    /* 00486e6d: call 0x489233 */ r_esp -= 4; W32(r_esp, 0x486e72u); f_00489233();
    /* 00486e72: mov esp, ebp */ r_esp = r_ebp;
    /* 00486e74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486e75: ret  */ FN_RET(0x00486e3f); r_esp += 4; return;
}

void f_00486e76(void) /* FUN_00486e76 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00486e76);
    /* 00486e76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486e77: mov ebp, esp */ r_ebp = r_esp;
    /* 00486e79: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486e7c: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00486e7f: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00486e82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486e83: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00486e86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486e87: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00486e8d: call 0x45ca02 */ r_esp -= 4; W32(r_esp, 0x486e92u); f_0045ca02();
    /* 00486e92: push 0x686d54 */ { u32 v = 0x686d54u; r_esp -= 4; W32(r_esp, v); }
    /* 00486e97: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00486e9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486e9b: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x486ea0u); f_006243c0();
    /* 00486ea0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486ea3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00486ea6: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486eaa: je 0x486f46 */ if (fZ) goto L_00486f46;
L_00486eb0:; BB(0x00486eb0);
    /* 00486eb0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00486eb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486eb4: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x486eb9u); f_006241d0();
    /* 00486eb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486ebc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00486ebe: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00486ec1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486ec2: push 0x6f6b50 */ { u32 v = 0x6f6b50u; r_esp -= 4; W32(r_esp, v); }
    /* 00486ec7: push 0x686d58 */ { u32 v = 0x686d58u; r_esp -= 4; W32(r_esp, v); }
    /* 00486ecc: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00486ed2: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00486ed5: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 00486eda: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00486edd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00486edf: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x486ee2u); call_ind(t); }
    /* 00486ee2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00486ee5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486ee6: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00486ee9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486eea: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x486eefu); f_006240c0();
    /* 00486eef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486ef2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486ef4: jne 0x486f16 */ if (!fZ) goto L_00486f16;
L_00486ef6:; BB(0x00486ef6);
    /* 00486ef6: push 0x6f6b54 */ { u32 v = 0x6f6b54u; r_esp -= 4; W32(r_esp, v); }
    /* 00486efb: push 0x686d64 */ { u32 v = 0x686d64u; r_esp -= 4; W32(r_esp, v); }
    /* 00486f00: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 00486f05: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00486f08: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00486f0e: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00486f11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00486f13: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x486f16u); call_ind(t); }
L_00486f16:; BB(0x00486f16);
    /* 00486f16: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00486f19: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00486f1f: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x486f24u); f_005de96b();
    /* 00486f24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486f25: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00486f28: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00486f2e: call 0x5ded2b */ r_esp -= 4; W32(r_esp, 0x486f33u); f_005ded2b();
    /* 00486f33: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00486f36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486f37: call 0x625790 */ r_esp -= 4; W32(r_esp, 0x486f3cu); f_00625790();
    /* 00486f3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486f3f: mov eax, 1 */ r_eax = 0x1u;
    /* 00486f44: jmp 0x486f48 */ goto L_00486f48;
L_00486f46:; BB(0x00486f46);
    /* 00486f46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00486f48:; BB(0x00486f48);
    /* 00486f48: mov esp, ebp */ r_esp = r_ebp;
    /* 00486f4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486f4b: ret 4 */ FN_RET(0x00486e76); r_esp += 8; return;
}

void f_00486f4e(void) /* FUN_00486f4e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00486f4e);
    /* 00486f4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486f4f: mov ebp, esp */ r_ebp = r_esp;
    /* 00486f51: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486f54: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00486f57: mov dword ptr [ebp - 8], 0x1e61 */ W32((u32)(r_ebp+0xfffffff8u), 0x1e61u);
    /* 00486f5e: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 00486f63: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x486f68u); f_0060ee31();
    /* 00486f68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486f6b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00486f6e: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 00486f73: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x486f78u); f_0060ee31();
    /* 00486f78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486f7b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00486f7e: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 00486f83: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x486f88u); f_0060ee31();
    /* 00486f88: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486f8b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00486f8e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00486f91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486f92: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00486f95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486f96: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486f99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486f9a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00486f9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486f9e: push 0x686d70 */ { u32 v = 0x686d70u; r_esp -= 4; W32(r_esp, v); }
    /* 00486fa3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486fa6: add ecx, 0x1d41 */ {  u32 a = r_ecx; u32 b = 0x1d41u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00486fac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486fad: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x486fb3u); call_ind(t); }
    /* 00486fb3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486fb6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486fb9: cmp dword ptr [edx + 0xe4], 0 */ {  u32 a = R32((u32)(r_edx+0xe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486fc0: je 0x486fe2 */ if (fZ) goto L_00486fe2;
L_00486fc2:; BB(0x00486fc2);
    /* 00486fc2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00486fc5: add eax, 0x1d41 */ {  u32 a = r_eax; u32 b = 0x1d41u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486fca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486fcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486fce: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 00486fd4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486fd7: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 00486fdd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00486fdf: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x486fe2u); call_ind(t); }
L_00486fe2:; BB(0x00486fe2);
    /* 00486fe2: mov esp, ebp */ r_esp = r_ebp;
    /* 00486fe4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486fe5: ret  */ FN_RET(0x00486f4e); r_esp += 4; return;
}

void f_00486fe6(void) /* FUN_00486fe6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00486fe6);
    /* 00486fe6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486fe7: mov ebp, esp */ r_ebp = r_esp;
    /* 00486fe9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486fec: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00486fef: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00486ff6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00486ffd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487000: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00487006: call 0x5de914 */ r_esp -= 4; W32(r_esp, 0x48700bu); f_005de914();
    /* 0048700b: push 0x6f6b58 */ { u32 v = 0x6f6b58u; r_esp -= 4; W32(r_esp, v); }
    /* 00487010: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487013: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 00487019: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048701c: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00487022: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00487024: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x487027u); call_ind(t); }
    /* 00487027: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00487029: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048702c: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00487032: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x487037u); f_005ea1cf();
    /* 00487037: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048703a: cmp dword ptr [ecx + 0xe8], 0 */ {  u32 a = R32((u32)(r_ecx+0xe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487041: je 0x48705f */ if (fZ) goto L_0048705f;
L_00487043:; BB(0x00487043);
    /* 00487043: push 0x6f6b5c */ { u32 v = 0x6f6b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00487048: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048704b: mov ecx, dword ptr [edx + 0xe8] */ r_ecx = R32((u32)(r_edx+0xe8u));
    /* 00487051: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487054: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 0048705a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048705c: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x48705fu); call_ind(t); }
L_0048705f:; BB(0x0048705f);
    /* 0048705f: push 0x686d88 */ { u32 v = 0x686d88u; r_esp -= 4; W32(r_esp, v); }
    /* 00487064: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487067: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 0048706d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487070: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00487076: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00487078: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x48707bu); call_ind(t); }
    /* 0048707b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048707e: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00487084: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487087: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0048708d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048708f: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x487092u); call_ind(t); }
    /* 00487092: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00487099: jmp 0x4870a4 */ goto L_004870a4;
L_0048709b:; BB(0x0048709b);
    /* 0048709b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048709e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004870a1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004870a4:; BB(0x004870a4);
    /* 004870a4: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004870a8: jge 0x4870cb */ if ((fS==fO)) goto L_004870cb;
L_004870aa:; BB(0x004870aa);
    /* 004870aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004870ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004870b0: mov ecx, dword ptr [edx + ecx*4 + 0xa4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 004870b7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004870ba: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004870bd: mov eax, dword ptr [edx + eax*4 + 0xa4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa4u));
    /* 004870c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004870c6: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x4870c9u); call_ind(t); }
    /* 004870c9: jmp 0x48709b */ goto L_0048709b;
L_004870cb:; BB(0x004870cb);
    /* 004870cb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004870ce: cmp dword ptr [eax + 0xd4], 0 */ {  u32 a = R32((u32)(r_eax+0xd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004870d5: je 0x487110 */ if (fZ) goto L_00487110;
L_004870d7:; BB(0x004870d7);
    /* 004870d7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004870de: jmp 0x4870e9 */ goto L_004870e9;
L_004870e0:; BB(0x004870e0);
    /* 004870e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004870e3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004870e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_004870e9:; BB(0x004870e9);
    /* 004870e9: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004870ed: jge 0x487110 */ if ((fS==fO)) goto L_00487110;
L_004870ef:; BB(0x004870ef);
    /* 004870ef: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004870f2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004870f5: mov ecx, dword ptr [eax + edx*4 + 0xd4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xd4u));
    /* 004870fc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004870ff: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487102: mov edx, dword ptr [eax + edx*4 + 0xd4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xd4u));
    /* 00487109: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048710b: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x48710eu); call_ind(t); }
    /* 0048710e: jmp 0x4870e0 */ goto L_004870e0;
L_00487110:; BB(0x00487110);
    /* 00487110: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487113: call 0x486e00 */ r_esp -= 4; W32(r_esp, 0x487118u); f_00486e00();
    /* 00487118: push 0x6f6b60 */ { u32 v = 0x6f6b60u; r_esp -= 4; W32(r_esp, v); }
    /* 0048711d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487120: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 00487126: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00487129: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048712a: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48712fu); f_00624510();
    /* 0048712f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487132: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487135: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 0048713b: mov dword ptr [ecx + 0x3c], 0x65 */ W32((u32)(r_ecx+0x3cu), 0x65u);
    /* 00487142: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487145: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 0048714b: mov byte ptr [eax + 0x40], 0 */ W8((u32)(r_eax+0x40u), 0x0u);
    /* 0048714f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487152: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 00487158: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048715b: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0048715e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487161: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 00487164: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487167: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 0048716d: mov byte ptr [eax], 2 */ W8((u32)(r_eax), 0x2u);
    /* 00487170: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487173: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 00487179: mov byte ptr [edx + 0x65], 0 */ W8((u32)(r_edx+0x65u), 0x0u);
    /* 0048717d: mov esp, ebp */ r_esp = r_ebp;
    /* 0048717f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487180: ret  */ FN_RET(0x00486fe6); r_esp += 4; return;
}

void f_00487181(void) /* FUN_00487181 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00487181);
    /* 00487181: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00487182: mov ebp, esp */ r_ebp = r_esp;
    /* 00487184: sub esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048718a: mov dword ptr [ebp - 0x128], ecx */ W32((u32)(r_ebp+0xfffffed8u), r_ecx);
    /* 00487190: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00487197: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0048719e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004871a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004871a2: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 004871a8: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 004871ae: call 0x5df13c */ r_esp -= 4; W32(r_esp, 0x4871b3u); f_005df13c();
    /* 004871b3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004871b6: push 0x6f6b64 */ { u32 v = 0x6f6b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004871bb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004871be: add edx, 0x8a1 */ {  u32 a = r_edx; u32 b = 0x8a1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004871c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004871c5: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x4871cau); f_006240c0();
    /* 004871ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004871cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004871cf: jne 0x4871ef */ if (!fZ) goto L_004871ef;
L_004871d1:; BB(0x004871d1);
    /* 004871d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004871d3: push 0x6f6b68 */ { u32 v = 0x6f6b68u; r_esp -= 4; W32(r_esp, v); }
    /* 004871d8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004871db: mov cl, byte ptr [eax + 0x8a0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x8a0u))) & 0xffu);
    /* 004871e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004871e2: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 004871e8: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x4871edu); f_00487680();
    /* 004871ed: jmp 0x487208 */ goto L_00487208;
L_004871ef:; BB(0x004871ef);
    /* 004871ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004871f1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004871f4: add edx, 0x8a1 */ {  u32 a = r_edx; u32 b = 0x8a1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004871fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004871fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004871fd: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487203: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x487208u); f_00487680();
L_00487208:; BB(0x00487208);
    /* 00487208: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 00487212: jmp 0x487223 */ goto L_00487223;
L_00487214:; BB(0x00487214);
    /* 00487214: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0048721a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048721d: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
L_00487223:; BB(0x00487223);
    /* 00487223: cmp dword ptr [ebp - 0x124], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048722a: jge 0x487259 */ if ((fS==fO)) goto L_00487259;
L_0048722c:; BB(0x0048722c);
    /* 0048722c: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00487232: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487238: mov ecx, dword ptr [edx + ecx*4 + 0xa4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 0048723f: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 00487245: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0048724b: mov eax, dword ptr [edx + eax*4 + 0xa4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa4u));
    /* 00487252: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00487254: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x487257u); call_ind(t); }
    /* 00487257: jmp 0x487214 */ goto L_00487214;
L_00487259:; BB(0x00487259);
    /* 00487259: push 0x686d8c */ { u32 v = 0x686d8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048725e: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487264: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0048726a: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487270: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00487276: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00487278: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x48727bu); call_ind(t); }
    /* 0048727b: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487281: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 00487287: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0048728a: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 0048728d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00487290: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00487293: push 0x686d90 */ { u32 v = 0x686d90u; r_esp -= 4; W32(r_esp, v); }
    /* 00487298: lea ecx, [ebp - 0x11c] */ r_ecx = (u32)(r_ebp+0xfffffee4u);
    /* 0048729e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048729f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4872a4u); f_00624510();
    /* 004872a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004872a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004872a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004872ab: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004872ae: add edx, 0x8d4 */ {  u32 a = r_edx; u32 b = 0x8d4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004872b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004872b5: lea eax, [ebp - 0x11c] */ r_eax = (u32)(r_ebp+0xfffffee4u);
    /* 004872bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004872bc: call 0x4298d8 */ r_esp -= 4; W32(r_esp, 0x4872c1u); f_004298d8();
    /* 004872c1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004872c4: lea ecx, [ebp - 0x11c] */ r_ecx = (u32)(r_ebp+0xfffffee4u);
    /* 004872ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004872cb: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 004872d1: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 004872d7: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 004872dd: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 004872e3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004872e5: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x4872e8u); call_ind(t); }
    /* 004872e8: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 004872ee: cmp dword ptr [ecx + 0xe8], 0 */ {  u32 a = R32((u32)(r_ecx+0xe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004872f5: je 0x487320 */ if (fZ) goto L_00487320;
L_004872f7:; BB(0x004872f7);
    /* 004872f7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004872fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004872fc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004872ff: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x487302u); call_ind(t); }
    /* 00487302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487303: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487309: mov ecx, dword ptr [ecx + 0xe8] */ r_ecx = R32((u32)(r_ecx+0xe8u));
    /* 0048730f: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487315: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 0048731b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048731d: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x487320u); call_ind(t); }
L_00487320:; BB(0x00487320);
    /* 00487320: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487326: cmp dword ptr [eax + 0xe4], 0 */ {  u32 a = R32((u32)(r_eax+0xe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048732d: je 0x487356 */ if (fZ) goto L_00487356;
L_0048732f:; BB(0x0048732f);
    /* 0048732f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00487332: add ecx, 0x8bb */ {  u32 a = r_ecx; u32 b = 0x8bbu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00487338: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00487339: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0048733f: mov ecx, dword ptr [edx + 0xe4] */ r_ecx = R32((u32)(r_edx+0xe4u));
    /* 00487345: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0048734b: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 00487351: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00487353: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x487356u); call_ind(t); }
L_00487356:; BB(0x00487356);
    /* 00487356: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0048735c: cmp dword ptr [ecx + 0xd4], 0 */ {  u32 a = R32((u32)(r_ecx+0xd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487363: je 0x487427 */ if (fZ) goto L_00487427;
L_00487369:; BB(0x00487369);
    /* 00487369: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 00487373: jmp 0x487384 */ goto L_00487384;
L_00487375:; BB(0x00487375);
    /* 00487375: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0048737b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048737e: mov dword ptr [ebp - 0x124], edx */ W32((u32)(r_ebp+0xfffffedcu), r_edx);
L_00487384:; BB(0x00487384);
    /* 00487384: cmp dword ptr [ebp - 0x124], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048738b: jge 0x4873ba */ if ((fS==fO)) goto L_004873ba;
L_0048738d:; BB(0x0048738d);
    /* 0048738d: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 00487393: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487399: mov ecx, dword ptr [ecx + eax*4 + 0xd4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xd4u));
    /* 004873a0: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 004873a6: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 004873ac: mov edx, dword ptr [eax + edx*4 + 0xd4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xd4u));
    /* 004873b3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004873b5: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x4873b8u); call_ind(t); }
    /* 004873b8: jmp 0x487375 */ goto L_00487375;
L_004873ba:; BB(0x004873ba);
    /* 004873ba: push 0x6f6b6c */ { u32 v = 0x6f6b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004873bf: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 004873c5: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 004873cb: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 004873d1: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 004873d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004873d9: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4873dcu); call_ind(t); }
    /* 004873dc: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 004873e2: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 004873e8: call 0x4534e5 */ r_esp -= 4; W32(r_esp, 0x4873edu); f_004534e5();
    /* 004873ed: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 004873f3: mov ecx, dword ptr [ecx + 0xec] */ r_ecx = R32((u32)(r_ecx+0xecu));
    /* 004873f9: call 0x489233 */ r_esp -= 4; W32(r_esp, 0x4873feu); f_00489233();
    /* 004873fe: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00487401: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00487403: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00487406: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x487409u); call_ind(t); }
    /* 00487409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048740a: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487410: mov ecx, dword ptr [ecx + 0xec] */ r_ecx = R32((u32)(r_ecx+0xecu));
    /* 00487416: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0048741c: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00487422: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00487424: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x487427u); call_ind(t); }
L_00487427:; BB(0x00487427);
    /* 00487427: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0048742d: cmp dword ptr [eax + 0x1d5c], 0 */ {  u32 a = R32((u32)(r_eax+0x1d5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487434: je 0x487450 */ if (fZ) goto L_00487450;
L_00487436:; BB(0x00487436);
    /* 00487436: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00487439: mov byte ptr [ecx + 0x8ba], 7 */ W8((u32)(r_ecx+0x8bau), 0x7u);
    /* 00487440: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487446: mov dword ptr [edx + 0x1d5c], 0 */ W32((u32)(r_edx+0x1d5cu), 0x0u);
L_00487450:; BB(0x00487450);
    /* 00487450: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487456: cmp dword ptr [eax + 0xc0], 0 */ {  u32 a = R32((u32)(r_eax+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048745d: je 0x48747b */ if (fZ) goto L_0048747b;
L_0048745f:; BB(0x0048745f);
    /* 0048745f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00487462: movsx edx, byte ptr [ecx + 0x8ba] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x8bau));
    /* 00487469: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048746a: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487470: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00487476: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48747bu); f_005ea1cf();
L_0048747b:; BB(0x0048747b);
    /* 0048747b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048747e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00487480: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00487483: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x487486u); call_ind(t); }
    /* 00487486: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487487: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0048748c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0048748f: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00487495: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00487498: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048749a: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x48749du); call_ind(t); }
    /* 0048749d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048749f: je 0x4874c0 */ if (fZ) goto L_004874c0;
L_004874a1:; BB(0x004874a1);
    /* 004874a1: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 004874a7: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 004874ad: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 004874b3: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 004874b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004874bb: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4874beu); call_ind(t); }
    /* 004874be: jmp 0x4874dd */ goto L_004874dd;
L_004874c0:; BB(0x004874c0);
    /* 004874c0: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 004874c6: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 004874cc: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 004874d2: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 004874d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004874da: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x4874ddu); call_ind(t); }
L_004874dd:; BB(0x004874dd);
    /* 004874dd: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 004874e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004874e1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004874e4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004874e6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004874e9: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4874ecu); call_ind(t); }
    /* 004874ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004874ed: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004874f3: call 0x45ca02 */ r_esp -= 4; W32(r_esp, 0x4874f8u); f_0045ca02();
    /* 004874f8: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 004874fe: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 00487504: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 00487508: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0048750b: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487511: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 00487517: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0048751a: mov dword ptr [ebp - 0x120], edx */ W32((u32)(r_ebp+0xfffffee0u), r_edx);
    /* 00487520: push 0x6f6b70 */ { u32 v = 0x6f6b70u; r_esp -= 4; W32(r_esp, v); }
    /* 00487525: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00487528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487529: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x48752eu); f_006240c0();
    /* 0048752e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487533: je 0x487551 */ if (fZ) goto L_00487551;
L_00487535:; BB(0x00487535);
    /* 00487535: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00487538: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00487539: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0048753f: add edx, 0x10c */ {  u32 a = r_edx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00487545: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487546: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048754c: call 0x45c7e0 */ r_esp -= 4; W32(r_esp, 0x487551u); f_0045c7e0();
L_00487551:; BB(0x00487551);
    /* 00487551: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487557: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 0048755d: mov dl, byte ptr [ebp - 0x20] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe0u))) & 0xffu);
    /* 00487560: mov byte ptr [ecx + 1], dl */ W8((u32)(r_ecx+0x1u), (u8)r_edx);
    /* 00487563: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487569: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 0048756f: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 00487575: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 00487578: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0048757b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048757c: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487582: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 00487588: add edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048758b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048758c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x487591u); f_00624510();
    /* 00487591: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487594: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00487597: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00487599: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048759c: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x48759fu); call_ind(t); }
    /* 0048759f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004875a0: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 004875a6: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 004875ac: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004875af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004875b0: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4875b5u); f_00624510();
    /* 004875b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004875b8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004875bb: add edx, 0x8bb */ {  u32 a = r_edx; u32 b = 0x8bbu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004875c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004875c2: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 004875c8: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 004875ce: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004875d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004875d2: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4875d7u); f_00624510();
    /* 004875d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004875da: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004875dd: add edx, 0x8a1 */ {  u32 a = r_edx; u32 b = 0x8a1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004875e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004875e4: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 004875ea: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 004875f0: add ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004875f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004875f4: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4875f9u); f_00624510();
    /* 004875f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004875fc: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487602: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 00487608: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0048760b: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487611: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 00487617: mov dword ptr [edx + 0x3c], 0x64 */ W32((u32)(r_edx+0x3cu), 0x64u);
    /* 0048761e: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487624: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 0048762a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048762d: mov al, byte ptr [edx + 0x8a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x8a0u))) & 0xffu);
    /* 00487633: mov byte ptr [ecx + 0x40], al */ W8((u32)(r_ecx+0x40u), (u8)r_eax);
    /* 00487636: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00487639: mov edx, dword ptr [ecx + 0x8d4] */ r_edx = R32((u32)(r_ecx+0x8d4u));
    /* 0048763f: mov eax, dword ptr [ecx + 0x8d8] */ r_eax = R32((u32)(r_ecx+0x8d8u));
    /* 00487645: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0048764b: mov ecx, dword ptr [ecx + 0x1d10] */ r_ecx = R32((u32)(r_ecx+0x1d10u));
    /* 00487651: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 00487654: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 00487657: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0048765d: mov eax, dword ptr [edx + 0x1d10] */ r_eax = R32((u32)(r_edx+0x1d10u));
    /* 00487663: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00487666: mov dl, byte ptr [ecx + 0x8ba] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x8bau))) & 0xffu);
    /* 0048766c: mov byte ptr [eax + 0x65], dl */ W8((u32)(r_eax+0x65u), (u8)r_edx);
    /* 0048766f: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00487675: call 0x485602 */ r_esp -= 4; W32(r_esp, 0x48767au); f_00485602();
    /* 0048767a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048767c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048767d: ret 4 */ FN_RET(0x00487181); r_esp += 8; return;
}

void f_00487680(void) /* FUN_00487680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00487680);
    /* 00487680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00487681: mov ebp, esp */ r_ebp = r_esp;
    /* 00487683: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00487686: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00487689: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048768c: cmp dword ptr [eax + 0xb8], 0 */ {  u32 a = R32((u32)(r_eax+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487693: jne 0x487764 */ if (!fZ) goto L_00487764;
L_00487699:; BB(0x00487699);
    /* 00487699: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048769e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4876a3u); f_0048ab58();
    /* 004876a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004876a6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004876a9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004876ad: je 0x4876bc */ if (fZ) goto L_004876bc;
L_004876af:; BB(0x004876af);
    /* 004876af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004876b2: call 0x489926 */ r_esp -= 4; W32(r_esp, 0x4876b7u); f_00489926();
    /* 004876b7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004876ba: jmp 0x4876c3 */ goto L_004876c3;
L_004876bc:; BB(0x004876bc);
    /* 004876bc: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_004876c3:; BB(0x004876c3);
    /* 004876c3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004876c6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004876c9: mov dword ptr [ecx + 0xb8], edx */ W32((u32)(r_ecx+0xb8u), r_edx);
    /* 004876cf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004876d2: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 004876d8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004876db: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004876de: push 0x42c */ { u32 v = 0x42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004876e3: push 0x42b */ { u32 v = 0x42bu; r_esp -= 4; W32(r_esp, v); }
    /* 004876e8: push 0x42a */ { u32 v = 0x42au; r_esp -= 4; W32(r_esp, v); }
    /* 004876ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004876f0: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 004876f6: call 0x5e70a6 */ r_esp -= 4; W32(r_esp, 0x4876fbu); f_005e70a6();
    /* 004876fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004876fe: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00487704: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487707: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0048770d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048770f: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x487712u); call_ind(t); }
    /* 00487712: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 00487717: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00487719: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048771c: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00487722: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487725: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0048772b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048772d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x487730u); call_ind(t); }
    /* 00487730: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00487732: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00487734: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487737: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0048773d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487740: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00487746: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00487748: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x48774bu); call_ind(t); }
    /* 0048774b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0048774d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487750: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00487756: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487759: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0048775f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00487761: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x487764u); call_ind(t); }
L_00487764:; BB(0x00487764);
    /* 00487764: push 0x6f6b74 */ { u32 v = 0x6f6b74u; r_esp -= 4; W32(r_esp, v); }
    /* 00487769: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048776c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048776d: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x487772u); f_006240c0();
    /* 00487772: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487775: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487777: je 0x4877a3 */ if (fZ) goto L_004877a3;
L_00487779:; BB(0x00487779);
    /* 00487779: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0048777c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048777d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487780: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00487786: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00487789: call 0x453bb7 */ r_esp -= 4; W32(r_esp, 0x48778eu); f_00453bb7();
    /* 0048778e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487790: jne 0x4877a3 */ if (!fZ) goto L_004877a3;
L_00487792:; BB(0x00487792);
    /* 00487792: push 0x6f6b78 */ { u32 v = 0x6f6b78u; r_esp -= 4; W32(r_esp, v); }
    /* 00487797: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048779a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048779b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4877a0u); f_00624510();
    /* 004877a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004877a3:; BB(0x004877a3);
    /* 004877a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004877a6: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 004877ac: call 0x5de9d1 */ r_esp -= 4; W32(r_esp, 0x4877b1u); f_005de9d1();
    /* 004877b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004877b3: je 0x4877d5 */ if (fZ) goto L_004877d5;
L_004877b5:; BB(0x004877b5);
    /* 004877b5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004877b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004877b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004877bc: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 004877c2: call 0x5de9d1 */ r_esp -= 4; W32(r_esp, 0x4877c7u); f_005de9d1();
    /* 004877c7: add eax, 0x8a1 */ {  u32 a = r_eax; u32 b = 0x8a1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004877cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004877cd: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4877d2u); f_00624510();
    /* 004877d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004877d5:; BB(0x004877d5);
    /* 004877d5: push 0x6f6b7c */ { u32 v = 0x6f6b7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004877da: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004877dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004877de: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x4877e3u); f_006240c0();
    /* 004877e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004877e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004877e8: jne 0x487850 */ if (!fZ) goto L_00487850;
L_004877ea:; BB(0x004877ea);
    /* 004877ea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004877ed: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 004877f3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004877f6: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 004877fc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004877fe: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x487801u); call_ind(t); }
    /* 00487801: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487804: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 0048780a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048780d: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00487813: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00487815: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x487818u); call_ind(t); }
    /* 00487818: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048781b: mov dword ptr [eax + 0x8c], 1 */ W32((u32)(r_eax+0x8cu), 0x1u);
    /* 00487825: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487829: je 0x48783b */ if (fZ) goto L_0048783b;
L_0048782b:; BB(0x0048782b);
    /* 0048782b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048782d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487830: mov ecx, dword ptr [ecx + 0x100] */ r_ecx = R32((u32)(r_ecx+0x100u));
    /* 00487836: call 0x5d5253 */ r_esp -= 4; W32(r_esp, 0x48783bu); f_005d5253();
L_0048783b:; BB(0x0048783b);
    /* 0048783b: movsx edx, byte ptr [ebp + 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0048783f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487840: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487843: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00487849: call 0x489a42 */ r_esp -= 4; W32(r_esp, 0x48784eu); f_00489a42();
    /* 0048784e: jmp 0x4878b3 */ goto L_004878b3;
L_00487850:; BB(0x00487850);
    /* 00487850: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487853: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00487859: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048785c: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00487862: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00487864: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x487867u); call_ind(t); }
    /* 00487867: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048786a: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00487870: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487873: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00487879: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048787b: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x48787eu); call_ind(t); }
    /* 0048787e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487881: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 0048788b: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048788f: je 0x4878a1 */ if (fZ) goto L_004878a1;
L_00487891:; BB(0x00487891);
    /* 00487891: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00487893: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487896: mov ecx, dword ptr [ecx + 0x100] */ r_ecx = R32((u32)(r_ecx+0x100u));
    /* 0048789c: call 0x5d5253 */ r_esp -= 4; W32(r_esp, 0x4878a1u); f_005d5253();
L_004878a1:; BB(0x004878a1);
    /* 004878a1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004878a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004878a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004878a8: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 004878ae: call 0x489b2e */ r_esp -= 4; W32(r_esp, 0x4878b3u); f_00489b2e();
L_004878b3:; BB(0x004878b3);
    /* 004878b3: mov esp, ebp */ r_esp = r_ebp;
    /* 004878b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004878b6: ret 0xc */ FN_RET(0x00487680); r_esp += 16; return;
}

void f_004878b9(void) /* FUN_004878b9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004878b9);
    /* 004878b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004878ba: mov ebp, esp */ r_ebp = r_esp;
    /* 004878bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004878bd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004878c0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004878c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004878c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004878c7: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 004878cd: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004878d0: call 0x453916 */ r_esp -= 4; W32(r_esp, 0x4878d5u); f_00453916();
    /* 004878d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004878d8: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004878de: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 004878e4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004878e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004878ea: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004878f0: mov dword ptr [eax + 0x88], ecx */ W32((u32)(r_eax+0x88u), r_ecx);
    /* 004878f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004878f8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004878fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004878fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004878fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487901: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x487906u); f_00487680();
    /* 00487906: mov esp, ebp */ r_esp = r_ebp;
    /* 00487908: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487909: ret 4 */ FN_RET(0x004878b9); r_esp += 8; return;
}

void f_0048790c(void) /* FUN_0048790c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048790c);
    /* 0048790c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048790d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048790f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00487912: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00487915: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00487918: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487919: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048791c: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00487922: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00487925: call 0x453a95 */ r_esp -= 4; W32(r_esp, 0x48792au); f_00453a95();
    /* 0048792a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048792d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00487930: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487931: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487934: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0048793a: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048793d: call 0x453cad */ r_esp -= 4; W32(r_esp, 0x487942u); f_00453cad();
    /* 00487942: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487945: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 0048794b: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 00487951: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00487954: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487957: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 0048795d: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 00487963: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487966: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0048796c: cmp dword ptr [ecx + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487973: jne 0x487988 */ if (!fZ) goto L_00487988;
L_00487975:; BB(0x00487975);
    /* 00487975: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00487977: push 0x6f6b80 */ { u32 v = 0x6f6b80u; r_esp -= 4; W32(r_esp, v); }
    /* 0048797c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048797e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487981: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x487986u); f_00487680();
    /* 00487986: jmp 0x4879e3 */ goto L_004879e3;
L_00487988:; BB(0x00487988);
    /* 00487988: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048798b: movsx eax, byte ptr [edx + 0x90] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x90u));
    /* 00487992: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487995: jl 0x4879e3 */ if ((fS!=fO)) goto L_004879e3;
L_00487997:; BB(0x00487997);
    /* 00487997: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048799a: movsx edx, byte ptr [ecx + 0x90] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x90u));
    /* 004879a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004879a3: je 0x4879ba */ if (fZ) goto L_004879ba;
L_004879a5:; BB(0x004879a5);
    /* 004879a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004879a8: mov cl, byte ptr [eax + 0x90] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x90u))) & 0xffu);
    /* 004879ae: sub cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004879b1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004879b4: mov byte ptr [edx + 0x90], cl */ W8((u32)(r_edx+0x90u), (u8)r_ecx);
L_004879ba:; BB(0x004879ba);
    /* 004879ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004879bc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004879bf: movsx ecx, byte ptr [eax + 0x90] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x90u));
    /* 004879c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004879c7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004879ca: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 004879d0: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004879d3: call 0x453a6e */ r_esp -= 4; W32(r_esp, 0x4879d8u); f_00453a6e();
    /* 004879d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004879d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004879db: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004879de: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x4879e3u); f_00487680();
L_004879e3:; BB(0x004879e3);
    /* 004879e3: mov esp, ebp */ r_esp = r_ebp;
    /* 004879e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004879e6: ret 4 */ FN_RET(0x0048790c); r_esp += 8; return;
}

void f_004879e9(void) /* FUN_004879e9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004879e9);
    /* 004879e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004879ea: mov ebp, esp */ r_ebp = r_esp;
    /* 004879ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004879ed: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004879f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004879f3: mov eax, dword ptr [eax + 0x8c] */ r_eax = R32((u32)(r_eax+0x8cu));
    /* 004879f9: mov esp, ebp */ r_esp = r_ebp;
    /* 004879fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004879fc: ret  */ FN_RET(0x004879e9); r_esp += 4; return;
}

void f_004879fd(void) /* FUN_004879fd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004879fd);
    /* 004879fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004879fe: mov ebp, esp */ r_ebp = r_esp;
    /* 00487a00: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00487a03: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00487a06: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00487a09: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00487a0f: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00487a12: call 0x453c16 */ r_esp -= 4; W32(r_esp, 0x487a17u); f_00453c16();
    /* 00487a17: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00487a1a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00487a1d: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00487a23: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00487a26: call 0x453af3 */ r_esp -= 4; W32(r_esp, 0x487a2bu); f_00453af3();
    /* 00487a2b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00487a2e: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00487a34: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00487a37: call 0x453c16 */ r_esp -= 4; W32(r_esp, 0x487a3cu); f_00453c16();
    /* 00487a3c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00487a3f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487a43: jne 0x487a58 */ if (!fZ) goto L_00487a58;
L_00487a45:; BB(0x00487a45);
    /* 00487a45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00487a47: push 0x6f6b84 */ { u32 v = 0x6f6b84u; r_esp -= 4; W32(r_esp, v); }
    /* 00487a4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00487a4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00487a51: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x487a56u); f_00487680();
    /* 00487a56: jmp 0x487ab0 */ goto L_00487ab0;
L_00487a58:; BB(0x00487a58);
    /* 00487a58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487a5b: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487a5e: je 0x487a87 */ if (fZ) goto L_00487a87;
L_00487a60:; BB(0x00487a60);
    /* 00487a60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00487a62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487a65: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00487a68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00487a69: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00487a6c: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00487a72: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00487a75: call 0x453a6e */ r_esp -= 4; W32(r_esp, 0x487a7au); f_00453a6e();
    /* 00487a7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487a7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00487a7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00487a80: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x487a85u); f_00487680();
    /* 00487a85: jmp 0x487ab0 */ goto L_00487ab0;
L_00487a87:; BB(0x00487a87);
    /* 00487a87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00487a89: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00487a8c: movsx ecx, byte ptr [eax + 0x90] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x90u));
    /* 00487a93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00487a94: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00487a97: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00487a9d: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00487aa0: call 0x453a6e */ r_esp -= 4; W32(r_esp, 0x487aa5u); f_00453a6e();
    /* 00487aa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487aa6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00487aa8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00487aab: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x487ab0u); f_00487680();
L_00487ab0:; BB(0x00487ab0);
    /* 00487ab0: mov esp, ebp */ r_esp = r_ebp;
    /* 00487ab2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487ab3: ret  */ FN_RET(0x004879fd); r_esp += 4; return;
}

void f_00487ab4(void) /* FUN_00487ab4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00487ab4);
    /* 00487ab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00487ab5: mov ebp, esp */ r_ebp = r_esp;
    /* 00487ab7: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00487aba: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00487abd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00487ac0: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00487ac6: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x487acbu); f_005de399();
    /* 00487acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487acd: je 0x487ae1 */ if (fZ) goto L_00487ae1;
L_00487acf:; BB(0x00487acf);
    /* 00487acf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00487ad2: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00487ad8: call 0x5de9d1 */ r_esp -= 4; W32(r_esp, 0x487addu); f_005de9d1();
    /* 00487add: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487adf: jne 0x487ae8 */ if (!fZ) goto L_00487ae8;
L_00487ae1:; BB(0x00487ae1);
    /* 00487ae1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00487ae3: jmp 0x487b91 */ goto L_00487b91;
L_00487ae8:; BB(0x00487ae8);
    /* 00487ae8: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00487aeb: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00487af1: call 0x5de9d1 */ r_esp -= 4; W32(r_esp, 0x487af6u); f_005de9d1();
    /* 00487af6: add eax, 0x8a1 */ {  u32 a = r_eax; u32 b = 0x8a1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00487afb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487afc: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00487aff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487b00: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x487b05u); f_00624510();
    /* 00487b05: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487b08: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00487b0f: jmp 0x487b1a */ goto L_00487b1a;
L_00487b11:; BB(0x00487b11);
    /* 00487b11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487b14: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00487b17: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00487b1a:; BB(0x00487b1a);
    /* 00487b1a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00487b1d: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00487b23: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x487b28u); f_005de399();
    /* 00487b28: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487b2b: jge 0x487b8f */ if ((fS==fO)) goto L_00487b8f;
L_00487b2d:; BB(0x00487b2d);
    /* 00487b2d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00487b30: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00487b36: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x487b3bu); f_005de96b();
    /* 00487b3b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487b3e: jne 0x487b42 */ if (!fZ) goto L_00487b42;
L_00487b40:; BB(0x00487b40);
    /* 00487b40: jmp 0x487b11 */ goto L_00487b11;
L_00487b42:; BB(0x00487b42);
    /* 00487b42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487b45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00487b46: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00487b49: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00487b4f: call 0x5df13c */ r_esp -= 4; W32(r_esp, 0x487b54u); f_005df13c();
    /* 00487b54: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00487b57: push 0x6f6b88 */ { u32 v = 0x6f6b88u; r_esp -= 4; W32(r_esp, v); }
    /* 00487b5c: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00487b5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487b60: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x487b65u); f_006240c0();
    /* 00487b65: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487b68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487b6a: je 0x487b8d */ if (fZ) goto L_00487b8d;
L_00487b6c:; BB(0x00487b6c);
    /* 00487b6c: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 00487b6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00487b70: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487b73: add edx, 0x8a1 */ {  u32 a = r_edx; u32 b = 0x8a1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00487b79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487b7a: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x487b7fu); f_006240c0();
    /* 00487b7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487b82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487b84: jne 0x487b8d */ if (!fZ) goto L_00487b8d;
L_00487b86:; BB(0x00487b86);
    /* 00487b86: mov eax, 1 */ r_eax = 0x1u;
    /* 00487b8b: jmp 0x487b91 */ goto L_00487b91;
L_00487b8d:; BB(0x00487b8d);
    /* 00487b8d: jmp 0x487b11 */ goto L_00487b11;
L_00487b8f:; BB(0x00487b8f);
    /* 00487b8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00487b91:; BB(0x00487b91);
    /* 00487b91: mov esp, ebp */ r_esp = r_ebp;
    /* 00487b93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487b94: ret  */ FN_RET(0x00487ab4); r_esp += 4; return;
}

void f_00487b95(void) /* FUN_00487b95 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00487b95);
    /* 00487b95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00487b96: mov ebp, esp */ r_ebp = r_esp;
    /* 00487b98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00487b99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487b9a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00487b9d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487ba0: call 0x487ab4 */ r_esp -= 4; W32(r_esp, 0x487ba5u); f_00487ab4();
    /* 00487ba5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487ba7: je 0x487bc6 */ if (fZ) goto L_00487bc6;
L_00487ba9:; BB(0x00487ba9);
    /* 00487ba9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00487bab: push 0x686d98 */ { u32 v = 0x686d98u; r_esp -= 4; W32(r_esp, v); }
    /* 00487bb0: push 0x686da8 */ { u32 v = 0x686da8u; r_esp -= 4; W32(r_esp, v); }
    /* 00487bb5: call 0x60f9d8 */ r_esp -= 4; W32(r_esp, 0x487bbau); f_0060f9d8();
    /* 00487bba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487bbd: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487bc0: je 0x487bc4 */ if (fZ) goto L_00487bc4;
L_00487bc2:; BB(0x00487bc2);
    /* 00487bc2: jmp 0x487c28 */ goto L_00487c28;
L_00487bc4:; BB(0x00487bc4);
    /* 00487bc4: jmp 0x487be1 */ goto L_00487be1;
L_00487bc6:; BB(0x00487bc6);
    /* 00487bc6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00487bc8: push 0x686df4 */ { u32 v = 0x686df4u; r_esp -= 4; W32(r_esp, v); }
    /* 00487bcd: push 0x686e04 */ { u32 v = 0x686e04u; r_esp -= 4; W32(r_esp, v); }
    /* 00487bd2: call 0x60f9d8 */ r_esp -= 4; W32(r_esp, 0x487bd7u); f_0060f9d8();
    /* 00487bd7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487bda: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487bdd: je 0x487be1 */ if (fZ) goto L_00487be1;
L_00487bdf:; BB(0x00487bdf);
    /* 00487bdf: jmp 0x487c28 */ goto L_00487c28;
L_00487be1:; BB(0x00487be1);
    /* 00487be1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487be4: movsx esi, byte ptr [eax + 0x90] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+0x90u));
    /* 00487beb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487bee: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00487bf4: call 0x5e7562 */ r_esp -= 4; W32(r_esp, 0x487bf9u); f_005e7562();
    /* 00487bf9: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487bfb: jne 0x487c1a */ if (!fZ) goto L_00487c1a;
L_00487bfd:; BB(0x00487bfd);
    /* 00487bfd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487c00: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00487c06: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00487c09: call 0x453c16 */ r_esp -= 4; W32(r_esp, 0x487c0eu); f_00453c16();
    /* 00487c0e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00487c11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487c14: mov byte ptr [ecx + 0x90], al */ W8((u32)(r_ecx+0x90u), (u8)r_eax);
L_00487c1a:; BB(0x00487c1a);
    /* 00487c1a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487c1d: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00487c23: call 0x489c24 */ r_esp -= 4; W32(r_esp, 0x487c28u); f_00489c24();
L_00487c28:; BB(0x00487c28);
    /* 00487c28: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487c29: mov esp, ebp */ r_esp = r_ebp;
    /* 00487c2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487c2c: ret  */ FN_RET(0x00487b95); r_esp += 4; return;
}

void f_00487c2d(void) /* FUN_00487c2d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00487c2d);
    /* 00487c2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00487c2e: mov ebp, esp */ r_ebp = r_esp;
    /* 00487c30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00487c31: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00487c34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487c37: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00487c3d: call 0x489e6c */ r_esp -= 4; W32(r_esp, 0x487c42u); f_00489e6c();
    /* 00487c42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487c43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487c46: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00487c4c: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00487c4f: call 0x453a6e */ r_esp -= 4; W32(r_esp, 0x487c54u); f_00453a6e();
    /* 00487c54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487c55: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00487c5b: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00487c5e: call 0x44aef9 */ r_esp -= 4; W32(r_esp, 0x487c63u); f_0044aef9();
    /* 00487c63: mov esp, ebp */ r_esp = r_ebp;
    /* 00487c65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487c66: ret  */ FN_RET(0x00487c2d); r_esp += 4; return;
}

void f_00487c67(void) /* FUN_00487c67 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00487c67);
    /* 00487c67: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00487c68: mov ebp, esp */ r_ebp = r_esp;
    /* 00487c6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00487c6b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00487c6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00487c70: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00487c75: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00487c78: call 0x44aef9 */ r_esp -= 4; W32(r_esp, 0x487c7du); f_0044aef9();
    /* 00487c7d: mov esp, ebp */ r_esp = r_ebp;
    /* 00487c7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487c80: ret  */ FN_RET(0x00487c67); r_esp += 4; return;
}

void f_00487c81(void) /* FUN_00487c81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00487c81);
    /* 00487c81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00487c82: mov ebp, esp */ r_ebp = r_esp;
    /* 00487c84: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00487c87: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00487c8a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00487c8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487c8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00487c91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00487c92: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487c95: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x487c9au); f_005d80f0();
    /* 00487c9a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487c9d: mov dword ptr [edx], 0x6369ec */ W32((u32)(r_edx), 0x6369ecu);
    /* 00487ca3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00487caa: jmp 0x487cb5 */ goto L_00487cb5;
L_00487cac:; BB(0x00487cac);
    /* 00487cac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487caf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00487cb2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00487cb5:; BB(0x00487cb5);
    /* 00487cb5: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487cb9: jge 0x487cce */ if ((fS==fO)) goto L_00487cce;
L_00487cbb:; BB(0x00487cbb);
    /* 00487cbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487cbe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487cc1: mov dword ptr [edx + ecx*4 + 0xa8], 0 */ W32((u32)(r_edx+r_ecx*4+0xa8u), 0x0u);
    /* 00487ccc: jmp 0x487cac */ goto L_00487cac;
L_00487cce:; BB(0x00487cce);
    /* 00487cce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487cd1: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 00487cdb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487cde: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 00487ce8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487ceb: mov dword ptr [edx + 0x9c], 0 */ W32((u32)(r_edx+0x9cu), 0x0u);
    /* 00487cf5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487cf8: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
    /* 00487d02: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487d05: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
    /* 00487d0f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487d12: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 00487d1c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487d1f: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 00487d29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487d2c: mov dword ptr [ecx + 0xb8], 0 */ W32((u32)(r_ecx+0xb8u), 0x0u);
    /* 00487d36: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487d39: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
    /* 00487d43: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487d46: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
    /* 00487d50: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487d53: mov esp, ebp */ r_esp = r_ebp;
    /* 00487d55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487d56: ret 8 */ FN_RET(0x00487c81); r_esp += 12; return;
}

void f_00487d59(void) /* FUN_00487d59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00487d59);
    /* 00487d59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00487d5a: mov ebp, esp */ r_ebp = r_esp;
    /* 00487d5c: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00487d62: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00487d65: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487d68: mov dword ptr [eax], 0x6369ec */ W32((u32)(r_eax), 0x6369ecu);
    /* 00487d6e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00487d75: jmp 0x487d80 */ goto L_00487d80;
L_00487d77:; BB(0x00487d77);
    /* 00487d77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487d7a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00487d7d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00487d80:; BB(0x00487d80);
    /* 00487d80: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487d84: jge 0x487ddd */ if ((fS==fO)) goto L_00487ddd;
L_00487d86:; BB(0x00487d86);
    /* 00487d86: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487d89: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487d8c: cmp dword ptr [eax + edx*4 + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487d94: je 0x487ddb */ if (fZ) goto L_00487ddb;
L_00487d96:; BB(0x00487d96);
    /* 00487d96: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487d99: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487d9c: mov eax, dword ptr [edx + ecx*4 + 0xa8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xa8u));
    /* 00487da3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00487da6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00487da9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00487dac: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487db0: je 0x487dc3 */ if (fZ) goto L_00487dc3;
L_00487db2:; BB(0x00487db2);
    /* 00487db2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00487db4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487db7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00487db9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00487dbc: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x487dbeu); call_ind(t); }
    /* 00487dbe: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00487dc1: jmp 0x487dca */ goto L_00487dca;
L_00487dc3:; BB(0x00487dc3);
    /* 00487dc3: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00487dca:; BB(0x00487dca);
    /* 00487dca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00487dcd: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487dd0: mov dword ptr [edx + ecx*4 + 0xa8], 0 */ W32((u32)(r_edx+r_ecx*4+0xa8u), 0x0u);
L_00487ddb:; BB(0x00487ddb);
    /* 00487ddb: jmp 0x487d77 */ goto L_00487d77;
L_00487ddd:; BB(0x00487ddd);
    /* 00487ddd: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487de0: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487de7: je 0x487e26 */ if (fZ) goto L_00487e26;
L_00487de9:; BB(0x00487de9);
    /* 00487de9: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487dec: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 00487df2: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00487df5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00487df8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00487dfb: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487dff: je 0x487e12 */ if (fZ) goto L_00487e12;
L_00487e01:; BB(0x00487e01);
    /* 00487e01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00487e03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487e06: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00487e08: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00487e0b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x487e0du); call_ind(t); }
    /* 00487e0d: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00487e10: jmp 0x487e19 */ goto L_00487e19;
L_00487e12:; BB(0x00487e12);
    /* 00487e12: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00487e19:; BB(0x00487e19);
    /* 00487e19: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487e1c: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
L_00487e26:; BB(0x00487e26);
    /* 00487e26: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487e29: cmp dword ptr [ecx + 0x90], 0 */ {  u32 a = R32((u32)(r_ecx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e30: je 0x487e6f */ if (fZ) goto L_00487e6f;
L_00487e32:; BB(0x00487e32);
    /* 00487e32: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487e35: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00487e3b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00487e3e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00487e41: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00487e44: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e48: je 0x487e5b */ if (fZ) goto L_00487e5b;
L_00487e4a:; BB(0x00487e4a);
    /* 00487e4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00487e4c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00487e4f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00487e51: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00487e54: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x487e56u); call_ind(t); }
    /* 00487e56: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00487e59: jmp 0x487e62 */ goto L_00487e62;
L_00487e5b:; BB(0x00487e5b);
    /* 00487e5b: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00487e62:; BB(0x00487e62);
    /* 00487e62: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487e65: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
L_00487e6f:; BB(0x00487e6f);
    /* 00487e6f: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487e72: cmp dword ptr [edx + 0x9c], 0 */ {  u32 a = R32((u32)(r_edx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e79: je 0x487eb8 */ if (fZ) goto L_00487eb8;
L_00487e7b:; BB(0x00487e7b);
    /* 00487e7b: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487e7e: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00487e84: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00487e87: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00487e8a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00487e8d: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e91: je 0x487ea4 */ if (fZ) goto L_00487ea4;
L_00487e93:; BB(0x00487e93);
    /* 00487e93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00487e95: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00487e98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00487e9a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00487e9d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x487e9fu); call_ind(t); }
    /* 00487e9f: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00487ea2: jmp 0x487eab */ goto L_00487eab;
L_00487ea4:; BB(0x00487ea4);
    /* 00487ea4: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00487eab:; BB(0x00487eab);
    /* 00487eab: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487eae: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
L_00487eb8:; BB(0x00487eb8);
    /* 00487eb8: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487ebb: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487ec2: je 0x487f01 */ if (fZ) goto L_00487f01;
L_00487ec4:; BB(0x00487ec4);
    /* 00487ec4: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487ec7: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00487ecd: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00487ed0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00487ed3: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00487ed6: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487eda: je 0x487eed */ if (fZ) goto L_00487eed;
L_00487edc:; BB(0x00487edc);
    /* 00487edc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00487ede: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00487ee1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00487ee3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00487ee6: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x487ee8u); call_ind(t); }
    /* 00487ee8: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00487eeb: jmp 0x487ef4 */ goto L_00487ef4;
L_00487eed:; BB(0x00487eed);
    /* 00487eed: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00487ef4:; BB(0x00487ef4);
    /* 00487ef4: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487ef7: mov dword ptr [ecx + 0xa0], 0 */ W32((u32)(r_ecx+0xa0u), 0x0u);
L_00487f01:; BB(0x00487f01);
    /* 00487f01: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487f04: cmp dword ptr [edx + 0xa4], 0 */ {  u32 a = R32((u32)(r_edx+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487f0b: je 0x487f4a */ if (fZ) goto L_00487f4a;
L_00487f0d:; BB(0x00487f0d);
    /* 00487f0d: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487f10: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00487f16: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00487f19: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00487f1c: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00487f1f: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487f23: je 0x487f36 */ if (fZ) goto L_00487f36;
L_00487f25:; BB(0x00487f25);
    /* 00487f25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00487f27: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00487f2a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00487f2c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00487f2f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x487f31u); call_ind(t); }
    /* 00487f31: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00487f34: jmp 0x487f3d */ goto L_00487f3d;
L_00487f36:; BB(0x00487f36);
    /* 00487f36: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00487f3d:; BB(0x00487f3d);
    /* 00487f3d: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487f40: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
L_00487f4a:; BB(0x00487f4a);
    /* 00487f4a: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487f4d: cmp dword ptr [ecx + 0xb0], 0 */ {  u32 a = R32((u32)(r_ecx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487f54: je 0x487f93 */ if (fZ) goto L_00487f93;
L_00487f56:; BB(0x00487f56);
    /* 00487f56: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487f59: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00487f5f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00487f62: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00487f65: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00487f68: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487f6c: je 0x487f7f */ if (fZ) goto L_00487f7f;
L_00487f6e:; BB(0x00487f6e);
    /* 00487f6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00487f70: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00487f73: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00487f75: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00487f78: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x487f7au); call_ind(t); }
    /* 00487f7a: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00487f7d: jmp 0x487f86 */ goto L_00487f86;
L_00487f7f:; BB(0x00487f7f);
    /* 00487f7f: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00487f86:; BB(0x00487f86);
    /* 00487f86: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487f89: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
L_00487f93:; BB(0x00487f93);
    /* 00487f93: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487f96: cmp dword ptr [edx + 0xb4], 0 */ {  u32 a = R32((u32)(r_edx+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487f9d: je 0x487fdc */ if (fZ) goto L_00487fdc;
L_00487f9f:; BB(0x00487f9f);
    /* 00487f9f: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487fa2: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00487fa8: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00487fab: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00487fae: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00487fb1: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487fb5: je 0x487fc8 */ if (fZ) goto L_00487fc8;
L_00487fb7:; BB(0x00487fb7);
    /* 00487fb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00487fb9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00487fbc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00487fbe: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00487fc1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x487fc3u); call_ind(t); }
    /* 00487fc3: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00487fc6: jmp 0x487fcf */ goto L_00487fcf;
L_00487fc8:; BB(0x00487fc8);
    /* 00487fc8: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00487fcf:; BB(0x00487fcf);
    /* 00487fcf: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487fd2: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
L_00487fdc:; BB(0x00487fdc);
    /* 00487fdc: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487fdf: cmp dword ptr [ecx + 0xb8], 0 */ {  u32 a = R32((u32)(r_ecx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487fe6: je 0x48802b */ if (fZ) goto L_0048802b;
L_00487fe8:; BB(0x00487fe8);
    /* 00487fe8: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00487feb: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00487ff1: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00487ff4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00487ff7: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00487ffa: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487ffe: je 0x488014 */ if (fZ) goto L_00488014;
L_00488000:; BB(0x00488000);
    /* 00488000: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00488002: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00488005: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00488007: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0048800a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x48800cu); call_ind(t); }
    /* 0048800c: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00488012: jmp 0x48801e */ goto L_0048801e;
L_00488014:; BB(0x00488014);
    /* 00488014: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0048801e:; BB(0x0048801e);
    /* 0048801e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00488021: mov dword ptr [ecx + 0xb8], 0 */ W32((u32)(r_ecx+0xb8u), 0x0u);
L_0048802b:; BB(0x0048802b);
    /* 0048802b: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0048802e: cmp dword ptr [edx + 0x94], 0 */ {  u32 a = R32((u32)(r_edx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488035: je 0x48807a */ if (fZ) goto L_0048807a;
L_00488037:; BB(0x00488037);
    /* 00488037: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0048803a: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00488040: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00488043: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00488046: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00488049: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048804d: je 0x488063 */ if (fZ) goto L_00488063;
L_0048804f:; BB(0x0048804f);
    /* 0048804f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00488051: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00488054: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488056: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00488059: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48805bu); call_ind(t); }
    /* 0048805b: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00488061: jmp 0x48806d */ goto L_0048806d;
L_00488063:; BB(0x00488063);
    /* 00488063: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0048806d:; BB(0x0048806d);
    /* 0048806d: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00488070: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
L_0048807a:; BB(0x0048807a);
    /* 0048807a: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0048807d: cmp dword ptr [ecx + 0x98], 0 */ {  u32 a = R32((u32)(r_ecx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488084: je 0x4880c9 */ if (fZ) goto L_004880c9;
L_00488086:; BB(0x00488086);
    /* 00488086: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00488089: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0048808f: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00488092: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00488095: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00488098: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048809c: je 0x4880b2 */ if (fZ) goto L_004880b2;
L_0048809e:; BB(0x0048809e);
    /* 0048809e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004880a0: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004880a3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004880a5: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004880a8: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4880aau); call_ind(t); }
    /* 004880aa: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004880b0: jmp 0x4880bc */ goto L_004880bc;
L_004880b2:; BB(0x004880b2);
    /* 004880b2: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_004880bc:; BB(0x004880bc);
    /* 004880bc: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004880bf: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
L_004880c9:; BB(0x004880c9);
    /* 004880c9: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004880cc: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x4880d1u); f_005d8154();
    /* 004880d1: mov esp, ebp */ r_esp = r_ebp;
    /* 004880d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004880d4: ret  */ FN_RET(0x00487d59); r_esp += 4; return;
}

void f_004880d5(void) /* FUN_004880d5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004880d5);
    /* 004880d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004880d6: mov ebp, esp */ r_ebp = r_esp;
    /* 004880d8: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004880db: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004880de: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004880e0: push 0x686e30 */ { u32 v = 0x686e30u; r_esp -= 4; W32(r_esp, v); }
    /* 004880e5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004880e8: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x4880edu); f_005d825e();
    /* 004880ed: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004880f0: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004880f7: jne 0x48820f */ if (!fZ) goto L_0048820f;
L_004880fd:; BB(0x004880fd);
    /* 004880fd: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00488102: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x488107u); f_0048ab58();
    /* 00488107: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048810a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048810d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488111: je 0x488120 */ if (fZ) goto L_00488120;
L_00488113:; BB(0x00488113);
    /* 00488113: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488116: call 0x488cc6 */ r_esp -= 4; W32(r_esp, 0x48811bu); f_00488cc6();
    /* 0048811b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0048811e: jmp 0x488127 */ goto L_00488127;
L_00488120:; BB(0x00488120);
    /* 00488120: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00488127:; BB(0x00488127);
    /* 00488127: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048812a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048812d: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 00488133: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488136: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0048813c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048813f: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00488142: push 0x686e3c */ { u32 v = 0x686e3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00488147: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0048814a: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00488150: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488153: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00488159: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048815b: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x48815eu); call_ind(t); }
    /* 0048815e: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00488160: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00488162: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00488164: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488167: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0048816d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488170: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00488176: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488178: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x48817bu); call_ind(t); }
    /* 0048817b: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00488180: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488183: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00488189: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048818c: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00488192: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488194: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x488197u); call_ind(t); }
    /* 00488197: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00488199: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048819b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0048819e: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004881a4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004881a7: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004881ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004881af: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4881b2u); call_ind(t); }
    /* 004881b2: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 004881b7: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 004881b9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004881bc: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004881c2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004881c5: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004881cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004881cd: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4881d0u); call_ind(t); }
    /* 004881d0: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004881d2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004881d4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004881d6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004881d8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004881db: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004881e1: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x4881e6u); f_005d5ff2();
    /* 004881e6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004881e8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004881eb: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 004881f1: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x4881f6u); f_005d65d6();
    /* 004881f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004881f8: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004881fb: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 00488201: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488204: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 0048820a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048820c: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x48820fu); call_ind(t); }
L_0048820f:; BB(0x0048820f);
    /* 0048820f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488212: cmp dword ptr [ecx + 0x90], 0 */ {  u32 a = R32((u32)(r_ecx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488219: jne 0x488350 */ if (!fZ) goto L_00488350;
L_0048821f:; BB(0x0048821f);
    /* 0048821f: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00488224: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x488229u); f_0048ab58();
    /* 00488229: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048822c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048822f: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488233: je 0x488242 */ if (fZ) goto L_00488242;
L_00488235:; BB(0x00488235);
    /* 00488235: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00488238: call 0x488d5c */ r_esp -= 4; W32(r_esp, 0x48823du); f_00488d5c();
    /* 0048823d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00488240: jmp 0x488249 */ goto L_00488249;
L_00488242:; BB(0x00488242);
    /* 00488242: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00488249:; BB(0x00488249);
    /* 00488249: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048824c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048824f: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 00488255: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488258: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 0048825e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488261: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00488264: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 0048826a: cmp dword ptr [ecx + 0x1d14], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488271: je 0x4882a6 */ if (fZ) goto L_004882a6;
L_00488273:; BB(0x00488273);
    /* 00488273: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 00488279: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 0048827f: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x488284u); f_005de399();
    /* 00488284: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488286: jne 0x4882a6 */ if (!fZ) goto L_004882a6;
L_00488288:; BB(0x00488288);
    /* 00488288: push 0x686e40 */ { u32 v = 0x686e40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048828d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488290: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00488296: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488299: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0048829f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004882a1: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x4882a4u); call_ind(t); }
    /* 004882a4: jmp 0x4882c2 */ goto L_004882c2;
L_004882a6:; BB(0x004882a6);
    /* 004882a6: push 0x686e48 */ { u32 v = 0x686e48u; r_esp -= 4; W32(r_esp, v); }
    /* 004882ab: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004882ae: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004882b4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004882b7: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 004882bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004882bf: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x4882c2u); call_ind(t); }
L_004882c2:; BB(0x004882c2);
    /* 004882c2: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004882c4: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004882c6: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004882c8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004882cb: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004882d1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004882d4: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 004882da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004882dc: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x4882dfu); call_ind(t); }
    /* 004882df: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 004882e4: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004882e7: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004882ed: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004882f0: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 004882f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004882f8: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x4882fbu); call_ind(t); }
    /* 004882fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004882fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004882ff: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488302: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00488308: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048830b: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00488311: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488313: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x488316u); call_ind(t); }
    /* 00488316: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0048831b: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 00488320: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488323: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00488329: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048832c: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00488332: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488334: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x488337u); call_ind(t); }
    /* 00488337: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00488339: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0048833c: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00488342: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488345: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0048834b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048834d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x488350u); call_ind(t); }
L_00488350:; BB(0x00488350);
    /* 00488350: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 00488355: cmp dword ptr [eax + 0x1d14], 0 */ {  u32 a = R32((u32)(r_eax+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048835c: je 0x48838c */ if (fZ) goto L_0048838c;
L_0048835e:; BB(0x0048835e);
    /* 0048835e: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488364: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 0048836a: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x48836fu); f_005de399();
    /* 0048836f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488371: jne 0x48838c */ if (!fZ) goto L_0048838c;
L_00488373:; BB(0x00488373);
    /* 00488373: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488376: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 0048837c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0048837f: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 00488385: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00488387: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x48838au); call_ind(t); }
    /* 0048838a: jmp 0x4883b8 */ goto L_004883b8;
L_0048838c:; BB(0x0048838c);
    /* 0048838c: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488392: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00488398: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x48839du); f_005de399();
    /* 0048839d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048839f: jne 0x4883b8 */ if (!fZ) goto L_004883b8;
L_004883a1:; BB(0x004883a1);
    /* 004883a1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004883a4: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 004883aa: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004883ad: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 004883b3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004883b5: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x4883b8u); call_ind(t); }
L_004883b8:; BB(0x004883b8);
    /* 004883b8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004883bb: cmp dword ptr [ecx + 0x9c], 0 */ {  u32 a = R32((u32)(r_ecx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004883c2: jne 0x48846b */ if (!fZ) goto L_0048846b;
L_004883c8:; BB(0x004883c8);
    /* 004883c8: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004883ca: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4883cfu); f_0048ab58();
    /* 004883cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004883d2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004883d5: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004883d9: je 0x4883e8 */ if (fZ) goto L_004883e8;
L_004883db:; BB(0x004883db);
    /* 004883db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004883de: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x4883e3u); f_005e9d30();
    /* 004883e3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004883e6: jmp 0x4883ef */ goto L_004883ef;
L_004883e8:; BB(0x004883e8);
    /* 004883e8: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_004883ef:; BB(0x004883ef);
    /* 004883ef: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004883f2: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004883f5: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 004883fb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004883fe: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 00488404: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488407: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0048840a: push 0x4fe */ { u32 v = 0x4feu; r_esp -= 4; W32(r_esp, v); }
    /* 0048840f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488412: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00488418: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48841du); f_005ea0c3();
    /* 0048841d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488420: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 00488426: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488429: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 0048842f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00488431: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x488434u); call_ind(t); }
    /* 00488434: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00488436: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488439: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 0048843f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488442: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00488448: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048844a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48844du); call_ind(t); }
    /* 0048844d: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00488452: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00488454: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488457: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0048845d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488460: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00488466: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488468: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48846bu); call_ind(t); }
L_0048846b:; BB(0x0048846b);
    /* 0048846b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0048846e: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488475: jne 0x488562 */ if (!fZ) goto L_00488562;
L_0048847b:; BB(0x0048847b);
    /* 0048847b: push 0x89c */ { u32 v = 0x89cu; r_esp -= 4; W32(r_esp, v); }
    /* 00488480: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x488485u); f_0048ab58();
    /* 00488485: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488488: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048848b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048848f: je 0x48849e */ if (fZ) goto L_0048849e;
L_00488491:; BB(0x00488491);
    /* 00488491: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00488494: call 0x489644 */ r_esp -= 4; W32(r_esp, 0x488499u); f_00489644();
    /* 00488499: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0048849c: jmp 0x4884a5 */ goto L_004884a5;
L_0048849e:; BB(0x0048849e);
    /* 0048849e: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_004884a5:; BB(0x004884a5);
    /* 004884a5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004884a8: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004884ab: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 004884b1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004884b4: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004884ba: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004884bd: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004884c0: push 0x6f6b8c */ { u32 v = 0x6f6b8cu; r_esp -= 4; W32(r_esp, v); }
    /* 004884c5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004884c8: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004884ce: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004884d1: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004884d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004884d9: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4884dcu); call_ind(t); }
    /* 004884dc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004884df: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004884e5: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004884e8: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004884ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004884f0: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4884f3u); call_ind(t); }
    /* 004884f3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004884f5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004884f8: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004884fe: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x488503u); f_005e87aa();
    /* 00488503: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 00488508: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0048850a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048850d: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 00488513: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488516: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0048851c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048851e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x488521u); call_ind(t); }
    /* 00488521: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00488526: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488529: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0048852f: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x488534u); f_005e8740();
    /* 00488534: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00488536: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488539: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 0048853f: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x488544u); f_005e8775();
    /* 00488544: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00488546: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488549: mov ecx, dword ptr [edx + 0xa0] */ r_ecx = R32((u32)(r_edx+0xa0u));
    /* 0048854f: call 0x45378f */ r_esp -= 4; W32(r_esp, 0x488554u); f_0045378f();
    /* 00488554: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488557: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0048855d: call 0x4534e5 */ r_esp -= 4; W32(r_esp, 0x488562u); f_004534e5();
L_00488562:; BB(0x00488562);
    /* 00488562: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488565: cmp dword ptr [ecx + 0xa4], 0 */ {  u32 a = R32((u32)(r_ecx+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048856c: jne 0x4885e0 */ if (!fZ) goto L_004885e0;
L_0048856e:; BB(0x0048856e);
    /* 0048856e: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00488570: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x488575u); f_0048ab58();
    /* 00488575: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488578: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048857b: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048857f: je 0x48858e */ if (fZ) goto L_0048858e;
L_00488581:; BB(0x00488581);
    /* 00488581: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00488584: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x488589u); f_005d505b();
    /* 00488589: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0048858c: jmp 0x488595 */ goto L_00488595;
L_0048858e:; BB(0x0048858e);
    /* 0048858e: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00488595:; BB(0x00488595);
    /* 00488595: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488598: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0048859b: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 004885a1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004885a4: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 004885aa: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004885ad: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004885b0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004885b3: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 004885b9: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004885bc: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004885c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004885c4: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4885c7u); call_ind(t); }
    /* 004885c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004885c9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004885cc: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004885d2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004885d5: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004885db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004885dd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4885e0u); call_ind(t); }
L_004885e0:; BB(0x004885e0);
    /* 004885e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004885e7: jmp 0x4885f2 */ goto L_004885f2;
L_004885e9:; BB(0x004885e9);
    /* 004885e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004885ec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004885ef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004885f2:; BB(0x004885f2);
    /* 004885f2: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004885f6: jge 0x488784 */ if ((fS==fO)) goto L_00488784;
L_004885fc:; BB(0x004885fc);
    /* 004885fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004885ff: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488602: cmp dword ptr [edx + ecx*4 + 0xa8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048860a: jne 0x48877f */ if (!fZ) goto L_0048877f;
L_00488610:; BB(0x00488610);
    /* 00488610: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00488615: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48861au); f_0048ab58();
    /* 0048861a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048861d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00488620: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488624: je 0x488641 */ if (fZ) goto L_00488641;
L_00488626:; BB(0x00488626);
    /* 00488626: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00488628: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048862c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0048862f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488630: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488634: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00488637: call 0x489881 */ r_esp -= 4; W32(r_esp, 0x48863cu); f_00489881();
    /* 0048863c: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0048863f: jmp 0x488648 */ goto L_00488648;
L_00488641:; BB(0x00488641);
    /* 00488641: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00488648:; BB(0x00488648);
    /* 00488648: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048864b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0048864e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00488651: mov dword ptr [eax + edx*4 + 0xa8], ecx */ W32((u32)(r_eax+r_edx*4+0xa8u), r_ecx);
    /* 00488658: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048865b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0048865e: mov ecx, dword ptr [eax + edx*4 + 0xa8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa8u));
    /* 00488665: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488666: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488669: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 0048866f: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x488674u); f_005d50ed();
    /* 00488674: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488678: jne 0x488683 */ if (!fZ) goto L_00488683;
L_0048867a:; BB(0x0048867a);
    /* 0048867a: mov dword ptr [ebp - 0x50], 0x686e50 */ W32((u32)(r_ebp+0xffffffb0u), 0x686e50u);
    /* 00488681: jmp 0x48868a */ goto L_0048868a;
L_00488683:; BB(0x00488683);
    /* 00488683: mov dword ptr [ebp - 0x50], 0x686e64 */ W32((u32)(r_ebp+0xffffffb0u), 0x686e64u);
L_0048868a:; BB(0x0048868a);
    /* 0048868a: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0048868d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048868e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488691: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488694: mov ecx, dword ptr [edx + ecx*4 + 0xa8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa8u));
    /* 0048869b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048869e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004886a1: mov eax, dword ptr [edx + eax*4 + 0xa8] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa8u));
    /* 004886a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004886aa: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x4886adu); call_ind(t); }
    /* 004886ad: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004886af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004886b1: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 004886b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004886b6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004886b9: mov ecx, dword ptr [ecx + eax*4 + 0xa8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa8u));
    /* 004886c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004886c3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004886c6: mov edx, dword ptr [eax + edx*4 + 0xa8] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa8u));
    /* 004886cd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004886cf: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x4886d2u); call_ind(t); }
    /* 004886d2: push 0x427 */ { u32 v = 0x427u; r_esp -= 4; W32(r_esp, v); }
    /* 004886d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004886da: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004886dd: mov ecx, dword ptr [edx + ecx*4 + 0xa8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa8u));
    /* 004886e4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004886e7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004886ea: mov eax, dword ptr [edx + eax*4 + 0xa8] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa8u));
    /* 004886f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004886f3: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x4886f6u); call_ind(t); }
    /* 004886f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004886f8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004886fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004886fd: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488700: mov ecx, dword ptr [ecx + eax*4 + 0xa8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa8u));
    /* 00488707: call 0x5d7422 */ r_esp -= 4; W32(r_esp, 0x48870cu); f_005d7422();
    /* 0048870c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048870e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00488710: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488713: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488716: mov ecx, dword ptr [eax + edx*4 + 0xa8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa8u));
    /* 0048871d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488720: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488723: mov edx, dword ptr [eax + edx*4 + 0xa8] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa8u));
    /* 0048872a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048872c: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x48872fu); call_ind(t); }
    /* 0048872f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488732: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00488734: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00488736: and ecx, 0x13 */ {  u32 a = r_ecx; u32 b = 0x13u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00488739: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048873c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048873d: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0048873f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488742: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488745: mov ecx, dword ptr [eax + edx*4 + 0xa8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa8u));
    /* 0048874c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048874f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488752: mov edx, dword ptr [eax + edx*4 + 0xa8] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa8u));
    /* 00488759: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048875b: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x48875eu); call_ind(t); }
    /* 0048875e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00488760: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488763: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488766: mov ecx, dword ptr [edx + ecx*4 + 0xa8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa8u));
    /* 0048876d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488770: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488773: mov eax, dword ptr [edx + eax*4 + 0xa8] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa8u));
    /* 0048877a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048877c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48877fu); call_ind(t); }
L_0048877f:; BB(0x0048877f);
    /* 0048877f: jmp 0x4885e9 */ goto L_004885e9;
L_00488784:; BB(0x00488784);
    /* 00488784: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488787: cmp dword ptr [eax + 0xb0], 0 */ {  u32 a = R32((u32)(r_eax+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048878e: jne 0x488850 */ if (!fZ) goto L_00488850;
L_00488794:; BB(0x00488794);
    /* 00488794: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00488799: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48879eu); f_0048ab58();
    /* 0048879e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004887a1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004887a4: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004887a8: je 0x4887b7 */ if (fZ) goto L_004887b7;
L_004887aa:; BB(0x004887aa);
    /* 004887aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004887ad: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4887b2u); f_005e8590();
    /* 004887b2: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004887b5: jmp 0x4887be */ goto L_004887be;
L_004887b7:; BB(0x004887b7);
    /* 004887b7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_004887be:; BB(0x004887be);
    /* 004887be: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004887c1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 004887c4: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 004887ca: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004887cd: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 004887d3: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004887d6: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004887d9: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 004887db: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004887de: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 004887e4: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4887e9u); f_005e87aa();
    /* 004887e9: push 0x686e7c */ { u32 v = 0x686e7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004887ee: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004887f1: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 004887f7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004887fa: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00488800: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488802: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x488805u); call_ind(t); }
    /* 00488805: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488808: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0048880e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488811: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00488817: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488819: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48881cu); call_ind(t); }
    /* 0048881c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048881e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488821: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00488827: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048882a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00488830: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488832: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x488835u); call_ind(t); }
    /* 00488835: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00488837: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00488839: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0048883c: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00488842: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488845: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0048884b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048884d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x488850u); call_ind(t); }
L_00488850:; BB(0x00488850);
    /* 00488850: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488853: cmp dword ptr [eax + 0xb4], 0 */ {  u32 a = R32((u32)(r_eax+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048885a: jne 0x48891c */ if (!fZ) goto L_0048891c;
L_00488860:; BB(0x00488860);
    /* 00488860: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00488865: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48886au); f_0048ab58();
    /* 0048886a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048886d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00488870: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488874: je 0x488883 */ if (fZ) goto L_00488883;
L_00488876:; BB(0x00488876);
    /* 00488876: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00488879: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x48887eu); f_005e8590();
    /* 0048887e: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00488881: jmp 0x48888a */ goto L_0048888a;
L_00488883:; BB(0x00488883);
    /* 00488883: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0048888a:; BB(0x0048888a);
    /* 0048888a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048888d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00488890: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
    /* 00488896: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488899: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 0048889f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004888a2: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004888a5: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 004888a7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004888aa: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 004888b0: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4888b5u); f_005e87aa();
    /* 004888b5: push 0x686e90 */ { u32 v = 0x686e90u; r_esp -= 4; W32(r_esp, v); }
    /* 004888ba: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004888bd: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 004888c3: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004888c6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004888cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004888ce: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4888d1u); call_ind(t); }
    /* 004888d1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004888d4: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 004888da: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004888dd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004888e3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004888e5: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4888e8u); call_ind(t); }
    /* 004888e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004888ea: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004888ed: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 004888f3: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004888f6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004888fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004888fe: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x488901u); call_ind(t); }
    /* 00488901: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00488903: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00488905: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488908: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 0048890e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488911: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00488917: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488919: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48891cu); call_ind(t); }
L_0048891c:; BB(0x0048891c);
    /* 0048891c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0048891f: cmp dword ptr [eax + 0xb8], 0 */ {  u32 a = R32((u32)(r_eax+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488926: jne 0x4889eb */ if (!fZ) goto L_004889eb;
L_0048892c:; BB(0x0048892c);
    /* 0048892c: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00488931: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x488936u); f_0048ab58();
    /* 00488936: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488939: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048893c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488940: je 0x48894f */ if (fZ) goto L_0048894f;
L_00488942:; BB(0x00488942);
    /* 00488942: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00488945: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x48894au); f_005e8590();
    /* 0048894a: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0048894d: jmp 0x488956 */ goto L_00488956;
L_0048894f:; BB(0x0048894f);
    /* 0048894f: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00488956:; BB(0x00488956);
    /* 00488956: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488959: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0048895c: mov dword ptr [ecx + 0xb8], edx */ W32((u32)(r_ecx+0xb8u), r_edx);
    /* 00488962: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488965: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0048896b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048896e: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00488971: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00488973: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488976: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0048897c: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x488981u); f_005e87aa();
    /* 00488981: push 0x686e98 */ { u32 v = 0x686e98u; r_esp -= 4; W32(r_esp, v); }
    /* 00488986: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488989: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 0048898f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488992: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00488998: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048899a: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x48899du); call_ind(t); }
    /* 0048899d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004889a0: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 004889a6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004889a9: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004889af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004889b1: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4889b4u); call_ind(t); }
    /* 004889b4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004889b6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004889b9: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 004889bf: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004889c2: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004889c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004889ca: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4889cdu); call_ind(t); }
    /* 004889cd: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 004889d2: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 004889d4: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004889d7: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 004889dd: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004889e0: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004889e6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004889e8: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4889ebu); call_ind(t); }
L_004889eb:; BB(0x004889eb);
    /* 004889eb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004889ee: cmp dword ptr [eax + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004889f5: jne 0x488a9b */ if (!fZ) goto L_00488a9b;
L_004889fb:; BB(0x004889fb);
    /* 004889fb: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004889fd: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x488a02u); f_0048ab58();
    /* 00488a02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488a05: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00488a08: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488a0c: je 0x488a1b */ if (fZ) goto L_00488a1b;
L_00488a0e:; BB(0x00488a0e);
    /* 00488a0e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00488a11: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x488a16u); f_005e9d30();
    /* 00488a16: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00488a19: jmp 0x488a22 */ goto L_00488a22;
L_00488a1b:; BB(0x00488a1b);
    /* 00488a1b: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00488a22:; BB(0x00488a22);
    /* 00488a22: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488a25: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00488a28: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 00488a2e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488a31: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00488a37: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488a3a: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00488a3d: push 0x4fe */ { u32 v = 0x4feu; r_esp -= 4; W32(r_esp, v); }
    /* 00488a42: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488a45: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00488a4b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x488a50u); f_005ea0c3();
    /* 00488a50: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488a53: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00488a59: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488a5c: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00488a62: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488a64: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x488a67u); call_ind(t); }
    /* 00488a67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00488a69: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488a6c: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00488a72: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488a75: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00488a7b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488a7d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x488a80u); call_ind(t); }
    /* 00488a80: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00488a82: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00488a84: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488a87: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00488a8d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488a90: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00488a96: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488a98: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x488a9bu); call_ind(t); }
L_00488a9b:; BB(0x00488a9b);
    /* 00488a9b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488a9e: cmp dword ptr [eax + 0x94], 0 */ {  u32 a = R32((u32)(r_eax+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488aa5: jne 0x488b8e */ if (!fZ) goto L_00488b8e;
L_00488aab:; BB(0x00488aab);
    /* 00488aab: push 0x89c */ { u32 v = 0x89cu; r_esp -= 4; W32(r_esp, v); }
    /* 00488ab0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x488ab5u); f_0048ab58();
    /* 00488ab5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488ab8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00488abb: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488abf: je 0x488ace */ if (fZ) goto L_00488ace;
L_00488ac1:; BB(0x00488ac1);
    /* 00488ac1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00488ac4: call 0x4891a3 */ r_esp -= 4; W32(r_esp, 0x488ac9u); f_004891a3();
    /* 00488ac9: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00488acc: jmp 0x488ad5 */ goto L_00488ad5;
L_00488ace:; BB(0x00488ace);
    /* 00488ace: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00488ad5:; BB(0x00488ad5);
    /* 00488ad5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488ad8: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00488adb: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
    /* 00488ae1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488ae4: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00488aea: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488aed: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00488af0: push 0x6f6b90 */ { u32 v = 0x6f6b90u; r_esp -= 4; W32(r_esp, v); }
    /* 00488af5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488af8: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00488afe: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488b01: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00488b07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488b09: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x488b0cu); call_ind(t); }
    /* 00488b0c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488b0f: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00488b15: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488b18: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00488b1e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488b20: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x488b23u); call_ind(t); }
    /* 00488b23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00488b25: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488b28: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00488b2e: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x488b33u); f_005e87aa();
    /* 00488b33: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00488b35: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488b38: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00488b3e: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x488b43u); f_005e8e99();
    /* 00488b43: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00488b45: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00488b47: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488b4a: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 00488b50: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488b53: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 00488b59: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00488b5b: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x488b5eu); call_ind(t); }
    /* 00488b5e: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 00488b60: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488b63: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00488b69: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x488b6eu); f_005e8740();
    /* 00488b6e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00488b70: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00488b73: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 00488b79: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x488b7eu); f_005e8775();
    /* 00488b7e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00488b80: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00488b83: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00488b89: call 0x45378f */ r_esp -= 4; W32(r_esp, 0x488b8eu); f_0045378f();
L_00488b8e:; BB(0x00488b8e);
    /* 00488b8e: mov esp, ebp */ r_esp = r_ebp;
    /* 00488b90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488b91: ret  */ FN_RET(0x004880d5); r_esp += 4; return;
}

void f_00488b92(void) /* FUN_00488b92 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488b92);
    /* 00488b92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488b93: mov ebp, esp */ r_ebp = r_esp;
    /* 00488b95: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00488b98: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00488b9b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488b9e: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x488ba3u); f_005e030e();
    /* 00488ba3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00488baa: jmp 0x488bb5 */ goto L_00488bb5;
L_00488bac:; BB(0x00488bac);
    /* 00488bac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488baf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00488bb2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00488bb5:; BB(0x00488bb5);
    /* 00488bb5: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00488bb9: jge 0x488bdc */ if ((fS==fO)) goto L_00488bdc;
L_00488bbb:; BB(0x00488bbb);
    /* 00488bbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488bbe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488bc1: mov ecx, dword ptr [edx + ecx*4 + 0xa8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa8u));
    /* 00488bc8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488bcb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488bce: mov eax, dword ptr [edx + eax*4 + 0xa8] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa8u));
    /* 00488bd5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488bd7: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x488bdau); call_ind(t); }
    /* 00488bda: jmp 0x488bac */ goto L_00488bac;
L_00488bdc:; BB(0x00488bdc);
    /* 00488bdc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488bdf: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00488be5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488be8: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00488bee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488bf0: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x488bf3u); call_ind(t); }
    /* 00488bf3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488bf6: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00488bfc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488bff: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00488c05: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488c07: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x488c0au); call_ind(t); }
    /* 00488c0a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488c0d: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00488c13: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488c16: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00488c1c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488c1e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x488c21u); call_ind(t); }
    /* 00488c21: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488c24: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00488c2a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488c2d: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00488c33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488c35: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x488c38u); call_ind(t); }
    /* 00488c38: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488c3b: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00488c41: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488c44: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00488c4a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488c4c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x488c4fu); call_ind(t); }
    /* 00488c4f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488c52: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00488c58: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488c5b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00488c61: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488c63: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x488c66u); call_ind(t); }
    /* 00488c66: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488c69: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00488c6f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488c72: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00488c78: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488c7a: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x488c7du); call_ind(t); }
    /* 00488c7d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488c80: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00488c86: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488c89: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00488c8f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488c91: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x488c94u); call_ind(t); }
    /* 00488c94: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488c97: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00488c9d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488ca0: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00488ca6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488ca8: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x488cabu); call_ind(t); }
    /* 00488cab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488cae: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00488cb4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00488cb7: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00488cbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00488cbf: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x488cc2u); call_ind(t); }
    /* 00488cc2: mov esp, ebp */ r_esp = r_ebp;
    /* 00488cc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488cc5: ret  */ FN_RET(0x00488b92); r_esp += 4; return;
}

void f_00488cc6(void) /* FUN_00488cc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488cc6);
    /* 00488cc6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488cc7: mov ebp, esp */ r_ebp = r_esp;
    /* 00488cc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488cca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488ccd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488cd0: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x488cd5u); f_005d5d20();
    /* 00488cd5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488cd8: mov dword ptr [eax], 0x636a04 */ W32((u32)(r_eax), 0x636a04u);
    /* 00488cde: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488ce1: mov esp, ebp */ r_esp = r_ebp;
    /* 00488ce3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488ce4: ret  */ FN_RET(0x00488cc6); r_esp += 4; return;
}

void f_00488ce5(void) /* FUN_00488ce5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488ce5);
    /* 00488ce5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488ce6: mov ebp, esp */ r_ebp = r_esp;
    /* 00488ce8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488ce9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488cec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488cef: mov dword ptr [eax], 0x636a04 */ W32((u32)(r_eax), 0x636a04u);
    /* 00488cf5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488cf8: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x488cfdu); f_005d5dfb();
    /* 00488cfd: mov esp, ebp */ r_esp = r_ebp;
    /* 00488cff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488d00: ret  */ FN_RET(0x00488ce5); r_esp += 4; return;
}

void f_00488d01(void) /* FUN_00488d01 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488d01);
    /* 00488d01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488d02: mov ebp, esp */ r_ebp = r_esp;
    /* 00488d04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488d05: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488d08: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488d0e: call 0x486021 */ r_esp -= 4; W32(r_esp, 0x488d13u); f_00486021();
    /* 00488d13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488d15: je 0x488d58 */ if (fZ) goto L_00488d58;
L_00488d17:; BB(0x00488d17);
    /* 00488d17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00488d19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488d1c: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x488d21u); f_005d6635();
    /* 00488d21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488d24: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00488d27: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x488d2cu); f_005e03cc();
    /* 00488d2c: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488d32: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00488d38: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x488d3du); f_005e0a55();
    /* 00488d3d: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 00488d43: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
    /* 00488d4d: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488d53: call 0x4856fc */ r_esp -= 4; W32(r_esp, 0x488d58u); f_004856fc();
L_00488d58:; BB(0x00488d58);
    /* 00488d58: mov esp, ebp */ r_esp = r_ebp;
    /* 00488d5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488d5b: ret  */ FN_RET(0x00488d01); r_esp += 4; return;
}

void f_00488d5c(void) /* FUN_00488d5c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488d5c);
    /* 00488d5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488d5d: mov ebp, esp */ r_ebp = r_esp;
    /* 00488d5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488d60: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488d63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488d66: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x488d6bu); f_005d5d20();
    /* 00488d6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488d6e: mov dword ptr [eax], 0x636a74 */ W32((u32)(r_eax), 0x636a74u);
    /* 00488d74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488d77: mov esp, ebp */ r_esp = r_ebp;
    /* 00488d79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488d7a: ret  */ FN_RET(0x00488d5c); r_esp += 4; return;
}

void f_00488d7b(void) /* FUN_00488d7b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488d7b);
    /* 00488d7b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488d7c: mov ebp, esp */ r_ebp = r_esp;
    /* 00488d7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488d7f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488d82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488d85: mov dword ptr [eax], 0x636a74 */ W32((u32)(r_eax), 0x636a74u);
    /* 00488d8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488d8e: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x488d93u); f_005d5dfb();
    /* 00488d93: mov esp, ebp */ r_esp = r_ebp;
    /* 00488d95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488d96: ret  */ FN_RET(0x00488d7b); r_esp += 4; return;
}

void f_00488d97(void) /* FUN_00488d97 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488d97);
    /* 00488d97: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488d98: mov ebp, esp */ r_ebp = r_esp;
    /* 00488d9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488d9b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488d9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00488da0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488da3: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x488da8u); f_005d6635();
    /* 00488da8: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 00488dad: cmp dword ptr [eax + 0x1d14], 0 */ {  u32 a = R32((u32)(r_eax+0x1d14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488db4: je 0x488de9 */ if (fZ) goto L_00488de9;
L_00488db6:; BB(0x00488db6);
    /* 00488db6: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488dbc: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00488dc2: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x488dc7u); f_005de399();
    /* 00488dc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488dc9: jne 0x488de9 */ if (!fZ) goto L_00488de9;
L_00488dcb:; BB(0x00488dcb);
    /* 00488dcb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00488dcd: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00488dd3: call 0x45b98a */ r_esp -= 4; W32(r_esp, 0x488dd8u); f_0045b98a();
    /* 00488dd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488dda: je 0x488de7 */ if (fZ) goto L_00488de7;
L_00488ddc:; BB(0x00488ddc);
    /* 00488ddc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488ddf: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00488de2: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x488de7u); f_005e03cc();
L_00488de7:; BB(0x00488de7);
    /* 00488de7: jmp 0x488e20 */ goto L_00488e20;
L_00488de9:; BB(0x00488de9);
    /* 00488de9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488dec: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00488def: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x488df4u); f_005e03cc();
    /* 00488df4: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488dfa: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00488e00: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x488e05u); f_005e0a55();
    /* 00488e05: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 00488e0b: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
    /* 00488e15: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488e1b: call 0x4856fc */ r_esp -= 4; W32(r_esp, 0x488e20u); f_004856fc();
L_00488e20:; BB(0x00488e20);
    /* 00488e20: mov esp, ebp */ r_esp = r_ebp;
    /* 00488e22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488e23: ret  */ FN_RET(0x00488d97); r_esp += 4; return;
}

void f_00488e24(void) /* FUN_00488e24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488e24);
    /* 00488e24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488e25: mov ebp, esp */ r_ebp = r_esp;
    /* 00488e27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488e28: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488e2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488e2e: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x488e33u); f_005d5d20();
    /* 00488e33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488e36: mov dword ptr [eax], 0x636ae4 */ W32((u32)(r_eax), 0x636ae4u);
    /* 00488e3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488e3f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00488e42: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00488e48: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488e4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00488e4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488e4e: ret 4 */ FN_RET(0x00488e24); r_esp += 8; return;
}

void f_00488e51(void) /* FUN_00488e51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488e51);
    /* 00488e51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488e52: mov ebp, esp */ r_ebp = r_esp;
    /* 00488e54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488e55: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488e58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488e5b: mov dword ptr [eax], 0x636ae4 */ W32((u32)(r_eax), 0x636ae4u);
    /* 00488e61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488e64: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x488e69u); f_005d5dfb();
    /* 00488e69: mov esp, ebp */ r_esp = r_ebp;
    /* 00488e6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488e6c: ret  */ FN_RET(0x00488e51); r_esp += 4; return;
}

void f_00488e6d(void) /* FUN_00488e6d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488e6d);
    /* 00488e6d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488e6e: mov ebp, esp */ r_ebp = r_esp;
    /* 00488e70: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00488e73: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488e76: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488e79: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00488e7f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00488e82: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488e86: je 0x488e96 */ if (fZ) goto L_00488e96;
L_00488e88:; BB(0x00488e88);
    /* 00488e88: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488e8c: je 0x488ea3 */ if (fZ) goto L_00488ea3;
L_00488e8e:; BB(0x00488e8e);
    /* 00488e8e: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488e92: je 0x488eb0 */ if (fZ) goto L_00488eb0;
L_00488e94:; BB(0x00488e94);
    /* 00488e94: jmp 0x488ebb */ goto L_00488ebb;
L_00488e96:; BB(0x00488e96);
    /* 00488e96: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488e9c: call 0x487c67 */ r_esp -= 4; W32(r_esp, 0x488ea1u); f_00487c67();
    /* 00488ea1: jmp 0x488ebb */ goto L_00488ebb;
L_00488ea3:; BB(0x00488ea3);
    /* 00488ea3: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488ea9: call 0x487c2d */ r_esp -= 4; W32(r_esp, 0x488eaeu); f_00487c2d();
    /* 00488eae: jmp 0x488ebb */ goto L_00488ebb;
L_00488eb0:; BB(0x00488eb0);
    /* 00488eb0: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488eb6: call 0x487b95 */ r_esp -= 4; W32(r_esp, 0x488ebbu); f_00487b95();
L_00488ebb:; BB(0x00488ebb);
    /* 00488ebb: mov esp, ebp */ r_esp = r_ebp;
    /* 00488ebd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488ebe: ret  */ FN_RET(0x00488e6d); r_esp += 4; return;
}

void f_00488ee6(void) /* FUN_00488ee6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488ee6);
    /* 00488ee6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488ee7: mov ebp, esp */ r_ebp = r_esp;
    /* 00488ee9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488eea: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488eed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488ef0: mov dword ptr [eax], 0x636b54 */ W32((u32)(r_eax), 0x636b54u);
    /* 00488ef6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488ef9: call 0x5d4efe */ r_esp -= 4; W32(r_esp, 0x488efeu); f_005d4efe();
    /* 00488efe: mov esp, ebp */ r_esp = r_ebp;
    /* 00488f00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488f01: ret  */ FN_RET(0x00488ee6); r_esp += 4; return;
}

void f_00488f02(void) /* FUN_00488f02 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488f02);
    /* 00488f02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488f03: mov ebp, esp */ r_ebp = r_esp;
    /* 00488f05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488f06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00488f07: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488f0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488f0d: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x488f12u); f_005d5015();
    /* 00488f12: mov esi, eax */ r_esi = r_eax;
    /* 00488f14: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 00488f19: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 00488f1f: call 0x5d51df */ r_esp -= 4; W32(r_esp, 0x488f24u); f_005d51df();
    /* 00488f24: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488f26: jne 0x488f2d */ if (!fZ) goto L_00488f2d;
L_00488f28:; BB(0x00488f28);
    /* 00488f28: jmp 0x488fc3 */ goto L_00488fc3;
L_00488f2d:; BB(0x00488f2d);
    /* 00488f2d: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488f33: cmp dword ptr [ecx + 0xb8], 0 */ {  u32 a = R32((u32)(r_ecx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488f3a: je 0x488f65 */ if (fZ) goto L_00488f65;
L_00488f3c:; BB(0x00488f3c);
    /* 00488f3c: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 00488f42: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00488f48: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00488f4b: call 0x453c16 */ r_esp -= 4; W32(r_esp, 0x488f50u); f_00453c16();
    /* 00488f50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488f52: jne 0x488f65 */ if (!fZ) goto L_00488f65;
L_00488f54:; BB(0x00488f54);
    /* 00488f54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00488f56: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00488f5b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00488f5e: call 0x44aef9 */ r_esp -= 4; W32(r_esp, 0x488f63u); f_0044aef9();
    /* 00488f63: jmp 0x488fc3 */ goto L_00488fc3;
L_00488f65:; BB(0x00488f65);
    /* 00488f65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488f68: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x488f6du); f_005d5015();
    /* 00488f6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488f6f: jne 0x488f92 */ if (!fZ) goto L_00488f92;
L_00488f71:; BB(0x00488f71);
    /* 00488f71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00488f73: push 0x6f6b94 */ { u32 v = 0x6f6b94u; r_esp -= 4; W32(r_esp, v); }
    /* 00488f78: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488f7e: mov dl, byte ptr [ecx + 0x91] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x91u))) & 0xffu);
    /* 00488f84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00488f85: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488f8b: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x488f90u); f_00487680();
    /* 00488f90: jmp 0x488fc3 */ goto L_00488fc3;
L_00488f92:; BB(0x00488f92);
    /* 00488f92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00488f94: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 00488f99: movsx ecx, byte ptr [eax + 0x90] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x90u));
    /* 00488fa0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488fa1: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 00488fa7: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00488fad: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00488fb0: call 0x453a6e */ r_esp -= 4; W32(r_esp, 0x488fb5u); f_00453a6e();
    /* 00488fb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488fb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00488fb8: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00488fbe: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x488fc3u); f_00487680();
L_00488fc3:; BB(0x00488fc3);
    /* 00488fc3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00488fc4: mov esp, ebp */ r_esp = r_ebp;
    /* 00488fc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488fc7: ret  */ FN_RET(0x00488f02); r_esp += 4; return;
}

void f_00488fc8(void) /* FUN_00488fc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488fc8);
    /* 00488fc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488fc9: mov ebp, esp */ r_ebp = r_esp;
    /* 00488fcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488fcc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488fcf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488fd2: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x488fd7u); f_005d5d20();
    /* 00488fd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488fda: mov dword ptr [eax], 0x636bcc */ W32((u32)(r_eax), 0x636bccu);
    /* 00488fe0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488fe3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00488fe6: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00488fec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488fef: mov esp, ebp */ r_esp = r_ebp;
    /* 00488ff1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488ff2: ret 4 */ FN_RET(0x00488fc8); r_esp += 8; return;
}

void f_00488ff5(void) /* FUN_00488ff5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488ff5);
    /* 00488ff5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488ff6: mov ebp, esp */ r_ebp = r_esp;
    /* 00488ff8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488ff9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488ffc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488fff: mov dword ptr [eax], 0x636bcc */ W32((u32)(r_eax), 0x636bccu);
    /* 00489005: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489008: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x48900du); f_005d5dfb();
    /* 0048900d: mov esp, ebp */ r_esp = r_ebp;
    /* 0048900f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489010: ret  */ FN_RET(0x00488ff5); r_esp += 4; return;
}

void f_00489011(void) /* FUN_00489011 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489011);
    /* 00489011: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489012: mov ebp, esp */ r_ebp = r_esp;
    /* 00489014: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489015: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00489018: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048901b: cmp dword ptr [eax + 0xcc], 3 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489022: jne 0x489084 */ if (!fZ) goto L_00489084;
L_00489024:; BB(0x00489024);
    /* 00489024: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00489027: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048902b: jne 0x489084 */ if (!fZ) goto L_00489084;
L_0048902d:; BB(0x0048902d);
    /* 0048902d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00489030: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00489033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489034: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00489037: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0048903a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048903b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048903e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00489040: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489043: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x489046u); call_ind(t); }
    /* 00489046: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489048: je 0x489084 */ if (fZ) goto L_00489084;
L_0048904a:; BB(0x0048904a);
    /* 0048904a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048904d: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489051: jne 0x489084 */ if (!fZ) goto L_00489084;
L_00489053:; BB(0x00489053);
    /* 00489053: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00489056: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00489059: and edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048905c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048905e: je 0x489084 */ if (fZ) goto L_00489084;
L_00489060:; BB(0x00489060);
    /* 00489060: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00489063: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00489066: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00489069: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048906b: je 0x489084 */ if (fZ) goto L_00489084;
L_0048906d:; BB(0x0048906d);
    /* 0048906d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00489070: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00489073: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00489076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489078: je 0x489084 */ if (fZ) goto L_00489084;
L_0048907a:; BB(0x0048907a);
    /* 0048907a: mov dword ptr [0x6f6b08], 1 */ W32((u32)(0x6f6b08u), 0x1u);
L_00489084:; BB(0x00489084);
    /* 00489084: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00489087: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489088: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048908b: call 0x5d6084 */ r_esp -= 4; W32(r_esp, 0x489090u); f_005d6084();
    /* 00489090: mov esp, ebp */ r_esp = r_ebp;
    /* 00489092: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489093: ret 4 */ FN_RET(0x00489011); r_esp += 8; return;
}

void f_00489096(void) /* FUN_00489096 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489096);
    /* 00489096: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489097: mov ebp, esp */ r_ebp = r_esp;
    /* 00489099: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048909c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048909f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004890a6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004890a9: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 004890af: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004890b2: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004890b6: ja 0x489150 */ if ((!fC&&!fZ)) goto L_00489150;
L_004890bc:; BB(0x004890bc);
    /* 004890bc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004890bf: jmp dword ptr [edx*4 + 0x48918f] */ { u32 t = R32((u32)(r_edx*4+0x48918fu)); switch (t) { case 0x4890c6u: goto L_004890c6; case 0x4890d3u: goto L_004890d3; case 0x4890e0u: goto L_004890e0; case 0x4890edu: goto L_004890ed; case 0x489142u: goto L_00489142; default: UNSUP(0x004890bf, "jump table entry is not a known target"); } }
L_004890c6:; BB(0x004890c6);
    /* 004890c6: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 004890cc: call 0x486021 */ r_esp -= 4; W32(r_esp, 0x4890d1u); f_00486021();
    /* 004890d1: jmp 0x489150 */ goto L_00489150;
L_004890d3:; BB(0x004890d3);
    /* 004890d3: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 004890d9: call 0x48612a */ r_esp -= 4; W32(r_esp, 0x4890deu); f_0048612a();
    /* 004890de: jmp 0x489150 */ goto L_00489150;
L_004890e0:; BB(0x004890e0);
    /* 004890e0: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 004890e6: call 0x4861c5 */ r_esp -= 4; W32(r_esp, 0x4890ebu); f_004861c5();
    /* 004890eb: jmp 0x489150 */ goto L_00489150;
L_004890ed:; BB(0x004890ed);
    /* 004890ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004890f0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004890f3: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x4890f8u); f_005e03cc();
    /* 004890f8: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 004890fe: call 0x48637d */ r_esp -= 4; W32(r_esp, 0x489103u); f_0048637d();
    /* 00489103: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00489106: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048910a: jne 0x489119 */ if (!fZ) goto L_00489119;
L_0048910c:; BB(0x0048910c);
    /* 0048910c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048910f: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00489112: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x489117u); f_005e030e();
    /* 00489117: jmp 0x489140 */ goto L_00489140;
L_00489119:; BB(0x00489119);
    /* 00489119: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00489120: cmp dword ptr [0x6f6a28], 0 */ {  u32 a = R32((u32)(0x6f6a28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489127: jne 0x489130 */ if (!fZ) goto L_00489130;
L_00489129:; BB(0x00489129);
    /* 00489129: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00489130:; BB(0x00489130);
    /* 00489130: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 00489136: mov dword ptr [edx + 0x1d18], 1 */ W32((u32)(r_edx+0x1d18u), 0x1u);
L_00489140:; BB(0x00489140);
    /* 00489140: jmp 0x489150 */ goto L_00489150;
L_00489142:; BB(0x00489142);
    /* 00489142: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489148: call 0x48642c */ r_esp -= 4; W32(r_esp, 0x48914du); f_0048642c();
    /* 0048914d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00489150:; BB(0x00489150);
    /* 00489150: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489154: je 0x48918b */ if (fZ) goto L_0048918b;
L_00489156:; BB(0x00489156);
    /* 00489156: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00489158: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048915b: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x489160u); f_005d6635();
    /* 00489160: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489163: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00489166: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x48916bu); f_005e03cc();
    /* 0048916b: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489171: call 0x48645d */ r_esp -= 4; W32(r_esp, 0x489176u); f_0048645d();
    /* 00489176: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 0048917c: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x489181u); f_005e0a55();
    /* 00489181: mov dword ptr [0x6f6a18], 0 */ W32((u32)(0x6f6a18u), 0x0u);
L_0048918b:; BB(0x0048918b);
    /* 0048918b: mov esp, ebp */ r_esp = r_ebp;
    /* 0048918d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048918e: ret  */ FN_RET(0x00489096); r_esp += 4; return;
}

void f_004891a3(void) /* FUN_004891a3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004891a3);
    /* 004891a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004891a4: mov ebp, esp */ r_ebp = r_esp;
    /* 004891a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004891a7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004891aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004891ad: call 0x452d80 */ r_esp -= 4; W32(r_esp, 0x4891b2u); f_00452d80();
    /* 004891b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004891b5: mov dword ptr [eax], 0x636c3c */ W32((u32)(r_eax), 0x636c3cu);
    /* 004891bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004891be: mov esp, ebp */ r_esp = r_ebp;
    /* 004891c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004891c1: ret  */ FN_RET(0x004891a3); r_esp += 4; return;
}

void f_004891c2(void) /* FUN_004891c2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004891c2);
    /* 004891c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004891c3: mov ebp, esp */ r_ebp = r_esp;
    /* 004891c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004891c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004891c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004891cc: mov dword ptr [eax], 0x636c3c */ W32((u32)(r_eax), 0x636c3cu);
    /* 004891d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004891d5: call 0x452de0 */ r_esp -= 4; W32(r_esp, 0x4891dau); f_00452de0();
    /* 004891da: mov esp, ebp */ r_esp = r_ebp;
    /* 004891dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004891dd: ret  */ FN_RET(0x004891c2); r_esp += 4; return;
}

void f_004891de(void) /* FUN_004891de */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004891de);
    /* 004891de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004891df: mov ebp, esp */ r_ebp = r_esp;
    /* 004891e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004891e2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004891e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004891e8: call 0x453443 */ r_esp -= 4; W32(r_esp, 0x4891edu); f_00453443();
    /* 004891ed: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 004891f2: cmp dword ptr [eax + 0xf4], 0 */ {  u32 a = R32((u32)(r_eax+0xf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004891f9: je 0x48922f */ if (fZ) goto L_0048922f;
L_004891fb:; BB(0x004891fb);
    /* 004891fb: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 004891fd: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489203: mov ecx, dword ptr [ecx + 0xf4] */ r_ecx = R32((u32)(r_ecx+0xf4u));
    /* 00489209: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x48920eu); f_005e87aa();
    /* 0048920e: push 0x686e9c */ { u32 v = 0x686e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00489213: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 00489219: mov ecx, dword ptr [edx + 0xf4] */ r_ecx = R32((u32)(r_edx+0xf4u));
    /* 0048921f: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 00489224: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 0048922a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048922c: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x48922fu); call_ind(t); }
L_0048922f:; BB(0x0048922f);
    /* 0048922f: mov esp, ebp */ r_esp = r_ebp;
    /* 00489231: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489232: ret  */ FN_RET(0x004891de); r_esp += 4; return;
}

void f_00489233(void) /* FUN_00489233 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489233);
    /* 00489233: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489234: mov ebp, esp */ r_ebp = r_esp;
    /* 00489236: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489237: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048923a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048923d: call 0x4534e5 */ r_esp -= 4; W32(r_esp, 0x489242u); f_004534e5();
    /* 00489242: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 00489247: cmp dword ptr [eax + 0xf4], 0 */ {  u32 a = R32((u32)(r_eax+0xf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048924e: je 0x489284 */ if (fZ) goto L_00489284;
L_00489250:; BB(0x00489250);
    /* 00489250: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00489252: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489258: mov ecx, dword ptr [ecx + 0xf4] */ r_ecx = R32((u32)(r_ecx+0xf4u));
    /* 0048925e: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x489263u); f_005e87aa();
    /* 00489263: push 0x686ea8 */ { u32 v = 0x686ea8u; r_esp -= 4; W32(r_esp, v); }
    /* 00489268: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 0048926e: mov ecx, dword ptr [edx + 0xf4] */ r_ecx = R32((u32)(r_edx+0xf4u));
    /* 00489274: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 00489279: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 0048927f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00489281: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x489284u); call_ind(t); }
L_00489284:; BB(0x00489284);
    /* 00489284: mov esp, ebp */ r_esp = r_ebp;
    /* 00489286: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489287: ret  */ FN_RET(0x00489233); r_esp += 4; return;
}

void f_00489288(void) /* FUN_00489288 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489288);
    /* 00489288: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489289: mov ebp, esp */ r_ebp = r_esp;
    /* 0048928b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048928e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00489291: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00489298: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048929b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048929d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004892a0: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4892a3u); call_ind(t); }
    /* 004892a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004892a4: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x4892a9u); f_00624990();
    /* 004892a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004892ac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004892af: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004892b6: je 0x4892c6 */ if (fZ) goto L_004892c6;
L_004892b8:; BB(0x004892b8);
    /* 004892b8: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 004892be: call 0x4865a9 */ r_esp -= 4; W32(r_esp, 0x4892c3u); f_004865a9();
    /* 004892c3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004892c6:; BB(0x004892c6);
    /* 004892c6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004892c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004892ca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004892cd: call 0x452e5d */ r_esp -= 4; W32(r_esp, 0x4892d2u); f_00452e5d();
    /* 004892d2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004892d5: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004892db: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004892de: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x4892e3u); f_00448ca3();
    /* 004892e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004892e5: je 0x4892ef */ if (fZ) goto L_004892ef;
L_004892e7:; BB(0x004892e7);
    /* 004892e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004892ea: jmp 0x48943e */ goto L_0048943e;
L_004892ef:; BB(0x004892ef);
    /* 004892ef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004892f2: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004892f6: jne 0x4893ec */ if (!fZ) goto L_004893ec;
L_004892fc:; BB(0x004892fc);
    /* 004892fc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489300: je 0x4893ec */ if (fZ) goto L_004893ec;
L_00489306:; BB(0x00489306);
    /* 00489306: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489309: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048930b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048930e: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x489311u); call_ind(t); }
    /* 00489311: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489312: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x489317u); f_00624990();
    /* 00489317: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048931a: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048931d: je 0x48933a */ if (fZ) goto L_0048933a;
L_0048931f:; BB(0x0048931f);
    /* 0048931f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00489321: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00489323: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00489325: push 0x186a5 */ { u32 v = 0x186a5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048932a: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0048932f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00489332: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00489335: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x48933au); f_005e8389();
L_0048933a:; BB(0x0048933a);
    /* 0048933a: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489340: call 0x4865a9 */ r_esp -= 4; W32(r_esp, 0x489345u); f_004865a9();
    /* 00489345: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489347: je 0x4893a8 */ if (fZ) goto L_004893a8;
L_00489349:; BB(0x00489349);
    /* 00489349: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048934b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048934e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00489350: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489353: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x489356u); call_ind(t); }
    /* 00489356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489357: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 0048935d: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00489363: call 0x5df099 */ r_esp -= 4; W32(r_esp, 0x489368u); f_005df099();
    /* 00489368: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048936b: je 0x4893a6 */ if (fZ) goto L_004893a6;
L_0048936d:; BB(0x0048936d);
    /* 0048936d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048936f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489372: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00489374: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489377: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x48937au); call_ind(t); }
    /* 0048937a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048937b: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489381: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00489387: call 0x5df099 */ r_esp -= 4; W32(r_esp, 0x48938cu); f_005df099();
    /* 0048938c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048938d: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 00489393: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00489399: call 0x5de705 */ r_esp -= 4; W32(r_esp, 0x48939eu); f_005de705();
    /* 0048939e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004893a1: call 0x4891de */ r_esp -= 4; W32(r_esp, 0x4893a6u); f_004891de();
L_004893a6:; BB(0x004893a6);
    /* 004893a6: jmp 0x4893c4 */ goto L_004893c4;
L_004893a8:; BB(0x004893a8);
    /* 004893a8: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004893ac: je 0x4893b9 */ if (fZ) goto L_004893b9;
L_004893ae:; BB(0x004893ae);
    /* 004893ae: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 004893b4: call 0x486f4e */ r_esp -= 4; W32(r_esp, 0x4893b9u); f_00486f4e();
L_004893b9:; BB(0x004893b9);
    /* 004893b9: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 004893bf: call 0x486fe6 */ r_esp -= 4; W32(r_esp, 0x4893c4u); f_00486fe6();
L_004893c4:; BB(0x004893c4);
    /* 004893c4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004893c7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004893c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004893cc: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4893cfu); call_ind(t); }
    /* 004893cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004893d0: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 004893d5: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 004893db: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 004893e1: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 004893e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004893e9: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4893ecu); call_ind(t); }
L_004893ec:; BB(0x004893ec);
    /* 004893ec: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004893f3: je 0x48943b */ if (fZ) goto L_0048943b;
L_004893f5:; BB(0x004893f5);
    /* 004893f5: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 004893fa: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00489400: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x489405u); f_005de96b();
    /* 00489405: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489408: jne 0x48943b */ if (!fZ) goto L_0048943b;
L_0048940a:; BB(0x0048940a);
    /* 0048940a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048940d: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489411: jne 0x48943b */ if (!fZ) goto L_0048943b;
L_00489413:; BB(0x00489413);
    /* 00489413: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00489416: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00489419: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048941a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048941d: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00489420: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489421: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489424: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00489426: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489429: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x48942cu); call_ind(t); }
    /* 0048942c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048942e: je 0x48943b */ if (fZ) goto L_0048943b;
L_00489430:; BB(0x00489430);
    /* 00489430: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489436: call 0x486e00 */ r_esp -= 4; W32(r_esp, 0x48943bu); f_00486e00();
L_0048943b:; BB(0x0048943b);
    /* 0048943b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0048943e:; BB(0x0048943e);
    /* 0048943e: mov esp, ebp */ r_esp = r_ebp;
    /* 00489440: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489441: ret 4 */ FN_RET(0x00489288); r_esp += 8; return;
}

void f_00489444(void) /* FUN_00489444 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489444);
    /* 00489444: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489445: mov ebp, esp */ r_ebp = r_esp;
    /* 00489447: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489448: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048944b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048944e: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x489453u); f_005e9d30();
    /* 00489453: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489456: mov dword ptr [eax], 0x636c8c */ W32((u32)(r_eax), 0x636c8cu);
    /* 0048945c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048945f: mov esp, ebp */ r_esp = r_ebp;
    /* 00489461: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489462: ret  */ FN_RET(0x00489444); r_esp += 4; return;
}

void f_00489463(void) /* FUN_00489463 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489463);
    /* 00489463: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489464: mov ebp, esp */ r_ebp = r_esp;
    /* 00489466: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489467: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048946a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048946d: mov dword ptr [eax], 0x636c8c */ W32((u32)(r_eax), 0x636c8cu);
    /* 00489473: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489476: call 0x5e9dde */ r_esp -= 4; W32(r_esp, 0x48947bu); f_005e9dde();
    /* 0048947b: mov esp, ebp */ r_esp = r_ebp;
    /* 0048947d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048947e: ret  */ FN_RET(0x00489463); r_esp += 4; return;
}

void f_0048947f(void) /* FUN_0048947f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048947f);
    /* 0048947f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489480: mov ebp, esp */ r_ebp = r_esp;
    /* 00489482: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489485: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00489488: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048948b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048948c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048948f: call 0x5d9681 */ r_esp -= 4; W32(r_esp, 0x489494u); f_005d9681();
    /* 00489494: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00489497: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048949d: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004894a0: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x4894a5u); f_00448ca3();
    /* 004894a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004894a7: je 0x4894b1 */ if (fZ) goto L_004894b1;
L_004894a9:; BB(0x004894a9);
    /* 004894a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004894ac: jmp 0x489567 */ goto L_00489567;
L_004894b1:; BB(0x004894b1);
    /* 004894b1: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004894b8: je 0x489501 */ if (fZ) goto L_00489501;
L_004894ba:; BB(0x004894ba);
    /* 004894ba: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 004894c0: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 004894c6: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x4894cbu); f_005de96b();
    /* 004894cb: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004894ce: jne 0x489501 */ if (!fZ) goto L_00489501;
L_004894d0:; BB(0x004894d0);
    /* 004894d0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004894d3: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004894d7: jne 0x489501 */ if (!fZ) goto L_00489501;
L_004894d9:; BB(0x004894d9);
    /* 004894d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004894dc: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 004894df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004894e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004894e3: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004894e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004894e7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004894ea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004894ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004894ef: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x4894f2u); call_ind(t); }
    /* 004894f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004894f4: je 0x489501 */ if (fZ) goto L_00489501;
L_004894f6:; BB(0x004894f6);
    /* 004894f6: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 004894fc: call 0x486e00 */ r_esp -= 4; W32(r_esp, 0x489501u); f_00486e00();
L_00489501:; BB(0x00489501);
    /* 00489501: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00489504: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489508: jne 0x489564 */ if (!fZ) goto L_00489564;
L_0048950a:; BB(0x0048950a);
    /* 0048950a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048950d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048950e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489511: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x489516u); f_005d9738();
    /* 00489516: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489518: je 0x489564 */ if (fZ) goto L_00489564;
L_0048951a:; BB(0x0048951a);
    /* 0048951a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048951d: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489521: jne 0x489564 */ if (!fZ) goto L_00489564;
L_00489523:; BB(0x00489523);
    /* 00489523: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00489526: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00489529: and edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048952c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048952e: je 0x489564 */ if (fZ) goto L_00489564;
L_00489530:; BB(0x00489530);
    /* 00489530: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00489533: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00489536: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00489539: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048953b: je 0x489564 */ if (fZ) goto L_00489564;
L_0048953d:; BB(0x0048953d);
    /* 0048953d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00489540: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00489543: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00489546: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489548: je 0x489564 */ if (fZ) goto L_00489564;
L_0048954a:; BB(0x0048954a);
    /* 0048954a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0048954c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048954f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x489554u); f_005ea1cf();
    /* 00489554: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 0048955a: mov dword ptr [ecx + 0x1d5c], 1 */ W32((u32)(r_ecx+0x1d5cu), 0x1u);
L_00489564:; BB(0x00489564);
    /* 00489564: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00489567:; BB(0x00489567);
    /* 00489567: mov esp, ebp */ r_esp = r_ebp;
    /* 00489569: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048956a: ret 4 */ FN_RET(0x0048947f); r_esp += 8; return;
}

void f_0048956d(void) /* FUN_0048956d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048956d);
    /* 0048956d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048956e: mov ebp, esp */ r_ebp = r_esp;
    /* 00489570: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489571: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00489574: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489577: call 0x5ddb5a */ r_esp -= 4; W32(r_esp, 0x48957cu); f_005ddb5a();
    /* 0048957c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048957f: mov dword ptr [eax], 0x636cd4 */ W32((u32)(r_eax), 0x636cd4u);
    /* 00489585: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489588: mov esp, ebp */ r_esp = r_ebp;
    /* 0048958a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048958b: ret  */ FN_RET(0x0048956d); r_esp += 4; return;
}

void f_0048958c(void) /* FUN_0048958c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048958c);
    /* 0048958c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048958d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048958f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489590: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00489593: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489596: mov dword ptr [eax], 0x636cd4 */ W32((u32)(r_eax), 0x636cd4u);
    /* 0048959c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048959f: call 0x5ddc0f */ r_esp -= 4; W32(r_esp, 0x4895a4u); f_005ddc0f();
    /* 004895a4: mov esp, ebp */ r_esp = r_ebp;
    /* 004895a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004895a7: ret  */ FN_RET(0x0048958c); r_esp += 4; return;
}

void f_004895a8(void) /* FUN_004895a8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004895a8);
    /* 004895a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004895a9: mov ebp, esp */ r_ebp = r_esp;
    /* 004895ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004895ac: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004895af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004895b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004895b3: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 004895b9: call 0x487181 */ r_esp -= 4; W32(r_esp, 0x4895beu); f_00487181();
    /* 004895be: mov esp, ebp */ r_esp = r_ebp;
    /* 004895c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004895c1: ret 4 */ FN_RET(0x004895a8); r_esp += 8; return;
}

void f_004895c4(void) /* FUN_004895c4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004895c4);
    /* 004895c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004895c5: mov ebp, esp */ r_ebp = r_esp;
    /* 004895c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004895c8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004895cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004895ce: call 0x5dd7b0 */ r_esp -= 4; W32(r_esp, 0x4895d3u); f_005dd7b0();
    /* 004895d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004895d6: mov dword ptr [eax], 0x636d24 */ W32((u32)(r_eax), 0x636d24u);
    /* 004895dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004895df: mov byte ptr [ecx + 0x8a0], 0 */ W8((u32)(r_ecx+0x8a0u), 0x0u);
    /* 004895e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004895e9: mov byte ptr [edx + 0x8ba], 0 */ W8((u32)(r_edx+0x8bau), 0x0u);
    /* 004895f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004895f3: mov dword ptr [eax + 0x8d4], 0x1388 */ W32((u32)(r_eax+0x8d4u), 0x1388u);
    /* 004895fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489600: mov dword ptr [ecx + 0x8d8], 0 */ W32((u32)(r_ecx+0x8d8u), 0x0u);
    /* 0048960a: push 0x6f6b98 */ { u32 v = 0x6f6b98u; r_esp -= 4; W32(r_esp, v); }
    /* 0048960f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489612: add edx, 0x8bb */ {  u32 a = r_edx; u32 b = 0x8bbu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00489618: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489619: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48961eu); f_00624510();
    /* 0048961e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489621: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489624: mov esp, ebp */ r_esp = r_ebp;
    /* 00489626: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489627: ret  */ FN_RET(0x004895c4); r_esp += 4; return;
}

void f_00489628(void) /* FUN_00489628 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489628);
    /* 00489628: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489629: mov ebp, esp */ r_ebp = r_esp;
    /* 0048962b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048962c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048962f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489632: mov dword ptr [eax], 0x636d24 */ W32((u32)(r_eax), 0x636d24u);
    /* 00489638: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048963b: call 0x5dd81d */ r_esp -= 4; W32(r_esp, 0x489640u); f_005dd81d();
    /* 00489640: mov esp, ebp */ r_esp = r_ebp;
    /* 00489642: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489643: ret  */ FN_RET(0x00489628); r_esp += 4; return;
}

void f_00489644(void) /* FUN_00489644 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489644);
    /* 00489644: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489645: mov ebp, esp */ r_ebp = r_esp;
    /* 00489647: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489648: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048964b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048964e: call 0x452d80 */ r_esp -= 4; W32(r_esp, 0x489653u); f_00452d80();
    /* 00489653: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489656: mov dword ptr [eax], 0x636d74 */ W32((u32)(r_eax), 0x636d74u);
    /* 0048965c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048965f: mov esp, ebp */ r_esp = r_ebp;
    /* 00489661: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489662: ret  */ FN_RET(0x00489644); r_esp += 4; return;
}

void f_00489663(void) /* FUN_00489663 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489663);
    /* 00489663: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489664: mov ebp, esp */ r_ebp = r_esp;
    /* 00489666: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489667: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048966a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048966d: mov dword ptr [eax], 0x636d74 */ W32((u32)(r_eax), 0x636d74u);
    /* 00489673: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489676: call 0x452de0 */ r_esp -= 4; W32(r_esp, 0x48967bu); f_00452de0();
    /* 0048967b: mov esp, ebp */ r_esp = r_ebp;
    /* 0048967d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048967e: ret  */ FN_RET(0x00489663); r_esp += 4; return;
}

void f_0048967f(void) /* FUN_0048967f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048967f);
    /* 0048967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489680: mov ebp, esp */ r_ebp = r_esp;
    /* 00489682: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489685: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00489688: mov ax, word ptr [0x686eb0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x686eb0u))) & 0xffffu);
    /* 0048968e: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00489692: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00489695: mov dl, byte ptr [ecx + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x14u))) & 0xffu);
    /* 00489698: mov byte ptr [ebp - 4], dl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_edx);
    /* 0048969b: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 004896a0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004896a3: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x4896a8u); f_00448ca3();
    /* 004896a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004896aa: je 0x4896bd */ if (fZ) goto L_004896bd;
L_004896ac:; BB(0x004896ac);
    /* 004896ac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004896af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004896b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004896b3: call 0x452e5d */ r_esp -= 4; W32(r_esp, 0x4896b8u); f_00452e5d();
    /* 004896b8: jmp 0x48987b */ goto L_0048987b;
L_004896bd:; BB(0x004896bd);
    /* 004896bd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004896c0: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004896c4: jne 0x48974e */ if (!fZ) goto L_0048974e;
L_004896ca:; BB(0x004896ca);
    /* 004896ca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004896cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004896ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004896d1: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x4896d6u); f_005d9738();
    /* 004896d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004896d8: je 0x48974e */ if (fZ) goto L_0048974e;
L_004896da:; BB(0x004896da);
    /* 004896da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004896dd: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004896e1: jne 0x48974e */ if (!fZ) goto L_0048974e;
L_004896e3:; BB(0x004896e3);
    /* 004896e3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004896e6: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004896e9: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004896ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004896ee: je 0x48974e */ if (fZ) goto L_0048974e;
L_004896f0:; BB(0x004896f0);
    /* 004896f0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004896f3: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004896f6: and edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004896f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004896fb: je 0x48974e */ if (fZ) goto L_0048974e;
L_004896fd:; BB(0x004896fd);
    /* 004896fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00489700: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00489703: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00489706: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489708: je 0x48974e */ if (fZ) goto L_0048974e;
L_0048970a:; BB(0x0048970a);
    /* 0048970a: cmp dword ptr [0x6f6b0c], 0 */ {  u32 a = R32((u32)(0x6f6b0cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489711: je 0x489729 */ if (fZ) goto L_00489729;
L_00489713:; BB(0x00489713);
    /* 00489713: mov dword ptr [0x6f6b0c], 0 */ W32((u32)(0x6f6b0cu), 0x0u);
    /* 0048971d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048971f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489722: call 0x45378f */ r_esp -= 4; W32(r_esp, 0x489727u); f_0045378f();
    /* 00489727: jmp 0x48973d */ goto L_0048973d;
L_00489729:; BB(0x00489729);
    /* 00489729: mov dword ptr [0x6f6b0c], 1 */ W32((u32)(0x6f6b0cu), 0x1u);
    /* 00489733: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00489735: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489738: call 0x45378f */ r_esp -= 4; W32(r_esp, 0x48973du); f_0045378f();
L_0048973d:; BB(0x0048973d);
    /* 0048973d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00489740: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489741: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489744: call 0x452e5d */ r_esp -= 4; W32(r_esp, 0x489749u); f_00452e5d();
    /* 00489749: jmp 0x48987b */ goto L_0048987b;
L_0048974e:; BB(0x0048974e);
    /* 0048974e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489751: call 0x453535 */ r_esp -= 4; W32(r_esp, 0x489756u); f_00453535();
    /* 00489756: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489758: je 0x489820 */ if (fZ) goto L_00489820;
L_0048975e:; BB(0x0048975e);
    /* 0048975e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00489761: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489765: jne 0x489820 */ if (!fZ) goto L_00489820;
L_0048976b:; BB(0x0048976b);
    /* 0048976b: cmp dword ptr [0x6f6b0c], 0 */ {  u32 a = R32((u32)(0x6f6b0cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489772: jne 0x4897eb */ if (!fZ) goto L_004897eb;
L_00489774:; BB(0x00489774);
    /* 00489774: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00489777: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0048977b: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048977e: je 0x4897e9 */ if (fZ) goto L_004897e9;
L_00489780:; BB(0x00489780);
    /* 00489780: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489783: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00489785: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489788: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x48978bu); call_ind(t); }
    /* 0048978b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048978c: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x489791u); f_00625430();
    /* 00489791: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489794: cmp eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00489799: jge 0x4897bd */ if ((fS==fO)) goto L_004897bd;
L_0048979b:; BB(0x0048979b);
    /* 0048979b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048979e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004897a0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004897a3: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4897a6u); call_ind(t); }
    /* 004897a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004897a7: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x4897acu); f_00625430();
    /* 004897ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004897af: cmp eax, 0x1f3 */ {  u32 a = r_eax; u32 b = 0x1f3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004897b4: jle 0x4897bd */ if ((fZ||fS!=fO)) goto L_004897bd;
L_004897b6:; BB(0x004897b6);
    /* 004897b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004897b8: jmp 0x48987b */ goto L_0048987b;
L_004897bd:; BB(0x004897bd);
    /* 004897bd: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 004897c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004897c1: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x4897c6u); f_00625430();
    /* 004897c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004897c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004897cb: jne 0x4897e9 */ if (!fZ) goto L_004897e9;
L_004897cd:; BB(0x004897cd);
    /* 004897cd: push 0x686eb4 */ { u32 v = 0x686eb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004897d2: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 004897d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004897d6: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x4897dbu); f_006240c0();
    /* 004897db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004897de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004897e0: je 0x4897e9 */ if (fZ) goto L_004897e9;
L_004897e2:; BB(0x004897e2);
    /* 004897e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004897e4: jmp 0x48987b */ goto L_0048987b;
L_004897e9:; BB(0x004897e9);
    /* 004897e9: jmp 0x489820 */ goto L_00489820;
L_004897eb:; BB(0x004897eb);
    /* 004897eb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004897ee: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 004897f2: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004897f5: je 0x489820 */ if (fZ) goto L_00489820;
L_004897f7:; BB(0x004897f7);
    /* 004897f7: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 004897fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004897fb: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x489800u); f_00625430();
    /* 00489800: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489803: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489805: jne 0x489820 */ if (!fZ) goto L_00489820;
L_00489807:; BB(0x00489807);
    /* 00489807: push 0x686eb8 */ { u32 v = 0x686eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048980c: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 0048980f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489810: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x489815u); f_006240c0();
    /* 00489815: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489818: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048981a: je 0x489820 */ if (fZ) goto L_00489820;
L_0048981c:; BB(0x0048981c);
    /* 0048981c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048981e: jmp 0x48987b */ goto L_0048987b;
L_00489820:; BB(0x00489820);
    /* 00489820: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489827: je 0x48986f */ if (fZ) goto L_0048986f;
L_00489829:; BB(0x00489829);
    /* 00489829: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 0048982e: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00489834: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x489839u); f_005de96b();
    /* 00489839: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048983c: jne 0x48986f */ if (!fZ) goto L_0048986f;
L_0048983e:; BB(0x0048983e);
    /* 0048983e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00489841: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489845: jne 0x48986f */ if (!fZ) goto L_0048986f;
L_00489847:; BB(0x00489847);
    /* 00489847: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048984a: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0048984d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048984e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00489851: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00489854: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489855: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489858: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048985a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048985d: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x489860u); call_ind(t); }
    /* 00489860: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489862: je 0x48986f */ if (fZ) goto L_0048986f;
L_00489864:; BB(0x00489864);
    /* 00489864: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 0048986a: call 0x486e3f */ r_esp -= 4; W32(r_esp, 0x48986fu); f_00486e3f();
L_0048986f:; BB(0x0048986f);
    /* 0048986f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00489872: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489873: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489876: call 0x452e5d */ r_esp -= 4; W32(r_esp, 0x48987bu); f_00452e5d();
L_0048987b:; BB(0x0048987b);
    /* 0048987b: mov esp, ebp */ r_esp = r_ebp;
    /* 0048987d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048987e: ret 4 */ FN_RET(0x0048967f); r_esp += 8; return;
}

void f_00489881(void) /* FUN_00489881 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489881);
    /* 00489881: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489882: mov ebp, esp */ r_ebp = r_esp;
    /* 00489884: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489885: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00489888: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048988c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048988f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489890: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489893: call 0x5d4ec0 */ r_esp -= 4; W32(r_esp, 0x489898u); f_005d4ec0();
    /* 00489898: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048989b: mov dword ptr [edx], 0x636dc4 */ W32((u32)(r_edx), 0x636dc4u);
    /* 004898a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004898a4: mov esp, ebp */ r_esp = r_ebp;
    /* 004898a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004898a7: ret 8 */ FN_RET(0x00489881); r_esp += 12; return;
}

void f_004898aa(void) /* FUN_004898aa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004898aa);
    /* 004898aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004898ab: mov ebp, esp */ r_ebp = r_esp;
    /* 004898ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004898ae: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004898b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004898b4: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x4898b9u); f_005d5015();
    /* 004898b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004898bb: jne 0x489901 */ if (!fZ) goto L_00489901;
L_004898bd:; BB(0x004898bd);
    /* 004898bd: push 0x6f6b9c */ { u32 v = 0x6f6b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004898c2: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 004898c7: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 004898cd: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 004898d3: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 004898d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004898db: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4898deu); call_ind(t); }
    /* 004898de: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 004898e3: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 004898e9: call 0x4534e5 */ r_esp -= 4; W32(r_esp, 0x4898eeu); f_004534e5();
    /* 004898ee: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 004898f4: mov ecx, dword ptr [ecx + 0xec] */ r_ecx = R32((u32)(r_ecx+0xecu));
    /* 004898fa: call 0x4891de */ r_esp -= 4; W32(r_esp, 0x4898ffu); f_004891de();
    /* 004898ff: jmp 0x489922 */ goto L_00489922;
L_00489901:; BB(0x00489901);
    /* 00489901: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 00489907: mov ecx, dword ptr [edx + 0xec] */ r_ecx = R32((u32)(r_edx+0xecu));
    /* 0048990d: call 0x489233 */ r_esp -= 4; W32(r_esp, 0x489912u); f_00489233();
    /* 00489912: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 00489917: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0048991d: call 0x453443 */ r_esp -= 4; W32(r_esp, 0x489922u); f_00453443();
L_00489922:; BB(0x00489922);
    /* 00489922: mov esp, ebp */ r_esp = r_ebp;
    /* 00489924: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489925: ret  */ FN_RET(0x004898aa); r_esp += 4; return;
}

void f_00489926(void) /* FUN_00489926 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489926);
    /* 00489926: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489927: mov ebp, esp */ r_ebp = r_esp;
    /* 00489929: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048992a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048992d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048992f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489932: call 0x5e6882 */ r_esp -= 4; W32(r_esp, 0x489937u); f_005e6882();
    /* 00489937: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048993a: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048993d: call 0x45384e */ r_esp -= 4; W32(r_esp, 0x489942u); f_0045384e();
    /* 00489942: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489945: mov dword ptr [eax], 0x636e3c */ W32((u32)(r_eax), 0x636e3cu);
    /* 0048994b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048994e: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 00489955: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489958: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 0048995f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489962: mov dword ptr [eax + 0x88], 0 */ W32((u32)(r_eax+0x88u), 0x0u);
    /* 0048996c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048996f: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489972: call 0x453af3 */ r_esp -= 4; W32(r_esp, 0x489977u); f_00453af3();
    /* 00489977: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048997a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048997c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048997d: ret  */ FN_RET(0x00489926); r_esp += 4; return;
}

void f_0048997e(void) /* FUN_0048997e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048997e);
    /* 0048997e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048997f: mov ebp, esp */ r_ebp = r_esp;
    /* 00489981: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489984: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00489987: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048998a: mov dword ptr [eax], 0x636e3c */ W32((u32)(r_eax), 0x636e3cu);
    /* 00489990: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00489993: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489997: je 0x4899d0 */ if (fZ) goto L_004899d0;
L_00489999:; BB(0x00489999);
    /* 00489999: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048999c: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0048999f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004899a2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004899a5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004899a8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004899ac: je 0x4899bf */ if (fZ) goto L_004899bf;
L_004899ae:; BB(0x004899ae);
    /* 004899ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004899b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004899b3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004899b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004899b8: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4899bau); call_ind(t); }
    /* 004899ba: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004899bd: jmp 0x4899c6 */ goto L_004899c6;
L_004899bf:; BB(0x004899bf);
    /* 004899bf: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_004899c6:; BB(0x004899c6);
    /* 004899c6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004899c9: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
L_004899d0:; BB(0x004899d0);
    /* 004899d0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004899d3: cmp dword ptr [edx + 0x68], 0 */ {  u32 a = R32((u32)(r_edx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004899d7: je 0x489a10 */ if (fZ) goto L_00489a10;
L_004899d9:; BB(0x004899d9);
    /* 004899d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004899dc: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004899df: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004899e2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004899e5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004899e8: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004899ec: je 0x4899ff */ if (fZ) goto L_004899ff;
L_004899ee:; BB(0x004899ee);
    /* 004899ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004899f0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004899f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004899f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004899f8: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4899fau); call_ind(t); }
    /* 004899fa: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004899fd: jmp 0x489a06 */ goto L_00489a06;
L_004899ff:; BB(0x004899ff);
    /* 004899ff: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00489a06:; BB(0x00489a06);
    /* 00489a06: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00489a09: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
L_00489a10:; BB(0x00489a10);
    /* 00489a10: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00489a13: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489a16: call 0x453880 */ r_esp -= 4; W32(r_esp, 0x489a1bu); f_00453880();
    /* 00489a1b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00489a1e: call 0x5e69b1 */ r_esp -= 4; W32(r_esp, 0x489a23u); f_005e69b1();
    /* 00489a23: mov esp, ebp */ r_esp = r_ebp;
    /* 00489a25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489a26: ret  */ FN_RET(0x0048997e); r_esp += 4; return;
}

void f_00489a27(void) /* FUN_00489a27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489a27);
    /* 00489a27: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489a28: mov ebp, esp */ r_ebp = r_esp;
    /* 00489a2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489a2b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00489a2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489a31: call 0x5e6a8f */ r_esp -= 4; W32(r_esp, 0x489a36u); f_005e6a8f();
    /* 00489a36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489a39: call 0x5e71b8 */ r_esp -= 4; W32(r_esp, 0x489a3eu); f_005e71b8();
    /* 00489a3e: mov esp, ebp */ r_esp = r_ebp;
    /* 00489a40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489a41: ret  */ FN_RET(0x00489a27); r_esp += 4; return;
}

void f_00489a42(void) /* FUN_00489a42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489a42);
    /* 00489a42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489a43: mov ebp, esp */ r_ebp = r_esp;
    /* 00489a45: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489a48: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00489a4b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489a4e: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489a52: je 0x489a96 */ if (fZ) goto L_00489a96;
L_00489a54:; BB(0x00489a54);
    /* 00489a54: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489a57: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 00489a5a: call 0x454311 */ r_esp -= 4; W32(r_esp, 0x489a5fu); f_00454311();
    /* 00489a5f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489a62: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 00489a65: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00489a68: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489a6b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00489a6e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489a72: je 0x489a85 */ if (fZ) goto L_00489a85;
L_00489a74:; BB(0x00489a74);
    /* 00489a74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00489a76: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489a79: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00489a7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489a7e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x489a80u); call_ind(t); }
    /* 00489a80: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00489a83: jmp 0x489a8c */ goto L_00489a8c;
L_00489a85:; BB(0x00489a85);
    /* 00489a85: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00489a8c:; BB(0x00489a8c);
    /* 00489a8c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489a8f: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
L_00489a96:; BB(0x00489a96);
    /* 00489a96: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489a99: mov dword ptr [edx + 0x88], 0x11 */ W32((u32)(r_edx+0x88u), 0x11u);
    /* 00489aa3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489aa6: cmp dword ptr [eax + 0x64], 0 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489aaa: jne 0x489b0b */ if (!fZ) goto L_00489b0b;
L_00489aac:; BB(0x00489aac);
    /* 00489aac: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00489aae: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x489ab3u); f_0048ab58();
    /* 00489ab3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489ab6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00489ab9: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489abd: je 0x489acc */ if (fZ) goto L_00489acc;
L_00489abf:; BB(0x00489abf);
    /* 00489abf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00489ac2: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x489ac7u); f_005e9d30();
    /* 00489ac7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00489aca: jmp 0x489ad3 */ goto L_00489ad3;
L_00489acc:; BB(0x00489acc);
    /* 00489acc: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00489ad3:; BB(0x00489ad3);
    /* 00489ad3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489ad6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00489ad9: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 00489adc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489adf: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00489ae2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489ae5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00489ae8: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00489aeb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489aee: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x489af3u); f_005d9883();
    /* 00489af3: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00489af6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489af7: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00489af9: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00489afb: push 0x11287 */ { u32 v = 0x11287u; r_esp -= 4; W32(r_esp, v); }
    /* 00489b00: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489b03: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00489b06: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x489b0bu); f_005e9f50();
L_00489b0b:; BB(0x00489b0b);
    /* 00489b0b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00489b0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489b0f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489b12: call 0x489e44 */ r_esp -= 4; W32(r_esp, 0x489b17u); f_00489e44();
    /* 00489b17: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489b1a: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00489b1d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489b20: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00489b23: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00489b25: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x489b28u); call_ind(t); }
    /* 00489b28: mov esp, ebp */ r_esp = r_ebp;
    /* 00489b2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489b2b: ret 4 */ FN_RET(0x00489a42); r_esp += 8; return;
}

void f_00489b2e(void) /* FUN_00489b2e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489b2e);
    /* 00489b2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489b2f: mov ebp, esp */ r_ebp = r_esp;
    /* 00489b31: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489b34: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00489b37: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489b3a: cmp dword ptr [eax + 0x64], 0 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489b3e: je 0x489b88 */ if (fZ) goto L_00489b88;
L_00489b40:; BB(0x00489b40);
    /* 00489b40: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489b43: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00489b46: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489b49: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00489b4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00489b4e: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x489b51u); call_ind(t); }
    /* 00489b51: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489b54: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00489b57: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00489b5a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489b5d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00489b60: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489b64: je 0x489b77 */ if (fZ) goto L_00489b77;
L_00489b66:; BB(0x00489b66);
    /* 00489b66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00489b68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489b6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00489b6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489b70: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x489b72u); call_ind(t); }
    /* 00489b72: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00489b75: jmp 0x489b7e */ goto L_00489b7e;
L_00489b77:; BB(0x00489b77);
    /* 00489b77: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00489b7e:; BB(0x00489b7e);
    /* 00489b7e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489b81: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
L_00489b88:; BB(0x00489b88);
    /* 00489b88: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489b8b: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489b8e: call 0x453c16 */ r_esp -= 4; W32(r_esp, 0x489b93u); f_00453c16();
    /* 00489b93: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489b96: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 00489b9c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489b9f: cmp dword ptr [edx + 0x68], 0 */ {  u32 a = R32((u32)(r_edx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489ba3: jne 0x489bfb */ if (!fZ) goto L_00489bfb;
L_00489ba5:; BB(0x00489ba5);
    /* 00489ba5: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00489baa: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x489bafu); f_0048ab58();
    /* 00489baf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489bb2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00489bb5: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489bb9: je 0x489bc8 */ if (fZ) goto L_00489bc8;
L_00489bbb:; BB(0x00489bbb);
    /* 00489bbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00489bbe: call 0x453f99 */ r_esp -= 4; W32(r_esp, 0x489bc3u); f_00453f99();
    /* 00489bc3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00489bc6: jmp 0x489bcf */ goto L_00489bcf;
L_00489bc8:; BB(0x00489bc8);
    /* 00489bc8: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00489bcf:; BB(0x00489bcf);
    /* 00489bcf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489bd2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00489bd5: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 00489bd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00489bda: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489bdd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00489be0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489be1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489be4: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 00489be7: call 0x454097 */ r_esp -= 4; W32(r_esp, 0x489becu); f_00454097();
    /* 00489bec: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00489bee: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00489bf0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489bf3: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 00489bf6: call 0x454149 */ r_esp -= 4; W32(r_esp, 0x489bfbu); f_00454149();
L_00489bfb:; BB(0x00489bfb);
    /* 00489bfb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00489bfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489bff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489c02: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489c05: call 0x453a95 */ r_esp -= 4; W32(r_esp, 0x489c0au); f_00453a95();
    /* 00489c0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489c0b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489c0e: call 0x489e44 */ r_esp -= 4; W32(r_esp, 0x489c13u); f_00489e44();
    /* 00489c13: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00489c16: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 00489c19: call 0x4542de */ r_esp -= 4; W32(r_esp, 0x489c1eu); f_004542de();
    /* 00489c1e: mov esp, ebp */ r_esp = r_ebp;
    /* 00489c20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489c21: ret 4 */ FN_RET(0x00489b2e); r_esp += 8; return;
}

void f_00489c24(void) /* FUN_00489c24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489c24);
    /* 00489c24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489c25: mov ebp, esp */ r_ebp = r_esp;
    /* 00489c27: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489c2a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00489c2d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489c30: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489c33: call 0x453c16 */ r_esp -= 4; W32(r_esp, 0x489c38u); f_00453c16();
    /* 00489c38: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00489c3b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489c3e: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00489c41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489c42: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489c45: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489c48: call 0x453ccf */ r_esp -= 4; W32(r_esp, 0x489c4du); f_00453ccf();
    /* 00489c4d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489c50: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489c53: call 0x453c16 */ r_esp -= 4; W32(r_esp, 0x489c58u); f_00453c16();
    /* 00489c58: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489c5b: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 00489c61: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489c64: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489c6b: jne 0x489c83 */ if (!fZ) goto L_00489c83;
L_00489c6d:; BB(0x00489c6d);
    /* 00489c6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00489c6f: push 0x6f6ba0 */ { u32 v = 0x6f6ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 00489c74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00489c76: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489c7c: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x489c81u); f_00487680();
    /* 00489c81: jmp 0x489cd5 */ goto L_00489cd5;
L_00489c83:; BB(0x00489c83);
    /* 00489c83: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489c86: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489c8a: jne 0x489cb0 */ if (!fZ) goto L_00489cb0;
L_00489c8c:; BB(0x00489c8c);
    /* 00489c8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00489c8e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489c91: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00489c94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489c95: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489c98: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489c9b: call 0x453a6e */ r_esp -= 4; W32(r_esp, 0x489ca0u); f_00453a6e();
    /* 00489ca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489ca1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00489ca3: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489ca9: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x489caeu); f_00487680();
    /* 00489cae: jmp 0x489cd5 */ goto L_00489cd5;
L_00489cb0:; BB(0x00489cb0);
    /* 00489cb0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00489cb2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489cb5: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00489cb8: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00489cbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489cbc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489cbf: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489cc2: call 0x453a6e */ r_esp -= 4; W32(r_esp, 0x489cc7u); f_00453a6e();
    /* 00489cc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489cc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00489cca: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489cd0: call 0x487680 */ r_esp -= 4; W32(r_esp, 0x489cd5u); f_00487680();
L_00489cd5:; BB(0x00489cd5);
    /* 00489cd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00489cd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489cd8: ret  */ FN_RET(0x00489c24); r_esp += 4; return;
}

void f_00489cd9(void) /* FUN_00489cd9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489cd9);
    /* 00489cd9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489cda: mov ebp, esp */ r_ebp = r_esp;
    /* 00489cdc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489cdf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00489ce2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489ce5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00489ce8: mov dword ptr [eax + 0x88], ecx */ W32((u32)(r_eax+0x88u), r_ecx);
    /* 00489cee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489cf1: cmp dword ptr [edx + 0x64], 0 */ {  u32 a = R32((u32)(r_edx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489cf5: jne 0x489d36 */ if (!fZ) goto L_00489d36;
L_00489cf7:; BB(0x00489cf7);
    /* 00489cf7: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00489cf9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x489cfeu); f_0048ab58();
    /* 00489cfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489d01: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00489d04: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489d08: je 0x489d17 */ if (fZ) goto L_00489d17;
L_00489d0a:; BB(0x00489d0a);
    /* 00489d0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489d0d: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x489d12u); f_005e9d30();
    /* 00489d12: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00489d15: jmp 0x489d1e */ goto L_00489d1e;
L_00489d17:; BB(0x00489d17);
    /* 00489d17: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00489d1e:; BB(0x00489d1e);
    /* 00489d1e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489d21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00489d24: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 00489d27: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489d2a: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00489d2d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489d30: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00489d33: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
L_00489d36:; BB(0x00489d36);
    /* 00489d36: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00489d39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489d3a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489d3d: call 0x489e44 */ r_esp -= 4; W32(r_esp, 0x489d42u); f_00489e44();
    /* 00489d42: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489d45: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x489d4au); f_005d9883();
    /* 00489d4a: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00489d4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489d4e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489d51: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00489d54: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489d57: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00489d5a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00489d5c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x489d5fu); call_ind(t); }
    /* 00489d5f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00489d62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489d63: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00489d66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489d67: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489d6a: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 00489d6d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489d70: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 00489d73: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00489d75: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x489d78u); call_ind(t); }
    /* 00489d78: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489d7b: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00489d7e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489d81: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00489d84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00489d86: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x489d89u); call_ind(t); }
    /* 00489d89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489d8c: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00489d8f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489d92: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00489d95: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00489d97: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x489d9au); call_ind(t); }
    /* 00489d9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00489d9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489d9d: ret 0x10 */ FN_RET(0x00489cd9); r_esp += 20; return;
}

void f_00489da0(void) /* FUN_00489da0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489da0);
    /* 00489da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00489da3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489da4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00489da7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489daa: call 0x5e7110 */ r_esp -= 4; W32(r_esp, 0x489dafu); f_005e7110();
    /* 00489daf: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489db5: call 0x4879e9 */ r_esp -= 4; W32(r_esp, 0x489dbau); f_004879e9();
    /* 00489dba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489dbc: je 0x489dda */ if (fZ) goto L_00489dda;
L_00489dbe:; BB(0x00489dbe);
    /* 00489dbe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489dc1: cmp dword ptr [eax + 0x64], 0 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489dc5: je 0x489dd8 */ if (fZ) goto L_00489dd8;
L_00489dc7:; BB(0x00489dc7);
    /* 00489dc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489dca: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00489dcd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489dd0: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00489dd3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00489dd5: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x489dd8u); call_ind(t); }
L_00489dd8:; BB(0x00489dd8);
    /* 00489dd8: jmp 0x489dee */ goto L_00489dee;
L_00489dda:; BB(0x00489dda);
    /* 00489dda: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489ddd: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489de1: je 0x489dee */ if (fZ) goto L_00489dee;
L_00489de3:; BB(0x00489de3);
    /* 00489de3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489de6: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 00489de9: call 0x4542de */ r_esp -= 4; W32(r_esp, 0x489deeu); f_004542de();
L_00489dee:; BB(0x00489dee);
    /* 00489dee: mov esp, ebp */ r_esp = r_ebp;
    /* 00489df0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489df1: ret  */ FN_RET(0x00489da0); r_esp += 4; return;
}

