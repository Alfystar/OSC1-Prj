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
#include "repmat.h"
#include "PongEffectTrunc.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void repmat(ptrdiff_t a, int32_T varargin_1, ptrdiff_t b_data[], int32_T b_size
            [1])
{
  const mxArray *m;
  int32_T loop_ub;
  int32_T i;
  m = NULL;
  b_size[0] = (int16_T)varargin_1;
  loop_ub = (int16_T)varargin_1;
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = a;
  }

  emlrtDestroyArray(&m);
}

/* End of code generation (repmat.c) */
