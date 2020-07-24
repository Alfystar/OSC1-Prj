/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PongEffectRLSpeed_mexutil.c
 *
 * Code generation for function 'PongEffectRLSpeed_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PongEffectRLSpeed.h"
#include "PongEffectRLSpeed_mexutil.h"
#include "PongEffectRLSpeed_data.h"

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *b_emlrt_marshallOut(const real_T u[7]);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_V, const
  char_T *identifier, real_T y[7]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[7]);
static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[7]);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const real_T u[7])
{
  const mxArray *y;
  const mxArray *m29;
  static const int32_T iv12[2] = { 1, 7 };

  real_T *pData;
  int32_T i11;
  int32_T i;
  y = NULL;
  m29 = emlrtCreateNumericArray(2, iv12, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m29);
  i11 = 0;
  for (i = 0; i < 7; i++) {
    pData[i11] = u[i];
    i11++;
  }

  emlrtAssign(&y, m29);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_V, const
  char_T *identifier, real_T y[7])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(b_V), &thisId, y);
  emlrtDestroyArray(&b_V);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[7])
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[7])
{
  static const int32_T dims[2] = { 1, 7 };

  real_T (*r0)[7];
  int32_T i12;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r0 = (real_T (*)[7])emlrtMxGetData(src);
  for (i12 = 0; i12 < 7; i12++) {
    ret[i12] = (*r0)[i12];
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
  const mxArray *h_tmp;
  const mxArray *i_tmp;
  const mxArray *j_tmp;

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("beta");
  if (tmp != NULL) {
    beta = emlrt_marshallIn(sp, tmp, "beta");
    beta_dirty = 0U;
  }

  b_tmp = emlrtGetGlobalVariable("L");
  if (b_tmp != NULL) {
    L = emlrt_marshallIn(sp, b_tmp, "L");
    L_dirty = 0U;
  }

  c_tmp = emlrtGetGlobalVariable("H");
  if (c_tmp != NULL) {
    H = emlrt_marshallIn(sp, c_tmp, "H");
    H_dirty = 0U;
  }

  d_tmp = emlrtGetGlobalVariable("eps");
  if (d_tmp != NULL) {
    eps = emlrt_marshallIn(sp, d_tmp, "eps");
    eps_dirty = 0U;
  }

  e_tmp = emlrtGetGlobalVariable("alpha");
  if (e_tmp != NULL) {
    alpha = emlrt_marshallIn(sp, e_tmp, "alpha");
    alpha_dirty = 0U;
  }

  f_tmp = emlrtGetGlobalVariable("gamma");
  if (f_tmp != NULL) {
    b_gamma = emlrt_marshallIn(sp, f_tmp, "gamma");
    gamma_dirty = 0U;
  }

  g_tmp = emlrtGetGlobalVariable("Ln");
  if (g_tmp != NULL) {
    Ln = emlrt_marshallIn(sp, g_tmp, "Ln");
    Ln_dirty = 0U;
  }

  h_tmp = emlrtGetGlobalVariable("Hn");
  if (h_tmp != NULL) {
    Hn = emlrt_marshallIn(sp, h_tmp, "Hn");
    Hn_dirty = 0U;
  }

  i_tmp = emlrtGetGlobalVariable("V");
  if (i_tmp != NULL) {
    e_emlrt_marshallIn(sp, i_tmp, "V", V);
    V_dirty = 0U;
  }

  j_tmp = emlrtGetGlobalVariable("velSig");
  if (j_tmp != NULL) {
    velSig = emlrt_marshallIn(sp, j_tmp, "velSig");
    velSig_dirty = 0U;
  }
}

void MEXGlobalSyncOutFunction(boolean_T skipDirtyCheck)
{
  /* Marshall out global variables */
  if (skipDirtyCheck || (beta_dirty != 0U)) {
    emlrtPutGlobalVariable("beta", emlrt_marshallOut(beta));
  }

  if (skipDirtyCheck || (L_dirty != 0U)) {
    emlrtPutGlobalVariable("L", emlrt_marshallOut(L));
  }

  if (skipDirtyCheck || (H_dirty != 0U)) {
    emlrtPutGlobalVariable("H", emlrt_marshallOut(H));
  }

  if (skipDirtyCheck || (eps_dirty != 0U)) {
    emlrtPutGlobalVariable("eps", emlrt_marshallOut(eps));
  }

  if (skipDirtyCheck || (alpha_dirty != 0U)) {
    emlrtPutGlobalVariable("alpha", emlrt_marshallOut(alpha));
  }

  if (skipDirtyCheck || (gamma_dirty != 0U)) {
    emlrtPutGlobalVariable("gamma", emlrt_marshallOut(b_gamma));
  }

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
}

void emlrt_checkEscapedGlobals(void)
{
  beta_dirty |= beta_dirty >> 1U;
  L_dirty |= L_dirty >> 1U;
  H_dirty |= H_dirty >> 1U;
  eps_dirty |= eps_dirty >> 1U;
  alpha_dirty |= alpha_dirty >> 1U;
  gamma_dirty |= gamma_dirty >> 1U;
  Ln_dirty |= Ln_dirty >> 1U;
  Hn_dirty |= Hn_dirty >> 1U;
  V_dirty |= V_dirty >> 1U;
  velSig_dirty |= velSig_dirty >> 1U;
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
  const mxArray *m28;
  y = NULL;
  m28 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m28);
  return y;
}

void emlrt_synchGlobalsFromML(const emlrtStack *sp)
{
  MEXGlobalSyncInFunction(sp);
  beta_dirty = 0U;
  L_dirty = 0U;
  H_dirty = 0U;
  eps_dirty = 0U;
  alpha_dirty = 0U;
  gamma_dirty = 0U;
  Ln_dirty = 0U;
  Hn_dirty = 0U;
  V_dirty = 0U;
  velSig_dirty = 0U;
}

void emlrt_synchGlobalsToML(const emlrtStack *sp)
{
  (void)sp;
  MEXGlobalSyncOutFunction(false);
}

/* End of code generation (PongEffectRLSpeed_mexutil.c) */
