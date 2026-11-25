#include "protos.h"

void f_006318be(void) /* _abort */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006318be);
    /* 006318be: call 0x6322b0 */ r_esp -= 4; W32(r_esp, 0x6318c3u); f_006322b0();
    /* 006318c3: ret  */ FN_RET(0x006318be); r_esp += 4; return;
}

