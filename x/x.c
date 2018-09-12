/* User code: This file will not be overwritten by TASTE. */

#include "x.h"
#include <stdio.h>

void x_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
    printf("X!\n");
}

void x_PI_AX(const asn1SccT_Int32 *IN_cnt)
{
    /* Write your code here! */
    asn1SccT_Int32 cnt = *IN_cnt;
    cnt++;
    printf("X -> B: %i\n", cnt);
    x_RI_XB(&cnt);
}

void x_PI_BX(const asn1SccT_Int32 *IN_cnt)
{
    /* Write your code here! */
    asn1SccT_Int32 cnt = *IN_cnt;
    cnt++;
    printf("X -> A: %i\n", cnt);
    x_RI_XA(&cnt);
}

