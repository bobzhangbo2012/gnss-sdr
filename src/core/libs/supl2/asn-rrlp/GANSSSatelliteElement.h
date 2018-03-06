/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _GANSSSatelliteElement_H_
#define _GANSSSatelliteElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SVID.h"
#include <NativeInteger.h>
#include "GANSSClockModel.h"
#include "GANSSOrbitModel.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* GANSSSatelliteElement */
    typedef struct GANSSSatelliteElement
    {
        SVID_t svID;
        long svHealth;
        long iod;
        GANSSClockModel_t ganssClockModel;
        GANSSOrbitModel_t ganssOrbitModel;
        /*
	 * This type is extensible,
	 * possible extensions are below.
	 */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GANSSSatelliteElement_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GANSSSatelliteElement;
    extern asn_SEQUENCE_specifics_t asn_SPC_GANSSSatelliteElement_specs_1;
    extern asn_TYPE_member_t asn_MBR_GANSSSatelliteElement_1[5];

#ifdef __cplusplus
}
#endif

#endif /* _GANSSSatelliteElement_H_ */
#include <asn_internal.h>