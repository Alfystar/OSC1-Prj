/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PongEffect.h
 *
 * Code generation for function 'PongEffect'
 *
 */

#ifndef PONGEFFECT_H
#define PONGEFFECT_H

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
extern void PongEffect(const emlrtStack *sp, real_T xb0, real_T yb0, real_T ys0,
  real_T Qup[504], real_T Qdown[504], real_T Qstill[504], real_T figOnOff,
  emxArray_real_T *G, real_T SBROnOff, real_T SBRspeedOnOff, real_T *chk, real_T
  *score, real_T *rimbalzi);

#endif

/* End of code generation (PongEffect.h) */
