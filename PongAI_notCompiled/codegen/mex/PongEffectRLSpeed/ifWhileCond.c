/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ifWhileCond.c
 *
 * Code generation for function 'ifWhileCond'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PongEffectRLSpeed.h"
#include "ifWhileCond.h"

/* Function Definitions */
boolean_T ifWhileCond(const emxArray_boolean_T *x)
{
  boolean_T y;
  int32_T b;
  int32_T k;
  boolean_T exitg1;
  y = ((x->size[0] != 0) && (x->size[1] != 0));
  if (y) {
    b = x->size[0] * x->size[1];
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= b - 1)) {
      if (!x->data[k]) {
        y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return y;
}

/* End of code generation (ifWhileCond.c) */
