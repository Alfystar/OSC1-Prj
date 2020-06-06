/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_RBFMatrix_mex.c
 *
 * Code generation for function '_coder_RBFMatrix_mex'
 *
 */

/* Include files */
#include "RBFMatrix.h"
#include "_coder_RBFMatrix_mex.h"
#include "RBFMatrix_terminate.h"
#include "_coder_RBFMatrix_api.h"
#include "RBFMatrix_initialize.h"
#include "RBFMatrix_data.h"

/* Function Declarations */
static void RBFMatrix_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs);

/* Function Definitions */
static void RBFMatrix_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs)
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4, 9,
                        "RBFMatrix");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 9,
                        "RBFMatrix");
  }

  /* Call the function. */
  RBFMatrix_api(nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  (void)prhs;
  mexAtExit(RBFMatrix_atexit);

  /* Module initialization. */
  RBFMatrix_initialize();

  /* Dispatch the entry-point. */
  RBFMatrix_mexFunction(nlhs, plhs, nrhs);

  /* Module termination. */
  RBFMatrix_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_RBFMatrix_mex.c) */
