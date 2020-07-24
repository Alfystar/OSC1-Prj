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
#include "rt_nonfinite.h"
#include "PongEffectIbrid.h"
#include "warning.h"
#include "PongEffectIbrid_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo c_emlrtMCI = { 14,  /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtRSInfo be_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pathName */
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
  const mxArray *m31;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m31, 2, pArrays, "feval", true, location);
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
  const mxArray *m33;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m33, 4, pArrays, "feval", true, location);
}

void b_warning(const emlrtStack *sp, int32_T varargin_1, const char_T
               varargin_2[14])
{
  const mxArray *y;
  const mxArray *m17;
  static const int32_T iv8[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m18 = NULL;
  const mxArray *m19;
  static const int32_T iv9[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *m20 = NULL;
  const mxArray *m21;
  static const int32_T iv10[2] = { 1, 32 };

  static const char_T msgID[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
    'n', 't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *m22 = NULL;
  const mxArray *m23;
  const mxArray *m24 = NULL;
  const mxArray *m25;
  static const int32_T iv11[2] = { 1, 14 };

  const mxArray *m26 = NULL;
  const mxArray *m27 = NULL;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m17 = emlrtCreateCharArray(2, iv8);
  emlrtInitCharArrayR2013a(sp, 7, m17, &u[0]);
  emlrtAssign(&y, m17);
  emlrtAssign(&m18, y);
  y = NULL;
  m19 = emlrtCreateCharArray(2, iv9);
  emlrtInitCharArrayR2013a(sp, 7, m19, &b_u[0]);
  emlrtAssign(&y, m19);
  emlrtAssign(&m20, y);
  y = NULL;
  m21 = emlrtCreateCharArray(2, iv10);
  emlrtInitCharArrayR2013a(sp, 32, m21, &msgID[0]);
  emlrtAssign(&y, m21);
  emlrtAssign(&m22, y);
  y = NULL;
  m23 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m23) = varargin_1;
  emlrtAssign(&y, m23);
  emlrtAssign(&m24, y);
  y = NULL;
  m25 = emlrtCreateCharArray(2, iv11);
  emlrtInitCharArrayR2013a(sp, 14, m25, &varargin_2[0]);
  emlrtAssign(&y, m25);
  emlrtAssign(&m26, y);
  emlrt_synchGlobalsToML(sp);
  st.site = &be_emlrtRSI;
  emlrtAssign(&m27, d_feval(&st, emlrtAlias(m20), emlrtAlias(m22), emlrtAlias
    (m24), emlrtAlias(m26), &c_emlrtMCI));
  emlrt_synchGlobalsFromML(sp);
  emlrt_synchGlobalsToML(sp);
  st.site = &be_emlrtRSI;
  c_feval(&st, emlrtAlias(m18), emlrtAlias(m27), &d_emlrtMCI);
  emlrt_synchGlobalsFromML(sp);
  emlrtDestroyArray(&m18);
  emlrtDestroyArray(&m27);
  emlrtDestroyArray(&m20);
  emlrtDestroyArray(&m22);
  emlrtDestroyArray(&m24);
  emlrtDestroyArray(&m26);
}

void warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m7;
  static const int32_T iv4[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m8 = NULL;
  const mxArray *m9;
  static const int32_T iv5[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *m10 = NULL;
  const mxArray *m11;
  static const int32_T iv6[2] = { 1, 21 };

  static const char_T msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i',
    'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *m12 = NULL;
  const mxArray *m13 = NULL;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m7 = emlrtCreateCharArray(2, iv4);
  emlrtInitCharArrayR2013a(sp, 7, m7, &u[0]);
  emlrtAssign(&y, m7);
  emlrtAssign(&m8, y);
  y = NULL;
  m9 = emlrtCreateCharArray(2, iv5);
  emlrtInitCharArrayR2013a(sp, 7, m9, &b_u[0]);
  emlrtAssign(&y, m9);
  emlrtAssign(&m10, y);
  y = NULL;
  m11 = emlrtCreateCharArray(2, iv6);
  emlrtInitCharArrayR2013a(sp, 21, m11, &msgID[0]);
  emlrtAssign(&y, m11);
  emlrtAssign(&m12, y);
  emlrt_synchGlobalsToML(sp);
  st.site = &be_emlrtRSI;
  emlrtAssign(&m13, b_feval(&st, emlrtAlias(m10), emlrtAlias(m12), &c_emlrtMCI));
  emlrt_synchGlobalsFromML(sp);
  emlrt_synchGlobalsToML(sp);
  st.site = &be_emlrtRSI;
  c_feval(&st, emlrtAlias(m8), emlrtAlias(m13), &d_emlrtMCI);
  emlrt_synchGlobalsFromML(sp);
  emlrtDestroyArray(&m8);
  emlrtDestroyArray(&m13);
  emlrtDestroyArray(&m10);
  emlrtDestroyArray(&m12);
}

/* End of code generation (warning.c) */
