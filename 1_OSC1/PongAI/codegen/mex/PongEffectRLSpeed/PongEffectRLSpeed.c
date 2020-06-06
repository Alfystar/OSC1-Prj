/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PongEffectRLSpeed.c
 *
 * Code generation for function 'PongEffectRLSpeed'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "PongEffectRLSpeed.h"
#include "ifWhileCond.h"
#include "PongEffectRLSpeed_emxutil.h"
#include "PongEffectRLSpeed_mexutil.h"
#include "lusolve.h"
#include "qrsolve.h"
#include "eml_int_forloop_overflow_check.h"
#include "PongEffectRLSpeed_data.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T_504
#define struct_emxArray_real_T_504

struct emxArray_real_T_504
{
  real_T data[504];
  int32_T size[1];
};

#endif                                 /*struct_emxArray_real_T_504*/

#ifndef typedef_emxArray_real_T_504
#define typedef_emxArray_real_T_504

typedef struct emxArray_real_T_504 emxArray_real_T_504;

#endif                                 /*typedef_emxArray_real_T_504*/

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 351, /* lineNo */
  5,                                   /* colNo */
  "id2Coord",                          /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pName */
};

static emlrtRSInfo emlrtRSI = { 31,    /* lineNo */
  "PongEffectRLSpeed",                 /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 32,  /* lineNo */
  "PongEffectRLSpeed",                 /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 36,  /* lineNo */
  "PongEffectRLSpeed",                 /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 37,  /* lineNo */
  "PongEffectRLSpeed",                 /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 38,  /* lineNo */
  "PongEffectRLSpeed",                 /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 80,  /* lineNo */
  "PongEffectRLSpeed",                 /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 90,  /* lineNo */
  "PongEffectRLSpeed",                 /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 107, /* lineNo */
  "PongEffectRLSpeed",                 /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 255, /* lineNo */
  "RBFMatrix",                         /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 257, /* lineNo */
  "RBFMatrix",                         /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 260, /* lineNo */
  "RBFMatrix",                         /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 263, /* lineNo */
  "RBFMatrix",                         /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 49,  /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 94,  /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 19,  /* lineNo */
  "checkAndSaturateExpandSize",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\checkAndSaturateExpandSize.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 350, /* lineNo */
  "id2Coord",                          /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 351, /* lineNo */
  "id2Coord",                          /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 45,  /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 55,  /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 35,  /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 64,  /* lineNo */
  "fltpower",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 40,  /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 124,/* lineNo */
  "scalar_float_power",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 247,/* lineNo */
  "interpolate",                       /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 249,/* lineNo */
  "interpolate",                       /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 277,/* lineNo */
  "Bvector",                           /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 20, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 42, /* lineNo */
  "mldiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 44, /* lineNo */
  "mldiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 60,    /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 6, /* lineNo */
  53,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 247,/* lineNo */
  1,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 31,/* lineNo */
  4,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 92,/* lineNo */
  5,                                   /* colNo */
  "eye",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 32,/* lineNo */
  9,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 267,/* lineNo */
  9,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 267,/* lineNo */
  5,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 32,/* lineNo */
  5,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 255,/* lineNo */
  15,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 16,/* lineNo */
  19,                                  /* colNo */
  "mldivide",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 247,   /* lineNo */
  1,                                   /* colNo */
  "interpolate",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 247, /* lineNo */
  1,                                   /* colNo */
  "interpolate",                       /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  2,                                   /* iLast */
  278,                                 /* lineNo */
  12,                                  /* colNo */
  "Q",                                 /* aName */
  "Bvector",                           /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 278, /* lineNo */
  12,                                  /* colNo */
  "Bvector",                           /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  278,                                 /* lineNo */
  12,                                  /* colNo */
  "Q",                                 /* aName */
  "Bvector",                           /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  7,                                   /* iLast */
  278,                                 /* lineNo */
  12,                                  /* colNo */
  "Q",                                 /* aName */
  "Bvector",                           /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  278,                                 /* lineNo */
  12,                                  /* colNo */
  "Q",                                 /* aName */
  "Bvector",                           /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  278,                                 /* lineNo */
  5,                                   /* colNo */
  "B",                                 /* aName */
  "Bvector",                           /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 1,     /* nDims */
  32,                                  /* lineNo */
  5,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { 2,   /* nDims */
  32,                                  /* lineNo */
  5,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { 2,   /* nDims */
  267,                                 /* lineNo */
  5,                                   /* colNo */
  "RBFMatrix",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 55,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 61,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 12,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  93,                                  /* lineNo */
  16,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 93,  /* lineNo */
  16,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  93,                                  /* lineNo */
  16,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  93,                                  /* lineNo */
  39,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 93,  /* lineNo */
  39,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  93,                                  /* lineNo */
  39,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  130,                                 /* lineNo */
  12,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 130, /* lineNo */
  12,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  130,                                 /* lineNo */
  12,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  130,                                 /* lineNo */
  40,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 130, /* lineNo */
  40,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  130,                                 /* lineNo */
  40,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  146,                                 /* lineNo */
  31,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 146, /* lineNo */
  31,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  146,                                 /* lineNo */
  31,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  146,                                 /* lineNo */
  73,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 146, /* lineNo */
  73,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  146,                                 /* lineNo */
  73,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  146,                                 /* lineNo */
  98,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 146, /* lineNo */
  98,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  146,                                 /* lineNo */
  98,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  146,                                 /* lineNo */
  9,                                   /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 146, /* lineNo */
  9,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  146,                                 /* lineNo */
  9,                                   /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  149,                                 /* lineNo */
  31,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 149, /* lineNo */
  31,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  149,                                 /* lineNo */
  31,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  149,                                 /* lineNo */
  73,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 149, /* lineNo */
  73,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  149,                                 /* lineNo */
  73,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  149,                                 /* lineNo */
  101,                                 /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 149, /* lineNo */
  101,                                 /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  149,                                 /* lineNo */
  101,                                 /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  149,                                 /* lineNo */
  9,                                   /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 149, /* lineNo */
  9,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  149,                                 /* lineNo */
  9,                                   /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  152,                                 /* lineNo */
  31,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 152, /* lineNo */
  31,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  152,                                 /* lineNo */
  31,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  152,                                 /* lineNo */
  73,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 152, /* lineNo */
  73,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  152,                                 /* lineNo */
  73,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  152,                                 /* lineNo */
  100,                                 /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 152, /* lineNo */
  100,                                 /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  152,                                 /* lineNo */
  100,                                 /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  152,                                 /* lineNo */
  9,                                   /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 152, /* lineNo */
  9,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  152,                                 /* lineNo */
  9,                                   /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  155,                                 /* lineNo */
  34,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 155, /* lineNo */
  34,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  155,                                 /* lineNo */
  34,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  155,                                 /* lineNo */
  79,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 155, /* lineNo */
  79,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  155,                                 /* lineNo */
  79,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  155,                                 /* lineNo */
  104,                                 /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 155, /* lineNo */
  104,                                 /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  155,                                 /* lineNo */
  104,                                 /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  155,                                 /* lineNo */
  9,                                   /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 155, /* lineNo */
  9,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  155,                                 /* lineNo */
  9,                                   /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  158,                                 /* lineNo */
  34,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 158, /* lineNo */
  34,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  158,                                 /* lineNo */
  34,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  158,                                 /* lineNo */
  79,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 158, /* lineNo */
  79,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  158,                                 /* lineNo */
  79,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  158,                                 /* lineNo */
  107,                                 /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 158,/* lineNo */
  107,                                 /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  158,                                 /* lineNo */
  107,                                 /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  158,                                 /* lineNo */
  9,                                   /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 158,/* lineNo */
  9,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  158,                                 /* lineNo */
  9,                                   /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  161,                                 /* lineNo */
  34,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 161,/* lineNo */
  34,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  161,                                 /* lineNo */
  34,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  161,                                 /* lineNo */
  79,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 161,/* lineNo */
  79,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  161,                                 /* lineNo */
  79,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  161,                                 /* lineNo */
  106,                                 /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 161,/* lineNo */
  106,                                 /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  161,                                 /* lineNo */
  106,                                 /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  161,                                 /* lineNo */
  9,                                   /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 161,/* lineNo */
  9,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  161,                                 /* lineNo */
  9,                                   /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  164,                                 /* lineNo */
  33,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 164,/* lineNo */
  33,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  164,                                 /* lineNo */
  33,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  164,                                 /* lineNo */
  77,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 164,/* lineNo */
  77,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  164,                                 /* lineNo */
  77,                                  /* colNo */
  "Qup",                               /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  164,                                 /* lineNo */
  102,                                 /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 164,/* lineNo */
  102,                                 /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  164,                                 /* lineNo */
  102,                                 /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  164,                                 /* lineNo */
  9,                                   /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 164,/* lineNo */
  9,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  164,                                 /* lineNo */
  9,                                   /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  167,                                 /* lineNo */
  33,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 167,/* lineNo */
  33,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  167,                                 /* lineNo */
  33,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  167,                                 /* lineNo */
  77,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 167,/* lineNo */
  77,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  167,                                 /* lineNo */
  77,                                  /* colNo */
  "Qstill",                            /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  167,                                 /* lineNo */
  105,                                 /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 167,/* lineNo */
  105,                                 /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  167,                                 /* lineNo */
  105,                                 /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  167,                                 /* lineNo */
  9,                                   /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 167,/* lineNo */
  9,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  167,                                 /* lineNo */
  9,                                   /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  170,                                 /* lineNo */
  33,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 170,/* lineNo */
  33,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  170,                                 /* lineNo */
  33,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  170,                                 /* lineNo */
  77,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 170,/* lineNo */
  77,                                  /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  170,                                 /* lineNo */
  77,                                  /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  170,                                 /* lineNo */
  104,                                 /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 170,/* lineNo */
  104,                                 /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  170,                                 /* lineNo */
  104,                                 /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  170,                                 /* lineNo */
  9,                                   /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 170,/* lineNo */
  9,                                   /* colNo */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  170,                                 /* lineNo */
  9,                                   /* colNo */
  "Qdown",                             /* aName */
  "PongEffectRLSpeed",                 /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  9,                                   /* colNo */
  "G",                                 /* aName */
  "RBFMatrix",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\PongEffectRLSpeed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo bd_emlrtRSI = { 60, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

/* Function Declarations */
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static void id2Coord(const emlrtStack *sp, real_T id, real_T *i1, real_T *i2,
                     real_T *i3, real_T *i4, real_T *i5);
static void interpolate(const emlrtStack *sp, const emxArray_real_T *G, const
  real_T Q[504], real_T w_data[], int32_T w_size[1]);
static void state2index(real_T Xball, real_T Yball, real_T Ybarr, real_T VxBall,
  real_T VyBall, real_T *i1, real_T *i2, real_T *i3, real_T *i4, real_T *i5);

/* Function Definitions */
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m30;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m30, 3, pArrays, "feval", true, location);
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

  /*  function [id] = coord2Id(i1,i2,i3,i4,i5) */
  /*  %Seguiamo l'algoritmo row-major */
  /*  %https://en.wikipedia.org/wiki/Row-_and_column-major_order */
  /*  global Ln Hn V velSig; */
  /*   */
  /*  if (i1>Ln || i2>Hn || i3>length(V) || i4>velSig || i5>velSig) */
  /*      fprintf("[idCenter]\t\t### index out of range ###\n") */
  /*  end */
  /*   */
  /*  %id=id0+1.....il +1 serve per avere da 1 a n anche se dal punto di vista */
  /*  %matematico si vuole che sia da 0 a n-1 */
  /*   */
  /*  id = i5 + velSig * ((i4-1) + velSig * ((i3-1) + length(V) * ((i2-1) + Hn * (i1-1)))); */
  /*   */
  /*   */
  /*  end */
  /* Seguiamo l'algoritmo row-major */
  /* https://en.wikipedia.org/wiki/Row-_and_column-major_order */
  st.site = &s_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  if (id > velSig * velSig * 7.0 * Hn * Ln) {
    st.site = &t_emlrtRSI;
    b_st.site = &w_emlrtRSI;
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
    c_st.site = &bd_emlrtRSI;
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

  /*  Ritorna una lista dove ogni COLONNA è una coppia di indici */
  /*  che sono vicini dello stato preso in esame di distanza 'dist' */
  /*  function [list] = nearCenter(st,dist) */
  /*  global Ln Hn V velSig; */
  /*  % Ln        Numero divisioni in X */
  /*  % Hn        Numero divisioni in Y */
  /*  % velSig:   2 Var, Vx e Vy, se 1 = neg, 2 = ~0 , 3 = pos, */
  /*   */
  /*  % X1(Xball)  = Xpalla */
  /*  % X2(Yball)  = Ypalla */
  /*  % X3(Ybarr)  = ybarra */
  /*  % X4(VxBall) = 1 = neg, 2 = ~0 , 3 = pos */
  /*  % X5(VyBall) = 1 = neg, 2 = ~0 , 3 = pos */
  /*  % Indici i in base a Ln, Hn e Vn che indicano il livello di */
  /*  % discretizzazione */
  /*  [i1, i2, i3, i4 ,i5] = state2index(st(1),st(2),st(3),st(4),st(5)); */
  /*  list=[]; */
  /*  for I1=i1-dist : i1+dist */
  /*      for I2=i2-dist : i2+dist */
  /*          for I3=i3-dist : i3+dist */
  /*              I4 = i4; */
  /*              I5 = i5; */
  /*              if((I1>=1 && I1<=Ln) && (I2>=1 && I2<=Hn) &&... */
  /*                      (I3>=1 && I3<=length(V)) &&... */
  /*                      (I4>=1 && I4<=velSig) && (I5>=1 && I5<=velSig)) */
  /*                  list = [list [I1;I2;I3;I4;I5]]; */
  /*              end */
  /*          end */
  /*      end */
  /*  end */
  /*  end */
}

static void interpolate(const emlrtStack *sp, const emxArray_real_T *G, const
  real_T Q[504], real_T w_data[], int32_T w_size[1])
{
  emxArray_real_T *b;
  int32_T i1;
  real_T b_i1;
  int32_T loop_ub;
  real_T i2;
  real_T i3;
  real_T i4;
  real_T i5;
  int32_T b_i2;
  int16_T unnamed_idx_0;
  int32_T b_i3;
  int32_T b_i4;
  int32_T b_i5;
  int32_T i6;
  int32_T i7;
  int32_T i8;
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
  emxInit_real_T(sp, &b, 1, &c_emlrtRTEI, true);

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
  /*  function ctr = bestControl(state, Wdown, Wstill, Wup, mode) */
  /*  global beta; */
  /*  ctr = 0; */
  /*  switch(mode) */
  /*      case {0} */
  /*           */
  /*          rho = NodeValue (state); */
  /*           */
  /*          % MAX di MAX da fare */
  /*          [~,I] = max([Wdown'*rho,Wstill'*rho,Wup'*rho]); */
  /*          ctr = I - 2; */
  /*           */
  /*      case 1        % Calcolo un sotto insieme di distanza 4 */
  /*          w = [Wdown, Wstill, Wup]; */
  /*          [list] = nearCenter(state,1); */
  /*          [~, nPoint] = size(list); */
  /*          netVal = (zeros(1,3)); */
  /*          for i = 1 : nPoint */
  /*              % Creo il vettore rho ristretto */
  /*              C = index2state(list(1,i),list(2,i),list(3,i),list(4,i),list(5,i)); */
  /*              rho = exp(-beta*(norm(C-state))); */
  /*              %  Creo 3 vettori netVal per il confronto, da confrontare in seguito */
  /*              for j = 1 : 3 */
  /*                  [id] = coord2Id(list(1,j),list(2,j),list(3,j),list(4,j),list(5,j)); */
  /*                  netVal(j) = netVal(j) + rho * w(id,j);   %w(quale w, quale centro) */
  /*              end */
  /*          end */
  /*          [~,I] = max(netVal); */
  /*          ctr = I - 2; */
  /*  end */
  /*   */
  /*  end */
  /*  Ritorna un vettore */
  /*  function  [rho] = NodeValue (state) */
  /*  global Ln Hn V velSig; */
  /*  global beta; */
  /*  rho = (zeros(Ln * Hn * length(V) * velSig * velSig, 1)); */
  /*   */
  /*  for i = 1 : length(rho) */
  /*      [i1, i2, i3, i4 ,i5] = id2Coord (i);    %Trasformo l'ID, nelle sue coordinate */
  /*      [C1] = index2state(i1, i2, i3, i4 ,i5); */
  /*      rho(i) = exp(-beta*sum((C1-state).^2)); %le rho sono ordinate come la logica di centerId */
  /*       */
  /*  end */
  /*  end */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  Si aspetta G come  e Q come una matrice normale */
  st.site = &bb_emlrtRSI;

  /*  Si aspetta una matrice Q, e ritorna una B in */
  i1 = b->size[0];
  b_i1 = Ln * Hn * 7.0 * velSig * velSig;
  if (!(b_i1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b_i1, &b_emlrtDCI, &st);
  }

  if (b_i1 != (int32_T)muDoubleScalarFloor(b_i1)) {
    emlrtIntegerCheckR2012b(b_i1, &emlrtDCI, &st);
  }

  b->size[0] = (int32_T)b_i1;
  emxEnsureCapacity_real_T(&st, b, i1, &c_emlrtRTEI);
  if (!(b_i1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b_i1, &b_emlrtDCI, &st);
  }

  if (b_i1 != (int32_T)muDoubleScalarFloor(b_i1)) {
    emlrtIntegerCheckR2012b(b_i1, &emlrtDCI, &st);
  }

  loop_ub = (int32_T)b_i1;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b->data[i1] = 0.0;
  }

  i1 = (int32_T)b_i1;
  for (loop_ub = 0; loop_ub < i1; loop_ub++) {
    b_st.site = &db_emlrtRSI;
    id2Coord(&b_st, 1.0 + (real_T)loop_ub, &b_i1, &i2, &i3, &i4, &i5);
    if (b_i1 != (int32_T)muDoubleScalarFloor(b_i1)) {
      emlrtIntegerCheckR2012b(b_i1, &c_emlrtDCI, &st);
    }

    b_i2 = (int32_T)b_i1;
    if ((b_i2 < 1) || (b_i2 > 2)) {
      emlrtDynamicBoundsCheckR2012b(b_i2, 1, 2, &emlrtBCI, &st);
    }

    if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
      emlrtIntegerCheckR2012b(i2, &c_emlrtDCI, &st);
    }

    b_i3 = (int32_T)i2;
    if ((b_i3 < 1) || (b_i3 > 4)) {
      emlrtDynamicBoundsCheckR2012b(b_i3, 1, 4, &b_emlrtBCI, &st);
    }

    if (i3 != (int32_T)muDoubleScalarFloor(i3)) {
      emlrtIntegerCheckR2012b(i3, &c_emlrtDCI, &st);
    }

    b_i4 = (int32_T)i3;
    if ((b_i4 < 1) || (b_i4 > 7)) {
      emlrtDynamicBoundsCheckR2012b(b_i4, 1, 7, &c_emlrtBCI, &st);
    }

    if (i4 != (int32_T)muDoubleScalarFloor(i4)) {
      emlrtIntegerCheckR2012b(i4, &c_emlrtDCI, &st);
    }

    b_i5 = (int32_T)i4;
    if ((b_i5 < 1) || (b_i5 > 3)) {
      emlrtDynamicBoundsCheckR2012b(b_i5, 1, 3, &d_emlrtBCI, &st);
    }

    if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
      emlrtIntegerCheckR2012b(i5, &c_emlrtDCI, &st);
    }

    i6 = (int32_T)i5;
    if ((i6 < 1) || (i6 > 3)) {
      emlrtDynamicBoundsCheckR2012b(i6, 1, 3, &d_emlrtBCI, &st);
    }

    i7 = b->size[0];
    i8 = 1 + loop_ub;
    if ((i8 < 1) || (i8 > i7)) {
      emlrtDynamicBoundsCheckR2012b(i8, 1, i7, &e_emlrtBCI, &st);
    }

    b->data[i8 - 1] = Q[((((b_i2 + ((b_i3 - 1) << 1)) + ((b_i4 - 1) << 3)) + 56 *
                          (b_i5 - 1)) + 168 * (i6 - 1)) - 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /*  g = ( G ); % Fatto fuori per risparmiare passaggi */
  st.site = &cb_emlrtRSI;
  if (b->size[0] != G->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &r_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  b_st.site = &eb_emlrtRSI;
  if ((G->size[0] == 0) || (G->size[1] == 0) || (b->size[0] == 0)) {
    unnamed_idx_0 = (int16_T)G->size[1];
    w_size[0] = unnamed_idx_0;
    if (0 <= unnamed_idx_0 - 1) {
      memset(&w_data[0], 0, (uint32_T)(unnamed_idx_0 * (int32_T)sizeof(real_T)));
    }
  } else if (G->size[0] == G->size[1]) {
    w_size[0] = b->size[0];
    loop_ub = b->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      w_data[i1] = b->data[i1];
    }

    c_st.site = &fb_emlrtRSI;
    lusolve(&c_st, G, w_data);
  } else {
    c_st.site = &gb_emlrtRSI;
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
  int32_T i10;
  real_T d0;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  function [state] = scalar2vect(Xball,Yball,Ybarr,VxBall,VyBall) */
  /*  state = [Xball,Yball,Ybarr,VxBall,VyBall]; */
  /*  end */
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
    i10 = idx + 1;
    for (k = i10; k < 8; k++) {
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

void PongEffectRLSpeed(const emlrtStack *sp, real_T xb0, real_T yb0, real_T ys0,
  real_T Qup[504], real_T Qdown[504], real_T Qstill[504], real_T figOnOff,
  emxArray_real_T *G, real_T SBROnOff, real_T SBRspeedOnOff, real_T *chk, real_T
  *score, real_T *rimbalzi)
{
  emxArray_boolean_T *b_G;
  real_T xb;
  real_T yb;
  real_T ys;
  real_T vx;
  real_T vy;
  int32_T i14;
  int32_T ctrN;
  emxArray_int8_T *b_I;
  emxArray_real_T_504 fd_emlrtRSI;
  real_T fullk;
  int32_T counter;
  int32_T reward;
  int32_T ctr;
  real_T b_fullk;
  real_T i1;
  real_T i2;
  real_T i3;
  real_T i4;
  real_T i5;
  emxArray_real_T *c_G;
  int32_T n;
  int32_T i;
  emxArray_real_T *d_G;
  real_T i1n;
  real_T i2n;
  real_T i3n;
  real_T i4n;
  real_T i5n;
  real_T d1;
  int32_T i15;
  real_T C1[5];
  real_T d2;
  int32_T e_G[2];
  int32_T c_I[2];
  uint32_T j;
  int32_T i16;
  int32_T i17;
  int32_T i18;
  boolean_T guard1 = false;
  real_T b_i1[5];
  real_T z1[5];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  (void)figOnOff;
  (void)SBRspeedOnOff;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_boolean_T(sp, &b_G, 2, &h_emlrtRTEI, true);

  /*  Funzione che permette di eseguire una partita */
  /*  figOnOff: 1 disegna la partita, 0 la esegue soltanto */
  /*  SBROnOff: 1 attiva la rete RBF, 0 usa il classico RL */
  /*  SBRspeedOnOff (utile solo se SBROnOff=1) : 1 Calcolo rapido prendendo */
  /*                        pochi centri vicini, 0 Calcolo totale con tutti i centri */
  /*  Settori Discretizzati */
  beta = 0.3;
  beta_dirty |= 1U;

  /*  [xb0, yb0]: posizione iniziale della pallina */
  /*  [0, yp0]:   posizione iniziale della barretta */
  /*  lunghezza della barretta */
  xb = xb0;
  yb = yb0;
  ys = ys0;

  /*  posizioni correnti di pallina e barretta */
  vx = 0.1;
  vy = 0.1;

  /*  velocità iniziale arbitraria */
  /*  velocità della barretta COSTANTE */
  *score = 0.0;
  i14 = b_G->size[0] * b_G->size[1];
  b_G->size[0] = G->size[0];
  b_G->size[1] = G->size[1];
  emxEnsureCapacity_boolean_T(sp, b_G, i14, &h_emlrtRTEI);
  ctrN = G->size[0] * G->size[1];
  for (i14 = 0; i14 < ctrN; i14++) {
    b_G->data[i14] = (G->data[i14] == 0.0);
  }

  st.site = &emlrtRSI;
  if (ifWhileCond(b_G)) {
    emxInit_int8_T(sp, &b_I, 2, &n_emlrtRTEI, true);

    /*  Per evitare di ricalcolare sempre G che non cambia mai */
    st.site = &b_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    fullk = Ln * Hn * 7.0 * velSig * velSig;
    c_st.site = &p_emlrtRSI;
    if (fullk < 0.0) {
      fullk = 0.0;
    }

    d_st.site = &r_emlrtRSI;
    if ((fullk != muDoubleScalarFloor(fullk)) || muDoubleScalarIsInf(fullk) ||
        (fullk > 2.147483647E+9)) {
      emlrtErrorWithMessageIdR2018a(&d_st, &u_emlrtRTEI,
        "Coder:MATLAB:NonIntegerInput", "Coder:MATLAB:NonIntegerInput", 4, 12,
        MIN_int32_T, 12, MAX_int32_T);
    }

    if (fullk <= 0.0) {
      b_fullk = 0.0;
    } else {
      b_fullk = fullk;
    }

    if (!(b_fullk <= 2.147483647E+9)) {
      emlrtErrorWithMessageIdR2018a(&d_st, &v_emlrtRTEI, "Coder:MATLAB:pmaxsize",
        "Coder:MATLAB:pmaxsize", 0);
    }

    ctr = (int32_T)fullk;
    i14 = b_I->size[0] * b_I->size[1];
    b_I->size[0] = ctr;
    b_I->size[1] = ctr;
    emxEnsureCapacity_int8_T(&b_st, b_I, i14, &i_emlrtRTEI);
    ctrN = ctr * ctr;
    for (i14 = 0; i14 < ctrN; i14++) {
      b_I->data[i14] = 0;
    }

    if (ctr > 0) {
      c_st.site = &q_emlrtRSI;
      if ((1 <= ctr) && (ctr > 2147483646)) {
        d_st.site = &k_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (ctrN = 0; ctrN < ctr; ctrN++) {
        b_I->data[ctrN + b_I->size[0] * ctrN] = 1;
      }
    }

    emxInit_real_T(&b_st, &c_G, 2, &b_emlrtRTEI, true);
    i14 = c_G->size[0] * c_G->size[1];
    c_G->size[0] = b_I->size[0];
    c_G->size[1] = b_I->size[1];
    emxEnsureCapacity_real_T(&st, c_G, i14, &j_emlrtRTEI);
    ctrN = b_I->size[0] * b_I->size[1];
    for (i14 = 0; i14 < ctrN; i14++) {
      c_G->data[i14] = b_I->data[i14];
    }

    if ((b_I->size[0] == 0) || (b_I->size[1] == 0)) {
      n = 0;
    } else {
      n = muIntScalarMax_sint32(b_I->size[0], b_I->size[1]);
    }

    for (i = 0; i <= n - 2; i++) {
      b_st.site = &m_emlrtRSI;
      id2Coord(&b_st, 1.0 + (real_T)i, &i1, &i2, &i3, &i4, &i5);

      /*   %Xball center */
      /*   %Yball center */
      /*       %Ybarr center */
      /*      %VxBall center */
      /*       %VyBall center */
      C1[0] = i1 / Ln * L;
      C1[1] = i2 / Hn * H;
      C1[2] = i3 / 7.0 * V[6];
      C1[3] = i4 - 2.0;
      C1[4] = i5 - 2.0;
      if ((c_G->size[0] == 0) || (c_G->size[1] == 0)) {
        ctr = 0;
      } else {
        ctr = muIntScalarMax_sint32(c_G->size[0], c_G->size[1]);
      }

      i14 = ctr - i;
      for (ctr = 0; ctr <= i14 - 2; ctr++) {
        j = ((uint32_T)i + ctr) + 2U;
        b_st.site = &n_emlrtRSI;
        id2Coord(&b_st, j, &i1, &i2, &i3, &i4, &i5);

        /*   %Xball center */
        /*   %Yball center */
        /*       %Ybarr center */
        /*      %VxBall center */
        /*       %VyBall center */
        /*          fprintf("C_%d,%d - C_%d,%d = (%d-%d)[(%d,%d)(%d,%d)]\n",i1,i2,j1,j2,i,j,C1(1),C1(2),C2(1),C2(2)); */
        b_i1[0] = i1 / Ln * L;
        b_i1[1] = i2 / Hn * H;
        b_i1[2] = i3 / 7.0 * V[6];
        b_i1[3] = i4 - 2.0;
        b_i1[4] = i5 - 2.0;
        for (ctrN = 0; ctrN < 5; ctrN++) {
          fullk = C1[ctrN] - b_i1[ctrN];
          b_i1[ctrN] = fullk;
          z1[ctrN] = fullk * fullk;
        }

        fullk = (((z1[0] + z1[1]) + z1[2]) + z1[3]) + z1[4];
        b_st.site = &o_emlrtRSI;
        c_st.site = &u_emlrtRSI;
        d_st.site = &v_emlrtRSI;
        e_st.site = &x_emlrtRSI;
        f_st.site = &y_emlrtRSI;
        g_st.site = &ab_emlrtRSI;
        if (fullk < 0.0) {
          emlrtErrorWithMessageIdR2018a(&g_st, &w_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 4, "sqrt");
        }

        i15 = c_G->size[0];
        i16 = 1 + i;
        if ((i16 < 1) || (i16 > i15)) {
          emlrtDynamicBoundsCheckR2012b(i16, 1, i15, &kd_emlrtBCI, &st);
        }

        i15 = c_G->size[1];
        if (((int32_T)j < 1) || ((int32_T)j > i15)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)j, 1, i15, &kd_emlrtBCI, &st);
        }

        c_G->data[(i16 + c_G->size[0] * ((int32_T)j - 1)) - 1] =
          muDoubleScalarExp(-beta * muDoubleScalarSqrt(fullk));

        /*          G(i,j) = exp(-beta*norm(C1-C2)); */
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    emxInit_real_T(&st, &d_G, 2, &k_emlrtRTEI, true);
    i14 = d_G->size[0] * d_G->size[1];
    d_G->size[0] = c_G->size[1];
    d_G->size[1] = c_G->size[0];
    emxEnsureCapacity_real_T(&st, d_G, i14, &k_emlrtRTEI);
    ctrN = c_G->size[0];
    for (i14 = 0; i14 < ctrN; i14++) {
      ctr = c_G->size[1];
      for (i15 = 0; i15 < ctr; i15++) {
        d_G->data[i15 + d_G->size[0] * i14] = c_G->data[i14 + c_G->size[0] * i15];
      }
    }

    e_G[0] = c_G->size[0];
    e_G[1] = c_G->size[1];
    emlrtSizeEqCheckNDR2012b(e_G, *(int32_T (*)[2])d_G->size, &c_emlrtECI, &st);
    e_G[0] = c_G->size[0];
    e_G[1] = c_G->size[1];
    c_I[0] = b_I->size[0];
    c_I[1] = b_I->size[1];
    if ((e_G[0] != c_I[0]) || (e_G[1] != c_I[1])) {
      emlrtSizeEqCheckNDR2012b(&e_G[0], &c_I[0], &c_emlrtECI, &st);
    }

    i14 = d_G->size[0] * d_G->size[1];
    d_G->size[0] = c_G->size[0];
    d_G->size[1] = c_G->size[1];
    emxEnsureCapacity_real_T(&st, d_G, i14, &l_emlrtRTEI);
    ctrN = c_G->size[1];
    for (i14 = 0; i14 < ctrN; i14++) {
      ctr = c_G->size[0];
      for (i15 = 0; i15 < ctr; i15++) {
        d_G->data[i15 + d_G->size[0] * i14] = (c_G->data[i15 + c_G->size[0] *
          i14] + c_G->data[i14 + c_G->size[0] * i15]) - (real_T)b_I->data[i15 +
          b_I->size[0] * i14];
      }
    }

    emxFree_int8_T(&b_I);
    i14 = c_G->size[0] * c_G->size[1];
    c_G->size[0] = d_G->size[0];
    c_G->size[1] = d_G->size[1];
    emxEnsureCapacity_real_T(&st, c_G, i14, &j_emlrtRTEI);
    ctrN = d_G->size[0] * d_G->size[1];
    for (i14 = 0; i14 < ctrN; i14++) {
      c_G->data[i14] = d_G->data[i14];
    }

    emxFree_real_T(&d_G);
    i14 = c_G->size[0];
    if (504 < i14) {
      emlrtDimSizeGeqCheckR2012b(504, i14, &emlrtECI, sp);
    }

    i14 = c_G->size[1];
    if (504 < i14) {
      emlrtDimSizeGeqCheckR2012b(504, i14, &b_emlrtECI, sp);
    }

    i14 = G->size[0] * G->size[1];
    G->size[0] = c_G->size[0];
    G->size[1] = c_G->size[1];
    emxEnsureCapacity_real_T(sp, G, i14, &m_emlrtRTEI);
    ctrN = c_G->size[1];
    for (i14 = 0; i14 < ctrN; i14++) {
      ctr = c_G->size[0];
      for (i15 = 0; i15 < ctr; i15++) {
        G->data[i15 + G->size[0] * i14] = c_G->data[i15 + c_G->size[0] * i14];
      }
    }

    emxFree_real_T(&c_G);

    /*  Già GPU Array */
    /*  G = (G); */
  }

  emxFree_boolean_T(&b_G);
  st.site = &c_emlrtRSI;
  interpolate(&st, G, Qup, fd_emlrtRSI.data, fd_emlrtRSI.size);
  st.site = &d_emlrtRSI;
  interpolate(&st, G, Qstill, fd_emlrtRSI.data, fd_emlrtRSI.size);
  st.site = &e_emlrtRSI;
  interpolate(&st, G, Qdown, fd_emlrtRSI.data, fd_emlrtRSI.size);

  /*  finchè la pallina non finisce oltre la barretta... */
  counter = 0;
  while ((xb > 0.0) && (counter < 100)) {
    /*  ricompensa */
    reward = 0;
    ctr = 0;
    ctrN = 0;
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
        st.site = &f_emlrtRSI;
        emlrt_checkEscapedGlobals();
        emlrtRandu(&fullk, 1);
        vy = 0.5 * vy + (-0.02 * fullk + (1.0 - fullk) * 0.02);
      }

      reward = 1;
      counter++;
    }

    /*  aggiorniamo la posizione della barretta con strategia epsilon-greedy */
    st.site = &g_emlrtRSI;
    emlrt_checkEscapedGlobals();
    emlrtRandu(&fullk, 1);
    if (fullk >= eps) {
      /*         if (SBROnOff == 0 ) % procedo con classica RL */
      fullk = (int32_T)muDoubleScalarFloor(i1);
      if (i1 != fullk) {
        emlrtIntegerCheckR2012b(i1, &d_emlrtDCI, sp);
      }

      i14 = (int32_T)i1;
      if ((i14 < 1) || (i14 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, 2, &f_emlrtBCI, sp);
      }

      d1 = (int32_T)muDoubleScalarFloor(i2);
      if (i2 != d1) {
        emlrtIntegerCheckR2012b(i2, &d_emlrtDCI, sp);
      }

      i15 = (int32_T)i2;
      if ((i15 < 1) || (i15 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, 4, &g_emlrtBCI, sp);
      }

      d2 = (int32_T)muDoubleScalarFloor(i5);
      if (i5 != d2) {
        emlrtIntegerCheckR2012b(i5, &d_emlrtDCI, sp);
      }

      if (i1 != fullk) {
        emlrtIntegerCheckR2012b(i1, &e_emlrtDCI, sp);
      }

      if ((i14 < 1) || (i14 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, 2, &h_emlrtBCI, sp);
      }

      if (i2 != d1) {
        emlrtIntegerCheckR2012b(i2, &e_emlrtDCI, sp);
      }

      if ((i15 < 1) || (i15 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, 4, &i_emlrtBCI, sp);
      }

      if (i5 != d2) {
        emlrtIntegerCheckR2012b(i5, &e_emlrtDCI, sp);
      }

      i16 = ((int32_T)i3 - 1) << 3;
      i17 = 56 * ((int32_T)i4 - 1);
      i18 = 168 * ((int32_T)i5 - 1);
      guard1 = false;
      if (Qup[((((i14 + ((i15 - 1) << 1)) + i16) + i17) + i18) - 1] >= Qdown
          [((((i14 + ((i15 - 1) << 1)) + i16) + i17) + i18) - 1]) {
        i14 = ((((i14 + (((int32_T)i2 - 1) << 1)) + i16) + i17) + i18) - 1;
        if ((Qup[i14] >= Qstill[i14]) && (ys + 1.0 <= H - 0.2)) {
          ys += 0.2;
          ctr = 1;
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
            Qstill[(((((int32_T)i1 + (((int32_T)i2 - 1) << 1)) + (((int32_T)i3 -
                 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1))
            - 1]) && (ys - 1.0 >= 0.2))) {
        ys -= 0.2;
        ctr = -1;
      }

      /*         end */
    } else {
      if (fullk < eps) {
        st.site = &h_emlrtRSI;
        emlrt_checkEscapedGlobals();
        emlrtRandu(&fullk, 1);
        if ((fullk < 0.33) && (ys + 1.0 <= H - 0.2)) {
          ys += 0.2;
          ctr = 1;
        } else {
          if ((fullk >= 0.33) && (fullk < 0.66) && (ys - 1.0 >= 0.2)) {
            ys -= 0.2;
            ctr = -1;
          }
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
      fullk = (int32_T)muDoubleScalarFloor(i1n);
      if (i1n != fullk) {
        emlrtIntegerCheckR2012b(i1n, &f_emlrtDCI, sp);
      }

      i14 = (int32_T)i1n;
      if ((i14 < 1) || (i14 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, 2, &j_emlrtBCI, sp);
      }

      d1 = (int32_T)muDoubleScalarFloor(i2n);
      if (i2n != d1) {
        emlrtIntegerCheckR2012b(i2n, &f_emlrtDCI, sp);
      }

      i15 = (int32_T)i2n;
      if ((i15 < 1) || (i15 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, 4, &k_emlrtBCI, sp);
      }

      d2 = (int32_T)muDoubleScalarFloor(i5n);
      if (i5n != d2) {
        emlrtIntegerCheckR2012b(i5n, &f_emlrtDCI, sp);
      }

      if (i1n != fullk) {
        emlrtIntegerCheckR2012b(i1n, &g_emlrtDCI, sp);
      }

      if ((i14 < 1) || (i14 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, 2, &l_emlrtBCI, sp);
      }

      if (i2n != d1) {
        emlrtIntegerCheckR2012b(i2n, &g_emlrtDCI, sp);
      }

      if ((i15 < 1) || (i15 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, 4, &m_emlrtBCI, sp);
      }

      if (i5n != d2) {
        emlrtIntegerCheckR2012b(i5n, &g_emlrtDCI, sp);
      }

      i16 = ((int32_T)i3n - 1) << 3;
      i17 = 56 * ((int32_T)i4n - 1);
      i18 = 168 * ((int32_T)i5n - 1);
      guard1 = false;
      if (Qup[((((i14 + ((i15 - 1) << 1)) + i16) + i17) + i18) - 1] >= Qdown
          [((((i14 + ((i15 - 1) << 1)) + i16) + i17) + i18) - 1]) {
        i14 = ((((i14 + (((int32_T)i2n - 1) << 1)) + i16) + i17) + i18) - 1;
        if ((Qup[i14] >= Qstill[i14]) && (ys + 1.0 <= H - 0.2)) {
          ctrN = 1;
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
        ctrN = -1;
      }
    }

    if (xb <= 0.0) {
      /*  la pallina mi sorpassa, ho perso */
      reward = -5;
    }

    /*  aggiorniamo la funzione Q(X,U) corretta con il valore di Q(X',U') */
    if ((ctr == 1) && (ctrN == 1)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &h_emlrtDCI, sp);
      }

      i14 = (int32_T)i1;
      if ((i14 < 1) || (i14 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, 2, &n_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &h_emlrtDCI, sp);
      }

      i15 = (int32_T)i2;
      if ((i15 < 1) || (i15 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, 4, &o_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &h_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &i_emlrtDCI, sp);
      }

      i16 = (int32_T)i1n;
      if ((i16 < 1) || (i16 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, 2, &p_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &i_emlrtDCI, sp);
      }

      i17 = (int32_T)i2n;
      if ((i17 < 1) || (i17 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, 4, &q_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &i_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &j_emlrtDCI, sp);
      }

      i18 = (int32_T)i1;
      if ((i18 < 1) || (i18 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, 2, &r_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &j_emlrtDCI, sp);
      }

      n = (int32_T)i2;
      if ((n < 1) || (n > 4)) {
        emlrtDynamicBoundsCheckR2012b(n, 1, 4, &s_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &j_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &k_emlrtDCI, sp);
      }

      i = (int32_T)i1;
      if ((i < 1) || (i > 2)) {
        emlrtDynamicBoundsCheckR2012b(i, 1, 2, &t_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &k_emlrtDCI, sp);
      }

      ctr = (int32_T)i2;
      if ((ctr < 1) || (ctr > 4)) {
        emlrtDynamicBoundsCheckR2012b(ctr, 1, 4, &u_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &k_emlrtDCI, sp);
      }

      Qup[((((i + ((ctr - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)
             i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qup[((((i14 + ((i15 - 1)
        << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 *
        ((int32_T)i5 - 1)) - 1] + alpha * (((real_T)reward + b_gamma * Qup
        [((((i16 + ((i17 - 1) << 1)) + (((int32_T)i3n - 1) << 3)) + 56 *
           ((int32_T)i4n - 1)) + 168 * ((int32_T)i5n - 1)) - 1]) - Qup[((((i18 +
        ((n - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) +
        168 * ((int32_T)i5 - 1)) - 1]);
    } else if ((ctr == 1) && (ctrN == 0)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &l_emlrtDCI, sp);
      }

      i14 = (int32_T)i1;
      if ((i14 < 1) || (i14 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, 2, &v_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &l_emlrtDCI, sp);
      }

      i15 = (int32_T)i2;
      if ((i15 < 1) || (i15 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, 4, &w_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &l_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &m_emlrtDCI, sp);
      }

      i16 = (int32_T)i1n;
      if ((i16 < 1) || (i16 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, 2, &x_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &m_emlrtDCI, sp);
      }

      i17 = (int32_T)i2n;
      if ((i17 < 1) || (i17 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, 4, &y_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &m_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &n_emlrtDCI, sp);
      }

      i18 = (int32_T)i1;
      if ((i18 < 1) || (i18 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, 2, &ab_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &n_emlrtDCI, sp);
      }

      n = (int32_T)i2;
      if ((n < 1) || (n > 4)) {
        emlrtDynamicBoundsCheckR2012b(n, 1, 4, &bb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &n_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &o_emlrtDCI, sp);
      }

      i = (int32_T)i1;
      if ((i < 1) || (i > 2)) {
        emlrtDynamicBoundsCheckR2012b(i, 1, 2, &cb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &o_emlrtDCI, sp);
      }

      ctr = (int32_T)i2;
      if ((ctr < 1) || (ctr > 4)) {
        emlrtDynamicBoundsCheckR2012b(ctr, 1, 4, &db_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &o_emlrtDCI, sp);
      }

      Qup[((((i + ((ctr - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)
             i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qup[((((i14 + ((i15 - 1)
        << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 *
        ((int32_T)i5 - 1)) - 1] + alpha * (((real_T)reward + b_gamma * Qstill
        [((((i16 + ((i17 - 1) << 1)) + (((int32_T)i3n - 1) << 3)) + 56 *
           ((int32_T)i4n - 1)) + 168 * ((int32_T)i5n - 1)) - 1]) - Qup[((((i18 +
        ((n - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) +
        168 * ((int32_T)i5 - 1)) - 1]);
    } else if ((ctr == 1) && (ctrN == -1)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &p_emlrtDCI, sp);
      }

      i14 = (int32_T)i1;
      if ((i14 < 1) || (i14 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, 2, &eb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &p_emlrtDCI, sp);
      }

      i15 = (int32_T)i2;
      if ((i15 < 1) || (i15 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, 4, &fb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &p_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &q_emlrtDCI, sp);
      }

      i16 = (int32_T)i1n;
      if ((i16 < 1) || (i16 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, 2, &gb_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &q_emlrtDCI, sp);
      }

      i17 = (int32_T)i2n;
      if ((i17 < 1) || (i17 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, 4, &hb_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &q_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &r_emlrtDCI, sp);
      }

      i18 = (int32_T)i1;
      if ((i18 < 1) || (i18 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, 2, &ib_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &r_emlrtDCI, sp);
      }

      n = (int32_T)i2;
      if ((n < 1) || (n > 4)) {
        emlrtDynamicBoundsCheckR2012b(n, 1, 4, &jb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &r_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &s_emlrtDCI, sp);
      }

      i = (int32_T)i1;
      if ((i < 1) || (i > 2)) {
        emlrtDynamicBoundsCheckR2012b(i, 1, 2, &kb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &s_emlrtDCI, sp);
      }

      ctr = (int32_T)i2;
      if ((ctr < 1) || (ctr > 4)) {
        emlrtDynamicBoundsCheckR2012b(ctr, 1, 4, &lb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &s_emlrtDCI, sp);
      }

      Qup[((((i + ((ctr - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)
             i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qup[((((i14 + ((i15 - 1)
        << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 *
        ((int32_T)i5 - 1)) - 1] + alpha * (((real_T)reward + b_gamma * Qdown
        [((((i16 + ((i17 - 1) << 1)) + (((int32_T)i3n - 1) << 3)) + 56 *
           ((int32_T)i4n - 1)) + 168 * ((int32_T)i5n - 1)) - 1]) - Qup[((((i18 +
        ((n - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) +
        168 * ((int32_T)i5 - 1)) - 1]);
    } else if ((ctr == 0) && (ctrN == 1)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &t_emlrtDCI, sp);
      }

      i14 = (int32_T)i1;
      if ((i14 < 1) || (i14 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, 2, &mb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &t_emlrtDCI, sp);
      }

      i15 = (int32_T)i2;
      if ((i15 < 1) || (i15 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, 4, &nb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &t_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &u_emlrtDCI, sp);
      }

      i16 = (int32_T)i1n;
      if ((i16 < 1) || (i16 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, 2, &ob_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &u_emlrtDCI, sp);
      }

      i17 = (int32_T)i2n;
      if ((i17 < 1) || (i17 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, 4, &pb_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &u_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &v_emlrtDCI, sp);
      }

      i18 = (int32_T)i1;
      if ((i18 < 1) || (i18 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, 2, &qb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &v_emlrtDCI, sp);
      }

      n = (int32_T)i2;
      if ((n < 1) || (n > 4)) {
        emlrtDynamicBoundsCheckR2012b(n, 1, 4, &rb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &v_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &w_emlrtDCI, sp);
      }

      i = (int32_T)i1;
      if ((i < 1) || (i > 2)) {
        emlrtDynamicBoundsCheckR2012b(i, 1, 2, &sb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &w_emlrtDCI, sp);
      }

      ctr = (int32_T)i2;
      if ((ctr < 1) || (ctr > 4)) {
        emlrtDynamicBoundsCheckR2012b(ctr, 1, 4, &tb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &w_emlrtDCI, sp);
      }

      Qstill[((((i + ((ctr - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
               ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qstill
        [((((i14 + ((i15 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
           ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] + alpha *
        (((real_T)reward + b_gamma * Qup[((((i16 + ((i17 - 1) << 1)) +
             (((int32_T)i3n - 1) << 3)) + 56 * ((int32_T)i4n - 1)) + 168 *
           ((int32_T)i5n - 1)) - 1]) - Qstill[((((i18 + ((n - 1) << 1)) +
            (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 *
          ((int32_T)i5 - 1)) - 1]);
    } else if ((ctr == 0) && (ctrN == 0)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &x_emlrtDCI, sp);
      }

      i14 = (int32_T)i1;
      if ((i14 < 1) || (i14 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, 2, &ub_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &x_emlrtDCI, sp);
      }

      i15 = (int32_T)i2;
      if ((i15 < 1) || (i15 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, 4, &vb_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &x_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &y_emlrtDCI, sp);
      }

      i16 = (int32_T)i1n;
      if ((i16 < 1) || (i16 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, 2, &wb_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &y_emlrtDCI, sp);
      }

      i17 = (int32_T)i2n;
      if ((i17 < 1) || (i17 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, 4, &xb_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &y_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &ab_emlrtDCI, sp);
      }

      i18 = (int32_T)i1;
      if ((i18 < 1) || (i18 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, 2, &yb_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &ab_emlrtDCI, sp);
      }

      n = (int32_T)i2;
      if ((n < 1) || (n > 4)) {
        emlrtDynamicBoundsCheckR2012b(n, 1, 4, &ac_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &ab_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &bb_emlrtDCI, sp);
      }

      i = (int32_T)i1;
      if ((i < 1) || (i > 2)) {
        emlrtDynamicBoundsCheckR2012b(i, 1, 2, &bc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &bb_emlrtDCI, sp);
      }

      ctr = (int32_T)i2;
      if ((ctr < 1) || (ctr > 4)) {
        emlrtDynamicBoundsCheckR2012b(ctr, 1, 4, &cc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &bb_emlrtDCI, sp);
      }

      Qstill[((((i + ((ctr - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
               ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qstill
        [((((i14 + ((i15 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
           ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] + alpha *
        (((real_T)reward + b_gamma * Qstill[((((i16 + ((i17 - 1) << 1)) +
             (((int32_T)i3n - 1) << 3)) + 56 * ((int32_T)i4n - 1)) + 168 *
           ((int32_T)i5n - 1)) - 1]) - Qstill[((((i18 + ((n - 1) << 1)) +
            (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 *
          ((int32_T)i5 - 1)) - 1]);
    } else if ((ctr == 0) && (ctrN == -1)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &cb_emlrtDCI, sp);
      }

      i14 = (int32_T)i1;
      if ((i14 < 1) || (i14 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, 2, &dc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &cb_emlrtDCI, sp);
      }

      i15 = (int32_T)i2;
      if ((i15 < 1) || (i15 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, 4, &ec_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &cb_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &db_emlrtDCI, sp);
      }

      i16 = (int32_T)i1n;
      if ((i16 < 1) || (i16 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, 2, &fc_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &db_emlrtDCI, sp);
      }

      i17 = (int32_T)i2n;
      if ((i17 < 1) || (i17 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, 4, &gc_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &db_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &eb_emlrtDCI, sp);
      }

      i18 = (int32_T)i1;
      if ((i18 < 1) || (i18 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, 2, &hc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &eb_emlrtDCI, sp);
      }

      n = (int32_T)i2;
      if ((n < 1) || (n > 4)) {
        emlrtDynamicBoundsCheckR2012b(n, 1, 4, &ic_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &eb_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &fb_emlrtDCI, sp);
      }

      i = (int32_T)i1;
      if ((i < 1) || (i > 2)) {
        emlrtDynamicBoundsCheckR2012b(i, 1, 2, &jc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &fb_emlrtDCI, sp);
      }

      ctr = (int32_T)i2;
      if ((ctr < 1) || (ctr > 4)) {
        emlrtDynamicBoundsCheckR2012b(ctr, 1, 4, &kc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &fb_emlrtDCI, sp);
      }

      Qstill[((((i + ((ctr - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
               ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qstill
        [((((i14 + ((i15 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
           ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] + alpha *
        (((real_T)reward + b_gamma * Qdown[((((i16 + ((i17 - 1) << 1)) +
             (((int32_T)i3n - 1) << 3)) + 56 * ((int32_T)i4n - 1)) + 168 *
           ((int32_T)i5n - 1)) - 1]) - Qstill[((((i18 + ((n - 1) << 1)) +
            (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 *
          ((int32_T)i5 - 1)) - 1]);
    } else if ((ctr == -1) && (ctrN == 1)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &gb_emlrtDCI, sp);
      }

      i14 = (int32_T)i1;
      if ((i14 < 1) || (i14 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, 2, &lc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &gb_emlrtDCI, sp);
      }

      i15 = (int32_T)i2;
      if ((i15 < 1) || (i15 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, 4, &mc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &gb_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &hb_emlrtDCI, sp);
      }

      i16 = (int32_T)i1n;
      if ((i16 < 1) || (i16 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, 2, &nc_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &hb_emlrtDCI, sp);
      }

      i17 = (int32_T)i2n;
      if ((i17 < 1) || (i17 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, 4, &oc_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &hb_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &ib_emlrtDCI, sp);
      }

      i18 = (int32_T)i1;
      if ((i18 < 1) || (i18 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, 2, &pc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &ib_emlrtDCI, sp);
      }

      n = (int32_T)i2;
      if ((n < 1) || (n > 4)) {
        emlrtDynamicBoundsCheckR2012b(n, 1, 4, &qc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &ib_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &jb_emlrtDCI, sp);
      }

      i = (int32_T)i1;
      if ((i < 1) || (i > 2)) {
        emlrtDynamicBoundsCheckR2012b(i, 1, 2, &rc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &jb_emlrtDCI, sp);
      }

      ctr = (int32_T)i2;
      if ((ctr < 1) || (ctr > 4)) {
        emlrtDynamicBoundsCheckR2012b(ctr, 1, 4, &sc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &jb_emlrtDCI, sp);
      }

      Qdown[((((i + ((ctr - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
              ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qdown[((((i14
        + ((i15 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1))
        + 168 * ((int32_T)i5 - 1)) - 1] + alpha * (((real_T)reward + b_gamma *
        Qup[((((i16 + ((i17 - 1) << 1)) + (((int32_T)i3n - 1) << 3)) + 56 *
              ((int32_T)i4n - 1)) + 168 * ((int32_T)i5n - 1)) - 1]) - Qdown
        [((((i18 + ((n - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)
        i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1]);
    } else if ((ctr == -1) && (ctrN == 0)) {
      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &kb_emlrtDCI, sp);
      }

      i14 = (int32_T)i1;
      if ((i14 < 1) || (i14 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, 2, &tc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &kb_emlrtDCI, sp);
      }

      i15 = (int32_T)i2;
      if ((i15 < 1) || (i15 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, 4, &uc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &kb_emlrtDCI, sp);
      }

      if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
        emlrtIntegerCheckR2012b(i1n, &lb_emlrtDCI, sp);
      }

      i16 = (int32_T)i1n;
      if ((i16 < 1) || (i16 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, 2, &vc_emlrtBCI, sp);
      }

      if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
        emlrtIntegerCheckR2012b(i2n, &lb_emlrtDCI, sp);
      }

      i17 = (int32_T)i2n;
      if ((i17 < 1) || (i17 > 4)) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, 4, &wc_emlrtBCI, sp);
      }

      if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
        emlrtIntegerCheckR2012b(i5n, &lb_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &mb_emlrtDCI, sp);
      }

      i18 = (int32_T)i1;
      if ((i18 < 1) || (i18 > 2)) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, 2, &xc_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &mb_emlrtDCI, sp);
      }

      n = (int32_T)i2;
      if ((n < 1) || (n > 4)) {
        emlrtDynamicBoundsCheckR2012b(n, 1, 4, &yc_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &mb_emlrtDCI, sp);
      }

      if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
        emlrtIntegerCheckR2012b(i1, &nb_emlrtDCI, sp);
      }

      i = (int32_T)i1;
      if ((i < 1) || (i > 2)) {
        emlrtDynamicBoundsCheckR2012b(i, 1, 2, &ad_emlrtBCI, sp);
      }

      if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
        emlrtIntegerCheckR2012b(i2, &nb_emlrtDCI, sp);
      }

      ctr = (int32_T)i2;
      if ((ctr < 1) || (ctr > 4)) {
        emlrtDynamicBoundsCheckR2012b(ctr, 1, 4, &bd_emlrtBCI, sp);
      }

      if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
        emlrtIntegerCheckR2012b(i5, &nb_emlrtDCI, sp);
      }

      Qdown[((((i + ((ctr - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
              ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qdown[((((i14
        + ((i15 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1))
        + 168 * ((int32_T)i5 - 1)) - 1] + alpha * (((real_T)reward + b_gamma *
        Qstill[((((i16 + ((i17 - 1) << 1)) + (((int32_T)i3n - 1) << 3)) + 56 *
                 ((int32_T)i4n - 1)) + 168 * ((int32_T)i5n - 1)) - 1]) - Qdown
        [((((i18 + ((n - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)
        i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1]);
    } else {
      if ((ctr == -1) && (ctrN == -1)) {
        if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
          emlrtIntegerCheckR2012b(i1, &ob_emlrtDCI, sp);
        }

        i14 = (int32_T)i1;
        if ((i14 < 1) || (i14 > 2)) {
          emlrtDynamicBoundsCheckR2012b(i14, 1, 2, &cd_emlrtBCI, sp);
        }

        if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
          emlrtIntegerCheckR2012b(i2, &ob_emlrtDCI, sp);
        }

        i15 = (int32_T)i2;
        if ((i15 < 1) || (i15 > 4)) {
          emlrtDynamicBoundsCheckR2012b(i15, 1, 4, &dd_emlrtBCI, sp);
        }

        if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
          emlrtIntegerCheckR2012b(i5, &ob_emlrtDCI, sp);
        }

        if (i1n != (int32_T)muDoubleScalarFloor(i1n)) {
          emlrtIntegerCheckR2012b(i1n, &pb_emlrtDCI, sp);
        }

        i16 = (int32_T)i1n;
        if ((i16 < 1) || (i16 > 2)) {
          emlrtDynamicBoundsCheckR2012b(i16, 1, 2, &ed_emlrtBCI, sp);
        }

        if (i2n != (int32_T)muDoubleScalarFloor(i2n)) {
          emlrtIntegerCheckR2012b(i2n, &pb_emlrtDCI, sp);
        }

        i17 = (int32_T)i2n;
        if ((i17 < 1) || (i17 > 4)) {
          emlrtDynamicBoundsCheckR2012b(i17, 1, 4, &fd_emlrtBCI, sp);
        }

        if (i5n != (int32_T)muDoubleScalarFloor(i5n)) {
          emlrtIntegerCheckR2012b(i5n, &pb_emlrtDCI, sp);
        }

        if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
          emlrtIntegerCheckR2012b(i1, &qb_emlrtDCI, sp);
        }

        i18 = (int32_T)i1;
        if ((i18 < 1) || (i18 > 2)) {
          emlrtDynamicBoundsCheckR2012b(i18, 1, 2, &gd_emlrtBCI, sp);
        }

        if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
          emlrtIntegerCheckR2012b(i2, &qb_emlrtDCI, sp);
        }

        n = (int32_T)i2;
        if ((n < 1) || (n > 4)) {
          emlrtDynamicBoundsCheckR2012b(n, 1, 4, &hd_emlrtBCI, sp);
        }

        if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
          emlrtIntegerCheckR2012b(i5, &qb_emlrtDCI, sp);
        }

        if (i1 != (int32_T)muDoubleScalarFloor(i1)) {
          emlrtIntegerCheckR2012b(i1, &rb_emlrtDCI, sp);
        }

        i = (int32_T)i1;
        if ((i < 1) || (i > 2)) {
          emlrtDynamicBoundsCheckR2012b(i, 1, 2, &id_emlrtBCI, sp);
        }

        if (i2 != (int32_T)muDoubleScalarFloor(i2)) {
          emlrtIntegerCheckR2012b(i2, &rb_emlrtDCI, sp);
        }

        ctr = (int32_T)i2;
        if ((ctr < 1) || (ctr > 4)) {
          emlrtDynamicBoundsCheckR2012b(ctr, 1, 4, &jd_emlrtBCI, sp);
        }

        if (i5 != (int32_T)muDoubleScalarFloor(i5)) {
          emlrtIntegerCheckR2012b(i5, &rb_emlrtDCI, sp);
        }

        Qdown[((((i + ((ctr - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
                ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] = Qdown
          [((((i14 + ((i15 - 1) << 1)) + (((int32_T)i3 - 1) << 3)) + 56 *
             ((int32_T)i4 - 1)) + 168 * ((int32_T)i5 - 1)) - 1] + alpha *
          (((real_T)reward + b_gamma * Qdown[((((i16 + ((i17 - 1) << 1)) +
               (((int32_T)i3n - 1) << 3)) + 56 * ((int32_T)i4n - 1)) + 168 *
             ((int32_T)i5n - 1)) - 1]) - Qdown[((((i18 + ((n - 1) << 1)) +
              (((int32_T)i3 - 1) << 3)) + 56 * ((int32_T)i4 - 1)) + 168 *
            ((int32_T)i5 - 1)) - 1]);
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

/* End of code generation (PongEffectRLSpeed.c) */
