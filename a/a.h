/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_a__
#define __USER_CODE_H_a__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void a_startup();

void a_PI_clock();

void a_PI_BA(const asn1SccBase_samples_RigidBodyState *);

void a_PI_XA(const asn1SccBase_samples_RigidBodyState *);

extern void a_RI_AB(const asn1SccBase_samples_RigidBodyState *);

extern void a_RI_AX(const asn1SccBase_samples_RigidBodyState *);

#ifdef __cplusplus
}
#endif


#endif
