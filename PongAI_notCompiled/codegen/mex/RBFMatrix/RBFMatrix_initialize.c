/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RBFMatrix_initialize.c
 *
 * Code generation for function 'RBFMatrix_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RBFMatrix_mexutil.h"
#include "RBFMatrix.h"
#include "RBFMatrix_initialize.h"
#include "_coder_RBFMatrix_mex.h"
#include "RBFMatrix_data.h"

/* Function Declarations */
static void RBFMatrix_once(const emlrtStack *sp);

/* Function Definitions */
static void RBFMatrix_once(const emlrtStack *sp)
{
  int32_T i0;
  H = 8.0;
  H_dirty = 1U;
  L = 10.0;
  L_dirty = 1U;
  beta = 0.3;
  beta_dirty = 1U;
  velSig = 3.0;
  velSig_dirty = 1U;
  for (i0 = 0; i0 < 7; i0++) {
    V[i0] = 1.0 + (real_T)i0;
  }

  V_dirty = 1U;
  Hn = 4.0;
  Hn_dirty = 1U;
  Ln = 2.0;
  Ln_dirty = 1U;
  emlrtSetGlobalSyncFcn(sp, (void (*)(const void *))emlrt_synchGlobalsToML);
}

void RBFMatrix_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    RBFMatrix_once(&st);
  }
}

/* End of code generation (RBFMatrix_initialize.c) */
