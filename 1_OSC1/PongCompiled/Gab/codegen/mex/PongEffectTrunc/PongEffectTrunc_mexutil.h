/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PongEffectTrunc_mexutil.h
 *
 * Code generation for function 'PongEffectTrunc_mexutil'
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
void MEXGlobalSyncInFunction(const emlrtStack *sp);
void MEXGlobalSyncOutFunction(boolean_T skipDirtyCheck);
void emlrt_checkEscapedGlobals(void);
real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *a__output_of_feval_,
  const char_T *identifier);
const mxArray *emlrt_marshallOut(const real_T u);
void emlrt_synchGlobalsFromML(const emlrtStack *sp);
void emlrt_synchGlobalsToML(const emlrtStack *sp);

/* End of code generation (PongEffectTrunc_mexutil.h) */
