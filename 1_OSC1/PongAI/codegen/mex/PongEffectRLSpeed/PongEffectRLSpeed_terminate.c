/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PongEffectRLSpeed_terminate.c
 *
 * Code generation for function 'PongEffectRLSpeed_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PongEffectRLSpeed.h"
#include "PongEffectRLSpeed_terminate.h"
#include "PongEffectRLSpeed_mexutil.h"
#include "_coder_PongEffectRLSpeed_mex.h"
#include "PongEffectRLSpeed_data.h"

/* Function Definitions */
void PongEffectRLSpeed_atexit(void)
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

void PongEffectRLSpeed_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (PongEffectRLSpeed_terminate.c) */
