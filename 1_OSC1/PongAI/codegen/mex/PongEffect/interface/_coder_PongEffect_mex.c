/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_PongEffect_mex.c
 *
 * Code generation for function '_coder_PongEffect_mex'
 *
 */

/* Include files */
#include "PongEffect.h"
#include "_coder_PongEffect_mex.h"
#include "PongEffect_terminate.h"
#include "_coder_PongEffect_api.h"
#include "PongEffect_initialize.h"
#include "PongEffect_data.h"

/* Function Declarations */
static void PongEffect_mexFunction(int32_T nlhs, mxArray *plhs[7], int32_T nrhs,
  const mxArray *prhs[10]);

/* Function Definitions */
static void PongEffect_mexFunction(int32_T nlhs, mxArray *plhs[7], int32_T nrhs,
  const mxArray *prhs[10])
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
                        10, "PongEffect");
  }

  if (nlhs > 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 10,
                        "PongEffect");
  }

  /* Call the function. */
  PongEffect_api(prhs, nlhs, outputs);

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
  mexAtExit(PongEffect_atexit);

  /* Module initialization. */
  PongEffect_initialize();

  /* Dispatch the entry-point. */
  PongEffect_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  PongEffect_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_PongEffect_mex.c) */
