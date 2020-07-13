/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "PongEffectTrunc.h"
#include "PongEffectTrunc_mexutil.h"
#include "blas.h"
#include "rt_nonfinite.h"

/* Function Definitions */
real_T mtimes(const real_T A_data[], const int32_T A_size[1], const
              emxArray_real_T *B)
{
  real_T C;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  if (A_size[0] < 1) {
    C = 0.0;
  } else {
    n_t = (ptrdiff_t)A_size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    emlrt_checkEscapedGlobals();
    C = ddot(&n_t, &A_data[0], &incx_t, &B->data[0], &incy_t);
  }

  return C;
}

/* End of code generation (mtimes.c) */
