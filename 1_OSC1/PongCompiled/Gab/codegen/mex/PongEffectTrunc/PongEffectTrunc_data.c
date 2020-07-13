/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PongEffectTrunc_data.c
 *
 * Code generation for function 'PongEffectTrunc_data'
 *
 */

/* Include files */
#include "PongEffectTrunc_data.h"
#include "PongEffectTrunc.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
real_T beta;
real_T L;
real_T H;
real_T eps;
real_T alpha;
real_T b_gamma;
real_T Ln;
real_T Hn;
real_T V[7];
real_T velSig;
uint32_T beta_dirty;
uint32_T L_dirty;
uint32_T H_dirty;
uint32_T eps_dirty;
uint32_T alpha_dirty;
uint32_T gamma_dirty;
uint32_T Ln_dirty;
uint32_T Hn_dirty;
uint32_T V_dirty;
uint32_T velSig_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131594U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "PongEffectTrunc",                   /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo f_emlrtRSI = { 80,         /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "/home/gabriele/Scrivania/osc1-2/1_OSC1/PongCompiled/Gab/PongEffectTrunc.m"/* pathName */
};

emlrtRSInfo g_emlrtRSI = { 90,         /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "/home/gabriele/Scrivania/osc1-2/1_OSC1/PongCompiled/Gab/PongEffectTrunc.m"/* pathName */
};

emlrtRSInfo i_emlrtRSI = { 115,        /* lineNo */
  "PongEffectTrunc",                   /* fcnName */
  "/home/gabriele/Scrivania/osc1-2/1_OSC1/PongCompiled/Gab/PongEffectTrunc.m"/* pathName */
};

emlrtRSInfo t_emlrtRSI = { 18,         /* lineNo */
  "ifWhileCond",                       /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/ifWhileCond.m"/* pathName */
};

emlrtRSInfo u_emlrtRSI = { 31,         /* lineNo */
  "checkNoNaNs",                       /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/ifWhileCond.m"/* pathName */
};

emlrtRSInfo v_emlrtRSI = { 21,         /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo xb_emlrtRSI = { 111,       /* lineNo */
  "cmldiv",                            /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgetrfs.m"/* pathName */
};

emlrtRSInfo ac_emlrtRSI = { 100,       /* lineNo */
  "cmldiv",                            /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgetrfs.m"/* pathName */
};

emlrtRSInfo bc_emlrtRSI = { 68,        /* lineNo */
  "cmldiv",                            /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgetrfs.m"/* pathName */
};

emlrtRSInfo cc_emlrtRSI = { 54,        /* lineNo */
  "cmldiv",                            /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgetrfs.m"/* pathName */
};

emlrtRSInfo dc_emlrtRSI = { 9,         /* lineNo */
  "int",                               /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/int.m"/* pathName */
};

emlrtRSInfo ec_emlrtRSI = { 28,        /* lineNo */
  "repmat",                            /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/elmat/repmat.m"/* pathName */
};

emlrtRSInfo fc_emlrtRSI = { 8,         /* lineNo */
  "majority",                          /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/majority.m"/* pathName */
};

emlrtRSInfo gc_emlrtRSI = { 31,        /* lineNo */
  "infocheck",                         /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"/* pathName */
};

emlrtRSInfo mc_emlrtRSI = { 85,        /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

emlrtRSInfo nc_emlrtRSI = { 86,        /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

emlrtRSInfo oc_emlrtRSI = { 91,        /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

emlrtRSInfo pc_emlrtRSI = { 119,       /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

emlrtRSInfo qc_emlrtRSI = { 123,       /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

emlrtRSInfo sc_emlrtRSI = { 135,       /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

emlrtRSInfo tc_emlrtRSI = { 137,       /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

emlrtRSInfo uc_emlrtRSI = { 142,       /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

emlrtRSInfo vc_emlrtRSI = { 148,       /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

emlrtRSInfo wc_emlrtRSI = { 152,       /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

emlrtRSInfo fd_emlrtRSI = { 93,        /* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

emlrtRSInfo gd_emlrtRSI = { 80,        /* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

emlrtRSInfo hd_emlrtRSI = { 79,        /* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

emlrtRSInfo id_emlrtRSI = { 59,        /* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

emlrtRSInfo rd_emlrtRSI = { 132,       /* lineNo */
  "mtimes",                            /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pathName */
};

emlrtRSInfo sd_emlrtRSI = { 32,        /* lineNo */
  "xdotu",                             /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+blas/xdotu.m"/* pathName */
};

emlrtRSInfo td_emlrtRSI = { 49,        /* lineNo */
  "xdot",                              /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+blas/xdot.m"/* pathName */
};

emlrtRTEInfo h_emlrtRTEI = { 48,       /* lineNo */
  13,                                  /* colNo */
  "infocheck",                         /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"/* pName */
};

emlrtRTEInfo i_emlrtRTEI = { 45,       /* lineNo */
  13,                                  /* colNo */
  "infocheck",                         /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"/* pName */
};

/* End of code generation (PongEffectTrunc_data.c) */
