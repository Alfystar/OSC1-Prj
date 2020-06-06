/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_PongEffectRLSpeed_mex.c
 *
 * Code generation for function '_coder_PongEffectRLSpeed_mex'
 *
 */

/* Include files */
#include "PongEffectRLSpeed.h"
#include "_coder_PongEffectRLSpeed_mex.h"
#include "PongEffectRLSpeed_terminate.h"
#include "_coder_PongEffectRLSpeed_api.h"
#include "PongEffectRLSpeed_initialize.h"
#include "PongEffectRLSpeed_data.h"

/* Function Declarations */
static void PongEffectRLSpeed_mexFunction(int32_T nlhs, mxArray *plhs[7],
  int32_T nrhs, const mxArray *prhs[10]);

/* Function Definitions */
static void PongEffectRLSpeed_mexFunction(int32_T nlhs, mxArray *plhs[7],
  int32_T nrhs, const mxArray *prhs[10])
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
                        17, "PongEffectRLSpeed");
  }

  if (nlhs > 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 17,
                        "PongEffectRLSpeed");
  }

  /* Call the function. */
  PongEffectRLSpeed_api(prhs, nlhs, outputs);

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
  mexAtExit(PongEffectRLSpeed_atexit);

  /* Module initialization. */
  PongEffectRLSpeed_initialize();

  /* Dispatch the entry-point. */
  PongEffectRLSpeed_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  PongEffectRLSpeed_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_PongEffectRLSpeed_mex.c) */
