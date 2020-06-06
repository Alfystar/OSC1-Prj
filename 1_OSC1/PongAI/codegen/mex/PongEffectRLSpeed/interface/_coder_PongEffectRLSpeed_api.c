/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_PongEffectRLSpeed_api.c
 *
 * Code generation for function '_coder_PongEffectRLSpeed_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PongEffectRLSpeed.h"
#include "_coder_PongEffectRLSpeed_api.h"
#include "PongEffectRLSpeed_mexutil.h"
#include "PongEffectRLSpeed_emxutil.h"
#include "PongEffectRLSpeed_data.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_PongEffectRLSpeed_api",      /* fName */
  ""                                   /* pName */
};

static const int32_T iv0[5] = { 2, 4, 7, 3, 3 };

/* Function Declarations */
static void c_emlrt_marshallOut(const real_T u[504], const mxArray *y);
static void d_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y);
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Qup,
  const char_T *identifier))[504];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[504];
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *G, const
  char_T *identifier, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[504];
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void c_emlrt_marshallOut(const real_T u[504], const mxArray *y)
{
  emlrtMxSetData((mxArray *)y, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)y, iv0, 5);
}

static void d_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y)
{
  emlrtMxSetData((mxArray *)y, &u->data[0]);
  emlrtSetDimensions((mxArray *)y, u->size, 2);
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Qup,
  const char_T *identifier))[504]
{
  real_T (*y)[504];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(Qup), &thisId);
  emlrtDestroyArray(&Qup);
  return y;
}
  static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[504]
{
  real_T (*y)[504];
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *G, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(G), &thisId, y);
  emlrtDestroyArray(&G);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[504]
{
  real_T (*ret)[504];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 5U, iv0);
  ret = (real_T (*)[504])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 504, 504 };

  const boolean_T bv0[2] = { true, true };

  int32_T iv13[2];
  int32_T i13;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv13);
  ret->allocatedSize = iv13[0] * iv13[1];
  i13 = ret->size[0] * ret->size[1];
  ret->size[0] = iv13[0];
  ret->size[1] = iv13[1];
  emxEnsureCapacity_real_T(sp, ret, i13, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void PongEffectRLSpeed_api(const mxArray *prhs[10], int32_T nlhs, const mxArray *
  plhs[7])
{
  emxArray_real_T *G;
  const mxArray *prhs_copy_idx_3;
  const mxArray *prhs_copy_idx_4;
  const mxArray *prhs_copy_idx_5;
  const mxArray *prhs_copy_idx_7;
  real_T xb0;
  real_T yb0;
  real_T ys0;
  real_T (*Qup)[504];
  real_T (*Qdown)[504];
  real_T (*Qstill)[504];
  real_T figOnOff;
  real_T SBROnOff;
  real_T SBRspeedOnOff;
  real_T chk;
  real_T score;
  real_T rimbalzi;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &G, 2, &g_emlrtRTEI, true);
  prhs_copy_idx_3 = emlrtProtectR2012b(prhs[3], 3, true, -1);
  prhs_copy_idx_4 = emlrtProtectR2012b(prhs[4], 4, true, -1);
  prhs_copy_idx_5 = emlrtProtectR2012b(prhs[5], 5, true, -1);
  prhs_copy_idx_7 = emlrtProtectR2012b(prhs[7], 7, true, -1);

  /* Marshall function inputs */
  xb0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "xb0");
  yb0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "yb0");
  ys0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "ys0");
  Qup = g_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_3), "Qup");
  Qdown = g_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_4), "Qdown");
  Qstill = g_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_5), "Qstill");
  figOnOff = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "figOnOff");
  G->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_7), "G", G);
  SBROnOff = emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "SBROnOff");
  SBRspeedOnOff = emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "SBRspeedOnOff");

  /* Marshall in global variables */
  MEXGlobalSyncInFunction(&st);

  /* Invoke the target function */
  PongEffectRLSpeed(&st, xb0, yb0, ys0, *Qup, *Qdown, *Qstill, figOnOff, G,
                    SBROnOff, SBRspeedOnOff, &chk, &score, &rimbalzi);

  /* Marshall out global variables */
  MEXGlobalSyncOutFunction(true);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(chk);
  if (nlhs > 1) {
    c_emlrt_marshallOut(*Qup, prhs_copy_idx_3);
    plhs[1] = prhs_copy_idx_3;
  }

  if (nlhs > 2) {
    c_emlrt_marshallOut(*Qdown, prhs_copy_idx_4);
    plhs[2] = prhs_copy_idx_4;
  }

  if (nlhs > 3) {
    c_emlrt_marshallOut(*Qstill, prhs_copy_idx_5);
    plhs[3] = prhs_copy_idx_5;
  }

  if (nlhs > 4) {
    plhs[4] = emlrt_marshallOut(score);
  }

  if (nlhs > 5) {
    plhs[5] = emlrt_marshallOut(rimbalzi);
  }

  if (nlhs > 6) {
    G->canFreeData = false;
    d_emlrt_marshallOut(G, prhs_copy_idx_7);
    plhs[6] = prhs_copy_idx_7;
  }

  emxFree_real_T(&G);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_PongEffectRLSpeed_api.c) */
