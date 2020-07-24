/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PongEffectTrunc.h
 *
 * Code generation for function 'PongEffectTrunc'
 *
 */

#pragma once

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "PongEffectTrunc_types.h"

/* Function Declarations */
void PongEffectTrunc(const emlrtStack *sp, real_T xb0, real_T yb0, real_T ys0,
                     real_T Qup[504], real_T Qdown[504], real_T Qstill[504],
                     real_T unusedU0, emxArray_real_T *G, real_T SBROnOff,
                     real_T SBRspeedOnOff, real_T *chk, real_T *score, real_T
                     *rimbalzi);

/* End of code generation (PongEffectTrunc.h) */
