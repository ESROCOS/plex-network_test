/* User code: This file will not be overwritten by TASTE. */

#include "a.h"
#include <stdio.h>
#include <time.h>
#include <string.h>

void a_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
    printf("A!\n");
}

void init_rbs(asn1SccBase_samples_RigidBodyState *rbs)
{
   memset(rbs, 0, sizeof(asn1SccBase_samples_RigidBodyState));
   rbs->position.data.nCount = 3;
   rbs->cov_position.data.nCount = 9;
   rbs->orientation.im.nCount = 3;
   rbs->cov_orientation.data.nCount = 9;
   rbs->velocity.data.nCount = 3;
   rbs->cov_velocity.data.nCount = 9;
   rbs->angular_velocity.data.nCount = 3;
   rbs->cov_angular_velocity.data.nCount = 9;
}

void a_PI_clock()
{
    /* Write your code here! */
    int i;
    asn1SccBase_samples_RigidBodyState rbs;
    struct timespec spec;

    init_rbs(&rbs);
    for (i = 0; i < 3; ++i)
	rbs.position.data.arr[i] = i;
    clock_gettime(CLOCK_REALTIME, &spec);
    rbs.time.microseconds = spec.tv_nsec / 1000 + spec.tv_sec * 1000000;
    printf("A: Emit rbs at %llu\n", rbs.time.microseconds);
    a_RI_AB(&rbs);
    a_RI_AX(&rbs);
}

void print_rbs(const asn1SccBase_samples_RigidBodyState *rbs)
{
    int i;
    printf("A: ");
    for (i = 0; i < rbs->position.data.nCount; ++i)
	printf("%i: %f ", i, rbs->position.data.arr[i]);
    printf("\n");
}

void a_PI_BA(const asn1SccBase_samples_RigidBodyState *IN_rbs)
{
    /* Write your code here! */
    print_rbs(IN_rbs);
}

void a_PI_XA(const asn1SccBase_samples_RigidBodyState *IN_rbs)
{
    /* Write your code here! */
    print_rbs(IN_rbs);
}

