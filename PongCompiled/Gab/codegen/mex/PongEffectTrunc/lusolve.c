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
#include "lusolve.h"
#include "PongEffectTrunc.h"
#include "PongEffectTrunc_emxutil.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgetrfs.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo sb_emlrtRSI = { 67, /* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 112,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 109,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 124,/* lineNo */
  "InvAtimesX",                        /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 90, /* lineNo */
  "warn_singular",                     /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRTEInfo u_emlrtRTEI = { 124,/* lineNo */
  9,                                   /* colNo */
  "lusolve",                           /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 1, /* lineNo */
  19,                                  /* colNo */
  "lusolve",                           /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pName */
};

/* Function Definitions */
void lusolve(const emlrtStack *sp, const emxArray_real_T *A, const real_T
             B_data[], const int32_T B_size[1], real_T X_data[], int32_T X_size
             [1])
{
  int32_T loop_ub;
  emxArray_real_T *b_A;
  int32_T i;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &sb_emlrtRSI;
  b_st.site = &ub_emlrtRSI;
  X_size[0] = B_size[0];
  loop_ub = B_size[0];
  if (0 <= loop_ub - 1) {
    memcpy(&X_data[0], &B_data[0], loop_ub * sizeof(real_T));
  }

  emxInit_real_T(&b_st, &b_A, 2, &v_emlrtRTEI, true);
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(&b_st, b_A, i, &u_emlrtRTEI);
  loop_ub = A->size[0] * A->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_A->data[i] = A->data[i];
  }

  c_st.site = &vb_emlrtRSI;
  loop_ub = xgetrfs(&c_st, b_A, X_data, X_size);
  emxFree_real_T(&b_A);
  if (((A->size[0] != 1) || (A->size[1] != 1)) && (loop_ub > 0)) {
    b_st.site = &tb_emlrtRSI;
    c_st.site = &hc_emlrtRSI;
    warning(&c_st);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (lusolve.c) */
