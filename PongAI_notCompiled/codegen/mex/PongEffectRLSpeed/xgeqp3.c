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
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "PongEffectRLSpeed.h"
#include "xgeqp3.h"
#include "PongEffectRLSpeed_emxutil.h"
#include "infocheck.h"
#include "PongEffectRLSpeed_mexutil.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo jc_emlrtRSI = { 14, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 76, /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRTEInfo p_emlrtRTEI = { 77,/* lineNo */
  9,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

/* Function Definitions */
void xgeqp3(const emlrtStack *sp, emxArray_real_T *A, real_T tau_data[], int32_T
            tau_size[1], int32_T jpvt_data[], int32_T jpvt_size[2])
{
  int32_T m;
  int32_T n;
  int32_T tau_size_tmp;
  int32_T loop_ub;
  int32_T i21;
  ptrdiff_t jpvt_t_data[504];
  int32_T k;
  ptrdiff_t m_t;
  ptrdiff_t info_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = A->size[0];
  n = A->size[1];
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    tau_size[0] = 0;
    if (A->size[1] < 1) {
      n = 0;
    } else {
      n = A->size[1];
    }

    jpvt_size[0] = 1;
    jpvt_size[1] = n;
    if (n > 0) {
      jpvt_data[0] = 1;
      m = 1;
      for (k = 2; k <= n; k++) {
        m++;
        jpvt_data[k - 1] = m;
      }
    }
  } else {
    tau_size_tmp = muIntScalarMin_sint32(m, n);
    tau_size[0] = tau_size_tmp;
    m = A->size[1];
    loop_ub = A->size[1];
    for (i21 = 0; i21 < loop_ub; i21++) {
      jpvt_t_data[i21] = (ptrdiff_t)0;
    }

    m_t = (ptrdiff_t)A->size[0];
    emlrt_checkEscapedGlobals();
    info_t = LAPACKE_dgeqp3(102, m_t, (ptrdiff_t)A->size[1], &A->data[0], m_t,
      &jpvt_t_data[0], &tau_data[0]);
    b_st.site = &oc_emlrtRSI;
    if (b_infocheck(&b_st, (int32_T)info_t)) {
      i21 = A->size[0] * A->size[1];
      emxEnsureCapacity_real_T(&st, A, i21, &p_emlrtRTEI);
      loop_ub = A->size[1];
      for (i21 = 0; i21 < loop_ub; i21++) {
        m = A->size[0];
        for (k = 0; k < m; k++) {
          A->data[k + A->size[0] * i21] = rtNaN;
        }
      }

      for (i21 = 0; i21 < tau_size_tmp; i21++) {
        tau_data[i21] = rtNaN;
      }

      if (n < 1) {
        n = 0;
      }

      jpvt_size[0] = 1;
      jpvt_size[1] = n;
      if (n > 0) {
        jpvt_data[0] = 1;
        m = 1;
        for (k = 2; k <= n; k++) {
          m++;
          jpvt_data[k - 1] = m;
        }
      }
    } else {
      jpvt_size[0] = 1;
      jpvt_size[1] = m;
      for (i21 = 0; i21 < m; i21++) {
        jpvt_data[i21] = (int32_T)jpvt_t_data[i21];
      }
    }
  }
}

/* End of code generation (xgeqp3.c) */
