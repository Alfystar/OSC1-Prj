/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PongEffectIbrid.h
 *
 * Code generation for function 'PongEffectIbrid'
 *
 */

#ifndef PONGEFFECTIBRID_H
#define PONGEFFECTIBRID_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "PongEffectIbrid_types.h"

/* Function Declarations */
extern void PongEffectIbrid(const emlrtStack *sp, real_T xb0, real_T yb0, real_T
  ys0, real_T Qup[504], real_T Qdown[504], real_T Qstill[504], real_T unusedU0,
  emxArray_real_T *G, real_T SBROnOff, real_T unusedU1, real_T *chk, real_T
  *score, real_T *rimbalzi);

#endif

/* End of code generation (PongEffectIbrid.h) */
