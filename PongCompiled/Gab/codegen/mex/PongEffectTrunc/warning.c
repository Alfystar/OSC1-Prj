/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * warning.c
 *
 * Code generation for function 'warning'
 *
 */

/* Include files */
#include "warning.h"
#include "PongEffectTrunc.h"
#include "PongEffectTrunc_mexutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtMCInfo b_emlrtMCI = { 14,  /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/shared/coder/coder/lib/+coder/+internal/warning.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/shared/coder/coder/lib/+coder/+internal/warning.m"/* pName */
};

static emlrtRSInfo yd_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/shared/coder/coder/lib/+coder/+internal/warning.m"/* pathName */
};

/* Function Declarations */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void c_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "feval", true, location);
}

static void c_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m, 4, pArrays, "feval", true, location);
}

void b_warning(const emlrtStack *sp, int32_T varargin_1, const char_T
               varargin_2[14])
{
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *y;
  const mxArray *m6;
  static const int32_T b_iv[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m7;
  static const int32_T iv1[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *m8;
  static const int32_T iv2[2] = { 1, 32 };

  static const char_T msgID[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
    'n', 't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *m9;
  const mxArray *m10;
  static const int32_T iv3[2] = { 1, 14 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  m = NULL;
  m1 = NULL;
  m2 = NULL;
  m3 = NULL;
  m4 = NULL;
  m5 = NULL;
  y = NULL;
  m6 = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a(sp, 7, m6, &u[0]);
  emlrtAssign(&y, m6);
  emlrtAssign(&m, y);
  y = NULL;
  m7 = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 7, m7, &b_u[0]);
  emlrtAssign(&y, m7);
  emlrtAssign(&m2, y);
  y = NULL;
  m8 = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 32, m8, &msgID[0]);
  emlrtAssign(&y, m8);
  emlrtAssign(&m3, y);
  y = NULL;
  m9 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m9) = varargin_1;
  emlrtAssign(&y, m9);
  emlrtAssign(&m4, y);
  y = NULL;
  m10 = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a(sp, 14, m10, &varargin_2[0]);
  emlrtAssign(&y, m10);
  emlrtAssign(&m5, y);
  emlrt_synchGlobalsToML(sp);
  st.site = &yd_emlrtRSI;
  emlrtAssign(&m1, d_feval(&st, emlrtAlias(m2), emlrtAlias(m3), emlrtAlias(m4),
    emlrtAlias(m5), &b_emlrtMCI));
  emlrt_synchGlobalsFromML(sp);
  emlrt_synchGlobalsToML(sp);
  st.site = &yd_emlrtRSI;
  c_feval(&st, emlrtAlias(m), emlrtAlias(m1), &c_emlrtMCI);
  emlrt_synchGlobalsFromML(sp);
  emlrtDestroyArray(&m);
  emlrtDestroyArray(&m1);
  emlrtDestroyArray(&m2);
  emlrtDestroyArray(&m3);
  emlrtDestroyArray(&m4);
  emlrtDestroyArray(&m5);
}

void warning(const emlrtStack *sp)
{
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *y;
  const mxArray *m4;
  static const int32_T b_iv[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m5;
  static const int32_T iv1[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *m6;
  static const int32_T iv2[2] = { 1, 21 };

  static const char_T msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i',
    'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  m = NULL;
  m1 = NULL;
  m2 = NULL;
  m3 = NULL;
  y = NULL;
  m4 = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a(sp, 7, m4, &u[0]);
  emlrtAssign(&y, m4);
  emlrtAssign(&m, y);
  y = NULL;
  m5 = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 7, m5, &b_u[0]);
  emlrtAssign(&y, m5);
  emlrtAssign(&m2, y);
  y = NULL;
  m6 = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 21, m6, &msgID[0]);
  emlrtAssign(&y, m6);
  emlrtAssign(&m3, y);
  emlrt_synchGlobalsToML(sp);
  st.site = &yd_emlrtRSI;
  emlrtAssign(&m1, b_feval(&st, emlrtAlias(m2), emlrtAlias(m3), &b_emlrtMCI));
  emlrt_synchGlobalsFromML(sp);
  emlrt_synchGlobalsToML(sp);
  st.site = &yd_emlrtRSI;
  c_feval(&st, emlrtAlias(m), emlrtAlias(m1), &c_emlrtMCI);
  emlrt_synchGlobalsFromML(sp);
  emlrtDestroyArray(&m);
  emlrtDestroyArray(&m1);
  emlrtDestroyArray(&m2);
  emlrtDestroyArray(&m3);
}

/* End of code generation (warning.c) */
