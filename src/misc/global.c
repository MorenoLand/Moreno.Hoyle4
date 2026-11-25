#include "protos.h"

void f_0062b5c0(void) /* __global_unwind2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b5c0);
    /* 0062b5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b5c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b5c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b5c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b5c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b5c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b5c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b5c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b5cb: push 0x62b5d8 */ { u32 v = 0x62b5d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b5d0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062b5d3: call 0x6325a0 */ r_esp -= 4; W32(r_esp, 0x62b5d8u); f_006325a0();
    /* 0062b5d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b5d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062b5da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b5db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062b5dc: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b5de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b5df: ret  */ FN_RET(0x0062b5c0); r_esp += 4; return;
}

