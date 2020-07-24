/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RBFMatrix_data.c
 *
 * Code generation for function 'RBFMatrix_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RBFMatrix.h"
#include "RBFMatrix_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
real_T Ln;
real_T Hn;
real_T V[7];
real_T velSig;
real_T beta;
real_T L;
real_T H;
uint32_T Ln_dirty;
uint32_T Hn_dirty;
uint32_T V_dirty;
uint32_T velSig_dirty;
uint32_T beta_dirty;
uint32_T L_dirty;
uint32_T H_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131482U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "RBFMatrix",                         /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* End of code generation (RBFMatrix_data.c) */
