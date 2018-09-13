/* User code: This file will not be overwritten by TASTE. */

#include "b.h"
#include <stdio.h>

void b_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
    printf("B!\n");
}

void print_rbs(const asn1SccBase_samples_RigidBodyState *rbs)
{
    int i;
    printf("B: ");
    for (i = 0; i < rbs->position.data.nCount; ++i)
	printf("%i: %f ", i, rbs->position.data.arr[i]);
    printf("\n");
}

void inc_rbs(asn1SccBase_samples_RigidBodyState *rbs)
{
    int i;
    for (i = 0; i < rbs->position.data.nCount; ++i)
	rbs->position.data.arr[i] += 1.0;
}

void b_PI_AB(const asn1SccBase_samples_RigidBodyState *IN_rbs)
{
    /* Write your code here! */
    asn1SccBase_samples_RigidBodyState rbs = *IN_rbs;
    print_rbs(&rbs);
    inc_rbs(&rbs);
    print_rbs(&rbs);
    b_RI_BX(&rbs);
}

void b_PI_XB(const asn1SccBase_samples_RigidBodyState *IN_rbs)
{
    /* Write your code here! */
    asn1SccBase_samples_RigidBodyState rbs = *IN_rbs;
    print_rbs(&rbs);
    inc_rbs(&rbs);
    print_rbs(&rbs);
    b_RI_BA(&rbs);
}

