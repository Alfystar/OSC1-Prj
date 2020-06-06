/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PongEffectIbrid_terminate.c
 *
 * Code generation for function 'PongEffectIbrid_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PongEffectIbrid.h"
#include "PongEffectIbrid_terminate.h"
#include "PongEffectIbrid_mexutil.h"
#include "_coder_PongEffectIbrid_mex.h"
#include "PongEffectIbrid_data.h"

/* Function Definitions */
void PongEffectIbrid_atexit(void)
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

void PongEffectIbrid_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (PongEffectIbrid_terminate.c) */
