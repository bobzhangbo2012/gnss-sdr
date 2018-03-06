/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#include "SgnTypeElement.h"

static int
memb_ganssStatusHealth_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_ganssStatusHealth_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..7) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ganssStatusHealth_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SgnTypeElement_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SgnTypeElement, ganssSignalID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GANSSSignalID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ganssSignalID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SgnTypeElement, ganssStatusHealth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ganssStatusHealth_constr_3, &asn_PER_memb_ganssStatusHealth_constr_3,  memb_ganssStatusHealth_constraint_1 },
		0, 0, /* No default value */
		"ganssStatusHealth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SgnTypeElement, dganssSgnList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SeqOfDGANSSSgnElement,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dganssSgnList"
		},
};
static const int asn_MAP_SgnTypeElement_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_SgnTypeElement_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SgnTypeElement_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ganssSignalID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ganssStatusHealth */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dganssSgnList */
};
asn_SEQUENCE_specifics_t asn_SPC_SgnTypeElement_specs_1 = {
	sizeof(struct SgnTypeElement),
	offsetof(struct SgnTypeElement, _asn_ctx),
	asn_MAP_SgnTypeElement_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SgnTypeElement_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SgnTypeElement = {
	"SgnTypeElement",
	"SgnTypeElement",
	&asn_OP_SEQUENCE,
	asn_DEF_SgnTypeElement_tags_1,
	sizeof(asn_DEF_SgnTypeElement_tags_1)
		/sizeof(asn_DEF_SgnTypeElement_tags_1[0]), /* 1 */
	asn_DEF_SgnTypeElement_tags_1,	/* Same as above */
	sizeof(asn_DEF_SgnTypeElement_tags_1)
		/sizeof(asn_DEF_SgnTypeElement_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SgnTypeElement_1,
	3,	/* Elements count */
	&asn_SPC_SgnTypeElement_specs_1	/* Additional specs */
};
