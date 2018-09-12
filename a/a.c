/* User code: This file will not be overwritten by TASTE. */

#include "a.h"
#include <stdio.h>

void a_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
    printf("A!\n");
}

void a_PI_clock()
{
    printf("A -> B: 0\n");
    /* Write your code here! */
    asn1SccT_Int32 cnt = 0;
    a_RI_AB(&cnt);
}

void a_PI_BA(const asn1SccT_Int32 *IN_cnt)
{
    /* Write your code here! */
    printf("B -> A: %i\n", *IN_cnt);
}

void a_PI_XA(const asn1SccT_Int32 *IN_cnt)
{
    /* Write your code here! */
    printf("X -> A: %i\n", *IN_cnt);
}

