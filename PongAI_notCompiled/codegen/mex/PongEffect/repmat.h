/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.h
 *
 * Code generation for function 'repmat'
 *
 */

#ifndef REPMAT_H
#define REPMAT_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "PongEffect_types.h"

/* Function Declarations */
extern void repmat(const emlrtStack *sp, ptrdiff_t a, int32_T varargin_1,
                   ptrdiff_t b_data[], int32_T b_size[1]);

#endif

/* End of code generation (repmat.h) */
