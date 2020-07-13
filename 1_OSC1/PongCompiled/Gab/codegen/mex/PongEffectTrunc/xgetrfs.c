/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgetrfs.c
 *
 * Code generation for function 'xgetrfs'
 *
 */

/* Include files */
#include "xgetrfs.h"
#include "PongEffectTrunc.h"
#include "PongEffectTrunc_data.h"
#include "PongEffectTrunc_mexutil.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include "repmat.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo wb_emlrtRSI = { 19, /* lineNo */
  "xgetrfs",                           /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgetrfs.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 106,/* lineNo */
  "cmldiv",                            /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+lapack/xgetrfs.m"/* pathName */
};

/* Function Definitions */
int32_T xgetrfs(const emlrtStack *sp, emxArray_real_T *A, real_T B_data[], const
                int32_T B_size[1])
{
  int32_T info;
  int32_T ma;
  int32_T na;
  ptrdiff_t tmp_data[504];
  int32_T tmp_size[1];
  ptrdiff_t N;
  ptrdiff_t LDA;
  ptrdiff_t INFO;
  ptrdiff_t IPIV_data[504];
  static const char_T fname[19] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'g', 'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  ma = A->size[0];
  na = A->size[1];
  na = muIntScalarMin_sint32(ma, na);
  ma = muIntScalarMin_sint32(B_size[0], na);
  st.site = &wb_emlrtRSI;
  info = 0;
  if (ma != 0) {
    repmat((ptrdiff_t)0.0, ma, tmp_data, tmp_size);
    N = (ptrdiff_t)ma;
    LDA = (ptrdiff_t)A->size[0];
    emlrt_checkEscapedGlobals();
    INFO = LAPACKE_dgetrf_work(102, N, N, &A->data[0], LDA, &IPIV_data[0]);
    info = (int32_T)INFO;
    b_st.site = &yb_emlrtRSI;
    if (info < 0) {
      if (info == -1010) {
        emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI, "MATLAB:nomem",
          "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &h_emlrtRTEI,
          "Coder:toolbox:LAPACKCallErrorInfo",
          "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, fname, 12, info);
      }
    }

    emlrt_checkEscapedGlobals();
    LAPACKE_dgetrs_work(102, 'N', N, (ptrdiff_t)1, &A->data[0], LDA, &IPIV_data
                        [0], &B_data[0], (ptrdiff_t)B_size[0]);
  }

  return info;
}

/* End of code generation (xgetrfs.c) */
