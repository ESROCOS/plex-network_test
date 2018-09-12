/* User code: This file will not be overwritten by TASTE. */

#include "b.h"
#include <stdio.h>

void b_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
    printf("B!\n");
}

void b_PI_AB(const asn1SccT_Int32 *IN_cnt)
{
    /* Write your code here! */
    asn1SccT_Int32 cnt = *IN_cnt;
    cnt++;
    printf("B -> X: %i\n", cnt);
    b_RI_BX(&cnt);
}

void b_PI_XB(const asn1SccT_Int32 *IN_cnt)
{
    /* Write your code here! */
    asn1SccT_Int32 cnt = *IN_cnt;
    cnt++;
    printf("B -> A: %i\n", cnt);
    b_RI_BA(&cnt);
}

