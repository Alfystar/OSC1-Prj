/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_PongEffectTrunc_mex.c
 *
 * Code generation for function '_coder_PongEffectTrunc_mex'
 *
 */

/* Include files */
#include "PongEffectTrunc.h"
#include "_coder_PongEffectTrunc_mex.h"
#include "PongEffectTrunc_terminate.h"
#include "_coder_PongEffectTrunc_api.h"
#include "PongEffectTrunc_initialize.h"
#include "PongEffectTrunc_data.h"

/* Function Declarations */
static void PongEffectTrunc_mexFunction(int32_T nlhs, mxArray *plhs[7], int32_T
  nrhs, const mxArray *prhs[10]);

/* Function Definitions */
static void PongEffectTrunc_mexFunction(int32_T nlhs, mxArray *plhs[7], int32_T
  nrhs, const mxArray *prhs[10])
{
  const mxArray *outputs[7];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 10, 4,
                        15, "PongEffectTrunc");
  }

  if (nlhs > 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "PongEffectTrunc");
  }

  /* Call the function. */
  PongEffectTrunc_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(PongEffectTrunc_atexit);

  /* Module initialization. */
  PongEffectTrunc_initialize();

  /* Dispatch the entry-point. */
  PongEffectTrunc_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  PongEffectTrunc_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_PongEffectTrunc_mex.c) */
