/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_RBFMatrix_api.c
 *
 * Code generation for function '_coder_RBFMatrix_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RBFMatrix.h"
#include "_coder_RBFMatrix_api.h"
#include "RBFMatrix_mexutil.h"
#include "RBFMatrix_emxutil.h"
#include "RBFMatrix_data.h"

/* Variable Definitions */
static emlrtRTEInfo h_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_RBFMatrix_api",              /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);

/* Function Definitions */
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m7;
  static const int32_T iv3[2] = { 0, 0 };

  y = NULL;
  m7 = emlrtCreateNumericArray(2, iv3, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m7, &u->data[0]);
  emlrtSetDimensions((mxArray *)m7, u->size, 2);
  emlrtAssign(&y, m7);
  return y;
}

void RBFMatrix_api(int32_T nlhs, const mxArray *plhs[1])
{
  emxArray_real_T *G;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &G, 2, &h_emlrtRTEI, true);

  /* Marshall in global variables */
  MEXGlobalSyncInFunction(&st);

  /* Invoke the target function */
  RBFMatrix(&st, G);

  /* Marshall out global variables */
  MEXGlobalSyncOutFunction(true);

  /* Marshall function outputs */
  G->canFreeData = false;
  plhs[0] = c_emlrt_marshallOut(G);
  emxFree_real_T(&G);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_RBFMatrix_api.c) */
