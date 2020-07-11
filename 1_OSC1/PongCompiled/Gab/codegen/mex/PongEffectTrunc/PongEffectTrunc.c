/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PongEffectTrunc.c
 *
 * Code generation for function 'PongEffectTrunc'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "PongEffectTrunc.h"
#include "PongEffectTrunc_emxutil.h"
#include "lusolve.h"
#include "qrsolve.h"
#include "PongEffectTrunc_mexutil.h"
#include "norm.h"
#include "eml_int_forloop_overflow_check.h"
#include "PongEffectTrunc_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 385, /* lineNo */
  5,                                   /* colNo */
  "id2Coord",                          /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 368,/* lineNo */
  5,                                   /* colNo */
  "coord2Id",                          /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRSInfo emlrtRSI = { 31,    /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 32,  /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 36,  /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 37,  /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 38,  /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 105, /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 148, /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 164, /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 169, /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 174, /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 179, /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 184, /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 189, /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 194, /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 199, /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 204, /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 289, /* lineNo */
  "RBFMatrix",                         /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 291, /* lineNo */
  "RBFMatrix",                         /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 294, /* lineNo */
  "RBFMatrix",                         /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 297,/* lineNo */
  "RBFMatrix",                         /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 49, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 94, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 19, /* lineNo */
  "checkAndSaturateExpandSize",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\checkAndSaturateExpandSize.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 384,/* lineNo */
  "id2Coord",                          /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 385,/* lineNo */
  "id2Coord",                          /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 45, /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 55, /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 35, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 64, /* lineNo */
  "fltpower",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 40, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 124,/* lineNo */
  "scalar_float_power",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 281,/* lineNo */
  "interpolate",                       /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 283,/* lineNo */
  "interpolate",                       /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 311,/* lineNo */
  "Bvector",                           /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 20, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 42, /* lineNo */
  "mldiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 44, /* lineNo */
  "mldiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 234,/* lineNo */
  "bestControl",                       /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 237,/* lineNo */
  "bestControl",                       /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 241,/* lineNo */
  "bestControl",                       /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 242,/* lineNo */
  "bestControl",                       /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 251,/* lineNo */
  "bestControl",                       /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 268,/* lineNo */
  "NodeValue",                         /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 54, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 23, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 88, /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 21, /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 101,/* lineNo */
  "cat_impl",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 368,/* lineNo */
  "coord2Id",                          /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 60,    /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 6, /* lineNo */
  53,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 92,/* lineNo */
  5,                                   /* colNo */
  "eye",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 289,/* lineNo */
  2,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 301,/* lineNo */
  9,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 301,/* lineNo */
  5,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 301,/* lineNo */
  1,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 289,/* lineNo */
  15,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 281,/* lineNo */
  1,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 435,/* lineNo */
  24,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 242,/* lineNo */
  9,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 234,/* lineNo */
  9,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 242,/* lineNo */
  10,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 265,/* lineNo */
  1,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 31,/* lineNo */
  4,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 32,/* lineNo */
  5,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  301,                                 /* lineNo */
  5,                                   /* colNo */
  "RBFMatrix",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 55,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 61,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 12,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  9,                                   /* colNo */
  "G",                                 /* aName */
  "RBFMatrix",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo cb_emlrtRTEI = { 16,/* lineNo */
  19,                                  /* colNo */
  "mldivide",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 281,   /* lineNo */
  1,                                   /* colNo */
  "interpolate",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 281, /* lineNo */
  1,                                   /* colNo */
  "interpolate",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  312,                                 /* lineNo */
  12,                                  /* colNo */
  "Q",                                 /* aName */
  "Bvector",                           /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 312, /* lineNo */
  12,                                  /* colNo */
  "Bvector",                           /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  312,                                 /* lineNo */
  12,                                  /* colNo */
  "Q",                                 /* aName */
  "Bvector",                           /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  7,                                   /* iLast */
  312,                                 /* lineNo */
  12,                                  /* colNo */
  "Q",                                 /* aName */
  "Bvector",                           /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  312,                                 /* lineNo */
  12,                                  /* colNo */
  "Q",                                 /* aName */
  "Bvector",                           /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  312,                                 /* lineNo */
  5,                                   /* colNo */
  "B",                                 /* aName */
  "Bvector",                           /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo fb_emlrtRTEI = { 427,/* lineNo */
  8,                                   /* colNo */
  "nearCenter",                        /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 428,/* lineNo */
  12,                                  /* colNo */
  "nearCenter",                        /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 282,/* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 84,/* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 89,/* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  76,                                  /* colNo */
  "list",                              /* aName */
  "bestControl",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  66,                                  /* colNo */
  "list",                              /* aName */
  "bestControl",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  56,                                  /* colNo */
  "list",                              /* aName */
  "bestControl",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  46,                                  /* colNo */
  "list",                              /* aName */
  "bestControl",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  36,                                  /* colNo */
  "list",                              /* aName */
  "bestControl",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 231, /* lineNo */
  8,                                   /* colNo */
  "bestControl",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  33,                                  /* colNo */
  "list",                              /* aName */
  "bestControl",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  43,                                  /* colNo */
  "list",                              /* aName */
  "bestControl",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  53,                                  /* colNo */
  "list",                              /* aName */
  "bestControl",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  63,                                  /* colNo */
  "list",                              /* aName */
  "bestControl",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  73,                                  /* colNo */
  "list",                              /* aName */
  "bestControl",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  47,                                  /* colNo */
  "w",                                 /* aName */
  "bestControl",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 252, /* lineNo */
  47,                                  /* colNo */
  "bestControl",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 265, /* lineNo */
  1,                                   /* colNo */
  "NodeValue",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 265, /* lineNo */
  1,                                   /* colNo */
  "NodeValue",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  270,                                 /* lineNo */
  5,                                   /* colNo */
  "rho",                               /* aName */
  "NodeValue",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { 2,   /* nDims */
  32,                                  /* lineNo */
  5,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { 1,   /* nDims */
  32,                                  /* lineNo */
  5,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m"/* pName */
};

static emlrtBCInfo s_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  93,                                  /* lineNo */
  16,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 93,  /* lineNo */
  16,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  93,                                  /* lineNo */
  16,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  93,                                  /* lineNo */
  39,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 93,  /* lineNo */
  39,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  93,                                  /* lineNo */
  39,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  138,                                 /* lineNo */
  12,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 138, /* lineNo */
  12,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  138,                                 /* lineNo */
  12,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  138,                                 /* lineNo */
  40,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 138, /* lineNo */
  40,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  138,                                 /* lineNo */
  40,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  162,                                 /* lineNo */
  31,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 162, /* lineNo */
  31,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  162,                                 /* lineNo */
  31,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  162,                                 /* lineNo */
  73,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 162, /* lineNo */
  73,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  162,                                 /* lineNo */
  73,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  162,                                 /* lineNo */
  98,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 162, /* lineNo */
  98,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  162,                                 /* lineNo */
  98,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  162,                                 /* lineNo */
  9,                                   /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 162, /* lineNo */
  9,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  162,                                 /* lineNo */
  9,                                   /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  167,                                 /* lineNo */
  31,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 167, /* lineNo */
  31,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  167,                                 /* lineNo */
  31,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  167,                                 /* lineNo */
  73,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 167, /* lineNo */
  73,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  167,                                 /* lineNo */
  73,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  167,                                 /* lineNo */
  101,                                 /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 167, /* lineNo */
  101,                                 /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  167,                                 /* lineNo */
  101,                                 /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  167,                                 /* lineNo */
  9,                                   /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 167, /* lineNo */
  9,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  167,                                 /* lineNo */
  9,                                   /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  172,                                 /* lineNo */
  31,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 172, /* lineNo */
  31,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  172,                                 /* lineNo */
  31,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  172,                                 /* lineNo */
  73,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 172, /* lineNo */
  73,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  172,                                 /* lineNo */
  73,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  172,                                 /* lineNo */
  100,                                 /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 172, /* lineNo */
  100,                                 /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  172,                                 /* lineNo */
  100,                                 /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  172,                                 /* lineNo */
  9,                                   /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 172, /* lineNo */
  9,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  172,                                 /* lineNo */
  9,                                   /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  177,                                 /* lineNo */
  34,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 177, /* lineNo */
  34,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  177,                                 /* lineNo */
  34,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  177,                                 /* lineNo */
  79,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 177, /* lineNo */
  79,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  177,                                 /* lineNo */
  79,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  177,                                 /* lineNo */
  104,                                 /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 177,/* lineNo */
  104,                                 /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  177,                                 /* lineNo */
  104,                                 /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  177,                                 /* lineNo */
  9,                                   /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 177,/* lineNo */
  9,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  177,                                 /* lineNo */
  9,                                   /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  182,                                 /* lineNo */
  34,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 182,/* lineNo */
  34,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  182,                                 /* lineNo */
  34,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  182,                                 /* lineNo */
  79,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 182,/* lineNo */
  79,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  182,                                 /* lineNo */
  79,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  182,                                 /* lineNo */
  107,                                 /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 182,/* lineNo */
  107,                                 /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  182,                                 /* lineNo */
  107,                                 /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  182,                                 /* lineNo */
  9,                                   /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 182,/* lineNo */
  9,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  182,                                 /* lineNo */
  9,                                   /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  187,                                 /* lineNo */
  34,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 187,/* lineNo */
  34,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  187,                                 /* lineNo */
  34,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  187,                                 /* lineNo */
  79,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 187,/* lineNo */
  79,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  187,                                 /* lineNo */
  79,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  187,                                 /* lineNo */
  106,                                 /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 187,/* lineNo */
  106,                                 /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  187,                                 /* lineNo */
  106,                                 /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  187,                                 /* lineNo */
  9,                                   /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 187,/* lineNo */
  9,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  187,                                 /* lineNo */
  9,                                   /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  192,                                 /* lineNo */
  33,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 192,/* lineNo */
  33,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  192,                                 /* lineNo */
  33,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  192,                                 /* lineNo */
  77,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 192,/* lineNo */
  77,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  192,                                 /* lineNo */
  77,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  192,                                 /* lineNo */
  102,                                 /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 192,/* lineNo */
  102,                                 /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  192,                                 /* lineNo */
  102,                                 /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  192,                                 /* lineNo */
  9,                                   /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 192,/* lineNo */
  9,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  192,                                 /* lineNo */
  9,                                   /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  197,                                 /* lineNo */
  33,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 197,/* lineNo */
  33,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  197,                                 /* lineNo */
  33,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  197,                                 /* lineNo */
  77,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 197,/* lineNo */
  77,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  197,                                 /* lineNo */
  77,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  197,                                 /* lineNo */
  105,                                 /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 197,/* lineNo */
  105,                                 /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  197,                                 /* lineNo */
  105,                                 /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  197,                                 /* lineNo */
  9,                                   /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 197,/* lineNo */
  9,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  197,                                 /* lineNo */
  9,                                   /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  202,                                 /* lineNo */
  33,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 202,/* lineNo */
  33,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  202,                                 /* lineNo */
  33,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  202,                                 /* lineNo */
  77,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 202,/* lineNo */
  77,                                  /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  202,                                 /* lineNo */
  77,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  202,                                 /* lineNo */
  104,                                 /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 202,/* lineNo */
  104,                                 /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  202,                                 /* lineNo */
  104,                                 /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  202,                                 /* lineNo */
  9,                                   /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 202,/* lineNo */
  9,                                   /* colNo */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  202,                                 /* lineNo */
  9,                                   /* colNo */
  "Qdown",                             /* aName */
  "PongEffectTrunc",                   /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongCompiled\\Gab\\PongEffectTrunc.m",/* pName */
  3                                    /* checkKind */
};

static emlrtRSInfo fe_emlrtRSI = { 60, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

/* Function Declarations */
static void NodeValue(const emlrtStack *sp, const real_T state[5],
                      emxArray_real_T *rho);
static void RBFMatrix(const emlrtStack *sp, emxArray_real_T *G);
static real_T bestControl(const emlrtStack *sp, const real_T state[5], const
  real_T Wdown_data[], const int32_T Wdown_size[1], const real_T Wstill_data[],
  const int32_T Wstill_size[1], const real_T Wup_data[], const int32_T Wup_size
  [1], real_T mode);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static void id2Coord(const emlrtStack *sp, real_T id, real_T *i1, real_T *i2,
                     real_T *i3, real_T *i4, real_T *i5);
static void interpolate(const emlrtStack *sp, const emxArray_real_T *G, const
  real_T Q[504], real_T w_data[], int32_T w_size[1]);
static void state2index(real_T Xball, real_T Yball, real_T Ybarr, real_T VxBall,
  real_T VyBall, real_T *i1, real_T *i2, real_T *i3, real_T *i4, real_T *i5);

/* Function Definitions */
static void NodeValue(const emlrtStack *sp, const real_T state[5],
                      emxArray_real_T *rho)
{
  int32_T i19;
  real_T i1;
  int32_T loop_ub;
  int32_T i;
  real_T i2;
  real_T i3;
  real_T i4;
  real_T i5;
  real_T b_i1[5];
  int32_T i20;
  real_T z1[5];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Ritorna un vettore */
  i19 = rho->size[0];
  i1 = Ln * Hn * 7.0 * velSig * velSig;
  if (!(i1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(i1, &g_emlrtDCI, sp);
  }

  if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
    emlrtIntegerCheckR2012b(i1, &f_emlrtDCI, sp);
  }

  rho->size[0] = (int32_T)i1;
  emxEnsureCapacity_real_T(sp, rho, i19, &r_emlrtRTEI);
  if (!(i1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(i1, &g_emlrtDCI, sp);
  }

  if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
    emlrtIntegerCheckR2012b(i1, &f_emlrtDCI, sp);
  }

  loop_ub = (int32_T)i1;
  for (i19 = 0; i19 < loop_ub; i19++) {
    rho->data[i19] = 0.0;
  }

  i19 = (int32_T)i1;
  for (i = 0; i < i19; i++) {
    st.site = &rd_emlrtRSI;
    id2Coord(&st, 1.0 + (real_T)i, &i1, &i2, &i3, &i4, &i5);

    /* Trasformo l'ID, nelle sue coordinate */
    /*   %Xball center */
    /*   %Yball center */
    /*       %Ybarr center */
    /*      %VxBall center */
    /*       %VyBall center */
    b_i1[0] = i1 / Ln * L;
    b_i1[1] = i2 / Hn * H;
    b_i1[2] = i3 / 7.0 * V[6];
    b_i1[3] = i4 - 2.0;
    b_i1[4] = i5 - 2.0;
    for (loop_ub = 0; loop_ub < 5; loop_ub++) {
      i1 = b_i1[loop_ub] - state[loop_ub];
      b_i1[loop_ub] = i1;
      z1[loop_ub] = i1 * i1;
    }

    loop_ub = rho->size[0];
    i20 = 1 + i;
    if ((i20 < 1) || (i20 > loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(i20, 1, loop_ub, &r_emlrtBCI, sp);
    }

    rho->data[i20 - 1] = muDoubleScalarExp(-beta * ((((z1[0] + z1[1]) + z1[2]) +
      z1[3]) + z1[4]));

    /* le rho sono ordinate come la logica di centerId */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

static void RBFMatrix(const emlrtStack *sp, emxArray_real_T *G)
{
  emxArray_int8_T *b_I;
  real_T fullk;
  real_T b_fullk;
  int32_T m_tmp;
  int32_T i1;
  int32_T loop_ub;
  int32_T n;
  int32_T i;
  emxArray_real_T *b_G;
  real_T i2;
  real_T i3;
  real_T i4;
  real_T i5;
  real_T C1[5];
  int32_T c_G[2];
  int32_T b_i2;
  int32_T c_I[2];
  int32_T j;
  uint32_T b_j;
  real_T b_i1[5];
  real_T z1[5];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_int8_T(sp, &b_I, 2, &i_emlrtRTEI, true);
  st.site = &w_emlrtRSI;
  fullk = Ln * Hn * 7.0 * velSig * velSig;
  b_st.site = &bb_emlrtRSI;
  if (fullk < 0.0) {
    fullk = 0.0;
  }

  c_st.site = &db_emlrtRSI;
  if ((fullk != muDoubleScalarFloor(fullk)) || muDoubleScalarIsInf(fullk) ||
      (fullk > 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &y_emlrtRTEI,
      "Coder:MATLAB:NonIntegerInput", "Coder:MATLAB:NonIntegerInput", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }

  if (fullk <= 0.0) {
    b_fullk = 0.0;
  } else {
    b_fullk = fullk;
  }

  if (!(b_fullk <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ab_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      "Coder:MATLAB:pmaxsize", 0);
  }

  m_tmp = (int32_T)fullk;
  i1 = b_I->size[0] * b_I->size[1];
  b_I->size[0] = m_tmp;
  b_I->size[1] = m_tmp;
  emxEnsureCapacity_int8_T(&st, b_I, i1, &d_emlrtRTEI);
  loop_ub = m_tmp * m_tmp;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_I->data[i1] = 0;
  }

  if (m_tmp > 0) {
    b_st.site = &cb_emlrtRSI;
    if ((1 <= m_tmp) && (m_tmp > 2147483646)) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (loop_ub = 0; loop_ub < m_tmp; loop_ub++) {
      b_I->data[loop_ub + b_I->size[0] * loop_ub] = 1;
    }
  }

  i1 = G->size[0] * G->size[1];
  G->size[0] = b_I->size[0];
  G->size[1] = b_I->size[1];
  emxEnsureCapacity_real_T(sp, G, i1, &e_emlrtRTEI);
  loop_ub = b_I->size[0] * b_I->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    G->data[i1] = b_I->data[i1];
  }

  if ((b_I->size[0] == 0) || (b_I->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(b_I->size[0], b_I->size[1]);
  }

  for (i = 0; i <= n - 2; i++) {
    st.site = &x_emlrtRSI;
    id2Coord(&st, 1.0 + (real_T)i, &fullk, &i2, &i3, &i4, &i5);

    /*   %Xball center */
    /*   %Yball center */
    /*       %Ybarr center */
    /*      %VxBall center */
    /*       %VyBall center */
    C1[0] = fullk / Ln * L;
    C1[1] = i2 / Hn * H;
    C1[2] = i3 / 7.0 * V[6];
    C1[3] = i4 - 2.0;
    C1[4] = i5 - 2.0;
    if ((G->size[0] == 0) || (G->size[1] == 0)) {
      m_tmp = 0;
    } else {
      m_tmp = muIntScalarMax_sint32(G->size[0], G->size[1]);
    }

    i1 = m_tmp - i;
    for (j = 0; j <= i1 - 2; j++) {
      b_j = ((uint32_T)i + j) + 2U;
      st.site = &y_emlrtRSI;
      id2Coord(&st, b_j, &fullk, &i2, &i3, &i4, &i5);

      /*   %Xball center */
      /*   %Yball center */
      /*       %Ybarr center */
      /*      %VxBall center */
      /*       %VyBall center */
      /*          fprintf("C_%d,%d - C_%d,%d = (%d-%d)[(%d,%d)(%d,%d)]\n",i1,i2,j1,j2,i,j,C1(1),C1(2),C2(1),C2(2)); */
      b_i1[0] = fullk / Ln * L;
      b_i1[1] = i2 / Hn * H;
      b_i1[2] = i3 / 7.0 * V[6];
      b_i1[3] = i4 - 2.0;
      b_i1[4] = i5 - 2.0;
      for (loop_ub = 0; loop_ub < 5; loop_ub++) {
        fullk = C1[loop_ub] - b_i1[loop_ub];
        b_i1[loop_ub] = fullk;
        z1[loop_ub] = fullk * fullk;
      }

      fullk = (((z1[0] + z1[1]) + z1[2]) + z1[3]) + z1[4];
      st.site = &ab_emlrtRSI;
      b_st.site = &gb_emlrtRSI;
      c_st.site = &hb_emlrtRSI;
      d_st.site = &jb_emlrtRSI;
      e_st.site = &kb_emlrtRSI;
      f_st.site = &lb_emlrtRSI;
      if (fullk < 0.0) {
        emlrtErrorWithMessageIdR2018a(&f_st, &bb_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 4, "sqrt");
      }

      b_i2 = G->size[0];
      m_tmp = 1 + i;
      if ((m_tmp < 1) || (m_tmp > b_i2)) {
        emlrtDynamicBoundsCheckR2012b(m_tmp, 1, b_i2, &emlrtBCI, sp);
      }

      b_i2 = G->size[1];
      if (((int32_T)b_j < 1) || ((int32_T)b_j > b_i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, b_i2, &emlrtBCI, sp);
      }

      G->data[(m_tmp + G->size[0] * ((int32_T)b_j - 1)) - 1] = muDoubleScalarExp
        (-beta * muDoubleScalarSqrt(fullk));

      /*          G(i,j) = exp(-beta*norm(C1-C2)); */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_real_T(sp, &b_G, 2, &f_emlrtRTEI, true);
  i1 = b_G->size[0] * b_G->size[1];
  b_G->size[0] = G->size[1];
  b_G->size[1] = G->size[0];
  emxEnsureCapacity_real_T(sp, b_G, i1, &f_emlrtRTEI);
  loop_ub = G->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    m_tmp = G->size[1];
    for (b_i2 = 0; b_i2 < m_tmp; b_i2++) {
      b_G->data[b_i2 + b_G->size[0] * i1] = G->data[i1 + G->size[0] * b_i2];
    }
  }

  c_G[0] = G->size[0];
  c_G[1] = G->size[1];
  emlrtSizeEqCheckNDR2012b(c_G, *(int32_T (*)[2])b_G->size, &emlrtECI, sp);
  c_G[0] = G->size[0];
  c_G[1] = G->size[1];
  c_I[0] = b_I->size[0];
  c_I[1] = b_I->size[1];
  if ((c_G[0] != c_I[0]) || (c_G[1] != c_I[1])) {
    emlrtSizeEqCheckNDR2012b(&c_G[0], &c_I[0], &emlrtECI, sp);
  }

  i1 = b_G->size[0] * b_G->size[1];
  b_G->size[0] = G->size[0];
  b_G->size[1] = G->size[1];
  emxEnsureCapacity_real_T(sp, b_G, i1, &g_emlrtRTEI);
  loop_ub = G->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    m_tmp = G->size[0];
    for (b_i2 = 0; b_i2 < m_tmp; b_i2++) {
      b_G->data[b_i2 + b_G->size[0] * i1] = (G->data[b_i2 + G->size[0] * i1] +
        G->data[i1 + G->size[0] * b_i2]) - (real_T)b_I->data[b_i2 + b_I->size[0]
        * i1];
    }
  }

  emxFree_int8_T(&b_I);
  i1 = G->size[0] * G->size[1];
  G->size[0] = b_G->size[0];
  G->size[1] = b_G->size[1];
  emxEnsureCapacity_real_T(sp, G, i1, &h_emlrtRTEI);
  loop_ub = b_G->size[0] * b_G->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    G->data[i1] = b_G->data[i1];
  }

  emxFree_real_T(&b_G);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static real_T bestControl(const emlrtStack *sp, const real_T state[5], const
  real_T Wdown_data[], const int32_T Wdown_size[1], const real_T Wstill_data[],
  const int32_T Wstill_size[1], const real_T Wup_data[], const int32_T Wup_size
  [1], real_T mode)
{
  real_T ctr;
  emxArray_real_T *rho;
  boolean_T b0;
  real_T a_data[504];
  real_T Wdown;
  int32_T loop_ub;
  int32_T i13;
  int32_T w_size_idx_0;
  real_T w_data[1512];
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  emxArray_real_T *list;
  real_T Wstill;
  ptrdiff_t incy_t;
  real_T b_rho;
  real_T i1;
  real_T i2;
  real_T i3;
  real_T i4;
  real_T i5;
  emxArray_real_T *b_list;
  int32_T k;
  real_T netVal[3];
  int32_T i14;
  int32_T I2;
  boolean_T exitg1;
  int32_T i15;
  int32_T I3;
  int32_T i16;
  int32_T i17;
  int32_T i18;
  real_T c_list[5];
  const mxArray *y;
  const mxArray *m28;
  static const int32_T iv12[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *m29 = NULL;
  const mxArray *m30 = NULL;
  const mxArray *m31;
  static const int32_T iv13[2] = { 1, 42 };

  static const char_T b_u[42] = { '[', 'i', 'd', 'C', 'e', 'n', 't', 'e', 'r',
    ']', '\\', 't', '\\', 't', '#', '#', '#', ' ', 'i', 'n', 'd', 'e', 'x', ' ',
    'o', 'u', 't', ' ', 'o', 'f', ' ', 'r', 'a', 'n', 'g', 'e', ' ', '#', '#',
    '#', '\\', 'n' };

  const mxArray *m32 = NULL;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  X1(Xball)  = Xpalla */
  /*  X2(Yball)  = Ypalla */
  /*  X3(Ybarr)  = ybarra */
  /*  X4(VxBall) = 1 = neg, 2 = ~0 , 3 = pos */
  /*  X5(VyBall) = 1 = neg, 2 = ~0 , 3 = pos */
  /*  Indici i in base a Ln, Hn e Vn che indicano il livello di */
  /*  discretizzazione */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  mode = 0: Interpolazione totale, 1: Interpolazione con vicini di distanza 4 */
  /*  si Aspetta Wdown, Wstill, Wup come */
  ctr = 0.0;
  if (mode != (int32_T)muDoubleScalarFloor(mode)) {
    emlrtIntegerCheckR2012b(mode, &d_emlrtDCI, sp);
  }

  switch ((int32_T)mode) {
   case 0:
    emxInit_real_T(sp, &rho, 1, &p_emlrtRTEI, true);
    st.site = &md_emlrtRSI;
    NodeValue(&st, state, rho);

    /*  MAX di MAX da fare */
    st.site = &nd_emlrtRSI;
    if (0 <= Wdown_size[0] - 1) {
      memcpy(&a_data[0], &Wdown_data[0], (uint32_T)(Wdown_size[0] * (int32_T)
              sizeof(real_T)));
    }

    b_st.site = &td_emlrtRSI;
    if ((int16_T)Wdown_size[0] != rho->size[0]) {
      if (((int16_T)Wdown_size[0] == 1) || (rho->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ib_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &jb_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if (((int16_T)Wdown_size[0] == 1) || (rho->size[0] == 1)) {
      Wdown = 0.0;
      loop_ub = Wdown_size[0];
      for (i13 = 0; i13 < loop_ub; i13++) {
        Wdown += Wdown_data[i13] * rho->data[i13];
      }
    } else {
      b_st.site = &sd_emlrtRSI;
      c_st.site = &ud_emlrtRSI;
      if ((int16_T)Wdown_size[0] < 1) {
        Wdown = 0.0;
      } else {
        n_t = (ptrdiff_t)(int16_T)Wdown_size[0];
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        emlrt_checkEscapedGlobals();
        Wdown = ddot(&n_t, &a_data[0], &incx_t, &rho->data[0], &incy_t);
      }
    }

    st.site = &nd_emlrtRSI;
    if (0 <= Wstill_size[0] - 1) {
      memcpy(&a_data[0], &Wstill_data[0], (uint32_T)(Wstill_size[0] * (int32_T)
              sizeof(real_T)));
    }

    b_st.site = &td_emlrtRSI;
    if ((int16_T)Wstill_size[0] != rho->size[0]) {
      if (((int16_T)Wstill_size[0] == 1) || (rho->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ib_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &jb_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if (((int16_T)Wstill_size[0] == 1) || (rho->size[0] == 1)) {
      Wstill = 0.0;
      loop_ub = Wstill_size[0];
      for (i13 = 0; i13 < loop_ub; i13++) {
        Wstill += Wstill_data[i13] * rho->data[i13];
      }
    } else {
      b_st.site = &sd_emlrtRSI;
      c_st.site = &ud_emlrtRSI;
      if ((int16_T)Wstill_size[0] < 1) {
        Wstill = 0.0;
      } else {
        n_t = (ptrdiff_t)(int16_T)Wstill_size[0];
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        emlrt_checkEscapedGlobals();
        Wstill = ddot(&n_t, &a_data[0], &incx_t, &rho->data[0], &incy_t);
      }
    }

    st.site = &nd_emlrtRSI;
    if (0 <= Wup_size[0] - 1) {
      memcpy(&a_data[0], &Wup_data[0], (uint32_T)(Wup_size[0] * (int32_T)sizeof
              (real_T)));
    }

    b_st.site = &td_emlrtRSI;
    if ((int16_T)Wup_size[0] != rho->size[0]) {
      if (((int16_T)Wup_size[0] == 1) || (rho->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ib_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &jb_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if (((int16_T)Wup_size[0] == 1) || (rho->size[0] == 1)) {
      b_rho = 0.0;
      loop_ub = Wup_size[0];
      for (i13 = 0; i13 < loop_ub; i13++) {
        b_rho += Wup_data[i13] * rho->data[i13];
      }
    } else {
      b_st.site = &sd_emlrtRSI;
      c_st.site = &ud_emlrtRSI;
      if ((int16_T)Wup_size[0] < 1) {
        b_rho = 0.0;
      } else {
        n_t = (ptrdiff_t)(int16_T)Wup_size[0];
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        emlrt_checkEscapedGlobals();
        b_rho = ddot(&n_t, &a_data[0], &incx_t, &rho->data[0], &incy_t);
      }
    }

    emxFree_real_T(&rho);
    netVal[0] = Wdown;
    netVal[1] = Wstill;
    netVal[2] = b_rho;
    if (!muDoubleScalarIsNaN(Wdown)) {
      loop_ub = 1;
    } else {
      loop_ub = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k < 4)) {
        if (!muDoubleScalarIsNaN(netVal[k - 1])) {
          loop_ub = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (loop_ub == 0) {
      loop_ub = 1;
    } else {
      Wdown = netVal[loop_ub - 1];
      i13 = loop_ub + 1;
      for (k = i13; k < 4; k++) {
        Wstill = netVal[k - 1];
        if (Wdown < Wstill) {
          Wdown = Wstill;
          loop_ub = k;
        }
      }
    }

    ctr = (real_T)loop_ub - 2.0;
    break;

   case 1:
    /*  Calcolo un sotto insieme di distanza 4 */
    st.site = &od_emlrtRSI;
    b_st.site = &ce_emlrtRSI;
    c_st.site = &de_emlrtRSI;
    b0 = true;
    if (Wstill_size[0] != Wdown_size[0]) {
      b0 = false;
    }

    if (!b0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (Wup_size[0] != Wdown_size[0]) {
      b0 = false;
    }

    if (!b0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    w_size_idx_0 = Wdown_size[0];
    if (0 <= Wdown_size[0] - 1) {
      memcpy(&w_data[0], &Wdown_data[0], (uint32_T)(Wdown_size[0] * (int32_T)
              sizeof(real_T)));
    }

    loop_ub = Wstill_size[0];
    for (i13 = 0; i13 < loop_ub; i13++) {
      w_data[i13 + w_size_idx_0] = Wstill_data[i13];
    }

    loop_ub = Wup_size[0];
    for (i13 = 0; i13 < loop_ub; i13++) {
      w_data[i13 + (w_size_idx_0 << 1)] = Wup_data[i13];
    }

    emxInit_real_T(&b_st, &list, 2, &q_emlrtRTEI, true);
    st.site = &pd_emlrtRSI;

    /*  Ritorna una lista dove ogni COLONNA è una coppia di indici */
    /*  che sono vicini dello stato preso in esame di distanza 'dist' */
    /*  Ln        Numero divisioni in X */
    /*  Hn        Numero divisioni in Y */
    /*  velSig:   2 Var, Vx e Vy, se 1 = neg, 2 = ~0 , 3 = pos, */
    /*  X1(Xball)  = Xpalla */
    /*  X2(Yball)  = Ypalla */
    /*  X3(Ybarr)  = ybarra */
    /*  X4(VxBall) = 1 = neg, 2 = ~0 , 3 = pos */
    /*  X5(VyBall) = 1 = neg, 2 = ~0 , 3 = pos */
    /*  Indici i in base a Ln, Hn e Vn che indicano il livello di */
    /*  discretizzazione */
    state2index(state[0], state[1], state[2], state[3], state[4], &i1, &i2, &i3,
                &i4, &i5);
    list->size[0] = 5;
    list->size[1] = 0;
    i13 = (int32_T)((i1 + 1.0) + (1.0 - (i1 - 1.0)));
    emlrtForLoopVectorCheckR2012b(i1 - 1.0, 1.0, i1 + 1.0, mxDOUBLE_CLASS, i13,
      &fb_emlrtRTEI, &st);
    emxInit_real_T(&st, &b_list, 2, &n_emlrtRTEI, true);
    for (k = 0; k < i13; k++) {
      Wdown = (i1 - 1.0) + (real_T)k;
      i14 = (int32_T)((i2 + 1.0) + (1.0 - (i2 - 1.0)));
      emlrtForLoopVectorCheckR2012b(i2 - 1.0, 1.0, i2 + 1.0, mxDOUBLE_CLASS, i14,
        &gb_emlrtRTEI, &st);
      for (I2 = 0; I2 < i14; I2++) {
        Wstill = (i2 - 1.0) + (real_T)I2;
        i15 = (int32_T)((i3 + 1.0) + (1.0 - (i3 - 1.0)));
        for (I3 = 0; I3 < i15; I3++) {
          b_rho = (i3 - 1.0) + (real_T)I3;
          if ((Wdown >= 1.0) && (Wdown <= Ln) && (Wstill >= 1.0) && (Wstill <=
               Hn) && (b_rho >= 1.0) && (b_rho <= 7.0) && (i4 <= velSig) && (i5 >=
               1.0) && (i5 <= velSig)) {
            i16 = b_list->size[0] * b_list->size[1];
            b_list->size[0] = 5;
            b_list->size[1] = list->size[1] + 1;
            emxEnsureCapacity_real_T(&st, b_list, i16, &n_emlrtRTEI);
            loop_ub = list->size[1];
            for (i16 = 0; i16 < loop_ub; i16++) {
              for (i17 = 0; i17 < 5; i17++) {
                i18 = i17 + 5 * i16;
                b_list->data[i18] = list->data[i18];
              }
            }

            b_list->data[5 * list->size[1]] = Wdown;
            b_list->data[1 + 5 * list->size[1]] = Wstill;
            b_list->data[2 + 5 * list->size[1]] = b_rho;
            b_list->data[3 + 5 * list->size[1]] = i4;
            b_list->data[4 + 5 * list->size[1]] = i5;
            i16 = list->size[0] * list->size[1];
            list->size[0] = 5;
            list->size[1] = b_list->size[1];
            emxEnsureCapacity_real_T(&st, list, i16, &o_emlrtRTEI);
            loop_ub = b_list->size[0] * b_list->size[1];
            for (i16 = 0; i16 < loop_ub; i16++) {
              list->data[i16] = b_list->data[i16];
            }
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    emxFree_real_T(&b_list);
    netVal[0] = 0.0;
    netVal[1] = 0.0;
    netVal[2] = 0.0;
    i13 = list->size[1];
    for (loop_ub = 0; loop_ub < i13; loop_ub++) {
      /*  Creo il vettore rho ristretto */
      i14 = list->size[1];
      i15 = 1 + loop_ub;
      if ((i15 < 1) || (i15 > i14)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, i14, &k_emlrtBCI, sp);
      }

      i14 = list->size[1];
      i15 = 1 + loop_ub;
      if ((i15 < 1) || (i15 > i14)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, i14, &j_emlrtBCI, sp);
      }

      i14 = list->size[1];
      i15 = 1 + loop_ub;
      if ((i15 < 1) || (i15 > i14)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, i14, &i_emlrtBCI, sp);
      }

      i14 = list->size[1];
      i15 = 1 + loop_ub;
      if ((i15 < 1) || (i15 > i14)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, i14, &h_emlrtBCI, sp);
      }

      i14 = list->size[1];
      i15 = 1 + loop_ub;
      if ((i15 < 1) || (i15 > i14)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, i14, &g_emlrtBCI, sp);
      }

      /*   %Xball center */
      /*   %Yball center */
      /*       %Ybarr center */
      /*      %VxBall center */
      /*       %VyBall center */
      c_list[0] = list->data[5 * loop_ub] / Ln * L;
      c_list[1] = list->data[1 + 5 * loop_ub] / Hn * H;
      c_list[2] = list->data[2 + 5 * loop_ub] / 7.0 * V[6];
      c_list[3] = list->data[3 + 5 * loop_ub] - 2.0;
      c_list[4] = list->data[4 + 5 * loop_ub] - 2.0;
      for (i14 = 0; i14 < 5; i14++) {
        c_list[i14] -= state[i14];
      }

      b_rho = muDoubleScalarExp(-beta * b_norm(c_list));

      /*   Creo 3 vettori netVal per il confronto, da confrontare in seguito */
      st.site = &qd_emlrtRSI;
      i14 = list->size[1];
      if (1 > i14) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i14, &l_emlrtBCI, &st);
      }

      i1 = list->data[0];
      i14 = list->size[1];
      if (1 > i14) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i14, &m_emlrtBCI, &st);
      }

      i2 = list->data[1];
      i14 = list->size[1];
      if (1 > i14) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i14, &n_emlrtBCI, &st);
      }

      i3 = list->data[2];
      i14 = list->size[1];
      if (1 > i14) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i14, &o_emlrtBCI, &st);
      }

      i4 = list->data[3];
      i14 = list->size[1];
      if (1 > i14) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i14, &p_emlrtBCI, &st);
      }

      i5 = list->data[4];

      /* Seguiamo l'algoritmo row-major */
      /* https://en.wikipedia.org/wiki/Row-_and_column-major_order */
      if ((i1 > Ln) || (i2 > Hn) || (i3 > 7.0) || (i4 > velSig) || (i5 > velSig))
      {
        b_st.site = &ee_emlrtRSI;
        c_st.site = &ib_emlrtRSI;
        y = NULL;
        m28 = emlrtCreateCharArray(2, iv12);
        emlrtInitCharArrayR2013a(&c_st, 7, m28, &u[0]);
        emlrtAssign(&y, m28);
        emlrtAssign(&m29, y);
        emlrtAssign(&m30, emlrt_marshallOut(1.0));
        y = NULL;
        m31 = emlrtCreateCharArray(2, iv13);
        emlrtInitCharArrayR2013a(&c_st, 42, m31, &b_u[0]);
        emlrtAssign(&y, m31);
        emlrtAssign(&m32, y);
        emlrt_synchGlobalsToML(&c_st);
        d_st.site = &fe_emlrtRSI;
        Wdown = emlrt_marshallIn(&d_st, feval(&d_st, emlrtAlias(m29), emlrtAlias
          (m30), emlrtAlias(m32), &emlrtMCI), "<output of feval>");
        emlrt_synchGlobalsFromML(&c_st);
        emlrtDestroyArray(&m29);
        emlrtDestroyArray(&m30);
        emlrtDestroyArray(&m32);
        emlrtDisplayR2012b(emlrt_marshallOut(Wdown), "ans", &b_emlrtRTEI, &st);
      }

      /* id=id0+1.....il +1 serve per avere da 1 a n anche se dal punto di vista */
      /* matematico si vuole che sia da 0 a n-1 */
      Wstill = i5 + velSig * ((i4 - 1.0) + velSig * ((i3 - 1.0) + 7.0 * ((i2 -
        1.0) + Hn * (i1 - 1.0))));
      if (Wstill != (int32_T)muDoubleScalarFloor(Wstill)) {
        emlrtIntegerCheckR2012b(Wstill, &e_emlrtDCI, sp);
      }

      i14 = (int32_T)Wstill;
      if ((i14 < 1) || (i14 > w_size_idx_0)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, w_size_idx_0, &q_emlrtBCI, sp);
      }

      netVal[0] += b_rho * w_data[i14 - 1];

      /* w(quale w, quale centro) */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }

      st.site = &qd_emlrtRSI;
      i14 = list->size[1];
      if (2 > i14) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i14, &l_emlrtBCI, &st);
      }

      i1 = list->data[5];
      i14 = list->size[1];
      if (2 > i14) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i14, &m_emlrtBCI, &st);
      }

      i2 = list->data[6];
      i14 = list->size[1];
      if (2 > i14) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i14, &n_emlrtBCI, &st);
      }

      i3 = list->data[7];
      i14 = list->size[1];
      if (2 > i14) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i14, &o_emlrtBCI, &st);
      }

      i4 = list->data[8];
      i14 = list->size[1];
      if (2 > i14) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i14, &p_emlrtBCI, &st);
      }

      i5 = list->data[9];

      /* Seguiamo l'algoritmo row-major */
      /* https://en.wikipedia.org/wiki/Row-_and_column-major_order */
      if ((i1 > Ln) || (i2 > Hn) || (i3 > 7.0) || (i4 > velSig) || (i5 > velSig))
      {
        b_st.site = &ee_emlrtRSI;
        c_st.site = &ib_emlrtRSI;
        y = NULL;
        m28 = emlrtCreateCharArray(2, iv12);
        emlrtInitCharArrayR2013a(&c_st, 7, m28, &u[0]);
        emlrtAssign(&y, m28);
        emlrtAssign(&m29, y);
        emlrtAssign(&m30, emlrt_marshallOut(1.0));
        y = NULL;
        m31 = emlrtCreateCharArray(2, iv13);
        emlrtInitCharArrayR2013a(&c_st, 42, m31, &b_u[0]);
        emlrtAssign(&y, m31);
        emlrtAssign(&m32, y);
        emlrt_synchGlobalsToML(&c_st);
        d_st.site = &fe_emlrtRSI;
        Wdown = emlrt_marshallIn(&d_st, feval(&d_st, emlrtAlias(m29), emlrtAlias
          (m30), emlrtAlias(m32), &emlrtMCI), "<output of feval>");
        emlrt_synchGlobalsFromML(&c_st);
        emlrtDestroyArray(&m29);
        emlrtDestroyArray(&m30);
        emlrtDestroyArray(&m32);
        emlrtDisplayR2012b(emlrt_marshallOut(Wdown), "ans", &b_emlrtRTEI, &st);
      }

      /* id=id0+1.....il +1 serve per avere da 1 a n anche se dal punto di vista */
      /* matematico si vuole che sia da 0 a n-1 */
      Wstill = i5 + velSig * ((i4 - 1.0) + velSig * ((i3 - 1.0) + 7.0 * ((i2 -
        1.0) + Hn * (i1 - 1.0))));
      if (Wstill != (int32_T)muDoubleScalarFloor(Wstill)) {
        emlrtIntegerCheckR2012b(Wstill, &e_emlrtDCI, sp);
      }

      i14 = (int32_T)Wstill;
      if ((i14 < 1) || (i14 > w_size_idx_0)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, w_size_idx_0, &q_emlrtBCI, sp);
      }

      netVal[1] += b_rho * w_data[(i14 + w_size_idx_0) - 1];

      /* w(quale w, quale centro) */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }

      st.site = &qd_emlrtRSI;
      i14 = list->size[1];
      if (3 > i14) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i14, &l_emlrtBCI, &st);
      }

      i1 = list->data[10];
      i14 = list->size[1];
      if (3 > i14) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i14, &m_emlrtBCI, &st);
      }

      i2 = list->data[11];
      i14 = list->size[1];
      if (3 > i14) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i14, &n_emlrtBCI, &st);
      }

      i3 = list->data[12];
      i14 = list->size[1];
      if (3 > i14) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i14, &o_emlrtBCI, &st);
      }

      i4 = list->data[13];
      i14 = list->size[1];
      if (3 > i14) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i14, &p_emlrtBCI, &st);
      }

      i5 = list->data[14];

      /* Seguiamo l'algoritmo row-major */
      /* https://en.wikipedia.org/wiki/Row-_and_column-major_order */
      if ((i1 > Ln) || (i2 > Hn) || (i3 > 7.0) || (i4 > velSig) || (i5 > velSig))
      {
        b_st.site = &ee_emlrtRSI;
        c_st.site = &ib_emlrtRSI;
        y = NULL;
        m28 = emlrtCreateCharArray(2, iv12);
        emlrtInitCharArrayR2013a(&c_st, 7, m28, &u[0]);
        emlrtAssign(&y, m28);
        emlrtAssign(&m29, y);
        emlrtAssign(&m30, emlrt_marshallOut(1.0));
        y = NULL;
        m31 = emlrtCreateCharArray(2, iv13);
        emlrtInitCharArrayR2013a(&c_st, 42, m31, &b_u[0]);
        emlrtAssign(&y, m31);
        emlrtAssign(&m32, y);
        emlrt_synchGlobalsToML(&c_st);
        d_st.site = &fe_emlrtRSI;
        Wdown = emlrt_marshallIn(&d_st, feval(&d_st, emlrtAlias(m29), emlrtAlias
          (m30), emlrtAlias(m32), &emlrtMCI), "<output of feval>");
        emlrt_synchGlobalsFromML(&c_st);
        emlrtDestroyArray(&m29);
        emlrtDestroyArray(&m30);
        emlrtDestroyArray(&m32);
        emlrtDisplayR2012b(emlrt_marshallOut(Wdown), "ans", &b_emlrtRTEI, &st);
      }

      /* id=id0+1.....il +1 serve per avere da 1 a n anche se dal punto di vista */
      /* matematico si vuole che sia da 0 a n-1 */
      Wstill = i5 + velSig * ((i4 - 1.0) + velSig * ((i3 - 1.0) + 7.0 * ((i2 -
        1.0) + Hn * (i1 - 1.0))));
      if (Wstill != (int32_T)muDoubleScalarFloor(Wstill)) {
        emlrtIntegerCheckR2012b(Wstill, &e_emlrtDCI, sp);
      }

      i14 = (int32_T)Wstill;
      if ((i14 < 1) || (i14 > w_size_idx_0)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, w_size_idx_0, &q_emlrtBCI, sp);
      }

      netVal[2] += b_rho * w_data[(i14 + (w_size_idx_0 << 1)) - 1];

      /* w(quale w, quale centro) */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&list);
    if (!muDoubleScalarIsNaN(netVal[0])) {
      loop_ub = 1;
    } else {
      loop_ub = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k < 4)) {
        if (!muDoubleScalarIsNaN(netVal[k - 1])) {
          loop_ub = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (loop_ub == 0) {
      loop_ub = 1;
    } else {
      Wdown = netVal[loop_ub - 1];
      i13 = loop_ub + 1;
      for (k = i13; k < 4; k++) {
        Wstill = netVal[k - 1];
        if (Wdown < Wstill) {
          Wdown = Wstill;
          loop_ub = k;
        }
      }
    }

    ctr = (real_T)loop_ub - 2.0;
    break;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return ctr;
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m35;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m35, 3, pArrays, "feval", true, location);
}

static void id2Coord(const emlrtStack *sp, real_T id, real_T *i1, real_T *i2,
                     real_T *i3, real_T *i4, real_T *i5)
{
  real_T N[5];
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv1[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  real_T id0;
  const mxArray *m1 = NULL;
  const mxArray *m2 = NULL;
  int32_T j;
  const mxArray *m3;
  static const int32_T iv2[2] = { 1, 42 };

  real_T b_I[5];
  real_T r;
  static const char_T b_u[42] = { '[', 'c', 'e', 'n', 't', 'e', 'r', 'I', 'd',
    ']', '\\', 't', '\\', 't', '#', '#', '#', ' ', 'i', 'n', 'd', 'e', 'x', ' ',
    'o', 'u', 't', ' ', 'o', 'f', ' ', 'r', 'a', 'n', 'g', 'e', ' ', '#', '#',
    '#', '\\', 'n' };

  const mxArray *m4 = NULL;
  boolean_T rEQ0;
  real_T q;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* Seguiamo l'algoritmo row-major */
  /* https://en.wikipedia.org/wiki/Row-_and_column-major_order */
  st.site = &eb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  if (id > velSig * velSig * 7.0 * Hn * Ln) {
    st.site = &fb_emlrtRSI;
    b_st.site = &ib_emlrtRSI;
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&b_st, 7, m0, &u[0]);
    emlrtAssign(&y, m0);
    emlrtAssign(&m1, y);
    emlrtAssign(&m2, emlrt_marshallOut(1.0));
    y = NULL;
    m3 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&b_st, 42, m3, &b_u[0]);
    emlrtAssign(&y, m3);
    emlrtAssign(&m4, y);
    emlrt_synchGlobalsToML(&b_st);
    c_st.site = &fe_emlrtRSI;
    id0 = emlrt_marshallIn(&c_st, feval(&c_st, emlrtAlias(m1), emlrtAlias(m2),
      emlrtAlias(m4), &emlrtMCI), "<output of feval>");
    emlrt_synchGlobalsFromML(&b_st);
    emlrtDestroyArray(&m1);
    emlrtDestroyArray(&m2);
    emlrtDestroyArray(&m4);
    emlrtDisplayR2012b(emlrt_marshallOut(id0), "ans", &emlrtRTEI, sp);
  }

  N[0] = velSig;
  N[1] = velSig;
  N[2] = 7.0;
  N[3] = Hn;
  N[4] = Ln;
  id0 = id - 1.0;

  /* effettuiamo lo spostamento dalla mentalità di Matlab a quella matematica */
  for (j = 0; j < 5; j++) {
    r = id0;
    if (N[j] == 0.0) {
      if (id0 == 0.0) {
        r = N[j];
      }
    } else if (muDoubleScalarIsNaN(id0) || muDoubleScalarIsNaN(N[j]) ||
               muDoubleScalarIsInf(id0)) {
      r = rtNaN;
    } else if (id0 == 0.0) {
      r = 0.0 / N[j];
    } else if (muDoubleScalarIsInf(N[j])) {
      if ((N[j] < 0.0) != (id0 < 0.0)) {
        r = N[j];
      }
    } else {
      r = muDoubleScalarRem(id0, N[j]);
      rEQ0 = (r == 0.0);
      if ((!rEQ0) && (N[j] > muDoubleScalarFloor(N[j]))) {
        q = muDoubleScalarAbs(id0 / N[j]);
        rEQ0 = (muDoubleScalarAbs(q - muDoubleScalarFloor(q + 0.5)) <=
                2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        r = N[j] * 0.0;
      } else {
        if ((id0 < 0.0) != (N[j] < 0.0)) {
          r += N[j];
        }
      }
    }

    b_I[j] = r;
    id0 = (id0 - r) / N[j];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  *i5 = b_I[0] + 1.0;
  *i4 = b_I[1] + 1.0;
  *i3 = b_I[2] + 1.0;
  *i2 = b_I[3] + 1.0;
  *i1 = b_I[4] + 1.0;
}

static void interpolate(const emlrtStack *sp, const emxArray_real_T *G, const
  real_T Q[504], real_T w_data[], int32_T w_size[1])
{
  emxArray_real_T *b;
  int32_T i3;
  real_T i1;
  int32_T loop_ub;
  real_T i2;
  real_T b_i3;
  real_T i4;
  real_T i5;
  int32_T b_i4;
  int16_T unnamed_idx_0;
  int32_T b_i5;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  int32_T i9;
  int32_T i10;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b, 1, &j_emlrtRTEI, true);

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  Si aspetta G come  e Q come una matrice normale */
  st.site = &mb_emlrtRSI;

  /*  Si aspetta una matrice Q, e ritorna una B in */
  i3 = b->size[0];
  i1 = Ln * Hn * 7.0 * velSig * velSig;
  if (!(i1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(i1, &b_emlrtDCI, &st);
  }

  if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
    emlrtIntegerCheckR2012b(i1, &emlrtDCI, &st);
  }

  b->size[0] = (int32_T)i1;
  emxEnsureCapacity_real_T(&st, b, i3, &j_emlrtRTEI);
  if (!(i1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(i1, &b_emlrtDCI, &st);
  }

  if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
    emlrtIntegerCheckR2012b(i1, &emlrtDCI, &st);
  }

  loop_ub = (int32_T)i1;
  for (i3 = 0; i3 < loop_ub; i3++) {
    b->data[i3] = 0.0;
  }

  i3 = (int32_T)i1;
  for (loop_ub = 0; loop_ub < i3; loop_ub++) {
    b_st.site = &ob_emlrtRSI;
    id2Coord(&b_st, 1.0 + (real_T)loop_ub, &i1, &i2, &b_i3, &i4, &i5);
    if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
      emlrtIntegerCheckR2012b(i1, &c_emlrtDCI, &st);
    }

    b_i4 = (int32_T)i1;
    if ((b_i4 < 1) || (b_i4 > 2)) {
      emlrtDynamicBoundsCheckR2012b(b_i4, 1, 2, &b_emlrtBCI, &st);
    }

    if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
      emlrtIntegerCheckR2012b(i2, &c_emlrtDCI, &st);
    }

    b_i5 = (int32_T)i2;
    if ((b_i5 < 1) || (b_i5 > 4)) {
      emlrtDynamicBoundsCheckR2012b(b_i5, 1, 4, &c_emlrtBCI, &st);
    }

    if (b_i3 != (int32_T)muDoubleScalarFloor(b_i3)) {
      emlrtIntegerCheckR2012b(b_i3, &c_emlrtDCI, &st);
    }

    i6 = (int32_T)b_i3;
    if ((i6 < 1) || (i6 > 7)) {
      emlrtDynamicBoundsCheckR2012b(i6, 1, 7, &d_emlrtBCI, &st);
    }

    if (i4 != (int32_T)muDoubleScalarFloor(i4)) {
      emlrtIntegerCheckR2012b(i4, &c_emlrtDCI, &st);
    }

    i7 = (int32_T)i4;
    if ((i7 < 1) || (i7 > 3)) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, 3, &e_emlrtBCI, &st);
    }

    if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
      emlrtIntegerCheckR2012b(i5, &c_emlrtDCI, &st);
    }

    i8 = (int32_T)i5;
    if ((i8 < 1) || (i8 > 3)) {
      emlrtDynamicBoundsCheckR2012b(i8, 1, 3, &e_emlrtBCI, &st);
    }

    i9 = b->size[0];
    i10 = 1 + loop_ub;
    if ((i10 < 1) || (i10 > i9)) {
      emlrtDynamicBoundsCheckR2012b(i10, 1, i9, &f_emlrtBCI, &st);
    }

    b->data[i10 - 1] = Q[((((b_i4 + ((b_i5 - 1) << 1)) + ((i6 - 1) << 3)) + 56 *
      (i7 - 1)) + 168 * (i8 - 1)) - 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /*  g = ( G ); % Fatto fuori per risparmiare passaggi */
  st.site = &nb_emlrtRSI;
  if (b->size[0] != G->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &cb_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  b_st.site = &pb_emlrtRSI;
  if ((G->size[0] == 0) || (G->size[1] == 0) || (b->size[0] == 0)) {
    unnamed_idx_0 = (int16_T)G->size[1];
    w_size[0] = unnamed_idx_0;
    if (0 <= unnamed_idx_0 - 1) {
      memset(&w_data[0], 0, (uint32_T)(unnamed_idx_0 * (int32_T)sizeof(real_T)));
    }
  } else if (G->size[0] == G->size[1]) {
    w_size[0] = b->size[0];
    loop_ub = b->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      w_data[i3] = b->data[i3];
    }

    c_st.site = &qb_emlrtRSI;
    lusolve(&c_st, G, w_data);
  } else {
    c_st.site = &rb_emlrtRSI;
    qrsolve(&c_st, G, b->data, b->size, w_data, w_size);
  }

  emxFree_real_T(&b);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void state2index(real_T Xball, real_T Yball, real_T Ybarr, real_T VxBall,
  real_T VyBall, real_T *i1, real_T *i2, real_T *i3, real_T *i4, real_T *i5)
{
  int32_T k;
  real_T y[7];
  int32_T idx;
  boolean_T exitg1;
  real_T ex;
  int32_T i12;
  real_T d0;

  /*  VxBall */
  /*  VyBall */
  *i1 = muDoubleScalarMin(muDoubleScalarMax(1.0, muDoubleScalarCeil(Xball / L *
    Ln)), Ln);
  *i2 = muDoubleScalarMin(muDoubleScalarMax(1.0, muDoubleScalarCeil(Yball / H *
    Hn)), Hn);
  for (k = 0; k < 7; k++) {
    y[k] = muDoubleScalarAbs(V[k] - Ybarr);
  }

  if (!muDoubleScalarIsNaN(y[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (!muDoubleScalarIsNaN(y[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    idx = 1;
  } else {
    ex = y[idx - 1];
    i12 = idx + 1;
    for (k = i12; k < 8; k++) {
      d0 = y[k - 1];
      if (ex > d0) {
        ex = d0;
        idx = k;
      }
    }
  }

  *i3 = idx;
  if (muDoubleScalarAbs(VxBall) < 0.01) {
    *i4 = 2.0;
  } else {
    *i4 = muDoubleScalarSign(VxBall) + 2.0;
  }

  if (muDoubleScalarAbs(VyBall) < 0.01) {
    *i5 = 2.0;
  } else {
    *i5 = muDoubleScalarSign(VyBall) + 2.0;
  }
}

void PongEffectTrunc(const emlrtStack *sp, real_T xb0, real_T yb0, real_T ys0,
                     real_T Qup[504], real_T Qdown[504], real_T Qstill[504],
                     real_T unusedU0, emxArray_real_T *G, real_T SBROnOff,
                     real_T SBRspeedOnOff, real_T *chk, real_T *score, real_T
                     *rimbalzi)
{
  emxArray_boolean_T *x;
  real_T xb;
  real_T yb;
  real_T ys;
  real_T vx;
  real_T vy;
  int32_T i24;
  int32_T reward;
  boolean_T y;
  emxArray_real_T *b_G;
  int32_T counter;
  real_T Wup_data[504];
  int32_T Wup_size[1];
  boolean_T exitg1;
  real_T Wstill_data[504];
  int32_T Wstill_size[1];
  real_T Wdown_data[504];
  int32_T Wdown_size[1];
  real_T ctr;
  real_T ctrN;
  real_T i1;
  real_T i2;
  real_T i3;
  real_T i4;
  real_T i5;
  int32_T i25;
  real_T lambda;
  real_T i1n;
  real_T i2n;
  real_T i3n;
  real_T i4n;
  real_T i5n;
  real_T b_xb[5];
  real_T d1;
  real_T d2;
  int32_T i26;
  int32_T i27;
  int32_T i28;
  boolean_T guard1 = false;
  int32_T i29;
  int32_T i30;
  int32_T i31;
  emlrtStack st;
  (void)unusedU0;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_boolean_T(sp, &x, 2, &t_emlrtRTEI, true);

  /*  Funzione che permette di eseguire una partita */
  /*  figOnOff: 1 disegna la partita, 0 la esegue soltanto */
  /*  SBROnOff: 1 attiva la rete RBF, 0 usa il classico RL */
  /*  SBRspeedOnOff (utile solo se SBROnOff=1) : 1 Calcolo rapido prendendo */
  /*                        pochi centri vicini, 0 Calcolo totale con tutti i centri */
  /* V */
  /*  global Ln Hn Vn velSig    % Settori Discretizzati */
  beta = 0.3;
  beta_dirty |= 1U;

  /*  [xb0, yb0]: posizione iniziale della pallina */
  /*  [0, yp0]:   posizione iniziale della barretta */
  /*  lunghezza della barretta */
  /* theta = 0:0.01:2*pi; */
  xb = xb0;
  yb = yb0;
  ys = ys0;

  /*  posizioni correnti di pallina e barretta */
  vx = 0.1;
  vy = 0.1;

  /*  velocità iniziale arbitraria */
  /*  velocità della barretta COSTANTE */
  /*  flagFirst = 1; */
  *score = 0.0;
  st.site = &emlrtRSI;
  i24 = x->size[0] * x->size[1];
  x->size[0] = G->size[0];
  x->size[1] = G->size[1];
  emxEnsureCapacity_boolean_T(&st, x, i24, &t_emlrtRTEI);
  reward = G->size[0] * G->size[1];
  for (i24 = 0; i24 < reward; i24++) {
    x->data[i24] = (G->data[i24] == 0.0);
  }

  y = ((x->size[0] != 0) && (x->size[1] != 0));
  if (y) {
    reward = x->size[0] * x->size[1];
    counter = 0;
    exitg1 = false;
    while ((!exitg1) && (counter <= reward - 1)) {
      if (!x->data[counter]) {
        y = false;
        exitg1 = true;
      } else {
        counter++;
      }
    }
  }

  emxFree_boolean_T(&x);
  if (y) {
    emxInit_real_T(sp, &b_G, 2, &c_emlrtRTEI, true);

    /*  Per evitare di ricalcolare sempre G che non cambia mai */
    st.site = &b_emlrtRSI;
    RBFMatrix(&st, b_G);
    i24 = b_G->size[0];
    if (504 < i24) {
      emlrtDimSizeGeqCheckR2012b(504, i24, &c_emlrtECI, sp);
    }

    i24 = b_G->size[1];
    if (504 < i24) {
      emlrtDimSizeGeqCheckR2012b(504, i24, &b_emlrtECI, sp);
    }

    i24 = G->size[0] * G->size[1];
    G->size[0] = b_G->size[0];
    G->size[1] = b_G->size[1];
    emxEnsureCapacity_real_T(sp, G, i24, &u_emlrtRTEI);
    reward = b_G->size[1];
    for (i24 = 0; i24 < reward; i24++) {
      counter = b_G->size[0];
      for (i25 = 0; i25 < counter; i25++) {
        G->data[i25 + G->size[0] * i24] = b_G->data[i25 + b_G->size[0] * i24];
      }
    }

    emxFree_real_T(&b_G);

    /*  Già GPU Array */
    /*  G = (G); */
  }

  st.site = &c_emlrtRSI;
  interpolate(&st, G, Qup, Wup_data, Wup_size);
  st.site = &d_emlrtRSI;
  interpolate(&st, G, Qstill, Wstill_data, Wstill_size);
  st.site = &e_emlrtRSI;
  interpolate(&st, G, Qdown, Wdown_data, Wdown_size);

  /* [i1n, i2n, i3n, i4n ,i5n] = state2index(xb,yb,ys,vx,vy); */
  /*  finchè la pallina non finisce oltre la barretta... */
  counter = 0;
  while ((xb > 0.0) && (counter < 100)) {
    /*  ricompensa */
    reward = 0;
    ctr = 0.0;
    ctrN = 0.0;
    state2index(xb, yb, ys, vx, vy, &i1, &i2, &i3, &i4, &i5);

    /*  aggiorniamo la posizione della pallina */
    xb += vx;
    yb += vy;

    /*  aggiorniamo lo stato della pallina */
    /*  controlliamo se la pallina sbatte contro un bordo */
    if ((xb >= L - 0.2) && (vx >= 0.0)) {
      /*  tocca il fondo */
      vx = -vx;
      if (((yb >= 1.0) && (yb <= 2.0)) || ((yb >= 6.0) && (yb <= 7.0))) {
        reward = 5;
        (*score)++;
      }
    } else if ((yb >= H - 0.2) && (vy >= 0.0)) {
      /* tocca il bordo superiore */
      vy = -vy;
    } else {
      if ((yb <= 0.2) && (vy <= 0.0)) {
        /* tocca il bordo inferiore */
        vy = -vy;
      }
    }

    /*  sassano aggiornava tutto tranne i3 qua */
    /* [i1n, i2n, i3n, i4n ,i5n] = state2index(xb,yb,ys,vx,vy); */
    /*  controlliamo se la barretta è in grado di respingere la pallina, e in */
    /*  caso assegno il Reward_K+1 */
    if ((xb <= 0.2) && (yb + 0.2 >= ys - 1.0) && (yb - 0.2 <= ys + 1.0)) {
      vx = -vx;
      if ((yb + 0.2 <= ys - 0.33) || (yb - 0.2 >= ys + 0.33)) {
        emlrt_checkEscapedGlobals();
        emlrtRandu(&lambda, 1);
        vy = 0.5 * vy + (-0.02 * lambda + (1.0 - lambda) * 0.02);
      }

      reward = 1;
      counter++;
    }

    /*  aggiorniamo la posizione della barretta con strategia epsilon-greedy */
    emlrt_checkEscapedGlobals();
    emlrtRandu(&lambda, 1);
    if (lambda >= eps) {
      if (SBROnOff == 0.0) {
        /*  procedo con classica RL */
        lambda = (int32_T)muDoubleScalarFloor(i1);
        if (i1 != lambda) {
          emlrtIntegerCheckR2012b(i1, &h_emlrtDCI, sp);
        }

        i24 = (int32_T)i1;
        if ((i24 < 1) || (i24 > 2)) {
          emlrtDynamicBoundsCheckR2012b(i24, 1, 2, &s_emlrtBCI, sp);
        }

        d1 = (int32_T)muDoubleScalarFloor(i2);
        if (i2 != d1) {
          emlrtIntegerCheckR2012b(i2, &h_emlrtDCI, sp);
        }

        i25 = (int32_T)i2;
        if ((i25 < 1) || (i25 > 4)) {
          emlrtDynamicBoundsCheckR2012b(i25, 1, 4, &t_emlrtBCI, sp);
        }

        d2 = (int32_T)muDoubleScalarFloor(i5);
        if (i5 != d2) {
          emlrtIntegerCheckR2012b(i5, &h_emlrtDCI, sp);
        }

        if (i1 != lambda) {
          emlrtIntegerCheckR2012b(i1, &i_emlrtDCI, sp);
        }

        if ((i24 < 1) || (i24 > 2)) {
          emlrtDynamicBoundsCheckR2012b(i24, 1, 2, &u_emlrtBCI, sp);
        }

        if (i2 != d1) {
          emlrtIntegerCheckR2012b(i2, &i_emlrtDCI, sp);
        }

        if ((i25 < 1) || (i25 > 4)) {
          emlrtDynamicBoundsCheckR2012b(i25, 1, 4, &v_emlrtBCI, sp);
        }

        if (i5 != d2) {
          emlrtIntegerCheckR2012b(i5, &i_emlrtDCI, sp);
        }

        i26 = ((int32_T)i3 - 1) << 3;
        i27 = 56 * ((int32_T)i4 - 1);
        i28 = 168 * ((int32_T)i5 - 1);
        guard1 = false;
        if (Qup[((((i24 + ((i25 - 1) << 1)) + i26) + i27) + i28) - 1] >= Qdown
            [((((i24 + ((i25 - 1) << 1)) + i26) + i27) + i28) - 1]) {
          i24 = ((((i24 + (((int32_T)i2 - 1) << 1)) + i26) + i27) + i28) - 1;
          if ((Qup[i24] >= Qstill[i24]) && (ys + 1.0 <= H - 0.2)) {
            ys += 0.2;
            ctr = 1.0;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }

        if (guard1 && ((Qdown[(((((int32_T)i1 + (((int32_T)i2 - 1) << 1)) +
                 (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 *
                               ((int32_T)i5 - 1)) - 1] > Qup[(((((int32_T)i1 +
                  (((int32_T)i2 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
                ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1]) && (Qdown
              [(((((int32_T)i1 + (((int32_T)i2 - 1) << 1)) + (((int32_T)i3 - 1) <<
                  3)) + 56 * ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] >=
              Qstill[(((((int32_T)i1 + (((int32_T)i2 - 1) << 1)) + (((int32_T)i3
                   - 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 -
                1)) - 1]) && (ys - 1.0 >= 0.2))) {
          ys -= 0.2;
          ctr = -1.0;
        } else {
          /*  ys = ys; */
        }
      }

      if (SBROnOff == 1.0) {
        /*  procedo con SBR */
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        b_xb[0] = xb;
        b_xb[1] = yb;
        b_xb[2] = ys;
        b_xb[3] = vx;
        b_xb[4] = vy;
        st.site = &h_emlrtRSI;
        ctr = bestControl(&st, b_xb, Wdown_data, Wdown_size, Wstill_data,
                          Wstill_size, Wup_data, Wup_size, SBRspeedOnOff);
        if ((ctr == 1.0) && (ys + 1.0 <= H - 0.2)) {
          ys += 0.2;
        } else if ((ctr == -1.0) && (ys - 1.0 >= 0.2)) {
          ys -= 0.2;
        } else {
          /*  ys = ys; */
        }
      }
    } else {
      if (lambda < eps) {
        emlrt_checkEscapedGlobals();
        emlrtRandu(&lambda, 1);
        if ((lambda < 0.33) && (ys + 1.0 <= H - 0.2)) {
          ys += 0.2;
          ctr = 1.0;
        } else if ((lambda >= 0.33) && (lambda < 0.66) && (ys - 1.0 >= 0.2)) {
          ys -= 0.2;
          ctr = -1.0;
        } else {
          /* ys = ys; */
        }
      }
    }

    /*  aggiorniamo lo stato della barretta */
    /*      [~,clsIdx] = min(abs(V-ys)); */
    /*      i3n = clsIdx; */
    state2index(xb, yb, ys, vx, vy, &i1n, &i2n, &i3n, &i4n, &i5n);

    /*  aggiorniamo le funzioni Q */
    /*  determiniamo la migliore azione per l'iterazione successiva */
    if (SBROnOff == 0.0) {
      /*  procedo con classica RL */
      lambda = (int32_T)muDoubleScalarFloor(i1n);
      if (i1n != lambda) {
        emlrtIntegerCheckR2012b(i1n, &j_emlrtDCI, sp);
      }

      i24 = (int32_T)i1n;
      if ((i24 < 1) || (i24 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, 2, &w_emlrtBCI, sp);
      }

      d1 = (int32_T)muDoubleScalarFloor(i2n);
      if (i2n != d1) {
        emlrtIntegerCheckR2012b(i2n, &j_emlrtDCI, sp);
      }

      i25 = (int32_T)i2n;
      if ((i25 < 1) || (i25 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, 4, &x_emlrtBCI, sp);
      }

      d2 = (int32_T)muDoubleScalarFloor(i5n);
      if (i5n != d2) {
        emlrtIntegerCheckR2012b(i5n, &j_emlrtDCI, sp);
      }

      if (i1n != lambda) {
        emlrtIntegerCheckR2012b(i1n, &k_emlrtDCI, sp);
      }

      if ((i24 < 1) || (i24 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, 2, &y_emlrtBCI, sp);
      }

      if (i2n != d1) {
        emlrtIntegerCheckR2012b(i2n, &k_emlrtDCI, sp);
      }

      if ((i25 < 1) || (i25 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, 4, &ab_emlrtBCI, sp);
      }

      if (i5n != d2) {
        emlrtIntegerCheckR2012b(i5n, &k_emlrtDCI, sp);
      }

      i26 = ((int32_T)i3n - 1) << 3;
      i27 = 56 * ((int32_T)i4n - 1);
      i28 = 168 * ((int32_T)i5n - 1);
      guard1 = false;
      if (Qup[((((i24 + ((i25 - 1) << 1)) + i26) + i27) + i28) - 1] >= Qdown
          [((((i24 + ((i25 - 1) << 1)) + i26) + i27) + i28) - 1]) {
        i24 = ((((i24 + (((int32_T)i2n - 1) << 1)) + i26) + i27) + i28) - 1;
        if ((Qup[i24] >= Qstill[i24]) && (ys + 1.0 <= H - 0.2)) {
          ctrN = 1.0;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1 && ((Qdown[(((((int32_T)i1n + (((int32_T)i2n - 1) << 1)) +
               (((int32_T)i3n - 1) << 3)) + 56 * ((int32_T)i4n - 1)) + 168 *
                             ((int32_T)i5n - 1)) - 1] > Qup[(((((int32_T)i1n +
                (((int32_T)i2n - 1) << 1)) + (((int32_T)i3n - 1) << 3)) + 56 *
              ((int32_T)i4n - 1)) + 168 * ((int32_T)i5n - 1)) - 1]) && (Qdown
            [(((((int32_T)i1n + (((int32_T)i2n - 1) << 1)) + (((int32_T)i3n - 1)
                << 3)) + 56 * ((int32_T)i4n - 1)) + 168 * ((int32_T)i5n - 1)) -
            1] >= Qstill[(((((int32_T)i1n + (((int32_T)i2n - 1) << 1)) +
                            (((int32_T)i3n - 1) << 3)) + 56 * ((int32_T)i4n - 1))
                          + 168 * ((int32_T)i5n - 1)) - 1]) && (ys - 1.0 >= 0.2)))
      {
        ctrN = -1.0;
      }
    }

    if (SBROnOff == 1.0) {
      /*  procedo con SBR */
      /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
      /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
      /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
      b_xb[0] = xb;
      b_xb[1] = yb;
      b_xb[2] = ys;
      b_xb[3] = vx;
      b_xb[4] = vy;
      st.site = &j_emlrtRSI;
      ctrN = bestControl(&st, b_xb, Wdown_data, Wdown_size, Wstill_data,
                         Wstill_size, Wup_data, Wup_size, SBRspeedOnOff);
      if ((ctrN == 1.0) && (!(ys + 1.0 <= H - 0.2))) {
        ctrN = 0.0;
      } else {
        if ((ctrN == -1.0) && (!(ys - 1.0 >= 0.2))) {
          ctrN = 0.0;
        }
      }
    }

    if (xb <= 0.0) {
      /*  la pallina mi sorpassa, ho perso */
      reward = -5;
    }

    /*  aggiorniamo la funzione Q(X,U) corretta con il valore di Q(X',U') */
    if ((ctr == 1.0) && (ctrN == 1.0)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &l_emlrtDCI, sp);
      }

      i24 = (int32_T)i1;
      if ((i24 < 1) || (i24 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, 2, &bb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &l_emlrtDCI, sp);
      }

      i25 = (int32_T)i2;
      if ((i25 < 1) || (i25 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, 4, &cb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &l_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &m_emlrtDCI, sp);
      }

      i26 = (int32_T)i1n;
      if ((i26 < 1) || (i26 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, 2, &db_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &m_emlrtDCI, sp);
      }

      i27 = (int32_T)i2n;
      if ((i27 < 1) || (i27 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i27, 1, 4, &eb_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &m_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &n_emlrtDCI, sp);
      }

      i28 = (int32_T)i1;
      if ((i28 < 1) || (i28 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, 2, &fb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &n_emlrtDCI, sp);
      }

      i29 = (int32_T)i2;
      if ((i29 < 1) || (i29 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i29, 1, 4, &gb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &n_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &o_emlrtDCI, sp);
      }

      i30 = (int32_T)i1;
      if ((i30 < 1) || (i30 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i30, 1, 2, &hb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &o_emlrtDCI, sp);
      }

      i31 = (int32_T)i2;
      if ((i31 < 1) || (i31 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i31, 1, 4, &ib_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &o_emlrtDCI, sp);
      }

      Qup[((((i30 + ((i31 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
            ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qup[((((i24 +
        ((i25 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1))
        + 168 * ((int32_T)i5 - 1)) - 1] + alpha * (((real_T)reward + b_gamma *
        Qup[((((i26 + ((i27 - 1) << 1)) + (((int32_T)i3n - 1) << 3)) + 56 *
              ((int32_T)i4n - 1)) + 168 * ((int32_T)i5n - 1)) - 1]) - Qup
        [((((i28 + ((i29 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
           ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1]);
      if ((SBROnOff == 1.0) && (SBRspeedOnOff == 0.0)) {
        /*  Sto eseguendo la rete full */
        st.site = &k_emlrtRSI;
        interpolate(&st, G, Qup, Wup_data, Wup_size);
      }
    } else if ((ctr == 1.0) && (ctrN == 0.0)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &p_emlrtDCI, sp);
      }

      i24 = (int32_T)i1;
      if ((i24 < 1) || (i24 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, 2, &jb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &p_emlrtDCI, sp);
      }

      i25 = (int32_T)i2;
      if ((i25 < 1) || (i25 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, 4, &kb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &p_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &q_emlrtDCI, sp);
      }

      i26 = (int32_T)i1n;
      if ((i26 < 1) || (i26 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, 2, &lb_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &q_emlrtDCI, sp);
      }

      i27 = (int32_T)i2n;
      if ((i27 < 1) || (i27 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i27, 1, 4, &mb_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &q_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &r_emlrtDCI, sp);
      }

      i28 = (int32_T)i1;
      if ((i28 < 1) || (i28 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, 2, &nb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &r_emlrtDCI, sp);
      }

      i29 = (int32_T)i2;
      if ((i29 < 1) || (i29 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i29, 1, 4, &ob_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &r_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &s_emlrtDCI, sp);
      }

      i30 = (int32_T)i1;
      if ((i30 < 1) || (i30 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i30, 1, 2, &pb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &s_emlrtDCI, sp);
      }

      i31 = (int32_T)i2;
      if ((i31 < 1) || (i31 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i31, 1, 4, &qb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &s_emlrtDCI, sp);
      }

      Qup[((((i30 + ((i31 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
            ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qup[((((i24 +
        ((i25 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1))
        + 168 * ((int32_T)i5 - 1)) - 1] + alpha * (((real_T)reward + b_gamma *
        Qstill[((((i26 + ((i27 - 1) << 1)) + (((int32_T)i3n - 1) << 3)) + 56 *
                 ((int32_T)i4n - 1)) + 168 * ((int32_T)i5n - 1)) - 1]) - Qup
        [((((i28 + ((i29 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
           ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1]);
      if ((SBROnOff == 1.0) && (SBRspeedOnOff == 0.0)) {
        /*  Sto eseguendo la rete full */
        st.site = &l_emlrtRSI;
        interpolate(&st, G, Qup, Wup_data, Wup_size);
      }
    } else if ((ctr == 1.0) && (ctrN == -1.0)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &t_emlrtDCI, sp);
      }

      i24 = (int32_T)i1;
      if ((i24 < 1) || (i24 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, 2, &rb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &t_emlrtDCI, sp);
      }

      i25 = (int32_T)i2;
      if ((i25 < 1) || (i25 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, 4, &sb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &t_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &u_emlrtDCI, sp);
      }

      i26 = (int32_T)i1n;
      if ((i26 < 1) || (i26 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, 2, &tb_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &u_emlrtDCI, sp);
      }

      i27 = (int32_T)i2n;
      if ((i27 < 1) || (i27 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i27, 1, 4, &ub_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &u_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &v_emlrtDCI, sp);
      }

      i28 = (int32_T)i1;
      if ((i28 < 1) || (i28 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, 2, &vb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &v_emlrtDCI, sp);
      }

      i29 = (int32_T)i2;
      if ((i29 < 1) || (i29 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i29, 1, 4, &wb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &v_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &w_emlrtDCI, sp);
      }

      i30 = (int32_T)i1;
      if ((i30 < 1) || (i30 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i30, 1, 2, &xb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &w_emlrtDCI, sp);
      }

      i31 = (int32_T)i2;
      if ((i31 < 1) || (i31 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i31, 1, 4, &yb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &w_emlrtDCI, sp);
      }

      Qup[((((i30 + ((i31 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
            ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qup[((((i24 +
        ((i25 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1))
        + 168 * ((int32_T)i5 - 1)) - 1] + alpha * (((real_T)reward + b_gamma *
        Qdown[((((i26 + ((i27 - 1) << 1)) + (((int32_T)i3n - 1) << 3)) + 56 *
                ((int32_T)i4n - 1)) + 168 * ((int32_T)i5n - 1)) - 1]) - Qup
        [((((i28 + ((i29 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
           ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1]);
      if ((SBROnOff == 1.0) && (SBRspeedOnOff == 0.0)) {
        /*  Sto eseguendo la rete full */
        st.site = &m_emlrtRSI;
        interpolate(&st, G, Qup, Wup_data, Wup_size);
      }
    } else if ((ctr == 0.0) && (ctrN == 1.0)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &x_emlrtDCI, sp);
      }

      i24 = (int32_T)i1;
      if ((i24 < 1) || (i24 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, 2, &ac_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &x_emlrtDCI, sp);
      }

      i25 = (int32_T)i2;
      if ((i25 < 1) || (i25 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, 4, &bc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &x_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &y_emlrtDCI, sp);
      }

      i26 = (int32_T)i1n;
      if ((i26 < 1) || (i26 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, 2, &cc_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &y_emlrtDCI, sp);
      }

      i27 = (int32_T)i2n;
      if ((i27 < 1) || (i27 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i27, 1, 4, &dc_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &y_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &ab_emlrtDCI, sp);
      }

      i28 = (int32_T)i1;
      if ((i28 < 1) || (i28 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, 2, &ec_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &ab_emlrtDCI, sp);
      }

      i29 = (int32_T)i2;
      if ((i29 < 1) || (i29 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i29, 1, 4, &fc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &ab_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &bb_emlrtDCI, sp);
      }

      i30 = (int32_T)i1;
      if ((i30 < 1) || (i30 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i30, 1, 2, &gc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &bb_emlrtDCI, sp);
      }

      i31 = (int32_T)i2;
      if ((i31 < 1) || (i31 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i31, 1, 4, &hc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &bb_emlrtDCI, sp);
      }

      Qstill[((((i30 + ((i31 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
               ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qstill
        [((((i24 + ((i25 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
           ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] + alpha *
        (((real_T)reward + b_gamma * Qup[((((i26 + ((i27 - 1) << 1)) +
             (((int32_T)i3n - 1) << 3)) + 56 * ((int32_T)i4n - 1)) + 168 *
           ((int32_T)i5n - 1)) - 1]) - Qstill[((((i28 + ((i29 - 1) << 1)) +
            (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 *
          ((int32_T)i5 - 1)) - 1]);
      if ((SBROnOff == 1.0) && (SBRspeedOnOff == 0.0)) {
        /*  Sto eseguendo la rete full */
        st.site = &n_emlrtRSI;
        interpolate(&st, G, Qstill, Wstill_data, Wstill_size);
      }
    } else if ((ctr == 0.0) && (ctrN == 0.0)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &cb_emlrtDCI, sp);
      }

      i24 = (int32_T)i1;
      if ((i24 < 1) || (i24 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, 2, &ic_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &cb_emlrtDCI, sp);
      }

      i25 = (int32_T)i2;
      if ((i25 < 1) || (i25 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, 4, &jc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &cb_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &db_emlrtDCI, sp);
      }

      i26 = (int32_T)i1n;
      if ((i26 < 1) || (i26 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, 2, &kc_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &db_emlrtDCI, sp);
      }

      i27 = (int32_T)i2n;
      if ((i27 < 1) || (i27 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i27, 1, 4, &lc_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &db_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &eb_emlrtDCI, sp);
      }

      i28 = (int32_T)i1;
      if ((i28 < 1) || (i28 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, 2, &mc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &eb_emlrtDCI, sp);
      }

      i29 = (int32_T)i2;
      if ((i29 < 1) || (i29 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i29, 1, 4, &nc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &eb_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &fb_emlrtDCI, sp);
      }

      i30 = (int32_T)i1;
      if ((i30 < 1) || (i30 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i30, 1, 2, &oc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &fb_emlrtDCI, sp);
      }

      i31 = (int32_T)i2;
      if ((i31 < 1) || (i31 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i31, 1, 4, &pc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &fb_emlrtDCI, sp);
      }

      Qstill[((((i30 + ((i31 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
               ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qstill
        [((((i24 + ((i25 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
           ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] + alpha *
        (((real_T)reward + b_gamma * Qstill[((((i26 + ((i27 - 1) << 1)) +
             (((int32_T)i3n - 1) << 3)) + 56 * ((int32_T)i4n - 1)) + 168 *
           ((int32_T)i5n - 1)) - 1]) - Qstill[((((i28 + ((i29 - 1) << 1)) +
            (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 *
          ((int32_T)i5 - 1)) - 1]);
      if ((SBROnOff == 1.0) && (SBRspeedOnOff == 0.0)) {
        /*  Sto eseguendo la rete full */
        st.site = &o_emlrtRSI;
        interpolate(&st, G, Qstill, Wstill_data, Wstill_size);
      }
    } else if ((ctr == 0.0) && (ctrN == -1.0)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &gb_emlrtDCI, sp);
      }

      i24 = (int32_T)i1;
      if ((i24 < 1) || (i24 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, 2, &qc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &gb_emlrtDCI, sp);
      }

      i25 = (int32_T)i2;
      if ((i25 < 1) || (i25 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, 4, &rc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &gb_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &hb_emlrtDCI, sp);
      }

      i26 = (int32_T)i1n;
      if ((i26 < 1) || (i26 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, 2, &sc_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &hb_emlrtDCI, sp);
      }

      i27 = (int32_T)i2n;
      if ((i27 < 1) || (i27 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i27, 1, 4, &tc_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &hb_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &ib_emlrtDCI, sp);
      }

      i28 = (int32_T)i1;
      if ((i28 < 1) || (i28 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, 2, &uc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &ib_emlrtDCI, sp);
      }

      i29 = (int32_T)i2;
      if ((i29 < 1) || (i29 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i29, 1, 4, &vc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &ib_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &jb_emlrtDCI, sp);
      }

      i30 = (int32_T)i1;
      if ((i30 < 1) || (i30 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i30, 1, 2, &wc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &jb_emlrtDCI, sp);
      }

      i31 = (int32_T)i2;
      if ((i31 < 1) || (i31 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i31, 1, 4, &xc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &jb_emlrtDCI, sp);
      }

      Qstill[((((i30 + ((i31 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
               ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qstill
        [((((i24 + ((i25 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
           ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] + alpha *
        (((real_T)reward + b_gamma * Qdown[((((i26 + ((i27 - 1) << 1)) +
             (((int32_T)i3n - 1) << 3)) + 56 * ((int32_T)i4n - 1)) + 168 *
           ((int32_T)i5n - 1)) - 1]) - Qstill[((((i28 + ((i29 - 1) << 1)) +
            (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 *
          ((int32_T)i5 - 1)) - 1]);
      if ((SBROnOff == 1.0) && (SBRspeedOnOff == 0.0)) {
        /*  Sto eseguendo la rete full */
        st.site = &p_emlrtRSI;
        interpolate(&st, G, Qstill, Wstill_data, Wstill_size);
      }
    } else if ((ctr == -1.0) && (ctrN == 1.0)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &kb_emlrtDCI, sp);
      }

      i24 = (int32_T)i1;
      if ((i24 < 1) || (i24 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, 2, &yc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &kb_emlrtDCI, sp);
      }

      i25 = (int32_T)i2;
      if ((i25 < 1) || (i25 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, 4, &ad_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &kb_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &lb_emlrtDCI, sp);
      }

      i26 = (int32_T)i1n;
      if ((i26 < 1) || (i26 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, 2, &bd_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &lb_emlrtDCI, sp);
      }

      i27 = (int32_T)i2n;
      if ((i27 < 1) || (i27 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i27, 1, 4, &cd_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &lb_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &mb_emlrtDCI, sp);
      }

      i28 = (int32_T)i1;
      if ((i28 < 1) || (i28 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, 2, &dd_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &mb_emlrtDCI, sp);
      }

      i29 = (int32_T)i2;
      if ((i29 < 1) || (i29 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i29, 1, 4, &ed_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &mb_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &nb_emlrtDCI, sp);
      }

      i30 = (int32_T)i1;
      if ((i30 < 1) || (i30 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i30, 1, 2, &fd_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &nb_emlrtDCI, sp);
      }

      i31 = (int32_T)i2;
      if ((i31 < 1) || (i31 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i31, 1, 4, &gd_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &nb_emlrtDCI, sp);
      }

      Qdown[((((i30 + ((i31 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
              ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qdown[((((i24
        + ((i25 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1))
        + 168 * ((int32_T)i5 - 1)) - 1] + alpha * (((real_T)reward + b_gamma *
        Qup[((((i26 + ((i27 - 1) << 1)) + (((int32_T)i3n - 1) << 3)) + 56 *
              ((int32_T)i4n - 1)) + 168 * ((int32_T)i5n - 1)) - 1]) - Qdown
        [((((i28 + ((i29 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
           ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1]);
      if ((SBROnOff == 1.0) && (SBRspeedOnOff == 0.0)) {
        /*  Sto eseguendo la rete full */
        st.site = &q_emlrtRSI;
        interpolate(&st, G, Qdown, Wdown_data, Wdown_size);
      }
    } else if ((ctr == -1.0) && (ctrN == 0.0)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &ob_emlrtDCI, sp);
      }

      i24 = (int32_T)i1;
      if ((i24 < 1) || (i24 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, 2, &hd_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &ob_emlrtDCI, sp);
      }

      i25 = (int32_T)i2;
      if ((i25 < 1) || (i25 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, 4, &id_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &ob_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &pb_emlrtDCI, sp);
      }

      i26 = (int32_T)i1n;
      if ((i26 < 1) || (i26 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, 2, &jd_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &pb_emlrtDCI, sp);
      }

      i27 = (int32_T)i2n;
      if ((i27 < 1) || (i27 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i27, 1, 4, &kd_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &pb_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &qb_emlrtDCI, sp);
      }

      i28 = (int32_T)i1;
      if ((i28 < 1) || (i28 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, 2, &ld_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &qb_emlrtDCI, sp);
      }

      i29 = (int32_T)i2;
      if ((i29 < 1) || (i29 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i29, 1, 4, &md_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &qb_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &rb_emlrtDCI, sp);
      }

      i30 = (int32_T)i1;
      if ((i30 < 1) || (i30 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i30, 1, 2, &nd_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &rb_emlrtDCI, sp);
      }

      i31 = (int32_T)i2;
      if ((i31 < 1) || (i31 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i31, 1, 4, &od_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &rb_emlrtDCI, sp);
      }

      Qdown[((((i30 + ((i31 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
              ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qdown[((((i24
        + ((i25 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1))
        + 168 * ((int32_T)i5 - 1)) - 1] + alpha * (((real_T)reward + b_gamma *
        Qstill[((((i26 + ((i27 - 1) << 1)) + (((int32_T)i3n - 1) << 3)) + 56 *
                 ((int32_T)i4n - 1)) + 168 * ((int32_T)i5n - 1)) - 1]) - Qdown
        [((((i28 + ((i29 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
           ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1]);
      if ((SBROnOff == 1.0) && (SBRspeedOnOff == 0.0)) {
        /*  Sto eseguendo la rete full */
        st.site = &r_emlrtRSI;
        interpolate(&st, G, Qdown, Wdown_data, Wdown_size);
      }
    } else {
      if ((ctr == -1.0) && (ctrN == -1.0)) {
        if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
          emlrtIntegerCheckR2012b(i1, &sb_emlrtDCI, sp);
        }

        i24 = (int32_T)i1;
        if ((i24 < 1) || (i24 > 2)) {
          emlrtDynamicBoundsCheckR2012b(i24, 1, 2, &pd_emlrtBCI, sp);
        }

        if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
          emlrtIntegerCheckR2012b(i2, &sb_emlrtDCI, sp);
        }

        i25 = (int32_T)i2;
        if ((i25 < 1) || (i25 > 4)) {
          emlrtDynamicBoundsCheckR2012b(i25, 1, 4, &qd_emlrtBCI, sp);
        }

        if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
          emlrtIntegerCheckR2012b(i5, &sb_emlrtDCI, sp);
        }

        if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
          emlrtIntegerCheckR2012b(i1n, &tb_emlrtDCI, sp);
        }

        i26 = (int32_T)i1n;
        if ((i26 < 1) || (i26 > 2)) {
          emlrtDynamicBoundsCheckR2012b(i26, 1, 2, &rd_emlrtBCI, sp);
        }

        if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
          emlrtIntegerCheckR2012b(i2n, &tb_emlrtDCI, sp);
        }

        i27 = (int32_T)i2n;
        if ((i27 < 1) || (i27 > 4)) {
          emlrtDynamicBoundsCheckR2012b(i27, 1, 4, &sd_emlrtBCI, sp);
        }

        if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
          emlrtIntegerCheckR2012b(i5n, &tb_emlrtDCI, sp);
        }

        if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
          emlrtIntegerCheckR2012b(i1, &ub_emlrtDCI, sp);
        }

        i28 = (int32_T)i1;
        if ((i28 < 1) || (i28 > 2)) {
          emlrtDynamicBoundsCheckR2012b(i28, 1, 2, &td_emlrtBCI, sp);
        }

        if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
          emlrtIntegerCheckR2012b(i2, &ub_emlrtDCI, sp);
        }

        i29 = (int32_T)i2;
        if ((i29 < 1) || (i29 > 4)) {
          emlrtDynamicBoundsCheckR2012b(i29, 1, 4, &ud_emlrtBCI, sp);
        }

        if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
          emlrtIntegerCheckR2012b(i5, &ub_emlrtDCI, sp);
        }

        if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
          emlrtIntegerCheckR2012b(i1, &vb_emlrtDCI, sp);
        }

        i30 = (int32_T)i1;
        if ((i30 < 1) || (i30 > 2)) {
          emlrtDynamicBoundsCheckR2012b(i30, 1, 2, &vd_emlrtBCI, sp);
        }

        if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
          emlrtIntegerCheckR2012b(i2, &vb_emlrtDCI, sp);
        }

        i31 = (int32_T)i2;
        if ((i31 < 1) || (i31 > 4)) {
          emlrtDynamicBoundsCheckR2012b(i31, 1, 4, &wd_emlrtBCI, sp);
        }

        if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
          emlrtIntegerCheckR2012b(i5, &vb_emlrtDCI, sp);
        }

        Qdown[((((i30 + ((i31 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
                ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qdown
          [((((i24 + ((i25 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
             ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] + alpha *
          (((real_T)reward + b_gamma * Qdown[((((i26 + ((i27 - 1) << 1)) +
               (((int32_T)i3n - 1) << 3)) + 56 * ((int32_T)i4n - 1)) + 168 *
             ((int32_T)i5n - 1)) - 1]) - Qdown[((((i28 + ((i29 - 1) << 1)) +
              (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 *
            ((int32_T)i5 - 1)) - 1]);
        if ((SBROnOff == 1.0) && (SBRspeedOnOff == 0.0)) {
          /*  Sto eseguendo la rete full */
          st.site = &s_emlrtRSI;
          interpolate(&st, G, Qdown, Wdown_data, Wdown_size);
        }
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  *rimbalzi = counter;
  *chk = -1.0;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (PongEffectTrunc.c) */
