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
#include "qrsolve.h"
#include "PongEffectTrunc.h"
#include "PongEffectTrunc_data.h"
#include "PongEffectTrunc_emxutil.h"
#include "PongEffectTrunc_mexutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgeqp3.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ic_emlrtRSI = { 41, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 45, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 52, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 139,/* lineNo */
  "rankFromQR",                        /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 138,/* lineNo */
  "rankFromQR",                        /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 85, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 94, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 104,/* lineNo */
  "LSQFromQR",                         /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 31, /* lineNo */
  "xunormqr",                          /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 102,/* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtMCInfo d_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/flt2str.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 41,/* lineNo */
  2,                                   /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 1, /* lineNo */
  24,                                  /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRSInfo ae_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/flt2str.m"/* pathName */
};

/* Function Declarations */
static void LSQFromQR(const emlrtStack *sp, const emxArray_real_T *A, const
                      real_T tau_data[], const int32_T jpvt_data[], real_T
                      B_data[], const int32_T B_size[1], int32_T rankA, real_T
                      Y_data[], int32_T Y_size[1]);
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
                      B_data[], const int32_T B_size[1], int32_T rankA, real_T
                      Y_data[], int32_T Y_size[1])
{
  int32_T loop_ub;
  int32_T j;
  ptrdiff_t nrc_t;
  int32_T i;
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
  Y_size[0] = (int16_T)A->size[1];
  loop_ub = (int16_T)A->size[1];
  if (0 <= loop_ub - 1) {
    memset(&Y_data[0], 0, loop_ub * sizeof(real_T));
  }

  st.site = &ad_emlrtRSI;
  b_st.site = &dd_emlrtRSI;
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    nrc_t = (ptrdiff_t)B_size[0];
    emlrt_checkEscapedGlobals();
    nrc_t = LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)1, (ptrdiff_t)
      muIntScalarMin_sint32(A->size[0], A->size[1]), &A->data[0], (ptrdiff_t)
      A->size[0], &tau_data[0], &B_data[0], nrc_t);
    loop_ub = (int32_T)nrc_t;
    c_st.site = &ed_emlrtRSI;
    if (loop_ub != 0) {
      p = true;
      b_p = false;
      if (loop_ub == -7) {
        b_p = true;
      } else if (loop_ub == -9) {
        b_p = true;
      } else {
        if (loop_ub == -10) {
          b_p = true;
        }
      }

      if (!b_p) {
        if (loop_ub == -1010) {
          emlrtErrorWithMessageIdR2018a(&c_st, &i_emlrtRTEI, "MATLAB:nomem",
            "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&c_st, &h_emlrtRTEI,
            "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, fname, 12, loop_ub);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      loop_ub = B_size[0];
      for (i = 0; i < loop_ub; i++) {
        B_data[i] = rtNaN;
      }
    }
  }

  st.site = &bd_emlrtRSI;
  if ((1 <= rankA) && (rankA > 2147483646)) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (loop_ub = 0; loop_ub < rankA; loop_ub++) {
    Y_data[jpvt_data[loop_ub] - 1] = B_data[loop_ub];
  }

  for (j = rankA; j >= 1; j--) {
    i = jpvt_data[j - 1];
    Y_data[i - 1] /= A->data[(j + A->size[0] * (j - 1)) - 1];
    st.site = &cd_emlrtRSI;
    for (loop_ub = 0; loop_ub <= j - 2; loop_ub++) {
      Y_data[jpvt_data[loop_ub] - 1] -= Y_data[jpvt_data[j - 1] - 1] * A->
        data[loop_ub + A->size[0] * (j - 1)];
    }
  }
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "sprintf", true, location);
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
  const mxArray *m;
  const mxArray *m1;
  const mxArray *y;
  const mxArray *m2;
  static const int32_T b_iv[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  char_T cv[14];
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
    st.site = &xc_emlrtRSI;
    m = NULL;
    m1 = NULL;
    y = NULL;
    m2 = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a(&st, 6, m2, &rfmt[0]);
    emlrtAssign(&y, m2);
    emlrtAssign(&m, y);
    emlrtAssign(&m1, emlrt_marshallOut(tol));
    emlrt_synchGlobalsToML(&st);
    b_st.site = &ae_emlrtRSI;
    c_emlrt_marshallIn(&b_st, b_sprintf(&b_st, emlrtAlias(m), emlrtAlias(m1),
      &d_emlrtMCI), "<output of sprintf>", cv);
    emlrt_synchGlobalsFromML(&st);
    emlrtDestroyArray(&m);
    emlrtDestroyArray(&m1);
    st.site = &yc_emlrtRSI;
    b_warning(&st, r, cv);
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
  emxInit_real_T(sp, &b_A, 2, &x_emlrtRTEI, true);
  rankR = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, b_A, rankR, &w_emlrtRTEI);
  loop_ub = A->size[0] * A->size[1];
  for (rankR = 0; rankR < loop_ub; rankR++) {
    b_A->data[rankR] = A->data[rankR];
  }

  st.site = &ic_emlrtRSI;
  xgeqp3(&st, b_A, tau_data, tau_size, jpvt_data, jpvt_size);
  st.site = &jc_emlrtRSI;
  rankR = rankFromQR(&st, b_A);
  b_B_size[0] = B_size[0];
  loop_ub = B_size[0] - 1;
  if (0 <= loop_ub) {
    memcpy(&b_B_data[0], &B_data[0], (loop_ub + 1) * sizeof(real_T));
  }

  st.site = &kc_emlrtRSI;
  LSQFromQR(&st, b_A, tau_data, jpvt_data, b_B_data, b_B_size, rankR, Y_data,
            Y_size);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (qrsolve.c) */
