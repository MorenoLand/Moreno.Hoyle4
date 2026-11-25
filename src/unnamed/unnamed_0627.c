#include "protos.h"

void f_006271b0(void) /* __setdefaultprecision */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006271b0);
    /* 006271b0: push 0x30000 */ { u32 v = 0x30000u; r_esp -= 4; W32(r_esp, v); }
    /* 006271b5: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 006271ba: call 0x62ebd0 */ r_esp -= 4; W32(r_esp, 0x6271bfu); f_0062ebd0();
    /* 006271bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006271c2: ret  */ FN_RET(0x006271b0); r_esp += 4; return;
}

