/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PongEffectTrunc_terminate.c
 *
 * Code generation for function 'PongEffectTrunc_terminate'
 *
 */

/* Include files */
#include "PongEffectTrunc_terminate.h"
#include "PongEffectTrunc.h"
#include "PongEffectTrunc_data.h"
#include "PongEffectTrunc_mexutil.h"
#include "_coder_PongEffectTrunc_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void PongEffectTrunc_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrt_synchGlobalsFromML(&st);
  emlrt_synchGlobalsToML(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void PongEffectTrunc_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (PongEffectTrunc_terminate.c) */
