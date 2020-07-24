/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgeqp3.c
 *
 * Code generation for function 'xgeqp3'
 *
 */

/* Include files */
#include "xgeqp3.h"
#include "PongEffectTrunc.h"
#include "PongEffectTrunc_data.h"
#include "PongEffectTrunc_mexutil.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo lc_emlrtRSI = { 57, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 132,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

/* Function Definitions */
void xgeqp3(const emlrtStack *sp, emxArray_real_T *A, real_T tau_data[], int32_T
            tau_size[1], int32_T jpvt_data[], int32_T jpvt_size[2])
{
  int32_T m;
  int32_T na;
  int32_T b_na;
  int32_T ma;
  int32_T minmana;
  int32_T i;
  ptrdiff_t jpvt_t_data[504];
  ptrdiff_t info_t;
  boolean_T p;
  static const char_T fname[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'g', 'e', 'q', 'p', '3' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = A->size[0];
  na = A->size[1] - 1;
  jpvt_size[0] = 1;
  jpvt_size[1] = A->size[1];
  b_na = A->size[1];
  if (0 <= b_na - 1) {
    memset(&jpvt_data[0], 0, b_na * sizeof(int32_T));
  }

  st.site = &lc_emlrtRSI;
  ma = A->size[0];
  b_na = A->size[1];
  minmana = muIntScalarMin_sint32(ma, b_na);
  tau_size[0] = minmana;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (A->size[0] < 1) || (A->size[1] <
       1)) {
    tau_size[0] = minmana;
    if (0 <= minmana - 1) {
      memset(&tau_data[0], 0, minmana * sizeof(real_T));
    }

    for (m = 0; m <= na; m++) {
      jpvt_data[m] = m + 1;
    }
  } else {
    b_na = A->size[1];
    for (i = 0; i < b_na; i++) {
      jpvt_t_data[i] = (ptrdiff_t)0;
    }

    emlrt_checkEscapedGlobals();
    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)A->size[0], (ptrdiff_t)A->size[1],
      &A->data[0], (ptrdiff_t)A->size[0], &jpvt_t_data[0], &tau_data[0]);
    b_st.site = &rc_emlrtRSI;
    b_na = (int32_T)info_t;
    if (b_na != 0) {
      p = true;
      if (b_na != -4) {
        if (b_na == -1010) {
          emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI, "MATLAB:nomem",
            "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &h_emlrtRTEI,
            "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, fname, 12, b_na);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      for (b_na = 0; b_na <= na; b_na++) {
        for (i = 0; i < m; i++) {
          A->data[b_na * ma + i] = rtNaN;
        }
      }

      ma = na + 1;
      b_na = muIntScalarMin_sint32(m, ma) - 1;
      for (m = 0; m <= b_na; m++) {
        tau_data[m] = rtNaN;
      }

      i = b_na + 2;
      if (i <= minmana) {
        memset(&tau_data[i + -1], 0, ((minmana - i) + 1) * sizeof(real_T));
      }

      for (m = 0; m <= na; m++) {
        jpvt_data[m] = m + 1;
      }
    } else {
      for (m = 0; m <= na; m++) {
        jpvt_data[m] = (int32_T)jpvt_t_data[m];
      }
    }
  }
}

/* End of code generation (xgeqp3.c) */
