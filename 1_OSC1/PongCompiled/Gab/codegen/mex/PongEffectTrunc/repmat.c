/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PongEffectTrunc.h"
#include "repmat.h"
#include "PongEffectTrunc_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo b_emlrtMCI = { 46,  /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRSInfo ge_emlrtRSI = { 46, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

/* Function Declarations */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void repmat(const emlrtStack *sp, ptrdiff_t a, int32_T varargin_1, ptrdiff_t
            b_data[], int32_T b_size[1])
{
  const mxArray *y;
  int32_T loop_ub;
  const mxArray *m5;
  static const int32_T iv3[2] = { 1, 15 };

  int32_T i11;
  static const char_T u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  const mxArray *m6 = NULL;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if ((int16_T)varargin_1 != varargin_1) {
    y = NULL;
    m5 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(sp, 15, m5, &u[0]);
    emlrtAssign(&y, m5);
    emlrtAssign(&m6, y);
    emlrt_synchGlobalsToML(sp);
    st.site = &ge_emlrtRSI;
    error(&st, emlrtAlias(m6), &b_emlrtMCI);
    emlrt_synchGlobalsFromML(sp);
  }

  b_size[0] = (int16_T)varargin_1;
  loop_ub = (int16_T)varargin_1;
  for (i11 = 0; i11 < loop_ub; i11++) {
    b_data[i11] = a;
  }

  emlrtDestroyArray(&m6);
}

/* End of code generation (repmat.c) */
