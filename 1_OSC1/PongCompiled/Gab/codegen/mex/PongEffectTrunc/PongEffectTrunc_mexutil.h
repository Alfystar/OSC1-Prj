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

#ifndef PONGEFFECTTRUNC_MEXUTIL_H
#define PONGEFFECTTRUNC_MEXUTIL_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "PongEffectTrunc_types.h"

/* Function Declarations */
extern void MEXGlobalSyncInFunction(const emlrtStack *sp);
extern void MEXGlobalSyncOutFunction(boolean_T skipDirtyCheck);
extern void emlrt_checkEscapedGlobals(void);
extern real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_feval_, const char_T *identifier);
extern const mxArray *emlrt_marshallOut(const real_T u);
extern void emlrt_synchGlobalsFromML(const emlrtStack *sp);
extern void emlrt_synchGlobalsToML(const emlrtStack *sp);

#endif

/* End of code generation (PongEffectTrunc_mexutil.h) */
