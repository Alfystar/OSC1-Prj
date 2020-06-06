/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qrsolve.c
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "PongEffectIbrid.h"
#include "qrsolve.h"
#include "PongEffectIbrid_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "PongEffectIbrid_mexutil.h"
#include "warning.h"
#include "xgeqp3.h"
#include "PongEffectIbrid_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo rc_emlrtRSI = { 35, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 39, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 46, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 131,/* lineNo */
  "rankFromQR",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 130,/* lineNo */
  "rankFromQR",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 79, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 86, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 96, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 31, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 102,/* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtMCInfo e_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 35,/* lineNo */
  2,                                   /* colNo */
  "qrsolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 1, /* lineNo */
  24,                                  /* colNo */
  "qrsolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pName */
};

static emlrtRSInfo ce_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* Function Declarations */
static void LSQFromQR(const emlrtStack *sp, const emxArray_real_T *A, const
                      real_T tau_data[], const int32_T jpvt_data[], real_T
                      B_data[], int32_T B_size[1], int32_T rankA, real_T Y_data[],
                      int32_T Y_size[1]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
static int32_T rankFromQR(const emlrtStack *sp, const emxArray_real_T *A);

/* Function Definitions */
static void LSQFromQR(const emlrtStack *sp, const emxArray_real_T *A, const
                      real_T tau_data[], const int32_T jpvt_data[], real_T
                      B_data[], int32_T B_size[1], int32_T rankA, real_T Y_data[],
                      int32_T Y_size[1])
{
  int16_T unnamed_idx_0;
  int32_T mn;
  int32_T j;
  ptrdiff_t nrc_t;
  int32_T Y_data_tmp;
  ptrdiff_t info_t;
  boolean_T p;
  boolean_T b_p;
  static const char_T fname[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'o', 'r', 'm', 'q', 'r' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  unnamed_idx_0 = (int16_T)A->size[1];
  Y_size[0] = unnamed_idx_0;
  if (0 <= unnamed_idx_0 - 1) {
    memset(&Y_data[0], 0, (uint32_T)(unnamed_idx_0 * (int32_T)sizeof(real_T)));
  }

  st.site = &dd_emlrtRSI;
  b_st.site = &gd_emlrtRSI;
  mn = muIntScalarMin_sint32(A->size[0], A->size[1]);
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    nrc_t = (ptrdiff_t)B_size[0];
    emlrt_checkEscapedGlobals();
    info_t = LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)1, (ptrdiff_t)mn,
      &A->data[0], (ptrdiff_t)A->size[0], &tau_data[0], &B_data[0], nrc_t);
    mn = (int32_T)info_t;
    c_st.site = &hd_emlrtRSI;
    if (mn != 0) {
      p = true;
      b_p = false;
      if (mn == -7) {
        b_p = true;
      } else if (mn == -9) {
        b_p = true;
      } else {
        if (mn == -10) {
          b_p = true;
        }
      }

      if (!b_p) {
        if (mn == -1010) {
          emlrtErrorWithMessageIdR2018a(&c_st, &x_emlrtRTEI, "MATLAB:nomem",
            "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&c_st, &y_emlrtRTEI,
            "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, fname, 12, mn);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      mn = B_size[0];
      for (j = 0; j < mn; j++) {
        B_data[j] = rtNaN;
      }
    }
  }

  st.site = &ed_emlrtRSI;
  if ((1 <= rankA) && (rankA > 2147483646)) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (mn = 0; mn < rankA; mn++) {
    Y_data[jpvt_data[mn] - 1] = B_data[mn];
  }

  for (j = rankA; j >= 1; j--) {
    Y_data_tmp = jpvt_data[j - 1] - 1;
    Y_data[Y_data_tmp] /= A->data[(j + A->size[0] * (j - 1)) - 1];
    st.site = &fd_emlrtRSI;
    for (mn = 0; mn <= j - 2; mn++) {
      Y_data[jpvt_data[mn] - 1] -= Y_data[Y_data_tmp] * A->data[mn + A->size[0] *
        (j - 1)];
    }
  }
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m32;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m32, 2, pArrays, "sprintf", true,
    location);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static int32_T rankFromQR(const emlrtStack *sp, const emxArray_real_T *A)
{
  int32_T r;
  real_T tol;
  int32_T minmn;
  int32_T maxmn;
  const mxArray *y;
  const mxArray *m14;
  static const int32_T iv7[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *m15 = NULL;
  const mxArray *m16 = NULL;
  char_T cv0[14];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  r = 0;
  tol = 0.0;
  if (A->size[0] < A->size[1]) {
    minmn = A->size[0];
    maxmn = A->size[1];
  } else {
    minmn = A->size[1];
    maxmn = A->size[0];
  }

  if (minmn > 0) {
    tol = 2.2204460492503131E-15 * (real_T)maxmn * muDoubleScalarAbs(A->data[0]);
    while ((r < minmn) && (!(muDoubleScalarAbs(A->data[r + A->size[0] * r]) <=
             tol))) {
      r++;
    }
  }

  if (r < minmn) {
    st.site = &bd_emlrtRSI;
    y = NULL;
    m14 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(&st, 6, m14, &rfmt[0]);
    emlrtAssign(&y, m14);
    emlrtAssign(&m15, y);
    emlrtAssign(&m16, emlrt_marshallOut(tol));
    emlrt_synchGlobalsToML(&st);
    b_st.site = &ce_emlrtRSI;
    c_emlrt_marshallIn(&b_st, b_sprintf(&b_st, emlrtAlias(m15), emlrtAlias(m16),
      &e_emlrtMCI), "<output of sprintf>", cv0);
    emlrt_synchGlobalsFromML(&st);
    emlrtDestroyArray(&m15);
    emlrtDestroyArray(&m16);
    st.site = &cd_emlrtRSI;
    b_warning(&st, r, cv0);
  }

  return r;
}

void qrsolve(const emlrtStack *sp, const emxArray_real_T *A, const real_T
             B_data[], const int32_T B_size[1], real_T Y_data[], int32_T Y_size
             [1])
{
  emxArray_real_T *b_A;
  int32_T rankR;
  int32_T loop_ub;
  real_T tau_data[504];
  int32_T tau_size[1];
  int32_T jpvt_data[504];
  int32_T jpvt_size[2];
  int32_T b_B_size[1];
  real_T b_B_data[504];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_A, 2, &l_emlrtRTEI, true);
  rankR = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, b_A, rankR, &k_emlrtRTEI);
  loop_ub = A->size[0] * A->size[1];
  for (rankR = 0; rankR < loop_ub; rankR++) {
    b_A->data[rankR] = A->data[rankR];
  }

  st.site = &rc_emlrtRSI;
  xgeqp3(&st, b_A, tau_data, tau_size, jpvt_data, jpvt_size);
  st.site = &sc_emlrtRSI;
  rankR = rankFromQR(&st, b_A);
  b_B_size[0] = B_size[0];
  if (0 <= B_size[0] - 1) {
    memcpy(&b_B_data[0], &B_data[0], (uint32_T)(B_size[0] * (int32_T)sizeof
            (real_T)));
  }

  st.site = &tc_emlrtRSI;
  LSQFromQR(&st, b_A, tau_data, jpvt_data, b_B_data, b_B_size, rankR, Y_data,
            Y_size);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (qrsolve.c) */
