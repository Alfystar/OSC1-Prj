/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgetrf.c
 *
 * Code generation for function 'xgetrf'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "PongEffectIbrid.h"
#include "xgetrf.h"
#include "infocheck.h"
#include "PongEffectIbrid_mexutil.h"
#include "repmat.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo ac_emlrtRSI = { 27, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 90, /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 57, /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

/* Function Definitions */
void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, emxArray_real_T *A,
            int32_T lda, int32_T ipiv_data[], int32_T ipiv_size[2], int32_T
            *info)
{
  int32_T i25;
  ptrdiff_t ipiv_t_data[504];
  int32_T ipiv_t_size[1];
  int16_T unnamed_idx_0;
  ptrdiff_t info_t;
  int32_T i26;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ac_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    ipiv_size[0] = 1;
    ipiv_size[1] = 0;
    *info = 0;
  } else {
    i25 = muIntScalarMin_sint32(m, n);
    b_st.site = &fc_emlrtRSI;
    repmat(&b_st, (ptrdiff_t)0.0, muIntScalarMax_sint32(i25, 1), ipiv_t_data,
           ipiv_t_size);
    unnamed_idx_0 = (int16_T)ipiv_t_size[0];
    ipiv_t_size[0] = (int16_T)ipiv_t_size[0];
    emlrt_checkEscapedGlobals();
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)m, (ptrdiff_t)n, &A->data[0],
      (ptrdiff_t)lda, &ipiv_t_data[0]);
    *info = (int32_T)info_t;
    ipiv_size[0] = 1;
    ipiv_size[1] = unnamed_idx_0;
    b_st.site = &bc_emlrtRSI;
    infocheck(&b_st, *info);
    i26 = ipiv_t_size[0] - 1;
    for (k = 0; k <= i26; k++) {
      ipiv_data[k] = (int32_T)ipiv_t_data[k];
    }
  }
}

/* End of code generation (xgetrf.c) */
