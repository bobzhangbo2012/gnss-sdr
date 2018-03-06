/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#include "GANSSNavModel.h"

static int
memb_nonBroadcastIndFlag_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_toeMSB_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_eMSB_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sqrtAMBS_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_nonBroadcastIndFlag_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..1) */,
	-1};
static asn_per_constraints_t asn_PER_memb_nonBroadcastIndFlag_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_toeMSB_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_toeMSB_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_eMSB_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..127) */,
	-1};
static asn_per_constraints_t asn_PER_memb_eMSB_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sqrtAMBS_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (0..63) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sqrtAMBS_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_GANSSNavModel_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSNavModel, nonBroadcastIndFlag),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_nonBroadcastIndFlag_constr_2, &asn_PER_memb_nonBroadcastIndFlag_constr_2,  memb_nonBroadcastIndFlag_constraint_1 },
		0, 0, /* No default value */
		"nonBroadcastIndFlag"
		},
	{ ATF_POINTER, 3, offsetof(struct GANSSNavModel, toeMSB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_toeMSB_constr_3, &asn_PER_memb_toeMSB_constr_3,  memb_toeMSB_constraint_1 },
		0, 0, /* No default value */
		"toeMSB"
		},
	{ ATF_POINTER, 2, offsetof(struct GANSSNavModel, eMSB),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_eMSB_constr_4, &asn_PER_memb_eMSB_constr_4,  memb_eMSB_constraint_1 },
		0, 0, /* No default value */
		"eMSB"
		},
	{ ATF_POINTER, 1, offsetof(struct GANSSNavModel, sqrtAMBS),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sqrtAMBS_constr_5, &asn_PER_memb_sqrtAMBS_constr_5,  memb_sqrtAMBS_constraint_1 },
		0, 0, /* No default value */
		"sqrtAMBS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSNavModel, ganssSatelliteList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SeqOfGANSSSatelliteElement,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ganssSatelliteList"
		},
};
static const int asn_MAP_GANSSNavModel_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_GANSSNavModel_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GANSSNavModel_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nonBroadcastIndFlag */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* toeMSB */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* eMSB */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sqrtAMBS */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ganssSatelliteList */
};
asn_SEQUENCE_specifics_t asn_SPC_GANSSNavModel_specs_1 = {
	sizeof(struct GANSSNavModel),
	offsetof(struct GANSSNavModel, _asn_ctx),
	asn_MAP_GANSSNavModel_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_GANSSNavModel_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GANSSNavModel = {
	"GANSSNavModel",
	"GANSSNavModel",
	&asn_OP_SEQUENCE,
	asn_DEF_GANSSNavModel_tags_1,
	sizeof(asn_DEF_GANSSNavModel_tags_1)
		/sizeof(asn_DEF_GANSSNavModel_tags_1[0]), /* 1 */
	asn_DEF_GANSSNavModel_tags_1,	/* Same as above */
	sizeof(asn_DEF_GANSSNavModel_tags_1)
		/sizeof(asn_DEF_GANSSNavModel_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GANSSNavModel_1,
	5,	/* Elements count */
	&asn_SPC_GANSSNavModel_specs_1	/* Additional specs */
};
