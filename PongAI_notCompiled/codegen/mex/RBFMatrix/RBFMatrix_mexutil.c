/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RBFMatrix_mexutil.c
 *
 * Code generation for function 'RBFMatrix_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RBFMatrix.h"
#include "RBFMatrix_mexutil.h"
#include "RBFMatrix_data.h"

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *b_emlrt_marshallOut(const real_T u[7]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_V, const
  char_T *identifier, real_T y[7]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[7]);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[7]);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const real_T u[7])
{
  const mxArray *y;
  const mxArray *m6;
  static const int32_T iv2[2] = { 1, 7 };

  real_T *pData;
  int32_T i3;
  int32_T i;
  y = NULL;
  m6 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m6);
  i3 = 0;
  for (i = 0; i < 7; i++) {
    pData[i3] = u[i];
    i3++;
  }

  emlrtAssign(&y, m6);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_V, const
  char_T *identifier, real_T y[7])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(b_V), &thisId, y);
  emlrtDestroyArray(&b_V);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[7])
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[7])
{
  static const int32_T dims[2] = { 1, 7 };

  real_T (*r0)[7];
  int32_T i4;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r0 = (real_T (*)[7])emlrtMxGetData(src);
  for (i4 = 0; i4 < 7; i4++) {
    ret[i4] = (*r0)[i4];
  }

  emlrtDestroyArray(&src);
}

void MEXGlobalSyncInFunction(const emlrtStack *sp)
{
  const mxArray *tmp;
  const mxArray *b_tmp;
  const mxArray *c_tmp;
  const mxArray *d_tmp;
  const mxArray *e_tmp;
  const mxArray *f_tmp;
  const mxArray *g_tmp;

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("Ln");
  if (tmp != NULL) {
    Ln = emlrt_marshallIn(sp, tmp, "Ln");
    Ln_dirty = 0U;
  }

  b_tmp = emlrtGetGlobalVariable("Hn");
  if (b_tmp != NULL) {
    Hn = emlrt_marshallIn(sp, b_tmp, "Hn");
    Hn_dirty = 0U;
  }

  c_tmp = emlrtGetGlobalVariable("V");
  if (c_tmp != NULL) {
    c_emlrt_marshallIn(sp, c_tmp, "V", V);
    V_dirty = 0U;
  }

  d_tmp = emlrtGetGlobalVariable("velSig");
  if (d_tmp != NULL) {
    velSig = emlrt_marshallIn(sp, d_tmp, "velSig");
    velSig_dirty = 0U;
  }

  e_tmp = emlrtGetGlobalVariable("beta");
  if (e_tmp != NULL) {
    beta = emlrt_marshallIn(sp, e_tmp, "beta");
    beta_dirty = 0U;
  }

  f_tmp = emlrtGetGlobalVariable("L");
  if (f_tmp != NULL) {
    L = emlrt_marshallIn(sp, f_tmp, "L");
    L_dirty = 0U;
  }

  g_tmp = emlrtGetGlobalVariable("H");
  if (g_tmp != NULL) {
    H = emlrt_marshallIn(sp, g_tmp, "H");
    H_dirty = 0U;
  }
}

void MEXGlobalSyncOutFunction(boolean_T skipDirtyCheck)
{
  /* Marshall out global variables */
  if (skipDirtyCheck || (Ln_dirty != 0U)) {
    emlrtPutGlobalVariable("Ln", emlrt_marshallOut(Ln));
  }

  if (skipDirtyCheck || (Hn_dirty != 0U)) {
    emlrtPutGlobalVariable("Hn", emlrt_marshallOut(Hn));
  }

  if (skipDirtyCheck || (V_dirty != 0U)) {
    emlrtPutGlobalVariable("V", b_emlrt_marshallOut(V));
  }

  if (skipDirtyCheck || (velSig_dirty != 0U)) {
    emlrtPutGlobalVariable("velSig", emlrt_marshallOut(velSig));
  }

  if (skipDirtyCheck || (beta_dirty != 0U)) {
    emlrtPutGlobalVariable("beta", emlrt_marshallOut(beta));
  }

  if (skipDirtyCheck || (L_dirty != 0U)) {
    emlrtPutGlobalVariable("L", emlrt_marshallOut(L));
  }

  if (skipDirtyCheck || (H_dirty != 0U)) {
    emlrtPutGlobalVariable("H", emlrt_marshallOut(H));
  }
}

void emlrt_checkEscapedGlobals(void)
{
  Ln_dirty |= Ln_dirty >> 1U;
  Hn_dirty |= Hn_dirty >> 1U;
  V_dirty |= V_dirty >> 1U;
  velSig_dirty |= velSig_dirty >> 1U;
  beta_dirty |= beta_dirty >> 1U;
  L_dirty |= L_dirty >> 1U;
  H_dirty |= H_dirty >> 1U;
}

real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *a__output_of_feval_,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m5;
  y = NULL;
  m5 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m5);
  return y;
}

void emlrt_synchGlobalsFromML(const emlrtStack *sp)
{
  MEXGlobalSyncInFunction(sp);
  Ln_dirty = 0U;
  Hn_dirty = 0U;
  V_dirty = 0U;
  velSig_dirty = 0U;
  beta_dirty = 0U;
  L_dirty = 0U;
  H_dirty = 0U;
}

void emlrt_synchGlobalsToML(const emlrtStack *sp)
{
  (void)sp;
  MEXGlobalSyncOutFunction(false);
}

/* End of code generation (RBFMatrix_mexutil.c) */
