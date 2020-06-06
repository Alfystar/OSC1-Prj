/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lusolve.c
 *
 * Code generation for function 'lusolve'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PongEffectRLSpeed.h"
#include "lusolve.h"
#include "xtrsm.h"
#include "PongEffectRLSpeed_emxutil.h"
#include "warning.h"
#include "xgetrf.h"

/* Variable Definitions */
static emlrtRSInfo hb_emlrtRSI = { 67, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 109,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 107,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 90, /* lineNo */
  "warn_singular",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRTEInfo d_emlrtRTEI = { 1, /* lineNo */
  19,                                  /* colNo */
  "lusolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 107,/* lineNo */
  2,                                   /* colNo */
  "lusolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pName */
};

/* Function Declarations */
static void warn_singular(const emlrtStack *sp);

/* Function Definitions */
static void warn_singular(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yb_emlrtRSI;
  warning(&st);
}

void lusolve(const emlrtStack *sp, const emxArray_real_T *A, real_T B_data[])
{
  emxArray_real_T *b_A;
  int32_T info;
  int32_T loop_ub;
  int32_T ipiv_data[504];
  int32_T ipiv_size[2];
  real_T temp;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_A, 2, &d_emlrtRTEI, true);
  st.site = &hb_emlrtRSI;
  info = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(&st, b_A, info, &o_emlrtRTEI);
  loop_ub = A->size[0] * A->size[1];
  for (info = 0; info < loop_ub; info++) {
    b_A->data[info] = A->data[info];
  }

  b_st.site = &jb_emlrtRSI;
  xgetrf(&b_st, A->size[1], A->size[1], b_A, A->size[1], ipiv_data, ipiv_size,
         &info);
  if (((A->size[0] != 1) || (A->size[1] != 1)) && (info > 0)) {
    b_st.site = &ib_emlrtRSI;
    warn_singular(&b_st);
  }

  info = A->size[1];
  for (loop_ub = 0; loop_ub <= info - 2; loop_ub++) {
    if (ipiv_data[loop_ub] != loop_ub + 1) {
      temp = B_data[loop_ub];
      B_data[loop_ub] = B_data[ipiv_data[loop_ub] - 1];
      B_data[ipiv_data[loop_ub] - 1] = temp;
    }
  }

  xtrsm(A->size[1], b_A, A->size[1], B_data, A->size[1]);
  b_xtrsm(A->size[1], b_A, A->size[1], B_data, A->size[1]);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (lusolve.c) */
