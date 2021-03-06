#include "classifier.h"

/* Autogenerated code from the script config2c.pl */

static const char *oons_residue_name[] = {"ACE", "ANY", "ARG", "ASN", "ASP", "ASX", "CSE", "CYS", "GLN", "GLU", "GLX", "HIS", "HOH", "ILE", "LEU", "LYS", "MET", "NH2", "PHE", "PRO", "PYL", "SEC", "SER", "THR", "TRP", "TYR", "VAL", };
static const char *oons_ACE_atom_name[] = {"CH3", };
static double oons_ACE_atom_radius[] = {2.00, };
static int oons_ACE_atom_class[] = {FREESASA_ATOM_APOLAR, };
static struct classifier_residue oons_ACE_cfg = {
    1,
 "ACE",
    (char**) oons_ACE_atom_name,
    (double*) oons_ACE_atom_radius,
    (freesasa_atom_class*) oons_ACE_atom_class,
 {NULL, 0, 0, 0, 0, 0},
};

static const char *oons_ANY_atom_name[] = {"C8", "C2'", "C2", "C4'", "O6", "N", "N1", "P", "O2", "O2'", "C7", "O", "O4", "O4'", "OP3", "C5'", "N6", "N4", "O3'", "C6", "CA", "C3'", "CM2", "OXT", "C4", "OP2", "C1'", "N9", "CB", "N2", "C", "O5'", "N7", "OP1", "C5", "N3", };
static double oons_ANY_atom_radius[] = {1.75, 1.75, 1.75, 1.75, 1.40, 1.55, 1.55, 1.80, 1.40, 1.40, 1.75, 1.40, 1.40, 1.40, 1.40, 2.00, 1.55, 1.55, 1.40, 1.75, 2.00, 1.75, 2.00, 1.40, 1.75, 1.40, 1.75, 1.55, 2.00, 1.55, 1.55, 1.40, 1.55, 1.40, 1.75, 1.55, };
static int oons_ANY_atom_class[] = {FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_ANY_cfg = {
    36,
 "ANY",
    (char**) oons_ANY_atom_name,
    (double*) oons_ANY_atom_radius,
    (freesasa_atom_class*) oons_ANY_atom_class,
 {NULL, 0, 0, 0, 0, 0},
};

static const char *oons_ARG_atom_name[] = {"NH1", "CD", "CZ", "NE", "NH2", "CG", };
static double oons_ARG_atom_radius[] = {1.55, 2.00, 2.00, 1.55, 1.55, 2.00, };
static int oons_ARG_atom_class[] = {FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, };
static struct classifier_residue oons_ARG_cfg = {
    6,
 "ARG",
    (char**) oons_ARG_atom_name,
    (double*) oons_ARG_atom_radius,
    (freesasa_atom_class*) oons_ARG_atom_class,
 {"ARG", 235.30, 38.31, 196.99, 125.27, 110.03, 0},
};

static const char *oons_ASN_atom_name[] = {"CG", "ND2", "OD1", };
static double oons_ASN_atom_radius[] = {1.55, 1.55, 1.40, };
static int oons_ASN_atom_class[] = {FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_ASN_cfg = {
    3,
 "ASN",
    (char**) oons_ASN_atom_name,
    (double*) oons_ASN_atom_radius,
    (freesasa_atom_class*) oons_ASN_atom_class,
 {"ASN", 143.47, 38.26, 105.21, 97.51, 45.97, 0},
};

static const char *oons_ASP_atom_name[] = {"OD2", "OD1", "CG", };
static double oons_ASP_atom_radius[] = {1.40, 1.40, 1.55, };
static int oons_ASP_atom_class[] = {FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_ASP_cfg = {
    3,
 "ASP",
    (char**) oons_ASP_atom_name,
    (double*) oons_ASP_atom_radius,
    (freesasa_atom_class*) oons_ASP_atom_class,
 {"ASP", 141.20, 38.87, 102.33, 95.17, 46.03, 0},
};

static const char *oons_ASX_atom_name[] = {"AD2", "XD2", "AD1", "XD1", "CG", };
static double oons_ASX_atom_radius[] = {1.5, 1.5, 1.5, 1.5, 1.55, };
static int oons_ASX_atom_class[] = {FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_ASX_cfg = {
    5,
 "ASX",
    (char**) oons_ASX_atom_name,
    (double*) oons_ASX_atom_radius,
    (freesasa_atom_class*) oons_ASX_atom_class,
 {NULL, 0, 0, 0, 0, 0},
};

static const char *oons_CSE_atom_name[] = {"SE", };
static double oons_CSE_atom_radius[] = {1.90, };
static int oons_CSE_atom_class[] = {FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_CSE_cfg = {
    1,
 "CSE",
    (char**) oons_CSE_atom_name,
    (double*) oons_CSE_atom_radius,
    (freesasa_atom_class*) oons_CSE_atom_class,
 {NULL, 0, 0, 0, 0, 0},
};

static const char *oons_CYS_atom_name[] = {"SG", };
static double oons_CYS_atom_radius[] = {2.00, };
static int oons_CYS_atom_class[] = {FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_CYS_cfg = {
    1,
 "CYS",
    (char**) oons_CYS_atom_name,
    (double*) oons_CYS_atom_radius,
    (freesasa_atom_class*) oons_CYS_atom_class,
 {"CYS", 140.29, 38.44, 101.85, 98.30, 41.99, 0},
};

static const char *oons_GLN_atom_name[] = {"OE1", "CD", "NE2", "CG", };
static double oons_GLN_atom_radius[] = {1.40, 1.55, 1.55, 2.00, };
static int oons_GLN_atom_class[] = {FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, };
static struct classifier_residue oons_GLN_cfg = {
    4,
 "GLN",
    (char**) oons_GLN_atom_name,
    (double*) oons_GLN_atom_radius,
    (freesasa_atom_class*) oons_GLN_atom_class,
 {"GLN", 176.23, 38.31, 137.92, 122.17, 54.06, 0},
};

static const char *oons_GLU_atom_name[] = {"OE1", "CD", "OE2", "CG", };
static double oons_GLU_atom_radius[] = {1.40, 1.55, 1.40, 2.00, };
static int oons_GLU_atom_class[] = {FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, };
static struct classifier_residue oons_GLU_cfg = {
    4,
 "GLU",
    (char**) oons_GLU_atom_name,
    (double*) oons_GLU_atom_radius,
    (freesasa_atom_class*) oons_GLU_atom_class,
 {"GLU", 172.43, 38.31, 134.11, 115.92, 56.51, 0},
};

static const char *oons_GLX_atom_name[] = {"XE2", "CD", "AE1", "AE2", "CG", "XE1", };
static double oons_GLX_atom_radius[] = {1.5, 1.55, 1.5, 1.5, 2.00, 1.5, };
static int oons_GLX_atom_class[] = {FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_GLX_cfg = {
    6,
 "GLX",
    (char**) oons_GLX_atom_name,
    (double*) oons_GLX_atom_radius,
    (freesasa_atom_class*) oons_GLX_atom_class,
 {NULL, 0, 0, 0, 0, 0},
};

static const char *oons_HIS_atom_name[] = {"CG", "ND1", "CD2", "CE1", "NE2", };
static double oons_HIS_atom_radius[] = {1.75, 1.55, 1.75, 1.75, 1.55, };
static int oons_HIS_atom_class[] = {FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_HIS_cfg = {
    5,
 "HIS",
    (char**) oons_HIS_atom_name,
    (double*) oons_HIS_atom_radius,
    (freesasa_atom_class*) oons_HIS_atom_class,
 {"HIS", 180.78, 36.04, 144.74, 73.26, 107.52, 0},
};

static const char *oons_HOH_atom_name[] = {"O", };
static double oons_HOH_atom_radius[] = {1.40, };
static int oons_HOH_atom_class[] = {FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_HOH_cfg = {
    1,
 "HOH",
    (char**) oons_HOH_atom_name,
    (double*) oons_HOH_atom_radius,
    (freesasa_atom_class*) oons_HOH_atom_class,
 {NULL, 0, 0, 0, 0, 0},
};

static const char *oons_ILE_atom_name[] = {"CG2", "CG1", "CD1", };
static double oons_ILE_atom_radius[] = {2.00, 2.00, 2.00, };
static int oons_ILE_atom_class[] = {FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, };
static struct classifier_residue oons_ILE_cfg = {
    3,
 "ILE",
    (char**) oons_ILE_atom_name,
    (double*) oons_ILE_atom_radius,
    (freesasa_atom_class*) oons_ILE_atom_class,
 {"ILE", 182.12, 37.96, 144.16, 31.67, 150.45, 0},
};

static const char *oons_LEU_atom_name[] = {"CD1", "CG", "CD2", };
static double oons_LEU_atom_radius[] = {2.00, 2.00, 2.00, };
static int oons_LEU_atom_class[] = {FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, };
static struct classifier_residue oons_LEU_cfg = {
    3,
 "LEU",
    (char**) oons_LEU_atom_name,
    (double*) oons_LEU_atom_radius,
    (freesasa_atom_class*) oons_LEU_atom_class,
 {"LEU", 185.43, 35.34, 150.08, 31.73, 153.69, 0},
};

static const char *oons_LYS_atom_name[] = {"CE", "CG", "CD", "NZ", };
static double oons_LYS_atom_radius[] = {2.00, 2.00, 2.00, 1.55, };
static int oons_LYS_atom_class[] = {FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_LYS_cfg = {
    4,
 "LYS",
    (char**) oons_LYS_atom_name,
    (double*) oons_LYS_atom_radius,
    (freesasa_atom_class*) oons_LYS_atom_class,
 {"LYS", 205.80, 38.31, 167.49, 78.02, 127.78, 0},
};

static const char *oons_MET_atom_name[] = {"SD", "CE", "CG", };
static double oons_MET_atom_radius[] = {2.00, 2.00, 2.00, };
static int oons_MET_atom_class[] = {FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, };
static struct classifier_residue oons_MET_cfg = {
    3,
 "MET",
    (char**) oons_MET_atom_name,
    (double*) oons_MET_atom_radius,
    (freesasa_atom_class*) oons_MET_atom_class,
 {"MET", 201.66, 38.31, 163.35, 78.68, 122.98, 0},
};

static const char *oons_NH2_atom_name[] = {"NH2", };
static double oons_NH2_atom_radius[] = {1.55, };
static int oons_NH2_atom_class[] = {FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_NH2_cfg = {
    1,
 "NH2",
    (char**) oons_NH2_atom_name,
    (double*) oons_NH2_atom_radius,
    (freesasa_atom_class*) oons_NH2_atom_class,
 {NULL, 0, 0, 0, 0, 0},
};

static const char *oons_PHE_atom_name[] = {"CG", "CD1", "CE2", "CZ", "CD2", "CE1", };
static double oons_PHE_atom_radius[] = {1.75, 1.75, 1.75, 1.75, 1.75, 1.75, };
static int oons_PHE_atom_class[] = {FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, };
static struct classifier_residue oons_PHE_cfg = {
    6,
 "PHE",
    (char**) oons_PHE_atom_name,
    (double*) oons_PHE_atom_radius,
    (freesasa_atom_class*) oons_PHE_atom_class,
 {"PHE", 199.28, 35.20, 164.08, 30.08, 169.20, 0},
};

static const char *oons_PRO_atom_name[] = {"CB", "CD", "CG", };
static double oons_PRO_atom_radius[] = {1.75, 1.75, 1.75, };
static int oons_PRO_atom_class[] = {FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, };
static struct classifier_residue oons_PRO_cfg = {
    3,
 "PRO",
    (char**) oons_PRO_atom_name,
    (double*) oons_PRO_atom_radius,
    (freesasa_atom_class*) oons_PRO_atom_class,
 {"PRO", 128.18, 31.08, 97.10, 13.95, 114.23, 0},
};

static const char *oons_PYL_atom_name[] = {"CD2", "CG2", "CB2", "CD", "CA2", "CE2", "O2", "N2", "NZ", "C2", "CG", "CE", };
static double oons_PYL_atom_radius[] = {1.75, 1.75, 2.00, 2.00, 1.75, 1.75, 1.40, 1.55, 1.55, 1.55, 2.00, 2.00, };
static int oons_PYL_atom_class[] = {FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, };
static struct classifier_residue oons_PYL_cfg = {
    12,
 "PYL",
    (char**) oons_PYL_atom_name,
    (double*) oons_PYL_atom_radius,
    (freesasa_atom_class*) oons_PYL_atom_class,
 {NULL, 0, 0, 0, 0, 0},
};

static const char *oons_SEC_atom_name[] = {"SE", };
static double oons_SEC_atom_radius[] = {1.90, };
static int oons_SEC_atom_class[] = {FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_SEC_cfg = {
    1,
 "SEC",
    (char**) oons_SEC_atom_name,
    (double*) oons_SEC_atom_radius,
    (freesasa_atom_class*) oons_SEC_atom_class,
 {NULL, 0, 0, 0, 0, 0},
};

static const char *oons_SER_atom_name[] = {"OG", };
static double oons_SER_atom_radius[] = {1.40, };
static int oons_SER_atom_class[] = {FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_SER_cfg = {
    1,
 "SER",
    (char**) oons_SER_atom_name,
    (double*) oons_SER_atom_radius,
    (freesasa_atom_class*) oons_SER_atom_class,
 {"SER", 118.43, 40.20, 78.23, 60.41, 58.02, 0},
};

static const char *oons_THR_atom_name[] = {"CG2", "OG1", };
static double oons_THR_atom_radius[] = {2.00, 1.40, };
static int oons_THR_atom_class[] = {FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, };
static struct classifier_residue oons_THR_cfg = {
    2,
 "THR",
    (char**) oons_THR_atom_name,
    (double*) oons_THR_atom_radius,
    (freesasa_atom_class*) oons_THR_atom_class,
 {"THR", 142.41, 38.32, 104.08, 56.42, 85.99, 0},
};

static const char *oons_TRP_atom_name[] = {"NE1", "CH2", "CG", "CZ2", "CE3", "CD2", "CE2", "CD1", "CZ3", };
static double oons_TRP_atom_radius[] = {1.55, 1.75, 1.75, 1.75, 1.75, 1.75, 1.75, 1.75, 1.75, };
static int oons_TRP_atom_class[] = {FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, };
static struct classifier_residue oons_TRP_cfg = {
    9,
 "TRP",
    (char**) oons_TRP_atom_name,
    (double*) oons_TRP_atom_radius,
    (freesasa_atom_class*) oons_TRP_atom_class,
 {"TRP", 247.08, 39.43, 207.65, 52.90, 194.18, 0},
};

static const char *oons_TYR_atom_name[] = {"CZ", "CE1", "CD2", "OH", "CG", "CD1", "CE2", };
static double oons_TYR_atom_radius[] = {1.75, 1.75, 1.75, 1.40, 1.75, 1.75, 1.75, };
static int oons_TYR_atom_class[] = {FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_POLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, };
static struct classifier_residue oons_TYR_cfg = {
    7,
 "TYR",
    (char**) oons_TYR_atom_name,
    (double*) oons_TYR_atom_radius,
    (freesasa_atom_class*) oons_TYR_atom_class,
 {"TYR", 212.31, 35.20, 177.11, 72.41, 139.90, 0},
};

static const char *oons_VAL_atom_name[] = {"CG2", "CG1", };
static double oons_VAL_atom_radius[] = {2.00, 2.00, };
static int oons_VAL_atom_class[] = {FREESASA_ATOM_APOLAR, FREESASA_ATOM_APOLAR, };
static struct classifier_residue oons_VAL_cfg = {
    2,
 "VAL",
    (char**) oons_VAL_atom_name,
    (double*) oons_VAL_atom_radius,
    (freesasa_atom_class*) oons_VAL_atom_class,
 {"VAL", 157.64, 37.96, 119.68, 31.70, 125.94, 0},
};

static struct classifier_residue *oons_residue_cfg[] = {
    &oons_ACE_cfg, &oons_ANY_cfg, &oons_ARG_cfg, &oons_ASN_cfg, &oons_ASP_cfg, &oons_ASX_cfg, &oons_CSE_cfg, &oons_CYS_cfg, &oons_GLN_cfg, &oons_GLU_cfg, &oons_GLX_cfg, &oons_HIS_cfg, &oons_HOH_cfg, &oons_ILE_cfg, &oons_LEU_cfg, &oons_LYS_cfg, &oons_MET_cfg, &oons_NH2_cfg, &oons_PHE_cfg, &oons_PRO_cfg, &oons_PYL_cfg, &oons_SEC_cfg, &oons_SER_cfg, &oons_THR_cfg, &oons_TRP_cfg, &oons_TYR_cfg, &oons_VAL_cfg, };

const freesasa_classifier freesasa_oons_classifier = {
    27,    (char**) oons_residue_name,
    "OONS",
    (struct classifier_residue **) oons_residue_cfg,
};

