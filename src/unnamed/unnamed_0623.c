#include "protos.h"

void f_00623fe0(void) /* __fpmath */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00623fe0);
    /* 00623fe0: call 0x624010 */ r_esp -= 4; W32(r_esp, 0x623fe5u); f_00624010();
    /* 00623fe5: call 0x627220 */ r_esp -= 4; W32(r_esp, 0x623feau); f_00627220();
    /* 00623fea: mov dword ptr [0x711310], eax */ W32((u32)(0x711310u), r_eax);
    /* 00623fef: call 0x6271b0 */ r_esp -= 4; W32(r_esp, 0x623ff4u); f_006271b0();
    /* 00623ff4: fnclex  */ ;
    /* 00623ff6: ret  */ FN_RET(0x00623fe0); r_esp += 4; return;
}

