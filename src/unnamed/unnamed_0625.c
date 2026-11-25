#include "protos.h"

void f_006257c0(void) /* _strncmp */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006257c0);
    /* 006257c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006257c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006257c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006257c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006257c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006257c6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006257c9: jecxz 0x6257f1 */ if (r_ecx == 0) goto L_006257f1;
L_006257cb:; BB(0x006257cb);
    /* 006257cb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006257cd: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 006257d0: mov esi, edi */ r_esi = r_edi;
    /* 006257d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006257d4: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); r_edi += rt_df ? -1 : 1; r_ecx--; if (a == b) break; }
    /* 006257d6: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006257d8: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006257da: mov edi, esi */ r_edi = r_esi;
    /* 006257dc: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 006257df: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;  } r_ecx--; if (fZ) break; }
    /* 006257e1: mov al, byte ptr [esi - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0xffffffffu))) & 0xffu);
    /* 006257e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006257e6: cmp al, byte ptr [edi - 1] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edi+0xffffffffu)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006257e9: ja 0x6257ef */ if ((!fC&&!fZ)) goto L_006257ef;
L_006257eb:; BB(0x006257eb);
    /* 006257eb: je 0x6257f1 */ if (fZ) goto L_006257f1;
L_006257ed:; BB(0x006257ed);
    /* 006257ed: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006257ee: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_006257ef:; BB(0x006257ef);
    /* 006257ef: not ecx */ r_ecx = ~r_ecx;
L_006257f1:; BB(0x006257f1);
    /* 006257f1: mov eax, ecx */ r_eax = r_ecx;
    /* 006257f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006257f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006257f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006257f6: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 006257f7: ret  */ FN_RET(0x006257c0); r_esp += 4; return;
}

